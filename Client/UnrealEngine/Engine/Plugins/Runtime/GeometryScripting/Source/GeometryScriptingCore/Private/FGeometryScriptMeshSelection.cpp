// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 25

// StaticStruct @ 14cd9bf10

UScriptStruct * __cdecl FGeometryScriptMeshSelection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptMeshSelection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptMeshSelection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshSelection,(UObject *)pUVar1,
                         L"GeometryScriptMeshSelection");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptMeshSelection.OuterSingleton;
}

// FGeometryScriptMeshSelection @ 14cda53d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryScriptMeshSelection * __thiscall
FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(FGeometryScriptMeshSelection *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryScriptMeshSelection *pFVar3;
  FGeometrySelection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGeometryScriptMeshSelection local_28;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  (this->GeoSelection).Object = (FGeometrySelection *)0x0;
  (this->GeoSelection).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_28.GeoSelection.SharedReferenceCount.ReferenceController = ::operator_new(0x68);
  if (local_28.GeoSelection.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    local_28.GeoSelection.Object = ___xmm_00000000000000000000000000000010;
    pFVar4 = (FGeometrySelection *)&DAT_00000010;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (local_28.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    pFVar4 = (FGeometrySelection *)
             (local_28.GeoSelection.SharedReferenceCount.ReferenceController + 1);
    (local_28.GeoSelection.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)0x1;
    (local_28.GeoSelection.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeometrySelection_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[2].SharedReferenceCount =
         (atomic<int>)0x0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[2].WeakReferenceCount =
         (atomic<int>)0x0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[6]._padding_ = 0;
    *(undefined4 *)&local_28.GeoSelection.SharedReferenceCount.ReferenceController[1]._padding_ = 4;
    *(undefined4 *)
     ((longlong)&local_28.GeoSelection.SharedReferenceCount.ReferenceController[1]._padding_ + 4) =
         1;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
         (atomic<int>)0x0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)0x0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[3].SharedReferenceCount =
         (atomic<int>)0x0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[3].WeakReferenceCount =
         (atomic<int>)0x0;
    *(undefined4 *)&local_28.GeoSelection.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    *(undefined4 *)
     ((longlong)&local_28.GeoSelection.SharedReferenceCount.ReferenceController[4]._padding_ + 4) =
         0x80;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[4].SharedReferenceCount =
         (atomic<int>)0xffffffff;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[4].WeakReferenceCount =
         (atomic<int>)0x0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[5].SharedReferenceCount =
         (atomic<int>)0x0;
    local_28.GeoSelection.SharedReferenceCount.ReferenceController[5].WeakReferenceCount =
         (atomic<int>)0x0;
    if (pFVar4 == (FGeometrySelection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FGeometryScriptMeshSelection *)(*pcVar1)();
        return pFVar3;
      }
    }
    LOCK();
    (local_28.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = local_28.GeoSelection.SharedReferenceCount.ReferenceController;
    local_28.GeoSelection.Object = pFVar4;
  }
  if (this != &local_28) {
    (this->GeoSelection).Object = pFVar4;
    local_28.GeoSelection.Object = (FGeometrySelection *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GeoSelection).SharedReferenceCount,
               &local_28.GeoSelection.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((this->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGeometryScriptMeshSelection *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = (this->GeoSelection).Object;
  pFVar4->ElementType = Face;
  pFVar4->TopologyType = Triangle;
  return this;
}

// operator() @ 14cdb0a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l2::<lambda_1>::operator()
          (void *this,TFunctionRef<void___cdecl(int_&)> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  ForElementType<FSetElementId> FVar19;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  uint local_120 [2];
  longlong *local_118;
  int local_110;
  int local_10c;
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  plVar5 = *(longlong **)((longlong)this + 8);
  iVar17 = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_118 = this;
  if ((*plVar5 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar11 = *plVar5;
  iVar3 = *(int *)(lVar11 + 0x30);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x18);
  uStack_fc = 1;
  local_e8 = 0;
  plVar5 = (longlong *)(lVar11 + 8);
  iStack_ec = 0;
  if (iVar3 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    local_e8 = 0;
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar17;
      local_e8 = local_e8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_ec = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14cdb0b9e;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uStack_fc = -uVar16 & uVar16;
    uVar14 = (ulonglong)uStack_fc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_110 = (int)lVar10;
    iStack_ec = local_e8 + -1 + local_110;
    if (iVar3 < iStack_ec) {
      iStack_ec = iVar3;
    }
  }
LAB_14cdb0b9e:
  uStack_e4 = local_8c;
  iStack_e0 = *(int *)(lVar11 + 0x10) - *(int *)(lVar11 + 0x3c);
  uVar16 = *(uint *)(lVar11 + 0x30);
  uStack_f0 = 0xffffffff;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_fc,iVar17);
  TStack_d0.CurrentBitIndex = iStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_d0._28_4_ = local_8c;
  TStack_d0.BaseBitIndex = local_e8;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  local_108 = plVar5;
  iStack_100 = iVar17;
  local_f8 = pTVar1;
  local_d8 = plVar5;
  TStack_d0.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)(lVar11 + 0x30);
  if (uVar16 != uVar4) {
    pTVar18 = pTVar1;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x28);
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cdb0cb0;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14cdb0cb0:
  while( true ) {
    plVar8 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_d0.CurrentBitIndex == uVar16) && (TStack_d0.Array == pTVar1)) && (plVar8 == plVar5)
       ) break;
    local_124 = (undefined4)
                ((ulonglong)*(undefined8 *)(*plVar8 + (longlong)TStack_d0.CurrentBitIndex * 0x10) >>
                0x20);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (&local_88,&local_10c,(bool *)&local_124);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  uVar14 = 0;
  lVar11 = *local_118;
  uVar16 = *(int *)(lVar11 + 0x144) + *(int *)(lVar11 + 0x140) * 0x200;
  lVar10 = local_88.Elements._0_8_;
  FVar19 = local_88.Hash.SecondaryData;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar11 + 0x148) - 1U))) {
    uVar14 = 1;
    uVar15 = 1;
    if ((int)uVar16 < 2) goto joined_r0x00014cdb0dac;
    do {
      lVar2 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
      lVar6 = (*(undefined8 **)(lVar11 + 0x148))[uVar14 >> 9];
      if ((*(short *)(lVar2 + lVar6) != 0) && (*(short *)(lVar2 + lVar6) != -1)) break;
      uVar15 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar16);
  }
  uVar15 = (uint)uVar14;
joined_r0x00014cdb0dac:
  do {
    if (uVar15 == uVar16) {
      local_88.HashSize = 0;
      if (FVar19 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar19);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    lVar6 = *local_118;
    uVar15 = (uint)uVar14;
    if (*(char *)(lVar6 + 0x1a8) == '\0') {
      uVar14 = 0xffffffff;
    }
    else {
      if ((-1 < (int)uVar15) &&
         ((int)uVar15 < *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144))) {
        lVar2 = (uVar14 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x148) + lVar2) +
                               (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar14 = (ulonglong)
                   *(uint *)(*(longlong *)(*(longlong *)(lVar6 + 0x198) + lVar2) +
                            (ulonglong)(uVar15 & 0x1ff) * 4);
          goto LAB_14cdb0e34;
        }
      }
      uVar14 = 0;
    }
LAB_14cdb0e34:
    local_120[0] = uVar15;
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar12 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (FVar19 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar19;
      }
      for (iVar17 = *(int *)((longlong)FVar12 + (local_88.HashSize - 1 & uVar14) * 4); iVar17 != -1;
          iVar17 = *(int *)(lVar10 + 4 + (longlong)iVar17 * 0xc)) {
        if (*(int *)(lVar10 + (longlong)iVar17 * 0xc) == (int)uVar14) {
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_120);
          lVar10 = local_88.Elements._0_8_;
          FVar19 = local_88.Hash.SecondaryData;
          break;
        }
      }
    }
    uVar15 = uVar15 + 1;
    uVar14 = (ulonglong)uVar15;
    if ((int)uVar15 < (int)uVar16) {
      do {
        lVar6 = (uVar14 >> 9) * 8;
        lVar2 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
        if ((*(short *)(lVar2 + *(longlong *)(*(longlong *)(lVar11 + 0x148) + lVar6)) != 0) &&
           (*(short *)(lVar2 + *(longlong *)(lVar6 + *(longlong *)(lVar11 + 0x148))) != -1)) break;
        uVar15 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar15;
      } while ((int)uVar15 < (int)uVar16);
      uVar15 = (uint)uVar14;
    }
  } while( true );
}

// operator() @ 14cdb9bc0

void __thiscall
`FGeometryScriptMeshSelection::ProcessByEdgeID'::__l17::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_28;
  uint local_20 [2];
  
  local_res10[0] = local_res10[0] & 0xffffff00;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_28 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar1 = *(uint *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_20[0] = uVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)&local_28);
  if ((char)local_res10[0] == '\0') {
    local_res10[0] = (uint)local_28;
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],local_res10);
  }
  local_res10[0] = local_res10[0] & 0xffffff00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)((longlong)&local_28 + 4));
  if ((char)local_res10[0] == '\0') {
    local_res10[0] = local_28._4_4_;
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],local_res10);
  }
  local_res10[0] = local_res10[0] & 0xffffff00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)local_20);
  if ((char)local_res10[0] == '\0') {
    local_res10[0] = uVar1;
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],local_res10);
  }
  return;
}

// operator() @ 14cdb9e50

void __thiscall
`FGeometryScriptMeshSelection::ProcessByVertexID'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_28;
  uint local_20 [2];
  
  local_res10[0] = local_res10[0] & 0xffffff00;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_28 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar1 = *(uint *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_20[0] = uVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)&local_28);
  if ((char)local_res10[0] == '\0') {
    local_res10[0] = (uint)local_28;
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],local_res10);
  }
  local_res10[0] = local_res10[0] & 0xffffff00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)((longlong)&local_28 + 4));
  if ((char)local_res10[0] == '\0') {
    local_res10[0] = local_28._4_4_;
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],local_res10);
  }
  local_res10[0] = local_res10[0] & 0xffffff00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x10),
             local_res8,(bool *)local_20);
  if ((char)local_res10[0] == '\0') {
    local_res10[0] = uVar1;
    (*(code *)**(undefined8 **)((longlong)this + 8))
              ((*(undefined8 **)((longlong)this + 8))[1],local_res10);
  }
  return;
}

// operator() @ 14cdbbce0

void __thiscall
`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l22::<lambda_2>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14cdbcf60

void __thiscall
`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l56::<lambda_4>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14cdbd3d0

void __thiscall
`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l63::<lambda_5>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char local_res8;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res18,(bool *)local_res10);
  if (local_res8 == '\0') {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  }
  return;
}

// operator() @ 14cdbd5a0

void __thiscall
`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l67::<lambda_6>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res8 [2];
  char local_res10;
  undefined8 local_38;
  undefined4 local_30 [2];
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_38 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_30[0] = *(undefined4 *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res8,(bool *)&local_38);
  if (local_res10 == '\0') {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar3->Data <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(undefined4 *)(pFVar3->Data + (longlong)iVar6 * 4) = (undefined4)local_38;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res8,(bool *)((longlong)&local_38 + 4));
  if (local_res10 == '\0') {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar3->Data <= (FScriptContainerElement *)((longlong)&local_38 + 4U)) &&
       ((FScriptContainerElement *)((longlong)&local_38 + 4U) <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(undefined4 *)(pFVar3->Data + (longlong)iVar6 * 4) = local_38._4_4_;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res8,(bool *)local_30);
  if (local_res10 == '\0') {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar3->Data <= (FScriptContainerElement *)local_30) &&
       ((FScriptContainerElement *)local_30 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar6 + 1;
    *(undefined4 *)(pFVar3->Data + (longlong)iVar6 * 4) = local_30[0];
  }
  return;
}

// operator() @ 14cdbd8e0

void __thiscall
`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l74::<lambda_7>::operator()
          (void *this,ulong64 param_1,TVector<double> *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char local_res8;
  int local_res10 [6];
  undefined4 local_18 [4];
  
  local_18[0] = (undefined4)param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this,local_res10,
             (bool *)local_18);
  if (local_res8 == '\0') {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(undefined4 *)(pFVar2->Data + (longlong)iVar5 * 4) = local_18[0];
  }
  return;
}

// operator() @ 14cdbdc90

void __thiscall
`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l78::<lambda_8>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  int local_res10 [6];
  undefined8 local_18;
  undefined4 local_10 [2];
  
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_18 = *(undefined8 *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_10[0] = *(undefined4 *)(lVar1 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)&local_18);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)((longlong)&local_18 + 4));
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             local_res10,(bool *)local_10);
  return;
}

// ClearSelection @ 14cdcaa70

void __thiscall FGeometryScriptMeshSelection::ClearSelection(FGeometryScriptMeshSelection *this)

{
  int iVar1;
  FGeometrySelection *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->GeoSelection).Object;
  if (*(int *)&(pFVar2->Selection).Elements.field_0x8 !=
      *(int *)&(pFVar2->Selection).Elements.field_0x34) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::UnhashElements
              (&pFVar2->Selection);
    iVar1 = *(int *)&(pFVar2->Selection).Elements.field_0xc;
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&pFVar2->Selection,0,
                 (int *)&(pFVar2->Selection).Elements.field_0xc);
    }
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0x34 = 0;
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0x30 = 0xffffffff;
  }
  return;
}

// CombineSelectionInPlace @ 14cdcaf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FGeometryScriptMeshSelection::CombineSelectionInPlace
          (FGeometryScriptMeshSelection *this,FGeometryScriptMeshSelection *param_1,
          EGeometryScriptCombineSelectionMode param_2)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned___int64> FVar3;
  uint uVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar11;
  EGeometryScriptMeshSelectionType EVar12;
  EGeometryScriptMeshSelectionType EVar13;
  bool bVar14;
  FGeometrySelection *pFVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ForElementType<unsigned___int64> FVar22;
  uint uVar23;
  undefined1 *puVar24;
  ForElementType<FSetElementId> FVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 auStackY_578 [32];
  undefined1 local_528;
  undefined1 local_527;
  undefined1 local_526;
  undefined1 local_525;
  undefined1 local_524;
  undefined1 local_523;
  undefined1 local_522;
  undefined1 local_521;
  ulonglong local_520;
  undefined1 local_518 [24];
  int iStack_500;
  int iStack_4fc;
  int local_4f8;
  undefined4 uStack_4f4;
  int iStack_4f0;
  undefined4 uStack_4ec;
  ulong64 local_4e8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_4e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4d8;
  undefined8 local_4b8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_4b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4a8;
  undefined8 uStack_488;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_460;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_440;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_420;
  int local_400;
  int local_3fc;
  undefined8 local_3f8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_3f0;
  ulong64 local_3e8;
  ulong64 local_3e0;
  int local_3d8;
  undefined8 local_3d0;
  int local_3c8;
  undefined8 local_3c4;
  int local_3bc;
  int local_3b8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  undefined8 uStack_358;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_348;
  undefined8 uStack_328;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_318;
  undefined8 uStack_2f8;
  ulong64 local_2f0;
  ulong64 local_2e8 [2];
  undefined8 local_2d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_294;
  undefined4 local_274;
  undefined4 local_254;
  ForElementType<unsigned___int64> local_250;
  uint local_148;
  uint local_144;
  ForElementType<unsigned___int64> local_140;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_578;
  EVar12 = GetSelectionType(this);
  EVar13 = GetSelectionType(param_1);
  if (EVar12 != EVar13) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3859596159240634549>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\GeometryScriptSelectionTypes.cpp"
                        ,0xb5,"GetSelectionType() == SelectionB.GetSelectionType()");
    if (!bVar14) {
      return;
    }
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  EVar12 = GetSelectionType(this);
  if (EVar12 == Polygroups) {
    if (param_2 == Add) {
      pFVar15 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&param_1->GeoSelection);
      iVar21 = *(int *)&(pFVar15->Selection).Elements.field_0x28;
      local_518._8_4_ = 0;
      local_518._12_4_ = 1;
      local_4f8 = 0;
      puVar1 = &(pFVar15->Selection).Elements.field_0x10;
      pTVar2 = &pFVar15->Selection;
      iStack_4fc = 0;
      if (iVar21 != 0) {
        puVar26 = *(uint **)&(pFVar15->Selection).Elements.field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar1;
        }
        uVar23 = *puVar26;
        while (uVar23 == 0) {
          lVar18 = (longlong)(int)local_518._8_4_;
          local_4f8 = local_4f8 + 0x20;
          local_518._8_4_ = local_518._8_4_ + 1;
          iStack_4fc = iVar21;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_518._8_4_)
          goto LAB_14cdcb9ae;
          uVar23 = puVar26[lVar18 + 1];
        }
        local_518._12_4_ = -uVar23 & uVar23;
        uVar19 = (ulonglong)(uint)local_518._12_4_ * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_400 = (int)lVar18;
        iStack_4fc = local_4f8 + -1 + local_400;
        if (iVar21 < iStack_4fc) {
          iStack_4fc = iVar21;
        }
      }
LAB_14cdcb9ae:
      uStack_4f4 = local_274;
      iStack_4f0 = *(int *)&(pFVar15->Selection).Elements.field_0x8 -
                   *(int *)&(pFVar15->Selection).Elements.field_0x34;
      uVar23 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
      iStack_500 = -1;
      uVar27 = uVar23 & 0xffffffe0;
      TStack_3a8._padding_ = CONCAT44(local_518._12_4_,local_518._8_4_);
      TStack_3a8.CurrentBitIndex = iStack_4fc;
      TStack_3a8.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar23 >> 5;
      TStack_3a8._28_4_ = local_274;
      TStack_3a8.BaseBitIndex = local_4f8;
      uStack_388 = CONCAT44(uStack_4ec,iStack_4f0);
      local_518._0_8_ = pTVar2;
      local_518._16_8_ = puVar1;
      local_3b0 = pTVar2;
      TStack_3a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar23 < 0) || (iVar21 < (int)uVar23)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar4 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
      if (uVar23 != uVar4) {
        puVar24 = *(undefined1 **)&(pFVar15->Selection).Elements.field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar1;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
        while (uVar23 == 0) {
          lVar18 = (longlong)iVar20;
          uVar27 = uVar27 + 0x20;
          iVar20 = iVar20 + 1;
          uVar23 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14cdcbac0;
          uVar23 = *(uint *)(puVar24 + lVar18 * 4 + 4);
        }
        uVar19 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3fc = (int)lVar18;
        uVar23 = (uVar27 - 1) + local_3fc;
        if ((int)uVar4 < (int)uVar23) {
          uVar23 = uVar4;
        }
      }
