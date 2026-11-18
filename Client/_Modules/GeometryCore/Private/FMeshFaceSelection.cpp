// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 11

// FloodFill @ 1435959c0

void __thiscall
UE::Geometry::FMeshFaceSelection::FloodFill
          (FMeshFaceSelection *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TUniqueFunction<bool___cdecl(int)> *param_2,TUniqueFunction<bool___cdecl(int)> *param_3)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ForElementType<FSetElementId> FVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uint local_res10 [2];
  int local_58 [2];
  FIndex3i local_50;
  TDynamicVector<int,512> local_40;
  ulonglong uVar13;
  
  uVar14 = param_1->ArrayNum;
  uVar13 = 0;
  local_40.CurBlock = 0;
  local_40.CurBlockUsed = 0;
  local_40.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Blocks.ArrayNum = 0;
  local_40.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::Resize(&local_40,uVar14);
  pFVar15 = (param_1->AllocatorInstance).Data;
  if (uVar14 != 0) {
    do {
      uVar11 = (uint)uVar13;
      uVar7 = uVar13 >> 9;
      uVar12 = uVar11 + 1;
      uVar13 = (ulonglong)uVar12;
      *(undefined4 *)
       (*(longlong *)(local_40.Blocks.AllocatorInstance.Data + uVar7 * 8) +
       (ulonglong)(uVar11 & 0x1ff) * 4) = *(undefined4 *)pFVar15;
      pFVar15 = pFVar15 + 4;
    } while (uVar12 < uVar14);
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar15 = pFVar10 + (longlong)iVar5 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar15) break;
    local_res10[0] = *(uint *)pFVar10;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,local_58,(bool *)local_res10);
    pFVar10 = pFVar10 + 4;
  }
  iVar5 = local_40.CurBlock * 0x200 + local_40.CurBlockUsed;
  uVar14 = local_40.CurBlockUsed;
  do {
    if (iVar5 == 0) {
      TDynamicVector<int,512>::Empty(&local_40,0);
      if (local_40.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Blocks.AllocatorInstance.Data);
      }
      return;
    }
    local_40.CurBlockUsed = uVar14;
    if (uVar14 != 0) {
      local_40.CurBlockUsed = uVar14 - 1;
    }
    uVar11 = *(uint *)(*(longlong *)
                        (local_40.Blocks.AllocatorInstance.Data +
                        (longlong)(int)local_40.CurBlock * 8) + (longlong)(int)(uVar14 - 1) * 4);
    if ((local_40.CurBlockUsed == 0) && (local_40.CurBlock != 0)) {
      local_40.CurBlock = local_40.CurBlock - 1;
      local_40.CurBlockUsed = 0x200;
    }
    FDynamicMesh3::GetTriNeighbourTris(this->Mesh,&local_50,uVar11);
    lVar16 = 0;
    uVar14 = local_40.CurBlockUsed;
    do {
      uVar12 = local_50.field0_0x0.ABC[lVar16];
      if (uVar12 != 0xffffffff) {
        if (*(int *)&(this->Selected).Elements.field_0x8 !=
            *(int *)&(this->Selected).Elements.field_0x34) {
          FVar1 = (this->Selected).Hash.SecondaryData;
          FVar9 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
          if (FVar1 != (ForElementType<FSetElementId>)0x0) {
            FVar9 = FVar1;
          }
          iVar5 = *(int *)((longlong)FVar9 +
                          (ulonglong)((this->Selected).HashSize - 1U & uVar12) * 4);
          if (iVar5 != -1) {
            lVar2 = *(longlong *)&(this->Selected).Elements;
            do {
              if (*(uint *)(lVar2 + (longlong)iVar5 * 0xc) == uVar12) goto LAB_143595c38;
              iVar5 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0xc);
            } while (iVar5 != -1);
          }
        }
        if (*(void **)param_2 != (void *)0x0) {
          local_res10[0] = uVar12;
          Core::Private::Function::CheckCallable(*(void **)param_2);
          pcVar3 = *(code **)param_2;
          plVar8 = *(longlong **)&param_2->field_0x28;
          if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
            plVar8 = (longlong *)&param_2->field_0x10;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar4 = (*pcVar3)(uVar6);
          uVar14 = local_40.CurBlockUsed;
          if (cVar4 == '\0') goto LAB_143595c38;
        }
        if (*(void **)param_3 != (void *)0x0) {
          local_res10[0] =
               *(uint *)(*(longlong *)
                          ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) +
                        (lVar16 + (ulonglong)(uVar11 & 0x1ff) * 3) * 4);
          Core::Private::Function::CheckCallable(*(void **)param_3);
          pcVar3 = *(code **)param_3;
          plVar8 = *(longlong **)&param_3->field_0x28;
          if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
            plVar8 = (longlong *)&param_3->field_0x10;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar4 = (*pcVar3)(uVar6);
          uVar14 = local_40.CurBlockUsed;
          if (cVar4 == '\0') goto LAB_143595c38;
        }
        local_res10[0] = uVar12;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->Selected,local_58,(bool *)local_res10);
        if (local_40.CurBlockUsed == 0x200) {
          if (local_40.CurBlock == local_40.Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&local_40);
          }
          local_40.CurBlock = local_40.CurBlock + 1;
          local_40.CurBlockUsed = 0;
        }
        *(uint *)(*(longlong *)
                   (local_40.Blocks.AllocatorInstance.Data + (longlong)(int)local_40.CurBlock * 8) +
                 (longlong)(int)local_40.CurBlockUsed * 4) = uVar12;
        local_40.CurBlockUsed = local_40.CurBlockUsed + 1;
        uVar14 = local_40.CurBlockUsed;
      }
LAB_143595c38:
      lVar16 = lVar16 + 1;
    } while (lVar16 < 3);
    iVar5 = local_40.CurBlock * 0x200 + uVar14;
  } while( true );
}

