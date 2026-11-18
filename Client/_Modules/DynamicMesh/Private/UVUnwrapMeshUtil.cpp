// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 20

// operator()<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c85f840

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_1>::
operator()<TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  TDynamicMeshOverlay<float,2> *this_00;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  float local_res10;
  undefined4 local_res14;
  FScriptContainerElement *local_res18;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  local_res18 = pFVar8 + (longlong)iVar1 * 4;
LAB_14c85f878:
  do {
    pFVar5 = local_res18;
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar5) {
      UE::Geometry::FRefCountVector::RebuildFreeList
                ((FRefCountVector *)(*(longlong *)((longlong)this + 8) + 8));
      return;
    }
    uVar2 = *(uint *)pFVar8;
    lVar3 = *(longlong *)this;
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc))) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8) +
                             (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
        this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
        uVar9 = (ulonglong)((uVar2 & 0x7fffffff) >> 8);
        uVar11 = (ulonglong)(uVar2 * 2 & 0x1ff);
        uVar10 = (ulonglong)((uVar2 & 0x7fffffff) >> 8);
        uVar7 = (ulonglong)(uVar2 * 2 + 1 & 0x1ff);
        local_res10 = *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar9 * 8) + uVar11 * 4
                                );
        local_res14 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar10 * 8) + uVar7 * 4);
        if (((int)uVar2 <
             (int)((this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->ElementsRefCounts).RefCounts.CurBlockUsed)) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar2 >> 9) * 8) +
                               (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          pFVar8 = pFVar8 + 4;
          *(float *)(*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + uVar9 * 8) +
                    uVar11 * 4) = local_res10;
          *(undefined4 *)
           (*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + uVar10 * 8) +
           uVar7 * 4) = local_res14;
        }
        else {
          UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement(this_00,uVar2,&local_res10,true)
          ;
          pFVar8 = pFVar8 + 4;
        }
        goto LAB_14c85f878;
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5588047018133029279>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                       ,0x19f,"OverlayIn.IsElement(ElementID)");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = pFVar8 + 4;
  } while( true );
}

// operator()<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c85fa30

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_1>::
operator()<TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  TDynamicMeshOverlay<float,2> *this_00;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  float local_res10;
  undefined4 local_res14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar3 * 4;
LAB_14c85fa61:
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar1) {
      UE::Geometry::FRefCountVector::RebuildFreeList
                ((FRefCountVector *)(*(longlong *)((longlong)this + 8) + 8));
      return;
    }
    uVar4 = *(uint *)pFVar10;
    lVar5 = *(longlong *)this;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24)))
    {
      uVar8 = (ulonglong)(uVar4 >> 9);
      uVar9 = (ulonglong)(uVar4 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + uVar8 * 8) + uVar9 * 2) -
                  1U) < 0xfffe) {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar8 * 8);
        puVar2 = (undefined4 *)(lVar5 + uVar9 * 0x18);
        local_58 = *puVar2;
        uStack_54 = puVar2[1];
        uStack_50 = puVar2[2];
        uStack_4c = puVar2[3];
        local_48 = *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18);
        (**(code **)((longlong)this + 0x10))
                  (&local_res10,*(undefined8 *)((longlong)this + 0x18),&local_58);
        this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
        if (((int)uVar4 <
             (int)((this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->ElementsRefCounts).RefCounts.CurBlockUsed)) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + uVar8 * 8) + uVar9 * 2) - 1U) < 0xfffe)) {
          *(float *)(*(longlong *)
                      ((this_00->Elements).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar4 * 2 & 0x1ff) * 4) = local_res10;
          pFVar10 = pFVar10 + 4;
          *(undefined4 *)
           (*(longlong *)
             ((this_00->Elements).Blocks.AllocatorInstance.Data +
             (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4) =
               local_res14;
        }
        else {
          UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement(this_00,uVar4,&local_res10,true)
          ;
          pFVar10 = pFVar10 + 4;
        }
        goto LAB_14c85fa61;
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5588047018133029172>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                       ,0x134,"UnwrapMeshIn.IsVertex(Vid)");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = pFVar10 + 4;
  } while( true );
}

// operator()<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c85fc30

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
operator()<TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  longlong lVar5;
  FDynamicMesh3 *this_01;
  TDynamicMeshOverlay<float,2> *this_02;
  code *pcVar6;
  undefined8 uVar7;
  short sVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res20;
  float local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  FScriptContainerElement *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TVector<double>_u_0 local_b0;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  TVector2<float>_u_0 local_80;
  undefined2 local_78;
  undefined1 local_76;
  double local_70;
  double dStack_68;
  double local_60;
  
  local_res10 = param_1;
  (**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_res20 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_res20;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar13 + uVar9 * 4;
  local_e8 = pFVar11;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar11) break;
    uVar4 = *(uint *)pFVar13;
    lVar5 = *(longlong *)this;
    if ((((int)uVar4 < 0) || (*(int *)(lVar5 + 8) * 0x200 + *(int *)(lVar5 + 0xc) <= (int)uVar4)) ||
       (uVar9 = (ulonglong)(uVar4 >> 9),
       0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 8) +
                                   (ulonglong)(uVar4 & 0x1ff) * 2) - 1U))) {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5588047018133029039>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                          ,0xaf,"UVOverlayIn.IsElement(ElementID)");
      if (bVar14) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      this_01 = *(FDynamicMesh3 **)((longlong)this + 8);
      uVar12 = (ulonglong)((uVar4 & 0x7fffffff) >> 8);
      local_e0 = (ulonglong)(uVar4 * 2 & 0x1ff);
      local_f8 = *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + uVar12 * 8) + local_e0 * 4);
      local_d8 = (ulonglong)((uVar4 & 0x7fffffff) >> 8);
      local_d0 = (ulonglong)(uVar4 * 2 + 1 & 0x1ff);
      local_f4 = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar5 + 0x48) + local_d8 * 8) + local_d0 * 4);
      if (((int)uVar4 <
           (int)((this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this_01->VertexRefCounts).RefCounts.CurBlockUsed)) &&
         (uVar10 = (ulonglong)(uVar4 & 0x1ff),
         (ushort)(*(short *)(*(longlong *)
                              ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              uVar9 * 8) + uVar10 * 2) - 1U) < 0xfffe)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
        uVar10 = (ulonglong)(uVar4 & 0x1ff);
      }
      local_f0 = uVar12;
      if (bVar14) {
        (**(code **)((longlong)this + 0x10))(&local_c8);
        sVar8 = _dclass((int)local_c8);
        if (((sVar8 < 1) && (sVar8 = _dclass((int)uStack_c0), uVar7 = local_b8, sVar8 < 1)) &&
           (sVar8 = _dclass((int)local_b8), sVar8 < 1)) {
          lVar5 = *(longlong *)((this_01->Vertices).Blocks.AllocatorInstance.Data + uVar9 * 8);
          puVar2 = (undefined8 *)(lVar5 + uVar10 * 0x18);
          *puVar2 = local_c8;
          puVar2[1] = uStack_c0;
          *(undefined8 *)(lVar5 + 0x10 + uVar10 * 0x18) = uVar7;
          uVar12 = local_f0;
          if ((this_01->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(this_01->ChangeStampShape).Mutex;
            LOCK();
            bVar14 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar14) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar14) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(this_01->ChangeStampShape).Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar3 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            uVar12 = local_f0;
            if (((byte)aVar3 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
              uVar12 = local_f0;
            }
          }
        }
      }
      else {
        (**(code **)((longlong)this + 0x10))
                  (&local_70,*(undefined8 *)((longlong)this + 0x18),&local_f8);
        local_90 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_b0._s_0.X = local_70;
        local_b0._s_0.Y = dStack_68;
        local_84 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_98 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_8c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_b0._s_0.Z = local_60;
        local_80 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_78 = 0;
        local_76 = 0;
        UE::Geometry::FDynamicMesh3::InsertVertex(this_01,uVar4,(FVertexInfo *)&local_b0._s_0,true);
      }
      this_02 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 0x20);
      if (((int)uVar4 <
           (int)((this_02->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                (this_02->ElementsRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_02->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + uVar9 * 8) + uVar10 * 2) - 1U) < 0xfffe)) {
        *(float *)(*(longlong *)((this_02->Elements).Blocks.AllocatorInstance.Data + uVar12 * 8) +
                  local_e0 * 4) = local_f8;
        *(undefined4 *)
         (*(longlong *)((this_02->Elements).Blocks.AllocatorInstance.Data + local_d8 * 8) +
         local_d0 * 4) = local_f4;
        param_1 = local_res10;
        pFVar11 = local_e8;
      }
      else {
        UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement(this_02,uVar4,&local_f8,true);
        param_1 = local_res10;
        pFVar11 = local_e8;
      }
    }
    uVar9 = (ulonglong)local_res20;
    pFVar13 = pFVar13 + 4;
  }
  UE::Geometry::FRefCountVector::RebuildFreeList
            ((FRefCountVector *)(*(longlong *)((longlong)this + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00014c85fffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  return;
}

// operator()<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c860010

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
operator()<TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  atomic<unsigned_char> aVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  FDynamicMesh3 *this_01;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  short sVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res20;
  float local_c8;
  undefined4 local_c4;
  FScriptContainerElement *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  TVector<double>_u_0 local_a0;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  TVector2<float>_u_0 local_70;
  undefined2 local_68;
  undefined1 local_66;
  
  local_res10 = param_1;
  (**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_res20 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)local_res20;
  pFVar20 = (param_1->AllocatorInstance).Data;
  local_c0 = pFVar20 + uVar15 * 4;
  pFVar17 = local_c0;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar20 == pFVar17) break;
    uVar9 = *(uint *)pFVar20;
    lVar10 = *(longlong *)this;
    if ((((int)uVar9 < 0) ||
        (*(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24) <= (int)uVar9)) ||
       (uVar15 = (ulonglong)(uVar9 >> 9),
       0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x28) + uVar15 * 8) +
                                   (ulonglong)(uVar9 & 0x1ff) * 2) - 1U))) {
      bVar21 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5588047018133029115>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                          ,0xfb,"SourceUnwrapMesh.IsVertex(Vid)");
      if (bVar21) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar15 = (ulonglong)local_res20;
      pFVar20 = pFVar20 + 4;
    }
    else {
      this_01 = *(FDynamicMesh3 **)((longlong)this + 8);
      if (((int)uVar9 <
           (int)((this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this_01->VertexRefCounts).RefCounts.CurBlockUsed)) &&
         (uVar16 = (ulonglong)(uVar9 & 0x1ff),
         (ushort)(*(short *)(*(longlong *)
                              ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              uVar15 * 8) + uVar16 * 2) - 1U) < 0xfffe)) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
        uVar16 = (ulonglong)(uVar9 & 0x1ff);
      }
      if (bVar21) {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + uVar15 * 8);
        local_a8 = *(undefined8 *)(lVar10 + 0x10 + uVar16 * 0x18);
        puVar2 = (undefined4 *)(lVar10 + uVar16 * 0x18);
        local_b8 = *puVar2;
        uStack_b4 = puVar2[1];
        uVar7 = puVar2[2];
        uStack_ac = puVar2[3];
        uStack_b0 = uVar7;
        sVar14 = _dclass(local_b8);
        if (((sVar14 < 1) && (sVar14 = _dclass(uVar7), sVar14 < 1)) &&
           (sVar14 = _dclass((int)local_a8), sVar14 < 1)) {
          puVar3 = (undefined8 *)(lVar10 + uVar16 * 0x18);
          uVar13 = puVar3[1];
          uVar8 = *(undefined8 *)(lVar10 + 0x10 + uVar16 * 0x18);
          lVar10 = *(longlong *)((this_01->Vertices).Blocks.AllocatorInstance.Data + uVar15 * 8);
          puVar4 = (undefined8 *)(lVar10 + uVar16 * 0x18);
          *puVar4 = *puVar3;
          puVar4[1] = uVar13;
          *(undefined8 *)(lVar10 + 0x10 + uVar16 * 0x18) = uVar8;
          if ((this_01->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(this_01->ChangeStampShape).Mutex;
            LOCK();
            bVar21 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar21) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar21) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(this_01->ChangeStampShape).Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar6 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar6 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
            }
          }
        }
        lVar10 = *(longlong *)((longlong)this + 0x18);
        lVar11 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x48);
        uVar15 = (ulonglong)((uVar9 & 0x7fffffff) >> 8);
        uVar18 = (ulonglong)((uVar9 & 0x7fffffff) >> 8);
        uVar16 = (ulonglong)(uVar9 * 2 + 1 & 0x1ff);
        uVar19 = (ulonglong)(uVar9 * 2 & 0x1ff);
        pFVar20 = pFVar20 + 4;
        uVar7 = *(undefined4 *)(*(longlong *)(lVar11 + uVar18 * 8) + uVar16 * 4);
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar10 + 0x48) + uVar15 * 8) + uVar19 * 4) =
             *(undefined4 *)(*(longlong *)(lVar11 + uVar15 * 8) + uVar19 * 4);
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar10 + 0x48) + uVar18 * 8) + uVar16 * 4) =
             uVar7;
        uVar15 = (ulonglong)local_res20;
        param_1 = local_res10;
        pFVar17 = local_c0;
      }
      else {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + uVar15 * 8);
        pdVar5 = (double *)(lVar10 + uVar16 * 0x18);
        local_a0._s_0.X = *pdVar5;
        local_a0._s_0.Y = pdVar5[1];
        local_a0._s_0.Z = *(double *)(lVar10 + 0x10 + uVar16 * 0x18);
        local_80 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_74 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_70 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_88 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_7c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_68 = 0;
        local_66 = 0;
        UE::Geometry::FDynamicMesh3::InsertVertex(this_01,uVar9,(FVertexInfo *)&local_a0._s_0,true);
        local_c8 = *(float *)(*(longlong *)
                               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x48) +
                               (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
        local_c4 = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x48) +
                      (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
        UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement
                  (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 0x18),uVar9,&local_c8,true);
        uVar15 = (ulonglong)local_res20;
        pFVar20 = pFVar20 + 4;
        param_1 = local_res10;
        pFVar17 = local_c0;
      }
    }
  }
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  UE::Geometry::FRefCountVector::RebuildFreeList
            ((FRefCountVector *)(*(longlong *)((longlong)this + 0x18) + 8));
  return;
}

