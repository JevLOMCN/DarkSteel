// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 11

// operator() @ 14ca34cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`UE::Geometry::FGeometryCollectionToDynamicMeshes::AppendMeshToCollection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType *pFVar2;
  longlong lVar3;
  TArray<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
  *this_00;
  longlong lVar4;
  TUniqueMeshVertex<8> *pTVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  ulonglong uVar8;
  FSmallListSet *pFVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_288 [32];
  BaseValueIterator local_258;
  undefined8 local_230;
  undefined1 local_218 [16];
  undefined **local_208;
  FDynamicMesh3 *local_200;
  int local_1f8;
  undefined ***local_1f0;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  int local_170;
  undefined4 uStack_16c;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar8 = 0;
  uVar15 = 0;
  uVar16 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar13 = uVar8;
  if ((uVar16 != 0) &&
     (pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar16) {
      do {
        lVar3 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar1 + (uVar12 >> 9) * 8)) != 0) &&
           (uVar13 = uVar12, *(short *)(lVar3 + *(longlong *)(pFVar1 + (uVar12 >> 9) * 8)) != -1))
        break;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        uVar13 = uVar12;
      } while ((int)uVar10 < (int)uVar16);
    }
  }
  uVar10 = (uint)uVar13;
joined_r0x00014ca34d8b:
  do {
    if (uVar10 == uVar16) {
      return uVar15;
    }
    while( true ) {
      pFVar9 = &param_1->VertexEdgeLists;
      pFVar2 = *(ForAnyElementType **)this;
      iVar11 = *(int *)((longlong)&pFVar2[1].Data + 4);
      *(undefined4 *)&pFVar2[1].Data = 0;
      if (iVar11 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,0,pFVar2,0,(int *)((longlong)&pFVar2[1].Data + 4));
      }
      local_1f0 = (undefined ***)0x0;
      local_208 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_1e8._0_8_ = 0;
      local_1c0 = (longlong *)0x0;
      local_1b8 = (FSmallListSet *)0x0;
      iVar11 = (int)uVar13;
      uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
      local_190 = (FSmallListSet *)0x0;
      uStack_188 = uStack_188 & 0xffffffff00000000;
      local_218._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
           ::Call;
      local_200 = param_1;
      local_1f8 = iVar11;
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_258,pFVar9,iVar11,false);
      uStack_1b0 = CONCAT44(local_258.block_ptr,local_258.ListIndex);
      local_1a8._4_4_ = local_258.iEnd;
      local_1a8._0_4_ = local_258.N;
      local_1b8 = local_258.ListSet;
      local_198 = local_258.cur_value;
      uStack_194 = local_258._36_4_;
      iStack_1a0 = local_258.iCur;
      iStack_19c = local_258.cur_ptr;
      local_258.block_ptr = -1;
      uStack_188 = CONCAT44(0xffffffff,iVar11);
      local_258.N = 0;
      local_258.iCur = -1;
      local_258.cur_ptr = -1;
      local_180 = (ulonglong)(uint)local_258.iEnd << 0x20;
      local_170 = local_258.cur_value;
      uStack_16c = local_258._36_4_;
      uStack_178 = 0xffffffffffffffff;
      local_258.ListSet = pFVar9;
      local_258.ListIndex = iVar11;
      local_190 = pFVar9;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218);
      if ((code *)local_218._0_8_ != (code *)0x0) {
        pppuVar6 = &local_208;
        if (local_1f0 != (undefined ***)0x0) {
          pppuVar6 = local_1f0;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
                 (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
                 (ValueIterator *)&local_190,(ValueIterator *)&local_190,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
      while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
              (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_))) {
        lVar3 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_168._88_4_ >> 9) * 8);
        local_230 = *(undefined8 *)(lVar3 + (ulonglong)(local_168._88_4_ & 0x1ff) * 0xc);
        if ((int)local_230 == iVar11) {
          iVar14 = 0;
        }
        else if ((int)((ulonglong)local_230 >> 0x20) == iVar11) {
          iVar14 = 1;
        }
        else {
          iVar14 = -1;
          if (*(int *)(lVar3 + 8 + (ulonglong)(local_168._88_4_ & 0x1ff) * 0xc) == iVar11) {
            iVar14 = 2;
          }
        }
        this_00 = *(TArray<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
                    **)this;
        pTVar5 = UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>::TUniqueMeshVertex<8>
                           (local_218,param_1,local_168._88_4_,iVar14);
        TArray<UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
        ::AddUniqueImpl<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>_>(this_00,pTVar5);
        UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168);
      }
      if (local_d8._96_8_ != 0) {
        plVar7 = (longlong *)(local_d8 + 0x70);
        if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_d8._136_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_168._96_8_ != 0) {
        plVar7 = (longlong *)(local_168 + 0x70);
        if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_168._136_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_1e8._0_8_ != 0) {
        plVar7 = (longlong *)(local_1e8 + 0x10);
        if (local_1c0 != (longlong *)0x0) {
          plVar7 = local_1c0;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      iVar14 = *(int *)(*(longlong *)this + 8);
      if (*(int *)(*(longlong *)this + 8) < 1) {
        iVar14 = 1;
      }
      uVar10 = iVar11 + 1;
      uVar13 = (ulonglong)uVar10;
      uVar15 = (int)uVar8 + iVar14;
      uVar8 = (ulonglong)uVar15;
      if ((int)uVar16 <= (int)uVar10) break;
      pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar3 = (uVar13 >> 9) * 8;
        lVar4 = (ulonglong)((uint)uVar13 & 0x1ff) * 2;
        if ((*(short *)(lVar4 + *(longlong *)(pFVar1 + lVar3)) != 0) &&
           (*(short *)(lVar4 + *(longlong *)(pFVar1 + lVar3)) != -1)) break;
        uVar10 = (uint)uVar13 + 1;
        uVar13 = (ulonglong)uVar10;
        if ((int)uVar16 <= (int)uVar10) goto joined_r0x00014ca34d8b;
      }
    }
  } while( true );
}

// operator() @ 14ca350e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`UE::Geometry::FGeometryCollectionToDynamicMeshes::UpdateGeometryCollection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType *pFVar2;
  longlong lVar3;
  TArray<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
  *this_00;
  longlong lVar4;
  TUniqueMeshVertex<8> *pTVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  ulonglong uVar8;
  FSmallListSet *pFVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_288 [32];
  BaseValueIterator local_258;
  undefined8 local_230;
  undefined1 local_218 [16];
  undefined **local_208;
  FDynamicMesh3 *local_200;
  int local_1f8;
  undefined ***local_1f0;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  int local_170;
  undefined4 uStack_16c;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar8 = 0;
  uVar15 = 0;
  uVar16 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar13 = uVar8;
  if ((uVar16 != 0) &&
     (pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar12 = 1;
    uVar13 = 1;
    if (1 < (int)uVar16) {
      do {
        lVar3 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar1 + (uVar12 >> 9) * 8)) != 0) &&
           (uVar13 = uVar12, *(short *)(lVar3 + *(longlong *)(pFVar1 + (uVar12 >> 9) * 8)) != -1))
        break;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        uVar13 = uVar12;
      } while ((int)uVar10 < (int)uVar16);
    }
  }
  uVar10 = (uint)uVar13;
joined_r0x00014ca3519b:
  do {
    if (uVar10 == uVar16) {
      return uVar15;
    }
    while( true ) {
      pFVar9 = &param_1->VertexEdgeLists;
      pFVar2 = *(ForAnyElementType **)this;
      iVar11 = *(int *)((longlong)&pFVar2[1].Data + 4);
      *(undefined4 *)&pFVar2[1].Data = 0;
      if (iVar11 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,0,pFVar2,0,(int *)((longlong)&pFVar2[1].Data + 4));
      }
      local_1f0 = (undefined ***)0x0;
      local_208 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_1e8._0_8_ = 0;
      local_1c0 = (longlong *)0x0;
      local_1b8 = (FSmallListSet *)0x0;
      iVar11 = (int)uVar13;
      uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
      local_190 = (FSmallListSet *)0x0;
      uStack_188 = uStack_188 & 0xffffffff00000000;
      local_218._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
           ::Call;
      local_200 = param_1;
      local_1f8 = iVar11;
      UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_258,pFVar9,iVar11,false);
      uStack_1b0 = CONCAT44(local_258.block_ptr,local_258.ListIndex);
      local_1a8._4_4_ = local_258.iEnd;
      local_1a8._0_4_ = local_258.N;
      local_1b8 = local_258.ListSet;
      local_198 = local_258.cur_value;
      uStack_194 = local_258._36_4_;
      iStack_1a0 = local_258.iCur;
      iStack_19c = local_258.cur_ptr;
      local_258.block_ptr = -1;
      uStack_188 = CONCAT44(0xffffffff,iVar11);
      local_258.N = 0;
      local_258.iCur = -1;
      local_258.cur_ptr = -1;
      local_180 = (ulonglong)(uint)local_258.iEnd << 0x20;
      local_170 = local_258.cur_value;
      uStack_16c = local_258._36_4_;
      uStack_178 = 0xffffffffffffffff;
      local_258.ListSet = pFVar9;
      local_258.ListIndex = iVar11;
      local_190 = pFVar9;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218);
      if ((code *)local_218._0_8_ != (code *)0x0) {
        pppuVar6 = &local_208;
        if (local_1f0 != (undefined ***)0x0) {
          pppuVar6 = local_1f0;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
                 (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
                 (ValueIterator *)&local_190,(ValueIterator *)&local_190,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
      while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
              (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_))) {
        lVar3 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_168._88_4_ >> 9) * 8);
        local_230 = *(undefined8 *)(lVar3 + (ulonglong)(local_168._88_4_ & 0x1ff) * 0xc);
        if ((int)local_230 == iVar11) {
          iVar14 = 0;
        }
        else if ((int)((ulonglong)local_230 >> 0x20) == iVar11) {
          iVar14 = 1;
        }
        else {
          iVar14 = -1;
          if (*(int *)(lVar3 + 8 + (ulonglong)(local_168._88_4_ & 0x1ff) * 0xc) == iVar11) {
            iVar14 = 2;
          }
        }
        this_00 = *(TArray<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
                    **)this;
        pTVar5 = UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>::TUniqueMeshVertex<8>
                           (local_218,param_1,local_168._88_4_,iVar14);
        TArray<UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
        ::AddUniqueImpl<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>_>(this_00,pTVar5);
        UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168);
      }
      if (local_d8._96_8_ != 0) {
        plVar7 = (longlong *)(local_d8 + 0x70);
        if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_d8._136_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_168._96_8_ != 0) {
        plVar7 = (longlong *)(local_168 + 0x70);
        if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_168._136_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_1e8._0_8_ != 0) {
        plVar7 = (longlong *)(local_1e8 + 0x10);
        if (local_1c0 != (longlong *)0x0) {
          plVar7 = local_1c0;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      iVar14 = *(int *)(*(longlong *)this + 8);
      if (*(int *)(*(longlong *)this + 8) < 1) {
        iVar14 = 1;
      }
      uVar10 = iVar11 + 1;
      uVar13 = (ulonglong)uVar10;
      uVar15 = (int)uVar8 + iVar14;
      uVar8 = (ulonglong)uVar15;
      if ((int)uVar16 <= (int)uVar10) break;
      pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar3 = (uVar13 >> 9) * 8;
        lVar4 = (ulonglong)((uint)uVar13 & 0x1ff) * 2;
        if ((*(short *)(lVar4 + *(longlong *)(pFVar1 + lVar3)) != 0) &&
           (*(short *)(lVar4 + *(longlong *)(pFVar1 + lVar3)) != -1)) break;
        uVar10 = (uint)uVar13 + 1;
        uVar13 = (ulonglong)uVar10;
        if ((int)uVar16 <= (int)uVar10) goto joined_r0x00014ca3519b;
      }
    }
  } while( true );
}

// AppendMeshToCollection @ 14ca35830

int __cdecl
UE::Geometry::FGeometryCollectionToDynamicMeshes::AppendMeshToCollection
          (FGeometryCollection *param_1,FDynamicMesh3 *param_2,TTransform<double> *param_3,
          FToCollectionOptions *param_4)

