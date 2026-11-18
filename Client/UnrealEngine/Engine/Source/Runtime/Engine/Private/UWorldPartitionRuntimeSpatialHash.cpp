// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// StaticClass @ 148aaab40

UClass * __cdecl UWorldPartitionRuntimeSpatialHash::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeSpatialHash,0x138,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeSpatialHash>,local_res8,
               UWorldPartitionRuntimeHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton;
}

// UWorldPartitionRuntimeSpatialHash @ 148ab5da0

UWorldPartitionRuntimeSpatialHash * __thiscall
UWorldPartitionRuntimeSpatialHash::UWorldPartitionRuntimeSpatialHash
          (UWorldPartitionRuntimeSpatialHash *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeSpatialHash__6B_;
  (this->Settings).bUseAlignedGridLevels = true;
  (this->Settings).bSnapNonAlignedGridLevelsToLowerLevels = true;
  (this->StreamingGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingGrids).ArrayNum = 0;
  (this->StreamingGrids).ArrayMax = 0;
  *(undefined8 *)&this->NameToGridMapping = 0;
  *(undefined8 *)&(this->NameToGridMapping).field_0x8 = 0;
  *(undefined8 *)&(this->NameToGridMapping).field_0x20 = 0;
  *(undefined4 *)&(this->NameToGridMapping).field_0x28 = 0;
  *(undefined4 *)&(this->NameToGridMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToGridMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameToGridMapping).field_0x34 = 0;
  *(undefined8 *)&(this->NameToGridMapping).field_0x40 = 0;
  *(undefined4 *)&(this->NameToGridMapping).field_0x48 = 0;
  *(undefined8 *)&this->WorldAssetStreamingObjects = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x8 = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x20 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x28 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x34 = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x40 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  return this;
}

// UWorldPartitionRuntimeSpatialHash @ 148ab5e90

UWorldPartitionRuntimeSpatialHash * __thiscall
UWorldPartitionRuntimeSpatialHash::UWorldPartitionRuntimeSpatialHash
          (UWorldPartitionRuntimeSpatialHash *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeSpatialHash__6B_;
  (this->Settings).bUseAlignedGridLevels = true;
  (this->Settings).bSnapNonAlignedGridLevelsToLowerLevels = true;
  (this->StreamingGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingGrids).ArrayNum = 0;
  (this->StreamingGrids).ArrayMax = 0;
  *(undefined8 *)&this->NameToGridMapping = 0;
  *(undefined8 *)&(this->NameToGridMapping).field_0x8 = 0;
  *(undefined8 *)&(this->NameToGridMapping).field_0x20 = 0;
  *(undefined4 *)&(this->NameToGridMapping).field_0x28 = 0;
  *(undefined4 *)&(this->NameToGridMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToGridMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameToGridMapping).field_0x34 = 0;
  *(undefined8 *)&(this->NameToGridMapping).field_0x40 = 0;
  *(undefined4 *)&(this->NameToGridMapping).field_0x48 = 0;
  this->bIsNameToGridMappingDirty = true;
  *(undefined8 *)&this->WorldAssetStreamingObjects = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x8 = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x20 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x28 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x34 = 0;
  *(undefined8 *)&(this->WorldAssetStreamingObjects).field_0x40 = 0;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  return this;
}

// ~UWorldPartitionRuntimeSpatialHash @ 148ab7730

