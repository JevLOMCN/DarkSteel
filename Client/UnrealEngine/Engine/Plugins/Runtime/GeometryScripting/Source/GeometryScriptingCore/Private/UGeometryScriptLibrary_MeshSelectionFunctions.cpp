// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 86

// StaticClass @ 14ce17520

UClass * __cdecl UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSelectionFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSelectionFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshSelectionFunctions @ 14ce26b80

UGeometryScriptLibrary_MeshSelectionFunctions * __thiscall
UGeometryScriptLibrary_MeshSelectionFunctions::UGeometryScriptLibrary_MeshSelectionFunctions
          (UGeometryScriptLibrary_MeshSelectionFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshSelectionFunctions @ 14ce26bb0

UGeometryScriptLibrary_MeshSelectionFunctions * __thiscall
UGeometryScriptLibrary_MeshSelectionFunctions::UGeometryScriptLibrary_MeshSelectionFunctions
          (UGeometryScriptLibrary_MeshSelectionFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshSelectionFunctions @ 14ce27410

void __thiscall
UGeometryScriptLibrary_MeshSelectionFunctions::~UGeometryScriptLibrary_MeshSelectionFunctions
          (UGeometryScriptLibrary_MeshSelectionFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce275c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l88::<lambda_11>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  ulonglong local_190;
  int local_188 [2];
  longlong *local_180;
  int iStack_178;
  undefined4 uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  int local_160;
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  code *local_118;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_110;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_108;
  undefined8 local_100;
  FDynamicMesh3 *local_f8;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar14 = 0;
  local_98._44_4_ = 0x80;
  local_108 = &local_98;
  local_98._0_8_ = 0;
  local_100 = *(undefined8 *)((longlong)this + 8);
  local_110 = &local_108;
  local_98._8_8_ = 0;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l88::<lambda_11>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_f8 = param_1;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_118,false);
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_190 = 1;
  uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar12 = uVar14;
  if (((uVar13 != 0) &&
      (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar2 - 1U))) && (uVar12 = 1, 1 < (int)uVar13)) {
    do {
      lVar1 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
      lVar7 = *(longlong *)(pFVar2 + (uVar12 >> 9) * 8);
      if ((*(short *)(lVar1 + lVar7) != 0) && (*(short *)(lVar1 + lVar7) != -1)) break;
      uVar10 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar13);
  }
  lVar7 = local_98._0_8_;
  puVar17 = local_58;
  local_e8._8_4_ = 0;
  if ((uint)uVar12 != uVar13) {
LAB_14ce27720:
    uVar10 = (uint)uVar12;
    if ((param_1->TriangleGroups).bIsSet == false) {
      uVar14 = 0xffffffff;
    }
    else {
      if ((-1 < (int)uVar10) &&
         ((int)uVar10 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        lVar1 = (uVar12 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar1) + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar14 = (ulonglong)
                   *(uint *)(*(longlong *)
                              ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                              lVar1) + (ulonglong)(uVar10 & 0x1ff) * 4);
          goto LAB_14ce2778d;
        }
      }
      uVar14 = 0;
    }
LAB_14ce2778d:
    plVar3 = *(longlong **)((longlong)this + 8);
    local_188[0] = (int)uVar14;
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar8 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar3[8];
      }
      iVar11 = *(int *)((longlong)plVar8 + ((int)plVar3[9] - 1 & uVar14) * 4);
      if (iVar11 != -1) {
        do {
          if (*(int *)(*plVar3 + (longlong)iVar11 * 0xc) == local_188[0]) {
            if (local_98._8_4_ == local_98._52_4_) goto LAB_14ce27826;
            puVar9 = local_60;
            if (puVar17 != (undefined1 *)0x0) {
              puVar9 = puVar17;
            }
            iVar11 = *(int *)(puVar9 + (local_50 - 1 & uVar12) * 4);
            goto joined_r0x00014ce2780a;
          }
          iVar11 = *(int *)(*plVar3 + 4 + (longlong)iVar11 * 0xc);
        } while (iVar11 != -1);
      }
    }
    goto LAB_14ce27844;
  }
LAB_14ce278af:
  iStack_178 = 0;
  local_160 = 0;
  uVar13 = (uint)uVar14;
  uStack_164 = 0;
  if (uVar13 != 0) {
    puVar15 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar15 = local_c8;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar7 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      uStack_164 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_178)
      goto LAB_14ce27924;
      uVar10 = puVar15[lVar7 + 1];
    }
    local_190 = (ulonglong)(-uVar10 & uVar10);
    uVar12 = local_190 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_14c = (int)lVar7;
    uStack_164 = local_160 + -1 + local_14c;
    if ((int)uVar13 < (int)uStack_164) {
      uStack_164 = uVar13;
    }
  }
LAB_14ce27924:
  iStack_158 = local_e8._8_4_ - local_b4;
  local_180 = (longlong *)local_e8;
  uStack_174 = (undefined4)local_190;
  local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uStack_168 = 0xffffffff;
  TStack_140.CurrentBitIndex = uStack_164;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  uVar10 = uVar13 & 0xffffffe0;
  TStack_140._padding_ = CONCAT44(uStack_174,iStack_178);
  iVar11 = (int)uVar13 >> 5;
  TStack_140._28_4_ = uStack_164;
  TStack_140.BaseBitIndex = local_160;
  uStack_120 = CONCAT44(uStack_154,iStack_158);
  uVar16 = uVar13;
  uStack_15c = uStack_164;
  local_148 = local_180;
  TStack_140.Array = local_170;
  if (((int)uVar13 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), uVar16 = local_c0, bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar13 != uVar16) {
    puVar15 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar15 = local_c8;
    }
    uVar13 = -1 << ((byte)uVar14 & 0x1f) & puVar15[iVar11];
    while (uVar13 == 0) {
      lVar7 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) {
        uVar14 = (ulonglong)uVar16;
        goto LAB_14ce27a30;
      }
      uVar13 = puVar15[lVar7 + 1];
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = (int)lVar7 + -1 + uVar10;
    uVar14 = (ulonglong)uVar10;
    if ((int)uVar16 < (int)uVar10) {
      uVar14 = (ulonglong)uVar16;
    }
  }
LAB_14ce27a30:
  while( true ) {
    plVar3 = local_148;
    if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (((TStack_140.CurrentBitIndex == (int)uVar14) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8);
    uVar13 = *(uint *)(*plVar3 + (longlong)TStack_140.CurrentBitIndex * 0xc);
    local_190 = CONCAT44(local_190._4_4_,uVar13);
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (this_00,uVar13,(int *)&local_190);
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
joined_r0x00014ce2780a:
  if (iVar11 == -1) goto LAB_14ce27826;
  if (*(uint *)(lVar7 + (longlong)iVar11 * 0xc) == uVar10) goto LAB_14ce27844;
  iVar11 = *(int *)(lVar7 + 4 + (longlong)iVar11 * 0xc);
  goto joined_r0x00014ce2780a;
LAB_14ce27826:
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,&local_150,
             (bool *)local_188);
  lVar7 = local_98._0_8_;
  puVar17 = local_58;
LAB_14ce27844:
  uVar10 = uVar10 + 1;
  uVar12 = (ulonglong)uVar10;
  if ((int)uVar10 < (int)uVar13) {
    pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    do {
      lVar1 = (uVar12 >> 9) * 8;
      lVar5 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + *(longlong *)(pFVar2 + lVar1)) != 0) &&
         (*(short *)(lVar5 + *(longlong *)(pFVar2 + lVar1)) != -1)) goto LAB_14ce27720;
      uVar10 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar13);
  }
  if (uVar10 != uVar13) goto LAB_14ce27720;
  uVar14 = (ulonglong)local_c0;
  goto LAB_14ce278af;
}

// operator() @ 14ce352b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FRefCountVector *pFVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  ulonglong *puVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ForElementType<FSetElementId> FVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined1 auStackY_1d8 [32];
  ulong64 local_1a8;
  IndexIterator local_1a0;
  ulonglong local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  FSparseArrayAllocationInfo local_168;
  IndexIterator local_158;
  ulong64 local_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  void *local_118;
  FSparseArrayAllocationInfo local_110;
  undefined1 local_f8 [8];
  undefined1 local_f0 [32];
  ForElementType<unsigned_int> local_d0;
  ulonglong local_c8;
  int iStack_c0;
  int iStack_bc;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  uint local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_f0._0_8_ = (FScriptContainerElement *)0x0;
  local_f0._8_8_ = 0;
  local_d0 = (ForElementType<unsigned_int>)0x0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_c8 = ___xmm_00000000ffffffff0000008000000000;
  _iStack_c0 = _UNK_150631d98;
  cVar3 = **(char **)this;
  local_118 = this;
  if (cVar3 == '\0') {
    local_f8._0_4_ = Vertex;
    local_f8._4_4_ = Triangle;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_1a0,&param_1->VertexRefCounts,0,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar19 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_158,&param_1->VertexRefCounts,iVar19,iVar19);
    uVar5 = local_1a0._0_8_;
    uVar14 = local_1a0._8_4_;
joined_r0x00014ce35376:
    local_1a0._8_4_ = uVar14;
    if (uVar14 != local_158._8_4_) {
      local_190 = (ulonglong)uVar14;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64>
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 local_f0,&local_1a8,(bool *)&local_190);
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)local_1a0._12_4_) {
        do {
          lVar15 = (ulonglong)(uVar14 & 0x1ff) * 2;
          if ((*(short *)(lVar15 + *(longlong *)
                                    (*(longlong *)(uVar5 + 8) + (ulonglong)(uVar14 >> 9) * 8)) != 0)
             && (*(short *)(lVar15 + *(longlong *)
                                      (*(longlong *)(uVar5 + 8) + (ulonglong)(uVar14 >> 9) * 8)) !=
                 -1)) break;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_1a0._12_4_);
      }
      goto joined_r0x00014ce35376;
    }
  }
  else {
    pFVar1 = &param_1->TriangleRefCounts;
    if (cVar3 == '\x01') {
      local_f8._0_4_ = Face;
      local_f8._4_4_ = Triangle;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_1a0,pFVar1,0,
                 (pFVar1->RefCounts).CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar19 = (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_158,pFVar1,iVar19,iVar19);
      uVar5 = local_1a0._0_8_;
      uVar14 = local_1a0._8_4_;
joined_r0x00014ce3545f:
      local_1a0._8_4_ = uVar14;
      if (uVar14 != local_158._8_4_) {
        local_190 = (ulonglong)uVar14;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_f0,&local_1a8,(bool *)&local_190);
        uVar14 = uVar14 + 1;
        if ((int)uVar14 < (int)local_1a0._12_4_) {
          do {
            lVar15 = (ulonglong)(uVar14 & 0x1ff) * 2;
            if ((*(short *)(lVar15 + *(longlong *)
                                      (*(longlong *)(uVar5 + 8) + (ulonglong)(uVar14 >> 9) * 8)) !=
                 0) && (*(short *)(lVar15 + *(longlong *)
                                             (*(longlong *)(uVar5 + 8) +
                                             (ulonglong)(uVar14 >> 9) * 8)) != -1)) break;
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_1a0._12_4_);
        }
        goto joined_r0x00014ce3545f;
      }
    }
    else if (cVar3 == '\x03') {
      local_f8._0_4_ = Edge;
      local_f8._4_4_ = Triangle;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_1a0,pFVar1,0,
                 (pFVar1->RefCounts).CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar19 = (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_158,pFVar1,iVar19,iVar19);
      if (local_1a0._8_4_ != local_158._8_4_) {
        do {
          uVar6 = local_1a0._8_4_;
          puVar17 = (ulonglong *)0x0;
          uVar14 = local_1a0._8_4_ & 0x3fffffff;
          local_190 = (ulonglong)uVar14;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)local_f0,&local_148,(bool *)&local_190);
          if (iStack_bc == 0) {
            iVar19 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,1,(ForAnyElementType *)local_f0,(int *)(local_f0 + 8),
                                (int *)(local_f0 + 0xc));
            iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10),1);
            FVar13 = (ForElementType<unsigned_int>)((longlong)local_f0 + 0x10);
            if (local_d0 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_d0;
            }
            bVar10 = (byte)iVar7 & 0x1f;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x1f;
              bVar10 = bVar10 - 0x20;
            }
            puVar2 = (uint *)((longlong)FVar13 + (longlong)(iVar7 >> 5) * 4);
            *puVar2 = *puVar2 & ~(1 << (bVar10 & 0x1f));
          }
          else {
            iVar19 = iStack_c0;
            lVar15 = (longlong)iStack_c0;
            iStack_bc = iStack_bc + -1;
            iStack_c0 = *(int *)(local_f0._0_8_ + lVar15 * 0x10 + 4);
            if (iStack_bc != 0) {
              *(undefined4 *)
               (local_f0._0_8_ + (longlong)*(int *)(local_f0._0_8_ + lVar15 * 0x10 + 4) * 0x10) =
                   0xffffffff;
            }
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_f0,&local_168,iVar19);
          puVar12 = (ulonglong *)CONCAT44(local_168.Pointer._4_4_,(uint)local_168.Pointer);
          puVar16 = puVar17;
          if (puVar12 != (ulonglong *)0x0) {
            *puVar12 = (ulonglong)uVar14 | 0x40000000;
            *(undefined4 *)(puVar12 + 1) = 0xffffffff;
            puVar16 = puVar12;
          }
          uVar20 = *puVar16;
          uVar14 = (int)(uVar20 >> 0x20) * 0x17 + (int)uVar20;
          if ((local_f0._8_4_ - iStack_bc != 1) && (local_f0._8_4_ != iStack_bc)) {
            FVar11.Data = (FScriptContainerElement *)local_b8;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_b0.Data;
            }
            for (iVar19 = *(int *)((longlong)FVar11.Data + (ulonglong)(local_a8 - 1 & uVar14) * 4);
                iVar19 != -1; iVar19 = *(int *)(local_f0._0_8_ + (longlong)iVar19 * 0x10 + 8)) {
              if (*(ulonglong *)(local_f0._0_8_ + (longlong)iVar19 * 0x10) == uVar20) {
                if (iVar19 != -1) {
                  *(ulonglong *)(local_f0._0_8_ + (longlong)iVar19 * 0x10) = uVar20;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_f0,local_168.Index,1);
                  goto LAB_14ce35947;
                }
                break;
              }
            }
          }
          uVar22 = local_f0._8_4_ - iStack_bc;
          uVar18 = 1;
          if (3 < uVar22) {
            uVar20 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar18 = 1 << ((byte)lVar15 & 0x1f);
          }
          if (((int)uVar22 < 1) || ((int)uVar18 <= (int)local_a8)) {
            uVar14 = local_a8 - 1 & uVar14;
            *(uint *)((longlong)puVar16 + 0xc) = uVar14;
            FVar11.Data = (FScriptContainerElement *)local_b8;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_b0.Data;
            }
            uVar20 = (longlong)(int)local_a8 - 1U & (longlong)(int)uVar14;
            *(undefined4 *)(puVar16 + 1) = *(undefined4 *)((longlong)FVar11.Data + uVar20 * 4);
            *(int *)((longlong)FVar11.Data + uVar20 * 4) = local_168.Index;
          }
          else {
            local_a8 = uVar18;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,4);
            }
            if (uVar18 != 0) {
              uVar14 = uVar18;
              if (uVar18 < 2) {
                if ((ForElementType<FSetElementId>)local_b0.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar14 = 0;
                  goto LAB_14ce35761;
                }
              }
              else {
LAB_14ce35761:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_b0,0,uVar14,4);
              }
              if (0 < (int)uVar18) {
                uVar20 = (ulonglong)uVar18;
                puVar12 = puVar17;
                do {
                  FVar11.Data = (FScriptContainerElement *)local_b8;
                  if ((ForElementType<FSetElementId>)local_b0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar11.Data = local_b0.Data;
                  }
                  uVar8 = (ulonglong)puVar12 & (longlong)(int)uVar18 - 1U;
                  puVar12 = (ulonglong *)((longlong)puVar12 + 1);
                  *(undefined4 *)((longlong)FVar11.Data + uVar8 * 4) = 0xffffffff;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
            }
            if (local_a8 != 0) {
              local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10);
              local_188._padding_._0_4_ = 0;
              local_188._padding_._4_4_ = 1;
              local_188.CurrentBitIndex = 0;
              local_188.BaseBitIndex = 0;
              puVar12 = puVar17;
              if ((uint)local_c8 != 0) {
                FVar13 = (ForElementType<unsigned_int>)((longlong)local_f0 + 0x10);
                if (local_d0 != (ForElementType<unsigned_int>)0x0) {
                  FVar13 = local_d0;
                }
                uVar14 = *(uint *)FVar13;
                puVar16 = puVar17;
                while (uVar14 == 0) {
                  local_188.BaseBitIndex = (int)puVar16 + 0x20;
                  puVar16 = (ulonglong *)(ulonglong)(uint)local_188.BaseBitIndex;
                  iVar19 = (int)puVar12;
                  local_188._padding_._0_4_ = iVar19 + 1;
                  puVar12 = (ulonglong *)(ulonglong)(uint)local_188._padding_;
                  if ((int)(((uint)local_c8 - 1) + ((int)((uint)local_c8 - 1) >> 0x1f & 0x1fU)) >> 5
                      < (int)(uint)local_188._padding_) goto LAB_14ce3586f;
                  uVar14 = ((uint *)((longlong)FVar13 + 4))[iVar19];
                }
                local_188._padding_._4_4_ = -uVar14 & uVar14;
                uVar20 = (ulonglong)local_188._padding_._4_4_ * 2 + 1;
                lVar15 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_188.CurrentBitIndex = (local_188.BaseBitIndex - 1U) + (int)lVar15;
                puVar12 = (ulonglong *)(ulonglong)(uint)local_188.CurrentBitIndex;
                if ((int)(uint)local_c8 < local_188.CurrentBitIndex) {
LAB_14ce3586f:
                  puVar12 = (ulonglong *)(local_c8 & 0xffffffff);
                  local_188.CurrentBitIndex = (uint)local_c8;
                }
              }
              local_188.UnvisitedBitMask = 0xffffffff;
              local_140 = (longlong *)local_f0;
              local_138._padding_ = CONCAT44(local_188._padding_._4_4_,(uint)local_188._padding_);
              local_138.CurrentBitIndex = local_188.CurrentBitIndex;
              local_138.UnvisitedBitMask = 0xffffffff;
              local_138._28_4_ = local_188._28_4_;
              local_138.BaseBitIndex = local_188.BaseBitIndex;
              local_138.Array = local_188.Array;
              if ((int)puVar12 < (int)(uint)local_c8) {
                do {
                  puVar23 = (undefined8 *)((longlong)(int)puVar12 * 0x10 + *local_140);
                  uVar14 = (int)((ulonglong)*puVar23 >> 0x20) * 0x17 + (int)*puVar23 & local_a8 - 1;
                  *(uint *)((longlong)puVar23 + 0xc) = uVar14;
                  FVar11.Data = (FScriptContainerElement *)local_b8;
                  if ((ForElementType<FSetElementId>)local_b0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar11.Data = local_b0.Data;
                  }
                  uVar20 = (longlong)(int)local_a8 - 1U & (longlong)(int)uVar14;
                  *(undefined4 *)(puVar23 + 1) = *(undefined4 *)((longlong)FVar11.Data + uVar20 * 4)
                  ;
                  *(int *)((longlong)FVar11.Data + uVar20 * 4) = (int)puVar12;
                  local_138.UnvisitedBitMask =
                       local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
                  puVar12 = (ulonglong *)(ulonglong)(uint)local_138.CurrentBitIndex;
                } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
              }
            }
          }
LAB_14ce35947:
          if (iStack_bc == 0) {
            iVar19 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,1,(ForAnyElementType *)local_f0,(int *)(local_f0 + 8),
                                (int *)(local_f0 + 0xc));
            iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10),1);
            FVar13 = (ForElementType<unsigned_int>)((longlong)local_f0 + 0x10);
            if (local_d0 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_d0;
            }
            bVar10 = (byte)iVar7 & 0x1f;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x1f;
              bVar10 = bVar10 - 0x20;
            }
            puVar2 = (uint *)((longlong)FVar13 + (longlong)(iVar7 >> 5) * 4);
            *puVar2 = *puVar2 & ~(1 << (bVar10 & 0x1f));
          }
          else {
            iVar19 = iStack_c0;
            lVar15 = (longlong)iStack_c0;
            iStack_bc = iStack_bc + -1;
            iStack_c0 = *(int *)(local_f0._0_8_ + lVar15 * 0x10 + 4);
            if (iStack_bc != 0) {
              *(undefined4 *)
               (local_f0._0_8_ + (longlong)*(int *)(local_f0._0_8_ + lVar15 * 0x10 + 4) * 0x10) =
                   0xffffffff;
            }
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_f0,&local_110,iVar19);
          if (local_110.Pointer != (ulonglong *)0x0) {
            *(ulonglong *)local_110.Pointer = (ulonglong)(uVar6 & 0x3fffffff | 0x80000000);
            *(undefined4 *)((longlong)local_110.Pointer + 8) = 0xffffffff;
            puVar17 = local_110.Pointer;
          }
          uVar20 = *puVar17;
          uVar14 = (int)(uVar20 >> 0x20) * 0x17 + (int)uVar20;
          if ((local_f0._8_4_ - iStack_bc != 1) && (local_f0._8_4_ != iStack_bc)) {
            FVar11.Data = (FScriptContainerElement *)local_b8;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_b0.Data;
            }
            for (iVar19 = *(int *)((longlong)FVar11.Data + (ulonglong)(local_a8 - 1 & uVar14) * 4);
                iVar19 != -1; iVar19 = *(int *)(local_f0._0_8_ + (longlong)iVar19 * 0x10 + 8)) {
              if (*(ulonglong *)(local_f0._0_8_ + (longlong)iVar19 * 0x10) == uVar20) {
                if (iVar19 != -1) {
                  *(ulonglong *)(local_f0._0_8_ + (longlong)iVar19 * 0x10) = uVar20;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_f0,local_110.Index,1);
                  goto LAB_14ce35cb4;
                }
                break;
              }
            }
          }
          uVar22 = local_f0._8_4_ - iStack_bc;
          uVar18 = 1;
          if (3 < uVar22) {
            uVar20 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar18 = 1 << ((byte)lVar15 & 0x1f);
          }
          if (((int)uVar22 < 1) || ((int)uVar18 <= (int)local_a8)) {
            uVar14 = local_a8 - 1 & uVar14;
            *(uint *)((longlong)puVar17 + 0xc) = uVar14;
            FVar11.Data = (FScriptContainerElement *)local_b8;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_b0.Data;
            }
            uVar20 = (longlong)(int)local_a8 - 1U & (longlong)(int)uVar14;
            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((longlong)FVar11.Data + uVar20 * 4);
            *(int *)((longlong)FVar11.Data + uVar20 * 4) = local_110.Index;
          }
          else {
            local_a8 = uVar18;
            if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,4);
            }
            if (uVar18 != 0) {
              uVar14 = uVar18;
              if (uVar18 < 2) {
                if ((ForElementType<FSetElementId>)local_b0.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar14 = 0;
                  goto LAB_14ce35b4e;
                }
              }
              else {
LAB_14ce35b4e:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_b0,0,uVar14,4);
              }
              if (0 < (int)uVar18) {
                uVar8 = (ulonglong)uVar18;
                uVar20 = 0;
                do {
                  FVar11.Data = (FScriptContainerElement *)local_b8;
                  if ((ForElementType<FSetElementId>)local_b0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar11.Data = local_b0.Data;
                  }
                  uVar9 = uVar20 & (longlong)(int)uVar18 - 1U;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((longlong)FVar11.Data + uVar9 * 4) = 0xffffffff;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
            }
            if (local_a8 != 0) {
              local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10);
              local_188._padding_._0_4_ = 0;
              local_188._padding_._4_4_ = 1;
              local_188.UnvisitedBitMask = 0xffffffff;
              local_188.CurrentBitIndex = 0;
              local_188.BaseBitIndex = 0;
              if ((uint)local_c8 != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
              }
              local_140 = (longlong *)local_f0;
              local_138._padding_ = CONCAT44(local_188._padding_._4_4_,(uint)local_188._padding_);
              local_138.Array = local_188.Array;
              local_138.CurrentBitIndex = local_188.CurrentBitIndex;
              local_138.UnvisitedBitMask = local_188.UnvisitedBitMask;
              local_138._28_4_ = local_188._28_4_;
              local_138.BaseBitIndex = local_188.BaseBitIndex;
              uVar14 = local_188.CurrentBitIndex;
              if (local_188.CurrentBitIndex < (local_188.Array)->NumBits) {
                do {
                  puVar23 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + *local_140);
                  uVar18 = (int)((ulonglong)*puVar23 >> 0x20) * 0x17 + (int)*puVar23 & local_a8 - 1;
                  *(uint *)((longlong)puVar23 + 0xc) = uVar18;
                  FVar11.Data = (FScriptContainerElement *)local_b8;
                  if ((ForElementType<FSetElementId>)local_b0.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar11.Data = local_b0.Data;
                  }
                  uVar20 = (longlong)(int)local_a8 - 1U & (longlong)(int)uVar18;
                  *(undefined4 *)(puVar23 + 1) = *(undefined4 *)((longlong)FVar11.Data + uVar20 * 4)
                  ;
                  *(uint *)((longlong)FVar11.Data + uVar20 * 4) = uVar14;
                  local_138.UnvisitedBitMask =
                       local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
                  uVar14 = local_138.CurrentBitIndex;
                } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
              }
            }
          }
