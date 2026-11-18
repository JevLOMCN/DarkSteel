// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 16

// StaticClass @ 145ece5d0

UClass * __cdecl UProceduralFoliageSpawner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageSpawner",
               &Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton,
               StaticRegisterNativesUProceduralFoliageSpawner,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralFoliageSpawner>,
               InternalVTableHelperCtorCaller<UProceduralFoliageSpawner>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton;
}

// UProceduralFoliageSpawner @ 145ed9500

UProceduralFoliageSpawner * __thiscall
UProceduralFoliageSpawner::UProceduralFoliageSpawner
          (UProceduralFoliageSpawner *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UProceduralFoliageSpawner__6B_;
  (this->LastCancel).Counter = 0;
  (this->FoliageTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageTypes).ArrayNum = 0;
  (this->FoliageTypes).ArrayMax = 0;
  this->bUseOverrideFoliageTerrainMaterials = false;
  (this->OverrideFoliageTerrainMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideFoliageTerrainMaterials).ArrayNum = 0;
  (this->OverrideFoliageTerrainMaterials).ArrayMax = 0;
  (this->PrecomputedTiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecomputedTiles).ArrayNum = 0;
  (this->PrecomputedTiles).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  return this;
}

// UProceduralFoliageSpawner @ 145ed9550

UProceduralFoliageSpawner * __thiscall
UProceduralFoliageSpawner::UProceduralFoliageSpawner
          (UProceduralFoliageSpawner *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TileSize = 10000.0;
  this->_padding_ = (longlong)&___7UProceduralFoliageSpawner__6B_;
  (this->LastCancel).Counter = 0;
  (this->FoliageTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageTypes).ArrayNum = 0;
  (this->FoliageTypes).ArrayMax = 0;
  this->bUseOverrideFoliageTerrainMaterials = false;
  (this->OverrideFoliageTerrainMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideFoliageTerrainMaterials).ArrayNum = 0;
  (this->OverrideFoliageTerrainMaterials).ArrayMax = 0;
  (this->PrecomputedTiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecomputedTiles).ArrayNum = 0;
  (this->PrecomputedTiles).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  this->MinimumQuadTreeSize = 100.0;
  this->NumUniqueTiles = 10;
  this->RandomSeed = 0x2a;
  return this;
}

// ~UProceduralFoliageSpawner @ 145eda600

