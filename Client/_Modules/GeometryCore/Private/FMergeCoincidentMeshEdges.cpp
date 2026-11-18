// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// operator() @ 14356e1f0

double __thiscall
`UE::Geometry::FMergeCoincidentMeshEdges::Apply'::__l16::<lambda_1>::operator()
          (void *this,int *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = *param_1;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      dVar10 = (double)(*pcVar6)();
      return dVar10;
    }
  }
  uVar1 = *(uint *)(*plVar2 + (longlong)(int)uVar1 * 4);
  lVar9 = (longlong)(int)uVar1;
  uVar8 = 0;
  if ((int)uVar1 < (int)plVar3[1]) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      dVar10 = (double)(*pcVar6)();
      return dVar10;
    }
  }
  pdVar4 = *(double **)this;
  lVar5 = *plVar3;
  dVar10 = *(double *)(lVar5 + 8 + lVar9 * 0x18) - pdVar4[1];
  dVar12 = *(double *)(lVar5 + lVar9 * 0x18) - *pdVar4;
  dVar11 = *(double *)(lVar5 + 0x10 + lVar9 * 0x18) - pdVar4[2];
  return dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
}

// Apply @ 143575b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Geometry::FMergeCoincidentMeshEdges::Apply(FMergeCoincidentMeshEdges *this)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  FDynamicMesh3 *pFVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  ulonglong *puVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  ForAnyElementType _Src;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  undefined1 uVar18;
  char cVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  ForAnyElementType *pFVar25;
  int *piVar26;
  undefined8 uVar27;
  byte bVar28;
  int iVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  ForElementType<FSetElementId> FVar33;
  ForElementType<FSetElementId> FVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined8 *puVar39;
  int iVar40;
  int iVar41;
  uint *puVar42;
  ulonglong uVar43;
  uint uVar44;
  int iVar45;
  undefined8 *puVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStackY_808 [32];
  uint local_7b8 [2];
  ForAnyElementType local_7b0;
  int local_7a8;
  int local_7a4;
  char local_7a0;
  uint local_79c;
  undefined1 local_798 [8];
  ForAnyElementType local_790;
  int local_788;
  int iStack_784;
  TArray<int,TSizedDefaultAllocator<32>_> local_780;
  uint local_770 [2];
  ForAnyElementType local_768;
  undefined8 local_760;
  undefined1 local_758 [8];
  double local_750;
  undefined8 local_748;
  TArray<int,TSizedDefaultAllocator<32>_> local_740;
  FIndexPriorityQueue local_730;
  int local_6f8 [2];
  int local_6f0 [2];
  int local_6e8;
  int local_6e4;
  int local_6e0 [2];
  uint local_6d8;
  uint uStack_6d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6d0;
  undefined4 local_6c8;
  int iStack_6c4;
  uint uStack_6c0;
  undefined4 uStack_6bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6b8;
  undefined8 uStack_698;
  int local_690;
  undefined4 uStack_68c;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_688;
  ulonglong *local_678;
  ForAnyElementType *local_670;
  FMergeCoincidentMeshEdges *local_668;
  longlong local_660;
  FRefCountVector *local_658;
  int local_650;
  int local_64c;
  FRefCountVector *local_648;
  int local_640;
  int local_63c;
  longlong *local_638;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_630;
  undefined8 uStack_610;
  TVector<double>_u_0 local_608;
  double local_5f0;
  double dStack_5e8;
  double local_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  code *local_5c0;
  undefined1 *local_5b8;
  code *local_5b0;
  TVector<double>_u_0 **local_5a8;
  FVector3i *local_5a0;
  uint *local_598;
  TVector<double>_u_0 *local_590;
  ForAnyElementType *local_588;
  TArray<int,TSizedDefaultAllocator<32>_> *local_580;
  FVector3i local_578;
  TVector<double>_u_0 local_568;
  double local_550;
  double local_548;
  double local_540;
  IndexIterator local_538;
  longlong local_520;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_518;
  uint local_510;
  int iStack_50c;
  ulonglong uStack_508;
  IndexIterator local_4f8;
  IndexIterator local_4e8;
  IndexIterator local_4d8;
  TVector<double> local_4c8;
  undefined1 local_4a8 [32];
  uint *local_488;
  int local_480;
  undefined4 local_47c;
  undefined4 local_478;
  int local_474;
  undefined1 local_470 [8];
  ForElementType<FSetElementId> local_468;
  int local_460;
  undefined1 local_458 [48];
  longlong local_428 [3];
  longlong *local_410;
  undefined1 local_408 [48];
  longlong local_3d8 [3];
  longlong *local_3c0;
  undefined1 local_3b8 [8];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  void *local_380;
  undefined4 local_378;
  undefined4 local_374;
  void *local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined8 local_350;
  undefined1 local_348 [48];
  IndexEnumerable local_318;
  undefined1 local_308 [48];
  IndexEnumerable local_2d8;
  undefined1 local_2c8 [48];
  IndexEnumerable local_298;
  undefined1 local_288 [80];
  undefined1 local_238 [80];
  undefined1 local_1e8 [80];
  undefined1 local_198 [80];
  undefined1 local_148 [72];
  int local_100;
  TWrapAroundGridIndexer3<double> local_f0 [3];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_808;
  dVar2 = this->MergeVertexTolerance;
  dVar52 = this->MergeSearchTolerance;
  this->MergeVtxDistSqr = dVar2 * dVar2;
  if (dVar52 <= 0.0) {
    dVar52 = dVar2 + dVar2;
  }
  puVar31 = (undefined8 *)0x0;
  local_768.Data = (FScriptContainerElement *)0x0;
  local_760 = 0;
  local_740.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_740.ArrayNum = 0;
  local_740.ArrayMax = 0;
  local_6f8[0] = -1;
  local_668 = this;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_740,local_6f8,
             (this->Mesh->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->EdgeRefCounts).RefCounts.CurBlockUsed);
  FDynamicMesh3::BoundaryEdgeIndicesItr(this->Mesh,(FilteredEnumerable *)local_348);
  FRefCountVector::FilteredEnumerable::begin
            ((FilteredEnumerable *)local_348,
             (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_288);
  iVar41 = ((local_318.Vector)->RefCounts).CurBlockUsed +
           ((local_318.Vector)->RefCounts).CurBlock * 0x200;
  FRefCountVector::IndexIterator::IndexIterator(&local_4f8,local_318.Vector,iVar41,iVar41);
  iVar41 = ((local_318.Vector)->RefCounts).CurBlockUsed +
           ((local_318.Vector)->RefCounts).CurBlock * 0x200;
  FRefCountVector::IndexIterator::IndexIterator(&local_4e8,local_318.Vector,iVar41,iVar41);
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
            ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_238,
             &local_4e8,&local_4f8,(TFunction<bool___cdecl(int)> *)local_348);
  dVar2 = __real_3fe0000000000000;
  uVar44 = 0;
  if ((int)local_288._8_8_ != local_238._8_4_) {
    do {
      uVar35 = (uint)local_288._8_8_;
      pFVar21 = (FScriptContainerElement *)
                FDynamicMesh3::GetEdgePoint(this->Mesh,&local_4c8,uVar35,dVar2);
      if (((local_768.Data <= pFVar21) &&
          (pFVar21 < local_768.Data + (longlong)local_760._4_4_ * 0x18)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
      iVar41 = (int)local_760;
      if ((int)local_760 == local_760._4_4_) {
        iVar41 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_768,(int *)((longlong)&local_760 + 4));
      }
      local_760 = CONCAT44(local_760._4_4_,iVar41 + 1);
      uVar10 = *(undefined8 *)(pFVar21 + 8);
      *(undefined8 *)(local_768.Data + (longlong)iVar41 * 0x18) = *(undefined8 *)pFVar21;
      *(undefined8 *)(local_768.Data + (longlong)iVar41 * 0x18 + 8) = uVar10;
      *(undefined8 *)(local_768.Data + (longlong)iVar41 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar21 + 0x10);
      uVar20 = uVar44;
      if ((int)uVar35 < local_740.ArrayNum) {
        uVar20 = ~uVar35 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
      *(int *)(local_740.AllocatorInstance.Data + (longlong)(int)uVar35 * 4) = iVar41;
      FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::GotoNextElement
                ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_288);
    } while ((int)local_288._8_8_ != local_238._8_4_);
  }
  if (local_238._32_8_ != 0) {
    plVar32 = (longlong *)(local_238 + 0x30);
    if ((longlong *)local_238._72_8_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_238._72_8_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if (local_288._32_8_ != 0) {
    plVar32 = (longlong *)(local_288 + 0x30);
    if ((longlong *)local_288._72_8_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_288._72_8_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if (local_348._0_8_ != 0) {
    plVar32 = (longlong *)(local_348 + 0x10);
    if ((longlong *)local_348._40_8_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_348._40_8_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  this->InitialNumBoundaryEdges = (int)local_760;
  iVar41 = 0x80;
  if ((int)local_760 < 0x3e9) {
    iVar41 = 0x40;
  }
  if (10000 < (int)local_760) {
    iVar41 = 0x100;
  }
  if (100000 < (int)local_760) {
    iVar41 = 0x200;
  }
  FDynamicMesh3::GetBounds(this->Mesh,(TAxisAlignedBox3<double> *)&local_568._s_0,true);
  local_540 = local_540 - local_568._s_0.Z;
  local_548 = local_548 - local_568._s_0.Y;
  local_550 = local_550 - local_568._s_0.X;
  if (local_540 <= 0.0) {
    local_540 = 0.0;
  }
  if (local_548 <= 0.0) {
    local_548 = 0.0;
  }
  if (local_550 <= 0.0) {
    local_550 = 0.0;
  }
  if (local_548 <= local_540) {
    local_548 = local_540;
  }
  if (local_548 <= local_550) {
    local_548 = local_550;
  }
  dVar2 = local_548 / (double)iVar41;
  if (local_548 / (double)iVar41 <= __real_3e45798ee2308c3a) {
    dVar2 = __real_3e45798ee2308c3a;
  }
  TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
            ((TPointHashGrid3<int,double> *)local_148,dVar2,-1);
  if (dVar52 <= dVar2) {
    dVar2 = dVar52;
  }
  local_790.Data = (FScriptContainerElement *)0x0;
  local_788 = 0;
  iStack_784 = 0;
  local_780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_780.ArrayNum = 0;
  local_780.ArrayMax = 0;
  local_750 = dVar2;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x400,&local_780.AllocatorInstance,0,&local_780.ArrayMax);
  local_7b0.Data = (FScriptContainerElement *)0x0;
  local_7a4 = 0;
  uVar35 = (this->Mesh->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (this->Mesh->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar37 = (ulonglong)uVar35;
  local_748 = 0;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  local_7a8 = 0;
  if ((uVar35 != 0) &&
     (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar35,&local_7b0,0,&local_7a4), 0 < (int)uVar35)) {
    do {
      if ((local_7b0.Data <= (FScriptContainerElement *)&local_748) &&
         (((FScriptContainerElement *)&local_748 < local_7b0.Data + (longlong)local_7a4 * 8 &&
          (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar17)))) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
      if (local_7a8 == local_7a4) {
        local_7a8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_7b0,&local_7a4);
      }
      iVar41 = local_7a8 + 1;
      *(undefined8 *)(local_7b0.Data + (longlong)local_7a8 * 8) = local_748;
      uVar37 = uVar37 - 1;
      local_7a8 = iVar41;
    } while (uVar37 != 0);
  }
  local_4a8._0_8_ = 0;
  local_4a8._8_8_ = 0;
  local_488 = (uint *)0x0;
  local_480 = 0;
  local_47c = 0x80;
  local_478 = 0xffffffff;
  local_474 = 0;
  local_468 = (ForElementType<FSetElementId>)0x0;
  local_460 = 0;
  FDynamicMesh3::BoundaryEdgeIndicesItr(this->Mesh,(FilteredEnumerable *)local_308);
  FRefCountVector::FilteredEnumerable::begin
            ((FilteredEnumerable *)local_308,
             (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_458);
  iVar41 = ((local_2d8.Vector)->RefCounts).CurBlock * 0x200 +
           ((local_2d8.Vector)->RefCounts).CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_4d8,local_2d8.Vector,iVar41,iVar41);
  iVar41 = ((local_2d8.Vector)->RefCounts).CurBlock * 0x200 +
           ((local_2d8.Vector)->RefCounts).CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_538,local_2d8.Vector,iVar41,iVar41);
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
  FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
            ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_1e8,
             &local_538,&local_4d8,(TFunction<bool___cdecl(int)> *)local_308);
  uVar35 = 0;
  if ((int)local_458._8_8_ != local_1e8._8_4_) {
    do {
      uVar36 = (uint)local_458._8_8_;
      uVar20 = uVar44;
      if ((int)uVar36 < local_740.ArrayNum) {
        uVar20 = ~uVar36 >> 0x1f;
      }
      local_79c = uVar36;
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
      uVar20 = *(uint *)(local_740.AllocatorInstance.Data + (longlong)(int)uVar36 * 4);
      uVar36 = uVar44;
      if ((int)uVar20 < (int)local_760) {
        uVar36 = ~uVar20 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
      uVar10 = local_780._8_8_;
      local_608._s_0.X = (double)*(undefined8 *)(local_768.Data + (longlong)(int)uVar20 * 0x18);
      local_608._s_0.Y = (double)*(undefined8 *)(local_768.Data + (longlong)(int)uVar20 * 0x18 + 8);
      local_608._s_0.Z =
           (double)*(undefined8 *)(local_768.Data + (longlong)(int)uVar20 * 0x18 + 0x10);
      iVar41 = local_780.ArrayMax;
      local_780._8_8_ = (ulonglong)(uint)local_780.ArrayMax << 0x20;
      if (((longlong)uVar10 < 0) && (iVar41 != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_780.AllocatorInstance,0,&local_780.ArrayMax);
      }
      local_5b8 = local_758;
      local_5c0 = Core::Private::Function::
                  TFunctionRefCaller<UE::Geometry::<lambda_24_>,bool,int_const_&>::Call;
      local_590 = &local_608;
      local_5b0 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMergeCoincidentMeshEdges::Apply'::__l16::<lambda_1>,double,int_const_&>
                  ::Call;
      local_588 = &local_768;
      local_580 = &local_740;
      local_5a8 = &local_590;
      TPointHashGrid3<int,double>::FindPointsInBall
                ((TPointHashGrid3<int,double> *)local_148,(TVector<double> *)&local_608._s_0,dVar2,
                 (TFunctionRef<double___cdecl(int_const_&)> *)&local_5b0,&local_780,
                 (TFunctionRef<bool___cdecl(int_const_&)> *)&local_5c0);
      TWrapAroundGridIndexer3<double>::ToGrid
                (local_f0,&local_578,(TVector<double> *)&local_608._s_0);
      local_5a0 = &local_578;
      local_598 = &local_79c;
      TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                  *)local_148,&local_688,(bool *)&local_5a0);
      iVar41 = local_780.ArrayNum;
      uVar37 = (ulonglong)local_780.ArrayNum;
      if (local_780.ArrayNum != 0) {
        pFVar21 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
        uVar43 = *(ulonglong *)
                  (*(longlong *)
                    ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_79c >> 9) * 8) + (ulonglong)(local_79c & 0x1ff) * 0x10);
        uVar22 = (ulonglong)((uint)uVar43 & 0x1ff);
        lVar30 = *(longlong *)(pFVar21 + ((uVar43 & 0xffffffff) >> 9) * 8);
        pdVar1 = (double *)(lVar30 + uVar22 * 0x18);
        local_5d8 = *pdVar1;
        dStack_5d0 = pdVar1[1];
        local_5c8 = *(double *)(lVar30 + 0x10 + uVar22 * 0x18);
        uVar22 = (ulonglong)((uint)(uVar43 >> 0x20) & 0x1ff);
        lVar30 = *(longlong *)(pFVar21 + (uVar43 >> 0x29) * 8);
        pdVar1 = (double *)(lVar30 + uVar22 * 0x18);
        local_5f0 = *pdVar1;
        dStack_5e8 = pdVar1[1];
        local_5e0 = *(double *)(lVar30 + 0x10 + uVar22 * 0x18);
        local_788 = 0;
        uVar43 = uVar37;
        if (iStack_784 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_790,0,&iStack_784);
          uVar43 = local_780._8_8_ & 0xffffffff;
        }
        dVar16 = local_5c8;
        dVar15 = dStack_5d0;
        dVar14 = local_5d8;
        dVar13 = local_5e0;
        dVar12 = dStack_5e8;
        dVar52 = local_5f0;
        puVar39 = puVar31;
        puVar46 = puVar31;
        if (0 < iVar41) {
          do {
            uVar36 = (uint)puVar39;
            uVar20 = uVar44;
            if ((int)uVar36 < (int)uVar43) {
              uVar20 = ~uVar36 >> 0x1f;
            }
            if (uVar20 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar8 = (code *)swi(3);
                uVar18 = (*pcVar8)();
                return (bool)uVar18;
              }
              uVar43 = local_780._8_8_ & 0xffffffff;
            }
            pFVar5 = this->Mesh;
            local_770[0] = *(uint *)(local_780.AllocatorInstance.Data + (longlong)puVar46 * 4);
            uVar20 = uVar35;
            if ((int)uVar36 < (int)uVar43) {
              uVar20 = ~uVar36 >> 0x1f;
            }
            if (uVar20 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar8 = (code *)swi(3);
                uVar18 = (*pcVar8)();
                return (bool)uVar18;
              }
              uVar43 = local_780._8_8_ & 0xffffffff;
            }
            pFVar21 = (pFVar5->Vertices).Blocks.AllocatorInstance.Data;
            dVar2 = this->MergeVtxDistSqr;
            uVar22 = *(ulonglong *)
                      (*(longlong *)
                        ((pFVar5->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)
                        (*(uint *)(local_780.AllocatorInstance.Data + (longlong)puVar46 * 4) >> 9) *
                        8) + (ulonglong)
                             (*(uint *)(local_780.AllocatorInstance.Data + (longlong)puVar46 * 4) &
                             0x1ff) * 0x10);
            uVar23 = (ulonglong)((uint)uVar22 & 0x1ff);
            lVar30 = *(longlong *)(pFVar21 + ((uVar22 & 0xffffffff) >> 9) * 8);
            auVar4 = *(undefined1 (*) [16])(lVar30 + uVar23 * 0x18);
            dVar3 = *(double *)(lVar30 + 0x10 + uVar23 * 0x18);
            uVar23 = (ulonglong)((uint)(uVar22 >> 0x20) & 0x1ff);
            dVar50 = auVar4._8_8_;
            dVar9 = auVar4._0_8_;
            dVar53 = dVar9 - dVar14;
            dVar48 = dVar50 - dVar15;
            lVar30 = *(longlong *)(pFVar21 + (uVar22 >> 0x29) * 8);
            dVar47 = dVar3 - dVar16;
            auVar4 = *(undefined1 (*) [16])(lVar30 + uVar23 * 0x18);
            dVar51 = auVar4._0_8_;
            pTStack_518 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0x10 + uVar23 * 0x18);
            dVar49 = auVar4._8_8_;
            if (((dVar48 * dVar48 + dVar53 * dVar53 + dVar47 * dVar47 < dVar2) &&
                (dVar48 = dVar49 - dVar12, dVar53 = dVar51 - dVar52,
                dVar47 = (double)pTStack_518 - dVar13,
                dVar48 * dVar48 + dVar53 * dVar53 + dVar47 * dVar47 < dVar2)) ||
               ((dVar49 = dVar49 - dVar15, dVar51 = dVar51 - dVar14,
                dVar53 = (double)pTStack_518 - dVar16,
                dVar49 * dVar49 + dVar51 * dVar51 + dVar53 * dVar53 < dVar2 &&
                (dVar50 = dVar50 - dVar12, dVar9 = dVar9 - dVar52, dVar3 = dVar3 - dVar13,
                dVar50 * dVar50 + dVar9 * dVar9 + dVar3 * dVar3 < dVar2)))) {
              uVar20 = uVar35;
              if ((int)uVar36 < (int)uVar43) {
                uVar20 = ~uVar36 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar8 = (code *)swi(3);
                uVar18 = (*pcVar8)();
                return (bool)uVar18;
              }
              pFVar21 = local_780.AllocatorInstance.Data + (longlong)puVar46 * 4;
              if (((local_790.Data <= pFVar21) &&
                  (pFVar21 < local_790.Data + (longlong)iStack_784 * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar8 = (code *)swi(3);
                uVar18 = (*pcVar8)();
                return (bool)uVar18;
              }
              if (local_788 == iStack_784) {
                local_788 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_790,&iStack_784);
              }
              lVar30 = (longlong)local_788;
              local_788 = local_788 + 1;
              lVar38 = (longlong)(int)local_770[0];
              *(undefined4 *)(local_790.Data + lVar30 * 4) = *(undefined4 *)pFVar21;
              uVar20 = uVar35;
              if ((int)local_770[0] < local_7a8) {
                uVar20 = ~local_770[0] >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar8 = (code *)swi(3);
                uVar18 = (*pcVar8)();
                return (bool)uVar18;
              }
              if (*(longlong *)(local_7b0.Data + lVar38 * 8) == 0) {
                puVar24 = ::operator_new(0x10);
                puVar39 = puVar31;
                if (puVar24 != (undefined8 *)0x0) {
                  *puVar24 = 0;
                  puVar24[1] = 0;
                  puVar39 = puVar24;
                }
                lVar30 = (longlong)(int)local_770[0];
                uVar20 = uVar35;
                if ((int)local_770[0] < local_7a8) {
                  uVar20 = ~local_770[0] >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar8 = (code *)swi(3);
                  uVar18 = (*pcVar8)();
                  return (bool)uVar18;
                }
                *(undefined8 **)(local_7b0.Data + lVar30 * 8) = puVar39;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_4a8,
                           (int *)((longlong)&local_688.Key + 4),(bool *)local_770);
              }
              lVar30 = (longlong)(int)local_770[0];
              uVar20 = 0;
              if ((int)local_770[0] < local_7a8) {
                uVar20 = ~local_770[0] >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar8 = (code *)swi(3);
                uVar18 = (*pcVar8)();
                return (bool)uVar18;
              }
              pFVar25 = *(ForAnyElementType **)(local_7b0.Data + lVar30 * 8);
              if (((pFVar25->Data <= (FScriptContainerElement *)&local_79c) &&
                  ((FScriptContainerElement *)&local_79c <
                   pFVar25->Data + (longlong)*(int *)((longlong)&pFVar25[1].Data + 4) * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar8 = (code *)swi(3);
                uVar18 = (*pcVar8)();
                return (bool)uVar18;
              }
              iVar41 = *(int *)&pFVar25[1].Data;
              piVar26 = (int *)((longlong)&pFVar25[1].Data + 4);
              if (iVar41 == *piVar26) {
                iVar41 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar25,piVar26);
              }
              *(int *)&pFVar25[1].Data = iVar41 + 1;
              *(uint *)(pFVar25->Data + (longlong)iVar41 * 4) = local_79c;
              uVar43 = local_780._8_8_ & 0xffffffff;
            }
            puVar46 = (undefined8 *)((longlong)puVar46 + 1);
            puVar39 = (undefined8 *)(ulonglong)(uVar36 + 1);
            dVar2 = local_750;
          } while ((longlong)puVar46 < (longlong)uVar37);
        }
        if (0 < local_788) {
          pFVar25 = ::operator_new(0x10);
          _Src.Data = local_790.Data;
          if (pFVar25 == (ForAnyElementType *)0x0) {
            pFVar25 = (ForAnyElementType *)0x0;
          }
          else {
            pFVar25->Data = (FScriptContainerElement *)0x0;
            lVar30 = (longlong)local_788;
            *(int *)&pFVar25[1].Data = local_788;
            piVar26 = (int *)((longlong)&pFVar25[1].Data + 4);
            if (local_788 == 0) {
              *piVar26 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_788,0,pFVar25,local_788,piVar26);
              memcpy(pFVar25->Data,_Src.Data,lVar30 << 2);
            }
          }
          lVar30 = (longlong)(int)local_79c;
          uVar20 = 0;
          if ((int)local_79c < local_7a8) {
            uVar20 = ~local_79c >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          *(ForAnyElementType **)(local_7b0.Data + lVar30 * 8) = pFVar25;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_4a8,
                     (int *)&local_688.Value,(bool *)&local_79c);
        }
      }
      do {
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_458);
        if ((int)local_458._8_8_ == local_458._24_4_) break;
        local_6f0[0] = (int)local_458._8_8_;
        Core::Private::Function::CheckCallable((void *)local_458._32_8_);
        uVar10 = local_458._32_8_;
        plVar32 = local_428;
        if (local_410 != (longlong *)0x0) {
          plVar32 = local_410;
        }
        uVar27 = (**(code **)(*plVar32 + 8))();
        cVar19 = (*(code *)uVar10)(uVar27,local_6f0);
      } while (cVar19 == '\0');
    } while ((int)local_458._8_8_ != local_1e8._8_4_);
  }
  if (local_1e8._32_8_ != 0) {
    plVar32 = (longlong *)(local_1e8 + 0x30);
    if ((longlong *)local_1e8._72_8_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_1e8._72_8_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if ((code *)local_458._32_8_ != (code *)0x0) {
    plVar32 = local_428;
    if (local_410 != (longlong *)0x0) {
      plVar32 = local_410;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if (local_308._0_8_ != 0) {
    plVar32 = (longlong *)(local_308 + 0x10);
    if ((longlong *)local_308._40_8_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_308._40_8_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  local_730.EnableDebugChecks = false;
  local_730.nodes.CurBlock = 0;
  local_730.nodes.CurBlockUsed = 0;
  local_730.nodes.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_730.nodes.Blocks.ArrayNum = 0;
  local_730.nodes.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
            (&local_730.nodes);
  local_730.id_to_index.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_730.id_to_index.ArrayNum = 0;
  local_730.id_to_index.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
            (&local_730.nodes,1,No);
  local_730.nodes.CurBlock = 0;
  local_730.nodes.CurBlockUsed = 0;
  if (local_730.nodes.Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
              (&local_730.nodes);
  }
  local_6e8 = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_730.id_to_index,&local_6e8,0);
  local_730.num_nodes = 0;
  uVar44 = (this->Mesh->EdgeRefCounts).RefCounts.CurBlock;
  uVar35 = (this->Mesh->EdgeRefCounts).RefCounts.CurBlockUsed;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
            (&local_730.nodes,1,No);
  local_730.nodes.CurBlock = 0;
  local_730.nodes.CurBlockUsed = 0;
  if (local_730.nodes.Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
              (&local_730.nodes);
  }
  local_6e4 = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_730.id_to_index,&local_6e4,uVar44 * 0x200 + uVar35);
  iVar41 = local_480;
  pTStack_6d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_4a8 + 0x10);
  local_6d8 = 0;
  local_730.num_nodes = 0;
  uStack_6d4 = 1;
  iStack_6c4 = 0;
  uStack_6c0 = 0;
  if (local_480 != 0) {
    puVar42 = (uint *)(local_4a8 + 0x10);
    if (local_488 != (uint *)0x0) {
      puVar42 = local_488;
    }
    uVar44 = *puVar42;
    puVar39 = puVar31;
    while (uVar44 == 0) {
      uStack_6c0 = (int)puVar39 + 0x20;
      puVar39 = (undefined8 *)(ulonglong)uStack_6c0;
      iVar29 = (int)puVar31;
      local_6d8 = iVar29 + 1;
      puVar31 = (undefined8 *)(ulonglong)local_6d8;
      if ((int)(local_480 + -1 + (local_480 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_6d8) {
        iStack_6c4 = local_480;
        goto LAB_143576cdf;
      }
      uVar44 = puVar42[(longlong)iVar29 + 1];
    }
    uStack_6d4 = -uVar44 & uVar44;
    uVar37 = (ulonglong)uStack_6d4 * 2 + 1;
    lVar30 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    local_688.Value._4_4_ = (int)lVar30;
    iStack_6c4 = local_688.Value._4_4_ + -1 + uStack_6c0;
    if (local_480 < iStack_6c4) {
      iStack_6c4 = local_480;
    }
  }
LAB_143576cdf:
  local_6c8 = 0xffffffff;
  TStack_630._padding_ = CONCAT44(uStack_6d4,local_6d8);
  local_638 = (longlong *)local_4a8;
  TStack_630.CurrentBitIndex = iStack_6c4;
  TStack_630.UnvisitedBitMask = 0xffffffff;
  uStack_698._4_4_ = uStack_6bc;
  uStack_698._0_4_ = uStack_6c0;
  local_6b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_4a8 + 0x10);
  bVar28 = (byte)local_480 & 0x1f;
  local_690 = local_4a8._8_4_ - local_474;
  local_6b8._padding_ = CONCAT44(1 << bVar28,local_480 >> 5);
  local_6b8.CurrentBitIndex = local_480;
  local_6b8.UnvisitedBitMask = -1 << bVar28;
  local_6b8._24_8_ = CONCAT44(iStack_6c4,local_480) & 0xffffffffffffffe0;
  uStack_610 = CONCAT44(uStack_68c,local_690);
  TStack_630.Array = pTStack_6d0;
  TStack_630._24_8_ = uStack_698;
  if ((local_480 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    uVar18 = (*pcVar8)();
    return (bool)uVar18;
  }
  if (iVar41 != local_480) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6b8);
  }
  pTVar11 = local_6b8.Array;
  local_520 = local_6b8._padding_;
  pTStack_518 = local_6b8.Array;
  local_510 = local_6b8.UnvisitedBitMask;
  iStack_50c = local_6b8.CurrentBitIndex;
  uVar10 = _local_510;
  uStack_508 = local_6b8._24_8_;
  iStack_50c = local_6b8.CurrentBitIndex;
  iVar41 = iStack_50c;
  _local_510 = uVar10;
  while( true ) {
    plVar32 = local_638;
    if ((int)local_638[1] - *(int *)((longlong)local_638 + 0x34) != (int)uStack_610) {
      local_798[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_798);
    }
    uVar27 = _UNK_15060db28;
    uVar10 = ___xmm_ffffffffffffffffffffffffffffffff;
    if (((TStack_630.CurrentBitIndex == iVar41) && (TStack_630.Array == pTVar11)) &&
       (plVar32 == (longlong *)local_4a8)) break;
    uVar44 = *(uint *)(*plVar32 + (longlong)TStack_630.CurrentBitIndex * 0xc);
    lVar30 = (longlong)(int)uVar44;
    if (this->OnlyUniquePairs == false) {
LAB_143576fea:
      uVar35 = 0;
      if ((int)uVar44 < local_7a8) {
        uVar35 = ~uVar44 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
      FIndexPriorityQueue::Insert
                (&local_730,uVar44,(float)*(int *)(*(longlong *)(local_7b0.Data + lVar30 * 8) + 8));
    }
    else {
      uVar35 = 0;
      if ((int)uVar44 < local_7a8) {
        uVar35 = ~uVar44 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
      if (*(int *)(*(longlong *)(local_7b0.Data + lVar30 * 8) + 8) == 1) {
        uVar35 = 0;
        if ((int)uVar44 < local_7a8) {
          uVar35 = ~uVar44 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          uVar18 = (*pcVar8)();
          return (bool)uVar18;
        }
        puVar31 = *(undefined8 **)(local_7b0.Data + lVar30 * 8);
        if ((*(int *)(puVar31 + 1) < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          uVar18 = (*pcVar8)();
          return (bool)uVar18;
        }
        uVar35 = *(uint *)*puVar31;
        uVar20 = 0;
        if ((int)uVar35 < local_7a8) {
          uVar20 = ~uVar35 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          uVar18 = (*pcVar8)();
          return (bool)uVar18;
        }
        if (*(int *)(*(longlong *)(local_7b0.Data + (longlong)(int)uVar35 * 8) + 8) == 1) {
          uVar20 = 0;
          if ((int)uVar35 < local_7a8) {
            uVar20 = ~uVar35 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          puVar31 = *(undefined8 **)(local_7b0.Data + (longlong)(int)uVar35 * 8);
          if ((*(int *)(puVar31 + 1) < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          if (*(uint *)*puVar31 == uVar44) goto LAB_143576fea;
        }
      }
    }
    TStack_630.UnvisitedBitMask = TStack_630.UnvisitedBitMask & ~TStack_630._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_630);
  }
joined_r0x000143577079:
  do {
    do {
      do {
        if (local_730.num_nodes < 1) {
          this->FinalNumBoundaryEdges = 0;
          FDynamicMesh3::BoundaryEdgeIndicesItr(this->Mesh,(FilteredEnumerable *)local_2c8);
          FRefCountVector::FilteredEnumerable::begin
                    ((FilteredEnumerable *)local_2c8,
                     (FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_408
                    );
          local_658 = local_298.Vector;
          local_648 = local_298.Vector;
          local_650 = ((local_298.Vector)->RefCounts).CurBlockUsed +
                      ((local_298.Vector)->RefCounts).CurBlock * 0x200;
          local_64c = local_650;
          local_640 = local_650;
          local_63c = local_650;
          FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
          FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
                    ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_198
                     ,(IndexIterator *)&local_648,(IndexIterator *)&local_658,
                     (TFunction<bool___cdecl(int)> *)local_2c8);
          if (local_408._8_4_ != local_198._8_4_) {
            do {
              this->FinalNumBoundaryEdges = this->FinalNumBoundaryEdges + 1;
              do {
                FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_408);
                if (local_408._8_4_ == local_408._24_4_) break;
                local_6e0[0] = local_408._8_4_;
                Core::Private::Function::CheckCallable((void *)local_408._32_8_);
                uVar10 = local_408._32_8_;
                plVar32 = local_3d8;
                if (local_3c0 != (longlong *)0x0) {
                  plVar32 = local_3c0;
                }
                uVar27 = (**(code **)(*plVar32 + 8))();
                cVar19 = (*(code *)uVar10)(uVar27,local_6e0);
              } while (cVar19 == '\0');
            } while (local_408._8_4_ != local_198._8_4_);
          }
          if (local_198._32_8_ != 0) {
            plVar32 = (longlong *)(local_198 + 0x30);
            if ((longlong *)local_198._72_8_ != (longlong *)0x0) {
              plVar32 = (longlong *)local_198._72_8_;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if ((code *)local_408._32_8_ != (code *)0x0) {
            plVar32 = local_3d8;
            if (local_3c0 != (longlong *)0x0) {
              plVar32 = local_3c0;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if (local_2c8._0_8_ != 0) {
            plVar32 = (longlong *)(local_2c8 + 0x10);
            if ((longlong *)local_2c8._40_8_ != (longlong *)0x0) {
              plVar32 = (longlong *)local_2c8._40_8_;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if (local_730.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_730.id_to_index.AllocatorInstance.Data);
          }
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
          ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_730.nodes);
          local_460 = 0;
          if (local_468 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_468);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_4a8);
          if (local_7b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7b0.Data);
          }
          if (local_780.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_780.AllocatorInstance.Data);
          }
          if (local_790.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_790.Data);
          }
          local_100 = 0;
          if ((ForElementType<FSetElementId>)local_148._64_8_ != (ForElementType<FSetElementId>)0x0)
          {
            FMemory::Free((void *)local_148._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_148);
          if (local_740.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_740.AllocatorInstance.Data);
          }
          if (local_768.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_768.Data);
          }
          return true;
        }
        if (((local_730.EnableDebugChecks != false) && (local_730.num_nodes < 1)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetCount() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x92,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          uVar18 = (*pcVar8)();
          return (bool)uVar18;
        }
        uVar44 = *(uint *)(*(longlong *)local_730.nodes.Blocks.AllocatorInstance.Data + 0xc);
        FIndexPriorityQueue::remove_at_index(&local_730,1);
        pFVar5 = this->Mesh;
        local_7b8[0] = uVar44;
      } while ((((int)uVar44 < 0) ||
               ((int)((pFVar5->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar5->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar44)) ||
              (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             ((pFVar5->EdgeRefCounts).RefCounts.Blocks.
                                              AllocatorInstance.Data + (ulonglong)(uVar44 >> 9) * 8)
                                           + (ulonglong)(uVar44 & 0x1ff) * 2) - 1U)));
      uVar35 = 0;
      if ((int)uVar44 < local_7a8) {
        uVar35 = ~uVar44 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        uVar18 = (*pcVar8)();
        return (bool)uVar18;
      }
    } while ((*(longlong *)(local_7b0.Data + (longlong)(int)uVar44 * 8) == 0) ||
            (local_4a8._8_4_ == local_474));
    FVar34 = (ForElementType<FSetElementId>)local_470;
    if (local_468 != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_468;
    }
    for (iVar41 = *(int *)((longlong)FVar34 + (ulonglong)(local_460 - 1U & local_7b8[0]) * 4);
        iVar41 != -1; iVar41 = *(int *)(local_4a8._0_8_ + 4 + (longlong)iVar41 * 0xc)) {
      if (*(uint *)(local_4a8._0_8_ + (longlong)iVar41 * 0xc) == local_7b8[0]) {
        if (*(int *)(*(longlong *)
                      ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_7b8[0] >> 9) * 8) + 0xc +
                    (ulonglong)(local_7b8[0] & 0x1ff) * 0x10) == -1) {
          lVar30 = (longlong)(int)local_7b8[0];
          uVar44 = 0;
          if ((int)local_7b8[0] < local_7a8) {
            uVar44 = ~local_7b8[0] >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          cVar19 = '\0';
          uVar35 = 0;
          local_7a0 = '\0';
          local_750 = (double)((ulonglong)local_750 & 0xffffffff00000000);
          pFVar25 = *(ForAnyElementType **)(local_7b0.Data + lVar30 * 8);
          iVar41 = *(int *)&pFVar25[1].Data;
          uVar44 = local_7b8[0];
          local_670 = pFVar25;
          if (iVar41 < 1) goto LAB_143577842;
          lVar30 = 0;
          goto LAB_143577292;
        }
        break;
      }
    }
  } while( true );
LAB_143577292:
  do {
    if (cVar19 != '\0') break;
    uVar20 = 0;
    if ((int)uVar35 < iVar41) {
      uVar20 = ~uVar35 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar44 = local_7b8[0], bVar17)) {
      pcVar8 = (code *)swi(3);
      uVar18 = (*pcVar8)();
      return (bool)uVar18;
    }
    pFVar5 = this->Mesh;
    uVar20 = *(uint *)(pFVar25->Data + lVar30);
    lVar38 = (longlong)(int)uVar20;
    if ((-1 < (int)uVar20) &&
       ((int)uVar20 <
        (int)((pFVar5->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar5->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      if (((ushort)(*(short *)(*(longlong *)
                                ((pFVar5->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 2) -
                   1U) < 0xfffe) &&
         (*(int *)(*(longlong *)
                    ((pFVar5->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8) +
                   0xc + (ulonglong)(uVar20 & 0x1ff) * 0x10) == -1)) {
        pTVar6 = this->EdgesToMerge;
        if (pTVar6 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
LAB_1435773f9:
          local_350 = 0;
          local_3b0 = 0xffffffffffffffff;
          local_3a8 = uVar10;
          uStack_3a0 = uVar27;
          local_398 = 0xffffffffffffffff;
          local_380 = (void *)0x0;
          local_378 = 0;
          local_374 = 4;
          local_360 = (void *)0x0;
          local_358 = 0;
          local_354 = 4;
          iVar41 = (**(code **)(this->Mesh->_padding_ + 0x88))(this->Mesh,uVar44,uVar20,local_3b8);
          if (iVar41 == 0) {
            cVar19 = '\x01';
            local_7a0 = '\x01';
            uVar44 = 0;
            if ((int)uVar20 < local_7a8) {
              uVar44 = ~uVar20 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              uVar18 = (*pcVar8)();
              return (bool)uVar18;
            }
            puVar31 = *(undefined8 **)(local_7b0.Data + lVar38 * 8);
            if (puVar31 != (undefined8 *)0x0) {
              if ((void *)*puVar31 != (void *)0x0) {
                FMemory::Free((void *)*puVar31);
              }
              ::operator_delete(puVar31,0x10);
            }
            uVar44 = 0;
            if ((int)uVar20 < local_7a8) {
              uVar44 = ~uVar20 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              uVar18 = (*pcVar8)();
              return (bool)uVar18;
            }
            *(undefined8 *)(local_7b0.Data + lVar38 * 8) = 0;
            if (local_4a8._8_4_ != local_474) {
              FVar34 = (ForElementType<FSetElementId>)local_470;
              if (local_468 != (ForElementType<FSetElementId>)0x0) {
                FVar34 = local_468;
              }
              for (iVar41 = *(int *)((longlong)FVar34 + (longlong)(int)(local_460 - 1U & uVar20) * 4
                                    ); iVar41 != -1;
                  iVar41 = *(int *)(local_4a8._0_8_ + 4 + (longlong)iVar41 * 0xc)) {
                if (*(uint *)(local_4a8._0_8_ + (longlong)iVar41 * 0xc) == uVar20) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_4a8,
                             iVar41);
                  break;
                }
              }
            }
            if (this->bWeldAttrsOnMergedEdges != false) {
              FSplitAttributeWelder::WeldSplitElements
                        (&this->SplitAttributeWelder,this->Mesh,(int)local_3b0);
              FSplitAttributeWelder::WeldSplitElements
                        (&this->SplitAttributeWelder,this->Mesh,local_3b0._4_4_);
            }
LAB_143577804:
            uVar35 = local_750._0_4_;
          }
          else {
            uVar44 = 0;
            if ((int)uVar35 < *(int *)&pFVar25[1].Data) {
              uVar44 = ~uVar35 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              uVar18 = (*pcVar8)();
              return (bool)uVar18;
            }
            iVar41 = ~uVar35 + *(int *)&pFVar25[1].Data;
            if (iVar41 != 0) {
              memmove(pFVar25->Data + (longlong)(int)uVar35 * 4,
                      pFVar25->Data + (longlong)(int)uVar35 * 4 + 4,(longlong)iVar41 << 2);
            }
            *(int *)&pFVar25[1].Data = *(int *)&pFVar25[1].Data + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,pFVar25,*(int *)&pFVar25[1].Data,(int *)((longlong)&pFVar25[1].Data + 4))
            ;
            lVar30 = lVar30 + -4;
            local_750 = (double)CONCAT44(local_750._4_4_,uVar35 - 1);
            uVar44 = 0;
            if ((int)uVar20 < local_7a8) {
              uVar44 = ~uVar20 >> 0x1f;
            }
            local_660 = lVar30;
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              uVar18 = (*pcVar8)();
              return (bool)uVar18;
            }
            puVar7 = *(ulonglong **)(local_7b0.Data + lVar38 * 8);
            local_678 = puVar7;
            if ((((uint *)*puVar7 <= local_7b8) &&
                (local_7b8 < (uint *)*puVar7 + *(int *)((longlong)puVar7 + 0xc))) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar8 = (code *)swi(3);
              uVar18 = (*pcVar8)();
              return (bool)uVar18;
            }
            iVar41 = (int)puVar7[1];
            uVar35 = uVar35 - 1;
            if (iVar41 != 0) {
              puVar42 = (uint *)*puVar7;
              iVar45 = 0;
              lVar30 = 0;
              bVar17 = *puVar42 != local_7b8[0];
              uVar44 = local_7b8[0];
              iVar29 = 0;
              do {
                iVar40 = iVar29;
                do {
                  lVar30 = lVar30 + 1;
                  iVar40 = iVar40 + 1;
                  if (iVar41 <= lVar30) break;
                } while (bVar17 == (puVar42[lVar30] != uVar44));
                if (bVar17 != false) {
                  if (iVar45 != iVar29) {
                    memmove(puVar42 + iVar45,puVar42 + iVar29,(longlong)(iVar40 - iVar29) << 2);
                    uVar44 = local_7b8[0];
                  }
                  iVar45 = iVar45 + (iVar40 - iVar29);
                }
                bVar17 = (bool)(bVar17 ^ 1);
                iVar29 = iVar40;
              } while (lVar30 < iVar41);
              *(int *)(local_678 + 1) = iVar45;
              this = local_668;
              pFVar25 = local_670;
              lVar30 = local_660;
              cVar19 = local_7a0;
              goto LAB_143577804;
            }
          }
          if (local_360 != (void *)0x0) {
            FMemory::Free(local_360);
          }
          uVar44 = local_7b8[0];
          if (local_380 != (void *)0x0) {
            FMemory::Free(local_380);
            uVar44 = local_7b8[0];
          }
        }
        else if (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34) {
          FVar34 = (pTVar6->Hash).SecondaryData;
          FVar33 = (ForElementType<FSetElementId>)&pTVar6->Hash;
          if (FVar34 != (ForElementType<FSetElementId>)0x0) {
            FVar33 = FVar34;
          }
          iVar41 = *(int *)((longlong)FVar33 + (ulonglong)(pTVar6->HashSize - 1U & uVar44) * 4);
          if (iVar41 != -1) {
            do {
              if (*(uint *)(*(longlong *)&pTVar6->Elements + (longlong)iVar41 * 0xc) == uVar44)
              goto LAB_1435773f9;
              iVar41 = *(int *)(*(longlong *)&pTVar6->Elements + 4 + (longlong)iVar41 * 0xc);
            } while (iVar41 != -1);
          }
          FVar34 = (pTVar6->Hash).SecondaryData;
          FVar33 = (ForElementType<FSetElementId>)&pTVar6->Hash;
          if (FVar34 != (ForElementType<FSetElementId>)0x0) {
            FVar33 = FVar34;
          }
          iVar41 = *(int *)((longlong)FVar33 + (ulonglong)(pTVar6->HashSize - 1U & uVar20) * 4);
          if (iVar41 != -1) {
            do {
              if (*(uint *)(*(longlong *)&pTVar6->Elements + (longlong)iVar41 * 0xc) == uVar20)
              goto LAB_1435773f9;
              iVar41 = *(int *)(*(longlong *)&pTVar6->Elements + 4 + (longlong)iVar41 * 0xc);
            } while (iVar41 != -1);
          }
        }
      }
    }
    iVar41 = *(int *)&pFVar25[1].Data;
    uVar35 = uVar35 + 1;
    lVar30 = lVar30 + 4;
    local_750 = (double)CONCAT44(local_750._4_4_,uVar35);
  } while ((int)uVar35 < iVar41);
LAB_143577842:
  uVar35 = 0;
  if ((int)uVar44 < local_7a8) {
    uVar35 = ~uVar44 >> 0x1f;
  }
  uVar20 = uVar44;
  if ((uVar35 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     uVar20 = local_7b8[0], bVar17)) {
    pcVar8 = (code *)swi(3);
    uVar18 = (*pcVar8)();
    return (bool)uVar18;
  }
  puVar31 = *(undefined8 **)(local_7b0.Data + (longlong)(int)uVar44 * 8);
  if (puVar31 != (undefined8 *)0x0) {
    if ((void *)*puVar31 != (void *)0x0) {
      FMemory::Free((void *)*puVar31);
    }
    ::operator_delete(puVar31,0x10);
    uVar20 = local_7b8[0];
  }
  uVar44 = 0;
  if ((int)uVar20 < local_7a8) {
    uVar44 = ~uVar20 >> 0x1f;
  }
  if ((uVar44 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    uVar18 = (*pcVar8)();
    return (bool)uVar18;
  }
  *(undefined8 *)(local_7b0.Data + (longlong)(int)uVar20 * 8) = 0;
  if (local_4a8._8_4_ != local_474) {
    FVar34 = (ForElementType<FSetElementId>)local_470;
    if (local_468 != (ForElementType<FSetElementId>)0x0) {
      FVar34 = local_468;
    }
    for (iVar41 = *(int *)((longlong)FVar34 + (longlong)(int)(local_460 - 1U & local_7b8[0]) * 4);
        iVar41 != -1; iVar41 = *(int *)(local_4a8._0_8_ + 4 + (longlong)iVar41 * 0xc)) {
      if (*(uint *)(local_4a8._0_8_ + (longlong)iVar41 * 0xc) == local_7b8[0]) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_4a8,iVar41);
        break;
      }
    }
  }
  goto joined_r0x000143577079;
}