LAB_14ce35cb4:
          local_1a0._8_4_ = uVar6 + 1;
          if ((int)local_1a0._8_4_ < (int)local_1a0._12_4_) {
            do {
              lVar15 = (ulonglong)(local_1a0._8_4_ & 0x1ff) * 2;
              if ((*(short *)(lVar15 + *(longlong *)
                                        (*(longlong *)(local_1a0._0_8_ + 8) +
                                        (ulonglong)((uint)local_1a0._8_4_ >> 9) * 8)) != 0) &&
                 (*(short *)(lVar15 + *(longlong *)
                                       (*(longlong *)(local_1a0._0_8_ + 8) +
                                       (ulonglong)((uint)local_1a0._8_4_ >> 9) * 8)) != -1)) break;
              local_1a0._8_4_ = local_1a0._8_4_ + 1;
            } while ((int)local_1a0._8_4_ < (int)local_1a0._12_4_);
          }
        } while (local_1a0._8_4_ != local_158._8_4_);
      }
    }
    else {
      local_f8._0_4_ = Face;
      local_f8._4_4_ = Polygroup;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_168,pFVar1,0,
                 (pFVar1->RefCounts).CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar19 = (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_158,pFVar1,iVar19,iVar19);
      if ((uint)local_168.Pointer != local_158._8_4_) {
        do {
          uVar14 = (uint)local_168.Pointer;
          local_1a8._0_4_ =
               UE::Geometry::FDynamicMesh3::GetTriangleGroup(param_1,(uint)local_168.Pointer);
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar21 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar21 = local_98.Hash.SecondaryData;
            }
            for (iVar19 = *(int *)((longlong)FVar21 +
                                  (ulonglong)(local_98.HashSize - 1U & (uint)local_1a8) * 4);
                iVar19 != -1;
                iVar19 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar19 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar19 * 0xc) == (uint)local_1a8)
              goto LAB_14ce35e4c;
            }
          }
          local_1a0._0_8_ = CONCAT44((uint)local_1a8,uVar14);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)local_f0,&local_148,(bool *)&local_1a0);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,(int *)&local_190,(bool *)&local_1a8);
LAB_14ce35e4c:
          local_168.Pointer._0_4_ = uVar14 + 1;
          if ((int)(uint)local_168.Pointer < local_168.Pointer._4_4_) {
            lVar15 = *(longlong *)(CONCAT44(local_168._4_4_,local_168.Index) + 8);
            do {
              lVar4 = (ulonglong)((uint)local_168.Pointer & 0x1ff) * 2;
              if ((*(short *)(lVar4 + *(longlong *)
                                       (lVar15 + (ulonglong)((uint)local_168.Pointer >> 9) * 8)) !=
                   0) && (*(short *)(lVar4 + *(longlong *)
                                              (lVar15 + (ulonglong)((uint)local_168.Pointer >> 9) *
                                                        8)) != -1)) break;
              local_168.Pointer._0_4_ = (uint)local_168.Pointer + 1;
            } while ((int)(uint)local_168.Pointer < local_168.Pointer._4_4_);
          }
        } while ((uint)local_168.Pointer != local_158._8_4_);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
  }
  FGeometryScriptMeshSelection::SetSelection
            (*(FGeometryScriptMeshSelection **)((longlong)local_118 + 8),
             (FGeometrySelection *)local_f8);
  local_a8 = 0;
  if ((ForElementType<FSetElementId>)local_b0.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_b0.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f0);
  return;
}

// operator() @ 14ce3ff30

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshBoundaryEdges'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulong64 local_res10;
  ulonglong local_res18;
  uint local_28;
  
  uVar6 = 0;
  uVar7 = (param_1->EdgeRefCounts).RefCounts.CurBlockUsed +
          (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar7 != 0) &&
     (pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar6 = 1;
    uVar5 = 1;
    if ((int)uVar7 < 2) goto joined_r0x00014ce3ffc2;
    do {
      lVar4 = (ulonglong)((uint)uVar6 & 0x1ff) * 2;
      lVar3 = *(longlong *)(pFVar2 + (uVar6 >> 9) * 8);
      if ((*(short *)(lVar4 + lVar3) != 0) && (*(short *)(lVar4 + lVar3) != -1)) break;
      uVar5 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)uVar7);
  }
  uVar5 = (uint)uVar6;
joined_r0x00014ce3ffc2:
  do {
    if (uVar5 == uVar7) {
      return;
    }
    while( true ) {
      uVar5 = (uint)uVar6;
      uVar6 = *(ulonglong *)
               (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + (uVar6 >> 9) * 8) + 8
               + (ulonglong)(uVar5 & 0x1ff) * 0x10);
      if ((int)(uVar6 >> 0x20) == -1) {
        uVar8 = (uint)uVar6 * 4;
        uVar1 = *(undefined8 *)
                 (*(longlong *)
                   ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                   ((uVar6 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)uVar6 & 0x1ff) * 0xc);
        local_28 = (uint)uVar1;
        if (local_28 != uVar5) {
          uVar8 = uVar8 | ((uint)((ulonglong)uVar1 >> 0x20) != uVar5) + 1;
        }
        local_res18 = (ulonglong)(uVar8 << 0x1e | uVar8 >> 2);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)(*(longlong *)this + 8),&local_res10,(bool *)&local_res18);
      }
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      if ((int)uVar7 <= (int)uVar5) break;
      pFVar2 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar3 = (uVar6 >> 9) * 8;
        lVar4 = (ulonglong)((uint)uVar6 & 0x1ff) * 2;
        if ((*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar3)) != 0) &&
           (*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar3)) != -1)) break;
        uVar5 = (uint)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if ((int)uVar7 <= (int)uVar5) goto joined_r0x00014ce3ffc2;
      }
    }
  } while( true );
}

// operator() @ 14ce400f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByMaterialID'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshScalarTriangleAttribute<int> *local_res10 [3];
  TDynamicMeshScalarTriangleAttribute<int> **local_28;
  undefined4 local_20;
  code *local_18;
  undefined8 **local_10;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if ((pFVar1 != (FDynamicMeshAttributeSet *)0x0) &&
     (local_res10[0] = (pFVar1->MaterialIDAttrib).Ptr,
     local_res10[0] != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    local_28 = local_res10;
    local_20 = *(undefined4 *)this;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByMaterialID'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int>
               ::Call;
    UE::MeshSelectionLocals::SelectByTriangleAttribute
              (param_1,*(FGeometryScriptMeshSelection **)((longlong)this + 8),
               *(EGeometryScriptMeshSelectionType *)((longlong)this + 0x10),
               (TFunctionRef<bool___cdecl(int)> *)&local_18);
    return;
  }
  if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return;
}

// operator() @ 14ce40180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByPolygroup'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  TDynamicMeshScalarTriangleAttribute<int> *local_res8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (*(char *)this == '\x01') {
    local_28._8_4_ = *(undefined4 *)((longlong)this + 8);
    local_18._8_8_ = local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByPolygroup'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,int>
         ::Call;
    local_28._0_8_ = param_1;
    UE::MeshSelectionLocals::SelectByTriangleAttribute
              (param_1,*(FGeometryScriptMeshSelection **)((longlong)this + 0x10),
               *(EGeometryScriptMeshSelectionType *)((longlong)this + 0x18),
               (TFunctionRef<bool___cdecl(int)> *)local_18);
    return;
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    iVar2 = (**(code **)(pFVar1->_padding_ + 200))();
    if (*(int *)((longlong)this + 4) < iVar2) {
      local_res8 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                             ((param_1->AttributeSet).Ptr,*(int *)((longlong)this + 4));
      local_18._0_8_ = &local_res8;
      local_18._8_4_ = *(undefined4 *)((longlong)this + 8);
      local_28._8_8_ = local_18;
      local_28._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByPolygroup'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>,bool,int>
           ::Call;
      UE::MeshSelectionLocals::SelectByTriangleAttribute
                (param_1,*(FGeometryScriptMeshSelection **)((longlong)this + 0x10),
                 *(EGeometryScriptMeshSelectionType *)((longlong)this + 0x18),
                 (TFunctionRef<bool___cdecl(int)> *)local_28);
      return;
    }
  }
  if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return;
}

// operator() @ 14ce40450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar2;
  ulong64 uVar3;
  undefined1 auStackY_1e8 [32];
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_1b8;
  code *local_180;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_178;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_168;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_d8,param_1,true);
  local_1b8.Tree = &local_d8;
  local_1b8.FWNBeta = __real_4000000000000000;
  local_1b8.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.FastWindingCache.ArrayNum = 0;
  local_1b8.FastWindingCache.ArrayMax = 0;
  local_1b8.FastWindingCacheOffset = 0;
  local_1b8.FastWindingCacheMeshChangeStamp = 0;
  local_1b8.FWNApproxOrder = 2;
  if ((local_d8.RootIndex < 0) ||
     (uVar3 = UE::Geometry::FDynamicMesh3::GetChangeStamp(local_d8.Mesh),
     local_d8.MeshChangeStamp != uVar3)) {
    pTVar2 = local_1b8.Tree;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_1b8.Tree,false);
    uVar3 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar2->Mesh);
    pTVar2->MeshChangeStamp = uVar3;
  }
  UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_1b8);
  local_1b8.FastWindingCacheMeshChangeStamp = (local_1b8.Tree)->MeshChangeStamp;
  local_168 = &local_d8;
  local_160 = &local_1b8;
  puVar1 = *(undefined8 **)this;
  local_158 = *puVar1;
  uStack_150 = puVar1[1];
  local_148 = puVar1[2];
  uStack_140 = puVar1[3];
  local_138 = puVar1[4];
  uStack_130 = puVar1[5];
  local_128 = puVar1[6];
  uStack_120 = puVar1[7];
  local_118 = puVar1[8];
  uStack_110 = puVar1[9];
  local_108 = puVar1[10];
  uStack_100 = puVar1[0xb];
  local_f8 = **(undefined8 **)((longlong)this + 8);
  local_f0 = **(undefined8 **)((longlong)this + 0x10);
  local_e8 = **(undefined1 **)((longlong)this + 0x18);
  local_178 = &local_168;
  local_180 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
              ::Call;
  UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
            ((UDynamicMesh *)**(undefined8 **)((longlong)this + 0x20),
             (TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
              *)&local_180,*(FGeometryScriptMeshSelection **)((longlong)this + 0x28),
             **(EGeometryScriptMeshSelectionType **)((longlong)this + 0x30),
             **(int **)((longlong)this + 0x38),true);
  if (local_1b8.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.FastWindingCache.AllocatorInstance.Data);
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_d8);
  return;
}

// operator() @ 14ce40600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshPolyGroupBoundaryEdges'::__l2::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  FDynamicMesh3 *local_res8;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  if (*(char *)((longlong)this + 8) == '\x01') {
    if ((param_1->TriangleGroups).bIsSet != false) {
      local_28._8_8_ = &local_res8;
      local_28._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshPolyGroupBoundaryEdges'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,int>
           ::Call;
      local_res8 = param_1;
      UE::MeshSelectionLocals::SelectEdgesWithFilter
                (param_1,*(FGeometryScriptMeshSelection **)this,
                 (TFunctionRef<bool___cdecl(int)> *)local_28,*(bool *)((longlong)this + 0x10));
      return;
    }
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    pFVar1 = (param_1->AttributeSet).Ptr;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      iVar2 = (**(code **)(pFVar1->_padding_ + 200))();
      if (*(int *)((longlong)this + 0xc) < iVar2) {
        local_28._8_8_ =
             UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                       ((param_1->AttributeSet).Ptr,*(int *)((longlong)this + 0xc));
        local_10 = local_28;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshPolyGroupBoundaryEdges'::__l2::<lambda_1>::operator()'::__l19::<lambda_2>,bool,int>
                   ::Call;
        local_28._0_8_ = param_1;
        UE::MeshSelectionLocals::SelectEdgesWithFilter
                  (param_1,*(FGeometryScriptMeshSelection **)this,
                   (TFunctionRef<bool___cdecl(int)> *)&local_18,*(bool *)((longlong)this + 0x10));
        return;
      }
    }
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  return;
}

// operator() @ 14ce40730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSplitNormalEdges'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMesh3 *local_28;
  longlong local_20;
  code *local_18;
  FDynamicMesh3 **local_10;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum))
     && (pFVar2 = (pFVar1->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar2 != 0)) {
    local_20 = *(longlong *)pFVar2;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSplitNormalEdges'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int>
               ::Call;
    local_28 = param_1;
    UE::MeshSelectionLocals::SelectEdgesWithFilter
              (param_1,*(FGeometryScriptMeshSelection **)this,
               (TFunctionRef<bool___cdecl(int)> *)&local_18,false);
    return;
  }
  if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    return;
  }
  return;
}

// operator() @ 14ce407c0

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshUVSeamEdges'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar2;
  FDynamicMeshAttributeSet *this_00;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res10 [3];
  code *local_18;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_10;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar2 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(pFVar1,*(int *)((longlong)this + 8))
    ;
    if (pTVar2 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      pFVar1 = (param_1->AttributeSet).Ptr;
      this_00 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        this_00 = pFVar1;
      }
      local_res10[0] =
           UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(this_00,*(int *)((longlong)this + 8));
      local_10 = local_res10;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshUVSeamEdges'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int>
                 ::Call;
      UE::MeshSelectionLocals::SelectEdgesWithFilter
                (param_1,*(FGeometryScriptMeshSelection **)this,
                 (TFunctionRef<bool___cdecl(int)> *)&local_18,*(bool *)((longlong)this + 0x18));
    }
  }
  return;
}

// operator() @ 14ce40850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::SelectSelectionBoundaryEdges'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [4];
  uint local_184;
  undefined8 *local_180 [2];
  code *local_170;
  undefined8 **local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  longlong *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined1 local_104 [8];
  undefined1 local_fc [12];
  ulonglong local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FIndex3i local_b0 [2];
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_180[0] = (undefined8 *)local_98;
  local_98._0_8_ = 0;
  local_168 = local_180;
  local_98._8_8_ = 0;
  local_170 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::SelectSelectionBoundaryEdges'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_78 = (uint *)0x0;
  uVar12 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_160 = this;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_170,false);
  uVar14 = local_70;
  uStack_12c = 1;
  local_118 = 0;
  uStack_11c = local_118;
  if (local_70 != 0) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar11 = *puVar13;
    local_118 = 0;
    uVar12 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)(int)uVar12;
      local_118 = local_118 + 0x20;
      uVar12 = uVar12 + 1;
      uStack_11c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14ce40960;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_12c = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_12c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uStack_11c = (local_118 - 1) + (int)lVar8;
    local_108 = (int)lVar8;
    if ((int)local_70 < (int)uStack_11c) {
      uStack_11c = local_70;
    }
  }
LAB_14ce40960:
  local_138 = (longlong *)local_98;
  uStack_114 = uStack_11c;
  uVar11 = local_70 & 0xffffffe0;
  local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uStack_120 = 0xffffffff;
  uStack_130 = uVar12;
  iStack_110 = local_98._8_4_ - local_64;
  local_e0 = (longlong *)local_98;
  TStack_d8._padding_ = CONCAT44(uStack_12c,uVar12);
  iVar10 = (int)local_70 >> 5;
  bVar7 = (byte)local_70;
  local_184 = local_70;
  TStack_d8.BaseBitIndex = local_118;
  TStack_d8._28_4_ = uStack_11c;
  uStack_b8 = CONCAT44(uStack_10c,local_98._8_4_ - local_64);
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8.CurrentBitIndex = uStack_11c;
  if (((int)local_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != local_70) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar12 = -1 << (bVar7 & 0x1f) & puVar13[iVar10];
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) {
        local_184 = local_70;
        uVar14 = local_70;
        goto LAB_14ce40a70;
      }
      uVar12 = puVar13[lVar8 + 1];
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar11;
    local_184 = uVar14;
    if ((int)local_70 < (int)uVar14) {
      uVar14 = local_70;
      local_184 = local_70;
    }
  }
LAB_14ce40a70:
  do {
    plVar5 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_d8.CurrentBitIndex == uVar14) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar5 == (longlong *)local_98)) {
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    uVar12 = *(uint *)(*plVar5 + (longlong)TStack_d8.CurrentBitIndex * 0xc);
    lVar8 = *(longlong *)
             ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
    ;
    local_158 = *(undefined8 *)(lVar8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
    local_150 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar12 & 0x1ff) * 0xc);
    UE::Geometry::FDynamicMesh3::GetTriNeighbourTris(param_1,local_b0,uVar12);
    lVar8 = 0;
    lVar15 = 3;
    do {
      uVar12 = *(uint *)((longlong)&local_b0[0].field0_0x0 + lVar8);
      if (uVar12 == 0xffffffff) {
        if ((char)*(longlong *)((longlong)this + 0x10) == '\0') {
          uVar14 = *(uint *)((longlong)&local_158 + lVar8);
          uVar11 = *(uint *)(*(longlong *)
                              ((param_1->Edges).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar14 >> 9) * 8) + 8 + (ulonglong)(uVar14 & 0x1ff) * 0x10
                            );
          uVar12 = uVar11 * 4;
          local_180[0] = *(undefined8 **)
                          (*(longlong *)
                            ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 0xc);
          if ((uint)local_180[0] != uVar14) {
            uVar12 = uVar12 | ((uint)((ulonglong)local_180[0] >> 0x20) != uVar14) + 1;
          }
          local_fc._4_8_ = ZEXT48(uVar12 << 0x1e | uVar12 >> 2);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(*(longlong *)this + 8),(ulong64 *)local_104,(bool *)(local_fc + 4));
        }
      }
      else {
        if (local_98._8_4_ != local_64) {
          puVar9 = local_60;
          if (local_58 != (undefined1 *)0x0) {
            puVar9 = local_58;
          }
          for (iVar10 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & uVar12) * 4); iVar10 != -1;
              iVar10 = *(int *)(local_98._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
            if (*(uint *)(local_98._0_8_ + (longlong)iVar10 * 0xc) == uVar12) goto LAB_14ce40d5a;
          }
        }
        uVar14 = *(uint *)((longlong)&local_158 + lVar8);
        lVar3 = *(longlong *)this;
        lVar2 = (ulonglong)(uVar14 >> 9) * 8;
        uVar12 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar2) + 8
                          + (ulonglong)(uVar14 & 0x1ff) * 0x10);
        local_148 = *(undefined8 *)
                     (*(longlong *)
                       ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0xc);
        uVar12 = uVar12 * 4;
        if ((uint)local_148 != uVar14) {
          uVar12 = uVar12 | ((uint)((ulonglong)local_148 >> 0x20) != uVar14) + 1;
        }
        local_f0 = (ulonglong)(uVar12 << 0x1e | uVar12 >> 2);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>
                  ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)(lVar3 + 8),(ulong64 *)(local_104 + 4),(bool *)&local_f0);
        uVar1 = *(ulonglong *)
                 (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar2) + 8 +
                 (ulonglong)(uVar14 & 0x1ff) * 0x10);
        uVar12 = (uint)(uVar1 >> 0x20);
        this = local_160;
        if (uVar12 != 0xffffffff) {
          local_170 = *(code **)(*(longlong *)
                                  ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                                  (uVar1 >> 0x29) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0xc);
          uVar12 = uVar12 * 4;
          if ((uint)local_170 != uVar14) {
            uVar12 = uVar12 | ((uint)((ulonglong)local_170 >> 0x20) != uVar14) + 1;
          }
          local_e8 = (ulonglong)(uVar12 << 0x1e | uVar12 >> 2);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(lVar3 + 8),(ulong64 *)local_fc,(bool *)&local_e8);
          this = local_160;
        }
      }
LAB_14ce40d5a:
      lVar8 = lVar8 + 4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    uVar14 = local_184;
  } while( true );
}

// operator() @ 14ce48650

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection'::__l25::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong local_res18;
  ulong64 local_res20;
  ulong64 local_78;
  uint *local_70;
  undefined8 local_60;
  undefined8 local_50;
  
  puVar4 = *(undefined8 **)((longlong)this + 8);
  puVar9 = (uint *)*puVar4;
  iVar2 = *(int *)(puVar4 + 1);
  local_70 = puVar9 + iVar2;
  while( true ) {
    puVar7 = local_70;
    if (*(int *)(puVar4 + 1) != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (puVar9 == puVar7) break;
    uVar3 = *puVar9;
    lVar5 = *(longlong *)this;
    lVar1 = (ulonglong)(uVar3 >> 9) * 8;
    uVar8 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
                     (ulonglong)(uVar3 & 0x1ff) * 0x10);
    local_60 = *(undefined8 *)
                (*(longlong *)
                  ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 0xc);
    uVar8 = uVar8 * 4;
    if ((uint)local_60 != uVar3) {
      uVar8 = uVar8 | ((uint)((ulonglong)local_60 >> 0x20) != uVar3) + 1;
    }
    local_res18 = (ulonglong)(uVar8 << 0x1e | uVar8 >> 2);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (lVar5 + 8),&local_res20,(bool *)&local_res18);
    uVar6 = *(ulonglong *)
             (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
             (ulonglong)(uVar3 & 0x1ff) * 0x10);
    uVar8 = (uint)(uVar6 >> 0x20);
    if (uVar8 != 0xffffffff) {
      local_50 = *(undefined8 *)
                  (*(longlong *)
                    ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar6 >> 0x29) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 0xc);
      uVar8 = uVar8 * 4;
      if ((uint)local_50 != uVar3) {
        uVar8 = uVar8 | ((uint)((ulonglong)local_50 >> 0x20) != uVar3) + 1;
      }
      local_res18 = (ulonglong)(uVar8 << 0x1e | uVar8 >> 2);
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64>
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 (lVar5 + 8),&local_78,(bool *)&local_res18);
    }
    puVar9 = puVar9 + 1;
  }
  return;
}

// operator() @ 14ce48830

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection'::__l25::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_e8;
  uint local_d8;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  ulonglong local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  plVar17 = *(longlong **)((longlong)this + 8);
  iVar14 = 0;
  iVar4 = (int)plVar17[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2);
  iVar16 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar4 != 0) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar13 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ce488dd;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar9 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = local_res20 + -1 + iVar16;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14ce488dd:
  uVar13 = *(uint *)(plVar17 + 5);
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar14);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_9c,(int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34));
  local_80 = plVar17;
  local_78 = plVar17;
  TStack_70.Array = pTVar2;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)(plVar17 + 5);
  if (uVar13 != uVar9) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ce489e0;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14ce489e0:
  while( true ) {
    plVar7 = local_78;
    if ((int)local_78[1] - *(int *)((longlong)local_78 + 0x34) != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) && (TStack_70.Array == pTVar2)) &&
       (plVar7 == plVar17)) break;
    uVar12 = *(uint *)(*plVar7 + (longlong)TStack_70.CurrentBitIndex * 0xc);
    lVar5 = *(longlong *)this;
    lVar11 = (ulonglong)(uVar12 >> 9) * 8;
    uVar9 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar11) + 8 +
                     (ulonglong)(uVar12 & 0x1ff) * 0x10);
    uVar3 = *(undefined8 *)
             (*(longlong *)
               ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8
               ) + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    uVar9 = uVar9 * 4;
    local_e8 = (uint)uVar3;
    if (local_e8 != uVar12) {
      uVar9 = uVar9 | ((uint)((ulonglong)uVar3 >> 0x20) != uVar12) + 1;
    }
    local_90 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (lVar5 + 8),(ulong64 *)local_98,(bool *)&local_90);
    uVar1 = *(ulonglong *)
             (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar11) + 8 +
             (ulonglong)(uVar12 & 0x1ff) * 0x10);
    uVar9 = (uint)(uVar1 >> 0x20);
    if (uVar9 != 0xffffffff) {
      uVar3 = *(undefined8 *)
               (*(longlong *)
                 ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar1 >> 0x29) * 8) +
               (ulonglong)(uVar9 & 0x1ff) * 0xc);
      uVar9 = uVar9 * 4;
      local_d8 = (uint)uVar3;
      if (local_d8 != uVar12) {
        uVar9 = uVar9 | ((uint)((ulonglong)uVar3 >> 0x20) != uVar12) + 1;
      }
      local_88 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64>
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 (lVar5 + 8),(ulong64 *)(local_98 + 4),(bool *)&local_88);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    plVar17 = local_80;
  }
  return;
}

// operator() @ 14ce48cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  EGeometryScriptMeshSelectionType EVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  ForElementType<unsigned_int> FVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 auStackY_3a8 [32];
  char local_378;
  char local_377;
  undefined1 local_376 [2];
  uint local_374;
  undefined1 local_370 [8];
  longlong *local_368;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_360;
  int local_340;
  undefined4 uStack_33c;
  int local_338;
  int local_330;
  uint uStack_32c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_328;
  undefined4 local_320;
  int iStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  longlong *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  int iStack_2e8;
  undefined4 uStack_2e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c0;
  ulong64 local_2a0;
  undefined4 *local_298;
  ulonglong local_290;
  FDynamicMesh3 *local_288;
  void *local_280;
  undefined1 local_278 [12];
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  undefined8 uStack_260;
  longlong local_258;
  int iStack_250;
  undefined4 uStack_24c;
  code *local_248;
  undefined4 **local_240;
  code *local_238;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_230;
  char *local_228;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_220;
  code *local_218;
  char **local_210;
  code *local_208;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_200;
  char *local_1f8;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1f0;
  code *local_1e8;
  char **local_1e0;
  FSparseArrayAllocationInfo local_1d8;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1c8;
  undefined1 *local_1c0;
  FDynamicMesh3 *local_1b8;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1b0;
  undefined1 *local_1a8;
  FDynamicMesh3 *local_1a0;
  TRangedForIterator local_198;
  undefined4 local_14c;
  undefined1 local_148 [8];
  undefined1 local_140 [32];
  ForElementType<unsigned_int> local_120;
  int local_118;
  int iStack_110;
  int iStack_10c;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  uint local_f8;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  uVar15 = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_140._0_8_ = (FScriptContainerElement *)0x0;
  local_140._8_8_ = 0;
  local_120 = (ForElementType<unsigned_int>)0x0;
  _local_118 = ___xmm_00000000ffffffff0000008000000000;
  _iStack_110 = _UNK_150631d98;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  local_148._0_4_ = Vertex;
  local_148._4_4_ = Triangle;
  local_288 = param_1;
  local_280 = this;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    EVar3 = FGeometryScriptMeshSelection::GetSelectionType(*(FGeometryScriptMeshSelection **)this);
    if ((EVar3 == Triangles) ||
       (EVar3 = FGeometryScriptMeshSelection::GetSelectionType
                          (*(FGeometryScriptMeshSelection **)this), EVar3 == Polygroups)) {
      local_1b0 = &local_98;
      local_1a8 = local_e8;
      local_200 = &local_1b0;
      local_208 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::operator()'::__l9::<lambda_2>,void,int>
                  ::Call;
      local_1a0 = param_1;
      FGeometryScriptMeshSelection::ProcessByTriangleID
                (*(FGeometryScriptMeshSelection **)this,param_1,
                 (TFunctionRef<void___cdecl(int)> *)&local_208,false);
      uVar19 = local_c0;
      TStack_308.BaseBitIndex = 0;
      TStack_308.CurrentBitIndex = TStack_308.BaseBitIndex;
      uVar5 = 1;
      if (local_c0 != 0) {
        puVar16 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar16 = local_c8;
        }
        uVar5 = *puVar16;
        TStack_308.BaseBitIndex = 0;
        uVar15 = 0;
        while (uVar5 == 0) {
          lVar9 = (longlong)(int)uVar15;
          TStack_308.BaseBitIndex = TStack_308.BaseBitIndex + 0x20;
          uVar15 = uVar15 + 1;
          TStack_308.CurrentBitIndex = local_c0;
          uVar5 = 1;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14ce491a1;
          uVar5 = (puVar16 + 1)[lVar9];
        }
        uVar5 = -uVar5 & uVar5;
        uVar12 = (ulonglong)uVar5 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_338 = (int)lVar9;
        TStack_308.CurrentBitIndex = (TStack_308.BaseBitIndex - 1U) + local_338;
        if ((int)local_c0 < TStack_308.CurrentBitIndex) {
          TStack_308.CurrentBitIndex = local_c0;
        }
      }
