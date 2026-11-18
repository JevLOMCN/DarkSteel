// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// Mirror @ 14c81bc20

void __thiscall UE::Geometry::FMeshMirror::Mirror(FMeshMirror *this,FProgressCancel *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FDynamicMesh3 *pFVar9;
  code *pcVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FDynamicMeshAttributeSet *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  short sVar18;
  int iVar19;
  undefined8 uVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  int iVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  longlong local_res10;
  float local_b8;
  IndexIterator local_a8 [2];
  double local_88;
  
  if ((param_1 != (FProgressCancel *)0x0) && (bVar17 = FProgressCancel::Cancelled(param_1), bVar17))
  {
    return;
  }
  Normalize<double>(&this->PlaneNormal,0.0);
  pFVar9 = this->Mesh;
  FRefCountVector::IndexIterator::IndexIterator
            (local_a8,&pFVar9->VertexRefCounts,0,
             (pFVar9->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar9->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar27 = (pFVar9->VertexRefCounts).RefCounts.CurBlock;
  uVar24 = (pFVar9->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar25 = (ulonglong)(uint)local_a8[0]._8_4_;
  uVar23 = local_a8[0]._8_4_;
  while (uVar23 != uVar27 * 0x200 + uVar24) {
    dVar6 = (this->PlaneNormal).field0_0x0._s_0.X;
    dVar7 = (this->PlaneNormal).field0_0x0._s_0.Y;
    dVar8 = (this->PlaneNormal).field0_0x0._s_0.Z;
    pFVar9 = this->Mesh;
    uVar22 = (uint)uVar25;
    uVar26 = (ulonglong)(uVar22 & 0x1ff);
    lVar31 = *(longlong *)((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (uVar25 >> 9) * 8);
    pdVar2 = (double *)(lVar31 + uVar26 * 0x18);
    dVar35 = *pdVar2;
    dVar37 = pdVar2[1];
    local_88 = *(double *)(lVar31 + 0x10 + uVar26 * 0x18);
    dVar33 = local_88 - (this->PlaneOrigin).field0_0x0._s_0.Z;
    dVar36 = dVar35 - (this->PlaneOrigin).field0_0x0._s_0.X;
    dVar38 = dVar37 - (this->PlaneOrigin).field0_0x0._s_0.Y;
    dVar33 = (dVar38 + dVar38) * dVar7 + (dVar36 + dVar36) * dVar6 + (dVar33 + dVar33) * dVar8;
    dVar35 = dVar35 - dVar6 * dVar33;
    dVar37 = dVar37 - dVar7 * dVar33;
    dVar6 = local_88 - dVar8 * dVar33;
    sVar18 = _dclass(dVar35);
    uVar23 = uVar22;
    if (((sVar18 < 1) && (sVar18 = _dclass(dVar37), sVar18 < 1)) &&
       (sVar18 = _dclass(dVar6), sVar18 < 1)) {
      *(double *)(lVar31 + uVar26 * 0x18) = dVar35;
      *(double *)(lVar31 + 8 + uVar26 * 0x18) = dVar37;
      *(double *)(lVar31 + 0x10 + uVar26 * 0x18) = dVar6;
      uVar23 = local_a8[0]._8_4_;
      if ((pFVar9->ChangeStampShape).bIsEnabled != false) {
        this_00 = &(pFVar9->ChangeStampShape).Mutex;
        LOCK();
        bVar17 = this_00->State == (atomic<unsigned_char>)0x0;
        if (bVar17) {
          this_00->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar17) {
          FMutex::LockSlow(this_00);
        }
        puVar1 = &(pFVar9->ChangeStampShape).Value;
        *puVar1 = *puVar1 + 1;
        LOCK();
        aVar3 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        uVar23 = local_a8[0]._8_4_;
        if (((byte)aVar3 & 2) != 0) {
          FMutex::WakeWaitingThread(this_00);
          uVar23 = local_a8[0]._8_4_;
        }
      }
    }
    if ((this->Mesh->VertexNormals).bIsSet != false) {
      dVar6 = (this->PlaneNormal).field0_0x0._s_0.Y;
      dVar7 = (this->PlaneNormal).field0_0x0._s_0.X;
      dVar8 = (this->PlaneNormal).field0_0x0._s_0.Z;
      uVar26 = (ulonglong)(uVar22 & 0x1ff);
      lVar31 = *(longlong *)
                ((this->Mesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                (uVar25 >> 9) * 8);
      uVar20 = *(undefined8 *)(lVar31 + uVar26 * 0xc);
      fVar4 = *(float *)(lVar31 + 8 + uVar26 * 0xc);
      fVar34 = (float)((ulonglong)uVar20 >> 0x20);
      local_b8 = (float)uVar20;
      dVar37 = (double)fVar4;
      dVar37 = (dVar6 + dVar6) * (double)fVar34 + (dVar7 + dVar7) * (double)local_b8 +
               (dVar37 + dVar37) * dVar8;
      *(float *)(lVar31 + uVar26 * 0xc) = local_b8 - (float)(dVar37 * dVar7);
      *(float *)(lVar31 + 4 + uVar26 * 0xc) = fVar34 - (float)(dVar37 * dVar6);
      *(float *)(lVar31 + 8 + uVar26 * 0xc) = fVar4 - (float)(dVar37 * dVar8);
      uVar23 = local_a8[0]._8_4_;
    }
    local_a8[0]._8_4_ = uVar23 + 1;
    uVar25 = (ulonglong)(uint)local_a8[0]._8_4_;
    if ((int)local_a8[0]._8_4_ < (int)local_a8[0]._12_4_) {
      do {
        if ((*(short *)(*(longlong *)(*(longlong *)(local_a8[0]._0_8_ + 8) + (uVar25 >> 9) * 8) +
                       (ulonglong)(local_a8[0]._8_4_ & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(*(longlong *)(local_a8[0]._0_8_ + 8) + (uVar25 >> 9) * 8) +
                      (ulonglong)(local_a8[0]._8_4_ & 0x1ff) * 2) != -1)) break;
        local_a8[0]._8_4_ = (int)uVar25 + 1;
        uVar25 = (ulonglong)(uint)local_a8[0]._8_4_;
      } while ((int)local_a8[0]._8_4_ < (int)local_a8[0]._12_4_);
    }
    uVar23 = (uint)uVar25;
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar10 = *(code **)&param_1->CancelF;
    plVar11 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar21 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar21 = plVar11;
    }
    uVar20 = (**(code **)(*plVar21 + 8))();
    bVar17 = (bool)(*pcVar10)(uVar20);
    param_1->WasCancelled = bVar17;
    if (bVar17 != false) {
      return;
    }
  }
  uVar25 = 0;
  pFVar9 = this->Mesh;
  uVar27 = (pFVar9->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar9->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar27 != 0) &&
     (pFVar12 = (pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar12 - 1U))) {
    uVar25 = 1;
    uVar26 = 1;
    if (1 < (int)uVar27) {
      do {
        uVar25 = uVar26;
        uVar26 = (ulonglong)((uint)uVar25 & 0x1ff);
        lVar31 = *(longlong *)(pFVar12 + (uVar25 >> 9) * 8);
        if ((*(short *)(lVar31 + uVar26 * 2) != 0) && (*(short *)(lVar31 + uVar26 * 2) != -1))
        break;
        uVar24 = (uint)uVar25 + 1;
        uVar25 = (ulonglong)uVar24;
        uVar26 = uVar25;
      } while ((int)uVar24 < (int)uVar27);
    }
  }
  uVar24 = (uint)uVar25;
joined_r0x00014c81c027:
  if (uVar24 != uVar27) {
    while( true ) {
      FDynamicMesh3::ReverseTriOrientation(this->Mesh,(int)uVar25);
      uVar24 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar24;
      if ((int)uVar27 <= (int)uVar24) break;
      while( true ) {
        uVar26 = (ulonglong)((uint)uVar25 & 0x1ff);
        lVar31 = *(longlong *)
                  ((pFVar9->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar25 >> 9) * 8);
        if ((*(short *)(lVar31 + uVar26 * 2) != 0) && (*(short *)(lVar31 + uVar26 * 2) != -1))
        break;
        uVar24 = (uint)uVar25 + 1;
        uVar25 = (ulonglong)uVar24;
        if ((int)uVar27 <= (int)uVar24) goto joined_r0x00014c81c027;
      }
    }
    goto joined_r0x00014c81c027;
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar10 = *(code **)&param_1->CancelF;
    plVar11 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar21 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar21 = plVar11;
    }
    uVar20 = (**(code **)(*plVar21 + 8))();
    bVar17 = (bool)(*pcVar10)(uVar20);
    param_1->WasCancelled = bVar17;
    if (bVar17 != false) {
      return;
    }
  }
  pFVar13 = (this->Mesh->AttributeSet).Ptr;
  if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
    iVar32 = 0;
    iVar19 = (**(code **)(pFVar13->_padding_ + 0xb8))(pFVar13);
    if (0 < iVar19) {
      local_res10 = 0;
      do {
        if ((iVar32 < (pFVar13->NormalLayers).Array.ArrayNum) && (-1 < iVar32)) {
          if ((iVar32 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar31 = *(longlong *)((pFVar13->NormalLayers).Array.AllocatorInstance.Data + local_res10)
          ;
        }
        else {
          lVar31 = 0;
        }
        uVar25 = 0;
        uVar27 = *(int *)(lVar31 + 8) * 0x200 + *(int *)(lVar31 + 0xc);
        if ((uVar27 == 0) ||
           (puVar14 = *(undefined8 **)(lVar31 + 0x10), (ushort)(*(short *)*puVar14 - 1U) < 0xfffe))
        {
LAB_14c81c1c8:
          uVar24 = (uint)uVar25;
        }
        else {
          uVar25 = 1;
          uVar24 = 1;
          if (1 < (int)uVar27) {
            do {
              uVar26 = (ulonglong)((uint)uVar25 & 0x1ff);
              if ((*(short *)(puVar14[uVar25 >> 9] + uVar26 * 2) != 0) &&
                 (*(short *)(puVar14[uVar25 >> 9] + uVar26 * 2) != -1)) break;
              uVar24 = (uint)uVar25 + 1;
              uVar25 = (ulonglong)uVar24;
            } while ((int)uVar24 < (int)uVar27);
            goto LAB_14c81c1c8;
          }
        }
joined_r0x00014c81c1ca:
        if (uVar24 != uVar27) {
          while( true ) {
            lVar15 = *(longlong *)(lVar31 + 0x48);
            uVar23 = (int)uVar25 * 3;
            dVar6 = (this->PlaneNormal).field0_0x0._s_0.X;
            dVar7 = (this->PlaneNormal).field0_0x0._s_0.Y;
            dVar8 = (this->PlaneNormal).field0_0x0._s_0.Z;
            uVar24 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar24;
            uVar28 = (ulonglong)(uVar23 + 1 & 0x1ff);
            uVar26 = (ulonglong)(uVar23 + 1 >> 9);
            uVar30 = (ulonglong)(uVar23 + 2 & 0x1ff);
            lVar16 = *(longlong *)(lVar15 + (ulonglong)(uVar23 >> 9) * 8);
            uVar29 = (ulonglong)(uVar23 + 2 >> 9);
            fVar4 = *(float *)(lVar16 + (ulonglong)(uVar23 & 0x1ff) * 4);
            dVar37 = (double)fVar4;
            fVar34 = *(float *)(*(longlong *)(lVar15 + uVar26 * 8) + uVar28 * 4);
            dVar33 = (double)fVar34;
            fVar5 = *(float *)(*(longlong *)(lVar15 + uVar29 * 8) + uVar30 * 4);
            dVar35 = (double)fVar5;
            dVar37 = (dVar33 + dVar33) * dVar7 + (dVar37 + dVar37) * dVar6 +
                     (dVar35 + dVar35) * dVar8;
            *(float *)(lVar16 + (ulonglong)(uVar23 & 0x1ff) * 4) = fVar4 - (float)(dVar6 * dVar37);
            *(float *)(*(longlong *)(*(longlong *)(lVar31 + 0x48) + uVar26 * 8) + uVar28 * 4) =
                 fVar34 - (float)(dVar7 * dVar37);
            *(float *)(*(longlong *)(*(longlong *)(lVar31 + 0x48) + uVar29 * 8) + uVar30 * 4) =
                 fVar5 - (float)(dVar8 * dVar37);
            if ((int)uVar27 <= (int)uVar24) break;
            while( true ) {
              uVar26 = (ulonglong)((uint)uVar25 & 0x1ff);
              lVar15 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + (uVar25 >> 9) * 8);
              if ((*(short *)(lVar15 + uVar26 * 2) != 0) && (*(short *)(lVar15 + uVar26 * 2) != -1))
              break;
              uVar24 = (uint)uVar25 + 1;
              uVar25 = (ulonglong)uVar24;
              if ((int)uVar27 <= (int)uVar24) goto joined_r0x00014c81c1ca;
            }
          }
          goto joined_r0x00014c81c1ca;
        }
        local_res10 = local_res10 + 8;
        iVar32 = iVar32 + 1;
        iVar19 = (**(code **)(pFVar13->_padding_ + 0xb8))(pFVar13);
      } while (iVar32 < iVar19);
    }
  }
  return;
}

// MirrorAndAppend @ 14c81c370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshMirror::MirrorAndAppend(FMeshMirror *this,FProgressCancel *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  longlong *plVar9;
  FDynamicMesh3 *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FDynamicMeshAttributeSet *pFVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  ForElementType<FSetElementId> FVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  uint *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ForAnyElementType FVar33;
  int iVar34;
  int *piVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStackY_4f8 [32];
  undefined1 local_4a8;
  undefined1 local_4a7 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_4a0;
  int local_490;
  uint local_48c;
  ForAnyElementType local_488;
  uint local_480;
  uint local_47c;
  FScriptContainerElement *local_478;
  uint local_470 [2];
  FScriptContainerElement *local_468;
  int local_460 [2];
  FDynamicMeshAttributeSet *local_458;
  undefined8 local_450;
  FIndex3i_u_0 local_440;
  FIndex3i_u_0 local_434;
  FDynamicMeshEditResult local_428;
  TPairInitializer<int_const_&,int_&&> local_3b8;
  FMeshMirror *local_3a8;
  uint *local_3a0;
  int *local_398;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_388;
  FMeshIndexMappings local_338;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_458 = (FDynamicMeshAttributeSet *)param_1;
  local_3a8 = this;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar8 = *(code **)&param_1->CancelF;
    plVar9 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar20 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar20 = plVar9;
    }
    uVar19 = (**(code **)(*plVar20 + 8))();
    bVar14 = (bool)(*pcVar8)(uVar19);
    param_1->WasCancelled = bVar14;
    if (bVar14 != false) {
      return;
    }
  }
  Normalize<double>(&this->PlaneNormal,0.0);
  local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.ArrayNum = 0;
  local_4a0.ArrayMax = 0;
  if (this->bWeldAlongPlane == false) {
    MirrorAndAppendVertices(this->Mesh,&this->PlaneNormal,&this->PlaneOrigin,&local_4a0);
  }
  else {
    MirrorAndAppendVerticesWithWelding
              (this->Mesh,&this->PlaneNormal,&this->PlaneOrigin,&local_4a0,
               this->bAllowBowtieVertexCreation,this->PlaneTolerance,this->WeldNormalMode);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) goto LAB_14c81cf47;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar8 = *(code **)&param_1->CancelF;
    plVar9 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar20 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar20 = plVar9;
    }
    uVar19 = (**(code **)(*plVar20 + 8))();
    bVar14 = (bool)(*pcVar8)(uVar19);
    param_1->WasCancelled = bVar14;
    if (bVar14 != false) goto LAB_14c81cf47;
  }
  local_488.Data = (FScriptContainerElement *)0x0;
  local_480 = 0;
  local_47c = 0;
  uVar22 = (this->Mesh->TriangleRefCounts).UsedCount;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  uVar30 = 0;
  if (0 < (int)uVar22) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar22,&local_488,0,(int *)&local_47c);
    uVar30 = (ulonglong)local_480;
  }
  pFVar10 = this->Mesh;
  iVar27 = (pFVar10->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar10->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar24 = 0;
  if (((iVar27 != 0) &&
      (pFVar26 = (pFVar10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar24 = 0,
      0xfffd < (ushort)(**(short **)pFVar26 - 1U))) && (uVar24 = 1, 1 < iVar27)) {
    do {
      uVar31 = (ulonglong)((uint)uVar24 & 0x1ff);
      lVar29 = *(longlong *)(pFVar26 + (uVar24 >> 9) * 8);
      if ((*(short *)(lVar29 + uVar31 * 2) != 0) && (*(short *)(lVar29 + uVar31 * 2) != -1)) break;
      uVar22 = (uint)uVar24 + 1;
      uVar24 = (ulonglong)uVar22;
    } while ((int)uVar22 < iVar27);
  }
  iVar34 = (pFVar10->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar10->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((int)uVar24 != iVar34) {
    while( true ) {
      iVar23 = (int)uVar24;
      uVar22 = (uint)uVar30;
      local_490 = iVar23;
      if (((local_488.Data <= (FScriptContainerElement *)&local_490) &&
          ((FScriptContainerElement *)&local_490 < local_488.Data + (longlong)(int)local_47c * 4))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), uVar22 = local_480, bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar22 == local_47c) {
        uVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_488,(int *)&local_47c);
      }
      local_480 = uVar22 + 1;
      uVar24 = (ulonglong)(iVar23 + 1U);
      *(int *)(local_488.Data + (longlong)(int)uVar22 * 4) = local_490;
      if ((int)(iVar23 + 1U) < iVar27) {
        do {
          uVar30 = (ulonglong)((uint)uVar24 & 0x1ff);
          lVar29 = *(longlong *)
                    ((pFVar10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar24 >> 9) * 8);
          if ((*(short *)(lVar29 + uVar30 * 2) != 0) && (*(short *)(lVar29 + uVar30 * 2) != -1))
          goto LAB_14c81c680;
          uVar22 = (uint)uVar24 + 1;
          uVar24 = (ulonglong)uVar22;
        } while ((int)uVar22 < iVar27);
      }
      if ((int)uVar24 == iVar34) break;
LAB_14c81c680:
      uVar30 = (ulonglong)local_480;
    }
  }
  local_3b8.Value = (int *)this->Mesh;
  local_388.Elements._0_8_ = 0;
  local_388.Elements._8_8_ = 0;
  local_388.Elements._32_8_ = 0;
  local_388.Elements._40_4_ = 0;
  local_388.Elements._52_4_ = 0;
  local_388.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_388.HashSize = 0;
  local_388.Elements._44_4_ = 0x80;
  local_388.Elements._48_4_ = 0xffffffff;
  FMeshIndexMappings::FMeshIndexMappings(&local_338);
  FMeshIndexMappings::Initialize(&local_338,this->Mesh);
  uVar24 = (ulonglong)(int)local_480;
  local_428.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.NewVertices.ArrayNum = 0;
  local_428.NewVertices.ArrayMax = 0;
  local_428.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468 = local_488.Data + uVar24 * 4;
  local_428.NewTriangles.ArrayNum = 0;
  local_428.NewTriangles.ArrayMax = 0;
  local_428.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.NewQuads.ArrayNum = 0;
  local_428.NewQuads.ArrayMax = 0;
  local_428.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.NewPolygons.ArrayNum = 0;
  local_428.NewPolygons.ArrayMax = 0;
  local_428.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.NewGroups.ArrayNum = 0;
  local_428.NewGroups.ArrayMax = 0;
  local_428.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.NewNormalOverlayElements.ArrayNum = 0;
  local_428.NewNormalOverlayElements.ArrayMax = 0;
  local_428.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.NewColorOverlayElements.ArrayNum = 0;
  local_428.NewColorOverlayElements.ArrayMax = 0;
  local_48c = local_480;
  uVar30 = uVar24;
  FVar33.Data = local_488.Data;
  while( true ) {
    pFVar26 = local_468;
    puVar28 = (uint *)0x0;
    local_478 = FVar33.Data;
    if ((int)uVar24 != (int)uVar30) {
      local_4a8 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_4a8);
    }
    pFVar13 = local_458;
    uVar22 = 0;
    if (FVar33.Data == pFVar26) break;
    pFVar10 = this->Mesh;
    uVar18 = *(uint *)FVar33.Data;
    uVar30 = (ulonglong)(uVar18 >> 9);
    uVar24 = (ulonglong)(uVar18 & 0x1ff);
    lVar29 = *(longlong *)((pFVar10->Triangles).Blocks.AllocatorInstance.Data + uVar30 * 8);
    local_450 = *(undefined8 *)(lVar29 + uVar24 * 0xc);
    uVar17 = *(uint *)(lVar29 + 8 + uVar24 * 0xc);
    if ((pFVar10->TriangleGroups).bIsSet == false) {
      if ((int)uVar17 < local_4a0.ArrayNum) {
        uVar22 = ~uVar17 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar27 = *(int *)(local_4a0.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
      lVar29 = (longlong)(int)local_450._4_4_;
      uVar22 = 0;
      if ((int)local_450._4_4_ < local_4a0.ArrayNum) {
        uVar22 = ~local_450._4_4_ >> 0x1f;
      }
      iVar34 = local_4a0.ArrayNum;
      if (uVar22 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar34 = local_4a0.ArrayNum;
      }
      iVar23 = *(int *)(local_4a0.AllocatorInstance.Data + lVar29 * 4);
      lVar29 = (longlong)(int)(uint)local_450;
      uVar22 = 0;
      if ((int)(uint)local_450 < iVar34) {
        uVar22 = ~(uint)local_450 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_440._s_0.A = *(undefined4 *)(local_4a0.AllocatorInstance.Data + lVar29 * 4);
      local_440._s_0.B = iVar23;
      local_440._s_0.C = iVar27;
      iVar27 = FDynamicMesh3::AppendTriangle(pFVar10,(FIndex3i *)&local_440._s_0,0);
    }
    else {
      if (((-1 < (int)uVar18) &&
          ((int)uVar18 <
           (int)((pFVar10->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar10->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + uVar30 * 8) + uVar24 * 2) - 1U) < 0xfffe)) {
        uVar22 = *(uint *)(*(longlong *)
                            ((pFVar10->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                            uVar30 * 8) + uVar24 * 4);
      }
      local_470[0] = uVar22;
      if (local_388.Elements._8_4_ != local_388.Elements._52_4_) {
        FVar21 = (ForElementType<FSetElementId>)&local_388.Hash;
        if (local_388.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar21 = local_388.Hash.SecondaryData;
        }
        for (iVar27 = *(int *)((longlong)FVar21 + (ulonglong)(local_388.HashSize - 1U & uVar22) * 4)
            ; iVar27 != -1;
            iVar27 = *(int *)(local_388.Elements._0_8_ + 8 + (longlong)iVar27 * 0x10)) {
          if (*(uint *)(local_388.Elements._0_8_ + (longlong)iVar27 * 0x10) == uVar22)
          goto LAB_14c81c9bf;
        }
      }
      local_460[0] = this->Mesh->GroupIDCounter;
      this->Mesh->GroupIDCounter = local_460[0] + 1;
      local_3a0 = local_470;
      local_398 = local_460;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_&&>_>(&local_388,&local_3b8,(bool *)&local_3a0);
LAB_14c81c9bf:
      pFVar10 = this->Mesh;
      puVar25 = puVar28;
      if (local_388.Elements._8_4_ != local_388.Elements._52_4_) {
        FVar21 = (ForElementType<FSetElementId>)&local_388.Hash;
        if (local_388.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar21 = local_388.Hash.SecondaryData;
        }
        uVar22 = *(uint *)((longlong)FVar21 +
                          (ulonglong)(local_388.HashSize - 1U & local_470[0]) * 4);
        while (puVar25 = puVar28, uVar22 != 0xffffffff) {
          puVar25 = (uint *)((longlong)(int)uVar22 * 0x10 + local_388.Elements._0_8_);
          if (*puVar25 == local_470[0]) {
            if (puVar25 != (uint *)0x0) goto LAB_14c81ca34;
            break;
          }
          uVar22 = puVar25[2];
        }
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar14) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14c81ca34:
      uVar22 = puVar25[1];
      uVar16 = 0;
      if ((int)uVar17 < local_4a0.ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar29 = (longlong)(int)local_450._4_4_;
      iVar27 = *(int *)(local_4a0.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
      uVar17 = 0;
      if ((int)local_450._4_4_ < local_4a0.ArrayNum) {
        uVar17 = ~local_450._4_4_ >> 0x1f;
      }
      iVar34 = local_4a0.ArrayNum;
      if (uVar17 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar34 = local_4a0.ArrayNum;
      }
      iVar23 = *(int *)(local_4a0.AllocatorInstance.Data + lVar29 * 4);
      lVar29 = (longlong)(int)(uint)local_450;
      uVar17 = 0;
      if ((int)(uint)local_450 < iVar34) {
        uVar17 = ~(uint)local_450 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_434._s_0.A = *(undefined4 *)(local_4a0.AllocatorInstance.Data + lVar29 * 4);
      local_434._s_0.B = iVar23;
      local_434._s_0.C = iVar27;
      iVar27 = FDynamicMesh3::AppendTriangle(pFVar10,(FIndex3i *)&local_434._s_0,uVar22);
      FVar33.Data = local_478;
    }
    if ((iVar27 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewTid >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshMirror.cpp"
                            ,0x9a,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      FDynamicMeshEditor::CopyAttributes
                ((FDynamicMeshEditor *)&local_3b8.Value,uVar18,iVar27,&local_338,&local_428);
    }
    FDynamicMesh3::ReverseTriOrientation(this->Mesh,iVar27);
    uVar24 = (ulonglong)local_480;
    FVar33.Data = FVar33.Data + 4;
    uVar30 = (ulonglong)local_48c;
  }
  if (local_458 == (FDynamicMeshAttributeSet *)0x0) {
LAB_14c81cc24:
    local_458 = (this->Mesh->AttributeSet).Ptr;
    if (local_458 != (FDynamicMeshAttributeSet *)0x0) {
      local_48c = 0;
      if (0 < local_428.NewNormalOverlayElements.ArrayNum) {
        local_468 = (FScriptContainerElement *)0x0;
        puVar25 = puVar28;
        do {
          pFVar13 = local_458;
          pFVar12 = local_468;
          pFVar26 = (FScriptContainerElement *)0x0;
          uVar22 = (uint)puVar28;
          if (((int)uVar22 < (local_458->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar22)) {
            if (((int)uVar22 < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar26 = *(FScriptContainerElement **)
                       (pFVar12 + (longlong)(pFVar13->NormalLayers).Array.AllocatorInstance.Data);
          }
          uVar18 = 0;
          if ((int)uVar22 < local_428.NewNormalOverlayElements.ArrayNum) {
            uVar18 = ~uVar22 >> 0x1f;
          }
          local_478 = pFVar26;
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar33.Data = local_428.NewNormalOverlayElements.AllocatorInstance.Data;
          piVar35 = *(int **)((longlong)puVar25 +
                             local_428.NewNormalOverlayElements.AllocatorInstance.Data);
          iVar27 = *(int *)((longlong)(puVar25 + 2) +
                           local_428.NewNormalOverlayElements.AllocatorInstance.Data);
          piVar1 = piVar35 + iVar27;
          while( true ) {
            if (*(int *)((longlong)(puVar25 + 2) + FVar33.Data) != iVar27) {
              local_4a7[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_4a7);
            }
            if (piVar35 == piVar1) break;
            lVar29 = *(longlong *)(pFVar26 + 0x48);
            uVar22 = *piVar35 * 3;
            uVar30 = (ulonglong)(uVar22 + 1 >> 9);
            uVar24 = (ulonglong)(uVar22 + 1 & 0x1ff);
            lVar11 = *(longlong *)(lVar29 + (ulonglong)(uVar22 >> 9) * 8);
            uVar32 = (ulonglong)(uVar22 + 2 & 0x1ff);
            uVar31 = (ulonglong)(uVar22 + 2 >> 9);
            piVar35 = piVar35 + 1;
            fVar2 = *(float *)(lVar11 + (ulonglong)(uVar22 & 0x1ff) * 4);
            dVar36 = (double)fVar2;
            fVar3 = *(float *)(*(longlong *)(lVar29 + uVar30 * 8) + uVar24 * 4);
            dVar38 = (double)fVar3;
            fVar4 = *(float *)(*(longlong *)(lVar29 + uVar31 * 8) + uVar32 * 4);
            dVar37 = (double)fVar4;
            dVar5 = (local_3a8->PlaneNormal).field0_0x0._s_0.X;
            dVar6 = (local_3a8->PlaneNormal).field0_0x0._s_0.Y;
            dVar7 = (local_3a8->PlaneNormal).field0_0x0._s_0.Z;
            dVar36 = (dVar38 + dVar38) * dVar6 + (dVar36 + dVar36) * dVar5 +
                     (dVar37 + dVar37) * dVar7;
            *(float *)(lVar11 + (ulonglong)(uVar22 & 0x1ff) * 4) = fVar2 - (float)(dVar5 * dVar36);
            *(float *)(*(longlong *)(*(longlong *)(local_478 + 0x48) + uVar30 * 8) + uVar24 * 4) =
                 fVar3 - (float)(dVar6 * dVar36);
            *(float *)(*(longlong *)(*(longlong *)(local_478 + 0x48) + uVar31 * 8) + uVar32 * 4) =
                 fVar4 - (float)(dVar36 * dVar7);
            pFVar26 = local_478;
          }
          puVar25 = puVar25 + 4;
          local_48c = local_48c + 1;
          puVar28 = (uint *)(ulonglong)local_48c;
          local_468 = local_468 + 8;
        } while ((int)local_48c < local_428.NewNormalOverlayElements.ArrayNum);
      }
    }
  }
  else if ((char)local_458->_padding_ == '\0') {
    Core::Private::Function::CheckCallable(*(void **)&local_458->SkinWeightAttributes);
    pcVar8 = *(code **)&pFVar13->SkinWeightAttributes;
    plVar9 = *(longlong **)&(pFVar13->SkinWeightAttributes).field_0x28;
    plVar20 = (longlong *)&(pFVar13->SkinWeightAttributes).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar20 = plVar9;
    }
    uVar19 = (**(code **)(*plVar20 + 8))();
    cVar15 = (*pcVar8)(uVar19);
    *(char *)&pFVar13->_padding_ = cVar15;
    if (cVar15 == '\0') goto LAB_14c81cc24;
  }
  if (local_428.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_428.NewNormalOverlayElements.AllocatorInstance.Data,
             local_428.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)
      local_428.NewNormalOverlayElements.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_428.NewNormalOverlayElements.AllocatorInstance.Data);
  }
  if (local_428.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_428.NewPolygons.AllocatorInstance.Data
             ,local_428.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_428.NewPolygons.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_428.NewPolygons.AllocatorInstance.Data);
  }
  if (local_428.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.NewQuads.AllocatorInstance.Data);
  }
  if (local_428.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.NewTriangles.AllocatorInstance.Data);
  }
  if (local_428.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.NewVertices.AllocatorInstance.Data);
  }
  FMeshIndexMappings::~FMeshIndexMappings(&local_338);
  local_388.HashSize = 0;
  if (local_388.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_388.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_388.Elements);
  if (local_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data);
  }
LAB_14c81cf47:
  if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.AllocatorInstance.Data);
  }
  return;
}