void __thiscall
UWorldPartitionRuntimeSpatialHash::~UWorldPartitionRuntimeSpatialHash
          (UWorldPartitionRuntimeSpatialHash *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeSpatialHash__6B_;
  *(undefined4 *)&(this->WorldAssetStreamingObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldAssetStreamingObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldAssetStreamingObjects);
  *(undefined4 *)&(this->NameToGridMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameToGridMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSpatialHashStreamingGrid_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSpatialHashStreamingGrid_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSpatialHashStreamingGrid_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToGridMapping);
  DestructItems<FSpatialHashStreamingGrid,int>
            ((FSpatialHashStreamingGrid *)(this->StreamingGrids).AllocatorInstance.Data,
             (this->StreamingGrids).ArrayNum);
  pFVar2 = (this->StreamingGrids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UWorldPartitionRuntimeHash__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 148ab8e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UWorldPartitionRuntimeSpatialHash::ForEachStreamingCellsQuery'::__l2::<lambda_1>::operator()
          (void *this,FSpatialHashStreamingGrid *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
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
  bVar4 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                    (*(UWorldPartitionRuntimeHash **)this,param_1->bClientOnlyVisible);
  if (bVar4) {
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar12 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    if (GForceRuntimeSpatialHashZCulling == 0) {
      uVar11 = false;
    }
    else if (GForceRuntimeSpatialHashZCulling == 1) {
      uVar11 = true;
    }
    else {
      uVar11 = *(undefined1 *)(*(longlong *)this + 0x78);
    }
    FSpatialHashStreamingGrid::GetCells
              (param_1,*(FWorldPartitionStreamingQuerySource **)((longlong)this + 8),
               (TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                *)local_98,(bool)uVar11,
               (FWorldPartitionQueryCache *)**(undefined8 **)((longlong)this + 0x10));
    uVar9 = local_70;
    uStack_104 = 1;
    uStack_f4 = uVar12;
    iStack_108 = 0;
    if (local_70 != 0) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar13 = *puVar10;
      uVar12 = 0;
      while (uVar13 == 0) {
        lVar7 = (longlong)iStack_108;
        uVar12 = uVar12 + 0x20;
        iStack_108 = iStack_108 + 1;
        uStack_f4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_108)
        goto LAB_148ab8fa1;
        uVar13 = (puVar10 + 1)[lVar7];
      }
      uStack_104 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_104 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_e0 = (int)lVar7;
      uStack_f4 = local_e0 + -1 + uVar12;
      if ((int)local_70 < (int)uStack_f4) {
        uStack_f4 = local_70;
      }
    }
LAB_148ab8fa1:
    local_110 = (longlong *)local_98;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar13 = local_70 & 0xffffffe0;
    iStack_e8 = local_98._8_4_ - local_64;
    uStack_f8 = 0xffffffff;
    TStack_c8.CurrentBitIndex = uStack_f4;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    TStack_c8._padding_ = CONCAT44(uStack_104,iStack_108);
    iVar8 = (int)local_70 >> 5;
    TStack_c8._28_4_ = uStack_f4;
    TStack_c8.BaseBitIndex = uVar12;
    uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
    bVar6 = (byte)local_70;
    local_f0 = uVar12;
    uStack_ec = uStack_f4;
    local_d0 = local_110;
    TStack_c8.Array = local_100;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar9 != local_70) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar12 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
      while (uVar12 == 0) {
        lVar7 = (longlong)iVar8;
        uVar13 = uVar13 + 0x20;
        iVar8 = iVar8 + 1;
        uVar9 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_148ab90ac;
        uVar12 = (puVar10 + 1)[lVar7];
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar13;
      if ((int)local_70 < (int)uVar9) {
        uVar9 = local_70;
      }
    }
LAB_148ab90ac:
    while( true ) {
      plVar2 = local_d0;
      if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
        `TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      if (((TStack_c8.CurrentBitIndex == uVar9) &&
          (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar2 == (longlong *)local_98)) break;
      plVar2 = *(longlong **)(*plVar2 + (longlong)TStack_c8.CurrentBitIndex * 0x10);
      cVar5 = (**(code **)(*plVar2 + 0x2f0))(plVar2);
      if ((cVar5 == '\0') &&
         (local_d8 = plVar2,
         cVar5 = (*(code *)**(undefined8 **)((longlong)this + 0x18))
                           ((*(undefined8 **)((longlong)this + 0x18))[1]), cVar5 == '\0')) break;
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
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

// operator() @ 148ab92a0

void __thiscall
`UWorldPartitionRuntimeSpatialHash::GetFilteredStreamingGrids'::__l2::<lambda_1>::operator()
          (void *this,FSpatialHashStreamingGrid *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSpatialHashStreamingGrid *local_18 [2];
  
  bVar4 = UWorldPartitionRuntimeHash::IsCellRelevantFor
                    (*(UWorldPartitionRuntimeHash **)this,param_1->bClientOnlyVisible);
  if (bVar4) {
    bVar4 = FWorldPartitionDebugHelper::IsDebugRuntimeHashGridShown(param_1->GridName);
    if (bVar4) {
      pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
      local_18[0] = param_1;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(FSpatialHashStreamingGrid **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
    }
  }
  return;
}

// operator() @ 148ab9390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UWorldPartitionRuntimeSpatialHash::RegisterWorldAssetStreaming'::__l2::<lambda_1>::operator()
          (void *this,FSpatialHashStreamingGrid *param_1,TSoftObjectPtr<UWorld> *param_2,
          bool param_3)

{
  TArray<FSpatialHashStreamingGridLevel,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  uint *puVar6;
  UWorldPartitionRuntimeHash *this_01;
  UObject *pUVar7;
  code *pcVar8;
  double dVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  TSoftObjectPtr<UWorld> *pTVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  FColor FVar21;
  int iVar22;
  uint uVar23;
  undefined4 extraout_var;
  undefined8 uVar25;
  undefined8 uVar26;
  FArchive *pFVar27;
  UClass *pUVar28;
  UClass *pUVar29;
  UWorldPartitionRuntimeLevelStreamingCell *this_02;
  UWorldPartitionRuntimeCellDataSpatialHash *pUVar30;
  FGridCell *pFVar31;
  uint uVar32;
  FSpatialHashStreamingGrid *pFVar33;
  FGrid2D *this_03;
  uint uVar34;
  undefined8 uVar35;
  longlong lVar36;
  UWorldPartitionRuntimeLevelStreamingCell *pUVar37;
  double dVar38;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auStackY_488 [32];
  FGridCell *local_440;
  FString local_438;
  FString local_428;
  FSpatialHashStreamingGrid *local_418;
  TSoftObjectPtr<UWorld> *local_410;
  TIntVector2<__int64>_u_0 local_408;
  FString local_3f8;
  TIntVector2<__int64>_u_0 local_3e8;
  FGuid local_3d8;
  FName local_3c0;
  FSpatialHashStreamingGrid *local_3b8;
  FName local_3b0;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  long64 local_398;
  FString local_390;
  FString local_380;
  FString local_370;
  FGrid2D *local_360;
  FGridCell **local_358;
  code *local_350;
  FGrid2D **local_348;
  TVector2<double>_u_0 local_340;
  TIntVector2<__int64>_u_0 local_330;
  FString local_320;
  TVector2<double>_u_0 local_310;
  double local_300;
  double local_2f8;
  TVector2<double>_u_0 local_2e8;
  TVector2<double>_u_0 local_2d8;
  undefined1 local_2c8;
  TIntVector2<__int64> local_2c0;
  TIntVector2<__int64>_u_0 local_2b0;
  FGuid local_2a0;
  TIntVector2<__int64>_u_0 local_290;
  FString local_280;
  FString local_270;
  TIntVector3<__int64>_u_0 local_260;
  double local_248;
  double dStack_240;
  undefined8 local_238;
  double local_230;
  double dStack_228;
  FArchiveState local_218;
  FMD5 local_188;
  FSquare2DGridHelper local_128;
  undefined1 local_b8;
  uint local_b7;
  uint uStack_b3;
  uint uStack_af;
  uint uStack_ab;
  ulonglong local_a0;
  byte *pbVar24;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_418 = param_1;
  local_410 = param_2;
  if ((param_1 == (FSpatialHashStreamingGrid *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceGrid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                          ,0x811,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    uVar19 = (*pcVar8)();
    return (bool)uVar19;
  }
  FSquare2DGridHelper::FSquare2DGridHelper
            (&local_128,&param_1->WorldBounds,&param_1->Origin,(longlong)param_1->CellSize,
             (param_1->Settings).bUseAlignedGridLevels);
  lVar36 = *(longlong *)((longlong)this + 0x10);
  iVar20 = *(int *)(lVar36 + 0x1d0);
  if (iVar20 == *(int *)(lVar36 + 0x1d4)) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8b0,(ForAnyElementType *)(lVar36 + 0x1c8),(int *)(lVar36 + 0x1d4));
  }
  *(int *)(lVar36 + 0x1d0) = iVar20 + 1;
  pFVar33 = (FSpatialHashStreamingGrid *)(*(longlong *)(lVar36 + 0x1c8) + (longlong)iVar20 * 0xb0);
  local_3b8 = pFVar33;
  DefaultConstructItems<FSpatialHashStreamingGrid,int>(pFVar33,1);
  pFVar33->Settings = param_1->Settings;
  pFVar33->GridName = param_1->GridName;
  dVar9 = (param_1->Origin).field0_0x0._s_0.Y;
  (pFVar33->Origin).field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (pFVar33->Origin).field0_0x0._s_0.Y = dVar9;
  (pFVar33->Origin).field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  pFVar33->CellSize = param_1->CellSize;
  dVar9 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  (pFVar33->WorldBounds).Min.field0_0x0._s_0.X = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  (pFVar33->WorldBounds).Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
  (pFVar33->WorldBounds).Min.field0_0x0._s_0.Z = (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  (pFVar33->WorldBounds).Max.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
  (pFVar33->WorldBounds).Max.field0_0x0._s_0.Y = (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
  (pFVar33->WorldBounds).Max.field0_0x0._s_0.Z = dVar9;
  uVar10 = (param_1->WorldBounds).Pad[0];
  uVar11 = (param_1->WorldBounds).Pad[1];
  uVar12 = (param_1->WorldBounds).Pad[2];
  uVar13 = (param_1->WorldBounds).Pad[3];
  uVar14 = (param_1->WorldBounds).Pad[4];
  uVar15 = (param_1->WorldBounds).Pad[5];
  uVar16 = (param_1->WorldBounds).Pad[6];
  (pFVar33->WorldBounds).IsValid = (param_1->WorldBounds).IsValid;
  (pFVar33->WorldBounds).Pad[0] = uVar10;
  (pFVar33->WorldBounds).Pad[1] = uVar11;
  (pFVar33->WorldBounds).Pad[2] = uVar12;
  (pFVar33->WorldBounds).Pad[3] = uVar13;
  (pFVar33->WorldBounds).Pad[4] = uVar14;
  (pFVar33->WorldBounds).Pad[5] = uVar15;
  (pFVar33->WorldBounds).Pad[6] = uVar16;
  pFVar33->LoadingRange = param_1->LoadingRange;
  pFVar33->bBlockOnSlowStreaming = param_1->bBlockOnSlowStreaming;
  FVar21 = FColor::MakeRandomColor();
  iVar22 = local_128.Levels.ArrayNum;
  pbVar24 = (byte *)CONCAT44(extraout_var,FVar21.field0_0x0);
  this_00 = &pFVar33->GridLevels;
  piVar1 = &(pFVar33->GridLevels).ArrayNum;
  local_3a8 = FLinearColor::sRGBToLinearTable[pbVar24[2]];
  fStack_3a4 = FLinearColor::sRGBToLinearTable[pbVar24[1]];
  fStack_3a0 = FLinearColor::sRGBToLinearTable[*pbVar24];
  fStack_39c = (float)pbVar24[3] * __real_3b808081;
  (pFVar33->DebugColor).field0_0x0._s_0.R = local_3a8;
  (pFVar33->DebugColor).field0_0x0._s_0.G = fStack_3a4;
  (pFVar33->DebugColor).field0_0x0._s_0.B = fStack_3a0;
  (pFVar33->DebugColor).field0_0x0._s_0.A = fStack_39c;
  pFVar33->bClientOnlyVisible = param_1->bClientOnlyVisible;
  iVar20 = *piVar1;
  if (iVar20 < local_128.Levels.ArrayNum) {
    iVar20 = local_128.Levels.ArrayNum - iVar20;
    iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,8,iVar20,&this_00->AllocatorInstance,piVar1,
                        &(pFVar33->GridLevels).ArrayMax);
    DefaultConstructItems<FSpatialHashStreamingGridLevel,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar22 * 0x60,iVar20);
  }
  else {
    if (local_128.Levels.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_128.Levels.ArrayNum);
    }
    if (local_128.Levels.ArrayNum < iVar20) {
      iVar20 = iVar20 - local_128.Levels.ArrayNum;
      if (iVar20 < 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar18) {
          pcVar8 = (code *)swi(3);
          uVar19 = (*pcVar8)();
          return (bool)uVar19;
        }
      }
      else if (iVar20 == 0) goto LAB_148ab9635;
      TArray<FSpatialHashStreamingGridLevel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (this_00,iVar22,iVar20);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,&this_00->AllocatorInstance,*piVar1,&(pFVar33->GridLevels).ArrayMax);
    }
  }
LAB_148ab9635:
  uVar32 = local_128.Levels.ArrayNum;
  dVar9 = __real_3fe0000000000000;
  lVar36 = *(longlong *)this;
  pUVar37 = (UWorldPartitionRuntimeLevelStreamingCell *)0x0;
  local_440 = (FGridCell *)0x0;
  if (*(char *)(lVar36 + 0x100) == '\0') {
    dVar38 = *(double *)(lVar36 + 200);
    dVar40 = *(double *)(lVar36 + 0xd0);
    dVar3 = *(double *)(lVar36 + 0xb0);
    dVar4 = *(double *)(lVar36 + 0xb8);
    if ((local_128.Levels.ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar19 = (*pcVar8)();
      return (bool)uVar19;
    }
    local_340._s_0.X = (dVar38 + dVar3) * dVar9;
    local_340._s_0.Y = (dVar40 + dVar4) * dVar9;
    bVar18 = FSquare2DGridHelper::FGrid2D::GetCellCoords
                       ((FGrid2D *)local_128.Levels.AllocatorInstance.Data,
                        (TVector2<double> *)&local_340._s_0,&local_2c0);
    param_1 = param_1;
    if (bVar18) {
      if ((local_128.Levels.ArrayNum < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        uVar19 = (*pcVar8)();
        return (bool)uVar19;
      }
      local_440 = FSquare2DGridHelper::FGridLevel::GetCell
                            ((FGridLevel *)local_128.Levels.AllocatorInstance.Data,&local_2c0);
      param_1 = param_1;
    }
LAB_148ab999e:
    uVar32 = local_128.Levels.ArrayNum;
    if (local_440 == (FGridCell *)0x0) goto LAB_148ab99a9;
  }
  else {
    dVar40 = *(double *)(lVar36 + 200) - *(double *)(lVar36 + 0xb0);
    dVar38 = *(double *)(lVar36 + 0xd0) - *(double *)(lVar36 + 0xb8);
    if (dVar38 <= dVar40) {
      dVar38 = dVar40;
    }
    dVar38 = log(dVar38 / (double)local_128.CellSize);
    auVar39._0_8_ = dVar38 * __real_3ff71547652b82fe;
    auVar39._8_8_ = extraout_XMM0_Qb;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = auVar39._0_8_;
    auVar39 = roundpd(auVar39,auVar41,2);
    dVar38 = auVar39._0_8_;
    if (dVar38 <= 0.0) {
      dVar38 = 0.0;
    }
    uVar34 = (uint)dVar38;
    if ((int)uVar34 < (int)uVar32) {
      lVar36 = (longlong)(int)uVar34 * 0x88;
      do {
        uVar23 = 0;
        if ((int)uVar34 < (int)uVar32) {
          uVar23 = ~uVar34 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          uVar19 = (*pcVar8)();
          return (bool)uVar19;
        }
        lVar5 = *(longlong *)this;
        this_03 = (FGrid2D *)(local_128.Levels.AllocatorInstance.Data + lVar36);
        local_2c8 = 1;
        local_2e8._s_0.X = *(double *)(lVar5 + 0xb0);
        local_2e8._s_0.Y = *(double *)(lVar5 + 0xb8);
        local_2d8._s_0.X = *(double *)(lVar5 + 200);
        local_2d8._s_0.Y = *(double *)(lVar5 + 0xd0);
        local_230 = local_2d8._s_0.X;
        dStack_228 = local_2d8._s_0.Y;
        FSquare2DGridHelper::FGrid2D::GetCellCoords
                  (this_03,(TVector2<double> *)&local_2e8._s_0,
                   (TIntVector2<__int64> *)&local_408._s_0);
        uVar26 = local_408._s_0.Y;
        if ((((local_408._s_0.X < this_03->GridSize) && (local_408._s_0.Y < this_03->GridSize)) &&
            (FSquare2DGridHelper::FGrid2D::GetCellCoords
                       (this_03,(TVector2<double> *)&local_2d8._s_0,
                        (TIntVector2<__int64> *)&local_3e8._s_0), -1 < local_3e8._s_0.X)) &&
           (-1 < local_3e8._s_0.Y)) {
          uVar35 = this_03->GridSize + -1;
          uVar25 = uVar35;
          if (local_408._s_0.X < (longlong)uVar35) {
            uVar25 = local_408._s_0.X;
          }
          local_408._s_0.X = (long64)pUVar37;
          if (0 < (longlong)uVar25) {
            local_408._s_0.X = uVar25;
          }
          uVar25 = uVar35;
          if ((longlong)uVar26 < (longlong)uVar35) {
            uVar25 = uVar26;
          }
          local_408._s_0.Y = (long64)pUVar37;
          if (0 < (longlong)uVar25) {
            local_408._s_0.Y = uVar25;
          }
          uVar26 = uVar35;
          if (local_3e8._s_0.X < (longlong)uVar35) {
            uVar26 = local_3e8._s_0.X;
          }
          local_3e8._s_0.X = (long64)pUVar37;
          if (0 < (longlong)uVar26) {
            local_3e8._0_8_ = uVar26;
          }
          if (local_3e8._s_0.Y < (longlong)uVar35) {
            uVar35 = local_3e8._s_0.Y;
          }
          local_3e8._8_8_ = pUVar37;
          if (0 < (longlong)uVar35) {
            local_3e8._8_8_ = uVar35;
          }
          if ((((int)local_3e8._s_0.Y - (int)local_408._s_0.Y) + 1) *
              (((int)local_3e8._s_0.X - (int)local_408._s_0.X) + 1) == 1) {
            local_358 = &local_440;
            local_348 = &local_360;
            local_350 = UE::Core::Private::Function::
                        TFunctionRefCaller<``UWorldPartitionRuntimeSpatialHash::RegisterWorldAssetStreaming'::__l2::<lambda_1>::operator()'::__l18::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
                        ::Call;
            local_360 = this_03;
            FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells
                      (this_03,(TBox<double> *)(*(longlong *)this + 0xb0),
                       (TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *)
                       &local_350);
            param_1 = local_418;
            break;
          }
        }
        uVar34 = uVar34 + 1;
        lVar36 = lVar36 + 0x88;
        param_1 = local_418;
        uVar32 = local_128.Levels.ArrayNum;
      } while ((int)uVar34 < local_128.Levels.ArrayNum);
      goto LAB_148ab999e;
    }
LAB_148ab99a9:
    uVar34 = 0;
    if ((int)(uVar32 - 1) < (int)uVar32) {
      uVar34 = ~(uVar32 - 1) >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar32 = local_128.Levels.ArrayNum, bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar19 = (*pcVar8)();
      return (bool)uVar19;
    }
    local_2b0._s_0.X = 0;
    local_2b0._s_0.Y = 0;
    local_440 = FSquare2DGridHelper::FGridLevel::GetCell
                          ((FGridLevel *)
                           (local_128.Levels.AllocatorInstance.Data +
                           (longlong)(int)(uVar32 - 1) * 0x88),
                           (TIntVector2<__int64> *)&local_2b0._s_0);
  }
  local_3c0 = param_1->GridName;
  local_2a0._0_8_ = *(undefined8 *)(*(longlong *)this + 0x40);
  local_2a0._8_8_ = *(undefined8 *)(*(longlong *)this + 0x48);
  FArchiveState::FArchiveState(&local_218);
  local_218._padding_ = (longlong)&___7FArchiveMD5__6B_;
  FMD5::FMD5(&local_188);
  (**(code **)(local_218._padding_ + 200))(&local_218,0);
  (**(code **)(local_218._padding_ + 0xd8))(&local_218,1);
  (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
  pFVar27 = (FArchive *)(**(code **)(local_218._padding_ + 0x178))(&local_218,&local_3c0);
  ::operator<<(pFVar27,&local_2a0);
  local_b8 = 0;
  FMD5::Final(&local_188,(uchar *)&local_b7);
  local_b8 = 1;
  local_3d8.A = local_b7;
  local_3d8.B = uStack_b3;
  local_3d8.C = uStack_af;
  local_3d8.D = uStack_ab;
  if ((((uStack_ab == 0 && uStack_af == 0) && uStack_b3 == 0) && local_b7 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("CellGuid.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                          ,0x84c,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    uVar19 = (*pcVar8)();
    return (bool)uVar19;
  }
  if (!param_3) {
    puVar6 = *(uint **)((longlong)this + 8);
    *puVar6 = local_3d8.A;
    puVar6[1] = local_3d8.B;
    puVar6[2] = local_3d8.C;
    puVar6[3] = local_3d8.D;
  }
  local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.Data.ArrayNum = 0;
  local_428.Data.ArrayMax = 0;
  FGuid::AppendString(&local_3d8,&local_428,Digits);
  ::FString::PrintfImpl(&local_3f8,L"InjectedCell_%s");
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  lVar36 = *(longlong *)this;
  this_01 = *(UWorldPartitionRuntimeHash **)((longlong)this + 0x18);
  pUVar7 = *(UObject **)((longlong)this + 0x10);
  pUVar28 = UWorldPartitionRuntimeCellDataSpatialHash::StaticClass();
  pUVar29 = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
  this_02 = (UWorldPartitionRuntimeLevelStreamingCell *)
            UWorldPartitionRuntimeHash::CreateRuntimeCell
                      (this_01,pUVar29,pUVar28,&local_3f8,(FString *)(lVar36 + 0xf0),pUVar7);
  if (this_02 == (UWorldPartitionRuntimeLevelStreamingCell *)0x0) {
LAB_148ab9c1c:
    this_02 = pUVar37;
  }
  else {
    pUVar28 = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
    iVar20 = (int)pUVar28->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar20) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar28->_padding_)) goto LAB_148ab9c1c;
  }
  if (this_02 == (UWorldPartitionRuntimeLevelStreamingCell *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Math::TTransform<double>::ToString
                ((TTransform<double> *)(*(longlong *)this + 0x50),&local_270);
      FSoftObjectPath::ToString((FSoftObjectPath *)&(local_410->SoftObjectPtr).field_0x8,&local_370)
      ;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
LAB_148aba0d7:
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar30 = CastChecked<UWorldPartitionRuntimeCellDataSpatialHash,UWorldPartitionRuntimeCellData>
                        ((TObjectPtr<UWorldPartitionRuntimeCellData> *)&this_02->_padding_,
                         NullChecked);
    local_398 = (local_440->Coords).field0_0x0._s_0.Z;
    local_330._s_0.X = (local_440->Coords).field0_0x0._s_0.X;
    local_330._s_0.Y = (local_440->Coords).field0_0x0._s_0.Y;
    uVar32 = (uint)local_398;
    lVar36 = (longlong)(int)(uint)local_398;
    uVar34 = 0;
    if ((int)(uint)local_398 < local_128.Levels.ArrayNum) {
      uVar34 = ~(uint)local_398 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar19 = (*pcVar8)();
      return (bool)uVar19;
    }
    bVar18 = FSquare2DGridHelper::FGrid2D::GetCellBounds
                       ((FGrid2D *)(local_128.Levels.AllocatorInstance.Data + lVar36 * 0x88),
                        (TIntVector2<__int64> *)&local_330._s_0,(TBox2<double> *)&local_310._s_0,
                        true);
    if ((!bVar18) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("TempLevel.GetCellBounds(FGridCellCoord2(CellCoordX, CellCoordY), CellBounds)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                            ,0x85f,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar19 = (*pcVar8)();
      return (bool)uVar19;
    }
    dVar38 = (local_300 - local_310._s_0.X) * dVar9;
    if ((__real_47efffffe0000000 <= dVar38) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("CellExtent < (3.402823466e+38F)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                            ,0x861,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar19 = (*pcVar8)();
      return (bool)uVar19;
    }
    pFVar33 = local_3b8;
    *(uint *)((longlong)&pUVar30->_padding_ + 4) = uVar32;
    local_238 = 0;
    local_248 = (local_310._s_0.X + local_300) * dVar9;
    dStack_240 = (local_310._s_0.Y + local_2f8) * dVar9;
    (pUVar30->Position).field0_0x0._s_0.X = local_248;
    (pUVar30->Position).field0_0x0._s_0.Y = dStack_240;
    (pUVar30->Position).field0_0x0._s_0.Z = 0.0;
    pUVar30->Extent = (float)dVar38;
    pUVar30->_padding_ = (longlong)local_3b8->GridName;
    ::FString::ConcatFF(&local_320,&local_3f8,(FString *)(*(longlong *)this + 0xf0));
    local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_438.Data.ArrayNum = 0;
    local_438.Data.ArrayMax = 0;
    ::FString::operator=(&local_438,&local_320);
    plVar2 = &pUVar30->_padding_;
    if ((FString *)plVar2 != &local_438) {
      if ((void *)*plVar2 != (void *)0x0) {
        FMemory::Free((void *)*plVar2);
      }
      *plVar2 = (longlong)local_438.Data.AllocatorInstance.Data;
      *(int *)&pUVar30->_padding_ = local_438.Data.ArrayNum;
      *(int *)((longlong)&pUVar30->_padding_ + 4) = local_438.Data.ArrayMax;
      local_438.Data.ArrayNum = 0;
      local_438.Data.ArrayMax = 0;
      local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
    lVar36 = *(longlong *)this;
    lVar5 = *(longlong *)(lVar36 + 0xb8);
    pUVar30->_padding_ = *(longlong *)(lVar36 + 0xb0);
    pUVar30->_padding_ = lVar5;
    lVar5 = *(longlong *)(lVar36 + 200);
    pUVar30->_padding_ = *(longlong *)(lVar36 + 0xc0);
    pUVar30->_padding_ = lVar5;
    lVar5 = *(longlong *)(lVar36 + 0xd8);
    pUVar30->_padding_ = *(longlong *)(lVar36 + 0xd0);
    pUVar30->_padding_ = lVar5;
    pUVar30->_padding_ = *(longlong *)(lVar36 + 0xe0);
    *(undefined4 *)&pUVar30->_padding_ = *(undefined4 *)(*(longlong *)this + 0xe8);
    uVar32 = 0;
    if ((int)(local_128.Levels.ArrayNum - 1U) < local_128.Levels.ArrayNum) {
      uVar32 = ~(local_128.Levels.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar19 = (*pcVar8)();
      return (bool)uVar19;
    }
    local_290._s_0.X = 0;
    local_290._s_0.Y = 0;
    pFVar31 = FSquare2DGridHelper::FGridLevel::GetCell
                        ((FGridLevel *)
                         (local_128.Levels.AllocatorInstance.Data +
                         (longlong)(int)(local_128.Levels.ArrayNum - 1) * 0x88),
                         (TIntVector2<__int64> *)&local_290._s_0);
    (**(code **)(this_02->_padding_ + 0x300))(this_02,local_440 == pFVar31);
    pTVar17 = local_410;
    *(bool *)&this_02->_padding_ = pFVar33->bClientOnlyVisible;
    *(bool *)((longlong)&this_02->_padding_ + 3) = pFVar33->bBlockOnSlowStreaming;
    *(bool *)((longlong)&this_02->_padding_ + 1) = param_3;
    *(ulonglong *)((longlong)&this_02->_padding_ + 4) = CONCAT44(local_3d8.B,local_3d8.A);
    *(ulonglong *)((longlong)&this_02->_padding_ + 4) = CONCAT44(local_3d8.D,local_3d8.C);
    if (param_3) {
      uVar26 = (*(undefined8 **)((longlong)this + 8))[1];
      *(undefined8 *)((longlong)&this_02->_padding_ + 4) = **(undefined8 **)((longlong)this + 8);
      *(undefined8 *)((longlong)&this_02->_padding_ + 4) = uVar26;
    }
    bVar18 = UWorldPartitionRuntimeLevelStreamingCell::CreateAndSetLevelStreaming
                       (this_02,local_410,(TTransform<double> *)(*(longlong *)this + 0x50));
    if (bVar18) {
      local_260._s_0.X = (local_440->Coords).field0_0x0._s_0.X;
      local_260._s_0.Y = (local_440->Coords).field0_0x0._s_0.Y;
      local_260._s_0.Z = (local_440->Coords).field0_0x0._s_0.Z;
      FSpatialHashStreamingGrid::InsertGridCell
                (pFVar33,(UWorldPartitionRuntimeCell *)this_02,
                 (TIntVector3<__int64> *)&local_260._s_0);
      bVar18 = true;
      goto LAB_148aba0e3;
    }
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Math::TTransform<double>::ToString
                ((TTransform<double> *)(*(longlong *)this + 0x50),&local_280);
      FSoftObjectPath::ToString((FSoftObjectPath *)&(pTVar17->SoftObjectPtr).field_0x8,&local_380);
      local_3b0 = (FName)this_02->_padding_;
      ::FName::ToString(&local_3b0,&local_390);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      local_270.Data.AllocatorInstance.Data = local_280.Data.AllocatorInstance.Data;
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
        local_270.Data.AllocatorInstance.Data = local_280.Data.AllocatorInstance.Data;
      }
      goto LAB_148aba0d7;
    }
  }
  bVar18 = false;
LAB_148aba0e3:
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  FMD5::~FMD5(&local_188);
  FArchive::~FArchive((FArchive *)&local_218);
  DestructItems<FSquare2DGridHelper::FGridLevel,int>
            ((FGridLevel *)local_128.Levels.AllocatorInstance.Data,local_128.Levels.ArrayNum);
  if ((FGridLevel *)local_128.Levels.AllocatorInstance.Data != (FGridLevel *)0x0) {
    FMemory::Free(local_128.Levels.AllocatorInstance.Data);
  }
  return bVar18;
}

// operator() @ 148aba490

void __thiscall
`UWorldPartitionRuntimeSpatialHash::GetNameToGridMapping'::__l5::<lambda_1>::operator()
          (void *this,FSpatialHashStreamingGrid *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  TPairInitializer<FName_const_&,FSpatialHashStreamingGrid_const_*_&&> local_res8;
  FSpatialHashStreamingGrid *local_28;
  FSpatialHashStreamingGrid ***local_20;
  
  FVar1 = param_1->GridName;
  lVar2 = *(longlong *)this;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)(lVar2 + 0x98) != *(int *)(lVar2 + 0xc4)) {
    lVar5 = *(longlong *)(lVar2 + 0xd0);
    if (*(longlong *)(lVar2 + 0xd0) == 0) {
      lVar5 = lVar2 + 200;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xd8) - 1U & FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)(lVar2 + 0x90) + (longlong)iVar4 * 0x18) == FVar1) {
          local_res8.Key = &param_1->GridName;
          ``UWorldPartitionRuntimeSpatialHash::GetNameToGridMapping'::__l5::<lambda_1>::operator()'
          ::__l2::<lambda_1>::operator()(&local_res8);
          break;
        }
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x90) + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_20 = &local_res8.Value;
  local_res8.Value = (FSpatialHashStreamingGrid **)param_1;
  local_28 = param_1;
  TSet<TTuple<FName,FSpatialHashStreamingGrid_const_*>,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSpatialHashStreamingGrid_const_*_&&>_>
            ((TSet<TTuple<FName,FSpatialHashStreamingGrid_const_*>,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x90),&local_res8,(bool *)&local_28);
  return;
}

// operator() @ 148aba730

void __thiscall
`UWorldPartitionRuntimeSpatialHash::GetWorldAssetStreamingCells'::__l5::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorldPartitionRuntimeCell *local_18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_18[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UWorldPartitionRuntimeCell **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// operator() @ 148abd480

void __thiscall
`UWorldPartitionRuntimeSpatialHash::Draw2D'::__l13::<lambda_2>::operator()
          (void *this,FSphericalSector *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined7 uStack_27;
  
  dVar1 = param_1->Radius;
  dVar2 = (param_1->Center).field0_0x0._s_0.X;
  dVar8 = (param_1->Center).field0_0x0._s_0.Y;
  dVar11 = (param_1->Center).field0_0x0._s_0.Z;
  dVar9 = dVar2 + dVar1;
  pauVar3 = *(undefined1 (**) [16])this;
  dVar2 = dVar2 - dVar1;
  dVar7 = dVar8 + dVar1;
  dVar10 = dVar11 + dVar1;
  dVar8 = dVar8 - dVar1;
  dVar11 = dVar11 - dVar1;
  if (pauVar3[3][0] != '\0') {
    if (*(double *)*pauVar3 <= dVar2) {
      dVar2 = *(double *)*pauVar3;
    }
    if (*(double *)(*pauVar3 + 8) <= dVar8) {
      dVar8 = *(double *)(*pauVar3 + 8);
    }
    if (dVar9 <= *(double *)(pauVar3[1] + 8)) {
      dVar9 = *(double *)(pauVar3[1] + 8);
    }
    if (dVar10 <= *(double *)(pauVar3[2] + 8)) {
      dVar10 = *(double *)(pauVar3[2] + 8);
    }
    dVar1 = *(double *)pauVar3[1];
    if (dVar11 <= *(double *)pauVar3[1]) {
      dVar1 = dVar11;
    }
    *(double *)*pauVar3 = dVar2;
    *(double *)(*pauVar3 + 8) = dVar8;
    *(double *)(pauVar3[1] + 8) = dVar9;
    *(double *)(pauVar3[2] + 8) = dVar10;
    *(double *)pauVar3[1] = dVar1;
    dVar1 = *(double *)pauVar3[2];
    if (*(double *)pauVar3[2] <= dVar7) {
      dVar1 = dVar7;
    }
    *(double *)pauVar3[2] = dVar1;
    return;
  }
  auVar4._8_4_ = SUB84(dVar8,0);
  auVar4._0_8_ = dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *pauVar3 = auVar4;
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = dVar11;
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  pauVar3[1] = auVar6;
  auVar5._8_4_ = SUB84(dVar10,0);
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  pauVar3[2] = auVar5;
  *(ulonglong *)pauVar3[3] = CONCAT71(uStack_27,1);
  return;
}

// operator() @ 148abd8a0

TVector2<double> * __thiscall
`UWorldPartitionRuntimeSpatialHash::Draw2D'::__l9::<lambda_3>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  if (param_2) {
    pfVar4 = *(float **)this;
    fVar8 = (float)(param_1->field0_0x0)._s_0.Y;
    fVar7 = (float)(param_1->field0_0x0)._s_0.X;
    dVar5 = (double)(fVar8 * pfVar4[2] + fVar7 * *pfVar4 + pfVar4[4]);
    dVar6 = (double)(fVar8 * pfVar4[3] + fVar7 * pfVar4[1] + pfVar4[5]);
  }
  else {
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
  }
  dVar1 = (*(double **)((longlong)this + 0x10))[1];
  dVar2 = (*(double **)((longlong)this + 8))[1];
  dVar3 = (*(double **)((longlong)this + 0x18))[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar5 - **(double **)((longlong)this + 0x10)) * **(double **)((longlong)this + 8) +
       **(double **)((longlong)this + 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar6 - dVar1) * dVar2 + dVar3;
  return __return_storage_ptr__;
}

// ComputeUpdateStreamingHash @ 148ac23b0

uint __thiscall
UWorldPartitionRuntimeSpatialHash::ComputeUpdateStreamingHash
          (UWorldPartitionRuntimeSpatialHash *this)

{
  uint local_res10 [2];
  uint *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0xffffffff;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::ComputeUpdateStreamingHash'::__l2::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
             ::Call;
  ForEachStreamingGrid
            (this,(TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_18);
  return ~local_res10[0];
}

// ContainsRuntimeHash @ 148ac2730

bool __thiscall
UWorldPartitionRuntimeSpatialHash::ContainsRuntimeHash
          (UWorldPartitionRuntimeSpatialHash *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FName *this_00;
  FName *pFVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  FString local_28;
  
  iVar1 = (this->StreamingGrids).ArrayNum;
  this_00 = (FName *)(this->StreamingGrids).AllocatorInstance.Data;
  pFVar5 = this_00 + (longlong)iVar1 * 0x16;
  while( true ) {
    if ((this->StreamingGrids).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpatialHashStreamingGrid_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar5) {
      return false;
    }
    pFVar4 = ::FName::ToString(this_00,&local_28);
    iVar3 = (param_1->Data).ArrayNum;
    iVar2 = (pFVar4->Data).ArrayNum;
    if (iVar2 == iVar3) {
      if (iVar2 < 2) {
        bVar6 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
    }
    else {
      bVar6 = iVar2 + iVar3 == 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar6 != false) break;
    this_00 = this_00 + 0x16;
  }
  return bVar6;
}

// Draw2D @ 148ac54e0

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
UWorldPartitionRuntimeSpatialHash::Draw2D
          (UWorldPartitionRuntimeSpatialHash *this,FWorldPartitionDraw2DContext *param_1)

{
  int *piVar1;
  TArray<FWorldPartitionCanvasMultiLineTextItem,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  undefined8 uVar4;
  FSpatialHashStreamingGrid *this_00;
  code *pcVar5;
  TVector2<double>_u_0 TVar6;
  TVector2<double>_u_0 TVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  FName FVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar20;
  TTransform<double> *pTVar21;
  longlong lVar22;
  ulonglong uVar23;
  UPackage *pUVar24;
  FString *pFVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  char cVar28;
  FName FVar29;
  UWorldPartition *this_01;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  bool bVar32;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStackY_508 [32];
  ForAnyElementType local_4b0;
  undefined8 local_4a8;
  undefined1 local_4a0;
  undefined1 local_49f;
  undefined1 local_49e;
  FIdentityFunctor local_49d [5];
  ForAnyElementType local_498;
  undefined8 local_490;
  int local_488;
  undefined8 local_480;
  FName local_478;
  undefined8 local_470;
  FName local_468;
  undefined1 local_460 [16];
  ForAnyElementType local_450;
  undefined8 local_448;
  uint local_440;
  TVector2<double>_u_0 local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  char local_418;
  undefined7 uStack_417;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  double local_3e8;
  UWorldPartition *local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  FString local_3a8;
  TVector2<double>_u_0 local_398;
  double local_388;
  double dStack_380;
  char local_378;
  double local_370;
  double local_368;
  double local_360;
  double dStack_358;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_350;
  double *local_348;
  FWorldPartitionDraw2DContext *local_340;
  double local_338;
  double dStack_330;
  FString local_328;
  FName local_318;
  UWorldPartitionRuntimeSpatialHash *local_310;
  double local_308;
  double local_300;
  UWorldPartitionRuntimeSpatialHash *local_2f8;
  FName *local_2f0;
  code *local_2e8;
  UWorldPartitionRuntimeSpatialHash **local_2e0;
  code *local_2d8;
  double **local_2d0;
  double local_2c8;
  double dStack_2c0;
  code *local_2b8;
  float **local_2b0;
  FString local_2a8;
  float *local_298;
  double *local_290;
  double *local_288;
  double *local_280;
  undefined1 local_278 [16];
  FString local_268;
  FString local_258;
  FString local_248 [2];
  undefined8 local_228;
  TQuat<double> local_218;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  TRotator<double> local_1e0 [2];
  undefined8 local_1a8;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  char local_108;
  undefined4 local_107;
  undefined2 local_103;
  undefined1 local_101;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_508;
  bVar32 = -1 < CpuChannel->Enabled;
  local_340 = param_1;
  local_310 = this;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2262,"UWorldPartitionRuntimeSpatialHash::Draw2D",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
               ,0x8d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2262);
  }
  this_01 = (UWorldPartition *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_01 = (UWorldPartition *)this->_padding_;
  }
  else {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1240560329461596353>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                        ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
  }
  local_3e0 = this_01;
  pTVar20 = UWorldPartition::GetStreamingSources(this_01);
  uVar18 = (this->StreamingGrids).ArrayNum;
  local_478.ComparisonIndex.Value = 0;
  local_478.Number = 0;
  local_470 = 0;
  local_350 = pTVar20;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,(ForAnyElementType *)&local_478,0,(int *)((longlong)&local_470 + 4));
  }
  local_2f0 = &local_478;
  local_2e0 = &local_2f8;
  local_2e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::GetFilteredStreamingGrids'::__l2::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
              ::Call;
  local_2f8 = this;
  ForEachStreamingGrid
            (this,(TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_2e8);
  if (((uint)local_470 == 0) || (pTVar20->ArrayNum == 0)) {
    bVar15 = false;
    goto LAB_148ac67f5;
  }
  AlgoImpl::
  IntroSortInternal<FSpatialHashStreamingGrid_const_*,int,FIdentityFunctor,TDereferenceWrapper<FSpatialHashStreamingGrid_const_*,_UWorldPartitionRuntimeSpatialHash::Draw2D_::__l2::<lambda_1>_>_>
            ((FSpatialHashStreamingGrid **)local_478,(uint)local_470,local_49d[0],
             (<lambda_1> *)local_49d);
  pTVar21 = UWorldPartition::GetInstanceTransform(this_01);
  local_218.X = (pTVar21->Rotation).XY.m128d_f64[0];
  local_218.Y = (pTVar21->Rotation).XY.m128d_f64[1];
  local_218.Z = (pTVar21->Rotation).ZW.m128d_f64[0];
  local_218.W = (pTVar21->Rotation).ZW.m128d_f64[1];
  dVar3 = (pTVar21->Translation).XY.m128d_f64[0];
  dVar33 = (pTVar21->Translation).XY.m128d_f64[1];
  local_1e8 = (pTVar21->Translation).ZW.m128d_f64[0];
  local_158 = (pTVar21->Scale3D).XY.m128d_f64[0];
  dStack_150 = (pTVar21->Scale3D).XY.m128d_f64[1];
  local_148 = (pTVar21->Scale3D).ZW.m128d_f64[0];
  dStack_140 = (pTVar21->Scale3D).ZW.m128d_f64[1];
  local_1f8 = dVar3;
  dStack_1f0 = dVar33;
  UE::Math::TQuat<double>::Rotator(&local_218,local_1e0);
  __libm_sse2_sincosf_();
  local_f0 = (float)dVar3;
  local_f8 = (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
  local_ec = (float)dVar33;
  fVar39 = __real_3f800000 / (extraout_XMM0_Db * extraout_XMM0_Db - local_f8 * extraout_XMM0_Da);
  fVar53 = fVar39 * extraout_XMM0_Db;
  fVar40 = (float)((uint)(fVar39 * local_f8) ^ __xmm_80000000800000008000000080000000);
  fVar43 = fVar39 * extraout_XMM0_Db;
  fVar39 = (float)((uint)(fVar39 * extraout_XMM0_Da) ^ __xmm_80000000800000008000000080000000);
  local_480 = (double)CONCAT44((float)((uint)local_f0 ^ __xmm_80000000800000008000000080000000) *
                               fVar39 + fVar43 * (float)((uint)local_ec ^
                                                        __xmm_80000000800000008000000080000000),
                               (float)((uint)local_ec ^ __xmm_80000000800000008000000080000000) *
                               fVar40 + (float)((uint)local_f0 ^
                                               __xmm_80000000800000008000000080000000) * fVar53);
  local_228 = local_480;
  local_100 = extraout_XMM0_Db;
  local_fc = extraout_XMM0_Da;
  local_f4 = extraout_XMM0_Db;
  if (((param_1->WorldRegion).bIsValid == false) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("WorldRegion.bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.h"
                          ,0x98,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  dVar3 = (param_1->WorldRegion).Min.field0_0x0._s_0.X;
  dVar33 = (param_1->WorldRegion).Min.field0_0x0._s_0.Y;
  dVar11 = (param_1->WorldRegion).Max.field0_0x0._s_0.X - dVar3;
  fVar13 = (float)local_228;
  dVar10 = (param_1->WorldRegion).Max.field0_0x0._s_0.Y - dVar33;
  fVar14 = local_228._4_4_;
  fVar37 = (float)dVar3;
  local_4b0.Data = (FScriptContainerElement *)0x0;
  local_4a8 = 0;
  fVar38 = (float)dVar33;
  dVar33 = (double)(fVar40 * fVar38 + fVar37 * fVar53 + (float)local_228);
  dVar3 = (double)(fVar39 * fVar37 + fVar43 * fVar38 + local_228._4_4_);
  iVar17 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_4b0,(int *)((longlong)&local_4a8 + 4));
  uVar35 = SUB84(dVar3,0);
  uVar36 = (undefined4)((ulonglong)dVar3 >> 0x20);
  iVar19 = iVar17 + 1;
  local_278._8_4_ = uVar35;
  local_278._0_8_ = dVar33;
  local_278._12_4_ = uVar36;
  auVar9._8_4_ = uVar35;
  auVar9._0_8_ = dVar33;
  auVar9._12_4_ = uVar36;
  *(undefined1 (*) [16])(local_4b0.Data + (longlong)iVar17 * 0x10) = auVar9;
  fVar37 = (float)(param_1->WorldRegion).Min.field0_0x0._s_0.Y;
  fVar38 = (float)(dVar11 + (param_1->WorldRegion).Min.field0_0x0._s_0.X);
  local_3d8 = (double)(fVar53 * fVar38 + fVar40 * fVar37 + fVar13);
  dStack_3d0 = (double)(fVar38 * fVar39 + fVar43 * fVar37 + fVar14);
  local_4a8._0_4_ = iVar19;
  if (((local_4b0.Data <= (FScriptContainerElement *)&local_3d8) &&
      ((FScriptContainerElement *)&local_3d8 < local_4b0.Data + (longlong)local_4a8._4_4_ * 0x10))
     && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  if ((int)local_4a8 == local_4a8._4_4_) {
    local_4a8._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_4b0,(int *)((longlong)&local_4a8 + 4));
  }
  iVar19 = (int)local_4a8 + 1;
  *(double *)(local_4b0.Data + (longlong)(int)local_4a8 * 0x10) = local_3d8;
  *(double *)(local_4b0.Data + (longlong)(int)local_4a8 * 0x10 + 8) = dStack_3d0;
  fVar37 = (float)(dVar10 + (param_1->WorldRegion).Min.field0_0x0._s_0.Y);
  fVar38 = (float)(dVar11 + (param_1->WorldRegion).Min.field0_0x0._s_0.X);
  local_3c8 = (double)(fVar40 * fVar37 + fVar53 * fVar38 + fVar13);
  dStack_3c0 = (double)(fVar43 * fVar37 + fVar39 * fVar38 + fVar14);
  local_4a8._0_4_ = iVar19;
  if (((local_4b0.Data <= (FScriptContainerElement *)&local_3c8) &&
      ((FScriptContainerElement *)&local_3c8 < local_4b0.Data + (longlong)local_4a8._4_4_ * 0x10))
     && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  if ((int)local_4a8 == local_4a8._4_4_) {
    local_4a8._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_4b0,(int *)((longlong)&local_4a8 + 4));
  }
  iVar19 = (int)local_4a8 + 1;
  *(double *)(local_4b0.Data + (longlong)(int)local_4a8 * 0x10) = local_3c8;
  *(double *)(local_4b0.Data + (longlong)(int)local_4a8 * 0x10 + 8) = dStack_3c0;
  fVar38 = (float)(param_1->WorldRegion).Min.field0_0x0._s_0.X;
  fVar37 = (float)(dVar10 + (param_1->WorldRegion).Min.field0_0x0._s_0.Y);
  local_3b8 = (double)(fVar40 * fVar37 + fVar53 * fVar38 + fVar13);
  dStack_3b0 = (double)(fVar43 * fVar37 + fVar39 * fVar38 + fVar14);
  local_4a8._0_4_ = iVar19;
  if (((local_4b0.Data <= (FScriptContainerElement *)&local_3b8) &&
      ((FScriptContainerElement *)&local_3b8 < local_4b0.Data + (longlong)local_4a8._4_4_ * 0x10))
     && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  if ((int)local_4a8 == local_4a8._4_4_) {
    local_4a8._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_4b0,(int *)((longlong)&local_4a8 + 4));
  }
  iVar19 = (int)local_4a8 + 1;
  cVar28 = '\0';
  lVar22 = (longlong)(int)local_4a8;
  local_4a8 = CONCAT44(local_4a8._4_4_,iVar19);
  local_398._s_0.X = 0.0;
  local_398._s_0.Y = 0.0;
  local_378 = 0;
  *(double *)(local_4b0.Data + lVar22 * 0x10) = local_3b8;
  *(double *)(local_4b0.Data + lVar22 * 0x10 + 8) = dStack_3b0;
  uVar23 = (ulonglong)iVar19;
  local_388 = 0.0;
  dStack_380 = 0.0;
  uVar41 = 0;
  uVar42 = 0;
  uVar35 = 0;
  uVar36 = 0;
  pFVar30 = local_4b0.Data + uVar23 * 0x10;
  FVar27.Data = local_4b0.Data;
  uVar51 = 0;
  uVar52 = 0;
  uVar47 = 0;
  uVar44 = 0;
  while( true ) {
    if ((int)uVar23 != iVar19) {
      local_4a0 = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_4a0);
      uVar23 = local_4a8 & 0xffffffff;
    }
    if (FVar27.Data == pFVar30) break;
    if (cVar28 == '\0') {
      uVar35 = *(undefined4 *)FVar27.Data;
      uVar36 = *(undefined4 *)(FVar27.Data + 4);
      local_398._s_0.X = (double)*(undefined8 *)FVar27.Data;
      local_388 = *(double *)FVar27.Data;
      pFVar31 = FVar27.Data + 8;
      uVar41 = *(undefined4 *)pFVar31;
      uVar42 = *(undefined4 *)(FVar27.Data + 0xc);
      local_398._s_0.Y = (double)*(undefined8 *)pFVar31;
      dStack_380 = *(double *)pFVar31;
      cVar28 = '\x01';
      FVar27.Data = FVar27.Data + 0x10;
      uVar51 = uVar35;
      uVar52 = uVar36;
      uVar47 = uVar41;
      uVar44 = uVar42;
    }
    else {
      dVar3 = *(double *)FVar27.Data;
      if (dVar3 <= (double)CONCAT44(uVar52,uVar51)) {
        uVar51 = SUB84(dVar3,0);
        uVar52 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      dVar3 = *(double *)(FVar27.Data + 8);
      if (dVar3 <= (double)CONCAT44(uVar44,uVar47)) {
        uVar47 = SUB84(dVar3,0);
        uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      dVar3 = *(double *)FVar27.Data;
      if ((double)CONCAT44(uVar36,uVar35) <= dVar3) {
        uVar35 = SUB84(dVar3,0);
        uVar36 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      dVar3 = *(double *)(FVar27.Data + 8);
      if ((double)CONCAT44(uVar42,uVar41) <= dVar3) {
        uVar41 = SUB84(dVar3,0);
        uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      FVar27.Data = FVar27.Data + 0x10;
      local_398._s_0.X = (double)CONCAT44(uVar52,uVar51);
      local_398._s_0.Y = (double)CONCAT44(uVar44,uVar47);
      local_388 = (double)CONCAT44(uVar36,uVar35);
      dStack_380 = (double)CONCAT44(uVar42,uVar41);
    }
  }
  local_378 = cVar28;
  if (((param_1->CanvasRegion).bIsValid == false) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("CanvasRegion.bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionDraw2DContext.h"
                          ,0x97,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  dVar3 = __real_3fe0000000000000;
  uVar23 = (ulonglong)(int)(uint)local_470;
  if (param_1->bIsDetailedMode == false) {
    uVar18 = 1;
LAB_148ac5d42:
    uVar35 = 0;
    uVar36 = 0;
    local_3e8 = 0.0;
  }
  else {
    uVar18 = (uint)local_470;
    if ((int)(uint)local_470 < 2) goto LAB_148ac5d42;
    uVar35 = (undefined4)__real_4034000000000000;
    uVar36 = (undefined4)((ulonglong)__real_4034000000000000 >> 0x20);
    local_3e8 = __real_4024000000000000;
  }
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  local_318 = (FName)((longlong)local_478 + uVar23 * 8);
  local_108 = '\0';
  local_410 = 0;
  uStack_408 = 0;
  local_488 = 0;
  local_400 = 0;
  uStack_3f8 = 0;
  local_440 = (uint)local_470;
  uVar55 = 0;
  uVar56 = 0;
  local_107 = 0;
  local_103 = 0;
  local_101 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar57 = 0;
  uVar58 = 0;
  local_3f0 = 0;
  dVar33 = (param_1->CanvasRegion).Max.field0_0x0._s_0.Y -
           (param_1->CanvasRegion).Min.field0_0x0._s_0.Y;
  local_300 = (double)((float)((param_1->CanvasRegion).Max.field0_0x0._s_0.X -
                              (param_1->CanvasRegion).Min.field0_0x0._s_0.X) / (float)(int)uVar18);
  uVar44 = 0;
  uVar54 = 0;
  if (local_300 <= dVar33) {
    dVar33 = local_300;
  }
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_118 = 0.0;
  dStack_110 = 0.0;
  local_360 = (param_1->CanvasRegion).Min.field0_0x0._s_0.X;
  dStack_358 = (param_1->CanvasRegion).Min.field0_0x0._s_0.Y;
  dVar33 = (double)(float)(dVar33 - (double)CONCAT44(uVar36,uVar35)) * __real_3fe0000000000000;
  local_128 = 0.0;
  dStack_120 = 0.0;
  uVar26 = uVar23;
  FVar29 = local_478;
  local_480 = dVar33;
  local_308 = dStack_358;
  while( true ) {
    FVar12 = local_318;
    local_468 = FVar29;
    if ((int)uVar23 != (int)uVar26) {
      local_49f = 0;
      `TCheckedPointerIterator<FSpatialHashStreamingGrid_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_49f);
    }
    pTVar20 = local_350;
    if (FVar29 == FVar12) break;
    this_00 = *(FSpatialHashStreamingGrid **)FVar29;
    iVar19 = local_350->ArrayNum;
    pFVar30 = (local_350->AllocatorInstance).Data;
    pFVar31 = pFVar30 + (longlong)iVar19 * 0x160;
    while( true ) {
      if (pTVar20->ArrayNum != iVar19) {
        local_49e = 0;
        `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_49e);
      }
      param_1 = local_340;
      if (pFVar30 == pFVar31) break;
      FVar29 = this_00->GridName;
      local_348 = &local_138;
      fVar39 = FSpatialHashStreamingGrid::GetLoadingRange(this_00);
      bVar15 = FStreamingSourceShapeHelper::IsSourceAffectingGrid
                         ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                          (pFVar30 + 0x68),(EStreamingSourceTargetBehavior)pFVar30[0x60],FVar29);
      if (bVar15) {
        local_2d0 = &local_348;
        local_2d8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::Draw2D'::__l13::<lambda_2>,void,FSphericalSector_const_&>
                    ::Call;
        FStreamingSourceShapeHelper::ForEachShape
                  (fVar39,fVar39,true,(TVector<double> *)(pFVar30 + 8),
                   (TRotator<double> *)(pFVar30 + 0x20),
                   (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)(pFVar30 + 0x108),
                   (TFunctionRef<void___cdecl(FSphericalSector_const_&)> *)&local_2d8,
                   *(float *)(pFVar30 + 0x158),*(float *)(pFVar30 + 0x15c));
      }
      pFVar30 = pFVar30 + 0x160;
    }
    if (local_340->bIsDetailedMode == false) {
      dVar10 = (local_340->WorldRegion).Max.field0_0x0._s_0.Y;
      dVar11 = (local_340->WorldRegion).Max.field0_0x0._s_0.X;
      dStack_330 = dVar10 + (local_340->WorldRegion).Min.field0_0x0._s_0.Y;
      local_338 = (local_340->WorldRegion).Min.field0_0x0._s_0.X + dVar11;
      dVar11 = dVar11 - (local_340->WorldRegion).Min.field0_0x0._s_0.X;
      local_2c8 = (dVar10 - (local_340->WorldRegion).Min.field0_0x0._s_0.Y) * dVar3;
    }
    else {
      local_338 = local_138 + dStack_120;
      dStack_330 = dStack_130 + local_118;
      dVar10 = (dStack_110 - local_128) * __real_3fa99999a0000000;
      dVar33 = (local_118 - dStack_130) * __real_3fa99999a0000000;
      dVar34 = (dStack_120 - local_138) * __real_3fa99999a0000000;
      dVar11 = (dStack_110 + dVar10) - (local_128 - dVar10);
      dVar10 = ((local_118 + dVar33) - (dStack_130 - dVar33)) * dVar3;
      local_2c8 = ((dStack_120 + dVar34) - (local_138 - dVar34)) * dVar3;
      dVar33 = local_480;
      if (local_2c8 <= dVar10) {
        local_2c8 = dVar10;
      }
    }
    dStack_330 = dStack_330 * dVar3;
    local_338 = local_338 * dVar3;
    local_298 = &local_100;
    local_290 = &local_2c8;
    local_288 = &local_338;
    local_418 = '\x01';
    local_280 = &local_370;
    local_368 = local_308 + dVar33 + local_3e8;
    local_2b0 = &local_298;
    local_2b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::Draw2D'::__l9::<lambda_3>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_const_&,bool>
                ::Call;
    if (local_2c8 <= dVar11 * dVar3) {
      local_2c8 = dVar11 * dVar3;
    }
    local_438._s_0.Y = local_368 - dVar33;
    local_2c8 = dVar33 / local_2c8;
    uStack_420 = dVar33 + local_368;
    local_370 = (double)local_488 * local_300 + local_360 + dVar33 + local_3e8;
    local_438._s_0.X = local_370 - dVar33;
    local_428 = dVar33 + local_370;
    dStack_2c0 = local_2c8;
    FSpatialHashStreamingGrid::Draw2D
              (this_00,local_310,(TBox2<double> *)&local_398._s_0,(TBox2<double> *)&local_438._s_0,
               (TFunctionRef<UE::Math::TVector2<double>___cdecl(UE::Math::TVector2<double>_const_&,bool)>
                *)&local_2b8,local_340);
    FVar29 = local_468;
    if ((char)local_3f0 == '\0') {
      if (local_418 != '\0') {
        local_3f0 = CONCAT71(uStack_417,local_418);
        uVar41 = (undefined4)uStack_420;
        uVar42 = uStack_420._4_4_;
        uVar47 = local_438._8_4_;
        uVar48 = local_438._12_4_;
        uVar49 = (undefined4)local_428;
        uVar50 = local_428._4_4_;
        uVar45 = local_438._0_4_;
        uVar46 = local_438._4_4_;
        goto LAB_148ac61e9;
      }
    }
    else if (local_418 != '\0') {
      uVar45 = uVar57;
      uVar46 = uVar58;
      if (local_438._s_0.X <= (double)CONCAT44(uVar58,uVar57)) {
        uVar45 = local_438._0_4_;
        uVar46 = local_438._4_4_;
      }
      uVar49 = uVar55;
      uVar50 = uVar56;
      if ((double)CONCAT44(uVar56,uVar55) <= local_428) {
        uVar49 = (undefined4)local_428;
        uVar50 = local_428._4_4_;
      }
      uVar47 = uVar44;
      uVar48 = uVar54;
      if (local_438._s_0.Y <= (double)CONCAT44(uVar54,uVar44)) {
        uVar47 = local_438._8_4_;
        uVar48 = local_438._12_4_;
      }
      if ((double)CONCAT44(uVar42,uVar41) <= uStack_420) {
        uVar41 = (undefined4)uStack_420;
        uVar42 = uStack_420._4_4_;
      }
LAB_148ac61e9:
      local_400 = CONCAT44(uVar50,uVar49);
      uStack_3f8 = CONCAT44(uVar42,uVar41);
      local_410 = CONCAT44(uVar46,uVar45);
      uStack_408 = CONCAT44(uVar48,uVar47);
      uVar51 = uVar41;
      uVar52 = uVar42;
      uVar44 = uVar47;
      uVar54 = uVar48;
      uVar55 = uVar49;
      uVar56 = uVar50;
      uVar57 = uVar45;
      uVar58 = uVar46;
    }
    if (param_1->bIsDetailedMode != false) {
      dVar33 = local_370 - dVar33;
      dVar10 = local_368 - local_480;
      local_498.Data = (FScriptContainerElement *)0x0;
      local_490 = 0;
      pUVar24 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_3e0);
      local_468 = (FName)pUVar24->_padding_;
      ::FName::ToString(&local_468,&local_2a8);
      pFVar25 = FPaths::GetBaseFilename(&local_258,&local_2a8,true);
      pFVar25 = UWorld::RemovePIEPrefix(&local_268,pFVar25,(int *)0x0);
      iVar19 = (int)local_490;
      if ((int)local_490 == local_490._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_498,(int *)((longlong)&local_490 + 4));
      }
      local_490 = CONCAT44(local_490._4_4_,iVar19 + 1);
      lVar22 = (longlong)iVar19 * 0x20;
      *(undefined8 *)(local_498.Data + lVar22) = 0;
      *(FScriptContainerElement **)(local_498.Data + lVar22) =
           (pFVar25->Data).AllocatorInstance.Data;
      (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_498.Data + lVar22 + 8) = (pFVar25->Data).ArrayNum;
      *(int *)(local_498.Data + lVar22 + 0xc) = (pFVar25->Data).ArrayMax;
      (pFVar25->Data).ArrayNum = 0;
      (pFVar25->Data).ArrayMax = 0;
      ((FLinearColor_u_0 *)(local_498.Data + lVar22 + 0x10))->_s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      FSpatialHashStreamingGrid::GetLoadingRange(this_00);
      ::FName::ToString(&this_00->GridName,local_248);
      ::FString::PrintfImpl(&local_3a8,L"%s | %d m");
      if (local_248[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248[0].Data.AllocatorInstance.Data);
      }
      if (this_00->bClientOnlyVisible != false) {
        ::FString::AppendChars(&local_3a8,L" | Client Only",0xe);
      }
      if (GFilterRuntimeSpatialHashGridLevel != -1) {
        ::FString::PrintfImpl(&local_328,L" | GridLevelFilter %d");
        iVar19 = local_328.Data.ArrayNum + -1;
        if (local_328.Data.ArrayNum == 0) {
          iVar19 = 0;
        }
        ::FString::AppendChars(&local_3a8,(wchar_t *)local_328.Data.AllocatorInstance.Data,iVar19);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
      }
      iVar19 = (int)local_490;
      if ((int)local_490 == local_490._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_498,(int *)((longlong)&local_490 + 4));
      }
      FVar27.Data = local_3a8.Data.AllocatorInstance.Data;
      pFVar30 = local_498.Data + (longlong)iVar19 * 0x20;
      local_490 = CONCAT44(local_490._4_4_,iVar19 + 1);
      *(FScriptContainerElement **)pFVar30 = (FScriptContainerElement *)0x0;
      iVar19 = local_3a8.Data.ArrayNum;
      *(int *)(pFVar30 + 8) = iVar19;
      if (iVar19 == 0) {
        *(int *)(pFVar30 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,0,(ForAnyElementType *)pFVar30,iVar19,(int *)(pFVar30 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar30,FVar27.Data,(longlong)iVar19 * 2);
      }
      FVar27.Data = local_498.Data;
      *(FLinearColor_u_0 *)(pFVar30 + 0x10) = (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
      iVar19 = (int)local_490;
      local_450.Data = (FScriptContainerElement *)0x0;
      local_448 = CONCAT44(local_448._4_4_,(int)local_490);
      local_460._8_4_ = SUB84(dVar10,0);
      local_460._0_8_ = dVar33;
      local_460._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      if ((int)local_490 == 0) {
        local_448 = local_490 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,(int)local_490,0,&local_450,(int)local_490,
                   (int *)((longlong)&local_448 + 4));
        ConstructItems<TTuple<FString,FLinearColor>,TTuple<FString,FLinearColor>,int>
                  (local_450.Data,(TTuple<FString,FLinearColor> *)FVar27.Data,iVar19);
      }
      pTVar2 = &(param_1->CanvasItems).MultiLineTexts;
      pFVar30 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar30 <= (FScriptContainerElement *)local_460) &&
          ((FScriptContainerElement *)local_460 <
           pFVar30 + (longlong)(param_1->CanvasItems).MultiLineTexts.ArrayMax * 0x20)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      iVar19 = (param_1->CanvasItems).MultiLineTexts.ArrayNum;
      piVar1 = &(param_1->CanvasItems).MultiLineTexts.ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar2->AllocatorInstance,piVar1);
      }
      local_488 = local_488 + 1;
      (param_1->CanvasItems).MultiLineTexts.ArrayNum = iVar19 + 1;
      pFVar30 = (pTVar2->AllocatorInstance).Data;
      lVar22 = (longlong)iVar19 * 0x20;
      *(undefined8 *)(pFVar30 + lVar22) = local_460._0_8_;
      *(undefined8 *)(pFVar30 + lVar22 + 8) = local_460._8_8_;
      *(undefined8 *)(pFVar30 + lVar22 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar30 + lVar22 + 0x10) = local_450.Data;
      local_450.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar30 + lVar22 + 0x18) = (undefined4)local_448;
      *(undefined4 *)(pFVar30 + lVar22 + 0x1c) = local_448._4_4_;
      local_448 = 0;
      DestructItems<TTuple<FString,FLinearColor>,int>((TTuple<FString,FLinearColor> *)0x0,0);
      if (local_450.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,FLinearColor>,int>
                ((TTuple<FString,FLinearColor> *)local_498.Data,(int)local_490);
      dVar33 = local_480;
      if ((TTuple<FString,FLinearColor> *)local_498.Data != (TTuple<FString,FLinearColor> *)0x0) {
        FMemory::Free(local_498.Data);
        dVar33 = local_480;
      }
    }
    uVar23 = local_470 & 0xffffffff;
    FVar29 = (FName)((longlong)FVar29 + 8);
    uVar26 = (ulonglong)local_440;
  }
  dVar11 = 0.0;
  dVar10 = 0.0;
  dVar33 = 0.0;
  dVar34 = 0.0;
  local_1a8 = 0;
  if (local_108 == '\0') {
    uVar4 = 0;
  }
  else {
    local_418 = '\x01';
    dVar33 = (dStack_120 - local_138) * dVar3;
    fVar40 = (float)((local_138 + dStack_120) * dVar3);
    fVar39 = (float)((dStack_130 + local_118) * dVar3);
    dVar3 = (local_118 - dStack_130) * dVar3;
    if (dVar33 <= dVar3) {
      dVar33 = dVar3;
    }
    dVar11 = (double)(local_f8 * fVar39 + local_100 * fVar40 + local_f0);
    dVar3 = dVar33 + dVar11;
    dVar11 = dVar11 - dVar33;
    dVar10 = (double)(local_f4 * fVar39 + local_fc * fVar40 + local_ec);
    dVar8 = dVar33 + dVar10;
    dVar10 = dVar10 - dVar33;
    dVar33 = (dVar3 - dVar11) * __real_3fa99999a0000000;
    dVar11 = dVar11 - dVar33;
    dVar33 = dVar33 + dVar3;
    dVar34 = (dVar8 - dVar10) * __real_3fa99999a0000000;
    dVar10 = dVar10 - dVar34;
    dVar34 = dVar34 + dVar8;
    uVar4 = CONCAT71(uStack_417,1);
  }
  bVar15 = true;
  *(undefined4 *)&(param_1->UsedCanvasBounds).Min.field0_0x0 = uVar45;
  *(undefined4 *)((longlong)&(param_1->UsedCanvasBounds).Min.field0_0x0 + 4) = uVar46;
  *(undefined4 *)((longlong)&(param_1->UsedCanvasBounds).Min.field0_0x0 + 8) = uVar47;
  *(undefined4 *)((longlong)&(param_1->UsedCanvasBounds).Min.field0_0x0 + 0xc) = uVar48;
  TVar7._8_4_ = SUB84(dVar10,0);
  TVar7._s_0.X = dVar11;
  TVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  (param_1->DesiredWorldBounds).Min.field0_0x0 = TVar7;
  *(undefined4 *)&(param_1->UsedCanvasBounds).Max.field0_0x0 = uVar49;
  *(undefined4 *)((longlong)&(param_1->UsedCanvasBounds).Max.field0_0x0 + 4) = uVar50;
  *(undefined4 *)((longlong)&(param_1->UsedCanvasBounds).Max.field0_0x0 + 8) = uVar51;
  *(undefined4 *)((longlong)&(param_1->UsedCanvasBounds).Max.field0_0x0 + 0xc) = uVar52;
  TVar6._8_4_ = SUB84(dVar34,0);
  TVar6._s_0.X = dVar33;
  TVar6._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  (param_1->DesiredWorldBounds).Max.field0_0x0 = TVar6;
  *(undefined8 *)&(param_1->DesiredWorldBounds).bIsValid = uVar4;
  *(undefined8 *)&(param_1->UsedCanvasBounds).bIsValid = local_3f0;
  if (local_4b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Data);
  }
LAB_148ac67f5:
  if (local_478 != (FName)0x0) {
    FMemory::Free((void *)local_478);
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar15;
}

// Draw3D @ 148ac7510

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
UWorldPartitionRuntimeSpatialHash::Draw3D
          (UWorldPartitionRuntimeSpatialHash *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  UWorldPartition *this_00;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  UWorldPartitionRuntimeSpatialHash *local_c0;
  ForAnyElementType *local_b8;
  code *local_b0;
  UWorldPartitionRuntimeSpatialHash **local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this_00 = (UWorldPartition *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UWorldPartition *)this->_padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1240560329461596353>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                       ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = UWorldPartition::GetInstanceTransform(this_00);
  uVar2 = (this->StreamingGrids).ArrayNum;
  local_98.Rotation.XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
  local_98.Rotation.XY.m128d_f64[1] = (pTVar6->Rotation).XY.m128d_f64[1];
  local_98.Rotation.ZW.m128d_f64[0] = (pTVar6->Rotation).ZW.m128d_f64[0];
  local_98.Rotation.ZW.m128d_f64[1] = (pTVar6->Rotation).ZW.m128d_f64[1];
  local_98.Translation.XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
  local_98.Translation.XY.m128d_f64[1] = (pTVar6->Translation).XY.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = (pTVar6->Translation).ZW.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = (pTVar6->Translation).ZW.m128d_f64[1];
  local_98.Scale3D.XY.m128d_f64[0] = (pTVar6->Scale3D).XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] = (pTVar6->Scale3D).XY.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
  local_98.Scale3D.ZW.m128d_f64[1] = (pTVar6->Scale3D).ZW.m128d_f64[1];
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&local_d0,0,(int *)((longlong)&local_c8 + 4));
  }
  local_b8 = &local_d0;
  local_a8 = &local_c0;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::GetFilteredStreamingGrids'::__l2::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
             ::Call;
  local_c0 = this;
  ForEachStreamingGrid
            (this,(TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_b0);
  iVar4 = (int)local_c8;
  uVar7 = (ulonglong)(int)local_c8;
  pFVar1 = local_d0.Data + uVar7 * 8;
  FVar8.Data = local_d0.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      `TCheckedPointerIterator<FSpatialHashStreamingGrid_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d8);
    }
    if (FVar8.Data == pFVar1) break;
    FSpatialHashStreamingGrid::Draw3D
              (*(FSpatialHashStreamingGrid **)FVar8.Data,this,param_1,&local_98);
    uVar7 = local_c8 & 0xffffffff;
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return;
}

// ForEachStreamingCells @ 148aca5c0

void __thiscall
UWorldPartitionRuntimeSpatialHash::ForEachStreamingCells
          (UWorldPartitionRuntimeSpatialHash *this,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_1)

{
  UWorldPartitionRuntimeSpatialHash *local_28;
  TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *local_20;
  code *local_18;
  UWorldPartitionRuntimeSpatialHash **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::ForEachStreamingCells'::__l2::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ForEachStreamingGrid
            (this,(TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_18);
  return;
}

// ForEachStreamingCellsQuery @ 148aca610

void __thiscall
UWorldPartitionRuntimeSpatialHash::ForEachStreamingCellsQuery
          (UWorldPartitionRuntimeSpatialHash *this,FWorldPartitionStreamingQuerySource *param_1,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *param_2,
          FWorldPartitionQueryCache *param_3)

{
  FWorldPartitionQueryCache *local_res20;
  code *local_38;
  UWorldPartitionRuntimeSpatialHash **local_30;
  UWorldPartitionRuntimeSpatialHash *local_28;
  FWorldPartitionStreamingQuerySource *local_20;
  FWorldPartitionQueryCache **local_18;
  TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*)> *local_10;
  
  local_18 = &local_res20;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::ForEachStreamingCellsQuery'::__l2::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
             ::Call;
  local_res20 = param_3;
  local_28 = this;
  local_20 = param_1;
  local_10 = param_2;
  ForEachStreamingGrid
            (this,(TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_38);
  return;
}

// ForEachStreamingCellsSources @ 148aca670

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
UWorldPartitionRuntimeSpatialHash::ForEachStreamingCellsSources
          (UWorldPartitionRuntimeSpatialHash *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(UWorldPartitionRuntimeCell_const_*,EStreamingSourceTargetState)>
          *param_2,FWorldPartitionStreamingContext *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  FWorldPartitionStreamingContext *pFVar8;
  byte bVar9;
  longlong lVar10;
  TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *pTVar11;
  int iVar12;
  uint uVar13;
  FWorldPartitionStreamingContext *pFVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  longlong *local_298;
  uint uStack_290;
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  uint local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  ulonglong local_268;
  int local_260;
  int local_25c;
  int local_258;
  undefined8 local_250;
  undefined8 local_248;
  longlong *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  FWorldPartitionStreamingContext local_1e0;
  code *local_1c8;
  UWorldPartitionRuntimeSpatialHash **local_1c0;
  code *local_1b8;
  UWorldPartitionRuntimeSpatialHash **local_1b0;
  UWorldPartitionRuntimeSpatialHash *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  FWorldPartitionStreamingContext *local_190;
  UWorldPartitionRuntimeSpatialHash *local_188;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  FWorldPartitionStreamingContext *local_168;
  FWorldPartitionStreamingContext local_160;
  FWorldPartitionStreamingContext local_148 [2];
  undefined4 local_114;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  uVar15 = 0;
  if (param_3->bIsValid == false) {
    pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar7 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
    pFVar8 = FWorldPartitionStreamingContext::Create(local_148,pUVar7);
  }
  else {
    local_1e0.bIsValid = false;
    local_1e0.DataLayersLogicOperator = Or;
    pFVar8 = &local_1e0;
    local_1e0.DataLayerEffectiveStates = (FWorldDataLayersEffectiveStates *)0x0;
    local_1e0.UpdateStreamingStateEpoch = 0;
  }
  local_160.bIsValid = pFVar8->bIsValid;
  local_160.DataLayersLogicOperator = pFVar8->DataLayersLogicOperator;
  local_160._2_6_ = *(undefined6 *)&pFVar8->field_0x2;
  local_160.DataLayerEffectiveStates = pFVar8->DataLayerEffectiveStates;
  pFVar14 = &local_160;
  if (param_3->bIsValid != false) {
    pFVar14 = param_3;
  }
  local_160.UpdateStreamingStateEpoch = pFVar8->UpdateStreamingStateEpoch;
  local_160._20_4_ = *(undefined4 *)&pFVar8->field_0x14;
  if ((pFVar14->bIsValid == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                         ,0x6f6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
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
  if (param_1->ArrayNum == 0) {
    pTVar11 = (TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_1c8;
    local_198 = local_e8;
    local_1c0 = &local_1a8;
    local_1c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::ForEachStreamingCellsSources'::__l12::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
                ::Call;
    local_1a8 = this;
    local_1a0 = local_98;
    local_190 = pFVar14;
  }
  else {
    pTVar11 = (TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_1b8;
    local_170 = local_e8;
    local_1b0 = &local_188;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::ForEachStreamingCellsSources'::__l14::<lambda_2>,void,FSpatialHashStreamingGrid_const_&>
                ::Call;
    local_188 = this;
    local_180 = param_1;
    local_178 = local_98;
    local_168 = pFVar14;
  }
  ForEachStreamingGrid(this,pTVar11);
  uVar13 = local_70;
  local_268 = 1;
  uStack_28c = 1;
  uStack_27c = uVar15;
  local_278 = uVar15;
  if (local_70 != 0) {
    puVar16 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar16 = local_78;
    }
    uStack_28c = *puVar16;
    local_278 = 0;
    uVar15 = 0;
    while (uStack_28c == 0) {
      lVar10 = (longlong)(int)uVar15;
      local_278 = local_278 + 0x20;
      uVar15 = uVar15 + 1;
      uStack_28c = 1;
      uStack_27c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_148aca8c1;
      uStack_28c = puVar16[lVar10 + 1];
    }
    uStack_28c = -uStack_28c & uStack_28c;
    uVar1 = (ulonglong)uStack_28c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_260 = (int)lVar10;
    uStack_27c = (local_278 - 1) + local_260;
    if ((int)local_70 < (int)uStack_27c) {
      uStack_27c = local_70;
    }
  }
LAB_148aca8c1:
  local_298 = (longlong *)local_98;
  uStack_274 = local_114;
  local_288 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_270 = local_98._8_4_ - local_64;
  uVar17 = local_70 & 0xffffffe0;
  TStack_238._padding_ = CONCAT44(uStack_28c,uVar15);
  uStack_280 = 0xffffffff;
  TStack_238.CurrentBitIndex = uStack_27c;
  TStack_238.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_70 >> 5;
  TStack_238._28_4_ = local_114;
  TStack_238.BaseBitIndex = local_278;
  uStack_218 = CONCAT44(uStack_26c,iStack_270);
  bVar9 = (byte)local_70;
  uStack_290 = uVar15;
  local_240 = local_298;
  TStack_238.Array = local_288;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar13 != local_70) {
    puVar16 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar16 = local_78;
    }
    uVar15 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_148aca9f1;
      uVar15 = puVar16[lVar10 + 1];
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_25c = (int)lVar10;
    uVar13 = local_25c + -1 + uVar17;
    if ((int)local_70 < (int)uVar13) {
      uVar13 = local_70;
    }
  }
LAB_148aca9f1:
  while( true ) {
    plVar3 = local_240;
    if ((int)local_240[1] - *(int *)((longlong)local_240 + 0x34) != (int)uStack_218) {
      local_2b8[0] = 0;
      `TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    uVar15 = local_c0;
    if (((TStack_238.CurrentBitIndex == uVar13) &&
        (TStack_238.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) {
      uStack_290 = 0;
      local_278 = 0;
      uStack_27c = 0;
      if (local_c0 == 0) goto LAB_148acab13;
      puVar16 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar16 = local_c8;
      }
      uVar13 = *puVar16;
      local_278 = 0;
      goto joined_r0x000148acaacc;
    }
    local_2b0[0] = 1;
    local_250 = *(undefined8 *)(*plVar3 + (longlong)TStack_238.CurrentBitIndex * 0x10);
    cVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_250,local_2b0);
    if (cVar5 == '\0') break;
    TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
  }
  goto LAB_148acacc7;