// operator()<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c860400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_2>::
operator()<TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  TDynamicMeshOverlay<float,2> *this_00;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  int local_f4;
  FIndex3i_u_0 local_f0;
  uint local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  uint local_c0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  FScriptContainerElement *local_b0;
  int local_a8;
  int iStack_a4;
  undefined8 local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar13 = (param_1->AllocatorInstance).Data;
  local_e0 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_e0;
  local_b0 = pFVar13 + uVar11 * 4;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_b8 = param_1;
LAB_14c860482:
  do {
    pFVar9 = local_b0;
    if (local_b8->ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (pFVar13 == pFVar9) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::FreeUnusedElements
                (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),&local_88);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    uVar4 = *(uint *)pFVar13;
    uVar12 = uVar4 * 3;
    uVar7 = uVar12 + 2;
    lVar2 = (ulonglong)(uVar12 >> 9) * 8;
    lVar3 = (ulonglong)(uVar12 & 0x1ff) * 4;
    lVar8 = *(longlong *)(*(longlong *)this + 0x78);
    iVar5 = *(int *)(lVar3 + *(longlong *)(lVar2 + lVar8));
    uVar12 = uVar12 + 1;
    if (iVar5 < 0) {
      iVar10 = -1;
      local_d8 = 0xffffffffffffffff;
      local_f0._s_0.C = 0xffffffff;
    }
    else {
      local_d8 = CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar8 + (ulonglong)(uVar12 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 4),iVar5);
      local_f0._s_0.C =
           *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar7 >> 9) * 8) +
                    (ulonglong)(uVar7 & 0x1ff) * 4);
      iVar10 = iVar5;
    }
    local_f0._0_8_ = local_d8;
    if (*(int *)(lVar3 + *(longlong *)
                          (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x78) + lVar2)) < 0) {
      if (-1 < iVar5) goto LAB_14c860639;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x78);
      local_a8 = *(int *)(lVar3 + *(longlong *)(lVar8 + lVar2));
      iVar6 = *(int *)(*(longlong *)(lVar8 + (ulonglong)(uVar12 >> 9) * 8) +
                      (ulonglong)(uVar12 & 0x1ff) * 4);
      local_c8 = CONCAT44(iVar6,local_a8);
      uVar7 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      local_c0[0] = uVar7;
      iStack_a4 = iVar6;
      if ((iVar5 < 0) || (iVar10 != local_a8)) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,&local_f4,(bool *)&local_c8);
        if (-1 < iVar5) goto LAB_14c8605c9;
LAB_14c8605d0:
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,&local_f4,(bool *)((longlong)&local_c8 + 4));
        if (-1 < iVar5) goto LAB_14c8605ea;
      }
      else {
LAB_14c8605c9:
        if (local_f0._s_0.B != iVar6) goto LAB_14c8605d0;
LAB_14c8605ea:
        if (local_f0._s_0.C == uVar7) goto LAB_14c860639;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_88,&local_f4,(bool *)local_c0);
      if (iVar5 < 0) {
        UE::Geometry::TDynamicMeshOverlay<float,2>::UnsetTriangle
                  (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),uVar4,false);
        pFVar13 = pFVar13 + 4;
        uVar11 = (ulonglong)local_e0;
        goto LAB_14c860482;
      }
LAB_14c860639:
      lVar2 = *(longlong *)
               (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x130) +
               (ulonglong)(uVar4 >> 9) * 8);
      local_98 = *(undefined8 *)(lVar2 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
      iVar5 = *(int *)(lVar2 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
      lVar2 = *(longlong *)
               ((*(longlong **)((longlong)this + 8))[0xc] +
               (ulonglong)((uint)local_f0._s_0.A >> 9) * 8);
      if (*(int *)(lVar2 + (ulonglong)(local_f0._s_0.A & 0x1ff) * 4) != (int)local_98) {
        *(int *)(lVar2 + (ulonglong)(local_f0._s_0.A & 0x1ff) * 4) = (int)local_98;
      }
      piVar1 = (int *)(*(longlong *)
                        (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) +
                        (ulonglong)((uint)local_f0._s_0.B >> 9) * 8) +
                      (ulonglong)(local_f0._s_0.B & 0x1ff) * 4);
      iVar10 = (int)((ulonglong)local_98 >> 0x20);
      if (*piVar1 != iVar10) {
        *piVar1 = iVar10;
      }
      this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
      lVar2 = *(longlong *)
               ((this_00->ParentVertices).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)local_f0._s_0.C >> 9) * 8);
      if (*(int *)(lVar2 + (ulonglong)(local_f0._s_0.C & 0x1ff) * 4) != iVar5) {
        *(int *)(lVar2 + (ulonglong)(local_f0._s_0.C & 0x1ff) * 4) = iVar5;
        this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
      }
      UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                (this_00,uVar4,(FIndex3i *)&local_f0._s_0,false);
    }
    pFVar13 = pFVar13 + 4;
    uVar11 = (ulonglong)local_e0;
  } while( true );
}

// operator()<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14c8607a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_2>::
operator()<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  TDynamicMeshOverlay<float,2> *this_00;
  uint uVar17;
  int iVar18;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined1 local_d0 [4];
  int iStack_cc;
  bool local_c8 [8];
  int local_c0;
  uint local_bc;
  uint local_b8;
  undefined8 local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a0;
  FScriptContainerElement *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_b8 = param_1->ArrayNum;
  uVar13 = (ulonglong)(int)local_b8;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_98 = pFVar14 + uVar13 * 4;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_a0 = param_1;
  local_90 = param_2;
  while( true ) {
    pFVar15 = local_98;
    if (local_a0->ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_d8);
    }
    pTVar11 = local_90;
    if (pFVar14 == pFVar15) break;
    uVar6 = *(uint *)pFVar14;
    lVar8 = *(longlong *)this;
    if (((int)uVar6 < 0) ||
       (*(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144) <= (int)uVar6)) {
LAB_14c8608b3:
      iVar16 = -1;
      bVar10 = false;
      iVar18 = -1;
      uVar17 = 0xffffffff;
    }
    else {
      uVar13 = (ulonglong)(uVar6 & 0x1ff);
      lVar3 = (ulonglong)(uVar6 >> 9) * 8;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar8 + 0x148) + lVar3) +
                                      uVar13 * 2) - 1U)) goto LAB_14c8608b3;
      bVar10 = true;
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + lVar3);
      uVar5 = *(undefined8 *)(lVar8 + uVar13 * 0xc);
      uVar17 = *(uint *)(lVar8 + 8 + uVar13 * 0xc);
      local_b0._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
      local_b0._0_4_ = (int)uVar5;
      iVar18 = local_b0._4_4_;
      iVar16 = (int)local_b0;
      local_b0 = uVar5;
    }
    uVar9 = uVar6 * 3;
    lVar8 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x78);
    iVar12 = *(int *)(*(longlong *)(lVar8 + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
    if (-1 < iVar12) {
      iVar7 = *(int *)(*(longlong *)(lVar8 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                      (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
      iStack_cc = iVar7;
      local_d0 = (undefined1  [4])iVar12;
      local_c8._0_4_ =
           *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
                    (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
      local_bc = local_c8._0_4_;
      if ((bVar10) && (iVar16 == iVar12)) {
LAB_14c860954:
        if (iVar18 != iVar7) goto LAB_14c860959;
LAB_14c860972:
        if (uVar17 == local_bc) goto LAB_14c86099f;
      }
      else {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,&local_c0,(bool *)local_d0);
        if (bVar10) goto LAB_14c860954;
LAB_14c860959:
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,&local_c0,(bool *)(local_d0 + 4));
        if (bVar10) goto LAB_14c860972;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_88,&local_c0,local_c8);
      if (!bVar10) {
        UE::Geometry::TDynamicMeshOverlay<float,2>::UnsetTriangle
                  (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),uVar6,false);
      }
    }
LAB_14c86099f:
    pFVar14 = pFVar14 + 4;
    uVar13 = (ulonglong)local_b8;
  }
  pFVar15 = (local_90->AllocatorInstance).Data;
  iVar18 = local_90->ArrayNum;
  pFVar14 = pFVar15 + (longlong)iVar18 * 4;
LAB_14c8609c7:
  do {
    if (pTVar11->ArrayNum != iVar18) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_d8);
    }
    if (pFVar15 == pFVar14) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::FreeUnusedElements
                (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),&local_88);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    uVar6 = *(uint *)pFVar15;
    lVar8 = *(longlong *)this;
    if ((-1 < (int)uVar6) &&
       ((int)uVar6 < *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144))) {
      lVar3 = (ulonglong)(uVar6 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar8 + 0x148) + lVar3) +
                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar4 = (ulonglong)(uVar6 & 0x1ff) * 0xc;
        plVar1 = (longlong *)((longlong)this + 8);
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + lVar3);
        _local_d0 = *(ulonglong *)(lVar8 + lVar4);
        local_c8._0_4_ = *(uint *)(lVar8 + 8 + lVar4);
        lVar8 = *(longlong *)(*(longlong *)(**(longlong **)((longlong)this + 8) + 0x130) + lVar3);
        local_b0 = *(undefined8 *)(lVar8 + lVar4);
        iVar16 = *(int *)(lVar8 + 8 + lVar4);
        lVar8 = *(longlong *)
                 ((*(longlong **)((longlong)this + 8))[0xc] + (ulonglong)((uint)local_d0 >> 9) * 8);
        if (*(int *)(lVar8 + (ulonglong)((uint)local_d0 & 0x1ff) * 4) != (int)local_b0) {
          *(int *)(lVar8 + (ulonglong)((uint)local_d0 & 0x1ff) * 4) = (int)local_b0;
        }
        piVar2 = (int *)(*(longlong *)
                          (*(longlong *)(*plVar1 + 0x60) + ((ulonglong)_local_d0 >> 0x29) * 8) +
                        (ulonglong)((uint)((ulonglong)_local_d0 >> 0x20) & 0x1ff) * 4);
        iVar12 = (int)((ulonglong)local_b0 >> 0x20);
        if (*piVar2 != iVar12) {
          *piVar2 = iVar12;
        }
        this_00 = (TDynamicMeshOverlay<float,2> *)*plVar1;
        lVar8 = *(longlong *)
                 ((this_00->ParentVertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_c8._0_4_ >> 9) * 8);
        if (*(int *)(lVar8 + (ulonglong)(local_c8._0_4_ & 0x1ff) * 4) != iVar16) {
          *(int *)(lVar8 + (ulonglong)(local_c8._0_4_ & 0x1ff) * 4) = iVar16;
          this_00 = (TDynamicMeshOverlay<float,2> *)*plVar1;
        }
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  (this_00,uVar6,(FIndex3i *)local_d0,false);
        pFVar15 = pFVar15 + 4;
        goto LAB_14c8609c7;
      }
    }
    pFVar15 = pFVar15 + 4;
  } while( true );
}

