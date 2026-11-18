// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 28

// FLandscapeGrassMapsBuilder @ 145f78da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLandscapeGrassMapsBuilder * __thiscall
FLandscapeGrassMapsBuilder::FLandscapeGrassMapsBuilder
          (FLandscapeGrassMapsBuilder *this,UWorld *param_1,
          FLandscapeTextureStreamingManager *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  FLandscapeGrassMapsBuilder *pFVar7;
  double dVar8;
  
  dVar2 = __real_ffefffffffffffff;
  (this->StatePoolAllocator).FreeList = (FreeListNode *)0x0;
  (this->StatePoolAllocator).NumAllocated = 0;
  (this->StatePoolAllocator).NumLive = 0;
  this->PendingCount = 0;
  this->NotReadyCount = 0;
  this->StreamingCount = 0;
  this->RenderingCount = 0;
  this->AsyncFetchCount = 0;
  this->PopulatedCount = 0;
  this->TotalComponentsWaitingCount = 0;
  this->bRenderCommandsQueuedByLastUpdate = false;
  this->World = param_1;
  *(undefined8 *)&(this->ComponentStates).field_0x8 = 0;
  *(undefined8 *)&this->ComponentStates = 0;
  *(undefined8 *)&(this->ComponentStates).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentStates).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentStates).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentStates).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentStates).field_0x48 = 0;
  (this->PendingComponentsHeap).ArrayNum = 0;
  (this->PendingComponentsHeap).ArrayMax = 0;
  this->FirstNewPendingComponent = 0x7fffffff;
  dVar4 = _UNK_1508ffb58;
  dVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  this->PendingUpdateAmortizationCounter = 0;
  this->LastMustHaveDistanceScale = 0.0;
  (this->AmortizedUpdate).FirstIndex = 0;
  (this->AmortizedUpdate).LastIndex = 0;
  this->TextureStreamingManager = param_2;
  (this->PendingComponentsHeap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar5 = GGrassMapCameraCutTranslationThreshold;
  *(undefined8 *)&(this->PreviousCameraHashGrid).Hash.field_0x8 = 0;
  *(undefined8 *)&(this->PreviousCameraHashGrid).Hash = 0;
  *(undefined8 *)&(this->PreviousCameraHashGrid).Hash.field_0x20 = 0;
  *(undefined4 *)&(this->PreviousCameraHashGrid).Hash.field_0x28 = 0;
  *(undefined4 *)&(this->PreviousCameraHashGrid).Hash.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousCameraHashGrid).Hash.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousCameraHashGrid).Hash.field_0x34 = 0;
  *(undefined8 *)&(this->PreviousCameraHashGrid).Hash.field_0x40 = 0;
  *(undefined4 *)&(this->PreviousCameraHashGrid).Hash.field_0x48 = 0;
  (this->PreviousCameraHashGrid).Mutex.State = (atomic<unsigned_char>)0x0;
  dVar8 = (double)fVar5;
  if ((double)fVar5 <= __real_3e45798ee2308c3a) {
    dVar8 = __real_3e45798ee2308c3a;
  }
  bVar6 = dVar8 < __real_3e45798ee2308c3a;
  (this->PreviousCameraHashGrid).Indexer.CellSize = dVar8;
  if (bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2954325157570674611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                       ,0x4d,"CellSize >= TMathUtil<RealType>::ZeroTolerance");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FLandscapeGrassMapsBuilder *)(*pcVar1)();
      return pFVar7;
    }
  }
  (this->PreviousCameraHashGrid).InvalidValue.field0_0x0._s_0.X = dVar3;
  (this->PreviousCameraHashGrid).InvalidValue.field0_0x0._s_0.Y = dVar4;
  (this->PreviousCameraHashGrid).InvalidValue.field0_0x0._s_0.Z = dVar2;
  return this;
}

// ~FLandscapeGrassMapsBuilder @ 145f7cbc0

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
FLandscapeGrassMapsBuilder::~FLandscapeGrassMapsBuilder(FLandscapeGrassMapsBuilder *this)