joined_r0x000148acaacc:
  if (uVar13 != 0) goto LAB_148acaaec;
  lVar10 = (longlong)(int)uStack_290;
  local_278 = local_278 + 0x20;
  uStack_290 = uStack_290 + 1;
  uStack_27c = local_c0;
  if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_290)
  goto LAB_148acab13;
  uVar13 = (puVar16 + 1)[lVar10];
  goto joined_r0x000148acaacc;
LAB_148acaaec:
  local_268 = (ulonglong)(-uVar13 & uVar13);
  uVar1 = local_268 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  local_258 = (int)lVar10;
  uStack_27c = local_258 + -1 + local_278;
  if ((int)local_c0 < (int)uStack_27c) {
    uStack_27c = local_c0;
  }
LAB_148acab13:
  local_298 = (longlong *)local_e8;
  uVar13 = local_c0 & 0xffffffe0;
  uStack_28c = (uint)local_268;
  uStack_274 = local_f4;
  local_288 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_270 = local_e8._8_4_ - local_b4;
  uStack_280 = 0xffffffff;
  TStack_208.CurrentBitIndex = uStack_27c;
  TStack_208.UnvisitedBitMask = 0xffffffff;
  TStack_208._padding_ = CONCAT44(uStack_28c,uStack_290);
  iVar12 = (int)local_c0 >> 5;
  TStack_208._28_4_ = local_f4;
  TStack_208.BaseBitIndex = local_278;
  uStack_1e8 = CONCAT44(uStack_26c,iStack_270);
  bVar9 = (byte)local_c0;
  local_210 = local_298;
  TStack_208.Array = local_288;
  if (((int)local_c0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar15 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar15 = -1 << (bVar9 & 0x1f) & puVar16[iVar12];
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_148acac30;
      uVar15 = (puVar16 + 1)[lVar10];
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar13;
    if ((int)local_c0 < (int)uVar15) {
      uVar15 = local_c0;
    }
  }
LAB_148acac30:
  while( true ) {
    plVar3 = local_210;
    if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)uStack_1e8) {
      `TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2a0);
    }
    if (((TStack_208.CurrentBitIndex == uVar15) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar3 == (longlong *)local_e8)) break;
    local_2a8[0] = 0;
    local_248 = *(undefined8 *)(*plVar3 + (longlong)TStack_208.CurrentBitIndex * 0x10);
    cVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_248,local_2a8);
    if (cVar5 == '\0') break;
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  }
LAB_148acacc7:
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// ForEachStreamingGrid @ 148acad40

void __thiscall
UWorldPartitionRuntimeSpatialHash::ForEachStreamingGrid
          (UWorldPartitionRuntimeSpatialHash *this,
          TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->StreamingGrids).ArrayNum;
  pFVar2 = (this->StreamingGrids).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->StreamingGrids).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpatialHashStreamingGrid,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0xb0;
  }
  return;
}

// ForEachStreamingGrid @ 148acadc0

void __thiscall
UWorldPartitionRuntimeSpatialHash::ForEachStreamingGrid
          (UWorldPartitionRuntimeSpatialHash *this,
          TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->StreamingGrids).ArrayNum;
  pFVar2 = (this->StreamingGrids).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->StreamingGrids).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpatialHashStreamingGrid_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0xb0;
  }
  return;
}

// ForEachStreamingGridBreakable @ 148acae40

void __thiscall
UWorldPartitionRuntimeSpatialHash::ForEachStreamingGridBreakable
          (UWorldPartitionRuntimeSpatialHash *this,
          TFunctionRef<bool___cdecl(FSpatialHashStreamingGrid_const_&)> *param_1)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->StreamingGrids).ArrayNum;
  pFVar3 = (this->StreamingGrids).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->StreamingGrids).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpatialHashStreamingGrid_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    if (cVar2 == '\0') {
      return;
    }
    pFVar3 = pFVar3 + 0xb0;
  }
  return;
}

// GetCellCoordString @ 148acb360

FString * __cdecl
UWorldPartitionRuntimeSpatialHash::GetCellCoordString
          (FString *__return_storage_ptr__,TIntVector3<__int64> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"L%lld_X%lld_Y%lld");
  return __return_storage_ptr__;
}

// GetFilteredStreamingGrids @ 148acd770

TArray<FSpatialHashStreamingGrid_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeSpatialHash::GetFilteredStreamingGrids
          (UWorldPartitionRuntimeSpatialHash *this,
          TArray<FSpatialHashStreamingGrid_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  UWorldPartitionRuntimeSpatialHash *local_28;
  TArray<FSpatialHashStreamingGrid_const_*,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  UWorldPartitionRuntimeSpatialHash **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar1 = (this->StreamingGrids).ArrayNum;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::GetFilteredStreamingGrids'::__l2::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
               ::Call;
    local_28 = this;
    local_20 = __return_storage_ptr__;
    ForEachStreamingGrid
              (this,(TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_18);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetNameToGridMapping @ 148acdf70

TMap<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
* __thiscall
UWorldPartitionRuntimeSpatialHash::GetNameToGridMapping(UWorldPartitionRuntimeSpatialHash *this)

{
  UWorldPartitionRuntimeSpatialHash *local_res8;
  code *local_18;
  UWorldPartitionRuntimeSpatialHash **local_10;
  
  if (this->bIsNameToGridMappingDirty != false) {
    TSet<TTuple<FName,FSpatialHashStreamingGrid_const_*>,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FSpatialHashStreamingGrid_const_*>,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>,FDefaultSetAllocator>
             *)&this->NameToGridMapping);
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::GetNameToGridMapping'::__l5::<lambda_1>,void,FSpatialHashStreamingGrid_const_&>
               ::Call;
    local_res8 = this;
    ForEachStreamingGrid
              (this,(TFunctionRef<void___cdecl(FSpatialHashStreamingGrid_const_&)> *)&local_18);
    this->bIsNameToGridMappingDirty = false;
    return &this->NameToGridMapping;
  }
  return &this->NameToGridMapping;
}

// GetNumGrids @ 148ace120

uint __thiscall
UWorldPartitionRuntimeSpatialHash::GetNumGrids(UWorldPartitionRuntimeSpatialHash *this)

{
  return (this->StreamingGrids).ArrayNum;
}

// GetPrivateStaticClass @ 148acfcd0

UClass * __cdecl UWorldPartitionRuntimeSpatialHash::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeSpatialHash",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeSpatialHash,0x138,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeSpatialHash>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeSpatialHash>,local_res8,
               UWorldPartitionRuntimeHash::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHash.InnerSingleton;
}

// GetShouldMergeStreamingSourceInfo @ 148ad12a0

bool __thiscall
UWorldPartitionRuntimeSpatialHash::GetShouldMergeStreamingSourceInfo
          (UWorldPartitionRuntimeSpatialHash *this)

{
  return true;
}

// GetStreamingGridByName @ 148ad1360

FSpatialHashStreamingGrid * __thiscall
UWorldPartitionRuntimeSpatialHash::GetStreamingGridByName
          (UWorldPartitionRuntimeSpatialHash *this,FName param_1)

{
  TMap<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
  *this_00;
  FSpatialHashStreamingGrid **ppFVar1;
  
  this_00 = GetNameToGridMapping(this);
  ppFVar1 = TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
            ::Find((TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                    *)this_00,param_1);
  if (ppFVar1 != (FSpatialHashStreamingGrid **)0x0) {
    return *ppFVar1;
  }
  return (FSpatialHashStreamingGrid *)0x0;
}

// GetStreamingPerformanceForCell @ 148ad17a0

EWorldPartitionStreamingPerformance __thiscall
UWorldPartitionRuntimeSpatialHash::GetStreamingPerformanceForCell
          (UWorldPartitionRuntimeSpatialHash *this,UWorldPartitionRuntimeCell *param_1)

{
  return Good;
}

// GetStreamingPerformanceForCell @ 148ad17b0

EWorldPartitionStreamingPerformance __thiscall
UWorldPartitionRuntimeSpatialHash::GetStreamingPerformanceForCell
          (UWorldPartitionRuntimeSpatialHash *this,UWorldPartitionRuntimeCell *param_1,bool *param_2
          )

{
  FName FVar1;
  FSpatialHashStreamingGrid *pFVar2;
  code *pcVar3;
  bool bVar4;
  EWorldPartitionStreamingPerformance EVar5;
  UWorldPartitionRuntimeCellDataSpatialHash *pUVar6;
  TMap<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
  *this_00;
  FSpatialHashStreamingGrid **ppFVar7;
  EWorldPartitionStreamingPerformance EVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pUVar6 = CastChecked<UWorldPartitionRuntimeCellDataSpatialHash,UWorldPartitionRuntimeCellData>
                     (&param_1->RuntimeCellData,NullChecked);
  FVar1 = (FName)pUVar6->_padding_;
  this_00 = GetNameToGridMapping(this);
  ppFVar7 = TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
            ::Find((TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                    *)this_00,FVar1);
  if ((ppFVar7 == (FSpatialHashStreamingGrid **)0x0) ||
     (pFVar2 = *ppFVar7, pFVar2 == (FSpatialHashStreamingGrid *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5839936091150350431>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeSpatialHash.cpp"
                       ,0x7a1,"StreamingGrid");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    EVar5 = Good;
  }
  else {
    EVar8 = Good;
    if ((param_1->bBlockOnSlowLoading != false) &&
       (*(char *)((longlong)&pUVar6->_padding_ + 1) != '\0')) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = pUVar6->_padding_;
      auVar10 = sqrtpd(auVar10,auVar10);
      dVar9 = (auVar10._0_8_ -
              (double)((longlong)pFVar2->CellSize <<
                      ((byte)*(undefined4 *)((longlong)&pUVar6->_padding_ + 4) & 0x3f)) *
              __real_3fe0000000000000) / (double)pFVar2->LoadingRange;
      if (0.0 < dVar9) {
        if ((double)GBlockOnSlowStreamingRatio <= dVar9) {
          if (dVar9 < (double)(GBlockOnSlowStreamingWarningFactor * GBlockOnSlowStreamingRatio)) {
            EVar8 = Slow;
          }
        }
        else {
          EVar8 = Critical;
        }
      }
      else {
        EVar8 = Immediate;
      }
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = pUVar6->_padding_;
    auVar10 = sqrtpd(auVar11,auVar11);
    dVar9 = (auVar10._0_8_ -
            (double)((longlong)pFVar2->CellSize <<
                    ((byte)*(undefined4 *)((longlong)&pUVar6->_padding_ + 4) & 0x3f)) *
            __real_3fe0000000000000) / (double)pFVar2->LoadingRange;
    if (0.0 < dVar9) {
      if ((double)GSlowStreamingRatio <= dVar9) {
        if ((double)(GSlowStreamingWarningFactor * GSlowStreamingRatio) <= dVar9)
        goto LAB_148ad1919;
        EVar5 = Slow;
      }
      else {
        EVar5 = Critical;
      }
    }
    else {
      EVar5 = Immediate;
    }
    if (EVar5 <= EVar8) {
LAB_148ad1919:
      *param_2 = Slow < EVar8;
      return EVar8;
    }
  }
  *param_2 = false;
  return EVar5;
}

// GetWorldAssetStreamingCells @ 148ad1e00

TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeSpatialHash::GetWorldAssetStreamingCells
          (UWorldPartitionRuntimeSpatialHash *this,
          TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_18;
  TArray<UWorldPartitionRuntimeCell_*,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
                      *)&this->WorldAssetStreamingObjects,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->WorldAssetStreamingObjects).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      local_10 = &local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWorldPartitionRuntimeSpatialHash::GetWorldAssetStreamingCells'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_&>
                 ::Call;
      local_res8 = __return_storage_ptr__;
      URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
                ((URuntimeHashExternalStreamingObjectBase *)*puVar4,
                 (TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)&local_18);
    }
  }
  return __return_storage_ptr__;
}

// InjectExternalStreamingObject @ 148ad28f0

/* WARNING: Removing unreachable block (ram,0x000148ad29dc) */
/* WARNING: Removing unreachable block (ram,0x000148ad29e9) */
/* WARNING: Removing unreachable block (ram,0x000148ad2a10) */
/* WARNING: Removing unreachable block (ram,0x000148ad2a15) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldPartitionRuntimeSpatialHash::InjectExternalStreamingObject
          (UWorldPartitionRuntimeSpatialHash *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  URuntimeSpatialHashExternalStreamingObject *pUVar6;
  TMap<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
  *pTVar7;
  FSpatialHashStreamingGrid **ppFVar8;
  FSpatialHashStreamingGrid *pFVar9;
  FName *this_00;
  FSpatialHashStreamingGrid *pFVar10;
  FName *pFVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_b8;
  TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> local_b0;
  URuntimeHashExternalStreamingObjectBase *local_a8 [2];
  FName local_98;
  FName local_90 [3];
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (param_1 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7206290042707246431>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x2a1,"InExternalStreamingObject");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    if ((((uint)param_1->_padding_ >> 0x1e & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(InExternalStreamingObject)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                           ,0x2a5,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    local_a8[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)local_a8);
    TSet<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>_>
              ((TSet<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_b0,(bool *)&local_b8);
    pUVar6 = CastChecked<URuntimeSpatialHashExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
                       (param_1);
    iVar1 = (pUVar6->StreamingGrids).ArrayNum;
    this_00 = (FName *)(pUVar6->StreamingGrids).AllocatorInstance.Data;
    pFVar11 = this_00 + (longlong)iVar1 * 0x16;
    while( true ) {
      if ((pUVar6->StreamingGrids).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSpatialHashStreamingGrid,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this_00 == pFVar11) {
        iVar1 = (pUVar6->StreamingGrids).ArrayNum;
        pFVar10 = (FSpatialHashStreamingGrid *)(pUVar6->StreamingGrids).AllocatorInstance.Data;
        pFVar9 = pFVar10 + iVar1;
        while( true ) {
          if ((pUVar6->StreamingGrids).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FSpatialHashStreamingGrid,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res20);
          }
          if (pFVar10 == pFVar9) break;
          FVar2 = pFVar10->GridName;
          pTVar7 = GetNameToGridMapping(this);
          ppFVar8 = TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                    ::Find((TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                            *)pTVar7,FVar2);
          if (ppFVar8 == (FSpatialHashStreamingGrid **)0x0) {
            FSpatialHashStreamingGrid::InjectExternalStreamingObjectGrid
                      ((FSpatialHashStreamingGrid *)0x0,pFVar10);
            pFVar10 = pFVar10 + 1;
          }
          else {
            FSpatialHashStreamingGrid::InjectExternalStreamingObjectGrid(*ppFVar8,pFVar10);
            pFVar10 = pFVar10 + 1;
          }
        }
        return true;
      }
      FVar2 = *this_00;
      pTVar7 = GetNameToGridMapping(this);
      ppFVar8 = TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                ::Find((TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                        *)pTVar7,FVar2);
      if ((ppFVar8 == (FSpatialHashStreamingGrid **)0x0) ||
         (pFVar10 = *ppFVar8, pFVar10 == (FSpatialHashStreamingGrid *)0x0)) {
        if ((byte)LogWorldPartition._0_1_ < 2) {
          return false;
        }
        ::FName::ToString(this_00,&local_58);
        local_90[0] = (FName)param_1->_padding_;
        ::FName::ToString(local_90,&local_68);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
        goto LAB_148ad2b69;
      }
      if (((pFVar10->Settings).bUseAlignedGridLevels !=
           (bool)(char)this_00[0x12].ComparisonIndex.Value) ||
         ((pFVar10->Settings).bSnapNonAlignedGridLevelsToLowerLevels !=
          (bool)*(char *)((longlong)&this_00[0x12].ComparisonIndex.Value + 1))) break;
      this_00 = this_00 + 0x16;
    }
    if (1 < (byte)LogWorldPartition._0_1_) {
      local_98 = (FName)param_1->_padding_;
      ::FName::ToString(&local_98,&local_78);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
LAB_148ad2b69:
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// IsStreaming3D @ 148ad4690

bool __thiscall
UWorldPartitionRuntimeSpatialHash::IsStreaming3D(UWorldPartitionRuntimeSpatialHash *this)

{
  if (GForceRuntimeSpatialHashZCulling == 0) {
    return false;
  }
  if (GForceRuntimeSpatialHashZCulling != 1) {
    return this->bEnableZCulling;
  }
  return true;
}

// PostLoad @ 148ad6110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWorldPartitionRuntimeSpatialHash::PostLoad(UWorldPartitionRuntimeSpatialHash *this)

{
  UObject::PostLoad((UObject *)this);
  if (4 < (byte)LogWorldPartition._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    return;
  }
  return;
}

// PreSave @ 148ad65d0

void __thiscall
UWorldPartitionRuntimeSpatialHash::PreSave
          (UWorldPartitionRuntimeSpatialHash *this,FObjectPreSaveContext param_1)

{
  int *piVar1;
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  this->bIsNameToGridMappingDirty = true;
  DestructItems<FSpatialHashStreamingGrid,int>
            ((FSpatialHashStreamingGrid *)(this->StreamingGrids).AllocatorInstance.Data,
             (this->StreamingGrids).ArrayNum);
  piVar1 = &(this->StreamingGrids).ArrayMax;
  (this->StreamingGrids).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,0,&(this->StreamingGrids).AllocatorInstance,0,piVar1);
  }
  return;
}

// RegisterWorldAssetStreaming @ 148ad6740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGuid * __thiscall
UWorldPartitionRuntimeSpatialHash::RegisterWorldAssetStreaming
          (UWorldPartitionRuntimeSpatialHash *this,FGuid *__return_storage_ptr__,
          FRegisterWorldAssetStreamingParams *param_1)

{
  FName FVar1;
  code *pcVar2;
  undefined8 uVar3;
  FName FVar4;
  UWorldPartitionRuntimeSpatialHash *this_00;
  TObjectPtr<URuntimeSpatialHashExternalStreamingObject> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  TMap<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
  *pTVar10;
  FSpatialHashStreamingGrid **ppFVar11;
  FGuid *pFVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  URuntimeHashExternalStreamingObjectBase *pUVar16;
  URuntimeSpatialHashExternalStreamingObject *pUVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  longlong *plVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  UWorldPartition *this_01;
  TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *pTVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  FRegisterWorldAssetStreamingParams *local_1c0;
  FScriptContainerElement *local_1b8;
  FName local_1b0;
  FString local_1a8;
  UWorldPartitionRuntimeSpatialHash *local_198;
  undefined8 local_190;
  undefined8 local_188;
  TPairInitializer<FGuid_const_&,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_&&>
  local_180;
  UObject *local_170;
  FSpatialHashStreamingGrid *local_168;
  FGuid *local_160;
  URuntimeSpatialHashExternalStreamingObject *local_158;
  TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
  *local_150;
  undefined1 local_148 [32];
  FScriptContainerElement *local_128;
  FGuid *local_118;
  URuntimeSpatialHashExternalStreamingObject **local_110;
  FRegisterWorldAssetStreamingParams *local_108;
  undefined8 *local_100;
  URuntimeSpatialHashExternalStreamingObject *local_f8;
  UWorldPartitionRuntimeSpatialHash *local_f0;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c0 = param_1;
  local_198 = this;
  local_180.Value = (TObjectPtr<URuntimeSpatialHashExternalStreamingObject> *)__return_storage_ptr__
  ;
  if ((((*(longlong *)&(param_1->WorldAssetDesc).WorldAsset.SoftObjectPtr.field_0x8 == 0) ||
       ((param_1->WorldAssetDesc).TargetGrid == (FName)0x0)) ||
      (pFVar12 = &param_1->Guid, local_160 = pFVar12,
      (((param_1->Guid).D == 0 && (param_1->Guid).C == 0) && (param_1->Guid).B == 0) &&
      pFVar12->A == 0)) || ((param_1->Bounds).IsValid == '\0')) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
LAB_148ad6d60:
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  uVar9 = CityHash64((char *)pFVar12,0x10);
  local_150 = (TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
               *)&this->WorldAssetStreamingObjects;
  iVar7 = TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(local_150,(uint)uVar9,pFVar12);
  if (iVar7 != -1) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar12,&local_1a8,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148ad6d60;
  }
  FVar1 = (param_1->WorldAssetDesc).TargetGrid;
  pTVar10 = GetNameToGridMapping(this);
  ppFVar11 = TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
             ::Find((TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                     *)pTVar10,FVar1);
  this_00 = local_198;
  if ((ppFVar11 == (FSpatialHashStreamingGrid **)0x0) ||
     (local_168 = *ppFVar11, local_168 == (FSpatialHashStreamingGrid *)0x0)) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      ::FName::ToString(&(param_1->WorldAssetDesc).TargetGrid,&local_d8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_148ad6d60;
  }
  pFVar24 = (param_1->HLODWorldAssetDescs).AllocatorInstance.Data;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = 0;
  iVar7 = (param_1->HLODWorldAssetDescs).ArrayNum;
  pFVar22 = pFVar24 + (longlong)iVar7 * 0x30;
  local_1b8 = pFVar22;
  while( true ) {
    if ((param_1->HLODWorldAssetDescs).ArrayNum != iVar7) {
      local_1d8 = 0;
      `TCheckedPointerIterator<UWorldPartition::FRegisterWorldAssetStreamingParams::FWorldAssetDesc_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    if (pFVar24 == pFVar22) break;
    if ((*(longlong *)(pFVar24 + 8) != 0) &&
       (FVar1 = *(FName *)(pFVar24 + 0x28), pFVar22 = local_1b8, param_1 = local_1c0,
       FVar1 != (FName)0x0)) {
      pTVar10 = GetNameToGridMapping(this_00);
      ppFVar11 = TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                 ::Find((TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                         *)pTVar10,FVar1);
      if ((ppFVar11 == (FSpatialHashStreamingGrid **)0x0) ||
         (*ppFVar11 == (FSpatialHashStreamingGrid *)0x0)) {
        pFVar22 = local_1b8;
        param_1 = local_1c0;
        if ((byte)LogWorldPartition._0_1_ < 2) goto LAB_148ad6a43;
        ::FName::ToString((FName *)(pFVar24 + 0x28),&local_e8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        FVar19.Data = local_e8.Data.AllocatorInstance.Data;
      }
      else {
        local_148._8_8_ = *(undefined8 *)pFVar24;
        local_148._0_8_ = *ppFVar11;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_148 + 0x10),(FSoftObjectPath *)(pFVar24 + 8));
        if (((local_1d0.Data <=
              (TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *)local_148)
            && ((FScriptContainerElement *)local_148 <
                local_1d0.Data + (longlong)local_1c8._4_4_ * 0x30)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FGuid *)(*pcVar2)();
          return pFVar12;
        }
        iVar8 = (int)local_1c8;
        if ((int)local_1c8 == local_1c8._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_1d0,(int *)((longlong)&local_1c8 + 4));
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,iVar8 + 1);
        lVar18 = (longlong)iVar8 * 0x30;
        *(undefined8 *)(local_1d0.Data + lVar18) = local_148._0_8_;
        *(undefined8 *)(local_1d0.Data + lVar18 + 8) = local_148._8_8_;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_1d0.Data + lVar18 + 0x10),
                   (FSoftObjectPath *)(local_148 + 0x10));
        FVar19.Data = local_128;
      }
      pFVar22 = local_1b8;
      param_1 = local_1c0;
      if (FVar19.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar19.Data);
        pFVar22 = local_1b8;
        param_1 = local_1c0;
      }
    }