void __thiscall
UProceduralFoliageSpawner::~UProceduralFoliageSpawner(UProceduralFoliageSpawner *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UProceduralFoliageSpawner__6B_;
  pFVar1 = (this->PrecomputedTiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)
             (this->OverrideFoliageTerrainMaterials).AllocatorInstance.Data,
             (this->OverrideFoliageTerrainMaterials).ArrayNum);
  pFVar1 = (this->OverrideFoliageTerrainMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FoliageTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateProceduralFoliageInstances @ 145edf9d0

void __thiscall
UProceduralFoliageSpawner::CreateProceduralFoliageInstances(UProceduralFoliageSpawner *this)

{
  int iVar1;
  FFoliageTypeObject *this_00;
  FFoliageTypeObject *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FoliageTypes).ArrayNum;
  this_00 = (FFoliageTypeObject *)(this->FoliageTypes).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->FoliageTypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFoliageTypeObject,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FFoliageTypeObject::RefreshInstance(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// CreateTempTile @ 145edfc10

UProceduralFoliageTile * __thiscall
UProceduralFoliageSpawner::CreateTempTile(UProceduralFoliageSpawner *this)

{
  UProceduralFoliageTile *this_00;
  
  this_00 = NewObject<UProceduralFoliageTile>((UObject *)this);
  UProceduralFoliageTile::InitSimulation(this_00,this,0);
  return this_00;
}

// Empty @ 145ee07a0

void __thiscall UProceduralFoliageSpawner::Empty(UProceduralFoliageSpawner *this)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  UProceduralFoliageTile *this_00;
  FWeakObjectPtr *this_01;
  undefined1 local_res8 [8];
  
  this_01 = (FWeakObjectPtr *)(this->PrecomputedTiles).AllocatorInstance.Data;
  iVar3 = (this->PrecomputedTiles).ArrayNum;
  pFVar2 = this_01 + iVar3;
  while( true ) {
    if ((this->PrecomputedTiles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UProceduralFoliageTile,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar2) break;
    this_00 = (UProceduralFoliageTile *)FWeakObjectPtr::Get(this_01);
    if (this_00 != (UProceduralFoliageTile *)0x0) {
      UProceduralFoliageTile::Empty(this_00);
    }
    this_01 = this_01 + 1;
  }
  piVar1 = &(this->PrecomputedTiles).ArrayMax;
  (this->PrecomputedTiles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PrecomputedTiles).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetPrivateStaticClass @ 145ee5440

UClass * __cdecl UProceduralFoliageSpawner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageSpawner",
               &Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton,
               StaticRegisterNativesUProceduralFoliageSpawner,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralFoliageSpawner>,
               InternalVTableHelperCtorCaller<UProceduralFoliageSpawner>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageSpawner.InnerSingleton;
}

// GetRandomNumber @ 145ee5710

int __thiscall UProceduralFoliageSpawner::GetRandomNumber(UProceduralFoliageSpawner *this)

{
  uint uVar1;
  
  uVar1 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar1;
  return (int)(((float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000) * __real_46fffe00);
}

// GetRandomTile @ 145ee5ad0

UProceduralFoliageTile * __thiscall
UProceduralFoliageSpawner::GetRandomTile(UProceduralFoliageSpawner *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UProceduralFoliageTile *pUVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (this->PrecomputedTiles).ArrayNum;
  if (iVar1 == 0) {
    return (UProceduralFoliageTile *)0x0;
  }
  uVar5 = (int)((double)(((float)(param_1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) -
                         __real_3f800000) * __real_46fffe00) /
               ((double)((float)(param_2 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) -
                        __real_3f800000) + __real_3f847ae147ae147b)) % iVar1;
  uVar6 = iVar1 - 1U;
  if ((int)uVar5 < (int)(iVar1 - 1U)) {
    uVar6 = uVar5;
  }
  uVar5 = 0;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  uVar6 = 0;
  if ((int)uVar5 < iVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UProceduralFoliageTile *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (UProceduralFoliageTile *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)
                               ((this->PrecomputedTiles).AllocatorInstance.Data +
                               (longlong)(int)uVar5 * 8));
  return pUVar4;
}

// Serialize @ 145eeb4e0

void __thiscall
UProceduralFoliageSpawner::Serialize(UProceduralFoliageSpawner *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145eeb500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FProceduralFoliageCustomVersion::GUID);
  return;
}

// Serialize @ 145eeb510

void __thiscall
UProceduralFoliageSpawner::Serialize
          (UProceduralFoliageSpawner *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FProceduralFoliageCustomVersion::GUID);
  return;
}

// SetClean @ 145eeb5b0

void __thiscall UProceduralFoliageSpawner::SetClean(UProceduralFoliageSpawner *this)

{
  int iVar1;
  UFoliageType *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FoliageTypes).ArrayNum;
  pFVar3 = (this->FoliageTypes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->FoliageTypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFoliageTypeObject,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong *)(pFVar3 + 8) != 0) {
      pUVar2 = UClass::GetDefaultObject<UFoliageType>
                         (*(UClass **)(*(longlong *)(pFVar3 + 8) + 0x10));
      *(int *)(*(longlong *)(pFVar3 + 8) + 0x4a0) = pUVar2->ChangeCount;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return;
}

// Simulate @ 145eeb9f0

void __thiscall UProceduralFoliageSpawner::Simulate(UProceduralFoliageSpawner *this,int param_1)

