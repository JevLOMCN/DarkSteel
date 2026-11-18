// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 39

// FPCGActorAndComponentMapping @ 149e343a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGActorAndComponentMapping * __thiscall
FPCGActorAndComponentMapping::FPCGActorAndComponentMapping
          (FPCGActorAndComponentMapping *this,UPCGSubsystem *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGActorAndComponentMapping *pFVar3;
  
  this->PCGSubsystem = param_1;
  FPCGComponentOctreeAndMap::FPCGComponentOctreeAndMap(&this->PartitionedOctree);
  *(undefined8 *)&this->PartitionActorsMap = 0;
  *(undefined8 *)&(this->PartitionActorsMap).field_0x8 = 0;
  *(undefined8 *)&(this->PartitionActorsMap).field_0x20 = 0;
  *(undefined4 *)&(this->PartitionActorsMap).field_0x28 = 0;
  *(undefined4 *)&(this->PartitionActorsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PartitionActorsMap).field_0x34 = 0;
  *(undefined4 *)&(this->PartitionActorsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PartitionActorsMap).field_0x40 = 0;
  *(undefined4 *)&(this->PartitionActorsMap).field_0x48 = 0;
  (this->PartitionActorsMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->ComponentToPartitionActorsMap = 0;
  *(undefined8 *)&(this->ComponentToPartitionActorsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToPartitionActorsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentToPartitionActorsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToPartitionActorsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToPartitionActorsMap).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentToPartitionActorsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentToPartitionActorsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToPartitionActorsMap).field_0x48 = 0;
  (this->ComponentToPartitionActorsMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  FPCGComponentOctreeAndMap::FPCGComponentOctreeAndMap(&this->NonPartitionedOctree);
  if (this->PCGSubsystem == (UPCGSubsystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PCGSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                       ,0x99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGActorAndComponentMapping *)(*pcVar1)();
      return pFVar3;
    }
  }
  FPCGComponentOctreeAndMap::Reset
            (&this->PartitionedOctree,&UE::Math::TVector<double>::ZeroVector,__real_41086a0000000000
            );
  FPCGComponentOctreeAndMap::Reset
            (&this->NonPartitionedOctree,&UE::Math::TVector<double>::ZeroVector,
             __real_41086a0000000000);
  return this;
}

// operator() @ 149e3dcd0

void __thiscall
`FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor'::__l2::<lambda_1>::
operator()(void *this,
          TMap<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
          *param_1,FPlatformRWLock *param_2)

{
  undefined1 *this_00;
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_01;
  longlong lVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_2);
  this_01 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                    *)param_1,*(UPCGComponent **)((longlong)this + 8));
  if (this_01 !=
      (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
       *)0x0) {
    iVar2 = *(int *)&(this_01->Elements).field_0x28;
    iVar8 = 0;
    this_00 = &(this_01->Elements).field_0x10;
    iVar10 = 0;
    uVar5 = 1;
    iVar6 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this_01->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)this_00;
      }
      uVar12 = *puVar11;
      while (uVar12 == 0) {
        lVar7 = (longlong)iVar8;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar8 + 1;
        iVar6 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149e3ddae;
        uVar12 = puVar11[lVar7 + 1];
      }
      uVar5 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = (int)lVar7 + -1 + iVar10;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
    }
LAB_149e3ddae:
    uVar12 = *(uint *)&(this_01->Elements).field_0x28;
    uVar13 = uVar12 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar5,iVar8);
    TStack_60.CurrentBitIndex = iVar6;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar8 = (int)uVar12 >> 5;
    TStack_60._28_4_ = iVar6;
    TStack_60.BaseBitIndex = iVar10;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this_01->Elements).field_0x8 -
                         *(int *)&(this_01->Elements).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = *(uint *)&(this_01->Elements).field_0x28;
    if (uVar12 != uVar5) {
      puVar9 = *(undefined1 **)&(this_01->Elements).field_0x20;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = this_00;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar8 * 4);
      while (uVar12 == 0) {
        lVar7 = (longlong)iVar8;
        uVar13 = uVar13 + 0x20;
        iVar8 = iVar8 + 1;
        uVar12 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_149e3dec0;
        uVar12 = *(uint *)(puVar9 + lVar7 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar12 = (int)lVar7 + -1 + uVar13;
      if ((int)uVar5 < (int)uVar12) {
        uVar12 = uVar5;
      }
    }
LAB_149e3dec0:
    while( true ) {
      if (*(int *)&(this_01->Elements).field_0x8 - *(int *)&(this_01->Elements).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar12) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
      APCGPartitionActor::RemoveGraphInstance
                (*(APCGPartitionActor **)
                  (*(longlong *)&this_01->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10),
                 *(UPCGComponent **)((longlong)this + 8));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    bVar4 = 1 < this_01->HashSize;
    if (!bVar4) {
      TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_01);
    }
    puVar9 = &(this_01->Elements).field_0xc;
    *(undefined4 *)&(this_01->Elements).field_0x8 = 0;
    if (*(int *)puVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar9);
    }
    *(undefined4 *)&(this_01->Elements).field_0x34 = 0;
    *(undefined4 *)&(this_01->Elements).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this_01->Elements).field_0x2c;
    *(undefined4 *)&(this_01->Elements).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this_01->Elements).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    if (bVar4) {
      this_01->HashSize = 1;
      TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
      ::Rehash(this_01);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149e3dfbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)param_2);
  return;
}

// operator() @ 149e3dfd0

void __thiscall
`FPCGActorAndComponentMapping::DispatchToLocalComponents'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<APCGPartitionActor> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPCGComponent *local_res10 [3];
  longlong local_28;
  void *local_20;
  undefined8 local_18;
  
  if (((param_1->field0_0x0).DebugPtr != (APCGPartitionActor *)0x0) &&
     (local_res10[0] =
           APCGPartitionActor::GetLocalComponent
                     ((param_1->field0_0x0).DebugPtr,*(UPCGComponent **)((longlong)this + 8)),
     local_res10[0] != (UPCGComponent *)0x0)) {
    bVar4 = UPCGComponent::IsPartitioned(local_res10[0]);
    if (bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8631381816680382194>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                         ,0x10e,"!LocalComponent->IsPartitioned()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_20 = (void *)0x0;
      local_18 = 0;
      local_28 = (*(code *)**(undefined8 **)((longlong)this + 0x10))
                           ((*(undefined8 **)((longlong)this + 0x10))[1],local_res10,&local_20);
      if (local_20 != (void *)0x0) {
        FMemory::Free(local_20);
      }
      if (local_28 != -1) {
        pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
        if (((pFVar2->Data <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar2,piVar1);
        }
        *(int *)&pFVar2[1].Data = iVar5 + 1;
        *(longlong *)(pFVar2->Data + (longlong)iVar5 * 8) = local_28;
      }
    }
  }
  return;
}