LAB_14cdcbac0:
      while( true ) {
        pTVar11 = local_3b0;
        if (*(int *)&(local_3b0->Elements).field_0x8 - *(int *)&(local_3b0->Elements).field_0x34 !=
            (int)uStack_388) {
          local_524 = 0;
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_524);
        }
        if (((TStack_3a8.CurrentBitIndex == uVar23) &&
            (TStack_3a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar11 == pTVar2)) break;
        uVar7 = *(undefined8 *)
                 (*(longlong *)&pTVar11->Elements + (longlong)TStack_3a8.CurrentBitIndex * 0x10);
        local_3d0 = uVar7;
        if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar14 = UE::Geometry::FindInSelectionByTopologyID
                           ((this->GeoSelection).Object,(uint)((ulonglong)uVar7 >> 0x20),&local_2f0)
        ;
        if (!bVar14) {
          if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64_const_&>
                    (&((this->GeoSelection).Object)->Selection,&local_3e8,(bool *)&local_3d0);
        }
        TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
      }
      return;
    }
    if (param_2 == Subtract) {
      bVar14 = IsEmpty(param_1);
      if (bVar14) {
        return;
      }
      pFVar15 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&param_1->GeoSelection);
      local_440._padding_._4_4_ = 1;
      local_440._padding_._0_4_ = 0;
      puVar1 = &(pFVar15->Selection).Elements.field_0x10;
      local_440.UnvisitedBitMask = 0xffffffff;
      pTVar2 = &pFVar15->Selection;
      local_440.CurrentBitIndex = 0;
      local_440.BaseBitIndex = 0;
      local_440.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (*(int *)&(pFVar15->Selection).Elements.field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_440);
      }
      TStack_4d8._padding_ = CONCAT44(local_440._padding_._4_4_,(undefined4)local_440._padding_);
      TStack_4d8.CurrentBitIndex = local_440.CurrentBitIndex;
      TStack_4d8.UnvisitedBitMask = local_440.UnvisitedBitMask;
      TStack_4d8._28_4_ = local_440._28_4_;
      TStack_4d8.BaseBitIndex = local_440.BaseBitIndex;
      TStack_4d8.Array = local_440.Array;
      local_4b8 = CONCAT44(local_4b8._4_4_,
                           *(int *)&(pFVar15->Selection).Elements.field_0x8 -
                           *(int *)&(pFVar15->Selection).Elements.field_0x34);
      TStack_4a8.Array = local_440.Array;
      uStack_488 = local_4b8;
      local_4e0 = pTVar2;
      local_4b0 = pTVar2;
      TStack_4a8._padding_ = TStack_4d8._padding_;
      TStack_4a8._16_8_ = TStack_4d8._16_8_;
      TStack_4a8._24_8_ = TStack_4d8._24_8_;
      pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_518,
                           (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                           *(int *)&(pFVar15->Selection).Elements.field_0x28);
      TStack_4d8._padding_ = pTVar16->_padding_;
      pTVar10 = pTVar16->Array;
      uVar7._0_4_ = pTVar16->UnvisitedBitMask;
      uVar7._4_4_ = pTVar16->CurrentBitIndex;
      TStack_4d8.BaseBitIndex = pTVar16->BaseBitIndex;
      TStack_4d8._28_4_ = *(undefined4 *)&pTVar16->field_0x1c;
      TStack_4d8.Array = pTVar10;
      TStack_4d8._16_8_ = uVar7;
      while( true ) {
        pTVar11 = local_4b0;
        if (*(int *)&(local_4b0->Elements).field_0x8 - *(int *)&(local_4b0->Elements).field_0x34 !=
            (int)uStack_488) {
          local_523 = 0;
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_523);
        }
        if (((TStack_4a8.CurrentBitIndex == uVar7._4_4_) && (TStack_4a8.Array == pTVar10)) &&
           (pTVar11 == pTVar2)) break;
        uVar8 = *(undefined8 *)
                 (*(longlong *)&pTVar11->Elements + (longlong)TStack_4a8.CurrentBitIndex * 0x10);
        if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar14 = UE::Geometry::FindInSelectionByTopologyID
                           ((this->GeoSelection).Object,(uint)((ulonglong)uVar8 >> 0x20),&local_3e0)
        ;
        if (bVar14) {
          if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Remove
                    (&((this->GeoSelection).Object)->Selection,local_3e0);
        }
        TStack_4a8.UnvisitedBitMask = TStack_4a8.UnvisitedBitMask & ~TStack_4a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4a8);
      }
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Compact
                (&((this->GeoSelection).Object)->Selection);
      return;
    }
    if (param_2 != Intersection) {
      return;
    }
    local_34 = 0x20;
    local_140.SecondaryData = (ForElementType<unsigned___int64>)0x0;
    local_38 = 0;
    pFVar15 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
    local_420._padding_._0_4_ = 0;
    local_420._padding_._4_4_ = 1;
    local_420.UnvisitedBitMask = 0xffffffff;
    local_480.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar15->Selection).Elements.field_0x10;
    local_420.CurrentBitIndex = 0;
    local_420.BaseBitIndex = 0;
    pTVar2 = &pFVar15->Selection;
    local_420.Array = local_480.Array;
    if (*(int *)&(pFVar15->Selection).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_420);
    }
    uVar23 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
    TStack_4d8._padding_ = CONCAT44(local_420._padding_._4_4_,(undefined4)local_420._padding_);
    bVar17 = (byte)uVar23 & 0x1f;
    TStack_4d8.CurrentBitIndex = local_420.CurrentBitIndex;
    TStack_4d8.UnvisitedBitMask = local_420.UnvisitedBitMask;
    TStack_4d8._28_4_ = local_420._28_4_;
    TStack_4d8.BaseBitIndex = local_420.BaseBitIndex;
    uStack_488 = CONCAT44(uStack_488._4_4_,
                          *(int *)&(pFVar15->Selection).Elements.field_0x8 -
                          *(int *)&(pFVar15->Selection).Elements.field_0x34);
    local_480._padding_._0_4_ = (int)uVar23 >> 5;
    TStack_4a8.Array = local_420.Array;
    local_480.BaseBitIndex = uVar23 & 0xffffffe0;
    local_480._padding_._4_4_ = 1 << bVar17;
    local_480.UnvisitedBitMask = -1 << bVar17;
    TStack_4d8.Array = local_420.Array;
    local_4b8 = uStack_488;
    local_4e0 = pTVar2;
    local_4b0 = pTVar2;
    TStack_4a8._padding_ = TStack_4d8._padding_;
    TStack_4a8._16_8_ = TStack_4d8._16_8_;
    TStack_4a8._24_8_ = TStack_4d8._24_8_;
    local_480.CurrentBitIndex = uVar23;
    if (((int)uVar23 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar23 != *(uint *)&(pFVar15->Selection).Elements.field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
    }
    iVar21 = local_480.CurrentBitIndex;
    pTVar10 = local_480.Array;
    local_2d8 = CONCAT44(local_480._padding_._4_4_,(int)local_480._padding_);
    local_2c8 = CONCAT44(local_480.CurrentBitIndex,local_480.UnvisitedBitMask);
    uStack_2c0 = CONCAT44(local_480._28_4_,local_480.BaseBitIndex);
    pTStack_2d0 = local_480.Array;
    while( true ) {
      pTVar11 = local_4e0;
      if (*(int *)&(local_4e0->Elements).field_0x8 - *(int *)&(local_4e0->Elements).field_0x34 !=
          (int)local_4b8) {
        local_522 = 0;
        `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_522);
      }
      uVar23 = local_38;
      if (((TStack_4d8.CurrentBitIndex == iVar21) && (TStack_4d8.Array == pTVar10)) &&
         (pTVar11 == pTVar2)) break;
      uVar5 = *(ulong64 *)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_4d8.CurrentBitIndex * 0x10);
      local_4e8 = uVar5;
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar14 = UE::Geometry::FindInSelectionByTopologyID
                         ((this->GeoSelection).Object,(uint)(uVar5 >> 0x20),local_2e8);
      if (!bVar14) {
        FVar22 = (ForElementType<unsigned___int64>)&local_140;
        if (local_140.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
          FVar22 = local_140.SecondaryData;
        }
        if ((ulonglong)FVar22 <= &local_4e8) {
          FVar22 = (ForElementType<unsigned___int64>)&local_140;
          if (local_140.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
            FVar22 = local_140.SecondaryData;
          }
          if ((&local_4e8 < (ulong64 *)((longlong)FVar22 + (longlong)(int)local_34 * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                               (0x808,&local_140,(int *)&local_34);
        }
        lVar18 = (longlong)(int)local_38;
        FVar22 = (ForElementType<unsigned___int64>)&local_140;
        if (local_140.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
          FVar22 = local_140.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(ulong64 *)((longlong)FVar22 + lVar18 * 8) = local_4e8;
      }
      TStack_4d8.UnvisitedBitMask = TStack_4d8.UnvisitedBitMask & ~TStack_4d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4d8);
    }
    uVar19 = (ulonglong)(int)local_38;
    FVar22 = local_140.SecondaryData;
    if (0 < (int)local_38) {
      FVar22 = (ForElementType<unsigned___int64>)&local_140;
      if (local_140.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar22 = local_140.SecondaryData;
      }
      FVar3 = (ForElementType<unsigned___int64>)((longlong)FVar22 + uVar19 * 8);
      while( true ) {
        if ((uint)uVar19 != uVar23) {
          local_521 = 0;
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_521);
        }
        if (FVar22 == FVar3) break;
        uVar5 = *(ulong64 *)FVar22;
        if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Remove
                  (&((this->GeoSelection).Object)->Selection,uVar5);
        uVar19 = (ulonglong)local_38;
        FVar22 = (ForElementType<unsigned___int64>)((longlong)FVar22 + 8);
      }
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Compact
                (&((this->GeoSelection).Object)->Selection);
      FVar22 = local_140.SecondaryData;
    }
  }
  else {
    if (param_2 == Add) {
      pFVar15 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&param_1->GeoSelection);
      iVar21 = *(int *)&(pFVar15->Selection).Elements.field_0x28;
      local_518._8_4_ = 0;
      local_518._12_4_ = 1;
      local_4f8 = 0;
      puVar1 = &(pFVar15->Selection).Elements.field_0x10;
      pTVar2 = &pFVar15->Selection;
      iStack_4fc = 0;
      if (iVar21 != 0) {
        puVar26 = *(uint **)&(pFVar15->Selection).Elements.field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar1;
        }
        uVar23 = *puVar26;
        while (uVar23 == 0) {
          lVar18 = (longlong)(int)local_518._8_4_;
          local_4f8 = local_4f8 + 0x20;
          local_518._8_4_ = local_518._8_4_ + 1;
          iStack_4fc = iVar21;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_518._8_4_)
          goto LAB_14cdcb071;
          uVar23 = puVar26[lVar18 + 1];
        }
        local_518._12_4_ = -uVar23 & uVar23;
        uVar19 = (ulonglong)(uint)local_518._12_4_ * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3d8 = (int)lVar18;
        iStack_4fc = local_3d8 + -1 + local_4f8;
        if (iVar21 < iStack_4fc) {
          iStack_4fc = iVar21;
        }
      }
LAB_14cdcb071:
      uStack_4f4 = local_254;
      iStack_4f0 = *(int *)&(pFVar15->Selection).Elements.field_0x8 -
                   *(int *)&(pFVar15->Selection).Elements.field_0x34;
      uVar23 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
      iStack_500 = -1;
      uVar27 = uVar23 & 0xffffffe0;
      TStack_378._padding_ = CONCAT44(local_518._12_4_,local_518._8_4_);
      TStack_378.CurrentBitIndex = iStack_4fc;
      TStack_378.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar23 >> 5;
      TStack_378._28_4_ = local_254;
      TStack_378.BaseBitIndex = local_4f8;
      uStack_358 = CONCAT44(uStack_4ec,iStack_4f0);
      local_518._0_8_ = pTVar2;
      local_518._16_8_ = puVar1;
      local_380 = pTVar2;
      TStack_378.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar23 < 0) || (iVar21 < (int)uVar23)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar4 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
      if (uVar23 != uVar4) {
        puVar24 = *(undefined1 **)&(pFVar15->Selection).Elements.field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar1;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
        while (uVar23 == 0) {
          lVar18 = (longlong)iVar20;
          uVar27 = uVar27 + 0x20;
          iVar20 = iVar20 + 1;
          uVar23 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14cdcb182;
          uVar23 = *(uint *)(puVar24 + lVar18 * 4 + 4);
        }
        uVar19 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3c8 = (int)lVar18;
        uVar23 = (uVar27 - 1) + local_3c8;
        if ((int)uVar4 < (int)uVar23) {
          uVar23 = uVar4;
        }
      }
LAB_14cdcb182:
      while( true ) {
        pTVar11 = local_380;
        if (*(int *)&(local_380->Elements).field_0x8 - *(int *)&(local_380->Elements).field_0x34 !=
            (int)uStack_358) {
          local_528 = 0;
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_528);
        }
        if (((TStack_378.CurrentBitIndex == uVar23) &&
            (TStack_378.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar11 == pTVar2)) break;
        local_3f8 = *(undefined8 *)
                     (*(longlong *)&pTVar11->Elements + (longlong)TStack_378.CurrentBitIndex * 0x10)
        ;
        if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64_const_&>
                  (&((this->GeoSelection).Object)->Selection,&local_3c4,(bool *)&local_3f8);
        TStack_378.UnvisitedBitMask = TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_378);
      }
      return;
    }
    if (param_2 == Subtract) {
      bVar14 = IsEmpty(param_1);
      if (bVar14) {
        return;
      }
      pFVar15 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&param_1->GeoSelection);
      iVar21 = *(int *)&(pFVar15->Selection).Elements.field_0x28;
      local_518._8_4_ = 0;
      local_518._12_4_ = 1;
      local_4f8 = 0;
      puVar1 = &(pFVar15->Selection).Elements.field_0x10;
      pTVar2 = &pFVar15->Selection;
      iStack_4fc = 0;
      if (iVar21 != 0) {
        puVar26 = *(uint **)&(pFVar15->Selection).Elements.field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar1;
        }
        uVar23 = *puVar26;
        while (uVar23 == 0) {
          lVar18 = (longlong)(int)local_518._8_4_;
          local_4f8 = local_4f8 + 0x20;
          local_518._8_4_ = local_518._8_4_ + 1;
          iStack_4fc = iVar21;
          if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_518._8_4_)
          goto LAB_14cdcb2f1;
          uVar23 = puVar26[lVar18 + 1];
        }
        local_518._12_4_ = -uVar23 & uVar23;
        uVar19 = (ulonglong)(uint)local_518._12_4_ * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3c4._4_4_ = (int)lVar18;
        iStack_4fc = local_3c4._4_4_ + -1 + local_4f8;
        if (iVar21 < iStack_4fc) {
          iStack_4fc = iVar21;
        }
      }
LAB_14cdcb2f1:
      uStack_4f4 = local_294;
      iStack_4f0 = *(int *)&(pFVar15->Selection).Elements.field_0x8 -
                   *(int *)&(pFVar15->Selection).Elements.field_0x34;
      uVar23 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
      iStack_500 = -1;
      uVar27 = uVar23 & 0xffffffe0;
      TStack_348._padding_ = CONCAT44(local_518._12_4_,local_518._8_4_);
      TStack_348.CurrentBitIndex = iStack_4fc;
      TStack_348.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar23 >> 5;
      TStack_348._28_4_ = local_294;
      TStack_348.BaseBitIndex = local_4f8;
      uStack_328 = CONCAT44(uStack_4ec,iStack_4f0);
      local_518._0_8_ = pTVar2;
      local_518._16_8_ = puVar1;
      local_350 = pTVar2;
      TStack_348.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar23 < 0) || (iVar21 < (int)uVar23)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar4 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
      if (uVar23 != uVar4) {
        puVar24 = *(undefined1 **)&(pFVar15->Selection).Elements.field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar1;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
        while (uVar23 == 0) {
          lVar18 = (longlong)iVar20;
          uVar27 = uVar27 + 0x20;
          iVar20 = iVar20 + 1;
          uVar23 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14cdcb402;
          uVar23 = *(uint *)(puVar24 + lVar18 * 4 + 4);
        }
        uVar19 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3bc = (int)lVar18;
        uVar23 = local_3bc + -1 + uVar27;
        if ((int)uVar4 < (int)uVar23) {
          uVar23 = uVar4;
        }
      }
LAB_14cdcb402:
      while( true ) {
        pTVar11 = local_350;
        if (*(int *)&(local_350->Elements).field_0x8 - *(int *)&(local_350->Elements).field_0x34 !=
            (int)uStack_328) {
          local_527 = 0;
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_527);
        }
        if (((TStack_348.CurrentBitIndex == uVar23) &&
            (TStack_348.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar11 == pTVar2)) break;
        uVar5 = *(ulong64 *)
                 (*(longlong *)&pTVar11->Elements + (longlong)TStack_348.CurrentBitIndex * 0x10);
        if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Remove
                  (&((this->GeoSelection).Object)->Selection,uVar5);
        TStack_348.UnvisitedBitMask = TStack_348.UnvisitedBitMask & ~TStack_348._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_348);
      }
      pFVar15 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Compact
                (&pFVar15->Selection);
      return;
    }
    if (param_2 != Intersection) {
      return;
    }
    local_144 = 0x20;
    local_250.SecondaryData = (ForElementType<unsigned___int64>)0x0;
    local_148 = 0;
    pFVar15 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
    local_460._padding_._0_4_ = 0;
    local_3f0 = &pFVar15->Selection;
    local_460.CurrentBitIndex = 0;
    local_460.BaseBitIndex = 0;
    local_460._padding_._4_4_ = 1;
    puVar1 = &(pFVar15->Selection).Elements.field_0x10;
    local_460.UnvisitedBitMask = 0xffffffff;
    local_460.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(pFVar15->Selection).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_460);
    }
    local_4e0 = &pFVar15->Selection;
    TStack_4d8._padding_ = CONCAT44(local_460._padding_._4_4_,(undefined4)local_460._padding_);
    TStack_4d8.CurrentBitIndex = local_460.CurrentBitIndex;
    TStack_4d8.UnvisitedBitMask = local_460.UnvisitedBitMask;
    TStack_4d8._28_4_ = local_460._28_4_;
    TStack_4d8.BaseBitIndex = local_460.BaseBitIndex;
    uVar23 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
    TStack_4d8.Array = local_460.Array;
    local_4b8 = CONCAT44(local_4b8._4_4_,
                         *(int *)&(pFVar15->Selection).Elements.field_0x8 -
                         *(int *)&(pFVar15->Selection).Elements.field_0x34);
    iVar21 = (int)uVar23 >> 5;
    uVar27 = uVar23 & 0xffffffe0;
    TStack_318.Array = local_460.Array;
    uStack_2f8 = local_4b8;
    local_320 = local_4e0;
    TStack_318._padding_ = TStack_4d8._padding_;
    TStack_318._16_8_ = TStack_4d8._16_8_;
    TStack_318._24_8_ = TStack_4d8._24_8_;
    if (((int)uVar23 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar2 = local_3f0;
    uVar4 = *(uint *)&(pFVar15->Selection).Elements.field_0x28;
    if (uVar23 != uVar4) {
      puVar24 = *(undefined1 **)&(pFVar15->Selection).Elements.field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar1;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
      while (uVar23 == 0) {
        lVar18 = (longlong)iVar21;
        uVar27 = uVar27 + 0x20;
        iVar21 = iVar21 + 1;
        uVar23 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14cdcb630;
        uVar23 = *(uint *)(puVar24 + lVar18 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_3b8 = (int)lVar18;
      uVar23 = local_3b8 + -1 + uVar27;
      if ((int)uVar4 < (int)uVar23) {
        uVar23 = uVar4;
      }
    }
LAB_14cdcb630:
    while( true ) {
      pTVar11 = local_320;
      if (*(int *)&(local_320->Elements).field_0x8 - *(int *)&(local_320->Elements).field_0x34 !=
          (int)uStack_2f8) {
        local_526 = 0;
        `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_526);
      }
      uVar27 = local_148;
      if (((TStack_318.CurrentBitIndex == uVar23) &&
          (TStack_318.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar11 == pTVar2)) break;
      local_520 = *(ulonglong *)
                   (*(longlong *)&pTVar11->Elements + (longlong)TStack_318.CurrentBitIndex * 0x10);
      if (((param_1->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar15 = (param_1->GeoSelection).Object;
      if (*(int *)&(pFVar15->Selection).Elements.field_0x8 !=
          *(int *)&(pFVar15->Selection).Elements.field_0x34) {
        FVar6 = (pFVar15->Selection).Hash.SecondaryData;
        FVar25 = (ForElementType<FSetElementId>)&(pFVar15->Selection).Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = FVar6;
        }
        iVar21 = *(int *)((longlong)FVar25 +
                         ((local_520 >> 0x20) * 0x17 + local_520 &
                         (ulonglong)((pFVar15->Selection).HashSize - 1)) * 4);
        if (iVar21 != -1) {
          lVar18 = *(longlong *)&(pFVar15->Selection).Elements;
          do {
            if (*(ulonglong *)(lVar18 + (longlong)iVar21 * 0x10) == local_520) goto LAB_14cdcb816;
            iVar21 = *(int *)(lVar18 + 8 + (longlong)iVar21 * 0x10);
          } while (iVar21 != -1);
        }
      }
      FVar22 = (ForElementType<unsigned___int64>)&local_250;
      if (local_250.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar22 = local_250.SecondaryData;
      }
      if ((ulonglong)FVar22 <= &local_520) {
        FVar22 = (ForElementType<unsigned___int64>)&local_250;
        if (local_250.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
          FVar22 = local_250.SecondaryData;
        }
        if ((&local_520 < (ulong64 *)((longlong)FVar22 + (longlong)(int)local_144 * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (local_148 == local_144) {
        local_148 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                              (0x808,&local_250,(int *)&local_144);
      }
      FVar22 = (ForElementType<unsigned___int64>)&local_250;
      if (local_250.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar22 = local_250.SecondaryData;
      }
      lVar18 = (longlong)(int)local_148;
      local_148 = local_148 + 1;
      *(ulonglong *)((longlong)FVar22 + lVar18 * 8) = local_520;
LAB_14cdcb816:
      TStack_318.UnvisitedBitMask = TStack_318.UnvisitedBitMask & ~TStack_318._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_318);
    }
    uVar19 = (ulonglong)(int)local_148;
    FVar22 = local_250.SecondaryData;
    if (0 < (int)local_148) {
      FVar22 = (ForElementType<unsigned___int64>)&local_250;
      if (local_250.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar22 = local_250.SecondaryData;
      }
      FVar3 = (ForElementType<unsigned___int64>)((longlong)FVar22 + uVar19 * 8);
      while( true ) {
        if ((uint)uVar19 != uVar27) {
          local_525 = 0;
          `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_525);
        }
        if (FVar22 == FVar3) break;
        uVar5 = *(ulong64 *)FVar22;
        if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Remove
                  (&((this->GeoSelection).Object)->Selection,uVar5);
        uVar19 = (ulonglong)local_148;
        FVar22 = (ForElementType<unsigned___int64>)((longlong)FVar22 + 8);
      }
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Compact
                (&((this->GeoSelection).Object)->Selection);
      FVar22 = local_250.SecondaryData;
    }
  }
  if (FVar22 != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)FVar22);
  }
  return;
}

// ConvertToMeshIndexArray @ 14cdcebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EGeometryScriptIndexType __thiscall
FGeometryScriptMeshSelection::ConvertToMeshIndexArray
          (FGeometryScriptMeshSelection *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,EGeometryScriptIndexType param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  EGeometryScriptIndexType EVar11;
  uint uVar12;
  int iVar13;
  FGeometrySelection *pFVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  byte bVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined1 auStackY_608 [32];
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6;
  undefined1 local_5b5 [5];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_5b0;
  undefined8 uStack_5a8;
  TBitArray<FDefaultBitArrayAllocator> *local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  int iStack_588;
  undefined4 uStack_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  uint local_574;
  uint local_570;
  undefined4 local_56c;
  ForElementType<unsigned_int> local_568;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_560;
  uint local_558;
  uint uStack_554;
  undefined1 *puStack_550;
  undefined4 local_548;
  int iStack_544;
  uint uStack_540;
  undefined4 uStack_53c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_538;
  FDynamicMesh3 *local_518;
  FGeometryScriptMeshSelection *local_510;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e8;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4bc;
  int local_4b8;
  int local_4b4;
  int local_4b0;
  undefined8 *local_4a8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_4a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_498;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_488;
  undefined8 uStack_468;
  longlong *local_460;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_458;
  undefined8 uStack_438;
  undefined1 local_430 [12];
  uint uStack_424;
  TBitArray<FDefaultBitArrayAllocator> *local_420;
  undefined8 uStack_418;
  longlong local_410;
  undefined8 uStack_408;
  undefined1 local_400 [12];
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *local_3f0;
  undefined8 uStack_3e8;
  longlong local_3e0;
  undefined8 uStack_3d8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c8;
  undefined8 uStack_3a8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_398;
  undefined8 uStack_378;
  code *local_370;
  undefined8 **local_368;
  code *local_360;
  TArray<int,TSizedDefaultAllocator<32>_> **local_358;
  FDynamicMesh3 *local_350;
  undefined1 *local_348;
  code *local_340;
  FDynamicMesh3 **local_338;
  code *local_330;
  undefined8 **local_328;
  code *local_320;
  undefined8 **local_318;
  code *local_310;
  TArray<int,TSizedDefaultAllocator<32>_> **local_308;
  code *local_300;
  FDynamicMesh3 **local_2f8;
  code *local_2f0;
  FDynamicMesh3 **local_2e8;
  undefined8 *local_2e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2d8;
  undefined8 *local_2d0;
  FDynamicMesh3 *local_2c8;
  FDynamicMesh3 *local_2c0;
  ForAnyElementType *local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2b0;
  FDynamicMesh3 *local_2a8;
  ForAnyElementType *local_2a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_298;
  TRangedForIterator local_290;
  TRangedForIterator local_260;
  undefined4 local_214;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  undefined4 local_1b4;
  undefined4 local_194;
  undefined1 local_188 [32];
  uint *local_168;
  uint local_160;
  uint local_15c;
  undefined4 local_158;
  int local_154;
  void *local_148;
  undefined4 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  undefined4 local_108;
  undefined4 local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_608;
  piVar1 = &param_2->ArrayMax;
  uVar25 = 0;
  uVar19 = 0;
  uVar23 = 0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  local_518 = param_1;
  local_510 = this;
  if (param_3 == Vertex) {
    if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      EVar11 = (*pcVar5)();
      return EVar11;
    }
    pFVar14 = (this->GeoSelection).Object;
    if (pFVar14->TopologyType == Triangle) {
      if ((pFVar14 == (FGeometrySelection *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        EVar11 = (*pcVar5)();
        return EVar11;
      }
      bVar10 = ((this->GeoSelection).Object)->ElementType == Vertex;
      goto LAB_14cdcf14b;
    }
LAB_14cdcf151:
    if (param_3 == Triangle) {
      local_188._0_8_ = (FScriptContainerElement *)0x0;
      local_188._8_8_ = 0;
      local_168 = (uint *)0x0;
      local_160 = 0;
      local_15c = 0x80;
      local_158 = 0xffffffff;
      local_154 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if (pFVar14->TopologyType == Triangle) {
        local_4a8 = (undefined8 *)local_188;
        local_328 = &local_4a8;
        local_330 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l48::<lambda_3>,void,int>
                    ::Call;
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::
                  operator*<UE::Geometry::FGeometrySelection>(&this->GeoSelection);
        UE::Geometry::EnumerateSelectionTriangles
                  (pFVar14,param_1,(TFunctionRef<void___cdecl(int)> *)&local_330,
                   (FPolygroupSet *)0x0);
        uVar25 = local_160;
        uVar12 = 1;
        TStack_458.CurrentBitIndex = uVar19;
        uVar23 = uVar19;
        if (local_160 != 0) {
          puVar21 = (uint *)(local_188 + 0x10);
          if (local_168 != (uint *)0x0) {
            puVar21 = local_168;
          }
          uVar24 = *puVar21;
          while (uVar24 == 0) {
            lVar17 = (longlong)(int)uVar19;
            uVar23 = uVar23 + 0x20;
            uVar19 = uVar19 + 1;
            TStack_458.CurrentBitIndex = local_160;
            if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
            goto LAB_14cdcf274;
            uVar24 = (puVar21 + 1)[lVar17];
          }
          uVar12 = -uVar24 & uVar24;
          uVar3 = (ulonglong)uVar12 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4c8 = (int)lVar17;
          TStack_458.CurrentBitIndex = local_4c8 + -1 + uVar23;
          if ((int)local_160 < TStack_458.CurrentBitIndex) {
            TStack_458.CurrentBitIndex = local_160;
          }
        }
LAB_14cdcf274:
        local_5b0 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)local_188;
        local_5a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
        iStack_588 = local_188._8_4_ - local_154;
        uVar24 = local_160 & 0xffffffe0;
        uStack_598 = CONCAT44(TStack_458.CurrentBitIndex,0xffffffff);
        uStack_5a8 = CONCAT44(uVar12,uVar19);
        local_590 = CONCAT44(local_214,uVar23);
        TStack_458._padding_ = uStack_5a8;
        iVar26 = (int)local_160 >> 5;
        uStack_438 = CONCAT44(uStack_584,iStack_588);
        bVar16 = (byte)local_160;
        TStack_458.UnvisitedBitMask = 0xffffffff;
        TStack_458._24_8_ = local_590;
        local_460 = (longlong *)local_5b0;
        TStack_458.Array = local_5a0;
        if (((int)local_160 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          EVar11 = (*pcVar5)();
          return EVar11;
        }
        if (uVar25 != local_160) {
          puVar21 = (uint *)(local_188 + 0x10);
          if (local_168 != (uint *)0x0) {
            puVar21 = local_168;
          }
          uVar19 = -1 << (bVar16 & 0x1f) & puVar21[iVar26];
          while (uVar19 == 0) {
            lVar17 = (longlong)iVar26;
            uVar24 = uVar24 + 0x20;
            iVar26 = iVar26 + 1;
            uVar25 = local_160;
            if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_14cdcf3a5;
            uVar19 = (puVar21 + 1)[lVar17];
          }
          uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4c4 = (int)lVar17;
          uVar25 = (uVar24 - 1) + local_4c4;
          if ((int)local_160 < (int)uVar25) {
            uVar25 = local_160;
          }
        }
LAB_14cdcf3a5:
        while( true ) {
          plVar9 = local_460;
          if ((int)local_460[1] - *(int *)((longlong)local_460 + 0x34) != (int)uStack_438) {
            local_5b8 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5b8);
          }
          if (((TStack_458.CurrentBitIndex == uVar25) &&
              (TStack_458.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10))) &&
             (plVar9 == (longlong *)local_188)) break;
          local_580 = *(undefined4 *)(*plVar9 + (longlong)TStack_458.CurrentBitIndex * 0xc);
          pFVar4 = (param_2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_580) &&
              ((FScriptContainerElement *)&local_580 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            EVar11 = (*pcVar5)();
            return EVar11;
          }
          iVar26 = param_2->ArrayNum;
          if (iVar26 == *piVar1) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar26 + 1;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_580;
          TStack_458.UnvisitedBitMask = TStack_458.UnvisitedBitMask & ~TStack_458._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_458);
        }
LAB_14cdcf50b:
        local_140 = 0;
        if (local_148 != (void *)0x0) {
          FMemory::Free(local_148);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_188);
        return Triangle;
      }
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if ((pFVar14->TopologyType == Polygroup) &&
         (pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection),
         pFVar14->ElementType == Face)) {
        local_308 = &local_4a0;
        local_310 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l56::<lambda_4>,void,int_&>
                    ::Call;
        local_4a0 = param_2;
        `FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l2::<lambda_1>::operator()
                  (&local_518,(TFunctionRef<void___cdecl(int_&)> *)&local_310);
        goto LAB_14cdcf50b;
      }
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_188._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
      }
      local_158 = 0xffffffff;
      local_154 = 0;
      local_160 = 0;
      if (0x80 < local_15c) {
        local_15c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),0);
      }
      FVar18.Data = (FScriptContainerElement *)local_188._0_8_;
      if (local_168 != (uint *)0x0) {
        FMemory::Free(local_168);
        FVar18.Data = (FScriptContainerElement *)local_188._0_8_;
      }
    }
    else if (param_3 == Edge) {
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_128.NumBits = 0;
      local_128.MaxBits = 0x80;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if (pFVar14->TopologyType == Triangle) {
        local_2b8 = &local_138;
        local_2f8 = &local_2c0;
        local_300 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l63::<lambda_5>,void,int>
                    ::Call;
        local_2c0 = param_1;
        local_2b0 = param_2;
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::
                  operator*<UE::Geometry::FGeometrySelection>(&this->GeoSelection);
        UE::Geometry::EnumerateSelectionEdges
                  (pFVar14,param_1,(TFunctionRef<void___cdecl(int)> *)&local_300,
                   (FPolygroupSet *)0x0);
LAB_14cdcf733:
        local_f0 = 0;
        if (local_f8 != (void *)0x0) {
          FMemory::Free(local_f8);
        }
        uVar3 = local_130 >> 0x20;
        local_130 = local_130 & 0xffffffff00000000;
        if ((int)uVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&local_138,0,(int *)((longlong)&local_130 + 4));
        }
        local_108 = 0xffffffff;
        local_104 = 0;
        local_128.NumBits = 0;
        if (0x80 < (uint)local_128.MaxBits) {
          local_128.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128,0);
        }
        if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
        }
        if (local_138.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data);
        }
        return Edge;
      }
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if ((pFVar14->TopologyType == Polygroup) &&
         (pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection),
         pFVar14->ElementType == Face)) {
        local_2a0 = &local_138;
        local_2e8 = &local_2a8;
        local_2f0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l67::<lambda_6>,void,int_&>
                    ::Call;
        local_2a8 = param_1;
        local_298 = param_2;
        `FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l2::<lambda_1>::operator()
                  (&local_518,(TFunctionRef<void___cdecl(int_&)> *)&local_2f0);
        goto LAB_14cdcf733;
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      if (local_130._4_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_138,0,(int *)((longlong)&local_130 + 4));
      }
      local_108 = 0xffffffff;
      local_104 = 0;
      local_128.NumBits = 0;
      if (0x80 < (uint)local_128.MaxBits) {
        local_128.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128,0);
      }
      FVar18.Data = local_138.Data;
      if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
        FVar18.Data = local_138.Data;
      }
    }
    else {
      if (param_3 != Vertex) {
        if (((param_3 == PolygroupID) &&
            (pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->
                                 (&this->GeoSelection), pFVar14->TopologyType == Triangle)) &&
           ((pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->
                                 (&this->GeoSelection), pFVar14->ElementType == Vertex ||
            (pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->
                                 (&this->GeoSelection), pFVar14->ElementType == Face)))) {
          local_2d0 = (undefined8 *)local_98;
          local_98._0_8_ = 0;
          local_368 = &local_2d0;
          local_98._8_8_ = 0;
          local_370 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l89::<lambda_9>,void,int>
                      ::Call;
          local_78 = 0;
          local_70 = 0;
          local_6c = 0x80;
          local_68 = 0xffffffff;
          local_64 = 0;
          local_58 = (void *)0x0;
          local_50 = 0;
          local_2c8 = param_1;
          pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::
                    operator*<UE::Geometry::FGeometrySelection>(&this->GeoSelection);
          UE::Geometry::EnumerateSelectionTriangles
                    (pFVar14,param_1,(TFunctionRef<void___cdecl(int)> *)&local_370,
                     (FPolygroupSet *)0x0);
          local_508.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_508._padding_._0_4_ = 0;
          local_508._padding_._4_4_ = 1;
          local_508.UnvisitedBitMask = 0xffffffff;
          local_508.CurrentBitIndex = 0;
          local_508.BaseBitIndex = 0;
          if (local_70 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_508);
          }
          uStack_5a8 = CONCAT44(local_508._padding_._4_4_,(undefined4)local_508._padding_);
          local_5b0 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                       *)local_98;
          uStack_598 = CONCAT44(local_508.CurrentBitIndex,local_508.UnvisitedBitMask);
          local_590 = CONCAT44(local_508._28_4_,local_508.BaseBitIndex);
          iStack_588 = local_98._8_4_ - local_64;
          local_5a0 = local_508.Array;
          uStack_3d8._4_4_ = uStack_584;
          uStack_3d8._0_4_ = iStack_588;
          local_3f0 = local_508.Array;
          local_400._0_8_ = local_5b0;
          unique0x100028ed = uStack_5a8;
          uStack_3e8 = uStack_598;
          local_3e0 = local_590;
          pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_1f0,(TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),
                               local_70);
          local_5b0 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                       *)local_98;
          uStack_5a8 = pTVar15->_padding_;
          local_5a0 = pTVar15->Array;
          uStack_598._0_4_ = pTVar15->UnvisitedBitMask;
          uStack_598._4_4_ = pTVar15->CurrentBitIndex;
          local_590 = *(longlong *)&pTVar15->BaseBitIndex;
          iStack_588 = local_98._8_4_ - local_64;
          local_260._44_4_ = uStack_584;
          local_260.InitialNum = iStack_588;
          local_260._padding_ = (longlong)local_5b0;
          local_260._padding_ = uStack_5a8;
          local_260._padding_ = (longlong)local_5a0;
          local_260._padding_ = uStack_598;
          local_260._padding_ = local_590;
          bVar10 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_400,&local_260);
          if (bVar10) {
            do {
              local_578 = *(undefined4 *)
                           (*(longlong *)local_400._0_8_ + (longlong)uStack_3e8._4_4_ * 0xc);
              pFVar4 = (param_2->AllocatorInstance).Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_578) &&
                  ((FScriptContainerElement *)&local_578 < pFVar4 + (longlong)*piVar1 * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar5 = (code *)swi(3);
                EVar11 = (*pcVar5)();
                return EVar11;
              }
              iVar26 = param_2->ArrayNum;
              if (iVar26 == *piVar1) {
                iVar26 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar26 + 1;
              *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_578;
              uStack_3e8 = CONCAT44(uStack_3e8._4_4_,(uint)uStack_3e8 & ~uStack_3f4);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_400 + 8));
              bVar10 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_400,&local_260);
            } while (bVar10);
          }
          local_50 = 0;
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          return PolygroupID;
        }
        goto LAB_14cdcf5d3;
      }
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_8_ = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if (pFVar14->TopologyType == Triangle) {
        local_2e0 = (undefined8 *)local_e8;
        local_318 = &local_2e0;
        local_320 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l74::<lambda_7>,void,unsigned___int64,UE::Math::TVector<double>_const_&>
                    ::Call;
        local_2d8 = param_2;
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::
                  operator*<UE::Geometry::FGeometrySelection>(&this->GeoSelection);
        UE::Geometry::EnumerateTriangleSelectionVertices
                  (pFVar14,param_1,(TTransform<double> *)0x0,
                   (TFunctionRef<void___cdecl(unsigned___int64,UE::Math::TVector<double>_const_&)> *
                   )&local_320);
LAB_14cdcfb81:
        local_a0 = 0;
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_e8);
        return Vertex;
      }
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if ((pFVar14->TopologyType == Polygroup) &&
         (pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection),
         pFVar14->ElementType == Face)) {
        local_348 = local_e8;
        local_338 = &local_350;
        local_340 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l78::<lambda_8>,void,int_&>
                    ::Call;
        local_350 = param_1;
        `FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l2::<lambda_1>::operator()
                  (&local_518,(TFunctionRef<void___cdecl(int_&)> *)&local_340);
        local_4e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
        local_4e8._padding_._0_4_ = 0;
        local_4e8._padding_._4_4_ = 1;
        local_4e8.UnvisitedBitMask = 0xffffffff;
        local_4e8.CurrentBitIndex = 0;
        local_4e8.BaseBitIndex = 0;
        if (local_c0 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e8);
        }
        uStack_5a8 = CONCAT44(local_4e8._padding_._4_4_,(undefined4)local_4e8._padding_);
        local_5b0 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)local_e8;
        uStack_598 = CONCAT44(local_4e8.CurrentBitIndex,local_4e8.UnvisitedBitMask);
        local_590 = CONCAT44(local_4e8._28_4_,local_4e8.BaseBitIndex);
        iStack_588 = local_e8._8_4_ - local_b4;
        local_5a0 = local_4e8.Array;
        uStack_408._4_4_ = uStack_584;
        uStack_408._0_4_ = iStack_588;
        local_420 = local_4e8.Array;
        local_430._0_8_ = local_5b0;
        unique0x100028cd = uStack_5a8;
        uStack_418 = uStack_598;
        local_410 = local_590;
        pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_210,(TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),
                             local_c0);
        local_5b0 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)local_e8;
        uStack_5a8 = pTVar15->_padding_;
        local_5a0 = pTVar15->Array;
        uStack_598._0_4_ = pTVar15->UnvisitedBitMask;
        uStack_598._4_4_ = pTVar15->CurrentBitIndex;
        local_590 = *(longlong *)&pTVar15->BaseBitIndex;
        iStack_588 = local_e8._8_4_ - local_b4;
        local_290._44_4_ = uStack_584;
        local_290.InitialNum = iStack_588;
        local_290._padding_ = (longlong)local_5b0;
        local_290._padding_ = uStack_5a8;
        local_290._padding_ = (longlong)local_5a0;
        local_290._padding_ = uStack_598;
        local_290._padding_ = local_590;
        bVar10 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_430,&local_290);
        if (bVar10) {
          do {
            local_57c = *(undefined4 *)
                         (*(longlong *)local_430._0_8_ + (longlong)uStack_418._4_4_ * 0xc);
            pFVar4 = (param_2->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_57c) &&
                ((FScriptContainerElement *)&local_57c < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              EVar11 = (*pcVar5)();
              return EVar11;
            }
            iVar26 = param_2->ArrayNum;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar26 + 1;
            *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_57c;
            uStack_418 = CONCAT44(uStack_418._4_4_,(uint)uStack_418 & ~uStack_424);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_430 + 8));
            bVar10 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_430,&local_290);
          } while (bVar10);
        }
        goto LAB_14cdcfb81;
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,0);
      FVar18.Data = (FScriptContainerElement *)local_e8._0_8_;
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
        FVar18.Data = (FScriptContainerElement *)local_e8._0_8_;
      }
    }
    if (FVar18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar18.Data);
    }
  }
  else {
    if (param_3 == Edge) {
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        EVar11 = (*pcVar5)();
        return EVar11;
      }
      if (((this->GeoSelection).Object)->TopologyType != Triangle) goto LAB_14cdcf151;
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      bVar10 = pFVar14->ElementType == Edge;
LAB_14cdcf14b:
      if (!bVar10) goto LAB_14cdcf151;
    }
    else {
      if (param_3 == Triangle) {
        if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          EVar11 = (*pcVar5)();
          return EVar11;
        }
        if (((this->GeoSelection).Object)->TopologyType != Triangle) goto LAB_14cdcf151;
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        bVar10 = pFVar14->ElementType == Face;
        goto LAB_14cdcf14b;
      }
      if (param_3 != PolygroupID) {
        bVar10 = param_3 == Any;
        goto LAB_14cdcf14b;
      }
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        EVar11 = (*pcVar5)();
        return EVar11;
      }
      if ((((this->GeoSelection).Object)->TopologyType != Polygroup) ||
         (pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection),
         pFVar14->ElementType != Face)) goto LAB_14cdcf151;
    }
    if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      EVar11 = (*pcVar5)();
      return EVar11;
    }
    pFVar14 = (this->GeoSelection).Object;
    if (pFVar14->TopologyType == Triangle) {
      if ((pFVar14 == (FGeometrySelection *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        EVar11 = (*pcVar5)();
        return EVar11;
      }
      if (((this->GeoSelection).Object)->ElementType == Vertex) {
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        uVar25 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
        uVar12 = 1;
        local_5a0 = (TBitArray<FDefaultBitArrayAllocator> *)
                    &(pFVar14->Selection).Elements.field_0x10;
        local_560 = &pFVar14->Selection;
        uStack_598._4_4_ = uVar23;
        local_590._0_4_ = uVar23;
        if (uVar25 != 0) {
          puVar21 = *(uint **)&(pFVar14->Selection).Elements.field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)local_5a0;
          }
          uVar24 = *puVar21;
          local_590._0_4_ = uVar19;
          uVar23 = uVar19;
          while (uVar24 == 0) {
            lVar17 = (longlong)(int)uVar23;
            local_590._0_4_ = (uint)local_590 + 0x20;
            uVar23 = uVar23 + 1;
            uStack_598._4_4_ = uVar25;
            if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
            goto LAB_14cdceece;
            uVar24 = (puVar21 + 1)[lVar17];
          }
          uVar12 = -uVar24 & uVar24;
          uVar3 = (ulonglong)uVar12 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4c0 = (int)lVar17;
          uStack_598._4_4_ = ((uint)local_590 - 1) + local_4c0;
          if ((int)uVar25 < (int)uStack_598._4_4_) {
            uStack_598._4_4_ = uVar25;
          }
        }
LAB_14cdceece:
        local_5b0 = &pFVar14->Selection;
        iStack_588 = *(int *)&(pFVar14->Selection).Elements.field_0x8 -
                     *(int *)&(pFVar14->Selection).Elements.field_0x34;
        uVar19 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
        uStack_5a8 = CONCAT44(uVar12,uVar23);
        uVar23 = uVar19 & 0xffffffe0;
        uStack_598._0_4_ = 0xffffffff;
        local_590._4_4_ = local_1b4;
        TStack_3c8._padding_ = uStack_5a8;
        iVar26 = (int)uVar19 >> 5;
        uStack_3a8 = CONCAT44(uStack_584,iStack_588);
        TStack_3c8.UnvisitedBitMask = 0xffffffff;
        TStack_3c8.CurrentBitIndex = uStack_598._4_4_;
        TStack_3c8.BaseBitIndex = (uint)local_590;
        TStack_3c8._28_4_ = local_1b4;
        local_568 = (ForElementType<unsigned_int>)local_5a0;
        local_3d0 = local_5b0;
        TStack_3c8.Array = local_5a0;
        if ((((int)uVar19 < 0) || ((int)uVar25 < (int)uVar19)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          EVar11 = (*pcVar5)();
          return EVar11;
        }
        pTVar6 = local_560;
        uVar25 = *(int *)((longlong)local_568 + 0x18);
        if (uVar19 != uVar25) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_568 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_568 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_568;
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar26 * 4);
          while (uVar19 == 0) {
            lVar17 = (longlong)iVar26;
            uVar23 = uVar23 + 0x20;
            iVar26 = iVar26 + 1;
            uVar19 = uVar25;
            if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_14cdcf000;
            uVar19 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar17 * 4);
          }
          uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4bc = (int)lVar17;
          uVar19 = (uVar23 - 1) + local_4bc;
          if ((int)uVar25 < (int)uVar19) {
            uVar19 = uVar25;
          }
        }