LAB_14ce491a1:
      local_368 = (longlong *)local_e8;
      TStack_360.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      iStack_2e8 = local_e8._8_4_ - local_b4;
      uVar14 = local_c0 & 0xffffffe0;
      TStack_308._padding_ = CONCAT44(uVar5,uVar15);
      TStack_308.UnvisitedBitMask = 0xffffffff;
      TStack_308._28_4_ = local_14c;
      TStack_360._padding_ = TStack_308._padding_;
      iVar13 = (int)local_c0 >> 5;
      uStack_33c = uStack_2e4;
      local_340 = iStack_2e8;
      bVar8 = (byte)local_c0;
      local_374 = local_c0;
      TStack_360.BaseBitIndex = TStack_308.BaseBitIndex;
      TStack_360._28_4_ = local_14c;
      TStack_360.UnvisitedBitMask = 0xffffffff;
      TStack_360.CurrentBitIndex = TStack_308.CurrentBitIndex;
      local_310 = local_368;
      TStack_308.Array = TStack_360.Array;
      if (((int)local_c0 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar19 != local_c0) {
        puVar16 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar16 = local_c8;
        }
        uVar15 = -1 << (bVar8 & 0x1f) & puVar16[iVar13];
        while (uVar15 == 0) {
          lVar9 = (longlong)iVar13;
          uVar14 = uVar14 + 0x20;
          iVar13 = iVar13 + 1;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) {
            local_374 = local_c0;
            uVar19 = local_c0;
            goto LAB_14ce492c2;
          }
          uVar15 = (puVar16 + 1)[lVar9];
        }
        uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_374 = (uVar14 - 1) + (int)lVar9;
        uVar19 = local_374;
        if ((int)local_c0 < (int)local_374) {
          uVar19 = local_c0;
          local_374 = local_c0;
        }
      }
LAB_14ce492c2:
      do {
        plVar2 = local_368;
        if ((int)local_368[1] - *(int *)((longlong)local_368 + 0x34) != local_340) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_370);
        }
        if (((TStack_360.CurrentBitIndex == uVar19) &&
            (TStack_360.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
           (this = local_280, plVar2 == (longlong *)local_e8)) goto LAB_14ce4982c;
        local_1e8 = UE::Core::Private::Function::
                    TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::operator()'::__l13::<lambda_3>,void,int>
                    ::Call;
        local_377 = '\x01';
        uVar15 = *(uint *)(*plVar2 + (longlong)TStack_360.CurrentBitIndex * 0xc);
        local_1f8 = &local_377;
        local_1f0 = &local_98;
        local_1e0 = &local_1f8;
        UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                  (local_288,uVar15,(TFunctionRef<void___cdecl(int)> *)&local_1e8);
        if (local_377 != '\0') {
          if (iStack_10c == 0) {
            iVar13 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,1,(ForAnyElementType *)local_140,(int *)(local_140 + 8),
                                (int *)(local_140 + 0xc));
            iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_140 + 0x10),1);
            FVar11 = (ForElementType<unsigned_int>)((longlong)local_140 + 0x10);
            if (local_120 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_120;
            }
            bVar8 = (byte)iVar6 & 0x1f;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 0x1f;
              bVar8 = bVar8 - 0x20;
            }
            puVar16 = (uint *)((longlong)FVar11 + (longlong)(iVar6 >> 5) * 4);
            *puVar16 = *puVar16 & ~(1 << (bVar8 & 0x1f));
          }
          else {
            iVar13 = iStack_110;
            lVar9 = (longlong)iStack_110;
            iStack_10c = iStack_10c + -1;
            iStack_110 = *(int *)(local_140._0_8_ + lVar9 * 0x10 + 4);
            if (iStack_10c != 0) {
              *(undefined4 *)
               (local_140._0_8_ + (longlong)*(int *)(local_140._0_8_ + lVar9 * 0x10 + 4) * 0x10) =
                   0xffffffff;
            }
          }
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_140,&local_1d8,iVar13);
          if (local_1d8.Pointer != (ulonglong *)0x0) {
            *(ulonglong *)local_1d8.Pointer = (ulonglong)uVar15;
            *(undefined4 *)((longlong)local_1d8.Pointer + 8) = 0xffffffff;
          }
          uVar12 = *(ulonglong *)local_1d8.Pointer;
          uVar15 = (int)(uVar12 >> 0x20) * 0x17 + (int)uVar12;
          if ((local_140._8_4_ - iStack_10c != 1) && (local_140._8_4_ != iStack_10c)) {
            FVar10.Data = (FScriptContainerElement *)local_108;
            if ((ForElementType<FSetElementId>)local_100.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar10.Data = local_100.Data;
            }
            for (iVar13 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_f8 - 1 & uVar15) * 4);
                iVar13 != -1; iVar13 = *(int *)(local_140._0_8_ + (longlong)iVar13 * 0x10 + 8)) {
              if (*(ulonglong *)(local_140._0_8_ + (longlong)iVar13 * 0x10) == uVar12) {
                if (iVar13 != -1) {
                  *(ulonglong *)(local_140._0_8_ + (longlong)iVar13 * 0x10) = uVar12;
                  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_140,local_1d8.Index,1);
                  uVar19 = local_374;
                  goto LAB_14ce497f4;
                }
                break;
              }
            }
          }
          uVar19 = local_140._8_4_ - iStack_10c;
          uVar5 = 1;
          if (3 < uVar19) {
            uVar12 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            uVar5 = 1 << ((byte)lVar9 & 0x1f);
          }
          if (((int)uVar19 < 1) || ((int)uVar5 <= (int)local_f8)) {
            uVar15 = local_f8 - 1 & uVar15;
            *(uint *)((longlong)local_1d8.Pointer + 0xc) = uVar15;
            FVar10.Data = (FScriptContainerElement *)local_108;
            if ((ForElementType<FSetElementId>)local_100.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar10.Data = local_100.Data;
            }
            uVar12 = (longlong)(int)local_f8 - 1U & (longlong)(int)uVar15;
            *(undefined4 *)((longlong)local_1d8.Pointer + 8) =
                 *(undefined4 *)((longlong)FVar10.Data + uVar12 * 4);
            *(int *)((longlong)FVar10.Data + uVar12 * 4) = local_1d8.Index;
            uVar19 = local_374;
          }
          else {
            local_f8 = uVar5;
            if ((ForElementType<FSetElementId>)local_100.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_100,0,0,4)
              ;
            }
            if (uVar5 != 0) {
              uVar15 = uVar5;
              if (uVar5 < 2) {
                if ((ForElementType<FSetElementId>)local_100.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar15 = 0;
                  goto LAB_14ce495dc;
                }
              }
              else {
LAB_14ce495dc:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_100,0,uVar15,4);
              }
              if (0 < (int)uVar5) {
                uVar17 = (ulonglong)uVar5;
                uVar12 = 0;
                do {
                  FVar10.Data = (FScriptContainerElement *)local_108;
                  if ((ForElementType<FSetElementId>)local_100.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar10.Data = local_100.Data;
                  }
                  uVar7 = uVar12 & (longlong)(int)uVar5 - 1U;
                  uVar12 = uVar12 + 1;
                  *(undefined4 *)((longlong)FVar10.Data + uVar7 * 4) = 0xffffffff;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
            }
            uVar19 = local_374;
            if (local_f8 != 0) {
              pTStack_328 = (TBitArray<FDefaultBitArrayAllocator> *)(local_140 + 0x10);
              uStack_32c = 1;
              local_330 = 0;
              iStack_31c = 0;
              iStack_318 = 0;
              if (local_118 != 0) {
                FVar11 = (ForElementType<unsigned_int>)((longlong)local_140 + 0x10);
                if (local_120 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = local_120;
                }
                uVar15 = *(uint *)FVar11;
                iStack_318 = 0;
                local_330 = 0;
                while (uVar15 == 0) {
                  iStack_318 = iStack_318 + 0x20;
                  lVar9 = (longlong)local_330;
                  local_330 = local_330 + 1;
                  if ((int)(local_118 + -1 + (local_118 + -1 >> 0x1f & 0x1fU)) >> 5 < local_330)
                  goto LAB_14ce496f9;
                  uVar15 = ((uint *)((longlong)FVar11 + 4))[lVar9];
                }
                uStack_32c = -uVar15 & uVar15;
                uVar12 = (ulonglong)uStack_32c * 2 + 1;
                lVar9 = 0x3f;
                if (uVar12 != 0) {
                  for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                iStack_31c = iStack_318 + -1 + (int)lVar9;
                if (local_118 < iStack_31c) {
LAB_14ce496f9:
                  iStack_31c = local_118;
                }
              }
              local_320 = 0xffffffff;
              local_310 = (longlong *)local_140;
              TStack_308._padding_ = CONCAT44(uStack_32c,local_330);
              TStack_308._16_8_ = CONCAT44(iStack_31c,0xffffffff);
              TStack_308._24_8_ = CONCAT44(uStack_314,iStack_318);
              iVar13 = iStack_31c;
              TStack_308.Array = pTStack_328;
              if (iStack_31c < local_118) {
                do {
                  puVar18 = (undefined8 *)((longlong)iVar13 * 0x10 + *local_310);
                  uVar15 = (int)((ulonglong)*puVar18 >> 0x20) * 0x17 + (int)*puVar18 & local_f8 - 1;
                  *(uint *)((longlong)puVar18 + 0xc) = uVar15;
                  FVar10.Data = (FScriptContainerElement *)local_108;
                  if ((ForElementType<FSetElementId>)local_100.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar10.Data = local_100.Data;
                  }
                  uVar12 = (longlong)(int)local_f8 - 1U & (longlong)(int)uVar15;
                  *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)FVar10.Data + uVar12 * 4)
                  ;
                  *(int *)((longlong)FVar10.Data + uVar12 * 4) = iVar13;
                  TStack_308.UnvisitedBitMask =
                       TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
                  uVar19 = local_374;
                  iVar13 = TStack_308.CurrentBitIndex;
                } while (TStack_308.CurrentBitIndex < (TStack_308.Array)->NumBits);
              }
            }
          }
        }
LAB_14ce497f4:
        TStack_360.UnvisitedBitMask = TStack_360.UnvisitedBitMask & ~TStack_360._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_360);
      } while( true );
    }
    EVar3 = FGeometryScriptMeshSelection::GetSelectionType(*(FGeometryScriptMeshSelection **)this);
    if (EVar3 == Edges) {
      local_1c8 = &local_98;
      local_1c0 = local_e8;
      local_230 = &local_1c8;
      local_238 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::operator()'::__l20::<lambda_4>,void,int>
                  ::Call;
      local_1b8 = param_1;
      FGeometryScriptMeshSelection::ProcessByEdgeID
                (*(FGeometryScriptMeshSelection **)this,param_1,
                 (TFunctionRef<void___cdecl(int)> *)&local_238,false);
      local_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      local_2c0._padding_._0_4_ = 0;
      local_2c0._padding_._4_4_ = 1;
      local_2c0.UnvisitedBitMask = 0xffffffff;
      local_2c0.CurrentBitIndex = 0;
      local_2c0.BaseBitIndex = 0;
      if (local_c0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c0);
      }
      uVar15 = local_c0;
      TStack_360._padding_ = CONCAT44(local_2c0._padding_._4_4_,(undefined4)local_2c0._padding_);
      local_368 = (longlong *)local_e8;
      TStack_360._16_8_ = CONCAT44(local_2c0.CurrentBitIndex,local_2c0.UnvisitedBitMask);
      TStack_360._24_8_ = CONCAT44(local_2c0._28_4_,local_2c0.BaseBitIndex);
      local_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      bVar8 = (byte)local_c0 & 0x1f;
      local_340 = local_e8._8_4_ - local_b4;
      local_2e0._padding_._0_4_ = (int)local_c0 >> 5;
      TStack_360.Array = local_2c0.Array;
      local_2e0.BaseBitIndex = local_c0 & 0xffffffe0;
      local_2e0._padding_._4_4_ = 1 << bVar8;
      local_2e0.UnvisitedBitMask = -1 << bVar8;
      local_2e0.CurrentBitIndex = local_c0;
      local_268 = local_2c0.Array;
      iStack_250 = local_e8._8_4_ - local_b4;
      uStack_24c = uStack_33c;
      local_278._0_8_ = local_368;
      unique0x10000cc7 = TStack_360._padding_;
      uStack_260 = TStack_360._16_8_;
      local_258 = TStack_360._24_8_;
      if (((int)local_c0 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar15 != local_c0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
      }
      TStack_360._padding_ = CONCAT44(local_2e0._padding_._4_4_,(int)local_2e0._padding_);
      local_368 = (longlong *)local_e8;
      TStack_360._16_8_ = CONCAT44(local_2e0.CurrentBitIndex,local_2e0.UnvisitedBitMask);
      TStack_360._24_8_ = CONCAT44(local_2e0._28_4_,local_2e0.BaseBitIndex);
      TStack_360.Array = local_2e0.Array;
      local_340 = local_e8._8_4_ - local_b4;
      local_198._padding_ = (longlong)local_2e0.Array;
      local_198.InitialNum = local_e8._8_4_ - local_b4;
      local_198._44_4_ = uStack_33c;
      local_198._padding_ = (longlong)local_368;
      local_198._padding_ = TStack_360._padding_;
      local_198._padding_ = TStack_360._16_8_;
      local_198._padding_ = TStack_360._24_8_;
      bVar4 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=((TRangedForIterator *)local_278,&local_198);
      if (bVar4) {
        local_210 = &local_228;
        local_218 = UE::Core::Private::Function::
                    TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::operator()'::__l24::<lambda_5>,void,int>
                    ::Call;
        do {
          local_378 = '\x01';
          local_228 = &local_378;
          local_220 = &local_98;
          uVar15 = *(uint *)(*(longlong *)local_278._0_8_ + (longlong)uStack_260._4_4_ * 0xc);
          UE::Geometry::FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
                    (&param_1->VertexEdgeLists,uVar15,(TFunctionRef<void___cdecl(int)> *)&local_218)
          ;
          if (local_378 != '\0') {
            local_290 = (ulonglong)uVar15;
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            Emplace<unsigned___int64>
                      ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                        *)local_140,&local_2a0,(bool *)&local_290);
          }
          uStack_260 = CONCAT44(uStack_260._4_4_,(uint)uStack_260 & ~uStack_26c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_278 + 8));
          bVar4 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!=((TRangedForIterator *)local_278,&local_198);
        } while (bVar4);
      }
    }
    else {
      ``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::
      operator()'::__l29::<lambda_6>::operator()(local_376);
    }
  }
  else {
    local_298 = (undefined4 *)local_148;
    local_240 = &local_298;
    local_248 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                ::Call;
    FGeometryScriptMeshSelection::ProcessByVertexID
              (*(FGeometryScriptMeshSelection **)this,param_1,
               (TFunctionRef<void___cdecl(int)> *)&local_248,false);
  }
LAB_14ce4982c:
  FGeometryScriptMeshSelection::SetSelection
            (*(FGeometryScriptMeshSelection **)((longlong)this + 8),(FGeometrySelection *)local_148)
  ;
  local_f8 = 0;
  if ((ForElementType<FSetElementId>)local_100.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_100.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_140);
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
}

// operator() @ 14ce498f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l55::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  longlong *local_160;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  undefined1 local_12c [4];
  undefined8 *local_128;
  ulonglong local_120;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  code *local_e8;
  undefined8 **local_e0;
  undefined1 local_d8 [40];
  uint *local_b0;
  uint local_a8;
  undefined8 uStack_a0;
  int iStack_9c;
  ForElementType<FSetElementId> local_90;
  int local_88;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_128 = (undefined8 *)local_d8;
  local_e0 = &local_128;
  local_d8._8_8_ = 0;
  local_d8._16_8_ = 0;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l55::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = (uint *)0x0;
  _local_a8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_a0 = _UNK_150631d98;
  local_90 = (ForElementType<FSetElementId>)0x0;
  uVar9 = 0;
  local_88 = 0;
  local_d8._0_8_ = param_1;
  FGeometryScriptMeshSelection::ProcessByVertexID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_e8,false);
  if (**(char **)((longlong)this + 8) == '\0') {
    local_78._0_8_ = 0;
    local_50 = (longlong *)0x0;
    uVar8 = **(uint **)((longlong)this + 0x10);
    if (0 < (int)uVar8) {
      uVar7 = (ulonglong)uVar8;
      do {
        UE::Geometry::FMeshVertexSelection::ExpandToOneRingNeighbours
                  ((FMeshVertexSelection *)local_d8,(TUniqueFunction<bool___cdecl(int)> *)local_78);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (local_78._0_8_ != 0) {
        plVar4 = (longlong *)(local_78 + 0x10);
        if (local_50 != (longlong *)0x0) {
          plVar4 = local_50;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  else {
    UE::Geometry::FMeshVertexSelection::ContractByBorderVertices
              ((FMeshVertexSelection *)local_d8,**(uint **)((longlong)this + 0x10));
  }
  uVar8 = local_a8;
  uStack_154 = 1;
  local_140 = 0;
  uStack_144 = local_140;
  if (local_a8 != 0) {
    puVar10 = (uint *)(local_d8 + 0x18);
    if (local_b0 != (uint *)0x0) {
      puVar10 = local_b0;
    }
    uVar11 = *puVar10;
    local_140 = 0;
    uVar9 = 0;
    while (uVar11 == 0) {
      lVar5 = (longlong)(int)uVar9;
      local_140 = local_140 + 0x20;
      uVar9 = uVar9 + 1;
      uStack_144 = local_a8;
      if ((int)((local_a8 - 1) + ((int)(local_a8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar9)
      goto LAB_14ce49a51;
      uVar11 = puVar10[lVar5 + 1];
    }
    uStack_154 = -uVar11 & uVar11;
    uVar7 = (ulonglong)uStack_154 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_130 = (int)lVar5;
    uStack_144 = (local_140 - 1) + local_130;
    if ((int)local_a8 < (int)uStack_144) {
      uStack_144 = local_a8;
    }
  }
LAB_14ce49a51:
  local_160 = (longlong *)(local_d8 + 8);
  local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x18);
  uVar11 = local_a8 & 0xffffffe0;
  iStack_138 = local_d8._16_4_ - iStack_9c;
  uStack_148 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_144;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uStack_154,uVar9);
  iVar6 = (int)local_a8 >> 5;
  TStack_110._28_4_ = uStack_144;
  TStack_110.BaseBitIndex = local_140;
  uStack_f0 = CONCAT44(uStack_134,iStack_138);
  bVar3 = (byte)_local_a8;
  uStack_158 = uVar9;
  uStack_13c = uStack_144;
  local_118 = local_160;
  TStack_110.Array = local_150;
  if ((int)local_a8 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (uVar8 != local_a8) {
    puVar10 = (uint *)(local_d8 + 0x18);
    if (local_b0 != (uint *)0x0) {
      puVar10 = local_b0;
    }
    uVar9 = -1 << (bVar3 & 0x1f) & puVar10[iVar6];
    while (uVar9 == 0) {
      lVar5 = (longlong)iVar6;
      uVar11 = uVar11 + 0x20;
      iVar6 = iVar6 + 1;
      uVar8 = local_a8;
      if ((int)((local_a8 - 1) + ((int)(local_a8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_14ce49b5c;
      uVar9 = puVar10[lVar5 + 1];
    }
    uVar7 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar8 = (int)lVar5 + -1 + uVar11;
    if ((int)local_a8 < (int)uVar8) {
      uVar8 = local_a8;
    }
  }
LAB_14ce49b5c:
  while( true ) {
    plVar4 = local_118;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_110.CurrentBitIndex == uVar8) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x18))) &&
       (plVar4 == (longlong *)(local_d8 + 8))) break;
    local_120 = (ulonglong)*(uint *)(*plVar4 + (longlong)TStack_110.CurrentBitIndex * 0xc);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x18) + 8),(ulong64 *)local_12c,(bool *)&local_120);
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  local_88 = 0;
  if (local_90 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_90);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 8));
  return;
}

// operator() @ 14ce49c30

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection'::__l56::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  longlong lVar2;
  FDynamicMeshAttributeSet *pFVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint local_28 [4];
  
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  pTVar4 = (pFVar3->MaterialIDAttrib).Ptr;
  if (pTVar4 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    return;
  }
  uVar13 = 0;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar14 != 0) &&
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar13 = 1;
    uVar12 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014ce49ce7;
    do {
      lVar2 = (ulonglong)((uint)uVar13 & 0x1ff) * 2;
      if ((*(short *)(lVar2 + *(longlong *)(pFVar5 + (uVar13 >> 9) * 8)) != 0) &&
         (*(short *)(lVar2 + *(longlong *)(pFVar5 + (uVar13 >> 9) * 8)) != -1)) break;
      uVar12 = (uint)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar14);
  }
  uVar12 = (uint)uVar13;