// operator()<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c860ba0

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_1>::
operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(void *this,IndexEnumerable *param_1)

{
  short sVar1;
  FRefCountVector *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  TDynamicMeshOverlay<float,2> *this_00;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float local_res8;
  undefined4 local_resc;
  
  pFVar2 = param_1->Vector;
  uVar10 = (pFVar2->RefCounts).CurBlock * 0x200 + (pFVar2->RefCounts).CurBlockUsed;
  uVar9 = 0;
  if ((uVar10 != 0) &&
     (pFVar3 = (pFVar2->RefCounts).Blocks.AllocatorInstance.Data, uVar9 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar10) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                          (ulonglong)(uVar8 & 0x1ff) * 2);
        if ((sVar1 != 0) && (uVar9 = uVar8, sVar1 != -1)) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while ((int)uVar8 < (int)uVar10);
    }
  }
joined_r0x00014c860c1e:
  if (uVar9 == uVar10) {
    UE::Geometry::FRefCountVector::RebuildFreeList
              ((FRefCountVector *)(*(longlong *)((longlong)this + 8) + 8));
    return;
  }
  do {
    lVar4 = *(longlong *)this;
    if (((int)uVar9 < 0) || (*(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc) <= (int)uVar9)) {
LAB_14c860d36:
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5588047018133029279>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                         ,0x19f,"OverlayIn.IsElement(ElementID)");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar9 >> 9) * 8)
                                      + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U)) goto LAB_14c860d36;
      this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
      uVar12 = (ulonglong)((uVar9 & 0x7fffffff) >> 8);
      uVar13 = (ulonglong)(uVar9 * 2 & 0x1ff);
      uVar11 = (ulonglong)((uVar9 & 0x7fffffff) >> 8);
      uVar7 = (ulonglong)(uVar9 * 2 + 1 & 0x1ff);
      local_res8 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar12 * 8) + uVar13 * 4);
      local_resc = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar11 * 8) + uVar7 * 4);
      if (((int)uVar9 <
           (int)((this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                (this_00->ElementsRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        *(float *)(*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + uVar12 * 8) +
                  uVar13 * 4) = local_res8;
        *(undefined4 *)
         (*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + uVar11 * 8) + uVar7 * 4)
             = local_resc;
      }
      else {
        UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement(this_00,uVar9,&local_res8,true);
      }
    }
    uVar9 = uVar9 + 1;
    if ((int)uVar10 <= (int)uVar9) goto joined_r0x00014c860c1e;
    while( true ) {
      lVar4 = *(longlong *)
               ((pFVar2->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      if ((*(short *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) break;
      uVar9 = uVar9 + 1;
      if ((int)uVar10 <= (int)uVar9) goto joined_r0x00014c860c1e;
    }
  } while( true );
}

// operator()<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c860de0

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_1>::
operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(void *this,IndexEnumerable *param_1)

{
  undefined4 *puVar1;
  short sVar2;
  FRefCountVector *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  TDynamicMeshOverlay<float,2> *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float local_res8;
  undefined4 local_resc;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  pFVar3 = param_1->Vector;
  uVar11 = (pFVar3->RefCounts).CurBlock * 0x200 + (pFVar3->RefCounts).CurBlockUsed;
  uVar9 = 0;
  if ((uVar11 != 0) &&
     (pFVar4 = (pFVar3->RefCounts).Blocks.AllocatorInstance.Data, uVar9 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar11) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8) +
                          (ulonglong)(uVar8 & 0x1ff) * 2);
        if ((sVar2 != 0) && (uVar9 = uVar8, sVar2 != -1)) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while ((int)uVar8 < (int)uVar11);
    }
  }
joined_r0x00014c860e59:
  if (uVar9 == uVar11) {
    UE::Geometry::FRefCountVector::RebuildFreeList
              ((FRefCountVector *)(*(longlong *)((longlong)this + 8) + 8));
    return;
  }
  do {
    lVar5 = *(longlong *)this;
    if (((int)uVar9 < 0) || (*(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24) <= (int)uVar9))
    {
LAB_14c860f94:
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5588047018133029172>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                         ,0x134,"UnwrapMeshIn.IsVertex(Vid)");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      uVar12 = (ulonglong)(uVar9 & 0x1ff);
      uVar10 = (ulonglong)(uVar9 >> 9);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + uVar10 * 8) +
                                      uVar12 * 2) - 1U)) goto LAB_14c860f94;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar10 * 8);
      puVar1 = (undefined4 *)(lVar5 + uVar12 * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      local_38 = *(undefined8 *)(lVar5 + 0x10 + uVar12 * 0x18);
      (**(code **)((longlong)this + 0x10))
                (&local_res8,*(undefined8 *)((longlong)this + 0x18),&local_48);
      this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
      if (((int)uVar9 <
           (int)((this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                (this_00->ElementsRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + uVar10 * 8) + uVar12 * 2) - 1U) < 0xfffe)) {
        *(float *)(*(longlong *)
                    ((this_00->Elements).Blocks.AllocatorInstance.Data +
                    (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar9 * 2 & 0x1ff) * 4
                  ) = local_res8;
        *(undefined4 *)
         (*(longlong *)
           ((this_00->Elements).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4) =
             local_resc;
      }
      else {
        UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement(this_00,uVar9,&local_res8,true);
      }
    }
    uVar9 = uVar9 + 1;
    if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014c860e59;
    while( true ) {
      lVar5 = *(longlong *)
               ((pFVar3->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      if ((*(short *)(lVar5 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar5 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) break;
      uVar9 = uVar9 + 1;
      if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014c860e59;
    }
  } while( true );
}

// operator()<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c861040

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(void *this,IndexEnumerable *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  FRefCountVector *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FDynamicMesh3 *this_01;
  TDynamicMeshOverlay<float,2> *this_02;
  code *pcVar7;
  undefined8 uVar8;
  short sVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  float local_res18;
  undefined4 local_res1c;
  ulonglong local_res20;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  TVector<double>_u_0 local_b8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  TVector2<float>_u_0 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  double local_78;
  double dStack_70;
  double local_68;
  
  (**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  pFVar4 = param_1->Vector;
  uVar14 = (pFVar4->RefCounts).CurBlockUsed + (pFVar4->RefCounts).CurBlock * 0x200;
  uVar13 = 0;
  if ((uVar14 != 0) &&
     (pFVar5 = (pFVar4->RefCounts).Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar14) {
      do {
        sVar9 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 2);
        if ((sVar9 != 0) && (uVar13 = uVar12, sVar9 != -1)) break;
        uVar12 = uVar12 + 1;
        uVar13 = uVar12;
      } while ((int)uVar12 < (int)uVar14);
    }
  }
joined_r0x00014c8610d9:
  if (uVar13 == uVar14) {
    UE::Geometry::FRefCountVector::RebuildFreeList
              ((FRefCountVector *)(*(longlong *)((longlong)this + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00014c861429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
    return;
  }
  do {
    lVar6 = *(longlong *)this;
    if (((int)uVar13 < 0) || (*(int *)(lVar6 + 8) * 0x200 + *(int *)(lVar6 + 0xc) <= (int)uVar13)) {
LAB_14c861379:
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5588047018133029039>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                          ,0xaf,"UVOverlayIn.IsElement(ElementID)");
      if (bVar18) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar17 = (ulonglong)(uVar13 & 0x1ff);
      uVar16 = (ulonglong)(uVar13 >> 9);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + uVar16 * 8) +
                                      uVar17 * 2) - 1U)) goto LAB_14c861379;
      this_01 = *(FDynamicMesh3 **)((longlong)this + 8);
      local_res20 = (ulonglong)((uVar13 & 0x7fffffff) >> 8);
      uVar15 = (ulonglong)(uVar13 * 2 & 0x1ff);
      local_res18 = *(float *)(*(longlong *)(*(longlong *)(lVar6 + 0x48) + local_res20 * 8) +
                              uVar15 * 4);
      uVar10 = (ulonglong)((uVar13 & 0x7fffffff) >> 8);
      uVar11 = (ulonglong)(uVar13 * 2 + 1 & 0x1ff);
      local_res1c = *(undefined4 *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x48) + uVar10 * 8) + uVar11 * 4);
      if (((int)uVar13 <
           (int)((this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this_01->VertexRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               uVar16 * 8) + uVar17 * 2) - 1U) < 0xfffe)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if (bVar18) {
        (**(code **)((longlong)this + 0x10))(&local_d0);
        sVar9 = _dclass((int)local_d0);
        if (((sVar9 < 1) && (sVar9 = _dclass((int)uStack_c8), uVar8 = local_c0, sVar9 < 1)) &&
           (sVar9 = _dclass((int)local_c0), sVar9 < 1)) {
          lVar6 = *(longlong *)((this_01->Vertices).Blocks.AllocatorInstance.Data + uVar16 * 8);
          puVar2 = (undefined8 *)(lVar6 + uVar17 * 0x18);
          *puVar2 = local_d0;
          puVar2[1] = uStack_c8;
          *(undefined8 *)(lVar6 + 0x10 + uVar17 * 0x18) = uVar8;
          if ((this_01->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(this_01->ChangeStampShape).Mutex;
            LOCK();
            bVar18 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar18) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar18) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(this_01->ChangeStampShape).Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar3 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar3 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
            }
          }
        }
      }
      else {
        (**(code **)((longlong)this + 0x10))
                  (&local_78,*(undefined8 *)((longlong)this + 0x18),&local_res18);
        local_98 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_b8._s_0.X = local_78;
        local_b8._s_0.Y = dStack_70;
        local_8c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_94 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_b8._s_0.Z = local_68;
        local_88 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_80 = 0;
        local_7e = 0;
        UE::Geometry::FDynamicMesh3::InsertVertex(this_01,uVar13,(FVertexInfo *)&local_b8._s_0,true)
        ;
      }
      this_02 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 0x20);
      if (((int)uVar13 <
           (int)((this_02->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                (this_02->ElementsRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_02->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + uVar16 * 8) + uVar17 * 2) - 1U) < 0xfffe)) {
        *(float *)(*(longlong *)
                    ((this_02->Elements).Blocks.AllocatorInstance.Data + local_res20 * 8) +
                  uVar15 * 4) = local_res18;
        *(undefined4 *)
         (*(longlong *)((this_02->Elements).Blocks.AllocatorInstance.Data + uVar10 * 8) + uVar11 * 4
         ) = local_res1c;
      }
      else {
        UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement(this_02,uVar13,&local_res18,true);
      }
    }
    uVar13 = uVar13 + 1;
    if ((int)uVar14 <= (int)uVar13) goto joined_r0x00014c8610d9;
    while( true ) {
      lVar6 = *(longlong *)
               ((pFVar4->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
      if ((*(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
      uVar13 = uVar13 + 1;
      if ((int)uVar14 <= (int)uVar13) goto joined_r0x00014c8610d9;
    }
  } while( true );
}

// operator()<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c861440

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(void *this,IndexEnumerable *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  atomic<unsigned_char> aVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  FRefCountVector *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FDynamicMesh3 *this_01;
  longlong lVar12;
  code *pcVar13;
  undefined8 uVar14;
  short sVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  float local_res10;
  undefined4 local_res14;
  TVector<double>_u_0 local_90;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  TVector2<float>_u_0 local_60;
  undefined2 local_58;
  undefined1 local_56;
  
  (**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  pFVar9 = param_1->Vector;
  uVar17 = (pFVar9->RefCounts).CurBlockUsed + (pFVar9->RefCounts).CurBlock * 0x200;
  uVar19 = 0;
  if ((uVar17 != 0) &&
     (pFVar10 = (pFVar9->RefCounts).Blocks.AllocatorInstance.Data, uVar19 = 0,
     0xfffd < (ushort)(**(short **)pFVar10 - 1U))) {
    uVar18 = 1;
    uVar19 = 1;
    if (1 < (int)uVar17) {
      do {
        sVar15 = *(short *)(*(longlong *)(pFVar10 + (ulonglong)(uVar18 >> 9) * 8) +
                           (ulonglong)(uVar18 & 0x1ff) * 2);
        if ((sVar15 != 0) && (uVar19 = uVar18, sVar15 != -1)) break;
        uVar18 = uVar18 + 1;
        uVar19 = uVar18;
      } while ((int)uVar18 < (int)uVar17);
    }
  }
joined_r0x00014c8614c8:
  if (uVar19 == uVar17) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
    UE::Geometry::FRefCountVector::RebuildFreeList
              ((FRefCountVector *)(*(longlong *)((longlong)this + 0x18) + 8));
    return;
  }
  do {
    lVar11 = *(longlong *)this;
    if (((int)uVar19 < 0) ||
       (*(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24) <= (int)uVar19)) {
LAB_14c861774:
      bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5588047018133029115>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                          ,0xfb,"SourceUnwrapMesh.IsVertex(Vid)");
      if (bVar23) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    else {
      uVar16 = (ulonglong)(uVar19 & 0x1ff);
      uVar22 = (ulonglong)(uVar19 >> 9);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar11 + 0x28) + uVar22 * 8) +
                                      uVar16 * 2) - 1U)) goto LAB_14c861774;
      this_01 = *(FDynamicMesh3 **)((longlong)this + 8);
      if (((int)uVar19 <
           (int)((this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this_01->VertexRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               uVar22 * 8) + uVar16 * 2) - 1U) < 0xfffe)) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if (bVar23) {
        lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + uVar22 * 8);
        uVar8 = *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18);
        puVar2 = (undefined4 *)(lVar11 + uVar16 * 0x18);
        uVar7 = puVar2[2];
        sVar15 = _dclass(*puVar2);
        if (((sVar15 < 1) && (sVar15 = _dclass(uVar7), sVar15 < 1)) &&
           (sVar15 = _dclass((int)uVar8), sVar15 < 1)) {
          puVar3 = (undefined8 *)(lVar11 + uVar16 * 0x18);
          uVar14 = puVar3[1];
          uVar8 = *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18);
          lVar11 = *(longlong *)((this_01->Vertices).Blocks.AllocatorInstance.Data + uVar22 * 8);
          puVar4 = (undefined8 *)(lVar11 + uVar16 * 0x18);
          *puVar4 = *puVar3;
          puVar4[1] = uVar14;
          *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18) = uVar8;
          if ((this_01->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(this_01->ChangeStampShape).Mutex;
            LOCK();
            bVar23 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar23) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar23) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(this_01->ChangeStampShape).Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar6 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar6 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
            }
          }
        }
        lVar11 = *(longlong *)((longlong)this + 0x18);
        uVar20 = (ulonglong)((uVar19 & 0x7fffffff) >> 8);
        lVar12 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x48);
        uVar16 = (ulonglong)((uVar19 & 0x7fffffff) >> 8);
        uVar21 = (ulonglong)(uVar19 * 2 & 0x1ff);
        uVar22 = (ulonglong)(uVar19 * 2 + 1 & 0x1ff);
        uVar7 = *(undefined4 *)(*(longlong *)(lVar12 + uVar20 * 8) + uVar22 * 4);
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x48) + uVar16 * 8) + uVar21 * 4) =
             *(undefined4 *)(*(longlong *)(lVar12 + uVar16 * 8) + uVar21 * 4);
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x48) + uVar20 * 8) + uVar22 * 4) =
             uVar7;
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + uVar22 * 8);
        pdVar5 = (double *)(lVar11 + uVar16 * 0x18);
        local_90._s_0.X = *pdVar5;
        local_90._s_0.Y = pdVar5[1];
        local_90._s_0.Z = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
        local_70 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_64 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_60 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_78 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_6c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_58 = 0;
        local_56 = 0;
        UE::Geometry::FDynamicMesh3::InsertVertex(this_01,uVar19,(FVertexInfo *)&local_90._s_0,true)
        ;
        local_res10 = *(float *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x48) +
                                  (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
                                (ulonglong)(uVar19 * 2 & 0x1ff) * 4);
        local_res14 = *(undefined4 *)
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x48) +
                         (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4);
        UE::Geometry::TDynamicMeshOverlay<float,2>::InsertElement
                  (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 0x18),uVar19,&local_res10,
                   true);
      }
    }
    uVar19 = uVar19 + 1;
    if ((int)uVar17 <= (int)uVar19) goto joined_r0x00014c8614c8;
    while( true ) {
      lVar11 = *(longlong *)
                ((pFVar9->RefCounts).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
      if ((*(short *)(lVar11 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar11 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
      uVar19 = uVar19 + 1;
      if ((int)uVar17 <= (int)uVar19) goto joined_r0x00014c8614c8;
    }
  } while( true );
}

// operator()<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c861850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_2>::
operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(void *this,IndexEnumerable *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FRefCountVector *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  TDynamicMeshOverlay<float,2> *this_00;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  FIndex3i_u_0 local_e0;
  undefined8 local_d0;
  undefined8 local_c0;
  uint local_b8 [2];
  int local_b0;
  int iStack_ac;
  undefined8 local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar8 = param_1->Vector;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  uVar15 = (pFVar8->RefCounts).CurBlockUsed + (pFVar8->RefCounts).CurBlock * 0x200;
  uVar14 = 0;
  if ((uVar15 != 0) &&
     (pFVar9 = (pFVar8->RefCounts).Blocks.AllocatorInstance.Data, uVar14 = 0,
     0xfffd < (ushort)(**(short **)pFVar9 - 1U))) {
    uVar14 = 1;
    uVar13 = 1;
    if ((int)uVar15 < 2) goto joined_r0x00014c86190b;
    do {
      sVar4 = *(short *)(*(longlong *)(pFVar9 + (uVar14 >> 9) * 8) +
                        (ulonglong)((uint)uVar14 & 0x1ff) * 2);
      if ((sVar4 != 0) && (sVar4 != -1)) break;
      uVar13 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar15);
  }
  uVar13 = (uint)uVar14;
joined_r0x00014c86190b:
  if (uVar13 == uVar15) {
    UE::Geometry::TDynamicMeshOverlay<float,2>::FreeUnusedElements
              (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),&local_88);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    return;
  }
  do {
    uVar13 = (uint)uVar14;
    uVar12 = uVar13 * 3;
    uVar7 = uVar12 + 2;
    lVar2 = (ulonglong)(uVar12 >> 9) * 8;
    lVar3 = (ulonglong)(uVar12 & 0x1ff) * 4;
    lVar10 = *(longlong *)(*(longlong *)this + 0x78);
    iVar5 = *(int *)(*(longlong *)(lVar10 + lVar2) + lVar3);
    uVar12 = uVar12 + 1;
    if (iVar5 < 0) {
      iVar11 = -1;
      local_d0 = 0xffffffffffffffff;
      local_e0._s_0.C = 0xffffffff;
    }
    else {
      local_d0 = CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar10 + (ulonglong)(uVar12 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 4),iVar5);
      local_e0._s_0.C =
           *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar7 >> 9) * 8) +
                    (ulonglong)(uVar7 & 0x1ff) * 4);
      iVar11 = iVar5;
    }
    local_e0._0_8_ = local_d0;
    if (*(int *)(*(longlong *)(lVar2 + *(longlong *)(*(longlong *)((longlong)this + 8) + 0x78)) +
                lVar3) < 0) {
      if (-1 < iVar5) goto LAB_14c861ab3;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x78);
      local_b0 = *(int *)(*(longlong *)(lVar2 + lVar10) + lVar3);
      iVar6 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar12 >> 9) * 8) +
                      (ulonglong)(uVar12 & 0x1ff) * 4);
      local_c0 = CONCAT44(iVar6,local_b0);
      uVar7 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      local_b8[0] = uVar7;
      iStack_ac = iVar6;
      if (((((((iVar5 < 0) || (iVar11 != local_b0)) &&
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_88,local_e8,(bool *)&local_c0), iVar5 < 0)) ||
            (local_e0._s_0.B != iVar6)) &&
           (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_88,local_e8,(bool *)((longlong)&local_c0 + 4)), iVar5 < 0)) ||
          (local_e0._s_0.C != uVar7)) &&
         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_88,local_e8,(bool *)local_b8), iVar5 < 0)) {
        UE::Geometry::TDynamicMeshOverlay<float,2>::UnsetTriangle
                  (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),uVar13,false);
      }
      else {
LAB_14c861ab3:
        lVar2 = *(longlong *)
                 (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x130) + (uVar14 >> 9) * 8);
        local_a0 = *(undefined8 *)(lVar2 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
        iVar5 = *(int *)(lVar2 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
        lVar2 = *(longlong *)
                 ((*(longlong **)((longlong)this + 8))[0xc] +
                 (ulonglong)((uint)local_e0._s_0.A >> 9) * 8);
        if (*(int *)(lVar2 + (ulonglong)(local_e0._s_0.A & 0x1ff) * 4) != (int)local_a0) {
          *(int *)(lVar2 + (ulonglong)(local_e0._s_0.A & 0x1ff) * 4) = (int)local_a0;
        }
        piVar1 = (int *)(*(longlong *)
                          (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) +
                          (ulonglong)((uint)local_e0._s_0.B >> 9) * 8) +
                        (ulonglong)(local_e0._s_0.B & 0x1ff) * 4);
        iVar11 = (int)((ulonglong)local_a0 >> 0x20);
        if (*piVar1 != iVar11) {
          *piVar1 = iVar11;
        }
        this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
        lVar2 = *(longlong *)
                 ((this_00->ParentVertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_e0._s_0.C >> 9) * 8);
        if (*(int *)(lVar2 + (ulonglong)(local_e0._s_0.C & 0x1ff) * 4) != iVar5) {
          *(int *)(lVar2 + (ulonglong)(local_e0._s_0.C & 0x1ff) * 4) = iVar5;
          this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
        }
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  (this_00,uVar13,(FIndex3i *)&local_e0._s_0,false);
      }
    }
    uVar13 = uVar13 + 1;
    uVar14 = (ulonglong)uVar13;
    if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014c86190b;
    pFVar9 = (pFVar8->RefCounts).Blocks.AllocatorInstance.Data;
    while( true ) {
      lVar2 = (uVar14 >> 9) * 8;
      lVar3 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
      if ((*(short *)(lVar3 + *(longlong *)(pFVar9 + lVar2)) != 0) &&
         (*(short *)(lVar3 + *(longlong *)(pFVar9 + lVar2)) != -1)) break;
      uVar13 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014c86190b;
    }
  } while( true );
}