{
  TArray<TWeakObjectPtr<UProceduralFoliageTile,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  TFuture<UProceduralFoliageTile_*> *pTVar13;
  FText *pFVar14;
  UFoliageType *pUVar15;
  uint uVar16;
  FFoliageTypeObject *this_00;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  FFoliageTypeObject *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  FWeakObjectPtr local_f8;
  longlong local_f0;
  FTimespan local_e8;
  UObject *local_e0;
  FText local_d8;
  <lambda_1> local_c8;
  undefined1 local_a8 [16];
  FText local_98;
  TUniqueFunction<void___cdecl(void)> local_88;
  
  uVar20 = this->RandomSeed;
  (this->RandomStream).InitialSeed = uVar20;
  (this->RandomStream).Seed = uVar20;
  iVar12 = (this->FoliageTypes).ArrayNum;
  this_00 = (FFoliageTypeObject *)(this->FoliageTypes).AllocatorInstance.Data;
  pFVar21 = this_00 + iVar12;
  while( true ) {
    if ((this->FoliageTypes).ArrayNum != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFoliageTypeObject,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar21) break;
    FFoliageTypeObject::RefreshInstance(this_00);
    this_00 = this_00 + 1;
  }
  LOCK();
  (this->LastCancel).Counter = (this->LastCancel).Counter + 1;
  UNLOCK();
  uVar20 = 0;
  piVar17 = &(this->PrecomputedTiles).ArrayMax;
  (this->PrecomputedTiles).ArrayNum = 0;
  if (*piVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PrecomputedTiles).AllocatorInstance,0,piVar17);
  }
  fVar7 = __real_46fffe00;
  fVar6 = __real_3f800000;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  uVar19 = uVar20;
  if (0 < this->NumUniqueTiles) {
    do {
      local_c8.NewTile = NewObject<UProceduralFoliageTile>((UObject *)this);
      uVar16 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
      (this->RandomStream).Seed = uVar16;
      local_c8.LastCancelInit = (this->LastCancel).Counter;
      local_88._0_8_ = 0;
      local_88._40_8_ = 0;
      local_c8.RandomNumber = (int)(((float)(uVar16 >> 9 | 0x3f800000) - fVar6) * fVar7);
      local_c8.__this = this;
      local_c8.NumSteps = param_1;
      pTVar13 = Async<_UProceduralFoliageSpawner::Simulate_::__l4::<lambda_1>_>
                          ((TFuture<UProceduralFoliageTile_*> *)local_a8,ThreadPool,&local_c8,
                           &local_88);
      if (((local_108.Data <= pTVar13) &&
          (pTVar13 < (TFuture<UProceduralFoliageTile_*> *)
                     (local_108.Data + (longlong)local_100._4_4_ * 0x10))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (int)local_100;
      if ((int)local_100 == local_100._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_108,(int *)((longlong)&local_100 + 4));
      }
      local_100 = CONCAT44(local_100._4_4_,iVar12 + 1);
      *(undefined8 *)(local_108.Data + (longlong)iVar12 * 0x10) = *(undefined8 *)pTVar13;
      *(undefined8 *)(local_108.Data + (longlong)iVar12 * 0x10 + 8) =
           *(undefined8 *)&pTVar13->field_0x8;
      *(undefined8 *)&pTVar13->field_0x8 = 0;
      *(undefined8 *)pTVar13 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_a8._8_8_);
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < this->NumUniqueTiles);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_d8,L"ProceduralFoliage",L"SimulateProceduralFoliage",
             L"Simulate ProceduralFoliage...");
  FFeedbackContext::BeginSlowTask(GWarn,&local_d8,true,true);
  bVar9 = false;
  local_res20 = (int)local_100;
  if (0 < (int)local_100) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = __real_412e848100000000;
    lVar23 = 0;
    auVar24 = roundpd(auVar24,auVar24,1);
    local_f0 = (longlong)auVar24._0_8_;
    do {
      lVar2 = local_f0;
      iVar12 = (int)local_100;
      while( true ) {
        uVar19 = 0;
        if ((int)uVar20 < iVar12) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_e8.Ticks = lVar2;
        if ((*(FFutureState **)(local_108.Data + lVar23) != (FFutureState *)0x0) &&
           (bVar10 = FFutureState::WaitFor(*(FFutureState **)(local_108.Data + lVar23),&local_e8),
           bVar10)) break;
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"ProceduralFoliage",L"SimulateProceduralFoliage",
                             L"Simulate ProceduralFoliage...");
        FFeedbackContext::StatusUpdate(GWarn,uVar20,local_res20,pFVar14);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        cVar11 = (**(code **)(GWarn->_padding_ + 0x60))();
        iVar12 = (int)local_100;
        if ((cVar11 != '\0') && (!bVar9)) {
          LOCK();
          (this->LastCancel).Counter = (this->LastCancel).Counter + 1;
          UNLOCK();
          bVar9 = true;
        }
      }
      pTVar1 = &this->PrecomputedTiles;
      uVar19 = 0;
      if ((int)uVar20 < (int)local_100) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar8.Data = local_108.Data;
      if (*(longlong *)(local_108.Data + lVar23) == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x155,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(longlong *)(FVar8.Data + lVar23) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar2 = *(longlong *)(FVar8.Data + lVar23);
      while (*(char *)(lVar2 + 0x68) == '\0') {
        (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x20))(*(longlong **)(lVar2 + 0x60),0xffffffff)
        ;
      }
      pUVar3 = *(UObject **)(lVar2 + 0x70);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_f8.ObjectIndex = 0;
      local_f8.ObjectSerialNumber = 0;
      local_e0 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_e0);
      pFVar4 = (FWeakObjectPtr *)(pTVar1->AllocatorInstance).Data;
      piVar17 = &(this->PrecomputedTiles).ArrayMax;
      if (((pFVar4 <= &local_f8) && (&local_f8 < pFVar4 + *piVar17)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (this->PrecomputedTiles).ArrayNum;
      if (iVar12 == *piVar17) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar1->AllocatorInstance,piVar17);
      }
      uVar20 = uVar20 + 1;
      (this->PrecomputedTiles).ArrayNum = iVar12 + 1;
      lVar23 = lVar23 + 0x10;
      *(FWeakObjectPtr *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_f8;
    } while ((int)uVar20 < (int)local_100);
  }
  piVar17 = &(this->PrecomputedTiles).ArrayMax;
  FFeedbackContext::EndSlowTask(GWarn);
  if (bVar9) {
    (this->PrecomputedTiles).ArrayNum = 0;
    if (*piVar17 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->PrecomputedTiles).AllocatorInstance,0,piVar17);
    }
  }
  else {
    iVar12 = (this->FoliageTypes).ArrayNum;
    pFVar18 = (this->FoliageTypes).AllocatorInstance.Data;
    pFVar22 = pFVar18 + (longlong)iVar12 * 0x20;
    while( true ) {
      if ((this->FoliageTypes).ArrayNum != iVar12) {
        `TCheckedPointerIterator<FFoliageTypeObject,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar18 == pFVar22) break;
      if (*(longlong *)(pFVar18 + 8) != 0) {
        pUVar15 = UClass::GetDefaultObject<UFoliageType>
                            (*(UClass **)(*(longlong *)(pFVar18 + 8) + 0x10));
        *(int *)(*(longlong *)(pFVar18 + 8) + 0x4a0) = pUVar15->ChangeCount;
      }
      pFVar18 = pFVar18 + 0x20;
    }
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  DestructItems<TFuture<UProceduralFoliageTile_*>,int>
            ((TFuture<UProceduralFoliageTile_*> *)local_108.Data,(int)local_100);
  if ((TFuture<UProceduralFoliageTile_*> *)local_108.Data !=
      (TFuture<UProceduralFoliageTile_*> *)0x0) {
    FMemory::Free(local_108.Data);
  }
  return;
}

// StaticRegisterNativesUProceduralFoliageSpawner @ 145eed090

void __cdecl UProceduralFoliageSpawner::StaticRegisterNativesUProceduralFoliageSpawner(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSimulate @ 145eefc10

void __cdecl UProceduralFoliageSpawner::execSimulate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Simulate((UProceduralFoliageSpawner *)param_1,local_res10[0]);
  return;
}