{
  float *pfVar1;
  FLinearColor_u_0_s_0 *pFVar2;
  ulong64 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  FString *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res8 [2];
  FDynamicMesh3 *local_res10;
  TTransform<double> *local_res18;
  FToCollectionOptions *local_res20;
  FString local_f0;
  undefined1 local_e0 [8];
  float fStack_d8;
  float fStack_d4;
  FString local_d0;
  int local_c0;
  FString local_b8;
  void *local_a8;
  undefined8 local_a0;
  int local_98 [2];
  void **local_90;
  FString local_88;
  FString local_78;
  __m128 local_68;
  __m128 local_58;
  
  local_90 = &local_a8;
  uVar14 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar7 = FManagedArrayCollection::AddElements
                    ((FManagedArrayCollection *)param_1,1,FGeometryCollection::GeometryGroup);
  lVar16 = (longlong)(int)uVar7;
  local_res8[0] =
       FManagedArrayCollection::AddElements
                 ((FManagedArrayCollection *)param_1,1,FTransformCollection::TransformGroup);
  iVar10 = (param_2->TriangleRefCounts).UsedCount;
  iVar8 = `UE::Geometry::FGeometryCollectionToDynamicMeshes::AppendMeshToCollection'::__l2::
          <lambda_1>::operator()(&local_90,param_2);
  iVar9 = FManagedArrayCollection::AddElements
                    ((FManagedArrayCollection *)param_1,iVar10,FGeometryCollection::FacesGroup);
  local_c0 = FManagedArrayCollection::AddElements
                       ((FManagedArrayCollection *)param_1,iVar8,FGeometryCollection::VerticesGroup)
  ;
  uVar20 = ~uVar7 >> 0x1f;
  uVar13 = 0;
  uVar12 = uVar13;
  if ((int)uVar7 < *(int *)&(param_1->FaceCount).field_0x18) {
    uVar12 = uVar20;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(int *)(*(longlong *)&(param_1->FaceCount).field_0x10 + lVar16 * 4) = iVar10;
  uVar12 = uVar13;
  if ((int)uVar7 < *(int *)&(param_1->FaceStart).field_0x18) {
    uVar12 = uVar20;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(int *)(*(longlong *)&(param_1->FaceStart).field_0x10 + lVar16 * 4) = iVar9;
  uVar12 = uVar13;
  if ((int)uVar7 < *(int *)&(param_1->VertexCount).field_0x18) {
    uVar12 = uVar20;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + lVar16 * 4) = iVar8;
  if ((int)uVar7 < *(int *)&(param_1->VertexStart).field_0x18) {
    uVar13 = uVar20;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  uVar12 = local_res8[0];
  *(int *)(*(longlong *)&(param_1->VertexStart).field_0x10 + lVar16 * 4) = local_c0;
  uVar11 = 0;
  uVar13 = uVar11;
  if ((int)uVar7 < *(int *)&(param_1->TransformIndex).field_0x18) {
    uVar13 = uVar20;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(uint *)(*(longlong *)&(param_1->TransformIndex).field_0x10 + lVar16 * 4) = uVar12;
  lVar16 = (longlong)(int)local_res8[0];
  uVar12 = uVar11;
  if ((int)local_res8[0] < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar16 * 4) = uVar7;
  uVar12 = local_res20->NewMeshParentIndex;
  if ((int)local_res8[0] <= local_res20->NewMeshParentIndex) {
    uVar12 = 0xffffffff;
  }
  uVar13 = 0;
  if (local_res20->bAllowAppendAsRoot == false) {
    if (uVar12 == 0xffffffff) {
      if (0 < (int)local_res8[0]) {
        uVar21 = 0xffffffff;
        uVar17 = uVar14;
        do {
          uVar20 = (uint)uVar14;
          uVar12 = uVar11;
          if ((int)uVar20 < (int)param_1->_padding_) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          if (*(int *)(uVar17 + param_1->_padding_) == -1) {
            uVar12 = uVar13;
            if ((int)uVar20 < *(int *)&(param_1->SimulationType).field_0x18) {
              uVar12 = ~uVar20 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar10 = (*pcVar5)();
              return iVar10;
            }
            if (*(int *)(uVar17 + *(longlong *)&(param_1->SimulationType).field_0x10) == 2) {
              uVar21 = uVar14;
            }
          }
          uVar12 = (uint)uVar21;
          uVar14 = (ulonglong)(uVar20 + 1);
          uVar17 = uVar17 + 4;
        } while ((int)(uVar20 + 1) < (int)local_res8[0]);
        goto LAB_14ca35be5;
      }
LAB_14ca35bf4:
      uVar12 = FManagedArrayCollection::AddElements
                         ((FManagedArrayCollection *)param_1,1,FTransformCollection::TransformGroup)
      ;
      uVar20 = uVar13;
      if ((int)uVar12 < (int)param_1->_padding_) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      *(undefined4 *)(param_1->_padding_ + (longlong)(int)uVar12 * 4) = 0xffffffff;
      uVar20 = uVar13;
      if ((int)uVar12 < (int)param_1->_padding_) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      _local_e0 = (__m128)FLinearColor::White.field0_0x0;
      fVar23 = FLinearColor::White.field0_0x0._0_4_;
      fVar24 = FLinearColor::White.field0_0x0._4_4_;
      fVar25 = FLinearColor::White.field0_0x0._8_4_;
      fVar26 = FLinearColor::White.field0_0x0._12_4_;
      if (uVar20 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        fVar23 = (float)local_e0._0_4_;
        fVar24 = (float)local_e0._4_4_;
        fVar25 = fStack_d8;
        fVar26 = fStack_d4;
      }
      pfVar1 = (float *)(param_1->_padding_ + (longlong)(int)uVar12 * 0x10);
      *pfVar1 = fVar23;
      pfVar1[1] = fVar24;
      pfVar1[2] = fVar25;
      pfVar1[3] = fVar26;
      goto LAB_14ca35cca;
    }
LAB_14ca35be5:
    if (((int)uVar12 < 0) || ((int)param_1->_padding_ <= (int)uVar12)) goto LAB_14ca35bf4;
  }
  else {
LAB_14ca35cca:
    if ((int)uVar12 < 0) {
      iVar10 = (**(code **)(param_1->_padding_ + 0x60))();
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.Data.ArrayNum = 0;
      local_f0.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_f0,iVar10);
      lVar16 = (longlong)(int)local_res8[0];
      uVar20 = uVar13;
      if ((int)local_res8[0] < (int)param_1->_padding_) {
        uVar20 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      pFVar19 = (FString *)(lVar16 * 0x10 + param_1->_padding_);
      if (pFVar19 != &local_f0) {
        pFVar4 = (pFVar19->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar19->Data).AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar19->Data).ArrayNum = local_f0.Data.ArrayNum;
        (pFVar19->Data).ArrayMax = local_f0.Data.ArrayMax;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      lVar16 = (longlong)(int)local_res8[0];
      _local_e0 = (__m128)FLinearColor::White.field0_0x0;
      uVar20 = uVar13;
      if ((int)local_res8[0] < (int)param_1->_padding_) {
        uVar20 = ~local_res8[0] >> 0x1f;
      }
      fVar23 = FLinearColor::White.field0_0x0._0_4_;
      fVar24 = FLinearColor::White.field0_0x0._4_4_;
      fVar25 = FLinearColor::White.field0_0x0._8_4_;
      fVar26 = FLinearColor::White.field0_0x0._12_4_;
      if (uVar20 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        fVar23 = (float)local_e0._0_4_;
        fVar24 = (float)local_e0._4_4_;
        fVar25 = fStack_d8;
        fVar26 = fStack_d4;
      }
      pfVar1 = (float *)(param_1->_padding_ + lVar16 * 0x10);
      *pfVar1 = fVar23;
      pfVar1[1] = fVar24;
      pfVar1[2] = fVar25;
      pfVar1[3] = fVar26;
      goto LAB_14ca36142;
    }
  }
  uVar15 = ~uVar12 >> 0x1f;
  uVar20 = uVar13;
  if ((int)uVar12 < (int)param_1->_padding_) {
    uVar20 = uVar15;
  }
  if ((uVar20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  lVar22 = (longlong)(int)uVar12;
  lVar16 = lVar22 * 0x50;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  ::FString::AppendInt
            (&local_b8,
             *(int *)(param_1->_padding_ + 8 + lVar16) -
             *(int *)(param_1->_padding_ + 0x34 + lVar16));
  ::FString::FString(&local_78,"_");
  uVar20 = uVar11;
  if ((int)uVar12 < (int)param_1->_padding_) {
    uVar20 = uVar15;
  }
  if ((uVar20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  ::FString::ConcatFF(&local_88,(FString *)(lVar22 * 0x10 + param_1->_padding_),&local_78);
  ::FString::ConcatFF(&local_d0,&local_88,&local_b8);
  lVar18 = (longlong)(int)local_res8[0];
  if ((int)local_res8[0] < (int)param_1->_padding_) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  pFVar19 = (FString *)(lVar18 * 0x10 + param_1->_padding_);
  if (pFVar19 != &local_d0) {
    pFVar4 = (pFVar19->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar19->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar19->Data).ArrayNum = local_d0.Data.ArrayNum;
    (pFVar19->Data).ArrayMax = local_d0.Data.ArrayMax;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  uVar20 = uVar13;
  if ((int)uVar12 < (int)param_1->_padding_) {
    uVar20 = uVar15;
  }
  if ((uVar20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  lVar18 = (longlong)(int)local_res8[0];
  pFVar2 = (FLinearColor_u_0_s_0 *)(param_1->_padding_ + lVar22 * 0x10);
  _local_e0 = *(__m128 *)pFVar2;
  uVar20 = uVar13;
  if ((int)local_res8[0] < (int)param_1->_padding_) {
    uVar20 = ~local_res8[0] >> 0x1f;
  }
  fVar23 = pFVar2->R;
  fVar24 = pFVar2->G;
  fVar25 = pFVar2->B;
  fVar26 = pFVar2->A;
  if (uVar20 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    fVar23 = (float)local_e0._0_4_;
    fVar24 = (float)local_e0._4_4_;
    fVar25 = fStack_d8;
    fVar26 = fStack_d4;
  }
  pfVar1 = (float *)(param_1->_padding_ + lVar18 * 0x10);
  *pfVar1 = fVar23;
  pfVar1[1] = fVar24;
  pfVar1[2] = fVar25;
  pfVar1[3] = fVar26;
  uVar20 = uVar13;
  if ((int)uVar12 < (int)param_1->_padding_) {
    uVar20 = uVar15;
  }
  if ((uVar20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(param_1->_padding_ + lVar16),
             local_98,(bool *)local_res8);
  uVar20 = uVar13;
  if ((int)uVar12 < *(int *)&(param_1->SimulationType).field_0x18) {
    uVar20 = uVar15;
  }
  if ((uVar20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(undefined4 *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar22 * 4) = 2;
LAB_14ca36142:
  lVar16 = (longlong)(int)local_res8[0];
  uVar20 = uVar13;
  if ((int)local_res8[0] < (int)param_1->_padding_) {
    uVar20 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(uint *)(param_1->_padding_ + lVar16 * 4) = uVar12;
  lVar16 = (longlong)(int)local_res8[0];
  _local_e0 = UE::Math::TTransform<float>::Identity.Rotation;
  uVar12 = uVar13;
  if ((int)local_res8[0] < (int)param_1->_padding_) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  local_68 = UE::Math::TTransform<float>::Identity.Translation;
  local_58 = UE::Math::TTransform<float>::Identity.Scale3D;
  fVar23 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
  fVar24 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
  fVar25 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
  fVar26 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
  if (uVar12 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    fVar23 = (float)local_e0._0_4_;
    fVar24 = (float)local_e0._4_4_;
    fVar25 = fStack_d8;
    fVar26 = fStack_d4;
  }
  lVar22 = param_1->_padding_;
  lVar18 = (longlong)(int)local_res8[0];
  pfVar1 = (float *)(lVar22 + lVar16 * 0x30);
  *pfVar1 = fVar23;
  pfVar1[1] = fVar24;
  pfVar1[2] = fVar25;
  pfVar1[3] = fVar26;
  puVar3 = (ulong64 *)(lVar22 + 0x10 + lVar16 * 0x30);
  *puVar3 = local_68._0_8_;
  puVar3[1] = local_68._8_8_;
  puVar3 = (ulong64 *)(lVar22 + 0x20 + lVar16 * 0x30);
  *puVar3 = local_58._0_8_;
  puVar3[1] = local_58._8_8_;
  if ((int)local_res8[0] < *(int *)&(param_1->SimulationType).field_0x18) {
    uVar13 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  *(undefined4 *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar18 * 4) = 1;
  bVar6 = UpdateCollection(local_res18,local_res10,uVar7,param_1,local_res20);
  uVar12 = local_res8[0];
  if ((!bVar6) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5775120434743738915>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\GeometryCollectionToDynamicMesh.cpp"
                         ,0x223,"bSuccess"), uVar12 = 0xffffffff, bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return uVar12;
}

// GetCollectionTransforms @ 14ca38c60

TArrayView<UE::Math::TTransform<float>_const_,int> * __cdecl
UE::Geometry::FGeometryCollectionToDynamicMeshes::GetCollectionTransforms
          (TArrayView<UE::Math::TTransform<float>_const_,int> *__return_storage_ptr__,
          FManagedArrayCollection *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TTransform<float>_const_,int> *pTVar4;
  FCollectionTransformFacade local_f8;
  
  GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
            (&local_f8,param_1);
  bVar3 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid(&local_f8);
  if ((bVar3) &&
     (local_f8.TransformAttribute.ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0)) {
    iVar1 = *(int *)&(local_f8.TransformAttribute.ConstAttributeArray)->field_0x18;
    __return_storage_ptr__->DataPtr =
         *(TTransform<float> **)&(local_f8.TransformAttribute.ConstAttributeArray)->field_0x10;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArrayView<UE::Math::TTransform<float>_const_,int> *)(*pcVar2)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (TTransform<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// Init @ 14ca38d00

bool __thiscall
UE::Geometry::FGeometryCollectionToDynamicMeshes::Init
          (FGeometryCollectionToDynamicMeshes *this,FManagedArrayCollection *param_1,
          FToMeshOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TTransform<float> *local_148;
  undefined4 uStack_13c;
  TArrayView<int_const_,int> local_128;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_118;
  uint local_fc;
  FCollectionTransformFacade local_f8;
  
  iVar4 = 0;
  GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
            (&local_f8,param_1);
  bVar2 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid(&local_f8);
  if ((bVar2) &&
     (local_f8.TransformAttribute.ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0)) {
    local_148 = *(TTransform<float> **)
                 &(local_f8.TransformAttribute.ConstAttributeArray)->field_0x10;
    iVar4 = *(int *)&(local_f8.TransformAttribute.ConstAttributeArray)->field_0x18;
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  else {
    local_148 = (TTransform<float> *)0x0;
  }
  local_128._8_8_ = (ulonglong)local_fc << 0x20;
  local_118._12_4_ = uStack_13c;
  local_118.ArrayNum = iVar4;
  local_128.DataPtr = (int *)0x0;
  local_118.DataPtr = local_148;
  bVar2 = InitHelper(this,param_1,false,&local_118,true,&local_128,param_2);
  return bVar2;
}

// InitFromTransformSelection @ 14ca38e00

bool __thiscall
UE::Geometry::FGeometryCollectionToDynamicMeshes::InitFromTransformSelection
          (FGeometryCollectionToDynamicMeshes *this,FManagedArrayCollection *param_1,
          TArrayView<int_const_,int> *param_2,FToMeshOptions *param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  TTransform<float> *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TArrayView<int_const_,int> local_128;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_118;
  FCollectionTransformFacade local_108;
  
  piVar2 = param_2->DataPtr;
  uVar3._0_4_ = param_2->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&param_2->field_0xc;
  GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
            (&local_108,param_1);
  bVar4 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid(&local_108);
  if ((bVar4) &&
     (local_108.TransformAttribute.ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0)) {
    local_138 = *(TTransform<float> **)
                 &(local_108.TransformAttribute.ConstAttributeArray)->field_0x10;
    iStack_130 = *(int *)&(local_108.TransformAttribute.ConstAttributeArray)->field_0x18;
    if ((iStack_130 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  else {
    local_138 = (TTransform<float> *)0x0;
    iStack_130 = 0;
  }
  local_118._12_4_ = uStack_12c;
  local_118.ArrayNum = iStack_130;
  local_118.DataPtr = local_138;
  local_128.DataPtr = piVar2;
  local_128._8_8_ = uVar3;
  bVar4 = InitHelper(this,param_1,false,&local_118,false,&local_128,param_3);
  return bVar4;
}

// InitHelper @ 14ca38f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FGeometryCollectionToDynamicMeshes::InitHelper
          (FGeometryCollectionToDynamicMeshes *this,FManagedArrayCollection *param_1,bool param_2,
          TArrayView<UE::Math::TTransform<float>_const_,int> *param_3,bool param_4,
          TArrayView<int_const_,int> *param_5,FToMeshOptions *param_6)

{
  int *piVar1;
  TTransform<float> *pTVar2;
  double *pdVar3;
  __m128 *p_Var4;
  __m128 *p_Var5;
  undefined8 uVar6;
  EInvisibleFaceConversion EVar7;
  int iVar8;
  FMeshInfo *pFVar9;
  TTransform<float> *pTVar10;
  FScriptContainerElement *pFVar11;
  FDynamicMeshAttributeSet *pFVar12;
  uchar auVar13 [8];
  code *pcVar14;
  byte bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  TManagedArray<UE::Math::TVector<float>_> *pTVar27;
  TArrayView<UE::Math::TTransform<float>_const_,int> *pTVar28;
  FGeometryCollectionToDynamicMeshes *pFVar29;
  TManagedArray<int> *pTVar30;
  bool bVar31;
  undefined1 uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar36;
  TTransform<double> *pTVar37;
  FDynamicMesh3 *pFVar38;
  FDynamicMesh3 *pFVar39;
  undefined8 *puVar40;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar41;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> TVar42;
  FDynamicMesh3 *pFVar43;
  longlong lVar44;
  FDynamicMesh3 *pFVar45;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> TVar46;
  undefined1 *puVar47;
  uint uVar48;
  FName *pFVar49;
  FScriptContainerElement *pFVar50;
  TDynamicMeshOverlay<float,4> *pTVar51;
  uint uVar52;
  FDynamicMesh3 *pFVar53;
  uint uVar54;
  TManagedArray<FLinearColor> *pTVar55;
  ulonglong uVar56;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> TVar57;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar58;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_const_*> TVar59;
  undefined1 *puVar60;
  double dVar61;
  double dVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auStackY_b18 [32];
  char local_ac8;
  undefined2 uStack_ac7;
  uint local_ac4;
  char local_ac0;
  FIndex3i_u_0 local_ab8;
  undefined1 *local_aa8;
  double local_aa0;
  TManagedArray<UE::Math::TIntVector3<int>_> *local_a98;
  TManagedArray<FLinearColor> *local_a90;
  uint local_a88;
  ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*> local_a80;
  TManagedArray<UE::Math::TVector<float>_> *local_a40;
  TDynamicMeshScalarTriangleAttribute<int> *local_a38;
  TDynamicMeshScalarTriangleAttribute<int> *local_a30;
  TManagedArray<UE::Math::TVector<float>_> *local_a28;
  TArray<int,TSizedDefaultAllocator<32>_> local_a20;
  int local_a10;
  int iStack_a0c;
  int local_a08;
  TArrayView<UE::Math::TTransform<float>_const_,int> *local_a00;
  float local_9f8;
  undefined4 local_9f4;
  FToMeshOptions *local_9f0;
  FScriptContainerElement *local_9e8;
  FName local_9e0;
  double local_9d8;
  double dStack_9d0;
  undefined8 local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  float local_988;
  undefined4 local_984;
  undefined4 local_980;
  float local_978;
  undefined4 local_974;
  undefined4 local_970;
  undefined4 local_96c;
  float local_968;
  undefined4 local_964;
  undefined4 local_960;
  undefined4 local_95c;
  FDynamicMeshEditor local_958;
  FScriptContainerElement *local_950;
  FGeometryCollectionToDynamicMeshes *local_948;
  FName local_940;
  FName local_938;
  longlong local_930;
  FName local_928;
  FName local_920;
  FScriptContainerElement *local_918;
  int iStack_910;
  undefined4 uStack_90c;
  int *local_908;
  int iStack_900;
  undefined4 uStack_8fc;
  TVector<double>_u_0 local_8f8;
  undefined8 local_8e0;
  float local_8d8;
  undefined8 local_8d4;
  float local_8cc;
  TVector2<float>_u_0 local_8c8;
  undefined2 local_8c0;
  undefined1 local_8be;
  FName local_8b8;
  FName local_8b0;
  TVector<double>_u_0 local_8a8;
  undefined8 local_890;
  float local_888;
  undefined8 local_884;
  float local_87c;
  TVector2<float>_u_0 local_878;
  undefined2 local_870;
  undefined1 local_86e;
  FMergeCoincidentMeshEdges local_868;
  TArrayView<int_const_,int> local_808;
  TArrayView<UE::Math::TTransform<float>_const_,int> local_7f8;
  FScriptContainerElement local_7e8 [16];
  FScriptContainerElement *local_7d8;
  undefined8 uStack_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  double local_778;
  double dStack_770;
  double local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  double local_710;
  double dStack_708;
  double local_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  TManagedArrayAccessor<int> local_6c8;
  FCollectionMeshFacade local_688;
  ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*> local_2b8;
  int local_278;
  int local_274 [3];
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  piVar1 = &(this->Meshes).ArrayMax;
  pFVar9 = (FMeshInfo *)(this->Meshes).AllocatorInstance.Data;
  iVar34 = (this->Meshes).ArrayNum;
  local_9f0 = param_6;
  local_ac0 = param_2;
  local_a00 = param_3;
  local_948 = this;
  if ((this->Meshes).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>(pFVar9,iVar34);
    (this->Meshes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>(pFVar9,iVar34);
    (this->Meshes).ArrayNum = 0;
  }
  pFVar53 = (FDynamicMesh3 *)0x0;
  GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade(&local_688,param_1);
  bVar31 = GeometryCollection::Facades::FCollectionMeshFacade::IsValid(&local_688);
  if (bVar31) {
    local_8b8 = FTransformCollection::ParentAttribute;
    local_8b0 = FTransformCollection::TransformGroup;
    pTVar36 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_1->Map,(TTuple<FName,FName> *)&local_8b8);
    pFVar39 = (FDynamicMesh3 *)&pTVar36->field_0x10;
    if (pTVar36 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar39 = pFVar53;
    }
    if ((pFVar39 != (FDynamicMesh3 *)0x0) && ((char)pFVar39->_padding_ == '\x05')) {
      TVar57.Pad = *(uchar (*) [8])&(pFVar39->VertexRefCounts).RefCounts;
      local_a80.InlineData[2].Pad = TVar57.Pad;
      if (TVar57.Pad != (uchar  [8])0x0) {
        local_9e0.ComparisonIndex.Value = 0;
        local_9e0.Number = 0;
        TManagedArrayAccessor<int>::TManagedArrayAccessor<int>
                  (&local_6c8,param_1,&FGeometryCollection::SimulationTypeAttribute,
                   &FTransformCollection::TransformGroup,&local_9e0);
        if (param_3->ArrayNum != 0) {
          uVar52 = 0;
          local_278 = 0;
          pFVar49 = GeometryCollection::UV::UVLayerNames;
          local_274[0] = 8;
          do {
            local_928 = *pFVar49;
            local_920 = GeometryCollection::UV::VerticesGroupName;
            pTVar36 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                              *)&param_1->Map,(TTuple<FName,FName> *)&local_928);
            pFVar39 = (FDynamicMesh3 *)&pTVar36->field_0x10;
            if (pTVar36 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
              pFVar39 = pFVar53;
            }
            if ((pFVar39 == (FDynamicMesh3 *)0x0) || ((char)pFVar39->_padding_ != '\x03')) {
              local_a80.InlineData[0].Pad[0] = '\0';
              local_a80.InlineData[0].Pad[1] = '\0';
              local_a80.InlineData[0].Pad[2] = '\0';
              local_a80.InlineData[0].Pad[3] = '\0';
              local_a80.InlineData[0].Pad[4] = '\0';
              local_a80.InlineData[0].Pad[5] = '\0';
              local_a80.InlineData[0].Pad[6] = '\0';
              local_a80.InlineData[0].Pad[7] = '\0';
              break;
            }
            local_a80.InlineData[0].Pad =
                 (uchar  [8])
                 FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector2<float>_>
                           ((FValueType *)pFVar39);
            if (local_a80.InlineData[0].Pad == (uchar  [8])0x0) break;
            if (((&local_2b8 <= &local_a80) && (&local_a80 < local_2b8.InlineData + local_274[0]))
               && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar31)) {
              pcVar14 = (code *)swi(3);
              uVar32 = (*pcVar14)();
              return (bool)uVar32;
            }
            if (local_278 == local_274[0]) {
              local_278 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_const_*>_>
                                    (0x808,&local_2b8,local_274);
            }
            pFVar49 = pFVar49 + 1;
            lVar44 = (longlong)local_278;
            local_278 = local_278 + 1;
            *&local_2b8.InlineData[lVar44].Pad = local_a80.InlineData[0].Pad;
          } while ((longlong)pFVar49 < 0x155073a40);
          local_7d8 = (FScriptContainerElement *)param_5->DataPtr;
          uStack_7d0 = *(undefined8 *)&param_5->ArrayNum;
          local_a20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a20.ArrayNum = 0;
          local_a20.ArrayMax = 0;
          local_9e8 = local_7d8;
          if (param_4) {
            iVar34 = param_3->ArrayNum;
            TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_a20,iVar34,Default);
            pFVar39 = pFVar53;
            pFVar38 = pFVar53;
            if (0 < iVar34) {
              do {
                uVar33 = (uint)pFVar38;
                uVar54 = uVar52;
                if ((int)uVar33 < local_a20.ArrayNum) {
                  uVar54 = ~uVar33 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                *(uint *)(local_a20.AllocatorInstance.Data + (longlong)pFVar39) = uVar33;
                pFVar39 = (FDynamicMesh3 *)((longlong)&pFVar39->_padding_ + 4);
                pFVar38 = (FDynamicMesh3 *)(ulonglong)(uVar33 + 1);
              } while ((int)(uVar33 + 1) < param_3->ArrayNum);
            }
            iVar34 = local_a20.ArrayNum;
            local_918 = local_a20.AllocatorInstance.Data;
            if ((local_a20.ArrayNum < 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar31)) {
              pcVar14 = (code *)swi(3);
              uVar32 = (*pcVar14)();
              return (bool)uVar32;
            }
            iStack_910 = iVar34;
            uStack_7d0 = CONCAT44(uStack_90c,iVar34);
            local_9e8 = local_918;
          }
          local_950 = local_9e8 + (longlong)(int)uStack_7d0 * 4;
          local_7d8 = local_9e8;
          if (local_9e8 != local_950) {
            uVar63 = (undefined4)__real_3cb0000000000000;
            uVar64 = (undefined4)((ulonglong)__real_3cb0000000000000 >> 0x20);
            uVar65 = (undefined4)__real_4000000000000000;
            uVar66 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
            do {
              uVar54 = *(uint *)local_9e8;
              lVar44 = (longlong)(int)uVar54;
              if ((local_688.TransformToGeometryIndexAttribute.ConstAttributeArray ==
                   (TManagedArray<int> *)0x0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                      ,0x60,L""), bVar31)) {
                pcVar14 = (code *)swi(3);
                uVar32 = (*pcVar14)();
                return (bool)uVar32;
              }
              pTVar30 = local_688.TransformToGeometryIndexAttribute.ConstAttributeArray;
              uVar48 = ~uVar54 >> 0x1f;
              uVar33 = uVar52;
              if ((int)uVar54 <
                  *(int *)&(local_688.TransformToGeometryIndexAttribute.ConstAttributeArray)->
                           field_0x18) {
                uVar33 = uVar48;
              }
              if ((uVar33 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar14 = (code *)swi(3);
                uVar32 = (*pcVar14)();
                return (bool)uVar32;
              }
              local_ac4 = *(uint *)(*(longlong *)&pTVar30->field_0x10 + lVar44 * 4);
              if (local_ac4 != 0xffffffff) {
                if (local_6c8.ConstAttributeArray != (TManagedArray<int> *)0x0) {
                  if ((local_6c8.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                          ,0x60,L""), bVar31)) {
                    pcVar14 = (code *)swi(3);
                    uVar32 = (*pcVar14)();
                    return (bool)uVar32;
                  }
                  pTVar30 = local_6c8.ConstAttributeArray;
                  uVar33 = uVar52;
                  if ((int)uVar54 < *(int *)&(local_6c8.ConstAttributeArray)->field_0x18) {
                    uVar33 = uVar48;
                  }
                  if ((uVar33 == 0) &&
                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar31)) {
                    pcVar14 = (code *)swi(3);
                    uVar32 = (*pcVar14)();
                    return (bool)uVar32;
                  }
                  if (*(int *)(*(longlong *)&pTVar30->field_0x10 + lVar44 * 4) != 1)
                  goto LAB_14ca3af63;
                }
                pTVar28 = local_a00;
                uVar33 = local_ac4;
                if (local_ac0 == '\0') {
                  local_908 = *(int **)((longlong)TVar57.Pad + 0x10);
                  iVar34 = *(int *)((longlong)TVar57.Pad + 0x18);
                  if ((iVar34 < 0) &&
                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar31)) {
                    pcVar14 = (code *)swi(3);
                    uVar32 = (*pcVar14)();
                    return (bool)uVar32;
                  }
                  local_808._12_4_ = uStack_8fc;
                  local_808.ArrayNum = iVar34;
                  local_808.DataPtr = local_908;
                  local_7f8.DataPtr = local_a00->DataPtr;
                  local_7f8.ArrayNum = local_a00->ArrayNum;
                  local_7f8._12_4_ = *(undefined4 *)&local_a00->field_0xc;
                  iStack_900 = iVar34;
                  pTVar37 = GeometryCollectionAlgo::GlobalMatrix
                                      (&local_148,&local_7f8,&local_808,uVar54);
                  local_208.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_208.Rotation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[1];
                  local_208.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_208.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_208.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_208.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_208.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_208.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_208.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_208.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_208.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  local_208.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_208.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_208.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply(&local_208,pTVar37,&param_6->Transform);
                  local_6d0 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
                  uStack_6cc = local_208.Translation.ZW.m128d_f64[0]._4_4_;
                  uStack_990 = SUB84(local_208.Scale3D.ZW.m128d_f64[0],0);
                  uStack_98c = (undefined4)((ulonglong)local_208.Scale3D.ZW.m128d_f64[0] >> 0x20);
                  local_6e8 = local_208.Scale3D.ZW.m128d_f64[0];
                  local_6f8 = local_208.Scale3D.XY.m128d_f64[0];
                  dStack_6f0 = local_208.Scale3D.XY.m128d_f64[1];
                  local_768 = local_208.Rotation.ZW.m128d_f64[0];
                  uStack_760 = local_208.Rotation.ZW.m128d_f64[1]._0_4_;
                  uStack_75c = local_208.Rotation.ZW.m128d_f64[1]._4_4_;
                  local_9c8 = local_208.Rotation.ZW.m128d_f64[0];
                  uStack_9c0 = local_208.Rotation.ZW.m128d_f64[1]._0_4_;
                  uStack_9bc = local_208.Rotation.ZW.m128d_f64[1]._4_4_;
                  local_740._0_4_ = local_208.Scale3D.XY.m128d_f64[0]._0_4_;
                  local_740._4_4_ = local_208.Scale3D.XY.m128d_f64[0]._4_4_;
                  local_778 = local_208.Rotation.XY.m128d_f64[0];
                  dStack_770 = local_208.Rotation.XY.m128d_f64[1];
                  local_9d8 = local_208.Rotation.XY.m128d_f64[0];
                  dStack_9d0 = local_208.Rotation.XY.m128d_f64[1];
                  uStack_738._0_4_ = local_208.Scale3D.XY.m128d_f64[1]._0_4_;
                  uStack_738._4_4_ = local_208.Scale3D.XY.m128d_f64[1]._4_4_;
                  uStack_748 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
                  uStack_744 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
                  local_6e0 = local_208.Translation.XY.m128d_f64[0]._0_4_;
                  uStack_6dc = local_208.Translation.XY.m128d_f64[0]._4_4_;
                  uStack_6d8 = local_208.Translation.XY.m128d_f64[1]._0_4_;
                  uStack_6d4 = local_208.Translation.XY.m128d_f64[1]._4_4_;
                  local_758 = local_208.Translation.XY.m128d_f64[0]._0_4_;
                  uStack_754 = local_208.Translation.XY.m128d_f64[0]._4_4_;
                  uStack_750 = local_208.Translation.XY.m128d_f64[1]._0_4_;
                  uStack_74c = local_208.Translation.XY.m128d_f64[1]._4_4_;
                  local_998 = (undefined4)uStack_738;
                  uStack_994 = uStack_738._4_4_;
                  local_9b8 = local_208.Translation.XY.m128d_f64[0]._0_4_;
                  uStack_9b4 = local_208.Translation.XY.m128d_f64[0]._4_4_;
                  uStack_9b0 = local_208.Translation.XY.m128d_f64[1]._0_4_;
                  uStack_9ac = local_208.Translation.XY.m128d_f64[1]._4_4_;
                  local_9a8 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
                  uStack_9a4 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
                  uStack_9a0 = (undefined4)local_740;
                  uStack_99c = local_740._4_4_;
                  local_740 = local_208.Scale3D.XY.m128d_f64[0];
                  uStack_738 = local_208.Scale3D.XY.m128d_f64[1];
                  uStack_730 = uStack_990;
                  uStack_72c = uStack_98c;
                }
                else {
                  uVar35 = uVar52;
                  if ((int)uVar54 < local_a00->ArrayNum) {
                    uVar35 = uVar48;
                  }
                  if ((uVar35 == 0) &&
                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar31)) {
                    pcVar14 = (code *)swi(3);
                    uVar32 = (*pcVar14)();
                    return (bool)uVar32;
                  }
                  pTVar10 = pTVar28->DataPtr;
                  pTVar2 = pTVar10 + lVar44;
                  p_Var4 = &pTVar10[lVar44].Scale3D;
                  p_Var5 = &pTVar10[lVar44].Translation;
                  local_1a8.Rotation.XY.m128d_f64[0] = (double)(pTVar2->Rotation).m128_f32[0];
                  local_1a8.Rotation.XY.m128d_f64[1] = (double)(pTVar2->Rotation).m128_f32[1];
                  local_1a8.Rotation.ZW.m128d_f64[0] = (double)(pTVar2->Rotation).m128_f32[2];
                  local_1a8.Rotation.ZW.m128d_f64[1] = (double)(pTVar2->Rotation).m128_f32[3];
                  local_1a8.Translation.ZW.m128d_f64[0] = (double)p_Var5->m128_f32[2];
                  local_1a8.Translation.ZW.m128d_f64[1] = (double)p_Var5->m128_f32[3];
                  local_1a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)p_Var5->m128_f32[1],0)
                  ;
                  local_1a8.Translation.XY.m128d_f64[0] = (double)p_Var5->m128_f32[0];
                  local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)p_Var5->m128_f32[1] >> 0x20);
                  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)p_Var4->m128_f32[2];
                  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)p_Var4->m128_f32[3];
                  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)p_Var4->m128_f32[1],0);
                  local_1a8.Scale3D.XY.m128d_f64[0] = (double)p_Var4->m128_f32[0];
                  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)p_Var4->m128_f32[1] >> 0x20);
                  local_268.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_268.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_268.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_268.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_268.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_268.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_268.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_268.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_268.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_268.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_268.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_268.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  local_268.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_268.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_268.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply(&local_268,&local_1a8,&param_6->Transform);
                  local_718 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
                  uStack_714 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
                  uStack_990 = SUB84(local_268.Scale3D.ZW.m128d_f64[0],0);
                  uStack_98c = (undefined4)((ulonglong)local_268.Scale3D.ZW.m128d_f64[0] >> 0x20);
                  local_700 = local_268.Scale3D.ZW.m128d_f64[0];
                  local_710 = local_268.Scale3D.XY.m128d_f64[0];
                  dStack_708 = local_268.Scale3D.XY.m128d_f64[1];
                  local_7b8 = local_268.Rotation.ZW.m128d_f64[0];
                  uStack_7b0 = local_268.Rotation.ZW.m128d_f64[1]._0_4_;
                  uStack_7ac = local_268.Rotation.ZW.m128d_f64[1]._4_4_;
                  local_9c8 = local_268.Rotation.ZW.m128d_f64[0];
                  uStack_9c0 = local_268.Rotation.ZW.m128d_f64[1]._0_4_;
                  uStack_9bc = local_268.Rotation.ZW.m128d_f64[1]._4_4_;
                  local_790._0_4_ = local_268.Scale3D.XY.m128d_f64[0]._0_4_;
                  local_790._4_4_ = local_268.Scale3D.XY.m128d_f64[0]._4_4_;
                  local_7c8 = local_268.Rotation.XY.m128d_f64[0];
                  dStack_7c0 = local_268.Rotation.XY.m128d_f64[1];
                  local_9d8 = local_268.Rotation.XY.m128d_f64[0];
                  dStack_9d0 = local_268.Rotation.XY.m128d_f64[1];
                  uStack_788._0_4_ = local_268.Scale3D.XY.m128d_f64[1]._0_4_;
                  uStack_788._4_4_ = local_268.Scale3D.XY.m128d_f64[1]._4_4_;
                  uStack_798 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
                  uStack_794 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
                  local_728 = local_268.Translation.XY.m128d_f64[0]._0_4_;
                  uStack_724 = local_268.Translation.XY.m128d_f64[0]._4_4_;
                  uStack_720 = local_268.Translation.XY.m128d_f64[1]._0_4_;
                  uStack_71c = local_268.Translation.XY.m128d_f64[1]._4_4_;
                  local_7a8 = local_268.Translation.XY.m128d_f64[0]._0_4_;
                  uStack_7a4 = local_268.Translation.XY.m128d_f64[0]._4_4_;
                  uStack_7a0 = local_268.Translation.XY.m128d_f64[1]._0_4_;
                  uStack_79c = local_268.Translation.XY.m128d_f64[1]._4_4_;
                  local_998 = (undefined4)uStack_788;
                  uStack_994 = uStack_788._4_4_;
                  local_9b8 = local_268.Translation.XY.m128d_f64[0]._0_4_;
                  uStack_9b4 = local_268.Translation.XY.m128d_f64[0]._4_4_;
                  uStack_9b0 = local_268.Translation.XY.m128d_f64[1]._0_4_;
                  uStack_9ac = local_268.Translation.XY.m128d_f64[1]._4_4_;
                  local_9a8 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
                  uStack_9a4 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
                  uStack_9a0 = (undefined4)local_790;
                  uStack_99c = local_790._4_4_;
                  local_790 = local_268.Scale3D.XY.m128d_f64[0];
                  uStack_788 = local_268.Scale3D.XY.m128d_f64[1];
                  uStack_780 = uStack_990;
                  uStack_77c = uStack_98c;
                }
                pFVar29 = local_948;
                uVar48 = (local_948->Meshes).ArrayNum;
                if (uVar48 == (local_948->Meshes).ArrayMax) {
                  uVar48 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x1070,(ForAnyElementType *)local_948,
                                      &(local_948->Meshes).ArrayMax);
                }
                lVar44 = (longlong)(int)uVar48 * 0x70;
                (pFVar29->Meshes).ArrayNum = uVar48 + 1;
                pFVar11 = (pFVar29->Meshes).AllocatorInstance.Data;
                *(undefined8 *)(pFVar11 + lVar44) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 8) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x10) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x10 + 8) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x20) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x20 + 8) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x30) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x30 + 8) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x40) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x40 + 8) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x50) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x50 + 8) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x60) = 0;
                *(undefined8 *)(pFVar11 + lVar44 + 0x60 + 8) = 0;
                *(undefined4 *)(pFVar11 + lVar44) = 0xffffffff;
                *(double (*) [2])(pFVar11 + lVar44 + 0x10) =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                *(double (*) [2])(pFVar11 + lVar44 + 0x20) =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                *(double (*) [2])(pFVar11 + lVar44 + 0x30) =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                *(double (*) [2])(pFVar11 + lVar44 + 0x40) =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                *(double (*) [2])(pFVar11 + lVar44 + 0x50) =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                *(double (*) [2])(pFVar11 + lVar44 + 0x60) =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                uVar35 = uVar52;
                if ((int)uVar48 < (pFVar29->Meshes).ArrayNum) {
                  uVar35 = ~uVar48 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                pFVar50 = (pFVar29->Meshes).AllocatorInstance.Data;
                *(double *)(pFVar50 + lVar44 + 0x10) = local_9d8;
                *(double *)(pFVar50 + lVar44 + 0x10 + 8) = dStack_9d0;
                pFVar11 = pFVar50 + lVar44 + 0x20;
                *(undefined4 *)pFVar11 = (undefined4)local_9c8;
                *(undefined4 *)(pFVar11 + 4) = local_9c8._4_4_;
                *(undefined4 *)(pFVar11 + 8) = uStack_9c0;
                *(undefined4 *)(pFVar11 + 0xc) = uStack_9bc;
                pFVar11 = pFVar50 + lVar44 + 0x30;
                *(undefined4 *)pFVar11 = local_9b8;
                *(undefined4 *)(pFVar11 + 4) = uStack_9b4;
                *(undefined4 *)(pFVar11 + 8) = uStack_9b0;
                *(undefined4 *)(pFVar11 + 0xc) = uStack_9ac;
                *(ulonglong *)(pFVar50 + lVar44 + 0x40) = CONCAT44(uStack_9a4,local_9a8);
                *(undefined8 *)(pFVar50 + lVar44 + 0x40 + 8) = 0;
                pFVar11 = pFVar50 + lVar44 + 0x50;
                *(undefined4 *)pFVar11 = uStack_9a0;
                *(undefined4 *)(pFVar11 + 4) = uStack_99c;
                *(undefined4 *)(pFVar11 + 8) = local_998;
                *(undefined4 *)(pFVar11 + 0xc) = uStack_994;
                *(ulonglong *)(pFVar50 + lVar44 + 0x60) = CONCAT44(uStack_98c,uStack_990);
                *(undefined8 *)(pFVar50 + lVar44 + 0x60 + 8) = 0;
                *(uint *)(pFVar50 + lVar44) = uVar54;
                pFVar38 = ::operator_new(0x230);
                pFVar39 = pFVar53;
                if (pFVar38 != (FDynamicMesh3 *)0x0) {
                  pFVar39 = FDynamicMesh3::FDynamicMesh3(pFVar38);
                }
                pFVar50 = pFVar50 + lVar44 + 8;
                if (pFVar50 == local_7e8) {
                  if (pFVar39 != (FDynamicMesh3 *)0x0) {
                    puVar40 = (undefined8 *)pFVar39->_padding_;
                    goto LAB_14ca399b7;
                  }
                }
                else {
                  pFVar38 = *(FDynamicMesh3 **)pFVar50;
                  *(FDynamicMesh3 **)pFVar50 = pFVar39;
                  if (pFVar38 != (FDynamicMesh3 *)0x0) {
                    puVar40 = (undefined8 *)pFVar38->_padding_;
                    pFVar39 = pFVar38;
LAB_14ca399b7:
                    (*(code *)*puVar40)(pFVar39,1);
                  }
                }
                TVar57.Pad = *(uchar (*) [8])pFVar50;
                local_a80.InlineData[1].Pad = TVar57.Pad;
                FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)TVar57.Pad);
                pFVar39 = (FDynamicMesh3 *)
                          ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                            *)((longlong)TVar57.Pad + 0x208))->Ptr;
                pFVar38 = pFVar53;
                if (pFVar39 != (FDynamicMesh3 *)0x0) {
                  pFVar38 = pFVar39;
                }
                FDynamicMeshAttributeSet::EnableMaterialID((FDynamicMeshAttributeSet *)pFVar38);
                pFVar39 = (FDynamicMesh3 *)
                          ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                            *)((longlong)TVar57.Pad + 0x208))->Ptr;
                pFVar38 = pFVar53;
                if (pFVar39 != (FDynamicMesh3 *)0x0) {
                  pFVar38 = pFVar39;
                }
                FDynamicMeshAttributeSet::EnablePrimaryColors((FDynamicMeshAttributeSet *)pFVar38);
                pFVar39 = (FDynamicMesh3 *)
                          ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                            *)((longlong)TVar57.Pad + 0x208))->Ptr;
                pFVar38 = pFVar53;
                if (pFVar39 != (FDynamicMesh3 *)0x0) {
                  pFVar38 = pFVar39;
                }
                FDynamicMeshAttributeSet::EnableTangents((FDynamicMeshAttributeSet *)pFVar38);
                pFVar12 = ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                            *)((longlong)TVar57.Pad + 0x208))->Ptr;
                (**(code **)(pFVar12->_padding_ + 0xb0))(pFVar12,local_278);
                EVar7 = param_6->InvisibleFaces;
                pFVar12 = ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                            *)((longlong)TVar57.Pad + 0x208))->Ptr;
                local_a38 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
                local_a30 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
                (**(code **)(pFVar12->_padding_ + 0xd0))
                          (pFVar12,(uint)(EVar7 != TagWithPolygroup) +
                                   (uint)param_6->bInternalFaceTagsAsPolygroups);
                uVar54 = uVar52;
                if (param_6->bInternalFaceTagsAsPolygroups != false) {
                  pFVar39 = (FDynamicMesh3 *)
                            ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                              *)((longlong)TVar57.Pad + 0x208))->Ptr;
                  pFVar38 = pFVar53;
                  if (pFVar39 != (FDynamicMesh3 *)0x0) {
                    pFVar38 = pFVar39;
                  }
                  pTVar41 = FDynamicMeshAttributeSet::GetPolygroupLayer
                                      ((FDynamicMeshAttributeSet *)pFVar38,0);
                  local_a38 = pTVar41;
                  ::FName::FName(&local_940,"GeometryCollectionInternalFaces");
                  uVar54 = 1;
                  *(uint *)&pTVar41->field_0x8 = local_940.ComparisonIndex.Value;
                  *(uint *)&pTVar41->field_0xc = local_940.Number;
                }
                if (EVar7 != TagWithPolygroup) {
                  pFVar39 = (FDynamicMesh3 *)
                            ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                              *)((longlong)TVar57.Pad + 0x208))->Ptr;
                  pFVar38 = pFVar53;
                  if (pFVar39 != (FDynamicMesh3 *)0x0) {
                    pFVar38 = pFVar39;
                  }
                  pTVar41 = FDynamicMeshAttributeSet::GetPolygroupLayer
                                      ((FDynamicMeshAttributeSet *)pFVar38,uVar54);
                  local_a30 = pTVar41;
                  ::FName::FName(&local_938,"GeometryCollectionVisibleFaces");
                  *(uint *)&pTVar41->field_0x8 = local_938.ComparisonIndex.Value;
                  *(uint *)&pTVar41->field_0xc = local_938.Number;
                }
                if ((local_688.VertexStartAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0
                    ) && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x60,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                pTVar30 = local_688.VertexStartAttribute.ConstAttributeArray;
                uVar54 = uVar52;
                if ((int)uVar33 <
                    *(int *)&(local_688.VertexStartAttribute.ConstAttributeArray)->field_0x18) {
                  uVar54 = ~uVar33 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                local_a88 = *(uint *)(*(longlong *)&pTVar30->field_0x10 + (longlong)(int)uVar33 * 4)
                ;
                if ((local_688.VertexCountAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0
                    ) && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                              ,0x60,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                pTVar30 = local_688.VertexCountAttribute.ConstAttributeArray;
                uVar54 = uVar52;
                if ((int)uVar33 <
                    *(int *)&(local_688.VertexCountAttribute.ConstAttributeArray)->field_0x18) {
                  uVar54 = ~uVar33 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                iVar34 = *(int *)(*(longlong *)&pTVar30->field_0x10 + (longlong)(int)uVar33 * 4);
                if (((uchar  [8])local_688.VertexAttribute.ConstAttributeArray == (uchar  [8])0x0)
                   && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                           ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                TVar46.Pad = (uchar  [8])local_688.VertexAttribute.ConstAttributeArray;
                local_a80.InlineData[7].Pad =
                     (uchar  [8])local_688.VertexAttribute.ConstAttributeArray;
                if ((local_688.ColorAttribute.ConstAttributeArray ==
                     (TManagedArray<FLinearColor> *)0x0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                local_a90 = local_688.ColorAttribute.ConstAttributeArray;
                if ((local_688.NormalAttribute.ConstAttributeArray ==
                     (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                local_a98 = (TManagedArray<UE::Math::TIntVector3<int>_> *)
                            &(local_688.NormalAttribute.ConstAttributeArray)->field_0x10;
                if ((local_688.NormalAttribute.ConstAttributeArray ==
                     (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                local_a40 = local_688.NormalAttribute.ConstAttributeArray;
                if ((local_688.NormalAttribute.ConstAttributeArray ==
                     (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                local_a28 = local_688.NormalAttribute.ConstAttributeArray;
                TVar42.Pad = (uchar  [8])(longlong)(int)local_a88;
                local_a80.InlineData[6].Pad = (uchar  [8])(longlong)(int)(local_a88 + iVar34);
                local_a80.InlineData[3].Pad = TVar42.Pad;
                if ((longlong)TVar42.Pad < (longlong)local_a80.InlineData[6].Pad) {
                  dVar26 = (double)CONCAT44(uStack_9bc,uStack_9c0);
                  dVar16 = local_9c8 * (double)CONCAT44(uVar66,uVar65);
                  local_aa8 = (undefined1 *)((longlong)TVar42.Pad << 4);
                  dVar20 = dStack_9d0 * (double)CONCAT44(uVar66,uVar65);
                  TVar59.Pad = (uchar  [8])((longlong)TVar42.Pad * 0xc);
                  dVar21 = local_9d8 * (double)CONCAT44(uVar66,uVar65);
                  dVar24 = dVar16 * local_9d8;
                  dVar22 = dVar20 * local_9d8;
                  dVar23 = dVar16 * dStack_9d0;
                  dVar19 = dVar21 * dVar26;
                  dVar21 = dVar21 * local_9d8;
                  dVar25 = __real_3ff0000000000000 - (dVar16 * local_9c8 + dVar20 * dStack_9d0);
                  dVar61 = __real_3ff0000000000000 - (dVar16 * local_9c8 + dVar21);
                  dVar21 = __real_3ff0000000000000 - (dVar20 * dStack_9d0 + dVar21);
                  uVar54 = local_a88;
                  local_aa0 = dVar61;
                  do {
                    uVar48 = ~uVar54 >> 0x1f;
                    uVar33 = uVar52;
                    if ((int)uVar54 < *(int *)((longlong)TVar46.Pad + 0x18)) {
                      uVar33 = uVar48;
                    }
                    local_a80.InlineData[3].Pad = TVar42.Pad;
                    local_a80.InlineData[4].Pad = TVar59.Pad;
                    if ((uVar33 == 0) &&
                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar31)) {
                      pcVar14 = (code *)swi(3);
                      uVar32 = (*pcVar14)();
                      return (bool)uVar32;
                    }
                    lVar44 = *(longlong *)((longlong)TVar46.Pad + 0x10);
                    local_8c0 = 0;
                    local_8be = 0;
                    local_8d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    local_8cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    local_8c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                    dVar18 = (double)*(float *)((longlong)TVar59.Pad + 4 + lVar44) *
                             (double)CONCAT44(uStack_994,local_998);
                    dVar17 = (double)*(float *)((longlong)TVar59.Pad + lVar44) *
                             (double)CONCAT44(uStack_99c,uStack_9a0);
                    dVar62 = (double)*(float *)((longlong)TVar59.Pad + 8 + lVar44) *
                             (double)CONCAT44(uStack_98c,uStack_990);
                    local_8f8._s_0.X =
                         dVar18 * (dVar22 - dVar16 * dVar26) + dVar17 * dVar25 +
                         dVar62 * (dVar24 + dVar20 * dVar26) +
                         (double)CONCAT44(uStack_9b4,local_9b8);
                    local_8e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    local_8d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    local_8f8._s_0.Y =
                         dVar18 * dVar61 + dVar17 * (dVar22 + dVar16 * dVar26) +
                         dVar62 * (dVar23 - dVar19) + (double)CONCAT44(uStack_9ac,uStack_9b0);
                    local_8f8._s_0.Z =
                         dVar18 * (dVar23 + dVar19) + dVar17 * (dVar24 - dVar20 * dVar26) +
                         dVar62 * dVar21 + (double)CONCAT44(uStack_9a4,local_9a8);
                    FDynamicMesh3::AppendVertex
                              ((FDynamicMesh3 *)TVar57.Pad,(FVertexInfo *)&local_8f8._s_0);
                    pFVar39 = (FDynamicMesh3 *)
                              ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                *)((longlong)TVar57.Pad + 0x208))->Ptr;
                    pFVar38 = pFVar53;
                    if (pFVar39 != (FDynamicMesh3 *)0x0) {
                      pFVar38 = pFVar39;
                    }
                    pTVar51 = (TDynamicMeshOverlay<float,4> *)
                              (pFVar38->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
                    uVar33 = uVar52;
                    if ((int)uVar54 < *(int *)&local_a90->field_0x18) {
                      uVar33 = uVar48;
                    }
                    if ((uVar33 == 0) &&
                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar31)) {
                      pcVar14 = (code *)swi(3);
                      uVar32 = (*pcVar14)();
                      return (bool)uVar32;
                    }
                    lVar44 = *(longlong *)&local_a90->field_0x10;
                    local_978 = *(float *)(local_aa8 + lVar44);
                    local_974 = *(undefined4 *)(local_aa8 + lVar44 + 4);
                    local_970 = *(undefined4 *)(local_aa8 + lVar44 + 8);
                    local_96c = *(undefined4 *)(local_aa8 + lVar44 + 0xc);
                    TDynamicMeshOverlay<float,4>::AppendElement(pTVar51,&local_978);
                    pFVar39 = (FDynamicMesh3 *)
                              ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                *)((longlong)TVar57.Pad + 0x208))->Ptr;
                    pFVar38 = pFVar53;
                    if (pFVar39 != (FDynamicMesh3 *)0x0) {
                      pFVar38 = pFVar39;
                    }
                    pFVar39 = pFVar53;
                    if (0 < (int)(pFVar38->VertexRefCounts).FreeIndices.CurBlock) {
                      pFVar39 = (FDynamicMesh3 *)
                                **(undefined8 **)
                                  &(pFVar38->VertexRefCounts).RefCounts.Blocks.ArrayNum;
                    }
                    uVar33 = uVar52;
                    if ((int)uVar54 < (int)*(longlong *)((longlong)local_a98 + 8)) {
                      uVar33 = uVar48;
                    }
                    if ((uVar33 == 0) &&
                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar31)) {
                      pcVar14 = (code *)swi(3);
                      uVar32 = (*pcVar14)();
                      return (bool)uVar32;
                    }
                    TDynamicMeshOverlay<float,3>::AppendElement
                              ((TDynamicMeshOverlay<float,3> *)pFVar39,
                               (float *)(*(longlong *)local_a98 + (longlong)TVar59.Pad));
                    pFVar39 = (FDynamicMesh3 *)
                              ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                *)((longlong)TVar57.Pad + 0x208))->Ptr;
                    pFVar38 = pFVar53;
                    if (pFVar39 != (FDynamicMesh3 *)0x0) {
                      pFVar38 = pFVar39;
                    }
                    pFVar39 = pFVar53;
                    if (1 < (int)(pFVar38->VertexRefCounts).FreeIndices.CurBlock) {
                      pFVar39 = *(FDynamicMesh3 **)
                                 (*(longlong *)&(pFVar38->VertexRefCounts).RefCounts.Blocks.ArrayNum
                                 + 8);
                    }
                    uVar33 = uVar52;
                    if ((int)uVar54 < *(int *)&local_a40->field_0x18) {
                      uVar33 = uVar48;
                    }
                    if ((uVar33 == 0) &&
                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar31)) {
                      pcVar14 = (code *)swi(3);
                      uVar32 = (*pcVar14)();
                      return (bool)uVar32;
                    }
                    TDynamicMeshOverlay<float,3>::AppendElement
                              ((TDynamicMeshOverlay<float,3> *)pFVar39,
                               (float *)(*(longlong *)&local_a40->field_0x10 + (longlong)TVar59.Pad)
                              );
                    pFVar39 = (FDynamicMesh3 *)
                              ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                *)((longlong)TVar57.Pad + 0x208))->Ptr;
                    pFVar38 = pFVar53;
                    if (pFVar39 != (FDynamicMesh3 *)0x0) {
                      pFVar38 = pFVar39;
                    }
                    pFVar39 = pFVar53;
                    if (2 < (int)(pFVar38->VertexRefCounts).FreeIndices.CurBlock) {
                      pFVar39 = *(FDynamicMesh3 **)
                                 (*(longlong *)&(pFVar38->VertexRefCounts).RefCounts.Blocks.ArrayNum
                                 + 0x10);
                    }
                    uVar33 = uVar52;
                    if ((int)uVar54 < *(int *)&local_a28->field_0x18) {
                      uVar33 = uVar48;
                    }
                    if ((uVar33 == 0) &&
                       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar31)) {
                      pcVar14 = (code *)swi(3);
                      uVar32 = (*pcVar14)();
                      return (bool)uVar32;
                    }
                    TDynamicMeshOverlay<float,3>::AppendElement
                              ((TDynamicMeshOverlay<float,3> *)pFVar39,
                               (float *)(*(longlong *)&local_a28->field_0x10 + (longlong)TVar59.Pad)
                              );
                    if (0 < local_278) {
                      local_aa0 = (double)CONCAT44(local_aa0._4_4_,~uVar54 >> 0x1f);
                      pFVar39 = pFVar53;
                      pFVar38 = pFVar53;
                      do {
                        pFVar45 = (FDynamicMesh3 *)
                                  ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                    *)((longlong)local_a80.InlineData[1].Pad + 0x208))->Ptr;
                        pFVar43 = pFVar53;
                        if (pFVar45 != (FDynamicMesh3 *)0x0) {
                          pFVar43 = pFVar45;
                        }
                        uVar33 = (uint)pFVar39;
                        pFVar39 = pFVar53;
                        if (((int)uVar33 <
                             *(int *)&(pFVar43->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data) && (-1 < (int)uVar33)) {
                          if (((int)uVar33 < 0) &&
                             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar31)) {
                            pcVar14 = (code *)swi(3);
                            uVar32 = (*pcVar14)();
                            return (bool)uVar32;
                          }
                          pFVar39 = *(FDynamicMesh3 **)
                                     ((longlong)&pFVar38->_padding_ +
                                     *(longlong *)&(pFVar43->VertexRefCounts).RefCounts);
                        }
                        uVar48 = uVar52;
                        if ((int)uVar33 < local_278) {
                          uVar48 = ~uVar33 >> 0x1f;
                        }
                        if ((uVar48 == 0) &&
                           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar31)) {
                          pcVar14 = (code *)swi(3);
                          uVar32 = (*pcVar14)();
                          return (bool)uVar32;
                        }
                        lVar44 = *(longlong *)
                                  ((longlong)&pFVar38->_padding_ +
                                  (longlong)local_2b8.InlineData[0].Pad);
                        uVar48 = uVar52;
                        if ((int)uVar54 < *(int *)(lVar44 + 0x18)) {
                          uVar48 = local_aa0._0_4_;
                        }
                        if ((uVar48 == 0) &&
                           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar31)) {
                          pcVar14 = (code *)swi(3);
                          uVar32 = (*pcVar14)();
                          return (bool)uVar32;
                        }
                        TDynamicMeshOverlay<float,2>::AppendElement
                                  ((TDynamicMeshOverlay<float,2> *)pFVar39,
                                   (float *)(*(longlong *)(lVar44 + 0x10) +
                                            (longlong)(int)uVar54 * 8));
                        pFVar39 = (FDynamicMesh3 *)(ulonglong)(uVar33 + 1);
                        pFVar38 = (FDynamicMesh3 *)&pFVar38->Vertices;
                        TVar57.Pad = local_a80.InlineData[1].Pad;
                        TVar42.Pad = local_a80.InlineData[3].Pad;
                        TVar59.Pad = local_a80.InlineData[4].Pad;
                      } while ((int)(uVar33 + 1) < local_278);
                    }
                    local_aa8 = local_aa8 + 0x10;
                    TVar42.Pad = TVar42.Pad + 1;
                    TVar59.Pad = TVar59.Pad + 0xc;
                    uVar54 = uVar54 + 1;
                    TVar46.Pad = local_a80.InlineData[7].Pad;
                  } while ((longlong)TVar42.Pad < (longlong)local_a80.InlineData[6].Pad);
                  uVar63 = (undefined4)__real_3cb0000000000000;
                  uVar64 = (undefined4)((ulonglong)__real_3cb0000000000000 >> 0x20);
                  uVar65 = (undefined4)__real_4000000000000000;
                  uVar66 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
                  uVar33 = local_ac4;
                  local_a80.InlineData[3].Pad = TVar42.Pad;
                  local_a80.InlineData[4].Pad = TVar59.Pad;
                }
                if ((local_688.FaceStartAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0)
                   && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                           ,0x60,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                pTVar30 = local_688.FaceStartAttribute.ConstAttributeArray;
                uVar54 = uVar52;
                if ((int)uVar33 <
                    *(int *)&(local_688.FaceStartAttribute.ConstAttributeArray)->field_0x18) {
                  uVar54 = ~uVar33 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                iVar34 = *(int *)(*(longlong *)&pTVar30->field_0x10 + (longlong)(int)uVar33 * 4);
                pTVar55 = (TManagedArray<FLinearColor> *)(longlong)iVar34;
                local_aa0 = (double)CONCAT44(local_aa0._4_4_,iVar34);
                if ((local_688.FaceCountAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0)
                   && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                           ,0x60,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                pTVar30 = local_688.FaceCountAttribute.ConstAttributeArray;
                uVar54 = uVar52;
                if ((int)uVar33 <
                    *(int *)&(local_688.FaceCountAttribute.ConstAttributeArray)->field_0x18) {
                  uVar54 = ~uVar33 >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                iVar8 = *(int *)(*(longlong *)&pTVar30->field_0x10 + (longlong)(int)uVar33 * 4);
                if ((local_688.IndicesAttribute.ConstAttributeArray ==
                     (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                pTVar58 = local_688.IndicesAttribute.ConstAttributeArray;
                local_a98 = local_688.IndicesAttribute.ConstAttributeArray;
                if ((local_688.VisibleAttribute.ConstAttributeArray == (TManagedArray<bool> *)0x0)
                   && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                           ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                puVar60 = &(local_688.VisibleAttribute.ConstAttributeArray)->field_0x10;
                local_aa8 = puVar60;
                if ((local_688.InternalAttribute.ConstAttributeArray == (TManagedArray<bool> *)0x0)
                   && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                           ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                local_a80.InlineData[3].Pad =
                     (uchar  [8])&(local_688.InternalAttribute.ConstAttributeArray)->field_0x10;
                if ((local_688.MaterialIDAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0)
                   && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                           ,0x67,L""), bVar31)) {
                  pcVar14 = (code *)swi(3);
                  uVar32 = (*pcVar14)();
                  return (bool)uVar32;
                }
                local_a28 = (TManagedArray<UE::Math::TVector<float>_> *)
                            local_688.MaterialIDAttribute.ConstAttributeArray;
                local_930 = (longlong)(iVar8 + iVar34);
                local_a90 = pTVar55;
                if ((longlong)pTVar55 < local_930) {
                  bVar15 = (byte)iVar34 & 0x1f;
                  uVar54 = 1 << bVar15 | 1U >> 0x20 - bVar15;
                  uVar56 = (ulonglong)pTVar55;
                  do {
                    uVar33 = (uint)uVar56;
                    local_ac4 = uVar54;
                    local_a90 = pTVar55;
                    if (local_9f0->InvisibleFaces == Skip) {
                      if ((((int)uVar33 < 0) || (*(int *)(puVar60 + 0x18) <= (int)uVar33)) &&
                         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Index>=0 && Index<NumBits",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                              ,0x5c6,L""), bVar31)) {
                        pcVar14 = (code *)swi(3);
                        uVar32 = (*pcVar14)();
                        return (bool)uVar32;
                      }
                      puVar47 = puVar60;
                      if (*(undefined1 **)(puVar60 + 0x10) != (undefined1 *)0x0) {
                        puVar47 = *(undefined1 **)(puVar60 + 0x10);
                      }
                      uVar48 = uVar33;
                      if ((int)uVar33 < 0) {
                        uVar48 = uVar33 + 0x1f;
                      }
                      if ((*(uint *)(puVar47 + (longlong)((int)uVar48 >> 5) * 4) & uVar54) != 0)
                      goto LAB_14ca3a5d8;
                    }
                    else {
LAB_14ca3a5d8:
                      uVar48 = uVar52;
                      if ((int)uVar33 < *(int *)&pTVar58->field_0x18) {
                        uVar48 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar48 == 0) &&
                         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar31)) {
                        pcVar14 = (code *)swi(3);
                        uVar32 = (*pcVar14)();
                        return (bool)uVar32;
                      }
                      uVar6 = *(undefined8 *)
                               (*(longlong *)&pTVar58->field_0x10 + (longlong)pTVar55 * 0xc);
                      local_ab8._s_0.C =
                           *(int *)(*(longlong *)&pTVar58->field_0x10 + 8 + (longlong)pTVar55 * 0xc)
                           - local_a88;
                      local_a10 = (int)uVar6;
                      iStack_a0c = (int)((ulonglong)uVar6 >> 0x20);
                      local_ab8._s_0.A = local_a10 - local_a88;
                      local_ab8._s_0.B = iStack_a0c - local_a88;
                      _local_a10 = CONCAT44(local_ab8._s_0.B,local_ab8._s_0.A);
                      local_a08 = local_ab8._s_0.C;
                      uVar48 = FDynamicMesh3::AppendTriangle
                                         ((FDynamicMesh3 *)TVar57.Pad,(FIndex3i *)&local_ab8._s_0,0)
                      ;
                      if (uVar48 == 0xfffffffe) {
                        uVar54 = FDynamicMesh3::FindEdge
                                           ((FDynamicMesh3 *)TVar57.Pad,local_ab8._s_0.A,
                                            local_ab8._s_0.B);
                        uVar33 = FDynamicMesh3::FindEdge
                                           ((FDynamicMesh3 *)TVar57.Pad,local_ab8._s_0.B,
                                            local_ab8._s_0.C);
                        uVar48 = FDynamicMesh3::FindEdge
                                           ((FDynamicMesh3 *)TVar57.Pad,local_ab8._s_0.C,
                                            local_ab8._s_0.A);
                        _local_ac8 = 0;
                        if ((uVar54 != 0xffffffff) &&
                           (*(int *)(*(longlong *)
                                      ((((TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                          *)((longlong)TVar57.Pad + 0x1c0))->AllocatorInstance).Data
                                      + (ulonglong)(uVar54 >> 9) * 8) + 0xc +
                                    (ulonglong)(uVar54 & 0x1ff) * 0x10) != -1)) {
                          _local_ac8 = 0x101;
                        }
                        if ((uVar33 != 0xffffffff) &&
                           (*(int *)(*(longlong *)
                                      ((((TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                          *)((longlong)TVar57.Pad + 0x1c0))->AllocatorInstance).Data
                                      + (ulonglong)(uVar33 >> 9) * 8) + 0xc +
                                    (ulonglong)(uVar33 & 0x1ff) * 0x10) != -1)) {
                          _local_ac8 = CONCAT21(0x101,local_ac8);
                        }
                        if ((uVar48 != 0xffffffff) &&
                           (*(int *)(*(longlong *)
                                      ((((TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                          *)((longlong)TVar57.Pad + 0x1c0))->AllocatorInstance).Data
                                      + (ulonglong)(uVar48 >> 9) * 8) + 0xc +
                                    (ulonglong)(uVar48 & 0x1ff) * 0x10) != -1)) {
                          _local_ac8 = CONCAT12(1,_local_ac8);
                          _local_ac8 = CONCAT21(uStack_ac7,1);
                        }
                        local_a80.InlineData[4].Pad[0] = '\0';
                        local_a80.InlineData[4].Pad[1] = '\0';
                        local_a80.InlineData[4].Pad[2] = '\0';
                        local_a80.InlineData[4].Pad[3] = '\0';
                        local_a80.InlineData[4].Pad[4] = '\0';
                        local_a80.InlineData[4].Pad[5] = '\0';
                        local_a80.InlineData[4].Pad[6] = '\0';
                        local_a80.InlineData[4].Pad[7] = '\0';
                        do {
                          if ((&local_ac8)[(longlong)local_a80.InlineData[4].Pad] != '\0') {
                            uVar54 = *(uint *)((longlong)&local_ab8 +
                                              (longlong)local_a80.InlineData[4].Pad * 4);
                            local_a80.InlineData[5].Pad[4] = '\0';
                            local_a80.InlineData[5].Pad[5] = '\0';
                            local_a80.InlineData[5].Pad[6] = '\0';
                            local_a80.InlineData[5].Pad[7] = '\0';
                            local_a80.InlineData[5].Pad[0] = (char)uVar54;
                            local_a80.InlineData[5].Pad[1] = (char)(uVar54 >> 8);
                            local_a80.InlineData[5].Pad[2] = (char)(uVar54 >> 0x10);
                            local_a80.InlineData[5].Pad[3] = (char)(uVar54 >> 0x18);
                            local_870 = 0;
                            local_86e = 0;
                            lVar44 = *(longlong *)
                                      ((((TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                          *)((longlong)TVar57.Pad + 0x10))->AllocatorInstance).Data
                                      + (ulonglong)(uVar54 >> 9) * 8);
                            pdVar3 = (double *)(lVar44 + (ulonglong)(uVar54 & 0x1ff) * 0x18);
                            local_8a8._s_0.X = *pdVar3;
                            local_8a8._s_0.Y = pdVar3[1];
                            local_8a8._s_0.Z =
                                 *(double *)(lVar44 + 0x10 + (ulonglong)(uVar54 & 0x1ff) * 0x18);
                            local_888 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                            local_87c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                            local_890 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                            local_884 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                            local_878 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                            iVar34 = FDynamicMesh3::AppendVertex
                                               ((FDynamicMesh3 *)TVar57.Pad,
                                                (FVertexInfo *)&local_8a8._s_0);
                            pFVar39 = (FDynamicMesh3 *)
                                      ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                        *)((longlong)TVar57.Pad + 0x208))->Ptr;
                            local_a40 = (TManagedArray<UE::Math::TVector<float>_> *)
                                        CONCAT44(local_a40._4_4_,iVar34);
                            pTVar51 = _DAT_00000040;
                            pFVar38 = pFVar53;
                            if (pFVar39 != (FDynamicMesh3 *)0x0) {
                              pTVar51 = (TDynamicMeshOverlay<float,4> *)
                                        (pFVar39->VertexRefCounts).FreeIndices.Blocks.
                                        AllocatorInstance.Data;
                              pFVar38 = pFVar39;
                            }
                            pFVar11 = (pFVar38->VertexRefCounts).FreeIndices.Blocks.
                                      AllocatorInstance.Data;
                            uVar33 = uVar54 * 4;
                            local_968 = *(float *)(*(longlong *)
                                                    (*(longlong *)(pFVar11 + 0x48) +
                                                    (ulonglong)((uVar54 & 0x3fffffff) >> 7) * 8) +
                                                  (ulonglong)(uVar33 & 0x1ff) * 4);
                            local_964 = *(undefined4 *)
                                         (*(longlong *)
                                           (*(longlong *)(pFVar11 + 0x48) +
                                           (ulonglong)((uVar54 & 0x3fffffff) >> 7) * 8) +
                                         (ulonglong)(uVar33 + 1 & 0x1ff) * 4);
                            local_960 = *(undefined4 *)
                                         (*(longlong *)
                                           (*(longlong *)(pFVar11 + 0x48) +
                                           (ulonglong)((uVar54 & 0x3fffffff) >> 7) * 8) +
                                         (ulonglong)(uVar33 + 2 & 0x1ff) * 4);
                            local_95c = *(undefined4 *)
                                         (*(longlong *)
                                           (*(longlong *)(pFVar11 + 0x48) +
                                           (ulonglong)((uVar54 & 0x3fffffff) >> 7) * 8) +
                                         (ulonglong)(uVar33 + 3 & 0x1ff) * 4);
                            TDynamicMeshOverlay<float,4>::AppendElement(pTVar51,&local_968);
                            uVar54 = uVar54 * 3;
                            uVar33 = uVar54 >> 9;
                            local_a80.InlineData[7].Pad[4] = '\0';
                            local_a80.InlineData[7].Pad[5] = '\0';
                            local_a80.InlineData[7].Pad[6] = '\0';
                            local_a80.InlineData[7].Pad[7] = '\0';
                            local_a80.InlineData[7].Pad[0] = (char)uVar33;
                            local_a80.InlineData[7].Pad[1] = (char)(uVar33 >> 8);
                            local_a80.InlineData[7].Pad[2] = (char)(uVar33 >> 0x10);
                            local_a80.InlineData[7].Pad[3] = (char)(uVar33 >> 0x18);
                            local_a80.InlineData[6].Pad._0_4_ = uVar54 & 0x1ff;
                            local_a80.InlineData[6].Pad[4] = '\0';
                            local_a80.InlineData[6].Pad[5] = '\0';
                            local_a80.InlineData[6].Pad[6] = '\0';
                            local_a80.InlineData[6].Pad[7] = '\0';
                            pFVar39 = pFVar53;
                            pFVar38 = pFVar53;
                            do {
                              pFVar45 = (FDynamicMesh3 *)
                                        ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                          *)((longlong)local_a80.InlineData[1].Pad + 0x208))->Ptr;
                              pFVar43 = pFVar53;
                              if (pFVar45 != (FDynamicMesh3 *)0x0) {
                                pFVar43 = pFVar45;
                              }
                              iVar34 = (int)pFVar39;
                              pFVar39 = pFVar53;
                              if (iVar34 < (int)(pFVar43->VertexRefCounts).FreeIndices.CurBlock) {
                                pFVar39 = *(FDynamicMesh3 **)
                                           ((longlong)&pFVar38->_padding_ +
                                           *(longlong *)
                                            &(pFVar43->VertexRefCounts).RefCounts.Blocks.ArrayNum);
                              }
                              pFVar43 = pFVar53;
                              if (pFVar45 != (FDynamicMesh3 *)0x0) {
                                pFVar43 = pFVar45;
                              }
                              pFVar45 = pFVar53;
                              if (iVar34 < (int)(pFVar43->VertexRefCounts).FreeIndices.CurBlock) {
                                pFVar45 = *(FDynamicMesh3 **)
                                           ((longlong)&pFVar38->_padding_ +
                                           *(longlong *)
                                            &(pFVar43->VertexRefCounts).RefCounts.Blocks.ArrayNum);
                              }
                              local_988 = *(float *)(*(longlong *)
                                                      (*(longlong *)
                                                        &(pFVar45->VertexRefCounts).FreeIndices.
                                                         Blocks.ArrayNum +
                                                      (longlong)local_a80.InlineData[7].Pad * 8) +
                                                    (longlong)local_a80.InlineData[6].Pad * 4);
                              local_984 = *(undefined4 *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               &(pFVar45->VertexRefCounts).FreeIndices.Blocks.
                                                ArrayNum + (ulonglong)(uVar54 + 1 >> 9) * 8) +
                                           (ulonglong)(uVar54 + 1 & 0x1ff) * 4);
                              local_980 = *(undefined4 *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               &(pFVar45->VertexRefCounts).FreeIndices.Blocks.
                                                ArrayNum + (ulonglong)(uVar54 + 2 >> 9) * 8) +
                                           (ulonglong)(uVar54 + 2 & 0x1ff) * 4);
                              TDynamicMeshOverlay<float,3>::AppendElement
                                        ((TDynamicMeshOverlay<float,3> *)pFVar39,&local_988);
                              TVar57.Pad = local_a80.InlineData[1].Pad;
                              pFVar39 = (FDynamicMesh3 *)(ulonglong)(iVar34 + 1U);
                              pFVar38 = (FDynamicMesh3 *)&pFVar38->Vertices;
                            } while ((int)(iVar34 + 1U) < 3);
                            if (0 < local_278) {
                              uVar33 = local_a80.InlineData[5].Pad._0_4_;
                              uVar54 = (uVar33 & 0x7fffffff) >> 8;
                              local_a80.InlineData[7].Pad[4] = '\0';
                              local_a80.InlineData[7].Pad[5] = '\0';
                              local_a80.InlineData[7].Pad[6] = '\0';
                              local_a80.InlineData[7].Pad[7] = '\0';
                              local_a80.InlineData[7].Pad[0] = (char)uVar54;
                              local_a80.InlineData[7].Pad[1] = (char)(uVar54 >> 8);
                              local_a80.InlineData[7].Pad[2] = (char)(uVar54 >> 0x10);
                              local_a80.InlineData[7].Pad[3] = (char)(uVar54 >> 0x18);
                              local_a80.InlineData[6].Pad._0_4_ = uVar33 * 2 & 0x1ff;
                              local_a80.InlineData[6].Pad[4] = '\0';
                              local_a80.InlineData[6].Pad[5] = '\0';
                              local_a80.InlineData[6].Pad[6] = '\0';
                              local_a80.InlineData[6].Pad[7] = '\0';
                              local_a80.InlineData[5].Pad._0_4_ = uVar33 * 2 + 1 & 0x1ff;
                              local_a80.InlineData[5].Pad[4] = '\0';
                              local_a80.InlineData[5].Pad[5] = '\0';
                              local_a80.InlineData[5].Pad[6] = '\0';
                              local_a80.InlineData[5].Pad[7] = '\0';
                              pFVar39 = pFVar53;
                              pFVar38 = pFVar53;
                              do {
                                pFVar45 = (FDynamicMesh3 *)
                                          ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                            *)((longlong)TVar57.Pad + 0x208))->Ptr;
                                pFVar43 = pFVar53;
                                if (pFVar45 != (FDynamicMesh3 *)0x0) {
                                  pFVar43 = pFVar45;
                                }
                                iVar34 = (int)pFVar39;
                                pFVar39 = pFVar53;
                                if ((iVar34 < *(int *)&(pFVar43->VertexRefCounts).RefCounts.Blocks.
                                                       AllocatorInstance.Data) && (-1 < iVar34)) {
                                  if ((iVar34 < 0) &&
                                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar31)) {
                                    pcVar14 = (code *)swi(3);
                                    uVar32 = (*pcVar14)();
                                    return (bool)uVar32;
                                  }
                                  pFVar39 = *(FDynamicMesh3 **)
                                             ((longlong)&pFVar38->_padding_ +
                                             *(longlong *)&(pFVar43->VertexRefCounts).RefCounts);
                                }
                                pFVar45 = (FDynamicMesh3 *)
                                          ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                            *)((longlong)TVar57.Pad + 0x208))->Ptr;
                                pFVar43 = pFVar53;
                                if (pFVar45 != (FDynamicMesh3 *)0x0) {
                                  pFVar43 = pFVar45;
                                }
                                pFVar45 = pFVar53;
                                if ((iVar34 < *(int *)&(pFVar43->VertexRefCounts).RefCounts.Blocks.
                                                       AllocatorInstance.Data) && (-1 < iVar34)) {
                                  if ((iVar34 < 0) &&
                                     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar31)) {
                                    pcVar14 = (code *)swi(3);
                                    uVar32 = (*pcVar14)();
                                    return (bool)uVar32;
                                  }
                                  pFVar45 = *(FDynamicMesh3 **)
                                             ((longlong)&pFVar38->_padding_ +
                                             *(longlong *)&(pFVar43->VertexRefCounts).RefCounts);
                                }
                                local_9f8 = *(float *)(*(longlong *)
                                                        (*(longlong *)
                                                          &(pFVar45->VertexRefCounts).FreeIndices.
                                                           Blocks.ArrayNum +
                                                        (longlong)local_a80.InlineData[7].Pad * 8) +
                                                      (longlong)local_a80.InlineData[6].Pad * 4);
                                local_9f4 = *(undefined4 *)
                                             (*(longlong *)
                                               (*(longlong *)
                                                 &(pFVar45->VertexRefCounts).FreeIndices.Blocks.
                                                  ArrayNum +
                                               (ulonglong)((uVar33 & 0x7fffffff) >> 8) * 8) +
                                             (longlong)local_a80.InlineData[5].Pad * 4);
                                TDynamicMeshOverlay<float,2>::AppendElement
                                          ((TDynamicMeshOverlay<float,2> *)pFVar39,&local_9f8);
                                pFVar39 = (FDynamicMesh3 *)(ulonglong)(iVar34 + 1U);
                                pFVar38 = (FDynamicMesh3 *)&pFVar38->Vertices;
                              } while ((int)(iVar34 + 1U) < local_278);
                            }
                            *(undefined4 *)
                             ((longlong)&local_ab8 + (longlong)local_a80.InlineData[4].Pad * 4) =
                                 local_a40._0_4_;
                          }
                          local_a80.InlineData[4].Pad = local_a80.InlineData[4].Pad + 1;
                        } while ((longlong)local_a80.InlineData[4].Pad < 3);
                        uVar48 = FDynamicMesh3::AppendTriangle
                                           ((FDynamicMesh3 *)TVar57.Pad,(FIndex3i *)&local_ab8._s_0,
                                            0);
                        pTVar55 = local_a90;
                        puVar60 = local_aa8;
                        uVar54 = local_ac4;
                        uVar33 = local_aa0._0_4_;
                      }
                      pTVar58 = local_a98;
                      if (-1 < (int)uVar48) {
                        pFVar39 = (FDynamicMesh3 *)
                                  ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                    *)((longlong)TVar57.Pad + 0x208))->Ptr;
                        pFVar38 = pFVar53;
                        if (pFVar39 != (FDynamicMesh3 *)0x0) {
                          pFVar38 = pFVar39;
                        }
                        TDynamicMeshOverlay<float,4>::SetTriangle
                                  ((TDynamicMeshOverlay<float,4> *)
                                   (pFVar38->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.
                                   Data,uVar48,(FIndex3i *)&local_ab8._s_0,false);
                        pFVar39 = (FDynamicMesh3 *)
                                  ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                    *)((longlong)TVar57.Pad + 0x208))->Ptr;
                        pFVar38 = pFVar53;
                        if (pFVar39 != (FDynamicMesh3 *)0x0) {
                          pFVar38 = pFVar39;
                        }
                        pFVar39 = pFVar53;
                        if (0 < (int)(pFVar38->VertexRefCounts).FreeIndices.CurBlock) {
                          pFVar39 = (FDynamicMesh3 *)
                                    **(undefined8 **)
                                      &(pFVar38->VertexRefCounts).RefCounts.Blocks.ArrayNum;
                        }
                        TDynamicMeshOverlay<float,3>::SetTriangle
                                  ((TDynamicMeshOverlay<float,3> *)pFVar39,uVar48,
                                   (FIndex3i *)&local_ab8._s_0,false);
                        pFVar39 = (FDynamicMesh3 *)
                                  ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                    *)((longlong)TVar57.Pad + 0x208))->Ptr;
                        pFVar38 = pFVar53;
                        if (pFVar39 != (FDynamicMesh3 *)0x0) {
                          pFVar38 = pFVar39;
                        }
                        pFVar39 = pFVar53;
                        if (1 < (int)(pFVar38->VertexRefCounts).FreeIndices.CurBlock) {
                          pFVar39 = *(FDynamicMesh3 **)
                                     (*(longlong *)
                                       &(pFVar38->VertexRefCounts).RefCounts.Blocks.ArrayNum + 8);
                        }
                        TDynamicMeshOverlay<float,3>::SetTriangle
                                  ((TDynamicMeshOverlay<float,3> *)pFVar39,uVar48,
                                   (FIndex3i *)&local_ab8._s_0,false);
                        pFVar39 = (FDynamicMesh3 *)
                                  ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                    *)((longlong)TVar57.Pad + 0x208))->Ptr;
                        pFVar38 = pFVar53;
                        if (pFVar39 != (FDynamicMesh3 *)0x0) {
                          pFVar38 = pFVar39;
                        }
                        pFVar39 = pFVar53;
                        if (2 < (int)(pFVar38->VertexRefCounts).FreeIndices.CurBlock) {
                          pFVar39 = *(FDynamicMesh3 **)
                                     (*(longlong *)
                                       &(pFVar38->VertexRefCounts).RefCounts.Blocks.ArrayNum + 0x10)
                          ;
                        }
                        TDynamicMeshOverlay<float,3>::SetTriangle
                                  ((TDynamicMeshOverlay<float,3> *)pFVar39,uVar48,
                                   (FIndex3i *)&local_ab8._s_0,false);
                        pFVar39 = pFVar53;
                        pFVar38 = pFVar53;
                        if (0 < local_278) {
                          do {
                            pFVar45 = (FDynamicMesh3 *)
                                      ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                        *)((longlong)TVar57.Pad + 0x208))->Ptr;
                            pFVar43 = pFVar53;
                            if (pFVar45 != (FDynamicMesh3 *)0x0) {
                              pFVar43 = pFVar45;
                            }
                            iVar34 = (int)pFVar39;
                            pFVar39 = pFVar53;
                            if ((iVar34 < *(int *)&(pFVar43->VertexRefCounts).RefCounts.Blocks.
                                                   AllocatorInstance.Data) && (-1 < iVar34)) {
                              if ((iVar34 < 0) &&
                                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar31)) {
                                pcVar14 = (code *)swi(3);
                                uVar32 = (*pcVar14)();
                                return (bool)uVar32;
                              }
                              pFVar39 = *(FDynamicMesh3 **)
                                         ((longlong)&pFVar38->_padding_ +
                                         *(longlong *)&(pFVar43->VertexRefCounts).RefCounts);
                            }
                            TDynamicMeshOverlay<float,2>::SetTriangle
                                      ((TDynamicMeshOverlay<float,2> *)pFVar39,uVar48,
                                       (FIndex3i *)&local_ab8._s_0,false);
                            pFVar39 = (FDynamicMesh3 *)(ulonglong)(iVar34 + 1U);
                            pFVar38 = (FDynamicMesh3 *)&pFVar38->Vertices;
                          } while ((int)(iVar34 + 1U) < local_278);
                        }
                        pTVar27 = local_a28;
                        pFVar39 = (FDynamicMesh3 *)
                                  ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                                    *)((longlong)TVar57.Pad + 0x208))->Ptr;
                        pFVar38 = pFVar53;
                        if (pFVar39 != (FDynamicMesh3 *)0x0) {
                          pFVar38 = pFVar39;
                        }
                        lVar44 = *(longlong *)
                                  &(pFVar38->VertexRefCounts).FreeIndices.Blocks.ArrayNum;
                        uVar54 = uVar52;
                        if ((int)uVar33 < *(int *)&local_a28->field_0x18) {
                          uVar54 = ~uVar33 >> 0x1f;
                        }
                        if ((uVar54 == 0) &&
                           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar31)) {
                          pcVar14 = (code *)swi(3);
                          uVar32 = (*pcVar14)();
                          return (bool)uVar32;
                        }
                        TVar46.Pad = local_a80.InlineData[3].Pad;
                        pTVar55 = local_a90;
                        *(undefined4 *)
                         (*(longlong *)(*(longlong *)(lVar44 + 0x20) + (ulonglong)(uVar48 >> 9) * 8)
                         + (ulonglong)(uVar48 & 0x1ff) * 4) =
                             *(undefined4 *)
                              (*(longlong *)&pTVar27->field_0x10 + (longlong)local_a90 * 4);
                        if (local_a38 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
                          if ((((int)uVar33 < 0) ||
                              (*(int *)((longlong)local_a80.InlineData[3].Pad + 0x18) <= (int)uVar33
                              )) && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("Index>=0 && Index<NumBits",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x5c6,L""), bVar31)) {
                            pcVar14 = (code *)swi(3);
                            uVar32 = (*pcVar14)();
                            return (bool)uVar32;
                          }
                          auVar13 = *(uchar (*) [8])((longlong)TVar46.Pad + 0x10);
                          if (auVar13 != (uchar  [8])0x0) {
                            TVar46.Pad = auVar13;
                          }
                          uVar54 = uVar33;
                          if ((int)uVar33 < 0) {
                            uVar54 = uVar33 + 0x1f;
                          }
                          *(uint *)(*(longlong *)
                                     (*(longlong *)&local_a38->field_0x20 +
                                     (ulonglong)(uVar48 >> 9) * 8) + (ulonglong)(uVar48 & 0x1ff) * 4
                                   ) = ((*(uint *)((longlong)TVar46.Pad +
                                                  (longlong)((int)uVar54 >> 5) * 4) & local_ac4) !=
                                       0) + 1;
                        }
                        puVar60 = local_aa8;
                        uVar54 = local_ac4;
                        pTVar58 = local_a98;
                        if (local_a30 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
                          if ((((int)uVar33 < 0) || (*(int *)(local_aa8 + 0x18) <= (int)uVar33)) &&
                             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Index>=0 && Index<NumBits",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x5c6,L""), bVar31)) {
                            pcVar14 = (code *)swi(3);
                            uVar32 = (*pcVar14)();
                            return (bool)uVar32;
                          }
                          puVar47 = puVar60;
                          if (*(undefined1 **)(puVar60 + 0x10) != (undefined1 *)0x0) {
                            puVar47 = *(undefined1 **)(puVar60 + 0x10);
                          }
                          uVar35 = uVar33;
                          if ((int)uVar33 < 0) {
                            uVar35 = uVar33 + 0x1f;
                          }
                          *(uint *)(*(longlong *)
                                     (*(longlong *)&local_a30->field_0x20 +
                                     (ulonglong)(uVar48 >> 9) * 8) + (ulonglong)(uVar48 & 0x1ff) * 4
                                   ) = ((*(uint *)(puVar47 + (longlong)((int)uVar35 >> 5) * 4) &
                                        uVar54) != 0) + 1;
                          pTVar58 = local_a98;
                          uVar54 = local_ac4;
                        }
                      }
                    }
                    uVar56 = (ulonglong)(uVar33 + 1);
                    uVar54 = uVar54 << 1 | (uint)((int)uVar54 < 0);
                    pTVar55 = (TManagedArray<FLinearColor> *)((longlong)pTVar55 + 1);
                    local_aa0 = (double)CONCAT44(local_aa0._4_4_,uVar33 + 1);
                    local_ac4 = uVar54;
                    local_a90 = pTVar55;
                  } while ((longlong)pTVar55 < local_930);
                }
                param_6 = local_9f0;
                if (local_9f0->bSaveIsolatedVertices == false) {
                  local_958.Mesh = (FDynamicMesh3 *)TVar57.Pad;
                  FDynamicMeshEditor::RemoveIsolatedVertices(&local_958);
                }
                if (param_6->bWeldVertices != false) {
                  local_868.MergeSearchTolerance = 0.0;
                  local_868._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
                  local_868.MergeVertexTolerance = (double)CONCAT44(uVar64,uVar63);
                  local_868.OnlyUniquePairs = false;
                  local_868.InitialNumBoundaryEdges = 0;
                  local_868.FinalNumBoundaryEdges = 0;
                  local_868.SplitAttributeWelder.UVDistSqrdThreshold = 0.0;
                  local_868.SplitAttributeWelder.ColorDistSqrdThreshold = 0.0;
                  local_868.SplitAttributeWelder.NormalVecDotThreshold = 0.0;
                  local_868.SplitAttributeWelder.TangentVecDotThreshold = 0.0;
                  local_868.EdgesToMerge =
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
                  local_868.bWeldAttrsOnMergedEdges = true;
                  local_868.Mesh = (FDynamicMesh3 *)TVar57.Pad;
                  FMergeCoincidentMeshEdges::Apply(&local_868);
                }
                FDynamicMesh3::CompactInPlace((FDynamicMesh3 *)TVar57.Pad,(FCompactMaps *)0x0);
                TVar57.Pad = local_a80.InlineData[2].Pad;
              }
LAB_14ca3af63:
              local_9e8 = local_9e8 + 4;
            } while (local_9e8 != local_950);
          }
          if (local_a20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a20.AllocatorInstance.Data);
          }
        }
        return true;
      }
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L"");
      if (bVar31) {
        pcVar14 = (code *)swi(3);
        uVar32 = (*pcVar14)();
        return (bool)uVar32;
      }
    }
  }
  return false;
}

// InternalFacePolyGroupName @ 14ca3b050

FName __cdecl UE::Geometry::FGeometryCollectionToDynamicMeshes::InternalFacePolyGroupName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"GeometryCollectionInternalFaces");
  return in_RCX;
}

// UpdateCollection @ 14ca3c790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::FGeometryCollectionToDynamicMeshes::UpdateCollection
          (TTransform<double> *param_1,FDynamicMesh3 *param_2,int param_3,
          FGeometryCollection *param_4,FToCollectionOptions *param_5)

{
  FRefCountVector *pFVar1;
  double *pdVar2;
  uchar (*pauVar3) [8];
  FDynamicMeshAttributeSet *pFVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar6;
  undefined1 *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [12];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_*> TVar24;
  bool bVar25;
  undefined1 uVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  uint uVar30;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar31;
  TUniqueMeshVertex<8> *pTVar32;
  FLinearColor *pFVar33;
  TTransform<double> *pTVar34;
  uchar auVar35 [8];
  uchar auVar36 [8];
  longlong lVar37;
  undefined ***pppuVar38;
  longlong *plVar39;
  uchar auVar40 [8];
  undefined1 *puVar41;
  TTransform<double> *pTVar42;
  ulonglong uVar43;
  uint uVar44;
  longlong lVar45;
  FName *pFVar46;
  float fVar47;
  FScriptContainerElement *pFVar48;
  uchar auVar49 [8];
  uchar auVar50 [8];
  uchar auVar51 [8];
  int iVar52;
  float fVar53;
  undefined1 *puVar54;
  float fVar55;
  float fVar56;
  undefined8 *puVar57;
  char cVar58;
  char cVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uchar auVar100 [8];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar91;
  undefined1 auVar92 [16];
  double dVar99;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  uint uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_*> TVar109;
  uchar unaff_XMM6_Qb [8];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  TTypeCompatibleBytes<TManagedArray<UE::Math::TVector2<float>_>_*> TVar115;
  double dVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  double dVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auStackY_6e8 [32];
  TArray<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
  local_688;
  float local_678;
  float local_674;
  uint local_670;
  ForAnyElementType local_668;
  undefined8 local_660;
  FDynamicMesh3 *local_658;
  int local_650;
  uint local_64c;
  float local_648;
  float local_644;
  TTransform<double> *local_640;
  undefined8 local_638;
  undefined1 *local_630;
  ulonglong local_628;
  TArray<int,TSizedDefaultAllocator<32>_> local_620;
  uchar local_610 [8];
  int local_608;
  float local_604;
  ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> local_600;
  char local_5c0;
  undefined7 uStack_5bf;
  int local_5b8;
  float local_5b4;
  TTransform<double> *local_5b0;
  undefined1 *local_5a8;
  float local_5a0;
  float fStack_59c;
  float local_598;
  TVector4<float>_u_0 local_588;
  undefined8 local_578;
  undefined4 local_570;
  undefined8 local_568;
  undefined4 local_560;
  FName local_558;
  FDynamicMeshAttributeSet *local_550;
  FName local_548;
  BaseIterator local_540;
  BaseIterator local_530;
  undefined8 local_520;
  code *local_508 [2];
  undefined **local_4f8;
  FDynamicMesh3 *local_4f0;
  uint local_4e8;
  undefined ***local_4e0;
  FName local_4d8;
  FName local_4d0;
  IndexIterator local_4c8;
  IndexIterator local_4b8;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  BaseValueIterator local_478;
  undefined1 local_450 [40];
  double local_428;
  double dStack_420;
  double local_418;
  undefined1 local_410 [16];
  double local_400;
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  undefined1 local_3b0 [16];
  double local_3a0;
  undefined1 local_398 [16];
  double local_388;
  undefined1 local_380 [16];
  double local_370;
  FLinearColor local_368;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*> local_328;
  int local_2e8;
  int local_2e4 [3];
  undefined1 local_2d8 [40];
  longlong *local_2b0;
  FSmallListSet *local_2a8;
  ulonglong uStack_2a0;
  int local_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int local_288;
  undefined4 uStack_284;
  FSmallListSet *local_280;
  ulonglong uStack_278;
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined1 local_258 [144];
  undefined1 local_1c8 [144];
  undefined1 local_138 [48];
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  lVar45 = (longlong)param_3;
  auVar51[0] = '\0';
  auVar51[1] = '\0';
  auVar51[2] = '\0';
  auVar51[3] = '\0';
  auVar51[4] = '\0';
  auVar51[5] = '\0';
  auVar51[6] = '\0';
  auVar51[7] = '\0';
  fVar55 = (float)((uint)~param_3 >> 0x1f);
  fVar27 = 0.0;
  if (param_3 < *(int *)&(param_4->VertexCount).field_0x18) {
    fVar27 = fVar55;
  }
  local_658 = param_2;
  local_640 = param_1;
  local_608 = param_3;
  local_604 = fVar55;
  if ((fVar27 == 0.0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  local_670 = *(uint *)(*(longlong *)&(param_4->VertexCount).field_0x10 + lVar45 * 4);
  fVar27 = 0.0;
  if (param_3 < *(int *)&(param_4->VertexStart).field_0x18) {
    fVar27 = fVar55;
  }
  if ((fVar27 == 0.0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  local_650 = *(int *)(*(longlong *)&(param_4->VertexStart).field_0x10 + lVar45 * 4);
  auVar40._0_4_ = 0.0;
  fVar27 = auVar40._0_4_;
  if (param_3 < *(int *)&(param_4->FaceCount).field_0x18) {
    fVar27 = fVar55;
  }
  if ((fVar27 == 0.0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  local_5b4 = *(float *)(*(longlong *)&(param_4->FaceCount).field_0x10 + lVar45 * 4);
  fVar27 = auVar40._0_4_;
  if (param_3 < *(int *)&(param_4->FaceStart).field_0x18) {
    fVar27 = fVar55;
  }
  if ((fVar27 == 0.0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  local_64c = *(uint *)(*(longlong *)&(param_4->FaceStart).field_0x10 + lVar45 * 4);
  pFVar4 = (param_2->AttributeSet).Ptr;
  if (pFVar4 == (FDynamicMeshAttributeSet *)0x0) {
    iVar28 = 1;
  }
  else {
    iVar28 = (**(code **)(pFVar4->_padding_ + 0xa8))();
  }
  FGeometryCollection::SetNumUVLayers(param_4,iVar28);
  local_2e8 = 0;
  pFVar46 = GeometryCollection::UV::UVLayerNames;
  local_2e4[0] = 8;
  do {
    local_4d8 = *pFVar46;
    local_4d0 = GeometryCollection::UV::VerticesGroupName;
    pTVar31 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&param_4->_padding_,(TTuple<FName,FName> *)&local_4d8);
    auVar36 = (uchar  [8])&pTVar31->field_0x10;
    if (pTVar31 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      auVar36 = auVar51;
    }
    if ((auVar36 == (uchar  [8])0x0) || (*(char *)auVar36 != '\x03')) {
      local_600.InlineData[0].Pad[0] = '\0';
      local_600.InlineData[0].Pad[1] = '\0';
      local_600.InlineData[0].Pad[2] = '\0';
      local_600.InlineData[0].Pad[3] = '\0';
      local_600.InlineData[0].Pad[4] = '\0';
      local_600.InlineData[0].Pad[5] = '\0';
      local_600.InlineData[0].Pad[6] = '\0';
      local_600.InlineData[0].Pad[7] = '\0';
      break;
    }
    local_600.InlineData[0].Pad =
         (uchar  [8])
         FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector2<float>_>(auVar36);
    if (local_600.InlineData[0].Pad == (uchar  [8])0x0) break;
    if (((&local_328 <= &local_600) && (&local_600 < local_328.InlineData + local_2e4[0])) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      uVar26 = (*pcVar8)();
      return (bool)uVar26;
    }
    if (local_2e8 == local_2e4[0]) {
      local_2e8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<8>::ForElementType<TManagedArray<UE::Math::TVector2<float>_>_*>_>
                            (0x808,&local_328,local_2e4);
    }
    pFVar46 = pFVar46 + 1;
    lVar37 = (longlong)local_2e8;
    local_2e8 = local_2e8 + 1;
    *&local_328.InlineData[lVar37].Pad = local_600.InlineData[0].Pad;
  } while ((longlong)pFVar46 < 0x155073a40);
  fVar27 = auVar40._0_4_;
  if (param_3 < *(int *)&(param_4->TransformIndex).field_0x18) {
    fVar27 = fVar55;
  }
  if ((fVar27 == 0.0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  local_644 = *(float *)(*(longlong *)&(param_4->TransformIndex).field_0x10 + lVar45 * 4);
  local_620.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_620.ArrayNum = 0;
  local_620.ArrayMax = 0;
  local_5c0 = '\0';
  local_5b8 = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_620,&local_5b8,
             (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->VertexRefCounts).RefCounts.CurBlockUsed);
  local_668.Data = (FScriptContainerElement *)0x0;
  local_660 = 0;
  if ((int)local_670 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)local_670);
  }
  if (0 < (int)local_670) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,local_670,&local_668,0,(int *)((longlong)&local_660 + 4));
  }
  local_688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.ArrayNum = 0;
  local_688.ArrayMax = 0;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_540,&param_2->VertexRefCounts,0,
             (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->VertexRefCounts).RefCounts.CurBlockUsed);
  iVar52 = (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->VertexRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_4c8,&param_2->VertexRefCounts,iVar52,iVar52);
  local_600.InlineData[1].Pad = (uchar  [8])(longlong)iVar28;
  fVar27 = 0.0;
  fVar55 = 0.0;
  TVar109.Pad = local_600.InlineData[2].Pad;
  TVar115.Pad = local_600.InlineData[3].Pad;
  if (local_540.Index != local_4c8._8_4_) {
    local_498 = 0;
    uStack_490 = 0;
    do {
      uVar23 = local_540._8_8_;
      uVar44 = local_540.Index;
      uVar107 = (uint)local_660;
      fVar53 = auVar40._0_4_;
      if ((int)uVar44 < local_620.ArrayNum) {
        fVar53 = (float)(~uVar44 >> 0x1f);
      }
      if ((fVar53 == 0.0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar8 = (code *)swi(3);
        uVar26 = (*pcVar8)();
        return (bool)uVar26;
      }
      *(undefined4 *)(local_620.AllocatorInstance.Data + (longlong)(int)uVar44 * 4) = uVar107;
      local_688.ArrayNum = 0;
      if ((local_688.ArrayMax < 0) && (local_688.ArrayMax != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,0,&local_688.AllocatorInstance,0,&local_688.ArrayMax);
      }
      auVar20[4] = unaff_XMM6_Qb[0];
      auVar20[5] = unaff_XMM6_Qb[1];
      auVar20[6] = unaff_XMM6_Qb[2];
      auVar20[7] = unaff_XMM6_Qb[3];
      auVar20[8] = unaff_XMM6_Qb[4];
      auVar20[9] = unaff_XMM6_Qb[5];
      auVar20[10] = unaff_XMM6_Qb[6];
      auVar20[0xb] = unaff_XMM6_Qb[7];
      auVar20._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar110._0_8_ = auVar20._0_8_ << 0x20;
      auVar110._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar110._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      lVar45 = *(longlong *)
                ((param_2->Vertices).Blocks.AllocatorInstance.Data +
                ((uVar23 & 0xffffffff) >> 9) * 8);
      local_418 = *(double *)(lVar45 + 0x10 + (ulonglong)(uVar44 & 0x1ff) * 0x18);
      pdVar2 = (double *)(lVar45 + (ulonglong)(uVar44 & 0x1ff) * 0x18);
      local_428 = *pdVar2;
      dStack_420 = pdVar2[1];
      dVar75 = local_418 - (local_640->Translation).ZW.m128d_f64[0];
      dVar9 = (local_640->Rotation).XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar10 = (local_640->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar107 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar116 = (local_640->Rotation).ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar119 = (local_640->Rotation).ZW.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar92._8_4_ = SUB84(dVar10,0);
      auVar92._0_8_ = dVar9;
      auVar92._12_4_ = uVar107;
      dVar99 = auVar92._8_8_;
      auVar101._8_4_ = SUB84(dVar10,0);
      auVar101._0_8_ = dVar9;
      auVar101._12_4_ = uVar107;
      auVar77._8_4_ = SUB84(dVar119,0);
      auVar77._0_8_ = dVar116;
      auVar77._12_4_ = (int)((ulonglong)dVar119 >> 0x20);
      auVar102 = blendpd(auVar101,auVar77,2);
      auVar60._8_4_ = SUB84(dVar116,0);
      auVar60._0_8_ = dVar99;
      auVar60._12_4_ = (int)((ulonglong)dVar116 >> 0x20);
      dVar19 = local_428 - (local_640->Translation).XY.m128d_f64[0];
      dVar91 = dStack_420 - (local_640->Translation).XY.m128d_f64[1];
      uVar107 = (undefined4)((ulonglong)dVar91 >> 0x20);
      auVar132._8_4_ = SUB84(dVar91,0);
      auVar132._0_8_ = dVar19;
      auVar132._12_4_ = uVar107;
      auVar76._8_4_ = SUB84(dVar91,0);
      auVar76._0_8_ = dVar19;
      auVar76._12_4_ = uVar107;
      auVar122._8_8_ = 0;
      auVar122._0_8_ = dVar75;
      auVar77 = blendpd(auVar76,auVar122,2);
      auVar133._0_8_ = auVar132._8_8_ * dVar9 - dVar99 * dVar19;
      auVar133._8_8_ = dVar75 * dVar10 - auVar60._8_8_ * dVar91;
      auVar78._0_8_ = auVar77._0_8_ * dVar116 - dVar75 * auVar102._0_8_;
      auVar78._8_8_ = auVar77._8_8_ * dVar119 - auVar102._8_8_ * 0.0;
      dVar14 = auVar133._8_8_ + auVar133._8_8_;
      dVar15 = auVar78._0_8_ + auVar78._0_8_;
      uVar107 = SUB84(dVar15,0);
      uVar108 = (undefined4)((ulonglong)dVar15 >> 0x20);
      auVar77 = blendpd(auVar133,auVar78,2);
      auVar120._8_4_ = uVar107;
      auVar120._0_8_ = dVar14;
      auVar120._12_4_ = uVar108;
      auVar61._8_4_ = uVar107;
      auVar61._0_8_ = dVar14;
      auVar61._12_4_ = uVar108;
      auVar117._8_4_ = uVar107;
      auVar117._0_8_ = dVar14;
      auVar117._12_4_ = uVar108;
      auVar134._0_8_ = auVar77._0_8_ + auVar77._0_8_;
      auVar134._8_8_ = auVar77._8_8_ + auVar77._8_8_;
      auVar77 = blendpd(auVar117,auVar134,2);
      auVar121._0_8_ = auVar120._8_8_ * dVar9 - dVar14 * dVar99;
      auVar121._8_8_ = auVar134._0_8_ * dVar10 - auVar61._8_8_ * dVar116;
      auVar62._8_4_ = SUB84(auVar134._8_8_,0);
      auVar62._0_8_ = auVar134._0_8_;
      auVar62._12_4_ = (int)((ulonglong)auVar134._8_8_ >> 0x20);
      auVar118._0_8_ = auVar77._0_8_ * dVar116 - auVar134._0_8_ * auVar102._0_8_;
      auVar118._8_8_ = auVar77._8_8_ * dVar119 - auVar62._8_8_ * auVar102._8_8_;
      auVar77 = *(undefined1 (*) [16])(local_640->Scale3D).ZW.m128d_f64;
      auVar111._8_8_ = auVar110._8_8_;
      auVar111._0_8_ = auVar77._0_8_;
      lVar45 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar77._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar77._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      uVar30 = (uint)lVar45;
      uVar106 = (uint)((ulonglong)lVar45 >> 0x20);
      auVar77 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(local_640->Scale3D).XY.m128d_f64);
      lVar45 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)(local_640->Scale3D).XY.m128d_f64 + 4),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)(local_640->Scale3D).XY.m128d_f64) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar37 = -(ulonglong)
                ((double)CONCAT44(_UNK_15061cc8c &
                                  *(uint *)((longlong)(local_640->Scale3D).XY.m128d_f64 + 0xc),
                                  _UNK_15061cc88 & *(uint *)((local_640->Scale3D).XY.m128d_f64 + 1))
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar102._8_4_ = SUB84(auVar121._8_8_,0);
      auVar102._0_8_ = auVar121._0_8_;
      auVar102._12_4_ = (int)((ulonglong)auVar121._8_8_ >> 0x20);
      dVar9 = (double)CONCAT44(~(uint)((ulonglong)lVar45 >> 0x20) & auVar77._4_4_,
                               ~(uint)lVar45 & auVar77._0_4_) *
              (dVar14 * dVar119 + dVar19 + auVar102._8_8_);
      dVar10 = (double)CONCAT44(~(uint)((ulonglong)lVar37 >> 0x20) & auVar77._12_4_,
                                ~(uint)lVar37 & auVar77._8_4_) *
               (dVar15 * dVar119 + dVar91 + auVar118._0_8_);
      auVar77 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar111);
      local_410._8_4_ = SUB84(dVar10,0);
      local_410._0_8_ = dVar9;
      local_410._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_5a0 = (float)dVar9;
      fStack_59c = (float)dVar10;
      auVar122 = blendpd(auVar121,auVar118,2);
      local_400 = (double)(CONCAT44(~uVar106 & auVar77._4_4_,~uVar30 & auVar77._0_4_) |
                          CONCAT44(local_498._4_4_ & uVar106,(uint)local_498 & uVar30)) *
                  (auVar134._0_8_ * dVar119 + dVar75 + auVar122._0_8_);
      local_598 = (float)local_400;
      auVar49 = (uchar  [8])(double)local_598;
      auVar100 = (uchar  [8])(double)local_5a0;
      auVar36 = (uchar  [8])(double)fStack_59c;
      if (local_5c0 == '\0') {
        local_5c0 = '\x01';
        TVar109.Pad = auVar100;
        TVar115.Pad = auVar36;
        local_600.InlineData[4].Pad = auVar49;
        local_600.InlineData[5].Pad = auVar100;
        local_600.InlineData[6].Pad = auVar36;
        local_600.InlineData[7].Pad = auVar49;
      }
      else {
        if ((double)auVar100 <= (double)TVar109.Pad) {
          TVar109.Pad = auVar100;
        }
        if ((double)auVar49 <= (double)local_600.InlineData[4].Pad) {
          local_600.InlineData[4].Pad = auVar49;
        }
        if ((double)local_600.InlineData[5].Pad <= (double)auVar100) {
          local_600.InlineData[5].Pad = auVar100;
        }
        if ((double)auVar36 <= (double)TVar115.Pad) {
          TVar115.Pad = auVar36;
        }
        if ((double)local_600.InlineData[6].Pad <= (double)auVar36) {
          local_600.InlineData[6].Pad = auVar36;
        }
        if ((double)local_600.InlineData[7].Pad <= (double)auVar49) {
          local_600.InlineData[7].Pad = auVar49;
        }
      }
      local_4e0 = (undefined ***)0x0;
      local_4f8 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_508[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                     ::Call;
      local_2d8._0_8_ = 0;
      local_2b0 = (longlong *)0x0;
      local_2a8 = (FSmallListSet *)0x0;
      uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
      local_280 = (FSmallListSet *)0x0;
      uStack_278 = uStack_278 & 0xffffffff00000000;
      local_600.InlineData[2].Pad = TVar109.Pad;
      local_600.InlineData[3].Pad = TVar115.Pad;
      local_4f0 = param_2;
      local_4e8 = uVar44;
      FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_478,&param_2->VertexEdgeLists,uVar44,false);
      local_2a8 = local_478.ListSet;
      uStack_2a0._0_4_ = local_478.ListIndex;
      uStack_2a0._4_4_ = local_478.block_ptr;
      local_288 = local_478.cur_value;
      uStack_284 = local_478._36_4_;
      local_298 = local_478.N;
      iStack_294 = local_478.iEnd;
      iStack_290 = local_478.iCur;
      iStack_28c = local_478.cur_ptr;
      FSmallListSet::BaseValueIterator::BaseValueIterator
                ((BaseValueIterator *)local_450,&param_2->VertexEdgeLists,uVar44,true);
      local_280 = (FSmallListSet *)local_450._0_8_;
      uStack_278 = local_450._8_8_;
      local_260 = local_450._32_8_;
      local_270 = local_450._16_16_;
      TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2d8,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_508);
      if (local_508[0] != (code *)0x0) {
        pppuVar38 = &local_4f8;
        if (local_4e0 != (undefined ***)0x0) {
          pppuVar38 = local_4e0;
        }
        (*(code *)(*pppuVar38)[2])();
      }
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_258,
                 (ValueIterator *)&local_2a8,(ValueIterator *)&local_280,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2d8);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1c8,
                 (ValueIterator *)&local_280,(ValueIterator *)&local_280,
                 (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_2d8);
      while ((((local_258._0_8_ != local_1c8._0_8_ || (local_258._8_4_ != local_1c8._8_4_)) ||
              (local_258._24_4_ != local_1c8._24_4_)) || (local_258._28_4_ != local_1c8._28_4_))) {
        lVar45 = *(longlong *)
                  ((param_2->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)local_258._88_4_ >> 9) * 8);
        local_520 = *(undefined8 *)(lVar45 + (ulonglong)(local_258._88_4_ & 0x1ff) * 0xc);
        auVar36 = auVar51;
        if ((uint)local_520 != uVar44) {
          if ((uint)((ulonglong)local_520 >> 0x20) == uVar44) {
            auVar36 = (uchar  [8])&DAT_00000001;
          }
          else {
            auVar36 = (uchar  [8])&DAT_ffffffff;
            if (*(uint *)(lVar45 + 8 + (ulonglong)(local_258._88_4_ & 0x1ff) * 0xc) == uVar44) {
              auVar36 = (uchar  [8])&DAT_00000002;
            }
          }
        }
        pTVar32 = Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>::TUniqueMeshVertex<8>
                            (local_138,param_2,local_258._88_4_,auVar36._0_4_);
        TArray<UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
        ::AddUniqueImpl<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>_>
                  (&local_688,pTVar32);
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_258);
      }
      if (local_1c8._96_8_ != 0) {
        plVar39 = (longlong *)(local_1c8 + 0x70);
        if ((longlong *)local_1c8._136_8_ != (longlong *)0x0) {
          plVar39 = (longlong *)local_1c8._136_8_;
        }
        (**(code **)(*plVar39 + 0x10))();
      }
      if (local_258._96_8_ != 0) {
        plVar39 = (longlong *)(local_258 + 0x70);
        if ((longlong *)local_258._136_8_ != (longlong *)0x0) {
          plVar39 = (longlong *)local_258._136_8_;
        }
        (**(code **)(*plVar39 + 0x10))();
      }
      if (local_2d8._0_8_ != 0) {
        plVar39 = (longlong *)(local_2d8 + 0x10);
        if (local_2b0 != (longlong *)0x0) {
          plVar39 = local_2b0;
        }
        (**(code **)(*plVar39 + 0x10))();
      }
      if (local_688.ArrayNum == 0) {
        if (local_688.ArrayMax == 0) {
          local_688.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x430,&local_688.AllocatorInstance,&local_688.ArrayMax);
        }
        lVar45 = (longlong)local_688.ArrayNum;
        local_688.ArrayNum = local_688.ArrayNum + 1;
        *(undefined8 *)(local_688.AllocatorInstance.Data + lVar45 * 0x30 + 0x28) =
             0xffffffffffffffff;
        *(undefined8 *)(local_688.AllocatorInstance.Data + lVar45 * 0x30 + 0x20) =
             0xffffffffffffffff;
        *(undefined8 *)(local_688.AllocatorInstance.Data + lVar45 * 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(local_688.AllocatorInstance.Data + lVar45 * 0x30 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(local_688.AllocatorInstance.Data + lVar45 * 0x30 + 0x10) =
             0xffffffffffffffff;
        *(undefined8 *)(local_688.AllocatorInstance.Data + lVar45 * 0x30 + 0x18) =
             0xffffffffffffffff;
        TVar109.Pad = local_600.InlineData[2].Pad;
        TVar115.Pad = local_600.InlineData[3].Pad;
      }
      local_610[0] = '\0';
      local_610[1] = '\0';
      local_610[2] = '\0';
      local_610[3] = '\0';
      local_610[4] = '\0';
      local_610[5] = '\0';
      local_610[6] = '\0';
      local_610[7] = '\0';
      if (0 < local_688.ArrayNum) {
        uVar23 = CONCAT44(fStack_59c,local_5a0);
        local_648 = local_598;
        local_628 = 0;
        local_630 = (undefined1 *)0x0;
        auVar36 = auVar51;
        do {
          puVar54 = local_630;
          uVar44 = auVar36._0_4_;
          fVar53 = (float)(~uVar44 >> 0x1f);
          fVar47 = auVar40._0_4_;
          if ((int)uVar44 < local_688.ArrayNum) {
            fVar47 = fVar53;
          }
          local_678 = fVar53;
          if ((fVar47 == 0.0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          pFVar48 = (FScriptContainerElement *)(puVar54 + local_688.AllocatorInstance.Data);
          if (((local_668.Data <= pFVar48) &&
              (pFVar48 < local_668.Data + (longlong)local_660._4_4_ * 0x30)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          iVar28 = (uint)local_660;
          if ((uint)local_660 == local_660._4_4_) {
            iVar28 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x430,&local_668,(int *)((longlong)&local_660 + 4));
          }
          local_660 = CONCAT44(local_660._4_4_,iVar28 + 1);
          uVar21 = *(undefined8 *)(pFVar48 + 8);
          lVar45 = (longlong)iVar28;
          *(undefined8 *)(local_668.Data + lVar45 * 0x30) = *(undefined8 *)pFVar48;
          *(undefined8 *)(local_668.Data + lVar45 * 0x30 + 8) = uVar21;
          *(undefined1 (*) [16])(local_668.Data + lVar45 * 0x30 + 0x10) =
               *(undefined1 (*) [16])(pFVar48 + 0x10);
          uVar21 = *(undefined8 *)(pFVar48 + 0x28);
          fVar47 = (float)(local_650 + iVar28);
          fVar56 = (float)(~(uint)fVar47 >> 0x1f);
          *(undefined8 *)(local_668.Data + lVar45 * 0x30 + 0x20) = *(undefined8 *)(pFVar48 + 0x20);
          *(undefined8 *)(local_668.Data + lVar45 * 0x30 + 0x20 + 8) = uVar21;
          fVar29 = fVar55;
          if ((int)fVar47 < *(int *)&(param_4->Vertex).field_0x18) {
            fVar29 = fVar56;
          }
          local_674 = fVar47;
          if ((fVar29 == 0.0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          puVar54 = (undefined1 *)(longlong)(int)fVar47;
          lVar45 = *(longlong *)&(param_4->Vertex).field_0x10;
          *(undefined8 *)(lVar45 + (longlong)puVar54 * 0xc) = uVar23;
          *(float *)(lVar45 + 8 + (longlong)puVar54 * 0xc) = local_648;
          fVar29 = fVar55;
          if ((int)fVar47 < *(int *)&(param_4->BoneMap).field_0x18) {
            fVar29 = fVar56;
          }
          local_5a8 = puVar54;
          if ((fVar29 == 0.0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          *(float *)(*(longlong *)&(param_4->BoneMap).field_0x10 + (longlong)puVar54 * 4) =
               local_644;
          pFVar4 = (param_2->AttributeSet).Ptr;
          local_108 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
          local_100 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
          local_fc = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
          local_f4 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
          local_f0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          local_e8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
            iVar28 = (**(code **)(pFVar4->_padding_ + 0xb8))();
            if (3 < iVar28) {
              iVar28 = 3;
            }
            local_5b0 = (TTransform<double> *)(longlong)iVar28;
            param_2 = local_658;
            fVar47 = local_674;
            if (0 < (longlong)local_5b0) {
              puVar57 = &local_108;
              lVar45 = (longlong)local_630 + 0x20;
              auVar49 = auVar51;
              auVar36 = auVar51;
              do {
                fVar47 = fVar27;
                if ((int)uVar44 < local_688.ArrayNum) {
                  fVar47 = fVar53;
                }
                if ((fVar47 == 0.0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar8 = (code *)swi(3);
                  uVar26 = (*pcVar8)();
                  return (bool)uVar26;
                }
                iVar28 = *(int *)(local_688.AllocatorInstance.Data + lVar45);
                iVar52 = auVar49._0_4_;
                if (-1 < iVar28) {
                  local_550 = (local_658->AttributeSet).Ptr;
                  auVar49 = auVar51;
                  if ((iVar52 < (local_550->NormalLayers).Array.ArrayNum) && (-1 < iVar52)) {
                    if ((iVar52 < 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar8 = (code *)swi(3);
                      uVar26 = (*pcVar8)();
                      return (bool)uVar26;
                    }
                    auVar49 = *(uchar (*) [8])
                               ((local_550->NormalLayers).Array.AllocatorInstance.Data +
                               (longlong)auVar36 * 8);
                  }
                  pTVar5 = ((TUniquePtr<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TDefaultDelete<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_>_>
                             *)((longlong)auVar49 + 0x48))->Ptr;
                  uVar30 = iVar28 * 3;
                  local_4a8 = CONCAT44(*(undefined4 *)
                                        (*(longlong *)
                                          (&pTVar5->field_0x0 + (ulonglong)(uVar30 + 1 >> 9) * 8) +
                                        (ulonglong)(uVar30 + 1 & 0x1ff) * 4),
                                       *(undefined4 *)
                                        (*(longlong *)
                                          (&pTVar5->field_0x0 + (ulonglong)(uVar30 >> 9) * 8) +
                                        (ulonglong)(uVar30 & 0x1ff) * 4));
                  *puVar57 = local_4a8;
                  local_4a0 = *(undefined4 *)
                               (*(longlong *)(&pTVar5->field_0x0 + (ulonglong)(uVar30 + 2 >> 9) * 8)
                               + (ulonglong)(uVar30 + 2 & 0x1ff) * 4);
                  *(undefined4 *)(puVar57 + 1) = local_4a0;
                }
                auVar49._0_4_ = iVar52 + 1;
                auVar49[4] = '\0';
                auVar49[5] = '\0';
                auVar49[6] = '\0';
                auVar49[7] = '\0';
                auVar36 = (uchar  [8])((longlong)auVar36 + 1);
                lVar45 = lVar45 + 4;
                puVar57 = (undefined8 *)((longlong)puVar57 + 0xc);
                puVar54 = local_5a8;
                param_2 = local_658;
                fVar53 = local_678;
                fVar47 = local_674;
              } while ((longlong)auVar36 < (longlong)local_5b0);
            }
          }
          dVar116 = (local_640->Rotation).XY.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar119 = (local_640->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar9 = (local_640->Rotation).ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar10 = (local_640->Rotation).ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar107 = (undefined4)((ulonglong)dVar10 >> 0x20);
          fVar29 = fVar27;
          if ((int)fVar47 < *(int *)&(param_4->Normal).field_0x18) {
            fVar29 = fVar56;
          }
          auVar103._8_4_ = SUB84(dVar119,0);
          auVar103._0_8_ = dVar116;
          uVar108 = (undefined4)((ulonglong)dVar119 >> 0x20);
          auVar103._12_4_ = uVar108;
          auVar112._8_4_ = SUB84(dVar119,0);
          auVar112._0_8_ = dVar116;
          auVar112._12_4_ = uVar108;
          dVar75 = auVar103._8_8_;
          auVar135._8_4_ = SUB84(dVar10,0);
          auVar135._0_8_ = dVar9;
          auVar135._12_4_ = uVar107;
          local_3e8 = (double)local_100;
          dVar19 = (double)(float)local_108;
          dVar91 = (double)local_108._4_4_;
          auVar11._8_4_ = SUB84(dVar10,0);
          auVar11._0_8_ = dVar9;
          auVar11._12_4_ = uVar107;
          auVar122 = blendpd(auVar112,auVar11,2);
          uVar107 = SUB84(dVar91,0);
          uVar108 = (undefined4)((ulonglong)dVar91 >> 0x20);
          auVar123._8_4_ = uVar107;
          auVar123._0_8_ = dVar19;
          auVar123._12_4_ = uVar108;
          auVar79._8_4_ = uVar107;
          auVar79._0_8_ = dVar19;
          auVar79._12_4_ = uVar108;
          auVar63._8_4_ = SUB84(dVar9,0);
          auVar63._0_8_ = dVar75;
          auVar63._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = local_3e8;
          auVar77 = blendpd(auVar79,auVar16,2);
          auVar124._0_8_ = auVar123._8_8_ * dVar116 - dVar75 * dVar19;
          auVar124._8_8_ = local_3e8 * dVar119 - auVar63._8_8_ * dVar91;
          local_3f8._8_4_ = uVar107;
          local_3f8._0_8_ = dVar19;
          local_3f8._12_4_ = uVar108;
          auVar80._0_8_ = auVar77._0_8_ * dVar9 - local_3e8 * auVar122._0_8_;
          auVar80._8_8_ = auVar77._8_8_ * dVar10 - auVar122._8_8_ * 0.0;
          auVar77 = blendpd(auVar124,auVar80,2);
          dVar14 = auVar124._8_8_ + auVar124._8_8_;
          dVar15 = auVar80._0_8_ + auVar80._0_8_;
          uVar107 = SUB84(dVar15,0);
          uVar108 = (undefined4)((ulonglong)dVar15 >> 0x20);
          auVar125._0_8_ = auVar77._0_8_ + auVar77._0_8_;
          auVar125._8_8_ = auVar77._8_8_ + auVar77._8_8_;
          auVar93._8_4_ = uVar107;
          auVar93._0_8_ = dVar14;
          auVar93._12_4_ = uVar108;
          auVar64._8_4_ = uVar107;
          auVar64._0_8_ = dVar14;
          auVar64._12_4_ = uVar108;
          auVar81._8_4_ = uVar107;
          auVar81._0_8_ = dVar14;
          auVar81._12_4_ = uVar108;
          auVar77 = blendpd(auVar81,auVar125,2);
          auVar94._0_8_ = auVar93._8_8_ * dVar116 - dVar14 * dVar75;
          auVar94._8_8_ = auVar125._0_8_ * dVar119 - auVar64._8_8_ * dVar9;
          auVar65._8_4_ = SUB84(auVar125._8_8_,0);
          auVar65._0_8_ = auVar125._0_8_;
          auVar65._12_4_ = (int)((ulonglong)auVar125._8_8_ >> 0x20);
          auVar82._0_8_ = auVar77._0_8_ * dVar9 - auVar125._0_8_ * auVar122._0_8_;
          auVar82._8_8_ = auVar77._8_8_ * dVar10 - auVar65._8_8_ * auVar122._8_8_;
          auVar66._8_4_ = SUB84(auVar94._8_8_,0);
          auVar66._0_8_ = auVar94._0_8_;
          auVar66._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
          dVar9 = dVar14 * auVar135._8_8_ + dVar19 + auVar66._8_8_;
          dVar10 = dVar15 * dVar10 + dVar91 + auVar82._0_8_;
          auVar77 = blendpd(auVar94,auVar82,2);
          dVar116 = auVar125._0_8_ * auVar135._8_8_ + local_3e8 + auVar77._0_8_;
          local_3e0._8_4_ = SUB84(dVar10,0);
          local_3e0._0_8_ = dVar9;
          local_3e0._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_3d0 = dVar116;
          if ((fVar29 == 0.0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          lVar45 = *(longlong *)&(param_4->Normal).field_0x10;
          *(float *)(lVar45 + (longlong)puVar54 * 0xc) = (float)dVar9;
          *(float *)(lVar45 + 4 + (longlong)puVar54 * 0xc) = (float)dVar10;
          *(float *)(lVar45 + 8 + (longlong)puVar54 * 0xc) = (float)dVar116;
          dVar116 = (local_640->Rotation).XY.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar119 = (local_640->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar9 = (local_640->Rotation).ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar10 = (local_640->Rotation).ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar107 = (undefined4)((ulonglong)dVar10 >> 0x20);
          fVar29 = fVar55;
          if ((int)fVar47 < *(int *)&(param_4->TangentU).field_0x18) {
            fVar29 = fVar56;
          }
          auVar104._8_4_ = SUB84(dVar119,0);
          auVar104._0_8_ = dVar116;
          uVar108 = (undefined4)((ulonglong)dVar119 >> 0x20);
          auVar104._12_4_ = uVar108;
          auVar113._8_4_ = SUB84(dVar119,0);
          auVar113._0_8_ = dVar116;
          auVar113._12_4_ = uVar108;
          dVar75 = auVar104._8_8_;
          auVar136._8_4_ = SUB84(dVar10,0);
          auVar136._0_8_ = dVar9;
          auVar136._12_4_ = uVar107;
          local_3b8 = (double)local_f4;
          dVar19 = (double)(float)local_fc;
          dVar91 = (double)local_fc._4_4_;
          auVar12._8_4_ = SUB84(dVar10,0);
          auVar12._0_8_ = dVar9;
          auVar12._12_4_ = uVar107;
          auVar122 = blendpd(auVar113,auVar12,2);
          uVar107 = SUB84(dVar91,0);
          uVar108 = (undefined4)((ulonglong)dVar91 >> 0x20);
          auVar126._8_4_ = uVar107;
          auVar126._0_8_ = dVar19;
          auVar126._12_4_ = uVar108;
          auVar83._8_4_ = uVar107;
          auVar83._0_8_ = dVar19;
          auVar83._12_4_ = uVar108;
          auVar67._8_4_ = SUB84(dVar9,0);
          auVar67._0_8_ = dVar75;
          auVar67._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = local_3b8;
          auVar77 = blendpd(auVar83,auVar17,2);
          auVar127._0_8_ = auVar126._8_8_ * dVar116 - dVar75 * dVar19;
          auVar127._8_8_ = local_3b8 * dVar119 - auVar67._8_8_ * dVar91;
          local_3c8._8_4_ = uVar107;
          local_3c8._0_8_ = dVar19;
          local_3c8._12_4_ = uVar108;
          auVar84._0_8_ = auVar77._0_8_ * dVar9 - local_3b8 * auVar122._0_8_;
          auVar84._8_8_ = auVar77._8_8_ * dVar10 - auVar122._8_8_ * 0.0;
          auVar77 = blendpd(auVar127,auVar84,2);
          dVar14 = auVar127._8_8_ + auVar127._8_8_;
          dVar15 = auVar84._0_8_ + auVar84._0_8_;
          uVar107 = SUB84(dVar15,0);
          uVar108 = (undefined4)((ulonglong)dVar15 >> 0x20);
          auVar128._0_8_ = auVar77._0_8_ + auVar77._0_8_;
          auVar128._8_8_ = auVar77._8_8_ + auVar77._8_8_;
          auVar95._8_4_ = uVar107;
          auVar95._0_8_ = dVar14;
          auVar95._12_4_ = uVar108;
          auVar68._8_4_ = uVar107;
          auVar68._0_8_ = dVar14;
          auVar68._12_4_ = uVar108;
          auVar85._8_4_ = uVar107;
          auVar85._0_8_ = dVar14;
          auVar85._12_4_ = uVar108;
          auVar77 = blendpd(auVar85,auVar128,2);
          auVar96._0_8_ = auVar95._8_8_ * dVar116 - dVar14 * dVar75;
          auVar96._8_8_ = auVar128._0_8_ * dVar119 - auVar68._8_8_ * dVar9;
          auVar69._8_4_ = SUB84(auVar128._8_8_,0);
          auVar69._0_8_ = auVar128._0_8_;
          auVar69._12_4_ = (int)((ulonglong)auVar128._8_8_ >> 0x20);
          auVar86._0_8_ = auVar77._0_8_ * dVar9 - auVar128._0_8_ * auVar122._0_8_;
          auVar86._8_8_ = auVar77._8_8_ * dVar10 - auVar69._8_8_ * auVar122._8_8_;
          auVar70._8_4_ = SUB84(auVar96._8_8_,0);
          auVar70._0_8_ = auVar96._0_8_;
          auVar70._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
          dVar9 = dVar14 * auVar136._8_8_ + dVar19 + auVar70._8_8_;
          dVar10 = dVar15 * dVar10 + dVar91 + auVar86._0_8_;
          auVar77 = blendpd(auVar96,auVar86,2);
          dVar116 = auVar128._0_8_ * auVar136._8_8_ + local_3b8 + auVar77._0_8_;
          local_3b0._8_4_ = SUB84(dVar10,0);
          local_3b0._0_8_ = dVar9;
          local_3b0._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_3a0 = dVar116;
          if ((fVar29 == 0.0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          lVar45 = *(longlong *)&(param_4->TangentU).field_0x10;
          *(float *)(lVar45 + (longlong)puVar54 * 0xc) = (float)dVar9;
          *(float *)(lVar45 + 4 + (longlong)puVar54 * 0xc) = (float)dVar10;
          *(float *)(lVar45 + 8 + (longlong)puVar54 * 0xc) = (float)dVar116;
          dVar116 = (local_640->Rotation).XY.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar119 = (local_640->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar9 = (local_640->Rotation).ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar10 = (local_640->Rotation).ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar107 = (undefined4)((ulonglong)dVar10 >> 0x20);
          fVar29 = fVar55;
          if ((int)fVar47 < *(int *)&(param_4->TangentV).field_0x18) {
            fVar29 = fVar56;
          }
          auVar105._8_4_ = SUB84(dVar119,0);
          auVar105._0_8_ = dVar116;
          uVar108 = (undefined4)((ulonglong)dVar119 >> 0x20);
          auVar105._12_4_ = uVar108;
          auVar114._8_4_ = SUB84(dVar119,0);
          auVar114._0_8_ = dVar116;
          auVar114._12_4_ = uVar108;
          dVar75 = auVar105._8_8_;
          auVar137._8_4_ = SUB84(dVar10,0);
          auVar137._0_8_ = dVar9;
          auVar137._12_4_ = uVar107;
          local_388 = (double)local_e8;
          dVar19 = (double)(float)local_f0;
          dVar91 = (double)local_f0._4_4_;
          auVar13._8_4_ = SUB84(dVar10,0);
          auVar13._0_8_ = dVar9;
          auVar13._12_4_ = uVar107;
          auVar122 = blendpd(auVar114,auVar13,2);
          uVar107 = SUB84(dVar91,0);
          uVar108 = (undefined4)((ulonglong)dVar91 >> 0x20);
          auVar129._8_4_ = uVar107;
          auVar129._0_8_ = dVar19;
          auVar129._12_4_ = uVar108;
          auVar87._8_4_ = uVar107;
          auVar87._0_8_ = dVar19;
          auVar87._12_4_ = uVar108;
          auVar71._8_4_ = SUB84(dVar9,0);
          auVar71._0_8_ = dVar75;
          auVar71._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = local_388;
          auVar77 = blendpd(auVar87,auVar18,2);
          auVar130._0_8_ = auVar129._8_8_ * dVar116 - dVar75 * dVar19;
          auVar130._8_8_ = local_388 * dVar119 - auVar71._8_8_ * dVar91;
          local_398._8_4_ = uVar107;
          local_398._0_8_ = dVar19;
          local_398._12_4_ = uVar108;
          auVar88._0_8_ = auVar77._0_8_ * dVar9 - local_388 * auVar122._0_8_;
          auVar88._8_8_ = auVar77._8_8_ * dVar10 - auVar122._8_8_ * 0.0;
          auVar77 = blendpd(auVar130,auVar88,2);
          dVar14 = auVar130._8_8_ + auVar130._8_8_;
          dVar15 = auVar88._0_8_ + auVar88._0_8_;
          uVar107 = SUB84(dVar15,0);
          uVar108 = (undefined4)((ulonglong)dVar15 >> 0x20);
          auVar131._0_8_ = auVar77._0_8_ + auVar77._0_8_;
          auVar131._8_8_ = auVar77._8_8_ + auVar77._8_8_;
          auVar97._8_4_ = uVar107;
          auVar97._0_8_ = dVar14;
          auVar97._12_4_ = uVar108;
          auVar72._8_4_ = uVar107;
          auVar72._0_8_ = dVar14;
          auVar72._12_4_ = uVar108;
          auVar89._8_4_ = uVar107;
          auVar89._0_8_ = dVar14;
          auVar89._12_4_ = uVar108;
          auVar77 = blendpd(auVar89,auVar131,2);
          auVar98._0_8_ = auVar97._8_8_ * dVar116 - dVar14 * dVar75;
          auVar98._8_8_ = auVar131._0_8_ * dVar119 - auVar72._8_8_ * dVar9;
          auVar73._8_4_ = SUB84(auVar131._8_8_,0);
          auVar73._0_8_ = auVar131._0_8_;
          auVar73._12_4_ = (int)((ulonglong)auVar131._8_8_ >> 0x20);
          auVar90._0_8_ = auVar77._0_8_ * dVar9 - auVar131._0_8_ * auVar122._0_8_;
          auVar90._8_8_ = auVar77._8_8_ * dVar10 - auVar73._8_8_ * auVar122._8_8_;
          auVar74._8_4_ = SUB84(auVar98._8_8_,0);
          auVar74._0_8_ = auVar98._0_8_;
          auVar74._12_4_ = (int)((ulonglong)auVar98._8_8_ >> 0x20);
          dVar9 = dVar14 * auVar137._8_8_ + dVar19 + auVar74._8_8_;
          dVar10 = dVar15 * dVar10 + dVar91 + auVar90._0_8_;
          auVar77 = blendpd(auVar98,auVar90,2);
          dVar116 = auVar131._0_8_ * auVar137._8_8_ + local_388 + auVar77._0_8_;
          local_380._8_4_ = SUB84(dVar10,0);
          local_380._0_8_ = dVar9;
          local_380._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_370 = dVar116;
          if ((fVar29 == 0.0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          lVar45 = *(longlong *)&(param_4->TangentV).field_0x10;
          *(float *)(lVar45 + (longlong)puVar54 * 0xc) = (float)dVar9;
          *(float *)(lVar45 + 4 + (longlong)puVar54 * 0xc) = (float)dVar10;
          *(float *)(lVar45 + 8 + (longlong)puVar54 * 0xc) = (float)dVar116;
          pTVar6 = (((param_2->AttributeSet).Ptr)->ColorLayer).Ptr;
          if (pTVar6 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
            fVar29 = fVar27;
            if ((int)uVar44 < local_688.ArrayNum) {
              fVar29 = fVar53;
            }
            if ((fVar29 == 0.0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              uVar26 = (*pcVar8)();
              return (bool)uVar26;
            }
            uVar30 = *(uint *)(local_688.AllocatorInstance.Data + 0x2c + (longlong)local_630);
            if (-1 < (int)uVar30) {
              lVar45 = *(longlong *)&pTVar6->field_0x48;
              uVar106 = uVar30 * 4;
              local_588._s_0.X =
                   *(float *)(*(longlong *)(lVar45 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                             (ulonglong)(uVar106 & 0x1ff) * 4);
              local_588._s_0.Y =
                   *(float *)(*(longlong *)(lVar45 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                             (ulonglong)(uVar106 + 1 & 0x1ff) * 4);
              local_588._s_0.Z =
                   *(float *)(*(longlong *)(lVar45 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                             (ulonglong)(uVar106 + 2 & 0x1ff) * 4);
              local_588._s_0.W =
                   *(float *)(*(longlong *)(lVar45 + (ulonglong)((uVar30 & 0x3fffffff) >> 7) * 8) +
                             (ulonglong)(uVar106 + 3 & 0x1ff) * 4);
              pFVar33 = FLinearColor::FLinearColor(&local_368,(TVector4<float> *)&local_588._s_0);
              uVar21 = *(undefined8 *)&pFVar33->field0_0x0;
              uVar22 = *(undefined8 *)((longlong)&pFVar33->field0_0x0 + 8);
              fVar53 = fVar27;
              if ((int)fVar47 < *(int *)&(param_4->Color).field_0x18) {
                fVar53 = fVar56;
              }
              if ((fVar53 == 0.0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                uVar26 = (*pcVar8)();
                return (bool)uVar26;
              }
              puVar57 = (undefined8 *)
                        (*(longlong *)&(param_4->Color).field_0x10 + (longlong)puVar54 * 0x10);
              *puVar57 = uVar21;
              puVar57[1] = uVar22;
            }
          }
          auVar100 = auVar51;
          auVar36 = auVar51;
          if (0 < (longlong)local_600.InlineData[1].Pad) {
            do {
              local_638 = 0;
              pFVar4 = (local_658->AttributeSet).Ptr;
              uVar30 = auVar100._0_4_;
              if (((int)uVar30 < (pFVar4->UVLayers).Array.ArrayNum) && (-1 < (int)uVar30)) {
                if (((int)uVar30 < 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar8 = (code *)swi(3);
                  uVar26 = (*pcVar8)();
                  return (bool)uVar26;
                }
                lVar45 = *(longlong *)
                          ((pFVar4->UVLayers).Array.AllocatorInstance.Data + (longlong)auVar36 * 8);
                if (lVar45 != 0) {
                  fVar53 = fVar27;
                  if ((int)uVar44 < local_688.ArrayNum) {
                    fVar53 = local_678;
                  }
                  if ((fVar53 == 0.0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar8 = (code *)swi(3);
                    uVar26 = (*pcVar8)();
                    return (bool)uVar26;
                  }
                  uVar106 = *(uint *)(local_688.AllocatorInstance.Data +
                                     (longlong)((longlong)auVar100 + local_628) * 4);
                  if (-1 < (int)uVar106) {
                    lVar45 = *(longlong *)(lVar45 + 0x48);
                    local_638 = CONCAT44(*(undefined4 *)
                                          (*(longlong *)
                                            (lVar45 + (ulonglong)((uVar106 & 0x7fffffff) >> 8) * 8)
                                          + (ulonglong)(uVar106 * 2 + 1 & 0x1ff) * 4),
                                         *(undefined4 *)
                                          (*(longlong *)
                                            (lVar45 + (ulonglong)((uVar106 & 0x7fffffff) >> 8) * 8)
                                          + (ulonglong)(uVar106 * 2 & 0x1ff) * 4));
                  }
                }
              }
              fVar53 = fVar27;
              if ((int)uVar30 < local_2e8) {
                fVar53 = (float)(~uVar30 >> 0x1f);
              }
              if ((fVar53 == 0.0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                uVar26 = (*pcVar8)();
                return (bool)uVar26;
              }
              lVar45 = *(longlong *)local_328.InlineData[(longlong)auVar36].Pad;
              fVar53 = fVar27;
              if ((int)local_674 < *(int *)(lVar45 + 0x18)) {
                fVar53 = fVar56;
              }
              if ((fVar53 == 0.0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                uVar26 = (*pcVar8)();
                return (bool)uVar26;
              }
              auVar100._0_4_ = uVar30 + 1;
              auVar100[4] = '\0';
              auVar100[5] = '\0';
              auVar100[6] = '\0';
              auVar100[7] = '\0';
              auVar36 = (uchar  [8])((longlong)auVar36 + 1);
              *(longlong *)(*(longlong *)(lVar45 + 0x10) + (longlong)puVar54 * 8) = local_638;
            } while ((longlong)auVar36 < (longlong)local_600.InlineData[1].Pad);
          }
          auVar36._0_4_ = uVar44 + 1;
          auVar36[4] = '\0';
          auVar36[5] = '\0';
          auVar36[6] = '\0';
          auVar36[7] = '\0';
          local_610 = (uchar  [8])((longlong)local_610 + 1);
          local_630 = local_630 + 0x30;
          local_628 = local_628 + 0xc;
          param_2 = local_658;
          TVar109.Pad = local_600.InlineData[2].Pad;
          TVar115.Pad = local_600.InlineData[3].Pad;
        } while ((int)auVar36._0_4_ < local_688.ArrayNum);
      }
      FRefCountVector::BaseIterator::goto_next(&local_540);
      unaff_XMM6_Qb = TVar115.Pad;
    } while (local_540.Index != local_4c8._8_4_);
  }
  if (((uint)local_660 != local_670) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("PerIdxElements.Num() == VertexCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\GeometryCollectionToDynamicMesh.cpp"
                          ,0x285,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  local_600.InlineData[1].Pad[0] = '\0';
  local_600.InlineData[1].Pad[1] = '\0';
  local_600.InlineData[1].Pad[2] = '\0';
  local_600.InlineData[1].Pad[3] = '\0';
  local_600.InlineData[1].Pad[4] = '\0';
  local_600.InlineData[1].Pad[5] = '\0';
  local_600.InlineData[1].Pad[6] = '\0';
  local_600.InlineData[1].Pad[7] = '\0';
  local_610[0] = '\0';
  local_610[1] = '\0';
  local_610[2] = '\0';
  local_610[3] = '\0';
  local_610[4] = '\0';
  local_610[5] = '\0';
  local_610[6] = '\0';
  local_610[7] = '\0';
  auVar50 = auVar51;
  auVar36 = auVar51;
  auVar49 = auVar51;
  auVar100 = local_610;
  TVar24.Pad = local_600.InlineData[1].Pad;
  if ((param_2->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    while( true ) {
      auVar100 = (uchar  [8])(param_2->AttributeSet).Ptr;
      auVar40 = auVar51;
      if (auVar100 != (uchar  [8])0x0) {
        auVar40 = auVar100;
      }
      iVar28 = (**(code **)(*(longlong *)auVar40 + 200))();
      iVar52 = auVar50._0_4_;
      auVar100 = auVar36;
      TVar24.Pad = auVar49;
      if (iVar28 <= iVar52) break;
      auVar100 = (uchar  [8])
                 FDynamicMeshAttributeSet::GetPolygroupLayer((param_2->AttributeSet).Ptr,iVar52);
      ::FName::FName(&local_558,"GeometryCollectionVisibleFaces");
      if (*(FName *)((longlong)auVar100 + 8) == local_558) {
        auVar49 = auVar100;
      }
      ::FName::FName(&local_548,"GeometryCollectionInternalFaces");
      if (*(FName *)((longlong)auVar100 + 8) == local_548) {
        auVar36 = auVar100;
      }
      auVar50._0_4_ = iVar52 + 1;
      auVar50[4] = '\0';
      auVar50[5] = '\0';
      auVar50[6] = '\0';
      auVar50[7] = '\0';
    }
  }
  local_600.InlineData[1].Pad = TVar24.Pad;
  local_610 = auVar100;
  pFVar1 = &param_2->TriangleRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_530,pFVar1,0,
             (pFVar1->RefCounts).CurBlock * 0x200 +
             (param_2->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar28 = (pFVar1->RefCounts).CurBlock * 0x200 +
           (param_2->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_4b8,pFVar1,iVar28,iVar28);
  local_628._0_4_ = local_530.Index;
  local_628._4_4_ = local_530.LastIndex;
  auVar40._0_4_ = fVar27;
  if (local_530.Index != local_4b8._8_4_) {
    local_5b0 = (TTransform<double> *)(longlong)(int)local_64c;
    local_5a8 = &(param_4->Visible).field_0x10;
    local_630 = &(param_4->Internal).field_0x10;
    pTVar42 = local_5b0;
    auVar40 = auVar51;
    do {
      puVar54 = local_5a8;
      pFVar4 = (param_2->AttributeSet).Ptr;
      auVar40._0_4_ = (float)(auVar40._0_4_ + 1);
      pTVar34 = (TTransform<double> *)((longlong)(local_5b0->Rotation).XY.m128d_f64 + 1);
      fVar47 = SUB84(pTVar42,0);
      local_64c = (int)fVar47 + 1;
      cVar59 = param_5->bDefaultFaceInternal;
      cVar58 = param_5->bDefaultFaceVisible;
      uVar44 = local_530.Index;
      fVar53 = fVar27;
      if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
        if ((local_600.InlineData[1].Pad != (uchar  [8])0x0) &&
           (iVar28 = *(int *)(*(longlong *)
                               ((((TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
                                   *)((longlong)local_600.InlineData[1].Pad + 0x20))->Array).
                                AllocatorInstance.Data + ((local_530._8_8_ & 0xffffffff) >> 9) * 8)
                             + (ulonglong)(uVar44 & 0x1ff) * 4), -1 < iVar28 + -1)) {
          cVar58 = iVar28 != 1;
        }
        if ((local_610 != (uchar  [8])0x0) &&
           (iVar28 = *(int *)(*(longlong *)
                               ((((TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
                                   *)((longlong)local_610 + 0x20))->Array).AllocatorInstance.Data +
                               ((local_530._8_8_ & 0xffffffff) >> 9) * 8) +
                             (ulonglong)(uVar44 & 0x1ff) * 4), -1 < iVar28 + -1)) {
          cVar59 = iVar28 != 1;
        }
        pTVar5 = (pFVar4->MaterialIDAttrib).Ptr;
        if (pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          fVar53 = *(float *)(*(longlong *)
                               (*(longlong *)&pTVar5->field_0x20 +
                               ((local_530._8_8_ & 0xffffffff) >> 9) * 8) +
                             (ulonglong)(uVar44 & 0x1ff) * 4);
        }
      }
      local_678 = fVar47;
      local_648 = fVar47;
      local_644 = fVar47;
      local_640 = local_5b0;
      local_628 = local_530._8_8_;
      if ((((int)fVar47 < 0) || (*(int *)(local_5a8 + 0x18) <= (int)fVar47)) &&
         (local_5b0 = pTVar34,
         bVar25 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), pTVar34 = local_5b0, bVar25)) {
        pcVar8 = (code *)swi(3);
        uVar26 = (*pcVar8)();
        return (bool)uVar26;
      }
      local_5b0 = pTVar34;
      puVar41 = local_630;
      puVar7 = *(undefined1 **)(puVar54 + 0x10);
      if (puVar7 != (undefined1 *)0x0) {
        puVar54 = puVar7;
      }
      fVar29 = fVar47;
      if ((int)fVar47 < 0) {
        fVar29 = (float)((int)fVar47 + 0x1f);
      }
      lVar45 = (longlong)((int)fVar29 >> 5);
      uVar44 = 1 << ((byte)pTVar42 & 0x1f);
      if (cVar58 == '\0') {
        uVar30 = ~uVar44 & *(uint *)(puVar54 + lVar45 * 4);
      }
      else {
        uVar30 = uVar44 | *(uint *)(puVar54 + lVar45 * 4);
      }
      *(uint *)(puVar54 + lVar45 * 4) = uVar30;
      if ((((int)fVar47 < 0) || (*(int *)(local_630 + 0x18) <= (int)fVar47)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        uVar26 = (*pcVar8)();
        return (bool)uVar26;
      }
      puVar54 = *(undefined1 **)(puVar41 + 0x10);
      if (puVar54 != (undefined1 *)0x0) {
        puVar41 = puVar54;
      }
      if (cVar59 == '\0') {
        uVar44 = ~uVar44 & *(uint *)(puVar41 + lVar45 * 4);
      }
      else {
        uVar44 = uVar44 | *(uint *)(puVar41 + lVar45 * 4);
      }
      *(uint *)(puVar41 + lVar45 * 4) = uVar44;
      local_674 = (float)(~(uint)fVar47 >> 0x1f);
      fVar47 = fVar55;
      if ((int)local_644 < *(int *)&(param_4->MaterialID).field_0x18) {
        fVar47 = local_674;
      }
      if ((fVar47 == 0.0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar8 = (code *)swi(3);
        uVar26 = (*pcVar8)();
        return (bool)uVar26;
      }
      *(float *)(*(longlong *)&(param_4->MaterialID).field_0x10 + (longlong)local_640 * 4) = fVar53;
      uVar43 = (ulonglong)((uint)local_628 & 0x1ff);
      local_638 = 0;
      lVar45 = *(longlong *)
                ((local_658->Triangles).Blocks.AllocatorInstance.Data +
                ((local_628 & 0xffffffff) >> 9) * 8);
      local_578 = *(undefined8 *)(lVar45 + uVar43 * 0xc);
      local_570 = *(undefined4 *)(lVar45 + 8 + uVar43 * 0xc);
      local_670 = 0;
      auVar35 = auVar51;
      do {
        lVar45 = local_638;
        Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>::TUniqueMeshVertex<8>
                  (&local_358,local_658,(int)local_628,auVar35._0_4_);
        uVar44 = *(uint *)((longlong)&local_578 + lVar45);
        uVar43 = (ulonglong)local_620.ArrayNum;
        fVar53 = fVar55;
        if ((int)uVar44 < local_620.ArrayNum) {
          fVar53 = (float)(~uVar44 >> 0x1f);
        }
        if (fVar53 == 0.0) {
          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar25) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          uVar43 = local_620._8_8_ & 0xffffffff;
        }
        uVar30 = *(uint *)(local_620.AllocatorInstance.Data + (longlong)(int)uVar44 * 4);
        lVar45 = (longlong)(int)uVar30;
        uVar44 = uVar44 + 1;
        if ((int)uVar44 < (int)uVar43) {
          lVar37 = (longlong)(int)uVar44 << 2;
          do {
            fVar53 = fVar55;
            if ((int)uVar44 < (int)uVar43) {
              fVar53 = (float)(~uVar44 >> 0x1f);
            }
            if (fVar53 == 0.0) {
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar25) {
                pcVar8 = (code *)swi(3);
                uVar26 = (*pcVar8)();
                return (bool)uVar26;
              }
              uVar43 = local_620._8_8_ & 0xffffffff;
            }
            iVar28 = (int)uVar43;
            if (*(int *)(local_620.AllocatorInstance.Data + lVar37) != -1) break;
            uVar44 = uVar44 + 1;
            lVar37 = lVar37 + 4;
          } while ((int)uVar44 < iVar28);
          if (iVar28 <= (int)uVar44) goto LAB_14ca3e487;
          fVar53 = fVar27;
          if ((int)uVar44 < iVar28) {
            fVar53 = (float)(~uVar44 >> 0x1f);
          }
          if ((fVar53 == 0.0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            uVar26 = (*pcVar8)();
            return (bool)uVar26;
          }
          iVar28 = *(int *)(local_620.AllocatorInstance.Data + (longlong)(int)uVar44 * 4);
        }
        else {
LAB_14ca3e487:
          iVar28 = (uint)local_660;
        }
        if (lVar45 < iVar28) {
          lVar37 = lVar45 * 0x30;
          uVar44 = uVar30;
          do {
            fVar53 = fVar27;
            if ((int)uVar44 < (int)(uint)local_660) {
              fVar53 = (float)(~uVar44 >> 0x1f);
            }
            if ((fVar53 == 0.0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              uVar26 = (*pcVar8)();
              return (bool)uVar26;
            }
            if ((*(int *)(local_668.Data + lVar37 + 0x28) == local_330 &&
                (*(int *)(local_668.Data + lVar37 + 0x2c) == local_32c &&
                *(int *)(local_668.Data + lVar37 + 0x24) == local_334)) &&
                (*(int *)(local_668.Data + lVar37 + 0x20) == local_338 &&
                ((*(int *)(local_668.Data + lVar37 + 0x18) == local_340 &&
                 ((*(int *)(local_668.Data + lVar37 + 0x10) == local_348 &&
                  ((*(int *)(local_668.Data + lVar37 + 8) == local_350 &&
                   (*(int *)(local_668.Data + lVar37 + 4) == local_354 &&
                   *(int *)(local_668.Data + lVar37) == local_358)) &&
                  *(int *)(local_668.Data + lVar37 + 0xc) == local_34c)) &&
                 *(int *)(local_668.Data + lVar37 + 0x14) == local_344)) &&
                *(int *)(local_668.Data + lVar37 + 0x1c) == local_33c))) {
              if (-1 < (int)uVar44) {
                iVar28 = local_650 + uVar44;
                goto LAB_14ca3e618;
              }
              break;
            }
            uVar44 = uVar44 + 1;
            lVar45 = lVar45 + 1;
            lVar37 = lVar37 + 0x30;
          } while (lVar45 < iVar28);
        }
        bVar25 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5775120434743739092>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\GeometryCollectionToDynamicMesh.cpp"
                            ,0x2d4,"FoundIdx > -1");
        if (bVar25) {
          pcVar8 = (code *)swi(3);
          uVar26 = (*pcVar8)();
          return (bool)uVar26;
        }
        iVar28 = local_650 + uVar30;
LAB_14ca3e618:
        *(int *)((longlong)&local_568 + local_638) = iVar28;
        uVar107 = local_560;
        uVar23 = local_568;
        local_638 = local_638 + 4;
        auVar35._0_4_ = local_670 + 1;
        auVar35[4] = '\0';
        auVar35[5] = '\0';
        auVar35[6] = '\0';
        auVar35[7] = '\0';
        local_670 = auVar35._0_4_;
      } while ((int)auVar35._0_4_ < 3);
      fVar53 = fVar27;
      if ((int)local_648 < *(int *)&(param_4->Indices).field_0x18) {
        fVar53 = local_674;
      }
      if ((fVar53 == 0.0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar8 = (code *)swi(3);
        uVar26 = (*pcVar8)();
        return (bool)uVar26;
      }
      lVar45 = *(longlong *)&(param_4->Indices).field_0x10;
      *(undefined8 *)(lVar45 + (longlong)local_640 * 0xc) = uVar23;
      *(undefined4 *)(lVar45 + 8 + (longlong)local_640 * 0xc) = uVar107;
      FRefCountVector::BaseIterator::goto_next(&local_530);
      auVar40[4] = '\0';
      auVar40[5] = '\0';
      auVar40[6] = '\0';
      auVar40[7] = '\0';
      pTVar42 = (TTransform<double> *)(ulonglong)local_64c;
      local_628._0_4_ = local_530.Index;
      local_628._4_4_ = local_530.LastIndex;
      param_2 = local_658;
      TVar109.Pad = local_600.InlineData[2].Pad;
      TVar115.Pad = local_600.InlineData[3].Pad;
    } while (local_530.Index != local_4b8._8_4_);
  }
  if ((auVar40._0_4_ != local_5b4) &&
     (bVar25 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5775120434743739103>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\GeometryCollectionToDynamicMesh.cpp"
                          ,0x2df,"TriIdxOffset == TriangleCount"), bVar25)) {
    pcVar8 = (code *)swi(3);
    uVar26 = (*pcVar8)();
    return (bool)uVar26;
  }
  iVar28 = (**(code **)(*(longlong *)&param_4->BoundingBox + 0x60))();
  if (iVar28 != 0) {
    lVar45 = (longlong)local_608;
    if (local_608 < *(int *)&(param_4->BoundingBox).field_0x18) {
      fVar27 = local_604;
    }
    if ((fVar27 == 0.0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar8 = (code *)swi(3);
      uVar26 = (*pcVar8)();
      return (bool)uVar26;
    }
    lVar37 = *(longlong *)&(param_4->BoundingBox).field_0x10;
    lVar45 = lVar45 * 0x38;
    *(uchar (*) [8])(lVar45 + lVar37) = TVar109.Pad;
    ((uchar (*) [8])(lVar45 + lVar37))[1] = TVar115.Pad;
    pauVar3 = (uchar (*) [8])(lVar45 + 0x10 + lVar37);
    *pauVar3 = local_600.InlineData[4].Pad;
    pauVar3[1] = local_600.InlineData[5].Pad;
    pauVar3 = (uchar (*) [8])(lVar45 + 0x20 + lVar37);
    *pauVar3 = local_600.InlineData[6].Pad;
    pauVar3[1] = local_600.InlineData[7].Pad;
    *(ulonglong *)(lVar45 + 0x30 + lVar37) = CONCAT71(uStack_5bf,local_5c0);
  }
  if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.AllocatorInstance.Data);
  }
  if (local_668.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data);
  }
  if (local_620.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.AllocatorInstance.Data);
  }
  return true;
}

// UpdateGeometryCollection @ 14ca3e850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FGeometryCollectionToDynamicMeshes::UpdateGeometryCollection
          (FGeometryCollectionToDynamicMeshes *this,FGeometryCollection *param_1,
          FToCollectionOptions *param_2)

{
  undefined4 uVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  bool local_res20;
  uint local_94;
  int local_90;
  longlong local_88;
  void **local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  void *local_58;
  undefined8 local_50;
  
  local_res20 = true;
  iVar8 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FGeometryCollection::GeometryGroup);
  uVar12 = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_68,iVar8,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_78,iVar8,Default);
  iVar8 = (**(code **)(*(longlong *)&param_1->FaceCount + 0x60))(&param_1->FaceCount);
  uVar14 = uVar12;
  if (0 < iVar8) {
    do {
      uVar10 = (uint)uVar12;
      uVar15 = ~uVar10 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar10 < *(int *)&(param_1->FaceCount).field_0x18) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(uVar14 + *(longlong *)&(param_1->FaceCount).field_0x10);
      uVar11 = 0;
      if ((int)uVar10 < local_68.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(undefined4 *)(local_68.AllocatorInstance.Data + uVar14) = uVar1;
      uVar11 = 0;
      if ((int)uVar10 < *(int *)&(param_1->VertexCount).field_0x18) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar1 = *(undefined4 *)(uVar14 + *(longlong *)&(param_1->VertexCount).field_0x10);
      uVar11 = 0;
      if ((int)uVar10 < local_78.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      *(undefined4 *)(local_78.AllocatorInstance.Data + uVar14) = uVar1;
      iVar8 = (**(code **)(*(longlong *)&param_1->FaceCount + 0x60))(&param_1->FaceCount);
      uVar14 = uVar14 + 4;
    } while ((int)(uVar10 + 1) < iVar8);
  }
  iVar8 = (this->Meshes).ArrayNum;
  local_80 = &local_58;
  bVar4 = false;
  local_58 = (void *)0x0;
  bVar7 = false;
  local_50 = 0;
  local_90 = 0;
  local_94 = 0;
  if (0 < iVar8) {
    local_88 = 0;
    do {
      uVar11 = 0;
      if ((int)local_94 < iVar8) {
        uVar11 = ~local_94 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar16 = (this->Meshes).AllocatorInstance.Data + local_88;
      if (*(longlong *)(pFVar16 + 8) != 0) {
        iVar8 = *(int *)pFVar16;
        if ((iVar8 < 0) || (*(int *)&(param_1->TransformToGeometryIndex).field_0x18 <= iVar8)) {
          local_90 = local_90 + 1;
        }
        else {
          if ((iVar8 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar11 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 +
                            (longlong)iVar8 * 4);
          lVar13 = (longlong)(int)uVar11;
          uVar15 = ~uVar11 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar11 < local_68.ArrayNum) {
            uVar10 = uVar15;
          }
          if (uVar10 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          iVar8 = *(int *)(local_68.AllocatorInstance.Data + lVar13 * 4);
          uVar1 = *(undefined4 *)(*(longlong *)(pFVar16 + 8) + 0x170);
          uVar10 = 0;
          if ((int)uVar11 < local_68.ArrayNum) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          *(undefined4 *)(local_68.AllocatorInstance.Data + lVar13 * 4) = uVar1;
          if (bVar7) {
LAB_14ca3ec6c:
            bVar7 = true;
          }
          else {
            uVar10 = 0;
            if ((int)uVar11 < local_68.ArrayNum) {
              uVar10 = uVar15;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (*(int *)(local_68.AllocatorInstance.Data + lVar13 * 4) != iVar8) goto LAB_14ca3ec6c;
            bVar7 = false;
          }
          uVar10 = 0;
          if ((int)uVar11 < local_78.ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar8 = *(int *)(local_78.AllocatorInstance.Data + lVar13 * 4);
          iVar9 = `UE::Geometry::FGeometryCollectionToDynamicMeshes::UpdateGeometryCollection'::__l2
                  ::<lambda_1>::operator()(&local_80,*(FDynamicMesh3 **)(pFVar16 + 8));
          uVar10 = 0;
          if ((int)uVar11 < local_78.ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          *(int *)(local_78.AllocatorInstance.Data + lVar13 * 4) = iVar9;
          iVar9 = local_78.ArrayNum;
          if (bVar4) {
LAB_14ca3ed84:
            bVar4 = true;
          }
          else {
            uVar10 = 0;
            if ((int)uVar11 < local_78.ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              iVar9 = local_78.ArrayNum;
            }
            if (*(int *)(local_78.AllocatorInstance.Data + lVar13 * 4) !=
                *(int *)(*(longlong *)(pFVar16 + 8) + 0x50)) goto LAB_14ca3ed84;
            bVar4 = false;
          }
          if (!bVar7) {
            uVar10 = 0;
            if ((int)uVar11 < iVar9) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (*(int *)(local_78.AllocatorInstance.Data + lVar13 * 4) == iVar8) {
              bVar7 = false;
              goto LAB_14ca3edfe;
            }
          }
          bVar7 = true;
        }
      }