// operator()<UE::Geometry::FRefCountVector::IndexEnumerable,UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c861c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_2>::
operator()<UE::Geometry::FRefCountVector::IndexEnumerable,UE::Geometry::FRefCountVector::IndexEnumerable>
          (void *this,IndexEnumerable *param_1,IndexEnumerable *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  FRefCountVector *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  TDynamicMeshOverlay<float,2> *this_00;
  int iVar17;
  uint uVar18;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  int iStack_c4;
  bool local_c0 [8];
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined8 local_a8;
  IndexEnumerable *local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar7 = param_1->Vector;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  uVar15 = (pFVar7->RefCounts).CurBlockUsed + (pFVar7->RefCounts).CurBlock * 0x200;
  uVar14 = 0;
  local_98 = param_2;
  if ((uVar15 == 0) ||
     (pFVar8 = (pFVar7->RefCounts).Blocks.AllocatorInstance.Data, uVar14 = 0,
     (ushort)(**(short **)pFVar8 - 1U) < 0xfffe)) {
LAB_14c861d19:
    uVar13 = (uint)uVar14;
  }
  else {
    uVar14 = 1;
    uVar13 = 1;
    if (1 < (int)uVar15) {
      do {
        sVar5 = *(short *)(*(longlong *)(pFVar8 + (uVar14 >> 9) * 8) +
                          (ulonglong)((uint)uVar14 & 0x1ff) * 2);
        if ((sVar5 != 0) && (sVar5 != -1)) break;
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < (int)uVar15);
      goto LAB_14c861d19;
    }
  }
joined_r0x00014c861d1b:
  if (uVar13 != uVar15) {
    do {
      lVar9 = *(longlong *)this;
      uVar13 = (uint)uVar14;
      if (((int)uVar13 < 0) ||
         (*(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144) <= (int)uVar13)) {
LAB_14c861d97:
        iVar12 = -1;
        bVar11 = false;
        iVar17 = -1;
        uVar18 = 0xffffffff;
      }
      else {
        uVar16 = (ulonglong)(uVar13 & 0x1ff);
        lVar2 = (uVar14 >> 9) * 8;
        if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x148) + lVar2) +
                                        uVar16 * 2) - 1U)) goto LAB_14c861d97;
        bVar11 = true;
        lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + lVar2);
        uVar4 = *(undefined8 *)(lVar9 + uVar16 * 0xc);
        uVar18 = *(uint *)(lVar9 + 8 + uVar16 * 0xc);
        local_a8._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
        local_a8._0_4_ = (int)uVar4;
        iVar17 = local_a8._4_4_;
        iVar12 = (int)local_a8;
        local_a8 = uVar4;
      }
      uVar10 = uVar13 * 3;
      lVar9 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x78);
      iVar6 = *(int *)(*(longlong *)(lVar9 + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < iVar6) {
        local_b4 = *(int *)(*(longlong *)(lVar9 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                           (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
        iStack_c4 = local_b4;
        local_c8 = (undefined1  [4])iVar6;
        local_c0._0_4_ =
             *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                      (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
        local_b0 = local_c0._0_4_;
        if (((((((!bVar11) || (iVar12 != iVar6)) &&
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (&local_88,&local_b8,(bool *)local_c8), !bVar11)) || (iVar17 != local_b4))
             && (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                           (&local_88,&local_b8,(bool *)(local_c8 + 4)), !bVar11)) ||
            (uVar18 != local_b0)) &&
           (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_88,&local_b8,local_c0), !bVar11)) {
          UE::Geometry::TDynamicMeshOverlay<float,2>::UnsetTriangle
                    (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),uVar13,false);
        }
      }
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014c861d1b;
      while( true ) {
        lVar2 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
        lVar9 = *(longlong *)((pFVar7->RefCounts).Blocks.AllocatorInstance.Data + (uVar14 >> 9) * 8)
        ;
        if ((*(short *)(lVar2 + lVar9) != 0) && (*(short *)(lVar2 + lVar9) != -1)) break;
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014c861d1b;
      }
    } while( true );
  }
  uVar14 = 0;
  pFVar7 = local_98->Vector;
  uVar15 = (pFVar7->RefCounts).CurBlock * 0x200 + (pFVar7->RefCounts).CurBlockUsed;
  if ((uVar15 != 0) &&
     (pFVar8 = (pFVar7->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
    uVar14 = 1;
    uVar13 = 1;
    if ((int)uVar15 < 2) goto joined_r0x00014c861f49;
    do {
      sVar5 = *(short *)(*(longlong *)(pFVar8 + (uVar14 >> 9) * 8) +
                        (ulonglong)((uint)uVar14 & 0x1ff) * 2);
      if ((sVar5 != 0) && (sVar5 != -1)) break;
      uVar13 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar15);
  }
  uVar13 = (uint)uVar14;
joined_r0x00014c861f49:
  do {
    if (uVar13 == uVar15) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::FreeUnusedElements
                (*(TDynamicMeshOverlay<float,2> **)((longlong)this + 8),&local_88);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    while( true ) {
      lVar9 = *(longlong *)this;
      uVar13 = (uint)uVar14;
      if ((-1 < (int)uVar13) &&
         ((int)uVar13 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) {
        lVar2 = (uVar14 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x148) + lVar2) +
                               (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe) {
          lVar3 = (ulonglong)(uVar13 & 0x1ff) * 0xc;
          lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x130) + lVar2);
          _local_c8 = *(ulonglong *)(lVar9 + lVar3);
          local_c0._0_4_ = *(uint *)(lVar9 + 8 + lVar3);
          lVar9 = *(longlong *)(*(longlong *)(**(longlong **)((longlong)this + 8) + 0x130) + lVar2);
          local_a8 = *(undefined8 *)(lVar9 + lVar3);
          iVar17 = *(int *)(lVar9 + 8 + lVar3);
          lVar9 = *(longlong *)
                   ((*(longlong **)((longlong)this + 8))[0xc] + (ulonglong)((uint)local_c8 >> 9) * 8
                   );
          if (*(int *)(lVar9 + (ulonglong)((uint)local_c8 & 0x1ff) * 4) != (int)local_a8) {
            *(int *)(lVar9 + (ulonglong)((uint)local_c8 & 0x1ff) * 4) = (int)local_a8;
          }
          piVar1 = (int *)(*(longlong *)
                            (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) +
                            ((ulonglong)_local_c8 >> 0x29) * 8) +
                          (ulonglong)((uint)((ulonglong)_local_c8 >> 0x20) & 0x1ff) * 4);
          iVar12 = (int)((ulonglong)local_a8 >> 0x20);
          if (*piVar1 != iVar12) {
            *piVar1 = iVar12;
          }
          this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
          lVar9 = *(longlong *)
                   ((this_00->ParentVertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)local_c0._0_4_ >> 9) * 8);
          if (*(int *)(lVar9 + (ulonglong)(local_c0._0_4_ & 0x1ff) * 4) != iVar17) {
            *(int *)(lVar9 + (ulonglong)(local_c0._0_4_ & 0x1ff) * 4) = iVar17;
            this_00 = *(TDynamicMeshOverlay<float,2> **)((longlong)this + 8);
          }
          UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                    (this_00,uVar13,(FIndex3i *)local_c8,false);
        }
      }
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      if ((int)uVar15 <= (int)uVar13) break;
      while( true ) {
        lVar2 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
        lVar9 = *(longlong *)((pFVar7->RefCounts).Blocks.AllocatorInstance.Data + (uVar14 >> 9) * 8)
        ;
        if ((*(short *)(lVar2 + lVar9) != 0) && (*(short *)(lVar2 + lVar9) != -1)) break;
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014c861f49;
      }
    }
  } while( true );
}