{
  TMap<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>_>
  *pTVar1;
  uint *puVar2;
  ULandscapeComponent *pUVar3;
  undefined8 *puVar4;
  FreeListNode *pFVar5;
  FreeListNode *pFVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *pTVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  FName local_res20;
  FString local_1e8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1d8;
  longlong *local_1c8;
  undefined1 auStack_1c0 [16];
  uint uStack_1b0;
  uint uStack_1ac;
  longlong local_1a8;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_1a0;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *local_198;
  char local_190;
  char local_18f;
  FName local_188;
  FString local_180;
  FString local_170;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  LARGE_INTEGER local_d8;
  undefined1 local_d0 [32];
  longlong local_b0;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_a8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  pTVar1 = &this->ComponentStates;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_d0,
             (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
              *)pTVar1);
  iVar16 = 0;
  local_120 = 0;
  iVar17 = 1;
  stack0xfffffffffffffeb8 = local_d0._16_16_;
  local_158 = (longlong *)local_d0._0_8_;
  auStack_150._0_8_ = local_d0._8_8_;
  local_138 = local_b0;
  pTStack_130 = pTStack_a8;
  uVar14 = local_d0._24_8_ >> 0x20;
  local_128 = (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_d0._28_4_ < *(int *)(local_d0._16_8_ + 0x18)) {
    do {
      pUVar3 = (ULandscapeComponent *)
               **(undefined8 **)(*local_158 + 8 + (longlong)(int)uVar14 * 0x18);
      if (pUVar3 != (ULandscapeComponent *)0x0) {
        pTVar13 = TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                          *)pTVar1,pUVar3);
        if ((pTVar13 ==
             (TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *)0x0) ||
           (puVar4 = *(undefined8 **)&pTVar13->field_0x8, puVar4 == (undefined8 *)0x0)) {
          if (5 < (byte)LogGrass._0_1_) {
            local_188 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_188,&local_170);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (5 < (byte)LogGrass._0_1_) {
            local_res20 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_res20,&local_180);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
          }
          *puVar4 = 0;
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
      }
      uStack_140 = uStack_140 & ~auStack_150._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
      uVar14 = (ulonglong)uStack_13c;
    } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
    if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
      uVar15 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar12 = 1;
      }
      else {
        uVar14 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_128->HashSize < iVar12)) || (iVar12 < local_128->HashSize)) {
        local_128->HashSize = iVar12;
        TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_128);
      }
    }
  }
  QueryPerformanceCounter(&local_d8);
  do {
    iVar12 = *(int *)&(this->ComponentStates).field_0x8 -
             *(int *)&(this->ComponentStates).field_0x34;
    if (iVar12 < 1) break;
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    UpdateTrackedComponents(this,&local_1d8,0,iVar12,true,false,0);
    if ((((this->NotReadyCount != 0) || (this->StreamingCount != 0)) ||
        ((this->RenderingCount != 0 || ((this->AsyncFetchCount != 0 || (this->PopulatedCount != 0)))
         ))) && (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_2959038321537318557>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                                     ,0x163,
                                     "NotReadyCount == 0 && StreamingCount == 0 && RenderingCount == 0 && AsyncFetchCount == 0 && PopulatedCount == 0"
                                    ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar16 = iVar16 + 1;
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
  } while (iVar16 < 3);
  if (*(int *)&(this->ComponentStates).field_0x8 != *(int *)&(this->ComponentStates).field_0x34) {
    pTVar1 = &this->ComponentStates;
    TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a0,
               (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_e0 = 0;
    stack0xfffffffffffffef8 = local_a0._16_16_;
    local_118 = (longlong *)local_a0._0_8_;
    auStack_110._0_8_ = local_a0._8_8_;
    local_f8 = local_80;
    pTStack_f0 = pTStack_78;
    uVar14 = local_a0._24_8_ >> 0x20;
    local_e8 = (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_a0._28_4_ < *(int *)(local_a0._16_8_ + 0x18)) {
      do {
        lVar9 = *(longlong *)(*local_118 + 8 + (longlong)(int)uVar14 * 0x18);
        if (2 < (byte)LogGrass._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        }
        if (*(char *)(lVar9 + 8) == '\x03') {
          if (((*(longlong *)(lVar9 + 0x20) != 0) &&
              (*(longlong *)(*(longlong *)(lVar9 + 0x20) + 0x98) != 0)) &&
             (2 < (byte)LogGrass._0_1_)) {
            local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e8.Data.ArrayNum = 0;
            local_1e8.Data.ArrayMax = 0;
            ::FString::AppendfImpl
                      (&local_1e8,
                       L"FLandscapeAsyncTextureReadback { RTStart: %d RTComplete: %d PendingCommands: %d Cancel: %d AsyncReadback: %p }"
                      );
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
            if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (((*(char *)(lVar9 + 8) == '\x04') && (*(longlong *)(lVar9 + 0x28) != 0)) &&
                (2 < (byte)LogGrass._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        }
        uStack_100 = uStack_100 & ~auStack_110._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
        uVar14 = (ulonglong)uStack_fc;
      } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
      if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
        uVar15 = *(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34;
        if (uVar15 < 4) {
          iVar16 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar16 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((0 < (int)uVar15) && (local_e8->HashSize < iVar16)) || (iVar16 < local_e8->HashSize)) {
          local_e8->HashSize = iVar16;
          TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_e8);
        }
      }
    }
    if ((*(int *)&(this->ComponentStates).field_0x8 != *(int *)&(this->ComponentStates).field_0x34)
       && (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2959038321537318527>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                               ,0x181,"ComponentStates.Num() == 0"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar1 = &this->ComponentStates;
    TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_70,
               (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_18f = '\0';
    stack0xfffffffffffffe48 = local_70._16_16_;
    local_1c8 = (longlong *)local_70._0_8_;
    auStack_1c0._0_8_ = local_70._8_8_;
    local_1a8 = local_50;
    pTStack_1a0 = pTStack_48;
    uVar14 = local_70._24_8_ >> 0x20;
    uVar15 = local_70._28_4_;
    local_198 = (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if ((int)uVar15 < *(int *)(local_70._16_8_ + 0x18)) {
      do {
        pFVar5 = *(FreeListNode **)(*local_1c8 + 8 + (longlong)(int)uVar14 * 0x18);
        pFVar6 = pFVar5[5].NextFreeAllocation;
        if (pFVar6 != (FreeListNode *)0x0) {
          (*(code *)pFVar6->NextFreeAllocation[5].NextFreeAllocation)(pFVar6,1);
        }
        pFVar6 = pFVar5[4].NextFreeAllocation;
        if (pFVar6 != (FreeListNode *)0x0) {
          (*(code *)pFVar6->NextFreeAllocation->NextFreeAllocation)(pFVar6,1);
        }
        if (pFVar5[2].NextFreeAllocation != (FreeListNode *)0x0) {
          FMemory::Free(pFVar5[2].NextFreeAllocation);
        }
        puVar2 = &(this->StatePoolAllocator).NumLive;
        *puVar2 = *puVar2 - 1;
        pFVar5->NextFreeAllocation = (this->StatePoolAllocator).FreeList;
        (this->StatePoolAllocator).FreeList = pFVar5;
        TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_1a0,uVar15);
        local_190 = '\x01';
        uStack_1b0 = uStack_1b0 & ~auStack_1c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1c0);
        uVar14 = (ulonglong)uStack_1ac;
        uVar15 = uStack_1ac;
      } while ((int)uStack_1ac < *(int *)(auStack_1c0._8_8_ + 0x18));
      if ((local_190 != '\0') && (local_18f != '\0')) {
        uVar15 = *(int *)&(local_198->Elements).field_0x8 -
                 *(int *)&(local_198->Elements).field_0x34;
        if (3 < uVar15) {
          uVar14 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((0 < (int)uVar15) && (local_198->HashSize < iVar17)) || (iVar17 < local_198->HashSize))
        {
          local_198->HashSize = iVar17;
          TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_198);
        }
      }
    }
  }
  *(undefined4 *)&(this->PreviousCameraHashGrid).Hash.field_0x48 = 0;
  pvVar7 = *(void **)&(this->PreviousCameraHashGrid).Hash.field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousCameraHashGrid);
  pFVar8 = (this->PendingComponentsHeap).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  *(undefined4 *)&(this->ComponentStates).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ComponentStates).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentStates);
  if (((GIsCriticalError == false) && ((this->StatePoolAllocator).NumLive != 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GIsCriticalError || NumLive == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\AllocatorFixedSizeFreeList.h"
                          ,0x37,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  return;
}

// operator() @ 145f7eaf0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLandscapeGrassMapsBuilder::BuildGrassMapsNowForComponents'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSlowTask *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FTextFormat local_d8;
  FText local_c8;
  TSharedPtr<FCulture,1> local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28 [2];
  
  this_00 = *(FSlowTask **)this;
  if ((this_00 != (FSlowTask *)0x0) && (param_1 != 0)) {
    if ((float)param_1 + this_00->CompletedWork <= this_00->TotalAmountOfWork) {
      local_a8.Object = (FCulture *)0x0;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar4 = FText::AsNumber(&local_48,this_00->TotalAmountOfWork,(FNumberFormattingOptions *)0x0,
                               &local_a8);
      local_b8.Object = (FCulture *)0x0;
      local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar5 = FText::AsNumber(&local_38,*(float *)(*(longlong *)this + 0x24),
                               (FNumberFormattingOptions *)0x0,&local_b8);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"Landscape",L"GrassMaps_BuildGrassMapsProgress",
                          L"Building Grass Map {0} of {1})");
      pFVar7 = FTextFormat::FTextFormat(local_28,pFVar6,Default);
      local_98.Type = Text;
      FText::FText((FText *)&local_98.TextValue,pFVar5);
      if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78 = 4;
      FText::FText(&local_68,pFVar4);
      if ((local_68.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_e8.AllocatorInstance.Data,&local_98,2);
      local_d8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
      local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_c8,&local_d8,&local_e8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar1 = (pFVar5->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (pFVar4->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      FSlowTask::EnterProgressFrame(this_00,(float)param_1,&local_c8);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// AddToPendingComponentHeap @ 145f813c0

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
FLandscapeGrassMapsBuilder::AddToPendingComponentHeap
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  int *piVar1;
  TArray<FLandscapeGrassMapsBuilder::FPendingComponent,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FComponentState *local_18;
  undefined8 uStack_10;
  
  if (param_1->bInPendingHeap != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!State->bInPendingHeap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                       ,0x648,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = &this->PendingComponentsHeap;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uStack_10 = __real_ffefffffffffffff;
  local_18 = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar3 + (longlong)(this->PendingComponentsHeap).ArrayMax * 0x10)) {
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
  iVar6 = (this->PendingComponentsHeap).ArrayNum;
  piVar1 = &(this->PendingComponentsHeap).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingComponentsHeap).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FComponentState **)pFVar3 = local_18;
  *(undefined8 *)(pFVar3 + 8) = uStack_10;
  param_1->bInPendingHeap = true;
  if (this->FirstNewPendingComponent < iVar6) {
    iVar6 = this->FirstNewPendingComponent;
  }
  this->FirstNewPendingComponent = iVar6;
  return;
}

// AmortizedUpdateGrassMaps @ 145f817e0

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
FLandscapeGrassMapsBuilder::AmortizedUpdateGrassMaps
          (FLandscapeGrassMapsBuilder *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          bool param_3)

{
  TMap<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>_>
  *pTVar1;
  longlong *plVar2;
  TObjectPtr<ULandscapeComponent>_u_0 this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ALandscapeProxy *pAVar7;
  size_t sVar8;
  bool bVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  int iVar13;
  ForAnyElementType local_128;
  undefined8 local_120;
  TObjectPtr<ULandscapeComponent>_u_0 local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FString local_f8;
  longlong *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  FString local_a8;
  FString local_98;
  TObjectPtr<ULandscapeComponent>_u_0 *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<TObjectPtr<ULandscapeComponent>,int> local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar9 = false;
  local_110 = (FName)((ulonglong)local_110 & 0xffffffff00000000);
  if (GGrassMapUseRuntimeGeneration == 0) {
    return;
  }
  bVar5 = CanEverRender(this);
  if (!bVar5) {
    return;
  }
  if (1 < GGrassMapRenderEveryFrame.Data.ArrayNum) {
    if (0 < GGrassMapRenderEveryFrameDelay) {
      DelayTick = DelayTick + 1;
      if (DelayTick <= GGrassMapRenderEveryFrameDelay) goto LAB_145f81c18;
      DelayTick = 0;
    }
    pTVar1 = &this->ComponentStates;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_b0 = 0;
    stack0xffffffffffffff28 = local_68._16_16_;
    local_e8 = (longlong *)local_68._0_8_;
    auStack_e0._0_8_ = local_68._8_8_;
    local_c8 = local_48;
    pTStack_c0 = pTStack_40;
    uVar10 = local_68._24_8_ >> 0x20;
    local_b8 = (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        plVar2 = *(longlong **)(*local_e8 + 8 + (longlong)(int)uVar10 * 0x18);
        this_00.DebugPtr = (ULandscapeComponent *)*plVar2;
        if (this_00.DebugPtr != (ULandscapeComponent *)0x0) {
          local_110 = (FName)(this_00.DebugPtr)->_padding_;
          ::FName::ToString(&local_110,&local_a8);
          if (GGrassMapRenderEveryFrame.Data.ArrayNum == 0) {
            FVar11.Data = (FScriptContainerElement *)L"";
LAB_145f81929:
            sVar8 = wcslen((wchar_t *)FVar11.Data);
            iVar6 = ::FString::Find(&local_a8,(wchar_t *)FVar11.Data,(int)sVar8,IgnoreCase,FromStart
                                    ,-1);
          }
          else {
            FVar11 = GGrassMapRenderEveryFrame.Data.AllocatorInstance;
            if (GGrassMapRenderEveryFrame.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) goto LAB_145f81929;
            iVar6 = -1;
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (iVar6 == -1) {
            pAVar7 = ULandscapeComponent::GetLandscapeProxy(this_00.DebugPtr);
            if (pAVar7 == (ALandscapeProxy *)0x0) {
LAB_145f819b0:
              bVar5 = false;
            }
            else {
              local_108 = (FName)pAVar7->_padding_;
              bVar9 = true;
              ::FName::ToString(&local_108,&local_98);
              if (GGrassMapRenderEveryFrame.Data.ArrayNum == 0) {
                FVar11.Data = (FScriptContainerElement *)L"";
              }
              else {
                FVar11 = GGrassMapRenderEveryFrame.Data.AllocatorInstance;
                if (GGrassMapRenderEveryFrame.Data.AllocatorInstance.Data ==
                    (FScriptContainerElement *)0x0) goto LAB_145f819b0;
              }
              sVar8 = wcslen((wchar_t *)FVar11.Data);
              iVar6 = ::FString::Find(&local_98,(wchar_t *)FVar11.Data,(int)sVar8,IgnoreCase,
                                      FromStart,-1);
              if (iVar6 == -1) goto LAB_145f819b0;
              bVar5 = true;
            }
            if ((bVar9) &&
               (bVar9 = false,
               local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (!bVar5) goto LAB_145f81b03;
          }
          if (3 < (byte)LogGrass._0_1_) {
            local_100 = *(FName *)(*plVar2 + 0x18);
            ::FName::ToString(&local_100,&local_f8);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          local_118.DebugPtr = this_00.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
          }
          if (((local_128.Data <= &local_118) &&
              (&local_118 <
               (TObjectPtr<ULandscapeComponent>_u_0 *)
               (local_128.Data + (longlong)local_120._4_4_ * 8))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (int)local_120;
          if ((int)local_120 == local_120._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_128,(int *)((longlong)&local_120 + 4));
          }
          local_120 = CONCAT44(local_120._4_4_,iVar6 + 1);
          ((TObjectPtr<ULandscapeComponent>_u_0 *)(local_128.Data + (longlong)iVar6 * 8))->DebugPtr
               = (ULandscapeComponent *)local_118;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_118.DebugPtr != (ULandscapeComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
          }
        }
LAB_145f81b03:
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar10 = (ulonglong)uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        uVar12 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar12 < 4) {
          iVar6 = 1;
        }
        else {
          uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_b8->HashSize < iVar6)) || (iVar6 < local_b8->HashSize)) {
          local_b8->HashSize = iVar6;
          TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
    if (0 < (int)local_120) {
      iStack_80 = (int)local_120;
      local_88 = (TObjectPtr<ULandscapeComponent>_u_0 *)local_128.Data;
      local_78._12_4_ = uStack_7c;
      local_78.ArrayNum = (int)local_120;
      local_78.DataPtr = (TObjectPtr<ULandscapeComponent> *)local_128.Data;
      DebugRenderComponents(this,&local_78);
    }
    if ((TObjectPtr<ULandscapeComponent>_u_0 *)local_128.Data !=
        (TObjectPtr<ULandscapeComponent>_u_0 *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
LAB_145f81c18:
  iVar6 = GGrassMapMaxComponentsStreaming;
  iVar13 = GGrassMapMaxComponentsRendering;
  if ((param_2) && (1 < GGrassMapPrioritizedMultiplier)) {
    iVar6 = GGrassMapMaxComponentsStreaming * GGrassMapPrioritizedMultiplier;
    iVar13 = GGrassMapMaxComponentsRendering * GGrassMapPrioritizedMultiplier;
  }
  if ((GGrassMapEvictAll == 0) && (GGrassEnable != 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  GGrassMapEvictAll = 0;
  UpdateTrackedComponents
            (this,param_1,iVar13,GGrassMapMaxDiscardChecksPerFrame,bVar9,
             GGrassMapUseRuntimeGeneration != 0,1);
  if ((((param_3) && (0 < this->PendingCount)) && (GGrassEnable != 0)) && (0 < param_1->ArrayNum)) {
    StartPrioritizedGrassMapGeneration
              (this,param_1,iVar6 - this->StreamingCount,GGrassMapUseRuntimeGeneration != 0);
  }
  return;
}

// BuildGrassMapsNowForComponents @ 145f82990

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FLandscapeGrassMapsBuilder::BuildGrassMapsNowForComponents
          (FLandscapeGrassMapsBuilder *this,TArrayView<TObjectPtr<ULandscapeComponent>,int> *param_1
          ,FScopedSlowTask *param_2,bool param_3)

{
  TMap<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>_>
  *pTVar1;
  uint *puVar2;
  TObjectPtr<ULandscapeComponent>_u_0 this_00;
  FComponentState *pFVar3;
  ULandscapeComponent *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FLandscapeGrassMapsBuilder *this_01;
  bool bVar12;
  EComponentStage EVar13;
  undefined1 uVar14;
  FStaticShaderPlatform FVar15;
  int iVar16;
  TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *pTVar17;
  ulonglong uVar18;
  FEvent *pFVar19;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar20;
  byte bVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  undefined ***pppuVar24;
  FGenericStaticFeatureLevel FVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  ForElementType<unsigned_int> FVar30;
  ulonglong uVar31;
  longlong lVar32;
  TObjectPtr<ULandscapeComponent>_u_0 *pTVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  bool bVar37;
  undefined1 auStackY_328 [32];
  bool local_2d7;
  int local_2d4;
  int local_2d0;
  int local_2c8;
  uint uStack_2c4;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TObjectPtr<ULandscapeComponent>_u_0 local_2a8;
  FLandscapeGrassMapsBuilder *local_2a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_298;
  undefined4 local_284;
  int local_280;
  undefined8 local_27c;
  LARGE_INTEGER local_270;
  LARGE_INTEGER local_268;
  TObjectPtr<ULandscapeComponent>_u_0 *local_260;
  FScopedSlowTask *local_258;
  LARGE_INTEGER local_250;
  TArrayView<TObjectPtr<ULandscapeComponent>,int> *local_248;
  LARGE_INTEGER local_240;
  longlong *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  longlong *local_208;
  undefined1 auStack_200 [16];
  uint uStack_1f0;
  uint uStack_1ec;
  longlong local_1e8;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_1e0;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *local_1d8;
  undefined2 local_1d0;
  FSparseArrayAllocationInfo local_1c8 [2];
  undefined1 local_1a8 [32];
  longlong local_188;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_180;
  undefined1 local_178 [32];
  ForElementType<unsigned_int> local_158;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined1 local_140 [8];
  ForAnyElementType local_138;
  uint local_130;
  code *local_128 [2];
  undefined **local_118;
  FEvent *pFStack_110;
  undefined1 local_108;
  undefined4 uStack_107;
  undefined2 uStack_103;
  undefined1 uStack_101;
  undefined ***local_100;
  undefined1 local_f8 [16];
  undefined **local_e8;
  FEvent *pFStack_e0;
  undefined8 local_d8;
  undefined ***local_d0;
  byte local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  bVar37 = -1 < CpuChannel->Enabled;
  local_2a0 = this;
  local_248 = param_1;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1096,
               "FLandscapeGrassMapsBuilder::BuildGrassMapsNowForComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x448);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1096);
  }
  iVar16 = param_1->ArrayNum;
  iVar34 = 1;
  if (1 < GGrassMapMaxComponentsForBlockingUpdate) {
    iVar34 = GGrassMapMaxComponentsForBlockingUpdate;
  }
  if (iVar16 == 0) {
    bVar12 = true;
  }
  else {
    bVar12 = CanEverRender(this);
    if (bVar12) {
      FVar15.Platform = FSceneInterface::GetShaderPlatform(this->World->Scene);
      FVar25.FeatureLevel._1_3_ = 0;
      FVar25.FeatureLevel._0_1_ = (this->World->FeatureLevel).Value;
      bVar12 = UseGPUScene(FVar15,FVar25);
      if (bVar12) {
        iVar36 = 0;
        local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.ArrayNum = 0;
        local_298.ArrayMax = 0;
        local_2d0 = 0;
        local_178._0_8_ = (FScriptContainerElement *)0x0;
        local_178._8_8_ = 0;
        local_158 = (ForElementType<unsigned_int>)0x0;
        local_150 = 0;
        local_14c = 0x80;
        local_148 = -1;
        local_144 = 0;
        local_138.Data = (FScriptContainerElement *)0x0;
        local_130 = 0;
        local_258 = param_2;
        QueryPerformanceCounter(&local_270);
        dVar11 = __real_403e000000000000;
        dVar10 = __real_3f91111111111111;
        dVar9 = __real_4170000000000000;
        dVar7 = (double)local_270.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
        dVar8 = dVar7;
        iVar35 = 0;
        if (local_178._8_4_ - local_144 != iVar16) {
          do {
            iVar36 = iVar35;
            QueryPerformanceCounter(&local_268);
            dVar6 = (double)local_268.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
            if (dVar7 + dVar11 < dVar6) {
              if (1 < (byte)LogGrass._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
              }
              break;
            }
            local_2d7 = UpdateTrackedComponents
                                  (this,&local_298,iVar34,
                                   *(int *)&(this->ComponentStates).field_0x8 -
                                   *(int *)&(this->ComponentStates).field_0x34,false,false,1);
            this_01 = local_2a0;
            pTVar33 = &param_1->DataPtr->field0_0x0;
            iVar36 = 0;
            iVar35 = iVar34 - this->StreamingCount;
            local_2d4 = 0;
            local_260 = pTVar33 + iVar16;
            if (pTVar33 != local_260) {
              do {
                this_00 = (TObjectPtr<ULandscapeComponent>_u_0)pTVar33->DebugPtr;
                local_2a8 = this_00;
                pTVar17 = TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                                  *)&this_01->ComponentStates,(ULandscapeComponent *)this_00);
                if ((pTVar17 ==
                     (TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *)
                     0x0) || (pFVar3 = *(FComponentState **)&pTVar17->field_0x8,
                             pFVar3 == (FComponentState *)0x0)) {
                  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                  ::Emplace<ULandscapeComponent_*_const_&>
                            ((TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                              *)local_178,(ULandscapeComponent **)&local_27c,(bool *)&local_2a8);
                }
                else {
                  EVar13 = pFVar3->Stage;
                  if (EVar13 == Pending) {
                    if (0 < iVar35) {
                      StartGrassMapGeneration(this_01,pFVar3,true,true);
                      EVar13 = pFVar3->Stage;
                      if ((EVar13 != NotReady) && (EVar13 != Pending)) {
                        if (param_3) {
                          UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
                          EVar13 = pFVar3->Stage;
                        }
                        iVar35 = iVar35 + -1;
                        local_2d7 = true;
                      }
                      goto LAB_145f82c84;
                    }
                  }
                  else {
LAB_145f82c84:
                    if (EVar13 == GrassMapsPopulated) {
                      bVar12 = FLandscapeComponentGrassData::HasValidData
                                         (((this_00.DebugPtr)->GrassData).Object);
                      if ((!bVar12) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Component->GrassData->HasValidData()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                                              ,0x49c,L""), bVar12)) {
                        pcVar5 = (code *)swi(3);
                        uVar14 = (*pcVar5)();
                        return (bool)uVar14;
                      }
                      uVar22 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)this_00 >> 4)) * -0x7a143595;
                      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                      if (local_178._8_4_ != local_144) {
                        FVar23.Data = (FScriptContainerElement *)local_140;
                        if ((ForElementType<FSetElementId>)local_138.Data !=
                            (ForElementType<FSetElementId>)0x0) {
                          FVar23.Data = local_138.Data;
                        }
                        for (iVar16 = *(int *)((longlong)FVar23.Data +
                                              (ulonglong)(local_130 - 1 & (uVar22 >> 0x10 ^ uVar22))
                                              * 4); iVar16 != -1;
                            iVar16 = *(int *)(local_178._0_8_ + (longlong)iVar16 * 0x10 + 8)) {
                          if ((TObjectPtr<ULandscapeComponent>_u_0)
                              ((TObjectPtr<ULandscapeComponent>_u_0 *)
                              (local_178._0_8_ + (longlong)iVar16 * 0x10))->DebugPtr == this_00) {
                            TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                            ::Remove((TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                                      *)local_178,(ULandscapeComponent *)this_00);
                            break;
                          }
                        }
                      }
                      iVar36 = iVar36 + 1;
                      local_2d4 = iVar36;
                    }
                  }
                  if (pFVar3->Stage == NotReady) {
                    uVar22 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^
                             (uint)((ulonglong)this_00 >> 4)) * -0x7a143595;
                    uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                    if (local_178._8_4_ != local_144) {
                      FVar23.Data = (FScriptContainerElement *)local_140;
                      if ((ForElementType<FSetElementId>)local_138.Data !=
                          (ForElementType<FSetElementId>)0x0) {
                        FVar23.Data = local_138.Data;
                      }
                      for (iVar16 = *(int *)((longlong)FVar23.Data +
                                            (ulonglong)(local_130 - 1 & (uVar22 >> 0x10 ^ uVar22)) *
                                            4); iVar16 != -1;
                          iVar16 = *(int *)(local_178._0_8_ + (longlong)iVar16 * 0x10 + 8)) {
                        if ((TObjectPtr<ULandscapeComponent>_u_0)
                            ((TObjectPtr<ULandscapeComponent>_u_0 *)
                            (local_178._0_8_ + (longlong)iVar16 * 0x10))->DebugPtr == this_00)
                        goto LAB_145f83281;
                      }
                    }
                    bVar12 = UE::Landscape::CanRenderGrassMap((ULandscapeComponent *)this_00);
                    if (!bVar12) {
                      if (local_144 == 0) {
                        iVar16 = UE::Core::Private::
                                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x10,8,1,(ForAnyElementType *)local_178,
                                            (int *)(local_178 + 8),(int *)(local_178 + 0xc));
                        iVar36 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                           ((TBitArray<FDefaultBitArrayAllocator> *)
                                            (local_178 + 0x10),1);
                        FVar30 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
                        if (local_158 != (ForElementType<unsigned_int>)0x0) {
                          FVar30 = local_158;
                        }
                        bVar21 = (byte)iVar36 & 0x1f;
                        if (iVar36 < 0) {
                          iVar36 = iVar36 + 0x1f;
                          bVar21 = bVar21 - 0x20;
                        }
                        puVar2 = (uint *)((longlong)FVar30 + (longlong)(iVar36 >> 5) * 4);
                        *puVar2 = *puVar2 & ~(1 << (bVar21 & 0x1f));
                        iVar36 = local_148;
                      }
                      else {
                        local_144 = local_144 + -1;
                        iVar36 = *(int *)(local_178._0_8_ + (longlong)local_148 * 0x10 + 4);
                        iVar16 = local_148;
                        if (local_144 != 0) {
                          *(undefined4 *)(local_178._0_8_ + (longlong)iVar36 * 0x10) = 0xffffffff;
                        }
                      }
                      local_148 = iVar36;
                      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                       *)local_178,local_1c8,iVar16);
                      if (local_1c8[0].Pointer != (TObjectPtr<ULandscapeComponent>_u_0 *)0x0) {
                        *(TObjectPtr<ULandscapeComponent>_u_0 *)local_1c8[0].Pointer =
                             (ULandscapeComponent *)this_00;
                        *(undefined4 *)((longlong)local_1c8[0].Pointer + 8) = 0xffffffff;
                      }
                      pUVar4 = *(ULandscapeComponent **)local_1c8[0].Pointer;
                      uVar22 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)pUVar4 >> 4)) * -0x7a143595;
                      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                      uVar22 = uVar22 >> 0x10 ^ uVar22;
                      iVar36 = local_2d4;
                      if ((local_178._8_4_ - local_144 != 1) && (local_178._8_4_ != local_144)) {
                        FVar23.Data = (FScriptContainerElement *)local_140;
                        if ((ForElementType<FSetElementId>)local_138.Data !=
                            (ForElementType<FSetElementId>)0x0) {
                          FVar23.Data = local_138.Data;
                        }
                        for (iVar16 = *(int *)((longlong)FVar23.Data +
                                              (ulonglong)(local_130 - 1 & uVar22) * 4); iVar16 != -1
                            ; iVar16 = *(int *)(local_178._0_8_ + (longlong)iVar16 * 0x10 + 8)) {
                          if (*(ULandscapeComponent **)(local_178._0_8_ + (longlong)iVar16 * 0x10)
                              == pUVar4) {
                            if (iVar16 != -1) {
                              *(ULandscapeComponent **)(local_178._0_8_ + (longlong)iVar16 * 0x10) =
                                   pUVar4;
                              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              ::RemoveAtUninitialized
                                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                          *)local_178,local_1c8[0].Index,1);
                              goto LAB_145f83281;
                            }
                            break;
                          }
                        }
                      }
                      uVar29 = 1;
                      uVar26 = local_178._8_4_ - local_144;
                      if (3 < uVar26) {
                        uVar27 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
                        lVar28 = 0x3f;
                        if (uVar27 != 0) {
                          for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                          }
                        }
                        local_284 = (undefined4)lVar28;
                        uVar29 = 1 << ((byte)lVar28 & 0x1f);
                      }
                      if (((int)uVar26 < 1) || ((int)uVar29 <= (int)local_130)) {
                        uVar22 = local_130 - 1 & uVar22;
                        *(uint *)((longlong)local_1c8[0].Pointer + 0xc) = uVar22;
                        FVar23.Data = (FScriptContainerElement *)local_140;
                        if ((ForElementType<FSetElementId>)local_138.Data !=
                            (ForElementType<FSetElementId>)0x0) {
                          FVar23.Data = local_138.Data;
                        }
                        uVar27 = (longlong)(int)local_130 - 1U & (longlong)(int)uVar22;
                        *(undefined4 *)((longlong)local_1c8[0].Pointer + 8) =
                             *(undefined4 *)((longlong)FVar23.Data + uVar27 * 4);
                        *(int *)((longlong)FVar23.Data + uVar27 * 4) = local_1c8[0].Index;
                      }
                      else {
                        local_130 = uVar29;
                        if ((ForElementType<FSetElementId>)local_138.Data !=
                            (ForElementType<FSetElementId>)0x0) {
                          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                    (&local_138,0,0,4);
                        }
                        if (uVar29 != 0) {
                          uVar22 = uVar29;
                          if (uVar29 < 2) {
                            if ((ForElementType<FSetElementId>)local_138.Data !=
                                (ForElementType<FSetElementId>)0x0) {
                              uVar22 = 0;
                              goto LAB_145f8305d;
                            }
                          }
                          else {
LAB_145f8305d:
                            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                      (&local_138,0,uVar22,4);
                          }
                          if (0 < (int)uVar29) {
                            uVar31 = (ulonglong)uVar29;
                            uVar27 = 0;
                            do {
                              FVar23.Data = (FScriptContainerElement *)local_140;
                              if ((ForElementType<FSetElementId>)local_138.Data !=
                                  (ForElementType<FSetElementId>)0x0) {
                                FVar23.Data = local_138.Data;
                              }
                              uVar18 = uVar27 & (longlong)(int)uVar29 - 1U;
                              uVar27 = uVar27 + 1;
                              *(undefined4 *)((longlong)FVar23.Data + uVar18 * 4) = 0xffffffff;
                              uVar31 = uVar31 - 1;
                            } while (uVar31 != 0);
                          }
                        }
                        if (local_130 != 0) {
                          local_230.Array =
                               (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
                          uStack_2c4 = 1;
                          local_2c8 = 0;
                          iStack_2b4 = 0;
                          iStack_2b0 = 0;
                          if (local_150 != 0) {
                            FVar30 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
                            if (local_158 != (ForElementType<unsigned_int>)0x0) {
                              FVar30 = local_158;
                            }
                            uVar22 = *(uint *)FVar30;
                            local_2c8 = 0;
                            while (uVar22 == 0) {
                              iStack_2b0 = iStack_2b0 + 0x20;
                              lVar28 = (longlong)local_2c8;
                              local_2c8 = local_2c8 + 1;
                              if ((int)(local_150 + -1 + (local_150 + -1 >> 0x1f & 0x1fU)) >> 5 <
                                  local_2c8) goto LAB_145f83172;
                              uVar22 = ((uint *)((longlong)FVar30 + 4))[lVar28];
                            }
                            uStack_2c4 = -uVar22 & uVar22;
                            uVar27 = (ulonglong)uStack_2c4 * 2 + 1;
                            lVar28 = 0x3f;
                            if (uVar27 != 0) {
                              for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                              }
                            }
                            local_280 = (int)lVar28;
                            iStack_2b4 = local_280 + -1 + iStack_2b0;
                            if (local_150 < iStack_2b4) {
LAB_145f83172:
                              iStack_2b4 = local_150;
                            }
                          }
                          local_238 = (longlong *)local_178;
                          local_230._padding_ = CONCAT44(uStack_2c4,local_2c8);
                          local_230.CurrentBitIndex = iStack_2b4;
                          local_230.UnvisitedBitMask = 0xffffffff;
                          local_230._28_4_ = uStack_2ac;
                          local_230.BaseBitIndex = iStack_2b0;
                          if (iStack_2b4 < local_150) {
                            do {
                              lVar28 = *local_238;
                              lVar32 = (longlong)iStack_2b4;
                              uVar27 = *(ulonglong *)(lVar28 + lVar32 * 0x10);
                              uVar22 = ((uint)(uVar27 >> 0x14) & 0xffff ^ (uint)(uVar27 >> 4)) *
                                       -0x7a143595;
                              uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                              uVar22 = (uVar22 >> 0x10 ^ uVar22) & local_130 - 1;
                              *(uint *)(lVar28 + 0xc + lVar32 * 0x10) = uVar22;
                              FVar23.Data = (FScriptContainerElement *)local_140;
                              if ((ForElementType<FSetElementId>)local_138.Data !=
                                  (ForElementType<FSetElementId>)0x0) {
                                FVar23.Data = local_138.Data;
                              }
                              uVar27 = (longlong)(int)local_130 - 1U & (longlong)(int)uVar22;
                              *(undefined4 *)(lVar28 + 8 + lVar32 * 0x10) =
                                   *(undefined4 *)((longlong)FVar23.Data + uVar27 * 4);
                              *(int *)((longlong)FVar23.Data + uVar27 * 4) = iStack_2b4;
                              local_230.UnvisitedBitMask =
                                   local_230.UnvisitedBitMask & ~local_230._padding_._4_4_;
                              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                        (&local_230);
                              iStack_2b4 = local_230.CurrentBitIndex;
                            } while (local_230.CurrentBitIndex < (local_230.Array)->NumBits);
                          }
                        }
                      }
                    }
                  }
                }
LAB_145f83281:
                pTVar33 = pTVar33 + 1;
                this = local_2a0;
              } while (pTVar33 != local_260);
            }
            if (local_2d0 != iVar36) {
              `FLandscapeGrassMapsBuilder::BuildGrassMapsNowForComponents'::__l2::<lambda_1>::
              operator()(&local_258,iVar36 - local_2d0);
              local_2d0 = iVar36;
            }
            if ((this->bRenderCommandsQueuedByLastUpdate != false) ||
               ((0 < this->RenderingCount && (dVar10 < dVar6 - dVar8)))) {
              pFVar19 = FGenericPlatformProcess::GetSynchEventFromPool(true);
              uStack_107 = local_1c8[1].Pointer._1_4_;
              uStack_103 = local_1c8[1].Pointer._5_2_;
              local_118 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UE::Landscape::SubmitGPUCommands'::`2'::<lambda_1>,1,0>
                           ::_vftable_;
              uStack_101 = local_1c8[1].Pointer._7_1_;
              local_100 = (undefined ***)0x0;
              local_108 = 0;
              local_128[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UE::Landscape::SubmitGPUCommands'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                             ::Call;
              pFStack_110 = pFVar19;
              this_02 = FRenderCommandList::GetInstanceTLS();
              if (this_02 == (FRenderCommandList *)0x0) {
                FRenderThreadCommandPipe::
                Enqueue<TRenderCommandTag<_UE::Landscape::SubmitGPUCommands_::__l2::TSTR_FFlushResourcesCommand293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_128);
              }
              else {
                this_03 = FRenderCommandList::GetRenderThread(this_02);
                local_d8._1_4_ = uStack_107;
                local_d8._0_1_ = local_108;
                local_d8._5_2_ = uStack_103;
                local_d8._7_1_ = uStack_101;
                local_f8._0_8_ = local_128[0];
                local_d0 = local_100;
                local_100 = (undefined ***)0x0;
                local_e8 = local_118;
                pFStack_e0 = pFStack_110;
                local_128[0] = (code *)0x0;
                local_c8 = 2;
                pFVar20 = (FRenderCommandTag *)
                          TRenderCommandTag<`UE::Landscape::SubmitGPUCommands'::__l2::TSTR_FFlushResourcesCommand293>
                          ::Get();
                UE::RenderCommandPipe::FCommandList::Enqueue
                          (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                    *)local_f8,pFVar20);
                uVar27 = (ulonglong)local_c8;
                if ((2 < uVar27) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xd4,L""), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar14 = (*pcVar5)();
                  return (bool)uVar14;
                }
                if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar27] ==
                    UE::Core::Private::
                    TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                    Destruct) {
                  if ((code *)local_f8._0_8_ != (code *)0x0) {
                    pppuVar24 = (undefined ***)(local_f8 + 0x10);
                    if (local_d0 != (undefined ***)0x0) {
                      pppuVar24 = local_d0;
                    }
                    (*(code *)(*pppuVar24)[2])();
                  }
                }
                else {
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar27])(local_f8);
                }
              }
              if (local_128[0] != (code *)0x0) {
                pppuVar24 = &local_118;
                if (local_100 != (undefined ***)0x0) {
                  pppuVar24 = local_100;
                }
                (*(code *)(*pppuVar24)[2])();
              }
              dVar8 = dVar6;
              if (pFVar19 != (FEvent *)0x0) {
                (**(code **)(pFVar19->_padding_ + 0x20))(pFVar19,0xffffffff,0);
                (**(code **)(pFVar19->_padding_ + 0x18))(pFVar19);
                FGenericPlatformProcess::ReturnSynchEventToPool(pFVar19);
              }
            }
            if (0 < this->StreamingCount) {
              FLandscapeTextureStreamingManager::WaitForTextureStreaming
                        (this->TextureStreamingManager);
            }
            if (0 < this->AsyncFetchCount) {
              pTVar1 = &this->ComponentStates;
              TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
              ::TIterator::TIterator
                        ((TIterator *)local_1a8,
                         (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                          *)pTVar1);
              local_1d0 = 0;
              stack0xfffffffffffffe08 = local_1a8._16_16_;
              local_208 = (longlong *)local_1a8._0_8_;
              auStack_200._0_8_ = local_1a8._8_8_;
              local_1e8 = local_188;
              pTStack_1e0 = pTStack_180;
              uVar27 = local_1a8._24_8_ >> 0x20;
              local_1d8 = (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                           *)pTVar1;
              if (local_1a8._28_4_ < *(int *)(local_1a8._16_8_ + 0x18)) {
                do {
                  lVar28 = *(longlong *)(*local_208 + 8 + (longlong)(int)uVar27 * 0x18);
                  if (*(char *)(lVar28 + 8) == '\x04') {
                    if ((*(longlong *)(lVar28 + 0x28) == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("State->AsyncFetchTask.Get()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                                            ,0x504,L""), bVar12)) {
                      pcVar5 = (code *)swi(3);
                      uVar14 = (*pcVar5)();
                      return (bool)uVar14;
                    }
                    FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar28 + 0x28),true,true);
                  }
                  uStack_1f0 = uStack_1f0 & ~auStack_200._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_200);
                  uVar27 = (ulonglong)uStack_1ec;
                } while ((int)uStack_1ec < *(int *)(auStack_200._8_8_ + 0x18));
                if (((char)local_1d0 != '\0') && (local_1d0._1_1_ != '\0')) {
                  uVar22 = *(int *)&(local_1d8->Elements).field_0x8 -
                           *(int *)&(local_1d8->Elements).field_0x34;
                  if (uVar22 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar27 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
                    lVar28 = 0x3f;
                    if (uVar27 != 0) {
                      for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                      }
                    }
                    local_27c._4_4_ = (undefined4)lVar28;
                    iVar16 = 1 << ((byte)lVar28 & 0x1f);
                  }
                  if (((0 < (int)uVar22) && (local_1d8->HashSize < iVar16)) ||
                     (iVar16 < local_1d8->HashSize)) {
                    local_1d8->HashSize = iVar16;
                    TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                    ::Rehash(local_1d8);
                  }
                }
              }
            }
            if (local_2d7 != false) {
              QueryPerformanceCounter(&local_250);
              dVar7 = (double)local_250.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
            }
            iVar16 = local_248->ArrayNum;
            param_1 = local_248;
            iVar35 = iVar36;
          } while ((local_178._8_4_ - local_144) + iVar36 != iVar16);
        }
        if (5 < (byte)LogGrass._0_1_) {
          QueryPerformanceCounter(&local_240);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        }
        if (((iVar36 != iVar16) &&
            (0 < *(int *)&(this->ComponentStates).field_0x8 -
                 *(int *)&(this->ComponentStates).field_0x34)) && (2 < (byte)LogGrass._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        }
        bVar12 = iVar36 == iVar16;
        local_130 = 0;
        if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free(local_138.Data);
        }
        TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_178);
        if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.AllocatorInstance.Data);
        }
        goto LAB_145f837a0;
      }
    }
    bVar12 = false;
  }
LAB_145f837a0:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar12;
}

// CanCurrentlyRender @ 145f84460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FLandscapeGrassMapsBuilder::CanCurrentlyRender(FLandscapeGrassMapsBuilder *this)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  FGenericStaticFeatureLevel FVar3;
  
  bVar1 = CanEverRender(this);
  if (bVar1) {
    FVar2.Platform = FSceneInterface::GetShaderPlatform(this->World->Scene);
    FVar3.FeatureLevel._1_3_ = 0;
    FVar3.FeatureLevel._0_1_ = (this->World->FeatureLevel).Value;
    bVar1 = UseGPUScene(FVar2,FVar3);
    return bVar1;
  }
  return false;
}

// CanEverRender @ 145f844b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FLandscapeGrassMapsBuilder::CanEverRender(FLandscapeGrassMapsBuilder *this)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (GRHIGlobals.UsingNullRHI == false)) {
    return true;
  }
  return false;
}

// CancelAndEvict @ 145f84990

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
FLandscapeGrassMapsBuilder::CancelAndEvict
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FAsyncTask<FAsyncFetchTask> *pFVar4;
  FLandscapeGrassWeightExporter *pFVar5;
  ULandscapeComponent *this_00;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  int local_190;
  int local_188;
  int local_180;
  int local_178;
  int local_170;
  int local_168;
  int local_160;
  int local_158;
  uint local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  bool local_134 [4];
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  FLandscapeGrassWeightExporter *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FLandscapeGrassWeightExporter *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_148 = 0;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1292,"FLandscapeGrassMapsBuilder::CancelAndEvict",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x50c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1292);
  }
  switch(param_1->Stage) {
  case Pending:
    if ((this->PendingCount < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                           ,0x512,L""), bVar7)) {
code_r0x000145f85329:
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    break;
  case NotReady:
    if ((this->NotReadyCount < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NotReadyCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                           ,0x516,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar13 = this->NotReadyCount + -1;
    iVar12 = this->PendingCount + 1;
    this->NotReadyCount = iVar13;
    this->PendingCount = iVar12;
    if (5 < (byte)LogGrass._0_1_) {
      local_144 = this->AsyncFetchCount;
      iVar1 = *(int *)&(this->ComponentStates).field_0x8;
      iVar2 = *(int *)&(this->ComponentStates).field_0x34;
      iVar3 = this->PopulatedCount;
      local_140 = this->RenderingCount;
      local_13c = this->StreamingCount;
      local_138 = param_1->TickCount;
      if (param_1->Component != (ULandscapeComponent *)0x0) {
        local_130 = (FName)param_1->Component->_padding_;
        ::FName::ToString(&local_130,&local_108);
        local_148 = 1;
      }
      local_170 = local_144;
      local_178 = local_140;
      local_180 = local_13c;
      local_190 = local_138;
      local_198 = L"Pending";
      local_188 = iVar12;
      local_168 = iVar3;
      local_160 = iVar13;
      local_158 = iVar1 - iVar2;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (((local_148 & 1) != 0) &&
         (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    break;
  case TextureStreaming:
    RemoveTextureStreamingRequests(this,param_1);
    if ((this->StreamingCount < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StreamingCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                           ,0x51f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar13 = this->StreamingCount + -1;
    iVar12 = this->PendingCount + 1;
    this->StreamingCount = iVar13;
    this->PendingCount = iVar12;
    if (5 < (byte)LogGrass._0_1_) {
      local_138 = this->PopulatedCount;
      iVar1 = *(int *)&(this->ComponentStates).field_0x8;
      iVar2 = *(int *)&(this->ComponentStates).field_0x34;
      iVar3 = this->NotReadyCount;
      local_13c = this->AsyncFetchCount;
      local_140 = this->RenderingCount;
      local_144 = param_1->TickCount;
      if (param_1->Component != (ULandscapeComponent *)0x0) {
        local_128 = (FName)param_1->Component->_padding_;
        ::FName::ToString(&local_128,&local_f8);
        local_148 = 2;
      }
      local_168 = local_138;
      local_170 = local_13c;
      local_178 = local_140;
      local_190 = local_144;
      local_198 = L"Pending";
      local_188 = iVar12;
      local_180 = iVar13;
      local_160 = iVar3;
      local_158 = iVar1 - iVar2;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (((local_148 & 2) != 0) &&
         (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    break;
  case Rendering:
    RemoveTextureStreamingRequests(this,param_1);
    pFVar5 = (param_1->ActiveRender).Ptr;
    if (pFVar5 != (FLandscapeGrassWeightExporter *)0x0) {
      local_134[0] = false;
      if (param_2) {
        (param_1->ActiveRender).Ptr = (FLandscapeGrassWeightExporter *)0x0;
        if ((*(longlong *)&pFVar5->field_0x98 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GameThreadAsyncReadbackPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                               ,0x2b3,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        FLandscapeAsyncTextureReadback::CancelAndSelfDestruct
                  (*(FLandscapeAsyncTextureReadback **)&pFVar5->field_0x98);
        *(undefined8 *)&pFVar5->field_0x98 = 0;
        local_a8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        local_90 = (undefined ***)0x0;
        pFStack_a0 = pFVar5;
        this_01 = FRenderCommandList::GetInstanceTLS();
        if (this_01 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FLandscapeGrassWeightExporter::CancelAndSelfDestruct_::__l2::TSTR_FCancelAndDestructCommand699>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
        }
        else {
          this_02 = FRenderCommandList::GetRenderThread(this_01);
          local_88._0_8_ = local_b8[0];
          local_60 = local_90;
          local_78 = local_a8;
          pFStack_70 = pFStack_a0;
          local_68 = local_98;
          local_b8[0] = (code *)0x0;
          local_58 = 2;
          pFVar9 = (FRenderCommandTag *)
                   TRenderCommandTag<`FLandscapeGrassWeightExporter::CancelAndSelfDestruct'::__l2::TSTR_FCancelAndDestructCommand699>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar9);
          uVar11 = (ulonglong)local_58;
          if ((2 < uVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar11] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              pppuVar10 = (undefined ***)(local_88 + 0x10);
              if (local_60 != (undefined ***)0x0) {
                pppuVar10 = local_60;
              }
              (*(code *)(*pppuVar10)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar11])(local_88);
          }
        }
        if (local_b8[0] != (code *)0x0) {
          pppuVar10 = &local_a8;
          if (local_90 != (undefined ***)0x0) {
            pppuVar10 = local_90;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
      else {
        iVar12 = param_1->TickCount;
        if ((*(longlong *)&pFVar5->field_0x98 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GameThreadAsyncReadbackPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                               ,0x23d,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        bVar7 = FLandscapeAsyncTextureReadback::CheckAndUpdate
                          (*(FLandscapeAsyncTextureReadback **)&pFVar5->field_0x98,local_134,
                           4 < iVar12);
        if (!bVar7) {
LAB_145f851bd:
          bVar7 = false;
          goto LAB_145f853ac;
        }
        pFVar5 = (param_1->ActiveRender).Ptr;
        if (pFVar5 != (FLandscapeGrassWeightExporter *)0x0) {
          (param_1->ActiveRender).Ptr = (FLandscapeGrassWeightExporter *)0x0;
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
    }
    if ((this->RenderingCount < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderingCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                           ,0x547,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar13 = this->RenderingCount + -1;
    iVar12 = this->PendingCount + 1;
    this->RenderingCount = iVar13;
    this->PendingCount = iVar12;
    if (5 < (byte)LogGrass._0_1_) {
      local_138 = this->PopulatedCount;
      iVar1 = *(int *)&(this->ComponentStates).field_0x8;
      iVar2 = *(int *)&(this->ComponentStates).field_0x34;
      iVar3 = this->NotReadyCount;
      local_13c = this->AsyncFetchCount;
      local_140 = this->StreamingCount;
      local_144 = param_1->TickCount;
      if (param_1->Component != (ULandscapeComponent *)0x0) {
        local_120 = (FName)param_1->Component->_padding_;
        ::FName::ToString(&local_120,&local_e8);
        local_148 = 4;
      }
      local_168 = local_138;
      local_170 = local_13c;
      local_180 = local_140;
      local_190 = local_144;
      local_198 = L"Pending";
      local_188 = iVar12;
      local_178 = iVar13;
      local_160 = iVar3;
      local_158 = iVar1 - iVar2;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (((local_148 & 4) != 0) &&
         (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    break;
  case AsyncFetch:
    pFVar4 = (param_1->AsyncFetchTask).Ptr;
    if (pFVar4 != (FAsyncTask<FAsyncFetchTask> *)0x0) {
      if (param_2) {
        FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)pFVar4,true,true);
      }
      else {
        if (((FThreadSafeCounter *)&pFVar4->_padding_)->Counter != 0) goto LAB_145f851bd;
        FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar4,false);
      }
      FLandscapeGrassWeightExporter::FreeAsyncReadback((param_1->ActiveRender).Ptr);
      pFVar5 = (param_1->ActiveRender).Ptr;
      if (pFVar5 != (FLandscapeGrassWeightExporter *)0x0) {
        (param_1->ActiveRender).Ptr = (FLandscapeGrassWeightExporter *)0x0;
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
      pFVar4 = (param_1->AsyncFetchTask).Ptr;
      if (pFVar4 != (FAsyncTask<FAsyncFetchTask> *)0x0) {
        (param_1->AsyncFetchTask).Ptr = (FAsyncTask<FAsyncFetchTask> *)0x0;
        (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
      }
    }
    if ((this->AsyncFetchCount < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncFetchCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                           ,0x560,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar13 = this->AsyncFetchCount + -1;
    iVar12 = this->PendingCount + 1;
    this->AsyncFetchCount = iVar13;
    this->PendingCount = iVar12;
    if (5 < (byte)LogGrass._0_1_) {
      local_138 = this->PopulatedCount;
      iVar1 = *(int *)&(this->ComponentStates).field_0x8;
      iVar2 = *(int *)&(this->ComponentStates).field_0x34;
      iVar3 = this->NotReadyCount;
      local_13c = this->RenderingCount;
      local_140 = this->StreamingCount;
      local_144 = param_1->TickCount;
      if (param_1->Component != (ULandscapeComponent *)0x0) {
        local_118 = (FName)param_1->Component->_padding_;
        ::FName::ToString(&local_118,&local_d8);
        local_148 = 8;
      }
      local_168 = local_138;
      local_178 = local_13c;
      local_180 = local_140;
      local_190 = local_144;
      local_198 = L"Pending";
      local_188 = iVar12;
      local_170 = iVar13;
      local_160 = iVar3;
      local_158 = iVar1 - iVar2;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (((local_148 & 8) != 0) &&
         (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    break;
  case GrassMapsPopulated:
    this_00 = param_1->Component;
    if (param_2) {
      if (this_00 != (ULandscapeComponent *)0x0) goto LAB_145f851ca;
    }
    else if (this_00 == (ULandscapeComponent *)0x0) {
      if (param_1->TickCount < 2) goto LAB_145f851bd;
    }
    else {
LAB_145f851ca:
      bVar7 = FLandscapeComponentGrassData::HasValidData((this_00->GrassData).Object);
      if (bVar7) {
        ULandscapeComponent::RemoveGrassMap(this_00);
      }
    }
    if ((this->PopulatedCount < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PopulatedCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                           ,0x578,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar13 = this->PopulatedCount + -1;
    iVar12 = this->PendingCount + 1;
    this->PopulatedCount = iVar13;
    this->PendingCount = iVar12;
    if (5 < (byte)LogGrass._0_1_) {
      local_138 = this->AsyncFetchCount;
      iVar1 = *(int *)&(this->ComponentStates).field_0x8;
      iVar2 = *(int *)&(this->ComponentStates).field_0x34;
      iVar3 = this->NotReadyCount;
      local_13c = this->RenderingCount;
      local_140 = this->StreamingCount;
      local_144 = param_1->TickCount;
      if (param_1->Component != (ULandscapeComponent *)0x0) {
        local_110 = (FName)param_1->Component->_padding_;
        ::FName::ToString(&local_110,&local_c8);
        local_148 = 0x10;
      }
      local_170 = local_138;
      local_178 = local_13c;
      local_180 = local_140;
      local_190 = local_144;
      local_198 = L"Pending";
      local_188 = iVar12;
      local_168 = iVar13;
      local_160 = iVar3;
      local_158 = iVar1 - iVar2;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (((local_148 & 0x10) != 0) &&
         (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    break;
  default:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                       ,0x57f,L"");
    if (bVar7) goto code_r0x000145f85329;
  }
  if (((param_1->ActiveRender).Ptr != (FLandscapeGrassWeightExporter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.ActiveRender == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x583,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (((param_1->TexturesToStream).ArrayNum != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.TexturesToStream.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x584,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (param_1->Stage != Pending) {
    param_1->Stage = Pending;
    param_1->TickCount = 0;
    if (param_1->Component != (ULandscapeComponent *)0x0) {
      AddToPendingComponentHeap(this,param_1);
    }
  }
  bVar7 = true;
LAB_145f853ac:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// CompleteAllAsyncTasksNow @ 145f85c80

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
FLandscapeGrassMapsBuilder::CompleteAllAsyncTasksNow(FLandscapeGrassMapsBuilder *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
              *)&this->ComponentStates);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
              *)&this->ComponentStates;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_48 + 8 + (longlong)(int)uVar5 * 0x18);
      if (*(char *)(lVar1 + 8) == '\x04') {
        if ((*(longlong *)(lVar1 + 0x28) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("State->AsyncFetchTask.Get()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                               ,0x504,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar1 + 0x28),true,true);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// DebugRenderComponents @ 145f88fb0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLandscapeGrassMapsBuilder::DebugRenderComponents
          (FLandscapeGrassMapsBuilder *this,TArrayView<TObjectPtr<ULandscapeComponent>,int> *param_1
          )

{
  TObjectPtr<ULandscapeComponent> *pTVar1;
  FComponentState *pFVar2;
  code *pcVar3;
  ULandscapeComponent **ppUVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  FStaticShaderPlatform FVar8;
  ulonglong uVar9;
  TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *pTVar10;
  byte bVar11;
  uint uVar12;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator> *this_00
  ;
  ForElementType<unsigned_int> FVar13;
  ForAnyElementType FVar14;
  FGenericStaticFeatureLevel FVar15;
  ulonglong uVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  TObjectPtr<ULandscapeComponent> *pTVar22;
  ULandscapeComponent *pUVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  int iVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  ULandscapeComponent *local_2a0;
  undefined1 local_298;
  undefined1 local_297 [3];
  int local_294;
  FScriptContainerElement *local_290;
  int local_288;
  uint uStack_284;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_280;
  undefined4 local_278;
  uint uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_268;
  undefined4 local_258;
  int local_254;
  undefined8 local_250;
  int local_248;
  ULandscapeComponent *local_244;
  ULandscapeComponent *local_23c;
  ULandscapeComponent *local_234;
  FLandscapeGrassMapsBuilder *local_228;
  longlong *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  longlong *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  undefined4 local_17c;
  undefined1 local_178 [32];
  ForElementType<unsigned_int> local_158;
  uint local_150;
  int local_14c;
  int local_148;
  int local_144;
  FScriptContainerElement local_140 [8];
  ForAnyElementType local_138;
  uint local_130;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
  local_128;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator> local_d8
  ;
  TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  bVar29 = -1 < CpuChannel->Enabled;
  local_228 = this;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId950,"FLandscapeGrassMapsBuilder::DebugRenderComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x3b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId950);
  }
  uVar20 = param_1->ArrayNum;
  iVar26 = 1;
  if (1 < GGrassMapMaxComponentsForBlockingUpdate) {
    iVar26 = GGrassMapMaxComponentsForBlockingUpdate;
  }
  local_294 = iVar26;
  if ((uVar20 == 0) || (bVar7 = CanEverRender(this), !bVar7)) goto LAB_145f89ce6;
  FVar8.Platform = FSceneInterface::GetShaderPlatform(this->World->Scene);
  FVar15.FeatureLevel._1_3_ = 0;
  FVar15.FeatureLevel._0_1_ = (this->World->FeatureLevel).Value;
  bVar7 = UseGPUScene(FVar8,FVar15);
  if (!bVar7) goto LAB_145f89ce6;
  pTVar22 = param_1->DataPtr;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.HashSize = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._8_8_ = 0;
  local_158 = (ForElementType<unsigned_int>)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = -1;
  local_144 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = 0;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_178,uVar20);
  uVar19 = 1;
  if (3 < uVar20) {
    uVar16 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_258 = (undefined4)lVar17;
    uVar19 = 1 << ((byte)lVar17 & 0x1f);
  }
  if ((local_130 == 0) || ((int)local_130 < (int)uVar19)) {
    local_130 = uVar19;
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_138,0,0,4);
    }
    if (uVar19 != 0) {
      uVar12 = uVar19;
      if (uVar19 < 2) {
        if (local_138.Data != (FScriptContainerElement *)0x0) {
          uVar12 = 0;
          goto LAB_145f89256;
        }
      }
      else {
LAB_145f89256:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_138,0,uVar12,4);
      }
      if (0 < (int)uVar19) {
        uVar16 = 0;
        uVar24 = (ulonglong)uVar19;
        do {
          FVar27.Data = local_140;
          if (local_138.Data != (FScriptContainerElement *)0x0) {
            FVar27.Data = local_138.Data;
          }
          uVar9 = (longlong)(int)uVar19 - 1U & uVar16;
          uVar16 = uVar16 + 1;
          *(undefined4 *)(FVar27.Data + uVar9 * 4) = 0xffffffff;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    if (local_130 != 0) {
      pTStack_280 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
      uStack_284 = 1;
      local_288 = 0;
      uStack_274 = 0;
      iStack_270 = 0;
      if (local_150 != 0) {
        FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
        if (local_158 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_158;
        }
        uVar19 = *(uint *)FVar13;
        iStack_270 = 0;
        local_288 = 0;
        while (uVar19 == 0) {
          iStack_270 = iStack_270 + 0x20;
          lVar17 = (longlong)local_288;
          local_288 = local_288 + 1;
          if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < local_288)
          goto LAB_145f8936d;
          uVar19 = ((uint *)((longlong)FVar13 + 4))[lVar17];
        }
        uStack_284 = -uVar19 & uVar19;
        uVar16 = (ulonglong)uStack_284 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_254 = (int)lVar17;
        uStack_274 = local_254 + -1 + iStack_270;
        if ((int)local_150 < (int)uStack_274) {
LAB_145f8936d:
          uStack_274 = local_150;
        }
      }
      local_278 = 0xffffffff;
      local_220 = (longlong *)local_178;
      local_218._padding_ = CONCAT44(uStack_284,local_288);
      local_218.CurrentBitIndex = uStack_274;
      local_218.UnvisitedBitMask = 0xffffffff;
      local_218._28_4_ = uStack_26c;
      local_218.BaseBitIndex = iStack_270;
      uVar19 = uStack_274;
      local_218.Array = pTStack_280;
      if ((int)uStack_274 < (int)local_150) {
        do {
          puVar25 = (ulonglong *)((longlong)(int)uVar19 * 0x10 + *local_220);
          uVar12 = ((uint)(*puVar25 >> 0x14) & 0xffff ^ (uint)(*puVar25 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_130 - 1;
          *(uint *)((longlong)puVar25 + 0xc) = uVar12;
          FVar27.Data = local_140;
          if (local_138.Data != (FScriptContainerElement *)0x0) {
            FVar27.Data = local_138.Data;
          }
          uVar16 = (longlong)(int)local_130 - 1U & (longlong)(int)uVar12;
          *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(FVar27.Data + uVar16 * 4);
          *(uint *)(FVar27.Data + uVar16 * 4) = uVar19;
          local_218.UnvisitedBitMask = local_218.UnvisitedBitMask & ~local_218._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_218);
          uVar19 = local_218.CurrentBitIndex;
        } while (local_218.CurrentBitIndex < (local_218.Array)->NumBits);
      }
    }
  }
  pTVar1 = pTVar22 + (int)uVar20;
  for (; pTVar22 != pTVar1; pTVar22 = pTVar22 + 1) {
    TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>::
    Emplace<ULandscapeComponent_*_const_&>
              ((TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                *)local_178,(ULandscapeComponent **)&local_250,(bool *)pTVar22);
  }
  FVar27.Data = (FScriptContainerElement *)0x0;
  if (0 < local_178._8_4_ - local_144) {
LAB_145f89490:
    uVar20 = local_150;
    iStack_1f0 = 0;
    iVar26 = iVar26 - this->StreamingCount;
    uStack_1ec = 1;
    local_1d8 = 0;
    uStack_1dc = local_1d8;
    if (local_150 != 0) {
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
      if (local_158 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_158;
      }
      uVar19 = *(uint *)FVar13;
      while (uVar19 == 0) {
        lVar17 = (longlong)iStack_1f0;
        local_1d8 = local_1d8 + 0x20;
        iStack_1f0 = iStack_1f0 + 1;
        uStack_1dc = local_150;
        if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1f0)
        goto LAB_145f89512;
        uVar19 = ((uint *)((longlong)FVar13 + 4))[lVar17];
      }
      uStack_1ec = -uVar19 & uVar19;
      uVar16 = (ulonglong)uStack_1ec * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_250._4_4_ = (int)lVar17;
      uStack_1dc = local_250._4_4_ + -1 + local_1d8;
      if ((int)local_150 < (int)uStack_1dc) {
        uStack_1dc = local_150;
      }
    }
LAB_145f89512:
    iStack_1d0 = local_178._8_4_ - local_144;
    local_1f8 = (longlong *)local_178;
    local_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
    TStack_1c0._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
    uStack_1e0 = 0xffffffff;
    uVar19 = local_150 & 0xffffffe0;
    TStack_1c0.CurrentBitIndex = uStack_1dc;
    TStack_1c0.UnvisitedBitMask = 0xffffffff;
    uStack_1d4 = local_17c;
    TStack_1c0._28_4_ = local_17c;
    TStack_1c0.BaseBitIndex = local_1d8;
    uStack_1a0 = CONCAT44(uStack_1cc,iStack_1d0);
    iVar21 = (int)local_150 >> 5;
    bVar11 = (byte)local_150;
    local_1c8 = local_1f8;
    TStack_1c0.Array = local_1e8;
    if (((int)local_150 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar20 != local_150) {
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
      if (local_158 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_158;
      }
      uVar20 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar13 + (longlong)iVar21 * 4);
      while (uVar20 == 0) {
        lVar17 = (longlong)iVar21;
        uVar19 = uVar19 + 0x20;
        iVar21 = iVar21 + 1;
        uVar20 = local_150;
        if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_145f89630;
        uVar20 = ((uint *)((longlong)FVar13 + 4))[lVar17];
      }
      uVar16 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_248 = (int)lVar17;
      uVar20 = (uVar19 - 1) + local_248;
      if ((int)local_150 < (int)uVar20) {
        uVar20 = local_150;
      }
    }
LAB_145f89630:
    do {
      plVar5 = local_1c8;
      if ((int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34) != (int)uStack_1a0) {
        local_298 = 0;
        `TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
      }
      if (((TStack_1c0.CurrentBitIndex == uVar20) &&
          (TStack_1c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
         (plVar5 == (longlong *)local_178)) goto LAB_145f899ae;
      pUVar23 = *(ULandscapeComponent **)(*plVar5 + (longlong)TStack_1c0.CurrentBitIndex * 0x10);
      local_2a0 = pUVar23;
      pTVar10 = TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                        *)&this->ComponentStates,pUVar23);
      if ((pTVar10 ==
           (TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *)0x0) ||
         (pFVar2 = *(FComponentState **)&pTVar10->field_0x8, pFVar2 == (FComponentState *)0x0)) {
        ppUVar4 = &local_234;
LAB_145f898da:
        this_00 = &local_d8;
LAB_145f898e1:
        TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>::
        Emplace<ULandscapeComponent_*_const_&>
                  (this_00,(ULandscapeComponent **)((longlong)ppUVar4 + 4),(bool *)&local_2a0);
        if (((local_2b0.Data <= (FScriptContainerElement *)&local_2a0) &&
            ((FScriptContainerElement *)&local_2a0 <
             local_2b0.Data + (longlong)(int)local_2a8._4_4_ * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar21 = (int)local_2a8;
        if ((int)local_2a8 == local_2a8._4_4_) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_2b0,(int *)((longlong)&local_2a8 + 4));
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar21 + 1);
        *(ULandscapeComponent **)(local_2b0.Data + (longlong)iVar21 * 8) = local_2a0;
      }
      else {
        if ((pFVar2->Component == (ULandscapeComponent *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("State->Component != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                               ,0x3e2,L""), pUVar23 = local_2a0, bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        switch(pFVar2->Stage) {
        case Pending:
          if (0 < iVar26) {
            TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
            ::Emplace<ULandscapeComponent_*_const_&>(&local_128,&local_244,(bool *)&local_2a0);
            StartGrassMapGeneration(this,pFVar2,true,false);
            if ((pFVar2->Stage != NotReady) && (pFVar2->Stage != Pending)) {
              iVar26 = iVar26 + -1;
            }
          }
          break;
        case NotReady:
          uVar19 = ((uint)((ulonglong)pUVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar23 >> 4)) *
                   -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_d8.Hash;
            if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_d8.Hash.SecondaryData;
            }
            for (iVar21 = *(int *)((longlong)FVar18 +
                                  (ulonglong)(local_d8.HashSize - 1U & (uVar19 >> 0x10 ^ uVar19)) *
                                  4); iVar21 != -1;
                iVar21 = *(int *)(local_d8.Elements._0_8_ + 8 + (longlong)iVar21 * 0x10)) {
              if (*(ULandscapeComponent **)(local_d8.Elements._0_8_ + (longlong)iVar21 * 0x10) ==
                  pUVar23) goto switchD_145f896f3_default;
            }
          }
          bVar7 = UE::Landscape::CanRenderGrassMap(pUVar23);
          if (!bVar7) {
            ppUVar4 = &local_244;
            goto LAB_145f898da;
          }
          break;
        case TextureStreaming:
          TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
          ::Emplace<ULandscapeComponent_*_const_&>(&local_128,&local_23c,(bool *)&local_2a0);
          break;
        case Rendering:
        case AsyncFetch:
        case GrassMapsPopulated:
          uVar19 = ((uint)((ulonglong)pUVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar23 >> 4)) *
                   -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_128.Hash;
            if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_128.Hash.SecondaryData;
            }
            for (iVar21 = *(int *)((longlong)FVar18 +
                                  (ulonglong)(local_128.HashSize - 1U & (uVar19 >> 0x10 ^ uVar19)) *
                                  4); iVar21 != -1;
                iVar21 = *(int *)(local_128.Elements._0_8_ + 8 + (longlong)iVar21 * 0x10)) {
              if (*(ULandscapeComponent **)(local_128.Elements._0_8_ + (longlong)iVar21 * 0x10) ==
                  pUVar23) {
                if (pFVar2->Stage != Rendering) goto switchD_145f896f3_default;
                ppUVar4 = &local_23c;
                this_00 = &local_88;
                goto LAB_145f898e1;
              }
            }
          }
          CancelAndEvict(this,pFVar2,true);
          TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
          ::Emplace<ULandscapeComponent_*_const_&>(&local_128,&local_234,(bool *)&local_2a0);
        }
      }
switchD_145f896f3_default:
      TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
    } while( true );
  }
LAB_145f89c31:
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  local_130 = 0;
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_178);
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  if (FVar27.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar27.Data);
  }
LAB_145f89ce6:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
LAB_145f899ae:
  iVar26 = (int)local_2a8;
  local_290 = local_2b0.Data + (longlong)(int)local_2a8 * 8;
  pFVar28 = local_290;
  FVar27.Data = local_2b0.Data;
LAB_145f899c6:
  while( true ) {
    if ((int)local_2a8 != iVar26) {
      local_297[0] = 0;
      `TCheckedPointerIterator<ULandscapeComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_297);
    }
    lVar17 = local_2a8;
    if (FVar27.Data == pFVar28) break;
    pUVar23 = *(ULandscapeComponent **)FVar27.Data;
    if (local_178._8_4_ != local_144) {
      uVar20 = ((uint)((ulonglong)pUVar23 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar23 >> 4)) *
               -0x7a143595;
      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
      FVar14.Data = local_140;
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_138.Data;
      }
      uVar20 = *(uint *)(FVar14.Data +
                        (longlong)(int)(local_130 - 1 & (uVar20 >> 0x10 ^ uVar20)) * 4);
      pFVar28 = local_290;
      if (uVar20 != 0xffffffff) {
LAB_145f89a60:
        lVar17 = (longlong)(int)uVar20 * 0x10;
        if (*(ULandscapeComponent **)(local_178._0_8_ + lVar17) != pUVar23)
        goto code_r0x000145f89a74;
        if (((int)uVar20 < 0) || ((int)local_150 <= (int)uVar20)) {
LAB_145f89ac7:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
          if (local_158 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_158;
          }
          uVar19 = uVar20;
          if ((int)uVar20 < 0) {
            uVar19 = uVar20 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar13 + (longlong)((int)uVar19 >> 5) * 4) >> (uVar20 & 0x1f) & 1
              ) == 0) goto LAB_145f89ac7;
        }
        uVar6 = local_178._0_8_;
        FVar14.Data = local_140;
        if (local_138.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_138.Data;
        }
        pFVar28 = FVar14.Data + (longlong)*(int *)(local_178._0_8_ + lVar17 + 0xc) * 4;
        while( true ) {
          uVar19 = *(uint *)pFVar28;
          if ((uVar19 == 0xffffffff) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar19 == uVar20) break;
          pFVar28 = (FScriptContainerElement *)(local_178._0_8_ + (longlong)(int)uVar19 * 0x10 + 8);
        }
        *(int *)pFVar28 = *(int *)(uVar6 + lVar17 + 8);
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_178,uVar20,1);
        pFVar28 = local_290;
      }
    }
    FVar27.Data = FVar27.Data + 8;
  }
  uVar20 = local_2a8._4_4_;
  local_2a8 = (ulonglong)local_2a8._4_4_ << 0x20;
  if ((lVar17 < 0) && (uVar20 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_2b0,0,(int *)((longlong)&local_2a8 + 4));
  }
  this = local_228;
  iVar26 = local_294;
  FVar27.Data = local_268.AllocatorInstance.Data;
  if (local_178._8_4_ - local_144 < 1) goto LAB_145f89c31;
  UpdateTrackedComponents
            (local_228,&local_268,local_294,
             *(int *)&(local_228->ComponentStates).field_0x8 -
             *(int *)&(local_228->ComponentStates).field_0x34,false,false,0);
  if (0 < this->StreamingCount) {
    FLandscapeTextureStreamingManager::WaitForTextureStreaming(this->TextureStreamingManager);
  }
  FVar27.Data = local_268.AllocatorInstance.Data;
  if (local_178._8_4_ - local_144 < 1) goto LAB_145f89c31;
  goto LAB_145f89490;
code_r0x000145f89a74:
  uVar20 = *(uint *)(local_178._0_8_ + lVar17 + 8);
  if (uVar20 == 0xffffffff) goto code_r0x000145f89a7d;
  goto LAB_145f89a60;
code_r0x000145f89a7d:
  FVar27.Data = FVar27.Data + 8;
  goto LAB_145f899c6;
}

// KickOffRenderAndReadback @ 145f98270

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
FLandscapeGrassMapsBuilder::KickOffRenderAndReadback
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  int *piVar1;
  FName this_00;
  ULandscapeComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_RenderGrassMap> FVar9;
  FLandscapeGrassWeightExporter *pFVar10;
  ALandscapeProxy *pAVar11;
  FLandscapeGrassWeightExporter *pFVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar13;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_c4;
  FName local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  FName local_98;
  LARGE_INTEGER local_90;
  FString local_88;
  FStatMessage local_78;
  FName *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<ULandscapeComponent_*_const,int> local_58;
  
  FVar9 = StatPtr_STAT_RenderGrassMap;
  if (StatPtr_STAT_RenderGrassMap == (FThreadSafeStaticStat<FStat_STAT_RenderGrassMap>)0x0) {
    pFVar8 = ::FName::FName(&local_c4,"STAT_RenderGrassMap");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_RenderGrassMap>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderGrassMap,*pFVar8,
                       L"Render GrassMap","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_res18.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                   ,0x668);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_145f983b1;
    }
  }
  bVar5 = false;
  FVar13 = local_b8;
LAB_145f983b1:
  if ((param_1->Stage != TextureStreaming) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.Stage == EComponentStage::TextureStreaming",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x66a,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->StreamingCount < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x66b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->StreamingCount = this->StreamingCount + -1;
  this_00 = (FName)param_1->Component;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  if (((param_1->ActiveRender).Ptr != (FLandscapeGrassWeightExporter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.ActiveRender == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x682,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = ::operator_new(0x1d0);
  pFVar12 = (FLandscapeGrassWeightExporter *)0x0;
  if (pFVar10 != (FLandscapeGrassWeightExporter *)0x0) {
    local_68 = &local_res20;
    iStack_60 = 1;
    local_res20 = this_00;
    pAVar11 = ULandscapeComponent::GetLandscapeProxy((ULandscapeComponent *)this_00);
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iStack_60;
    local_58.DataPtr = (ULandscapeComponent **)local_68;
    pFVar12 = FLandscapeGrassWeightExporter::FLandscapeGrassWeightExporter
                        (pFVar10,pAVar11,&local_58,true,true,&local_a8,true,true);
  }
  pFVar10 = (param_1->ActiveRender).Ptr;
  if ((pFVar10 != pFVar12) &&
     ((param_1->ActiveRender).Ptr = pFVar12, pFVar10 != (FLandscapeGrassWeightExporter *)0x0)) {
    (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
  }
  if (((param_1->ActiveRender).Ptr == (FLandscapeGrassWeightExporter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.ActiveRender != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x686,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1->Stage = Rendering;
  this->RenderingCount = this->RenderingCount + 1;
  if (5 < (byte)LogGrass._0_1_) {
    local_res10[0] = (FColor_u_0)this->NotReadyCount;
    local_res18.ComparisonIndex.Value = this->PopulatedCount;
    local_res20.ComparisonIndex.Value = this->AsyncFetchCount;
    local_c4.ComparisonIndex.Value = param_1->TickCount;
    pUVar2 = param_1->Component;
    if (pUVar2 != (ULandscapeComponent *)0x0) {
      local_98 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_98,&local_88);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
    if ((pUVar2 != (ULandscapeComponent *)0x0) &&
       (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  param_1->TickCount = 0;
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_78.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_78);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// LaunchAsyncFetchTask @ 145f986d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FLandscapeGrassMapsBuilder::LaunchAsyncFetchTask
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  int *piVar1;
  FLandscapeGrassWeightExporter *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_PopulateGrassMap> FVar12;
  FAsyncTask<FAsyncFetchTask> *pFVar13;
  TStatIdData *pTVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FAsyncTask<FAsyncFetchTask> *pFVar18;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_98;
  FName local_90;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FString local_68;
  FStatMessage local_58;
  
  pFVar18 = (FAsyncTask<FAsyncFetchTask> *)0x0;
  local_res10 = 0;
  FVar12 = StatPtr_STAT_PopulateGrassMap;
  if (StatPtr_STAT_PopulateGrassMap == (FThreadSafeStaticStat<FStat_STAT_PopulateGrassMap>)0x0) {
    pFVar11 = ::FName::FName(&local_98,"STAT_PopulateGrassMap");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_PopulateGrassMap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PopulateGrassMap,*pFVar11,
                        L"Populate GrassMap","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                   ,0x691);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar16.Value;
      uStackX_c = uVar10;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_145f98836;
    }
  }
  bVar6 = false;
  FVar17 = local_78;
LAB_145f98836:
  if ((param_1->Stage != Rendering) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.Stage == EComponentStage::Rendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x693,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->RenderingCount < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderingCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x694,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->RenderingCount = this->RenderingCount + -1;
  RemoveTextureStreamingRequests(this,param_1);
  if (((param_1->ActiveRender).Ptr == (FLandscapeGrassWeightExporter *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.ActiveRender != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x69a,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = ::operator_new(0xd8);
  if (pFVar13 != (FAsyncTask<FAsyncFetchTask> *)0x0) {
    pFVar2 = (param_1->ActiveRender).Ptr;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    pFVar13->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
    pFVar13->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncFetchTask____6B_;
    *(undefined4 *)&pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    *(undefined2 *)&pFVar13->_padding_ = 3;
    pFVar13->_padding_ = -1;
    pFVar13->_padding_ = 0;
    (pFVar13->Task).ActiveRender.Object = pFVar2;
    if (pFVar2 == (FLandscapeGrassWeightExporter *)0x0) {
      `TNonNullPtr<FLandscapeGrassWeightExporter>::TNonNullPtr<FLandscapeGrassWeightExporter>'::__l2
      ::<lambda_1>::operator()(&local_res8);
    }
    pvVar8 = ThreadLocalStoragePointer;
    uVar15 = (ulonglong)_tls_index;
    *(undefined8 *)&(pFVar13->Task).Results.field_0x18 = 0;
    *(undefined4 *)&(pFVar13->Task).Results.field_0x20 = 0;
    *(undefined4 *)&(pFVar13->Task).Results.field_0x24 = 1;
    lVar3 = *(longlong *)((longlong)pvVar8 + uVar15 * 8);
    *(undefined8 *)&(pFVar13->Task).Results.field_0x30 = 0;
    *(undefined4 *)&(pFVar13->Task).Results.field_0x38 = 0;
    *(undefined4 *)&(pFVar13->Task).Results.field_0x3c = 0x20;
    *(undefined4 *)&(pFVar13->Task).Results.field_0x40 = 0xffffffff;
    *(undefined4 *)&(pFVar13->Task).Results.field_0x44 = 0;
    *(undefined8 *)&(pFVar13->Task).Results.field_0x50 = 0;
    *(undefined4 *)&(pFVar13->Task).Results.field_0x58 = 0;
    if ((*(int *)(lVar3 + 0x9d4c) <
         `public:_struct_TStatId___cdecl_FAsyncFetchTask::GetStatId(void)const___ptr64'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_struct_TStatId___cdecl_FAsyncFetchTask::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_struct_TStatId___cdecl_FAsyncFetchTask::GetStatId(void)const___ptr64'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      FThreadSafeStaticStat<`FAsyncFetchTask::GetStatId'::__l2::FStat_FAsyncFetchTask>::
      FThreadSafeStaticStat<_FAsyncFetchTask::GetStatId_::__l2::FStat_FAsyncFetchTask>
                (&`public:_struct_TStatId___cdecl_FAsyncFetchTask::GetStatId(void)const___ptr64'::
                  __l2::StatPtr_FAsyncFetchTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FAsyncFetchTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pTVar14 = _StatPtr_FAsyncFetchTask;
    if (_StatPtr_FAsyncFetchTask == (TStatIdData *)0x0) {
      pFVar11 = ::FName::FName(&local_80,"FAsyncFetchTask");
      pTVar14 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_struct_TStatId___cdecl_FAsyncFetchTask::GetStatId(void)const___ptr64'
                            ::__l2::StatPtr_FAsyncFetchTask,*pFVar11,L"FAsyncFetchTask",
                           "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                           L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    pFVar13->_padding_ = (longlong)pTVar14;
    pFVar18 = pFVar13;
  }
  pFVar13 = (param_1->AsyncFetchTask).Ptr;
  if ((pFVar13 != pFVar18) &&
     ((param_1->AsyncFetchTask).Ptr = pFVar18, pFVar13 != (FAsyncTask<FAsyncFetchTask> *)0x0)) {
    (**(code **)(pFVar13->_padding_ + 0x28))();
  }
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)(param_1->AsyncFetchTask).Ptr,false,GThreadPool,Normal,None,-1,
             (wchar_t *)0x0);
  param_1->Stage = AsyncFetch;
  this->AsyncFetchCount = this->AsyncFetchCount + 1;
  if (5 < (byte)LogGrass._0_1_) {
    local_res8 = this->PopulatedCount;
    local_res18[0] = (FColor_u_0)this->RenderingCount;
    local_res20.ComparisonIndex.Value = this->StreamingCount;
    local_98.ComparisonIndex.Value = param_1->TickCount;
    if (param_1->Component != (ULandscapeComponent *)0x0) {
      local_90 = (FName)param_1->Component->_padding_;
      ::FName::ToString(&local_90,&local_68);
      local_res10 = 1;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
    if (((local_res10 & 1) != 0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  param_1->TickCount = 0;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// PendingToNotReady @ 145f9ac50

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
FLandscapeGrassMapsBuilder::PendingToNotReady
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  ULandscapeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res20;
  FString local_58;
  
  if ((this->PendingCount < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x5f5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->PendingCount = this->PendingCount + -1;
  param_1->Stage = NotReady;
  this->NotReadyCount = this->NotReadyCount + 1;
  RemoveFromPendingComponentHeap(this,param_1);
  if ((byte)LogGrass._0_1_ < 6) {
    param_1->TickCount = 0;
    return;
  }
  pUVar1 = param_1->Component;
  if (pUVar1 != (ULandscapeComponent *)0x0) {
    local_res20 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res20,&local_58);
  }
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
  if ((pUVar1 != (ULandscapeComponent *)0x0) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  param_1->TickCount = 0;
  return;
}

// PendingToPopulatedFastPathAlreadyHasData @ 145f9ae10

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
FLandscapeGrassMapsBuilder::PendingToPopulatedFastPathAlreadyHasData
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  ULandscapeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res20;
  FString local_58;
  
  if ((this->PendingCount < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x602,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->PendingCount = this->PendingCount + -1;
  param_1->Stage = GrassMapsPopulated;
  this->PopulatedCount = this->PopulatedCount + 1;
  RemoveFromPendingComponentHeap(this,param_1);
  if ((byte)LogGrass._0_1_ < 6) {
    param_1->TickCount = 0;
    return;
  }
  pUVar1 = param_1->Component;
  if (pUVar1 != (ULandscapeComponent *)0x0) {
    local_res20 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res20,&local_58);
  }
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
  if ((pUVar1 != (ULandscapeComponent *)0x0) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  param_1->TickCount = 0;
  return;
}

// PendingToPopulatedFastPathNoGrass @ 145f9afd0

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
FLandscapeGrassMapsBuilder::PendingToPopulatedFastPathNoGrass
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  ULandscapeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FLandscapeComponentGrassData *pFVar4;
  FLandscapeComponentGrassData *pFVar5;
  TRawPtrProxy<FLandscapeComponentGrassData> local_res8;
  int local_res10;
  int local_res18;
  FName local_res20;
  FString local_58;
  
  pFVar5 = (FLandscapeComponentGrassData *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  pUVar1 = param_1->Component;
  pFVar4 = ::operator_new(0x68);
  local_res8.Object = pFVar5;
  if (pFVar4 != (FLandscapeComponentGrassData *)0x0) {
    pFVar4->_padding_ = 0;
    *(undefined8 *)&(pFVar4->WeightOffsets).field_0x10 = 0;
    *(undefined8 *)&(pFVar4->WeightOffsets).field_0x18 = 0;
    *(undefined8 *)&(pFVar4->WeightOffsets).field_0x38 = 0;
    *(undefined8 *)&(pFVar4->WeightOffsets).field_0x48 = 0;
    pFVar4->NumElements = -1;
    *(undefined8 *)&pFVar4->WeightOffsets = 0;
    *(undefined8 *)&(pFVar4->WeightOffsets).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->WeightOffsets).field_0x20 = 0;
    *(undefined4 *)&(pFVar4->WeightOffsets).field_0x28 = 0;
    *(undefined4 *)&(pFVar4->WeightOffsets).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar4->WeightOffsets).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar4->WeightOffsets).field_0x34 = 0;
    *(undefined8 *)&(pFVar4->WeightOffsets).field_0x40 = 0;
    (pFVar4->HeightWeightData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->HeightWeightData).ArrayNum = 0;
    (pFVar4->HeightWeightData).ArrayMax = 0;
    local_res8.Object = pFVar4;
  }
  TSharedRef<FLandscapeComponentGrassData,1>::operator=<FLandscapeComponentGrassData>
            (&pUVar1->GrassData,&local_res8);
  ((pUVar1->GrassData).Object)->NumElements = 0;
  if ((this->PendingCount < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x618,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->PendingCount = this->PendingCount + -1;
  param_1->Stage = GrassMapsPopulated;
  this->PopulatedCount = this->PopulatedCount + 1;
  RemoveFromPendingComponentHeap(this,param_1);
  if ((byte)LogGrass._0_1_ < 6) {
    param_1->TickCount = 0;
    return;
  }
  local_res8.Object._0_4_ = this->RenderingCount;
  local_res10 = this->StreamingCount;
  local_res18 = param_1->TickCount;
  if (param_1->Component != (ULandscapeComponent *)0x0) {
    local_res20 = (FName)param_1->Component->_padding_;
    ::FName::ToString(&local_res20,&local_58);
    pFVar5 = (FLandscapeComponentGrassData *)&DAT_00000001;
  }
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
  if ((pFVar5 != (FLandscapeComponentGrassData *)0x0) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  param_1->TickCount = 0;
  return;
}

// PendingToStreaming @ 145f9b210

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
FLandscapeGrassMapsBuilder::PendingToStreaming
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  FScriptContainerElement *pFVar1;
  ULandscapeComponent *this_00;
  FWeakObjectPtr *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UTexture *pUVar9;
  FWeakObjectPtr *this_01;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  uint local_res20 [2];
  undefined1 local_88 [4];
  uint local_84;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  UTexture2D *local_70;
  UObject *local_68;
  FName local_60;
  FString local_58;
  
  local_84 = 0;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1573,"FLandscapeGrassMapsBuilder::PendingToStreaming",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x625);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1573);
  }
  this_00 = param_1->Component;
  local_70 = ULandscapeComponent::GetHeightmap(this_00,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  local_80.ObjectIndex = 0;
  local_80.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_70);
  }
  FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_70);
  pFVar2 = (FWeakObjectPtr *)(param_1->TexturesToStream).AllocatorInstance.Data;
  if (((pFVar2 <= &local_80) && (&local_80 < pFVar2 + (param_1->TexturesToStream).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (param_1->TexturesToStream).ArrayNum;
  if (iVar6 == (param_1->TexturesToStream).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(param_1->TexturesToStream).AllocatorInstance,
                       &(param_1->TexturesToStream).ArrayMax);
  }
  (param_1->TexturesToStream).ArrayNum = iVar6 + 1;
  *(FWeakObjectPtr *)((param_1->TexturesToStream).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_80;
  pTVar8 = ULandscapeComponent::GetRenderedWeightmapTexturesForFeatureLevel
                     (this_00,(uint)(this->World->FeatureLevel).Value);
  pFVar10 = (pTVar8->AllocatorInstance).Data;
  iVar6 = pTVar8->ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar6 * 8;
  while( true ) {
    if (pTVar8->ArrayNum != iVar6) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<UTexture2D_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar10 == pFVar1) {
      this_01 = (FWeakObjectPtr *)(param_1->TexturesToStream).AllocatorInstance.Data;
      iVar6 = (param_1->TexturesToStream).ArrayNum;
      pFVar2 = this_01 + iVar6;
      while( true ) {
        if ((param_1->TexturesToStream).ArrayNum != iVar6) {
          local_88[0] = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<UTexture,FWeakObjectPtr>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_88);
        }
        if (this_01 == pFVar2) break;
        pUVar9 = (UTexture *)FWeakObjectPtr::Get(this_01);
        if (pUVar9 != (UTexture *)0x0) {
          FLandscapeTextureStreamingManager::RequestTextureFullyStreamedIn
                    (this->TextureStreamingManager,pUVar9,false);
        }
        this_01 = this_01 + 1;
      }
      if ((this->PendingCount < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                             ,0x63b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this->PendingCount = this->PendingCount + -1;
      param_1->Stage = TextureStreaming;
      this->StreamingCount = this->StreamingCount + 1;
      RemoveFromPendingComponentHeap(this,param_1);
      if (5 < (byte)LogGrass._0_1_) {
        local_res20[0] = param_1->TickCount;
        if (param_1->Component != (ULandscapeComponent *)0x0) {
          local_60 = (FName)param_1->Component->_padding_;
          ::FName::ToString(&local_60,&local_58);
          local_84 = 1;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        if (((local_84 & 1) != 0) &&
           (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      param_1->TickCount = 0;
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pUVar3 = *(UObject **)pFVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_78.ObjectIndex = 0;
    local_78.ObjectSerialNumber = 0;
    local_68 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_68);
    pFVar2 = (FWeakObjectPtr *)(param_1->TexturesToStream).AllocatorInstance.Data;
    if (((pFVar2 <= &local_78) && (&local_78 < pFVar2 + (param_1->TexturesToStream).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar7 = (param_1->TexturesToStream).ArrayNum;
    if (iVar7 == (param_1->TexturesToStream).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_1->TexturesToStream).AllocatorInstance,
                         &(param_1->TexturesToStream).ArrayMax);
    }
    pFVar10 = pFVar10 + 8;
    (param_1->TexturesToStream).ArrayNum = iVar7 + 1;
    *(FWeakObjectPtr *)((param_1->TexturesToStream).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_78;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// PopulateGrassDataFromAsyncFetchTask @ 145f9b7c0

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
FLandscapeGrassMapsBuilder::PopulateGrassDataFromAsyncFetchTask
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  FLandscapeGrassWeightExporter *pFVar1;
  FAsyncTask<FAsyncFetchTask> *pFVar2;
  ULandscapeComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  FName local_res20;
  FString local_58;
  
  if ((this->AsyncFetchCount < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncFetchCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x6a7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->AsyncFetchCount = this->AsyncFetchCount + -1;
  pFVar1 = (param_1->ActiveRender).Ptr;
  if ((*(longlong *)&pFVar1->field_0x98 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameThreadAsyncReadbackPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                         ,0x2ac,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread
            (*(FLandscapeAsyncTextureReadback **)&pFVar1->field_0x98);
  *(undefined8 *)&pFVar1->field_0x98 = 0;
  pFVar2 = (param_1->AsyncFetchTask).Ptr;
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar2);
  FLandscapeGrassWeightExporter::ApplyResults(&(pFVar2->Task).Results);
  pFVar1 = (param_1->ActiveRender).Ptr;
  if (pFVar1 != (FLandscapeGrassWeightExporter *)0x0) {
    (param_1->ActiveRender).Ptr = (FLandscapeGrassWeightExporter *)0x0;
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (param_1->AsyncFetchTask).Ptr;
  if (pFVar2 != (FAsyncTask<FAsyncFetchTask> *)0x0) {
    (param_1->AsyncFetchTask).Ptr = (FAsyncTask<FAsyncFetchTask> *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  param_1->Stage = GrassMapsPopulated;
  this->PopulatedCount = this->PopulatedCount + 1;
  if ((byte)LogGrass._0_1_ < 6) {
    param_1->TickCount = 0;
    return;
  }
  pUVar3 = param_1->Component;
  if (pUVar3 != (ULandscapeComponent *)0x0) {
    local_res20 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res20,&local_58);
  }
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
  if ((pUVar3 != (ULandscapeComponent *)0x0) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  param_1->TickCount = 0;
  return;
}

// PopulateGrassDataFromReadback @ 145f9b9f0

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
FLandscapeGrassMapsBuilder::PopulateGrassDataFromReadback
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  int *piVar1;
  FLandscapeGrassWeightExporter *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_PopulateGrassMap> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  undefined1 auStackY_178 [32];
  FColor_u_0 local_108;
  uint local_104;
  FName local_100;
  uint local_f8;
  uint uStack_f4;
  int local_f0;
  FName local_ec;
  FName local_e0;
  FName local_d0;
  LARGE_INTEGER local_c8;
  FString local_c0;
  FStatMessage local_b0;
  undefined1 local_a0 [88];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_104 = 0;
  FVar9 = StatPtr_STAT_PopulateGrassMap;
  if (StatPtr_STAT_PopulateGrassMap == (FThreadSafeStaticStat<FStat_STAT_PopulateGrassMap>)0x0) {
    pFVar8 = ::FName::FName(&local_ec,"STAT_PopulateGrassMap");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_PopulateGrassMap>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PopulateGrassMap,*pFVar8,
                       L"Populate GrassMap","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar11.Value;
        local_100.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                   ,0x6bb);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8 = FVar11.Value;
      uStack_f4 = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_145f9bb45;
    }
  }
  bVar5 = false;
  FVar12 = local_e0;
LAB_145f9bb45:
  if ((param_1->Stage != Rendering) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.Stage == EComponentStage::Rendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x6bd,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->RenderingCount < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderingCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x6be,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->RenderingCount = this->RenderingCount + -1;
  RemoveTextureStreamingRequests(this,param_1);
  if (((param_1->ActiveRender).Ptr == (FLandscapeGrassWeightExporter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.ActiveRender != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x6c4,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->ActiveRender).Ptr;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId850,"ApplyResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
               ,0x352);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId850);
  }
  FLandscapeGrassWeightExporter::FetchResults
            (pFVar2,(TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
                     *)local_a0,true);
  FLandscapeGrassWeightExporter::ApplyResults
            ((TMap<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,TInlineSetAllocator<1,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>,0>_>
              *)local_a0);
  local_48 = 0;
  if ((void *)local_a0._80_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a0._80_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULandscapeComponent_*,TUniquePtr<FLandscapeComponentGrassData,TDefaultDelete<FLandscapeComponentGrassData>_>_>_>,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)local_a0);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar2 = (param_1->ActiveRender).Ptr;
  if (pFVar2 != (FLandscapeGrassWeightExporter *)0x0) {
    (param_1->ActiveRender).Ptr = (FLandscapeGrassWeightExporter *)0x0;
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  param_1->Stage = GrassMapsPopulated;
  this->PopulatedCount = this->PopulatedCount + 1;
  if (5 < (byte)LogGrass._0_1_) {
    local_108 = (FColor_u_0)this->NotReadyCount;
    local_f0 = this->AsyncFetchCount;
    local_ec.ComparisonIndex.Value = this->RenderingCount;
    local_f8 = this->StreamingCount;
    local_100.ComparisonIndex.Value = param_1->TickCount;
    if (param_1->Component != (ULandscapeComponent *)0x0) {
      local_d0 = (FName)param_1->Component->_padding_;
      ::FName::ToString(&local_d0,&local_c0);
      local_104 = 1;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
    if (((local_104 & 1) != 0) &&
       (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  param_1->TickCount = 0;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RegisterComponent @ 145f9d040

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
FLandscapeGrassMapsBuilder::RegisterComponent
          (FLandscapeGrassMapsBuilder *this,ULandscapeComponent *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ULandscapeComponent *pUVar3;
  code *pcVar4;
  FComponentState *pFVar5;
  bool bVar6;
  TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *pTVar7;
  ALandscapeProxy *pAVar8;
  ULandscapeComponent *pUVar9;
  TPairInitializer<ULandscapeComponent_*_const_&,FLandscapeGrassMapsBuilder::FComponentState_*_const_&>
  local_res8;
  FComponentState *local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FComponentState ***local_48;
  FComponentState **local_40;
  
  local_res8.Value = (FComponentState **)param_1;
  if ((param_1 == (ULandscapeComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x30c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = (ULandscapeComponent *)local_res8.Value;
  pTVar7 = TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                   *)&this->ComponentStates,(ULandscapeComponent *)local_res8.Value);
  if ((pTVar7 == (TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *)0x0)
     || (puVar2 = *(undefined8 **)&pTVar7->field_0x8, puVar2 == (undefined8 *)0x0)) {
    if ((this->StatePoolAllocator).FreeList == (FreeListNode *)0x0) {
      TAllocatorFixedSizeFreeList<48,32>::Grow(&this->StatePoolAllocator,0x20);
      pUVar9 = (ULandscapeComponent *)local_res8.Value;
    }
    local_res18 = (FComponentState *)(this->StatePoolAllocator).FreeList;
    pUVar3 = local_res18->Component;
    puVar1 = &(this->StatePoolAllocator).NumLive;
    *puVar1 = *puVar1 + 1;
    (this->StatePoolAllocator).FreeList = (FreeListNode *)pUVar3;
    local_res18->TickCount = 0;
    (local_res18->TexturesToStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_res18->TexturesToStream).ArrayNum = 0;
    (local_res18->TexturesToStream).ArrayMax = 0;
    (local_res18->ActiveRender).Ptr = (FLandscapeGrassWeightExporter *)0x0;
    (local_res18->AsyncFetchTask).Ptr = (FAsyncTask<FAsyncFetchTask> *)0x0;
    local_48 = &local_res8.Value;
    local_res18->Component = pUVar9;
    local_res18->Stage = Pending;
    local_res18->bInPendingHeap = false;
    local_40 = &local_res18;
    TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ULandscapeComponent_*_const_&,FLandscapeGrassMapsBuilder::FComponentState_*_const_&>_>
              ((TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                *)&this->ComponentStates,&local_res8,(bool *)&local_48);
    this->PendingCount = this->PendingCount + 1;
    if (5 < (byte)LogGrass._0_1_) {
      local_88 = *(FName *)((longlong)local_res8.Value + 0x18);
      ::FName::ToString(&local_88,&local_68);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = local_res18;
    if ((local_res18->Stage != Pending) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.Stage == EComponentStage::Pending",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                           ,0x597,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = pFVar5->Component;
    bVar6 = UWorld::IsGameWorld(this->World);
    if ((bVar6) &&
       (pAVar8 = ULandscapeComponent::GetLandscapeProxy(pUVar9),
       pAVar8->bDisableRuntimeGrassMapGeneration != false)) {
      if (5 < (byte)LogGrass._0_1_) {
        local_80 = (FName)pUVar9->_padding_;
        ::FName::ToString(&local_80,&local_58);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      PendingToNotReady(this,pFVar5);
    }
    else if ((pUVar9->GrassTypeSummary).bHasAnyGrass == false) {
      PendingToPopulatedFastPathNoGrass(this,pFVar5);
    }
    else {
      if ((local_res18->Stage != Pending) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewState->Stage == EComponentStage::Pending",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                             ,800,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      AddToPendingComponentHeap(this,local_res18);
    }
  }
  else {
    if (5 < (byte)LogGrass._0_1_) {
      local_res20 = *(FName *)((longlong)pUVar9 + 0x18);
      ::FName::ToString(&local_res20,&local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      pUVar9 = (ULandscapeComponent *)local_res8.Value;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        pUVar9 = (ULandscapeComponent *)local_res8.Value;
      }
    }
    *puVar2 = pUVar9;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  return;
}

// RemoveFromPendingComponentHeap @ 145f9fe10

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
FLandscapeGrassMapsBuilder::RemoveFromPendingComponentHeap
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_1->bInPendingHeap != false) {
    uVar8 = 0;
    if (0 < (this->PendingComponentsHeap).ArrayNum) {
      lVar9 = 0;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < (this->PendingComponentsHeap).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(FComponentState **)((this->PendingComponentsHeap).AllocatorInstance.Data + lVar9) ==
            param_1) {
          uVar6 = 0;
          if ((int)uVar8 < (this->PendingComponentsHeap).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = (this->PendingComponentsHeap).ArrayNum;
          pFVar3 = (this->PendingComponentsHeap).AllocatorInstance.Data;
          iVar7 = iVar2 + ~uVar8;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar8 * 0x10,pFVar3 + (longlong)(iVar2 - iVar7) * 0x10,
                    (longlong)iVar7 << 4);
          }
          piVar1 = &(this->PendingComponentsHeap).ArrayNum;
          *piVar1 = *piVar1 + -1;
          if ((this->FirstNewPendingComponent <= (this->PendingComponentsHeap).ArrayNum) &&
             ((int)uVar8 < this->FirstNewPendingComponent)) {
            this->FirstNewPendingComponent = uVar8;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar8 < (this->PendingComponentsHeap).ArrayNum);
    }
    param_1->bInPendingHeap = false;
  }
  return;
}

// RemoveTextureStreamingRequests @ 145f9ffb0

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
FLandscapeGrassMapsBuilder::RemoveTextureStreamingRequests
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  UTexture *pUVar4;
  FWeakObjectPtr *this_00;
  undefined1 local_res10 [8];
  
  this_00 = (FWeakObjectPtr *)(param_1->TexturesToStream).AllocatorInstance.Data;
  iVar3 = (param_1->TexturesToStream).ArrayNum;
  pFVar2 = this_00 + iVar3;
  while( true ) {
    if ((param_1->TexturesToStream).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UTexture,FWeakObjectPtr>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar2) break;
    pUVar4 = (UTexture *)FWeakObjectPtr::Get(this_00);
    if (pUVar4 != (UTexture *)0x0) {
      FLandscapeTextureStreamingManager::UnrequestTextureFullyStreamedIn
                (this->TextureStreamingManager,pUVar4);
    }
    this_00 = this_00 + 1;
  }
  piVar1 = &(param_1->TexturesToStream).ArrayMax;
  (param_1->TexturesToStream).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(param_1->TexturesToStream).AllocatorInstance,0,piVar1);
  }
  return;
}

// StartGrassMapGeneration @ 145fa3520

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
FLandscapeGrassMapsBuilder::StartGrassMapGeneration
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1,bool param_2,bool param_3)

{
  ULandscapeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1480,"FLandscapeGrassMapsBuilder::StartGrassMapGeneration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x5c8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1480);
  }
  if ((param_1->Stage != Pending) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.Stage == EComponentStage::Pending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x5c9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar1 = param_1->Component;
  if ((!param_3) || (bVar3 = TryFastpathsFromPending(this,param_1,true), !bVar3)) {
    bVar3 = UE::Landscape::CanRenderGrassMap(pUVar1);
    if (bVar3) {
      PendingToStreaming(this,param_1);
      bVar3 = true;
      goto LAB_145fa35f3;
    }
    PendingToNotReady(this,param_1);
  }
  bVar3 = false;
LAB_145fa35f3:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// StartPrioritizedGrassMapGeneration @ 145fa3630

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
FLandscapeGrassMapsBuilder::StartPrioritizedGrassMapGeneration
          (FLandscapeGrassMapsBuilder *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  FComponentState *pFVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_PrioritizePendingGrassMaps> FVar17;
  longlong lVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FName FVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  FPendingComponent *this_00;
  FPendingComponent *pFVar25;
  float fVar26;
  float fVar27;
  FIdentityFunctor local_res18;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 local_133 [3];
  FColor_u_0 local_130 [2];
  FName local_128;
  FName local_120;
  FName local_118;
  undefined1 local_108 [16];
  undefined1 *local_f8;
  code *local_f0;
  undefined8 *local_e8;
  FVector3i *local_e0;
  FScriptContainerElement *local_d8;
  FVector3i local_d0;
  FName local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [96];
  
  FVar17 = StatPtr_STAT_PrioritizePendingGrassMaps;
  if (StatPtr_STAT_PrioritizePendingGrassMaps ==
      (FThreadSafeStaticStat<FStat_STAT_PrioritizePendingGrassMaps>)0x0) {
    pFVar16 = ::FName::FName(&local_c0,"STAT_PrioritizePendingGrassMaps");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_PrioritizePendingGrassMaps>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrioritizePendingGrassMaps,
                        *pFVar16,L"Prioritize Pending GrassMaps","STATGROUP_Foliage",
                        "STATCAT_Advanced",L"Foliage",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar11 = false;
  bVar10 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar21 = *(FName *)FVar17;
  bVar13 = false;
  bVar12 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_145fa37ba:
    bVar11 = bVar13;
    bVar10 = bVar12;
    bVar12 = false;
    local_120 = local_118;
    FVar21 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_128.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                   ,0x284);
        bVar11 = true;
        bVar10 = true;
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145fa37ba;
    local_120 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar12 = true;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cameras.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                          ,0x287,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->PendingComponentsHeap).ArrayNum != this->PendingCount) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PendingComponentsHeap.Num() == PendingCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                          ,0x28a,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->PendingCount == 0) goto LAB_145fa3c50;
  fVar27 = GGrassMapGuardBandMultiplier * GGrassCullDistanceScale;
  bVar13 = this->FirstNewPendingComponent == 0;
  if (fVar27 == this->LastMustHaveDistanceScale) {
    if (this->FirstNewPendingComponent != 0) {
      iVar15 = param_1->ArrayNum;
      pFVar20 = (param_1->AllocatorInstance).Data;
      fVar26 = GGrassMapCameraCutTranslationThreshold * GGrassMapCameraCutTranslationThreshold;
      pFVar1 = pFVar20 + (longlong)iVar15 * 0x18;
      while( true ) {
        if (param_1->ArrayNum != iVar15) {
          local_137 = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_137);
        }
        if (pFVar20 == pFVar1) goto LAB_145fa3873;
        local_f8 = &local_134;
        local_b8 = *(undefined8 *)&pFVar20->field_0x0;
        uStack_b0 = *(undefined8 *)(pFVar20 + 8);
        local_a8 = *(undefined8 *)(pFVar20 + 0x10);
        local_e8 = &local_b8;
        local_f0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FLandscapeGrassMapsBuilder::StartPrioritizedGrassMapGeneration'::__l29::<lambda_1>,double,UE::Math::TVector<double>_const_&>
                   ::Call;
        local_108._8_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::FindAnyInRadius'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&>
             ::Call;
        UE::Geometry::TPointHashGrid3<UE::Math::TVector<double>,double>::FindInRadiusHelper<1>
                  (&this->PreviousCameraHashGrid,
                   (TTuple<UE::Math::TVector<double>,double> *)local_a0,(TVector<double> *)pFVar20,
                   (double)GGrassMapCameraCutTranslationThreshold,
                   (TFunctionRef<double___cdecl(UE::Math::TVector<double>_const_&)> *)&local_f0,
                   (TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *)(local_108 + 8))
        ;
        if ((double)fVar26 < (double)local_a0._24_8_) break;
        pFVar20 = pFVar20 + 0x18;
      }
      goto LAB_145fa386e;
    }
  }
  else {
    this->LastMustHaveDistanceScale = fVar27;
LAB_145fa386e:
    bVar13 = true;
  }
LAB_145fa3873:
  dVar3 = (double)GGrassMapCameraCutTranslationThreshold;
  TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
           *)&this->PreviousCameraHashGrid);
  if (dVar3 <= __real_3e45798ee2308c3a) {
    dVar3 = __real_3e45798ee2308c3a;
  }
  (this->PreviousCameraHashGrid).Indexer.CellSize = dVar3;
  iVar15 = param_1->ArrayNum;
  pFVar20 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar20 + (longlong)iVar15 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar15) {
      local_136 = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_136);
    }
    if (pFVar20 == pFVar1) break;
    UE::Geometry::TWrapAroundGridIndexer3<double>::ToGrid
              (&(this->PreviousCameraHashGrid).Indexer,&local_d0,(TVector<double> *)pFVar20);
    local_e0 = &local_d0;
    local_d8 = pFVar20;
    TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,UE::Math::TVector<double>_const_&>_>
              ((TSet<TTuple<UE::Geometry::FVector3i,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Math::TVector<double>,1>,FDefaultSetAllocator>
                *)&this->PreviousCameraHashGrid,
               (TPairInitializer<UE::Geometry::FVector3i_const_&,UE::Math::TVector<double>_const_&>
                *)local_108,(bool *)&local_e0);
    pFVar20 = pFVar20 + 0x18;
  }
  iVar15 = CpuChannel->Enabled;
  if (bVar13) {
    if (-1 < iVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId691,"RecalculateAllPriorities",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                 ,0x2b3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId691);
    }
    iVar23 = (this->PendingComponentsHeap).ArrayNum;
    this_00 = (FPendingComponent *)(this->PendingComponentsHeap).AllocatorInstance.Data;
    pFVar25 = this_00 + iVar23;
    while( true ) {
      if ((this->PendingComponentsHeap).ArrayNum != iVar23) {
        local_135 = 0;
        `TCheckedPointerIterator<FLandscapeGrassMapsBuilder::FPendingComponent,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_135);
      }
      if (this_00 == pFVar25) break;
      FPendingComponent::UpdatePriorityDistance(this_00,param_1,fVar27);
      this_00 = this_00 + 1;
    }
  }
  else {
    if (-1 < iVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId699,"AmortizedPriorityUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                 ,699);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId699);
    }
    iVar23 = (this->PendingComponentsHeap).ArrayNum;
    if (this->FirstNewPendingComponent < iVar23) {
      if ((this->FirstNewPendingComponent < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("FirstNewPendingComponent >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                              ,0x2c0,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar24 = this->FirstNewPendingComponent;
      if ((int)uVar24 < (this->PendingComponentsHeap).ArrayNum) {
        do {
          uVar14 = 0;
          if ((int)uVar24 < (this->PendingComponentsHeap).ArrayNum) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FPendingComponent::UpdatePriorityDistance
                    ((FPendingComponent *)
                     ((this->PendingComponentsHeap).AllocatorInstance.Data +
                     (longlong)(int)uVar24 * 0x10),param_1,fVar27);
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < (this->PendingComponentsHeap).ArrayNum);
      }
    }
    else {
      this->FirstNewPendingComponent = iVar23;
    }
    iVar23 = 1;
    do {
      uVar24 = iVar23 + -1 + (iVar23 - 1U & this->PendingUpdateAmortizationCounter);
      if (this->FirstNewPendingComponent <= (int)uVar24) break;
      uVar14 = 0;
      if ((int)uVar24 < (this->PendingComponentsHeap).ArrayNum) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPendingComponent::UpdatePriorityDistance
                ((FPendingComponent *)
                 ((this->PendingComponentsHeap).AllocatorInstance.Data +
                 (longlong)(int)uVar24 * 0x10),param_1,fVar27);
      iVar23 = iVar23 * 2;
    } while (iVar23 < 0x10001);
    this->PendingUpdateAmortizationCounter = this->PendingUpdateAmortizationCounter + 1;
  }
  if (-1 < iVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_145fa3c50:
  this->FirstNewPendingComponent = 0x7fffffff;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId740,"Heapify",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x2e4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId740);
  }
  local_res18 = SUB41(param_2,0);
  AlgoImpl::
  HeapifyInternal<FLandscapeGrassMapsBuilder::FPendingComponent,int,FIdentityFunctor,TDereferenceWrapper<FLandscapeGrassMapsBuilder::FPendingComponent,TLess<FLandscapeGrassMapsBuilder::FPendingComponent>_>_>
            ((FPendingComponent *)(this->PendingComponentsHeap).AllocatorInstance.Data,
             (this->PendingComponentsHeap).ArrayNum,local_res18,
             (TLess<FLandscapeGrassMapsBuilder::FPendingComponent> *)local_133);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  dVar3 = __real_ffefffffffffffff;
  if (0 < param_2) {
    do {
      FVar21 = local_120;
      if ((this->PendingComponentsHeap).ArrayNum < 1) break;
      pFVar1 = (this->PendingComponentsHeap).AllocatorInstance.Data;
      pFVar5 = *(FComponentState **)pFVar1;
      dVar6 = *(double *)(pFVar1 + 8);
      if ((pFVar5->Stage != Pending) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("State->Stage == EComponentStage::Pending",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                              ,0x2ee,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((dVar6 == dVar3) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pending.PriorityKey != TNumericLimits<double>::Lowest()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                              ,0x2ef,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((param_3) && (FVar21 = local_120, 0.0 < dVar6)) break;
      if (((this->PendingComponentsHeap).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar23 = (this->PendingComponentsHeap).ArrayNum;
      pFVar1 = (this->PendingComponentsHeap).AllocatorInstance.Data;
      iVar15 = iVar23 + -1;
      if (1 < iVar15) {
        iVar15 = 1;
      }
      if (iVar15 != 0) {
        memmove(pFVar1,pFVar1 + (longlong)(iVar23 - iVar15) * 0x10,(longlong)iVar15 << 4);
      }
      pFVar1 = (this->PendingComponentsHeap).AllocatorInstance.Data;
      iVar23 = (this->PendingComponentsHeap).ArrayNum + -1;
      (this->PendingComponentsHeap).ArrayNum = iVar23;
      iVar15 = 0;
      if (1 < iVar23) {
        do {
          iVar4 = iVar15 * 2;
          iVar22 = iVar4 + 1;
          if (iVar4 + 2 < iVar23) {
            if (*(double *)(pFVar1 + (longlong)iVar22 * 0x10 + 8) <=
                *(double *)(pFVar1 + (longlong)iVar4 * 0x10 + 0x28) &&
                *(double *)(pFVar1 + (longlong)iVar4 * 0x10 + 0x28) !=
                *(double *)(pFVar1 + (longlong)iVar22 * 0x10 + 8)) {
              iVar22 = iVar4;
            }
            iVar22 = iVar22 + 1;
          }
          lVar19 = (longlong)iVar15;
          lVar18 = (longlong)iVar22;
          if (*(double *)(pFVar1 + lVar19 * 0x10 + 8) < *(double *)(pFVar1 + lVar18 * 0x10 + 8) ||
              *(double *)(pFVar1 + lVar19 * 0x10 + 8) == *(double *)(pFVar1 + lVar18 * 0x10 + 8))
          break;
          uVar7 = *(undefined8 *)(pFVar1 + lVar18 * 0x10 + 8);
          uVar8 = *(undefined8 *)(pFVar1 + lVar19 * 0x10);
          uVar9 = *(undefined8 *)(pFVar1 + lVar19 * 0x10 + 8);
          *(undefined8 *)(pFVar1 + lVar19 * 0x10) = *(undefined8 *)(pFVar1 + lVar18 * 0x10);
          *(undefined8 *)(pFVar1 + lVar19 * 0x10 + 8) = uVar7;
          *(undefined8 *)(pFVar1 + lVar18 * 0x10) = uVar8;
          *(undefined8 *)(pFVar1 + lVar18 * 0x10 + 8) = uVar9;
          iVar15 = iVar22;
        } while (iVar22 * 2 + 1 < iVar23);
      }
      pFVar5->bInPendingHeap = false;
      bVar13 = StartGrassMapGeneration(this,pFVar5,false,true);
      iVar15 = param_2 + -1;
      if (!bVar13) {
        iVar15 = param_2;
      }
      param_2 = iVar15;
      FVar21 = local_120;
    } while (0 < param_2);
  }
  if (((this->PendingComponentsHeap).ArrayNum != this->PendingCount) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PendingComponentsHeap.Num() == PendingCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                          ,0x304,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->TotalComponentsWaitingCount = (this->PendingComponentsHeap).ArrayNum;
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// StreamingToNotReady @ 145fa47e0

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
FLandscapeGrassMapsBuilder::StreamingToNotReady
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1)

{
  ULandscapeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res20;
  FString local_58;
  
  if ((this->StreamingCount < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x5e9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->StreamingCount = this->StreamingCount + -1;
  RemoveTextureStreamingRequests(this,param_1);
  param_1->Stage = NotReady;
  this->NotReadyCount = this->NotReadyCount + 1;
  if ((byte)LogGrass._0_1_ < 6) {
    param_1->TickCount = 0;
    return;
  }
  pUVar1 = param_1->Component;
  if (pUVar1 != (ULandscapeComponent *)0x0) {
    local_res20 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res20,&local_58);
  }
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
  if ((pUVar1 != (ULandscapeComponent *)0x0) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  param_1->TickCount = 0;
  return;
}

// TryFastpathsFromPending @ 145fa5d70

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
FLandscapeGrassMapsBuilder::TryFastpathsFromPending
          (FLandscapeGrassMapsBuilder *this,FComponentState *param_1,bool param_2)

{
  ULandscapeComponent *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ALandscapeProxy *pAVar4;
  FName local_res8;
  FString local_18;
  
  if ((param_1->Stage != Pending) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.Stage == EComponentStage::Pending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x597,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = param_1->Component;
  bVar2 = UWorld::IsGameWorld(this->World);
  if ((bVar2) &&
     (pAVar4 = ULandscapeComponent::GetLandscapeProxy(this_00),
     pAVar4->bDisableRuntimeGrassMapGeneration != false)) {
    if (5 < (byte)LogGrass._0_1_) {
      local_res8 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    PendingToNotReady(this,param_1);
    bVar2 = true;
  }
  else if ((this_00->GrassTypeSummary).bHasAnyGrass == false) {
    PendingToPopulatedFastPathNoGrass(this,param_1);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// UnregisterComponent @ 145fa73a0

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
FLandscapeGrassMapsBuilder::UnregisterComponent
          (FLandscapeGrassMapsBuilder *this,ULandscapeComponent *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *pTVar4;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (ULandscapeComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                         ,0x328,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar4 = TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
                   *)&this->ComponentStates,param_1);
  if ((pTVar4 != (TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*> *)0x0)
     && (puVar1 = *(undefined8 **)&pTVar4->field_0x8, puVar1 != (undefined8 *)0x0)) {
    if (5 < (byte)LogGrass._0_1_) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    *puVar1 = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    return;
  }
  if (5 < (byte)LogGrass._0_1_) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateTrackedComponents @ 145fa7fd0

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
FLandscapeGrassMapsBuilder::UpdateTrackedComponents
          (FLandscapeGrassMapsBuilder *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3,bool param_4,bool param_5,int param_6)

{
  TMap<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>_>
  *pTVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  ULandscapeComponent *pUVar5;
  FAsyncTask<FAsyncFetchTask> *pFVar6;
  FLandscapeGrassWeightExporter *pFVar7;
  FScriptContainerElement *pFVar8;
  FComponentState *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  void *pvVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_UpdateComponentGrassMaps> FVar21;
  longlong lVar22;
  FThreadSafeStaticStat<FStat_STAT_RemoveGrassInstances> FVar23;
  ULandscapeSubsystem *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ulonglong uVar24;
  int iVar25;
  FNameEntryId FVar26;
  FName FVar27;
  FName FVar28;
  uint uVar29;
  FNameEntryId FVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  bool bVar34;
  double dVar35;
  float fVar36;
  bool local_res20;
  FComponentState *local_180;
  FName local_178;
  FColor_u_0 local_170;
  FColor_u_0 local_16c;
  undefined4 local_168;
  FName local_160;
  FName local_150;
  FName local_148;
  FName local_140;
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  ULandscapeComponent *local_e8;
  ULandscapeComponent *local_e0;
  LARGE_INTEGER local_d8;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  undefined1 local_b0 [32];
  longlong local_90;
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  *pTStack_88;
  TBoxSphereBounds<double,double> local_80;
  
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId431,"FLandscapeGrassMapsBuilder::UpdateTrackedComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
               ,0x1af);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId431);
  }
  uVar33 = 0;
  FVar21 = StatPtr_STAT_UpdateComponentGrassMaps;
  if (StatPtr_STAT_UpdateComponentGrassMaps ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateComponentGrassMaps>)0x0) {
    pFVar20 = ::FName::FName(&local_c0,"STAT_UpdateComponentGrassMaps");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_UpdateComponentGrassMaps>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateComponentGrassMaps,*pFVar20
                        ,L"Update Component GrassMap ","STATGROUP_Foliage","STATCAT_Advanced",
                        L"Foliage",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar21;
  bVar13 = false;
  bVar12 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar16 = false;
  bVar15 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_145fa818e:
    bVar13 = bVar16;
    bVar12 = bVar15;
    bVar15 = false;
    local_148 = local_140;
    FVar28 = local_140;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_170.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_170._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_150.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                   ,0x1b0);
        bVar13 = true;
        bVar12 = true;
        bVar16 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145fa818e;
    local_148 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar15 = true;
  }
  pvVar14 = ThreadLocalStoragePointer;
  uVar24 = (ulonglong)_tls_index;
  this->bRenderCommandsQueuedByLastUpdate = false;
  local_res20 = false;
  lVar22 = *(longlong *)((longlong)pvVar14 + uVar24 * 8);
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FLandscapeGrassMapsBuilder::UpdateTrackedComponents'::__l2::
           _dynamic_atexit_destructor_for__StreamingStatesToProcess__);
    _Init_thread_footer(&::_TSS0);
  }
  StreamingStatesToProcess.ArrayNum = 0;
  if ((StreamingStatesToProcess.ArrayMax < 0) && (StreamingStatesToProcess.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&StreamingStatesToProcess.AllocatorInstance,0,
               &StreamingStatesToProcess.ArrayMax);
  }
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FLandscapeGrassMapsBuilder::UpdateTrackedComponents'::__l2::
           _dynamic_atexit_destructor_for__ComponentsToRemoveFoliageInstances__);
    _Init_thread_footer(&::_TSS1);
  }
  if (ComponentsToRemoveFoliageInstances.Elements._8_4_ !=
      ComponentsToRemoveFoliageInstances.Elements._52_4_) {
    TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>::
    UnhashElements(&ComponentsToRemoveFoliageInstances);
    ComponentsToRemoveFoliageInstances.Elements._8_4_ = 0;
    if ((int)ComponentsToRemoveFoliageInstances.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&ComponentsToRemoveFoliageInstances,0,
                 (int *)&ComponentsToRemoveFoliageInstances.Elements.field_0xc);
    }
    ComponentsToRemoveFoliageInstances.Elements._48_4_ = 0xffffffff;
    ComponentsToRemoveFoliageInstances.Elements._52_4_ = 0;
    ComponentsToRemoveFoliageInstances.Elements._40_4_ = 0;
  }
  pTVar1 = &this->ComponentStates;
  iVar25 = *(int *)&(this->ComponentStates).field_0x8 - *(int *)&(this->ComponentStates).field_0x34;
  if ((param_3 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxUpdatesThisFrame >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.h"
                          ,0xb7,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    uVar17 = (*pcVar10)();
    return (bool)uVar17;
  }
  if (param_3 < iVar25) {
    iVar31 = (this->AmortizedUpdate).LastIndex;
    (this->AmortizedUpdate).FirstIndex = iVar31;
    if (iVar31 < iVar25) {
      if ((iVar31 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("FirstIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.h"
                              ,0xc5,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
    }
    else {
      (this->AmortizedUpdate).FirstIndex = 0;
    }
    iVar25 = (this->AmortizedUpdate).FirstIndex + param_3;
  }
  else {
    (this->AmortizedUpdate).FirstIndex = 0;
  }
  (this->AmortizedUpdate).LastIndex = iVar25;
  UWorld::IsGameWorld(this->World);
  TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_b0,
             (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_f0 = 0;
  stack0xfffffffffffffee8 = local_b0._16_16_;
  local_128 = (longlong *)local_b0._0_8_;
  auStack_120._0_8_ = local_b0._8_8_;
  local_108 = local_90;
  pTStack_100 = pTStack_88;
  uVar24 = local_b0._24_8_ >> 0x20;
  local_f8 = (TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_b0._28_4_ < *(int *)(local_b0._16_8_ + 0x18)) {
    iVar25 = 1;
    uVar32 = uVar33;
    do {
      local_180 = *(FComponentState **)(*local_128 + 8 + (longlong)(int)uVar24 * 0x18);
      local_e0 = local_180->Component;
      local_180->TickCount = local_180->TickCount + param_6;
      iVar31 = (int)uVar32;
      if ((param_4) || (local_e0 == (ULandscapeComponent *)0x0)) {
LAB_145fa8683:
        bVar16 = CancelAndEvict(this,local_180,param_4);
        if (bVar16) {
          if (local_180->Component == (ULandscapeComponent *)0x0) {
            RemoveFromPendingComponentHeap(this,local_180);
            pFVar9 = local_180;
            pFVar6 = (local_180->AsyncFetchTask).Ptr;
            if (pFVar6 != (FAsyncTask<FAsyncFetchTask> *)0x0) {
              (**(code **)(pFVar6->_padding_ + 0x28))(pFVar6,1);
            }
            pFVar7 = (pFVar9->ActiveRender).Ptr;
            if (pFVar7 != (FLandscapeGrassWeightExporter *)0x0) {
              (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
            }
            pFVar8 = (pFVar9->TexturesToStream).AllocatorInstance.Data;
            if (pFVar8 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar8);
            }
            puVar2 = &(this->StatePoolAllocator).NumLive;
            *puVar2 = *puVar2 - 1;
            local_180->Component = (ULandscapeComponent *)(this->StatePoolAllocator).FreeList;
            (this->StatePoolAllocator).FreeList = (FreeListNode *)local_180;
            local_180 = (FComponentState *)0x0;
            TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_100,uStack_10c);
            iVar4 = (this->AmortizedUpdate).FirstIndex;
            local_f0 = CONCAT11(local_f0._1_1_,1);
            if (iVar31 < iVar4) {
              (this->AmortizedUpdate).FirstIndex = iVar4 + -1;
            }
            iVar4 = (this->AmortizedUpdate).LastIndex;
            if (iVar31 < iVar4) {
              (this->AmortizedUpdate).LastIndex = iVar4 + -1;
            }
            iVar31 = iVar31 + -1;
            if ((this->PendingCount < 1) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PendingCount > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                                    ,0x24f,L""), bVar16)) {
              pcVar10 = (code *)swi(3);
              uVar17 = (*pcVar10)();
              return (bool)uVar17;
            }
            this->PendingCount = this->PendingCount + -1;
          }
          else {
            TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
            ::Emplace<ULandscapeComponent_*_const_&>
                      (&ComponentsToRemoveFoliageInstances,&local_e8,(bool *)&local_e0);
          }
LAB_145fa878b:
          local_res20 = true;
        }
      }
      else {
        switch(local_180->Stage) {
        case Pending:
        case NotReady:
          break;
        case TextureStreaming:
          if (((StreamingStatesToProcess.AllocatorInstance.Data <=
                (FScriptContainerElement *)&local_180) &&
              ((FScriptContainerElement *)&local_180 <
               StreamingStatesToProcess.AllocatorInstance.Data +
               (longlong)StreamingStatesToProcess.ArrayMax * 8)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          if (StreamingStatesToProcess.ArrayNum == StreamingStatesToProcess.ArrayMax) {
            StreamingStatesToProcess.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&StreamingStatesToProcess.AllocatorInstance,
                            &StreamingStatesToProcess.ArrayMax);
          }
          lVar22 = (longlong)StreamingStatesToProcess.ArrayNum;
          StreamingStatesToProcess.ArrayNum = StreamingStatesToProcess.ArrayNum + 1;
          *(FComponentState **)(StreamingStatesToProcess.AllocatorInstance.Data + lVar22 * 8) =
               local_180;
          break;
        case Rendering:
          if (((local_180->ActiveRender).Ptr == (FLandscapeGrassWeightExporter *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("State->ActiveRender != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                                  ,0x1e8,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          bVar16 = FLandscapeGrassWeightExporter::CheckAndUpdateAsyncReadback
                             ((local_180->ActiveRender).Ptr,&this->bRenderCommandsQueuedByLastUpdate
                              ,4 < local_180->TickCount);
          if (!bVar16) break;
          if (GGrassMapUseAsyncFetch == 0) {
            PopulateGrassDataFromReadback(this,local_180);
          }
          else {
            LaunchAsyncFetchTask(this,local_180);
          }
          goto LAB_145fa878b;
        case AsyncFetch:
          pFVar6 = (local_180->AsyncFetchTask).Ptr;
          if ((pFVar6 == (FAsyncTask<FAsyncFetchTask> *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Task",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                                  ,0x202,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          if (((FThreadSafeCounter *)&pFVar6->_padding_)->Counter == 0) {
            FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar6,false);
            PopulateGrassDataFromAsyncFetchTask(this,local_180);
          }
          break;
        case GrassMapsPopulated:
          if (((this->AmortizedUpdate).FirstIndex <= iVar31) &&
             (iVar31 < (this->AmortizedUpdate).LastIndex)) {
            bVar16 = FLandscapeComponentGrassData::HasValidData((local_e0->GrassData).Object);
            pFVar9 = local_180;
            if (!bVar16) goto LAB_145fa8683;
            if (param_5) {
              if ((local_180->Stage != GrassMapsPopulated) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Stage == EComponentStage::GrassMapsPopulated",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                                      ,0x6ef,L""), bVar16)) {
                pcVar10 = (code *)swi(3);
                uVar17 = (*pcVar10)();
                return (bool)uVar17;
              }
              pUVar5 = pFVar9->Component;
              (**(code **)(pUVar5->_padding_ + 0x598))(pUVar5,&local_80,&pUVar5->_padding_);
              dVar35 = UE::Landscape::CalculateMinDistanceToCamerasSquared(param_1,&local_80);
              fVar36 = (float)((double)(GGrassMapGuardBandDiscardMultiplier *
                                       GGrassCullDistanceScale) *
                              (pFVar9->Component->GrassTypeSummary).MaxInstanceDiscardDistance);
              if (fVar36 * fVar36 < (float)dVar35) {
                if (5 < (byte)LogGrass._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGrass);
                }
                goto LAB_145fa8683;
              }
            }
          }
          break;
        default:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                              ,0x23b,L"");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
          goto LAB_145fa8683;
        }
      }
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      FVar28 = local_148;
      uVar24 = (ulonglong)uStack_10c;
      uVar32 = (ulonglong)(iVar31 + 1);
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
      uVar29 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (3 < uVar29) {
        uVar24 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_168 = (undefined4)lVar22;
        iVar25 = 1 << ((byte)lVar22 & 0x1f);
      }
      if (((0 < (int)uVar29) && (local_f8->HashSize < iVar25)) || (iVar25 < local_f8->HashSize)) {
        local_f8->HashSize = iVar25;
        TSet<TTuple<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*>,TDefaultMapHashableKeyFuncs<ULandscapeComponent_*,FLandscapeGrassMapsBuilder::FComponentState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  if (0 < StreamingStatesToProcess.ArrayNum) {
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId606,"StreamingStatesToProcess",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                 ,0x25e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId606);
    }
    iVar25 = this->RenderingCount;
    uVar24 = uVar33;
    while ((iVar25 < param_2 &&
           (uVar29 = (uint)uVar24, (int)uVar29 < StreamingStatesToProcess.ArrayNum))) {
      uVar19 = 0;
      if ((int)uVar29 < StreamingStatesToProcess.ArrayNum) {
        uVar19 = ~uVar29 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      pFVar9 = *(FComponentState **)(StreamingStatesToProcess.AllocatorInstance.Data + uVar33);
      if ((pFVar9->Stage != TextureStreaming) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("State->Stage == EComponentStage::TextureStreaming",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                              ,0x262,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        uVar17 = (*pcVar10)();
        return (bool)uVar17;
      }
      bVar18 = FComponentState::AreTexturesStreamedIn(pFVar9);
      if (bVar18) {
        KickOffRenderAndReadback(this,pFVar9);
        this->bRenderCommandsQueuedByLastUpdate = true;
        local_res20 = true;
      }
      uVar33 = uVar33 + 8;
      iVar25 = this->RenderingCount;
      uVar24 = (ulonglong)(uVar29 + 1);
    }
    StreamingStatesToProcess.ArrayNum = 0;
    if ((StreamingStatesToProcess.ArrayMax < 0) && (StreamingStatesToProcess.ArrayMax != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&StreamingStatesToProcess.AllocatorInstance,0,
                 &StreamingStatesToProcess.ArrayMax);
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FVar30.Value = 0;
  if ((int)(ComponentsToRemoveFoliageInstances.Elements._8_4_ -
           ComponentsToRemoveFoliageInstances.Elements._52_4_) < 1) goto LAB_145fa8bbe;
  FVar23 = StatPtr_STAT_RemoveGrassInstances;
  if (StatPtr_STAT_RemoveGrassInstances ==
      (FThreadSafeStaticStat<FStat_STAT_RemoveGrassInstances>)0x0) {
    pFVar20 = ::FName::FName(&local_b8,"STAT_RemoveGrassInstances");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_RemoveGrassInstances>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveGrassInstances,*pFVar20,
                        L"Remove Grass Instances","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar23;
  bVar16 = false;
  bVar18 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  FVar26 = FVar27.ComparisonIndex.Value;
  uVar29 = FVar27.Number;
  if ((FVar26.Value == 0) && (uVar29 == 0)) {
LAB_145fa8ad6:
    bVar11 = false;
    FVar27 = local_160;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_16c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_16c._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar16 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar26.Value;
        local_178.Number = uVar29;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                   ,0x27b);
        bVar16 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145fa8ad6;
    local_178.ComparisonIndex.Value = FVar26.Value;
    local_178.Number = uVar29;
    local_160 = FVar27;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar11 = true;
    FVar30.Value = local_160.ComparisonIndex.Value;
  }
  this_00 = UWorld::GetSubsystem<ULandscapeSubsystem>(this->World);
  ULandscapeSubsystem::RemoveGrassInstances(this_00,&ComponentsToRemoveFoliageInstances);
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_d0.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      local_d0.NameAndInfo.Index.Value = FVar30.Value;
      QueryPerformanceCounter(&local_d8);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_d0);
      piVar3 = &this_01->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_145fa8bbe:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_res20;
}

