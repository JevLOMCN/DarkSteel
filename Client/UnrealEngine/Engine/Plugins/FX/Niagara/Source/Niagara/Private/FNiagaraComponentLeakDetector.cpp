// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ReportLeaks @ 149063b00

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
FNiagaraComponentLeakDetector::ReportLeaks(FNiagaraComponentLeakDetector *this,UWorld *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  if ((NiagaraComponentLeakDetectorPrivate::GEnabled) &&
     (NiagaraComponentLeakDetectorPrivate::GGCReport != 0)) {
    TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
                *)&this->PerSystemData);
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_10 = 0;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar3 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
                *)&this->PerSystemData;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        NiagaraComponentLeakDetectorPrivate::ReportLeak
                  (PostGC,param_1,*(FName *)(*local_48 + (longlong)(int)uVar3 * 0x48),
                   (FSystemData *)(*local_48 + 8 + (longlong)(int)uVar3 * 0x48));
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar3 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar4 < 4) {
          iVar2 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar2 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
          local_18->HashSize = iVar2;
          TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

// Tick @ 14906a9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraComponentLeakDetector::Tick(FNiagaraComponentLeakDetector *this,UWorld *param_1)

{
  longlong lVar1;
  FSystemData *pFVar2;
  uint uVar3;
  UActorComponent *this_00;
  UNiagaraSystem *this_01;
  undefined1 *puVar4;
  FNiagaraSystemInstanceController *this_02;
  FName FVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  int iVar11;
  ENiagaraExecutionState EVar12;
  UClass *pUVar13;
  UWorld *pUVar14;
  UNiagaraEffectType *this_03;
  FNiagaraSystemScalabilitySettings *pFVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  byte bVar19;
  int iVar20;
  TKeyInitializer<FName_const_&> local_res18;
  LARGE_INTEGER local_res20;
  TObjectIterator<UNiagaraComponent> local_d8;
  longlong local_c0;
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
  *local_78;
  undefined2 local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  if (NiagaraComponentLeakDetectorPrivate::GEnabled) {
    QueryPerformanceCounter(&local_res20);
    dVar7 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (this->NextUpdateTime <= dVar7) {
      local_d8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ObjectArray.ArrayNum = 0;
      local_d8.ObjectArray.ArrayMax = 0;
      local_d8.Index = 0xffffffff;
      this->NextUpdateTime = (double)NiagaraComponentLeakDetectorPrivate::GTickDeltaSeconds + dVar7;
      EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar13 = UNiagaraComponent::StaticClass();
      GetObjectsOfClass(pUVar13,&local_d8.ObjectArray,true,RF_ClassDefaultObject,
                        EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UNiagaraComponent>::Advance(&local_d8);
      iVar20 = 1;
      while( true ) {
        lVar18 = (longlong)local_d8.Index;
        if ((local_d8.Index < 0) || (local_d8.ObjectArray.ArrayNum <= local_d8.Index)) break;
        uVar10 = 0;
        if (local_d8.Index < local_d8.ObjectArray.ArrayNum) {
          uVar10 = (uint)~local_d8.Index >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = *(UActorComponent **)(local_d8.ObjectArray.AllocatorInstance.Data + lVar18 * 8);
        if ((this_00 != (UActorComponent *)0x0) &&
           (this_01 = (UNiagaraSystem *)this_00[7]._padding_, this_01 != (UNiagaraSystem *)0x0)) {
          pUVar14 = this_00->WorldPrivate;
          if (pUVar14 == (UWorld *)0x0) {
            pUVar14 = UActorComponent::GetWorld_Uncached(this_00);
          }
          if ((pUVar14 == param_1) && ((char)this_00[8].AssetUserData.ArrayNum != '\x04')) {
            lVar18 = this_01->_padding_;
            local_c0 = lVar18;
            uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar18);
            if (*(int *)&(this->PerSystemData).field_0x8 !=
                *(int *)&(this->PerSystemData).field_0x34) {
              puVar4 = *(undefined1 **)&(this->PerSystemData).field_0x40;
              puVar17 = &(this->PerSystemData).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar17 = puVar4;
              }
              iVar11 = *(int *)(puVar17 +
                               (ulonglong)
                               (*(int *)&(this->PerSystemData).field_0x48 - 1U &
                               (int)((ulonglong)lVar18 >> 0x20) + uVar10) * 4);
              if (iVar11 != -1) {
                do {
                  lVar1 = *(longlong *)&this->PerSystemData + (longlong)iVar11 * 0x48;
                  if (*(longlong *)(*(longlong *)&this->PerSystemData + (longlong)iVar11 * 0x48) ==
                      lVar18) {
                    lVar18 = lVar1 + 8;
                    if (lVar1 == 0) {
                      lVar18 = 0;
                    }
                    if (lVar18 != 0) goto LAB_14906ac03;
                    break;
                  }
                  iVar11 = *(int *)(lVar1 + 0x40);
                } while (iVar11 != -1);
              }
            }
            this_03 = UNiagaraSystem::GetEffectType(this_01);
            local_b8[0] = &local_c0;
            TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<FName_const_&>_>
                      ((TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
                        *)&this->PerSystemData,&local_res18,(bool *)local_b8);
            lVar18 = *(longlong *)&this->PerSystemData +
                     ((longlong)(int)local_res18.Key * 9 + 1) * 8;
            if (this_03 == (UNiagaraEffectType *)0x0) {
              iVar11 = 0;
            }
            else {
              pFVar15 = UNiagaraEffectType::GetActiveSystemScalabilitySettings(this_03);
              iVar11 = pFVar15->MaxSystemInstances;
            }
            *(int *)(lVar18 + 0x34) = iVar11;
LAB_14906ac03:
            bVar19 = this_00->bIsActive;
            if (((bVar19 == 0) ||
                (this_02 = (FNiagaraSystemInstanceController *)
                           this_00[8].PrimaryComponentTick._padding_,
                this_02 == (FNiagaraSystemInstanceController *)0x0)) ||
               (EVar12 = FNiagaraSystemInstanceController::GetActualExecutionState<>(this_02),
               EVar12 != Active)) {
              iVar11 = 0;
            }
            else {
              iVar11 = 1;
            }
            *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + 1;
            *(int *)(lVar18 + 0x20) = *(int *)(lVar18 + 0x20) + (uint)bVar19;
            *(int *)(lVar18 + 0x2c) = *(int *)(lVar18 + 0x2c) + iVar11;
          }
        }
        TObjectIterator<UNiagaraComponent>::Advance(&local_d8);
      }
      if (local_d8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.ObjectArray.AllocatorInstance.Data);
      }
      TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_68,
                 (TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
                  *)&this->PerSystemData);
      stack0xffffffffffffff68 = local_68._16_16_;
      local_a8 = (longlong *)local_68._0_8_;
      auStack_a0._0_8_ = local_68._8_8_;
      local_70 = 0;
      local_88 = local_48;
      pTStack_80 = pTStack_40;
      uVar16 = local_68._24_8_ >> 0x20;
      local_78 = (TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
                  *)&this->PerSystemData;
      if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
        do {
          lVar18 = (longlong)(int)uVar16 * 9 + 1;
          pFVar2 = (FSystemData *)(*local_a8 + lVar18 * 8);
          FVar5 = *(FName *)(*local_a8 + -8 + lVar18 * 8);
          uVar3 = pFVar2->TotalCurrCount;
          pFVar2->TotalCurrCount = 0;
          pFVar2->TotalGrowthCounter =
               pFVar2->TotalGrowthCounter + (uint)(pFVar2->TotalPrevCount < uVar3);
          uVar10 = pFVar2->TotalPrevCount;
          pFVar2->TotalPrevCount = uVar3;
          pFVar2->TotalShrinkCounter = pFVar2->TotalShrinkCounter + (uint)(uVar3 < uVar10);
          uVar3 = pFVar2->ActiveCurrCount;
          pFVar2->ActiveCurrCount = 0;
          pFVar2->ActiveGrowthCounter =
               pFVar2->ActiveGrowthCounter + (uint)(pFVar2->ActivePrevCount < uVar3);
          uVar10 = pFVar2->ActivePrevCount;
          pFVar2->ActivePrevCount = uVar3;
          iVar11 = pFVar2->ScalabilityCurrActiveExecState;
          pFVar2->ActiveShrinkCounter = pFVar2->ActiveShrinkCounter + (uint)(uVar3 < uVar10);
          pFVar2->ScalabilityCurrActiveExecState = 0;
          if (iVar11 < pFVar2->ScalabilityMaxActiveExecState) {
            iVar11 = pFVar2->ScalabilityMaxActiveExecState;
          }
          pFVar2->ScalabilityMaxActiveExecState = iVar11;
          NiagaraComponentLeakDetectorPrivate::ReportLeak(Immediate,param_1,FVar5,pFVar2);
          uStack_90 = uStack_90 & ~auStack_a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
          uVar16 = (ulonglong)uStack_8c;
        } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
        if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
          uVar10 = *(int *)&(local_78->Elements).field_0x8 -
                   *(int *)&(local_78->Elements).field_0x34;
          if (3 < uVar10) {
            uVar16 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar18 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar20 = 1 << ((byte)lVar18 & 0x1f);
          }
          if (((0 < (int)uVar10) && (local_78->HashSize < iVar20)) || (iVar20 < local_78->HashSize))
          {
            local_78->HashSize = iVar20;
            TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
            ::Rehash(local_78);
          }
        }
      }
    }
  }
  return;
}