// DoesUnwrapMatchOverlay<1> @ 14c867ea0

bool __cdecl
UE::Geometry::UVUnwrapMeshUtil::DoesUnwrapMatchOverlay<1>
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          FDynamicMesh3 *param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector2<float>_const_&)>
          *param_3,double param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined4 local_res8;
  undefined4 local_resc;
  int local_88;
  double local_70;
  double local_68;
  double local_60;
  
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar4 = *(longlong *)param_1;
  if (lVar4 == 0) {
    iVar14 = 0x204;
LAB_14c8683d3:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                       ,iVar14,L"");
    if (!bVar9) {
      return false;
    }
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  if (*(int *)&param_1->field_0x38 != (param_2->VertexRefCounts).UsedCount) {
    iVar14 = 0x209;
    goto LAB_14c8683d3;
  }
  if (*(int *)(lVar4 + 0x170) < (param_2->TriangleRefCounts).UsedCount) {
    iVar14 = 0x20a;
    goto LAB_14c8683d3;
  }
  uVar13 = 0;
  uVar12 = *(int *)&param_1->field_0x8 * 0x200 + *(int *)&param_1->field_0xc;
  if ((uVar12 == 0) || ((ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U) < 0xfffe)) {
LAB_14c867f77:
    bVar9 = uVar13 == uVar12;
  }
  else {
    uVar13 = 1;
    bVar9 = uVar12 == 1;
    if (1 < (int)uVar12) {
      do {
        sVar3 = *(short *)((*(undefined8 **)&param_1->field_0x10)[uVar13 >> 9] +
                          (ulonglong)(uVar13 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar12);
      goto LAB_14c867f77;
    }
  }
  if (!bVar9) {
LAB_14c867f87:
    do {
      if (((int)uVar13 < 0) ||
         ((int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar13)) {
LAB_14c8680fd:
        iVar14 = 0x210;
        goto LAB_14c8683d3;
      }
      uVar11 = (ulonglong)(uVar13 & 0x1ff);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_2->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
                                      uVar11 * 2) - 1U)) goto LAB_14c8680fd;
      local_res8 = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)&param_1->field_0x48 +
                      (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
      local_resc = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)&param_1->field_0x48 +
                      (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
      (**(code **)param_3)(&local_70,*(undefined8 *)&param_3->field_0x8,&local_res8);
      lVar5 = *(longlong *)
               ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
      pdVar1 = (double *)(lVar5 + uVar11 * 0x18);
      dVar17 = local_70 - *pdVar1;
      if (((param_4 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar16,
                                       SUB84(dVar17,0) & uVar15)) ||
          (dVar17 = local_68 - pdVar1[1],
          param_4 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar16,
                                     SUB84(dVar17,0) & uVar15))) ||
         (dVar17 = local_60 - *(double *)(lVar5 + 0x10 + uVar11 * 0x18),
         param_4 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar16,
                                    SUB84(dVar17,0) & uVar15))) {
        iVar14 = 0x214;
        goto LAB_14c8683d3;
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar13 < (int)uVar12) {
        do {
          lVar5 = *(longlong *)(*(longlong *)&param_1->field_0x10 + (ulonglong)(uVar13 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) goto LAB_14c867f87;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar12);
      }
    } while (uVar13 != uVar12);
  }
  uVar16 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
  uVar15 = 0;
  if ((uVar16 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar15 = 1;
    if (1 < (int)uVar16) {
      do {
        sVar3 = *(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar12 >> 9] +
                          (ulonglong)(uVar12 & 0x1ff) * 2);
        if ((sVar3 != 0) && (uVar15 = uVar12, sVar3 != -1)) break;
        uVar12 = uVar12 + 1;
        uVar15 = uVar12;
      } while ((int)uVar12 < (int)uVar16);
    }
  }
  if (uVar15 != uVar16) {
    lVar5 = *(longlong *)&param_1->field_0x78;
LAB_14c868190:
    do {
      uVar12 = uVar15 * 3;
      iVar14 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                       (ulonglong)(uVar12 & 0x1ff) * 4);
      if (-1 < iVar14) {
        if ((-1 < (int)uVar15) &&
           ((int)uVar15 <
            (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_2->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          uVar11 = (ulonglong)(uVar15 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar15 >> 9) * 8) + uVar11 * 2) - 1U) <
              0xfffe) {
            lVar6 = *(longlong *)
                     ((param_2->Triangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar15 >> 9) * 8);
            uVar2 = *(undefined8 *)(lVar6 + uVar11 * 0xc);
            local_88 = (int)uVar2;
            if (((local_88 == iVar14) &&
                ((int)((ulonglong)uVar2 >> 0x20) ==
                 *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                         (ulonglong)(uVar12 + 1 & 0x1ff) * 4))) &&
               (*(int *)(lVar6 + 8 + uVar11 * 0xc) ==
                *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                        (ulonglong)(uVar12 + 2 & 0x1ff) * 4))) goto LAB_14c86827c;
            iVar14 = 0x220;
            goto LAB_14c8683d3;
          }
        }
        iVar14 = 0x21f;
        goto LAB_14c8683d3;
      }
