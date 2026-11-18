// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 10

// operator() @ 14c6e7f80

void __thiscall
`UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined1 auVar1 [16];
  FEdgeConstraint *pFVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  IProjectionTarget *pIVar7;
  char cVar8;
  uint *puVar9;
  longlong lVar10;
  IProjectionTarget *pIVar11;
  uint local_res8 [4];
  TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> local_res18;
  FVertexConstraint local_78;
  FVertexConstraint local_68;
  uint *local_58;
  FEdgeConstraint *local_50;
  FEdgeConstraint local_48;
  
  pIVar11 = (IProjectionTarget *)0x0;
  local_78.bCannotDelete = false;
  local_78.bCanMove = true;
  local_78.FixedSetID = -1;
  local_78.Target = (IProjectionTarget *)0x0;
  local_68.bCannotDelete = false;
  local_68.bCanMove = true;
  local_68.FixedSetID = -1;
  local_68.Target = (IProjectionTarget *)0x0;
  local_48.RefineFlags = NoConstraint;
  local_48.Target = (IProjectionTarget *)0x0;
  local_48.TrackingSetID = -1;
  bVar4 = UE::Geometry::FMeshConstraintsUtil::ConstrainEdgeBoundariesAndSeams
                    (param_1,*(FDynamicMesh3 **)this,**(EEdgeRefineFlags **)((longlong)this + 8),
                     **(EEdgeRefineFlags **)((longlong)this + 0x10),
                     **(EEdgeRefineFlags **)((longlong)this + 0x18),
                     **(EEdgeRefineFlags **)((longlong)this + 0x20),
                     *(bool *)*(undefined8 *)((longlong)this + 0x28),&local_48,&local_78,&local_68);
  if (bVar4) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x30));
    pFVar2 = *(FEdgeConstraint **)
              (*(longlong *)
                (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8) +
              (ulonglong)(param_1 & 0x1ff) * 0x10);
    local_58 = local_res8;
    local_50 = &local_48;
    local_res8[0] = param_1;
    local_res18.Value = pFVar2;
    TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
              (*(TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x38),&local_res18,(bool *)&local_58);
    lVar3 = *(longlong *)((longlong)this + 0x38);
    local_res8[0] = (uint)pFVar2;
    if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
      lVar10 = *(longlong *)(lVar3 + 0x90);
      if (*(longlong *)(lVar3 + 0x90) == 0) {
        lVar10 = lVar3 + 0x88;
      }
      uVar6 = *(uint *)(lVar10 + ((ulonglong)(*(int *)(lVar3 + 0x98) - 1) &
                                 (ulonglong)pFVar2 & 0xffffffff) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)(lVar3 + 0x50));
          if (*puVar9 == local_res8[0]) {
            pIVar7 = (IProjectionTarget *)(puVar9 + 2);
            if (puVar9 == (uint *)0x0) {
              pIVar7 = pIVar11;
            }
            if (pIVar7 != (IProjectionTarget *)0x0) {
              auVar1 = *(undefined1 (*) [16])pIVar7;
              cVar5 = auVar1[0];
              local_78.Target = auVar1._8_8_;
              cVar8 = auVar1[1];
              goto LAB_14c6e80f1;
            }
            break;
          }
          uVar6 = puVar9[6];
        } while (uVar6 != 0xffffffff);
      }
    }
    cVar8 = '\x01';
    cVar5 = '\0';
    local_78.Target = pIVar11;
LAB_14c6e80f1:
    if ((local_78.bCannotDelete != false) || (local_78.bCannotDelete = false, cVar5 != '\0')) {
      local_78.bCannotDelete = true;
    }
    if ((local_78.bCanMove == false) || (local_78.bCanMove = true, cVar8 == '\0')) {
      local_78.bCanMove = false;
    }
    local_58 = local_res8;
    local_50 = (FEdgeConstraint *)&local_78;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar3 + 0x50),
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)&local_res18
               ,(bool *)&local_58);
    lVar3 = *(longlong *)((longlong)this + 0x38);
    if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
      lVar10 = *(longlong *)(lVar3 + 0x90);
      if (*(longlong *)(lVar3 + 0x90) == 0) {
        lVar10 = lVar3 + 0x88;
      }
      uVar6 = *(uint *)(lVar10 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & local_res18.Value._4_4_)
                                 * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)(lVar3 + 0x50));
          if (*puVar9 == local_res18.Value._4_4_) {
            pIVar7 = (IProjectionTarget *)(puVar9 + 2);
            if (puVar9 == (uint *)0x0) {
              pIVar7 = pIVar11;
            }
            if (pIVar7 != (IProjectionTarget *)0x0) {
              auVar1 = *(undefined1 (*) [16])pIVar7;
              cVar5 = auVar1[0];
              pIVar11 = auVar1._8_8_;
              cVar8 = auVar1[1];
              goto LAB_14c6e81af;
            }
            break;
          }
          uVar6 = puVar9[6];
        } while (uVar6 != 0xffffffff);
      }
    }
    cVar8 = '\x01';
    cVar5 = '\0';
LAB_14c6e81af:
    if ((local_68.bCannotDelete != false) || (local_68.bCannotDelete = false, cVar5 != '\0')) {
      local_68.bCannotDelete = true;
    }
    if ((local_68.bCanMove == false) || (local_68.bCanMove = true, cVar8 == '\0')) {
      local_68.bCanMove = false;
    }
    local_58 = local_res8;
    local_res8[0] = local_res18.Value._4_4_;
    local_50 = (FEdgeConstraint *)&local_68;
    local_68.Target = pIVar11;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(lVar3 + 0x50),
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)&local_res18
               ,(bool *)&local_58);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x30));
  }
  return;
}

// operator() @ 14c6e8290

void __thiscall
`UE::Geometry::FMeshConstraintsUtil::ConstrainAllSeams'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> local_res8;
  undefined8 local_res18;
  FEdgeConstraint **local_38;
  undefined8 local_30;
  
  if ((-1 < param_1) &&
     (lVar2 = *(longlong *)this, param_1 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4)
     )) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + lVar1) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (cVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x80))
                          ((longlong *)**(undefined8 **)((longlong)this + 8),param_1), cVar4 != '\0'
       )) {
      uVar3 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 0x1c0) + lVar1) +
               (ulonglong)(param_1 & 0x1ff) * 0x10);
      local_res18 = uVar3;
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      local_38 = &local_res8.Value;
      local_30 = *(undefined8 *)((longlong)this + 0x20);
      local_res8.Value._0_4_ = param_1;
      TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
                (*(TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                   **)((longlong)this + 0x18),&local_res8,(bool *)&local_38);
      local_38 = &local_res8.Value;
      local_30 = *(undefined8 *)((longlong)this + 0x28);
      local_res8.Value._0_4_ = (int)uVar3;
      TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)(*(longlong *)((longlong)this + 0x18) + 0x50),
                 (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
                 &local_res8,(bool *)&local_38);
      local_res8.Value._0_4_ = local_res18._4_4_;
      local_38 = &local_res8.Value;
      local_30 = *(undefined8 *)((longlong)this + 0x28);
      TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)(*(longlong *)((longlong)this + 0x18) + 0x50),
                 (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
                 &local_res8,(bool *)&local_38);
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
  }
  return;
}