// FMeshFaceSelection @ 1435e33b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMeshFaceSelection * __thiscall
UE::Geometry::FMeshFaceSelection::FMeshFaceSelection
          (FMeshFaceSelection *this,FDynamicMesh3 *param_1,FMeshVertexSelection *param_2,int param_3
          )

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  FSmallListSet *pFVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  FDynamicMesh3 *pFVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FSetElementId> FVar9;
  code *pcVar10;
  longlong lVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  FMeshFaceSelection *pFVar16;
  undefined1 *puVar17;
  undefined ***pppuVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  ForElementType<FSetElementId> FVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar29;
  undefined1 auStack_318 [32];
  int local_2f8 [2];
  FMeshFaceSelection *local_2f0;
  undefined1 local_2e8 [8];
  FMeshVertexSelection *local_2e0;
  uint local_2d8 [2];
  uint local_2d0 [2];
  undefined8 local_2c8;
  undefined4 local_2bc;
  undefined1 local_2b8 [24];
  int iStack_2a0;
  uint uStack_29c;
  int local_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  int local_288;
  int local_284;
  int local_280 [2];
  FSmallListSet *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  uint uStack_264;
  undefined8 uStack_260;
  undefined8 local_258;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  code *local_218 [2];
  undefined **local_208;
  FDynamicMesh3 *local_200;
  int local_1f8;
  undefined4 local_1f4;
  undefined ***local_1f0;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  pTVar29 = &this->Selected;
  this->Mesh = param_1;
  *(undefined8 *)&pTVar29->Elements = 0;
  local_2b8._12_4_ = 1;
  *(undefined8 *)&(this->Selected).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Selected).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Selected).Elements.field_0x28 = 0;
  iVar23 = 3;
  if (param_3 < 3) {
    iVar23 = param_3;
  }
  *(undefined4 *)&(this->Selected).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Selected).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Selected).Elements.field_0x34 = 0;
  local_2f8[0] = 1;
  if (1 < iVar23) {
    local_2f8[0] = iVar23;
  }
  (this->Selected).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Selected).HashSize = 0;
  local_2f0 = this;
  local_2e0 = param_2;
  if (local_2f8[0] == 1) {
    uVar24 = *(uint *)&(param_2->Selected).Elements.field_0x28;
    pTVar1 = &param_2->Selected;
    puVar2 = &(param_2->Selected).Elements.field_0x10;
    local_2b8._8_4_ = 0;
    local_298 = 0;
    uStack_29c = 0;
    if (uVar24 != 0) {
      puVar27 = *(uint **)&(param_2->Selected).Elements.field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)puVar2;
      }
      uVar26 = *puVar27;
      while (uVar26 == 0) {
        lVar15 = (longlong)(int)local_2b8._8_4_;
        local_298 = local_298 + 0x20;
        local_2b8._8_4_ = local_2b8._8_4_ + 1;
        uStack_29c = uVar24;
        if ((int)(((int)(uVar24 - 1) >> 0x1f & 0x1fU) + (uVar24 - 1)) >> 5 < (int)local_2b8._8_4_)
        goto LAB_1435e34ed;
        uVar26 = puVar27[lVar15 + 1];
      }
      local_2b8._12_4_ = -uVar26 & uVar26;
      uVar4 = (ulonglong)(uint)local_2b8._12_4_ * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_288 = (int)lVar15;
      uStack_29c = local_298 + -1 + local_288;
      if ((int)uVar24 < (int)uStack_29c) {
        uStack_29c = uVar24;
      }
    }