joined_r0x00014ce49ce7:
  if (uVar12 == uVar14) {
    return;
  }
  do {
    uVar12 = (uint)uVar13;
    piVar11 = (int *)**(undefined8 **)this;
    piVar1 = piVar11 + *(int *)(*(undefined8 **)this + 1);
    for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
      if (*piVar11 ==
          *(int *)(*(longlong *)(*(longlong *)&pTVar4->field_0x20 + (uVar13 >> 9) * 8) +
                  (ulonglong)(uVar12 & 0x1ff) * 4)) {
        pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
        local_28[0] = uVar12;
        if (((pFVar6->Data <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar10 + 1;
        *(uint *)(pFVar6->Data + (longlong)iVar10 * 4) = local_28[0];
        break;
      }
    }
    uVar12 = uVar12 + 1;
    uVar13 = (ulonglong)uVar12;
    if ((int)uVar14 <= (int)uVar12) goto joined_r0x00014ce49ce7;
    pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    while( true ) {
      lVar2 = (uVar13 >> 9) * 8;
      lVar8 = (ulonglong)((uint)uVar13 & 0x1ff) * 2;
      if ((*(short *)(lVar8 + *(longlong *)(pFVar5 + lVar2)) != 0) &&
         (*(short *)(lVar8 + *(longlong *)(pFVar5 + lVar2)) != -1)) break;
      uVar12 = (uint)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      if ((int)uVar14 <= (int)uVar12) goto joined_r0x00014ce49ce7;
    }
  } while( true );
}

// operator() @ 14ce4c8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l59::<lambda_2>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_167 [7];
  undefined8 *local_160 [2];
  code *local_150;
  undefined8 **local_148;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  undefined1 local_10c [12];
  ulonglong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined1 local_a8 [40];
  uint *local_80;
  uint local_78;
  undefined8 uStack_70;
  int iStack_6c;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_160[0] = (undefined8 *)local_a8;
  local_148 = local_160;
  local_a8._8_8_ = 0;
  local_a8._16_8_ = 0;
  local_150 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l59::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_80 = (uint *)0x0;
  _local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_60 = (ForElementType<FSetElementId>)0x0;
  uVar9 = 0;
  local_58 = 0;
  local_a8._0_8_ = param_1;
  FGeometryScriptMeshSelection::ProcessByEdgeID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_150,false);
  if (*(char *)((longlong)this + 0x10) == '\0') {
    local_b8 = &local_168;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshEdgeSelection::ExpandToOneRingNeighbors'::__l2::<lambda_1>,bool,int>
               ::Call;
    UE::Geometry::FMeshEdgeSelection::ExpandToOneRingNeighbors_Helper<0>
              ((FMeshEdgeSelection *)local_a8,*(int *)((longlong)this + 0x14),
               (TFunctionRef<bool___cdecl(int)> *)&local_c0);
  }
  else {
    UE::Geometry::FMeshEdgeSelection::ContractByBorderEdges
              ((FMeshEdgeSelection *)local_a8,*(int *)((longlong)this + 0x14));
  }
  uVar11 = local_78;
  uStack_134 = 1;
  local_120 = 0;
  uStack_124 = local_120;
  if (local_78 != 0) {
    puVar10 = (uint *)(local_a8 + 0x18);
    if (local_80 != (uint *)0x0) {
      puVar10 = local_80;
    }
    uVar8 = *puVar10;
    local_120 = 0;
    uVar9 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)(int)uVar9;
      local_120 = local_120 + 0x20;
      uVar9 = uVar9 + 1;
      uStack_124 = local_78;
      if ((int)((local_78 - 1) + ((int)(local_78 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar9)
      goto LAB_14ce4ca03;
      uVar8 = puVar10[lVar6 + 1];
    }
    uStack_134 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_134 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_110 = (int)lVar6;
    uStack_124 = (local_120 - 1) + local_110;
    if ((int)local_78 < (int)uStack_124) {
      uStack_124 = local_78;
    }
  }
LAB_14ce4ca03:
  local_140 = (longlong *)(local_a8 + 8);
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x18);
  uVar8 = local_78 & 0xffffffe0;
  iStack_118 = local_a8._16_4_ - iStack_6c;
  uStack_128 = 0xffffffff;
  TStack_e8.CurrentBitIndex = uStack_124;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_134,uVar9);
  iVar7 = (int)local_78 >> 5;
  TStack_e8._28_4_ = uStack_124;
  TStack_e8.BaseBitIndex = local_120;
  uStack_c8 = CONCAT44(uStack_114,iStack_118);
  bVar5 = (byte)_local_78;
  uStack_138 = uVar9;
  uStack_11c = uStack_124;
  local_f0 = local_140;
  TStack_e8.Array = local_130;
  if ((int)local_78 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (uVar11 != local_78) {
    puVar10 = (uint *)(local_a8 + 0x18);
    if (local_80 != (uint *)0x0) {
      puVar10 = local_80;
    }
    uVar9 = -1 << (bVar5 & 0x1f) & puVar10[iVar7];
    while (uVar9 == 0) {
      lVar6 = (longlong)iVar7;
      uVar8 = uVar8 + 0x20;
      iVar7 = iVar7 + 1;
      uVar11 = local_78;
      if ((int)((local_78 - 1) + ((int)(local_78 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_14ce4cb10;
      uVar9 = puVar10[lVar6 + 1];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar11 = (int)lVar6 + -1 + uVar8;
    if ((int)local_78 < (int)uVar11) {
      uVar11 = local_78;
    }
  }
LAB_14ce4cb10:
  while( true ) {
    plVar3 = local_f0;
    if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
    }
    if (((TStack_e8.CurrentBitIndex == uVar11) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x18))) &&
       (plVar3 == (longlong *)(local_a8 + 8))) break;
    uVar8 = *(uint *)(*plVar3 + (longlong)TStack_e8.CurrentBitIndex * 0xc);
    lVar6 = (ulonglong)(uVar8 >> 9) * 8;
    uVar9 = *(uint *)(*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar6) + 8 +
                     (ulonglong)(uVar8 & 0x1ff) * 0x10);
    local_160[0] = *(undefined8 **)
                    (*(longlong *)
                      ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    uVar9 = uVar9 * 4;
    if ((uint)local_160[0] != uVar8) {
      uVar9 = uVar9 | ((uint)((ulonglong)local_160[0] >> 0x20) != uVar8) + 1;
    }
    this_00 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
              (*(longlong *)((longlong)this + 8) + 8);
    local_100 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64>(this_00,(ulong64 *)local_10c,(bool *)&local_100);
    uVar1 = *(ulonglong *)
             (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + lVar6) + 8 +
             (ulonglong)(uVar8 & 0x1ff) * 0x10);
    uVar9 = (uint)(uVar1 >> 0x20);
    if (uVar9 != 0xffffffff) {
      local_150 = *(code **)(*(longlong *)
                              ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
                              (uVar1 >> 0x29) * 8) + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      uVar9 = uVar9 * 4;
      if ((uint)local_150 != uVar8) {
        uVar9 = uVar9 | ((uint)((ulonglong)local_150 >> 0x20) != uVar8) + 1;
      }
      local_f8 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64>(this_00,(ulong64 *)(local_10c + 4),(bool *)&local_f8);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  local_58 = 0;
  if (local_60 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 8));
  return;
}

// operator() @ 14ce4d120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l58::<lambda_3>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  undefined1 auStackY_d8 [32];
  code *local_a8;
  undefined8 **local_a0;
  ForAnyElementType *local_98;
  ForAnyElementType *local_90;
  FDynamicMesh3 *local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68.MaxBits = 0x80;
  local_98 = &local_78;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_a0 = &local_98;
  local_70 = 0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l58::<lambda_3>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FGeometryScriptMeshSelection::ProcessByVertexID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_90 = &local_78;
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_a0 = &local_90;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l58::<lambda_3>::operator()'::__l2::<lambda_2>,void,int>
             ::Call;
  local_88 = param_1;
  FGeometryScriptMeshSelection::ProcessByEdgeID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// operator() @ 14ce4d280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l61::<lambda_3>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  EGeometryScriptMeshSelectionType EVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  FMeshFaceSelection *local_1d0;
  ulonglong local_1c8;
  code *local_1c0;
  FMeshFaceSelection **local_1b8;
  FMeshFaceSelection *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  FMeshFaceSelection **local_198;
  undefined1 local_190 [12];
  uint local_184;
  longlong local_180;
  uint local_178;
  int local_174;
  int local_168;
  TBaseIterator<0,1> local_160;
  FMeshFaceSelection local_128;
  undefined1 local_c8 [40];
  longlong *local_a0;
  undefined1 local_98 [40];
  longlong *local_70;
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1d0 = &local_128;
  local_1b8 = &local_1d0;
  local_1c0 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l61::<lambda_3>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_128.Selected.Elements._0_8_ = 0;
  local_128.Selected.Elements._8_8_ = 0;
  local_128.Selected.Elements._32_8_ = 0;
  local_128.Selected.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_128.Selected.Elements._48_8_ = _UNK_150631d98;
  local_128.Selected.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.Selected.HashSize = 0;
  local_128.Mesh = param_1;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_1c0,false);
  puVar1 = *(uint **)((longlong)this + 0x10);
  if (**(char **)((longlong)this + 8) == '\0') {
    if (**(char **)((longlong)this + 0x18) == '\0') {
      local_68._0_8_ = 0;
      local_40 = (longlong *)0x0;
      UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours
                (&local_128,*puVar1,(TUniqueFunction<bool___cdecl(int)> *)local_68);
      if (local_68._0_8_ == 0) goto LAB_14ce4d3ca;
      plVar6 = (longlong *)(local_68 + 0x10);
      plVar5 = local_40;
    }
    else {
      local_98._0_8_ = 0;
      local_70 = (longlong *)0x0;
      if ((int)*puVar1 < 1) goto LAB_14ce4d3ca;
      uVar7 = (ulonglong)*puVar1;
      do {
        UE::Geometry::FMeshFaceSelection::ExpandToFaceNeighbours
                  (&local_128,(TUniqueFunction<bool___cdecl(int)> *)local_98);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (local_98._0_8_ == 0) goto LAB_14ce4d3ca;
      plVar6 = (longlong *)(local_98 + 0x10);
      plVar5 = local_70;
    }
  }
  else {
    local_c8._0_8_ = 0;
    local_a0 = (longlong *)0x0;
    UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours
              (&local_128,*puVar1,true,(TUniqueFunction<bool___cdecl(int)> *)local_c8);
    if (local_c8._0_8_ == 0) goto LAB_14ce4d3ca;
    plVar6 = (longlong *)(local_c8 + 0x10);
    plVar5 = local_a0;
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = plVar5;
  }
  (**(code **)(*plVar6 + 0x10))();
LAB_14ce4d3ca:
  EVar4 = FGeometryScriptMeshSelection::GetSelectionType(*(FGeometryScriptMeshSelection **)this);
  puVar2 = *(undefined4 **)((longlong)this + 0x20);
  *puVar2 = 4;
  if (EVar4 == Triangles) {
    puVar2[1] = 1;
    UE::Geometry::FMeshFaceSelection::begin(&local_128,(TBaseIterator<0,1> *)local_190);
    UE::Geometry::FMeshFaceSelection::end(&local_128,&local_160);
    while( true ) {
      uVar3 = local_190._0_8_;
      if ((int)*(longlong *)(local_190._0_8_ + 8) - *(int *)(local_190._0_8_ + 0x34) != local_168) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
      }
      if (((local_174 == local_160.ElementIt._padding_._4_4_) &&
          (local_180 == local_160.ElementIt._padding_)) && (uVar3 == local_160.ElementIt._padding_))
      break;
      local_1c8 = (ulonglong)*(uint *)(*(longlong *)uVar3 + (longlong)local_174 * 0xc);
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64>
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 (*(longlong *)((longlong)this + 0x20) + 8),(ulong64 *)local_1d4,(bool *)&local_1c8)
      ;
      local_178 = local_178 & ~local_184;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_190 + 8));
    }
  }
  else {
    puVar2[1] = 2;
    local_1b0 = &local_128;
    local_1a8 = *(undefined8 *)((longlong)this + 0x20);
    local_198 = &local_1b0;
    local_1a0 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l61::<lambda_3>::operator()'::__l21::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              ((UDynamicMesh *)**(undefined8 **)((longlong)this + 0x28),
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_1a0);
  }
  local_128.Selected.HashSize = 0;
  if (local_128.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Selected.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Selected.Elements);
  return;
}

// operator() @ 14ce4de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l62::<lambda_4>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  undefined1 auStackY_d8 [32];
  code *local_a8;
  undefined8 **local_a0;
  ForAnyElementType *local_98;
  ForAnyElementType *local_90;
  FDynamicMesh3 *local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68.MaxBits = 0x80;
  local_98 = &local_78;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_a0 = &local_98;
  local_70 = 0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l62::<lambda_4>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_90 = &local_78;
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_a0 = &local_90;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l62::<lambda_4>::operator()'::__l2::<lambda_2>,void,int>
             ::Call;
  local_88 = param_1;
  FGeometryScriptMeshSelection::ProcessByEdgeID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// operator() @ 14ce4dfe0

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected'::__l123::<lambda_5>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  uint uVar13;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  int local_a4;
  longlong *local_a0;
  int iStack_98;
  uint uStack_94;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  plVar5 = *(longlong **)this;
  iStack_98 = 0;
  iVar3 = (int)plVar5[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar5 + 2);
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar3 != 0) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar2;
    }
    uVar11 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ce4e08d;
      uVar11 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uStack_94 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_84 = (int)lVar9 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_14ce4e08d:
  uVar11 = *(uint *)(plVar5 + 5);
  uVar13 = uVar11 & 0xffffffe0;
  iStack_78 = (int)plVar5[1] - *(int *)((longlong)plVar5 + 0x34);
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = plVar5;
  local_90 = pTVar2;
  iStack_7c = iStack_84;
  local_70 = plVar5;
  TStack_68.Array = pTVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)(plVar5 + 5);
  if (uVar11 != uVar4) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ce4e1a0;
      uVar11 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14ce4e1a0:
  do {
    plVar7 = local_70;
    if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) && (TStack_68.Array == pTVar2)) && (plVar7 == plVar5)
       ) {
      return;
    }
    uVar13 = *(uint *)(*plVar7 + (longlong)TStack_68.CurrentBitIndex * 0xc);
    if ((param_1->TriangleGroups).bIsSet == false) {
      local_res20[0] = 0xffffffff;
    }
    else {
      if ((-1 < (int)uVar13) &&
         ((int)uVar13 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        lVar9 = (ulonglong)(uVar13 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar9) + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe) {
          local_res20[0] =
               *(undefined4 *)
                (*(longlong *)
                  ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + lVar9) +
                (ulonglong)(uVar13 & 0x1ff) * 4);
          goto LAB_14ce4e245;
        }
      }
      local_res20[0] = 0;
    }
LAB_14ce4e245:
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
               &local_a4,(bool *)local_res20);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// operator() @ 14ce4e540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l75::<lambda_7>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  undefined1 auStackY_d8 [32];
  code *local_a8;
  undefined8 **local_a0;
  ForAnyElementType *local_98;
  ForAnyElementType *local_90;
  undefined8 local_88;
  FDynamicMesh3 *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68.MaxBits = 0x80;
  local_98 = &local_78;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_a0 = &local_98;
  local_70 = 0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l75::<lambda_7>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FGeometryScriptMeshSelection::ProcessByVertexID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_90 = &local_78;
  local_88 = *(undefined8 *)((longlong)this + 8);
  local_a0 = &local_90;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l75::<lambda_7>::operator()'::__l2::<lambda_2>,void,int>
             ::Call;
  local_80 = param_1;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// operator() @ 14ce4e870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l79::<lambda_8>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  undefined1 auStackY_d8 [32];
  code *local_a8;
  FDynamicMesh3 **local_a0;
  ForAnyElementType *local_98;
  FDynamicMesh3 *local_90;
  ForAnyElementType *local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68.MaxBits = 0x80;
  local_98 = &local_78;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_a0 = (FDynamicMesh3 **)&local_98;
  local_70 = 0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l79::<lambda_8>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FGeometryScriptMeshSelection::ProcessByEdgeID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_88 = &local_78;
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_a0 = &local_90;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l79::<lambda_8>::operator()'::__l2::<lambda_2>,void,int>
             ::Call;
  local_90 = param_1;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// CombineMeshSelections @ 14ce60920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections
          (FGeometryScriptMeshSelection *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,EGeometryScriptCombineSelectionMode param_4)

{
  EGeometryScriptMeshSelectionType EVar1;
  EGeometryScriptMeshSelectionType EVar2;
  
  EVar1 = FGeometryScriptMeshSelection::GetSelectionType(param_1);
  EVar2 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
  if ((EVar1 != EVar2) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  FGeometryScriptMeshSelection::SetSelection(param_3,param_1);
  FGeometryScriptMeshSelection::CombineSelectionInPlace(param_3,param_2,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->GeoSelection).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertIndexArrayToMeshSelection @ 14ce65bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection
          (UDynamicMesh *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          EGeometryScriptMeshSelectionType param_3,FGeometryScriptMeshSelection *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  ForElementType<unsigned_int> FVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  int local_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined4 local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  ulong64 local_120;
  TArray<int,TSizedDefaultAllocator<32>_> *local_118;
  UDynamicMesh *local_110;
  undefined1 local_108 [16];
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  FScriptContainerElement *local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c8;
  FSparseArrayAllocationInfo local_c0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [32];
  ForElementType<unsigned_int> local_80;
  int local_78;
  int iStack_70;
  int iStack_6c;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_118 = param_2;
  local_110 = param_1;
  local_108._0_8_ = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_a8._0_4_ = Face;
  local_a8._4_4_ = Triangle;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_a0._8_8_ = 0;
  local_80 = (ForElementType<unsigned_int>)0x0;
  _local_78 = ___xmm_00000000ffffffff0000008000000000;
  _iStack_70 = _UNK_150631d98;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  if (param_3 == Vertices) {
    pFVar16 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    local_d0 = pFVar16 + (longlong)iVar2 * 4;
    while( true ) {
      pFVar10 = local_d0;
      if (local_118->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_148);
      }
      if (pFVar16 == pFVar10) break;
      uVar17 = *(uint *)pFVar16;
      if (iStack_6c == 0) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,(ForAnyElementType *)local_a0,(int *)(local_a0 + 8),
                           (int *)(local_a0 + 0xc));
        iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),1);
        FVar7 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
        if (local_80 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_80;
        }
        bVar12 = (byte)iVar4 & 0x1f;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x1f;
          bVar12 = bVar12 - 0x20;
        }
        puVar1 = (uint *)((longlong)FVar7 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << (bVar12 & 0x1f));
      }
      else {
        iVar3 = iStack_70;
        lVar11 = (longlong)iStack_70;
        iStack_6c = iStack_6c + -1;
        iStack_70 = *(int *)(local_a0._0_8_ + lVar11 * 0x10 + 4);
        if (iStack_6c != 0) {
          *(undefined4 *)
           (local_a0._0_8_ + (longlong)*(int *)(local_a0._0_8_ + lVar11 * 0x10 + 4) * 0x10) =
               0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,&local_c0,iVar3);
      if (local_c0.Pointer != (ulonglong *)0x0) {
        *(ulonglong *)local_c0.Pointer = (ulonglong)uVar17;
        *(undefined4 *)((longlong)local_c0.Pointer + 8) = 0xffffffff;
      }
      uVar8 = *(ulonglong *)local_c0.Pointer;
      uVar17 = (int)(uVar8 >> 0x20) * 0x17 + (int)uVar8;
      if ((local_a0._8_4_ - iStack_6c != 1) && (local_a0._8_4_ != iStack_6c)) {
        FVar6.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar6.Data = local_60.Data;
        }
        for (iVar3 = *(int *)((longlong)FVar6.Data + (ulonglong)(local_58 - 1 & uVar17) * 4);
            iVar3 != -1; iVar3 = *(int *)(local_a0._0_8_ + (longlong)iVar3 * 0x10 + 8)) {
          if (*(ulonglong *)(local_a0._0_8_ + (longlong)iVar3 * 0x10) == uVar8) {
            if (iVar3 != -1) {
              *(ulonglong *)(local_a0._0_8_ + (longlong)iVar3 * 0x10) = uVar8;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_a0,local_c0.Index,1);
              goto LAB_14ce66537;
            }
            break;
          }
        }
      }
      uVar14 = local_a0._8_4_ - iStack_6c;
      uVar9 = 1;
      if (3 < uVar14) {
        uVar8 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar9 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((int)uVar14 < 1) || ((int)uVar9 <= (int)local_58)) {
        uVar17 = local_58 - 1 & uVar17;
        *(uint *)((longlong)local_c0.Pointer + 0xc) = uVar17;
        FVar6.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar6.Data = local_60.Data;
        }
        uVar8 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)((longlong)local_c0.Pointer + 8) =
             *(undefined4 *)((longlong)FVar6.Data + uVar8 * 4);
        *(int *)((longlong)FVar6.Data + uVar8 * 4) = local_c0.Index;
      }
      else {
        local_58 = uVar9;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,4);
        }
        if (uVar9 != 0) {
          uVar17 = uVar9;
          if (uVar9 < 2) {
            if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar17 = 0;
              goto LAB_14ce66371;
            }
          }
          else {
LAB_14ce66371:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_60,0,uVar17,4);
          }
          if (0 < (int)uVar9) {
            uVar13 = (ulonglong)uVar9;
            uVar8 = 0;
            do {
              FVar6.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar6.Data = local_60.Data;
              }
              uVar5 = uVar8 & (longlong)(int)uVar9 - 1U;
              uVar8 = uVar8 + 1;
              *(undefined4 *)((longlong)FVar6.Data + uVar5 * 4) = 0xffffffff;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        if (local_58 != 0) {
          pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10);
          uStack_13c = 1;
          local_140 = 0;
          iStack_12c = 0;
          iStack_128 = 0;
          if (local_78 != 0) {
            FVar7 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
            if (local_80 != (ForElementType<unsigned_int>)0x0) {
              FVar7 = local_80;
            }
            uVar17 = *(uint *)FVar7;
            iStack_128 = 0;
            local_140 = 0;
            while (uVar17 == 0) {
              iStack_128 = iStack_128 + 0x20;
              lVar11 = (longlong)local_140;
              local_140 = local_140 + 1;
              if ((int)((local_78 + -1 >> 0x1f & 0x1fU) + local_78 + -1) >> 5 < local_140)
              goto LAB_14ce6645d;
              uVar17 = ((uint *)((longlong)FVar7 + 4))[lVar11];
            }
            uStack_13c = -uVar17 & uVar17;
            uVar8 = (ulonglong)uStack_13c * 2 + 1;
            lVar11 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iStack_12c = iStack_128 + -1 + (int)lVar11;
            if (local_78 < iStack_12c) {
LAB_14ce6645d:
              iStack_12c = local_78;
            }
          }
          local_130 = 0xffffffff;
          local_f8 = (longlong *)local_a0;
          local_f0._padding_ = CONCAT44(uStack_13c,local_140);
          local_f0.CurrentBitIndex = iStack_12c;
          local_f0.UnvisitedBitMask = 0xffffffff;
          local_f0._28_4_ = uStack_124;
          local_f0.BaseBitIndex = iStack_128;
          iVar3 = iStack_12c;
          local_f0.Array = pTStack_138;
          if (iStack_12c < local_78) {
            do {
              puVar15 = (undefined8 *)((longlong)iVar3 * 0x10 + *local_f8);
              uVar17 = (int)((ulonglong)*puVar15 >> 0x20) * 0x17 + (int)*puVar15 & local_58 - 1;
              *(uint *)((longlong)puVar15 + 0xc) = uVar17;
              FVar6.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar6.Data = local_60.Data;
              }
              uVar8 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar17;
              *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar6.Data + uVar8 * 4);
              *(int *)((longlong)FVar6.Data + uVar8 * 4) = iVar3;
              local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
              iVar3 = local_f0.CurrentBitIndex;
            } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
          }
        }
      }