// operator() @ 149e3e150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPCGActorAndComponentMapping::ForAllIntersectingPartitionActors'::__l2::<lambda_1>::operator()
          (void *this,FPCGGridDescriptor *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  APCGPartitionActor *this_00;
  bool bVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
  *pTVar16;
  int *piVar17;
  TBox<double> *pTVar18;
  int *piVar19;
  undefined1 *puVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  undefined1 auStack_198 [32];
  TIntVector3<int>_u_0 local_178;
  TVector<double>_u_0 local_168;
  TIntVector3<int>_u_0 local_148;
  APCGPartitionActor *local_138;
  TVector<double>_u_0 local_130;
  double local_118;
  double local_110;
  double local_108;
  TBox<double> local_f8;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStack_198;
  lVar8 = *(longlong *)((longlong)this + 0x18);
  AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x170));
  pTVar16 = TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
            ::Find((TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
                    *)(*(longlong *)((longlong)this + 0x18) + 0x120),param_1);
  if ((pTVar16 !=
       (TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
        *)0x0) && (*(int *)&pTVar16->field_0x8 != *(int *)&pTVar16->field_0x34)) {
    pdVar9 = *(double **)((longlong)this + 0x10);
    local_168._s_0.X = *pdVar9;
    local_168._s_0.Y = pdVar9[1];
    local_168._s_0.Z = pdVar9[2];
    UPCGActorHelpers::GetCellCoord
              ((TIntVector3<int> *)&local_148._s_0,(TVector<double> *)&local_168._s_0,
               param_1->GridSize,param_1->bIs2DGrid);
    lVar10 = *(longlong *)((longlong)this + 0x10);
    local_168._s_0.X = *(double *)(lVar10 + 0x18);
    local_168._s_0.Y = *(double *)(lVar10 + 0x20);
    local_168._s_0.Z = *(double *)(lVar10 + 0x28);
    UPCGActorHelpers::GetCellCoord
              ((TIntVector3<int> *)&local_178._s_0,(TVector<double> *)&local_168._s_0,
               param_1->GridSize,param_1->bIs2DGrid);
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar12 = __real_3e45798ee2308c3a;
    uVar24 = local_178._s_0.Z;
    uVar23 = local_148._s_0.Z;
    uVar25 = local_178._s_0.Y;
    uVar26 = local_178._s_0.X;
    if (local_148._s_0.Z <= local_178._s_0.Z) {
      do {
        uVar22 = local_148._s_0.Y;
        if (local_148._s_0.Y <= (int)uVar25) {
          do {
            uVar24 = local_148._s_0.X;
            if (local_148._s_0.X <= (int)uVar26) {
              do {
                local_168._4_4_ = uVar22;
                local_168._0_4_ = uVar24;
                local_168._8_4_ = uVar23;
                uVar15 = FCrc::MemCrc_DEPRECATED(&local_168,0xc,0);
                if (*(int *)&pTVar16->field_0x8 != *(int *)&pTVar16->field_0x34) {
                  puVar20 = &pTVar16->field_0x38;
                  if (*(undefined1 **)&pTVar16->field_0x40 != (undefined1 *)0x0) {
                    puVar20 = *(undefined1 **)&pTVar16->field_0x40;
                  }
                  iVar21 = *(int *)(puVar20 +
                                   (ulonglong)(*(int *)&pTVar16->field_0x48 - 1U & uVar15) * 4);
                  if (iVar21 != -1) {
                    do {
                      piVar19 = (int *)((longlong)iVar21 * 0x20 + *(longlong *)pTVar16);
                      if (((*piVar19 == local_168._0_4_) && (piVar19[1] == local_168._4_4_)) &&
                         (piVar19[2] == local_168._8_4_)) {
                        if (iVar21 != -1) {
                          piVar17 = piVar19 + 4;
                          if (piVar19 == (int *)0x0) {
                            piVar17 = (int *)0x0;
                          }
                          if ((piVar17 != (int *)0x0) &&
                             (this_00 = *(APCGPartitionActor **)piVar17,
                             this_00 != (APCGPartitionActor *)0x0)) {
                            APCGPartitionActor::GetFixedBounds
                                      (this_00,(TBox<double> *)&local_130._s_0);
                            if (*(char *)((longlong)this + 0x20) == '\0') {
                              pTVar18 = APCGPartitionActor::GetFixedBounds(this_00,&local_f8);
                              pdVar9 = *(double **)((longlong)this + 0x10);
                              dVar1 = (pTVar18->Min).field0_0x0._s_0.X;
                              dVar2 = pdVar9[3];
                              if (dVar2 < dVar1) {
LAB_149e3e484:
                                dVar32 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                         ::__l5::EmptyBox.Min.field0_0x0._16_8_;
                                uVar25 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                         ::__l5::EmptyBox.Max.field0_0x0._0_4_;
                                uVar26 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                         ::__l5::EmptyBox.Max.field0_0x0._4_4_;
                                local_f8.IsValid =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.IsValid;
                                local_f8.Pad[0] =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.Pad[0];
                                local_f8.Pad[1] =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.Pad[1];
                                local_f8.Pad[2] =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.Pad[2];
                                local_f8.Pad[3] =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.Pad[3];
                                local_f8.Pad[4] =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.Pad[4];
                                local_f8.Pad[5] =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.Pad[5];
                                local_f8.Pad[6] =
                                     `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                     ::__l5::EmptyBox.Pad[6];
                                uVar28 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                         ::__l5::EmptyBox.Max.field0_0x0._s_0.Y;
                                uVar29 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                         ::__l5::EmptyBox.Max.field0_0x0._s_0.Z;
                                uVar30 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                         ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
                                uVar31 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                                         ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
                              }
                              else {
                                uVar30 = *pdVar9;
                                dVar3 = (pTVar18->Max).field0_0x0._s_0.X;
                                if (dVar3 < (double)uVar30) goto LAB_149e3e484;
                                dVar4 = (pTVar18->Min).field0_0x0._s_0.Y;
                                dVar5 = pdVar9[4];
                                if (dVar5 < dVar4) goto LAB_149e3e484;
                                uVar31 = pdVar9[1];
                                uVar28 = (pTVar18->Max).field0_0x0._s_0.Y;
                                if ((double)uVar28 < (double)uVar31) goto LAB_149e3e484;
                                dVar6 = (pTVar18->Min).field0_0x0._s_0.Z;
                                dVar7 = pdVar9[5];
                                if (dVar7 < dVar6) goto LAB_149e3e484;
                                dVar32 = pdVar9[2];
                                uVar29 = (pTVar18->Max).field0_0x0._s_0.Z;
                                if ((double)uVar29 < dVar32) goto LAB_149e3e484;
                                if ((double)uVar31 <= dVar4) {
                                  uVar31 = dVar4;
                                }
                                if (dVar32 <= dVar6) {
                                  dVar32 = dVar6;
                                }
                                uVar25 = SUB84(dVar3,0);
                                uVar26 = (int)((ulonglong)dVar3 >> 0x20);
                                if (dVar2 <= dVar3) {
                                  uVar25 = SUB84(dVar2,0);
                                  uVar26 = (int)((ulonglong)dVar2 >> 0x20);
                                }
                                if (dVar5 <= (double)uVar28) {
                                  uVar28 = dVar5;
                                }
                                if (dVar7 <= (double)uVar29) {
                                  uVar29 = dVar7;
                                }
                                if ((double)uVar30 <= dVar1) {
                                  uVar30 = dVar1;
                                }
                              }
                              dVar1 = ((double)CONCAT44(uVar26,uVar25) - (double)uVar30) *
                                      ((double)uVar28 - (double)uVar31) * ((double)uVar29 - dVar32);
                              uVar15 = SUB84(dVar1,0) & uVar13;
                              uVar27 = (uint)((ulonglong)dVar1 >> 0x20) & uVar14;
                              bVar11 = dVar12 <= (double)CONCAT44(uVar27,uVar15) &&
                                       (double)CONCAT44(uVar27,uVar15) != dVar12;
                            }
                            else {
                              pdVar9 = *(double **)((longlong)this + 0x10);
                              if (((pdVar9[3] <= local_130._s_0.X && local_130._s_0.X != pdVar9[3])
                                  || (local_118 < *pdVar9)) ||
                                 ((pdVar9[4] <= local_130._s_0.Y && local_130._s_0.Y != pdVar9[4] ||
                                  (((local_110 < pdVar9[1] ||
                                    (pdVar9[5] <= local_130._s_0.Z && local_130._s_0.Z != pdVar9[5])
                                    ) || (local_108 < pdVar9[2])))))) {
                                bVar11 = false;
                              }
                              else {
                                bVar11 = true;
                              }
                            }
                            if (bVar11) {
                              local_138 = this_00;
                              (**(code **)this)(*(undefined8 *)((longlong)this + 8),&local_138);
                            }
                          }
                        }
                        break;
                      }
                      iVar21 = piVar19[6];
                    } while (iVar21 != -1);
                  }
                }
                uVar24 = uVar24 + 1;
                uVar25 = local_178._s_0.Y;
                uVar26 = local_178._s_0.X;
              } while ((int)uVar24 <= local_178._s_0.X);
            }
            uVar22 = uVar22 + 1;
            uVar24 = local_178._s_0.Z;
          } while ((int)uVar22 <= (int)uVar25);
        }
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 <= (int)uVar24);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar8 + 0x170));
  return;
}

// operator() @ 149e3e5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPCGActorAndComponentMapping::RemapPCGComponent'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
          *param_1,FPlatformRWLock *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  UPCGComponent *local_d8;
  FPlatformRWLock *local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_d0 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)param_2);
  pTVar5 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                   *)param_1,*(UPCGComponent **)this);
  if (pTVar5 != (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                 *)0x0) {
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar10 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                *)local_98,pTVar5);
    local_d8 = *(UPCGComponent **)this;
    if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
      uVar7 = ((uint)((ulonglong)local_d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d8 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UPCGComponent_const_*>
                ((TSet<TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)param_1,uVar7 >> 0x10 ^ uVar7,&local_d8);
    }
    uVar7 = local_70;
    uStack_104 = 1;
    local_f0 = 0;
    uStack_f4 = local_f0;
    if (local_70 != 0) {
      puVar11 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar11 = local_78;
      }
      uVar12 = *puVar11;
      local_f0 = 0;
      uVar10 = 0;
      while (uVar12 == 0) {
        lVar8 = (longlong)(int)uVar10;
        local_f0 = local_f0 + 0x20;
        uVar10 = uVar10 + 1;
        uStack_f4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_149e3e713;
        uVar12 = (puVar11 + 1)[lVar8];
      }
      uStack_104 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_104 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_e0 = (int)lVar8;
      uStack_f4 = local_e0 + -1 + local_f0;
      if ((int)local_70 < (int)uStack_f4) {
        uStack_f4 = local_70;
      }
    }
LAB_149e3e713:
    local_110 = (longlong *)local_98;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar12 = local_70 & 0xffffffe0;
    iStack_e8 = local_98._8_4_ - local_64;
    uStack_f8 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_f4;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(uStack_104,uVar10);
    iVar9 = (int)local_70 >> 5;
    TStack_c0._28_4_ = uStack_f4;
    TStack_c0.BaseBitIndex = local_f0;
    uStack_a0 = CONCAT44(uStack_e4,iStack_e8);
    bVar6 = (byte)local_70;
    uStack_108 = uVar10;
    uStack_ec = uStack_f4;
    local_c8 = local_110;
    TStack_c0.Array = local_100;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar7 != local_70) {
      puVar11 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar11 = local_78;
      }
      uVar10 = -1 << (bVar6 & 0x1f) & puVar11[iVar9];
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar9;
        uVar12 = uVar12 + 0x20;
        iVar9 = iVar9 + 1;
        uVar7 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_149e3e81c;
        uVar10 = (puVar11 + 1)[lVar8];
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar7 = (int)lVar8 + -1 + uVar12;
      if ((int)local_70 < (int)uVar7) {
        uVar7 = local_70;
      }
    }
LAB_149e3e81c:
    while( true ) {
      plVar3 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      if (((TStack_c0.CurrentBitIndex == uVar7) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar3 == (longlong *)local_98)) break;
      APCGPartitionActor::RemapGraphInstance
                (*(APCGPartitionActor **)(*plVar3 + (longlong)TStack_c0.CurrentBitIndex * 0x10),
                 *(UPCGComponent **)this,*(UPCGComponent **)((longlong)this + 8));
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
    ::
    Emplace<UPCGComponent_const_*_const_&,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
              ((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                *)param_1,(UPCGComponent **)((longlong)this + 8),
               (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                *)local_98);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    iVar9 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
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
  ReleaseSRWLockExclusive((PSRWLOCK)local_d0);
  return;
}

// operator() @ 149e3ea80

void __thiscall
`FPCGActorAndComponentMapping::UnregisterPartitionActor'::__l18::<lambda_1>::operator()
          (void *this,UPCGComponent *param_1)

{
  TObjectPtr<APCGPartitionActor_const_>_u_0 TVar1;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar2;
  TObjectPtr<APCGPartitionActor_const_>_u_0 local_res8;
  
  this_00 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                    *)(*(longlong *)this + 0x178),param_1);
  if (this_00 !=
      (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
       *)0x0) {
    TVar1 = (TObjectPtr<APCGPartitionActor_const_>_u_0)
            ((TObjectPtr<APCGPartitionActor_const_>_u_0 *)((longlong)this + 8))->DebugPtr;
    local_res8 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (APCGPartitionActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (APCGPartitionActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      uVar2 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<APCGPartitionActor_const_>_>
                (this_00,uVar2 >> 0x10 ^ uVar2,
                 (TObjectPtr<APCGPartitionActor_const_> *)&local_res8.ObjectPtr);
    }
  }
  return;
}

// operator() @ 149e3f6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPCGActorAndComponentMapping::UpdateMappingPCGComponentPartitionActor'::__l21::<lambda_2>::
operator()(void *this)

{
  UPCGComponent **ppUVar1;
  FPCGGridDescriptor *pFVar2;
  longlong lVar3;
  double *pdVar4;
  APCGPartitionActor *this_00;
  code *pcVar5;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar6;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  double dVar18;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  TArray<FPCGGridDescriptor,TSizedDefaultAllocator<32>_> local_1f0;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *local_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  undefined8 *local_178;
  UPCGComponent *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  code *local_150;
  undefined8 **local_148;
  double *local_140;
  longlong local_138;
  undefined1 local_130;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  lVar10 = *(longlong *)this;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x1c8));
  ppUVar1 = (UPCGComponent **)((longlong)this + 8);
  uVar9 = ((uint)(*(ulonglong *)((longlong)this + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)this + 8) >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  pTVar6 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
           ::FindOrAddImpl<UPCGComponent_const_*_const_&>
                     ((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                       *)(*(longlong *)this + 0x178),uVar9 >> 0x10 ^ uVar9,ppUVar1);
  lVar3 = *(longlong *)this;
  local_178 = (undefined8 *)local_d8;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_170 = *ppUVar1;
  local_168 = *(undefined8 *)((longlong)this + 0x18);
  local_160 = *(undefined8 *)((longlong)this + 0x20);
  local_158 = *(undefined1 *)((longlong)this + 0x28);
  pdVar4 = *(double **)((longlong)this + 0x10);
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  if (*(char *)(pdVar4 + 6) != '\0') {
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<``FPCGActorAndComponentMapping::UpdateMappingPCGComponentPartitionActor'::__l21::<lambda_2>::operator()'::__l3::<lambda_1>,void,APCGPartitionActor_*>
                ::Call;
    local_148 = &local_178;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    dVar18 = (pdVar4[4] - pdVar4[1]) * (pdVar4[3] - *pdVar4) * (pdVar4[5] - pdVar4[2]);
    local_130 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                __real_3e45798ee2308c3a;
    local_140 = pdVar4;
    local_138 = lVar3;
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x170));
    TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
                *)(lVar3 + 0x120),&local_1f0);
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x170));
    iVar12 = local_1f0.ArrayNum;
    uVar11 = (ulonglong)local_1f0.ArrayNum;
    pFVar2 = (FPCGGridDescriptor *)(local_1f0.AllocatorInstance.Data + uVar11 * 0x14);
    FVar14.Data = local_1f0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar12) {
        local_1f8 = 0;
        `TCheckedPointerIterator<FPCGGridDescriptor,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1f8);
      }
      if ((FPCGGridDescriptor *)FVar14.Data == pFVar2) break;
      ForAllIntersectingPartitionActors'::__l2::<lambda_1>::operator()
                (&local_150,(FPCGGridDescriptor *)FVar14.Data);
      uVar11 = local_1f0._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0x14;
    }
    if ((FPCGGridDescriptor *)local_1f0.AllocatorInstance.Data != (FPCGGridDescriptor *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  uVar9 = 0;
  pTVar7 = TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
           ::Difference(pTVar6,&local_88,
                        (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                         *)local_d8);
  if ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
       *)local_128 != pTVar7) {
    TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                *)local_128,pTVar7);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  if (pTVar6 != (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                 *)local_d8) {
    TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
              (pTVar6,(TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                       *)local_d8);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  bVar17 = local_d8._12_4_ != 0;
  local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  if (bVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
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
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x1c8));
  uVar13 = local_100;
  if (*(char *)((longlong)this + 0x28) != '\0') {
    uStack_1d4 = 1;
    local_1c0 = 0;
    uStack_1c4 = local_1c0;
    if (local_100 != 0) {
      puVar15 = (uint *)(local_128 + 0x10);
      if (local_108 != (uint *)0x0) {
        puVar15 = local_108;
      }
      uVar16 = *puVar15;
      local_1c0 = 0;
      uVar9 = 0;
      while (uVar16 == 0) {
        lVar10 = (longlong)(int)uVar9;
        local_1c0 = local_1c0 + 0x20;
        uVar9 = uVar9 + 1;
        uStack_1c4 = local_100;
        if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar9)
        goto LAB_149e3fa61;
        uVar16 = puVar15[lVar10 + 1];
      }
      uStack_1d4 = -uVar16 & uVar16;
      uVar11 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1b0 = (int)lVar10;
      uStack_1c4 = (local_1c0 - 1) + local_1b0;
      if ((int)local_100 < (int)uStack_1c4) {
        uStack_1c4 = local_100;
      }
    }
LAB_149e3fa61:
    local_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
    iStack_1b8 = local_128._8_4_ - local_f4;
    uVar16 = local_100 & 0xffffffe0;
    uStack_1c8 = 0xffffffff;
    TStack_1a0.CurrentBitIndex = uStack_1c4;
    TStack_1a0.UnvisitedBitMask = 0xffffffff;
    TStack_1a0._padding_ = CONCAT44(uStack_1d4,uVar9);
    iVar12 = (int)local_100 >> 5;
    TStack_1a0._28_4_ = uStack_1c4;
    TStack_1a0.BaseBitIndex = local_1c0;
    uStack_180 = CONCAT44(uStack_1b4,iStack_1b8);
    bVar8 = (byte)local_100;
    local_1e0 = (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                 *)local_128;
    uStack_1d8 = uVar9;
    uStack_1bc = uStack_1c4;
    local_1a8 = (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                 *)local_128;
    TStack_1a0.Array = local_1d0;
    if (((int)local_100 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar13 != local_100) {
      puVar15 = (uint *)(local_128 + 0x10);
      if (local_108 != (uint *)0x0) {
        puVar15 = local_108;
      }
      uVar9 = -1 << (bVar8 & 0x1f) & puVar15[iVar12];
      while (uVar9 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = local_100;
        if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_149e3fb70;
        uVar9 = puVar15[lVar10 + 1];
      }
      uVar11 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar16;
      if ((int)local_100 < (int)uVar13) {
        uVar13 = local_100;
      }
    }
LAB_149e3fb70:
    while( true ) {
      pTVar6 = local_1a8;
      if (*(int *)&(local_1a8->Elements).field_0x8 - *(int *)&(local_1a8->Elements).field_0x34 !=
          (int)uStack_180) {
        `TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f7);
      }
      if (((TStack_1a0.CurrentBitIndex == uVar13) &&
          (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
         (pTVar6 == (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                     *)local_128)) break;
      this_00 = *(APCGPartitionActor **)
                 (*(longlong *)&pTVar6->Elements + (longlong)TStack_1a0.CurrentBitIndex * 0x10);
      if (this_00 != (APCGPartitionActor *)0x0) {
        APCGPartitionActor::RemoveGraphInstance(this_00,*ppUVar1);
      }
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
    }
  }
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  return;
}

// operator() @ 149e3fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
`FPCGActorAndComponentMapping::RegisterPartitionActor'::__l26::<lambda_2>::operator()
          (void *this,UPCGComponent *param_1)

{
  ForElementType<unsigned_int> FVar1;
  APCGWorldActor *pAVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPCGComponent *pUVar7;
  UPCGGraph *pUVar8;
  longlong *plVar9;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  longlong lVar12;
  undefined1 auStackY_d8 [32];
  bool local_a8 [8];
  UPCGComponent *local_a0;
  TObjectPtr<APCGPartitionActor> local_98;
  UObject *local_90;
  FPCGGridDescriptor local_88;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_18;
  
  if (param_1 == (UPCGComponent *)0x0) {
    return;
  }
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a0 = param_1;
  UPCGComponent::GetGridDescriptor
            (param_1,&local_88,*(uint *)(*(longlong *)((longlong)this + 8) + 0x3c0));
  bVar5 = FPCGGridDescriptor::operator==(&local_88,(FPCGGridDescriptor *)((longlong)this + 0x18));
  if (!bVar5) {
    return;
  }
  if ((local_a0->bGenerated == false) &&
     (pUVar7 = APCGPartitionActor::GetLocalComponent
                         (*(APCGPartitionActor **)((longlong)this + 8),local_a0),
     pUVar7 == (UPCGComponent *)0x0)) {
    return;
  }
  pAVar2 = *(APCGWorldActor **)((longlong)this + 0x10);
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.ArrayNum = 0;
  local_a8[0] = false;
  local_68.ArrayMax = 0xd;
  pUVar8 = UPCGComponent::GetGraph(local_a0);
  bVar5 = PCGHelpers::GetGenerationGridSizes(pUVar8,pAVar2,&local_68,local_a8);
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8631381816680381761>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                         ,0x2bf,
                         "PCGHelpers::GetGenerationGridSizes(Component->GetGraph(), WorldActor, GridSizes, bHasUnbounded)"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = (ForElementType<unsigned_int>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar11 = local_68.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<unsigned_int>)((longlong)FVar11 + (longlong)local_68.ArrayNum * 4);
  for (; FVar11 != FVar1; FVar11 = (ForElementType<unsigned_int>)((longlong)FVar11 + 4)) {
    if (*(int *)FVar11 == *(int *)((longlong)this + 0x18)) {
      bVar5 = UE::GetIsEditorLoadingPackage();
      if (!bVar5) {
        APCGPartitionActor::AddGraphInstance(*(APCGPartitionActor **)((longlong)this + 8),local_a0);
      }
      pUVar7 = APCGPartitionActor::GetLocalComponent
                         (*(APCGPartitionActor **)((longlong)this + 8),local_a0);
      if (pUVar7 != (UPCGComponent *)0x0) {
        lVar3 = *(longlong *)this;
        uVar10 = ((uint)((ulonglong)local_a0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_a0 >> 4)) *
                 -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar10 = uVar10 >> 0x10 ^ uVar10;
        if (*(int *)(lVar3 + 0x180) == *(int *)(lVar3 + 0x1ac)) goto LAB_149e3fe4e;
        lVar12 = *(longlong *)(lVar3 + 0x1b8);
        if (*(longlong *)(lVar3 + 0x1b8) == 0) {
          lVar12 = lVar3 + 0x1b0;
        }
        iVar6 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar3 + 0x1c0) - 1U & uVar10) * 4);
        if (iVar6 == -1) goto LAB_149e3fe4e;
        goto LAB_149e3fe30;
      }
      break;
    }
  }
  goto LAB_149e3fe9a;
  while (iVar6 = (int)plVar9[0xb], iVar6 != -1) {
LAB_149e3fe30:
    plVar9 = (longlong *)
             ((longlong)iVar6 * 0x60 +
             *(longlong *)
              &(((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                  *)(lVar3 + 0x178))->Pairs).Elements);
    if ((UPCGComponent *)*plVar9 == local_a0) {
      if (plVar9 != (longlong *)0x0) {
        this_00 = (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                   *)(plVar9 + 1);
        goto LAB_149e3fe61;
      }
      break;
    }
  }
LAB_149e3fe4e:
  this_00 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
            ::EmplaceByHash<UPCGComponent_const_*_const_&>
                      ((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                        *)(lVar3 + 0x178),uVar10,&local_a0);
LAB_149e3fe61:
  local_90 = *(UObject **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_90);
  }
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<APCGPartitionActor>_>(this_00,&local_98,(bool *)&local_90);
LAB_149e3fe9a:
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return;
}

// AnyRuntimeGenComponentsExist @ 149e49be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGActorAndComponentMapping::AnyRuntimeGenComponentsExist(FPCGActorAndComponentMapping *this)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong lVar7;
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  ulonglong local_1d0;
  longlong *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  int local_194;
  int local_190;
  longlong *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  int local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  undefined4 local_dc;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  FPCGComponentOctreeAndMap::GetAllComponents
            (&this->PartitionedOctree,
             (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
             local_88);
  uVar9 = local_60;
  local_1d0 = 1;
  iStack_1c0 = 0;
  local_1a8 = 0;
  uStack_1bc = 1;
  uStack_1ac = 0;
  if (local_60 != 0) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uStack_1bc = *puVar10;
    while (uStack_1bc == 0) {
      lVar7 = (longlong)iStack_1c0;
      local_1a8 = local_1a8 + 0x20;
      iStack_1c0 = iStack_1c0 + 1;
      uStack_1bc = 1;
      uStack_1ac = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1c0)
      goto LAB_149e49cb2;
      uStack_1bc = puVar10[lVar7 + 1];
    }
    uStack_1bc = -uStack_1bc & uStack_1bc;
    uVar1 = (ulonglong)uStack_1bc * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_198 = (int)lVar7;
    uStack_1ac = local_1a8 + -1 + local_198;
    if ((int)local_60 < (int)uStack_1ac) {
      uStack_1ac = local_60;
    }
  }
LAB_149e49cb2:
  local_1c8 = (longlong *)local_88;
  uStack_1a4 = local_dc;
  local_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_1a0 = local_88._8_4_ - local_54;
  uVar11 = local_60 & 0xffffffe0;
  TStack_150._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
  uStack_1b0 = 0xffffffff;
  TStack_150.CurrentBitIndex = uStack_1ac;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)local_60 >> 5;
  TStack_150._28_4_ = local_dc;
  TStack_150.BaseBitIndex = local_1a8;
  uStack_130 = CONCAT44(uStack_19c,iStack_1a0);
  bVar6 = (byte)local_60;
  local_158 = local_1c8;
  TStack_150.Array = local_1b8;
  if (((int)local_60 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (uVar9 != local_60) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar9 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar11 = uVar11 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_149e49dd1;
      uVar9 = puVar10[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_194 = (int)lVar7;
    uVar9 = local_194 + -1 + uVar11;
    if ((int)local_60 < (int)uVar9) {
      uVar9 = local_60;
    }
  }
LAB_149e49dd1:
  while( true ) {
    plVar3 = local_158;
    if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
      local_1d8 = 0;
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    if (((TStack_150.CurrentBitIndex == uVar9) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar3 == (longlong *)local_88)) {
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      FPCGComponentOctreeAndMap::GetAllComponents
                (&this->NonPartitionedOctree,
                 (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
                 local_d8);
      uVar9 = local_b0;
      iStack_180 = 0;
      local_168 = 0;
      uStack_16c = 0;
      if (local_b0 == 0) goto LAB_149e49f07;
      puVar10 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar10 = local_b8;
      }
      uVar11 = *puVar10;
      local_168 = 0;
      goto joined_r0x000149e49ec1;
    }
    lVar7 = *(longlong *)(*plVar3 + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0xce) == '\x02')) break;
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  this_00 = (TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88;
  goto LAB_149e4a0d1;
joined_r0x000149e49ec1:
  if (uVar11 != 0) goto LAB_149e49edf;
  lVar7 = (longlong)iStack_180;
  local_168 = local_168 + 0x20;
  iStack_180 = iStack_180 + 1;
  uStack_16c = local_b0;
  if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_180)
  goto LAB_149e49f07;
  uVar11 = puVar10[lVar7 + 1];
  goto joined_r0x000149e49ec1;
LAB_149e49edf:
  local_1d0 = (ulonglong)(-uVar11 & uVar11);
  uVar1 = local_1d0 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  local_190 = (int)lVar7;
  uStack_16c = local_190 + -1 + local_168;
  if ((int)local_b0 < (int)uStack_16c) {
    uStack_16c = local_b0;
  }
LAB_149e49f07:
  local_188 = (longlong *)local_d8;
  uStack_17c = (undefined4)local_1d0;
  uVar11 = local_b0 & 0xffffffe0;
  uStack_164 = uStack_1ac;
  local_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  iStack_160 = local_d8._8_4_ - local_a4;
  uStack_170 = 0xffffffff;
  TStack_120.CurrentBitIndex = uStack_16c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_17c,iStack_180);
  iVar8 = (int)local_b0 >> 5;
  TStack_120._28_4_ = uStack_1ac;
  TStack_120.BaseBitIndex = local_168;
  uStack_100 = CONCAT44(uStack_15c,iStack_160);
  bVar6 = (byte)local_b0;
  local_128 = local_188;
  TStack_120.Array = local_178;
  if (((int)local_b0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (uVar9 != local_b0) {
    puVar10 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar10 = local_b8;
    }
    uVar9 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar11 = uVar11 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_149e4a010;
      uVar9 = puVar10[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar11;
    if ((int)local_b0 < (int)uVar9) {
      uVar9 = local_b0;
    }
  }
LAB_149e4a010:
  while( true ) {
    plVar3 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_120.CurrentBitIndex == uVar9) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar3 == (longlong *)local_d8)) {
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return false;
    }
    lVar7 = *(longlong *)(*plVar3 + (longlong)TStack_120.CurrentBitIndex * 0x10);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0xce) == '\x02')) break;
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  this_00 = (TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_d8;
LAB_149e4a0d1:
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this_00);
  return true;
}

// Deinitialize @ 149e54320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGActorAndComponentMapping::Deinitialize(FPCGActorAndComponentMapping *this)

{
  return;
}

// DeleteMappingPCGComponentPartitionActor @ 149e54460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGActorAndComponentMapping *local_18;
  UPCGComponent *local_10;
  
  if (param_1 == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                       ,0x3ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = UPCGComponent::IsPartitioned(param_1);
  if (bVar2) {
    local_18 = this;
    local_10 = param_1;
    `FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor'::__l2::<lambda_1>::
    operator()(&local_18,&this->ComponentToPartitionActorsMap,
               &this->ComponentToPartitionActorsMapLock);
  }
  return;
}

// DispatchToLocalComponents @ 149e55360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
FPCGActorAndComponentMapping::DispatchToLocalComponents
          (FPCGActorAndComponentMapping *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGComponent *param_1,
          TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          *param_2,TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
                   *param_3)

{
  <lambda_1> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28.InFunc = param_3;
  local_28.__this = this;
  local_28.OriginalComponent = param_1;
  local_28.TaskIds = __return_storage_ptr__;
  Algo::
  ForEach<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_const_&,_FPCGActorAndComponentMapping::DispatchToLocalComponents_::__l2::<lambda_1>_>
            (param_2,&local_28);
  return __return_storage_ptr__;
}

// DispatchToRegisteredLocalComponents @ 149e553b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents
          (FPCGActorAndComponentMapping *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGComponent *param_1,
          TFunctionRef<unsigned___int64___cdecl(UPCGComponent_*,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_const_&)>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  <lambda_1> local_38;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId239,
               "FPCGActorAndComponentMapping::DispatchToRegisteredLocalComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
               ,0xef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId239);
  }
  if (param_1 == (UPCGComponent *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8631381816680382224>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                       ,0xf0,"OriginalComponent");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
    pTVar4 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
             ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                     *)&this->ComponentToPartitionActorsMap,param_1);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (pTVar4 != (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                   *)0x0) {
      local_38.__this = this;
      local_38.OriginalComponent = param_1;
      local_38.InFunc = param_2;
      local_38.TaskIds = __return_storage_ptr__;
      Algo::
      ForEach<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_const_&,_FPCGActorAndComponentMapping::DispatchToLocalComponents_::__l2::<lambda_1>_>
                (pTVar4,&local_38);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return __return_storage_ptr__;
}

// ForAllIntersectingPartitionActors @ 149e56d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::ForAllIntersectingPartitionActors
          (FPCGActorAndComponentMapping *this,TBox<double> *param_1,
          TFunctionRef<void___cdecl(APCGPartitionActor_*)> *param_2)

{
  FPCGGridDescriptor *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  double dVar5;
  undefined1 local_res10 [8];
  TArray<FPCGGridDescriptor,TSizedDefaultAllocator<32>_> local_48;
  undefined8 local_38;
  undefined8 local_30;
  TBox<double> *local_28;
  FPCGActorAndComponentMapping *local_20;
  undefined1 local_18;
  
  if (param_1->IsValid != '\0') {
    local_38 = *(undefined8 *)param_2;
    local_30 = *(undefined8 *)&param_2->field_0x8;
    dVar5 = ((param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y) *
            ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) *
            ((param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z);
    local_18 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
               __real_3e45798ee2308c3a;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_28 = param_1;
    local_20 = this;
    AcquireSRWLockShared((PSRWLOCK)&this->PartitionActorsMapLock);
    TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
                *)&this->PartitionActorsMap,&local_48);
    ReleaseSRWLockShared((PSRWLOCK)&this->PartitionActorsMapLock);
    iVar2 = local_48.ArrayNum;
    uVar3 = (ulonglong)local_48.ArrayNum;
    pFVar1 = (FPCGGridDescriptor *)(local_48.AllocatorInstance.Data + uVar3 * 0x14);
    FVar4.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<FPCGGridDescriptor,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((FPCGGridDescriptor *)FVar4.Data == pFVar1) break;
      `FPCGActorAndComponentMapping::ForAllIntersectingPartitionActors'::__l2::<lambda_1>::
      operator()(&local_38,(FPCGGridDescriptor *)FVar4.Data);
      uVar3 = local_48._8_8_ & 0xffffffff;
      FVar4.Data = FVar4.Data + 0x14;
    }
    if ((FPCGGridDescriptor *)local_48.AllocatorInstance.Data != (FPCGGridDescriptor *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// ForAllIntersectingPartitionedComponents @ 149e56e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::ForAllIntersectingPartitionedComponents
          (FPCGActorAndComponentMapping *this,FBoxCenterAndExtent *param_1,
          TFunctionRef<void___cdecl(UPCGComponent_*)> *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  
  SRWLock = &(this->PartitionedOctree).Lock;
  local_res8.InFunc = param_2;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::
  FindElementsWithBoundsTestInternal<_FPCGActorAndComponentMapping::ForAllIntersectingPartitionedComponents_::__l2::<lambda_1>_>
            (&(this->PartitionedOctree).Octree,0,(FOctreeNodeContext *)&this->PartitionedOctree,
             param_1,&local_res8);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// ForAllOriginalComponents @ 149e56ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::ForAllOriginalComponents
          (FPCGActorAndComponentMapping *this,TFunctionRef<void___cdecl(UPCGComponent_*)> *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_207 [7];
  ulonglong local_200;
  longlong *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined8 local_1b8;
  FPCGActorAndComponentMapping *local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  int local_180;
  uint uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1b0 = this;
  FPCGComponentOctreeAndMap::GetAllComponents
            (&this->PartitionedOctree,
             (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
             local_e8);
  uVar8 = local_c0;
  local_200 = 1;
  iStack_1f0 = 0;
  local_1d8 = 0;
  uStack_1ec = 1;
  uStack_1dc = 0;
  if (local_c0 != 0) {
    puVar9 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar9 = local_c8;
    }
    uStack_1ec = *puVar9;
    while (uStack_1ec == 0) {
      lVar6 = (longlong)iStack_1f0;
      local_1d8 = local_1d8 + 0x20;
      iStack_1f0 = iStack_1f0 + 1;
      uStack_1ec = 1;
      uStack_1dc = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1f0)
      goto LAB_149e56fc1;
      uStack_1ec = puVar9[lVar6 + 1];
    }
    uStack_1ec = -uStack_1ec & uStack_1ec;
    uVar1 = (ulonglong)uStack_1ec * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1c8 = (int)lVar6;
    uStack_1dc = local_1d8 + -1 + local_1c8;
    if ((int)local_c0 < (int)uStack_1dc) {
      uStack_1dc = local_c0;
    }
  }
LAB_149e56fc1:
  local_1f8 = (longlong *)local_e8;
  uStack_1d4 = local_f4;
  local_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_1d0 = local_e8._8_4_ - local_b4;
  uVar10 = local_c0 & 0xffffffe0;
  TStack_168._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
  uStack_1e0 = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_1dc;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar7 = (int)local_c0 >> 5;
  TStack_168._28_4_ = local_f4;
  TStack_168.BaseBitIndex = local_1d8;
  uStack_148 = CONCAT44(uStack_1cc,iStack_1d0);
  bVar5 = (byte)local_c0;
  local_170 = local_1f8;
  TStack_168.Array = local_1e8;
  if (((int)local_c0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar8 != local_c0) {
    puVar9 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar9 = local_c8;
    }
    uVar8 = -1 << (bVar5 & 0x1f) & puVar9[iVar7];
    while (uVar8 == 0) {
      lVar6 = (longlong)iVar7;
      uVar10 = uVar10 + 0x20;
      iVar7 = iVar7 + 1;
      uVar8 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_149e570d1;
      uVar8 = puVar9[lVar6 + 1];
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1c4 = (int)lVar6;
    uVar8 = local_1c4 + -1 + uVar10;
    if ((int)local_c0 < (int)uVar8) {
      uVar8 = local_c0;
    }
  }
LAB_149e570d1:
  while( true ) {
    plVar3 = local_170;
    if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
      local_208 = 0;
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
    }
    if (((TStack_168.CurrentBitIndex == uVar8) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    local_1b8 = *(undefined8 *)(*plVar3 + (longlong)TStack_168.CurrentBitIndex * 0x10);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_1b8);
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  FPCGComponentOctreeAndMap::GetAllComponents
            (&local_1b0->NonPartitionedOctree,
             (TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> *)
             local_98);
  uVar8 = local_70;
  iStack_198 = 0;
  local_180 = 0;
  uStack_184 = 0;
  if (local_70 != 0) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar10 = *puVar9;
    while (uVar10 == 0) {
      lVar6 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      uStack_184 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_198)
      goto LAB_149e57217;
      uVar10 = puVar9[lVar6 + 1];
    }
    local_200 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = local_200 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_1c0 = (int)lVar6;
    uStack_184 = local_180 + -1 + local_1c0;
    if ((int)local_70 < (int)uStack_184) {
      uStack_184 = local_70;
    }
  }
LAB_149e57217:
  local_1a0 = (longlong *)local_98;
  uStack_194 = (undefined4)local_200;
  uVar10 = local_70 & 0xffffffe0;
  uStack_17c = uStack_1dc;
  local_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_178 = local_98._8_4_ - local_64;
  uStack_188 = 0xffffffff;
  TStack_138.CurrentBitIndex = uStack_184;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  TStack_138._padding_ = CONCAT44(uStack_194,iStack_198);
  iVar7 = (int)local_70 >> 5;
  TStack_138._28_4_ = uStack_1dc;
  TStack_138.BaseBitIndex = local_180;
  uStack_118 = CONCAT44(uStack_174,iStack_178);
  bVar5 = (byte)local_70;
  local_140 = local_1a0;
  TStack_138.Array = local_190;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar8 != local_70) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar8 = -1 << (bVar5 & 0x1f) & puVar9[iVar7];
    while (uVar8 == 0) {
      lVar6 = (longlong)iVar7;
      uVar10 = uVar10 + 0x20;
      iVar7 = iVar7 + 1;
      uVar8 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_149e57330;
      uVar8 = puVar9[lVar6 + 1];
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar10;
    if ((int)local_70 < (int)uVar8) {
      uVar8 = local_70;
    }
  }
LAB_149e57330:
  while( true ) {
    plVar3 = local_140;
    if ((int)local_140[1] - *(int *)((longlong)local_140 + 0x34) != (int)uStack_118) {
      `TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
    }
    if (((TStack_138.CurrentBitIndex == uVar8) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    local_1a8 = *(undefined8 *)(*plVar3 + (longlong)TStack_138.CurrentBitIndex * 0x10);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_1a8);
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GetAllIntersectingComponents @ 149e57be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
FPCGActorAndComponentMapping::GetAllIntersectingComponents
          (FPCGActorAndComponentMapping *this,
          TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FBoxCenterAndExtent *param_1)

{
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res8.Result = __return_storage_ptr__;
  FPCGComponentOctreeAndMap::
  FindElementsWithBoundsTest<_FPCGActorAndComponentMapping::GetAllIntersectingComponents_::__l2::<lambda_1>_>
            (&this->PartitionedOctree,param_1,&local_res8);
  FPCGComponentOctreeAndMap::
  FindElementsWithBoundsTest<_FPCGActorAndComponentMapping::GetAllIntersectingComponents_::__l2::<lambda_1>_>
            (&this->NonPartitionedOctree,param_1,&local_res8);
  return __return_storage_ptr__;
}

// GetAllRegisteredComponents @ 149e57c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> * __thiscall
FPCGActorAndComponentMapping::GetAllRegisteredComponents
          (FPCGActorAndComponentMapping *this,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  undefined1 auStack_88 [32];
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  FPCGComponentOctreeAndMap::GetAllComponents(&this->PartitionedOctree,__return_storage_ptr__);
  FPCGComponentOctreeAndMap::GetAllComponents(&this->NonPartitionedOctree,&local_68);
  TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>::
  Append<FDefaultSetAllocator>(__return_storage_ptr__,&local_68);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return __return_storage_ptr__;
}

// GetAllRegisteredNonPartitionedComponents @ 149e57cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> * __thiscall
FPCGActorAndComponentMapping::GetAllRegisteredNonPartitionedComponents
          (FPCGActorAndComponentMapping *this,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FPCGComponentOctreeAndMap::GetAllComponents(&this->NonPartitionedOctree,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAllRegisteredPartitionedComponents @ 149e57d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator> * __thiscall
FPCGActorAndComponentMapping::GetAllRegisteredPartitionedComponents
          (FPCGActorAndComponentMapping *this,
          TSet<UPCGComponent_*,DefaultKeyFuncs<UPCGComponent_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FPCGComponentOctreeAndMap::GetAllComponents(&this->PartitionedOctree,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLocalComponent @ 149e5ab90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComponent * __thiscall
FPCGActorAndComponentMapping::GetLocalComponent
          (FPCGActorAndComponentMapping *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2,
          UPCGComponent *param_3)

{
  uint uVar1;
  int iVar2;
  TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_00;
  UPCGComponent *pUVar3;
  longlong lVar4;
  UPCGComponent *pUVar5;
  
  AcquireSRWLockShared((PSRWLOCK)&this->PartitionActorsMapLock);
  this_00 = (TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
             *)TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
               ::Find((TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
                       *)&this->PartitionActorsMap,param_1);
  pUVar3 = (UPCGComponent *)0x0;
  if (this_00 !=
      (TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
       *)0x0) {
    uVar1 = FCrc::MemCrc_DEPRECATED(param_2,0xc,0);
    iVar2 = TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<UE::Math::TIntVector3<int>_>(this_00,uVar1,param_2);
    if (iVar2 != -1) {
      lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&this_00->Elements;
      pUVar5 = (UPCGComponent *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        pUVar5 = pUVar3;
      }
      if ((pUVar5 != (UPCGComponent *)0x0) &&
         (pUVar3 = (UPCGComponent *)0x0,
         (APCGPartitionActor *)pUVar5->_padding_ != (APCGPartitionActor *)0x0)) {
        pUVar3 = APCGPartitionActor::GetLocalComponent
                           ((APCGPartitionActor *)pUVar5->_padding_,param_3);
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->PartitionActorsMapLock);
  return pUVar3;
}

// GetPCGComponentPartitionActorMappings @ 149e5c430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
* __thiscall
FPCGActorAndComponentMapping::GetPCGComponentPartitionActorMappings
          (FPCGActorAndComponentMapping *this,
          TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,UPCGComponent *param_1)

{
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar1;
  
  pTVar1 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                   *)&this->ComponentToPartitionActorsMap,param_1);
  if (pTVar1 != (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
    (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    __return_storage_ptr__->HashSize = 0;
    TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
    ::operator=(__return_storage_ptr__,pTVar1);
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
  (__return_storage_ptr__->Hash).InlineData[0] = '\0';
  (__return_storage_ptr__->Hash).InlineData[1] = '\0';
  (__return_storage_ptr__->Hash).InlineData[2] = '\0';
  (__return_storage_ptr__->Hash).InlineData[3] = '\0';
  (__return_storage_ptr__->Hash)._padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  return __return_storage_ptr__;
}

// GetPartitionActor @ 149e5cb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APCGPartitionActor * __thiscall
FPCGActorAndComponentMapping::GetPartitionActor
          (FPCGActorAndComponentMapping *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2)

{
  uint uVar1;
  int iVar2;
  TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar3;
  APCGPartitionActor *pAVar4;
  APCGPartitionActor *pAVar5;
  
  AcquireSRWLockShared((PSRWLOCK)&this->PartitionActorsMapLock);
  this_00 = (TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
             *)TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
               ::Find((TMapBase<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
                       *)&this->PartitionActorsMap,param_1);
  if (this_00 ==
      (TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
       *)0x0) {
    pAVar5 = (APCGPartitionActor *)0x0;
  }
  else {
    uVar1 = FCrc::MemCrc_DEPRECATED(param_2,0xc,0);
    iVar2 = TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<UE::Math::TIntVector3<int>_>(this_00,uVar1,param_2);
    pAVar5 = (APCGPartitionActor *)0x0;
    if (iVar2 != -1) {
      lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this_00->Elements;
      pAVar4 = (APCGPartitionActor *)(lVar3 + 0x10);
      if (lVar3 == 0) {
        pAVar4 = pAVar5;
      }
      if (((pAVar4 != (APCGPartitionActor *)0x0) &&
          (pAVar5 = (APCGPartitionActor *)pAVar4->_padding_,
          UE::GC::GIsIncrementalReachabilityPending != false)) &&
         (pAVar5 != (APCGPartitionActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar5);
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->PartitionActorsMapLock);
  return pAVar5;
}

// GetWorld @ 149e72d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPCGActorAndComponentMapping::GetWorld(FPCGActorAndComponentMapping *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this->PCGSubsystem);
  return pUVar1;
}

// Initialize @ 149e74ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGActorAndComponentMapping::Initialize(FPCGActorAndComponentMapping *this)

{
  return;
}

// IsComponentRegistered @ 149e77e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGActorAndComponentMapping::IsComponentRegistered
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1)

{
  bool bVar1;
  
  bVar1 = FPCGComponentOctreeAndMap::Contains(&this->PartitionedOctree,param_1);
  if (!bVar1) {
    bVar1 = FPCGComponentOctreeAndMap::Contains(&this->NonPartitionedOctree,param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// RegisterOrUpdateNonPartitionedPCGComponent @ 149e82340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGActorAndComponentMapping::RegisterOrUpdateNonPartitionedPCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1)

{
  undefined1 auStackY_88 [32];
  bool local_58;
  bool local_57 [7];
  TVector<double>_u_0 local_50;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_20 = 0;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_58 = false;
  local_57[0] = false;
  local_50._s_0.X = 0.0;
  local_50._s_0.Y = 0.0;
  local_50._s_0.Z = 0.0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FPCGComponentOctreeAndMap::AddOrUpdateComponent
            (&this->NonPartitionedOctree,param_1,(TBox<double> *)&local_50._s_0,&local_58,local_57);
  return local_58;
}

// RegisterOrUpdatePCGComponent @ 149e823d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGActorAndComponentMapping::RegisterOrUpdatePCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1,bool param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  UClass *pUVar7;
  TBox<double> *pTVar8;
  undefined1 auStackY_128 [32];
  bool local_f8;
  bool local_f7;
  bool local_f6;
  bool local_f5 [5];
  FPCGActorAndComponentMapping *local_f0;
  UPCGComponent *local_e8;
  TVector<double>_u_0 local_e0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_77;
  undefined2 local_73;
  undefined1 local_71;
  TBox<double> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1 == (UPCGComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                       ,0x140,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else if ((((uint)param_1->_padding_ >> 0x1e & 1) == 0) && (lVar2 = param_1->_padding_, lVar2 != 0)
          ) {
    pUVar7 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      pTVar8 = UPCGComponent::GetGridBounds(param_1,&local_70);
      if (pTVar8->IsValid != '\0') {
        bVar4 = FPCGComponentOctreeAndMap::Contains(&this->PartitionedOctree,param_1);
        if (!bVar4) {
          FPCGComponentOctreeAndMap::Contains(&this->NonPartitionedOctree,param_1);
        }
        bVar4 = UPCGComponent::IsPartitioned(param_1);
        if (bVar4) {
          bVar6 = FPCGComponentOctreeAndMap::Contains(&this->NonPartitionedOctree,param_1);
          if (bVar6) {
            UnregisterNonPartitionedPCGComponent(this,param_1);
          }
        }
        else {
          bVar6 = FPCGComponentOctreeAndMap::Contains(&this->PartitionedOctree,param_1);
          if (bVar6) {
            UnregisterPartitionedPCGComponent(this,param_1);
          }
        }
        UPCGSubsystem::OnOriginalComponentRegistered(this->PCGSubsystem,param_1);
        if (!bVar4) {
          local_77 = 0;
          local_73 = 0;
          local_71 = 0;
          local_f6 = false;
          local_f5[0] = false;
          local_a8._s_0.X = 0.0;
          local_a8._s_0.Y = 0.0;
          local_78 = 0;
          local_a8._s_0.Z = 0.0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          FPCGComponentOctreeAndMap::AddOrUpdateComponent
                    (&this->NonPartitionedOctree,param_1,(TBox<double> *)&local_a8._s_0,&local_f6,
                     local_f5);
          return local_f6;
        }
        local_b0 = 0;
        local_af = 0;
        local_ab = 0;
        local_a9 = 0;
        local_f8 = false;
        local_f7 = false;
        local_e0._s_0.X = 0.0;
        local_e0._s_0.Y = 0.0;
        local_e0._s_0.Z = 0.0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        FPCGComponentOctreeAndMap::AddOrUpdateComponent
                  (&this->PartitionedOctree,param_1,(TBox<double> *)&local_e0._s_0,&local_f8,
                   &local_f7);
        if (param_2) {
          if (local_f8 == false) {
            return false;
          }
          UpdateMappingPCGComponentPartitionActor(this,param_1,true);
          return local_f8;
        }
        if (local_f7 != false) {
          UpdateMappingPCGComponentPartitionActor(this,param_1,false);
          return local_f8;
        }
        bVar4 = UPCGComponent::IsPartitioned(param_1);
        if (!bVar4) {
          return local_f8;
        }
        local_f0 = this;
        local_e8 = param_1;
        `FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor'::__l2::<lambda_1>::
        operator()(&local_f0,&this->ComponentToPartitionActorsMap,
                   &this->ComponentToPartitionActorsMapLock);
        return local_f8;
      }
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
  }
  return false;
}

// RegisterOrUpdatePCGComponent @ 149e82650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGActorAndComponentMapping::RegisterOrUpdatePCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = RegisterOrUpdatePCGComponent(this,param_1,param_2,false);
  return bVar1;
}

// RegisterOrUpdatePartitionedPCGComponent @ 149e82660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGActorAndComponentMapping::RegisterOrUpdatePartitionedPCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStackY_98 [32];
  bool local_68;
  bool local_67 [7];
  FPCGActorAndComponentMapping *local_60;
  UPCGComponent *local_58;
  TVector<double>_u_0 local_50;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_20 = 0;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_68 = false;
  local_67[0] = false;
  local_50._s_0.X = 0.0;
  local_50._s_0.Y = 0.0;
  local_50._s_0.Z = 0.0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FPCGComponentOctreeAndMap::AddOrUpdateComponent
            (&this->PartitionedOctree,param_1,(TBox<double> *)&local_50._s_0,&local_68,local_67);
  if (param_2) {
    if (local_68 == false) {
      return false;
    }
    bVar2 = true;
  }
  else {
    if (local_67[0] == false) {
      if ((param_1 == (UPCGComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InComponent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                             ,0x3ac,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = UPCGComponent::IsPartitioned(param_1);
      if (!bVar2) {
        return local_68;
      }
      local_60 = this;
      local_58 = param_1;
      `FPCGActorAndComponentMapping::DeleteMappingPCGComponentPartitionActor'::__l2::<lambda_1>::
      operator()(&local_60,&this->ComponentToPartitionActorsMap,
                 &this->ComponentToPartitionActorsMapLock);
      return local_68;
    }
    bVar2 = false;
  }
  UpdateMappingPCGComponentPartitionActor(this,param_1,bVar2);
  return local_68;
}

// RegisterPartitionActor @ 149e82790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::RegisterPartitionActor
          (FPCGActorAndComponentMapping *this,APCGPartitionActor *param_1)

{
  TMap<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>_>
  *this_00;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  APCGWorldActor *pAVar9;
  TBox<double> *pTVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  APCGPartitionActor *local_178;
  TObjectPtr<APCGPartitionActor>_u_0 local_170;
  undefined4 local_168;
  uint local_164;
  char local_160;
  int local_158 [2];
  TIntVector3<int>_u_0 local_150;
  TPairInitializer<UE::Math::TIntVector3<int>_const_&,TObjectPtr<APCGPartitionActor>_&&> local_140;
  APCGPartitionActor *local_130;
  APCGPartitionActor **local_128;
  FPCGActorAndComponentMapping *local_120;
  APCGPartitionActor *local_118;
  APCGWorldActor *local_110;
  int local_108;
  undefined1 local_104;
  char local_103;
  undefined4 local_100;
  uint local_fc;
  char local_f8;
  TIntVector3<int>_u_0 *local_f0;
  APCGPartitionActor **local_e8;
  code *local_e0;
  FPCGActorAndComponentMapping **local_d8;
  TVector4<double>_u_0 local_c8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178 = param_1;
  if ((param_1 == (APCGPartitionActor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                         ,0x273,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  APCGPartitionActor::GetGridDescriptor(local_178,(FPCGGridDescriptor *)&local_170.ObjectPtr);
  APCGPartitionActor::GetGridCoord(local_178,(TIntVector3<int> *)&local_150._s_0);
  if ((local_170._0_4_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PartitionActorDescriptor.GetGridSize() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                         ,0x290,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->PartitionActorsMapLock);
  this_00 = &this->PartitionActorsMap;
  if (local_160 == '\0') {
    local_164 = FPCGGridDescriptor::ComputeHash((FPCGGridDescriptor *)&local_170.ObjectPtr);
    local_160 = '\x01';
  }
  uVar7 = local_164;
  if (*(int *)&(this->PartitionActorsMap).field_0x8 !=
      *(int *)&(this->PartitionActorsMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PartitionActorsMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PartitionActorsMap).field_0x38;
    }
    iVar1 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->PartitionActorsMap).field_0x48 - 1U & local_164) * 4
                    );
    while (iVar1 != -1) {
      lVar12 = (longlong)iVar1 * 0x70;
      bVar6 = FPCGGridDescriptor::operator==
                        ((FPCGGridDescriptor *)(*(longlong *)&this_00->field_0x0 + lVar12),
                         (FPCGGridDescriptor *)&local_170.ObjectPtr);
      if (bVar6) {
        lVar12 = *(longlong *)&this_00->field_0x0 + lVar12;
        if (lVar12 != 0) goto LAB_149e82914;
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x68 + lVar12);
    }
  }
  local_140.Value = (TObjectPtr<APCGPartitionActor> *)&local_170;
  local_188 = 0;
  TSet<TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPCGGridDescriptor_const_&>_>
            ((TSet<TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>,TDefaultMapHashableKeyFuncs<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_158,
             (TKeyInitializer<FPCGGridDescriptor_const_&> *)(ulonglong)uVar7,
             (bool *)&local_140.Value);
  lVar12 = (longlong)local_158[0] * 0x70 + *(longlong *)&this_00->field_0x0;
LAB_149e82914:
  uVar7 = FCrc::MemCrc_DEPRECATED(&local_150,0xc,0);
  if (*(int *)(lVar12 + 0x20) != *(int *)(lVar12 + 0x4c)) {
    lVar13 = *(longlong *)(lVar12 + 0x58);
    if (*(longlong *)(lVar12 + 0x58) == 0) {
      lVar13 = lVar12 + 0x50;
    }
    iVar1 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar12 + 0x60) - 1U & uVar7) * 4);
    if (iVar1 != -1) {
      lVar13 = *(longlong *)
                &((TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                   *)(lVar12 + 0x18))->Elements;
      do {
        lVar8 = (longlong)iVar1 * 0x20;
        if (((*(int *)(lVar8 + lVar13) == local_150._s_0.X) &&
            (*(int *)(lVar8 + 4 + lVar13) == local_150._s_0.Y)) &&
           (*(int *)(lVar8 + 8 + lVar13) == local_150._s_0.Z)) {
          if (iVar1 != -1) {
            ReleaseSRWLockExclusive((PSRWLOCK)&this->PartitionActorsMapLock);
            return;
          }
          break;
        }
        iVar1 = *(int *)(lVar8 + 0x18 + lVar13);
      } while (iVar1 != -1);
    }
  }
  local_130 = local_178;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_178 != (APCGPartitionActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_178);
  }
  local_f0 = &local_150;
  local_e8 = &local_130;
  TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Math::TIntVector3<int>_const_&,TObjectPtr<APCGPartitionActor>_&&>_>
            ((TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
              *)(lVar12 + 0x18),&local_140,(bool *)&local_f0);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PartitionActorsMapLock);
  pAVar9 = UPCGSubsystem::GetPCGWorldActorForPartitionActor(this->PCGSubsystem,local_178);
  if (pAVar9 == (APCGWorldActor *)0x0) {
    local_128 = &local_178;
    bVar6 = `FPCGActorAndComponentMapping::RegisterPartitionActor'::__l21::<lambda_1>::operator()
                      (&local_128);
    if (!bVar6) {
      return;
    }
  }
  if (local_170._5_1_ == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
    local_108 = local_170._0_4_;
    local_104 = local_170._4_1_;
    local_103 = local_170._5_1_;
    local_100 = local_168;
    local_118 = local_178;
    local_f8 = local_160;
    if (local_160 != '\0') {
      local_fc = local_164;
    }
    local_d8 = &local_120;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPCGActorAndComponentMapping::RegisterPartitionActor'::__l26::<lambda_2>,void,UPCGComponent_*>
               ::Call;
    local_120 = this;
    local_110 = pAVar9;
    pTVar10 = APCGPartitionActor::GetFixedBounds(local_178,&local_88);
    dVar5 = ((pTVar10->Max).field0_0x0._s_0.X - (pTVar10->Min).field0_0x0._s_0.X) *
            __real_3fe0000000000000;
    local_98 = ((pTVar10->Max).field0_0x0._s_0.Z - (pTVar10->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000;
    dVar4 = ((pTVar10->Max).field0_0x0._s_0.Y - (pTVar10->Min).field0_0x0._s_0.Y) *
            __real_3fe0000000000000;
    local_c8._s_0.Z = local_98 + (pTVar10->Min).field0_0x0._s_0.Z;
    dVar3 = dVar4 + (pTVar10->Min).field0_0x0._s_0.Y;
    local_a8._8_4_ = SUB84(dVar4,0);
    local_a8._0_8_ = dVar5;
    local_a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_c8._s_0.W = 0.0;
    uStack_90 = 0;
    local_c8._8_4_ = SUB84(dVar3,0);
    local_c8._0_8_ = dVar5 + (pTVar10->Min).field0_0x0._s_0.X;
    local_c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    ForAllIntersectingPartitionedComponents
              (this,(FBoxCenterAndExtent *)&local_c8._s_0,
               (TFunctionRef<void___cdecl(UPCGComponent_*)> *)&local_e0);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
  }
  return;
}

// RemapPCGComponent @ 149e84cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGActorAndComponentMapping::RemapPCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1,UPCGComponent *param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  bool local_res10 [8];
  UPCGComponent *local_18;
  UPCGComponent *local_10;
  
  if (((param_1 == (UPCGComponent *)0x0) || (param_2 == (UPCGComponent *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldComponent && NewComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                         ,0x1bf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  local_res10[0] = false;
  bVar2 = UPCGComponent::IsPartitioned(param_1);
  if (bVar2) {
    bVar2 = FPCGComponentOctreeAndMap::RemapComponent
                      (&this->PartitionedOctree,param_1,param_2,local_res10);
  }
  else {
    bVar2 = FPCGComponentOctreeAndMap::RemapComponent
                      (&this->NonPartitionedOctree,param_1,param_2,local_res10);
  }
  if (bVar2) {
    local_18 = param_1;
    local_10 = param_2;
    `FPCGActorAndComponentMapping::RemapPCGComponent'::__l2::<lambda_1>::operator()
              (&local_18,&this->ComponentToPartitionActorsMap,
               &this->ComponentToPartitionActorsMapLock);
    if (((local_res10[0] != false) && (bVar2 = UPCGComponent::IsPartitioned(param_2), bVar2)) &&
       (param_3)) {
      UpdateMappingPCGComponentPartitionActor(this,param_2,true);
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// Tick @ 149ec1ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGActorAndComponentMapping::Tick(FPCGActorAndComponentMapping *this)

{
  return;
}

// UnregisterNonPartitionedPCGComponent @ 149ec3650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::UnregisterNonPartitionedPCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1)

{
  UPCGSubsystem::OnOriginalComponentUnregistered(this->PCGSubsystem,param_1);
  FPCGComponentOctreeAndMap::RemoveComponent(&this->NonPartitionedOctree,param_1);
  return;
}

// UnregisterPCGComponent @ 149ec3690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::UnregisterPCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1,bool param_2)

{
  if (param_1 != (UPCGComponent *)0x0) {
    UnregisterPartitionedPCGComponent(this,param_1);
    UPCGSubsystem::OnOriginalComponentUnregistered(this->PCGSubsystem,param_1);
    FPCGComponentOctreeAndMap::RemoveComponent(&this->NonPartitionedOctree,param_1);
  }
  return;
}

// UnregisterPartitionActor @ 149ec36e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::UnregisterPartitionActor
          (FPCGActorAndComponentMapping *this,APCGPartitionActor *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TBox<double> *pTVar8;
  undefined1 *puVar9;
  longlong lVar10;
  TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStackY_138 [32];
  FPCGGridDescriptor local_108;
  TIntVector3<int> local_f0;
  FPCGActorAndComponentMapping *local_e0;
  APCGPartitionActor *local_d8;
  code *local_d0;
  FPCGActorAndComponentMapping **local_c8;
  TVector4<double>_u_0 local_b8;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((param_1 == (APCGPartitionActor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                         ,0x2da,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  APCGPartitionActor::GetGridCoord(param_1,&local_f0);
  APCGPartitionActor::GetGridDescriptor(param_1,&local_108);
  if (local_108.GridSize == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8631381816680381722>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                       ,0x2e6,"GridDescriptor.GetGridSize() > 0");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (local_108.Hash.bIsSet == false) {
      local_108.Hash.TypedValue = FPCGGridDescriptor::ComputeHash(&local_108);
      local_108.Hash.bIsSet = true;
    }
    if (*(int *)&(this->PartitionActorsMap).field_0x8 !=
        *(int *)&(this->PartitionActorsMap).field_0x34) {
      puVar9 = *(undefined1 **)&(this->PartitionActorsMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->PartitionActorsMap).field_0x38;
      }
      iVar1 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->PartitionActorsMap).field_0x48 - 1U &
                                local_108.Hash.TypedValue) * 4);
      while (iVar1 != -1) {
        lVar10 = (longlong)iVar1 * 0x70;
        bVar6 = FPCGGridDescriptor::operator==
                          ((FPCGGridDescriptor *)(*(longlong *)&this->PartitionActorsMap + lVar10),
                           &local_108);
        if (bVar6) {
          lVar10 = *(longlong *)&this->PartitionActorsMap + lVar10;
          this_00 = (TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                     *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            this_00 = (TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                       *)0x0;
          }
          if (this_00 !=
              (TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
               *)0x0) {
            AcquireSRWLockExclusive((PSRWLOCK)&this->PartitionActorsMapLock);
            if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
              uVar7 = FCrc::MemCrc_DEPRECATED(&local_f0,0xc,0);
              TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
              ::RemoveImpl<UE::Math::TIntVector3<int>_>(this_00,uVar7,&local_f0);
            }
            ReleaseSRWLockExclusive((PSRWLOCK)&this->PartitionActorsMapLock);
          }
          break;
        }
        iVar1 = *(int *)(*(longlong *)&this->PartitionActorsMap + 0x68 + lVar10);
      }
    }
    if (local_108.bIsRuntime == false) {
      AcquireSRWLockExclusive((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
      local_c8 = &local_e0;
      local_d0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGActorAndComponentMapping::UnregisterPartitionActor'::__l18::<lambda_1>,void,UPCGComponent_*>
                 ::Call;
      local_e0 = this;
      local_d8 = param_1;
      pTVar8 = APCGPartitionActor::GetFixedBounds(param_1,&local_78);
      dVar5 = ((pTVar8->Max).field0_0x0._s_0.X - (pTVar8->Min).field0_0x0._s_0.X) *
              __real_3fe0000000000000;
      local_88 = ((pTVar8->Max).field0_0x0._s_0.Z - (pTVar8->Min).field0_0x0._s_0.Z) *
                 __real_3fe0000000000000;
      dVar4 = ((pTVar8->Max).field0_0x0._s_0.Y - (pTVar8->Min).field0_0x0._s_0.Y) *
              __real_3fe0000000000000;
      local_b8._s_0.Z = local_88 + (pTVar8->Min).field0_0x0._s_0.Z;
      dVar3 = dVar4 + (pTVar8->Min).field0_0x0._s_0.Y;
      local_98._8_4_ = SUB84(dVar4,0);
      local_98._0_8_ = dVar5;
      local_98._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_b8._s_0.W = 0.0;
      uStack_80 = 0;
      local_b8._8_4_ = SUB84(dVar3,0);
      local_b8._0_8_ = dVar5 + (pTVar8->Min).field0_0x0._s_0.X;
      local_b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      ForAllIntersectingPartitionedComponents
                (this,(FBoxCenterAndExtent *)&local_b8._s_0,
                 (TFunctionRef<void___cdecl(UPCGComponent_*)> *)&local_d0);
      ReleaseSRWLockExclusive((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
    }
  }
  return;
}

// UnregisterPartitionedPCGComponent @ 149ec39c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::UnregisterPartitionedPCGComponent
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  *pTVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  UPCGSubsystem::OnOriginalComponentUnregistered(this->PCGSubsystem,param_1);
  bVar4 = FPCGComponentOctreeAndMap::RemoveComponent(&this->PartitionedOctree,param_1);
  if ((bVar4) && (param_1->GenerationTrigger != GenerateAtRuntime)) {
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar11 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    AcquireSRWLockExclusive((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
    pTVar5 = TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
             ::Find((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                     *)&this->ComponentToPartitionActorsMap,param_1);
    if (pTVar5 != (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                   *)0x0) {
      if ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
           *)local_98 != pTVar5) {
        TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
                  ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
                    *)local_98,pTVar5);
      }
      TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
      ::Remove((TMapBase<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>,0>_>
                *)&this->ComponentToPartitionActorsMap,param_1);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ComponentToPartitionActorsMapLock);
    uVar9 = local_70;
    uStack_f4 = 1;
    uStack_e4 = uVar11;
    iStack_f8 = 0;
    if (local_70 != 0) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar12 = *puVar10;
      uVar11 = 0;
      while (uVar12 == 0) {
        lVar7 = (longlong)iStack_f8;
        uVar11 = uVar11 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        uStack_e4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
        goto LAB_149ec3b31;
        uVar12 = (puVar10 + 1)[lVar7];
      }
      uStack_f4 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_d0 = (int)lVar7;
      uStack_e4 = local_d0 + -1 + uVar11;
      if ((int)local_70 < (int)uStack_e4) {
        uStack_e4 = local_70;
      }
    }
LAB_149ec3b31:
    local_100 = (longlong *)local_98;
    local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar12 = local_70 & 0xffffffe0;
    iStack_d8 = local_98._8_4_ - local_64;
    uStack_e8 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_e4;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(uStack_f4,iStack_f8);
    iVar8 = (int)local_70 >> 5;
    TStack_c0._28_4_ = uStack_e4;
    TStack_c0.BaseBitIndex = uVar11;
    uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
    bVar6 = (byte)local_70;
    local_e0 = uVar11;
    uStack_dc = uStack_e4;
    local_c8 = local_100;
    TStack_c0.Array = local_f0;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != local_70) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar11 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
      while (uVar11 == 0) {
        lVar7 = (longlong)iVar8;
        uVar12 = uVar12 + 0x20;
        iVar8 = iVar8 + 1;
        uVar9 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_149ec3c3c;
        uVar11 = (puVar10 + 1)[lVar7];
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar12;
      if ((int)local_70 < (int)uVar9) {
        uVar9 = local_70;
      }
    }
LAB_149ec3c3c:
    while( true ) {
      plVar3 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<TObjectPtr<APCGPartitionActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (((TStack_c0.CurrentBitIndex == uVar9) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar3 == (longlong *)local_98)) break;
      APCGPartitionActor::RemoveGraphInstance
                (*(APCGPartitionActor **)(*plVar3 + (longlong)TStack_c0.CurrentBitIndex * 0x10),
                 param_1);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    iVar8 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
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

// UpdateMappingPCGComponentPartitionActor @ 149ec44b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGActorAndComponentMapping::UpdateMappingPCGComponentPartitionActor
          (FPCGActorAndComponentMapping *this,UPCGComponent *param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UPCGGraph *pUVar5;
  APCGWorldActor *pAVar6;
  ForElementType<unsigned_int> FVar7;
  ulonglong uVar8;
  ForElementType<unsigned_int> FVar9;
  undefined1 uVar10;
  undefined1 auStackY_198 [32];
  bool local_168;
  undefined1 local_167 [3];
  undefined1 local_164 [4];
  FPCGActorAndComponentMapping *local_160;
  TOptional<unsigned_int> local_158;
  TBox<double> *local_150;
  APCGWorldActor *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  FPCGGridDescriptor local_130;
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> local_c8;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((char)this->PCGSubsystem->_padding_ != '\0') {
    if ((param_1 == (UPCGComponent *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InComponent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                           ,0x348,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((!param_2) || (bVar4 = UE::GetIsEditorLoadingPackage(), bVar4)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    pUVar5 = UPCGComponent::GetGraph(param_1);
    if (((pUVar5 != (UPCGGraph *)0x0) &&
        (FPCGComponentOctreeAndMap::GetBounds(&this->PartitionedOctree,&local_78,param_1),
        local_78.IsValid != '\0')) &&
       (pAVar6 = UPCGSubsystem::GetPCGWorldActor(this->PCGSubsystem),
       pAVar6 != (APCGWorldActor *)0x0)) {
      local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_c8.ArrayNum = 0;
      local_168 = false;
      local_c8.ArrayMax = 0xd;
      pUVar5 = UPCGComponent::GetGraph(param_1);
      bVar4 = PCGHelpers::GetGenerationGridSizes(pUVar5,pAVar6,&local_c8,&local_168);
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8631381816680381602>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGActorAndComponentMapping.cpp"
                             ,0x35e,
                             "PCGHelpers::GetGenerationGridSizes(InComponent->GetGraph(), WorldActor, GridSizes, bHasUnbounded)"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar3 = local_c8.ArrayNum;
      uVar8 = (ulonglong)local_c8.ArrayNum;
      local_118._0_8_ = (FScriptContainerElement *)0x0;
      local_118._8_8_ = 0;
      FVar7 = (ForElementType<unsigned_int>)&local_c8;
      if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_c8.AllocatorInstance.SecondaryData;
      }
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e4 = 0;
      local_d8 = (ForElementType<FSetElementId>)0x0;
      lVar1 = uVar8 * 4;
      local_d0 = 0;
      local_ec = 0x80;
      FVar9 = (ForElementType<unsigned_int>)&local_c8;
      if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_c8.AllocatorInstance.SecondaryData;
      }
      local_e8 = 0xffffffff;
      while( true ) {
        if ((uint)uVar8 != iVar3) {
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_167);
        }
        if (FVar9 == (ForElementType<unsigned_int>)((longlong)FVar7 + lVar1)) break;
        UPCGComponent::GetGridDescriptor(param_1,&local_130,*(uint *)FVar9);
        TSet<FPCGGridDescriptor,DefaultKeyFuncs<FPCGGridDescriptor,0>,FDefaultSetAllocator>::
        Emplace<FPCGGridDescriptor>
                  ((TSet<FPCGGridDescriptor,DefaultKeyFuncs<FPCGGridDescriptor,0>,FDefaultSetAllocator>
                    *)local_118,(FPCGGridDescriptor *)local_164,(bool *)&local_130);
        uVar8 = (ulonglong)(uint)local_c8.ArrayNum;
        FVar9 = (ForElementType<unsigned_int>)((longlong)FVar9 + 4);
      }
      local_150 = &local_78;
      local_140 = local_118;
      local_160 = this;
      local_158 = (TOptional<unsigned_int>)param_1;
      local_148 = pAVar6;
      local_138 = uVar10;
      `FPCGActorAndComponentMapping::UpdateMappingPCGComponentPartitionActor'::__l21::<lambda_2>::
      operator()(&local_160);
      local_d0 = 0;
      if (local_d8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8);
      }
      iVar3 = SUB84(local_118._8_8_,4);
      local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
      }
      local_e8 = 0xffffffff;
      local_e4 = 0;
      local_f0 = 0;
      if (0x80 < local_ec) {
        local_ec = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._0_8_);
      }
      if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// operator() @ 1505494e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`FPCGActorAndComponentMapping::RegisterPartitionActor'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ULevel *pUVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar6 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8631381816680381791>);
  if (bVar3) {
    pUVar5 = AActor::GetLevel((AActor *)**(undefined8 **)this);
    bVar6 = pUVar5 != (ULevel *)0x0;
    if (bVar6) {
      pUVar5 = AActor::GetLevel((AActor *)**(undefined8 **)this);
      local_res10 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar2 = true;
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8631381816680381791>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1505495c2;
    }
  }
  bVar3 = false;
LAB_1505495c2:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