LAB_1435e34ed:
    uVar26 = *(uint *)&(param_2->Selected).Elements.field_0x28;
    uStack_294 = uStack_260._4_4_;
    iStack_290 = *(int *)&(param_2->Selected).Elements.field_0x8 -
                 *(int *)&(param_2->Selected).Elements.field_0x34;
    uVar25 = uVar26 & 0xffffffe0;
    iStack_2a0 = -1;
    TStack_248._padding_ = CONCAT44(local_2b8._12_4_,local_2b8._8_4_);
    TStack_248.CurrentBitIndex = uStack_29c;
    TStack_248.UnvisitedBitMask = 0xffffffff;
    iVar23 = (int)uVar26 >> 5;
    TStack_248._28_4_ = uStack_260._4_4_;
    TStack_248.BaseBitIndex = local_298;
    uStack_228 = CONCAT44(uStack_28c,iStack_290);
    local_2b8._0_8_ = pTVar1;
    local_2b8._16_8_ = puVar2;
    local_250 = pTVar1;
    TStack_248.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar26 < 0) || ((int)uVar24 < (int)uVar26)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      pFVar16 = (FMeshFaceSelection *)(*pcVar10)();
      return pFVar16;
    }
    uVar24 = *(uint *)&(param_2->Selected).Elements.field_0x28;
    if (uVar26 != uVar24) {
      puVar6 = *(undefined1 **)&(param_2->Selected).Elements.field_0x20;
      puVar17 = puVar2;
      if (puVar6 != (undefined1 *)0x0) {
        puVar17 = puVar6;
      }
      uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar23 * 4);
      while (uVar26 == 0) {
        lVar15 = (longlong)iVar23;
        uVar25 = uVar25 + 0x20;
        iVar23 = iVar23 + 1;
        uVar26 = uVar24;
        if ((int)(((int)(uVar24 - 1) >> 0x1f & 0x1fU) + (uVar24 - 1)) >> 5 < iVar23)
        goto LAB_1435e35ed;
        uVar26 = *(uint *)(puVar17 + lVar15 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar26 = (uVar25 - 1) + (int)lVar15;
      if ((int)uVar24 < (int)uVar26) {
        uVar26 = uVar24;
      }
    }
LAB_1435e35ed:
    while( true ) {
      pTVar12 = local_250;
      if (*(int *)&(local_250->Elements).field_0x8 - *(int *)&(local_250->Elements).field_0x34 !=
          (int)uStack_228) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2e8);
      }
      if (((TStack_248.CurrentBitIndex == uVar26) &&
          (TStack_248.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (this = local_2f0, pTVar12 == pTVar1)) break;
      local_208 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_218[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      local_1f4 = local_2bc;
      local_200 = local_2f0->Mesh;
      pFVar3 = &local_200->VertexEdgeLists;
      iVar23 = *(int *)(*(longlong *)&pTVar12->Elements + (longlong)TStack_248.CurrentBitIndex * 0xc
                       );
      local_1f0 = (undefined ***)0x0;
      local_1e8._0_8_ = 0;
      local_1c0 = (longlong *)0x0;
      local_1b8 = (FSmallListSet *)0x0;
      uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
      local_190 = (FSmallListSet *)0x0;
      uStack_188 = uStack_188 & 0xffffffff00000000;
      local_1f8 = iVar23;
      FSmallListSet::BaseValueIterator::BaseValueIterator
                ((BaseValueIterator *)local_2b8,pFVar3,iVar23,false);
      uStack_1b0 = CONCAT44(local_2b8._12_4_,local_2b8._8_4_);
      uStack_1a0._4_4_ = uStack_29c;
      uStack_1a0._0_4_ = iStack_2a0;
      local_1b8 = (FSmallListSet *)local_2b8._0_8_;
      local_198._4_4_ = uStack_294;
      local_198._0_4_ = local_298;
      local_1a8 = (undefined1 *)local_2b8._16_8_;
      uStack_26c = 0xffffffff;
      uStack_188 = CONCAT44(0xffffffff,iVar23);
      local_268 = 0;
      uStack_260 = 0xffffffffffffffff;
      local_180 = (ulonglong)uStack_264 << 0x20;
      local_170 = local_258;
      uStack_178 = 0xffffffffffffffff;
      local_278 = pFVar3;
      iStack_270 = iVar23;
      local_190 = pFVar3;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218);
      if (local_218[0] != (code *)0x0) {
        pppuVar18 = &local_208;
        if (local_1f0 != (undefined ***)0x0) {
          pppuVar18 = local_1f0;
        }
        (*(code *)(*pppuVar18)[2])();
      }
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
                 (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
                 (ValueIterator *)&local_190,(ValueIterator *)&local_190,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
      while (((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
             ((local_168._24_4_ != local_d8._24_4_ || (local_168._28_4_ != local_d8._28_4_))))) {
        local_2f8[0] = local_168._88_4_;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (pTVar29,(int *)&local_2e0,(bool *)local_2f8);
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168);
      }
      if (local_d8._96_8_ != 0) {
        plVar19 = (longlong *)(local_d8 + 0x70);
        if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
          plVar19 = (longlong *)local_d8._136_8_;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (local_168._96_8_ != 0) {
        plVar19 = (longlong *)(local_168 + 0x70);
        if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
          plVar19 = (longlong *)local_168._136_8_;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (local_1e8._0_8_ != 0) {
        plVar19 = (longlong *)(local_1e8 + 0x10);
        if (local_1c0 != (longlong *)0x0) {
          plVar19 = local_1c0;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
    }
  }
  else {
    pFVar7 = this->Mesh;
    uVar26 = (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed +
             (pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar24 = 0;
    if (((uVar26 != 0) &&
        (pFVar8 = (pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar24 = 0,
        0xfffd < (ushort)(**(short **)pFVar8 - 1U))) && (uVar24 = 1, uVar25 = 1, 1 < (int)uVar26)) {
      do {
        uVar24 = uVar25;
        lVar15 = (ulonglong)(uVar24 & 0x1ff) * 2;
        if ((*(short *)(lVar15 + *(longlong *)(pFVar8 + (ulonglong)(uVar24 >> 9) * 8)) != 0) &&
           (*(short *)(lVar15 + *(longlong *)(pFVar8 + (ulonglong)(uVar24 >> 9) * 8)) != -1)) break;
        uVar24 = uVar24 + 1;
        uVar25 = uVar24;
      } while ((int)uVar24 < (int)uVar26);
    }
    if (uVar24 != uVar26) {
      pTVar29 = &param_2->Selected;
      iVar23 = local_2f8[0];
      do {
        lVar15 = *(longlong *)
                  ((local_2f0->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar24 >> 9) * 8);
        uVar5 = *(undefined8 *)(lVar15 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
        uVar25 = *(uint *)(lVar15 + 8 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
        iVar14 = *(int *)&(pTVar29->Elements).field_0x8;
        iVar20 = *(int *)&(pTVar29->Elements).field_0x34;
        local_2c8._0_4_ = (uint)uVar5;
        local_2c8._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
        this = local_2f0;
        local_2c8 = uVar5;
        if (iVar23 == 3) {
          if (iVar14 != iVar20) {
            FVar9 = (pTVar29->Hash).SecondaryData;
            FVar22 = (ForElementType<FSetElementId>)&pTVar29->Hash;
            if (FVar9 != (ForElementType<FSetElementId>)0x0) {
              FVar22 = FVar9;
            }
            uVar28 = pTVar29->HashSize - 1;
            iVar14 = *(int *)((longlong)FVar22 + (ulonglong)(uVar28 & (uint)local_2c8) * 4);
            iVar23 = local_2f8[0];
            if (iVar14 != -1) {
              lVar15 = *(longlong *)&pTVar29->Elements;
              do {
                if (*(uint *)(lVar15 + (longlong)iVar14 * 0xc) == (uint)local_2c8) {
                  FVar22 = (ForElementType<FSetElementId>)&pTVar29->Hash;
                  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
                    FVar22 = FVar9;
                  }
                  iVar14 = *(int *)((longlong)FVar22 + (ulonglong)(uVar28 & local_2c8._4_4_) * 4);
                  goto joined_r0x0001435e3a00;
                }
                iVar14 = *(int *)(lVar15 + 4 + (longlong)iVar14 * 0xc);
              } while (iVar14 != -1);
            }
          }
        }
        else {
          if (iVar14 != iVar20) {
            FVar9 = (pTVar29->Hash).SecondaryData;
            FVar22 = (ForElementType<FSetElementId>)&pTVar29->Hash;
            if (FVar9 != (ForElementType<FSetElementId>)0x0) {
              FVar22 = FVar9;
            }
            iVar14 = *(int *)((longlong)FVar22 +
                             (ulonglong)(pTVar29->HashSize - 1U & (uint)local_2c8) * 4);
            if (iVar14 != -1) {
              do {
                if (*(uint *)(*(longlong *)&pTVar29->Elements + (longlong)iVar14 * 0xc) ==
                    (uint)local_2c8) goto LAB_1435e3aae;
                iVar14 = *(int *)(*(longlong *)&pTVar29->Elements + 4 + (longlong)iVar14 * 0xc);
              } while (iVar14 != -1);
            }
          }
          iVar14 = -1;
LAB_1435e3aae:
          if (*(int *)&(local_2e0->Selected).Elements.field_0x8 ==
              *(int *)&(pTVar29->Elements).field_0x34) {
            iVar21 = -1;
            iVar20 = -1;
          }
          else {
            FVar9 = (pTVar29->Hash).SecondaryData;
            FVar22 = (ForElementType<FSetElementId>)&pTVar29->Hash;
            if (FVar9 != (ForElementType<FSetElementId>)0x0) {
              FVar22 = FVar9;
            }
            iVar20 = *(int *)((longlong)FVar22 +
                             (ulonglong)(pTVar29->HashSize - 1U & local_2c8._4_4_) * 4);
            if (iVar20 != -1) {
              do {
                if (*(uint *)(*(longlong *)&pTVar29->Elements + (longlong)iVar20 * 0xc) ==
                    local_2c8._4_4_) goto LAB_1435e3b2e;
                iVar20 = *(int *)(*(longlong *)&pTVar29->Elements + 4 + (longlong)iVar20 * 0xc);
              } while (iVar20 != -1);
            }
            iVar20 = -1;
LAB_1435e3b2e:
            FVar9 = (pTVar29->Hash).SecondaryData;
            FVar22 = (ForElementType<FSetElementId>)&pTVar29->Hash;
            if (FVar9 != (ForElementType<FSetElementId>)0x0) {
              FVar22 = FVar9;
            }
            iVar21 = *(int *)((longlong)FVar22 + (ulonglong)(pTVar29->HashSize - 1U & uVar25) * 4);
            if (iVar21 != -1) {
              do {
                if (*(uint *)(*(longlong *)&pTVar29->Elements + (longlong)iVar21 * 0xc) == uVar25)
                goto LAB_1435e3b71;
                iVar21 = *(int *)(*(longlong *)&pTVar29->Elements + 4 + (longlong)iVar21 * 0xc);
              } while (iVar21 != -1);
            }
            iVar21 = -1;
          }
LAB_1435e3b71:
          param_2 = local_2e0;
          iVar23 = local_2f8[0];
          if (local_2f8[0] <=
              (int)((uint)(iVar21 != -1) + (uint)(iVar20 != -1) + (uint)(iVar14 != -1))) {
            local_2d0[0] = uVar24;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_2f0->Selected,local_280,(bool *)local_2d0);
            param_2 = local_2e0;
            this = local_2f0;
            iVar23 = local_2f8[0];
          }
        }
LAB_1435e397f:
        uVar24 = uVar24 + 1;
        if ((int)uVar24 < (int)uVar26) {
          do {
            lVar11 = (ulonglong)(uVar24 & 0x1ff) * 2;
            lVar15 = *(longlong *)
                      ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar24 >> 9) * 8);
            if ((*(short *)(lVar11 + lVar15) != 0) && (*(short *)(lVar11 + lVar15) != -1)) break;
            uVar24 = uVar24 + 1;
          } while ((int)uVar24 < (int)uVar26);
          pTVar29 = &param_2->Selected;
        }
      } while (uVar24 != uVar26);
    }
  }
  return this;
joined_r0x0001435e3a00:
  if (iVar14 == -1) goto LAB_1435e397f;
  if (*(uint *)(lVar15 + (longlong)iVar14 * 0xc) == local_2c8._4_4_) {
    bVar13 = FMeshVertexSelection::IsSelected(param_2,uVar25);
    this = local_2f0;
    iVar23 = local_2f8[0];
    if (bVar13) {
      local_2d8[0] = uVar24;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_2f0->Selected,&local_284,(bool *)local_2d8);
      iVar23 = local_2f8[0];
    }
    goto LAB_1435e397f;
  }
  iVar14 = *(int *)(lVar15 + 4 + (longlong)iVar14 * 0xc);
  goto joined_r0x0001435e3a00;
}

// operator() @ 1435ea0c0

void __thiscall
`UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours'::__l20::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int local_res8 [2];
  
  puVar1 = *(undefined8 **)this;
  if ((void *)*puVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable((void *)*puVar1);
    pcVar2 = (code *)*puVar1;
    plVar6 = puVar1 + 2;
    if ((longlong *)puVar1[5] != (longlong *)0x0) {
      plVar6 = (longlong *)puVar1[5];
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar2)(uVar5,local_res8);
    if (cVar4 == '\0') {
      return;
    }
  }
  lVar3 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
    local_res8[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar3 + 8),param_1,
               local_res8);
  }
  return;
}

// operator() @ 1435ea280

void __thiscall
`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l13::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ForAnyElementType *pFVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int local_res8 [2];
  uint local_res10 [2];
  
  puVar3 = *(undefined8 **)this;
  local_res10[0] = param_1;
  if ((void *)*puVar3 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable((void *)*puVar3);
    pcVar4 = (code *)*puVar3;
    plVar11 = puVar3 + 2;
    if ((longlong *)puVar3[5] != (longlong *)0x0) {
      plVar11 = (longlong *)puVar3[5];
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar4)(uVar10,local_res8);
    if (cVar7 == '\0') {
      return;
    }
  }
  uVar6 = local_res10[0];
  lVar12 = *(longlong *)((longlong)this + 8);
  if ((((int)local_res10[0] < 0) || (*(int *)(lVar12 + 0x18) <= (int)local_res10[0])) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(longlong *)(lVar12 + 0x10) != 0) {
    lVar12 = *(longlong *)(lVar12 + 0x10);
  }
  if ((*(uint *)(lVar12 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
       (uVar6 & 0x1f) & 1) == 0) {
    pFVar5 = *(ForAnyElementType **)((longlong)this + 0x10);
    if (((pFVar5->Data <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 <
         pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar5,piVar1);
    }
    uVar6 = local_res10[0];
    *(int *)&pFVar5[1].Data = iVar9 + 1;
    *(uint *)(pFVar5->Data + (longlong)iVar9 * 4) = local_res10[0];
    lVar12 = *(longlong *)((longlong)this + 8);
    if ((((int)local_res10[0] < 0) || (*(int *)(lVar12 + 0x18) <= (int)local_res10[0])) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(lVar12 + 0x10) != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x10);
    }
    puVar2 = (uint *)(lVar12 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar6 & 0x1f);
  }
  return;
}

// operator() @ 1435ea450

void __thiscall
`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l15::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_res8 [2];
  int local_res10 [2];
  
  puVar1 = *(undefined8 **)this;
  local_res10[0] = param_1;
  if ((void *)*puVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable((void *)*puVar1);
    pcVar2 = (code *)*puVar1;
    plVar7 = puVar1 + 2;
    if ((longlong *)puVar1[5] != (longlong *)0x0) {
      plVar7 = (longlong *)puVar1[5];
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar2)(uVar6,local_res8);
    if (cVar4 == '\0') {
      return;
    }
  }
  lVar3 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
    lVar8 = *(longlong *)(lVar3 + 0x48);
    if (*(longlong *)(lVar3 + 0x48) == 0) {
      lVar8 = lVar3 + 0x40;
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar5 * 0xc) == param_1) {
          return;
        }
        iVar5 = *(int *)(*(longlong *)(lVar3 + 8) + 4 + (longlong)iVar5 * 0xc);
      } while (iVar5 != -1);
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)local_res10);
  return;
}

// AsBitArray @ 1435f1470

TBitArray<FDefaultBitArrayAllocator> * __thiscall
UE::Geometry::FMeshFaceSelection::AsBitArray
          (FMeshFaceSelection *this,TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  longlong lVar10;
  ForElementType<unsigned_int> FVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  iVar15 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->MaxBits = 0x80;
  __return_storage_ptr__->NumBits = iVar15;
  uVar7 = iVar15 + 0x1f;
  uVar17 = uVar7 >> 5;
  if (uVar7 >> 5 != 0) {
    if (4 < uVar17) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&__return_storage_ptr__->AllocatorInstance,0,uVar17,4);
      __return_storage_ptr__->MaxBits = uVar17 << 5;
    }
    FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar4;
    }
    memset((void *)FVar11,0,(ulonglong)uVar17 << 2);
    uVar17 = __return_storage_ptr__->NumBits >> 0x1f & 0x1f;
    uVar7 = __return_storage_ptr__->NumBits + uVar17;
    iVar15 = (uVar7 & 0x1f) - uVar17;
    if (iVar15 != 0) {
      FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)__return_storage_ptr__;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar4;
      }
      puVar16 = (uint *)((longlong)FVar11 + (longlong)((int)uVar7 >> 5) * 4);
      *puVar16 = *puVar16 & 0xffffffffU >> (0x20U - (char)iVar15 & 0x1f);
    }
  }
  iVar15 = *(int *)&(this->Selected).Elements.field_0x28;
  puVar1 = &(this->Selected).Elements.field_0x10;
  uVar7 = 1;
  iVar8 = 0;
  iVar12 = iVar13;
  if (iVar15 != 0) {
    puVar16 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar17 = *puVar16;
    iVar13 = 0;
    iVar12 = 0;
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1435f15ce;
      uVar17 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = iVar13 + -1 + local_res10;
    if (iVar15 < iVar8) {
      iVar8 = iVar15;
    }
  }
LAB_1435f15ce:
  uVar17 = *(uint *)&(this->Selected).Elements.field_0x28;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  uVar7 = uVar17 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Selected).Elements.field_0x8 -
                       *(int *)&(this->Selected).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar15 < (int)uVar17)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar5)();
    return pTVar9;
  }
  uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar17 != uVar3) {
    puVar14 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar12;
      uVar7 = uVar7 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1435f16d0;
      uVar17 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar17 = local_res18 + -1 + uVar7;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_1435f16d0:
  while( true ) {
    if (*(int *)&(this->Selected).Elements.field_0x8 - *(int *)&(this->Selected).Elements.field_0x34
        != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar17) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar13 = *(int *)(*(longlong *)&(this->Selected).Elements +
                     (longlong)TStack_60.CurrentBitIndex * 0xc);
    if (((iVar13 < 0) || (__return_storage_ptr__->NumBits <= iVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar5)();
      return pTVar9;
    }
    FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar4;
    }
    iVar15 = iVar13;
    if (iVar13 < 0) {
      iVar15 = iVar13 + 0x1f;
    }
    puVar16 = (uint *)((longlong)FVar11 + (longlong)(iVar15 >> 5) * 4);
    *puVar16 = *puVar16 | 1 << ((byte)iVar13 & 0x1f);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// ContractBorderByOneRingNeighbours @ 1435f7fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours
          (FMeshFaceSelection *this,int param_1,bool param_2,
          TUniqueFunction<bool___cdecl(int)> *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  FDynamicMesh3 *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  TUniqueFunction<bool___cdecl(int)> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  int iVar21;
  uint *puVar22;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8;
  char local_1c7;
  undefined1 local_1c6 [2];
  uint local_1c4;
  int local_1c0;
  int local_1bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  int local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  undefined8 local_168;
  TUniqueFunction<bool___cdecl(int)> *local_160;
  undefined8 local_158;
  undefined4 local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  TUniqueFunction<bool___cdecl(int)> *local_e8;
  FMeshFaceSelection *local_e0;
  code *local_d8;
  TUniqueFunction<bool___cdecl(int)> **local_d0;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_88._8_4_ = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._12_4_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_40 = 0;
  local_1c0 = 0;
  local_1c7 = param_2;
  local_1bc = param_1;
  local_160 = param_3;
  if (0 < param_1) {
    do {
      iVar18 = 0;
      pTVar23 = &this->Selected;
      puVar19 = &(this->Selected).Elements.field_0x10;
      iVar21 = 0;
      if (local_88._8_4_ != local_54) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88);
        local_88._8_4_ = 0;
        if ((int)local_88._12_4_ < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        local_58 = 0xffffffff;
        local_54 = 0;
        local_60 = 0;
      }
      iVar12 = *(int *)&(this->Selected).Elements.field_0x28;
      uStack_1ac = 1;
      uStack_19c = iVar21;
      if (iVar12 != 0) {
        puVar16 = *(uint **)&(this->Selected).Elements.field_0x20;
        puVar22 = (uint *)puVar19;
        if (puVar16 != (uint *)0x0) {
          puVar22 = puVar16;
        }
        uVar17 = *puVar22;
        while (uVar17 == 0) {
          lVar11 = (longlong)iVar18;
          iVar21 = iVar21 + 0x20;
          iVar18 = iVar18 + 1;
          uStack_19c = iVar12;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1435f813e;
          uVar17 = puVar22[lVar11 + 1];
        }
        uStack_1ac = -uVar17 & uVar17;
        uVar20 = (ulonglong)uStack_1ac * 2 + 1;
        lVar11 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_180 = (int)lVar11;
        uStack_19c = iVar21 + -1 + local_180;
        if (iVar12 < (int)uStack_19c) {
          uStack_19c = iVar12;
        }
      }
LAB_1435f813e:
      uVar17 = *(uint *)&(this->Selected).Elements.field_0x28;
      uStack_194 = local_ac;
      uVar15 = uVar17 & 0xffffffe0;
      iStack_190 = *(int *)&(this->Selected).Elements.field_0x8 -
                   *(int *)&(this->Selected).Elements.field_0x34;
      uStack_1a0 = 0xffffffff;
      local_148 = pTVar23;
      TStack_140._padding_ = CONCAT44(uStack_1ac,iVar18);
      iVar14 = (int)uVar17 >> 5;
      TStack_140.BaseBitIndex = iVar21;
      TStack_140._28_4_ = local_ac;
      uStack_120 = CONCAT44(uStack_18c,iStack_190);
      TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar19;
      TStack_140.UnvisitedBitMask = 0xffffffff;
      TStack_140.CurrentBitIndex = uStack_19c;
      local_1c4 = uVar17;
      local_1b8 = pTVar23;
      iStack_1b0 = iVar18;
      local_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar19;
      local_198 = iVar21;
      if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar1 = *(uint *)&(this->Selected).Elements.field_0x28;
      if (uVar17 != uVar1) {
        puVar2 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
        if (puVar2 != (undefined1 *)0x0) {
          puVar19 = puVar2;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
        while (uVar17 == 0) {
          lVar11 = (longlong)iVar14;
          uVar15 = uVar15 + 0x20;
          iVar14 = iVar14 + 1;
          uVar17 = uVar1;
          local_1c4 = uVar1;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1435f8270;
          uVar17 = *(uint *)(puVar19 + lVar11 * 4 + 4);
        }
        uVar20 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_17c = (int)lVar11;
        uVar17 = local_17c + -1 + uVar15;
        local_1c4 = uVar17;
        if ((int)uVar1 < (int)uVar17) {
          uVar17 = uVar1;
          local_1c4 = uVar1;
        }
      }
LAB_1435f8270:
      while( true ) {
        pTVar7 = local_148;
        if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
            (int)uStack_120) {
          local_1c8 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
        }
        uVar15 = local_60;
        if (((TStack_140.CurrentBitIndex == uVar17) &&
            (TStack_140.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->Selected).Elements.field_0x10)) &&
           (pTVar7 == pTVar23)) break;
        lVar25 = 3;
        puVar16 = (uint *)&local_158;
        uVar17 = *(uint *)(*(longlong *)&pTVar7->Elements +
                          (longlong)TStack_140.CurrentBitIndex * 0xc);
        uVar20 = (ulonglong)(uVar17 & 0x1ff);
        lVar11 = *(longlong *)
                  ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar17 >> 9) * 8);
        local_158 = *(undefined8 *)(lVar11 + uVar20 * 0xc);
        local_150 = *(undefined4 *)(lVar11 + 8 + uVar20 * 0xc);
        do {
          uVar17 = *puVar16;
          pFVar3 = this->Mesh;
          if ((-1 < (int)uVar17) &&
             ((int)uVar17 <
              (int)((pFVar3->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar3->EdgeRefCounts).RefCounts.CurBlockUsed))) {
            lVar11 = (ulonglong)(uVar17 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar3->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + lVar11) + (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) <
                0xfffe) {
              iVar21 = *(int *)&(this->Selected).Elements.field_0x8;
              puVar24 = (undefined8 *)
                        (*(longlong *)((pFVar3->Edges).Blocks.AllocatorInstance.Data + lVar11) +
                        (ulonglong)(uVar17 & 0x1ff) * 0x10);
              uVar20 = puVar24[1];
              iVar18 = *(int *)&(this->Selected).Elements.field_0x34;
              if (iVar21 != iVar18) {
                FVar4 = (this->Selected).Hash.SecondaryData;
                FVar13 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
                if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                  FVar13 = FVar4;
                }
                iVar12 = *(int *)((longlong)FVar13 +
                                 ((ulonglong)((this->Selected).HashSize - 1) & uVar20 & 0xffffffff)
                                 * 4);
                if (iVar12 != -1) {
                  do {
                    if (*(int *)(*(longlong *)&pTVar23->Elements + (longlong)iVar12 * 0xc) ==
                        (int)uVar20) goto LAB_1435f83cc;
                    iVar12 = *(int *)(*(longlong *)&pTVar23->Elements + 4 + (longlong)iVar12 * 0xc);
                  } while (iVar12 != -1);
                }
              }
              iVar12 = -1;
LAB_1435f83cc:
              local_168._4_4_ = (uint)(uVar20 >> 0x20);
              local_168 = uVar20;
              if (local_168._4_4_ == 0xffffffff) {
                bVar9 = true;
              }
              else {
                if (iVar21 != iVar18) {
                  FVar4 = (this->Selected).Hash.SecondaryData;
                  FVar13 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
                  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                    FVar13 = FVar4;
                  }
                  iVar21 = *(int *)((longlong)FVar13 +
                                   (ulonglong)((this->Selected).HashSize - 1U & local_168._4_4_) * 4
                                   );
                  if (iVar21 != -1) {
                    do {
                      if (*(uint *)(*(longlong *)&pTVar23->Elements + (longlong)iVar21 * 0xc) ==
                          local_168._4_4_) goto LAB_1435f842c;
                      iVar21 = *(int *)(*(longlong *)&pTVar23->Elements + 4 + (longlong)iVar21 * 0xc
                                       );
                    } while (iVar21 != -1);
                  }
                }
                iVar21 = -1;
LAB_1435f842c:
                if ((iVar21 != -1) == (iVar12 != -1)) goto LAB_1435f8476;
                bVar9 = false;
              }
              if ((local_1c7 != '\0') || (!bVar9)) {
                local_188 = *puVar24;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
                           &local_178,(bool *)&local_188);
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
                           &local_174,(bool *)((longlong)&local_188 + 4));
              }
            }
          }
LAB_1435f8476:
          puVar16 = puVar16 + 1;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
        uVar17 = local_1c4;
      }
      iStack_1b0 = 0;
      local_198 = 0;
      uStack_1ac = 1;
      uStack_19c = 0;
      if (local_60 != 0) {
        puVar16 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar16 = local_68;
        }
        uVar17 = *puVar16;
        while (uVar17 == 0) {
          lVar11 = (longlong)iStack_1b0;
          local_198 = local_198 + 0x20;
          iStack_1b0 = iStack_1b0 + 1;
          uStack_19c = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b0)
          goto LAB_1435f8530;
          uVar17 = puVar16[lVar11 + 1];
        }
        uStack_1ac = -uVar17 & uVar17;
        uVar20 = (ulonglong)uStack_1ac * 2 + 1;
        lVar11 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_170 = (int)lVar11;
        uStack_19c = local_198 + -1 + local_170;
        if ((int)local_60 < (int)uStack_19c) {
          uStack_19c = local_60;
        }
      }
LAB_1435f8530:
      local_1b8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88;
      uStack_194 = local_8c;
      local_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar17 = local_60 & 0xffffffe0;
      iStack_190 = local_88._8_4_ - local_54;
      uStack_1a0 = 0xffffffff;
      local_118 = (longlong *)local_1b8;
      TStack_110._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
      iVar21 = (int)local_60 >> 5;
      bVar10 = (byte)local_60;
      TStack_110.Array = local_1a8;
      TStack_110.UnvisitedBitMask = 0xffffffff;
      TStack_110.CurrentBitIndex = uStack_19c;
      TStack_110.BaseBitIndex = local_198;
      TStack_110._28_4_ = local_8c;
      uStack_f0 = CONCAT44(uStack_18c,iStack_190);
      if (((int)local_60 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar6 = local_160;
      if (uVar15 != local_60) {
        puVar16 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar16 = local_68;
        }
        uVar15 = -1 << (bVar10 & 0x1f) & puVar16[iVar21];
        while (uVar15 == 0) {
          lVar11 = (longlong)iVar21;
          uVar17 = uVar17 + 0x20;
          iVar21 = iVar21 + 1;
          uVar15 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_1435f8650;
          uVar15 = puVar16[lVar11 + 1];
        }
        uVar20 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_16c = (int)lVar11;
        uVar15 = local_16c + -1 + uVar17;
        if ((int)local_60 < (int)uVar15) {
          uVar15 = local_60;
        }
      }
LAB_1435f8650:
      while( true ) {
        plVar8 = local_118;
        if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
          local_1c6[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c6);
        }
        if (((TStack_110.CurrentBitIndex == uVar15) &&
            (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar8 == (longlong *)local_88)) break;
        local_d0 = &local_e8;
        local_e8 = pTVar6;
        local_d8 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours'::__l20::<lambda_1>,void,int>
                   ::Call;
        local_e0 = this;
        FDynamicMesh3::EnumerateVertexTriangles
                  (this->Mesh,*(int *)(*plVar8 + (longlong)TStack_110.CurrentBitIndex * 0xc),
                   (TFunctionRef<void___cdecl(int)> *)&local_d8);
        TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
      }
      local_1c0 = local_1c0 + 1;
    } while (local_1c0 < local_1bc);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// ExpandToOneRingNeighbours @ 1435f9640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours
          (FMeshFaceSelection *this,TUniqueFunction<bool___cdecl(int)> *param_1)

{
  TArray<int,TFixedAllocator<3>_> *pTVar1;
  uint uVar2;
  undefined1 *puVar3;
  FDynamicMesh3 *pFVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TUniqueFunction<bool___cdecl(int)> *pTVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  int iVar17;
  TArray<int,TFixedAllocator<3>_> *pTVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar25;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_207 [3];
  uint local_204;
  undefined1 local_200 [8];
  undefined4 local_1f8 [2];
  undefined8 local_1f0;
  ulonglong local_1e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  TUniqueFunction<bool___cdecl(int)> *local_198;
  undefined8 local_190;
  undefined4 local_188;
  longlong *local_180;
  int iStack_178;
  undefined4 uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  code *local_f0;
  TUniqueFunction<bool___cdecl(int)> **local_e8;
  TUniqueFunction<bool___cdecl(int)> *local_e0;
  FMeshFaceSelection *local_d8;
  undefined1 *local_d0;
  undefined4 local_ac;
  TArray<int,TFixedAllocator<3>_> local_a8;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_5c = 0x80;
  iStack_1d8 = 0;
  local_58 = 0xffffffff;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_1e0 = &this->Selected;
  local_60 = 0;
  local_54 = 0;
  uStack_1d4 = 1;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_1c0 = 0;
  iVar17 = *(int *)&(this->Selected).Elements.field_0x28;
  local_1e8 = 1;
  iStack_1c4 = 0;
  if (iVar17 != 0) {
    puVar22 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&(this->Selected).Elements.field_0x10;
    }
    uVar21 = *puVar22;
    local_1c0 = 0;
    while (uVar21 == 0) {
      lVar12 = (longlong)iStack_1d8;
      local_1c0 = local_1c0 + 0x20;
      iStack_1d8 = iStack_1d8 + 1;
      iStack_1c4 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8) goto LAB_1435f9752;
      uVar21 = puVar22[lVar12 + 1];
    }
    uStack_1d4 = -uVar21 & uVar21;
    uVar13 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1b0 = (int)lVar12;
    iStack_1c4 = local_1c0 + -1 + local_1b0;
    if (iVar17 < iStack_1c4) {
      iStack_1c4 = iVar17;
    }
  }
LAB_1435f9752:
  local_1d0 = &(this->Selected).Elements.field_0x10;
  uVar21 = *(uint *)&(this->Selected).Elements.field_0x28;
  uVar19 = uVar21 & 0xffffffe0;
  iStack_1b8 = *(int *)&(this->Selected).Elements.field_0x8 -
               *(int *)&(this->Selected).Elements.field_0x34;
  uStack_1c8 = 0xffffffff;
  local_150 = local_1e0;
  TStack_148._padding_ = CONCAT44(uStack_1d4,iStack_1d8);
  iVar16 = (int)uVar21 >> 5;
  TStack_148.BaseBitIndex = local_1c0;
  TStack_148._28_4_ = local_ac;
  uStack_128 = CONCAT44(uStack_1b4,iStack_1b8);
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1d0;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  TStack_148.CurrentBitIndex = iStack_1c4;
  local_204 = uVar21;
  local_198 = param_1;
  if ((((int)uVar21 < 0) || (iVar17 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar21 != uVar2) {
    puVar3 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    puVar23 = &(this->Selected).Elements.field_0x10;
    if (puVar3 != (undefined1 *)0x0) {
      puVar23 = puVar3;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar16 * 4);
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      local_204 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1435f986f;
      uVar21 = *(uint *)(puVar23 + lVar12 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1ac = (int)lVar12;
    local_204 = local_1ac + -1 + uVar19;
    if ((int)uVar2 < (int)local_204) {
      local_204 = uVar2;
    }
  }
LAB_1435f986f:
  while( true ) {
    pTVar8 = local_150;
    uVar21 = local_204;
    pTVar25 = &this->Selected;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_208 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
    }
    uVar19 = local_60;
    if (((TStack_148.CurrentBitIndex == uVar21) &&
        (TStack_148.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->Selected).Elements.field_0x10)) &&
       (pTVar8 == pTVar25)) break;
    lVar20 = 3;
    puVar22 = (uint *)&local_190;
    uVar21 = *(uint *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_148.CurrentBitIndex * 0xc);
    uVar13 = (ulonglong)(uVar21 & 0x1ff);
    lVar12 = *(longlong *)
              ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar21 >> 9) * 8);
    local_190 = *(undefined8 *)(lVar12 + uVar13 * 0xc);
    local_188 = *(undefined4 *)(lVar12 + 8 + uVar13 * 0xc);
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 3;
    do {
      uVar21 = *puVar22;
      pFVar4 = this->Mesh;
      uVar13 = local_1a0;
      if ((-1 < (int)uVar21) &&
         ((int)uVar21 <
          (int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        uVar24 = (ulonglong)(uVar21 >> 9);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 uVar24 * 8) + (ulonglong)(uVar21 & 0x1ff) * 2) - 1U) < 0xfffe) {
          iVar17 = *(int *)&(this->Selected).Elements.field_0x8;
          uVar13 = *(ulonglong *)
                    (*(longlong *)((pFVar4->Edges).Blocks.AllocatorInstance.Data + uVar24 * 8) + 8 +
                    (ulonglong)(uVar21 & 0x1ff) * 0x10);
          iVar16 = *(int *)&(this->Selected).Elements.field_0x34;
          if (iVar17 != iVar16) {
            FVar5 = (this->Selected).Hash.SecondaryData;
            FVar15 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
              FVar15 = FVar5;
            }
            iVar14 = *(int *)((longlong)FVar15 +
                             ((ulonglong)((this->Selected).HashSize - 1) & uVar13 & 0xffffffff) * 4)
            ;
            if (iVar14 != -1) {
              do {
                if (*(int *)(*(longlong *)&pTVar25->Elements + (longlong)iVar14 * 0xc) ==
                    (int)uVar13) goto LAB_1435f99cc;
                iVar14 = *(int *)(*(longlong *)&pTVar25->Elements + 4 + (longlong)iVar14 * 0xc);
              } while (iVar14 != -1);
            }
          }
          iVar14 = -1;
LAB_1435f99cc:
          local_1a0._4_4_ = (uint)(uVar13 >> 0x20);
          if (local_1a0._4_4_ != 0xffffffff) {
            if (iVar17 != iVar16) {
              FVar5 = (this->Selected).Hash.SecondaryData;
              FVar15 = (ForElementType<FSetElementId>)&(this->Selected).Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar15 = FVar5;
              }
              iVar17 = *(int *)((longlong)FVar15 +
                               (ulonglong)((this->Selected).HashSize - 1U & local_1a0._4_4_) * 4);
              if (iVar17 != -1) {
                do {
                  if (*(uint *)(*(longlong *)&pTVar25->Elements + (longlong)iVar17 * 0xc) ==
                      local_1a0._4_4_) goto LAB_1435f9a2c;
                  iVar17 = *(int *)(*(longlong *)&pTVar25->Elements + 4 + (longlong)iVar17 * 0xc);
                } while (iVar17 != -1);
              }
            }
            iVar17 = -1;
LAB_1435f9a2c:
            if ((iVar17 != -1) != (iVar14 != -1)) {
              local_1f0 = *(undefined8 *)
                           (*(longlong *)
                             ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + uVar24 * 8) +
                           (ulonglong)(uVar21 & 0x1ff) * 0x10);
              local_1a0 = uVar13;
              TArray<int,TFixedAllocator<3>_>::AddUniqueImpl<int_const_&>
                        (&local_a8,(int *)&local_1f0);
              TArray<int,TFixedAllocator<3>_>::AddUniqueImpl<int_const_&>
                        (&local_a8,(int *)((longlong)&local_1f0 + 4));
              uVar13 = local_1a0;
            }
          }
        }
      }
      local_1a0 = uVar13;
      iVar17 = local_a8.ArrayNum;
      pTVar7 = local_198;
      puVar22 = puVar22 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    uVar13 = (ulonglong)local_a8.ArrayNum;
    pTVar18 = &local_a8;
    pTVar1 = (TArray<int,TFixedAllocator<3>_> *)(local_a8.AllocatorInstance.InlineData + uVar13);
    while( true ) {
      if ((uint)uVar13 != iVar17) {
        local_207[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_207);
      }
      if (pTVar18 == pTVar1) break;
      local_d0 = local_88;
      local_e8 = &local_e0;
      local_e0 = pTVar7;
      local_f0 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l15::<lambda_1>,void,int>
                 ::Call;
      local_d8 = this;
      FDynamicMesh3::EnumerateVertexTriangles
                (this->Mesh,*(int *)(pTVar18->AllocatorInstance).InlineData[0].Pad,
                 (TFunctionRef<void___cdecl(int)> *)&local_f0);
      uVar13 = (ulonglong)(uint)local_a8.ArrayNum;
      pTVar18 = (TArray<int,TFixedAllocator<3>_> *)((pTVar18->AllocatorInstance).InlineData + 1);
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  }
  iStack_178 = 0;
  local_160 = 0;
  uStack_164 = 0;
  if (local_60 != 0) {
    puVar22 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar22 = local_68;
    }
    uVar21 = *puVar22;
    while (uVar21 == 0) {
      lVar12 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      uStack_164 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_178)
      goto LAB_1435f9bb3;
      uVar21 = puVar22[lVar12 + 1];
    }
    local_1e8 = (ulonglong)(-uVar21 & uVar21);
    uVar13 = local_1e8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1a8 = (int)lVar12;
    uStack_164 = local_160 + -1 + local_1a8;
    if ((int)local_60 < (int)uStack_164) {
      uStack_164 = local_60;
    }
  }
LAB_1435f9bb3:
  local_180 = (longlong *)local_88;
  uStack_174 = (int)local_1e8;
  uVar21 = local_60 & 0xffffffe0;
  iStack_15c = iStack_1c4;
  local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uStack_168 = 0xffffffff;
  iStack_158 = local_88._8_4_ - local_54;
  local_120 = (longlong *)local_88;
  TStack_118._padding_ = CONCAT44((int)local_1e8,iStack_178);
  iVar17 = (int)local_60 >> 5;
  bVar11 = (byte)local_60;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_164;
  TStack_118.BaseBitIndex = local_160;
  TStack_118._28_4_ = iStack_1c4;
  uStack_f8 = CONCAT44(uStack_154,local_88._8_4_ - local_54);
  if (((int)local_60 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar19 != local_60) {
    puVar22 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar22 = local_68;
    }
    uVar19 = -1 << (bVar11 & 0x1f) & puVar22[iVar17];
    while (uVar19 == 0) {
      lVar12 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar19 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1435f9cd0;
      uVar19 = puVar22[lVar12 + 1];
    }
    uVar13 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar19 = (int)lVar12 + -1 + uVar21;
    if ((int)local_60 < (int)uVar19) {
      uVar19 = local_60;
    }
  }
LAB_1435f9cd0:
  while( true ) {
    plVar9 = local_120;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_200);
    }
    if (((TStack_118.CurrentBitIndex == uVar19) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar9 == (longlong *)local_88)) break;
    local_1f8[0] = *(undefined4 *)(*plVar9 + (longlong)TStack_118.CurrentBitIndex * 0xc);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->Selected,&local_1a4,(bool *)local_1f8);
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// ExpandToOneRingNeighbours @ 1435f9db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours
          (FMeshFaceSelection *this,int param_1,TUniqueFunction<bool___cdecl(int)> *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  FMeshFaceSelection *pFVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  longlong *plVar14;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  undefined1 local_100 [16];
  undefined4 local_f0 [2];
  TUniqueFunction<bool___cdecl(int)> *local_e8;
  TUniqueFunction<bool___cdecl(int)> *local_e0;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  ForAnyElementType *local_d0;
  ForAnyElementType local_c8;
  int local_c0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  int local_90 [2];
  FMeshFaceSelection *local_88;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e8 = param_2;
  local_88 = this;
  if (param_1 == 1) {
    ExpandToOneRingNeighbours(this,param_2);
  }
  else {
    local_80 = &this->Selected;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                       (local_80,(TArray<int,TSizedDefaultAllocator<32>_> *)local_100);
    if (&local_b8 != pTVar9) {
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      local_b8.AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = pTVar9->ArrayNum;
      local_b8.ArrayMax = pTVar9->ArrayMax;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_100._0_8_);
    }
    AsBitArray(this,&local_68);
    if (0 < param_1) {
      local_a8 = 0;
      local_a0 = 1;
      local_98 = (ulonglong)(uint)param_1;
      do {
        lVar7 = local_a0;
        lVar6 = local_a8;
        pFVar13 = &local_c8 + local_a8 * 2;
        lVar12 = local_a0 * 2;
        iVar3 = local_c0[local_a8 * 4 + 1];
        lVar5 = local_a8 * 4;
        local_c0[local_a8 * 4] = 0;
        if (iVar3 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,pFVar13,0,local_c0 + lVar5 + 1);
        }
        pFVar8 = local_88;
        pFVar11 = (&local_c8)[lVar12].Data;
        iVar3 = local_c0[lVar7 * 4];
        pFVar2 = pFVar11 + (longlong)iVar3 * 4;
        while( true ) {
          if (local_c0[lVar7 * 4] != iVar3) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_108);
          }
          this_00 = local_80;
          if (pFVar11 == pFVar2) break;
          uVar10 = (ulonglong)(*(uint *)pFVar11 & 0x1ff);
          lVar12 = *(longlong *)
                    ((pFVar8->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(*(uint *)pFVar11 >> 9) * 8);
          local_78 = *(undefined8 *)(lVar12 + uVar10 * 0xc);
          iVar4 = *(int *)(lVar12 + 8 + uVar10 * 0xc);
          local_e0 = local_e8;
          local_d8 = &local_68;
          local_100._8_8_ = &local_e0;
          local_100._0_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l13::<lambda_1>,void,int>
               ::Call;
          local_d0 = pFVar13;
          FDynamicMesh3::EnumerateVertexTriangles
                    (pFVar8->Mesh,(int)local_78,(TFunctionRef<void___cdecl(int)> *)local_100);
          local_e0 = local_e8;
          local_d8 = &local_68;
          local_100._8_8_ = &local_e0;
          local_100._0_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l13::<lambda_1>,void,int>
               ::Call;
          local_d0 = pFVar13;
          FDynamicMesh3::EnumerateVertexTriangles
                    (pFVar8->Mesh,local_78._4_4_,(TFunctionRef<void___cdecl(int)> *)local_100);
          local_e0 = local_e8;
          local_d8 = &local_68;
          local_100._8_8_ = &local_e0;
          local_100._0_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l13::<lambda_1>,void,int>
               ::Call;
          local_d0 = pFVar13;
          FDynamicMesh3::EnumerateVertexTriangles
                    (pFVar8->Mesh,iVar4,(TFunctionRef<void___cdecl(int)> *)local_100);
          pFVar11 = pFVar11 + 4;
        }
        pFVar11 = pFVar13->Data;
        iVar3 = local_c0[lVar6 * 4];
        pFVar2 = pFVar11 + (longlong)iVar3 * 4;
        while( true ) {
          if (local_c0[lVar6 * 4] != iVar3) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_108);
          }
          lVar12 = local_a8;
          if (pFVar11 == pFVar2) break;
          local_f0[0] = *(undefined4 *)pFVar11;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (this_00,local_90,(bool *)local_f0);
          pFVar11 = pFVar11 + 4;
        }
        local_98 = local_98 - 1;
        local_a8 = local_a0;
        local_a0 = lVar12;
      } while (local_98 != 0);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    plVar14 = &local_a8;
    lVar12 = 2;
    do {
      plVar1 = plVar14 + -2;
      plVar14 = plVar14 + -2;
      lVar12 = lVar12 + -1;
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
    } while (lVar12 != 0);
  }
  return;
}

// begin @ 14361f270

TBaseIterator<1,1> * __thiscall
UE::Geometry::FMeshFaceSelection::begin
          (FMeshFaceSelection *this,TBaseIterator<1,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uStack_1c;
  
  iVar3 = *(int *)&(this->Selected).Elements.field_0x28;
  puVar1 = &(this->Selected).Elements.field_0x10;
  iVar9 = 0;
  uVar6 = 1;
  iVar10 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Selected).Elements.field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar4 = *puVar11;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14361f309;
      uVar4 = puVar11[lVar8 + 1];
    }
    uVar6 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14361f309:
  iVar3 = *(int *)&(this->Selected).Elements.field_0x8;
  iVar5 = *(int *)&(this->Selected).Elements.field_0x34;
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)&this->Selected;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar6,iVar9);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)puVar1;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(iVar7,0xffffffff);
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(iVar7,iVar10);
  *(ulonglong *)&(__return_storage_ptr__->ElementIt).InitialNum = CONCAT44(uStack_1c,iVar3 - iVar5);
  return __return_storage_ptr__;
}

// end @ 14361f380

TBaseIterator<1,1> * __thiscall
UE::Geometry::FMeshFaceSelection::end
          (FMeshFaceSelection *this,TBaseIterator<1,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  TBaseIterator<1,1> *pTVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 local_5c;
  undefined4 uStack_2c;
  
  uVar11 = *(uint *)&(this->Selected).Elements.field_0x28;
  iVar12 = (int)uVar11 >> 5;
  bVar9 = (byte)uVar11 & 0x1f;
  uVar16 = 1 << bVar9;
  uVar13 = -1 << bVar9;
  uVar14 = uVar11 & 0xffffffe0;
  puVar1 = &(this->Selected).Elements.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar8 = (TBaseIterator<1,1> *)(*pcVar6)();
    return pTVar8;
  }
  uVar3 = *(uint *)&(this->Selected).Elements.field_0x28;
  if (uVar11 != uVar3) {
    puVar15 = *(undefined1 **)&(this->Selected).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = uVar13 & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14361f46c;
      uVar13 = 0xffffffff;
      uVar11 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar16 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14361f46c:
  iVar4 = *(int *)&(this->Selected).Elements.field_0x8;
  iVar5 = *(int *)&(this->Selected).Elements.field_0x34;
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)&this->Selected;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar16,iVar12);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)puVar1;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar11,uVar13);
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(local_5c,uVar14);
  *(ulonglong *)&(__return_storage_ptr__->ElementIt).InitialNum = CONCAT44(uStack_2c,iVar4 - iVar5);
  return __return_storage_ptr__;
}