LAB_14ce66537:
      pFVar16 = pFVar16 + 4;
    }
    local_a8._0_4_ = Vertex;
  }
  else {
    if (param_3 != Triangles) {
      if (param_3 == Polygroups) {
        pFVar10 = (param_2->AllocatorInstance).Data;
        iVar2 = param_2->ArrayNum;
        pFVar16 = pFVar10 + (longlong)iVar2 * 4;
        while( true ) {
          if (local_118->ArrayNum != iVar2) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_148);
          }
          if (pFVar10 == pFVar16) break;
          local_108._0_8_ = (ulonglong)*(uint *)pFVar10 << 0x20 | 0xffffffff;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)local_a0,&local_120,(bool *)local_108);
          pFVar10 = pFVar10 + 4;
        }
        local_a8._0_4_ = Face;
        local_a8._4_4_ = Polygroup;
        param_1 = local_110;
      }
      else if (param_3 == Edges) {
        local_d0 = (FScriptContainerElement *)local_a8;
        local_108._8_8_ = &local_d0;
        local_a8._0_4_ = Edge;
        local_108._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection'::__l25::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        local_c8 = param_2;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           local_108);
      }
      else {
        `UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection'::__l25::
        <lambda_2>::operator()(local_148);
      }
      goto LAB_14ce66561;
    }
    pFVar16 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    local_d0 = pFVar16 + (longlong)iVar2 * 4;
    while( true ) {
      pFVar10 = local_d0;
      if (local_118->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_148);
      }
      if (pFVar16 == pFVar10) break;
      uVar17 = *(uint *)pFVar16;
      if (iStack_6c == 0) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,(ForAnyElementType *)local_a0,(int *)(local_a0 + 8),
                           (int *)(local_a0 + 0xc));
        iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),1);
        FVar7 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
        if (local_80 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_80;
        }
        bVar12 = (byte)iVar4 & 0x1f;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x1f;
          bVar12 = bVar12 - 0x20;
        }
        puVar1 = (uint *)((longlong)FVar7 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << (bVar12 & 0x1f));
      }
      else {
        iVar3 = iStack_70;
        lVar11 = (longlong)iStack_70;
        iStack_6c = iStack_6c + -1;
        iStack_70 = *(int *)(local_a0._0_8_ + lVar11 * 0x10 + 4);
        if (iStack_6c != 0) {
          *(undefined4 *)
           (local_a0._0_8_ + (longlong)*(int *)(local_a0._0_8_ + lVar11 * 0x10 + 4) * 0x10) =
               0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,&local_c0,iVar3);
      if (local_c0.Pointer != (ulonglong *)0x0) {
        *(ulonglong *)local_c0.Pointer = (ulonglong)uVar17;
        *(undefined4 *)((longlong)local_c0.Pointer + 8) = 0xffffffff;
      }
      uVar8 = *(ulonglong *)local_c0.Pointer;
      uVar17 = (int)(uVar8 >> 0x20) * 0x17 + (int)uVar8;
      if ((local_a0._8_4_ - iStack_6c != 1) && (local_a0._8_4_ != iStack_6c)) {
        FVar6.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar6.Data = local_60.Data;
        }
        for (iVar3 = *(int *)((longlong)FVar6.Data + (ulonglong)(local_58 - 1 & uVar17) * 4);
            iVar3 != -1; iVar3 = *(int *)(local_a0._0_8_ + (longlong)iVar3 * 0x10 + 8)) {
          if (*(ulonglong *)(local_a0._0_8_ + (longlong)iVar3 * 0x10) == uVar8) {
            if (iVar3 != -1) {
              *(ulonglong *)(local_a0._0_8_ + (longlong)iVar3 * 0x10) = uVar8;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_a0,local_c0.Index,1);
              goto LAB_14ce66137;
            }
            break;
          }
        }
      }
      uVar14 = local_a0._8_4_ - iStack_6c;
      uVar9 = 1;
      if (3 < uVar14) {
        uVar8 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar9 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((int)uVar14 < 1) || ((int)uVar9 <= (int)local_58)) {
        uVar17 = local_58 - 1 & uVar17;
        *(uint *)((longlong)local_c0.Pointer + 0xc) = uVar17;
        FVar6.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar6.Data = local_60.Data;
        }
        uVar8 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)((longlong)local_c0.Pointer + 8) =
             *(undefined4 *)((longlong)FVar6.Data + uVar8 * 4);
        *(int *)((longlong)FVar6.Data + uVar8 * 4) = local_c0.Index;
      }
      else {
        local_58 = uVar9;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,4);
        }
        if (uVar9 != 0) {
          uVar17 = uVar9;
          if (uVar9 < 2) {
            if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar17 = 0;
              goto LAB_14ce65f61;
            }
          }
          else {
LAB_14ce65f61:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_60,0,uVar17,4);
          }
          if (0 < (int)uVar9) {
            uVar13 = (ulonglong)uVar9;
            uVar8 = 0;
            do {
              FVar6.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar6.Data = local_60.Data;
              }
              uVar5 = uVar8 & (longlong)(int)uVar9 - 1U;
              uVar8 = uVar8 + 1;
              *(undefined4 *)((longlong)FVar6.Data + uVar5 * 4) = 0xffffffff;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        if (local_58 != 0) {
          pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10);
          uStack_13c = 1;
          local_140 = 0;
          iStack_12c = 0;
          iStack_128 = 0;
          if (local_78 != 0) {
            FVar7 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
            if (local_80 != (ForElementType<unsigned_int>)0x0) {
              FVar7 = local_80;
            }
            uVar17 = *(uint *)FVar7;
            iStack_128 = 0;
            local_140 = 0;
            while (uVar17 == 0) {
              iStack_128 = iStack_128 + 0x20;
              lVar11 = (longlong)local_140;
              local_140 = local_140 + 1;
              if ((int)((local_78 + -1 >> 0x1f & 0x1fU) + local_78 + -1) >> 5 < local_140)
              goto LAB_14ce6605c;
              uVar17 = ((uint *)((longlong)FVar7 + 4))[lVar11];
            }
            uStack_13c = -uVar17 & uVar17;
            uVar8 = (ulonglong)uStack_13c * 2 + 1;
            lVar11 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iStack_12c = iStack_128 + -1 + (int)lVar11;
            if (local_78 < iStack_12c) {
LAB_14ce6605c:
              iStack_12c = local_78;
            }
          }
          local_130 = 0xffffffff;
          local_f8 = (longlong *)local_a0;
          local_f0._padding_ = CONCAT44(uStack_13c,local_140);
          local_f0.CurrentBitIndex = iStack_12c;
          local_f0.UnvisitedBitMask = 0xffffffff;
          local_f0._28_4_ = uStack_124;
          local_f0.BaseBitIndex = iStack_128;
          iVar3 = iStack_12c;
          local_f0.Array = pTStack_138;
          if (iStack_12c < local_78) {
            do {
              puVar15 = (undefined8 *)((longlong)iVar3 * 0x10 + *local_f8);
              uVar17 = (int)((ulonglong)*puVar15 >> 0x20) * 0x17 + (int)*puVar15 & local_58 - 1;
              *(uint *)((longlong)puVar15 + 0xc) = uVar17;
              FVar6.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar6.Data = local_60.Data;
              }
              uVar8 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar17;
              *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar6.Data + uVar8 * 4);
              *(int *)((longlong)FVar6.Data + uVar8 * 4) = iVar3;
              local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
              iVar3 = local_f0.CurrentBitIndex;
            } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
          }
        }
      }
LAB_14ce66137:
      pFVar16 = pFVar16 + 4;
    }
    local_a8._0_4_ = Face;
  }
  local_a8._4_4_ = Triangle;
  param_1 = local_110;
  param_4 = (FGeometryScriptMeshSelection *)local_108._0_8_;
LAB_14ce66561:
  FGeometryScriptMeshSelection::SetSelection(param_4,(FGeometrySelection *)local_a8);
  local_58 = 0;
  if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_60.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a0);
  return param_1;
}

// ConvertIndexListToMeshSelection @ 14ce665e0

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,
          EGeometryScriptMeshSelectionType param_3,FGeometryScriptMeshSelection *param_4)

{
  EGeometryScriptIndexType EVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  EGeometryScriptMeshSelectionType EVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  FGeometryScriptMeshSelection local_28;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  EVar1 = param_2->IndexType;
  if (EVar1 == Any) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return param_1;
  }
  if (EVar1 == Triangle) {
    EVar3 = Triangles;
  }
  else if (EVar1 == Edge) {
    EVar3 = Edges;
  }
  else if (EVar1 == Vertex) {
    EVar3 = Vertices;
  }
  else {
    if (EVar1 != PolygroupID) {
      if (EVar1 == MaterialID) {
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        local_38._0_8_ =
             TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::
             operator*<TArray<int,TSizedDefaultAllocator<32>_>_>(&param_2->List);
        local_38._8_8_ = &local_48;
        local_28.GeoSelection.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)local_38;
        local_28.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection'::__l56::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           &local_28);
        if (param_3 == Triangles) {
          ConvertIndexArrayToMeshSelection(param_1,&local_48,Triangles,param_4);
        }
        else {
          FGeometryScriptMeshSelection::FGeometryScriptMeshSelection
                    ((FGeometryScriptMeshSelection *)local_38);
          ConvertIndexArrayToMeshSelection
                    (param_1,&local_48,Triangles,(FGeometryScriptMeshSelection *)local_38);
          local_28.GeoSelection.Object = (FGeometrySelection *)local_38._0_8_;
          local_28.GeoSelection.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_38._8_8_;
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_38._8_8_ !=
              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            LOCK();
            *(atomic<int> *)(local_38._8_8_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_38._8_8_ + 8) + 1);
            UNLOCK();
          }
          ConvertMeshSelection(param_1,&local_28,param_4,param_3,true);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_38._8_8_);
        }
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
      goto LAB_14ce6680b;
    }
    EVar3 = Polygroups;
  }
  if (param_3 == EVar3) {
    pTVar2 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::
             operator*<TArray<int,TSizedDefaultAllocator<32>_>_>(&param_2->List);
    ConvertIndexArrayToMeshSelection(param_1,pTVar2,EVar3,param_4);
  }
  else {
    FGeometryScriptMeshSelection::FGeometryScriptMeshSelection
              ((FGeometryScriptMeshSelection *)local_38);
    pTVar2 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::
             operator*<TArray<int,TSizedDefaultAllocator<32>_>_>(&param_2->List);
    ConvertIndexArrayToMeshSelection(param_1,pTVar2,EVar3,(FGeometryScriptMeshSelection *)local_38);
    local_28.GeoSelection.Object = (FGeometrySelection *)local_38._0_8_;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_38._8_8_;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_38._8_8_ !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_38._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_38._8_8_ + 8) + 1);
      UNLOCK();
    }
    ConvertMeshSelection(param_1,&local_28,param_4,param_3,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._8_8_);
  }
LAB_14ce6680b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ConvertIndexSetToMeshSelection @ 14ce66840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection
          (UDynamicMesh *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          EGeometryScriptMeshSelectionType param_3,FGeometryScriptMeshSelection *param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  undefined8 uVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  int iVar6;
  int iVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  ForElementType<unsigned_int> FVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  ulong64 local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 local_120;
  UDynamicMesh *local_118;
  FGeometryScriptMeshSelection *local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  FGeometryScriptMeshSelection **local_f8;
  FSparseArrayAllocationInfo local_f0;
  longlong local_d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [32];
  ForElementType<unsigned_int> local_80;
  int local_78;
  int iStack_70;
  int iStack_6c;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_118 = param_1;
  local_110 = param_4;
  local_100 = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_a8._0_4_ = Face;
  local_a8._4_4_ = Triangle;
  local_a0._0_8_ = (TReferenceControllerBase<1> *)0x0;
  local_a0._8_8_ = 0;
  local_80 = (ForElementType<unsigned_int>)0x0;
  _local_78 = ___xmm_00000000ffffffff0000008000000000;
  _iStack_70 = _UNK_150631d98;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  if (param_3 == Vertices) {
    puVar1 = &(param_2->Elements).field_0x10;
    local_1a0.UnvisitedBitMask = 0xffffffff;
    local_1a0._padding_._0_4_ = 0;
    local_1a0._padding_._4_4_ = 1;
    local_1a0.CurrentBitIndex = 0;
    local_1a0.BaseBitIndex = 0;
    local_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(param_2->Elements).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
    }
    TStack_178._padding_ = CONCAT44(local_1a0._padding_._4_4_,(int)local_1a0._padding_);
    TStack_178.CurrentBitIndex = local_1a0.CurrentBitIndex;
    TStack_178.UnvisitedBitMask = local_1a0.UnvisitedBitMask;
    TStack_178._28_4_ = local_1a0._28_4_;
    TStack_178.BaseBitIndex = local_1a0.BaseBitIndex;
    TStack_178.Array = local_1a0.Array;
    uStack_158 = CONCAT44(uStack_158._4_4_,
                          *(int *)&(param_2->Elements).field_0x8 -
                          *(int *)&(param_2->Elements).field_0x34);
    TStack_140.Array = local_1a0.Array;
    local_120 = uStack_158;
    local_180 = param_2;
    local_148 = param_2;
    TStack_140._padding_ = TStack_178._padding_;
    TStack_140._16_8_ = TStack_178._16_8_;
    TStack_140._24_8_ = TStack_178._24_8_;
    pTVar8 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
             TConstSetBitIterator<FDefaultBitArrayAllocator>
                       (&local_1a0,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                        *(int *)&(param_2->Elements).field_0x28);
    local_d8 = pTVar8->_padding_;
    pTStack_d0 = pTVar8->Array;
    local_c8._0_4_ = pTVar8->UnvisitedBitMask;
    local_c8._4_4_ = pTVar8->CurrentBitIndex;
    uStack_c0 = *(undefined8 *)&pTVar8->BaseBitIndex;
    while( true ) {
      pTVar5 = local_148;
      puVar15 = (ulonglong *)0x0;
      if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
          (int)local_120) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (((TStack_140.CurrentBitIndex == local_c8._4_4_) && (TStack_140.Array == pTStack_d0)) &&
         (pTVar5 == param_2)) break;
      uVar20 = *(uint *)(*(longlong *)&pTVar5->Elements + (longlong)TStack_140.CurrentBitIndex * 0xc
                        );
      if (iStack_6c == 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,(ForAnyElementType *)local_a0,(int *)(local_a0 + 8),
                           (int *)(local_a0 + 0xc));
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),1);
        FVar11 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
        if (local_80 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_80;
        }
        bVar16 = (byte)iVar7 & 0x1f;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0x1f;
          bVar16 = bVar16 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar11 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar16 & 0x1f));
      }
      else {
        iVar6 = iStack_70;
        lVar14 = (longlong)iStack_70;
        iStack_6c = iStack_6c + -1;
        iStack_70 = *(int *)(local_a0._0_8_ + lVar14 * 0x10 + 4);
        if (iStack_6c != 0) {
          *(undefined4 *)
           &((FScriptContainerElement *)
            (local_a0._0_8_ + (longlong)*(int *)(local_a0._0_8_ + lVar14 * 0x10 + 4) * 0x10))->
            field_0x0 = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,&local_f0,iVar6);
      if (local_f0.Pointer != (ulonglong *)0x0) {
        *(ulonglong *)local_f0.Pointer = (ulonglong)uVar20;
        *(undefined4 *)((longlong)local_f0.Pointer + 8) = 0xffffffff;
        puVar15 = local_f0.Pointer;
      }
      uVar12 = *puVar15;
      uVar20 = (int)(uVar12 >> 0x20) * 0x17 + (int)uVar12;
      if ((local_a0._8_4_ - iStack_6c != 1) && (local_a0._8_4_ != iStack_6c)) {
        FVar10.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_60.Data;
        }
        for (iVar6 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_58 - 1 & uVar20) * 4);
            iVar6 != -1; iVar6 = *(int *)(local_a0._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
          if (*(ulonglong *)
               &((FScriptContainerElement *)(local_a0._0_8_ + (longlong)iVar6 * 0x10))->field_0x0 ==
              uVar12) {
            if (iVar6 != -1) {
              *(ulonglong *)
               &((FScriptContainerElement *)(local_a0._0_8_ + (longlong)iVar6 * 0x10))->field_0x0 =
                   uVar12;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_a0,local_f0.Index,1);
              goto LAB_14ce67463;
            }
            break;
          }
        }
      }
      uVar19 = local_a0._8_4_ - iStack_6c;
      uVar13 = 1;
      if (3 < uVar19) {
        uVar12 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar13 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar13 <= (int)local_58)) {
        uVar20 = local_58 - 1 & uVar20;
        *(uint *)((longlong)puVar15 + 0xc) = uVar20;
        FVar10.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_60.Data;
        }
        uVar12 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar10.Data + uVar12 * 4);
        *(int *)((longlong)FVar10.Data + uVar12 * 4) = local_f0.Index;
      }
      else {
        local_58 = uVar13;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,4);
        }
        if (uVar13 != 0) {
          uVar20 = uVar13;
          if (uVar13 < 2) {
            if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar20 = 0;
              goto LAB_14ce67277;
            }
          }
          else {
LAB_14ce67277:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_60,0,uVar20,4);
          }
          if (0 < (int)uVar13) {
            uVar17 = (ulonglong)uVar13;
            uVar12 = 0;
            do {
              FVar10.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar10.Data = local_60.Data;
              }
              uVar9 = uVar12 & (longlong)(int)uVar13 - 1U;
              uVar12 = uVar12 + 1;
              *(undefined4 *)((longlong)FVar10.Data + uVar9 * 4) = 0xffffffff;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        if (local_58 != 0) {
          local_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10);
          local_1a0._padding_._4_4_ = 1;
          local_1a0._padding_._0_4_ = 0;
          local_1a0.CurrentBitIndex = 0;
          local_1a0.BaseBitIndex = 0;
          if (local_78 != 0) {
            FVar11 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
            if (local_80 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_80;
            }
            uVar20 = *(uint *)FVar11;
            local_1a0.BaseBitIndex = 0;
            local_1a0._padding_._0_4_ = 0;
            while (uVar20 == 0) {
              local_1a0.BaseBitIndex = local_1a0.BaseBitIndex + 0x20;
              lVar14 = (longlong)(int)local_1a0._padding_;
              local_1a0._padding_._0_4_ = (int)local_1a0._padding_ + 1;
              if ((int)(local_78 + -1 + (local_78 + -1 >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_1a0._padding_) goto LAB_14ce6737a;
              uVar20 = ((uint *)((longlong)FVar11 + 4))[lVar14];
            }
            local_1a0._padding_._4_4_ = -uVar20 & uVar20;
            uVar12 = (ulonglong)local_1a0._padding_._4_4_ * 2 + 1;
            lVar14 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_1a0.CurrentBitIndex = (int)lVar14 + -1 + local_1a0.BaseBitIndex;
            if (local_78 < local_1a0.CurrentBitIndex) {
LAB_14ce6737a:
              local_1a0.CurrentBitIndex = local_78;
            }
          }
          local_1a0.UnvisitedBitMask = 0xffffffff;
          local_180 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a0;
          TStack_178._padding_ = CONCAT44(local_1a0._padding_._4_4_,(int)local_1a0._padding_);
          TStack_178.CurrentBitIndex = local_1a0.CurrentBitIndex;
          TStack_178.UnvisitedBitMask = 0xffffffff;
          TStack_178._28_4_ = local_1a0._28_4_;
          TStack_178.BaseBitIndex = local_1a0.BaseBitIndex;
          iVar6 = local_1a0.CurrentBitIndex;
          TStack_178.Array = local_1a0.Array;
          if (local_1a0.CurrentBitIndex < local_78) {
            do {
              puVar18 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)&local_180->Elements);
              uVar20 = (int)((ulonglong)*puVar18 >> 0x20) * 0x17 + (int)*puVar18 & local_58 - 1;
              *(uint *)((longlong)puVar18 + 0xc) = uVar20;
              FVar10.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar10.Data = local_60.Data;
              }
              uVar12 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar20;
              *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)FVar10.Data + uVar12 * 4);
              *(int *)((longlong)FVar10.Data + uVar12 * 4) = iVar6;
              TStack_178.UnvisitedBitMask =
                   TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
              iVar6 = TStack_178.CurrentBitIndex;
            } while (TStack_178.CurrentBitIndex < (TStack_178.Array)->NumBits);
          }
        }
      }
LAB_14ce67463:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      param_2 = local_100;
    }
    local_a8._0_4_ = Vertex;
  }
  else {
    if (param_3 != Triangles) {
      if (param_3 == Polygroups) {
        puVar1 = &(param_2->Elements).field_0x10;
        local_1a0.UnvisitedBitMask = 0xffffffff;
        local_1a0._padding_._0_4_ = 0;
        local_1a0._padding_._4_4_ = 1;
        local_1a0.CurrentBitIndex = 0;
        local_1a0.BaseBitIndex = 0;
        local_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(param_2->Elements).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
        }
        TStack_178._padding_ = CONCAT44(local_1a0._padding_._4_4_,(int)local_1a0._padding_);
        TStack_178.CurrentBitIndex = local_1a0.CurrentBitIndex;
        TStack_178.UnvisitedBitMask = local_1a0.UnvisitedBitMask;
        TStack_178._28_4_ = local_1a0._28_4_;
        TStack_178.BaseBitIndex = local_1a0.BaseBitIndex;
        TStack_140.Array = local_1a0.Array;
        local_120 = CONCAT44(local_120._4_4_,
                             *(int *)&(param_2->Elements).field_0x8 -
                             *(int *)&(param_2->Elements).field_0x34);
        TStack_178.Array = local_1a0.Array;
        uStack_158 = local_120;
        local_180 = param_2;
        local_148 = param_2;
        TStack_140._padding_ = TStack_178._padding_;
        TStack_140._16_8_ = TStack_178._16_8_;
        TStack_140._24_8_ = TStack_178._24_8_;
        pTVar8 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                 TConstSetBitIterator<FDefaultBitArrayAllocator>
                           (&local_1a0,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                            *(int *)&(param_2->Elements).field_0x28);
        TStack_140._padding_ = pTVar8->_padding_;
        pTVar3 = pTVar8->Array;
        uVar4._0_4_ = pTVar8->UnvisitedBitMask;
        uVar4._4_4_ = pTVar8->CurrentBitIndex;
        TStack_140.BaseBitIndex = pTVar8->BaseBitIndex;
        TStack_140._28_4_ = *(undefined4 *)&pTVar8->field_0x1c;
        TStack_140.Array = pTVar3;
        TStack_140._16_8_ = uVar4;
        while( true ) {
          pTVar5 = local_180;
          if (*(int *)&(local_180->Elements).field_0x8 - *(int *)&(local_180->Elements).field_0x34
              != (int)uStack_158) {
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
          }
          if (((TStack_178.CurrentBitIndex == uVar4._4_4_) && (TStack_178.Array == pTVar3)) &&
             (pTVar5 == param_2)) break;
          local_110 = (FGeometryScriptMeshSelection *)
                      ((ulonglong)
                       *(uint *)(*(longlong *)&pTVar5->Elements +
                                (longlong)TStack_178.CurrentBitIndex * 0xc) << 0x20 | 0xffffffff);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)local_a0,&local_150,(bool *)&local_110);
          TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
        }
        local_a8._0_4_ = Face;
        local_a8._4_4_ = Polygroup;
        param_1 = local_118;
      }
      else if (param_3 == Edges) {
        local_110 = (FGeometryScriptMeshSelection *)local_a8;
        local_a8._0_4_ = Edge;
        local_f8 = &local_110;
        local_100 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection'::__l25::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                    ::Call;
        local_108 = param_2;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           &local_100);
      }
      else {
        `UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection'::__l25::
        <lambda_2>::operator()(local_1a8);
      }
      goto LAB_14ce67496;
    }
    puVar1 = &(param_2->Elements).field_0x10;
    local_1a0.UnvisitedBitMask = 0xffffffff;
    local_1a0._padding_._0_4_ = 0;
    local_1a0._padding_._4_4_ = 1;
    local_1a0.CurrentBitIndex = 0;
    local_1a0.BaseBitIndex = 0;
    local_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(param_2->Elements).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
    }
    TStack_178._padding_ = CONCAT44(local_1a0._padding_._4_4_,(int)local_1a0._padding_);
    TStack_178.CurrentBitIndex = local_1a0.CurrentBitIndex;
    TStack_178.UnvisitedBitMask = local_1a0.UnvisitedBitMask;
    TStack_178._28_4_ = local_1a0._28_4_;
    TStack_178.BaseBitIndex = local_1a0.BaseBitIndex;
    TStack_178.Array = local_1a0.Array;
    uStack_158 = CONCAT44(uStack_158._4_4_,
                          *(int *)&(param_2->Elements).field_0x8 -
                          *(int *)&(param_2->Elements).field_0x34);
    TStack_140.Array = local_1a0.Array;
    local_120 = uStack_158;
    local_180 = param_2;
    local_148 = param_2;
    TStack_140._padding_ = TStack_178._padding_;
    TStack_140._16_8_ = TStack_178._16_8_;
    TStack_140._24_8_ = TStack_178._24_8_;
    pTVar8 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
             TConstSetBitIterator<FDefaultBitArrayAllocator>
                       (&local_1a0,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                        *(int *)&(param_2->Elements).field_0x28);
    local_d8 = pTVar8->_padding_;
    pTStack_d0 = pTVar8->Array;
    local_c8._0_4_ = pTVar8->UnvisitedBitMask;
    local_c8._4_4_ = pTVar8->CurrentBitIndex;
    uStack_c0 = *(undefined8 *)&pTVar8->BaseBitIndex;
    while( true ) {
      pTVar5 = local_148;
      puVar15 = (ulonglong *)0x0;
      if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
          (int)local_120) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (((TStack_140.CurrentBitIndex == local_c8._4_4_) && (TStack_140.Array == pTStack_d0)) &&
         (pTVar5 == param_2)) break;
      uVar20 = *(uint *)(*(longlong *)&pTVar5->Elements + (longlong)TStack_140.CurrentBitIndex * 0xc
                        );
      if (iStack_6c == 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,(ForAnyElementType *)local_a0,(int *)(local_a0 + 8),
                           (int *)(local_a0 + 0xc));
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),1);
        FVar11 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
        if (local_80 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_80;
        }
        bVar16 = (byte)iVar7 & 0x1f;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0x1f;
          bVar16 = bVar16 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar11 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar16 & 0x1f));
      }
      else {
        iVar6 = iStack_70;
        lVar14 = (longlong)iStack_70;
        iStack_6c = iStack_6c + -1;
        iStack_70 = *(int *)(local_a0._0_8_ + lVar14 * 0x10 + 4);
        if (iStack_6c != 0) {
          *(undefined4 *)
           &((FScriptContainerElement *)
            (local_a0._0_8_ + (longlong)*(int *)(local_a0._0_8_ + lVar14 * 0x10 + 4) * 0x10))->
            field_0x0 = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,&local_f0,iVar6);
      if (local_f0.Pointer != (ulonglong *)0x0) {
        *(ulonglong *)local_f0.Pointer = (ulonglong)uVar20;
        *(undefined4 *)((longlong)local_f0.Pointer + 8) = 0xffffffff;
        puVar15 = local_f0.Pointer;
      }
      uVar12 = *puVar15;
      uVar20 = (int)(uVar12 >> 0x20) * 0x17 + (int)uVar12;
      if ((local_a0._8_4_ - iStack_6c != 1) && (local_a0._8_4_ != iStack_6c)) {
        FVar10.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_60.Data;
        }
        for (iVar6 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_58 - 1 & uVar20) * 4);
            iVar6 != -1; iVar6 = *(int *)(local_a0._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
          if (*(ulonglong *)
               &((FScriptContainerElement *)(local_a0._0_8_ + (longlong)iVar6 * 0x10))->field_0x0 ==
              uVar12) {
            if (iVar6 != -1) {
              *(ulonglong *)
               &((FScriptContainerElement *)(local_a0._0_8_ + (longlong)iVar6 * 0x10))->field_0x0 =
                   uVar12;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_a0,local_f0.Index,1);
              goto LAB_14ce66f63;
            }
            break;
          }
        }
      }
      uVar19 = local_a0._8_4_ - iStack_6c;
      uVar13 = 1;
      if (3 < uVar19) {
        uVar12 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar13 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar13 <= (int)local_58)) {
        uVar20 = local_58 - 1 & uVar20;
        *(uint *)((longlong)puVar15 + 0xc) = uVar20;
        FVar10.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_60.Data;
        }
        uVar12 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar10.Data + uVar12 * 4);
        *(int *)((longlong)FVar10.Data + uVar12 * 4) = local_f0.Index;
      }
      else {
        local_58 = uVar13;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,4);
        }
        if (uVar13 != 0) {
          uVar20 = uVar13;
          if (uVar13 < 2) {
            if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar20 = 0;
              goto LAB_14ce66d77;
            }
          }
          else {
LAB_14ce66d77:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_60,0,uVar20,4);
          }
          if (0 < (int)uVar13) {
            uVar17 = (ulonglong)uVar13;
            uVar12 = 0;
            do {
              FVar10.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar10.Data = local_60.Data;
              }
              uVar9 = uVar12 & (longlong)(int)uVar13 - 1U;
              uVar12 = uVar12 + 1;
              *(undefined4 *)((longlong)FVar10.Data + uVar9 * 4) = 0xffffffff;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        if (local_58 != 0) {
          local_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10);
          local_1a0._padding_._4_4_ = 1;
          local_1a0._padding_._0_4_ = 0;
          local_1a0.CurrentBitIndex = 0;
          local_1a0.BaseBitIndex = 0;
          if (local_78 != 0) {
            FVar11 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
            if (local_80 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_80;
            }
            uVar20 = *(uint *)FVar11;
            local_1a0.BaseBitIndex = 0;
            local_1a0._padding_._0_4_ = 0;
            while (uVar20 == 0) {
              local_1a0.BaseBitIndex = local_1a0.BaseBitIndex + 0x20;
              lVar14 = (longlong)(int)local_1a0._padding_;
              local_1a0._padding_._0_4_ = (int)local_1a0._padding_ + 1;
              if ((int)(local_78 + -1 + (local_78 + -1 >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_1a0._padding_) goto LAB_14ce66e7b;
              uVar20 = ((uint *)((longlong)FVar11 + 4))[lVar14];
            }
            local_1a0._padding_._4_4_ = -uVar20 & uVar20;
            uVar12 = (ulonglong)local_1a0._padding_._4_4_ * 2 + 1;
            lVar14 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_1a0.CurrentBitIndex = local_1a0.BaseBitIndex + -1 + (int)lVar14;
            if (local_78 < local_1a0.CurrentBitIndex) {
LAB_14ce66e7b:
              local_1a0.CurrentBitIndex = local_78;
            }
          }
          local_1a0.UnvisitedBitMask = 0xffffffff;
          local_180 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a0;
          TStack_178._padding_ = CONCAT44(local_1a0._padding_._4_4_,(int)local_1a0._padding_);
          TStack_178.CurrentBitIndex = local_1a0.CurrentBitIndex;
          TStack_178.UnvisitedBitMask = 0xffffffff;
          TStack_178._28_4_ = local_1a0._28_4_;
          TStack_178.BaseBitIndex = local_1a0.BaseBitIndex;
          iVar6 = local_1a0.CurrentBitIndex;
          TStack_178.Array = local_1a0.Array;
          if (local_1a0.CurrentBitIndex < local_78) {
            do {
              puVar18 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)&local_180->Elements);
              uVar20 = (int)((ulonglong)*puVar18 >> 0x20) * 0x17 + (int)*puVar18 & local_58 - 1;
              *(uint *)((longlong)puVar18 + 0xc) = uVar20;
              FVar10.Data = (FScriptContainerElement *)local_68;
              if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar10.Data = local_60.Data;
              }
              uVar12 = (longlong)(int)local_58 - 1U & (longlong)(int)uVar20;
              *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((longlong)FVar10.Data + uVar12 * 4);
              *(int *)((longlong)FVar10.Data + uVar12 * 4) = iVar6;
              TStack_178.UnvisitedBitMask =
                   TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
              iVar6 = TStack_178.CurrentBitIndex;
            } while (TStack_178.CurrentBitIndex < (TStack_178.Array)->NumBits);
          }
        }
      }