LAB_14ca3edfe:
      local_94 = local_94 + 1;
      local_88 = local_88 + 0x70;
      iVar8 = (this->Meshes).ArrayNum;
    } while ((int)local_94 < iVar8);
    if (bVar7) {
      GeometryCollectionAlgo::ResizeGeometries(param_1,&local_68,&local_78,false);
    }
  }
  iVar8 = (this->Meshes).ArrayNum;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar8) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar16 = (this->Meshes).AllocatorInstance.Data;
      pFVar2 = *(FDynamicMesh3 **)(pFVar16 + lVar13 + 8);
      if (pFVar2 != (FDynamicMesh3 *)0x0) {
        iVar8 = *(int *)(pFVar16 + lVar13);
        if ((-1 < iVar8) && (iVar8 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18)) {
          if ((iVar8 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = UpdateCollection((TTransform<double> *)(pFVar16 + lVar13 + 0x10),pFVar2,
                                   *(int *)(*(longlong *)
                                             &(param_1->TransformToGeometryIndex).field_0x10 +
                                           (longlong)iVar8 * 4),param_1,param_2);
          local_res20 = (bool)(local_res20 & bVar4);
        }
      }
      iVar8 = (this->Meshes).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x70;
    } while ((int)uVar11 < iVar8);
  }
  if ((0 < local_90) && (uVar11 = 0, 0 < iVar8)) {
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar8) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar16 = (this->Meshes).AllocatorInstance.Data;
      if ((*(FDynamicMesh3 **)(pFVar16 + lVar13 + 8) != (FDynamicMesh3 *)0x0) &&
         ((*(int *)(pFVar16 + lVar13) < 0 ||
          (*(int *)&(param_1->TransformToGeometryIndex).field_0x18 <= *(int *)(pFVar16 + lVar13)))))
      {
        iVar8 = AppendMeshToCollection
                          (param_1,*(FDynamicMesh3 **)(pFVar16 + lVar13 + 8),
                           (TTransform<double> *)(pFVar16 + lVar13 + 0x10),param_2);
        local_res20 = (bool)(local_res20 & iVar8 != -1);
      }
      iVar8 = (this->Meshes).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x70;
    } while ((int)uVar11 < iVar8);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return local_res20;
}

// VisibleFacePolyGroupName @ 14ca3f060

FName __cdecl UE::Geometry::FGeometryCollectionToDynamicMeshes::VisibleFacePolyGroupName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"GeometryCollectionVisibleFaces");
  return in_RCX;
}