LAB_14cdcf000:
        while( true ) {
          pTVar8 = local_3d0;
          if (*(int *)&(local_3d0->Elements).field_0x8 - *(int *)&(local_3d0->Elements).field_0x34
              != (int)uStack_3a8) {
            local_5b7 = 0;
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5b7);
          }
          if (((TStack_3c8.CurrentBitIndex == uVar19) &&
              ((ForElementType<unsigned_int>)TStack_3c8.Array == local_568)) && (pTVar8 == pTVar6))
          break;
          local_574 = *(uint *)(*(longlong *)&pTVar8->Elements +
                               (longlong)TStack_3c8.CurrentBitIndex * 0x10);
          if (((-1 < (int)local_574) &&
              ((int)local_574 <
               (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(local_574 >> 9) * 8) +
                                 (ulonglong)(local_574 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            pFVar4 = (param_2->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_574) &&
                ((FScriptContainerElement *)&local_574 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              EVar11 = (*pcVar5)();
              return EVar11;
            }
            iVar26 = param_2->ArrayNum;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar26 + 1;
            *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_574;
          }
          TStack_3c8.UnvisitedBitMask = TStack_3c8.UnvisitedBitMask & ~TStack_3c8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c8);
        }
        return Vertex;
      }
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if (pFVar14->ElementType == Edge) {
        local_358 = &local_498;
        local_360 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGeometryScriptMeshSelection::ConvertToMeshIndexArray'::__l22::<lambda_2>,void,int>
                    ::Call;
        local_498 = param_2;
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::
                  operator*<UE::Geometry::FGeometrySelection>(&this->GeoSelection);
        UE::Private::GeometryScriptSelectionLocal::EnumerateUniqueEdgesInEdgeSelection
                  (param_1,pFVar14,(TFunctionRef<void___cdecl(int)> *)&local_360);
        return Edge;
      }
      pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      if (pFVar14->ElementType == Face) {
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        iVar26 = *(int *)&(pFVar14->Selection).Elements.field_0x28;
        local_558 = 0;
        uStack_554 = 1;
        local_5a0 = (TBitArray<FDefaultBitArrayAllocator> *)
                    &(pFVar14->Selection).Elements.field_0x10;
        local_560 = &pFVar14->Selection;
        iStack_544 = 0;
        uStack_540 = 0;
        if (iVar26 != 0) {
          puVar21 = *(uint **)&(pFVar14->Selection).Elements.field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)local_5a0;
          }
          uVar19 = *puVar21;
          uStack_540 = uVar25;
          local_558 = uVar25;
          while (uVar19 == 0) {
            lVar17 = (longlong)(int)local_558;
            uStack_540 = uStack_540 + 0x20;
            local_558 = local_558 + 1;
            if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_558)
            goto LAB_14cdcffd9;
            uVar19 = puVar21[lVar17 + 1];
          }
          uStack_554 = -uVar19 & uVar19;
          uVar3 = (ulonglong)uStack_554 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4b8 = (int)lVar17;
          iStack_544 = (uStack_540 - 1) + local_4b8;
          if (iVar26 < iStack_544) {
LAB_14cdcffd9:
            iStack_544 = iVar26;
          }
        }
        local_548 = 0xffffffff;
        uVar19 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
        local_5b0 = &pFVar14->Selection;
        uStack_5a8 = CONCAT44(uStack_554,local_558);
        iStack_588 = *(int *)&(pFVar14->Selection).Elements.field_0x8 -
                     *(int *)&(pFVar14->Selection).Elements.field_0x34;
        uStack_598._4_4_ = iStack_544;
        uStack_598._0_4_ = 0xffffffff;
        local_590._4_4_ = uStack_53c;
        local_590._0_4_ = uStack_540;
        bVar16 = (byte)uVar19 & 0x1f;
        local_538._padding_._4_4_ = 1 << bVar16;
        local_538._padding_._0_4_ = (int)uVar19 >> 5;
        local_538.BaseBitIndex = uVar19 & 0xffffffe0;
        local_538.UnvisitedBitMask = -1 << bVar16;
        uStack_468 = CONCAT44(uStack_584,iStack_588);
        local_568 = (ForElementType<unsigned_int>)pFVar14;
        puStack_550 = (undefined1 *)local_5a0;
        local_538.Array = local_5a0;
        local_538.CurrentBitIndex = uVar19;
        local_490 = local_5b0;
        TStack_488._padding_ = uStack_5a8;
        TStack_488.Array = local_5a0;
        TStack_488._16_8_ = uStack_598;
        TStack_488._24_8_ = local_590;
        if ((((int)uVar19 < 0) || (iVar26 < (int)uVar19)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          EVar11 = (*pcVar5)();
          return EVar11;
        }
        if (uVar19 != *(uint *)&(pFVar14->Selection).Elements.field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_538);
        }
        iVar26 = local_538.CurrentBitIndex;
        pTVar7 = local_538.Array;
        pTVar6 = local_560;
        uStack_5a8 = CONCAT44(local_538._padding_._4_4_,(int)local_538._padding_);
        uStack_598 = CONCAT44(local_538.CurrentBitIndex,local_538.UnvisitedBitMask);
        local_590 = CONCAT44(local_538._28_4_,local_538.BaseBitIndex);
        local_5a0 = local_538.Array;
        while( true ) {
          pTVar8 = local_490;
          if (*(int *)&(local_490->Elements).field_0x8 - *(int *)&(local_490->Elements).field_0x34
              != (int)uStack_468) {
            local_5b6 = 0;
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5b6);
          }
          if (((TStack_488.CurrentBitIndex == iVar26) && (TStack_488.Array == pTVar7)) &&
             (pTVar8 == pTVar6)) break;
          local_570 = *(uint *)(*(longlong *)&pTVar8->Elements +
                               (longlong)TStack_488.CurrentBitIndex * 0x10);
          if (((-1 < (int)local_570) &&
              ((int)local_570 <
               (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(local_570 >> 9) * 8) +
                                 (ulonglong)(local_570 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            pFVar4 = (param_2->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_570) &&
                ((FScriptContainerElement *)&local_570 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              EVar11 = (*pcVar5)();
              return EVar11;
            }
            iVar13 = param_2->ArrayNum;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar13 + 1;
            *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_570;
          }
          TStack_488.UnvisitedBitMask = TStack_488.UnvisitedBitMask & ~TStack_488._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_488);
        }
        return Triangle;
      }
    }
    else {
      if ((pFVar14 == (FGeometrySelection *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        EVar11 = (*pcVar5)();
        return EVar11;
      }
      if ((((this->GeoSelection).Object)->TopologyType == Polygroup) &&
         (pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection),
         pFVar14->ElementType == Face)) {
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        iVar26 = *(int *)&(pFVar14->Selection).Elements.field_0x28;
        uVar19 = 1;
        puVar2 = &(pFVar14->Selection).Elements.field_0x10;
        local_5b0 = &pFVar14->Selection;
        uStack_598._4_4_ = 0;
        if (iVar26 != 0) {
          puVar21 = *(uint **)&(pFVar14->Selection).Elements.field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)puVar2;
          }
          uVar12 = *puVar21;
          uVar23 = uVar25;
          while (uVar12 == 0) {
            lVar17 = (longlong)(int)uVar23;
            uVar25 = uVar25 + 0x20;
            uVar23 = uVar23 + 1;
            uStack_598._4_4_ = iVar26;
            if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
            goto LAB_14cdd02de;
            uVar12 = puVar21[lVar17 + 1];
          }
          uVar19 = -uVar12 & uVar12;
          uVar3 = (ulonglong)uVar19 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4b4 = (int)lVar17;
          uStack_598._4_4_ = local_4b4 + -1 + uVar25;
          if (iVar26 < (int)uStack_598._4_4_) {
            uStack_598._4_4_ = iVar26;
          }
        }
LAB_14cdd02de:
        iStack_588 = *(int *)&(pFVar14->Selection).Elements.field_0x8 -
                     *(int *)&(pFVar14->Selection).Elements.field_0x34;
        uStack_5a8 = CONCAT44(uVar19,uVar23);
        uVar19 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
        uVar23 = uVar19 & 0xffffffe0;
        uStack_598._0_4_ = 0xffffffff;
        local_590._4_4_ = local_194;
        local_590._0_4_ = uVar25;
        TStack_398._padding_ = uStack_5a8;
        iVar13 = (int)uVar19 >> 5;
        uStack_378 = CONCAT44(uStack_584,iStack_588);
        TStack_398.UnvisitedBitMask = 0xffffffff;
        TStack_398.CurrentBitIndex = uStack_598._4_4_;
        TStack_398.BaseBitIndex = uVar25;
        TStack_398._28_4_ = local_194;
        local_5a0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        local_560 = local_5b0;
        local_3a0 = local_5b0;
        TStack_398.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar19 < 0) || (iVar26 < (int)uVar19)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          EVar11 = (*pcVar5)();
          return EVar11;
        }
        pTVar6 = local_560;
        uVar25 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
        if (uVar19 != uVar25) {
          puVar22 = *(undefined1 **)&(pFVar14->Selection).Elements.field_0x20;
          if (puVar22 == (undefined1 *)0x0) {
            puVar22 = puVar2;
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar13 * 4);
          while (uVar19 == 0) {
            lVar17 = (longlong)iVar13;
            uVar23 = uVar23 + 0x20;
            iVar13 = iVar13 + 1;
            uVar19 = uVar25;
            if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
            goto LAB_14cdd03f3;
            uVar19 = *(uint *)(puVar22 + lVar17 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_4b0 = (int)lVar17;
          uVar19 = local_4b0 + -1 + uVar23;
          if ((int)uVar25 < (int)uVar19) {
            uVar19 = uVar25;
          }
        }
LAB_14cdd03f3:
        while( true ) {
          pTVar8 = local_3a0;
          if (*(int *)&(local_3a0->Elements).field_0x8 - *(int *)&(local_3a0->Elements).field_0x34
              != (int)uStack_378) {
            local_5b5[0] = 0;
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5b5);
          }
          if (((TStack_398.CurrentBitIndex == uVar19) &&
              (TStack_398.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (pTVar8 == pTVar6)) break;
          local_56c = (undefined4)
                      ((ulonglong)
                       *(undefined8 *)
                        (*(longlong *)&pTVar8->Elements +
                        (longlong)TStack_398.CurrentBitIndex * 0x10) >> 0x20);
          pFVar4 = (param_2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_56c) &&
              ((FScriptContainerElement *)&local_56c < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            EVar11 = (*pcVar5)();
            return EVar11;
          }
          iVar26 = param_2->ArrayNum;
          if (iVar26 == *piVar1) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar26 + 1;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_56c;
          TStack_398.UnvisitedBitMask = TStack_398.UnvisitedBitMask & ~TStack_398._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_398);
        }
        return PolygroupID;
      }
    }
  }