LAB_14ce66f63:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      param_2 = local_100;
    }
    local_a8._0_4_ = Face;
  }
  local_a8._4_4_ = Triangle;
  param_1 = local_118;
  param_4 = local_110;
LAB_14ce67496:
  FGeometryScriptMeshSelection::SetSelection(param_4,(FGeometrySelection *)local_a8);
  local_58 = 0;
  if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_60.Data);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a0);
  return param_1;
}

// ConvertMeshSelection @ 14ce67510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,EGeometryScriptMeshSelectionType param_4,
          bool param_5)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  EGeometryScriptMeshSelectionType EVar4;
  ForAnyElementType FVar5;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *pTVar6;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  FGeometryScriptMeshSelection local_c0;
  undefined1 local_b0 [16];
  bool local_a0;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined1 local_88 [16];
  ForElementType<unsigned_int> local_78;
  undefined8 local_70;
  undefined8 local_68;
  ForElementType<FSetElementId> FStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
  if (EVar4 == param_4) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    FGeometryScriptMeshSelection::SetSelection(param_3,param_2);
    goto LAB_14ce678f1;
  }
  if (param_4 == Vertices) {
    local_a0 = param_5;
    local_c0.GeoSelection.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_b0;
    local_c0.GeoSelection.Object =
         (FGeometrySelection *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_b0._0_8_ = param_2;
    local_b0._8_8_ = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_c0)
    ;
    goto LAB_14ce678f1;
  }
  if (param_4 == Edges) {
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88._0_8_ = 0;
    local_70 = (void *)0x0;
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    FStack_60.InlineData[0] = UNK_150631d98;
    FStack_60.InlineData[1] = UNK_150631d99;
    FStack_60.InlineData[2] = UNK_150631d9a;
    FStack_60.InlineData[3] = UNK_150631d9b;
    FStack_60._padding_ = _UNK_150631d9c;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    local_98 = (undefined1  [8])0x100000002;
    if (param_5) {
      local_c0.GeoSelection.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_98;
      pTVar6 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_b0;
      local_b0._8_8_ = &local_c0;
      local_b0._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l54::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_c0.GeoSelection.Object = (FGeometrySelection *)param_2;
LAB_14ce676ac:
      UDynamicMesh::ProcessMesh(param_1,pTVar6);
    }
    else {
      EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
      if (EVar4 == Vertices) {
        local_c0.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l58::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
LAB_14ce676a0:
        local_b0._8_8_ = local_98;
        local_c0.GeoSelection.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)local_b0;
        pTVar6 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_c0;
        local_b0._0_8_ = param_2;
        goto LAB_14ce676ac;
      }
      EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
      if ((EVar4 == Triangles) ||
         (EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2), EVar4 == Polygroups)) {
        local_c0.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l62::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        goto LAB_14ce676a0;
      }
      `UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l64::<lambda_5>::
      operator()(local_c8);
    }
LAB_14ce676b4:
    FGeometryScriptMeshSelection::SetSelection(param_3,(FGeometrySelection *)local_98);
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    iVar1 = SUB84(local_88._0_8_,4);
    local_88._0_8_ = local_88._0_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_90,0,(int *)(local_88 + 4));
    }
    uVar3 = local_68._4_4_;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    FStack_60.InlineData[0] = 0xff;
    FStack_60.InlineData[1] = 0xff;
    FStack_60.InlineData[2] = 0xff;
    FStack_60.InlineData[3] = 0xff;
    FStack_60._padding_ = 0;
    if (0x80 < uVar3) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 8),0);
    }
    FVar5.Data = local_90.Data;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
      FVar5.Data = local_90.Data;
    }
  }
  else {
    if (param_4 == Triangles) {
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88._0_8_ = 0;
      local_70 = (void *)0x0;
      local_68 = ___xmm_00000000ffffffff0000008000000000;
      FStack_60.InlineData[0] = UNK_150631d98;
      FStack_60.InlineData[1] = UNK_150631d99;
      FStack_60.InlineData[2] = UNK_150631d9a;
      FStack_60.InlineData[3] = UNK_150631d9b;
      FStack_60._padding_ = _UNK_150631d9c;
      local_50 = (ForElementType<FSetElementId>)0x0;
      local_48 = 0;
      local_98 = (undefined1  [8])0x100000004;
      EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
      if ((EVar4 == Polygroups) || (param_5)) {
        local_c0.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l71::<lambda_6>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
      }
      else {
        EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
        if (EVar4 == Vertices) {
          local_c0.GeoSelection.Object =
               (FGeometrySelection *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l75::<lambda_7>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
        }
        else {
          EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
          if (EVar4 != Edges) {
            `UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l81::<lambda_9>
            ::operator()(local_c8);
            goto LAB_14ce676b4;
          }
          local_c0.GeoSelection.Object =
               (FGeometrySelection *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l79::<lambda_8>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
        }
      }
      goto LAB_14ce676a0;
    }
    local_b0._8_8_ = local_98;
    local_c0.GeoSelection.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_b0;
    local_c0.GeoSelection.Object =
         (FGeometrySelection *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l86::<lambda_10>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_98 = (undefined1  [8])0x0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0x80;
    local_68 = 0xffffffff;
    FStack_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_50 = (ForElementType<FSetElementId>)((ulonglong)local_50 & 0xffffffff00000000);
    if (!param_5) {
      local_c0.GeoSelection.Object =
           (FGeometrySelection *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l88::<lambda_11>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
    }
    local_b0._0_8_ = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_c0)
    ;
    ConvertIndexSetToMeshSelection
              (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,Polygroups,
               param_3);
    local_50 = (ForElementType<FSetElementId>)((ulonglong)local_50 & 0xffffffff00000000);
    if (FStack_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_60.SecondaryData);
    }
    uVar2 = (ulonglong)local_90.Data >> 0x20;
    local_90.Data = local_90.Data & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)((longlong)&local_90.Data + 4));
    }
    uVar3 = local_70._4_4_;
    local_70 = (void *)((ulonglong)local_70._4_4_ << 0x20);
    local_68 = 0xffffffff;
    if (0x80 < uVar3) {
      local_70 = (void *)0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)local_88,0);
    }
    FVar5.Data = (FScriptContainerElement *)local_98;
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78);
      FVar5.Data = (FScriptContainerElement *)local_98;
    }
  }
  if ((FGeometrySelection *)FVar5.Data != (FGeometrySelection *)0x0) {
    FMemory::Free(FVar5.Data);
  }
LAB_14ce678f1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ConvertMeshSelectionToIndexArray @ 14ce67920

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,EGeometryScriptMeshSelectionType *param_4
          )

{
  code *local_38;
  FGeometryScriptMeshSelection **local_30;
  FGeometryScriptMeshSelection *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_20;
  EGeometryScriptMeshSelectionType *local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ConvertMeshSelectionToIndexList @ 14ce679c0

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptIndexList *param_3,EGeometryScriptIndexType *param_4,
          EGeometryScriptIndexType param_5)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDynamicMesh *pUVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  EGeometryScriptIndexType **local_30;
  EGeometryScriptIndexType *local_28;
  FGeometryScriptMeshSelection *local_20;
  TArray<int,TSizedDefaultAllocator<32>_> *local_18;
  EGeometryScriptIndexType *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_18 = &local_48;
    local_10 = &param_5;
    *param_4 = Any;
    local_30 = &local_28;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_28 = param_4;
    local_20 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    FGeometryScriptIndexList::Reset(param_3,*param_4,0);
    if ((param_3->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UDynamicMesh *)(*pcVar3)();
        return pUVar5;
      }
    }
    pTVar1 = (param_3->List).Object;
    if (pTVar1 != &local_48) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar1->ArrayNum = local_48.ArrayNum;
      pTVar1->ArrayMax = local_48.ArrayMax;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
    }
    if ((*param_4 == Any) && (2 < (byte)LogGeometry._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// CreateSelectAllMeshSelection @ 14ce68240

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          EGeometryScriptMeshSelectionType param_3)

{
  EGeometryScriptMeshSelectionType local_res18 [16];
  EGeometryScriptMeshSelectionType *local_28;
  FGeometryScriptMeshSelection *local_20;
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res18;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_20 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return param_1;
}

// DebugPrintMeshSelection @ 14ce682c0

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection
          (FGeometryScriptMeshSelection *param_1,bool param_2)

{
  if (!param_2) {
    FGeometryScriptMeshSelection::DebugPrint(param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->GeoSelection).SharedReferenceCount.ReferenceController);
  return;
}

// ExpandContractMeshSelection @ 14ce68a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,int param_4,bool param_5,bool param_6)

{
  ulonglong uVar1;
  UDynamicMesh *pUVar2;
  bool bVar3;
  EGeometryScriptMeshSelectionType EVar4;
  FStaticBasicLogRecord *pFVar5;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *pTVar6;
  int iVar7;
  FSharedReferencer<1> FVar8;
  FSharedReferencer<1> FVar9;
  FGeometrySelection *pFVar10;
  int local_res20 [2];
  undefined1 auStackY_1a8 [32];
  UDynamicMesh *local_178;
  FGeometryScriptMeshSelection local_170;
  FGeometryScriptMeshSelection *local_160;
  FGeometrySelection *local_158;
  undefined1 local_150;
  int local_14c;
  FGeometryScriptMeshSelection local_148;
  code *local_138;
  FGeometryScriptMeshSelection **local_130;
  code *local_128;
  FGeometryScriptMeshSelection **local_120;
  code *local_118;
  FGeometryScriptMeshSelection **local_110;
  FGeometryScriptMeshSelection *local_108;
  bool *local_100;
  int *local_f8;
  FGeometrySelection *local_f0;
  FGeometryScriptMeshSelection *local_e8;
  bool *local_e0;
  int *local_d8;
  bool *local_d0;
  FGeometrySelection *local_c8;
  UDynamicMesh **local_c0;
  FGeometrySelection *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_res20[0] = param_4;
  local_178 = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    if ((byte)LogGeometry._0_1_ < 3) goto LAB_14ce68a6b;
    pFVar5 = &::LOG_Static;
  }
  else {
    bVar3 = FGeometryScriptMeshSelection::IsEmpty(param_2);
    if (!bVar3) {
      if (0 < local_res20[0]) {
        iVar7 = 100;
        if (local_res20[0] < 100) {
          iVar7 = local_res20[0];
        }
        local_res20[0] = 1;
        if (1 < iVar7) {
          local_res20[0] = iVar7;
        }
        EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
        if ((EVar4 == Polygroups) && (1 < local_res20[0])) {
          FVar9.ReferenceController =
               (param_2->GeoSelection).SharedReferenceCount.ReferenceController;
          pFVar10 = (param_2->GeoSelection).Object;
          if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar9.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_170);
          iVar7 = 0;
          FVar8.ReferenceController = FVar9.ReferenceController;
          if (0 < local_res20[0]) {
            do {
              if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar8.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_148.GeoSelection.Object = pFVar10;
              local_148.GeoSelection.SharedReferenceCount.ReferenceController =
                   FVar8.ReferenceController;
              ExpandContractMeshSelection(local_178,&local_148,&local_170,1,param_5,param_6);
              FVar9.ReferenceController =
                   local_170.GeoSelection.SharedReferenceCount.ReferenceController;
              pFVar10 = local_170.GeoSelection.Object;
              if (local_170.GeoSelection.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_170.GeoSelection.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_170.GeoSelection.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar8.ReferenceController);
              iVar7 = iVar7 + 1;
              FVar8.ReferenceController = FVar9.ReferenceController;
            } while (iVar7 < local_res20[0]);
          }
          if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar9.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_b8 = (param_3->GeoSelection).Object;
          pTStack_b0 = (param_3->GeoSelection).SharedReferenceCount.ReferenceController;
          (param_3->GeoSelection).Object = pFVar10;
          (param_3->GeoSelection).SharedReferenceCount.ReferenceController =
               FVar9.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_b0);
          pUVar2 = local_178;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_170.GeoSelection.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar9.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
          return pUVar2;
        }
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_98 = 0;
        local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
        local_90.MaxBits = _UNK_150631d94;
        uStack_70 = _UNK_150631d98;
        local_60 = (ForElementType<FSetElementId>)0x0;
        local_58 = 0;
        local_a8._0_4_ = Face;
        local_a8._4_4_ = Triangle;
        EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
        if (EVar4 == Vertices) {
          local_100 = &param_5;
          local_a8._0_4_ = Vertex;
          pTVar6 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_138;
          local_f8 = local_res20;
          local_130 = &local_108;
          local_138 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l55::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                      ::Call;
          local_108 = param_2;
          local_f0 = (FGeometrySelection *)local_a8;
        }
        else {
          EVar4 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
          if (EVar4 == Edges) {
            local_a8._0_4_ = Edge;
            pTVar6 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_128;
            local_150 = param_5;
            local_14c = local_res20[0];
            local_120 = &local_160;
            local_128 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l59::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                        ::Call;
            local_160 = param_2;
            local_158 = (FGeometrySelection *)local_a8;
          }
          else {
            local_e0 = &param_5;
            pTVar6 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_118;
            local_d8 = local_res20;
            local_d0 = &param_6;
            local_c0 = &local_178;
            local_110 = &local_e8;
            local_118 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection'::__l61::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
                        ::Call;
            local_e8 = param_2;
            local_c8 = (FGeometrySelection *)local_a8;
          }
        }
        UDynamicMesh::ProcessMesh(local_178,pTVar6);
        FGeometryScriptMeshSelection::SetSelection(param_3,(FGeometrySelection *)local_a8);
        pUVar2 = local_178;
        local_58 = 0;
        if (local_60 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_60);
        }
        uVar1 = local_98 >> 0x20;
        local_98 = local_98 & 0xffffffff00000000;
        if ((int)uVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
        }
        iVar7 = local_90.MaxBits;
        uStack_70 = 0xffffffff;
        local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
        if (0x80 < (uint)iVar7) {
          local_90.NumBits = 0;
          local_90.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
        }
        if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
        }
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
        return pUVar2;
      }
      FGeometryScriptMeshSelection::SetSelection(param_3,param_2);
      goto LAB_14ce68a6b;
    }
    if ((byte)LogGeometry._0_1_ < 3) goto LAB_14ce68a6b;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogGeometry);
LAB_14ce68a6b:
  pUVar2 = local_178;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return pUVar2;
}

// ExpandMeshSelectionToConnected @ 14ce68dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,EGeometryScriptTopologyConnectionType param_4)

{
  int iVar1;
  bool bVar2;
  EGeometryScriptMeshSelectionType EVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  void *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  bVar2 = FGeometryScriptMeshSelection::IsEmpty(param_2);
  if (bVar2) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    goto LAB_14ce6919f;
  }
  EVar3 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
  if (EVar3 == Vertices) {
    if (2 < (byte)LogGeometry._0_1_) {
      pFVar4 = &::LOG_Static;
LAB_14ce68e7c:
      UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    EVar3 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
    if (EVar3 == Edges) {
      if (2 < (byte)LogGeometry._0_1_) {
        pFVar4 = &::LOG_Static;
        goto LAB_14ce68e7c;
      }
    }
    else {
      EVar3 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
      if ((EVar3 != Polygroups) || (param_4 != Polygroup)) {
        local_108._8_8_ = &local_e8;
        local_f8._8_8_ = local_108;
        local_e8 = (void *)0x0;
        local_f8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        local_e0 = 0;
        local_108._0_8_ = param_2;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           local_f8);
        local_d8._0_8_ = (FScriptContainerElement *)0x0;
        local_d8._8_8_ = 0;
        local_b8 = (void *)0x0;
        local_b0 = 0;
        local_ac = 0x80;
        local_a8 = 0xffffffff;
        local_a4 = 0;
        local_98 = (ForElementType<FSetElementId>)0x0;
        local_90 = 0;
        if (param_4 == Geometric) {
          local_108._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected'::__l110::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
LAB_14ce68fd0:
          local_f8._8_8_ = local_d8;
          local_f8._0_8_ = &local_e8;
          local_108._8_8_ = local_f8;
          UDynamicMesh::ProcessMesh
                    (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                             local_108);
        }
        else {
          if (param_4 == Polygroup) {
            local_108._0_8_ =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected'::__l114::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
            goto LAB_14ce68fd0;
          }
          if (param_4 == MaterialID) {
            local_108._0_8_ =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected'::__l118::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
            goto LAB_14ce68fd0;
          }
        }
        EVar3 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
        if (EVar3 == Triangles) {
          ConvertIndexSetToMeshSelection
                    (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8,
                     Triangles,param_3);
        }
        else {
          local_f8._0_8_ = local_d8;
          local_88._0_8_ = (FScriptContainerElement *)0x0;
          local_f8._8_8_ = local_88;
          local_88._8_8_ = 0;
          local_108._8_8_ = local_f8;
          local_108._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected'::__l123::<lambda_5>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
          local_68 = (void *)0x0;
          local_60 = 0;
          local_5c = 0x80;
          local_58 = 0xffffffff;
          local_54 = 0;
          local_48 = (ForElementType<FSetElementId>)0x0;
          local_40 = 0;
          UDynamicMesh::ProcessMesh
                    (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                             local_108);
          ConvertIndexSetToMeshSelection
                    (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
                     Polygroups,param_3);
          local_40 = 0;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_48);
          }
          iVar1 = SUB84(local_88._8_8_,4);
          local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
          if (iVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
          }
          local_58 = 0xffffffff;
          local_54 = 0;
          local_60 = 0;
          if (0x80 < local_5c) {
            local_5c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_88._0_8_);
          }
        }
        local_90 = 0;
        if (local_98 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98);
        }
        iVar1 = SUB84(local_d8._8_8_,4);
        local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
        }
        local_a4 = 0;
        local_b0 = 0;
        local_a8 = 0xffffffff;
        if (0x80 < local_ac) {
          local_ac = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_d8._0_8_);
        }
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        goto LAB_14ce6919f;
      }
      if (2 < (byte)LogGeometry._0_1_) {
        pFVar4 = &::LOG_Static;
        goto LAB_14ce68e7c;
      }
    }
  }
  FGeometryScriptMeshSelection::SetSelection(param_3,param_2);
LAB_14ce6919f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// GetMeshSelectionInfo @ 14ce6bf80

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo
          (FGeometryScriptMeshSelection *param_1,EGeometryScriptMeshSelectionType *param_2,
          int *param_3)

{
  EGeometryScriptMeshSelectionType EVar1;
  int iVar2;
  
  EVar1 = FGeometryScriptMeshSelection::GetSelectionType(param_1);
  *param_2 = EVar1;
  iVar2 = FGeometryScriptMeshSelection::GetNumSelected(param_1);
  *param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->GeoSelection).SharedReferenceCount.ReferenceController);
  return;
}

// GetMeshUniqueSelectionInfo @ 14ce6c380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshUniqueSelectionInfo
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          EGeometryScriptMeshSelectionType *param_3,int *param_4)

{
  EGeometryScriptMeshSelectionType EVar1;
  int iVar2;
  int *local_28;
  FGeometryScriptMeshSelection *local_20;
  code *local_18;
  int **local_10;
  
  EVar1 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
  *param_3 = EVar1;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    iVar2 = FGeometryScriptMeshSelection::GetNumSelected(param_2);
    *param_4 = iVar2;
  }
  else {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshUniqueSelectionInfo'::__l25::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_4;
    local_20 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14ce6d3b0

UClass * __cdecl UGeometryScriptLibrary_MeshSelectionFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSelectionFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSelectionFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.InnerSingleton;
}

// InvertMeshSelection @ 14ce6f0e0

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,bool param_4)

{
  EGeometryScriptMeshSelectionType local_res8;
  FGeometryScriptMeshSelection local_28;
  code *local_18;
  FGeometryScriptMeshSelection *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if (param_4) {
    local_28.GeoSelection.Object = (param_2->GeoSelection).Object;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController =
         (param_2->GeoSelection).SharedReferenceCount.ReferenceController;
    if (local_28.GeoSelection.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.GeoSelection.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    ExpandMeshSelectionToConnected(param_1,&local_28,param_3,Geometric);
  }
  else {
    local_res8 = FGeometryScriptMeshSelection::GetSelectionType(param_2);
    local_28.GeoSelection.Object = (FGeometrySelection *)&local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18)
    ;
  }
  FGeometryScriptMeshSelection::CombineSelectionInPlace(param_3,param_2,Subtract);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SelectMeshBoundaryEdges @ 14ce72ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshBoundaryEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_d8 [32];
  undefined4 *local_a8;
  code *local_a0;
  undefined4 **local_98;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_a8 = (undefined4 *)local_88;
    local_98 = &local_a8;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshBoundaryEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_50 = _UNK_150631d98;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    local_88._0_4_ = Edge;
    local_88._4_4_ = Triangle;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a0)
    ;
    FGeometryScriptMeshSelection::SetSelection(param_2,(FGeometrySelection *)local_88);
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    uVar1 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar2 = local_70.MaxBits;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    uStack_50 = 0xffffffff;
    if (0x80 < (uint)iVar2) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  return param_1;
}

// SelectMeshElementsByMaterialID @ 14ce72c10

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByMaterialID
          (UDynamicMesh *param_1,int param_2,FGeometryScriptMeshSelection *param_3,
          EGeometryScriptMeshSelectionType param_4)

{
  code *local_38;
  int *local_30;
  int local_28 [2];
  FGeometryScriptMeshSelection *local_20;
  EGeometryScriptMeshSelectionType local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_30 = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByMaterialID'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_28[0] = param_2;
  local_20 = param_3;
  local_18 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38);
  return param_1;
}

// SelectMeshElementsByNormalAngle @ 14ce72c80

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TVector<double> *param_3,
          double param_4,EGeometryScriptMeshSelectionType param_5,bool param_6,int param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double local_res8;
  code *local_48;
  TVector<double> **local_40;
  TVector<double> *local_38;
  double *local_30;
  double local_28;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    dVar4 = (param_3->field0_0x0)._s_0.X;
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    local_28 = (param_3->field0_0x0)._s_0.Z;
    auVar5._0_8_ = local_28 * local_28;
    auVar5._8_8_ = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar1 * dVar1 + dVar4 * dVar4 + auVar5._0_8_;
    auVar6 = sqrtpd(auVar5,auVar6);
    if (auVar6._0_8_ <= 0.0) {
      local_28 = 0.0;
      dVar4 = 0.0;
      dVar3 = 0.0;
    }
    else {
      dVar3 = __real_3ff0000000000000 / auVar6._0_8_;
      local_28 = dVar3 * local_28;
      dVar4 = dVar3 * dVar4;
      dVar3 = dVar3 * dVar1;
    }
    dVar1 = param_4 * __real_3f91df46a2529d39;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar4;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&param_3->field0_0x0 = auVar2;
    (param_3->field0_0x0)._s_0.Z = local_28;
    local_res8 = cos(dVar1);
    local_30 = &local_res8;
    local_28 = (double)CONCAT71(local_28._1_7_,param_6);
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    local_38 = param_3;
    UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
              (param_1,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                        *)&local_48,param_2,param_5,param_7,true);
  }
  return param_1;
}

// SelectMeshElementsByPolygroup @ 14ce72de0

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByPolygroup
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,
          FGeometryScriptMeshSelection *param_4,EGeometryScriptMeshSelectionType param_5)

{
  code *local_38;
  FGeometryScriptGroupLayer *local_30;
  FGeometryScriptGroupLayer local_28;
  int local_20;
  FGeometryScriptMeshSelection *local_18;
  EGeometryScriptMeshSelectionType local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_10 = param_5;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByPolygroup'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38);
  return param_1;
}

// SelectMeshElementsInBox @ 14ce72e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TBox<double> *param_3,
          EGeometryScriptMeshSelectionType param_4,bool param_5,int param_6)

{
  undefined8 *local_58;
  bool local_50;
  code *local_48;
  undefined8 **local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double dStack_18;
  double local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_3->IsValid == '\0') {
    local_38 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_30 = _UNK_150a9e648;
    dStack_18 = ___xmm_ffefffffffffffffffefffffffffffff;
    local_10 = _UNK_1508ffb58;
    local_28 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_20 = _UNK_150a9e6d8;
  }
  else {
    local_38 = (param_3->Min).field0_0x0._s_0.X;
    dStack_30 = (param_3->Min).field0_0x0._s_0.Y;
    local_28 = (param_3->Min).field0_0x0._s_0.Z;
    dStack_20 = (param_3->Max).field0_0x0._s_0.X;
    dStack_18 = (param_3->Max).field0_0x0._s_0.Y;
    local_10 = (param_3->Max).field0_0x0._s_0.Z;
  }
  local_58 = &local_38;
  local_50 = param_5;
  local_40 = &local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
             ::Call;
  UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
            (param_1,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                      *)&local_48,param_2,param_4,param_6,false);
  return param_1;
}

// SelectMeshElementsInSphere @ 14ce73240

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TVector<double> *param_3,
          double param_4,EGeometryScriptMeshSelectionType param_5,bool param_6,int param_7)

{
  undefined8 *local_48;
  bool local_40;
  code *local_38;
  undefined8 **local_30;
  double local_28;
  double dStack_20;
  double local_18;
  double local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_10 = __real_3cb0000000000000;
  if ((__real_3cb0000000000000 <= param_4) &&
     (local_10 = param_4, __real_5fefffffffffffff <= param_4)) {
    local_10 = __real_5fefffffffffffff;
  }
  local_28 = (param_3->field0_0x0)._s_0.X;
  dStack_20 = (param_3->field0_0x0)._s_0.Y;
  local_48 = &local_28;
  local_18 = (param_3->field0_0x0)._s_0.Z;
  local_40 = param_6;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
             ::Call;
  UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
            (param_1,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                      *)&local_38,param_2,param_5,param_7,false);
  return param_1;
}

