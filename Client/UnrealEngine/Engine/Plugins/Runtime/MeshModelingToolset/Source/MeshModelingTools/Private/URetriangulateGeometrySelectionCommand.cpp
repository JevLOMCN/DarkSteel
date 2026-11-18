// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 11

// StaticClass @ 14cbd0700

UClass * __cdecl URetriangulateGeometrySelectionCommand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RetriangulateGeometrySelectionCommand",
               &Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesURetriangulateGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URetriangulateGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<URetriangulateGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton;
}

// URetriangulateGeometrySelectionCommand @ 14cbded00

URetriangulateGeometrySelectionCommand * __thiscall
URetriangulateGeometrySelectionCommand::URetriangulateGeometrySelectionCommand
          (URetriangulateGeometrySelectionCommand *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7URetriangulateGeometrySelectionCommand__6B_;
  return this;
}

// URetriangulateGeometrySelectionCommand @ 14cbded30

URetriangulateGeometrySelectionCommand * __thiscall
URetriangulateGeometrySelectionCommand::URetriangulateGeometrySelectionCommand
          (URetriangulateGeometrySelectionCommand *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7URetriangulateGeometrySelectionCommand__6B_;
  return this;
}

// ~URetriangulateGeometrySelectionCommand @ 14cbe07f0

void __thiscall
URetriangulateGeometrySelectionCommand::~URetriangulateGeometrySelectionCommand
          (URetriangulateGeometrySelectionCommand *this)