LAB_14cdcf5d3:
  if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return Any;
}

// DebugPrint @ 14cdd2d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGeometryScriptMeshSelection::DebugPrint(FGeometryScriptMeshSelection *this)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FGeometrySelection *pFVar6;
  code *pcVar7;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 auStack_2118 [32];
  undefined1 local_20f8 [4];
  EGeometryTopologyType local_20f4;
  int local_20f0;
  FString local_20e8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_20d8;
  int iStack_20d0;
  uint uStack_20cc;
  undefined1 *local_20c8;
  undefined4 uStack_20c0;
  int iStack_20bc;
  int local_20b8;
  undefined4 uStack_20b4;
  int iStack_20b0;
  undefined4 uStack_20ac;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_20a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_20a0;
  undefined8 uStack_2080;
  undefined4 local_205c;
  TStringBuilderBase<wchar_t> local_2058;
  wchar_t local_2038 [4096];
  ulonglong local_38 [2];
  
  local_38[1] = 0x14cdd2daa;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2118;
  if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->GeoSelection).Object;
  local_20f4 = pFVar6->TopologyType;
  if (local_20f4 == Polygroup) {
    if (4 < (byte)LogGeometry._0_1_) {
      if ((pFVar6 == (FGeometrySelection *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else if (4 < (byte)LogGeometry._0_1_) {
    if ((pFVar6 == (FGeometrySelection *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  local_2058.Base = local_2038;
  local_2058.CurPos = local_2038;
  local_2058.End = (wchar_t *)local_38;
  local_2058.bIsDynamic = false;
  local_2058.bIsExternal = false;
  if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->GeoSelection).Object;
  iVar4 = *(int *)&(pFVar6->Selection).Elements.field_0x28;
  puVar1 = &(pFVar6->Selection).Elements.field_0x10;
  iStack_20d0 = 0;
  uStack_20cc = 1;
  local_20b8 = 0;
  pTVar2 = &pFVar6->Selection;
  iStack_20bc = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(pFVar6->Selection).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_20b8 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_20d0;
      local_20b8 = local_20b8 + 0x20;
      iStack_20d0 = iStack_20d0 + 1;
      iStack_20bc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_20d0) goto LAB_14cdd2fbe;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_20cc = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_20cc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_20f0 = (int)lVar10;
    iStack_20bc = local_20b8 + -1 + local_20f0;
    if (iVar4 < iStack_20bc) {
      iStack_20bc = iVar4;
    }
  }
LAB_14cdd2fbe:
  uStack_20b4 = local_205c;
  iStack_20b0 = *(int *)&(pFVar6->Selection).Elements.field_0x8 -
                *(int *)&(pFVar6->Selection).Elements.field_0x34;
  uVar13 = *(uint *)&(pFVar6->Selection).Elements.field_0x28;
  uStack_20c0 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_20a0._padding_ = CONCAT44(uStack_20cc,iStack_20d0);
  TStack_20a0.CurrentBitIndex = iStack_20bc;
  TStack_20a0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_20a0._28_4_ = local_205c;
  TStack_20a0.BaseBitIndex = local_20b8;
  uStack_2080 = CONCAT44(uStack_20ac,iStack_20b0);
  local_20d8 = pTVar2;
  local_20c8 = puVar1;
  local_20a8 = pTVar2;
  TStack_20a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(pFVar6->Selection).Elements.field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(pFVar6->Selection).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14cdd30c0;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14cdd30c0:
  while( true ) {
    pTVar8 = local_20a8;
    if (*(int *)&(local_20a8->Elements).field_0x8 - *(int *)&(local_20a8->Elements).field_0x34 !=
        (int)uStack_2080) {
      `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_20f8);
    }
    if (((TStack_20a0.CurrentBitIndex == uVar13) &&
        (TStack_20a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2)
       ) break;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_2058,L" %d");
    TStack_20a0.UnvisitedBitMask = TStack_20a0.UnvisitedBitMask & ~TStack_20a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_20a0);
  }
  if (local_2058.End < local_2058.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_2058,1);
  }
  *local_2058.CurPos = L'\0';
  ::FString::FString(&local_20e8,local_2058.Base);
  if (4 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  if (local_20e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20e8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2058);
  return;
}

// GetNumSelected @ 14cdd7c10

int __thiscall FGeometryScriptMeshSelection::GetNumSelected(FGeometryScriptMeshSelection *this)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (this->GeoSelection).Object;
  return *(int *)&(pFVar1->Selection).Elements.field_0x8 -
         *(int *)&(pFVar1->Selection).Elements.field_0x34;
}

// GetNumUniqueSelected @ 14cdd7c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FGeometryScriptMeshSelection::GetNumUniqueSelected
          (FGeometryScriptMeshSelection *this,FDynamicMesh3 *param_1)

{
  EGeometryElementType EVar1;
  undefined8 uVar2;
  code *pcVar3;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FGeometrySelection *pFVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint *puVar22;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [4];
  int local_164;
  int local_160;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_158;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  int *local_148;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_140;
  uint uStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FSparseArrayAllocationInfo local_e0;
  code *local_d0;
  int **local_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  uint *puVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar9 = (this->GeoSelection).Object;
  if (pFVar9->TopologyType == Polygroup) {
    if ((pFVar9 == (FGeometrySelection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    pFVar9 = (this->GeoSelection).Object;
    if (pFVar9->ElementType == Face) {
      puVar22 = (uint *)0x0;
      uVar15 = 0;
      puVar20 = (uint *)0x0;
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = -1;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      if ((pFVar9 == (FGeometrySelection *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar9 = (this->GeoSelection).Object;
      uVar14 = *(uint *)&(pFVar9->Selection).Elements.field_0x28;
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar9->Selection).Elements.field_0x10;
      uStack_134 = 1;
      local_120 = 0;
      local_158 = &pFVar9->Selection;
      uStack_124 = uVar15;
      if (uVar14 != 0) {
        puVar19 = *(uint **)&(pFVar9->Selection).Elements.field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)pTVar21;
        }
        uVar7 = *puVar19;
        puVar16 = puVar22;
        puVar18 = puVar22;
        local_120 = 0;
        uVar15 = 0;
        while (uVar7 == 0) {
          iVar6 = (int)puVar16;
          local_120 = (int)puVar18 + 0x20;
          puVar18 = (uint *)(ulonglong)local_120;
          uVar15 = iVar6 + 1;
          puVar16 = (uint *)(ulonglong)uVar15;
          uStack_124 = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14cdd7e4f;
          uVar7 = puVar19[(longlong)iVar6 + 1];
        }
        uStack_134 = -uVar7 & uVar7;
        uVar12 = (ulonglong)uStack_134 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_160 = (int)lVar10;
        uStack_124 = (local_120 - 1) + local_160;
        if ((int)uVar14 < (int)uStack_124) {
          uStack_124 = uVar14;
        }
      }
LAB_14cdd7e4f:
      uStack_11c = local_a4;
      iStack_118 = *(int *)&(pFVar9->Selection).Elements.field_0x8 -
                   *(int *)&(pFVar9->Selection).Elements.field_0x34;
      uVar7 = *(uint *)&(pFVar9->Selection).Elements.field_0x28;
      uStack_128 = 0xffffffff;
      TStack_108._padding_ = CONCAT44(uStack_134,uVar15);
      uVar13 = uVar7 & 0xffffffe0;
      TStack_108.CurrentBitIndex = uStack_124;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      iVar6 = (int)uVar7 >> 5;
      TStack_108._28_4_ = local_a4;
      TStack_108.BaseBitIndex = local_120;
      uStack_e8 = CONCAT44(uStack_114,iStack_118);
      local_150 = pTVar21;
      local_140 = local_158;
      uStack_138 = uVar15;
      local_130 = (undefined1 *)pTVar21;
      local_110 = local_158;
      TStack_108.Array = pTVar21;
      if ((((int)uVar7 < 0) || ((int)uVar14 < (int)uVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      uVar15 = *(uint *)&(pFVar9->Selection).Elements.field_0x28;
      puVar19 = puVar22;
      if (uVar7 != uVar15) {
        puVar17 = *(undefined1 **)&(pFVar9->Selection).Elements.field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = (undefined1 *)pTVar21;
        }
        uVar14 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar6 * 4);
        while (puVar19 = puVar20, uVar14 == 0) {
          lVar10 = (longlong)iVar6;
          uVar13 = uVar13 + 0x20;
          iVar6 = iVar6 + 1;
          uVar7 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
          goto LAB_14cdd7f50;
          uVar14 = *(uint *)(puVar17 + lVar10 * 4 + 4);
        }
        uVar12 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar7 = (int)lVar10 + -1 + uVar13;
        if ((int)uVar15 < (int)uVar7) {
          uVar7 = uVar15;
        }
      }
LAB_14cdd7f50:
      do {
        pTVar4 = local_110;
        if (*(int *)&(local_110->Elements).field_0x8 - *(int *)&(local_110->Elements).field_0x34 !=
            (int)uStack_e8) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
        }
        if (((TStack_108.CurrentBitIndex == uVar7) && (TStack_108.Array == pTVar21)) &&
           (pTVar4 == local_158)) {
          local_50 = 0;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_58);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          return (int)puVar19;
        }
        uVar2 = *(undefined8 *)
                 (*(longlong *)&pTVar4->Elements + (longlong)TStack_108.CurrentBitIndex * 0x10);
        if (local_64 == 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                             (int *)(local_98 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
          iVar6 = local_68;
        }
        else {
          iVar6 = *(int *)(local_98._0_8_ + 4 + (longlong)local_68 * 0xc);
          local_64 = local_64 + -1;
          iVar8 = local_68;
          if (local_64 != 0) {
            *(undefined4 *)(local_98._0_8_ + (longlong)iVar6 * 0xc) = 0xffffffff;
          }
        }
        local_68 = iVar6;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,&local_e0,iVar8);
        puVar20 = puVar22;
        if (local_e0.Pointer != (uint *)0x0) {
          *(uint *)local_e0.Pointer = (uint)((ulonglong)uVar2 >> 0x20);
          *(uint *)((longlong)local_e0.Pointer + 4) = 0xffffffff;
          puVar20 = local_e0.Pointer;
        }
        uVar14 = 0;
        uVar15 = *puVar20;
        if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
          FVar11 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_58;
          }
          for (iVar6 = *(int *)((longlong)FVar11 + (ulonglong)(local_50 - 1U & uVar15) * 4);
              iVar6 != -1; iVar6 = *(int *)(local_98._0_8_ + 4 + (longlong)iVar6 * 0xc)) {
            if (*(uint *)(local_98._0_8_ + (longlong)iVar6 * 0xc) == uVar15) {
              uVar14 = (uint)(iVar6 != -1);
              if (iVar6 != -1) {
                *(uint *)(local_98._0_8_ + (longlong)iVar6 * 0xc) = uVar15;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_98,local_e0.Index,1);
                goto LAB_14cdd8125;
              }
              break;
            }
          }
        }
        uVar13 = local_98._8_4_ - local_64;
        if (uVar13 < 4) {
          iVar6 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar10 & 0x1f);
        }
        if (((int)uVar13 < 1) || (iVar6 <= local_50)) {
          uVar15 = local_50 - 1U & uVar15;
          puVar20[2] = uVar15;
          FVar11 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_58;
          }
          uVar12 = (longlong)local_50 - 1U & (longlong)(int)uVar15;
          puVar20[1] = *(uint *)((longlong)FVar11 + uVar12 * 4);
          *(int *)((longlong)FVar11 + uVar12 * 4) = local_e0.Index;
        }
        else {
          local_50 = iVar6;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
        }
LAB_14cdd8125:
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
        puVar19 = (uint *)(ulonglong)((int)puVar19 + (uVar14 ^ 1));
        pTVar21 = local_150;
      } while( true );
    }
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return 0;
    }
LAB_14cdd81f0:
    iVar6 = 0;
  }
  else {
    local_164 = 0;
    if ((pFVar9 == (FGeometrySelection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    EVar1 = ((this->GeoSelection).Object)->ElementType;
    if (EVar1 != Vertex) {
      if (EVar1 == Edge) {
        local_148 = &local_164;
        local_c8 = &local_148;
        local_d0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FGeometryScriptMeshSelection::GetNumUniqueSelected'::__l34::<lambda_1>,void,int>
                   ::Call;
        pFVar9 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::
                 operator*<UE::Geometry::FGeometrySelection>(&this->GeoSelection);
        UE::Private::GeometryScriptSelectionLocal::EnumerateUniqueEdgesInEdgeSelection
                  (param_1,pFVar9,(TFunctionRef<void___cdecl(int)> *)&local_d0);
        return local_164;
      }
      if (EVar1 != Face) {
        if (2 < (byte)LogGeometry._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
        }
        goto LAB_14cdd81f0;
      }
    }
    pFVar9 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
    iVar6 = *(int *)&(pFVar9->Selection).Elements.field_0x8 -
            *(int *)&(pFVar9->Selection).Elements.field_0x34;
  }
  return iVar6;
}

// GetSelectionType @ 14cdd9670

/* WARNING: Enum "Type": Some values do not have unique names */

EGeometryScriptMeshSelectionType __thiscall
FGeometryScriptMeshSelection::GetSelectionType(FGeometryScriptMeshSelection *this)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  EGeometryScriptMeshSelectionType EVar4;
  
  if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pFVar1 = (this->GeoSelection).Object;
  if (pFVar1->TopologyType == Polygroup) {
    if ((pFVar1 == (FGeometrySelection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    if (((this->GeoSelection).Object)->ElementType == Face) {
      return Polygroups;
    }
  }
  else {
    if ((pFVar1 == (FGeometrySelection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pFVar1 = (this->GeoSelection).Object;
    if (pFVar1->TopologyType == Triangle) {
      if ((pFVar1 == (FGeometrySelection *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pFVar1 = (this->GeoSelection).Object;
      if (pFVar1->ElementType == Face) {
        return Triangles;
      }
      if ((pFVar1 == (FGeometrySelection *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pFVar1 = (this->GeoSelection).Object;
      if (pFVar1->ElementType == Vertex) {
        return Vertices;
      }
      if ((pFVar1 == (FGeometrySelection *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      if (((this->GeoSelection).Object)->ElementType == Edge) {
        return Edges;
      }
    }
  }
  if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return Triangles;
}

// IsEmpty @ 14cddbcd0

bool __thiscall FGeometryScriptMeshSelection::IsEmpty(FGeometryScriptMeshSelection *this)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->GeoSelection).Object;
  return *(int *)&(pFVar1->Selection).Elements.field_0x8 ==
         *(int *)&(pFVar1->Selection).Elements.field_0x34;
}

// ProcessByEdgeID @ 14cddf8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryScriptMeshSelection::ProcessByEdgeID
          (FGeometryScriptMeshSelection *this,FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(int)> *param_2,bool param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar7;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  EGeometryScriptMeshSelectionType EVar10;
  FGeometrySelection *pFVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar12;
  byte bVar13;
  int iVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint *puVar22;
  longlong lVar23;
  ForElementType<FSetElementId> FVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  int iVar26;
  undefined1 auStack_348 [32];
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326 [6];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_320;
  int local_318 [2];
  undefined4 local_310 [2];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_300;
  undefined8 uStack_2e0;
  uint local_2d8;
  uint uStack_2d4;
  undefined1 *puStack_2d0;
  undefined4 local_2c8;
  int iStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  undefined8 uStack_298;
  int local_290;
  undefined4 uStack_28c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  undefined8 uStack_268;
  int local_260;
  undefined4 uStack_25c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  int local_218;
  int local_214;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_210;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  FDynamicMesh3 *local_1a8;
  TFunctionRef<void___cdecl(int)> *local_1a0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_198;
  TFunctionRef<void___cdecl(int)> local_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_180;
  TFunctionRef<void___cdecl(int)> *local_178;
  code *local_170;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_e8;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = (this->GeoSelection).Object;
  if (*(int *)&(pFVar11->Selection).Elements.field_0x8 !=
      *(int *)&(pFVar11->Selection).Elements.field_0x34) {
    EVar10 = GetSelectionType(this);
    if (EVar10 == Edges) {
      local_190._0_8_ = *(undefined8 *)param_2;
      local_190._8_8_ = *(undefined8 *)&param_2->field_0x8;
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Private::GeometryScriptSelectionLocal::EnumerateUniqueEdgesInEdgeSelection
                (param_1,(this->GeoSelection).Object,&local_190);
      return;
    }
    uVar17 = 0;
    local_198 = &local_98;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_98._32_8_ = 0;
    uVar18 = 0;
    local_98._40_4_ = 0;
    local_98._52_4_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_98._44_4_ = 0x80;
    local_98._48_4_ = 0xffffffff;
    local_1a8 = param_1;
    local_1a0 = param_2;
    EVar10 = GetSelectionType(this);
    if (EVar10 == Triangles) {
      pFVar11 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
      iVar26 = *(int *)&(pFVar11->Selection).Elements.field_0x28;
      local_2d8 = 0;
      uStack_2d4 = 1;
      puStack_2d0 = &(pFVar11->Selection).Elements.field_0x10;
      local_320 = &pFVar11->Selection;
      iStack_2c4 = 0;
      uStack_2c0 = 0;
      if (iVar26 != 0) {
        puVar22 = *(uint **)&(pFVar11->Selection).Elements.field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puStack_2d0;
        }
        uVar18 = *puVar22;
        uVar21 = uVar17;
        while (uVar18 == 0) {
          uStack_2c0 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uStack_2c0;
          iVar14 = (int)uVar17;
          local_2d8 = iVar14 + 1;
          uVar17 = (ulonglong)local_2d8;
          if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_2d8)
          goto LAB_14cddfba9;
          uVar18 = puVar22[(longlong)iVar14 + 1];
        }
        uStack_2d4 = -uVar18 & uVar18;
        uVar17 = (ulonglong)uStack_2d4 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_218 = (int)lVar23;
        iStack_2c4 = local_218 + -1 + uStack_2c0;
        if (iVar26 < iStack_2c4) {
LAB_14cddfba9:
          iStack_2c4 = iVar26;
        }
      }
      local_2c8 = 0xffffffff;
      iVar14 = *(int *)&(pFVar11->Selection).Elements.field_0x28;
      bVar13 = (byte)iVar14 & 0x1f;
      local_290 = *(int *)&(pFVar11->Selection).Elements.field_0x8 -
                  *(int *)&(pFVar11->Selection).Elements.field_0x34;
      TStack_200._padding_ = CONCAT44(uStack_2d4,local_2d8);
      TStack_200.CurrentBitIndex = iStack_2c4;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      uStack_298._4_4_ = uStack_2bc;
      uStack_298._0_4_ = uStack_2c0;
      pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar11->Selection).Elements.field_0x10;
      local_2b8._padding_ = CONCAT44(1 << bVar13,iVar14 >> 5);
      local_2b8.CurrentBitIndex = iVar14;
      local_2b8.UnvisitedBitMask = -1 << bVar13;
      local_2b8._24_8_ = CONCAT44(iStack_2c4,iVar14) & 0xffffffffffffffe0;
      uStack_1e0 = CONCAT44(uStack_28c,local_290);
      local_2b8.Array = pTVar25;
      local_208 = local_320;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_2d0;
      TStack_200._24_8_ = uStack_298;
      if (((iVar14 < 0) || (iVar26 < iVar14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar7 = local_320;
      if (iVar14 != *(int *)&(pFVar11->Selection).Elements.field_0x28) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2b8);
        pTVar7 = local_320;
        iVar14 = local_2b8.CurrentBitIndex;
        pTVar25 = local_2b8.Array;
      }
      while( true ) {
        pTVar8 = local_208;
        if (*(int *)&(local_208->Elements).field_0x8 - *(int *)&(local_208->Elements).field_0x34 !=
            (int)uStack_1e0) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_328);
        }
        if (((TStack_200.CurrentBitIndex == iVar14) && (TStack_200.Array == pTVar25)) &&
           (pTVar8 == pTVar7)) break;
        uVar18 = *(uint *)(*(longlong *)&pTVar8->Elements +
                          (longlong)TStack_200.CurrentBitIndex * 0x10);
        if (((-1 < (int)uVar18) &&
            ((int)uVar18 <
             (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar18 >> 9) * 8) +
                               (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          `FGeometryScriptMeshSelection::ProcessByEdgeID'::__l17::<lambda_1>::operator()
                    (&local_1a8,uVar18);
        }
        TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
      }
    }
    else {
      EVar10 = GetSelectionType(this);
      if (EVar10 == Vertices) {
        local_e8.Elements._0_8_ = 0;
        local_e8.Elements._8_8_ = 0;
        local_e8.Elements._32_8_ = 0;
        local_e8.Elements._40_4_ = 0;
        local_e8.Elements._44_4_ = 0x80;
        local_e8.Elements._48_4_ = 0xffffffff;
        local_e8.Elements._52_4_ = 0;
        local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_e8.HashSize = 0;
        pFVar11 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        local_258._padding_._0_4_ = 0;
        local_210 = &pFVar11->Selection;
        local_258.CurrentBitIndex = 0;
        local_258.BaseBitIndex = 0;
        local_258._padding_._4_4_ = 1;
        pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar11->Selection).Elements.field_0x10;
        local_258.UnvisitedBitMask = 0xffffffff;
        local_258.Array = pTVar25;
        if (*(int *)&(pFVar11->Selection).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_258);
        }
        local_308 = &pFVar11->Selection;
        iVar26 = *(int *)&(pFVar11->Selection).Elements.field_0x28;
        TStack_300._padding_ = CONCAT44(local_258._padding_._4_4_,(undefined4)local_258._padding_);
        bVar13 = (byte)iVar26 & 0x1f;
        local_260 = *(int *)&(pFVar11->Selection).Elements.field_0x8 -
                    *(int *)&(pFVar11->Selection).Elements.field_0x34;
        TStack_300.CurrentBitIndex = local_258.CurrentBitIndex;
        TStack_300.UnvisitedBitMask = local_258.UnvisitedBitMask;
        TStack_300._28_4_ = local_258._28_4_;
        TStack_300.BaseBitIndex = local_258.BaseBitIndex;
        local_320 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)CONCAT44(local_320._4_4_,iVar26);
        local_288._padding_ = CONCAT44(1 << bVar13,iVar26 >> 5);
        local_288.CurrentBitIndex = iVar26;
        local_288.UnvisitedBitMask = -1 << bVar13;
        local_288._24_8_ = CONCAT44(local_258.CurrentBitIndex,iVar26) & 0xffffffffffffffe0;
        uStack_2e0 = CONCAT44(uStack_25c,local_260);
        TStack_300.Array = local_258.Array;
        local_288.Array = pTVar25;
        uStack_268 = TStack_300._24_8_;
        if ((iVar26 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar7 = local_210;
        if (iVar26 != *(int *)&(pFVar11->Selection).Elements.field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
          pTVar7 = local_210;
          iVar26 = local_288.CurrentBitIndex;
          pTVar25 = local_288.Array;
        }
        while( true ) {
          pTVar8 = local_308;
          if (*(int *)&(local_308->Elements).field_0x8 - *(int *)&(local_308->Elements).field_0x34
              != (int)uStack_2e0) {
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_327);
          }
          if (((TStack_300.CurrentBitIndex == iVar26) && (TStack_300.Array == pTVar25)) &&
             (pTVar8 == pTVar7)) break;
          uVar18 = *(uint *)(*(longlong *)&pTVar8->Elements +
                            (longlong)TStack_300.CurrentBitIndex * 0x10);
          if (((-1 < (int)uVar18) &&
              ((int)uVar18 <
               (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar18 >> 9) * 8) +
                                 (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_180 = &local_e8;
            local_168 = &local_180;
            local_170 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGeometryScriptMeshSelection::ProcessByEdgeID'::__l38::<lambda_2>,void,int>
                        ::Call;
            local_178 = param_2;
            UE::Geometry::FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
                      (&param_1->VertexEdgeLists,uVar18,
                       (TFunctionRef<void___cdecl(int)> *)&local_170);
          }
          TStack_300.UnvisitedBitMask = TStack_300.UnvisitedBitMask & ~TStack_300._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_300);
        }
        local_e8.HashSize = 0;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8.Hash.SecondaryData);
        }
        this_00 = &local_e8;
      }
      else {
        local_138.Elements._0_8_ = 0;
        local_138.Elements._8_8_ = 0;
        local_138.Elements._32_8_ = 0;
        local_138.Elements._40_4_ = 0;
        local_138.Elements._44_4_ = 0x80;
        local_138.Elements._48_4_ = 0xffffffff;
        local_138.Elements._52_4_ = 0;
        local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_138.HashSize = 0;
        pFVar11 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        local_238._padding_._0_4_ = 0;
        local_238._padding_._4_4_ = 1;
        local_238.UnvisitedBitMask = 0xffffffff;
        puVar1 = &(pFVar11->Selection).Elements.field_0x10;
        local_238.CurrentBitIndex = 0;
        local_238.BaseBitIndex = 0;
        pTVar7 = &pFVar11->Selection;
        local_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(pFVar11->Selection).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
        }
        TStack_300._padding_ = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
        TStack_300.CurrentBitIndex = local_238.CurrentBitIndex;
        TStack_300.UnvisitedBitMask = local_238.UnvisitedBitMask;
        TStack_300._28_4_ = local_238._28_4_;
        TStack_300.BaseBitIndex = local_238.BaseBitIndex;
        TStack_300.Array = local_238.Array;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,
                              *(int *)&(pFVar11->Selection).Elements.field_0x8 -
                              *(int *)&(pFVar11->Selection).Elements.field_0x34);
        TStack_1d0.Array = local_238.Array;
        uStack_1b0 = uStack_2e0;
        local_308 = pTVar7;
        local_1d8 = pTVar7;
        TStack_1d0._padding_ = TStack_300._padding_;
        TStack_1d0._16_8_ = TStack_300._16_8_;
        TStack_1d0._24_8_ = TStack_300._24_8_;
        pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_160,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                             *(int *)&(pFVar11->Selection).Elements.field_0x28);
        TStack_300._padding_ = pTVar12->_padding_;
        pTVar25 = pTVar12->Array;
        uVar6._0_4_ = pTVar12->UnvisitedBitMask;
        uVar6._4_4_ = pTVar12->CurrentBitIndex;
        TStack_300.BaseBitIndex = pTVar12->BaseBitIndex;
        TStack_300._28_4_ = *(undefined4 *)&pTVar12->field_0x1c;
        TStack_300.Array = pTVar25;
        TStack_300._16_8_ = uVar6;
        while( true ) {
          pTVar8 = local_1d8;
          if (*(int *)&(local_1d8->Elements).field_0x8 - *(int *)&(local_1d8->Elements).field_0x34
              != (int)uStack_1b0) {
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_326);
          }
          if (((TStack_1d0.CurrentBitIndex == uVar6._4_4_) && (TStack_1d0.Array == pTVar25)) &&
             (pTVar8 == pTVar7)) break;
          local_310[0] = (undefined4)
                         ((ulonglong)
                          *(undefined8 *)
                           (*(longlong *)&pTVar8->Elements +
                           (longlong)TStack_1d0.CurrentBitIndex * 0x10) >> 0x20);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    (&local_138,&local_214,(bool *)local_310);
          TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
        }
        uVar16 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
        if (((uVar16 != 0) &&
            (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
            uVar17 = 0, 0xfffd < (ushort)(**(short **)pFVar3 - 1U))) &&
           (uVar17 = 1, 1 < (int)uVar16)) {
          do {
            lVar2 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
            lVar23 = *(longlong *)(pFVar3 + (uVar17 >> 9) * 8);
            if ((*(short *)(lVar2 + lVar23) != 0) && (*(short *)(lVar2 + lVar23) != -1)) break;
            uVar19 = (uint)uVar17 + 1;
            uVar17 = (ulonglong)uVar19;
          } while ((int)uVar19 < (int)uVar16);
        }
        uVar19 = (uint)uVar17;
        lVar23 = local_138.Elements._0_8_;
        FVar24 = local_138.Hash.SecondaryData;
        while (uVar19 != uVar16) {
          uVar19 = (uint)uVar17;
          if ((param_1->TriangleGroups).bIsSet == false) {
            uVar20 = 0xffffffff;
          }
          else {
            uVar20 = uVar18;
            if ((-1 < (int)uVar19) &&
               ((int)uVar19 <
                (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
              lVar2 = (uVar17 >> 9) * 8;
              if ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + lVar2) +
                                     (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe) {
                uVar20 = *(uint *)(*(longlong *)
                                    ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                     Data + lVar2) + (ulonglong)(uVar19 & 0x1ff) * 4);
              }
            }
          }
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            FVar15 = (ForElementType<FSetElementId>)&local_138.Hash;
            if (FVar24 != (ForElementType<FSetElementId>)0x0) {
              FVar15 = FVar24;
            }
            for (iVar26 = *(int *)((longlong)FVar15 +
                                  (ulonglong)(local_138.HashSize - 1U & uVar20) * 4); iVar26 != -1;
                iVar26 = *(int *)(lVar23 + 4 + (longlong)iVar26 * 0xc)) {
              if (*(uint *)(lVar23 + (longlong)iVar26 * 0xc) == uVar20) {
                `FGeometryScriptMeshSelection::ProcessByEdgeID'::__l17::<lambda_1>::operator()
                          (&local_1a8,uVar19);
                lVar23 = local_138.Elements._0_8_;
                FVar24 = local_138.Hash.SecondaryData;
                break;
              }
            }
          }
          uVar19 = uVar19 + 1;
          uVar17 = (ulonglong)uVar19;
          if ((int)uVar19 < (int)uVar16) {
            pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
            do {
              lVar2 = (uVar17 >> 9) * 8;
              lVar5 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
              if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar2)) != 0) &&
                 (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar2)) != -1)) break;
              uVar19 = (uint)uVar17 + 1;
              uVar17 = (ulonglong)uVar19;
            } while ((int)uVar19 < (int)uVar16);
            uVar19 = (uint)uVar17;
          }
        }
        local_138.HashSize = 0;
        if (FVar24 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FVar24);
        }
        this_00 = &local_138;
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&this_00->Elements);
    }
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
  if (!param_3) {
    return;
  }
  uVar17 = 0;
  uVar18 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  if ((uVar18 != 0) &&
     (pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar17 = 1;
    uVar16 = 1;
    if ((int)uVar18 < 2) goto joined_r0x00014cddf9a7;
    do {
      lVar23 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar23 + *(longlong *)(pFVar3 + (uVar17 >> 9) * 8)) != 0) &&
         (*(short *)(lVar23 + *(longlong *)(pFVar3 + (uVar17 >> 9) * 8)) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar18);
  }
  uVar16 = (uint)uVar17;
joined_r0x00014cddf9a7:
  do {
    if (uVar16 == uVar18) {
      return;
    }
    while( true ) {
      local_318[0] = (int)uVar17;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_318);
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      if ((int)uVar18 <= (int)uVar16) break;
      pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar23 = (uVar17 >> 9) * 8;
        lVar2 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
        if ((*(short *)(lVar2 + *(longlong *)(pFVar3 + lVar23)) != 0) &&
           (*(short *)(lVar2 + *(longlong *)(pFVar3 + lVar23)) != -1)) break;
        uVar16 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        if ((int)uVar18 <= (int)uVar16) goto joined_r0x00014cddf9a7;
      }
    }
  } while( true );
}

// ProcessByTriangleID @ 14cde0340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FGeometryScriptMeshSelection::ProcessByTriangleID
          (FGeometryScriptMeshSelection *this,FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(int)> *param_2,bool param_3)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  int iVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  TFunctionRef<void___cdecl(int)> *pTVar10;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar11;
  TFunctionRef<void___cdecl(int)> *pTVar12;
  bool bVar13;
  EGeometryScriptMeshSelectionType EVar14;
  uint uVar15;
  FGeometrySelection *pFVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  byte bVar18;
  longlong lVar19;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  uint *puVar28;
  ForElementType<FSetElementId> FVar29;
  int iVar30;
  ulonglong uVar31;
  undefined1 auStack_3b8 [32];
  char local_398;
  undefined1 local_397;
  undefined1 local_396;
  undefined1 local_395;
  undefined1 local_394 [4];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_390;
  uint local_388 [2];
  uint local_380 [2];
  undefined4 local_378 [2];
  undefined4 local_370 [2];
  uint local_368 [2];
  TFunctionRef<void___cdecl(int)> *local_360;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_350;
  undefined8 uStack_330;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 local_300;
  IndexIterator local_2f8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_2e8;
  undefined8 uStack_2e0;
  TBitArray<FDefaultBitArrayAllocator> *local_2d8;
  uint uStack_2d0;
  int iStack_2cc;
  int local_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  int local_230;
  int local_22c;
  int local_228 [2];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  TFunctionRef<void___cdecl(int)> *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  code *local_1c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_1b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b0;
  TFunctionRef<void___cdecl(int)> *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  undefined4 local_164;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  local_360 = param_2;
  if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = (this->GeoSelection).Object;
  if ((*(int *)&(pFVar16->Selection).Elements.field_0x8 ==
       *(int *)&(pFVar16->Selection).Elements.field_0x34) && (param_3)) {
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_2f8,&param_1->TriangleRefCounts,0,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
    uVar22 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar21 = local_2f8._8_4_;
joined_r0x00014cde040a:
    if (uVar21 != uVar15 * 0x200 + uVar22) {
      local_388[0] = uVar21;
      local_2f8._8_4_ = uVar21;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_388);
      uVar21 = uVar21 + 1;
      if ((int)uVar21 < (int)local_2f8._12_4_) {
        do {
          lVar19 = (ulonglong)(uVar21 & 0x1ff) * 2;
          if ((*(short *)(lVar19 + *(longlong *)
                                    (*(longlong *)(local_2f8._0_8_ + 8) +
                                    (ulonglong)(uVar21 >> 9) * 8)) != 0) &&
             (*(short *)(lVar19 + *(longlong *)
                                   (*(longlong *)(local_2f8._0_8_ + 8) +
                                   (ulonglong)(uVar21 >> 9) * 8)) != -1)) break;
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < (int)local_2f8._12_4_);
      }
      goto joined_r0x00014cde040a;
    }
  }
  else {
    EVar14 = GetSelectionType(this);
    if (EVar14 == Triangles) {
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar16 = (this->GeoSelection).Object;
      iVar30 = 0;
      iVar3 = *(int *)&(pFVar16->Selection).Elements.field_0x28;
      local_2d8 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar16->Selection).Elements.field_0x10;
      uVar15 = 1;
      local_2c8 = 0;
      local_390 = &pFVar16->Selection;
      iStack_2cc = 0;
      if (iVar3 != 0) {
        puVar28 = *(uint **)&(pFVar16->Selection).Elements.field_0x20;
        if (puVar28 == (uint *)0x0) {
          puVar28 = (uint *)local_2d8;
        }
        uVar22 = *puVar28;
        while (uVar22 == 0) {
          lVar19 = (longlong)iVar30;
          local_2c8 = local_2c8 + 0x20;
          iVar30 = iVar30 + 1;
          iStack_2cc = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar30) goto LAB_14cde0553;
          uVar22 = puVar28[lVar19 + 1];
        }
        uVar15 = -uVar22 & uVar22;
        uVar31 = (ulonglong)uVar15 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_230 = (int)lVar19;
        iStack_2cc = local_230 + -1 + local_2c8;
        if (iVar3 < iStack_2cc) {
          iStack_2cc = iVar3;
        }
      }
LAB_14cde0553:
      iStack_2c0 = *(int *)&(pFVar16->Selection).Elements.field_0x8 -
                   *(int *)&(pFVar16->Selection).Elements.field_0x34;
      uVar22 = *(uint *)&(pFVar16->Selection).Elements.field_0x28;
      uStack_2e0 = CONCAT44(uVar15,iVar30);
      uStack_2d0 = 0xffffffff;
      puVar1 = &(pFVar16->Selection).Elements.field_0x10;
      uStack_2c4 = local_164;
      uVar15 = uVar22 & 0xffffffe0;
      TStack_218._padding_ = uStack_2e0;
      iVar30 = (int)uVar22 >> 5;
      uStack_1f8 = CONCAT44(uStack_2bc,iStack_2c0);
      TStack_218.UnvisitedBitMask = 0xffffffff;
      TStack_218.CurrentBitIndex = iStack_2cc;
      TStack_218.BaseBitIndex = local_2c8;
      TStack_218._28_4_ = local_164;
      local_2e8 = local_390;
      local_220 = local_390;
      TStack_218.Array = local_2d8;
      if ((((int)uVar22 < 0) || (iVar3 < (int)uVar22)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar2 = local_390;
      uVar21 = *(uint *)&(pFVar16->Selection).Elements.field_0x28;
      if (uVar22 != uVar21) {
        puVar4 = *(undefined1 **)&(pFVar16->Selection).Elements.field_0x20;
        puVar27 = puVar1;
        if (puVar4 != (undefined1 *)0x0) {
          puVar27 = puVar4;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar30 * 4);
        while (uVar22 == 0) {
          lVar19 = (longlong)iVar30;
          uVar15 = uVar15 + 0x20;
          iVar30 = iVar30 + 1;
          uVar22 = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
          goto LAB_14cde0661;
          uVar22 = *(uint *)(puVar27 + lVar19 * 4 + 4);
        }
        uVar31 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar22 = (int)lVar19 + -1 + uVar15;
        if ((int)uVar21 < (int)uVar22) {
          uVar22 = uVar21;
        }
      }
LAB_14cde0661:
      while( true ) {
        pTVar11 = local_220;
        if (*(int *)&(local_220->Elements).field_0x8 - *(int *)&(local_220->Elements).field_0x34 !=
            (int)uStack_1f8) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_397);
        }
        if (((TStack_218.CurrentBitIndex == uVar22) &&
            (TStack_218.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar11 == pTVar2)) break;
        uVar15 = *(uint *)(*(longlong *)&pTVar11->Elements +
                          (longlong)TStack_218.CurrentBitIndex * 0x10);
        if (((-1 < (int)uVar15) &&
            ((int)uVar15 <
             (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar15 >> 9) * 8) +
                               (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          local_380[0] = uVar15;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_380);
        }
        TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
      }
    }
    else {
      EVar14 = GetSelectionType(this);
      if (EVar14 == Vertices) {
        local_e8.Elements._44_4_ = 0x80;
        local_e8.Elements._0_8_ = 0;
        local_e8.Elements._8_8_ = 0;
        local_e8.Elements._32_8_ = 0;
        local_e8.Elements._40_4_ = 0;
        local_e8.Elements._52_4_ = 0;
        local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_e8.HashSize = 0;
        local_e8.Elements._48_4_ = 0xffffffff;
        pFVar16 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        local_290._padding_._0_4_ = 0;
        local_360 = (TFunctionRef<void___cdecl(int)> *)&pFVar16->Selection;
        local_290.CurrentBitIndex = 0;
        local_290.BaseBitIndex = 0;
        local_290._padding_._4_4_ = 1;
        pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar16->Selection).Elements.field_0x10;
        local_290.UnvisitedBitMask = 0xffffffff;
        local_290.Array = pTVar25;
        if (*(int *)&(pFVar16->Selection).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_290);
        }
        local_2e8 = &pFVar16->Selection;
        uVar15 = *(uint *)&(pFVar16->Selection).Elements.field_0x28;
        uStack_2e0 = CONCAT44(local_290._padding_._4_4_,(undefined4)local_290._padding_);
        bVar18 = (byte)uVar15 & 0x1f;
        iStack_2c0 = *(int *)&(pFVar16->Selection).Elements.field_0x8 -
                     *(int *)&(pFVar16->Selection).Elements.field_0x34;
        iStack_2cc = local_290.CurrentBitIndex;
        uStack_2d0 = local_290.UnvisitedBitMask;
        uStack_2c4 = local_290._28_4_;
        local_2c8 = local_290.BaseBitIndex;
        local_2b0._padding_._0_4_ = (int)uVar15 >> 5;
        local_2d8 = local_290.Array;
        local_2b0.BaseBitIndex = uVar15 & 0xffffffe0;
        local_2b0._padding_._4_4_ = 1 << bVar18;
        local_2b0.UnvisitedBitMask = -1 << bVar18;
        local_390 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)CONCAT44(local_390._4_4_,uVar15);
        uStack_1c8 = CONCAT44(uStack_2bc,iStack_2c0);
        TStack_1e8.Array = local_290.Array;
        local_2b0.Array = pTVar25;
        local_2b0.CurrentBitIndex = uVar15;
        local_1f0 = (TFunctionRef<void___cdecl(int)> *)local_2e8;
        TStack_1e8._padding_ = uStack_2e0;
        TStack_1e8._16_8_ = _uStack_2d0;
        TStack_1e8._24_8_ = _local_2c8;
        if (((int)uVar15 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar10 = local_360;
        if (uVar15 != *(uint *)&(pFVar16->Selection).Elements.field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2b0);
          pTVar10 = local_360;
          uVar15 = local_2b0.CurrentBitIndex;
          pTVar25 = local_2b0.Array;
        }
        while( true ) {
          pTVar12 = local_1f0;
          if (*(int *)&local_1f0->field_0x8 - *(int *)&local_1f0[3].field_0x4 != (int)uStack_1c8) {
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_396);
          }
          if (((TStack_1e8.CurrentBitIndex == uVar15) && (TStack_1e8.Array == pTVar25)) &&
             (pTVar12 == pTVar10)) break;
          uVar22 = *(uint *)(*(longlong *)pTVar12 + (longlong)TStack_1e8.CurrentBitIndex * 0x10);
          if (((-1 < (int)uVar22) &&
              ((int)uVar22 <
               (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar22 >> 9) * 8) +
                                 (ulonglong)(uVar22 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_1b0 = &local_e8;
            local_1b8 = &local_1b0;
            local_1c0 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGeometryScriptMeshSelection::ProcessByTriangleID'::__l30::<lambda_1>,void,int>
                        ::Call;
            local_1a8 = param_2;
            UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                      (param_1,uVar22,(TFunctionRef<void___cdecl(int)> *)&local_1c0);
          }
          TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
        }
        local_e8.HashSize = 0;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8.Hash.SecondaryData);
        }
        this_00 = &local_e8;
      }
      else {
        EVar14 = GetSelectionType(this);
        uVar31 = 0;
        if (EVar14 == Edges) {
          local_98.Elements._0_8_ = 0;
          local_98.Elements._8_8_ = 0;
          local_98.Elements._32_8_ = 0;
          local_98.Elements._40_4_ = 0;
          local_98.Elements._44_4_ = 0x80;
          local_98.Elements._48_4_ = 0xffffffff;
          local_98.Elements._52_4_ = 0;
          local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_98.HashSize = 0;
          pFVar16 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
          local_270._padding_._0_4_ = 0;
          local_270._padding_._4_4_ = 1;
          local_270.UnvisitedBitMask = 0xffffffff;
          puVar1 = &(pFVar16->Selection).Elements.field_0x10;
          local_270.CurrentBitIndex = 0;
          local_270.BaseBitIndex = 0;
          local_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if (*(int *)&(pFVar16->Selection).Elements.field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
          }
          TStack_350._padding_ = CONCAT44(local_270._padding_._4_4_,(undefined4)local_270._padding_)
          ;
          pTVar2 = &pFVar16->Selection;
          TStack_350.CurrentBitIndex = local_270.CurrentBitIndex;
          TStack_350.UnvisitedBitMask = local_270.UnvisitedBitMask;
          TStack_350._28_4_ = local_270._28_4_;
          TStack_350.BaseBitIndex = local_270.BaseBitIndex;
          TStack_320.Array = local_270.Array;
          local_300 = CONCAT44(local_300._4_4_,
                               *(int *)&(pFVar16->Selection).Elements.field_0x8 -
                               *(int *)&(pFVar16->Selection).Elements.field_0x34);
          TStack_350.Array = local_270.Array;
          uStack_330 = local_300;
          local_358 = pTVar2;
          local_328 = pTVar2;
          TStack_320._padding_ = TStack_350._padding_;
          TStack_320._16_8_ = TStack_350._16_8_;
          TStack_320._24_8_ = TStack_350._24_8_;
          pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_160,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                               *(int *)&(pFVar16->Selection).Elements.field_0x28);
          TStack_320._padding_ = pTVar17->_padding_;
          TStack_320.Array = pTVar17->Array;
          TStack_320.UnvisitedBitMask = pTVar17->UnvisitedBitMask;
          TStack_320.CurrentBitIndex = pTVar17->CurrentBitIndex;
          TStack_320.BaseBitIndex = pTVar17->BaseBitIndex;
          TStack_320._28_4_ = *(undefined4 *)&pTVar17->field_0x1c;
          while( true ) {
            pTVar11 = local_358;
            if (*(int *)&(local_358->Elements).field_0x8 - *(int *)&(local_358->Elements).field_0x34
                != (int)uStack_330) {
              `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_395);
            }
            if (((TStack_350.CurrentBitIndex == TStack_320.CurrentBitIndex) &&
                (TStack_350.Array == TStack_320.Array)) && (pTVar11 == pTVar2)) break;
            uVar15 = *(uint *)(*(longlong *)&pTVar11->Elements +
                              (longlong)TStack_350.CurrentBitIndex * 0x10);
            if ((int)(uVar15 & 0xfffffff) <
                (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
              lVar19 = (ulonglong)((uVar15 & 0xfffffff) >> 9) * 8;
              if ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + lVar19) +
                                     (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe) {
                uVar15 = *(uint *)(*(longlong *)
                                    ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar19
                                    ) + ((ulonglong)(uVar15 & 0x1ff) * 3 +
                                        (ulonglong)(uVar15 >> 0x1e)) * 4);
                local_2b8 = *(undefined8 *)
                             (*(longlong *)
                               ((param_1->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar15 >> 9) * 8) + 8 +
                             (ulonglong)(uVar15 & 0x1ff) * 0x10);
                uVar24 = (ulonglong)local_2b8 >> 0x20;
                uVar23 = uVar31;
                uVar26 = uVar31;
                do {
                  local_398 = '\0';
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&local_98,&local_22c,
                             (bool *)((longlong)&local_2b8 + (longlong)(int)uVar26 * 4));
                  if (local_398 == '\0') {
                    local_378[0] = *(undefined4 *)((longlong)&local_2b8 + uVar23 * 4);
                    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_378);
                  }
                  uVar26 = (ulonglong)((int)uVar26 + 1);
                  uVar23 = uVar23 + 1;
                } while ((longlong)uVar23 < (longlong)((ulonglong)((int)uVar24 != -1) + 1));
              }
            }
            TStack_350.UnvisitedBitMask = TStack_350.UnvisitedBitMask & ~TStack_350._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_350);
          }
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          this_00 = &local_98;
        }
        else {
          local_138.Elements._0_8_ = 0;
          local_138.Elements._8_8_ = 0;
          local_138.Elements._32_8_ = 0;
          local_138.Elements._40_4_ = 0;
          local_138.Elements._44_4_ = 0x80;
          local_138.Elements._48_4_ = 0xffffffff;
          local_138.Elements._52_4_ = 0;
          local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_138.HashSize = 0;
          pFVar16 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
          local_250._padding_._0_4_ = 0;
          local_250.CurrentBitIndex = 0;
          local_250.BaseBitIndex = 0;
          local_250._padding_._4_4_ = 1;
          pTVar2 = &pFVar16->Selection;
          local_250.UnvisitedBitMask = 0xffffffff;
          local_250.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar16->Selection).Elements.field_0x10;
          if (*(int *)&(pFVar16->Selection).Elements.field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_250);
          }
          TStack_350._padding_ = CONCAT44(local_250._padding_._4_4_,(undefined4)local_250._padding_)
          ;
          TStack_350.CurrentBitIndex = local_250.CurrentBitIndex;
          TStack_350.UnvisitedBitMask = local_250.UnvisitedBitMask;
          TStack_350._28_4_ = local_250._28_4_;
          TStack_350.BaseBitIndex = local_250.BaseBitIndex;
          TStack_350.Array = local_250.Array;
          uStack_330 = CONCAT44(uStack_330._4_4_,
                                *(int *)&(pFVar16->Selection).Elements.field_0x8 -
                                *(int *)&(pFVar16->Selection).Elements.field_0x34);
          TStack_320.Array = local_250.Array;
          local_300 = uStack_330;
          local_358 = pTVar2;
          local_328 = pTVar2;
          TStack_320._padding_ = TStack_350._padding_;
          TStack_320._16_8_ = TStack_350._16_8_;
          TStack_320._24_8_ = TStack_350._24_8_;
          pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_1a0,
                               (TBitArray<FDefaultBitArrayAllocator> *)
                               &(pFVar16->Selection).Elements.field_0x10,
                               *(int *)&(pFVar16->Selection).Elements.field_0x28);
          TStack_350._padding_ = pTVar17->_padding_;
          pTVar25 = pTVar17->Array;
          uVar9._0_4_ = pTVar17->UnvisitedBitMask;
          uVar9._4_4_ = pTVar17->CurrentBitIndex;
          TStack_350.BaseBitIndex = pTVar17->BaseBitIndex;
          TStack_350._28_4_ = *(undefined4 *)&pTVar17->field_0x1c;
          TStack_350.Array = pTVar25;
          TStack_350._16_8_ = uVar9;
          while( true ) {
            pTVar11 = local_328;
            if (*(int *)&(local_328->Elements).field_0x8 - *(int *)&(local_328->Elements).field_0x34
                != (int)local_300) {
              `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_394);
            }
            pTVar10 = local_360;
            if (((TStack_320.CurrentBitIndex == uVar9._4_4_) && (TStack_320.Array == pTVar25)) &&
               (pTVar11 == pTVar2)) break;
            local_370[0] = (undefined4)
                           ((ulonglong)
                            *(undefined8 *)
                             (*(longlong *)&pTVar11->Elements +
                             (longlong)TStack_320.CurrentBitIndex * 0x10) >> 0x20);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                      (&local_138,local_228,(bool *)local_370);
            TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
          }
          uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
                   (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
          uVar24 = uVar31;
          if (((uVar15 != 0) &&
              (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
              uVar24 = 0, 0xfffd < (ushort)(**(short **)pFVar5 - 1U))) &&
             (uVar24 = 1, 1 < (int)uVar15)) {
            do {
              lVar19 = (ulonglong)((uint)uVar24 & 0x1ff) * 2;
              if ((*(short *)(lVar19 + *(longlong *)(pFVar5 + (uVar24 >> 9) * 8)) != 0) &&
                 (*(short *)(lVar19 + *(longlong *)(pFVar5 + (uVar24 >> 9) * 8)) != -1)) break;
              uVar22 = (uint)uVar24 + 1;
              uVar24 = (ulonglong)uVar22;
            } while ((int)uVar22 < (int)uVar15);
          }
          uVar22 = (uint)uVar24;
          lVar19 = local_138.Elements._0_8_;
          FVar29 = local_138.Hash.SecondaryData;
          while (uVar22 != uVar15) {
            uVar22 = (uint)uVar24;
            if ((param_1->TriangleGroups).bIsSet == false) {
              uVar23 = 0xffffffff;
            }
            else {
              uVar23 = uVar31;
              if ((-1 < (int)uVar22) &&
                 ((int)uVar22 <
                  (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
                lVar6 = (uVar24 >> 9) * 8;
                if ((ushort)(*(short *)(*(longlong *)
                                         ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + lVar6) +
                                       (ulonglong)(uVar22 & 0x1ff) * 2) - 1U) < 0xfffe) {
                  uVar23 = (ulonglong)
                           *(uint *)(*(longlong *)
                                      ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance
                                       .Data + lVar6) + (ulonglong)(uVar22 & 0x1ff) * 4);
                }
              }
            }
            if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
              FVar20 = (ForElementType<FSetElementId>)&local_138.Hash;
              if (FVar29 != (ForElementType<FSetElementId>)0x0) {
                FVar20 = FVar29;
              }
              for (iVar3 = *(int *)((longlong)FVar20 + (local_138.HashSize - 1 & uVar23) * 4);
                  iVar3 != -1; iVar3 = *(int *)(lVar19 + 4 + (longlong)iVar3 * 0xc)) {
                if (*(int *)(lVar19 + (longlong)iVar3 * 0xc) == (int)uVar23) {
                  local_368[0] = uVar22;
                  (**(code **)pTVar10)(*(undefined8 *)&pTVar10->field_0x8,local_368);
                  lVar19 = local_138.Elements._0_8_;
                  FVar29 = local_138.Hash.SecondaryData;
                  break;
                }
              }
            }
            uVar22 = uVar22 + 1;
            uVar24 = (ulonglong)uVar22;
            if ((int)uVar22 < (int)uVar15) {
              do {
                lVar8 = (ulonglong)((uint)uVar24 & 0x1ff) * 2;
                lVar6 = *(longlong *)
                         ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                         (uVar24 >> 9) * 8);
                if ((*(short *)(lVar8 + lVar6) != 0) && (*(short *)(lVar8 + lVar6) != -1)) break;
                uVar22 = (uint)uVar24 + 1;
                uVar24 = (ulonglong)uVar22;
              } while ((int)uVar22 < (int)uVar15);
              uVar22 = (uint)uVar24;
            }
          }
          local_138.HashSize = 0;
          if (FVar29 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FVar29);
          }
          this_00 = &local_138;
        }
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&this_00->Elements);
    }
  }
  return;
}

// ProcessByVertexID @ 14cde0fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FGeometryScriptMeshSelection::ProcessByVertexID
          (FGeometryScriptMeshSelection *this,FDynamicMesh3 *param_1,
          TFunctionRef<void___cdecl(int)> *param_2,bool param_3)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  TFunctionRef<void___cdecl(int)> *pTVar10;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  EGeometryScriptMeshSelectionType EVar13;
  FGeometrySelection *pFVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  byte bVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 *puVar26;
  uint *puVar27;
  ForElementType<FSetElementId> FVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  undefined1 auStack_368 [32];
  char local_348;
  char local_347;
  undefined4 local_340 [2];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336;
  undefined1 local_335 [5];
  undefined4 local_330 [2];
  TFunctionRef<void___cdecl(int)> *local_328;
  int local_320 [2];
  undefined8 local_318;
  undefined4 local_310 [2];
  int local_308 [2];
  uint local_300 [2];
  int local_2f8;
  undefined4 local_2f4;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 uStack_2c8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 local_298;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_290;
  undefined8 uStack_288;
  TBitArray<FDefaultBitArrayAllocator> *local_280;
  uint uStack_278;
  int iStack_274;
  int local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  int local_1d8;
  int local_1d4;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  FDynamicMesh3 *local_170;
  TFunctionRef<void___cdecl(int)> *local_168;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_160;
  IndexIterator local_158 [2];
  undefined4 local_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_368;
  local_328 = param_2;
  if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar14 = (this->GeoSelection).Object;
  if ((*(int *)&(pFVar14->Selection).Elements.field_0x8 ==
       *(int *)&(pFVar14->Selection).Elements.field_0x34) && (param_3)) {
    uVar21 = 0;
    iVar22 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
    if (((iVar22 != 0) &&
        (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar21 = 1, 1 < iVar22)) {
      do {
        lVar17 = (ulonglong)((uint)uVar21 & 0x1ff) * 2;
        if ((*(short *)(lVar17 + *(longlong *)(pFVar4 + (uVar21 >> 9) * 8)) != 0) &&
           (*(short *)(lVar17 + *(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (uVar21 >> 9) * 8)) != -1)) break;
        uVar19 = (uint)uVar21 + 1;
        uVar21 = (ulonglong)uVar19;
      } while ((int)uVar19 < iVar22);
    }
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (local_158,&param_1->VertexRefCounts,iVar22,iVar22);
    iVar20 = (int)uVar21;
    while (iVar20 != local_158[0]._8_4_) {
      local_308[0] = (int)uVar21;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_308);
      uVar19 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar19;
      if ((int)uVar19 < iVar22) {
        do {
          lVar8 = (ulonglong)((uint)uVar21 & 0x1ff) * 2;
          lVar17 = *(longlong *)
                    ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar21 >> 9) * 8);
          if ((*(short *)(lVar8 + lVar17) != 0) && (*(short *)(lVar8 + lVar17) != -1)) break;
          uVar19 = (uint)uVar21 + 1;
          uVar21 = (ulonglong)uVar19;
        } while ((int)uVar19 < iVar22);
      }
      iVar20 = (int)uVar21;
    }
  }
  else {
    EVar13 = GetSelectionType(this);
    if (EVar13 == Vertices) {
      if (((this->GeoSelection).Object == (FGeometrySelection *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar14 = (this->GeoSelection).Object;
      iVar20 = 0;
      iVar22 = *(int *)&(pFVar14->Selection).Elements.field_0x28;
      local_280 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar14->Selection).Elements.field_0x10;
      uVar19 = 1;
      local_270 = 0;
      local_328 = (TFunctionRef<void___cdecl(int)> *)&pFVar14->Selection;
      iStack_274 = 0;
      if (iVar22 != 0) {
        puVar27 = *(uint **)&(pFVar14->Selection).Elements.field_0x20;
        if (puVar27 == (uint *)0x0) {
          puVar27 = (uint *)local_280;
        }
        uVar23 = *puVar27;
        while (uVar23 == 0) {
          lVar17 = (longlong)iVar20;
          local_270 = local_270 + 0x20;
          iVar20 = iVar20 + 1;
          iStack_274 = iVar22;
          if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14cde1201;
          uVar23 = puVar27[lVar17 + 1];
        }
        uVar19 = -uVar23 & uVar23;
        uVar21 = (ulonglong)uVar19 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_1d8 = (int)lVar17;
        iStack_274 = local_1d8 + -1 + local_270;
        if (iVar22 < iStack_274) {
          iStack_274 = iVar22;
        }
      }
LAB_14cde1201:
      iStack_268 = *(int *)&(pFVar14->Selection).Elements.field_0x8 -
                   *(int *)&(pFVar14->Selection).Elements.field_0x34;
      uVar23 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
      uStack_288 = CONCAT44(uVar19,iVar20);
      uStack_278 = 0xffffffff;
      puVar2 = &(pFVar14->Selection).Elements.field_0x10;
      uStack_26c = local_12c;
      uVar19 = uVar23 & 0xffffffe0;
      TStack_1c8._padding_ = uStack_288;
      iVar20 = (int)uVar23 >> 5;
      uStack_1a8 = CONCAT44(uStack_264,iStack_268);
      TStack_1c8.UnvisitedBitMask = 0xffffffff;
      TStack_1c8.CurrentBitIndex = iStack_274;
      TStack_1c8.BaseBitIndex = local_270;
      TStack_1c8._28_4_ = local_12c;
      local_290 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *
                  )local_328;
      local_1d0 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *
                  )local_328;
      TStack_1c8.Array = local_280;
      if ((((int)uVar23 < 0) || (iVar22 < (int)uVar23)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar10 = local_328;
      uVar24 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
      if (uVar23 != uVar24) {
        puVar5 = *(undefined1 **)&(pFVar14->Selection).Elements.field_0x20;
        puVar26 = puVar2;
        if (puVar5 != (undefined1 *)0x0) {
          puVar26 = puVar5;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar20 * 4);
        while (uVar23 == 0) {
          lVar17 = (longlong)iVar20;
          uVar19 = uVar19 + 0x20;
          iVar20 = iVar20 + 1;
          uVar23 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14cde1310;
          uVar23 = *(uint *)(puVar26 + lVar17 * 4 + 4);
        }
        uVar21 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar23 = (int)lVar17 + -1 + uVar19;
        if ((int)uVar24 < (int)uVar23) {
          uVar23 = uVar24;
        }
      }
LAB_14cde1310:
      while( true ) {
        pTVar1 = local_1d0;
        if (*(int *)&(local_1d0->Elements).field_0x8 - *(int *)&(local_1d0->Elements).field_0x34 !=
            (int)uStack_1a8) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_338);
        }
        if (((TStack_1c8.CurrentBitIndex == uVar23) &&
            (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar1 == (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                       *)pTVar10)) break;
        uVar19 = *(uint *)(*(longlong *)&pTVar1->Elements +
                          (longlong)TStack_1c8.CurrentBitIndex * 0x10);
        if (((-1 < (int)uVar19) &&
            ((int)uVar19 <
             (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 2)
                    - 1U) < 0xfffe)) {
          local_300[0] = uVar19;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_300);
        }
        TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
      }
    }
    else {
      local_98.Elements._44_4_ = 0x80;
      local_160 = &local_98;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      uVar19 = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      local_170 = param_1;
      local_168 = param_2;
      EVar13 = GetSelectionType(this);
      if (EVar13 == Triangles) {
        pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
        local_238._padding_._0_4_ = 0;
        local_238._padding_._4_4_ = 1;
        local_238.UnvisitedBitMask = 0xffffffff;
        pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar14->Selection).Elements.field_0x10;
        local_238.CurrentBitIndex = 0;
        local_238.BaseBitIndex = 0;
        pTVar1 = &pFVar14->Selection;
        local_238.Array = pTVar29;
        if (*(int *)&(pFVar14->Selection).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
        }
        uVar19 = *(uint *)&(pFVar14->Selection).Elements.field_0x28;
        bVar16 = (byte)uVar19 & 0x1f;
        iStack_268 = *(int *)&(pFVar14->Selection).Elements.field_0x8 -
                     *(int *)&(pFVar14->Selection).Elements.field_0x34;
        uStack_288 = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
        iStack_274 = local_238.CurrentBitIndex;
        uStack_278 = local_238.UnvisitedBitMask;
        uStack_26c = local_238._28_4_;
        local_270 = local_238.BaseBitIndex;
        local_258._padding_._0_4_ = (int)uVar19 >> 5;
        local_280 = local_238.Array;
        local_258.BaseBitIndex = uVar19 & 0xffffffe0;
        local_258._padding_._4_4_ = 1 << bVar16;
        local_258.UnvisitedBitMask = -1 << bVar16;
        local_328 = (TFunctionRef<void___cdecl(int)> *)CONCAT44(local_328._4_4_,uVar19);
        TStack_198.Array = local_238.Array;
        uStack_178 = CONCAT44(uStack_264,iStack_268);
        local_290 = pTVar1;
        local_258.Array = pTVar29;
        local_258.CurrentBitIndex = uVar19;
        local_1a0 = pTVar1;
        TStack_198._padding_ = uStack_288;
        TStack_198._16_8_ = _uStack_278;
        TStack_198._24_8_ = _local_270;
        if (((int)uVar19 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar19 != *(uint *)&(pFVar14->Selection).Elements.field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_258);
          uVar19 = local_258.CurrentBitIndex;
          pTVar29 = local_258.Array;
        }
        while( true ) {
          pTVar11 = local_1a0;
          if (*(int *)&(local_1a0->Elements).field_0x8 - *(int *)&(local_1a0->Elements).field_0x34
              != (int)uStack_178) {
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_337);
          }
          if (((TStack_198.CurrentBitIndex == uVar19) && (TStack_198.Array == pTVar29)) &&
             (pTVar11 == pTVar1)) break;
          uVar23 = *(uint *)(*(longlong *)&pTVar11->Elements +
                            (longlong)TStack_198.CurrentBitIndex * 0x10);
          if (((-1 < (int)uVar23) &&
              ((int)uVar23 <
               (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar23 >> 9) * 8) +
                                 (ulonglong)(uVar23 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            `FGeometryScriptMeshSelection::ProcessByVertexID'::__l21::<lambda_1>::operator()
                      (&local_170,uVar23);
          }
          TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
        }
      }
      else {
        EVar13 = GetSelectionType(this);
        if (EVar13 == Edges) {
          pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
          local_218._padding_._0_4_ = 0;
          local_218._padding_._4_4_ = 1;
          local_218.UnvisitedBitMask = 0xffffffff;
          puVar2 = &(pFVar14->Selection).Elements.field_0x10;
          local_218.CurrentBitIndex = 0;
          local_218.BaseBitIndex = 0;
          local_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
          if (*(int *)&(pFVar14->Selection).Elements.field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_218);
          }
          TStack_2e8._padding_ = CONCAT44(local_218._padding_._4_4_,(undefined4)local_218._padding_)
          ;
          pTVar1 = &pFVar14->Selection;
          TStack_2e8.CurrentBitIndex = local_218.CurrentBitIndex;
          TStack_2e8.UnvisitedBitMask = local_218.UnvisitedBitMask;
          TStack_2e8._28_4_ = local_218._28_4_;
          TStack_2e8.BaseBitIndex = local_218.BaseBitIndex;
          TStack_2b8.Array = local_218.Array;
          local_298 = CONCAT44(local_298._4_4_,
                               *(int *)&(pFVar14->Selection).Elements.field_0x8 -
                               *(int *)&(pFVar14->Selection).Elements.field_0x34);
          TStack_2e8.Array = local_218.Array;
          uStack_2c8 = local_298;
          local_2f0 = pTVar1;
          local_2c0 = pTVar1;
          TStack_2b8._padding_ = TStack_2e8._padding_;
          TStack_2b8._16_8_ = TStack_2e8._16_8_;
          TStack_2b8._24_8_ = TStack_2e8._24_8_;
          pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_128,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                               *(int *)&(pFVar14->Selection).Elements.field_0x28);
          uVar9._0_4_ = pTVar15->UnvisitedBitMask;
          uVar9._4_4_ = pTVar15->CurrentBitIndex;
          TStack_2b8.BaseBitIndex = pTVar15->BaseBitIndex;
          TStack_2b8._28_4_ = *(undefined4 *)&pTVar15->field_0x1c;
          TStack_2b8._padding_ = pTVar15->_padding_;
          TStack_2b8.Array = pTVar15->Array;
          TStack_2b8._16_8_ = uVar9;
          while( true ) {
            pTVar11 = local_2f0;
            if (*(int *)&(local_2f0->Elements).field_0x8 - *(int *)&(local_2f0->Elements).field_0x34
                != (int)uStack_2c8) {
              `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_336);
            }
            if (((TStack_2e8.CurrentBitIndex == uVar9._4_4_) &&
                (TStack_2e8.Array == TStack_2b8.Array)) && (pTVar11 == pTVar1)) break;
            uVar19 = *(uint *)(*(longlong *)&pTVar11->Elements +
                              (longlong)TStack_2e8.CurrentBitIndex * 0x10);
            if ((int)(uVar19 & 0xfffffff) <
                (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
              lVar17 = (ulonglong)((uVar19 & 0xfffffff) >> 9) * 8;
              if ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + lVar17) +
                                     (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe) {
                local_347 = '\0';
                uVar19 = *(uint *)(*(longlong *)
                                    ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + lVar17
                                    ) + ((ulonglong)(uVar19 & 0x1ff) * 3 +
                                        (ulonglong)(uVar19 >> 0x1e)) * 4);
                uVar6 = *(undefined8 *)
                         (*(longlong *)
                           ((param_1->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 0x10);
                local_260 = uVar6;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (&local_98,&local_2f8,(bool *)&local_260);
                if (local_347 == '\0') {
                  local_330[0] = (undefined4)uVar6;
                  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_330);
                }
                local_347 = '\0';
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (&local_98,&local_2f8,(bool *)((longlong)&local_260 + 4));
                if (local_347 == '\0') {
                  local_330[0] = (undefined4)((ulonglong)uVar6 >> 0x20);
                  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_330);
                }
              }
            }
            TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
          }
        }
        else {
          local_e8.Elements._0_8_ = 0;
          local_e8.Elements._8_8_ = 0;
          local_e8.Elements._32_8_ = 0;
          local_e8.Elements._40_4_ = 0;
          local_e8.Elements._44_4_ = 0x80;
          local_e8.Elements._48_4_ = 0xffffffff;
          local_e8.Elements._52_4_ = 0;
          local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_e8.HashSize = 0;
          pFVar14 = TSharedPtr<UE::Geometry::FGeometrySelection,1>::operator->(&this->GeoSelection);
          local_1f8._padding_._0_4_ = 0;
          local_1f8.CurrentBitIndex = 0;
          local_1f8.BaseBitIndex = 0;
          local_1f8._padding_._4_4_ = 1;
          pTVar1 = &pFVar14->Selection;
          local_1f8.UnvisitedBitMask = 0xffffffff;
          local_1f8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar14->Selection).Elements.field_0x10;
          if (*(int *)&(pFVar14->Selection).Elements.field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
          }
          TStack_2e8._padding_ = CONCAT44(local_1f8._padding_._4_4_,(undefined4)local_1f8._padding_)
          ;
          TStack_2e8.CurrentBitIndex = local_1f8.CurrentBitIndex;
          TStack_2e8.UnvisitedBitMask = local_1f8.UnvisitedBitMask;
          TStack_2e8._28_4_ = local_1f8._28_4_;
          TStack_2e8.BaseBitIndex = local_1f8.BaseBitIndex;
          TStack_2e8.Array = local_1f8.Array;
          uStack_2c8 = CONCAT44(uStack_2c8._4_4_,
                                *(int *)&(pFVar14->Selection).Elements.field_0x8 -
                                *(int *)&(pFVar14->Selection).Elements.field_0x34);
          TStack_2b8.Array = local_1f8.Array;
          local_298 = uStack_2c8;
          local_2f0 = pTVar1;
          local_2c0 = pTVar1;
          TStack_2b8._padding_ = TStack_2e8._padding_;
          TStack_2b8._16_8_ = TStack_2e8._16_8_;
          TStack_2b8._24_8_ = TStack_2e8._24_8_;
          pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_108,
                               (TBitArray<FDefaultBitArrayAllocator> *)
                               &(pFVar14->Selection).Elements.field_0x10,
                               *(int *)&(pFVar14->Selection).Elements.field_0x28);
          TStack_2e8._padding_ = pTVar15->_padding_;
          pTVar29 = pTVar15->Array;
          uVar6._0_4_ = pTVar15->UnvisitedBitMask;
          uVar6._4_4_ = pTVar15->CurrentBitIndex;
          TStack_2e8.BaseBitIndex = pTVar15->BaseBitIndex;
          TStack_2e8._28_4_ = *(undefined4 *)&pTVar15->field_0x1c;
          TStack_2e8.Array = pTVar29;
          TStack_2e8._16_8_ = uVar6;
          while( true ) {
            pTVar11 = local_2c0;
            if (*(int *)&(local_2c0->Elements).field_0x8 - *(int *)&(local_2c0->Elements).field_0x34
                != (int)local_298) {
              `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_335);
            }
            pTVar10 = local_328;
            if (((TStack_2b8.CurrentBitIndex == uVar6._4_4_) && (TStack_2b8.Array == pTVar29)) &&
               (pTVar11 == pTVar1)) break;
            local_2f4 = (undefined4)
                        ((ulonglong)
                         *(undefined8 *)
                          (*(longlong *)&pTVar11->Elements +
                          (longlong)TStack_2b8.CurrentBitIndex * 0x10) >> 0x20);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                      (&local_e8,&local_1d4,(bool *)&local_2f4);
            TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
          }
          uVar23 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
                   (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
          uVar21 = 0;
          if (((uVar23 != 0) &&
              (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
              uVar21 = 0, 0xfffd < (ushort)(**(short **)pFVar4 - 1U))) &&
             (uVar21 = 1, 1 < (int)uVar23)) {
            do {
              lVar8 = (ulonglong)((uint)uVar21 & 0x1ff) * 2;
              lVar17 = *(longlong *)(pFVar4 + (uVar21 >> 9) * 8);
              if ((*(short *)(lVar8 + lVar17) != 0) && (*(short *)(lVar8 + lVar17) != -1)) break;
              uVar24 = (uint)uVar21 + 1;
              uVar21 = (ulonglong)uVar24;
            } while ((int)uVar24 < (int)uVar23);
          }
          uVar24 = (uint)uVar21;
          FVar28 = local_e8.Hash.SecondaryData;
          while (uVar24 != uVar23) {
            uVar24 = (uint)uVar21;
            if ((param_1->TriangleGroups).bIsSet == false) {
              uVar25 = 0xffffffff;
            }
            else {
              uVar25 = uVar19;
              if ((-1 < (int)uVar24) &&
                 ((int)uVar24 <
                  (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
                lVar17 = (uVar21 >> 9) * 8;
                if ((ushort)(*(short *)(*(longlong *)
                                         ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + lVar17) +
                                       (ulonglong)(uVar24 & 0x1ff) * 2) - 1U) < 0xfffe) {
                  uVar25 = *(uint *)(*(longlong *)
                                      ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance
                                       .Data + lVar17) + (ulonglong)(uVar24 & 0x1ff) * 4);
                }
              }
            }
            if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
              FVar18 = (ForElementType<FSetElementId>)&local_e8.Hash;
              if (FVar28 != (ForElementType<FSetElementId>)0x0) {
                FVar18 = FVar28;
              }
              for (iVar22 = *(int *)((longlong)FVar18 +
                                    (ulonglong)(local_e8.HashSize - 1U & uVar25) * 4); iVar22 != -1;
                  iVar22 = *(int *)(local_e8.Elements._0_8_ + 4 + (longlong)iVar22 * 0xc)) {
                if (*(uint *)(local_e8.Elements._0_8_ + (longlong)iVar22 * 0xc) == uVar25) {
                  local_348 = '\0';
                  lVar17 = *(longlong *)
                            ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar21 >> 9) * 8)
                  ;
                  local_318 = *(undefined8 *)(lVar17 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
                  uVar3 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
                  local_310[0] = uVar3;
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&local_98,local_320,(bool *)&local_318);
                  if (local_348 == '\0') {
                    local_340[0] = (undefined4)local_318;
                    (**(code **)pTVar10)(*(undefined8 *)&pTVar10->field_0x8,local_340);
                  }
                  local_348 = '\0';
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&local_98,local_320,(bool *)((longlong)&local_318 + 4));
                  if (local_348 == '\0') {
                    local_340[0] = local_318._4_4_;
                    (**(code **)pTVar10)(*(undefined8 *)&pTVar10->field_0x8,local_340);
                  }
                  local_348 = '\0';
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&local_98,local_320,(bool *)local_310);
                  FVar28 = local_e8.Hash.SecondaryData;
                  if (local_348 == '\0') {
                    local_340[0] = uVar3;
                    (**(code **)pTVar10)(*(undefined8 *)&pTVar10->field_0x8,local_340);
                    FVar28 = local_e8.Hash.SecondaryData;
                  }
                  break;
                }
              }
            }
            uVar24 = uVar24 + 1;
            uVar21 = (ulonglong)uVar24;
            if ((int)uVar24 < (int)uVar23) {
              do {
                lVar8 = (ulonglong)((uint)uVar21 & 0x1ff) * 2;
                lVar17 = *(longlong *)
                          ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                          (uVar21 >> 9) * 8);
                if ((*(short *)(lVar8 + lVar17) != 0) && (*(short *)(lVar8 + lVar17) != -1)) break;
                uVar24 = (uint)uVar21 + 1;
                uVar21 = (ulonglong)uVar24;
              } while ((int)uVar24 < (int)uVar23);
              uVar24 = (uint)uVar21;
            }
          }
          local_e8.HashSize = 0;
          if (FVar28 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FVar28);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e8.Elements);
        }
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
  return;
}