// SelectMeshElementsInsideMesh @ 14ce73310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,FGeometryScriptMeshSelection *param_3,
          TTransform<double> *param_4,EGeometryScriptMeshSelectionType param_5,bool param_6,
          double param_7,double param_8,int param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  FStaticBasicLogRecord *pFVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  UDynamicMesh *local_res8 [2];
  undefined1 auStack_e8 [32];
  code *local_c8;
  TTransform<double> **local_c0;
  TTransform<double> *local_b8;
  double *local_b0;
  double *local_a8;
  bool *local_a0;
  UDynamicMesh **local_98;
  FGeometryScriptMeshSelection *local_90;
  EGeometryScriptMeshSelectionType *local_88;
  int *local_80;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_res8[0] = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    if ((byte)LogGeometry._0_1_ < 3) {
      return (UDynamicMesh *)0x0;
    }
    pFVar5 = &::LOG_Static;
  }
  else if (param_2 == (UDynamicMesh *)0x0) {
    if ((byte)LogGeometry._0_1_ < 3) {
      return param_1;
    }
    pFVar5 = &::LOG_Static;
  }
  else {
    if (param_2 != param_1) {
      auVar7._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                      *(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 4),
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                      *(uint *)(param_4->Scale3D).XY.m128d_f64);
      auVar7._8_4_ = _UNK_15061cc88 & *(uint *)((param_4->Scale3D).XY.m128d_f64 + 1);
      auVar7._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 0xc);
      lVar6 = -(ulonglong)
               ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
               (double)CONCAT44(_UNK_15061cc8c &
                                *(uint *)((longlong)(param_4->Scale3D).ZW.m128d_f64 + 0xc),
                                _UNK_15061cc88 & *(uint *)((param_4->Scale3D).ZW.m128d_f64 + 1)));
      auVar2._8_4_ = (int)lVar6;
      auVar2._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       *(uint *)((longlong)(param_4->Scale3D).ZW.m128d_f64 + 4),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       *(uint *)(param_4->Scale3D).ZW.m128d_f64));
      auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
      uVar4 = movmskpd((int)param_1,auVar2);
      lVar6 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar7._8_8_);
      auVar1._8_4_ = (int)lVar6;
      auVar1._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar7._0_8_);
      auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
      iVar3 = movmskpd((int)local_18,auVar1);
      if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
        local_78.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_78.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_78.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_78.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_78.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_78.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(param_4,&local_78);
      }
      local_b8 = &local_78;
      local_b0 = &param_8;
      local_a8 = &param_7;
      local_a0 = &param_6;
      local_98 = local_res8;
      local_88 = &param_5;
      local_80 = &param_9;
      local_c0 = &local_b8;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_90 = param_3;
      UDynamicMesh::ProcessMesh
                (param_2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                         &local_c8);
      return local_res8[0];
    }
    if ((byte)LogGeometry._0_1_ < 3) {
      return param_1;
    }
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogGeometry);
  return local_res8[0];
}

// SelectMeshElementsWithPlane @ 14ce73690

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TVector<double> *param_3,
          TVector<double> *param_4,EGeometryScriptMeshSelectionType param_5,bool param_6,int param_7
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *local_38;
  TVector<double> **local_30;
  TVector<double> *local_28;
  TVector<double> *local_20;
  double local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  dVar4 = (param_4->field0_0x0)._s_0.X;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  local_18 = (param_4->field0_0x0)._s_0.Z;
  auVar5._0_8_ = local_18 * local_18;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1 * dVar1 + dVar4 * dVar4 + auVar5._0_8_;
  auVar6 = sqrtpd(auVar5,auVar6);
  if (auVar6._0_8_ <= 0.0) {
    local_18 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / auVar6._0_8_;
    local_18 = dVar3 * local_18;
    dVar4 = dVar3 * dVar4;
    dVar3 = dVar3 * dVar1;
  }
  dVar1 = local_18;
  local_18 = (double)CONCAT71(local_18._1_7_,param_6);
  local_30 = &local_28;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&param_4->field0_0x0 = auVar2;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
             ::Call;
  (param_4->field0_0x0)._s_0.Z = dVar1;
  local_28 = param_3;
  local_20 = param_4;
  UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
            (param_1,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                      *)&local_38,param_2,param_5,param_7,false);
  return param_1;
}

// SelectMeshPolyGroupBoundaryEdges @ 14ce737b0

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshPolyGroupBoundaryEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptGroupLayer param_3,bool param_4)

{
  code *local_38;
  FGeometryScriptMeshSelection **local_30;
  FGeometryScriptMeshSelection *local_28;
  FGeometryScriptGroupLayer local_20;
  undefined1 local_18;
  
  FGeometryScriptMeshSelection::ClearSelection(param_2);
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshPolyGroupBoundaryEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// SelectMeshSharpEdges @ 14ce73850

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSharpEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,double param_3)

{
  FGeometryScriptMeshSelection *local_28;
  double local_20;
  code *local_18;
  FGeometryScriptMeshSelection **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = param_2;
  local_20 = cos(param_3 * __real_3f91df46a2529d39);
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSharpEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return param_1;
}

// SelectMeshSplitNormalEdges @ 14ce738d0

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSplitNormalEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2)

{
  FGeometryScriptMeshSelection *local_res8 [4];
  code *local_18;
  FGeometryScriptMeshSelection **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    return (UDynamicMesh *)0x0;
  }
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSplitNormalEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_res8[0] = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return param_1;
}

// SelectMeshUVSeamEdges @ 14ce73940

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshUVSeamEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,int param_3,bool *param_4,
          bool param_5)

{
  code *local_38;
  FGeometryScriptMeshSelection **local_30;
  FGeometryScriptMeshSelection *local_28;
  int local_20;
  bool *local_18;
  bool local_10;
  
  *param_4 = false;
  FGeometryScriptMeshSelection::ClearSelection(param_2);
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_10 = param_5;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshUVSeamEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// SelectSelectionBoundaryEdges @ 14ce739f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::SelectSelectionBoundaryEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,bool param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_e8 [32];
  code *local_b8;
  undefined4 **local_b0;
  undefined4 *local_a8;
  FGeometryScriptMeshSelection *local_a0;
  undefined1 local_98;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_a8 = (undefined4 *)local_88;
    local_b0 = &local_a8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectSelectionBoundaryEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_50 = _UNK_150631d98;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    local_88._0_4_ = Edge;
    local_88._4_4_ = Triangle;
    local_a0 = param_2;
    local_98 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_b8)
    ;
    FGeometryScriptMeshSelection::SetSelection(param_3,(FGeometrySelection *)local_88);
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    uVar1 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar2 = local_70.MaxBits;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    uStack_50 = 0xffffffff;
    if (0x80 < (uint)iVar2) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions @ 14ce75100

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1b;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCombineMeshSelections @ 14ce897d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execCombineMeshSelections
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EGeometryScriptCombineSelectionMode EVar2;
  EGeometryScriptMeshSelectionType EVar3;
  EGeometryScriptMeshSelectionType EVar4;
  FGeometryScriptMeshSelection *this;
  EGeometryScriptCombineSelectionMode local_res10 [8];
  FGeometryScriptMeshSelection local_58;
  FGeometryScriptMeshSelection local_48;
  FGeometryScriptMeshSelection local_38;
  FGeometryScriptMeshSelection local_28;
  FGeometryScriptMeshSelection local_18;
  
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_38);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_48);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = Add;
  this = &local_58;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    this = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res10[0];
  local_18.GeoSelection.Object = local_48.GeoSelection.Object;
  local_18.GeoSelection.SharedReferenceCount.ReferenceController =
       local_48.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.GeoSelection.Object = local_38.GeoSelection.Object;
  local_28.GeoSelection.SharedReferenceCount.ReferenceController =
       local_38.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_38.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar3 = FGeometryScriptMeshSelection::GetSelectionType(&local_28);
  EVar4 = FGeometryScriptMeshSelection::GetSelectionType(&local_18);
  if ((EVar3 != EVar4) && (2 < (byte)LogGeometry._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  FGeometryScriptMeshSelection::SetSelection(this,&local_28);
  FGeometryScriptMeshSelection::CombineSelectionInPlace(this,&local_18,EVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execConvertIndexArrayToMeshSelection @ 14ce8bc40

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexArrayToMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FGeometryScriptMeshSelection *pFVar4;
  EGeometryScriptMeshSelectionType local_res10 [8];
  UDynamicMesh *local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptMeshSelection local_28;
  
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = Vertices;
  pTVar3 = &local_38;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar4 = &local_28;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar4 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = ConvertIndexArrayToMeshSelection(local_res18[0],pTVar3,local_res10[0],pFVar4);
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.GeoSelection.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConvertIndexListToMeshSelection @ 14ce8bde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexListToMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  EGeometryScriptMeshSelectionType EVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  EGeometryScriptMeshSelectionType EVar8;
  UDynamicMesh *pUVar9;
  UDynamicMesh *this;
  FGeometryScriptMeshSelection *pFVar10;
  EGeometryScriptMeshSelectionType local_res10 [8];
  UDynamicMesh *local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  char local_c8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  FGeometryScriptMeshSelection local_b0;
  FGeometryScriptMeshSelection local_98;
  FGeometryScriptMeshSelection local_88;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  code *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> **local_60;
  FGeometryScriptMeshSelection local_58;
  FGeometryScriptMeshSelection local_48;
  
  pUVar9 = (UDynamicMesh *)0x0;
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_c8[0] = '\0';
  local_c0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_b8 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_res10[0] = Vertices;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_b0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pTVar6 = pTStack_b8;
  pTVar5 = local_c0;
  this = local_res18[0];
  EVar4 = local_res10[0];
  pFVar10 = &local_b0;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar10 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_b8->SharedReferenceCount = (atomic<int>)((int)pTStack_b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_res18[0] == (UDynamicMesh *)0x0) {
    this = pUVar9;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else if (local_c8[0] == '\0') {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    if (local_c8[0] == '\x01') {
      pUVar9 = (UDynamicMesh *)&DAT_00000001;
    }
    else if (local_c8[0] == '\x02') {
      pUVar9 = (UDynamicMesh *)&DAT_00000003;
    }
    else if (local_c8[0] != '\x03') {
      if (local_c8[0] != '\x05') {
        if (local_c8[0] == '\x04') {
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0;
          if ((local_c0 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_70 = &local_d8;
          local_78 = pTVar5;
          local_60 = &local_78;
          local_68 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection'::__l56::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                     ::Call;
          UDynamicMesh::ProcessMesh
                    (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                          &local_68);
          if (EVar4 == Triangles) {
            ConvertIndexArrayToMeshSelection(this,&local_d8,Triangles,pFVar10);
          }
          else {
            FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
            ConvertIndexArrayToMeshSelection(this,&local_d8,Triangles,&local_98);
            local_58.GeoSelection.Object = local_98.GeoSelection.Object;
            local_58.GeoSelection.SharedReferenceCount.ReferenceController =
                 local_98.GeoSelection.SharedReferenceCount.ReferenceController;
            if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   = (atomic<int>)
                     ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
              UNLOCK();
            }
            ConvertMeshSelection(this,&local_58,pFVar10,EVar4,true);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
          }
          if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
          }
        }
        goto LAB_14ce8c172;
      }
      pUVar9 = (UDynamicMesh *)&DAT_00000002;
    }
    EVar8 = (EGeometryScriptMeshSelectionType)pUVar9;
    if (local_res10[0] == EVar8) {
      if ((local_c0 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ConvertIndexArrayToMeshSelection(this,pTVar5,EVar8,pFVar10);
    }
    else {
      FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_88);
      if ((pTVar5 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ConvertIndexArrayToMeshSelection(this,pTVar5,EVar8,&local_88);
      local_48.GeoSelection.Object = local_88.GeoSelection.Object;
      local_48.GeoSelection.SharedReferenceCount.ReferenceController =
           local_88.GeoSelection.SharedReferenceCount.ReferenceController;
      if (local_88.GeoSelection.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.GeoSelection.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      ConvertMeshSelection(this,&local_48,pFVar10,EVar4,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.GeoSelection.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14ce8c172:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b8);
  return;
}

// execConvertIndexSetToMeshSelection @ 14ce8c1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexSetToMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UDynamicMesh *pUVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  FGeometryScriptMeshSelection *pFVar5;
  undefined1 auStackY_c8 [32];
  EGeometryScriptMeshSelectionType local_98 [8];
  UDynamicMesh *local_90;
  FGeometryScriptMeshSelection local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_98[0] = Vertices;
  pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_78;
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress !=
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar5 = &local_88;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar5 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = ConvertIndexSetToMeshSelection(local_90,pTVar4,local_98[0],pFVar5);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.GeoSelection.SharedReferenceCount.ReferenceController);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execConvertMeshSelection @ 14ce8c420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  EGeometryScriptMeshSelectionType EVar6;
  EGeometryScriptMeshSelectionType EVar7;
  ForAnyElementType FVar8;
  TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *pTVar9;
  UDynamicMesh *this;
  FGeometryScriptMeshSelection *this_00;
  bool bVar10;
  undefined1 auStackY_148 [32];
  EGeometryScriptMeshSelectionType local_118;
  undefined1 local_117 [7];
  FGeometryScriptMeshSelection local_110;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8;
  int local_d0 [2];
  UDynamicMesh *local_c8;
  FGeometryScriptMeshSelection local_c0;
  FGeometryScriptMeshSelection local_a8;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined1 local_88 [16];
  ForElementType<unsigned_int> local_78;
  undefined8 local_70;
  undefined8 local_68;
  ForElementType<FSetElementId> FStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_a8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_c0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_118 = Vertices;
  this_00 = &local_c0;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    this_00 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_d0[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d0);
  }
  this = local_c8;
  EVar7 = local_118;
  bVar10 = local_d0[0] != 0;
  local_f8._0_8_ = local_a8.GeoSelection.Object;
  local_f8._8_8_ = local_a8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_c8 == (UDynamicMesh *)0x0) {
    this = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    goto LAB_14ce8ca68;
  }
  EVar6 = FGeometryScriptMeshSelection::GetSelectionType((FGeometryScriptMeshSelection *)local_f8);
  if (EVar6 == EVar7) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    FGeometryScriptMeshSelection::SetSelection(this_00,(FGeometryScriptMeshSelection *)local_f8);
    goto LAB_14ce8ca68;
  }
  if (EVar7 == Vertices) {
    local_e8._0_8_ = local_f8;
    local_110.GeoSelection.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_e8;
    local_110.GeoSelection.Object =
         (FGeometrySelection *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l47::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_e8._8_8_ = this_00;
    local_d8 = bVar10;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_110);
    goto LAB_14ce8ca68;
  }
  local_90.Data = (FScriptContainerElement *)0x0;
  if (EVar7 == Edges) {
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    FStack_60.InlineData[0] = UNK_150631d98;
    FStack_60.InlineData[1] = UNK_150631d99;
    FStack_60.InlineData[2] = UNK_150631d9a;
    FStack_60.InlineData[3] = UNK_150631d9b;
    FStack_60._padding_ = _UNK_150631d9c;
    local_88._0_8_ = 0;
    local_70 = (void *)0x0;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    local_98 = (undefined1  [8])0x100000002;
    if (bVar10) {
      local_110.GeoSelection.Object = (FGeometrySelection *)local_f8;
      pTVar9 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_e8;
      local_110.GeoSelection.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_98;
      local_e8._8_8_ = &local_110;
      local_e8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l54::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
LAB_14ce8c763:
      UDynamicMesh::ProcessMesh(this,pTVar9);
    }
    else {
      EVar7 = FGeometryScriptMeshSelection::GetSelectionType
                        ((FGeometryScriptMeshSelection *)local_f8);
      if (EVar7 == Vertices) {
        local_110.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l58::<lambda_3>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
LAB_14ce8c759:
        local_e8._8_8_ = local_98;
        local_e8._0_8_ = local_f8;
        local_110.GeoSelection.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)local_e8;
        pTVar9 = (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_110;
        goto LAB_14ce8c763;
      }
      EVar7 = FGeometryScriptMeshSelection::GetSelectionType
                        ((FGeometryScriptMeshSelection *)local_f8);
      if ((EVar7 == Triangles) ||
         (EVar7 = FGeometryScriptMeshSelection::GetSelectionType
                            ((FGeometryScriptMeshSelection *)local_f8), EVar7 == Polygroups)) {
        local_110.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l62::<lambda_4>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        goto LAB_14ce8c759;
      }
      `UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l64::<lambda_5>::
      operator()(local_117);
    }
    FGeometryScriptMeshSelection::SetSelection(this_00,(FGeometrySelection *)local_98);
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    iVar3 = SUB84(local_88._0_8_,4);
    local_88._0_8_ = local_88._0_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_90,0,(int *)(local_88 + 4));
    }
    uVar5 = local_68._4_4_;
    FStack_60.InlineData[0] = 0xff;
    FStack_60.InlineData[1] = 0xff;
    FStack_60.InlineData[2] = 0xff;
    FStack_60.InlineData[3] = 0xff;
    FStack_60._padding_ = 0;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 8),0);
    }
    FVar8.Data = local_90.Data;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
      FVar8.Data = local_90.Data;
    }
  }
  else if (EVar7 == Triangles) {
    local_68 = ___xmm_00000000ffffffff0000008000000000;
    FStack_60.InlineData[0] = UNK_150631d98;
    FStack_60.InlineData[1] = UNK_150631d99;
    FStack_60.InlineData[2] = UNK_150631d9a;
    FStack_60.InlineData[3] = UNK_150631d9b;
    FStack_60._padding_ = _UNK_150631d9c;
    local_88._0_8_ = 0;
    local_70 = (void *)0x0;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    local_98 = (undefined1  [8])0x100000004;
    EVar7 = FGeometryScriptMeshSelection::GetSelectionType((FGeometryScriptMeshSelection *)local_f8)
    ;
    if ((EVar7 == Polygroups) || (bVar10)) {
      local_110.GeoSelection.Object =
           (FGeometrySelection *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l71::<lambda_6>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
LAB_14ce8c8d1:
      local_e8._8_8_ = local_98;
      local_e8._0_8_ = local_f8;
      local_110.GeoSelection.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_e8;
      UDynamicMesh::ProcessMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_110)
      ;
    }
    else {
      EVar7 = FGeometryScriptMeshSelection::GetSelectionType
                        ((FGeometryScriptMeshSelection *)local_f8);
      if (EVar7 == Vertices) {
        local_110.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l75::<lambda_7>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        goto LAB_14ce8c8d1;
      }
      EVar7 = FGeometryScriptMeshSelection::GetSelectionType
                        ((FGeometryScriptMeshSelection *)local_f8);
      if (EVar7 == Edges) {
        local_110.GeoSelection.Object =
             (FGeometrySelection *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l79::<lambda_8>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        goto LAB_14ce8c8d1;
      }
      `UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l81::<lambda_9>::
      operator()(local_117);
    }
    FGeometryScriptMeshSelection::SetSelection(this_00,(FGeometrySelection *)local_98);
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    iVar3 = SUB84(local_88._0_8_,4);
    local_88._0_8_ = local_88._0_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_90,0,(int *)(local_88 + 4));
    }
    uVar5 = local_68._4_4_;
    FStack_60.InlineData[0] = 0xff;
    FStack_60.InlineData[1] = 0xff;
    FStack_60.InlineData[2] = 0xff;
    FStack_60.InlineData[3] = 0xff;
    FStack_60._padding_ = 0;
    local_68 = (ulonglong)local_68._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_68 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 8),0);
    }
    FVar8.Data = local_90.Data;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
      FVar8.Data = local_90.Data;
    }
  }
  else {
    local_98 = (undefined1  [8])0x0;
    local_e8._0_8_ = local_f8;
    local_e8._8_8_ = local_98;
    local_110.GeoSelection.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_e8;
    local_110.GeoSelection.Object =
         (FGeometrySelection *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l86::<lambda_10>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0x80;
    local_68 = 0xffffffff;
    FStack_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_50 = (ForElementType<FSetElementId>)((ulonglong)local_50 & 0xffffffff00000000);
    if (!bVar10) {
      local_110.GeoSelection.Object =
           (FGeometrySelection *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l88::<lambda_11>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
    }
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_110);
    ConvertIndexSetToMeshSelection
              (this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,Polygroups,
               this_00);
    local_50 = (ForElementType<FSetElementId>)((ulonglong)local_50 & 0xffffffff00000000);
    if (FStack_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_60.SecondaryData);
    }
    uVar4 = (ulonglong)local_90.Data >> 0x20;
    local_90.Data = local_90.Data & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)((longlong)&local_90.Data + 4));
    }
    uVar5 = local_70._4_4_;
    local_70 = (void *)((ulonglong)local_70._4_4_ << 0x20);
    local_68 = 0xffffffff;
    if (0x80 < uVar5) {
      local_70 = (void *)0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)local_88,0);
    }
    FVar8.Data = (FScriptContainerElement *)local_98;
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78);
      FVar8.Data = (FScriptContainerElement *)local_98;
    }
  }
  if ((FGeometrySelection *)FVar8.Data != (FGeometrySelection *)0x0) {
    FMemory::Free(FVar8.Data);
  }