LAB_148ad6a43:
    pFVar24 = pFVar24 + 0x30;
  }
  pUVar13 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar13);
  pUVar13 = URuntimeSpatialHashExternalStreamingObject::StaticClass();
  pTVar5 = local_180.Value;
  this_01 = (UWorldPartition *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar13 == (UClass *)0x0)) {
    local_1b0.ComparisonIndex.Value = 0;
    local_1b0.Number = 0;
    if (pUVar13 != (UClass *)0x0) goto LAB_148ad6a9a;
LAB_148ad6ac9:
    pUVar13 = (UClass *)0x0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_148ad6a9a:
    local_1b0.ComparisonIndex.Value = 0;
    local_1b0.Number = 0;
    pUVar15 = URuntimeHashExternalStreamingObjectBase::StaticClass();
    if (pUVar15 == (UClass *)0x0) goto LAB_148ad6ac9;
    iVar7 = (int)pUVar15->_padding_;
    if (((int)pUVar13->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar7 * 8) !=
        &pUVar15->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_148ad6ac9;
  }
  FVar1 = local_1b0;
  if (local_1b0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this_00,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar15 = URuntimeHashExternalStreamingObjectBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar15,pUVar13);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar13);
  FVar4 = local_1b0;
  local_c8._8_8_ = this_00;
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_1b0.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_1b0.Number = FVar1.Number;
  local_c8._16_4_ = local_1b0.ComparisonIndex.Value;
  local_c8._20_4_ = local_1b0.Number;
  local_c8._24_4_ = RF_Public;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_1b0 = FVar4;
  pUVar16 = (URuntimeHashExternalStreamingObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar20 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  local_170 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  FSoftObjectPtr::operator=(&(pUVar16->OuterWorld).SoftObjectPtr,(FObjectPtr)&local_170);
  pUVar17 = CastChecked<URuntimeSpatialHashExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
                      (pUVar16);
  if (pUVar17 == (URuntimeSpatialHashExternalStreamingObject *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
  }
  else {
    local_100 = &local_190;
    local_108 = local_1c0;
    local_190 = 0;
    local_188 = 0;
    local_f0 = this_00;
    local_f8 = pUVar17;
    bVar6 = `UWorldPartitionRuntimeSpatialHash::RegisterWorldAssetStreaming'::__l2::<lambda_1>::
            operator()(&local_108,local_168,(TSoftObjectPtr<UWorld> *)local_1c0,false);
    if (!bVar6) {
      *pTVar5 = (TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_u_0)0x0;
      *(undefined8 *)((longlong)pTVar5 + 8) = 0;
      goto LAB_148ad6cd7;
    }
    iVar7 = (int)local_1c8;
    uVar21 = (ulonglong)(int)local_1c8;
    pTVar23 = (TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *)
              (local_1d0.Data + uVar21 * 0x30);
    FVar19.Data = local_1d0.Data;
    while( true ) {
      if ((int)uVar21 != iVar7) {
        local_1d7[0] = 0;
        `TCheckedPointerIterator<TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1d7);
      }
      if ((TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *)FVar19.Data ==
          pTVar23) {
        if ((this_00->_padding_ & 0x10) == 0) {
          this_01 = (UWorldPartition *)this_00->_padding_;
        }
        else {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1240560329461596353>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                             ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FGuid *)(*pcVar2)();
            return pFVar12;
          }
        }
        UWorldPartition::InjectExternalStreamingObject
                  (this_01,(URuntimeHashExternalStreamingObjectBase *)pUVar17);
        local_158 = pUVar17;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        pFVar12 = local_160;
        local_110 = &local_158;
        local_118 = local_160;
        TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FGuid_const_&,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_&&>_>
                  (local_150,&local_180,(bool *)&local_118);
        uVar3 = *(undefined8 *)&pFVar12->C;
        *pTVar5 = (TObjectPtr<URuntimeSpatialHashExternalStreamingObject>)*(undefined8 *)pFVar12;
        *(undefined8 *)((longlong)pTVar5 + 8) = uVar3;
        goto LAB_148ad6cd7;
      }
      bVar6 = `UWorldPartitionRuntimeSpatialHash::RegisterWorldAssetStreaming'::__l2::<lambda_1>::
              operator()(&local_108,*(FSpatialHashStreamingGrid **)FVar19.Data,
                         (TSoftObjectPtr<UWorld> *)
                         &((TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_>
                            *)FVar19.Data)->field_0x8,true);
      if (!bVar6) break;
      uVar21 = local_1c8 & 0xffffffff;
      FVar19.Data = FVar19.Data + 0x30;
    }
  }
  *pTVar5 = (TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_u_0)0x0;
  *(undefined8 *)((longlong)pTVar5 + 8) = 0;
LAB_148ad6cd7:
  DestructItems<TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_>,int>
            ((TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *)
             local_1d0.Data,(int)local_1c8);
  if ((TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *)local_1d0.Data ==
      (TTuple<FSpatialHashStreamingGrid_const_*,TSoftObjectPtr<UWorld>_const_> *)0x0) {
    return (FGuid *)pTVar5;
  }
  FMemory::Free(local_1d0.Data);
  return (FGuid *)pTVar5;
}

// RemoveExternalStreamingObject @ 148ad8b10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWorldPartitionRuntimeSpatialHash::RemoveExternalStreamingObject
          (UWorldPartitionRuntimeSpatialHash *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  URuntimeSpatialHashExternalStreamingObject *pUVar6;
  TMap<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
  *this_00;
  FSpatialHashStreamingGrid **ppFVar7;
  FSpatialHashStreamingGrid *pFVar8;
  FSpatialHashStreamingGrid *pFVar9;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  URuntimeHashExternalStreamingObjectBase *local_res20;
  FWeakObjectPtr local_48;
  FName local_40;
  FString local_38;
  
  if (param_1 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7206290042707246414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x2b2,"InExternalStreamingObject");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    if ((((uint)param_1->_padding_ >> 0x1e & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(InExternalStreamingObject)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                           ,0x2b6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    local_48 = local_res18;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      iVar5 = TSet<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::
              RemoveImpl<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr>_>
                        ((TSet<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                          *)&this->_padding_,
                         local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                         (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr>
                          *)&local_48);
      if (iVar5 != 0) {
        pUVar6 = CastChecked<URuntimeSpatialHashExternalStreamingObject,URuntimeHashExternalStreamingObjectBase>
                           (param_1);
        iVar5 = (pUVar6->StreamingGrids).ArrayNum;
        pFVar9 = (FSpatialHashStreamingGrid *)(pUVar6->StreamingGrids).AllocatorInstance.Data;
        pFVar8 = pFVar9 + iVar5;
        while( true ) {
          if ((pUVar6->StreamingGrids).ArrayNum != iVar5) {
            `TCheckedPointerIterator<FSpatialHashStreamingGrid,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res10);
          }
          if (pFVar9 == pFVar8) break;
          FVar1 = pFVar9->GridName;
          this_00 = GetNameToGridMapping(this);
          ppFVar7 = TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                    ::Find((TMapBase<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
                            *)this_00,FVar1);
          if ((ppFVar7 != (FSpatialHashStreamingGrid **)0x0) &&
             (*ppFVar7 != (FSpatialHashStreamingGrid *)0x0)) {
            FSpatialHashStreamingGrid::RemoveExternalStreamingObjectGrid(*ppFVar7,pFVar9);
          }
          pFVar9 = pFVar9 + 1;
        }
        return true;
      }
    }
    if (2 < (byte)LogWorldPartition._0_1_) {
      local_40 = (FName)param_1->_padding_;
      ::FName::ToString(&local_40,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// Serialize @ 148adaa10

void __thiscall
UWorldPartitionRuntimeSpatialHash::Serialize
          (UWorldPartitionRuntimeSpatialHash *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 148adaa50

void __thiscall
UWorldPartitionRuntimeSpatialHash::Serialize
          (UWorldPartitionRuntimeSpatialHash *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUWorldPartitionRuntimeSpatialHash @ 148adb960

void __cdecl
UWorldPartitionRuntimeSpatialHash::StaticRegisterNativesUWorldPartitionRuntimeSpatialHash(void)

{
  return;
}

// SupportsWorldAssetStreaming @ 148adb9a0

bool __thiscall
UWorldPartitionRuntimeSpatialHash::SupportsWorldAssetStreaming
          (UWorldPartitionRuntimeSpatialHash *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  TMap<FName,FSpatialHashStreamingGrid_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSpatialHashStreamingGrid_const_*,0>_>
  *pTVar4;
  undefined1 *puVar5;
  
  pTVar4 = GetNameToGridMapping(this);
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
    puVar5 = *(undefined1 **)&pTVar4->field_0x40;
    if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &pTVar4->field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & FVar1.Number + uVar2) *
                              4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)pTVar4 + (longlong)iVar3 * 0x18) == FVar1) goto LAB_148adba1c;
        iVar3 = *(int *)(*(longlong *)pTVar4 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_148adba1c:
  return iVar3 != -1;
}

// UnregisterWorldAssetStreaming @ 148add1c0

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
UWorldPartitionRuntimeSpatialHash::UnregisterWorldAssetStreaming
          (UWorldPartitionRuntimeSpatialHash *this,FGuid *param_1)

{
  TMap<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>_>
  *this_00;
  URuntimeHashExternalStreamingObjectBase *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FNameEntryId FVar5;
  ulong64 uVar6;
  UWorldPartition *this_02;
  undefined4 extraout_var;
  FString *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  EUniqueObjectNameOptions local_res20;
  undefined4 uStackX_24;
  char *in_stack_ffffffffffffff98;
  ulonglong uVar11;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  FString local_40;
  
  this_00 = &this->WorldAssetStreamingObjects;
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar6,param_1);
  if (iVar4 != -1) {
    lVar9 = (longlong)iVar4 * 0x20 + *(longlong *)&this_00->field_0x0;
    plVar10 = (longlong *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      if ((*plVar10 != 0) && ((*(uint *)(*plVar10 + 8) >> 0x1e & 1) == 0)) {
        if ((this->_padding_ & 0x10) == 0) {
          if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
            this_02 = UWorldPartitionRuntimeHash::GetOuterUWorldPartition
                                ((UWorldPartitionRuntimeHash *)this);
            UWorldPartition::RemoveExternalStreamingObject
                      (this_02,(URuntimeHashExternalStreamingObjectBase *)*plVar10);
          }
        }
        else {
          in_stack_ffffffffffffff98 = "false || !HasAnyFlags(RF_ClassDefaultObject)";
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1240560329461596353>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionRuntimeHash.h"
                             ,0xc1,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        this_01 = (URuntimeHashExternalStreamingObjectBase *)*plVar10;
        local_50._8_8_ = local_res8;
        local_50._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<``UWorldPartitionRuntimeSpatialHash::UnregisterWorldAssetStreaming'::__l5::<lambda_1>::operator()'::__l2::<lambda_2>,void,UWorldPartitionRuntimeCell_&>
             ::Call;
        URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
                  (this_01,(TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)local_50);
        FVar5 = FNameEntryId::FromValidEName((EName)local_res18);
        uStackX_24 = 0;
        local_res20 = *(EUniqueObjectNameOptions *)CONCAT44(extraout_var,FVar5.Value);
        uVar11 = (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000;
        MakeUniqueObjectName
                  ((UObject *)local_58,(UClass *)this_01->_padding_,(FName)this_01->_padding_,
                   local_res20);
        pcVar1 = *(code **)(this_01->_padding_ + 0x170);
        pFVar7 = ::FName::ToString((FName *)local_58,&local_40);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        (*pcVar1)(this_01,pwVar8,0,0x34,uVar11);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
      if (*(int *)&(this->WorldAssetStreamingObjects).field_0x8 !=
          *(int *)&(this->WorldAssetStreamingObjects).field_0x34) {
        uVar6 = CityHash64((char *)param_1,0x10);
        TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<URuntimeSpatialHashExternalStreamingObject>,0>,FDefaultSetAllocator>
                             *)this_00,(uint)uVar6,param_1);
      }
      return true;
    }
  }
  return false;
}