LAB_14c86827c:
      uVar15 = uVar15 + 1;
      if ((int)uVar15 < (int)uVar16) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x148) + (ulonglong)(uVar15 >> 9) * 8);
          if ((*(short *)(lVar6 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar6 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) goto LAB_14c868190;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
    } while (uVar15 != uVar16);
  }
  uVar16 = (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar15 = 0;
  if ((uVar16 != 0) &&
     (pFVar7 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar15 = 0,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar15 = 1;
    bVar9 = uVar16 == 1;
    if ((int)uVar16 < 2) goto LAB_14c86832b;
    do {
      sVar3 = *(short *)(*(longlong *)(pFVar7 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  bVar9 = uVar15 == uVar16;
LAB_14c86832b:
  if (!bVar9) {
LAB_14c868340:
    do {
      if (*(int *)(*(longlong *)
                    (*(longlong *)&param_1->field_0x78 + (ulonglong)(uVar15 * 3 >> 9) * 8) +
                  (ulonglong)(uVar15 * 3 & 0x1ff) * 4) < 0) {
        iVar14 = 0x226;
        goto LAB_14c8683d3;
      }
      uVar15 = uVar15 + 1;
      if ((int)uVar15 < (int)uVar16) {
        do {
          lVar4 = *(longlong *)
                   ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar15 >> 9) * 8);
          if ((*(short *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) goto LAB_14c868340;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
    } while (uVar15 != uVar16);
  }
  return true;
}

// DoesUnwrapMatchOverlay<2> @ 14c868400

bool __cdecl
UE::Geometry::UVUnwrapMeshUtil::DoesUnwrapMatchOverlay<2>
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          FDynamicMesh3 *param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector2<float>_const_&)>
          *param_3,double param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  atomic<unsigned_char> *paVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  undefined4 local_res8;
  undefined4 local_resc;
  int local_88;
  double local_70;
  double local_68;
  double local_60;
  
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar4 = *(longlong *)param_1;
  if (lVar4 == 0) {
    iVar16 = 0x204;
    paVar11 = &bGEnsureHasExecuted<5588047018133029380>;
LAB_14c86897b:
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (paVar11,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                       ,iVar16,"false");
    if (!bVar9) {
      return false;
    }
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  if (*(int *)&param_1->field_0x38 != (param_2->VertexRefCounts).UsedCount) {
    iVar16 = 0x209;
    paVar11 = &bGEnsureHasExecuted<5588047018133029385>;
    goto LAB_14c86897b;
  }
  if (*(int *)(lVar4 + 0x170) < (param_2->TriangleRefCounts).UsedCount) {
    iVar16 = 0x20a;
    paVar11 = &bGEnsureHasExecuted<5588047018133029386>;
    goto LAB_14c86897b;
  }
  uVar14 = 0;
  uVar13 = *(int *)&param_1->field_0xc + *(int *)&param_1->field_0x8 * 0x200;
  if ((uVar13 == 0) || ((ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U) < 0xfffe)) {
LAB_14c8684f7:
    bVar9 = uVar14 == uVar13;
  }
  else {
    uVar14 = 1;
    bVar9 = uVar13 == 1;
    if (1 < (int)uVar13) {
      do {
        sVar3 = *(short *)((*(undefined8 **)&param_1->field_0x10)[uVar14 >> 9] +
                          (ulonglong)(uVar14 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar13);
      goto LAB_14c8684f7;
    }
  }
  if (!bVar9) {
LAB_14c868507:
    do {
      if (((int)uVar14 < 0) ||
         ((int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar14)) {
LAB_14c868684:
        iVar16 = 0x210;
        paVar11 = &bGEnsureHasExecuted<5588047018133029392>;
        goto LAB_14c86897b;
      }
      uVar12 = (ulonglong)(uVar14 & 0x1ff);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_2->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
                                      uVar12 * 2) - 1U)) goto LAB_14c868684;
      local_res8 = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)&param_1->field_0x48 +
                      (ulonglong)((uVar14 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar14 * 2 & 0x1ff) * 4);
      local_resc = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)&param_1->field_0x48 +
                      (ulonglong)((uVar14 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar14 * 2 + 1 & 0x1ff) * 4);
      (**(code **)param_3)(&local_70,*(undefined8 *)&param_3->field_0x8,&local_res8);
      lVar5 = *(longlong *)
               ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
      pdVar1 = (double *)(lVar5 + uVar12 * 0x18);
      dVar18 = local_70 - *pdVar1;
      if (((param_4 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar17,
                                       SUB84(dVar18,0) & uVar15)) ||
          (dVar18 = local_68 - pdVar1[1],
          param_4 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar17,
                                     SUB84(dVar18,0) & uVar15))) ||
         (dVar18 = local_60 - *(double *)(lVar5 + 0x10 + uVar12 * 0x18),
         param_4 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar17,
                                    SUB84(dVar18,0) & uVar15))) {
        iVar16 = 0x214;
        paVar11 = &bGEnsureHasExecuted<5588047018133029396>;
        goto LAB_14c86897b;
      }
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar13) {
        do {
          lVar5 = *(longlong *)(*(longlong *)&param_1->field_0x10 + (ulonglong)(uVar14 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) goto LAB_14c868507;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar13);
      }
    } while (uVar14 != uVar13);
  }
  uVar17 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
  uVar15 = 0;
  if ((uVar17 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar15 = 1;
    if (1 < (int)uVar17) {
      do {
        sVar3 = *(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar13 >> 9] +
                          (ulonglong)(uVar13 & 0x1ff) * 2);
        if ((sVar3 != 0) && (uVar15 = uVar13, sVar3 != -1)) break;
        uVar13 = uVar13 + 1;
        uVar15 = uVar13;
      } while ((int)uVar13 < (int)uVar17);
    }
  }
  if (uVar15 != uVar17) {
    lVar5 = *(longlong *)&param_1->field_0x78;
LAB_14c868720:
    do {
      uVar13 = uVar15 * 3;
      iVar16 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar13 >> 9) * 8) +
                       (ulonglong)(uVar13 & 0x1ff) * 4);
      if (-1 < iVar16) {
        if ((-1 < (int)uVar15) &&
           ((int)uVar15 <
            (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_2->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          uVar12 = (ulonglong)(uVar15 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar15 >> 9) * 8) + uVar12 * 2) - 1U) <
              0xfffe) {
            lVar6 = *(longlong *)
                     ((param_2->Triangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar15 >> 9) * 8);
            uVar2 = *(undefined8 *)(lVar6 + uVar12 * 0xc);
            local_88 = (int)uVar2;
            if (((local_88 == iVar16) &&
                ((int)((ulonglong)uVar2 >> 0x20) ==
                 *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                         (ulonglong)(uVar13 + 1 & 0x1ff) * 4))) &&
               (*(int *)(lVar6 + 8 + uVar12 * 0xc) ==
                *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                        (ulonglong)(uVar13 + 2 & 0x1ff) * 4))) goto LAB_14c86880c;
            iVar16 = 0x220;
            paVar11 = &bGEnsureHasExecuted<5588047018133029408>;
            goto LAB_14c86897b;
          }
        }
        iVar16 = 0x21f;
        paVar11 = &bGEnsureHasExecuted<5588047018133029407>;
        goto LAB_14c86897b;
      }