LAB_14ce8ca68:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f8._8_8_);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execConvertMeshSelectionToIndexArray @ 14ce8cac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelectionToIndexArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  void **ppvVar4;
  UDynamicMesh *pUVar5;
  uchar local_res10 [8];
  UDynamicMesh *local_res18;
  void *local_78;
  undefined8 local_70;
  FGeometryScriptMeshSelection local_68;
  code *local_58;
  undefined8 **local_50;
  FGeometrySelection *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FGeometrySelection **local_38;
  void **local_30;
  uchar *local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_68);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar4 = &local_78;
  if (ppvVar1 != (void **)0x0) {
    ppvVar4 = ppvVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res18;
  local_48 = local_68.GeoSelection.Object;
  pTStack_40 = local_68.GeoSelection.SharedReferenceCount.ReferenceController;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_68.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_res18 == (UDynamicMesh *)0x0) {
    pUVar5 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_38 = &local_48;
    local_50 = &local_38;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_30 = ppvVar4;
    local_28 = puVar3;
    UDynamicMesh::ProcessMesh
              (local_res18,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  *(UDynamicMesh **)param_3 = pUVar5;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execConvertMeshSelectionToIndexList @ 14ce8ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelectionToIndexList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptIndexList *pFVar1;
  FProperty *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UDynamicMesh *pUVar7;
  EGeometryScriptIndexType *pEVar8;
  FGeometryScriptIndexList *this;
  EGeometryScriptIndexType local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  UDynamicMesh *local_b8 [2];
  FGeometryScriptMeshSelection local_a8;
  FGeometryScriptIndexList local_98;
  code *local_80;
  EGeometryScriptIndexType **local_78;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  EGeometryScriptIndexType *local_58;
  FGeometrySelection **local_50;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  undefined1 *local_40;
  
  local_b8[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_a8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_98.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar1 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_98;
  if (pFVar1 != (FGeometryScriptIndexList *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  pEVar8 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EGeometryScriptIndexType *)0x0) {
    pEVar8 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar7 = local_b8[0];
  local_68 = local_a8.GeoSelection.Object;
  pTStack_60 = local_a8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res20[0] = local_res18[0];
  if (local_b8[0] == (UDynamicMesh *)0x0) {
    pUVar7 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_50 = &local_68;
    *pEVar8 = Any;
    local_48 = &local_c8;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40 = local_res20;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_78 = &local_58;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = pEVar8;
    UDynamicMesh::ProcessMesh
              (local_b8[0],
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_80);
    FGeometryScriptIndexList::Reset(this,*pEVar8,0);
    if (((this->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar3 = (this->List).Object;
    if (pTVar3 != &local_c8) {
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar3->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar3->ArrayNum = local_c8.ArrayNum;
      pTVar3->ArrayMax = local_c8.ArrayMax;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
    }
    if ((*pEVar8 == Any) && (2 < (byte)LogGeometry._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execCreateSelectAllMeshSelection @ 14ce8e0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execCreateSelectAllMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptMeshSelection *pFVar2;
  UDynamicMesh *pUVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UDynamicMesh *local_res20;
  FGeometryScriptMeshSelection local_48;
  undefined1 *local_38;
  FGeometryScriptMeshSelection *local_30;
  code *local_28;
  undefined1 **local_20;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pFVar2 = &local_48;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar2 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  if (local_res20 == (UDynamicMesh *)0x0) {
    pUVar3 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_38 = local_res18;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_30 = pFVar2;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execDebugPrintMeshSelection @ 14ce8e240

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execDebugPrintMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  FGeometryScriptMeshSelection local_28;
  FGeometryScriptMeshSelection local_18;
  
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_28);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.GeoSelection.Object = local_28.GeoSelection.Object;
  local_18.GeoSelection.SharedReferenceCount.ReferenceController =
       local_28.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_res10[0] == 0) {
    FGeometryScriptMeshSelection::DebugPrint(&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execExpandContractMeshSelection @ 14ce8eb80

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execExpandContractMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FGeometryScriptMeshSelection *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  UDynamicMesh *local_68;
  FGeometryScriptMeshSelection local_60;
  FGeometryScriptMeshSelection local_48;
  FGeometryScriptMeshSelection local_38;
  
  local_68 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_48);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20[0] = 0;
  pFVar3 = &local_60;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar3 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_38.GeoSelection.Object = local_48.GeoSelection.Object;
  local_38.GeoSelection.SharedReferenceCount.ReferenceController =
       local_48.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar2 = ExpandContractMeshSelection
                     (local_68,&local_38,pFVar3,local_res20[0],bVar4,local_res18[0] != 0);
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execExpandMeshSelectionToConnected @ 14ce8edb0

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execExpandMeshSelectionToConnected
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FGeometryScriptMeshSelection *pFVar3;
  EGeometryScriptTopologyConnectionType local_res10 [8];
  UDynamicMesh *local_res18 [2];
  FGeometryScriptMeshSelection local_48;
  FGeometryScriptMeshSelection local_38;
  FGeometryScriptMeshSelection local_28;
  
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_38);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = Geometric;
  pFVar3 = &local_48;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar3 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.GeoSelection.Object = local_38.GeoSelection.Object;
  local_28.GeoSelection.SharedReferenceCount.ReferenceController =
       local_38.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar2 = ExpandMeshSelectionToConnected(local_res18[0],&local_28,pFVar3,local_res10[0]);
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execGetMeshSelectionInfo @ 14ce936a0

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execGetMeshSelectionInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  EGeometryScriptMeshSelectionType *pEVar1;
  FProperty *pFVar2;
  EGeometryScriptMeshSelectionType EVar3;
  int iVar4;
  EGeometryScriptMeshSelectionType *pEVar5;
  int *piVar6;
  EGeometryScriptMeshSelectionType local_res10 [16];
  int local_res20 [2];
  FGeometryScriptMeshSelection local_38;
  FGeometryScriptMeshSelection local_28;
  
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_38);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = Vertices;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar1 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pEVar5 = local_res10;
  if (pEVar1 != (EGeometryScriptMeshSelectionType *)0x0) {
    pEVar5 = pEVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_28.GeoSelection.Object = local_38.GeoSelection.Object;
  local_28.GeoSelection.SharedReferenceCount.ReferenceController =
       local_38.GeoSelection.SharedReferenceCount.ReferenceController;
  piVar6 = local_res20;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar6 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar3 = FGeometryScriptMeshSelection::GetSelectionType(&local_28);
  *pEVar5 = EVar3;
  iVar4 = FGeometryScriptMeshSelection::GetNumSelected(&local_28);
  *piVar6 = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execGetMeshUniqueSelectionInfo @ 14ce94350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execGetMeshUniqueSelectionInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  EGeometryScriptMeshSelectionType *pEVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  EGeometryScriptMeshSelectionType EVar3;
  int iVar4;
  int *piVar5;
  EGeometryScriptMeshSelectionType *pEVar6;
  EGeometryScriptMeshSelectionType local_res10 [8];
  int local_res20 [2];
  UDynamicMesh *local_68 [2];
  FGeometryScriptMeshSelection local_58;
  FGeometryScriptMeshSelection local_48;
  int *local_38;
  FGeometryScriptMeshSelection *local_30;
  code *local_28;
  int **local_20;
  
  local_68[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_48);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = Vertices;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar1 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pEVar6 = local_res10;
  if (pEVar1 != (EGeometryScriptMeshSelectionType *)0x0) {
    pEVar6 = pEVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_68[0];
  local_58.GeoSelection.Object = local_48.GeoSelection.Object;
  local_58.GeoSelection.SharedReferenceCount.ReferenceController =
       local_48.GeoSelection.SharedReferenceCount.ReferenceController;
  piVar5 = local_res20;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar3 = FGeometryScriptMeshSelection::GetSelectionType(&local_58);
  *pEVar6 = EVar3;
  if (this == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    iVar4 = FGeometryScriptMeshSelection::GetNumSelected(&local_58);
    *piVar5 = iVar4;
  }
  else {
    local_30 = &local_58;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshUniqueSelectionInfo'::__l25::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_38 = piVar5;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execInvertMeshSelection @ 14ce980a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execInvertMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptMeshSelection *this;
  UDynamicMesh *this_00;
  EGeometryScriptMeshSelectionType local_res10 [8];
  int local_res18 [2];
  UDynamicMesh *local_res20;
  FGeometryScriptMeshSelection local_78;
  FGeometryScriptMeshSelection local_68;
  FGeometryScriptMeshSelection local_58;
  undefined1 local_48 [16];
  FGeometryScriptMeshSelection local_38;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_58);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18[0] = 0;
  this = &local_68;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    this = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  this_00 = local_res20;
  local_78.GeoSelection.Object = local_58.GeoSelection.Object;
  local_78.GeoSelection.SharedReferenceCount.ReferenceController =
       local_58.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_res20 == (UDynamicMesh *)0x0) {
    this_00 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    if (local_res18[0] == 0) {
      local_res10[0] = FGeometryScriptMeshSelection::GetSelectionType(&local_78);
      local_48._0_8_ = local_res10;
      local_38.GeoSelection.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_48;
      local_38.GeoSelection.Object =
           (FGeometrySelection *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_48._8_8_ = this;
      UDynamicMesh::ProcessMesh
                (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                         &local_38);
    }
    else {
      local_38.GeoSelection.Object = local_58.GeoSelection.Object;
      local_38.GeoSelection.SharedReferenceCount.ReferenceController =
           local_58.GeoSelection.SharedReferenceCount.ReferenceController;
      if (local_58.GeoSelection.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.GeoSelection.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      ExpandMeshSelectionToConnected(local_res20,&local_38,this,Geometric);
    }
    FGeometryScriptMeshSelection::CombineSelectionInPlace(this,&local_78,Subtract);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.GeoSelection.SharedReferenceCount.ReferenceController);
  *(UDynamicMesh **)param_3 = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshBoundaryEdges @ 14ce9ba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshBoundaryEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  int iVar3;
  UDynamicMesh *pUVar4;
  FGeometryScriptMeshSelection *this;
  undefined1 auStackY_e8 [32];
  UDynamicMesh *local_b8;
  FGeometryScriptMeshSelection local_b0;
  undefined4 *local_a0;
  code *local_98;
  undefined4 **local_90;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_b0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pUVar4 = local_b8;
  this = &local_b0;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    this = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b8 == (UDynamicMesh *)0x0) {
    pUVar4 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_a0 = (undefined4 *)local_88;
    local_90 = &local_a0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshBoundaryEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_70.MaxBits = _UNK_150631d94;
    uStack_50 = _UNK_150631d98;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    local_88._0_4_ = Edge;
    local_88._4_4_ = Triangle;
    UDynamicMesh::ProcessMesh
              (local_b8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_98
              );
    FGeometryScriptMeshSelection::SetSelection(this,(FGeometrySelection *)local_88);
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    uVar2 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar3 = local_70.MaxBits;
    uStack_50 = 0xffffffff;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshElementsByMaterialID @ 14ce9bca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsByMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptMeshSelection *pFVar2;
  UDynamicMesh *pUVar3;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  FGeometryScriptMeshSelection local_68;
  code *local_58;
  undefined4 *local_50;
  undefined4 local_48 [2];
  FGeometryScriptMeshSelection *local_40;
  undefined1 local_38;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  pFVar2 = &local_68;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar2 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pUVar3 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_48[0] = local_res18[0];
    local_38 = local_res10[0];
    local_50 = local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByMaterialID'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_40 = pFVar2;
    UDynamicMesh::ProcessMesh
              (local_res20,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshElementsByNormalAngle @ 14ce9be50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsByNormalAngle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  UDynamicMesh *pUVar3;
  FGeometryScriptMeshSelection *pFVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  EGeometryScriptMeshSelectionType local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  UDynamicMesh *local_c8;
  double local_c0;
  FGeometryScriptMeshSelection local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 **local_80;
  double local_78;
  double local_70;
  double local_68;
  double *local_58;
  double *local_50;
  undefined1 local_48;
  
  local_c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar4 = &local_b8;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar4 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  dVar2 = 0.0;
  local_c0 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_res10[0] = Vertices;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar3 = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_c8 == (UDynamicMesh *)0x0) {
    pUVar3 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    auVar6._0_8_ = local_90 * local_90;
    auVar6._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_98 * local_98 + local_a0 * local_a0 + auVar6._0_8_;
    auVar7 = sqrtpd(auVar6,auVar7);
    if (auVar7._0_8_ <= 0.0) {
      local_70 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = __real_3ff0000000000000 / auVar7._0_8_;
      dVar2 = local_78 * local_90;
      local_70 = local_78 * local_98;
      local_78 = local_78 * local_a0;
    }
    local_68 = dVar2;
    local_a8 = cos(local_c0 * __real_3f91df46a2529d39);
    local_58 = &local_78;
    local_50 = &local_a8;
    local_80 = &local_58;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    local_48 = bVar5;
    UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
              (pUVar3,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                       *)&local_88,pFVar4,local_res10[0],local_res20[0],true);
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshElementsByPolygroup @ 14ce9c180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsByPolygroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptMeshSelection *pFVar2;
  UDynamicMesh *pUVar3;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20;
  undefined2 local_res21;
  undefined1 local_res23;
  undefined4 local_res24;
  UDynamicMesh *local_78;
  FGeometryScriptMeshSelection local_70;
  code *local_60;
  undefined1 *local_58;
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  FGeometryScriptMeshSelection *local_40;
  undefined1 local_38;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20 = 1;
  local_res24 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_70);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res10[0] = 0;
  pFVar2 = &local_70;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar2 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78 == (UDynamicMesh *)0x0) {
    pUVar3 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_50 = local_res20;
    local_4f = local_res21;
    local_4d = local_res23;
    local_4c = local_res24;
    local_48 = local_res18[0];
    local_38 = local_res10[0];
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByPolygroup'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_40 = pFVar2;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60
              );
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshElementsInBox @ 14ce9c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FGeometryScriptMeshSelection *pFVar3;
  bool bVar4;
  undefined1 auStackY_118 [32];
  EGeometryScriptMeshSelectionType local_e8 [4];
  int local_e4;
  int local_e0 [2];
  UDynamicMesh *local_d8;
  FGeometryScriptMeshSelection local_d0;
  undefined8 *local_c0;
  undefined1 local_b8;
  code *local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_d0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_40 = '\0';
  pFVar3 = &local_d0;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar3 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_e8[0] = Vertices;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_e4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e4);
  }
  bVar4 = local_e4 != 0;
  local_e0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  pUVar2 = local_d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_d8 == (UDynamicMesh *)0x0) {
    pUVar2 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    if (local_40 == '\0') {
      local_a0 = ___xmm_7fefffffffffffff7fefffffffffffff;
      uStack_98 = _UNK_150a9e648;
      uStack_80 = ___xmm_ffefffffffffffffffefffffffffffff;
      local_78 = _UNK_1508ffb58;
      local_90 = ___xmm_ffefffffffffffff7fefffffffffffff;
      uStack_88 = _UNK_150a9e6d8;
    }
    else {
      local_a0 = local_70;
      uStack_98 = uStack_68;
      local_90 = local_60;
      uStack_88 = local_58;
      uStack_80 = uStack_50;
      local_78 = local_48;
    }
    local_c0 = &local_a0;
    local_a8 = &local_c0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    local_b8 = bVar4;
    UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
              (local_d8,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                         *)&local_b0,pFVar3,local_e8[0],local_e0[0],false);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshElementsInSphere @ 14ce9c990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInSphere
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FGeometryScriptMeshSelection *pFVar3;
  bool bVar4;
  EGeometryScriptMeshSelectionType local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  UDynamicMesh *local_a8;
  double local_a0;
  FGeometryScriptMeshSelection local_98;
  undefined8 *local_88;
  undefined1 local_80;
  code *local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  double local_38;
  
  local_a8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar3 = &local_98;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar3 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_a0 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res10[0] = Vertices;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar2 = local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a8 == (UDynamicMesh *)0x0) {
    pUVar2 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_38 = __real_3cb0000000000000;
    if ((__real_3cb0000000000000 <= local_a0) &&
       (local_38 = local_a0, __real_5fefffffffffffff <= local_a0)) {
      local_38 = __real_5fefffffffffffff;
    }
    local_88 = &local_50;
    local_70 = &local_88;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    local_50 = local_68;
    uStack_48 = uStack_60;
    local_40 = local_58;
    local_80 = bVar4;
    UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
              (local_a8,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                         *)&local_78,pFVar3,local_res10[0],local_res20[0],false);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshElementsInsideMesh @ 14ce9cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInsideMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  uint uVar16;
  FFrame *pFVar17;
  FGeometryScriptMeshSelection *pFVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_278 [32];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  int local_240;
  undefined4 local_23c;
  undefined4 local_238 [2];
  undefined8 local_230;
  undefined8 local_228;
  UDynamicMesh *local_220;
  UDynamicMesh *local_218;
  UDynamicMesh *local_210;
  FGeometryScriptMeshSelection local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  undefined1 **local_1e0;
  double *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined1 *local_1c0;
  UDynamicMesh **local_1b8;
  FGeometryScriptMeshSelection *local_1b0;
  undefined1 *local_1a8;
  undefined4 *local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  undefined1 local_f8 [8];
  uint uStack_f0;
  uint uStack_ec;
  double local_e8 [2];
  ulonglong local_d8;
  uint uVar36;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_220 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_220,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_220);
  }
  local_218 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_208);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_198 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_190 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  pFVar18 = &local_208;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar18 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  local_188 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_180 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_178 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_170 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_168 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_160 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_158 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_150 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_148 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_140 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_258[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_258,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_258);
  }
  local_240 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_240,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_240);
  }
  bVar19 = local_240 != 0;
  local_228 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  local_230 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  local_23c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    pFVar17 = param_2;
    FFrame::StepExplicitProperty(param_2,&local_23c,pFVar2);
    uVar40 = SUB84(pFVar17,0);
  }
  else {
    pFVar17 = param_2;
    FFrame::Step(param_2,param_2->Object,&local_23c);
    uVar40 = SUB84(pFVar17,0);
  }
  local_238[0] = local_23c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_248[0] = local_258[0];
  local_1f8 = local_230;
  local_1f0 = local_228;
  local_210 = local_220;
  local_250[0] = bVar19;
  if (local_220 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else if (local_218 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else if (local_218 == local_220) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    uVar36 = (uint)((ulonglong)local_148 >> 0x20);
    auVar32._0_8_ =
         (double)CONCAT44(uVar36 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_148,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar32._8_4_ = SUB84(dStack_140,0) & _UNK_15061cc88;
    auVar32._12_4_ = (uint)((ulonglong)dStack_140 >> 0x20) & _UNK_15061cc8c;
    auVar29._8_8_ = dStack_150;
    auVar29._0_8_ = local_158;
    uVar3 = (uint)((ulonglong)local_158 >> 0x20);
    uVar4 = (uint)((ulonglong)dStack_150 >> 0x20);
    auVar27._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar32._8_8_);
    auVar27._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar32._0_8_);
    uVar16 = movmskpd(uVar40,auVar27);
    auVar28._0_8_ =
         (double)CONCAT44(uVar3 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_158,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar28._8_4_ = SUB84(dStack_150,0) & _UNK_15061cc88;
    auVar28._12_4_ = uVar4 & _UNK_15061cc8c;
    auVar43._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar28._8_8_);
    auVar43._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar28._0_8_);
    iVar15 = movmskpd((int)local_220,auVar43);
    if ((uVar16 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_138[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_138[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_128[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_128[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_118[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_118[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_108[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_108[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_f8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      _uStack_f0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    }
    else {
      lVar20 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar36,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(local_148,0))
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
      dVar11 = local_188 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar12 = dStack_180 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar49 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar13 = local_198 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar14 = dStack_190 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar50 = SUB84(dVar14,0);
      uVar51 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar42._8_4_ = uVar50;
      auVar42._0_8_ = dVar13;
      auVar42._12_4_ = uVar51;
      lVar21 = -(ulonglong)
                ((double)CONCAT44(uVar3 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(local_158,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar22 = -(ulonglong)
                ((double)CONCAT44(uVar4 & _UNK_15061cc8c,SUB84(dStack_150,0) & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_f8._0_4_ = ~(uint)lVar21 & auVar29._0_4_;
      local_f8._4_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar29._4_4_;
      uStack_f0 = ~(uint)lVar22 & auVar29._8_4_;
      uStack_ec = ~(uint)((ulonglong)lVar22 >> 0x20) & auVar29._12_4_;
      auVar5._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar5._0_8_ = local_148;
      auVar5._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar5);
      dVar44 = local_178 * (double)CONCAT44(local_f8._4_4_,local_f8._0_4_);
      dVar45 = dStack_170 * (double)CONCAT44(uStack_ec,uStack_f0);
      local_e8[0] = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar29._4_4_,
                                     ~(uint)lVar20 & auVar29._0_4_);
      auVar33._8_4_ = uVar50;
      auVar33._0_8_ = dVar13;
      auVar33._12_4_ = uVar51;
      dVar37 = auVar33._8_8_;
      auVar23._8_4_ = SUB84(dVar11,0);
      auVar23._0_8_ = dVar37;
      auVar23._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      dVar8 = local_168 * local_e8[0];
      dVar9 = dStack_160 * 0.0;
      auVar10._8_4_ = SUB84(dVar12,0);
      auVar10._0_8_ = dVar11;
      auVar10._12_4_ = uVar49;
      auVar43 = blendpd(auVar42,auVar10,2);
      auVar46._8_4_ = SUB84(dVar45,0);
      auVar46._0_8_ = dVar44;
      uVar40 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar46._12_4_ = uVar40;
      auVar30._8_4_ = SUB84(dVar45,0);
      auVar30._0_8_ = dVar44;
      auVar30._12_4_ = uVar40;
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar29 = blendpd(auVar30,auVar7,2);
      auVar47._0_8_ = auVar46._8_8_ * dVar13 - dVar37 * dVar44;
      auVar47._8_8_ = dVar8 * dVar14 - auVar23._8_8_ * dVar45;
      auVar31._0_8_ = auVar29._0_8_ * dVar11 - auVar43._0_8_ * dVar8;
      auVar31._8_8_ = auVar29._8_8_ * dVar12 - auVar43._8_8_ * dVar9;
      dVar9 = auVar47._8_8_ + auVar47._8_8_;
      dVar6 = auVar31._0_8_ + auVar31._0_8_;
      uVar40 = SUB84(dVar6,0);
      uVar41 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar29 = blendpd(auVar47,auVar31,2);
      auVar38._8_4_ = uVar40;
      auVar38._0_8_ = dVar9;
      auVar38._12_4_ = uVar41;
      auVar24._8_4_ = uVar40;
      auVar24._0_8_ = dVar9;
      auVar24._12_4_ = uVar41;
      auVar34._8_4_ = uVar40;
      auVar34._0_8_ = dVar9;
      auVar34._12_4_ = uVar41;
      auVar48._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar48._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      auVar29 = blendpd(auVar34,auVar48,2);
      auVar39._0_8_ = auVar38._8_8_ * dVar13 - dVar9 * dVar37;
      auVar39._8_8_ = auVar48._0_8_ * dVar14 - auVar24._8_8_ * dVar11;
      auVar25._8_4_ = SUB84(auVar48._8_8_,0);
      auVar25._0_8_ = auVar48._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar35._0_8_ = auVar29._0_8_ * dVar11 - auVar48._0_8_ * auVar43._0_8_;
      auVar35._8_8_ = auVar29._8_8_ * dVar12 - auVar25._8_8_ * auVar43._8_8_;
      auVar26._8_4_ = SUB84(auVar39._8_8_,0);
      auVar26._0_8_ = auVar39._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar29 = blendpd(auVar39,auVar35,2);
      local_138[1]._0_4_ = uVar50;
      local_138[0] = dVar13;
      local_138[1]._4_4_ = uVar51;
      local_128[1]._0_4_ = SUB84(dVar12,0);
      local_128[0] = dVar11;
      local_128[1]._4_4_ = uVar49;
      local_108[1] = 0.0;
      local_108[0] = 0.0 - (auVar48._0_8_ * dVar12 + dVar8 + auVar29._0_8_);
      local_e8[1] = 0.0;
      local_118[1] = 0.0 - (dVar6 * dVar12 + dVar45 + auVar35._0_8_);
      local_118[0] = 0.0 - (dVar9 * dVar12 + dVar44 + auVar26._8_8_);
    }
    local_1d8 = local_138;
    local_1d0 = &local_1f8;
    local_1c8 = &local_1f0;
    local_1c0 = local_250;
    local_1b8 = &local_210;
    local_1a8 = local_248;
    local_1a0 = local_238;
    local_1e0 = (undefined1 **)&local_1d8;
    local_1e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_1b0 = pFVar18;
    UDynamicMesh::ProcessMesh
              (local_218,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_1e8);
  }
  *(UDynamicMesh **)param_3 = local_210;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshElementsWithPlane @ 14ce9d350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsWithPlane
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FGeometryScriptMeshSelection *pFVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  EGeometryScriptMeshSelectionType local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  UDynamicMesh *local_e8;
  FGeometryScriptMeshSelection local_e0;
  double local_d0;
  double local_c8;
  double local_c0;
  code *local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_88;
  double local_80;
  double local_78;
  undefined8 *local_68;
  double *local_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_e0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  pFVar3 = &local_e0;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar3 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res10[0] = Vertices;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar2 = local_e8;
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  local_38 = local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_e8 == (UDynamicMesh *)0x0) {
    pUVar2 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_78 = 0.0;
    auVar5._0_8_ = local_d0 * local_d0 + local_c8 * local_c8 + local_c0 * local_c0;
    auVar5._8_8_ = 0;
    auVar5 = sqrtpd(auVar5,auVar5);
    if (auVar5._0_8_ <= 0.0) {
      local_80 = 0.0;
      local_88 = 0.0;
    }
    else {
      local_88 = __real_3ff0000000000000 / auVar5._0_8_;
      local_78 = local_88 * local_c0;
      local_80 = local_88 * local_c8;
      local_88 = local_88 * local_d0;
    }
    local_68 = &local_48;
    local_60 = &local_88;
    local_b0 = &local_68;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    local_58 = bVar4;
    UE::MeshSelectionLocals::SelectMeshElementsWithContainmentTest
              (local_e8,(TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                         *)&local_b8,pFVar3,local_res10[0],local_res20[0],false);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshPolyGroupBoundaryEdges @ 14ce9d670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshPolyGroupBoundaryEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  UDynamicMesh *this;
  FGeometryScriptMeshSelection *this_00;
  bool bVar3;
  int local_res10 [2];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  UDynamicMesh *local_res20;
  code *local_78;
  FGeometryScriptMeshSelection **local_70;
  FGeometryScriptMeshSelection local_68;
  FGeometryScriptMeshSelection *local_58;
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined1 local_48;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18 = CONCAT31(local_res18._1_3_,1);
  uStackX_1c = 0;
  this_00 = &local_68;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    this_00 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  uVar2 = local_res18;
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = (code *)CONCAT44(uStackX_1c,local_res18);
  FGeometryScriptMeshSelection::ClearSelection(this_00);
  if (this == (UDynamicMesh *)0x0) {
    this = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_4f = local_78._1_2_;
    local_4d = local_78._3_1_;
    local_4c = local_78._4_4_;
    local_70 = &local_58;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshPolyGroupBoundaryEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_50 = (undefined1)uVar2;
    local_58 = this_00;
    local_48 = bVar3;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_78);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshSharpEdges @ 14ce9d850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshSharpEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptMeshSelection *pFVar2;
  UDynamicMesh *this;
  UDynamicMesh *local_res10;
  double local_res18 [2];
  FGeometryScriptMeshSelection local_48;
  FGeometryScriptMeshSelection *local_38;
  double local_30;
  code *local_28;
  uchar **local_20;
  
  local_res10 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0.0;
  pFVar2 = &local_48;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar2 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UDynamicMesh *)0x0) {
    this = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_38 = pFVar2;
    local_30 = cos(local_res18[0] * __real_3f91df46a2529d39);
    local_20 = (uchar **)&local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSharpEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshSplitNormalEdges @ 14ce9d9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshSplitNormalEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptMeshSelection *pFVar2;
  UDynamicMesh *pUVar3;
  UDynamicMesh *local_res10;
  FGeometryScriptMeshSelection *local_res18;
  FGeometryScriptMeshSelection local_28;
  code *local_18;
  uchar **local_10;
  
  local_res10 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar3 = local_res10;
  pFVar2 = &local_28;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar2 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UDynamicMesh *)0x0) {
    pUVar3 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_10 = (uchar **)&local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSplitNormalEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18 = pFVar2;
    UDynamicMesh::ProcessMesh
              (local_res10,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectMeshUVSeamEdges @ 14ce9db30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshUVSeamEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  uchar *puVar3;
  UDynamicMesh *this;
  FGeometryScriptMeshSelection *this_00;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  UDynamicMesh *local_88;
  FGeometryScriptMeshSelection local_80;
  code *local_70;
  FGeometryScriptMeshSelection **local_68;
  FGeometryScriptMeshSelection *local_60;
  undefined4 local_58;
  uchar *local_50;
  undefined1 local_48;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_80);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res20[0] = 0;
  this_00 = &local_80;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    this_00 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  this = local_88;
  uVar2 = local_res20[0];
  bVar4 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar3 = '\0';
  FGeometryScriptMeshSelection::ClearSelection(this_00);
  if (this == (UDynamicMesh *)0x0) {
    this = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_68 = &local_60;
    local_58 = uVar2;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshUVSeamEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_60 = this_00;
    local_50 = puVar3;
    local_48 = bVar4;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_70);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectSelectionBoundaryEdges @ 14ce9dd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSelectionFunctions::execSelectSelectionBoundaryEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  int iVar3;
  FGeometryScriptMeshSelection *this;
  UDynamicMesh *pUVar4;
  FGeometryScriptMeshSelection *pFVar5;
  undefined1 auStackY_128 [32];
  int local_f8 [2];
  UDynamicMesh *local_f0;
  FGeometryScriptMeshSelection local_e8;
  FGeometryScriptMeshSelection local_d8;
  code *local_c8;
  undefined4 **local_c0;
  undefined4 *local_b8;
  FGeometryScriptMeshSelection *local_b0;
  undefined1 local_a8;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pFVar5 = &local_d8;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar5 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_e8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f8[0] = 0;
  this = &local_e8;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    this = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  pUVar4 = local_f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f0 == (UDynamicMesh *)0x0) {
    pUVar4 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    local_b8 = (undefined4 *)local_98;
    local_c0 = &local_b8;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionFunctions::SelectSelectionBoundaryEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_88 = 0;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_80.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_80.MaxBits = _UNK_150631d94;
    uStack_60 = _UNK_150631d98;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    local_98._0_4_ = Edge;
    local_98._4_4_ = Triangle;
    local_b0 = pFVar5;
    local_a8 = local_f8[0] != 0;
    UDynamicMesh::ProcessMesh
              (local_f0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_c8
              );
    FGeometryScriptMeshSelection::SetSelection(this,(FGeometrySelection *)local_98);
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    uVar2 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
    }
    iVar3 = local_80.MaxBits;
    uStack_60 = 0xffffffff;
    local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_80.NumBits = 0;
      local_80.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
    }
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
  }
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 150577cc0

bool __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection'::__l25::<lambda_2>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2631331788571542224>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2631331788571542224>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150577d00

bool __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection'::__l25::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2631331788571542293>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2631331788571542293>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150577d40

bool __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l64::<lambda_5>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2631331788571542054>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2631331788571542054>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150577dc0

bool __thiscall
`UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection'::__l81::<lambda_9>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2631331788571542110>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2631331788571542110>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