{
  *(undefined ***)this = &___7URetriangulateGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// operator() @ 14cbe1650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`URetriangulateGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FRefCountVector *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  FDynamicMeshChange *pFVar8;
  FDynamicMeshChange *this_00;
  code *pcVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar16;
  byte bVar17;
  char *pcVar18;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  *pTVar19;
  FFunctionStorage *pFVar20;
  longlong lVar21;
  undefined4 *puVar22;
  uint uVar23;
  int iVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  TDynamicMeshOverlay<float,2> *pTVar27;
  TDynamicMeshOverlay<float,2> *pTVar28;
  uint uVar29;
  uint uVar30;
  TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
  *pTVar31;
  ushort uVar32;
  int iVar33;
  uint *puVar34;
  undefined1 *puVar35;
  FDynamicMeshAttributeSet *pFVar36;
  FDynamicMesh3 *this_01;
  TDynamicMeshOverlay<float,2> *pTVar37;
  undefined1 auStackY_7c8 [32];
  undefined1 local_788;
  undefined1 local_787;
  undefined1 local_786;
  undefined1 local_785 [5];
  TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
  local_780;
  ForAnyElementType local_770;
  int local_768;
  int local_764;
  int local_760;
  uint uStack_75c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_758;
  uint local_750;
  uint uStack_74c;
  uint uStack_748;
  undefined4 uStack_744;
  uint local_740;
  uint local_73c;
  int local_738;
  TArray<int,TSizedDefaultAllocator<32>_> local_730;
  IndexIterator local_720;
  longlong *local_710;
  undefined8 uStack_708;
  TBitArray<FDefaultBitArrayAllocator> *local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  int iStack_6e8;
  undefined4 uStack_6e4;
  FDynamicMesh3 *local_6e0;
  FEdgeLoop local_6d8;
  code *local_698;
  longlong lStack_690;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  TStack_688;
  int iStack_678;
  undefined4 uStack_674;
  undefined8 local_670;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_668;
  int local_648;
  undefined8 *local_640;
  FDynamicMeshEditor local_638;
  void *local_630;
  FDynamicMeshChange *local_628;
  int local_620;
  int local_61c;
  int local_618;
  int local_614;
  code *local_610;
  undefined1 auStack_608 [20];
  uint uStack_5f4;
  int local_5f0;
  undefined4 uStack_5ec;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  *pTStack_5e8;
  longlong *local_5e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5d8;
  undefined8 uStack_5b8;
  code *local_5b0;
  undefined8 **local_5a8;
  FScriptContainerElement *local_598;
  int iStack_590;
  undefined4 uStack_58c;
  FSimpleHoleFiller local_588;
  IndexIterator local_518;
  TArrayView<int_const_,int> local_508;
  longlong *local_4f8;
  undefined8 uStack_4f0;
  TBitArray<FDefaultBitArrayAllocator> *local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_4c8;
  undefined1 local_478 [136];
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>_u_0 local_3f0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_3d8;
  undefined8 local_398;
  undefined4 local_390;
  ForAnyElementType local_388;
  undefined4 local_35c;
  undefined1 local_358 [32];
  undefined1 *local_338;
  uint local_330;
  undefined4 local_32c;
  undefined4 local_328;
  int local_324;
  ForElementType<FSetElementId> local_318;
  int local_310;
  undefined1 local_308 [32];
  uint *local_2e8;
  uint local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  int local_2d4;
  ForElementType<FSetElementId> local_2c8;
  int local_2c0;
  undefined1 local_2b8 [48];
  FFunctionStorage local_288;
  double local_268;
  FProgressCancel *local_260;
  FDynamicMeshChangeTracker local_258;
  FGroupTopology local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  local_640 = (undefined8 *)local_358;
  local_5a8 = &local_640;
  local_358._0_8_ = 0;
  local_358._8_8_ = 0;
  local_338 = (undefined1 *)0x0;
  local_330 = 0;
  local_32c = 0x80;
  local_328 = 0xffffffff;
  local_324 = 0;
  local_318 = (ForElementType<FSetElementId>)0x0;
  local_310 = 0;
  local_5b0 = UE::Core::Private::Function::
              TFunctionRefCaller<``URetriangulateGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_6e0 = param_1;
  local_630 = this;
  UE::Geometry::EnumerateSelectionTriangles
            ((FGeometrySelection *)**(undefined8 **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_5b0,(FPolygroupSet *)0x0);
  if (local_358._8_4_ == local_324) {
    pFVar1 = &param_1->TriangleRefCounts;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_720,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar33 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_518,pFVar1,iVar33,iVar33);
    uVar23 = local_720._8_4_;
joined_r0x00014cbe1786:
    local_720._8_4_ = uVar23;
    if (uVar23 != local_518._8_4_) {
      local_740 = uVar23;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_358,&local_620,
                 (bool *)&local_740);
      uVar23 = uVar23 + 1;
      if ((int)uVar23 < (int)local_720._12_4_) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_720._0_8_ + 8) + (ulonglong)(uVar23 >> 9) * 8) +
                         (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_720._0_8_ + 8) + (ulonglong)(uVar23 >> 9) * 8) +
                        (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) break;
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (int)local_720._12_4_);
      }
      goto joined_r0x00014cbe1786;
    }
  }
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_258,param_1);
  UE::Geometry::FGroupTopology::FGroupTopology(&local_1a8,param_1,true);
  pcVar18 = *(char **)((longlong)this + 8);
  if (*pcVar18 != '\0') {
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_258);
    pcVar18 = *(char **)((longlong)this + 8);
  }
  if (local_358._8_4_ - local_324 == (param_1->TriangleRefCounts).UsedCount) {
    if (*pcVar18 != '\0') {
      local_4c8.Elements._0_8_ = 0;
      local_4c8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_4c8.Elements._48_8_ = _UNK_150631d98;
      local_4c8.Elements._8_8_ = 0;
      local_4c8.Elements._32_8_ = 0;
      local_4c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_4c8.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&local_4c8,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_358);
      UE::Geometry::FDynamicMeshChangeTracker::
      SaveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (&local_258,&local_4c8,true);
    }
    local_670 = (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
                 *)0x0;
    local_698 = UE::Core::Private::Function::
                TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                ::Call;
    TStack_688._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2b8._32_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
         ::Call;
    TStack_688.Obj = UE::Geometry::ConstrainedDelaunayTriangulate<double>;
    local_2b8._16_8_ = &local_1a8;
    local_2b8._0_8_ = &___7FPolygroupRemesh_Geometry_UE__6B_;
    local_288.HeapAllocation = (FFunctionStorage *)0x0;
    local_2b8._8_8_ = param_1;
    UE::Core::Private::Function::
    TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
    ::CloneToEmptyStorage(&TStack_688,&local_288);
    local_268 = __real_3fb999999999999a;
    local_260 = (FProgressCancel *)0x0;
    if ((param_1 == (FDynamicMesh3 *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mesh != nullptr && Topology != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\PolygroupRemesh.h"
                            ,0x44,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_698 != (code *)0x0) {
      pTVar19 = &TStack_688;
      if (local_670 !=
          (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
           *)0x0) {
        pTVar19 = local_670;
      }
      (**(code **)(pTVar19->_padding_ + 0x10))();
    }
    UE::Geometry::FPolygroupRemesh::Compute((FPolygroupRemesh *)local_2b8);
    local_2b8._0_8_ = &___7FPolygroupRemesh_Geometry_UE__6B_;
    if ((code *)local_2b8._32_8_ != (code *)0x0) {
      pFVar20 = &local_288;
      if (local_288.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar20 = local_288.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar20->InlineAllocation + 0x10))();
    }
  }
  else {
    pFVar5 = (param_1->AttributeSet).Ptr;
    local_308._0_8_ = 0;
    pFVar36 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar36 = pFVar5;
    }
    local_308._8_8_ = 0;
    local_2e8 = (uint *)0x0;
    local_668.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10);
    local_2e0 = 0;
    local_2dc = 0x80;
    local_2d8 = 0xffffffff;
    local_2d4 = 0;
    local_2c8 = (ForElementType<FSetElementId>)0x0;
    local_2c0 = 0;
    local_668._padding_._0_4_ = 0;
    local_668._padding_._4_4_ = 1;
    local_668.UnvisitedBitMask = 0xffffffff;
    local_668.CurrentBitIndex = 0;
    local_668.BaseBitIndex = 0;
    if (local_330 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_668);
    }
    uVar29 = local_330;
    lStack_690 = CONCAT44(local_668._padding_._4_4_,(undefined4)local_668._padding_);
    local_698 = (code *)local_358;
    TStack_688._padding_ = (longlong)local_668.Array;
    local_670 = (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
                 *)CONCAT44(local_670._4_4_,local_358._8_4_ - local_324);
    TStack_688.Obj =
         (_func___cdecl_TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_TGeneralPolygon2<double>_ptr
          *)CONCAT44(local_668.CurrentBitIndex,local_668.UnvisitedBitMask);
    iStack_678 = local_668.BaseBitIndex;
    uStack_674 = local_668._28_4_;
    iVar33 = (int)local_330 >> 5;
    uVar23 = local_330 & 0xffffffe0;
    bVar17 = (byte)local_330;
    local_610 = local_698;
    auStack_608._0_8_ = lStack_690;
    auStack_608._8_8_ = local_668.Array;
    stack0xfffffffffffffa08 =
         (_func___cdecl_TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_TGeneralPolygon2<double>_ptr
          *)CONCAT44(local_668.CurrentBitIndex,local_668.UnvisitedBitMask);
    local_5f0 = local_668.BaseBitIndex;
    uStack_5ec = local_668._28_4_;
    pTStack_5e8 = local_670;
    if (((int)local_330 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar29 != local_330) {
      puVar35 = local_358 + 0x10;
      if (local_338 != (undefined1 *)0x0) {
        puVar35 = local_338;
      }
      uVar29 = -1 << (bVar17 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar33 * 4);
      while (uVar29 == 0) {
        lVar21 = (longlong)iVar33;
        uVar23 = uVar23 + 0x20;
        iVar33 = iVar33 + 1;
        uVar29 = local_330;
        if ((int)((local_330 - 1) + ((int)(local_330 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_14cbe1b73;
        uVar29 = *(uint *)(puVar35 + lVar21 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_61c = (int)lVar21;
      uVar29 = (int)lVar21 + -1 + uVar23;
      if ((int)local_330 < (int)uVar29) {
        uVar29 = local_330;
      }
    }
LAB_14cbe1b73:
    uVar23 = 0;
    while( true ) {
      pcVar9 = local_610;
      if (*(int *)(local_610 + 8) - *(int *)(local_610 + 0x34) != (int)pTStack_5e8) {
        local_788 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_788);
      }
      uVar3 = local_2e0;
      if (((uStack_5f4 == uVar29) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_608._8_8_ ==
           (TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10))) &&
         (pcVar9 == (code *)local_358)) break;
      uVar3 = *(uint *)(*(longlong *)pcVar9 + (longlong)(int)uStack_5f4 * 0xc);
      if (local_1a8.GroupLayer == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        if (((local_1a8.Mesh)->TriangleGroups).bIsSet == false) {
          local_73c = 0xffffffff;
        }
        else {
          if ((-1 < (int)uVar3) &&
             ((int)uVar3 <
              (int)(((local_1a8.Mesh)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   ((local_1a8.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     (((local_1a8.Mesh)->TriangleRefCounts).RefCounts.Blocks.
                                      AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
                                   (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
              local_73c = *(uint *)(*(longlong *)
                                     (((local_1a8.Mesh)->TriangleGroups).TypedValue.Blocks.
                                      AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
                                   (ulonglong)(uVar3 & 0x1ff) * 4);
              goto LAB_14cbe1c70;
            }
          }
          local_73c = 0;
        }
      }
      else {
        local_73c = *(uint *)(*(longlong *)
                               (*(longlong *)&(local_1a8.GroupLayer)->field_0x20 +
                               (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
      }
LAB_14cbe1c70:
      if ((int)local_73c < 0) {
        local_73c = uVar23;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_308,&local_618,
                 (bool *)&local_73c);
      stack0xfffffffffffffa08 =
           (_func___cdecl_TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_TGeneralPolygon2<double>_ptr
            *)CONCAT44(uStack_5f4,auStack_608._16_4_ & ~auStack_608._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_608);
    }
    uVar29 = 1;
    local_638.Mesh = param_1;
    uStack_6f8._4_4_ = uVar23;
    local_6f0._0_4_ = uVar23;
    if (local_2e0 != 0) {
      puVar34 = (uint *)(local_308 + 0x10);
      if (local_2e8 != (uint *)0x0) {
        puVar34 = local_2e8;
      }
      uVar26 = *puVar34;
      while (uVar26 == 0) {
        lVar21 = (longlong)(int)uVar23;
        local_6f0._0_4_ = (uint)local_6f0 + 0x20;
        uVar23 = uVar23 + 1;
        uStack_6f8._4_4_ = local_2e0;
        if ((int)((local_2e0 - 1) + ((int)(local_2e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
        goto LAB_14cbe1d43;
        uVar26 = puVar34[lVar21 + 1];
      }
      uVar29 = -uVar26 & uVar26;
      uVar2 = (ulonglong)uVar29 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uStack_6f8._4_4_ = ((uint)local_6f0 - 1) + (int)lVar21;
      local_614 = (int)lVar21;
      if ((int)local_2e0 < (int)uStack_6f8._4_4_) {
        uStack_6f8._4_4_ = local_2e0;
      }
    }
LAB_14cbe1d43:
    local_710 = (longlong *)local_308;
    uVar30 = local_2e0 & 0xffffffe0;
    iStack_6e8 = local_308._8_4_ - local_2d4;
    local_700 = (TBitArray<FDefaultBitArrayAllocator> *)(local_308 + 0x10);
    bVar17 = (byte)local_2e0 & 0x1f;
    uStack_75c = 1 << bVar17;
    iVar33 = (int)local_2e0 >> 5;
    uVar26 = -1 << bVar17;
    uStack_708 = CONCAT44(uVar29,uVar23);
    uStack_6f8._0_4_ = 0xffffffff;
    local_6f0._4_4_ = local_35c;
    pTStack_758 = (TBitArray<FDefaultBitArrayAllocator> *)(local_308 + 0x10);
    uStack_74c = local_2e0;
    local_5e0 = local_710;
    TStack_5d8._padding_ = uStack_708;
    TStack_5d8.Array = local_700;
    TStack_5d8.UnvisitedBitMask = 0xffffffff;
    TStack_5d8.CurrentBitIndex = uStack_6f8._4_4_;
    TStack_5d8.BaseBitIndex = (uint)local_6f0;
    TStack_5d8._28_4_ = local_35c;
    uStack_5b8 = CONCAT44(uStack_6e4,iStack_6e8);
    local_760 = iVar33;
    local_750 = uVar26;
    uStack_748 = uVar30;
    if (((int)local_2e0 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar3 != local_2e0) {
      puVar34 = (uint *)(local_308 + 0x10);
      if (local_2e8 != (uint *)0x0) {
        puVar34 = local_2e8;
      }
      uVar26 = uVar26 & puVar34[iVar33];
      while (uVar26 == 0) {
        uStack_748 = uVar30 + 0x20;
        local_760 = iVar33 + 1;
        if ((int)((local_2e0 - 1) + ((int)(local_2e0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_760) {
          uStack_74c = local_2e0;
          goto LAB_14cbe1eb5;
        }
        uVar26 = puVar34[(longlong)iVar33 + 1];
        local_750 = 0xffffffff;
        uVar30 = uStack_748;
        iVar33 = local_760;
      }
      uStack_75c = -uVar26 & uVar26;
      uVar2 = (ulonglong)uStack_75c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_648 = (int)lVar21;
      uStack_74c = local_648 + -1 + uVar30;
      if ((int)local_2e0 < (int)uStack_74c) {
        uStack_74c = local_2e0;
      }
    }
LAB_14cbe1eb5:
    uStack_708 = CONCAT44(uStack_75c,local_760);
    local_710 = (longlong *)local_308;
    uStack_6f8 = CONCAT44(uStack_74c,local_750);
    local_6f0 = CONCAT44(uStack_744,uStack_748);
    iStack_6e8 = local_308._8_4_ - local_2d4;
    local_700 = pTStack_758;
    uStack_4d0 = CONCAT44(uStack_6e4,iStack_6e8);
    local_4e8 = pTStack_758;
    local_4f8 = local_710;
    uStack_4f0 = uStack_708;
    uStack_4e0 = uStack_6f8;
    local_4d8 = local_6f0;
    while( true ) {
      plVar10 = local_5e0;
      if ((int)local_5e0[1] - *(int *)((longlong)local_5e0 + 0x34) != (int)uStack_5b8) {
        local_787 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_787);
      }
      if (((TStack_5d8.CurrentBitIndex == uStack_4e0._4_4_) && (TStack_5d8.Array == local_4e8)) &&
         (plVar10 == local_4f8)) break;
      iVar33 = *(int *)(*plVar10 + (longlong)TStack_5d8.CurrentBitIndex * 0xc);
      local_738 = iVar33;
      pTVar14 = UE::Geometry::FGroupTopology::GetGroupTriangles(&local_1a8,iVar33);
      local_770.Data = (FScriptContainerElement *)0x0;
      local_768 = pTVar14->ArrayNum;
      lVar21 = (longlong)local_768;
      pFVar6 = (pTVar14->AllocatorInstance).Data;
      if (local_768 == 0) {
        local_764 = 0;
        iVar24 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_768,0,&local_770,local_768,&local_764);
        memcpy(local_770.Data,pFVar6,lVar21 << 2);
        iVar24 = local_768;
      }
      pFVar6 = local_770.Data + (longlong)iVar24 * 4;
      FVar25.Data = local_770.Data;
      iVar13 = iVar24;
      while( true ) {
        if (iVar13 != iVar24) {
          local_786 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_786)
          ;
        }
        if (FVar25.Data == pFVar6) break;
        UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_258,*(int *)FVar25.Data,true);
        FVar25.Data = FVar25.Data + 4;
        iVar13 = local_768;
      }
      if (local_770.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_770.Data);
      }
      this_01 = local_6e0;
      UE::Geometry::FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops
                ((FMeshRegionBoundaryLoops *)local_478,local_6e0,pTVar14,true);
      if ((((bool)local_478[0x18] == false) && (local_478._16_4_ == 1)) && (1 < pTVar14->ArrayNum))
      {
        iVar24 = 0;
        local_780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_780.ArrayNum = 0;
        local_780.ArrayMax = 0;
        if ((pFVar36 != (FDynamicMeshAttributeSet *)0x0) &&
           (iVar13 = (**(code **)(pFVar36->_padding_ + 0xa8))(pFVar36), 0 < iVar13)) {
          lVar21 = 0;
          do {
            uVar23 = local_780.ArrayNum;
            if (local_780.ArrayNum == local_780.ArrayMax) {
              uVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&local_780.AllocatorInstance,&local_780.ArrayMax);
            }
            iVar33 = uVar23 + 1;
            lVar15 = (longlong)(int)uVar23;
            local_780.ArrayNum = iVar33;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x10) = 0;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x18) = 0;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x38) = 0;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x48) = 0;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50) = 0;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 8) = 0;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x20) = 0;
            *(undefined4 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x28) = 0;
            *(undefined4 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x2c) = 0x80;
            *(undefined4 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x30) = 0xffffffff;
            *(undefined4 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x34) = 0;
            *(undefined8 *)(local_780.AllocatorInstance.Data + lVar15 * 0x50 + 0x40) = 0;
            uVar29 = 0;
            if ((int)uVar23 < iVar33) {
              uVar29 = ~uVar23 >> 0x1f;
            }
            if (uVar29 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar33 = local_780.ArrayNum;
            }
            pTVar31 = (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                       *)(local_780.AllocatorInstance.Data + (longlong)(iVar33 + -1) * 0x50);
            pTVar27 = (TDynamicMeshOverlay<float,2> *)0x0;
            if ((iVar24 < (pFVar36->UVLayers).Array.ArrayNum) && (-1 < iVar24)) {
              if ((iVar24 < 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar27 = *(TDynamicMeshOverlay<float,2> **)
                         ((pFVar36->UVLayers).Array.AllocatorInstance.Data + lVar21);
            }
            if (((int)local_478._16_4_ < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            UE::Geometry::FMeshRegionBoundaryLoops::
            GetLoopOverlayMap<float,2,UE::Math::TVector2<float>_>
                      ((FMeshRegionBoundaryLoops *)local_478,(FEdgeLoop *)local_478._8_8_,pTVar27,
                       pTVar31);
            iVar24 = iVar24 + 1;
            lVar21 = lVar21 + 8;
            iVar13 = (**(code **)(pFVar36->_padding_ + 0xa8))(pFVar36);
            this_01 = local_6e0;
            iVar33 = local_738;
          } while (iVar24 < iVar13);
        }
        local_598 = (pTVar14->AllocatorInstance).Data;
        iVar24 = pTVar14->ArrayNum;
        local_730.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_730.ArrayNum = 0;
        local_730.ArrayMax = 0;
        if ((iVar24 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_508._12_4_ = uStack_58c;
        local_508.ArrayNum = iVar24;
        local_508.DataPtr = (int *)local_598;
        iStack_590 = iVar24;
        UE::Geometry::TriangleToVertexIDs(this_01,&local_508,&local_730);
        pTVar14 = UE::Geometry::FGroupTopology::GetGroupTriangles(&local_1a8,iVar33);
        UE::Geometry::FDynamicMeshEditor::RemoveTriangles(&local_638,pTVar14,false);
        pTVar27 = (TDynamicMeshOverlay<float,2> *)0x0;
        if (((int)local_478._16_4_ < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar21 = *(longlong *)(local_478._8_8_ + 8);
        iVar24 = *(int *)(local_478._8_8_ + 0x10) / 2;
        if (0 < iVar24) {
          puVar22 = (undefined4 *)(lVar21 + (longlong)(*(int *)(local_478._8_8_ + 0x10) + -1) * 4);
          pTVar28 = pTVar27;
          do {
            uVar4 = *(undefined4 *)(lVar21 + (longlong)pTVar28 * 4);
            *(undefined4 *)(lVar21 + (longlong)pTVar28 * 4) = *puVar22;
            pTVar28 = (TDynamicMeshOverlay<float,2> *)((longlong)&pTVar28->ParentMesh + 1);
            *puVar22 = uVar4;
            puVar22 = puVar22 + -1;
          } while ((longlong)pTVar28 < (longlong)iVar24);
        }
        lVar21 = *(longlong *)(local_478._8_8_ + 0x18);
        iVar24 = *(int *)(local_478._8_8_ + 0x20) / 2;
        if (0 < iVar24) {
          puVar22 = (undefined4 *)(lVar21 + (longlong)(*(int *)(local_478._8_8_ + 0x20) + -1) * 4);
          pTVar28 = pTVar27;
          do {
            uVar4 = *(undefined4 *)(lVar21 + (longlong)pTVar28 * 4);
            *(undefined4 *)(lVar21 + (longlong)pTVar28 * 4) = *puVar22;
            pTVar28 = (TDynamicMeshOverlay<float,2> *)((longlong)&pTVar28->ParentMesh + 1);
            *puVar22 = uVar4;
            puVar22 = puVar22 + -1;
          } while ((longlong)pTVar28 < (longlong)iVar24);
        }
        if (((int)local_478._16_4_ < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar11 = local_478._8_8_;
        local_6d8.Mesh = *(FDynamicMesh3 **)local_478._8_8_;
        local_6d8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6d8.Vertices.ArrayNum = *(int *)(local_478._8_8_ + 0x10);
        lVar21 = (longlong)local_6d8.Vertices.ArrayNum;
        pvVar7 = *(void **)(local_478._8_8_ + 8);
        if (local_6d8.Vertices.ArrayNum == 0) {
          local_6d8.Vertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_6d8.Vertices.ArrayNum,0,&local_6d8.Vertices.AllocatorInstance,
                     local_6d8.Vertices.ArrayNum,&local_6d8.Vertices.ArrayMax);
          memcpy(local_6d8.Vertices.AllocatorInstance.Data,pvVar7,lVar21 << 2);
        }
        local_6d8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6d8.Edges.ArrayNum = *(int *)(uVar11 + 0x20);
        lVar21 = (longlong)local_6d8.Edges.ArrayNum;
        pvVar7 = *(void **)(uVar11 + 0x18);
        if (local_6d8.Edges.ArrayNum == 0) {
          local_6d8.Edges.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_6d8.Edges.ArrayNum,0,&local_6d8.Edges.AllocatorInstance,
                     local_6d8.Edges.ArrayNum,&local_6d8.Edges.ArrayMax);
          memcpy(local_6d8.Edges.AllocatorInstance.Data,pvVar7,lVar21 << 2);
        }
        local_6d8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6d8.BowtieVertices.ArrayNum = *(int *)(uVar11 + 0x30);
        lVar21 = (longlong)local_6d8.BowtieVertices.ArrayNum;
        pvVar7 = *(void **)(uVar11 + 0x28);
        if (local_6d8.BowtieVertices.ArrayNum == 0) {
          local_6d8.BowtieVertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_6d8.BowtieVertices.ArrayNum,0,
                     &local_6d8.BowtieVertices.AllocatorInstance,local_6d8.BowtieVertices.ArrayNum,
                     &local_6d8.BowtieVertices.ArrayMax);
          memcpy(local_6d8.BowtieVertices.AllocatorInstance.Data,pvVar7,lVar21 << 2);
        }
        local_6d8.bBowtiesCalculated = *(bool *)(uVar11 + 0x38);
        local_588._padding_ = 0;
        local_588._padding_ = (longlong)&___7FSimpleHoleFiller_Geometry_UE__6B_;
        local_588._padding_ = 0;
        local_588.Mesh = this_01;
        UE::Geometry::FEdgeLoop::FEdgeLoop(&local_588.Loop,&local_6d8);
        local_588.FillType = TriangleFan;
        local_588.NewVertex = -1;
        if (local_6d8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.BowtieVertices.AllocatorInstance.Data);
        }
        if (local_6d8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Edges.AllocatorInstance.Data);
        }
        if (local_6d8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Vertices.AllocatorInstance.Data);
        }
        local_588.FillType = PolygonEarClipping;
        UE::Geometry::FSimpleHoleFiller::Fill(&local_588,iVar33);
        iVar33 = local_730.ArrayNum;
        pFVar6 = local_730.AllocatorInstance.Data + (longlong)local_730.ArrayNum * 4;
        FVar25.Data = local_730.AllocatorInstance.Data;
        while( true ) {
          if (local_730.ArrayNum != iVar33) {
            local_785[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_785);
          }
          if (FVar25.Data == pFVar6) break;
          uVar23 = *(uint *)FVar25.Data;
          if (((int)uVar23 < 0) ||
             ((int)((this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (this_01->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar23)) {
LAB_14cbe25eb:
            UE::Geometry::FDynamicMesh3::RemoveVertex(this_01,uVar23,false);
          }
          else {
            uVar32 = *(ushort *)
                      (*(longlong *)
                        ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 2);
            if (uVar32 == 0xffff) {
              uVar32 = 0;
            }
            if (uVar32 < 2) goto LAB_14cbe25eb;
          }
          FVar25.Data = FVar25.Data + 4;
        }
        if (pFVar36 != (FDynamicMeshAttributeSet *)0x0) {
          iVar33 = (**(code **)(pFVar36->_padding_ + 0xa8))(pFVar36);
          pTVar28 = pTVar27;
          pTVar37 = pTVar27;
          if (0 < iVar33) {
            do {
              uVar23 = (uint)pTVar28;
              pTVar28 = pTVar27;
              if (((int)uVar23 < (pFVar36->UVLayers).Array.ArrayNum) && (-1 < (int)uVar23)) {
                if (((int)uVar23 < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar28 = *(TDynamicMeshOverlay<float,2> **)
                           ((longlong)&pTVar37->ParentMesh +
                           (longlong)(pFVar36->UVLayers).Array.AllocatorInstance.Data);
              }
              uVar29 = 0;
              if ((int)uVar23 < local_780.ArrayNum) {
                uVar29 = ~uVar23 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              UE::Geometry::FMeshRegionBoundaryLoops::
              UpdateLoopOverlayMapValidity<float,2,UE::Math::TVector2<float>_>
                        ((FMeshRegionBoundaryLoops *)local_478,
                         (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                          *)(local_780.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x50),
                         pTVar28);
              iVar33 = (**(code **)(pFVar36->_padding_ + 0xa8))(pFVar36);
              pTVar28 = (TDynamicMeshOverlay<float,2> *)(ulonglong)(uVar23 + 1);
              pTVar37 = (TDynamicMeshOverlay<float,2> *)&pTVar37->ElementsRefCounts;
            } while ((int)(uVar23 + 1) < iVar33);
          }
          UE::Geometry::FSimpleHoleFiller::UpdateAttributes(&local_588,&local_780);
        }
        local_588._padding_ = (longlong)&___7FSimpleHoleFiller_Geometry_UE__6B_;
        if (local_588.Loop.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_588.Loop.BowtieVertices.AllocatorInstance.Data);
        }
        if (local_588.Loop.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Loop.Edges.AllocatorInstance.Data);
        }
        if (local_588.Loop.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Loop.Vertices.AllocatorInstance.Data);
        }
        if ((void *)local_588._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_588._padding_);
        }
        if (local_730.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_730.AllocatorInstance.Data);
        }
        DestructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int>
                  ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                    *)local_780.AllocatorInstance.Data,local_780.ArrayNum);
        if ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
             *)local_780.AllocatorInstance.Data !=
            (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
             *)0x0) {
          FMemory::Free(local_780.AllocatorInstance.Data);
        }
      }
      if (local_388.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data);
      }
      if (local_3d8._12_4_ != -1) {
        local_390 = 0;
        if ((ForElementType<FSetElementId>)local_398 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_398);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_3d8);
      }
      if ((local_3f0.TypedValue.ArrayMax != -1) &&
         (local_3f0.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_3f0.TypedValue.AllocatorInstance.Data);
      }
      if (local_478._68_4_ != -1) {
        local_478._128_4_ = 0;
        if ((ForElementType<FSetElementId>)local_478._120_8_ != (ForElementType<FSetElementId>)0x0)
        {
          FMemory::Free((void *)local_478._120_8_);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_478 + 0x38));
      }
      if ((local_478._44_4_ != -1) &&
         ((FScriptContainerElement *)local_478._32_8_ != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_478._32_8_);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_478._8_8_,local_478._16_4_);
      if ((FEdgeLoop *)local_478._8_8_ != (FEdgeLoop *)0x0) {
        FMemory::Free((void *)local_478._8_8_);
      }
      TStack_5d8.UnvisitedBitMask = TStack_5d8.UnvisitedBitMask & ~TStack_5d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5d8);
    }
    local_2c0 = 0;
    if (local_2c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_308);
    this = local_630;
  }
  if (**(char **)((longlong)this + 8) != '\0') {
    TVar16 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_258);
    pFVar8 = *(FDynamicMeshChange **)((longlong)this + 0x10);
    if (pFVar8 != TVar16.Ptr) {
      this_00 = (FDynamicMeshChange *)(pFVar8->OldVertices).AllocatorInstance.Data;
      (pFVar8->OldVertices).AllocatorInstance.Data =
           ((TVar16.Ptr)->OldVertices).AllocatorInstance.Data;
      ((TVar16.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (this_00 != (FDynamicMeshChange *)0x0) {
        UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
        ::operator_delete(this_00,0x48);
      }
    }
    if (local_628 != (FDynamicMeshChange *)0x0) {
      UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_628);
      ::operator_delete(local_628,0x48);
    }
  }
  UE::Geometry::FGroupTopology::~FGroupTopology(&local_1a8);
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_258);
  local_310 = 0;
  if (local_318 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_318);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_358);
  return;
}

// AllowEmptySelection @ 14cbe6710

bool __thiscall
URetriangulateGeometrySelectionCommand::AllowEmptySelection
          (URetriangulateGeometrySelectionCommand *this)

{
  return true;
}

// CanExecuteCommandForSelection @ 14cbe85a0

bool __thiscall
URetriangulateGeometrySelectionCommand::CanExecuteCommandForSelection
          (URetriangulateGeometrySelectionCommand *this,
          UGeometrySelectionEditCommandArguments *param_1)

{
  FGeometrySelection *pFVar1;
  
  if (((((param_1->SelectionHandle).Identifier.TargetType == MeshContainer) ||
       ((param_1->SelectionHandle).Identifier.ObjectType == DynamicMesh)) &&
      (pFVar1 = (param_1->SelectionHandle).Selection, pFVar1->ElementType == Face)) &&
     (pFVar1->TopologyType == Polygroup)) {
    return true;
  }
  return false;
}

// ExecuteCommandForSelection @ 14cbebda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URetriangulateGeometrySelectionCommand::ExecuteCommandForSelection
          (URetriangulateGeometrySelectionCommand *this,
          UGeometrySelectionEditCommandArguments *param_1,UInteractiveCommandResult **param_2)

{
  int iVar1;
  IGeometrySelector *pIVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  EObjectType EVar5;
  FDynamicMeshChange *pFVar6;
  bool bVar7;
  UDynamicMesh *this_00;
  UClass *pUVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UObject *pUVar12;
  UGeometrySelectionEditCommandResult *pUVar13;
  char local_res10 [16];
  FDynamicMeshChange *local_res20;
  FGeometrySelection *local_88;
  FDynamicMeshChange *local_80;
  code *local_78;
  FGeometrySelection ***local_70;
  longlong *local_68 [2];
  undefined1 local_58 [16];
  FGeometrySelection **local_48;
  char *local_40;
  FDynamicMeshChange **local_38;
  
  pIVar2 = (param_1->SelectionHandle).Selector;
  if (pIVar2 == (IGeometrySelector *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4913981656559255595>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\RetriangulateGeometrySelectionCommand.cpp"
                       ,0x2b,"BaseSelector != nullptr");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((byte)LogGeometry._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    return;
  }
  if (param_2 != (UInteractiveCommandResult **)0x0) {
    *param_2 = (UInteractiveCommandResult *)0x0;
  }
  if ((((param_1->SelectionHandle).Identifier.TargetType != MeshContainer) &&
      ((param_1->SelectionHandle).Identifier.ObjectType != DynamicMesh)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectionArgs->IsMatchingType(FGeometryIdentifier::ETargetType::MeshContainer, FGeometryIdentifier::EObjectType::DynamicMesh)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\RetriangulateGeometrySelectionCommand.cpp"
                         ,0x37,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (UDynamicMesh *)
            FWeakObjectPtr::Get(&(param_1->SelectionHandle).Identifier.TargetObject.WeakPtr);
  if (this_00 != (UDynamicMesh *)0x0) {
    pUVar8 = Z_Construct_UClass_UDynamicMesh_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_14cbebebd;
  }
  this_00 = (UDynamicMesh *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("MeshObject != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\RetriangulateGeometrySelectionCommand.cpp"
                     ,0x40,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14cbebebd:
  local_88 = (param_1->SelectionHandle).Selection;
  local_res10[0] = (**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  local_res20 = (FDynamicMeshChange *)0x0;
  local_48 = &local_88;
  local_40 = local_res10;
  local_38 = &local_res20;
  local_70 = &local_48;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`URetriangulateGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_78,
             GeneralEdit,Unknown,false);
  if ((local_res10[0] != '\0') && (local_res20 != (FDynamicMeshChange *)0x0)) {
    plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
    pcVar3 = *(code **)(*plVar9 + 0x18);
    uVar10 = (**(code **)(*(longlong *)this + 0x2b0))(this,local_68);
    (*pcVar3)(plVar9,uVar10);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    pcVar3 = *(code **)(pIVar2->_padding_ + 0xd8);
    uVar10 = (**(code **)(*(longlong *)this + 0x2b0))(this,local_58);
    local_80 = local_res20;
    local_res20 = (FDynamicMeshChange *)0x0;
    uVar11 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
    (*pcVar3)(pIVar2,uVar11,1,&local_80,uVar10);
    plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (param_2 != (UInteractiveCommandResult **)0x0) {
    pUVar12 = GetTransientPackageAsObject();
    pUVar13 = NewObject<UGeometrySelectionEditCommandResult>(pUVar12);
    EVar5 = (param_1->SelectionHandle).Identifier.ObjectType;
    FVar4 = (param_1->SelectionHandle).Identifier.TargetObject.WeakPtr;
    (pUVar13->SourceHandle).Identifier.TargetType = (param_1->SelectionHandle).Identifier.TargetType
    ;
    (pUVar13->SourceHandle).Identifier.ObjectType = EVar5;
    (pUVar13->SourceHandle).Identifier.TargetObject.WeakPtr = FVar4;
    pIVar2 = (param_1->SelectionHandle).Selector;
    (pUVar13->SourceHandle).Selection = (param_1->SelectionHandle).Selection;
    (pUVar13->SourceHandle).Selector = pIVar2;
    *param_2 = (UInteractiveCommandResult *)pUVar13;
  }
  pFVar6 = local_res20;
  if (local_res20 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_res20);
    ::operator_delete(pFVar6,0x48);
  }
  return;
}

// GetCommandShortString @ 14cbee350

FText * __thiscall
URetriangulateGeometrySelectionCommand::GetCommandShortString
          (URetriangulateGeometrySelectionCommand *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"URetriangulateGeometrySelectionCommand",L"ShortString",
             L"Retriangulate Selection");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cbf10a0

UClass * __cdecl URetriangulateGeometrySelectionCommand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RetriangulateGeometrySelectionCommand",
               &Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesURetriangulateGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URetriangulateGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<URetriangulateGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.InnerSingleton;
}

// StaticRegisterNativesURetriangulateGeometrySelectionCommand @ 14cbf6d80

void __cdecl
URetriangulateGeometrySelectionCommand::StaticRegisterNativesURetriangulateGeometrySelectionCommand
          (void)

{
  return;
}