LAB_14c86880c:
      uVar15 = uVar15 + 1;
      if ((int)uVar15 < (int)uVar17) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x148) + (ulonglong)(uVar15 >> 9) * 8);
          if ((*(short *)(lVar6 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar6 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) goto LAB_14c868720;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar17);
      }
    } while (uVar15 != uVar17);
  }
  uVar17 = (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar15 = 0;
  if ((uVar17 != 0) &&
     (pFVar7 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar15 = 0,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar15 = 1;
    bVar9 = uVar17 == 1;
    if ((int)uVar17 < 2) goto LAB_14c8688bb;
    do {
      sVar3 = *(short *)(*(longlong *)(pFVar7 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar17);
  }
  bVar9 = uVar15 == uVar17;
LAB_14c8688bb:
  if (!bVar9) {
LAB_14c8688d0:
    do {
      if (*(int *)(*(longlong *)
                    (*(longlong *)&param_1->field_0x78 + (ulonglong)(uVar15 * 3 >> 9) * 8) +
                  (ulonglong)(uVar15 * 3 & 0x1ff) * 4) < 0) {
        iVar16 = 0x226;
        paVar11 = &bGEnsureHasExecuted<5588047018133029414>;
        goto LAB_14c86897b;
      }
      uVar15 = uVar15 + 1;
      if ((int)uVar15 < (int)uVar17) {
        do {
          lVar4 = *(longlong *)
                   ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar15 >> 9) * 8);
          if ((*(short *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar4 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) goto LAB_14c8688d0;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar17);
      }
    } while (uVar15 != uVar17);
  }
  return true;
}

// DoesUnwrapMatchOverlay<0> @ 14c8689b0

bool __cdecl
UE::Geometry::UVUnwrapMeshUtil::DoesUnwrapMatchOverlay<0>
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          FDynamicMesh3 *param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector2<float>_const_&)>
          *param_3,double param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  double dVar15;
  undefined4 local_res8;
  undefined4 local_resc;
  double local_88;
  double local_80;
  double local_78;
  double local_60;
  
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar5 = *(longlong *)param_1;
  if (((lVar5 == 0) || (*(int *)&param_1->field_0x38 != (param_2->VertexRefCounts).UsedCount)) ||
     (*(int *)(lVar5 + 0x170) < (param_2->TriangleRefCounts).UsedCount)) {
    return false;
  }
  uVar11 = 0;
  uVar10 = *(int *)&param_1->field_0x8 * 0x200 + *(int *)&param_1->field_0xc;
  if ((uVar10 == 0) || ((ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U) < 0xfffe)) {
LAB_14c868a68:
    bVar14 = uVar11 == uVar10;
  }
  else {
    uVar11 = 1;
    bVar14 = uVar10 == 1;
    if (1 < (int)uVar10) {
      do {
        sVar3 = *(short *)((*(undefined8 **)&param_1->field_0x10)[uVar11 >> 9] +
                          (ulonglong)(uVar11 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar10);
      goto LAB_14c868a68;
    }
  }
  if (!bVar14) {
LAB_14c868a78:
    do {
      if ((int)uVar11 < 0) {
        return false;
      }
      if ((int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar11) {
        return false;
      }
      uVar9 = (ulonglong)(uVar11 & 0x1ff);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_2->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) +
                                      uVar9 * 2) - 1U)) {
        return false;
      }
      local_res8 = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)&param_1->field_0x48 +
                      (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar11 * 2 & 0x1ff) * 4);
      local_resc = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)&param_1->field_0x48 +
                      (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar11 * 2 + 1 & 0x1ff) * 4);
      (**(code **)param_3)(&local_88,*(undefined8 *)&param_3->field_0x8,&local_res8);
      lVar6 = *(longlong *)
               ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
      pdVar1 = (double *)(lVar6 + uVar9 * 0x18);
      local_60 = *(double *)(lVar6 + 0x10 + uVar9 * 0x18);
      dVar15 = local_88 - *pdVar1;
      if (param_4 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar13,
                                     SUB84(dVar15,0) & uVar12)) {
        return false;
      }
      dVar15 = local_80 - pdVar1[1];
      if (param_4 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar13,
                                     SUB84(dVar15,0) & uVar12)) {
        return false;
      }
      if (param_4 < (double)CONCAT44((uint)((ulonglong)(local_78 - local_60) >> 0x20) & uVar13,
                                     SUB84(local_78 - local_60,0) & uVar12)) {
        return false;
      }
      uVar11 = uVar11 + 1;
      if ((int)uVar11 < (int)uVar10) {
        do {
          lVar6 = *(longlong *)(*(longlong *)&param_1->field_0x10 + (ulonglong)(uVar11 >> 9) * 8);
          if ((*(short *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) goto LAB_14c868a78;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar10);
      }
    } while (uVar11 != uVar10);
  }
  uVar13 = *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144);
  uVar12 = 0;
  if ((uVar13 != 0) &&
     (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x148) - 1U))) {
    uVar10 = 1;
    uVar12 = 1;
    if (1 < (int)uVar13) {
      do {
        sVar3 = *(short *)((*(undefined8 **)(lVar5 + 0x148))[uVar10 >> 9] +
                          (ulonglong)(uVar10 & 0x1ff) * 2);
        if ((sVar3 != 0) && (uVar12 = uVar10, sVar3 != -1)) break;
        uVar10 = uVar10 + 1;
        uVar12 = uVar10;
      } while ((int)uVar10 < (int)uVar13);
    }
  }
  if (uVar12 != uVar13) {
    lVar6 = *(longlong *)&param_1->field_0x78;
LAB_14c868c70:
    do {
      uVar10 = uVar12 * 3;
      iVar4 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < iVar4) {
        if ((int)uVar12 < 0) {
          return false;
        }
        if ((int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_2->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar12) {
          return false;
        }
        uVar9 = (ulonglong)(uVar12 & 0x1ff);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_2->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8) +
                                        uVar9 * 2) - 1U)) {
          return false;
        }
        lVar7 = *(longlong *)
                 ((param_2->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
        ;
        uVar2 = *(undefined8 *)(lVar7 + uVar9 * 0xc);
        local_88._0_4_ = (int)uVar2;
        if (local_88._0_4_ != iVar4) {
          return false;
        }
        if ((int)((ulonglong)uVar2 >> 0x20) !=
            *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                    (ulonglong)(uVar10 + 1 & 0x1ff) * 4)) {
          return false;
        }
        if (*(int *)(lVar7 + 8 + uVar9 * 0xc) !=
            *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                    (ulonglong)(uVar10 + 2 & 0x1ff) * 4)) {
          return false;
        }
      }
      uVar12 = uVar12 + 1;
      if ((int)uVar12 < (int)uVar13) {
        do {
          lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x148) + (ulonglong)(uVar12 >> 9) * 8);
          if ((*(short *)(lVar7 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar7 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) goto LAB_14c868c70;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar13);
      }
    } while (uVar12 != uVar13);
  }
  uVar13 = (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar12 = 0;
  if ((uVar13 != 0) &&
     (pFVar8 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar12 = 0,
     0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
    uVar12 = 1;
    bVar14 = uVar13 == 1;
    if ((int)uVar13 < 2) goto LAB_14c868e0b;
    do {
      sVar3 = *(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  bVar14 = uVar12 == uVar13;
LAB_14c868e0b:
  if (!bVar14) {
LAB_14c868e20:
    do {
      if (*(int *)(*(longlong *)
                    (*(longlong *)&param_1->field_0x78 + (ulonglong)(uVar12 * 3 >> 9) * 8) +
                  (ulonglong)(uVar12 * 3 & 0x1ff) * 4) < 0) {
        return false;
      }
      uVar12 = uVar12 + 1;
      if ((int)uVar12 < (int)uVar13) {
        do {
          lVar5 = *(longlong *)
                   ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar12 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) goto LAB_14c868e20;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar13);
      }
    } while (uVar12 != uVar13);
  }
  return true;
}

// GenerateUVUnwrapMesh @ 14c8f0fc0

void __cdecl
UE::Geometry::UVUnwrapMeshUtil::GenerateUVUnwrapMesh
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          FDynamicMesh3 *param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector2<float>_const_&)>
          *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  FDynamicMeshAttributeSet *pFVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  float local_res8;
  undefined4 local_resc;
  FIndex3i_u_0 local_88;
  double local_78;
  FVertexInfo local_70;
  
  FDynamicMesh3::Clear(param_2);
  FDynamicMesh3::EnableAttributes(param_2);
  pFVar10 = (param_2->AttributeSet).Ptr;
  pFVar6 = (FDynamicMeshAttributeSet *)0x0;
  pFVar9 = pFVar6;
  if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar9 = pFVar10;
  }
  pFVar10 = pFVar6;
  if (0 < (pFVar9->UVLayers).Array.ArrayNum) {
    pFVar10 = *(FDynamicMeshAttributeSet **)(pFVar9->UVLayers).Array.AllocatorInstance.Data;
  }
  (**(code **)(param_2->_padding_ + 8))(param_2);
  uVar7 = *(int *)&param_1->field_0xc + *(int *)&param_1->field_0x8 * 0x200;
  pFVar9 = pFVar6;
  if ((uVar7 == 0) ||
     (pFVar9 = (FDynamicMeshAttributeSet *)0x0,
     (ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U) < 0xfffe)) {
LAB_14c8f1085:
    uVar8 = (uint)pFVar9;
  }
  else {
    pFVar9 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar8 = 1;
    if (1 < (int)uVar7) {
      do {
        uVar5 = (ulonglong)((uint)pFVar9 & 0x1ff);
        lVar2 = (*(undefined8 **)&param_1->field_0x10)[(ulonglong)pFVar9 >> 9];
        if ((*(short *)(lVar2 + uVar5 * 2) != 0) && (*(short *)(lVar2 + uVar5 * 2) != -1)) break;
        uVar8 = (uint)pFVar9 + 1;
        pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)uVar7);
      goto LAB_14c8f1085;
    }
  }
joined_r0x00014c8f1087:
  if (uVar8 != uVar7) {
    while( true ) {
      uVar8 = (uint)pFVar9;
      local_res8 = *(float *)(*(longlong *)
                               (*(longlong *)&param_1->field_0x48 +
                               (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar8 * 2 & 0x1ff) * 4);
      local_resc = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)&param_1->field_0x48 +
                      (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar8 * 2 + 1 & 0x1ff) * 4);
      (**(code **)param_3)(&local_88,*(undefined8 *)&param_3->field_0x8,&local_res8);
      local_70.Normal.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_70.Color.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_70.Normal.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_70.Color.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_70.Position.field0_0x0._s_0.Z = local_78;
      local_70.UV.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_70.bHaveN = false;
      local_70.bHaveC = false;
      local_70.bHaveUV = false;
      FDynamicMesh3::InsertVertex(param_2,uVar8,&local_70,true);
      TDynamicMeshOverlay<float,2>::InsertElement
                ((TDynamicMeshOverlay<float,2> *)pFVar10,uVar8,&local_res8,true);
      uVar8 = uVar8 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar8;
      if ((int)uVar7 <= (int)uVar8) break;
      while( true ) {
        uVar5 = (ulonglong)((uint)pFVar9 & 0x1ff);
        if ((*(short *)(*(longlong *)
                         (*(longlong *)&param_1->field_0x10 + ((ulonglong)pFVar9 >> 9) * 8) +
                       uVar5 * 2) != 0) &&
           (*(short *)(*(longlong *)
                        (*(longlong *)&param_1->field_0x10 + ((ulonglong)pFVar9 >> 9) * 8) +
                      uVar5 * 2) != -1)) break;
        uVar8 = (uint)pFVar9 + 1;
        pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar8;
        if ((int)uVar7 <= (int)uVar8) goto joined_r0x00014c8f1087;
      }
    }
    goto joined_r0x00014c8f1087;
  }
  (**(code **)(param_2->_padding_ + 0x10))(param_2);
  FRefCountVector::RebuildFreeList((FRefCountVector *)&pFVar10->_padding_);
  lVar2 = *(longlong *)param_1;
  (**(code **)(param_2->_padding_ + 0x18))(param_2);
  uVar7 = *(int *)(lVar2 + 0x144) + *(int *)(lVar2 + 0x140) * 0x200;
  if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x148) - 1U))) {
    pFVar6 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar8 = 1;
    if ((int)uVar7 < 2) goto joined_r0x00014c8f1238;
    do {
      uVar5 = (ulonglong)((uint)pFVar6 & 0x1ff);
      lVar3 = (*(undefined8 **)(lVar2 + 0x148))[(ulonglong)pFVar6 >> 9];
      if ((*(short *)(lVar3 + uVar5 * 2) != 0) && (*(short *)(lVar3 + uVar5 * 2) != -1)) break;
      uVar8 = (uint)pFVar6 + 1;
      pFVar6 = (FDynamicMeshAttributeSet *)(ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar7);
  }
  uVar8 = (uint)pFVar6;
joined_r0x00014c8f1238:
  do {
    if (uVar8 == uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00014c8f1336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2->_padding_ + 0x20))(param_2);
      return;
    }
    while( true ) {
      lVar3 = *(longlong *)&param_1->field_0x78;
      iVar4 = (int)pFVar6;
      uVar8 = iVar4 * 3;
      iVar1 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
      if (-1 < iVar1) {
        local_88._s_0.C =
             *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                     (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
        local_88._s_0.B =
             *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                     (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        local_88._s_0.A = iVar1;
        FDynamicMesh3::InsertTriangle(param_2,iVar4,(FIndex3i *)&local_88._s_0,0,true);
        TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)pFVar10,iVar4,(FIndex3i *)&local_88._s_0,true);
      }
      uVar8 = iVar4 + 1;
      pFVar6 = (FDynamicMeshAttributeSet *)(ulonglong)uVar8;
      if ((int)uVar7 <= (int)uVar8) break;
      while( true ) {
        uVar5 = (ulonglong)((uint)pFVar6 & 0x1ff);
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x148) + ((ulonglong)pFVar6 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar5 * 2) != 0) && (*(short *)(lVar3 + uVar5 * 2) != -1)) break;
        uVar8 = (uint)pFVar6 + 1;
        pFVar6 = (FDynamicMeshAttributeSet *)(ulonglong)uVar8;
        if ((int)uVar7 <= (int)uVar8) goto joined_r0x00014c8f1238;
      }
    }
  } while( true );
}