// SetSelection @ 14cde4b90

void __thiscall
FGeometryScriptMeshSelection::SetSelection
          (FGeometryScriptMeshSelection *this,FGeometrySelection *param_1)

{
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *_Src;
  undefined1 *_Dst;
  FGeometrySelection *pFVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar7;
  
  if ((this->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (this->GeoSelection).Object;
  pFVar2->ElementType = param_1->ElementType;
  pTVar1 = &pFVar2->Selection;
  pTVar7 = &param_1->Selection;
  pFVar2->TopologyType = param_1->TopologyType;
  if (pTVar1 != pTVar7) {
    if (*(void **)&pTVar1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar1->Elements);
    }
    _Src = &(param_1->Selection).Elements.field_0x10;
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar7->Elements;
    _Dst = &(pFVar2->Selection).Elements.field_0x10;
    *(undefined8 *)&pTVar7->Elements = 0;
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0x8 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x8;
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0xc =
         *(undefined4 *)&(param_1->Selection).Elements.field_0xc;
    *(undefined8 *)&(param_1->Selection).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Selection).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(pFVar2->Selection).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(pFVar2->Selection).Elements.field_0x20 =
           *(undefined8 *)&(param_1->Selection).Elements.field_0x20;
      *(undefined8 *)&(param_1->Selection).Elements.field_0x20 = 0;
      *(undefined4 *)&(pFVar2->Selection).Elements.field_0x28 =
           *(undefined4 *)&(param_1->Selection).Elements.field_0x28;
      *(undefined4 *)&(pFVar2->Selection).Elements.field_0x2c =
           *(undefined4 *)&(param_1->Selection).Elements.field_0x2c;
      *(undefined8 *)&(param_1->Selection).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x30;
    *(undefined4 *)&(pFVar2->Selection).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Selection).Elements.field_0x34;
    *(undefined4 *)&(param_1->Selection).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Selection).Elements.field_0x34 = 0;
    if ((param_1->Selection).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(pFVar2->Selection).Hash.InlineData =
           *(undefined4 *)(param_1->Selection).Hash.InlineData;
    }
    FVar4 = (pFVar2->Selection).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (pFVar2->Selection).Hash.SecondaryData = (param_1->Selection).Hash.SecondaryData;
    (param_1->Selection).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar2->Selection).HashSize = (param_1->Selection).HashSize;
    (param_1->Selection).HashSize = 0;
  }
  return;
}

// SetSelection @ 14cde4ce0

void __thiscall
FGeometryScriptMeshSelection::SetSelection
          (FGeometryScriptMeshSelection *this,FGeometryScriptMeshSelection *param_1)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->GeoSelection).Object;
  if ((this->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Geometry::FGeometrySelection::operator=((this->GeoSelection).Object,pFVar1);
  return;
}

// SetSelection @ 14cde4d70

void __thiscall
FGeometryScriptMeshSelection::SetSelection
          (FGeometryScriptMeshSelection *this,FGeometrySelection *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GeoSelection).Object == (FGeometrySelection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Geometry::FGeometrySelection::operator=((this->GeoSelection).Object,param_1);
  return;
}