// operator() @ 14c6e8400

void __thiscall
`UE::Geometry::FMeshConstraintsUtil::ConstrainSeamsInEdgeROI'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  FVertexConstraint *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FVertexConstraint **ppFVar8;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  FVertexConstraint *local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined8 local_70;
  uint *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  
  plVar2 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = *(uint *)(*plVar2 + (longlong)param_1 * 4);
  pFVar3 = *(FVertexConstraint **)
            (*(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
              (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 0x10);
  local_70 = pFVar3;
  cVar6 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x80))
                    ((longlong *)**(undefined8 **)((longlong)this + 0x10),uVar7);
  if (cVar6 != '\0') {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
    local_68 = local_res10;
    local_60 = *(undefined8 *)((longlong)this + 0x28);
    local_res10[0] = uVar7;
    TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
              (*(TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x20),
               (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_80,
               (bool *)&local_68);
    local_58 = local_res8;
    local_50 = *(undefined8 *)((longlong)this + 0x30);
    local_res8[0] = SUB84(pFVar3,0);
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(*(longlong *)((longlong)this + 0x20) + 0x50),
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
               (local_80 + 4),(bool *)&local_58);
    local_res18[0] = local_70._4_4_;
    local_48 = local_res18;
    local_40 = *(undefined8 *)((longlong)this + 0x30);
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)(*(longlong *)((longlong)this + 0x20) + 0x50),
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)local_78,
               (bool *)&local_48);
                    /* WARNING: Could not recover jumptable at 0x00014c6e8540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
    return;
  }
  local_88 = pFVar3;
  ppFVar8 = &local_88;
  do {
    uVar1 = *(undefined4 *)ppFVar8;
    cVar6 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x90))
                      ((longlong *)**(undefined8 **)((longlong)this + 0x10),uVar1,1);
    if (cVar6 != '\0') {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
      local_38 = local_res20;
      local_30 = *(undefined8 *)((longlong)this + 0x30);
      local_res20[0] = uVar1;
      TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                  *)(*(longlong *)((longlong)this + 0x20) + 0x50),
                 (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
                 (local_78 + 4),(bool *)&local_38);
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
    }
    ppFVar8 = (FVertexConstraint **)((longlong)ppFVar8 + 4);
  } while (ppFVar8 != (FVertexConstraint **)local_80);
  return;
}

// ConstrainAllBoundariesAndSeams @ 14c726610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams
          (FMeshConstraints *param_1,FDynamicMesh3 *param_2,EEdgeRefineFlags param_3,
          EEdgeRefineFlags param_4,EEdgeRefineFlags param_5,bool param_6,bool param_7,bool param_8,
          bool param_9)

{
  uint uVar1;
  EEdgeRefineFlags local_res18 [2];
  EEdgeRefineFlags local_res20 [2];
  undefined1 auStackY_f8 [32];
  <lambda_1> local_b8;
  uint local_b4;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FDynamicMesh3 **local_98;
  FDynamicMesh3 *local_90;
  EEdgeRefineFlags *local_88;
  EEdgeRefineFlags *local_80;
  EEdgeRefineFlags *local_78;
  uint *local_70;
  bool *local_68;
  _RTL_CRITICAL_SECTION *local_60;
  FMeshConstraints *local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b4 = 1;
  uVar1 = 1;
  if (!param_6) {
    uVar1 = 3;
    local_b4 = 3;
  }
  if (!param_8) {
    local_b4 = uVar1 | 4;
  }
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  InitializeCriticalSectionAndSpinCount(&local_50,4000);
  local_88 = local_res18;
  local_80 = local_res20;
  local_78 = &param_5;
  local_70 = &local_b4;
  local_68 = &param_7;
  local_60 = &local_50;
  local_b0.DataPtr = (void **)0x0;
  local_b0.ArrayNum = 0;
  local_a0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams'::__l2::<lambda_1>,void,int>
             ::Call;
  local_98 = &local_90;
  local_90 = param_2;
  local_58 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->EdgeRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_a0,local_b8,param_9 ^ ForceSingleThread,
             &local_b0);
  DeleteCriticalSection(&local_50);
  return;
}

// ConstrainAllSeams @ 14c726730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FMeshConstraintsUtil::ConstrainAllSeams
          (FMeshConstraints *param_1,FDynamicMesh3 *param_2,bool param_3,bool param_4,bool param_5)

{
  undefined1 auStackY_118 [32];
  <lambda_1> local_d8;
  TArrayView<std::nullptr_t,int> local_c8;
  ushort local_b8 [10];
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FDynamicMeshAttributeSet *local_80;
  code *local_78;
  FDynamicMesh3 **local_70;
  FDynamicMesh3 *local_68;
  FDynamicMeshAttributeSet **local_60;
  _RTL_CRITICAL_SECTION *local_58;
  FMeshConstraints *local_50;
  undefined8 *local_48;
  ushort *local_40;
  _RTL_CRITICAL_SECTION local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_80 = (param_2->AttributeSet).Ptr;
  if (local_80 != (FDynamicMeshAttributeSet *)0x0) {
    uStack_a4 = local_88._4_4_;
    local_b8[8] = 0xffff;
    local_b8[9] = 0xffff;
    local_b8[0] = 5;
    if (!param_3) {
      local_b8[0] = 7;
    }
    local_88 = CONCAT44(local_88._4_4_,0xffffffff);
    local_c8._8_8_ = 0;
    local_c8.DataPtr._0_2_ = 0x101;
    local_98 = CONCAT44(local_98._4_4_,(uint)local_b8[0]);
    uStack_90 = 0;
    local_b8[0] = (ushort)local_c8.DataPtr;
    if (!param_4) {
      local_c8.DataPtr._0_2_ = 1;
      local_b8[0] = (ushort)local_c8.DataPtr;
    }
    local_c8.DataPtr = (void **)CONCAT62(0xffffffff0000,local_b8[0]);
    local_b8[1] = 0;
    local_b8[2] = 0xffff;
    local_b8[3] = 0xffff;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    InitializeCriticalSectionAndSpinCount(&local_38,4000);
    local_60 = &local_80;
    local_58 = &local_38;
    local_48 = &local_98;
    local_40 = local_b8;
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConstraintsUtil::ConstrainAllSeams'::__l2::<lambda_1>,void,int>
               ::Call;
    local_70 = &local_68;
    local_c8.DataPtr = (void **)0x0;
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    local_68 = param_2;
    local_50 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->EdgeRefCounts).RefCounts.CurBlockUsed,1,
               (TFunctionRef<void___cdecl(int)> *)&local_78,local_d8,param_5 ^ ForceSingleThread,
               &local_c8);
    DeleteCriticalSection(&local_38);
  }
  return;
}

// ConstrainEdgeBoundariesAndSeams @ 14c7268c0

bool __cdecl
UE::Geometry::FMeshConstraintsUtil::ConstrainEdgeBoundariesAndSeams
          (int param_1,FDynamicMesh3 *param_2,EEdgeRefineFlags param_3,EEdgeRefineFlags param_4,
          EEdgeRefineFlags param_5,EEdgeRefineFlags param_6,bool param_7,FEdgeConstraint *param_8,
          FVertexConstraint *param_9,FVertexConstraint *param_10)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  TDynamicMeshOverlay<float,2> *this;
  TDynamicMeshOverlay<float,3> *this_00;
  int iVar13;
  EEdgeRefineFlags EVar14;
  longlong lVar15;
  FDynamicMeshAttributeSet *this_01;
  EEdgeRefineFlags EVar16;
  undefined2 uStack_4e;
  undefined4 uStack_3c;
  
  EVar14 = param_6 & NoCollapse;
  param_9->bCannotDelete = (bool)(char)0x100;
  param_9->bCanMove = (bool)(char)(0x100 >> 8);
  *(undefined2 *)&param_9->field_0x2 = uStack_4e;
  param_9->FixedSetID = 0xffffffff;
  param_9->Target = (IProjectionTarget *)0x0;
  param_10->bCannotDelete = (bool)(char)0x100;
  param_10->bCanMove = (bool)(char)(0x100 >> 8);
  *(undefined2 *)&param_10->field_0x2 = uStack_4e;
  param_10->FixedSetID = 0xffffffff;
  param_10->Target = (IProjectionTarget *)0x0;
  *(undefined8 *)param_8 = 0xffffffff00000000;
  param_8->Target = (IProjectionTarget *)0x0;
  *(ulonglong *)&param_8->TrackingSetID = CONCAT44(uStack_3c,0xffffffff);
  if ((param_1 < 0) ||
     ((int)((param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->EdgeRefCounts).RefCounts.CurBlockUsed) <= param_1)) {
    return false;
  }
  lVar15 = (ulonglong)((uint)param_1 >> 9) * 8;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + lVar15) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    return false;
  }
  pFVar2 = (param_2->AttributeSet).Ptr;
  this_01 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    this_01 = pFVar2;
  }
  iVar1 = *(int *)(*(longlong *)((param_2->Edges).Blocks.AllocatorInstance.Data + lVar15) + 0xc +
                  (ulonglong)(param_1 & 0x1ff) * 0x10);
  if ((param_2->TriangleGroups).bIsSet == false) {
LAB_14c726a04:
    bVar11 = false;
  }
  else {
    bVar7 = FDynamicMesh3::IsGroupBoundaryEdge(param_2,param_1);
    bVar11 = true;
    if (!bVar7) goto LAB_14c726a04;
  }
  if ((this_01 == (FDynamicMeshAttributeSet *)0x0) ||
     (cVar8 = (**(code **)(this_01->_padding_ + 0xa0))(this_01), cVar8 == '\0')) {
    bVar7 = false;
    if (this_01 != (FDynamicMeshAttributeSet *)0x0) goto LAB_14c726a3c;
LAB_14c726a54:
    bVar6 = false;
  }
  else {
    bVar7 = true;
LAB_14c726a3c:
    cVar8 = (**(code **)(this_01->_padding_ + 0x80))(this_01);
    if (cVar8 == '\0') goto LAB_14c726a54;
    bVar6 = true;
  }
  bVar4 = false;
  bVar5 = true;
  EVar16 = NoConstraint;
  if (iVar1 == -1) {
    EVar16 = param_3;
    if (((param_3 & NoCollapse) == NoConstraint) || ((param_3 & NoFlip) == NoConstraint)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      bVar5 = false;
    }
  }
  if (bVar11) {
    if ((bVar4) ||
       (((param_4 & NoCollapse) != NoConstraint && ((param_4 & NoFlip) != NoConstraint)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar5) &&
       (((param_4 & NoCollapse) == NoConstraint || ((param_4 & NoFlip) == NoConstraint)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    EVar16 = EVar16 | param_4;
  }
  if (bVar7) {
    if ((bVar4) ||
       (((param_5 & NoCollapse) != NoConstraint && ((param_5 & NoFlip) != NoConstraint)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar5) &&
       (((param_5 & NoCollapse) == NoConstraint || ((param_5 & NoFlip) == NoConstraint)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    EVar16 = EVar16 | param_5;
  }
  if (bVar6) {
    if ((bVar4) || (EVar14 != NoConstraint)) {
      bVar4 = true;
    }
    if ((bVar5) && ((param_7 || (EVar14 == NoConstraint)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    EVar16 = EVar16 | param_6;
    if (EVar14 == NoConstraint) {
      for (iVar13 = 0; iVar12 = (**(code **)(this_01->_padding_ + 0xa8))(this_01), iVar13 < iVar12;
          iVar13 = iVar13 + 1) {
        this = (TDynamicMeshOverlay<float,2> *)FDynamicMeshAttributeSet::GetUVLayer(this_01,iVar13);
        bVar9 = TDynamicMeshOverlay<float,2>::IsSeamEndEdge(this,param_1);
        if (bVar9) goto LAB_14c726c30;
      }
      lVar15 = 0;
      for (iVar13 = 0; iVar12 = (**(code **)(this_01->_padding_ + 0xb8))(this_01), iVar13 < iVar12;
          iVar13 = iVar13 + 1) {
        if ((iVar13 < (this_01->NormalLayers).Array.ArrayNum) && (-1 < iVar13)) {
          if ((iVar13 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
          this_00 = *(TDynamicMeshOverlay<float,3> **)
                     ((this_01->NormalLayers).Array.AllocatorInstance.Data + lVar15);
        }
        else {
          this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
        }
        bVar9 = TDynamicMeshOverlay<float,3>::IsSeamEndEdge(this_00,param_1);
        if (bVar9) goto LAB_14c726c30;
        lVar15 = lVar15 + 8;
      }
    }
  }
LAB_14c726c4b:
  if ((((iVar1 == -1) || (bVar11)) || (bVar7)) || (bVar6)) {
    *(ulonglong *)param_8 = CONCAT44(0xffffffff,EVar16);
    param_8->Target = (IProjectionTarget *)0x0;
    *(ulonglong *)&param_8->TrackingSetID = CONCAT44(uStack_3c,0xffffffff);
    if (((param_8->RefineFlags != NoConstraint) || (param_8->Target != (IProjectionTarget *)0x0)) ||
       ((!bVar5 || (bVar4)))) {
      if ((param_9->bCannotDelete != false) || (bVar4)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      param_9->bCannotDelete = bVar11;
      if ((param_9->bCanMove == false) || (!bVar5)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      param_9->bCanMove = bVar11;
      param_9->Target = (IProjectionTarget *)0x0;
      if ((param_10->bCannotDelete != false) || (bVar4)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      param_10->bCannotDelete = bVar11;
      if ((param_10->bCanMove != false) && (bVar5)) {
        param_10->Target = (IProjectionTarget *)0x0;
        param_10->bCanMove = true;
        return true;
      }
      param_10->Target = (IProjectionTarget *)0x0;
      param_10->bCanMove = false;
      return true;
    }
  }
  return false;
LAB_14c726c30:
  EVar16 = EVar16 | NoCollapse;
  goto LAB_14c726c4b;
}

// ConstrainROIBoundariesInEdgeROI @ 14c726d50

void __cdecl
UE::Geometry::FMeshConstraintsUtil::ConstrainROIBoundariesInEdgeROI
          (FMeshConstraints *param_1,FDynamicMesh3 *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,bool param_5,bool param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uStackX_1c;
  undefined3 in_stack_00000031;
  undefined8 local_178;
  undefined8 *puStack_170;
  ushort local_168;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 local_150 [2];
  undefined4 local_148 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  undefined1 local_10c [8];
  undefined1 local_104 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined4 *local_d0;
  bool **local_c8;
  bool *local_b8;
  undefined8 uStack_b0;
  undefined4 *local_a8;
  bool **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_54;
  undefined2 local_4e;
  
  uStack_160 = 0;
  local_158 = 0xffffffff;
  if (param_5) {
    uStack_164 = local_7c;
    local_168 = 5;
  }
  else {
    uStack_164 = local_64;
    local_168 = 7;
    local_6c = local_54;
  }
  uStack_166 = 0;
  local_98 = CONCAT44(uStack_164,(uint)local_168);
  local_88 = CONCAT44(local_6c,0xffffffff);
  uStack_90 = 0;
  puStack_170 = (undefined8 *)0x0;
  if (param_6) {
    local_178 = (bool *)0xffffffff00000101;
  }
  else {
    local_4e = 0;
    local_178 = (bool *)0xffffffff00000001;
  }
  local_178._0_4_ = CONCAT22(local_4e,(undefined2)local_178);
  puVar1 = &(param_3->Elements).field_0x10;
  iStack_138 = 0;
  local_b8 = local_178;
  uStack_b0 = 0;
  iVar14 = *(int *)&(param_3->Elements).field_0x28;
  local_120 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar14 != 0) {
    puVar16 = *(uint **)&(param_3->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14c726e8e;
      uVar13 = puVar16[lVar8 + 1];
    }
    uStack_134 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_134 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_110 = (int)lVar8;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar14 < iStack_124) {
      iStack_124 = iVar14;
    }
  }
LAB_14c726e8e:
  uVar13 = *(uint *)&(param_3->Elements).field_0x28;
  iStack_118 = *(int *)&(param_3->Elements).field_0x8 - *(int *)&(param_3->Elements).field_0x34;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_f8._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_f8.CurrentBitIndex = iStack_124;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_f8._28_4_ = iStack_124;
  TStack_f8.BaseBitIndex = local_120;
  uStack_d8 = CONCAT44(uStack_114,iStack_118);
  local_140 = param_3;
  local_130 = puVar1;
  iStack_11c = iStack_124;
  local_104._4_8_ = param_3;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar14 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_3->Elements).field_0x28;
  if (uVar13 != uVar3) {
    puVar15 = *(undefined1 **)&(param_3->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14c726f91;
      uVar13 = *(uint *)(puVar15 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14c726f91:
  do {
    uVar5 = local_104._4_8_;
    if (*(int *)&((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_104._4_8_)->field_0x8 -
        *(int *)&((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_104._4_8_)->field_0x34 != (int)uStack_d8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&param_5);
    }
    if (((TStack_f8.CurrentBitIndex == uVar13) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)uVar5 == param_3)) {
      return;
    }
    uVar12 = *(uint *)(*(longlong *)
                        (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)uVar5 + (longlong)TStack_f8.CurrentBitIndex * 0xc);
    puVar11 = (undefined8 *)
              (*(longlong *)
                ((param_2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8) +
              (ulonglong)(uVar12 & 0x1ff) * 0x10);
    uVar2 = puVar11[1];
    if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
      FVar4 = (param_4->Hash).SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&param_4->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar4;
      }
      iVar14 = *(int *)((longlong)FVar9 +
                       ((ulonglong)(param_4->HashSize - 1) & uVar2 & 0xffffffff) * 4);
      if (iVar14 != -1) {
        do {
          if (*(int *)(*(longlong *)&param_4->Elements + (longlong)iVar14 * 0xc) == (int)uVar2) {
            bVar7 = iVar14 != -1;
            goto LAB_14c72705f;
          }
          iVar14 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar14 * 0xc);
        } while (iVar14 != -1);
      }
      bVar7 = false;
LAB_14c72705f:
      FVar4 = (param_4->Hash).SecondaryData;
      uStackX_1c = (uint)(uVar2 >> 0x20);
      FVar9 = (ForElementType<FSetElementId>)&param_4->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar4;
      }
      iVar14 = *(int *)((longlong)FVar9 + (ulonglong)(param_4->HashSize - 1U & uStackX_1c) * 4);
      if (iVar14 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_4->Elements + (longlong)iVar14 * 0xc) == uStackX_1c)
          goto LAB_14c7270ac;
          iVar14 = *(int *)(*(longlong *)&param_4->Elements + 4 + (longlong)iVar14 * 0xc);
        } while (iVar14 != -1);
      }
      iVar14 = -1;
LAB_14c7270ac:
      if (bVar7 != (iVar14 != -1)) {
        uVar5 = *puVar11;
        local_178 = &param_6;
        _param_6 = uVar12;
        puStack_170 = &local_98;
        TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
                  ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                    *)param_1,
                   (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_10c,
                   (bool *)&local_178);
        local_d0 = local_150;
        local_150[0] = (undefined4)uVar5;
        local_c8 = &local_b8;
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                  ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                    *)&param_1->Vertices,
                   (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
                   (local_10c + 4),(bool *)&local_d0);
        uStackX_1c = (uint)((ulonglong)uVar5 >> 0x20);
        local_148[0] = uStackX_1c;
        local_a8 = local_148;
        local_a0 = &local_b8;
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                  ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                    *)&param_1->Vertices,
                   (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
                   local_104,(bool *)&local_a8);
      }
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  } while( true );
}

// ConstrainSeamsInEdgeROI @ 14c7271a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FMeshConstraintsUtil::ConstrainSeamsInEdgeROI
          (FMeshConstraints *param_1,FDynamicMesh3 *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5,bool param_6)

{
  undefined1 auStackY_138 [32];
  <lambda_1> local_f8;
  TArrayView<std::nullptr_t,int> local_e8;
  ushort local_d8 [10];
  undefined4 uStack_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  FDynamicMeshAttributeSet *local_a0;
  code *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> **local_90;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  FDynamicMesh3 *local_80;
  FDynamicMeshAttributeSet **local_78;
  _RTL_CRITICAL_SECTION *local_70;
  FMeshConstraints *local_68;
  undefined8 *local_60;
  ushort *local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_a0 = (param_2->AttributeSet).Ptr;
  if (local_a0 != (FDynamicMeshAttributeSet *)0x0) {
    uStack_c4 = local_a8._4_4_;
    local_d8[8] = 0xffff;
    local_d8[9] = 0xffff;
    local_d8[0] = 5;
    if (!param_4) {
      local_d8[0] = 7;
    }
    local_b8 = CONCAT44(local_b8._4_4_,(uint)local_d8[0]);
    local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
    uStack_b0 = 0;
    local_e8._8_8_ = 0;
    local_e8.DataPtr._0_2_ = 0x101;
    local_d8[0] = (ushort)local_e8.DataPtr;
    if (!param_5) {
      local_e8.DataPtr._0_2_ = 1;
      local_d8[0] = (ushort)local_e8.DataPtr;
    }
    local_e8.DataPtr = (void **)CONCAT62(0xffffffff0000,local_d8[0]);
    local_d8[1] = 0;
    local_d8[2] = 0xffff;
    local_d8[3] = 0xffff;
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    InitializeCriticalSectionAndSpinCount(&local_50,4000);
    local_78 = &local_a0;
    local_70 = &local_50;
    local_60 = &local_b8;
    local_58 = local_d8;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConstraintsUtil::ConstrainSeamsInEdgeROI'::__l2::<lambda_1>,void,int>
               ::Call;
    local_90 = &local_88;
    local_e8.DataPtr = (void **)0x0;
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    local_88 = param_3;
    local_80 = param_2;
    local_68 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_98,
               local_f8,param_6 ^ ForceSingleThread,&local_e8);
    DeleteCriticalSection(&local_50);
  }
  return;
}

// SetBoundaryConstraintsWithProjection @ 14c761280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c7620d8) */

void __cdecl
UE::Geometry::FMeshConstraintsUtil::SetBoundaryConstraintsWithProjection
          (FMeshConstraints *param_1,EBoundaryType param_2,FDynamicMesh3 *param_3,double param_4)

{
  int *piVar1;
  FConstraintProjectionData *this;
  double *pdVar2;
  int iVar3;
  FDynamicMeshAttributeSet *pFVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  code *pcVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FDynamicMesh3 *pFVar21;
  longlong *plVar22;
  bool bVar23;
  int iVar24;
  FGroupTopology *pFVar25;
  TReferenceControllerBase<1> *pTVar26;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar27;
  ulonglong uVar28;
  byte bVar29;
  uint *puVar30;
  ulonglong *puVar31;
  uint uVar32;
  undefined1 *puVar33;
  ulonglong uVar34;
  TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *pTVar35;
  uint *puVar36;
  uint uVar37;
  ulonglong *puVar38;
  uint uVar39;
  int iVar40;
  bool *pbVar41;
  uint **ppuVar42;
  uint uVar43;
  longlong lVar44;
  TReferenceControllerBase<1> *pTVar45;
  uint uVar46;
  TReferenceControllerBase<1> *pTVar47;
  longlong lVar48;
  uint uVar49;
  double dVar50;
  double dVar51;
  undefined1 unaff_XMM9 [16];
  undefined1 auStackY_3a8 [32];
  FGroupTopology *local_360;
  undefined1 local_358 [4];
  uint local_354;
  uint local_350;
  int local_34c;
  int local_348;
  uint local_344;
  TArray<int,TSizedDefaultAllocator<32>_> *local_340;
  TReferenceControllerBase<1> *local_338;
  int local_330;
  int local_32c;
  uint local_328 [2];
  uint local_320 [2];
  uint local_318 [2];
  uint local_310 [2];
  TReferenceControllerBase<1> *local_308;
  ulonglong local_300;
  longlong local_2f8;
  undefined2 local_2f0 [2];
  undefined4 local_2ec;
  TReferenceControllerBase<1> *local_2e8;
  undefined2 local_2e0 [2];
  undefined4 local_2dc;
  undefined8 local_2d8;
  FDynamicMesh3 *local_2d0;
  ulonglong local_2c8;
  TReferenceControllerBase<1> *pTStack_2c0;
  ulonglong local_2b8;
  TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> local_2b0;
  TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> local_2a0;
  longlong local_290;
  undefined1 local_288 [16];
  longlong *local_278;
  uint uStack_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  uint local_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  uint *local_200;
  undefined4 *local_1f8;
  uint *local_1f0;
  undefined2 *local_1e8;
  uint *local_1e0;
  undefined2 *local_1d8;
  uint *local_1d0;
  ulonglong *local_1c8;
  undefined4 local_1c0 [2];
  TReferenceControllerBase<1> *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  TReferenceControllerBase<1> *pTStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined4 local_134;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_360 = (FGroupTopology *)0x0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e0 = 0;
  local_2d0 = param_3;
  if (param_2 == Mesh) {
    pFVar25 = ::operator_new(0x160);
    local_360 = (FGroupTopology *)0x0;
    if (pFVar25 != (FGroupTopology *)0x0) {
      FGroupTopology::FGroupTopology(pFVar25,param_3,true);
      pFVar25->_padding_ = (longlong)&FMeshBoundaryTopology::_vftable_;
      local_360 = pFVar25;
    }
  }
  else if (param_2 == Group) {
    pFVar25 = ::operator_new(0x160);
    local_360 = (FGroupTopology *)0x0;
    if (pFVar25 != (FGroupTopology *)0x0) {
      local_360 = FGroupTopology::FGroupTopology(pFVar25,param_3,true);
    }
  }
  else if (param_2 == MaterialID) {
    pFVar4 = (param_3->AttributeSet).Ptr;
    if ((pFVar4 == (FDynamicMeshAttributeSet *)0x0) ||
       (pTVar5 = (pFVar4->MaterialIDAttrib).Ptr,
       pTVar5 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) goto LAB_14c76211d;
    pFVar25 = ::operator_new(0x160);
    local_360 = (FGroupTopology *)0x0;
    if (pFVar25 != (FGroupTopology *)0x0) {
      local_360 = FGroupTopology::FGroupTopology(pFVar25,param_3,pTVar5,true);
    }
  }
  iVar40 = (local_360->Edges).ArrayNum;
  lVar44 = (longlong)iVar40;
  piVar1 = &(param_1->ProjectionData).ProjectionCurves.ArrayNum;
  iVar3 = *piVar1;
  this = &param_1->ProjectionData;
  uVar39 = iVar40 + iVar3;
  if (iVar3 < (int)uVar39) {
    iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar40,(ForAnyElementType *)this,piVar1,
                        &(param_1->ProjectionData).ProjectionCurves.ArrayMax);
    memset((this->ProjectionCurves).AllocatorInstance.Data + (longlong)iVar24 * 0x10,0,lVar44 << 4);
  }
  else {
    if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
    }
    if ((int)uVar39 < iVar3) {
      uVar46 = iVar3 - uVar39;
      if (((int)(uVar46 | uVar39) < 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar23)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar46 != 0) {
        TArray<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->ProjectionCurves,uVar39,uVar46);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,
                   (param_1->ProjectionData).ProjectionCurves.ArrayNum,
                   &(param_1->ProjectionData).ProjectionCurves.ArrayMax);
      }
    }
  }
  dVar20 = __real_404ca5dc1a63c1f8;
  dVar19 = __real_bff0000000000000;
  uVar46 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar39 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar18 = __real_3e45798ee0000000;
  dVar17 = __real_3ff0000000000000;
  local_344 = 0;
  local_290 = lVar44;
  if (0 < iVar40) {
    local_2a0.Value = (FVertexConstraint *)(longlong)iVar3;
    local_2f8 = 0;
    do {
      lVar44 = local_2f8;
      uVar37 = local_344;
      pTVar45 = (TReferenceControllerBase<1> *)0x0;
      uVar43 = 0;
      if ((int)local_344 < (local_360->Edges).ArrayNum) {
        uVar43 = ~local_344 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (local_360->Edges).AllocatorInstance.Data;
      pTVar26 = ::operator_new(0x28);
      if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
        local_338 = (TReferenceControllerBase<1> *)0x0;
        pTVar47 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_308 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar26->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFMeshConstraintCurve_Geometry_UE___00_SharedPointerInternals__6B_
        ;
        pTVar26->SharedReferenceCount = (atomic<int>)0x1;
        pTVar26->WeakReferenceCount = (atomic<int>)0x1;
        pTVar26[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar26[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar47 = pTVar26 + 1;
        pTVar26[2]._padding_ = 0;
        pTVar26[1]._padding_ = (longlong)&___7FMeshConstraintCurve_Geometry_UE__6B_;
        local_338 = pTVar26;
        local_308 = pTVar47;
        if ((pTVar47 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar23)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
        pTVar45 = pTVar26;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
      uVar32 = iVar3 + uVar37;
      pbVar41 = &(local_2a0.Value)->bCannotDelete + local_2f8;
      uVar43 = 0;
      if ((int)uVar32 < (param_1->ProjectionData).ProjectionCurves.ArrayNum) {
        uVar43 = ~uVar32 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = (param_1->ProjectionData).ProjectionCurves.AllocatorInstance.Data;
      if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1a8 = *(undefined8 *)(pFVar7 + (longlong)pbVar41 * 0x10);
      pTStack_1a0 = *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)pbVar41 * 0x10 + 8);
      *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)pbVar41 * 0x10) = pTVar47;
      *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)pbVar41 * 0x10 + 8) = pTVar45;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1a0);
      iVar40 = *(int *)(pFVar6 + lVar44 * 0x50 + 0x48);
      local_34c = iVar40;
      if (iVar40 != -1) {
        local_330 = FGroupTopology::GetCornerVertexID(local_360,iVar40);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,
                   (int *)((longlong)&local_2b0.Key + 4),(bool *)&local_330);
        local_32c = FGroupTopology::GetCornerVertexID
                              (local_360,*(int *)(pFVar6 + lVar44 * 0x50 + 0x4c));
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,
                   (int *)&local_2b0.Value,(bool *)&local_32c);
      }
      if ((pTVar47 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar23)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FEdgeSpan::GetPolyline
                ((FEdgeSpan *)(pFVar6 + lVar44 * 0x50 + 8),
                 (TPolyline<double,3> *)&pTVar47->SharedReferenceCount);
      pTVar27 = FGroupTopology::GetGroupEdgeVertices(local_360,uVar37);
      uVar37 = 0;
      local_350 = pTVar27->ArrayNum;
      uVar28 = (ulonglong)(int)local_350;
      local_348 = local_350 - 1;
      local_340 = pTVar27;
      if (0 < local_348) {
        lVar44 = -4;
        iVar24 = local_350 - 1;
        uVar34 = uVar28;
        local_300 = uVar28;
        do {
          if (uVar37 == 0) {
            if (iVar40 == -1) {
              uVar43 = (int)uVar28 - 2;
              lVar48 = uVar34 * 4 + -8;
              goto LAB_14c761808;
            }
          }
          else {
            uVar43 = uVar37 - 1;
            lVar48 = lVar44;
LAB_14c761808:
            uVar32 = 0;
            if ((int)uVar37 < pTVar27->ArrayNum) {
              uVar32 = ~uVar37 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar32 = *(uint *)((pTVar27->AllocatorInstance).Data + lVar44 + 4);
            lVar8 = *(longlong *)
                     ((local_2d0->Vertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar32 >> 9) * 8);
            pdVar2 = (double *)(lVar8 + (ulonglong)(uVar32 & 0x1ff) * 0x18);
            local_218 = *pdVar2;
            dStack_210 = pdVar2[1];
            local_208 = *(double *)(lVar8 + 0x10 + (ulonglong)(uVar32 & 0x1ff) * 0x18);
            uVar49 = 0;
            if ((int)uVar43 < local_340->ArrayNum) {
              uVar49 = ~uVar43 >> 0x1f;
            }
            local_354 = uVar32;
            if ((uVar49 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar21 = local_2d0;
            pTVar27 = local_340;
            uVar43 = *(uint *)((local_340->AllocatorInstance).Data + lVar48);
            uVar28 = (ulonglong)(uVar43 & 0x1ff);
            lVar48 = *(longlong *)
                      ((local_2d0->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar43 >> 9) * 8);
            pdVar2 = (double *)(lVar48 + uVar28 * 0x18);
            local_198 = *pdVar2;
            dStack_190 = pdVar2[1];
            local_188 = *(double *)(lVar48 + 0x10 + uVar28 * 0x18);
            dVar14 = local_218 - local_198;
            dVar16 = local_208 - local_188;
            uVar43 = 0;
            if ((int)(uVar37 + 1) < local_340->ArrayNum) {
              uVar43 = ~(uVar37 + 1) >> 0x1f;
            }
            dVar15 = dStack_210 - dStack_190;
            if ((uVar43 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar6 = (pFVar21->Vertices).Blocks.AllocatorInstance.Data;
            uVar43 = *(uint *)((pTVar27->AllocatorInstance).Data + lVar44 + 8);
            uVar28 = (ulonglong)(uVar43 & 0x1ff);
            lVar48 = *(longlong *)(pFVar6 + (ulonglong)(uVar43 >> 9) * 8);
            pdVar2 = (double *)(lVar48 + uVar28 * 0x18);
            local_180 = *pdVar2;
            dStack_178 = pdVar2[1];
            local_170 = *(double *)(lVar48 + 0x10 + uVar28 * 0x18);
            lVar48 = *(longlong *)(pFVar6 + (ulonglong)(uVar32 >> 9) * 8);
            pdVar2 = (double *)(lVar48 + (ulonglong)(uVar32 & 0x1ff) * 0x18);
            local_168 = *pdVar2;
            dStack_160 = pdVar2[1];
            local_158 = *(double *)(lVar48 + 0x10 + (ulonglong)(uVar32 & 0x1ff) * 0x18);
            dVar51 = local_180 - local_168;
            dVar50 = local_170 - local_158;
            dVar13 = dStack_178 - dStack_160;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = dVar14 * dVar14 + dVar15 * dVar15 + dVar16 * dVar16;
            unaff_XMM9 = sqrtpd(unaff_XMM9,auVar12);
            if ((unaff_XMM9._0_8_ <= dVar18) ||
               (dVar11 = SQRT(dVar51 * dVar51 + dVar13 * dVar13 + dVar50 * dVar50), dVar11 <= dVar18
               )) {
LAB_14c761ae2:
              pTVar47 = local_308;
              local_2e8 = local_308;
              local_2f0[0] = 0x100;
              local_2ec = 0xffffffff;
              local_328[0] = uVar32;
              if (*(int *)&(param_1->Vertices).field_0x8 != *(int *)&(param_1->Vertices).field_0x34)
              {
                puVar9 = *(undefined1 **)&(param_1->Vertices).field_0x40;
                puVar33 = &(param_1->Vertices).field_0x38;
                if (puVar9 != (undefined1 *)0x0) {
                  puVar33 = puVar9;
                }
                uVar43 = *(uint *)(puVar33 +
                                  (ulonglong)(*(int *)&(param_1->Vertices).field_0x48 - 1U & uVar32)
                                  * 4);
                if (uVar43 != 0xffffffff) {
                  do {
                    puVar30 = (uint *)((longlong)(int)uVar43 * 0x20 +
                                      *(longlong *)&param_1->Vertices);
                    if (*puVar30 == uVar32) {
                      puVar36 = puVar30 + 2;
                      if (puVar30 == (uint *)0x0) {
                        puVar36 = (uint *)0x0;
                      }
                      if (puVar36 != (uint *)0x0) {
                        *(bool *)puVar36 = (char)*puVar36 != '\0';
                        if (*(char *)((longlong)puVar36 + 1) == '\0') {
                          *(char *)((longlong)puVar36 + 1) = '\0';
                          *(TReferenceControllerBase<1> **)(puVar36 + 2) = local_308;
                        }
                        else {
                          *(char *)((longlong)puVar36 + 1) = '\x01';
                          *(TReferenceControllerBase<1> **)(puVar36 + 2) = local_308;
                        }
                        goto LAB_14c761b7d;
                      }
                      break;
                    }
                    uVar43 = puVar30[6];
                  } while (uVar43 != 0xffffffff);
                }
              }
              local_1e0 = local_328;
              local_1d8 = local_2f0;
              TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                        ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                          *)&param_1->Vertices,&local_2a0,(bool *)&local_1e0);
            }
            else {
              dVar14 = (dVar14 * dVar51 + dVar15 * dVar13 + dVar16 * dVar50) /
                       (dVar11 * unaff_XMM9._0_8_);
              dVar16 = dVar19;
              if ((dVar19 <= dVar14) && (dVar16 = dVar14, dVar17 <= dVar14)) {
                dVar16 = dVar17;
              }
              dVar14 = acos(dVar16);
              uVar43 = SUB84(dVar14 * dVar20,0) & uVar39;
              uVar49 = (uint)((ulonglong)(dVar14 * dVar20) >> 0x20) & uVar46;
              if ((double)CONCAT44(uVar49,uVar43) < param_4 ||
                  (double)CONCAT44(uVar49,uVar43) == param_4) goto LAB_14c761ae2;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,
                         (int *)((longlong)&local_2b0.Value + 4),(bool *)&local_354);
              pTVar47 = local_308;
            }
LAB_14c761b7d:
            uVar28 = (ulonglong)local_350;
            uVar34 = local_300;
            iVar40 = local_34c;
            iVar24 = local_348;
          }
          uVar37 = uVar37 + 1;
          lVar44 = lVar44 + 4;
        } while ((int)uVar37 < iVar24);
      }
      uVar37 = local_344;
      pTVar27 = FGroupTopology::GetGroupEdgeEdges(local_360,local_344);
      uVar43 = 0;
      iVar40 = pTVar27->ArrayNum;
      if (0 < iVar40) {
        puVar38 = (ulonglong *)0x0;
        do {
          uVar32 = 0;
          if ((int)uVar43 < iVar40) {
            uVar32 = ~uVar43 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar32 = *(uint *)((longlong)puVar38 + (longlong)(pTVar27->AllocatorInstance).Data);
          local_2c8 = local_2c8 & 0xffffffff00000000;
          pTStack_2c0 = (TReferenceControllerBase<1> *)0x0;
          local_2b8 = CONCAT44(local_2b8._4_4_,0xffffffff);
          if (*(int *)&(param_1->Edges).field_0x8 != *(int *)&(param_1->Edges).field_0x34) {
            puVar9 = *(undefined1 **)&(param_1->Edges).field_0x40;
            puVar33 = &(param_1->Edges).field_0x38;
            if (puVar9 != (undefined1 *)0x0) {
              puVar33 = puVar9;
            }
            iVar40 = *(int *)(puVar33 +
                             (ulonglong)(*(int *)&(param_1->Edges).field_0x48 - 1U & uVar32) * 4);
            if (iVar40 != -1) {
              do {
                lVar44 = *(longlong *)&param_1->Edges + (longlong)iVar40 * 0x28;
                if (*(uint *)(*(longlong *)&param_1->Edges + (longlong)iVar40 * 0x28) == uVar32) {
                  puVar31 = (ulonglong *)(lVar44 + 8);
                  if (lVar44 == 0) {
                    puVar31 = (ulonglong *)0x0;
                  }
                  if (puVar31 != (ulonglong *)0x0) {
                    local_2c8 = *puVar31;
                    local_1d0 = local_320;
                    ppuVar42 = &local_1d0;
                    local_1c8 = &local_2c8;
                    local_2b8 = puVar31[2];
                    pTVar35 = (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *
                              )local_288;
                    local_320[0] = uVar32;
                    pTStack_2c0 = pTVar47;
                    goto LAB_14c761cbb;
                  }
                  break;
                }
                iVar40 = *(int *)(lVar44 + 0x20);
              } while (iVar40 != -1);
            }
          }
          local_200 = local_318;
          ppuVar42 = &local_200;
          local_1f8 = local_1c0;
          local_1c0[0] = 0;
          pTVar35 = &local_2b0;
          local_1b0 = 0xffffffff;
          local_318[0] = uVar32;
          local_1b8 = pTVar47;
LAB_14c761cbb:
          TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
                    ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                      *)param_1,pTVar35,(bool *)ppuVar42);
          iVar40 = pTVar27->ArrayNum;
          uVar43 = uVar43 + 1;
          puVar38 = (ulonglong *)((longlong)puVar38 + 4);
        } while ((int)uVar43 < iVar40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_338)
      ;
      local_2f8 = local_2f8 + 1;
      local_344 = uVar37 + 1;
    } while (local_2f8 < local_290);
  }
  uVar39 = local_100;
  uStack_270 = 0;
  uStack_26c = 1;
  local_258 = 0;
  uStack_25c = uStack_270;
  if (local_100 != 0) {
    puVar30 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar30 = local_108;
    }
    uVar46 = *puVar30;
    local_258 = 0;
    uStack_270 = 0;
    while (uVar46 == 0) {
      lVar44 = (longlong)(int)uStack_270;
      local_258 = local_258 + 0x20;
      uStack_270 = uStack_270 + 1;
      uStack_25c = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_270)
      goto LAB_14c761df0;
      uVar46 = puVar30[lVar44 + 1];
    }
    uStack_26c = -uVar46 & uVar46;
    uVar28 = (ulonglong)uStack_26c * 2 + 1;
    lVar44 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    local_288._4_4_ = (undefined4)lVar44;
    uStack_25c = local_288._4_4_ + -1 + local_258;
    if ((int)local_100 < (int)uStack_25c) {
      uStack_25c = local_100;
    }
  }
LAB_14c761df0:
  local_278 = (longlong *)local_128;
  uStack_254 = local_134;
  local_268 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  iStack_250 = local_128._8_4_ - local_f4;
  uVar46 = local_100 & 0xffffffe0;
  uStack_260 = 0xffffffff;
  TStack_240.CurrentBitIndex = uStack_25c;
  TStack_240.UnvisitedBitMask = 0xffffffff;
  TStack_240._padding_ = CONCAT44(uStack_26c,uStack_270);
  iVar40 = (int)local_100 >> 5;
  TStack_240._28_4_ = local_134;
  TStack_240.BaseBitIndex = local_258;
  uStack_220 = CONCAT44(uStack_24c,iStack_250);
  bVar29 = (byte)local_100;
  local_248 = local_278;
  TStack_240.Array = local_268;
  if (((int)local_100 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar23)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar39 != local_100) {
    puVar30 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar30 = local_108;
    }
    uVar39 = -1 << (bVar29 & 0x1f) & puVar30[iVar40];
    while (uVar39 == 0) {
      lVar44 = (longlong)iVar40;
      uVar46 = uVar46 + 0x20;
      iVar40 = iVar40 + 1;
      uVar39 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar40)
      goto LAB_14c761f0d;
      uVar39 = puVar30[lVar44 + 1];
    }
    uVar28 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
    lVar44 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    uVar39 = (int)lVar44 + -1 + uVar46;
    if ((int)local_100 < (int)uVar39) {
      uVar39 = local_100;
    }
  }
LAB_14c761f0d:
  while( true ) {
    plVar22 = local_248;
    if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_358);
    }
    if (((TStack_240.CurrentBitIndex == uVar39) &&
        (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar22 == (longlong *)local_128)) break;
    local_2e0[0] = 1;
    local_2dc = 0xffffffff;
    local_2d8 = 0;
    local_310[0] = *(uint *)(*plVar22 + (longlong)TStack_240.CurrentBitIndex * 0xc);
    if (*(int *)&(param_1->Vertices).field_0x8 != *(int *)&(param_1->Vertices).field_0x34) {
      puVar9 = *(undefined1 **)&(param_1->Vertices).field_0x40;
      puVar33 = &(param_1->Vertices).field_0x38;
      if (puVar9 != (undefined1 *)0x0) {
        puVar33 = puVar9;
      }
      uVar46 = *(uint *)(puVar33 +
                        (ulonglong)(*(int *)&(param_1->Vertices).field_0x48 - 1U & local_310[0]) * 4
                        );
      if (uVar46 != 0xffffffff) {
        do {
          puVar30 = (uint *)((longlong)(int)uVar46 * 0x20 + *(longlong *)&param_1->Vertices);
          if (*puVar30 == local_310[0]) {
            puVar36 = puVar30 + 2;
            if (puVar30 == (uint *)0x0) {
              puVar36 = (uint *)0x0;
            }
            if (puVar36 != (uint *)0x0) {
              *(undefined1 *)puVar36 = 1;
              *(undefined1 *)((longlong)puVar36 + 1) = 0;
              puVar36[2] = 0;
              puVar36[3] = 0;
              goto LAB_14c761fea;
            }
            break;
          }
          uVar46 = puVar30[6];
        } while (uVar46 != 0xffffffff);
      }
    }
    local_1f0 = local_310;
    local_1e8 = local_2e0;
    TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
              ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                *)&param_1->Vertices,
               (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
               (local_288 + 8),(bool *)&local_1f0);
LAB_14c761fea:
    TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
  }
  if (local_360 != (FGroupTopology *)0x0) {
    (**(code **)local_360->_padding_)(local_360,1);
  }
LAB_14c76211d:
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  return;
}

// FullyConstrainEdges<UE::Geometry::FRefCountVector::FilteredEnumerable> @ 14c795df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FMeshConstraintsUtil::
FullyConstrainEdges<UE::Geometry::FRefCountVector::FilteredEnumerable>
          (FMeshConstraints *param_1,FDynamicMesh3 *param_2,FilteredEnumerable *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_188 [32];
  uint local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [8];
  TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> local_138;
  uint *local_128;
  undefined4 *local_120;
  uint *local_118;
  IndexIterator *local_110;
  uint *local_108;
  IndexIterator *local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [48];
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  FRefCountVector::FilteredEnumerable::begin
            (param_3,(FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_d8)
  ;
  local_160 = (param_3->enumerable).Vector;
  local_148._4_4_ = (local_160->RefCounts).CurBlock * 0x200 + (local_160->RefCounts).CurBlockUsed;
  local_148._0_4_ = local_148._4_4_;
  local_158._4_4_ = local_148._4_4_;
  local_158._0_4_ = local_148._4_4_;
  local_150 = local_160;
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
            ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_88,
             (IndexIterator *)&local_160,(IndexIterator *)&local_150,&param_3->FilterFunc);
  if ((int)local_d8._8_8_ != local_88._8_4_) {
    do {
      uVar7 = (uint)local_d8._8_8_;
      uVar6 = local_d8._8_8_ & 0xffffffff;
      if (((-1 < (int)uVar7) &&
          ((int)uVar7 <
           (int)((param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                (param_2->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((param_2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               ((local_d8._8_8_ & 0xffffffff) >> 9) * 8) +
                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        local_128 = local_168;
        local_120 = local_f8;
        local_f8[0] = 7;
        local_f0 = 0;
        local_e8 = 0xffffffff;
        local_168[0] = uVar7;
        TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
                  ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                    *)param_1,
                   (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_140,
                   (bool *)&local_128);
        local_160._0_2_ = 1;
        local_160 = (FRefCountVector *)CONCAT44(0xffffffff,(undefined4)local_160);
        local_158 = 0;
        local_138.Value =
             *(FVertexConstraint **)
              (*(longlong *)((param_2->Edges).Blocks.AllocatorInstance.Data + (uVar6 >> 9) * 8) +
              (ulonglong)(uVar7 & 0x1ff) * 0x10);
        local_168[0] = (uint)local_138.Value;
        local_118 = local_168;
        local_110 = (IndexIterator *)&local_160;
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                  ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                    *)&param_1->Vertices,
                   (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
                   (local_140 + 4),(bool *)&local_118);
        local_168[0] = local_138.Value._4_4_;
        local_108 = local_168;
        local_150._0_2_ = 1;
        local_100 = (IndexIterator *)&local_150;
        local_150 = (FRefCountVector *)CONCAT44(0xffffffff,(undefined4)local_150);
        local_148 = 0;
        TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                  ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                    *)&param_1->Vertices,&local_138,(bool *)&local_108);
      }
      do {
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_d8);
        if ((uint)local_d8._8_8_ == local_d8._24_4_) break;
        local_168[0] = (uint)local_d8._8_8_;
        Core::Private::Function::CheckCallable((void *)local_d8._32_8_);
        uVar1 = local_d8._32_8_;
        plVar4 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar4 = local_90;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        cVar2 = (*(code *)uVar1)(uVar3,local_168);
      } while (cVar2 == '\0');
    } while ((int)local_d8._8_8_ != local_88._8_4_);
  }
  if (local_88._32_8_ != 0) {
    plVar4 = (longlong *)(local_88 + 0x30);
    if ((longlong *)local_88._72_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_88._72_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((code *)local_d8._32_8_ != (code *)0x0) {
    plVar4 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar4 = local_90;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&param_3->FilterFunc != 0) {
    plVar4 = *(longlong **)&(param_3->FilterFunc).field_0x28;
    plVar5 = (longlong *)&(param_3->FilterFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