// UpdateOverlayFromOverlay @ 14c923190

void __cdecl
UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,bool param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  IndexEnumerable local_res20;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_68;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_60;
  TDynamicVector<unsigned_short,512> local_58;
  TDynamicVector<int,512> local_40;
  undefined4 local_28;
  
  if (((param_4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
      (param_5 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) && (param_3)) {
    TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
              (&local_58,(TDynamicVector<unsigned_short,512> *)&param_1->field_0x8);
    TDynamicVector<int,512>::TDynamicVector<int,512>
              (&local_40,(TDynamicVector<int,512> *)&param_1->field_0x20);
    local_28 = *(undefined4 *)&param_1->field_0x38;
    puVar2 = &param_2->field_0x8;
    if ((TDynamicVector<unsigned_short,512> *)puVar2 != &local_58) {
      TDynamicVector<unsigned_short,512>::Empty((TDynamicVector<unsigned_short,512> *)puVar2,0);
      puVar1 = &param_2->field_0x10;
      *(uint *)puVar2 = local_58.CurBlock;
      *(uint *)&param_2->field_0xc = local_58.CurBlockUsed;
      if ((TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
           *)puVar1 != &local_58.Blocks) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(FScriptContainerElement **)puVar1 = local_58.Blocks.AllocatorInstance.Data;
        *(int *)&param_2->field_0x18 = local_58.Blocks.ArrayNum;
        *(int *)&param_2->field_0x1c = local_58.Blocks.ArrayMax;
        local_58.Blocks.ArrayNum = 0;
        local_58.Blocks.ArrayMax = 0;
        local_58.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_58.CurBlock = 0;
      local_58.CurBlockUsed = 0;
      TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&local_58);
    }
    puVar2 = &param_2->field_0x20;
    if ((TDynamicVector<int,512> *)puVar2 != &local_40) {
      TDynamicVector<int,512>::Empty((TDynamicVector<int,512> *)puVar2,0);
      *(uint *)puVar2 = local_40.CurBlock;
      *(uint *)&param_2->field_0x24 = local_40.CurBlockUsed;
      puVar2 = &param_2->field_0x28;
      if ((TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
          puVar2 != &local_40.Blocks) {
        if (*(void **)puVar2 != (void *)0x0) {
          FMemory::Free(*(void **)puVar2);
        }
        *(FScriptContainerElement **)puVar2 = local_40.Blocks.AllocatorInstance.Data;
        *(int *)&param_2->field_0x30 = local_40.Blocks.ArrayNum;
        *(int *)&param_2->field_0x34 = local_40.Blocks.ArrayMax;
        local_40.Blocks.ArrayNum = 0;
        local_40.Blocks.ArrayMax = 0;
        local_40.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_40.CurBlock = 0;
      local_40.CurBlockUsed = 0;
      TDynamicVector<int,512>::AddAllocatedBlock(&local_40);
    }
    *(undefined4 *)&param_2->field_0x38 = local_28;
    local_28 = 0;
    TDynamicVector<int,512>::Empty(&local_40,0);
    if (local_40.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<unsigned_short,512>::Empty(&local_58,0);
    if (local_58.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<float,512>::operator=
              ((TDynamicVector<float,512> *)&param_2->field_0x40,
               (TDynamicVector<float,512> *)&param_1->field_0x40);
    TDynamicVector<int,512>::operator=
              ((TDynamicVector<int,512> *)&param_2->field_0x58,
               (TDynamicVector<int,512> *)&param_1->field_0x58);
    TDynamicVector<int,512>::operator=
              ((TDynamicVector<int,512> *)&param_2->field_0x70,
               (TDynamicVector<int,512> *)&param_1->field_0x70);
    return;
  }
  local_68 = param_1;
  local_60 = param_2;
  if (param_4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res20.Vector = (FRefCountVector *)&param_1->field_0x8;
    `UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_1>::
    operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(&local_68,&local_res20);
  }
  else {
    `UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_1>::
    operator()<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_68,param_4);
  }
  if (param_5 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_68 = param_1;
    local_60 = param_2;
    `UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_2>::
    operator()<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_68,param_5);
    return;
  }
  local_res20.Vector = (FRefCountVector *)(*(longlong *)param_1 + 0x140);
  local_68 = param_1;
  local_60 = param_2;
  `UE::Geometry::UVUnwrapMeshUtil::UpdateOverlayFromOverlay'::__l2::<lambda_2>::
  operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(&local_68,&local_res20);
  return;
}

// UpdateUVOverlayFromUnwrapMesh @ 14c9244d0

void __cdecl
UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  IndexEnumerable local_res8;
  IndexEnumerable local_res10;
  IndexEnumerable local_48;
  FDynamicMesh3 *local_40;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_38;
  FDynamicMesh3 *local_30;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(int *)(*(longlong *)param_2 + 0x140) * 0x200 + *(int *)(*(longlong *)param_2 + 0x144) ==
      (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
      (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) {
    local_20 = *(undefined8 *)param_3;
    local_18 = *(undefined8 *)&param_3->field_0x8;
    local_30 = param_1;
    local_28 = param_2;
    if (param_4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      local_res8.Vector = &param_1->VertexRefCounts;
      `UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_1>::
      operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(&local_30,&local_res8);
    }
    else {
      `UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_1>::
      operator()<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_30,param_4);
    }
    local_40 = param_1;
    local_38 = param_2;
    if (param_5 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      `UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_2>::
      operator()<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                (&local_40,param_5,param_5);
      return;
    }
    local_48.Vector = (FRefCountVector *)(*(longlong *)param_2 + 0x140);
    local_res10.Vector = &param_1->TriangleRefCounts;
    `UE::Geometry::UVUnwrapMeshUtil::UpdateUVOverlayFromUnwrapMesh'::__l2::<lambda_2>::
    operator()<UE::Geometry::FRefCountVector::IndexEnumerable,UE::Geometry::FRefCountVector::IndexEnumerable>
              (&local_40,&local_48,&local_res10);
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5588047018133029162>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVUnwrapMeshUtil.cpp"
                       ,0x12a,
                       "UVOverlayOut.GetParentMesh()->MaxTriangleID() == UnwrapMeshIn.MaxTriangleID()"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateUVUnwrapMesh @ 14c924620

void __cdecl
UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          FDynamicMesh3 *param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector2<float>_const_&)>
          *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  IndexEnumerable local_res8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_38;
  FDynamicMesh3 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  FDynamicMeshAttributeSet *local_18;
  
  pFVar1 = (param_2->AttributeSet).Ptr;
  local_18 = (FDynamicMeshAttributeSet *)0x0;
  pFVar2 = local_18;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  if (0 < (pFVar2->UVLayers).Array.ArrayNum) {
    local_18 = *(FDynamicMeshAttributeSet **)(pFVar2->UVLayers).Array.AllocatorInstance.Data;
  }
  local_28 = *(undefined8 *)param_3;
  local_20 = *(undefined8 *)&param_3->field_0x8;
  local_38 = param_1;
  local_30 = param_2;
  if (param_4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res8.Vector = (FRefCountVector *)&param_1->field_0x8;
    `UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
    operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(&local_38,&local_res8);
  }
  else {
    `UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
    operator()<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_38,param_4);
  }
  if (param_5 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    UVUnwrapMeshUtilLocals::UpdateUnwrapTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
              (param_1,param_5,param_5->ArrayNum,param_5,param_2);
    return;
  }
  param_5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)param_1 + 0x140);
  local_res8.Vector = &param_2->TriangleRefCounts;
  UVUnwrapMeshUtilLocals::UpdateUnwrapTriangles<UE::Geometry::FRefCountVector::IndexEnumerable>
            (param_1,&local_res8,(param_2->TriangleRefCounts).UsedCount,(IndexEnumerable *)&param_5,
             param_2);
  return;
}

// UpdateUVUnwrapMesh @ 14c924710

void __cdecl
UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh
          (FDynamicMesh3 *param_1,FDynamicMesh3 *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  IndexEnumerable local_res18;
  IndexEnumerable local_38;
  FDynamicMesh3 *local_30;
  FDynamicMesh3 *local_28;
  FDynamicMeshAttributeSet *local_20;
  FDynamicMeshAttributeSet *local_18;
  
  if ((param_3 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (param_4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
    FDynamicMesh3::Copy(param_2,param_1,false,false,false,true);
    return;
  }
  pFVar3 = (param_1->AttributeSet).Ptr;
  local_18 = (FDynamicMeshAttributeSet *)0x0;
  pFVar1 = local_18;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar1 = pFVar3;
  }
  pFVar3 = local_18;
  if (0 < (pFVar1->UVLayers).Array.ArrayNum) {
    pFVar3 = *(FDynamicMeshAttributeSet **)(pFVar1->UVLayers).Array.AllocatorInstance.Data;
  }
  pFVar1 = (param_2->AttributeSet).Ptr;
  pFVar2 = local_18;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  if (0 < (pFVar2->UVLayers).Array.ArrayNum) {
    local_18 = *(FDynamicMeshAttributeSet **)(pFVar2->UVLayers).Array.AllocatorInstance.Data;
  }
  local_30 = param_1;
  local_28 = param_2;
  local_20 = pFVar3;
  if (param_3 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res18.Vector = &param_1->VertexRefCounts;
    `UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
    operator()<UE::Geometry::FRefCountVector::IndexEnumerable>(&local_30,&local_res18);
  }
  else {
    `UE::Geometry::UVUnwrapMeshUtil::UpdateUVUnwrapMesh'::__l2::<lambda_1>::
    operator()<TArray<int,TSizedDefaultAllocator<32>_>_>(&local_30,param_3);
  }
  if (param_4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res18.Vector = &param_1->TriangleRefCounts;
    local_38.Vector = &param_2->TriangleRefCounts;
    UVUnwrapMeshUtilLocals::UpdateUnwrapTriangles<UE::Geometry::FRefCountVector::IndexEnumerable>
              ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar3,&local_38,
               (param_2->TriangleRefCounts).UsedCount,&local_res18,param_2);
  }
  else {
    UVUnwrapMeshUtilLocals::UpdateUnwrapTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar3,param_4,
               param_4->ArrayNum,param_4,param_2);
  }
  return;
}

