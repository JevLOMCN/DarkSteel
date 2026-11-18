// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 24

// FlushQueuedReferences @ 1420410d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  bool *pbVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar4;
  FReferenceArray *pFVar5;
  FPermanentObjectPoolExtents *pFVar6;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar7;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar8;
  FWorkerContext *pFVar9;
  ulonglong *puVar10;
  UObject *pUVar11;
  int iVar12;
  code *pcVar13;
  byte bVar14;
  undefined8 uVar15;
  ulong64 uVar16;
  EInternalObjectFlags EVar17;
  undefined1 auVar18 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *pTVar19;
  bool bVar20;
  ulonglong uVar21;
  FUObjectItem *pFVar22;
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  UObject **ppUVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  FReferenceArray *pFVar26;
  longlong lVar27;
  undefined4 *puVar28;
  uint *puVar29;
  TAddAdapter<1> *pTVar30;
  UObject **ppUVar31;
  undefined8 *puVar32;
  uint uVar33;
  FResolvedMutableReference *pFVar34;
  FImmutableReference *pFVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong *plVar38;
  ulonglong uVar39;
  FMutableReference *pFVar40;
  FReferenceArray *pFVar41;
  undefined1 (*pauVar42) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *this_01;
  uint uVar43;
  uint uVar44;
  int iVar45;
  bool bVar46;
  FPermanentObjectPoolExtents FVar49;
  FPermanentObjectPoolExtents FVar50;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<1> local_ad20;
  TAddAdapter<1> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<1> local_ad00;
  TAddAdapter<1> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  FImmutableReference *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  uint local_4448 [2];
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x1420410fa;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar43 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar49.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          ppUVar31 = (UObject **)FVar49.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar49.Size - uVar33;
          local_ace8 = ppUVar31 + (int)uVar33;
          uStack_ace0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar47._8_4_ = uStack_ace0;
          auVar47._0_8_ = local_ace8;
          FVar49.Size._4_4_ = uStack_acdc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar23 = ppUVar31 + (int)uVar33;
          for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + 1) {
            pFVar40->Object = ppUVar31;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar47._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      ppUVar23 = auVar47._0_8_;
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = ppUVar23 + (int)uVar43;
      for (; ppUVar23 != ppUVar31; ppUVar23 = ppUVar23 + 1) {
        pFVar40->Object = ppUVar23;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_142041491;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_142041491:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar38 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar27 = local_acc8._0_8_[1];
      *plVar38 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar38 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = local_ad48._0_8_;
      uVar44 = local_ad48._8_4_;
      if (uVar33 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar33,uVar44);
        iVar12 = uVar33 - uVar44;
        bVar20 = uVar33 == uVar44;
        do {
          auVar18 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar44 = uVar44 - uVar33;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar33;
          local_ad48._8_4_ = uVar44;
          ppUVar31 = ppUVar31 + iVar45 * uVar33;
          local_ad48._0_8_ = ppUVar31;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar23 = (UObject **)local_ad68.Address;
              ppUVar23 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar33) * 8);
              ppUVar23 = ppUVar23 + (local_ad68.Size >> 0x20)) {
            pFVar40->Object = ppUVar23;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
          local_acb8 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar44);
          iVar12 = 0x20 - uVar44;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar44 || bVar20);
      }
      auVar18 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar44) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar23 = ppUVar31 + uVar44 * auVar18._12_4_;
      for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + (auVar18._8_8_ >> 0x20)) {
        pFVar40->Object = ppUVar31;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar44;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac58[1] = 0;
  puVar29 = &(this_00->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar43 != 0) {
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21] =
           local_ac58[uVar21] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar40->Object - local_ad68.Address) <<
           ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21 + 1] =
           local_ac58[uVar21 + 1] |
           (ulonglong)(*pFVar40->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = local_ac58[1] & local_ac58[0];
  uVar33 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar37 = uVar39 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar44]._padding_ =
               (longlong)*ppUVar31;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar44 * 0x10 + 0x48) =
               ppUVar31;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad30[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar4 = &(this->KillableBatcher).ValidatedReferences;
      pTVar4->Num = pTVar4->Num + uVar33;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
      ::DrainValidatedFull(this_00);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar36 = uVar39 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar33]._padding_ = (longlong)*ppUVar31;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar33 * 0x10 + 0x48) =
           ppUVar31;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad30[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num + uVar43;
  (this->KillableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar43);
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_142041b29;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar29 = local_a848;
      uVar24 = uVar39;
      do {
        plVar38 = &pFVar34->_padding_;
        pFVar34 = pFVar34 + 1;
        *puVar29 = *(uint *)(*plVar38 + 0xc);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_142041bf8;
    }
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_142041b29:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_a848;
    pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)(pFVar34->_padding_ + 0xc);
      pFVar34 = pFVar34 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_142041bf8:
    puVar32 = auStack_8840;
    puVar29 = local_a848;
    do {
      uVar43 = *puVar29;
      uVar33 = uVar43 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar43) || ((int)uVar43 < 0)) &&
         (local_ad78 = uVar43,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar43;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar33];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar24 = local_ad58;
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (uVar43 & 0xffff);
      puVar32 = puVar32 + 2;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
    uVar39 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_142042023;
      uVar39 = local_ad58 & 0xffffffff;
      do {
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
      uVar39 = local_ad58 & 0xffffffff;
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        uVar39 = uVar39 - 1;
        puVar28 = puVar28 + 4;
      } while (uVar39 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        puVar28 = puVar28 + 4;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
    uVar39 = (longlong)this_00 - (longlong)local_8848;
    pauVar42 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar24 & 0xffffffff;
    local_ad58 = uVar39;
    do {
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar9 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar42[0x50] + uVar39 + 8);
      uVar43 = SUB164(*pauVar42,0);
      if ((uVar43 >> 0x15 & 1) == 0) {
        puVar10 = *(ulonglong **)(*pauVar42 + 8);
        lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar39 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_142041f01:
          if ((~(byte)(uVar43 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
            pFVar22 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
            if ((pFVar22 == (FUObjectItem *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            do {
              uVar24 = *puVar10;
              uVar43 = (uint)(uVar24 >> 0x20);
              uVar39 = local_ad58;
              if ((uVar43 >> 0x17 & 1) != 0) goto LAB_142042013;
              if (((ulonglong)puVar10 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar39 = *puVar10;
              if (uVar24 == uVar39) {
                *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar24 | 0x80000000000000;
              }
              EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar24 != uVar39);
            lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar39 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar36 = (pFVar22->field0_0x0).FlagsAndRefCount;
                bVar20 = uVar24 == uVar36;
                if (bVar20) {
                  (pFVar22->field0_0x0).FlagsAndRefCount = uVar24 & ~(lVar27 << 0x20);
                  uVar36 = uVar24;
                }
                UNLOCK();
                uVar24 = uVar36;
              } while (!bVar20);
              LOCK();
              (pFVar22->field0_0x0).FlagsAndRefCount =
                   (pFVar22->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) != Borrowed) {
                uVar43 = pFVar22->ClusterRootIndex;
                local_ad18.Queue = &pFVar9->ObjectsToSerialize;
                pTVar30 = &local_ad18;
                goto LAB_142042007;
              }
            }
          }
        }
        else {
          uVar24 = *puVar10;
          do {
            LOCK();
            uVar36 = *puVar10;
            bVar20 = uVar24 == uVar36;
            if (bVar20) {
              *puVar10 = uVar24 & ~(lVar27 << 0x20);
              uVar36 = uVar24;
            }
            UNLOCK();
            uVar24 = uVar36;
          } while (!bVar20);
          LOCK();
          *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) == Borrowed) goto LAB_142041f01;
          pFVar1 = &pFVar9->ObjectsToSerialize;
          if ((uVar43 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockAsync(pFVar1);
              uVar39 = local_ad58;
            }
            goto LAB_142042013;
          }
          pTVar30 = &local_ad20;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_142042007:
          MarkReferencedClustersAsReachable<1,UE::GC::TAddAdapter<1>_>(~uVar43,pTVar30);
          uVar39 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_142042013:
      pauVar42 = pauVar42 + 1;
      lVar27 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar27;
    } while (lVar27 != 0);
  }
LAB_142042023:
  pTVar19 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar43 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (pTVar19->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar50 = local_ad68;
      auVar48 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar50.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar32 = (undefined8 *)FVar50.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar50.Size - uVar33;
          local_acd8 = puVar32 + (int)uVar33;
          uStack_acd0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar48._8_4_ = uStack_acd0;
          auVar48._0_8_ = local_acd8;
          FVar50.Size._4_4_ = uStack_accc;
          FVar50._0_12_ = auVar48;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar25 = puVar32 + (int)uVar33;
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar32 != puVar25; puVar32 = puVar32 + 1) {
            pFVar35->Object = (UObject *)*puVar32;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar33;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                      *)this_01);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar48._8_4_;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar25 = auVar48._0_8_;
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = puVar25 + (int)uVar43;
      for (; puVar25 != puVar32; puVar25 = puVar25 + 1) {
        pFVar35->Object = (UObject *)*puVar25;
        pFVar35 = pFVar35 + 1;
      }
      uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar43;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar43;
      if ((uVar43 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar19->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_1420423df;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_1420423df:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar38);
      lVar27 = local_aca8._0_8_[1];
      *plVar38 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar38) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar44 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = local_ad48._0_8_;
      uVar33 = local_ad48._8_4_;
      if (uVar44 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar44,uVar33);
        iVar12 = uVar44 - uVar33;
        bVar20 = uVar44 == uVar33;
        do {
          auVar18 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar33 = uVar33 - uVar44;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar44;
          local_ad48._8_4_ = uVar33;
          puVar32 = puVar32 + iVar45 * uVar44;
          local_ad48._0_8_ = puVar32;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar44) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar25 = (undefined8 *)local_ad68.Address;
              puVar25 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar44) * 8);
              puVar25 = puVar25 + (local_ad68.Size >> 0x20)) {
            pFVar35->Object = (UObject *)*puVar25;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar44;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                      *)this_01);
          uVar44 = 0x20;
          local_ac98 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar33);
          iVar12 = 0x20 - uVar33;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar33 || bVar20);
      }
      auVar18 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar25 = puVar32 + uVar33 * auVar18._12_4_;
      for (; puVar32 != puVar25; puVar32 = puVar32 + (auVar18._8_8_ >> 0x20)) {
        pFVar35->Object = (UObject *)*puVar32;
        pFVar35 = pFVar35 + 1;
      }
      uVar33 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar33;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar33;
      if ((uVar33 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac60 = (FImmutableReference *)0x0;
  puVar29 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac68 = 0;
  pFVar6 = &(pTVar19->ImmutableBatcher).PermanentPool;
  uVar16 = pFVar6->Address;
  uVar24 = (pTVar19->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar6;
  if (uVar43 != 0) {
    uVar36 = uVar39;
    uVar21 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar37 = uVar21 >> 6;
      uVar33 = (int)uVar36 + 1;
      uVar21 = uVar21 + 1;
      (&local_ac68)[uVar37] =
           (&local_ac68)[uVar37] |
           (ulonglong)(uVar24 <= (longlong)pFVar35->Object - uVar16) << ((byte)uVar36 & 0x3f);
      uVar36 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      (&local_ac60)[uVar21] =
           (FImmutableReference *)
           ((ulonglong)(&local_ac60)[uVar21] |
           (ulonglong)(pFVar35->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f));
      uVar24 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = (ulonglong)local_ac60 & local_ac68;
  uVar33 = 0x400 - (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          uVar37 = uVar39 >> 6;
          (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar44].Object =
               (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad10[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar8 = &(pTVar19->ImmutableBatcher).ValidatedReferences;
      pTVar8->Num = pTVar8->Num + uVar33;
      if (((pTVar19->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                  *)this_01);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      uVar36 = uVar39 >> 6;
      (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar33].Object =
           (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad10[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num + uVar43;
  (pTVar19->ImmutableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_142042a97;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
      puVar29 = local_9848;
      uVar24 = uVar39;
      do {
        ppUVar31 = &pFVar35->Object;
        pFVar35 = pFVar35 + 1;
        *puVar29 = *(uint *)&(*ppUVar31)->field_0xc;
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_142042b69;
    }
LAB_142042f57:
    (pTVar19->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_142042a97:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_9848;
    pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)&pFVar35->Object->field_0xc;
      pFVar35 = pFVar35 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_142042b69:
    puVar32 = auStack_4440;
    puVar29 = local_9848;
    uVar24 = uVar39;
    do {
      uVar33 = *puVar29;
      uVar44 = uVar33 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar33) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar33) || ((int)uVar33 < 0)) &&
         (local_ad78 = uVar33,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar44) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar44;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar44];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (local_ad58 & 0xffffffff);
      puVar32 = puVar32 + 2;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    if (uVar43 < 0x41) {
      uVar24 = uVar39;
      if (uVar43 == 0) goto LAB_142042f57;
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 4;
      } while (uVar24 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        puVar29 = puVar29 + 4;
        uVar24 = uVar24 - 1;
        this_01 = local_ad38;
      } while (uVar24 != 0);
    }
    local_ac60 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                    *)this_01)->ValidatedReferences).Entries;
    local_ac68 = uVar39;
    puVar29 = local_4448;
    do {
      pUVar11 = local_ac60->Object;
      uVar15 = *(undefined8 *)puVar29;
      puVar10 = *(ulonglong **)(puVar29 + 2);
      pFVar9 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
                 *)this_01)->Context;
      pbVar2 = &(pFVar9->Stats).bFoundGarbageRef;
      *pbVar2 = (bool)(*pbVar2 | (byte)(*puVar29 >> 0x15) & 1);
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_142042e4a:
        if ((~(byte)((uint)uVar15 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
          pFVar22 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
          do {
            uVar39 = *puVar10;
            uVar43 = (uint)(uVar39 >> 0x20);
            if ((uVar43 >> 0x17 & 1) != 0) goto LAB_142042f2e;
            if (((ulonglong)puVar10 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar24 = *puVar10;
            if (uVar39 == uVar24) {
              *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar39 | 0x80000000000000;
            }
            EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar39 != uVar24);
          lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar39 = (pFVar22->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              bVar20 = uVar39 == uVar24;
              if (bVar20) {
                (pFVar22->field0_0x0).FlagsAndRefCount = uVar39 & ~(lVar27 << 0x20);
                uVar24 = uVar39;
              }
              UNLOCK();
              uVar39 = uVar24;
            } while (!bVar20);
            LOCK();
            (pFVar22->field0_0x0).FlagsAndRefCount =
                 (pFVar22->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) != Borrowed) {
              uVar43 = pFVar22->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar9->ObjectsToSerialize;
              pTVar30 = local_acf8;
              goto LAB_142042f27;
            }
          }
        }
      }
      else {
        uVar39 = *puVar10;
        do {
          LOCK();
          uVar24 = *puVar10;
          bVar20 = uVar39 == uVar24;
          if (bVar20) {
            *puVar10 = uVar39 & ~(lVar27 << 0x20);
            uVar24 = uVar39;
          }
          UNLOCK();
          uVar39 = uVar24;
        } while (!bVar20);
        LOCK();
        *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) == Borrowed) goto LAB_142042e4a;
        pFVar1 = &pFVar9->ObjectsToSerialize;
        if (((uint)uVar15 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar11;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(pFVar1);
          }
        }
        else {
          pTVar30 = &local_ad00;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_142042f27:
          MarkReferencedClustersAsReachable<1,UE::GC::TAddAdapter<1>_>(~uVar43,pTVar30);
        }
      }
LAB_142042f2e:
      puVar29 = puVar29 + 4;
      local_ac60 = local_ac60 + 1;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushQueuedReferences @ 142042fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar3;
  FReferenceArray *pFVar4;
  FPermanentObjectPoolExtents *pFVar5;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar6;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar7;
  FWorkerContext *pFVar8;
  ulonglong *puVar9;
  UObject *pUVar10;
  int iVar11;
  code *pcVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong64 uVar15;
  EInternalObjectFlags EVar16;
  undefined1 auVar17 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *pTVar18;
  bool bVar19;
  ulonglong uVar20;
  FUObjectItem *pFVar21;
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  UObject **ppUVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  FReferenceArray *pFVar25;
  longlong lVar26;
  undefined4 *puVar27;
  uint *puVar28;
  TAddAdapter<4> *pTVar29;
  UObject **ppUVar30;
  undefined8 *puVar31;
  uint uVar32;
  FResolvedMutableReference *pFVar33;
  FImmutableReference *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  FMutableReference *pFVar39;
  FReferenceArray *pFVar40;
  undefined1 (*pauVar41) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *this_01;
  uint uVar42;
  uint uVar43;
  int iVar44;
  bool bVar45;
  FPermanentObjectPoolExtents FVar48;
  FPermanentObjectPoolExtents FVar49;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<4> local_ad20;
  TAddAdapter<4> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<4> local_ad00;
  TAddAdapter<4> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  undefined8 *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  undefined8 local_4448;
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x142042fca;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar42 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar48 = local_ad68;
      auVar46 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar48.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          ppUVar30 = (UObject **)FVar48.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar48.Size - uVar32;
          local_ace8 = ppUVar30 + (int)uVar32;
          uStack_ace0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar46._8_4_ = uStack_ace0;
          auVar46._0_8_ = local_ace8;
          FVar48.Size._4_4_ = uStack_acdc;
          FVar48._0_12_ = auVar46;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar22 = ppUVar30 + (int)uVar32;
          for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + 1) {
            pFVar39->Object = ppUVar30;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar46._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      ppUVar22 = auVar46._0_8_;
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = ppUVar22 + (int)uVar42;
      for (; ppUVar22 != ppUVar30; ppUVar22 = ppUVar22 + 1) {
        pFVar39->Object = ppUVar22;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar42;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_142043361;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_142043361:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar37 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar26 = local_acc8._0_8_[1];
      *plVar37 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar37 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = local_ad48._0_8_;
      uVar43 = local_ad48._8_4_;
      if (uVar32 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar32,uVar43);
        iVar11 = uVar32 - uVar43;
        bVar19 = uVar32 == uVar43;
        do {
          auVar17 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar43 = uVar43 - uVar32;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar32;
          local_ad48._8_4_ = uVar43;
          ppUVar30 = ppUVar30 + iVar44 * uVar32;
          local_ad48._0_8_ = ppUVar30;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar22 = (UObject **)local_ad68.Address;
              ppUVar22 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar32) * 8);
              ppUVar22 = ppUVar22 + (local_ad68.Size >> 0x20)) {
            pFVar39->Object = ppUVar22;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
          local_acb8 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar43);
          iVar11 = 0x20 - uVar43;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar43 || bVar19);
      }
      auVar17 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar22 = ppUVar30 + uVar43 * auVar17._12_4_;
      for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + (auVar17._8_8_ >> 0x20)) {
        pFVar39->Object = ppUVar30;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac58[1] = 0;
  puVar28 = &(this_00->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar42 != 0) {
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20] =
           local_ac58[uVar20] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar39->Object - local_ad68.Address) <<
           ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20 + 1] =
           local_ac58[uVar20 + 1] |
           (ulonglong)(*pFVar39->Object != (UObject *)0x0) << ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
  }
  uVar35 = local_ac58[1] & local_ac58[0];
  uVar32 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar36 = uVar38 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar43]._padding_ =
               (longlong)*ppUVar30;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar43 * 0x10 + 0x48) =
               ppUVar30;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad30[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar3 = &(this->KillableBatcher).ValidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar32;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
      ::DrainValidatedFull(this_00);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar35 = uVar38 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar32]._padding_ = (longlong)*ppUVar30;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar32 * 0x10 + 0x48) =
           ppUVar30;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad30[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num + uVar42;
  (this->KillableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar42);
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_1420439f9;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar28 = local_a848;
      uVar23 = uVar38;
      do {
        plVar37 = &pFVar33->_padding_;
        pFVar33 = pFVar33 + 1;
        *puVar28 = *(uint *)(*plVar37 + 0xc);
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_142043ac8;
    }
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_1420439f9:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_a848;
    pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)(pFVar33->_padding_ + 0xc);
      pFVar33 = pFVar33 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_142043ac8:
    puVar31 = auStack_8840;
    puVar28 = local_a848;
    do {
      uVar42 = *puVar28;
      uVar32 = uVar42 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar42) || ((int)uVar42 < 0)) &&
         (local_ad78 = uVar42,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar42) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar42;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar32];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar23 = local_ad58;
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (uVar42 & 0xffff);
      puVar31 = puVar31 + 2;
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
    uVar38 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_142043ef3;
      uVar38 = local_ad58 & 0xffffffff;
      do {
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
      uVar38 = local_ad58 & 0xffffffff;
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        uVar38 = uVar38 - 1;
        puVar27 = puVar27 + 4;
      } while (uVar38 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        puVar27 = puVar27 + 4;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    uVar38 = (longlong)this_00 - (longlong)local_8848;
    pauVar41 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar23 & 0xffffffff;
    local_ad58 = uVar38;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar8 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar41[0x50] + uVar38 + 8);
      uVar42 = SUB164(*pauVar41,0);
      if ((uVar42 >> 0x15 & 1) == 0) {
        puVar9 = *(ulonglong **)(*pauVar41 + 8);
        lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar38 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_142043dd1:
          if ((~(byte)(uVar42 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
            pFVar21 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
            if ((pFVar21 == (FUObjectItem *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            do {
              uVar23 = *puVar9;
              uVar42 = (uint)(uVar23 >> 0x20);
              uVar38 = local_ad58;
              if ((uVar42 >> 0x17 & 1) != 0) goto LAB_142043ee3;
              if (((ulonglong)puVar9 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar38 = *puVar9;
              if (uVar23 == uVar38) {
                *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar23 | 0x80000000000000;
              }
              EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar23 != uVar38);
            lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar38 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar35 = (pFVar21->field0_0x0).FlagsAndRefCount;
                bVar19 = uVar23 == uVar35;
                if (bVar19) {
                  (pFVar21->field0_0x0).FlagsAndRefCount = uVar23 & ~(lVar26 << 0x20);
                  uVar35 = uVar23;
                }
                UNLOCK();
                uVar23 = uVar35;
              } while (!bVar19);
              LOCK();
              (pFVar21->field0_0x0).FlagsAndRefCount =
                   (pFVar21->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) != Borrowed) {
                uVar42 = pFVar21->ClusterRootIndex;
                local_ad18.Queue = &pFVar8->ObjectsToSerialize;
                pTVar29 = &local_ad18;
                goto LAB_142043ed7;
              }
            }
          }
        }
        else {
          uVar23 = *puVar9;
          do {
            LOCK();
            uVar35 = *puVar9;
            bVar19 = uVar23 == uVar35;
            if (bVar19) {
              *puVar9 = uVar23 & ~(lVar26 << 0x20);
              uVar35 = uVar23;
            }
            UNLOCK();
            uVar23 = uVar35;
          } while (!bVar19);
          LOCK();
          *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) == Borrowed) goto LAB_142043dd1;
          pFVar1 = &pFVar8->ObjectsToSerialize;
          if ((uVar42 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockSync(pFVar1);
              uVar38 = local_ad58;
            }
            goto LAB_142043ee3;
          }
          pTVar29 = &local_ad20;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_142043ed7:
          MarkReferencedClustersAsReachable<4,UE::GC::TAddAdapter<4>_>(~uVar42,pTVar29);
          uVar38 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_142043ee3:
      pauVar41 = pauVar41 + 1;
      lVar26 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar26;
    } while (lVar26 != 0);
  }
LAB_142043ef3:
  pTVar18 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar42 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (pTVar18->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar49.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar31 = (undefined8 *)FVar49.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar49.Size - uVar32;
          local_acd8 = puVar31 + (int)uVar32;
          uStack_acd0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar47._8_4_ = uStack_acd0;
          auVar47._0_8_ = local_acd8;
          FVar49.Size._4_4_ = uStack_accc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar24 = puVar31 + (int)uVar32;
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar31 != puVar24; puVar31 = puVar31 + 1) {
            pFVar34->Object = (UObject *)*puVar31;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar32;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                      *)this_01);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar47._8_4_;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar24 = auVar47._0_8_;
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = puVar24 + (int)uVar42;
      for (; puVar24 != puVar31; puVar24 = puVar24 + 1) {
        pFVar34->Object = (UObject *)*puVar24;
        pFVar34 = pFVar34 + 1;
      }
      uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar42;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar42;
      if ((uVar42 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar18->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_1420442af;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_1420442af:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar37);
      lVar26 = local_aca8._0_8_[1];
      *plVar37 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar37) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar43 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = local_ad48._0_8_;
      uVar32 = local_ad48._8_4_;
      if (uVar43 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar43,uVar32);
        iVar11 = uVar43 - uVar32;
        bVar19 = uVar43 == uVar32;
        do {
          auVar17 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar32 = uVar32 - uVar43;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar43;
          local_ad48._8_4_ = uVar32;
          puVar31 = puVar31 + iVar44 * uVar43;
          local_ad48._0_8_ = puVar31;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar24 = (undefined8 *)local_ad68.Address;
              puVar24 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar43) * 8);
              puVar24 = puVar24 + (local_ad68.Size >> 0x20)) {
            pFVar34->Object = (UObject *)*puVar24;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar43;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                      *)this_01);
          uVar43 = 0x20;
          local_ac98 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar32);
          iVar11 = 0x20 - uVar32;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar32 || bVar19);
      }
      auVar17 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar24 = puVar31 + uVar32 * auVar17._12_4_;
      for (; puVar31 != puVar24; puVar31 = puVar31 + (auVar17._8_8_ >> 0x20)) {
        pFVar34->Object = (UObject *)*puVar31;
        pFVar34 = pFVar34 + 1;
      }
      uVar32 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar32;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar32;
      if ((uVar32 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac60 = (undefined8 *)0x0;
  puVar28 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac68 = 0;
  pFVar5 = &(pTVar18->ImmutableBatcher).PermanentPool;
  uVar15 = pFVar5->Address;
  uVar23 = (pTVar18->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar5;
  if (uVar42 != 0) {
    uVar35 = uVar38;
    uVar20 = uVar38;
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar36 = uVar20 >> 6;
      uVar32 = (int)uVar35 + 1;
      uVar20 = uVar20 + 1;
      (&local_ac68)[uVar36] =
           (&local_ac68)[uVar36] |
           (ulonglong)(uVar23 <= (longlong)pFVar34->Object - uVar15) << ((byte)uVar35 & 0x3f);
      uVar35 = (ulonglong)uVar32;
      pFVar34 = pFVar34 + 1;
    } while (uVar32 < uVar42);
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    uVar23 = uVar38;
    uVar35 = uVar38;
    do {
      uVar20 = uVar35 >> 6;
      ppUVar30 = &pFVar34->Object;
      pFVar34 = pFVar34 + 1;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      (&local_ac60)[uVar20] =
           (undefined8 *)
           ((ulonglong)(&local_ac60)[uVar20] |
           (ulonglong)(*ppUVar30 != (UObject *)0x0) << ((byte)uVar23 & 0x3f));
      uVar23 = (ulonglong)uVar32;
    } while (uVar32 < uVar42);
  }
  uVar35 = (ulonglong)local_ac60 & local_ac68;
  uVar32 = 0x400 - (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          uVar36 = uVar38 >> 6;
          (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar43].Object =
               (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad10[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar7 = &(pTVar18->ImmutableBatcher).ValidatedReferences;
      pTVar7->Num = pTVar7->Num + uVar32;
      if (((pTVar18->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                  *)this_01);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      uVar35 = uVar38 >> 6;
      (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar32].Object =
           (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad10[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num + uVar42;
  (pTVar18->ImmutableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_142044967;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
      puVar28 = local_9848;
      uVar23 = uVar38;
      do {
        ppUVar30 = &pFVar34->Object;
        pFVar34 = pFVar34 + 1;
        *puVar28 = *(uint *)&(*ppUVar30)->field_0xc;
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_142044a39;
    }
LAB_142044e17:
    (pTVar18->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_142044967:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_9848;
    pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)&pFVar34->Object->field_0xc;
      pFVar34 = pFVar34 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_142044a39:
    puVar31 = auStack_4440;
    puVar28 = local_9848;
    uVar23 = uVar38;
    do {
      uVar32 = *puVar28;
      uVar43 = uVar32 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar32) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar32) || ((int)uVar32 < 0)) &&
         (local_ad78 = uVar32,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar43;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar43];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (local_ad58 & 0xffffffff);
      puVar31 = puVar31 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    if (uVar42 < 0x41) {
      uVar23 = uVar38;
      if (uVar42 == 0) goto LAB_142044e17;
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        uVar23 = uVar23 - 1;
        puVar31 = puVar31 + 2;
      } while (uVar23 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        puVar31 = puVar31 + 2;
        uVar23 = uVar23 - 1;
        this_01 = local_ad38;
      } while (uVar23 != 0);
    }
    local_ac60 = &local_4448;
    local_ac68 = uVar38;
    pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                 *)this_01)->ValidatedReferences).Entries;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      uVar14 = *local_ac60;
      puVar9 = (ulonglong *)local_ac60[1];
      lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar10 = pFVar34->Object;
      pFVar8 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
                 *)this_01)->Context;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_142044d0a:
        if ((~(byte)((uint)uVar14 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
          pFVar21 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
          do {
            uVar38 = *puVar9;
            uVar42 = (uint)(uVar38 >> 0x20);
            if ((uVar42 >> 0x17 & 1) != 0) goto LAB_142044dee;
            if (((ulonglong)puVar9 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar23 = *puVar9;
            if (uVar38 == uVar23) {
              *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar38 | 0x80000000000000;
            }
            EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar38 != uVar23);
          lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar38 = (pFVar21->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              bVar19 = uVar38 == uVar23;
              if (bVar19) {
                (pFVar21->field0_0x0).FlagsAndRefCount = uVar38 & ~(lVar26 << 0x20);
                uVar23 = uVar38;
              }
              UNLOCK();
              uVar38 = uVar23;
            } while (!bVar19);
            LOCK();
            (pFVar21->field0_0x0).FlagsAndRefCount =
                 (pFVar21->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) != Borrowed) {
              uVar42 = pFVar21->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar8->ObjectsToSerialize;
              pTVar29 = local_acf8;
              goto LAB_142044de7;
            }
          }
        }
      }
      else {
        uVar38 = *puVar9;
        do {
          LOCK();
          uVar23 = *puVar9;
          bVar19 = uVar38 == uVar23;
          if (bVar19) {
            *puVar9 = uVar38 & ~(lVar26 << 0x20);
            uVar23 = uVar38;
          }
          UNLOCK();
          uVar38 = uVar23;
        } while (!bVar19);
        LOCK();
        *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) == Borrowed) goto LAB_142044d0a;
        pFVar1 = &pFVar8->ObjectsToSerialize;
        if (((uint)uVar14 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar10;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(pFVar1);
          }
        }
        else {
          pTVar29 = &local_ad00;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_142044de7:
          MarkReferencedClustersAsReachable<4,UE::GC::TAddAdapter<4>_>(~uVar42,pTVar29);
        }
      }
LAB_142044dee:
      pFVar34 = pFVar34 + 1;
      local_ac60 = local_ac60 + 2;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushQueuedReferences @ 142044e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar3;
  FReferenceArray *pFVar4;
  FPermanentObjectPoolExtents *pFVar5;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar6;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar7;
  FWorkerContext *pFVar8;
  ulonglong *puVar9;
  UObject *pUVar10;
  int iVar11;
  code *pcVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong64 uVar15;
  EInternalObjectFlags EVar16;
  undefined1 auVar17 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *pTVar18;
  bool bVar19;
  ulonglong uVar20;
  FUObjectItem *pFVar21;
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  UObject **ppUVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  FReferenceArray *pFVar25;
  longlong lVar26;
  undefined4 *puVar27;
  uint *puVar28;
  TAddAdapter<5> *pTVar29;
  UObject **ppUVar30;
  undefined8 *puVar31;
  uint uVar32;
  FResolvedMutableReference *pFVar33;
  FImmutableReference *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  FMutableReference *pFVar39;
  FReferenceArray *pFVar40;
  undefined1 (*pauVar41) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *this_01;
  uint uVar42;
  uint uVar43;
  int iVar44;
  bool bVar45;
  FPermanentObjectPoolExtents FVar48;
  FPermanentObjectPoolExtents FVar49;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<5> local_ad20;
  TAddAdapter<5> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<5> local_ad00;
  TAddAdapter<5> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  undefined8 *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  undefined8 local_4448;
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x142044e8a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar42 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar48 = local_ad68;
      auVar46 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar48.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          ppUVar30 = (UObject **)FVar48.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar48.Size - uVar32;
          local_ace8 = ppUVar30 + (int)uVar32;
          uStack_ace0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar46._8_4_ = uStack_ace0;
          auVar46._0_8_ = local_ace8;
          FVar48.Size._4_4_ = uStack_acdc;
          FVar48._0_12_ = auVar46;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar22 = ppUVar30 + (int)uVar32;
          for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + 1) {
            pFVar39->Object = ppUVar30;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar46._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      ppUVar22 = auVar46._0_8_;
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = ppUVar22 + (int)uVar42;
      for (; ppUVar22 != ppUVar30; ppUVar22 = ppUVar22 + 1) {
        pFVar39->Object = ppUVar22;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar42;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_142045221;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_142045221:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar37 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar26 = local_acc8._0_8_[1];
      *plVar37 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar37 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = local_ad48._0_8_;
      uVar43 = local_ad48._8_4_;
      if (uVar32 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar32,uVar43);
        iVar11 = uVar32 - uVar43;
        bVar19 = uVar32 == uVar43;
        do {
          auVar17 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar43 = uVar43 - uVar32;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar32;
          local_ad48._8_4_ = uVar43;
          ppUVar30 = ppUVar30 + iVar44 * uVar32;
          local_ad48._0_8_ = ppUVar30;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar22 = (UObject **)local_ad68.Address;
              ppUVar22 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar32) * 8);
              ppUVar22 = ppUVar22 + (local_ad68.Size >> 0x20)) {
            pFVar39->Object = ppUVar22;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
          local_acb8 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar43);
          iVar11 = 0x20 - uVar43;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar43 || bVar19);
      }
      auVar17 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar22 = ppUVar30 + uVar43 * auVar17._12_4_;
      for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + (auVar17._8_8_ >> 0x20)) {
        pFVar39->Object = ppUVar30;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac58[1] = 0;
  puVar28 = &(this_00->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar42 != 0) {
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20] =
           local_ac58[uVar20] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar39->Object - local_ad68.Address) <<
           ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20 + 1] =
           local_ac58[uVar20 + 1] |
           (ulonglong)(*pFVar39->Object != (UObject *)0x0) << ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
  }
  uVar35 = local_ac58[1] & local_ac58[0];
  uVar32 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar36 = uVar38 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar43]._padding_ =
               (longlong)*ppUVar30;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar43 * 0x10 + 0x48) =
               ppUVar30;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad30[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar3 = &(this->KillableBatcher).ValidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar32;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
      ::DrainValidatedFull(this_00);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar35 = uVar38 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar32]._padding_ = (longlong)*ppUVar30;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar32 * 0x10 + 0x48) =
           ppUVar30;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad30[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num + uVar42;
  (this->KillableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar42);
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_1420458b9;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar28 = local_a848;
      uVar23 = uVar38;
      do {
        plVar37 = &pFVar33->_padding_;
        pFVar33 = pFVar33 + 1;
        *puVar28 = *(uint *)(*plVar37 + 0xc);
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_142045988;
    }
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_1420458b9:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_a848;
    pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)(pFVar33->_padding_ + 0xc);
      pFVar33 = pFVar33 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_142045988:
    puVar31 = auStack_8840;
    puVar28 = local_a848;
    do {
      uVar42 = *puVar28;
      uVar32 = uVar42 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar42) || ((int)uVar42 < 0)) &&
         (local_ad78 = uVar42,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar42) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar42;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar32];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar23 = local_ad58;
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (uVar42 & 0xffff);
      puVar31 = puVar31 + 2;
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
    uVar38 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_142045db3;
      uVar38 = local_ad58 & 0xffffffff;
      do {
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
      uVar38 = local_ad58 & 0xffffffff;
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        uVar38 = uVar38 - 1;
        puVar27 = puVar27 + 4;
      } while (uVar38 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        puVar27 = puVar27 + 4;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    uVar38 = (longlong)this_00 - (longlong)local_8848;
    pauVar41 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar23 & 0xffffffff;
    local_ad58 = uVar38;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar8 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar41[0x50] + uVar38 + 8);
      uVar42 = SUB164(*pauVar41,0);
      if ((uVar42 >> 0x15 & 1) == 0) {
        puVar9 = *(ulonglong **)(*pauVar41 + 8);
        lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar38 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_142045c91:
          if ((~(byte)(uVar42 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
            pFVar21 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
            if ((pFVar21 == (FUObjectItem *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            do {
              uVar23 = *puVar9;
              uVar42 = (uint)(uVar23 >> 0x20);
              uVar38 = local_ad58;
              if ((uVar42 >> 0x17 & 1) != 0) goto LAB_142045da3;
              if (((ulonglong)puVar9 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar38 = *puVar9;
              if (uVar23 == uVar38) {
                *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar23 | 0x80000000000000;
              }
              EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar23 != uVar38);
            lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar38 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar35 = (pFVar21->field0_0x0).FlagsAndRefCount;
                bVar19 = uVar23 == uVar35;
                if (bVar19) {
                  (pFVar21->field0_0x0).FlagsAndRefCount = uVar23 & ~(lVar26 << 0x20);
                  uVar35 = uVar23;
                }
                UNLOCK();
                uVar23 = uVar35;
              } while (!bVar19);
              LOCK();
              (pFVar21->field0_0x0).FlagsAndRefCount =
                   (pFVar21->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) != Borrowed) {
                uVar42 = pFVar21->ClusterRootIndex;
                local_ad18.Queue = &pFVar8->ObjectsToSerialize;
                pTVar29 = &local_ad18;
                goto LAB_142045d97;
              }
            }
          }
        }
        else {
          uVar23 = *puVar9;
          do {
            LOCK();
            uVar35 = *puVar9;
            bVar19 = uVar23 == uVar35;
            if (bVar19) {
              *puVar9 = uVar23 & ~(lVar26 << 0x20);
              uVar35 = uVar23;
            }
            UNLOCK();
            uVar23 = uVar35;
          } while (!bVar19);
          LOCK();
          *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) == Borrowed) goto LAB_142045c91;
          pFVar1 = &pFVar8->ObjectsToSerialize;
          if ((uVar42 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockAsync(pFVar1);
              uVar38 = local_ad58;
            }
            goto LAB_142045da3;
          }
          pTVar29 = &local_ad20;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_142045d97:
          MarkReferencedClustersAsReachable<5,UE::GC::TAddAdapter<5>_>(~uVar42,pTVar29);
          uVar38 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_142045da3:
      pauVar41 = pauVar41 + 1;
      lVar26 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar26;
    } while (lVar26 != 0);
  }
LAB_142045db3:
  pTVar18 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar42 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (pTVar18->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar49.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar31 = (undefined8 *)FVar49.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar49.Size - uVar32;
          local_acd8 = puVar31 + (int)uVar32;
          uStack_acd0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar47._8_4_ = uStack_acd0;
          auVar47._0_8_ = local_acd8;
          FVar49.Size._4_4_ = uStack_accc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar24 = puVar31 + (int)uVar32;
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar31 != puVar24; puVar31 = puVar31 + 1) {
            pFVar34->Object = (UObject *)*puVar31;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar32;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                      *)this_01);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar47._8_4_;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar24 = auVar47._0_8_;
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = puVar24 + (int)uVar42;
      for (; puVar24 != puVar31; puVar24 = puVar24 + 1) {
        pFVar34->Object = (UObject *)*puVar24;
        pFVar34 = pFVar34 + 1;
      }
      uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar42;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar42;
      if ((uVar42 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar18->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_14204616f;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204616f:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar37);
      lVar26 = local_aca8._0_8_[1];
      *plVar37 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar37) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar43 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = local_ad48._0_8_;
      uVar32 = local_ad48._8_4_;
      if (uVar43 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar43,uVar32);
        iVar11 = uVar43 - uVar32;
        bVar19 = uVar43 == uVar32;
        do {
          auVar17 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar32 = uVar32 - uVar43;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar43;
          local_ad48._8_4_ = uVar32;
          puVar31 = puVar31 + iVar44 * uVar43;
          local_ad48._0_8_ = puVar31;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar24 = (undefined8 *)local_ad68.Address;
              puVar24 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar43) * 8);
              puVar24 = puVar24 + (local_ad68.Size >> 0x20)) {
            pFVar34->Object = (UObject *)*puVar24;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar43;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                      *)this_01);
          uVar43 = 0x20;
          local_ac98 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar32);
          iVar11 = 0x20 - uVar32;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar32 || bVar19);
      }
      auVar17 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar24 = puVar31 + uVar32 * auVar17._12_4_;
      for (; puVar31 != puVar24; puVar31 = puVar31 + (auVar17._8_8_ >> 0x20)) {
        pFVar34->Object = (UObject *)*puVar31;
        pFVar34 = pFVar34 + 1;
      }
      uVar32 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar32;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar32;
      if ((uVar32 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac60 = (undefined8 *)0x0;
  puVar28 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac68 = 0;
  pFVar5 = &(pTVar18->ImmutableBatcher).PermanentPool;
  uVar15 = pFVar5->Address;
  uVar23 = (pTVar18->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar5;
  if (uVar42 != 0) {
    uVar35 = uVar38;
    uVar20 = uVar38;
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar36 = uVar20 >> 6;
      uVar32 = (int)uVar35 + 1;
      uVar20 = uVar20 + 1;
      (&local_ac68)[uVar36] =
           (&local_ac68)[uVar36] |
           (ulonglong)(uVar23 <= (longlong)pFVar34->Object - uVar15) << ((byte)uVar35 & 0x3f);
      uVar35 = (ulonglong)uVar32;
      pFVar34 = pFVar34 + 1;
    } while (uVar32 < uVar42);
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    uVar23 = uVar38;
    uVar35 = uVar38;
    do {
      uVar20 = uVar35 >> 6;
      ppUVar30 = &pFVar34->Object;
      pFVar34 = pFVar34 + 1;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      (&local_ac60)[uVar20] =
           (undefined8 *)
           ((ulonglong)(&local_ac60)[uVar20] |
           (ulonglong)(*ppUVar30 != (UObject *)0x0) << ((byte)uVar23 & 0x3f));
      uVar23 = (ulonglong)uVar32;
    } while (uVar32 < uVar42);
  }
  uVar35 = (ulonglong)local_ac60 & local_ac68;
  uVar32 = 0x400 - (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          uVar36 = uVar38 >> 6;
          (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar43].Object =
               (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad10[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar7 = &(pTVar18->ImmutableBatcher).ValidatedReferences;
      pTVar7->Num = pTVar7->Num + uVar32;
      if (((pTVar18->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                  *)this_01);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      uVar35 = uVar38 >> 6;
      (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar32].Object =
           (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad10[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num + uVar42;
  (pTVar18->ImmutableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_142046827;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
      puVar28 = local_9848;
      uVar23 = uVar38;
      do {
        ppUVar30 = &pFVar34->Object;
        pFVar34 = pFVar34 + 1;
        *puVar28 = *(uint *)&(*ppUVar30)->field_0xc;
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_1420468f9;
    }
LAB_142046cd7:
    (pTVar18->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_142046827:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_9848;
    pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)&pFVar34->Object->field_0xc;
      pFVar34 = pFVar34 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_1420468f9:
    puVar31 = auStack_4440;
    puVar28 = local_9848;
    uVar23 = uVar38;
    do {
      uVar32 = *puVar28;
      uVar43 = uVar32 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar32) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar32) || ((int)uVar32 < 0)) &&
         (local_ad78 = uVar32,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar43;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar43];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (local_ad58 & 0xffffffff);
      puVar31 = puVar31 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    if (uVar42 < 0x41) {
      uVar23 = uVar38;
      if (uVar42 == 0) goto LAB_142046cd7;
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        uVar23 = uVar23 - 1;
        puVar31 = puVar31 + 2;
      } while (uVar23 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        puVar31 = puVar31 + 2;
        uVar23 = uVar23 - 1;
        this_01 = local_ad38;
      } while (uVar23 != 0);
    }
    local_ac60 = &local_4448;
    local_ac68 = uVar38;
    pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                 *)this_01)->ValidatedReferences).Entries;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      uVar14 = *local_ac60;
      puVar9 = (ulonglong *)local_ac60[1];
      lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar10 = pFVar34->Object;
      pFVar8 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
                 *)this_01)->Context;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_142046bca:
        if ((~(byte)((uint)uVar14 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
          pFVar21 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
          do {
            uVar38 = *puVar9;
            uVar42 = (uint)(uVar38 >> 0x20);
            if ((uVar42 >> 0x17 & 1) != 0) goto LAB_142046cae;
            if (((ulonglong)puVar9 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar23 = *puVar9;
            if (uVar38 == uVar23) {
              *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar38 | 0x80000000000000;
            }
            EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar38 != uVar23);
          lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar38 = (pFVar21->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              bVar19 = uVar38 == uVar23;
              if (bVar19) {
                (pFVar21->field0_0x0).FlagsAndRefCount = uVar38 & ~(lVar26 << 0x20);
                uVar23 = uVar38;
              }
              UNLOCK();
              uVar38 = uVar23;
            } while (!bVar19);
            LOCK();
            (pFVar21->field0_0x0).FlagsAndRefCount =
                 (pFVar21->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) != Borrowed) {
              uVar42 = pFVar21->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar8->ObjectsToSerialize;
              pTVar29 = local_acf8;
              goto LAB_142046ca7;
            }
          }
        }
      }
      else {
        uVar38 = *puVar9;
        do {
          LOCK();
          uVar23 = *puVar9;
          bVar19 = uVar38 == uVar23;
          if (bVar19) {
            *puVar9 = uVar38 & ~(lVar26 << 0x20);
            uVar23 = uVar38;
          }
          UNLOCK();
          uVar38 = uVar23;
        } while (!bVar19);
        LOCK();
        *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) == Borrowed) goto LAB_142046bca;
        pFVar1 = &pFVar8->ObjectsToSerialize;
        if (((uint)uVar14 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar10;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(pFVar1);
          }
        }
        else {
          pTVar29 = &local_ad00;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_142046ca7:
          MarkReferencedClustersAsReachable<5,UE::GC::TAddAdapter<5>_>(~uVar42,pTVar29);
        }
      }
LAB_142046cae:
      pFVar34 = pFVar34 + 1;
      local_ac60 = local_ac60 + 2;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushQueuedReferences @ 142046d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  bool *pbVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar4;
  FReferenceArray *pFVar5;
  FPermanentObjectPoolExtents *pFVar6;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar7;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar8;
  FWorkerContext *pFVar9;
  ulonglong *puVar10;
  UObject *pUVar11;
  int iVar12;
  code *pcVar13;
  byte bVar14;
  undefined8 uVar15;
  ulong64 uVar16;
  EInternalObjectFlags EVar17;
  undefined1 auVar18 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *pTVar19;
  bool bVar20;
  ulonglong uVar21;
  FUObjectItem *pFVar22;
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  UObject **ppUVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  FReferenceArray *pFVar26;
  longlong lVar27;
  undefined4 *puVar28;
  uint *puVar29;
  TAddAdapter<8> *pTVar30;
  UObject **ppUVar31;
  undefined8 *puVar32;
  uint uVar33;
  FResolvedMutableReference *pFVar34;
  FImmutableReference *pFVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong *plVar38;
  ulonglong uVar39;
  FMutableReference *pFVar40;
  FReferenceArray *pFVar41;
  undefined1 (*pauVar42) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *this_01;
  uint uVar43;
  uint uVar44;
  int iVar45;
  bool bVar46;
  FPermanentObjectPoolExtents FVar49;
  FPermanentObjectPoolExtents FVar50;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<8> local_ad20;
  TAddAdapter<8> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<8> local_ad00;
  TAddAdapter<8> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  FImmutableReference *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  uint local_4448 [2];
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x142046d4a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar43 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar49.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          ppUVar31 = (UObject **)FVar49.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar49.Size - uVar33;
          local_ace8 = ppUVar31 + (int)uVar33;
          uStack_ace0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar47._8_4_ = uStack_ace0;
          auVar47._0_8_ = local_ace8;
          FVar49.Size._4_4_ = uStack_acdc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar23 = ppUVar31 + (int)uVar33;
          for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + 1) {
            pFVar40->Object = ppUVar31;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar47._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      ppUVar23 = auVar47._0_8_;
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = ppUVar23 + (int)uVar43;
      for (; ppUVar23 != ppUVar31; ppUVar23 = ppUVar23 + 1) {
        pFVar40->Object = ppUVar23;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_1420470e1;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_1420470e1:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar38 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar27 = local_acc8._0_8_[1];
      *plVar38 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar38 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = local_ad48._0_8_;
      uVar44 = local_ad48._8_4_;
      if (uVar33 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar33,uVar44);
        iVar12 = uVar33 - uVar44;
        bVar20 = uVar33 == uVar44;
        do {
          auVar18 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar44 = uVar44 - uVar33;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar33;
          local_ad48._8_4_ = uVar44;
          ppUVar31 = ppUVar31 + iVar45 * uVar33;
          local_ad48._0_8_ = ppUVar31;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar23 = (UObject **)local_ad68.Address;
              ppUVar23 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar33) * 8);
              ppUVar23 = ppUVar23 + (local_ad68.Size >> 0x20)) {
            pFVar40->Object = ppUVar23;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
          local_acb8 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar44);
          iVar12 = 0x20 - uVar44;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar44 || bVar20);
      }
      auVar18 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar44) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar23 = ppUVar31 + uVar44 * auVar18._12_4_;
      for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + (auVar18._8_8_ >> 0x20)) {
        pFVar40->Object = ppUVar31;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar44;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac58[1] = 0;
  puVar29 = &(this_00->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar43 != 0) {
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21] =
           local_ac58[uVar21] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar40->Object - local_ad68.Address) <<
           ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21 + 1] =
           local_ac58[uVar21 + 1] |
           (ulonglong)(*pFVar40->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = local_ac58[1] & local_ac58[0];
  uVar33 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar37 = uVar39 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar44]._padding_ =
               (longlong)*ppUVar31;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar44 * 0x10 + 0x48) =
               ppUVar31;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad30[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar4 = &(this->KillableBatcher).ValidatedReferences;
      pTVar4->Num = pTVar4->Num + uVar33;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
      ::DrainValidatedFull(this_00);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar36 = uVar39 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar33]._padding_ = (longlong)*ppUVar31;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar33 * 0x10 + 0x48) =
           ppUVar31;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad30[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num + uVar43;
  (this->KillableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar43);
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_142047779;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar29 = local_a848;
      uVar24 = uVar39;
      do {
        plVar38 = &pFVar34->_padding_;
        pFVar34 = pFVar34 + 1;
        *puVar29 = *(uint *)(*plVar38 + 0xc);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_142047848;
    }
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_142047779:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_a848;
    pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)(pFVar34->_padding_ + 0xc);
      pFVar34 = pFVar34 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_142047848:
    puVar32 = auStack_8840;
    puVar29 = local_a848;
    do {
      uVar43 = *puVar29;
      uVar33 = uVar43 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar43) || ((int)uVar43 < 0)) &&
         (local_ad78 = uVar43,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar43;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar33];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar24 = local_ad58;
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (uVar43 & 0xffff);
      puVar32 = puVar32 + 2;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
    uVar39 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_142047c73;
      uVar39 = local_ad58 & 0xffffffff;
      do {
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
      uVar39 = local_ad58 & 0xffffffff;
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        uVar39 = uVar39 - 1;
        puVar28 = puVar28 + 4;
      } while (uVar39 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        puVar28 = puVar28 + 4;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
    uVar39 = (longlong)this_00 - (longlong)local_8848;
    pauVar42 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar24 & 0xffffffff;
    local_ad58 = uVar39;
    do {
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar9 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar42[0x50] + uVar39 + 8);
      uVar43 = SUB164(*pauVar42,0);
      if ((uVar43 >> 0x15 & 1) == 0) {
        puVar10 = *(ulonglong **)(*pauVar42 + 8);
        lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar39 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_142047b51:
          if ((~(byte)(uVar43 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
            pFVar22 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
            if ((pFVar22 == (FUObjectItem *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            do {
              uVar24 = *puVar10;
              uVar43 = (uint)(uVar24 >> 0x20);
              uVar39 = local_ad58;
              if ((uVar43 >> 0x17 & 1) != 0) goto LAB_142047c63;
              if (((ulonglong)puVar10 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar39 = *puVar10;
              if (uVar24 == uVar39) {
                *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar24 | 0x80000000000000;
              }
              EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar24 != uVar39);
            lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar39 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar36 = (pFVar22->field0_0x0).FlagsAndRefCount;
                bVar20 = uVar24 == uVar36;
                if (bVar20) {
                  (pFVar22->field0_0x0).FlagsAndRefCount = uVar24 & ~(lVar27 << 0x20);
                  uVar36 = uVar24;
                }
                UNLOCK();
                uVar24 = uVar36;
              } while (!bVar20);
              LOCK();
              (pFVar22->field0_0x0).FlagsAndRefCount =
                   (pFVar22->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) != Borrowed) {
                uVar43 = pFVar22->ClusterRootIndex;
                local_ad18.Queue = &pFVar9->ObjectsToSerialize;
                pTVar30 = &local_ad18;
                goto LAB_142047c57;
              }
            }
          }
        }
        else {
          uVar24 = *puVar10;
          do {
            LOCK();
            uVar36 = *puVar10;
            bVar20 = uVar24 == uVar36;
            if (bVar20) {
              *puVar10 = uVar24 & ~(lVar27 << 0x20);
              uVar36 = uVar24;
            }
            UNLOCK();
            uVar24 = uVar36;
          } while (!bVar20);
          LOCK();
          *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) == Borrowed) goto LAB_142047b51;
          pFVar1 = &pFVar9->ObjectsToSerialize;
          if ((uVar43 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockSync(pFVar1);
              uVar39 = local_ad58;
            }
            goto LAB_142047c63;
          }
          pTVar30 = &local_ad20;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_142047c57:
          MarkReferencedClustersAsReachable<8,UE::GC::TAddAdapter<8>_>(~uVar43,pTVar30);
          uVar39 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_142047c63:
      pauVar42 = pauVar42 + 1;
      lVar27 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar27;
    } while (lVar27 != 0);
  }
LAB_142047c73:
  pTVar19 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar43 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (pTVar19->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar50 = local_ad68;
      auVar48 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar50.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar32 = (undefined8 *)FVar50.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar50.Size - uVar33;
          local_acd8 = puVar32 + (int)uVar33;
          uStack_acd0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar48._8_4_ = uStack_acd0;
          auVar48._0_8_ = local_acd8;
          FVar50.Size._4_4_ = uStack_accc;
          FVar50._0_12_ = auVar48;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar25 = puVar32 + (int)uVar33;
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar32 != puVar25; puVar32 = puVar32 + 1) {
            pFVar35->Object = (UObject *)*puVar32;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar33;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                      *)this_01);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar48._8_4_;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar25 = auVar48._0_8_;
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = puVar25 + (int)uVar43;
      for (; puVar25 != puVar32; puVar25 = puVar25 + 1) {
        pFVar35->Object = (UObject *)*puVar25;
        pFVar35 = pFVar35 + 1;
      }
      uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar43;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar43;
      if ((uVar43 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar19->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_14204802f;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_14204802f:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar38);
      lVar27 = local_aca8._0_8_[1];
      *plVar38 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar38) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar44 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = local_ad48._0_8_;
      uVar33 = local_ad48._8_4_;
      if (uVar44 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar44,uVar33);
        iVar12 = uVar44 - uVar33;
        bVar20 = uVar44 == uVar33;
        do {
          auVar18 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar33 = uVar33 - uVar44;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar44;
          local_ad48._8_4_ = uVar33;
          puVar32 = puVar32 + iVar45 * uVar44;
          local_ad48._0_8_ = puVar32;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar44) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar25 = (undefined8 *)local_ad68.Address;
              puVar25 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar44) * 8);
              puVar25 = puVar25 + (local_ad68.Size >> 0x20)) {
            pFVar35->Object = (UObject *)*puVar25;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar44;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                      *)this_01);
          uVar44 = 0x20;
          local_ac98 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar33);
          iVar12 = 0x20 - uVar33;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar33 || bVar20);
      }
      auVar18 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar25 = puVar32 + uVar33 * auVar18._12_4_;
      for (; puVar32 != puVar25; puVar32 = puVar32 + (auVar18._8_8_ >> 0x20)) {
        pFVar35->Object = (UObject *)*puVar32;
        pFVar35 = pFVar35 + 1;
      }
      uVar33 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar33;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar33;
      if ((uVar33 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac60 = (FImmutableReference *)0x0;
  puVar29 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac68 = 0;
  pFVar6 = &(pTVar19->ImmutableBatcher).PermanentPool;
  uVar16 = pFVar6->Address;
  uVar24 = (pTVar19->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar6;
  if (uVar43 != 0) {
    uVar36 = uVar39;
    uVar21 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar37 = uVar21 >> 6;
      uVar33 = (int)uVar36 + 1;
      uVar21 = uVar21 + 1;
      (&local_ac68)[uVar37] =
           (&local_ac68)[uVar37] |
           (ulonglong)(uVar24 <= (longlong)pFVar35->Object - uVar16) << ((byte)uVar36 & 0x3f);
      uVar36 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      (&local_ac60)[uVar21] =
           (FImmutableReference *)
           ((ulonglong)(&local_ac60)[uVar21] |
           (ulonglong)(pFVar35->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f));
      uVar24 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = (ulonglong)local_ac60 & local_ac68;
  uVar33 = 0x400 - (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          uVar37 = uVar39 >> 6;
          (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar44].Object =
               (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad10[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar8 = &(pTVar19->ImmutableBatcher).ValidatedReferences;
      pTVar8->Num = pTVar8->Num + uVar33;
      if (((pTVar19->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                  *)this_01);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      uVar36 = uVar39 >> 6;
      (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar33].Object =
           (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad10[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num + uVar43;
  (pTVar19->ImmutableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_1420486e7;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
      puVar29 = local_9848;
      uVar24 = uVar39;
      do {
        ppUVar31 = &pFVar35->Object;
        pFVar35 = pFVar35 + 1;
        *puVar29 = *(uint *)&(*ppUVar31)->field_0xc;
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_1420487b9;
    }
LAB_142048ba7:
    (pTVar19->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_1420486e7:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_9848;
    pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)&pFVar35->Object->field_0xc;
      pFVar35 = pFVar35 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_1420487b9:
    puVar32 = auStack_4440;
    puVar29 = local_9848;
    uVar24 = uVar39;
    do {
      uVar33 = *puVar29;
      uVar44 = uVar33 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar33) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar33) || ((int)uVar33 < 0)) &&
         (local_ad78 = uVar33,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar44) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar44;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar44];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (local_ad58 & 0xffffffff);
      puVar32 = puVar32 + 2;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    if (uVar43 < 0x41) {
      uVar24 = uVar39;
      if (uVar43 == 0) goto LAB_142048ba7;
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 4;
      } while (uVar24 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        puVar29 = puVar29 + 4;
        uVar24 = uVar24 - 1;
        this_01 = local_ad38;
      } while (uVar24 != 0);
    }
    local_ac60 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                    *)this_01)->ValidatedReferences).Entries;
    local_ac68 = uVar39;
    puVar29 = local_4448;
    do {
      pUVar11 = local_ac60->Object;
      uVar15 = *(undefined8 *)puVar29;
      puVar10 = *(ulonglong **)(puVar29 + 2);
      pFVar9 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
                 *)this_01)->Context;
      pbVar2 = &(pFVar9->Stats).bFoundGarbageRef;
      *pbVar2 = (bool)(*pbVar2 | (byte)(*puVar29 >> 0x15) & 1);
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_142048a9a:
        if ((~(byte)((uint)uVar15 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
          pFVar22 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
          do {
            uVar39 = *puVar10;
            uVar43 = (uint)(uVar39 >> 0x20);
            if ((uVar43 >> 0x17 & 1) != 0) goto LAB_142048b7e;
            if (((ulonglong)puVar10 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar24 = *puVar10;
            if (uVar39 == uVar24) {
              *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar39 | 0x80000000000000;
            }
            EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar39 != uVar24);
          lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar39 = (pFVar22->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              bVar20 = uVar39 == uVar24;
              if (bVar20) {
                (pFVar22->field0_0x0).FlagsAndRefCount = uVar39 & ~(lVar27 << 0x20);
                uVar24 = uVar39;
              }
              UNLOCK();
              uVar39 = uVar24;
            } while (!bVar20);
            LOCK();
            (pFVar22->field0_0x0).FlagsAndRefCount =
                 (pFVar22->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) != Borrowed) {
              uVar43 = pFVar22->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar9->ObjectsToSerialize;
              pTVar30 = local_acf8;
              goto LAB_142048b77;
            }
          }
        }
      }
      else {
        uVar39 = *puVar10;
        do {
          LOCK();
          uVar24 = *puVar10;
          bVar20 = uVar39 == uVar24;
          if (bVar20) {
            *puVar10 = uVar39 & ~(lVar27 << 0x20);
            uVar24 = uVar39;
          }
          UNLOCK();
          uVar39 = uVar24;
        } while (!bVar20);
        LOCK();
        *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) == Borrowed) goto LAB_142048a9a;
        pFVar1 = &pFVar9->ObjectsToSerialize;
        if (((uint)uVar15 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar11;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(pFVar1);
          }
        }
        else {
          pTVar30 = &local_ad00;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_142048b77:
          MarkReferencedClustersAsReachable<8,UE::GC::TAddAdapter<8>_>(~uVar43,pTVar30);
        }
      }
LAB_142048b7e:
      puVar29 = puVar29 + 4;
      local_ac60 = local_ac60 + 1;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushQueuedReferences @ 142048bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  bool *pbVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar4;
  FReferenceArray *pFVar5;
  FPermanentObjectPoolExtents *pFVar6;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar7;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar8;
  FWorkerContext *pFVar9;
  ulonglong *puVar10;
  UObject *pUVar11;
  int iVar12;
  code *pcVar13;
  byte bVar14;
  undefined8 uVar15;
  ulong64 uVar16;
  EInternalObjectFlags EVar17;
  undefined1 auVar18 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *pTVar19;
  bool bVar20;
  ulonglong uVar21;
  FUObjectItem *pFVar22;
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  UObject **ppUVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  FReferenceArray *pFVar26;
  longlong lVar27;
  undefined4 *puVar28;
  uint *puVar29;
  TAddAdapter<9> *pTVar30;
  UObject **ppUVar31;
  undefined8 *puVar32;
  uint uVar33;
  FResolvedMutableReference *pFVar34;
  FImmutableReference *pFVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong *plVar38;
  ulonglong uVar39;
  FMutableReference *pFVar40;
  FReferenceArray *pFVar41;
  undefined1 (*pauVar42) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *this_01;
  uint uVar43;
  uint uVar44;
  int iVar45;
  bool bVar46;
  FPermanentObjectPoolExtents FVar49;
  FPermanentObjectPoolExtents FVar50;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<9> local_ad20;
  TAddAdapter<9> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<9> local_ad00;
  TAddAdapter<9> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  FImmutableReference *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  uint local_4448 [2];
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x142048c1a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar43 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar49.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          ppUVar31 = (UObject **)FVar49.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar49.Size - uVar33;
          local_ace8 = ppUVar31 + (int)uVar33;
          uStack_ace0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar47._8_4_ = uStack_ace0;
          auVar47._0_8_ = local_ace8;
          FVar49.Size._4_4_ = uStack_acdc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar23 = ppUVar31 + (int)uVar33;
          for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + 1) {
            pFVar40->Object = ppUVar31;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar47._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      ppUVar23 = auVar47._0_8_;
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = ppUVar23 + (int)uVar43;
      for (; ppUVar23 != ppUVar31; ppUVar23 = ppUVar23 + 1) {
        pFVar40->Object = ppUVar23;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_142048fb1;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_142048fb1:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar38 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar27 = local_acc8._0_8_[1];
      *plVar38 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar38 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = local_ad48._0_8_;
      uVar44 = local_ad48._8_4_;
      if (uVar33 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar33,uVar44);
        iVar12 = uVar33 - uVar44;
        bVar20 = uVar33 == uVar44;
        do {
          auVar18 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar44 = uVar44 - uVar33;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar33;
          local_ad48._8_4_ = uVar44;
          ppUVar31 = ppUVar31 + iVar45 * uVar33;
          local_ad48._0_8_ = ppUVar31;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar23 = (UObject **)local_ad68.Address;
              ppUVar23 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar33) * 8);
              ppUVar23 = ppUVar23 + (local_ad68.Size >> 0x20)) {
            pFVar40->Object = ppUVar23;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
          local_acb8 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar44);
          iVar12 = 0x20 - uVar44;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar44 || bVar20);
      }
      auVar18 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar44) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar23 = ppUVar31 + uVar44 * auVar18._12_4_;
      for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + (auVar18._8_8_ >> 0x20)) {
        pFVar40->Object = ppUVar31;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar44;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac58[1] = 0;
  puVar29 = &(this_00->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar43 != 0) {
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21] =
           local_ac58[uVar21] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar40->Object - local_ad68.Address) <<
           ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21 + 1] =
           local_ac58[uVar21 + 1] |
           (ulonglong)(*pFVar40->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = local_ac58[1] & local_ac58[0];
  uVar33 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar37 = uVar39 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar44]._padding_ =
               (longlong)*ppUVar31;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar44 * 0x10 + 0x48) =
               ppUVar31;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad30[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar4 = &(this->KillableBatcher).ValidatedReferences;
      pTVar4->Num = pTVar4->Num + uVar33;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
      ::DrainValidatedFull(this_00);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar36 = uVar39 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar33]._padding_ = (longlong)*ppUVar31;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar33 * 0x10 + 0x48) =
           ppUVar31;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad30[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num + uVar43;
  (this->KillableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar43);
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_142049649;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar29 = local_a848;
      uVar24 = uVar39;
      do {
        plVar38 = &pFVar34->_padding_;
        pFVar34 = pFVar34 + 1;
        *puVar29 = *(uint *)(*plVar38 + 0xc);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_142049718;
    }
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_142049649:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_a848;
    pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)(pFVar34->_padding_ + 0xc);
      pFVar34 = pFVar34 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_142049718:
    puVar32 = auStack_8840;
    puVar29 = local_a848;
    do {
      uVar43 = *puVar29;
      uVar33 = uVar43 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar43) || ((int)uVar43 < 0)) &&
         (local_ad78 = uVar43,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar43;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar33];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar24 = local_ad58;
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (uVar43 & 0xffff);
      puVar32 = puVar32 + 2;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
    uVar39 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_142049b43;
      uVar39 = local_ad58 & 0xffffffff;
      do {
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
      uVar39 = local_ad58 & 0xffffffff;
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        uVar39 = uVar39 - 1;
        puVar28 = puVar28 + 4;
      } while (uVar39 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        puVar28 = puVar28 + 4;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
    uVar39 = (longlong)this_00 - (longlong)local_8848;
    pauVar42 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar24 & 0xffffffff;
    local_ad58 = uVar39;
    do {
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar9 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar42[0x50] + uVar39 + 8);
      uVar43 = SUB164(*pauVar42,0);
      if ((uVar43 >> 0x15 & 1) == 0) {
        puVar10 = *(ulonglong **)(*pauVar42 + 8);
        lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar39 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_142049a21:
          if ((~(byte)(uVar43 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
            pFVar22 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
            if ((pFVar22 == (FUObjectItem *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            do {
              uVar24 = *puVar10;
              uVar43 = (uint)(uVar24 >> 0x20);
              uVar39 = local_ad58;
              if ((uVar43 >> 0x17 & 1) != 0) goto LAB_142049b33;
              if (((ulonglong)puVar10 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar39 = *puVar10;
              if (uVar24 == uVar39) {
                *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar24 | 0x80000000000000;
              }
              EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar24 != uVar39);
            lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar39 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar36 = (pFVar22->field0_0x0).FlagsAndRefCount;
                bVar20 = uVar24 == uVar36;
                if (bVar20) {
                  (pFVar22->field0_0x0).FlagsAndRefCount = uVar24 & ~(lVar27 << 0x20);
                  uVar36 = uVar24;
                }
                UNLOCK();
                uVar24 = uVar36;
              } while (!bVar20);
              LOCK();
              (pFVar22->field0_0x0).FlagsAndRefCount =
                   (pFVar22->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) != Borrowed) {
                uVar43 = pFVar22->ClusterRootIndex;
                local_ad18.Queue = &pFVar9->ObjectsToSerialize;
                pTVar30 = &local_ad18;
                goto LAB_142049b27;
              }
            }
          }
        }
        else {
          uVar24 = *puVar10;
          do {
            LOCK();
            uVar36 = *puVar10;
            bVar20 = uVar24 == uVar36;
            if (bVar20) {
              *puVar10 = uVar24 & ~(lVar27 << 0x20);
              uVar36 = uVar24;
            }
            UNLOCK();
            uVar24 = uVar36;
          } while (!bVar20);
          LOCK();
          *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) == Borrowed) goto LAB_142049a21;
          pFVar1 = &pFVar9->ObjectsToSerialize;
          if ((uVar43 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockAsync(pFVar1);
              uVar39 = local_ad58;
            }
            goto LAB_142049b33;
          }
          pTVar30 = &local_ad20;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_142049b27:
          MarkReferencedClustersAsReachable<9,UE::GC::TAddAdapter<9>_>(~uVar43,pTVar30);
          uVar39 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_142049b33:
      pauVar42 = pauVar42 + 1;
      lVar27 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar27;
    } while (lVar27 != 0);
  }
LAB_142049b43:
  pTVar19 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar43 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (pTVar19->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar50 = local_ad68;
      auVar48 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar50.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar32 = (undefined8 *)FVar50.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar50.Size - uVar33;
          local_acd8 = puVar32 + (int)uVar33;
          uStack_acd0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar48._8_4_ = uStack_acd0;
          auVar48._0_8_ = local_acd8;
          FVar50.Size._4_4_ = uStack_accc;
          FVar50._0_12_ = auVar48;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar25 = puVar32 + (int)uVar33;
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar32 != puVar25; puVar32 = puVar32 + 1) {
            pFVar35->Object = (UObject *)*puVar32;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar33;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                      *)this_01);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar48._8_4_;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar25 = auVar48._0_8_;
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = puVar25 + (int)uVar43;
      for (; puVar25 != puVar32; puVar25 = puVar25 + 1) {
        pFVar35->Object = (UObject *)*puVar25;
        pFVar35 = pFVar35 + 1;
      }
      uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar43;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar43;
      if ((uVar43 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar19->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_142049eff;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_142049eff:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar38);
      lVar27 = local_aca8._0_8_[1];
      *plVar38 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar38) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar44 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = local_ad48._0_8_;
      uVar33 = local_ad48._8_4_;
      if (uVar44 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar44,uVar33);
        iVar12 = uVar44 - uVar33;
        bVar20 = uVar44 == uVar33;
        do {
          auVar18 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar33 = uVar33 - uVar44;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar44;
          local_ad48._8_4_ = uVar33;
          puVar32 = puVar32 + iVar45 * uVar44;
          local_ad48._0_8_ = puVar32;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar44) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar25 = (undefined8 *)local_ad68.Address;
              puVar25 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar44) * 8);
              puVar25 = puVar25 + (local_ad68.Size >> 0x20)) {
            pFVar35->Object = (UObject *)*puVar25;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar44;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                      *)this_01);
          uVar44 = 0x20;
          local_ac98 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar33);
          iVar12 = 0x20 - uVar33;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar33 || bVar20);
      }
      auVar18 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar25 = puVar32 + uVar33 * auVar18._12_4_;
      for (; puVar32 != puVar25; puVar32 = puVar32 + (auVar18._8_8_ >> 0x20)) {
        pFVar35->Object = (UObject *)*puVar32;
        pFVar35 = pFVar35 + 1;
      }
      uVar33 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar33;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar33;
      if ((uVar33 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac60 = (FImmutableReference *)0x0;
  puVar29 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac68 = 0;
  pFVar6 = &(pTVar19->ImmutableBatcher).PermanentPool;
  uVar16 = pFVar6->Address;
  uVar24 = (pTVar19->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar6;
  if (uVar43 != 0) {
    uVar36 = uVar39;
    uVar21 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar37 = uVar21 >> 6;
      uVar33 = (int)uVar36 + 1;
      uVar21 = uVar21 + 1;
      (&local_ac68)[uVar37] =
           (&local_ac68)[uVar37] |
           (ulonglong)(uVar24 <= (longlong)pFVar35->Object - uVar16) << ((byte)uVar36 & 0x3f);
      uVar36 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      (&local_ac60)[uVar21] =
           (FImmutableReference *)
           ((ulonglong)(&local_ac60)[uVar21] |
           (ulonglong)(pFVar35->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f));
      uVar24 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = (ulonglong)local_ac60 & local_ac68;
  uVar33 = 0x400 - (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          uVar37 = uVar39 >> 6;
          (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar44].Object =
               (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad10[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar8 = &(pTVar19->ImmutableBatcher).ValidatedReferences;
      pTVar8->Num = pTVar8->Num + uVar33;
      if (((pTVar19->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                  *)this_01);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      uVar36 = uVar39 >> 6;
      (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar33].Object =
           (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad10[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num + uVar43;
  (pTVar19->ImmutableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_14204a5b7;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
      puVar29 = local_9848;
      uVar24 = uVar39;
      do {
        ppUVar31 = &pFVar35->Object;
        pFVar35 = pFVar35 + 1;
        *puVar29 = *(uint *)&(*ppUVar31)->field_0xc;
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_14204a689;
    }
LAB_14204aa77:
    (pTVar19->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_14204a5b7:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_9848;
    pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)&pFVar35->Object->field_0xc;
      pFVar35 = pFVar35 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_14204a689:
    puVar32 = auStack_4440;
    puVar29 = local_9848;
    uVar24 = uVar39;
    do {
      uVar33 = *puVar29;
      uVar44 = uVar33 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar33) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar33) || ((int)uVar33 < 0)) &&
         (local_ad78 = uVar33,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar44) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar44;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar44];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (local_ad58 & 0xffffffff);
      puVar32 = puVar32 + 2;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    if (uVar43 < 0x41) {
      uVar24 = uVar39;
      if (uVar43 == 0) goto LAB_14204aa77;
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 4;
      } while (uVar24 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        puVar29 = puVar29 + 4;
        uVar24 = uVar24 - 1;
        this_01 = local_ad38;
      } while (uVar24 != 0);
    }
    local_ac60 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                    *)this_01)->ValidatedReferences).Entries;
    local_ac68 = uVar39;
    puVar29 = local_4448;
    do {
      pUVar11 = local_ac60->Object;
      uVar15 = *(undefined8 *)puVar29;
      puVar10 = *(ulonglong **)(puVar29 + 2);
      pFVar9 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
                 *)this_01)->Context;
      pbVar2 = &(pFVar9->Stats).bFoundGarbageRef;
      *pbVar2 = (bool)(*pbVar2 | (byte)(*puVar29 >> 0x15) & 1);
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_14204a96a:
        if ((~(byte)((uint)uVar15 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
          pFVar22 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
          do {
            uVar39 = *puVar10;
            uVar43 = (uint)(uVar39 >> 0x20);
            if ((uVar43 >> 0x17 & 1) != 0) goto LAB_14204aa4e;
            if (((ulonglong)puVar10 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar24 = *puVar10;
            if (uVar39 == uVar24) {
              *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar39 | 0x80000000000000;
            }
            EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar39 != uVar24);
          lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar39 = (pFVar22->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              bVar20 = uVar39 == uVar24;
              if (bVar20) {
                (pFVar22->field0_0x0).FlagsAndRefCount = uVar39 & ~(lVar27 << 0x20);
                uVar24 = uVar39;
              }
              UNLOCK();
              uVar39 = uVar24;
            } while (!bVar20);
            LOCK();
            (pFVar22->field0_0x0).FlagsAndRefCount =
                 (pFVar22->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) != Borrowed) {
              uVar43 = pFVar22->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar9->ObjectsToSerialize;
              pTVar30 = local_acf8;
              goto LAB_14204aa47;
            }
          }
        }
      }
      else {
        uVar39 = *puVar10;
        do {
          LOCK();
          uVar24 = *puVar10;
          bVar20 = uVar39 == uVar24;
          if (bVar20) {
            *puVar10 = uVar39 & ~(lVar27 << 0x20);
            uVar24 = uVar39;
          }
          UNLOCK();
          uVar39 = uVar24;
        } while (!bVar20);
        LOCK();
        *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) == Borrowed) goto LAB_14204a96a;
        pFVar1 = &pFVar9->ObjectsToSerialize;
        if (((uint)uVar15 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar11;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(pFVar1);
          }
        }
        else {
          pTVar30 = &local_ad00;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_14204aa47:
          MarkReferencedClustersAsReachable<9,UE::GC::TAddAdapter<9>_>(~uVar43,pTVar30);
        }
      }
LAB_14204aa4e:
      puVar29 = puVar29 + 4;
      local_ac60 = local_ac60 + 1;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushQueuedReferences @ 14204aac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  bool *pbVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar4;
  FReferenceArray *pFVar5;
  FPermanentObjectPoolExtents *pFVar6;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar7;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar8;
  FWorkerContext *pFVar9;
  ulonglong *puVar10;
  UObject *pUVar11;
  int iVar12;
  code *pcVar13;
  byte bVar14;
  undefined8 uVar15;
  ulong64 uVar16;
  EInternalObjectFlags EVar17;
  undefined1 auVar18 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *pTVar19;
  bool bVar20;
  ulonglong uVar21;
  FUObjectItem *pFVar22;
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  UObject **ppUVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  FReferenceArray *pFVar26;
  longlong lVar27;
  undefined4 *puVar28;
  uint *puVar29;
  TAddAdapter<0> *pTVar30;
  UObject **ppUVar31;
  undefined8 *puVar32;
  uint uVar33;
  FResolvedMutableReference *pFVar34;
  FImmutableReference *pFVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong *plVar38;
  ulonglong uVar39;
  FMutableReference *pFVar40;
  FReferenceArray *pFVar41;
  undefined1 (*pauVar42) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *this_01;
  uint uVar43;
  uint uVar44;
  int iVar45;
  bool bVar46;
  FPermanentObjectPoolExtents FVar49;
  FPermanentObjectPoolExtents FVar50;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<0> local_ad20;
  TAddAdapter<0> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<0> local_ad00;
  TAddAdapter<0> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  FImmutableReference *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  uint local_4448 [2];
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x14204aaea;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar43 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar49.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          ppUVar31 = (UObject **)FVar49.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar49.Size - uVar33;
          local_ace8 = ppUVar31 + (int)uVar33;
          uStack_ace0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar47._8_4_ = uStack_ace0;
          auVar47._0_8_ = local_ace8;
          FVar49.Size._4_4_ = uStack_acdc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar23 = ppUVar31 + (int)uVar33;
          for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + 1) {
            pFVar40->Object = ppUVar31;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar47._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      ppUVar23 = auVar47._0_8_;
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = ppUVar23 + (int)uVar43;
      for (; ppUVar23 != ppUVar31; ppUVar23 = ppUVar23 + 1) {
        pFVar40->Object = ppUVar23;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_14204ae81;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_14204ae81:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar38 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar27 = local_acc8._0_8_[1];
      *plVar38 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar38 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_ac48;
      pauVar42 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar33 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar31 = local_ad48._0_8_;
      uVar44 = local_ad48._8_4_;
      if (uVar33 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar33,uVar44);
        iVar12 = uVar33 - uVar44;
        bVar20 = uVar33 == uVar44;
        do {
          auVar18 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar44 = uVar44 - uVar33;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar33;
          local_ad48._8_4_ = uVar44;
          ppUVar31 = ppUVar31 + iVar45 * uVar33;
          local_ad48._0_8_ = ppUVar31;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar40 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar23 = (UObject **)local_ad68.Address;
              ppUVar23 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar33) * 8);
              ppUVar23 = ppUVar23 + (local_ad68.Size >> 0x20)) {
            pFVar40->Object = ppUVar23;
            pFVar40 = pFVar40 + 1;
          }
          pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar33;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
          ::DrainUnvalidatedFull(this_00);
          uVar33 = 0x20;
          local_acb8 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar44);
          iVar12 = 0x20 - uVar44;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar44 || bVar20);
      }
      auVar18 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar44) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar40 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar23 = ppUVar31 + uVar44 * auVar18._12_4_;
      for (; ppUVar31 != ppUVar23; ppUVar31 = ppUVar31 + (auVar18._8_8_ >> 0x20)) {
        pFVar40->Object = ppUVar31;
        pFVar40 = pFVar40 + 1;
      }
      pTVar3 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar44;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac58[1] = 0;
  puVar29 = &(this_00->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar43 != 0) {
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21] =
           local_ac58[uVar21] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar40->Object - local_ad68.Address) <<
           ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar40 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      local_ac58[uVar21 + 1] =
           local_ac58[uVar21 + 1] |
           (ulonglong)(*pFVar40->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f);
      uVar24 = (ulonglong)uVar33;
      pFVar40 = pFVar40 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = local_ac58[1] & local_ac58[0];
  uVar33 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar37 = uVar39 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar44]._padding_ =
               (longlong)*ppUVar31;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar44 * 0x10 + 0x48) =
               ppUVar31;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad30[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar4 = &(this->KillableBatcher).ValidatedReferences;
      pTVar4->Num = pTVar4->Num + uVar33;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
      ::DrainValidatedFull(this_00);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      ppUVar31 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar36 = uVar39 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar33]._padding_ = (longlong)*ppUVar31;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar33 * 0x10 + 0x48) =
           ppUVar31;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad30[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num + uVar43;
  (this->KillableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar43);
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_14204b519;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar29 = local_a848;
      uVar24 = uVar39;
      do {
        plVar38 = &pFVar34->_padding_;
        pFVar34 = pFVar34 + 1;
        *puVar29 = *(uint *)(*plVar38 + 0xc);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_14204b5e8;
    }
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_14204b519:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_a848;
    pFVar34 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)(pFVar34->_padding_ + 0xc);
      pFVar34 = pFVar34 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_14204b5e8:
    puVar32 = auStack_8840;
    puVar29 = local_a848;
    do {
      uVar43 = *puVar29;
      uVar33 = uVar43 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar43) || ((int)uVar43 < 0)) &&
         (local_ad78 = uVar43,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar43;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar33];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar24 = local_ad58;
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (uVar43 & 0xffff);
      puVar32 = puVar32 + 2;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
    uVar39 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_14204ba13;
      uVar39 = local_ad58 & 0xffffffff;
      do {
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
      uVar39 = local_ad58 & 0xffffffff;
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        uVar39 = uVar39 - 1;
        puVar28 = puVar28 + 4;
      } while (uVar39 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar28 = local_8848;
      do {
        *puVar28 = (int)((ulonglong)**(undefined8 **)(puVar28 + 2) >> 0x20);
        puVar28 = puVar28 + 4;
        uVar39 = uVar39 - 1;
      } while (uVar39 != 0);
    }
    uVar39 = (longlong)this_00 - (longlong)local_8848;
    pauVar42 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar24 & 0xffffffff;
    local_ad58 = uVar39;
    do {
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar9 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar42[0x50] + uVar39 + 8);
      uVar43 = SUB164(*pauVar42,0);
      if ((uVar43 >> 0x15 & 1) == 0) {
        puVar10 = *(ulonglong **)(*pauVar42 + 8);
        lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar39 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_14204b8f1:
          if ((~(byte)(uVar43 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
            pFVar22 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
            if ((pFVar22 == (FUObjectItem *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            do {
              uVar24 = *puVar10;
              uVar43 = (uint)(uVar24 >> 0x20);
              uVar39 = local_ad58;
              if ((uVar43 >> 0x17 & 1) != 0) goto LAB_14204ba03;
              if (((ulonglong)puVar10 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar39 = *puVar10;
              if (uVar24 == uVar39) {
                *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar24 | 0x80000000000000;
              }
              EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar24 != uVar39);
            lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar39 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar36 = (pFVar22->field0_0x0).FlagsAndRefCount;
                bVar20 = uVar24 == uVar36;
                if (bVar20) {
                  (pFVar22->field0_0x0).FlagsAndRefCount = uVar24 & ~(lVar27 << 0x20);
                  uVar36 = uVar24;
                }
                UNLOCK();
                uVar24 = uVar36;
              } while (!bVar20);
              LOCK();
              (pFVar22->field0_0x0).FlagsAndRefCount =
                   (pFVar22->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) != Borrowed) {
                uVar43 = pFVar22->ClusterRootIndex;
                local_ad18.Queue = &pFVar9->ObjectsToSerialize;
                pTVar30 = &local_ad18;
                goto LAB_14204b9f7;
              }
            }
          }
        }
        else {
          uVar24 = *puVar10;
          do {
            LOCK();
            uVar36 = *puVar10;
            bVar20 = uVar24 == uVar36;
            if (bVar20) {
              *puVar10 = uVar24 & ~(lVar27 << 0x20);
              uVar36 = uVar24;
            }
            UNLOCK();
            uVar24 = uVar36;
          } while (!bVar20);
          LOCK();
          *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar17 & (EInternalObjectFlags)(uVar36 >> 0x20)) == Borrowed) goto LAB_14204b8f1;
          pFVar1 = &pFVar9->ObjectsToSerialize;
          if ((uVar43 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockSync(pFVar1);
              uVar39 = local_ad58;
            }
            goto LAB_14204ba03;
          }
          pTVar30 = &local_ad20;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_14204b9f7:
          MarkReferencedClustersAsReachable<0,UE::GC::TAddAdapter<0>_>(~uVar43,pTVar30);
          uVar39 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_14204ba03:
      pauVar42 = pauVar42 + 1;
      lVar27 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar27;
    } while (lVar27 != 0);
  }
LAB_14204ba13:
  pTVar19 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar43 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar41 = (pTVar19->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar5 = pFVar41 + (int)uVar43;
  for (pFVar26 = pFVar41; pFVar26 != pFVar5; pFVar26 = pFVar26 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (; pFVar41 != pFVar5; pFVar41 = pFVar41 + 1) {
    uVar43 = pFVar41->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar41->Array->AllocatorInstance).Data;
    if (((int)uVar43 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_ad68.Size._0_4_ = uVar43;
    if (uVar43 != 0) {
      uVar33 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar50 = local_ad68;
      auVar48 = (undefined1  [12])local_ad68._0_12_;
      if (uVar33 <= uVar43) {
        do {
          if (((int)FVar50.Size < (int)uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar32 = (undefined8 *)FVar50.Address;
          if (((int)uVar33 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar43 = (int)FVar50.Size - uVar33;
          local_acd8 = puVar32 + (int)uVar33;
          uStack_acd0 = uVar43;
          if (((int)uVar43 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          auVar48._8_4_ = uStack_acd0;
          auVar48._0_8_ = local_acd8;
          FVar50.Size._4_4_ = uStack_accc;
          FVar50._0_12_ = auVar48;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          puVar25 = puVar32 + (int)uVar33;
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar32 != puVar25; puVar32 = puVar32 + 1) {
            pFVar35->Object = (UObject *)*puVar32;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar33;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                      *)this_01);
          uVar33 = 0x20;
        } while (0x1f < uVar43);
      }
      uVar43 = auVar48._8_4_;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar25 = auVar48._0_8_;
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = puVar25 + (int)uVar43;
      for (; puVar25 != puVar32; puVar25 = puVar25 + 1) {
        pFVar35->Object = (UObject *)*puVar25;
        pFVar35 = pFVar35 + 1;
      }
      uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar43;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar43;
      if ((uVar43 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar19->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar43 < 0x21) {
    if (uVar43 != 0) goto LAB_14204bdcf;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_14204bdcf:
    uVar39 = (ulonglong)uVar43;
    plVar38 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar38);
      lVar27 = local_aca8._0_8_[1];
      *plVar38 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar38) & 0xffff)
                 * 8;
      *(int *)(plVar38 + 1) = (int)lVar27;
      *(uint *)((longlong)plVar38 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar39 = uVar39 - 1;
      plVar38 = plVar38 + 2;
    } while (uVar39 != 0);
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
  }
  if (((int)uVar43 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  for (pauVar42 = (undefined1 (*) [16])&local_aa48;
      pauVar42 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar43 * 4 + -2);
      pauVar42 = pauVar42 + 1) {
    local_ad48 = *pauVar42;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar42 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar44 = 0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar32 = local_ad48._0_8_;
      uVar33 = local_ad48._8_4_;
      if (uVar44 <= *(uint *)(*pauVar42 + 8)) {
        iVar45 = local_ad48._12_4_;
        bVar46 = SBORROW4(uVar44,uVar33);
        iVar12 = uVar44 - uVar33;
        bVar20 = uVar44 == uVar33;
        do {
          auVar18 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar20 && bVar46 == iVar12 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((iVar45 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar33 = uVar33 - uVar44;
          local_ad68.Size._4_4_ = auVar18._12_4_;
          local_ad68.Address = auVar18._0_8_;
          local_ad68.Size._0_4_ = uVar44;
          local_ad48._8_4_ = uVar33;
          puVar32 = puVar32 + iVar45 * uVar44;
          local_ad48._0_8_ = puVar32;
          if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar44) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar25 = (undefined8 *)local_ad68.Address;
              puVar25 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar44) * 8);
              puVar25 = puVar25 + (local_ad68.Size >> 0x20)) {
            pFVar35->Object = (UObject *)*puVar25;
            pFVar35 = pFVar35 + 1;
          }
          pTVar7 = &(pTVar19->ImmutableBatcher).UnvalidatedReferences;
          pTVar7->Num = pTVar7->Num + uVar44;
          if (((pTVar19->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                      *)this_01);
          uVar44 = 0x20;
          local_ac98 = local_ad48;
          bVar46 = SBORROW4(0x20,uVar33);
          iVar12 = 0x20 - uVar33;
          bVar20 = iVar12 == 0;
        } while (0x20 < uVar33 || bVar20);
      }
      auVar18 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num < uVar33) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar35 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar25 = puVar32 + uVar33 * auVar18._12_4_;
      for (; puVar32 != puVar25; puVar32 = puVar32 + (auVar18._8_8_ >> 0x20)) {
        pFVar35->Object = (UObject *)*puVar32;
        pFVar35 = pFVar35 + 1;
      }
      uVar33 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num + uVar33;
      (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = uVar33;
      if ((uVar33 == 0x20) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  uVar43 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar39 = 0;
  (pTVar19->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar43) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_ac60 = (FImmutableReference *)0x0;
  puVar29 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar29 = *puVar29 + uVar43;
  local_ac68 = 0;
  pFVar6 = &(pTVar19->ImmutableBatcher).PermanentPool;
  uVar16 = pFVar6->Address;
  uVar24 = (pTVar19->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar6;
  if (uVar43 != 0) {
    uVar36 = uVar39;
    uVar21 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar37 = uVar21 >> 6;
      uVar33 = (int)uVar36 + 1;
      uVar21 = uVar21 + 1;
      (&local_ac68)[uVar37] =
           (&local_ac68)[uVar37] |
           (ulonglong)(uVar24 <= (longlong)pFVar35->Object - uVar16) << ((byte)uVar36 & 0x3f);
      uVar36 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
    uVar24 = uVar39;
    uVar36 = uVar39;
    pFVar35 = (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar21 = uVar36 >> 6;
      uVar33 = (int)uVar24 + 1;
      uVar36 = uVar36 + 1;
      (&local_ac60)[uVar21] =
           (FImmutableReference *)
           ((ulonglong)(&local_ac60)[uVar21] |
           (ulonglong)(pFVar35->Object != (UObject *)0x0) << ((byte)uVar24 & 0x3f));
      uVar24 = (ulonglong)uVar33;
      pFVar35 = pFVar35 + 1;
    } while (uVar33 < uVar43);
  }
  uVar36 = (ulonglong)local_ac60 & local_ac68;
  uVar33 = 0x400 - (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar24 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
  uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar21 = uVar24 >> 0x38;
  bVar14 = (byte)(uVar24 >> 0x38);
  uVar43 = (uint)bVar14;
  if (uVar33 <= bVar14) {
    do {
      uVar44 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar36;
      uVar43 = uVar44 + uVar33;
      if (uVar44 < uVar43) {
        bVar14 = (byte)uVar39 & 0x3f;
        uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
        do {
          uVar37 = uVar39 >> 6;
          (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar44].Object =
               (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
          uVar39 = (ulonglong)((int)uVar39 + 1);
          uVar44 = uVar44 + ((local_ad10[uVar37] & uVar24) != 0);
          uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
        } while (uVar44 < uVar43);
      }
      pTVar8 = &(pTVar19->ImmutableBatcher).ValidatedReferences;
      pTVar8->Num = pTVar8->Num + uVar33;
      if (((pTVar19->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                  *)this_01);
      uVar43 = (int)uVar21 - uVar33;
      uVar21 = (ulonglong)uVar43;
      uVar33 = 0x400;
    } while (0x3ff < uVar43);
  }
  uVar33 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar36;
  uVar44 = uVar33 + uVar43;
  if (uVar33 < uVar44) {
    bVar14 = (byte)uVar39 & 0x3f;
    uVar24 = 1L << bVar14 | 1UL >> 0x40 - bVar14;
    do {
      uVar36 = uVar39 >> 6;
      (pTVar19->ImmutableBatcher).ValidatedReferences.Entries[uVar33].Object =
           (pTVar19->ImmutableBatcher).UnvalidatedReferences.Entries[uVar39].Object;
      uVar39 = (ulonglong)((int)uVar39 + 1);
      uVar33 = uVar33 + ((local_ad10[uVar36 + 1] & uVar24) != 0);
      uVar24 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while (uVar33 < uVar44);
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num + uVar43;
  (pTVar19->ImmutableBatcher).ValidatedReferences.Num = uVar43;
  if ((uVar43 == 0x400) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar43 = (pTVar19->ImmutableBatcher).ValidatedReferences.Num;
  uVar39 = (ulonglong)uVar43;
  (pTVar19->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar43 < 0x401) {
    if (0x40 < uVar43) goto LAB_14204c487;
    uVar24 = uVar39;
    if (uVar43 != 0) {
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
      puVar29 = local_9848;
      uVar24 = uVar39;
      do {
        ppUVar31 = &pFVar35->Object;
        pFVar35 = pFVar35 + 1;
        *puVar29 = *(uint *)&(*ppUVar31)->field_0xc;
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 1;
      } while (uVar24 != 0);
      goto LAB_14204c559;
    }
LAB_14204c947:
    (pTVar19->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
LAB_14204c487:
    lVar27 = 0x10;
    do {
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    puVar29 = local_9848;
    pFVar35 = (pTVar19->ImmutableBatcher).ValidatedReferences.Entries;
    uVar24 = uVar39;
    do {
      *puVar29 = *(uint *)&pFVar35->Object->field_0xc;
      pFVar35 = pFVar35 + 1;
      puVar29 = puVar29 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
LAB_14204c559:
    puVar32 = auStack_4440;
    puVar29 = local_9848;
    uVar24 = uVar39;
    do {
      uVar33 = *puVar29;
      uVar44 = uVar33 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar33) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar33) || ((int)uVar33 < 0)) &&
         (local_ad78 = uVar33,
         bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar44) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar44;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar33) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar33;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar20) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      pFVar22 = GUObjectArray.ObjObjects.Objects[uVar44];
      if ((pFVar22 == (FUObjectItem *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar29 = puVar29 + 1;
      *puVar32 = pFVar22 + (local_ad58 & 0xffffffff);
      puVar32 = puVar32 + 2;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    if (uVar43 < 0x41) {
      uVar24 = uVar39;
      if (uVar43 == 0) goto LAB_14204c947;
      do {
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        uVar24 = uVar24 - 1;
        puVar29 = puVar29 + 4;
      } while (uVar24 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar27 = 0x10;
      do {
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      puVar29 = local_4448;
      uVar24 = uVar39;
      do {
        *puVar29 = (uint)((ulonglong)**(undefined8 **)(puVar29 + 2) >> 0x20);
        puVar29 = puVar29 + 4;
        uVar24 = uVar24 - 1;
        this_01 = local_ad38;
      } while (uVar24 != 0);
    }
    local_ac60 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                    *)this_01)->ValidatedReferences).Entries;
    local_ac68 = uVar39;
    puVar29 = local_4448;
    do {
      pUVar11 = local_ac60->Object;
      uVar15 = *(undefined8 *)puVar29;
      puVar10 = *(ulonglong **)(puVar29 + 2);
      pFVar9 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
                 *)this_01)->Context;
      pbVar2 = &(pFVar9->Stats).bFoundGarbageRef;
      *pbVar2 = (bool)(*pbVar2 | (byte)(*puVar29 >> 0x15) & 1);
      EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar10 >> 0x20)) == Borrowed) {
LAB_14204c83a:
        if ((~(byte)((uint)uVar15 >> 0x17) & 0 < *(int *)((longlong)puVar10 + 0x14)) != 0) {
          pFVar22 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar10 + 0x14));
          do {
            uVar39 = *puVar10;
            uVar43 = (uint)(uVar39 >> 0x20);
            if ((uVar43 >> 0x17 & 1) != 0) goto LAB_14204c91e;
            if (((ulonglong)puVar10 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar24 = *puVar10;
            if (uVar39 == uVar24) {
              *puVar10 = (longlong)(int)uVar43 << 0x20 | (longlong)(int)uVar39 | 0x80000000000000;
            }
            EVar17 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar39 != uVar24);
          lVar27 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar22->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar39 = (pFVar22->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar24 = (pFVar22->field0_0x0).FlagsAndRefCount;
              bVar20 = uVar39 == uVar24;
              if (bVar20) {
                (pFVar22->field0_0x0).FlagsAndRefCount = uVar39 & ~(lVar27 << 0x20);
                uVar24 = uVar39;
              }
              UNLOCK();
              uVar39 = uVar24;
            } while (!bVar20);
            LOCK();
            (pFVar22->field0_0x0).FlagsAndRefCount =
                 (pFVar22->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) != Borrowed) {
              uVar43 = pFVar22->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar9->ObjectsToSerialize;
              pTVar30 = local_acf8;
              goto LAB_14204c917;
            }
          }
        }
      }
      else {
        uVar39 = *puVar10;
        do {
          LOCK();
          uVar24 = *puVar10;
          bVar20 = uVar39 == uVar24;
          if (bVar20) {
            *puVar10 = uVar39 & ~(lVar27 << 0x20);
            uVar24 = uVar39;
          }
          UNLOCK();
          uVar39 = uVar24;
        } while (!bVar20);
        LOCK();
        *puVar10 = *puVar10 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar17 & (EInternalObjectFlags)(uVar24 >> 0x20)) == Borrowed) goto LAB_14204c83a;
        pFVar1 = &pFVar9->ObjectsToSerialize;
        if (((uint)uVar15 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar11;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar9->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(pFVar1);
          }
        }
        else {
          pTVar30 = &local_ad00;
          uVar43 = *(uint *)((longlong)puVar10 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_14204c917:
          MarkReferencedClustersAsReachable<0,UE::GC::TAddAdapter<0>_>(~uVar43,pTVar30);
        }
      }
LAB_14204c91e:
      puVar29 = puVar29 + 4;
      local_ac60 = local_ac60 + 1;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushQueuedReferences @ 14204c990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar3;
  FReferenceArray *pFVar4;
  FPermanentObjectPoolExtents *pFVar5;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar6;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar7;
  FWorkerContext *pFVar8;
  ulonglong *puVar9;
  UObject *pUVar10;
  int iVar11;
  code *pcVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong64 uVar15;
  EInternalObjectFlags EVar16;
  undefined1 auVar17 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *pTVar18;
  bool bVar19;
  ulonglong uVar20;
  FUObjectItem *pFVar21;
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  UObject **ppUVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  FReferenceArray *pFVar25;
  longlong lVar26;
  undefined4 *puVar27;
  uint *puVar28;
  TAddAdapter<12> *pTVar29;
  UObject **ppUVar30;
  undefined8 *puVar31;
  uint uVar32;
  FResolvedMutableReference *pFVar33;
  FImmutableReference *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  FMutableReference *pFVar39;
  FReferenceArray *pFVar40;
  undefined1 (*pauVar41) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *this_01;
  uint uVar42;
  uint uVar43;
  int iVar44;
  bool bVar45;
  FPermanentObjectPoolExtents FVar48;
  FPermanentObjectPoolExtents FVar49;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<12> local_ad20;
  TAddAdapter<12> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<12> local_ad00;
  TAddAdapter<12> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  undefined8 *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  undefined8 local_4448;
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x14204c9ba;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar42 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar48 = local_ad68;
      auVar46 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar48.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          ppUVar30 = (UObject **)FVar48.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar48.Size - uVar32;
          local_ace8 = ppUVar30 + (int)uVar32;
          uStack_ace0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar46._8_4_ = uStack_ace0;
          auVar46._0_8_ = local_ace8;
          FVar48.Size._4_4_ = uStack_acdc;
          FVar48._0_12_ = auVar46;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar22 = ppUVar30 + (int)uVar32;
          for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + 1) {
            pFVar39->Object = ppUVar30;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar46._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      ppUVar22 = auVar46._0_8_;
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = ppUVar22 + (int)uVar42;
      for (; ppUVar22 != ppUVar30; ppUVar22 = ppUVar22 + 1) {
        pFVar39->Object = ppUVar22;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar42;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_14204cd51;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204cd51:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar37 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar26 = local_acc8._0_8_[1];
      *plVar37 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar37 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = local_ad48._0_8_;
      uVar43 = local_ad48._8_4_;
      if (uVar32 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar32,uVar43);
        iVar11 = uVar32 - uVar43;
        bVar19 = uVar32 == uVar43;
        do {
          auVar17 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar43 = uVar43 - uVar32;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar32;
          local_ad48._8_4_ = uVar43;
          ppUVar30 = ppUVar30 + iVar44 * uVar32;
          local_ad48._0_8_ = ppUVar30;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar22 = (UObject **)local_ad68.Address;
              ppUVar22 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar32) * 8);
              ppUVar22 = ppUVar22 + (local_ad68.Size >> 0x20)) {
            pFVar39->Object = ppUVar22;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
          local_acb8 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar43);
          iVar11 = 0x20 - uVar43;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar43 || bVar19);
      }
      auVar17 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar22 = ppUVar30 + uVar43 * auVar17._12_4_;
      for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + (auVar17._8_8_ >> 0x20)) {
        pFVar39->Object = ppUVar30;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac58[1] = 0;
  puVar28 = &(this_00->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar42 != 0) {
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20] =
           local_ac58[uVar20] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar39->Object - local_ad68.Address) <<
           ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20 + 1] =
           local_ac58[uVar20 + 1] |
           (ulonglong)(*pFVar39->Object != (UObject *)0x0) << ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
  }
  uVar35 = local_ac58[1] & local_ac58[0];
  uVar32 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar36 = uVar38 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar43]._padding_ =
               (longlong)*ppUVar30;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar43 * 0x10 + 0x48) =
               ppUVar30;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad30[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar3 = &(this->KillableBatcher).ValidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar32;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
      ::DrainValidatedFull(this_00);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar35 = uVar38 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar32]._padding_ = (longlong)*ppUVar30;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar32 * 0x10 + 0x48) =
           ppUVar30;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad30[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num + uVar42;
  (this->KillableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar42);
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_14204d3e9;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar28 = local_a848;
      uVar23 = uVar38;
      do {
        plVar37 = &pFVar33->_padding_;
        pFVar33 = pFVar33 + 1;
        *puVar28 = *(uint *)(*plVar37 + 0xc);
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_14204d4b8;
    }
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204d3e9:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_a848;
    pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)(pFVar33->_padding_ + 0xc);
      pFVar33 = pFVar33 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_14204d4b8:
    puVar31 = auStack_8840;
    puVar28 = local_a848;
    do {
      uVar42 = *puVar28;
      uVar32 = uVar42 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar42) || ((int)uVar42 < 0)) &&
         (local_ad78 = uVar42,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar42) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar42;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar32];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar23 = local_ad58;
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (uVar42 & 0xffff);
      puVar31 = puVar31 + 2;
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
    uVar38 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_14204d8e3;
      uVar38 = local_ad58 & 0xffffffff;
      do {
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
      uVar38 = local_ad58 & 0xffffffff;
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        uVar38 = uVar38 - 1;
        puVar27 = puVar27 + 4;
      } while (uVar38 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        puVar27 = puVar27 + 4;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    uVar38 = (longlong)this_00 - (longlong)local_8848;
    pauVar41 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar23 & 0xffffffff;
    local_ad58 = uVar38;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar8 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar41[0x50] + uVar38 + 8);
      uVar42 = SUB164(*pauVar41,0);
      if ((uVar42 >> 0x15 & 1) == 0) {
        puVar9 = *(ulonglong **)(*pauVar41 + 8);
        lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar38 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_14204d7c1:
          if ((~(byte)(uVar42 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
            pFVar21 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
            if ((pFVar21 == (FUObjectItem *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            do {
              uVar23 = *puVar9;
              uVar42 = (uint)(uVar23 >> 0x20);
              uVar38 = local_ad58;
              if ((uVar42 >> 0x17 & 1) != 0) goto LAB_14204d8d3;
              if (((ulonglong)puVar9 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar38 = *puVar9;
              if (uVar23 == uVar38) {
                *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar23 | 0x80000000000000;
              }
              EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar23 != uVar38);
            lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar38 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar35 = (pFVar21->field0_0x0).FlagsAndRefCount;
                bVar19 = uVar23 == uVar35;
                if (bVar19) {
                  (pFVar21->field0_0x0).FlagsAndRefCount = uVar23 & ~(lVar26 << 0x20);
                  uVar35 = uVar23;
                }
                UNLOCK();
                uVar23 = uVar35;
              } while (!bVar19);
              LOCK();
              (pFVar21->field0_0x0).FlagsAndRefCount =
                   (pFVar21->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) != Borrowed) {
                uVar42 = pFVar21->ClusterRootIndex;
                local_ad18.Queue = &pFVar8->ObjectsToSerialize;
                pTVar29 = &local_ad18;
                goto LAB_14204d8c7;
              }
            }
          }
        }
        else {
          uVar23 = *puVar9;
          do {
            LOCK();
            uVar35 = *puVar9;
            bVar19 = uVar23 == uVar35;
            if (bVar19) {
              *puVar9 = uVar23 & ~(lVar26 << 0x20);
              uVar35 = uVar23;
            }
            UNLOCK();
            uVar23 = uVar35;
          } while (!bVar19);
          LOCK();
          *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) == Borrowed) goto LAB_14204d7c1;
          pFVar1 = &pFVar8->ObjectsToSerialize;
          if ((uVar42 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockSync(pFVar1);
              uVar38 = local_ad58;
            }
            goto LAB_14204d8d3;
          }
          pTVar29 = &local_ad20;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_14204d8c7:
          MarkReferencedClustersAsReachable<12,UE::GC::TAddAdapter<12>_>(~uVar42,pTVar29);
          uVar38 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_14204d8d3:
      pauVar41 = pauVar41 + 1;
      lVar26 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar26;
    } while (lVar26 != 0);
  }
LAB_14204d8e3:
  pTVar18 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar42 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (pTVar18->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar49.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar31 = (undefined8 *)FVar49.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar49.Size - uVar32;
          local_acd8 = puVar31 + (int)uVar32;
          uStack_acd0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar47._8_4_ = uStack_acd0;
          auVar47._0_8_ = local_acd8;
          FVar49.Size._4_4_ = uStack_accc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar24 = puVar31 + (int)uVar32;
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar31 != puVar24; puVar31 = puVar31 + 1) {
            pFVar34->Object = (UObject *)*puVar31;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar32;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                      *)this_01);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar47._8_4_;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar24 = auVar47._0_8_;
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = puVar24 + (int)uVar42;
      for (; puVar24 != puVar31; puVar24 = puVar24 + 1) {
        pFVar34->Object = (UObject *)*puVar24;
        pFVar34 = pFVar34 + 1;
      }
      uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar42;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar42;
      if ((uVar42 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar18->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_14204dc9f;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204dc9f:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar37);
      lVar26 = local_aca8._0_8_[1];
      *plVar37 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar37) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar43 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = local_ad48._0_8_;
      uVar32 = local_ad48._8_4_;
      if (uVar43 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar43,uVar32);
        iVar11 = uVar43 - uVar32;
        bVar19 = uVar43 == uVar32;
        do {
          auVar17 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar32 = uVar32 - uVar43;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar43;
          local_ad48._8_4_ = uVar32;
          puVar31 = puVar31 + iVar44 * uVar43;
          local_ad48._0_8_ = puVar31;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar24 = (undefined8 *)local_ad68.Address;
              puVar24 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar43) * 8);
              puVar24 = puVar24 + (local_ad68.Size >> 0x20)) {
            pFVar34->Object = (UObject *)*puVar24;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar43;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                      *)this_01);
          uVar43 = 0x20;
          local_ac98 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar32);
          iVar11 = 0x20 - uVar32;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar32 || bVar19);
      }
      auVar17 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar24 = puVar31 + uVar32 * auVar17._12_4_;
      for (; puVar31 != puVar24; puVar31 = puVar31 + (auVar17._8_8_ >> 0x20)) {
        pFVar34->Object = (UObject *)*puVar31;
        pFVar34 = pFVar34 + 1;
      }
      uVar32 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar32;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar32;
      if ((uVar32 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac60 = (undefined8 *)0x0;
  puVar28 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac68 = 0;
  pFVar5 = &(pTVar18->ImmutableBatcher).PermanentPool;
  uVar15 = pFVar5->Address;
  uVar23 = (pTVar18->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar5;
  if (uVar42 != 0) {
    uVar35 = uVar38;
    uVar20 = uVar38;
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar36 = uVar20 >> 6;
      uVar32 = (int)uVar35 + 1;
      uVar20 = uVar20 + 1;
      (&local_ac68)[uVar36] =
           (&local_ac68)[uVar36] |
           (ulonglong)(uVar23 <= (longlong)pFVar34->Object - uVar15) << ((byte)uVar35 & 0x3f);
      uVar35 = (ulonglong)uVar32;
      pFVar34 = pFVar34 + 1;
    } while (uVar32 < uVar42);
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    uVar23 = uVar38;
    uVar35 = uVar38;
    do {
      uVar20 = uVar35 >> 6;
      ppUVar30 = &pFVar34->Object;
      pFVar34 = pFVar34 + 1;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      (&local_ac60)[uVar20] =
           (undefined8 *)
           ((ulonglong)(&local_ac60)[uVar20] |
           (ulonglong)(*ppUVar30 != (UObject *)0x0) << ((byte)uVar23 & 0x3f));
      uVar23 = (ulonglong)uVar32;
    } while (uVar32 < uVar42);
  }
  uVar35 = (ulonglong)local_ac60 & local_ac68;
  uVar32 = 0x400 - (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          uVar36 = uVar38 >> 6;
          (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar43].Object =
               (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad10[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar7 = &(pTVar18->ImmutableBatcher).ValidatedReferences;
      pTVar7->Num = pTVar7->Num + uVar32;
      if (((pTVar18->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                  *)this_01);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      uVar35 = uVar38 >> 6;
      (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar32].Object =
           (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad10[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num + uVar42;
  (pTVar18->ImmutableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_14204e357;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
      puVar28 = local_9848;
      uVar23 = uVar38;
      do {
        ppUVar30 = &pFVar34->Object;
        pFVar34 = pFVar34 + 1;
        *puVar28 = *(uint *)&(*ppUVar30)->field_0xc;
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_14204e429;
    }
LAB_14204e807:
    (pTVar18->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204e357:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_9848;
    pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)&pFVar34->Object->field_0xc;
      pFVar34 = pFVar34 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_14204e429:
    puVar31 = auStack_4440;
    puVar28 = local_9848;
    uVar23 = uVar38;
    do {
      uVar32 = *puVar28;
      uVar43 = uVar32 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar32) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar32) || ((int)uVar32 < 0)) &&
         (local_ad78 = uVar32,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar43;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar43];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (local_ad58 & 0xffffffff);
      puVar31 = puVar31 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    if (uVar42 < 0x41) {
      uVar23 = uVar38;
      if (uVar42 == 0) goto LAB_14204e807;
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        uVar23 = uVar23 - 1;
        puVar31 = puVar31 + 2;
      } while (uVar23 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        puVar31 = puVar31 + 2;
        uVar23 = uVar23 - 1;
        this_01 = local_ad38;
      } while (uVar23 != 0);
    }
    local_ac60 = &local_4448;
    local_ac68 = uVar38;
    pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                 *)this_01)->ValidatedReferences).Entries;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      uVar14 = *local_ac60;
      puVar9 = (ulonglong *)local_ac60[1];
      lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar10 = pFVar34->Object;
      pFVar8 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
                 *)this_01)->Context;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_14204e6fa:
        if ((~(byte)((uint)uVar14 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
          pFVar21 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
          do {
            uVar38 = *puVar9;
            uVar42 = (uint)(uVar38 >> 0x20);
            if ((uVar42 >> 0x17 & 1) != 0) goto LAB_14204e7de;
            if (((ulonglong)puVar9 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar23 = *puVar9;
            if (uVar38 == uVar23) {
              *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar38 | 0x80000000000000;
            }
            EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar38 != uVar23);
          lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar38 = (pFVar21->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              bVar19 = uVar38 == uVar23;
              if (bVar19) {
                (pFVar21->field0_0x0).FlagsAndRefCount = uVar38 & ~(lVar26 << 0x20);
                uVar23 = uVar38;
              }
              UNLOCK();
              uVar38 = uVar23;
            } while (!bVar19);
            LOCK();
            (pFVar21->field0_0x0).FlagsAndRefCount =
                 (pFVar21->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) != Borrowed) {
              uVar42 = pFVar21->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar8->ObjectsToSerialize;
              pTVar29 = local_acf8;
              goto LAB_14204e7d7;
            }
          }
        }
      }
      else {
        uVar38 = *puVar9;
        do {
          LOCK();
          uVar23 = *puVar9;
          bVar19 = uVar38 == uVar23;
          if (bVar19) {
            *puVar9 = uVar38 & ~(lVar26 << 0x20);
            uVar23 = uVar38;
          }
          UNLOCK();
          uVar38 = uVar23;
        } while (!bVar19);
        LOCK();
        *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) == Borrowed) goto LAB_14204e6fa;
        pFVar1 = &pFVar8->ObjectsToSerialize;
        if (((uint)uVar14 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar10;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(pFVar1);
          }
        }
        else {
          pTVar29 = &local_ad00;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_14204e7d7:
          MarkReferencedClustersAsReachable<12,UE::GC::TAddAdapter<12>_>(~uVar42,pTVar29);
        }
      }
LAB_14204e7de:
      pFVar34 = pFVar34 + 1;
      local_ac60 = local_ac60 + 2;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushQueuedReferences @ 14204e850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_>::FlushQueuedReferences
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *this)

{
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  *this_00;
  FWorkBlockifier *pFVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FResolvedMutableReference,1024,64> *pTVar3;
  FReferenceArray *pFVar4;
  FPermanentObjectPoolExtents *pFVar5;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar6;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar7;
  FWorkerContext *pFVar8;
  ulonglong *puVar9;
  UObject *pUVar10;
  int iVar11;
  code *pcVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong64 uVar15;
  EInternalObjectFlags EVar16;
  undefined1 auVar17 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *pTVar18;
  bool bVar19;
  ulonglong uVar20;
  FUObjectItem *pFVar21;
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  UObject **ppUVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  FReferenceArray *pFVar25;
  longlong lVar26;
  undefined4 *puVar27;
  uint *puVar28;
  TAddAdapter<13> *pTVar29;
  UObject **ppUVar30;
  undefined8 *puVar31;
  uint uVar32;
  FResolvedMutableReference *pFVar33;
  FImmutableReference *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  FMutableReference *pFVar39;
  FReferenceArray *pFVar40;
  undefined1 (*pauVar41) [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *this_01;
  uint uVar42;
  uint uVar43;
  int iVar44;
  bool bVar45;
  FPermanentObjectPoolExtents FVar48;
  FPermanentObjectPoolExtents FVar49;
  undefined1 auStack_ad98 [32];
  uint local_ad78;
  int local_ad70;
  FPermanentObjectPoolExtents local_ad68;
  undefined8 local_ad58;
  undefined1 local_ad48 [16];
  TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *local_ad38;
  ulonglong local_ad30 [2];
  TAddAdapter<13> local_ad20;
  TAddAdapter<13> local_ad18;
  ulonglong local_ad10 [2];
  TAddAdapter<13> local_ad00;
  TAddAdapter<13> local_acf8 [2];
  UObject **local_ace8;
  uint uStack_ace0;
  undefined4 uStack_acdc;
  undefined8 *local_acd8;
  uint uStack_acd0;
  undefined4 uStack_accc;
  undefined1 local_acc8 [16];
  undefined1 local_acb8 [16];
  undefined1 local_aca8 [16];
  undefined1 local_ac98 [16];
  undefined1 local_ac88 [16];
  undefined1 local_ac78 [16];
  ulonglong local_ac68;
  undefined8 *local_ac60;
  ulonglong local_ac58 [2];
  longlong local_ac48;
  uint auStack_ac40 [126];
  longlong local_aa48;
  uint auStack_aa40 [126];
  uint local_a848 [1024];
  uint local_9848 [1024];
  undefined4 local_8848 [2];
  undefined8 auStack_8840 [2047];
  undefined1 local_4848 [1024];
  undefined8 local_4448;
  undefined8 auStack_4440 [2047];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x14204e87a;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_ad98;
  this_00 = &this->KillableBatcher;
  uVar42 = (this->KillableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (this->KillableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      FVar48 = local_ad68;
      auVar46 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar48.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          ppUVar30 = (UObject **)FVar48.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar48.Size - uVar32;
          local_ace8 = ppUVar30 + (int)uVar32;
          uStack_ace0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar46._8_4_ = uStack_ace0;
          auVar46._0_8_ = local_ace8;
          FVar48.Size._4_4_ = uStack_acdc;
          FVar48._0_12_ = auVar46;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          ppUVar22 = ppUVar30 + (int)uVar32;
          for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + 1) {
            pFVar39->Object = ppUVar30;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar46._8_4_;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      ppUVar22 = auVar46._0_8_;
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = ppUVar22 + (int)uVar42;
      for (; ppUVar22 != ppUVar30; ppUVar22 = ppUVar22 + 1) {
        pFVar39->Object = ppUVar22;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar42;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedStridedArrays.Num;
  (this->KillableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_14204ec11;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204ec11:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_ac48;
    do {
      local_acc8 = *(undefined1 (*) [16])
                    ((longlong)plVar37 + (longlong)this_00 + (0x188 - (longlong)&local_ac48));
      lVar26 = local_acc8._0_8_[1];
      *plVar37 = *local_acc8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)plVar37 + (longlong)this_00 + (400 - (longlong)&local_ac48)) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_acc8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_ac48;
      pauVar41 != (undefined1 (*) [16])(auStack_ac40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac88 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_acb8 = local_ad48;
      uVar32 = 0x20 - (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar30 = local_ad48._0_8_;
      uVar43 = local_ad48._8_4_;
      if (uVar32 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar32,uVar43);
        iVar11 = uVar32 - uVar43;
        bVar19 = uVar32 == uVar43;
        do {
          auVar17 = local_ad48;
          local_acb8 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar43 = uVar43 - uVar32;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar32;
          local_ad48._8_4_ = uVar43;
          ppUVar30 = ppUVar30 + iVar44 * uVar32;
          local_ad48._0_8_ = ppUVar30;
          if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar39 = (this_00->UnvalidatedReferences).Entries +
                    (this->KillableBatcher).UnvalidatedReferences.Num;
          for (ppUVar22 = (UObject **)local_ad68.Address;
              ppUVar22 !=
              (UObject **)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar32) * 8);
              ppUVar22 = ppUVar22 + (local_ad68.Size >> 0x20)) {
            pFVar39->Object = ppUVar22;
            pFVar39 = pFVar39 + 1;
          }
          pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
          pTVar2->Num = pTVar2->Num + uVar32;
          if (((this->KillableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
          ::DrainUnvalidatedFull(this_00);
          uVar32 = 0x20;
          local_acb8 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar43);
          iVar11 = 0x20 - uVar43;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar43 || bVar19);
      }
      auVar17 = local_ad48;
      local_acb8 = local_ad48;
      if ((0x20 - (this->KillableBatcher).UnvalidatedReferences.Num < uVar43) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar39 = (this_00->UnvalidatedReferences).Entries +
                (this->KillableBatcher).UnvalidatedReferences.Num;
      ppUVar22 = ppUVar30 + uVar43 * auVar17._12_4_;
      for (; ppUVar30 != ppUVar22; ppUVar30 = ppUVar30 + (auVar17._8_8_ >> 0x20)) {
        pFVar39->Object = ppUVar30;
        pFVar39 = pFVar39 + 1;
      }
      pTVar2 = &(this->KillableBatcher).UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + uVar43;
      if (((this->KillableBatcher).UnvalidatedReferences.Num == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (this->KillableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (this->KillableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac58[1] = 0;
  puVar28 = &(this_00->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac58[0] = 0;
  local_ad68 = (this->KillableBatcher).PermanentPool;
  if (uVar42 != 0) {
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20] =
           local_ac58[uVar20] |
           (ulonglong)(local_ad68.Size <= (longlong)*pFVar39->Object - local_ad68.Address) <<
           ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
    uVar23 = uVar38;
    uVar35 = uVar38;
    pFVar39 = (this->KillableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar20 = uVar35 >> 6;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      local_ac58[uVar20 + 1] =
           local_ac58[uVar20 + 1] |
           (ulonglong)(*pFVar39->Object != (UObject *)0x0) << ((byte)uVar23 & 0x3f);
      uVar23 = (ulonglong)uVar32;
      pFVar39 = pFVar39 + 1;
    } while (uVar32 < uVar42);
  }
  uVar35 = local_ac58[1] & local_ac58[0];
  uVar32 = 0x400 - (this->KillableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (this->KillableBatcher).ValidatedReferences.Num;
      local_ad30[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar36 = uVar38 >> 6;
          (this->KillableBatcher).ValidatedReferences.Entries[uVar43]._padding_ =
               (longlong)*ppUVar30;
          *(UObject ***)
           ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar43 * 0x10 + 0x48) =
               ppUVar30;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad30[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar3 = &(this->KillableBatcher).ValidatedReferences;
      pTVar3->Num = pTVar3->Num + uVar32;
      if (((this->KillableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
      ::DrainValidatedFull(this_00);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (this->KillableBatcher).ValidatedReferences.Num;
  local_ad30[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      ppUVar30 = (this->KillableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar35 = uVar38 >> 6;
      (this->KillableBatcher).ValidatedReferences.Entries[uVar32]._padding_ = (longlong)*ppUVar30;
      *(UObject ***)
       ((longlong)(&this_00->UnvalidatedReferences + 1) + (ulonglong)uVar32 * 0x10 + 0x48) =
           ppUVar30;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad30[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num + uVar42;
  (this->KillableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (this->KillableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (this->KillableBatcher).UnvalidatedReferences.Num = 0;
  local_ad58 = CONCAT44(local_ad58._4_4_,uVar42);
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_14204f2a9;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
      puVar28 = local_a848;
      uVar23 = uVar38;
      do {
        plVar37 = &pFVar33->_padding_;
        pFVar33 = pFVar33 + 1;
        *puVar28 = *(uint *)(*plVar37 + 0xc);
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_14204f378;
    }
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204f2a9:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_a848;
    pFVar33 = (this->KillableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)(pFVar33->_padding_ + 0xc);
      pFVar33 = pFVar33 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_14204f378:
    puVar31 = auStack_8840;
    puVar28 = local_a848;
    do {
      uVar42 = *puVar28;
      uVar32 = uVar42 >> 0x10;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar42) || ((int)uVar42 < 0)) &&
         (local_ad78 = uVar42,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar42) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar42;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar32];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar23 = local_ad58;
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (uVar42 & 0xffff);
      puVar31 = puVar31 + 2;
      uVar38 = uVar38 - 1;
    } while (uVar38 != 0);
    uVar38 = local_ad58 & 0xffffffff;
    if ((uint)local_ad58 < 0x41) {
      if ((uint)local_ad58 == 0) goto LAB_14204f7a3;
      uVar38 = local_ad58 & 0xffffffff;
      do {
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
      uVar38 = local_ad58 & 0xffffffff;
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        uVar38 = uVar38 - 1;
        puVar27 = puVar27 + 4;
      } while (uVar38 != 0);
    }
    else {
      memset(local_4848,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar27 = local_8848;
      do {
        *puVar27 = (int)((ulonglong)**(undefined8 **)(puVar27 + 2) >> 0x20);
        puVar27 = puVar27 + 4;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    uVar38 = (longlong)this_00 - (longlong)local_8848;
    pauVar41 = (undefined1 (*) [16])local_8848;
    local_ad48._0_8_ = uVar23 & 0xffffffff;
    local_ad58 = uVar38;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pFVar8 = this_00->Context;
      local_ad68 = *(FPermanentObjectPoolExtents *)(pauVar41[0x50] + uVar38 + 8);
      uVar42 = SUB164(*pauVar41,0);
      if ((uVar42 >> 0x15 & 1) == 0) {
        puVar9 = *(ulonglong **)(*pauVar41 + 8);
        lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        uVar38 = local_ad58;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_14204f681:
          if ((~(byte)(uVar42 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
            pFVar21 = FChunkedFixedUObjectArray::GetObjectPtr
                                (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
            if ((pFVar21 == (FUObjectItem *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ItemPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                    ,0x381,L""), bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            do {
              uVar23 = *puVar9;
              uVar42 = (uint)(uVar23 >> 0x20);
              uVar38 = local_ad58;
              if ((uVar42 >> 0x17 & 1) != 0) goto LAB_14204f793;
              if (((ulonglong)puVar9 & 7) != 0) {
                FWindowsPlatformAtomics::HandleAtomicsFailure
                          (
                          L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                          );
              }
              LOCK();
              uVar38 = *puVar9;
              if (uVar23 == uVar38) {
                *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar23 | 0x80000000000000;
              }
              EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              UNLOCK();
            } while (uVar23 != uVar38);
            lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            uVar38 = local_ad58;
            if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
                (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20))
                != Borrowed) {
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              do {
                LOCK();
                uVar35 = (pFVar21->field0_0x0).FlagsAndRefCount;
                bVar19 = uVar23 == uVar35;
                if (bVar19) {
                  (pFVar21->field0_0x0).FlagsAndRefCount = uVar23 & ~(lVar26 << 0x20);
                  uVar35 = uVar23;
                }
                UNLOCK();
                uVar23 = uVar35;
              } while (!bVar19);
              LOCK();
              (pFVar21->field0_0x0).FlagsAndRefCount =
                   (pFVar21->field0_0x0).FlagsAndRefCount |
                   (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
              UNLOCK();
              if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) != Borrowed) {
                uVar42 = pFVar21->ClusterRootIndex;
                local_ad18.Queue = &pFVar8->ObjectsToSerialize;
                pTVar29 = &local_ad18;
                goto LAB_14204f787;
              }
            }
          }
        }
        else {
          uVar23 = *puVar9;
          do {
            LOCK();
            uVar35 = *puVar9;
            bVar19 = uVar23 == uVar35;
            if (bVar19) {
              *puVar9 = uVar23 & ~(lVar26 << 0x20);
              uVar35 = uVar23;
            }
            UNLOCK();
            uVar23 = uVar35;
          } while (!bVar19);
          LOCK();
          *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar16 & (EInternalObjectFlags)(uVar35 >> 0x20)) == Borrowed) goto LAB_14204f681;
          pFVar1 = &pFVar8->ObjectsToSerialize;
          if ((uVar42 >> 0x18 & 1) == 0) {
            *pFVar1->WipIt = (UObject *)local_ad68.Address;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockAsync(pFVar1);
              uVar38 = local_ad58;
            }
            goto LAB_14204f793;
          }
          pTVar29 = &local_ad20;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad20.Queue = pFVar1;
LAB_14204f787:
          MarkReferencedClustersAsReachable<13,UE::GC::TAddAdapter<13>_>(~uVar42,pTVar29);
          uVar38 = local_ad58;
        }
      }
      else {
        *(undefined8 *)local_ad68.Size = 0;
      }
LAB_14204f793:
      pauVar41 = pauVar41 + 1;
      lVar26 = local_ad48._0_8_ + -1;
      local_ad48._0_8_ = lVar26;
    } while (lVar26 != 0);
  }
LAB_14204f7a3:
  pTVar18 = local_ad38;
  this_01 = (TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *)&local_ad38->ImmutableBatcher;
  (this->KillableBatcher).ValidatedReferences.Num = 0;
  uVar42 = (local_ad38->ImmutableBatcher).UnvalidatedArrays.Num;
  local_ad38 = this_01;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= ArrayBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x635,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar40 = (pTVar18->ImmutableBatcher).UnvalidatedArrays.Entries;
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar4 = pFVar40 + (int)uVar42;
  for (pFVar25 = pFVar40; pFVar25 != pFVar4; pFVar25 = pFVar25 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (; pFVar40 != pFVar4; pFVar40 = pFVar40 + 1) {
    uVar42 = pFVar40->Array->ArrayNum;
    local_ad68.Address = (ulong64)(pFVar40->Array->AllocatorInstance).Data;
    if (((int)uVar42 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_ad68.Size._0_4_ = uVar42;
    if (uVar42 != 0) {
      uVar32 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      FVar49 = local_ad68;
      auVar47 = (undefined1  [12])local_ad68._0_12_;
      if (uVar32 <= uVar42) {
        do {
          if (((int)FVar49.Size < (int)uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5cd,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar31 = (undefined8 *)FVar49.Address;
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar42 = (int)FVar49.Size - uVar32;
          local_acd8 = puVar31 + (int)uVar32;
          uStack_acd0 = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          auVar47._8_4_ = uStack_acd0;
          auVar47._0_8_ = local_acd8;
          FVar49.Size._4_4_ = uStack_accc;
          FVar49._0_12_ = auVar47;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          puVar24 = puVar31 + (int)uVar32;
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (; puVar31 != puVar24; puVar31 = puVar31 + 1) {
            pFVar34->Object = (UObject *)*puVar31;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar32;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                      *)this_01);
          uVar32 = 0x20;
        } while (0x1f < uVar42);
      }
      uVar42 = auVar47._8_4_;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar42) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar24 = auVar47._0_8_;
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = puVar24 + (int)uVar42;
      for (; puVar24 != puVar31; puVar24 = puVar24 + 1) {
        pFVar34->Object = (UObject *)*puVar24;
        pFVar34 = pFVar34 + 1;
      }
      uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar42;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar42;
      if ((uVar42 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num;
  (pTVar18->ImmutableBatcher).UnvalidatedArrays.Num = 0;
  if (uVar42 < 0x21) {
    if (uVar42 != 0) goto LAB_14204fb5f;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ArrayBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x647,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_14204fb5f:
    uVar38 = (ulonglong)uVar42;
    plVar37 = &local_aa48;
    do {
      local_aca8 = *(undefined1 (*) [16])
                    ((longlong)this_01 + (0x188 - (longlong)&local_aa48) + (longlong)plVar37);
      lVar26 = local_aca8._0_8_[1];
      *plVar37 = *local_aca8._0_8_ +
                 (*(ulonglong *)
                   ((longlong)this_01 + (400 - (longlong)&local_aa48) + (longlong)plVar37) & 0xffff)
                 * 8;
      *(int *)(plVar37 + 1) = (int)lVar26;
      *(uint *)((longlong)plVar37 + 0xc) = local_aca8._10_4_ & 0xffff;
      uVar38 = uVar38 - 1;
      plVar37 = plVar37 + 2;
    } while (uVar38 != 0);
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
  }
  if (((int)uVar42 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  for (pauVar41 = (undefined1 (*) [16])&local_aa48;
      pauVar41 != (undefined1 (*) [16])(auStack_aa40 + (longlong)(int)uVar42 * 4 + -2);
      pauVar41 = pauVar41 + 1) {
    local_ad48 = *pauVar41;
    local_ac78 = local_ad48;
    if (*(int *)(*pauVar41 + 8) != 0) {
      local_ac98 = local_ad48;
      uVar43 = 0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar31 = local_ad48._0_8_;
      uVar32 = local_ad48._8_4_;
      if (uVar43 <= *(uint *)(*pauVar41 + 8)) {
        iVar44 = local_ad48._12_4_;
        bVar45 = SBORROW4(uVar43,uVar32);
        iVar11 = uVar43 - uVar32;
        bVar19 = uVar43 == uVar32;
        do {
          auVar17 = local_ad48;
          local_ac98 = local_ad48;
          if ((!bVar19 && bVar45 == iVar11 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Idx <= Body.Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((iVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Body.Stride > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x5d6,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar32 = uVar32 - uVar43;
          local_ad68.Size._4_4_ = auVar17._12_4_;
          local_ad68.Address = auVar17._0_8_;
          local_ad68.Size._0_4_ = uVar43;
          local_ad48._8_4_ = uVar32;
          puVar31 = puVar31 + iVar44 * uVar43;
          local_ad48._0_8_ = puVar31;
          if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar43) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x660,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                       *)this_01)->UnvalidatedReferences).Entries +
                    (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
          for (puVar24 = (undefined8 *)local_ad68.Address;
              puVar24 !=
              (undefined8 *)(local_ad68.Address + (ulonglong)(local_ad68.Size._4_4_ * uVar43) * 8);
              puVar24 = puVar24 + (local_ad68.Size >> 0x20)) {
            pFVar34->Object = (UObject *)*puVar24;
            pFVar34 = pFVar34 + 1;
          }
          pTVar6 = &(pTVar18->ImmutableBatcher).UnvalidatedReferences;
          pTVar6->Num = pTVar6->Num + uVar43;
          if (((pTVar18->ImmutableBatcher).UnvalidatedReferences.Num != 0x20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UnvalidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x615,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
          ::DrainUnvalidatedFull
                    ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                      *)this_01);
          uVar43 = 0x20;
          local_ac98 = local_ad48;
          bVar45 = SBORROW4(0x20,uVar32);
          iVar11 = 0x20 - uVar32;
          bVar19 = iVar11 == 0;
        } while (0x20 < uVar32 || bVar19);
      }
      auVar17 = local_ad48;
      local_ac98 = local_ad48;
      if ((0x20 - (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num < uVar32) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x660,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                   *)this_01)->UnvalidatedReferences).Entries +
                (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
      puVar24 = puVar31 + uVar32 * auVar17._12_4_;
      for (; puVar31 != puVar24; puVar31 = puVar31 + (auVar17._8_8_ >> 0x20)) {
        pFVar34->Object = (UObject *)*puVar31;
        pFVar34 = pFVar34 + 1;
      }
      uVar32 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num + uVar32;
      (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = uVar32;
      if ((uVar32 == 0x20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnvalidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x61a,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar42 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num;
  uVar38 = 0;
  (pTVar18->ImmutableBatcher).UnvalidatedStridedArrays.Num = 0;
  if ((0x20 < uVar42) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num <= UnvalidatedBatchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x66e,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_ac60 = (undefined8 *)0x0;
  puVar28 = &(((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                *)this_01)->Context->Stats).NumReferences;
  *puVar28 = *puVar28 + uVar42;
  local_ac68 = 0;
  pFVar5 = &(pTVar18->ImmutableBatcher).PermanentPool;
  uVar15 = pFVar5->Address;
  uVar23 = (pTVar18->ImmutableBatcher).PermanentPool.Size;
  local_ad68 = *pFVar5;
  if (uVar42 != 0) {
    uVar35 = uVar38;
    uVar20 = uVar38;
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    do {
      uVar36 = uVar20 >> 6;
      uVar32 = (int)uVar35 + 1;
      uVar20 = uVar20 + 1;
      (&local_ac68)[uVar36] =
           (&local_ac68)[uVar36] |
           (ulonglong)(uVar23 <= (longlong)pFVar34->Object - uVar15) << ((byte)uVar35 & 0x3f);
      uVar35 = (ulonglong)uVar32;
      pFVar34 = pFVar34 + 1;
    } while (uVar32 < uVar42);
    pFVar34 = (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries;
    uVar23 = uVar38;
    uVar35 = uVar38;
    do {
      uVar20 = uVar35 >> 6;
      ppUVar30 = &pFVar34->Object;
      pFVar34 = pFVar34 + 1;
      uVar32 = (int)uVar23 + 1;
      uVar35 = uVar35 + 1;
      (&local_ac60)[uVar20] =
           (undefined8 *)
           ((ulonglong)(&local_ac60)[uVar20] |
           (ulonglong)(*ppUVar30 != (UObject *)0x0) << ((byte)uVar23 & 0x3f));
      uVar23 = (ulonglong)uVar32;
    } while (uVar32 < uVar42);
  }
  uVar35 = (ulonglong)local_ac60 & local_ac68;
  uVar32 = 0x400 - (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar23 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
  uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
  uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar23 >> 0x38;
  bVar13 = (byte)(uVar23 >> 0x38);
  uVar42 = (uint)bVar13;
  if (uVar32 <= bVar13) {
    do {
      uVar43 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
      local_ad10[0] = uVar35;
      uVar42 = uVar43 + uVar32;
      if (uVar43 < uVar42) {
        bVar13 = (byte)uVar38 & 0x3f;
        uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
        do {
          uVar36 = uVar38 >> 6;
          (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar43].Object =
               (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
          uVar38 = (ulonglong)((int)uVar38 + 1);
          uVar43 = uVar43 + ((local_ad10[uVar36] & uVar23) != 0);
          uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
        } while (uVar43 < uVar42);
      }
      pTVar7 = &(pTVar18->ImmutableBatcher).ValidatedReferences;
      pTVar7->Num = pTVar7->Num + uVar32;
      if (((pTVar18->ImmutableBatcher).ValidatedReferences.Num != 0x400) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x686,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
      ::DrainValidatedFull
                ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                  *)this_01);
      uVar42 = (int)uVar20 - uVar32;
      uVar20 = (ulonglong)uVar42;
      uVar32 = 0x400;
    } while (0x3ff < uVar42);
  }
  uVar32 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  local_ad10[1] = uVar35;
  uVar43 = uVar32 + uVar42;
  if (uVar32 < uVar43) {
    bVar13 = (byte)uVar38 & 0x3f;
    uVar23 = 1L << bVar13 | 1UL >> 0x40 - bVar13;
    do {
      uVar35 = uVar38 >> 6;
      (pTVar18->ImmutableBatcher).ValidatedReferences.Entries[uVar32].Object =
           (pTVar18->ImmutableBatcher).UnvalidatedReferences.Entries[uVar38].Object;
      uVar38 = (ulonglong)((int)uVar38 + 1);
      uVar32 = uVar32 + ((local_ad10[uVar35 + 1] & uVar23) != 0);
      uVar23 = uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0);
    } while (uVar32 < uVar43);
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num + uVar42;
  (pTVar18->ImmutableBatcher).ValidatedReferences.Num = uVar42;
  if ((uVar42 == 0x400) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ValidatedReferences.IsFull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0x68c,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar42 = (pTVar18->ImmutableBatcher).ValidatedReferences.Num;
  uVar38 = (ulonglong)uVar42;
  (pTVar18->ImmutableBatcher).UnvalidatedReferences.Num = 0;
  if (uVar42 < 0x401) {
    if (0x40 < uVar42) goto LAB_142050217;
    uVar23 = uVar38;
    if (uVar42 != 0) {
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
      puVar28 = local_9848;
      uVar23 = uVar38;
      do {
        ppUVar30 = &pFVar34->Object;
        pFVar34 = pFVar34 + 1;
        *puVar28 = *(uint *)&(*ppUVar30)->field_0xc;
        uVar23 = uVar23 - 1;
        puVar28 = puVar28 + 1;
      } while (uVar23 != 0);
      goto LAB_1420502e9;
    }
LAB_1420506c7:
    (pTVar18->ImmutableBatcher).ValidatedReferences.Num = 0;
  }
  else {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num <= ValidatedBatchSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                        ,0x6a5,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_142050217:
    lVar26 = 0x10;
    do {
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    puVar28 = local_9848;
    pFVar34 = (pTVar18->ImmutableBatcher).ValidatedReferences.Entries;
    uVar23 = uVar38;
    do {
      *puVar28 = *(uint *)&pFVar34->Object->field_0xc;
      pFVar34 = pFVar34 + 1;
      puVar28 = puVar28 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
LAB_1420502e9:
    puVar31 = auStack_4440;
    puVar28 = local_9848;
    uVar23 = uVar38;
    do {
      uVar32 = *puVar28;
      uVar43 = uVar32 >> 0x10;
      local_ad58 = CONCAT44(local_ad58._4_4_,uVar32) & 0xffffffff0000ffff;
      if (((GUObjectArray.ObjObjects.NumElements <= (int)uVar32) || ((int)uVar32 < 0)) &&
         (local_ad78 = uVar32,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x362,L"IsValidIndex(%d)"), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar43) {
        local_ad70 = GUObjectArray.ObjObjects.NumChunks;
        local_ad78 = uVar43;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChunkIndex < (uint32)NumChunks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar32) {
        local_ad70 = GUObjectArray.ObjObjects.MaxElements;
        local_ad78 = uVar32;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < MaxElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                            ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pFVar21 = GUObjectArray.ObjObjects.Objects[uVar43];
      if ((pFVar21 == (FUObjectItem *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chunk",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x366,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar28 = puVar28 + 1;
      *puVar31 = pFVar21 + (local_ad58 & 0xffffffff);
      puVar31 = puVar31 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    if (uVar42 < 0x41) {
      uVar23 = uVar38;
      if (uVar42 == 0) goto LAB_1420506c7;
      do {
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        uVar23 = uVar23 - 1;
        puVar31 = puVar31 + 2;
      } while (uVar23 != 0);
    }
    else {
      memset(local_448,0,0x400);
      lVar26 = 0x10;
      do {
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar31 = &local_4448;
      uVar23 = uVar38;
      do {
        *(int *)puVar31 = (int)((ulonglong)*(undefined8 *)puVar31[1] >> 0x20);
        puVar31 = puVar31 + 2;
        uVar23 = uVar23 - 1;
        this_01 = local_ad38;
      } while (uVar23 != 0);
    }
    local_ac60 = &local_4448;
    local_ac68 = uVar38;
    pFVar34 = (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                 *)this_01)->ValidatedReferences).Entries;
    do {
      EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      uVar14 = *local_ac60;
      puVar9 = (ulonglong *)local_ac60[1];
      lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar10 = pFVar34->Object;
      pFVar8 = ((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
                 *)this_01)->Context;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)(*puVar9 >> 0x20)) == Borrowed) {
LAB_1420505ba:
        if ((~(byte)((uint)uVar14 >> 0x17) & 0 < *(int *)((longlong)puVar9 + 0x14)) != 0) {
          pFVar21 = FChunkedFixedUObjectArray::operator[]
                              (&GUObjectArray.ObjObjects,*(int *)((longlong)puVar9 + 0x14));
          do {
            uVar38 = *puVar9;
            uVar42 = (uint)(uVar38 >> 0x20);
            if ((uVar42 >> 0x17 & 1) != 0) goto LAB_14205069e;
            if (((ulonglong)puVar9 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            uVar23 = *puVar9;
            if (uVar38 == uVar23) {
              *puVar9 = (longlong)(int)uVar42 << 0x20 | (longlong)(int)uVar38 | 0x80000000000000;
            }
            EVar16 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            UNLOCK();
          } while (uVar38 != uVar23);
          lVar26 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x20)) !=
              Borrowed) {
            uVar38 = (pFVar21->field0_0x0).FlagsAndRefCount;
            do {
              LOCK();
              uVar23 = (pFVar21->field0_0x0).FlagsAndRefCount;
              bVar19 = uVar38 == uVar23;
              if (bVar19) {
                (pFVar21->field0_0x0).FlagsAndRefCount = uVar38 & ~(lVar26 << 0x20);
                uVar23 = uVar38;
              }
              UNLOCK();
              uVar38 = uVar23;
            } while (!bVar19);
            LOCK();
            (pFVar21->field0_0x0).FlagsAndRefCount =
                 (pFVar21->field0_0x0).FlagsAndRefCount |
                 (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
            UNLOCK();
            if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) != Borrowed) {
              uVar42 = pFVar21->ClusterRootIndex;
              local_acf8[0].Queue = &pFVar8->ObjectsToSerialize;
              pTVar29 = local_acf8;
              goto LAB_142050697;
            }
          }
        }
      }
      else {
        uVar38 = *puVar9;
        do {
          LOCK();
          uVar23 = *puVar9;
          bVar19 = uVar38 == uVar23;
          if (bVar19) {
            *puVar9 = uVar38 & ~(lVar26 << 0x20);
            uVar23 = uVar38;
          }
          UNLOCK();
          uVar38 = uVar23;
        } while (!bVar19);
        LOCK();
        *puVar9 = *puVar9 | (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar16 & (EInternalObjectFlags)(uVar23 >> 0x20)) == Borrowed) goto LAB_1420505ba;
        pFVar1 = &pFVar8->ObjectsToSerialize;
        if (((uint)uVar14 >> 0x18 & 1) == 0) {
          *pFVar1->WipIt = pUVar10;
          pFVar1->WipIt = pFVar1->WipIt + 1;
          if (pFVar1->WipIt == ((pFVar8->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(pFVar1);
          }
        }
        else {
          pTVar29 = &local_ad00;
          uVar42 = *(uint *)((longlong)puVar9 + 0x14);
          local_ad00.Queue = pFVar1;
LAB_142050697:
          MarkReferencedClustersAsReachable<13,UE::GC::TAddAdapter<13>_>(~uVar42,pTVar29);
        }
      }
LAB_14205069e:
      pFVar34 = pFVar34 + 1;
      local_ac60 = local_ac60 + 2;
      local_ac68 = local_ac68 - 1;
    } while (local_ac68 != 0);
    (((TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
       *)this_01)->ValidatedReferences).Num = 0;
  }
  return;
}

// FlushToStructBlocks @ 142050710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_142050786;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_142050786:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_142050928:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_142050928;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_142050c62;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_142050c62:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// FlushToStructBlocks @ 142050cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_142050d36;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_142050d36:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_142050ed8:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_142050ed8;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_142051212;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_142051212:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// FlushToStructBlocks @ 142051270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_1420512e6;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_1420512e6:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_142051488:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_142051488;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_1420517c2;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_1420517c2:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// FlushToStructBlocks @ 142051820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_142051896;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_142051896:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_142051a38:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_142051a38;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_142051d72;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_142051d72:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// FlushToStructBlocks @ 142051dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_142051e46;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_142051e46:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_142051fe8:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_142051fe8;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_142052322;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_142052322:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// FlushToStructBlocks @ 142052380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_1420523f6;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_1420523f6:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_142052598:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_142052598;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_1420528d2;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_1420528d2:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// FlushToStructBlocks @ 142052930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_1420529a6;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_1420529a6:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_142052b48:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_142052b48;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_142052e82;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_142052e82:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// FlushToStructBlocks @ 142052ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_>::FlushToStructBlocks
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *this)

{
  FStructBlockifier *pFVar1;
  FStructArrayWithoutStride *pFVar2;
  ulonglong uVar3;
  FStructArrayBlock *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FStructArrayBlock *pFVar14;
  longlong lVar15;
  FStructArray *pFVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FSparseStructArray *pFVar21;
  uint *puVar22;
  uint *puVar23;
  uchar *puVar24;
  uint *puVar25;
  FStructArray *pFVar26;
  undefined1 auStack_178 [32];
  longlong local_158;
  TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *local_148;
  FSparseStructArray *local_140;
  uint local_138;
  FSparseStructArray *local_130;
  ulong64 local_128;
  uchar *puStack_120;
  int local_118;
  uint uStack_114;
  ulong64 local_110;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_108;
  ulonglong local_100;
  FStructArrayWithoutStride local_f8;
  FStructArray local_d8;
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar19 = (this->StructBatcher).UnvalidatedSparseStructArrays.Num;
  local_148 = this;
  if (uVar19 < 0x21) {
    if (uVar19 != 0) goto LAB_142052f56;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= ArrayBatchSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x7d1,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
LAB_142052f56:
    local_140 = (this->StructBatcher).UnvalidatedSparseStructArrays.Entries;
    if (((int)uVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    pFVar21 = local_140 + (int)uVar19;
    local_130 = pFVar21;
    if (local_140 != pFVar21) {
      do {
        pTVar8 = local_148;
        uVar3._0_4_ = local_140->Num;
        uVar3._4_4_ = local_140->Stride;
        local_110 = (local_140->Schema).Handle;
        pTVar7 = local_140->Array;
        pTStack_108 = pTVar7;
        local_100 = uVar3;
        if ((undefined4)uVar3 != 0) {
          local_118 = (undefined4)uVar3;
          puVar24 = (uchar *)(pTVar7->Elements).Data._padding_;
          this = pTVar8;
          local_128 = local_110;
          puStack_120 = puVar24;
          uStack_114 = uVar3._4_4_;
          if ((pTVar7->Elements).NumFreeIndices == 0) {
            pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
            (pFVar26->Schema).Handle = local_110;
            pFVar26->Data = puVar24;
            pFVar26->Num = (undefined4)uVar3;
            pFVar26->Stride = uVar3._4_4_;
            pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
            pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
            pFVar1->WipIt = pFVar1->WipIt + 1;
            if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
              pFVar14 = FPageAllocator::AllocatePage
                                  (&GScratchPages,
                                   (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex);
              (pTVar8->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
              pFVar14->NextFull = pFVar4;
              (pTVar8->StructBatcher).ValidatedStructArrays.WipIt =
                   ((pTVar8->StructBatcher).ValidatedStructArrays.Wip)->Data;
            }
          }
          else {
            local_138 = (pTVar7->Elements).Data.ArrayNum;
            iVar13 = 0;
            uVar19 = 0;
            local_118 = 0;
            if (local_138 != 0) {
              uVar17 = 1;
              do {
                if (((int)uVar19 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19)
                   ) {
LAB_1420530f8:
                  if (0 < iVar13) {
                    pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                    (pFVar26->Schema).Handle = local_128;
                    pFVar26->Data = puStack_120;
                    pFVar26->Num = local_118;
                    pFVar26->Stride = uStack_114;
                    pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                    pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                    pFVar1->WipIt = pFVar1->WipIt + 1;
                    if ((local_148->StructBatcher).ValidatedStructArrays.WipIt ==
                        pFVar4->Data + 0xa8) {
                      pFVar14 = FPageAllocator::AllocatePage
                                          (&GScratchPages,
                                           (local_148->StructBatcher).ValidatedStructArrays.
                                           WorkerIndex);
                      (local_148->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                      pFVar14->NextFull = pFVar4;
                      (local_148->StructBatcher).ValidatedStructArrays.WipIt =
                           ((local_148->StructBatcher).ValidatedStructArrays.Wip)->Data;
                    }
                    puVar24 = puVar24 + (uint)(uVar3._4_4_ * iVar13);
                    iVar13 = 0;
                    local_118 = 0;
                  }
                  puVar24 = puVar24 + (uVar3 >> 0x20);
                  puStack_120 = puVar24;
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  FVar5 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar20 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                    FVar20 = FVar5;
                  }
                  uVar11 = uVar19;
                  if ((int)uVar19 < 0) {
                    uVar11 = uVar19 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0
                     ) goto LAB_1420530f8;
                  local_118 = iVar13 + 1;
                  iVar13 = local_118;
                }
                this = local_148;
                uVar19 = uVar19 + 1;
                uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
              } while (uVar19 < local_138);
              pFVar21 = local_130;
              if (0 < iVar13) {
                pFVar26 = (local_148->StructBatcher).ValidatedStructArrays.WipIt;
                (pFVar26->Schema).Handle = local_128;
                pFVar26->Data = puStack_120;
                pFVar26->Num = local_118;
                pFVar26->Stride = uStack_114;
                pFVar4 = (local_148->StructBatcher).ValidatedStructArrays.Wip;
                pFVar1 = &(local_148->StructBatcher).ValidatedStructArrays;
                pFVar1->WipIt = pFVar1->WipIt + 1;
                if ((local_148->StructBatcher).ValidatedStructArrays.WipIt == pFVar4->Data + 0xa8) {
                  pFVar14 = FPageAllocator::AllocatePage
                                      (&GScratchPages,
                                       (local_148->StructBatcher).ValidatedStructArrays.WorkerIndex)
                  ;
                  (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
                  pFVar14->NextFull = pFVar4;
                  (this->StructBatcher).ValidatedStructArrays.WipIt =
                       ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
                  pFVar21 = local_130;
                }
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 != pFVar21);
    }
    (this->StructBatcher).UnvalidatedSparseStructArrays.Num = 0;
  }
  uVar19 = (this->StructBatcher).UnvalidatedStructArrays.Num;
  if (uVar19 < 0x21) {
    if (uVar19 == 0) goto LAB_142053432;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num <= UnvalidatedStructArrays.Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x80a,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar17 = 0;
  puVar22 = local_b8;
  if (uVar19 != 0) {
    piVar18 = &(this->StructBatcher).UnvalidatedStructArrays.Entries[0].Num;
    do {
      lVar15 = 0;
      *puVar22 = uVar17;
      iVar13 = *piVar18;
      piVar18 = piVar18 + 6;
      if (0 < iVar13) {
        lVar15 = 4;
      }
      uVar17 = uVar17 + 1;
      puVar22 = (uint *)((longlong)puVar22 + lVar15);
    } while (uVar17 < uVar19);
  }
  puVar25 = local_b8;
  if (local_b8 != puVar22) {
    pFVar1 = &(this->StructBatcher).ValidatedStructArrays;
    do {
      lVar15 = ((longlong)(this->StructBatcher).ValidatedStructArrays.Wip +
               (0xfc0 - (longlong)pFVar1->WipIt)) / 0x18;
      if ((lVar15 != (int)lVar15) &&
         (local_158 = lVar15,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar9)
         ) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar23 = puVar22;
      if (puVar25 + (int)lVar15 < puVar22) {
        puVar23 = puVar25 + (int)lVar15;
      }
      iVar13 = (int)((longlong)puVar23 - (longlong)puVar25 >> 2);
      if (((iVar13 < 1) || (iVar12 = FStructBlockifier::GetSlack(pFVar1), iVar12 < iVar13)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0 && Num <= GetSlack()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x730,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar26 = pFVar1->WipIt;
      pFVar4 = (this->StructBatcher).ValidatedStructArrays.Wip;
      pFVar1->WipIt = pFVar26 + iVar13;
      if (pFVar26 + iVar13 == pFVar4->Data + 0xa8) {
        pFVar14 = FPageAllocator::AllocatePage
                            (&GScratchPages,(this->StructBatcher).ValidatedStructArrays.WorkerIndex)
        ;
        (this->StructBatcher).ValidatedStructArrays.Wip = pFVar14;
        pFVar14->NextFull = pFVar4;
        pFVar1->WipIt = ((this->StructBatcher).ValidatedStructArrays.Wip)->Data;
      }
      do {
        uVar19 = *puVar25;
        puVar25 = puVar25 + 1;
        pFVar2 = (this->StructBatcher).UnvalidatedStructArrays.Entries + uVar19;
        local_f8.Schema.Handle = (pFVar2->Schema).Handle;
        local_f8.Data = pFVar2->Data;
        local_f8._16_8_ =
             *(undefined8 *)
              ((longlong)(&(this->StructBatcher).UnvalidatedSparseStructArrays + 1) +
              (ulonglong)uVar19 * 0x18 + 0x50);
        pFVar16 = CopyAndLoadStride(&local_d8,&local_f8);
        iVar13 = pFVar16->Num;
        uVar19 = pFVar16->Stride;
        puVar24 = pFVar16->Data;
        (pFVar26->Schema).Handle = (pFVar16->Schema).Handle;
        pFVar26->Data = puVar24;
        pFVar26->Num = iVar13;
        pFVar26->Stride = uVar19;
        pFVar26 = pFVar26 + 1;
      } while (puVar25 != puVar23);
    } while (puVar25 != puVar22);
  }
  (this->StructBatcher).UnvalidatedStructArrays.Num = 0;
LAB_142053432:
  iVar13 = FStructBlockifier::PartialNum(&(this->StructBatcher).ValidatedStructArrays);
  return 0 < iVar13 ||
         ((this->StructBatcher).ValidatedStructArrays.Wip)->NextFull != (FStructArrayBlock *)0x0;
}

// HandleReferenceDirectly @ 14205cb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  bool *pbVar1;
  uint *puVar2;
  FWorkerContext *pFVar3;
  UObjectBase *this_00;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  FUObjectItem *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FWorkBlockifier *this_01;
  TAddAdapter<1> *pTVar12;
  UObject *pUVar13;
  longlong lVar14;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<1> local_98;
  TAddAdapter<1> local_90;
  TAddAdapter<1> local_88;
  TAddAdapter<1> local_80 [2];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar3 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar11 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205d0fb;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    pbVar1 = &(pFVar3->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 |
                    (byte)((ulonglong)((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15) & 1);
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205cd17:
      if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205d0fb;
      pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
      if ((pFVar9 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      do {
        lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
        uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
        if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205d0fb;
        if (((ulonglong)pFVar8 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
        }
        EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar6);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205d0fb;
      uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar9->field0_0x0).FlagsAndRefCount =
           (pFVar9->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205d0fb;
      local_90.Queue = &pFVar3->ObjectsToSerialize;
      pTVar12 = &local_90;
      goto LAB_14205d0f1;
    }
    uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205cd17;
    local_98.Queue = &pFVar3->ObjectsToSerialize;
    if ((uVar7 >> 0x18 & 1) == 0) {
LAB_14205cce0:
      this_01 = &pFVar3->ObjectsToSerialize;
      *this_01->WipIt = pUVar13;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockAsync(this_01);
      }
      goto LAB_14205d0fb;
    }
    pTVar12 = &local_98;
    uVar7 = pFVar8->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205d0fb;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar7 >> 0x15 & 1) != 0) {
      if ((param_1 == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencingObject || IsEliminatingGarbage()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xba5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *param_2 = (UObject *)0x0;
      goto LAB_14205d0fb;
    }
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        local_88.Queue = &pFVar3->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) goto LAB_14205cce0;
        pTVar12 = &local_88;
        uVar7 = pFVar8->ClusterRootIndex;
        goto LAB_14205d0f4;
      }
    }
    if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205d0fb;
    pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
    if ((pFVar9 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    do {
      lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
      uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
      if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205d0fb;
      if (((ulonglong)pFVar8 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
      }
      EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar6);
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205d0fb;
    uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar9->field0_0x0).FlagsAndRefCount =
         (pFVar9->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205d0fb;
    local_80[0].Queue = &pFVar3->ObjectsToSerialize;
    pTVar12 = local_80;
LAB_14205d0f1:
    uVar7 = pFVar9->ClusterRootIndex;
  }
LAB_14205d0f4:
  MarkReferencedClustersAsReachable<1,UE::GC::TAddAdapter<1>_>(~uVar7,pTVar12);
LAB_14205d0fb:
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 1;
  return;
}

// HandleReferenceDirectly @ 14205d130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  uint *puVar1;
  FWorkerContext *pFVar2;
  UObjectBase *this_00;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FWorkBlockifier *this_01;
  TAddAdapter<4> *pTVar11;
  UObject *pUVar12;
  longlong lVar13;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<4> local_98;
  TAddAdapter<4> local_90 [2];
  TAddAdapter<4> local_80;
  TAddAdapter<4> local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar2 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar10 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205d6cb;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205d317:
      if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205d6cb;
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      do {
        lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205d6cb;
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
        }
        EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205d6cb;
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205d6cb;
      local_90[0].Queue = &pFVar2->ObjectsToSerialize;
      pTVar11 = local_90;
      goto LAB_14205d6c1;
    }
    uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar7->field0_0x0).FlagsAndRefCount =
         (pFVar7->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205d317;
    local_98.Queue = &pFVar2->ObjectsToSerialize;
    if ((uVar6 >> 0x18 & 1) == 0) {
LAB_14205d2e0:
      this_01 = &pFVar2->ObjectsToSerialize;
      *this_01->WipIt = pUVar12;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockSync(this_01);
      }
      goto LAB_14205d6cb;
    }
    pTVar11 = &local_98;
    uVar6 = pFVar7->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205d6cb;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar6 >> 0x15 & 1) != 0) {
      *param_2 = (UObject *)0x0;
      goto LAB_14205d6cb;
    }
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) != Borrowed) {
        local_80.Queue = &pFVar2->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) goto LAB_14205d2e0;
        pTVar11 = &local_80;
        uVar6 = pFVar7->ClusterRootIndex;
        goto LAB_14205d6c4;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205d6cb;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    do {
      lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
      uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205d6cb;
      if (((ulonglong)pFVar7 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
      }
      EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar5);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205d6cb;
    uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205d6cb;
    local_78.Queue = &pFVar2->ObjectsToSerialize;
    pTVar11 = &local_78;
LAB_14205d6c1:
    uVar6 = pFVar8->ClusterRootIndex;
  }
LAB_14205d6c4:
  MarkReferencedClustersAsReachable<4,UE::GC::TAddAdapter<4>_>(~uVar6,pTVar11);
LAB_14205d6cb:
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleReferenceDirectly @ 14205d700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  uint *puVar1;
  FWorkerContext *pFVar2;
  UObjectBase *this_00;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FWorkBlockifier *this_01;
  TAddAdapter<5> *pTVar11;
  UObject *pUVar12;
  longlong lVar13;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<5> local_98;
  TAddAdapter<5> local_90 [2];
  TAddAdapter<5> local_80;
  TAddAdapter<5> local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar2 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar10 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205dc9b;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205d8e7:
      if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205dc9b;
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      do {
        lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205dc9b;
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
        }
        EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205dc9b;
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205dc9b;
      local_90[0].Queue = &pFVar2->ObjectsToSerialize;
      pTVar11 = local_90;
      goto LAB_14205dc91;
    }
    uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar7->field0_0x0).FlagsAndRefCount =
         (pFVar7->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205d8e7;
    local_98.Queue = &pFVar2->ObjectsToSerialize;
    if ((uVar6 >> 0x18 & 1) == 0) {
LAB_14205d8b0:
      this_01 = &pFVar2->ObjectsToSerialize;
      *this_01->WipIt = pUVar12;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockAsync(this_01);
      }
      goto LAB_14205dc9b;
    }
    pTVar11 = &local_98;
    uVar6 = pFVar7->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205dc9b;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar6 >> 0x15 & 1) != 0) {
      *param_2 = (UObject *)0x0;
      goto LAB_14205dc9b;
    }
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) != Borrowed) {
        local_80.Queue = &pFVar2->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) goto LAB_14205d8b0;
        pTVar11 = &local_80;
        uVar6 = pFVar7->ClusterRootIndex;
        goto LAB_14205dc94;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205dc9b;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    do {
      lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
      uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205dc9b;
      if (((ulonglong)pFVar7 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
      }
      EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar5);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205dc9b;
    uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205dc9b;
    local_78.Queue = &pFVar2->ObjectsToSerialize;
    pTVar11 = &local_78;
LAB_14205dc91:
    uVar6 = pFVar8->ClusterRootIndex;
  }
LAB_14205dc94:
  MarkReferencedClustersAsReachable<5,UE::GC::TAddAdapter<5>_>(~uVar6,pTVar11);
LAB_14205dc9b:
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleReferenceDirectly @ 14205dcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  bool *pbVar1;
  uint *puVar2;
  FWorkerContext *pFVar3;
  UObjectBase *this_00;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  FUObjectItem *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FWorkBlockifier *this_01;
  TAddAdapter<8> *pTVar12;
  UObject *pUVar13;
  longlong lVar14;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<8> local_98;
  TAddAdapter<8> local_90;
  TAddAdapter<8> local_88;
  TAddAdapter<8> local_80 [2];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar3 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar11 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205e2ab;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    pbVar1 = &(pFVar3->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 |
                    (byte)((ulonglong)((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15) & 1);
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205dec7:
      if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205e2ab;
      pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
      if ((pFVar9 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      do {
        lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
        uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
        if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205e2ab;
        if (((ulonglong)pFVar8 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
        }
        EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar6);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205e2ab;
      uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar9->field0_0x0).FlagsAndRefCount =
           (pFVar9->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205e2ab;
      local_90.Queue = &pFVar3->ObjectsToSerialize;
      pTVar12 = &local_90;
      goto LAB_14205e2a1;
    }
    uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205dec7;
    local_98.Queue = &pFVar3->ObjectsToSerialize;
    if ((uVar7 >> 0x18 & 1) == 0) {
LAB_14205de90:
      this_01 = &pFVar3->ObjectsToSerialize;
      *this_01->WipIt = pUVar13;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockSync(this_01);
      }
      goto LAB_14205e2ab;
    }
    pTVar12 = &local_98;
    uVar7 = pFVar8->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205e2ab;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar7 >> 0x15 & 1) != 0) {
      if ((param_1 == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencingObject || IsEliminatingGarbage()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xba5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *param_2 = (UObject *)0x0;
      goto LAB_14205e2ab;
    }
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        local_88.Queue = &pFVar3->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) goto LAB_14205de90;
        pTVar12 = &local_88;
        uVar7 = pFVar8->ClusterRootIndex;
        goto LAB_14205e2a4;
      }
    }
    if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205e2ab;
    pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
    if ((pFVar9 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    do {
      lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
      uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
      if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205e2ab;
      if (((ulonglong)pFVar8 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
      }
      EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar6);
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205e2ab;
    uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar9->field0_0x0).FlagsAndRefCount =
         (pFVar9->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205e2ab;
    local_80[0].Queue = &pFVar3->ObjectsToSerialize;
    pTVar12 = local_80;
LAB_14205e2a1:
    uVar7 = pFVar9->ClusterRootIndex;
  }
LAB_14205e2a4:
  MarkReferencedClustersAsReachable<8,UE::GC::TAddAdapter<8>_>(~uVar7,pTVar12);
LAB_14205e2ab:
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 1;
  return;
}

// HandleReferenceDirectly @ 14205e2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  bool *pbVar1;
  uint *puVar2;
  FWorkerContext *pFVar3;
  UObjectBase *this_00;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  FUObjectItem *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FWorkBlockifier *this_01;
  TAddAdapter<9> *pTVar12;
  UObject *pUVar13;
  longlong lVar14;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<9> local_98;
  TAddAdapter<9> local_90;
  TAddAdapter<9> local_88;
  TAddAdapter<9> local_80 [2];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar3 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar11 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205e8bb;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    pbVar1 = &(pFVar3->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 |
                    (byte)((ulonglong)((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15) & 1);
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205e4d7:
      if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205e8bb;
      pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
      if ((pFVar9 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      do {
        lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
        uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
        if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205e8bb;
        if (((ulonglong)pFVar8 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
        }
        EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar6);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205e8bb;
      uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar9->field0_0x0).FlagsAndRefCount =
           (pFVar9->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205e8bb;
      local_90.Queue = &pFVar3->ObjectsToSerialize;
      pTVar12 = &local_90;
      goto LAB_14205e8b1;
    }
    uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205e4d7;
    local_98.Queue = &pFVar3->ObjectsToSerialize;
    if ((uVar7 >> 0x18 & 1) == 0) {
LAB_14205e4a0:
      this_01 = &pFVar3->ObjectsToSerialize;
      *this_01->WipIt = pUVar13;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockAsync(this_01);
      }
      goto LAB_14205e8bb;
    }
    pTVar12 = &local_98;
    uVar7 = pFVar8->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205e8bb;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar7 >> 0x15 & 1) != 0) {
      if ((param_1 == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencingObject || IsEliminatingGarbage()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xba5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *param_2 = (UObject *)0x0;
      goto LAB_14205e8bb;
    }
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        local_88.Queue = &pFVar3->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) goto LAB_14205e4a0;
        pTVar12 = &local_88;
        uVar7 = pFVar8->ClusterRootIndex;
        goto LAB_14205e8b4;
      }
    }
    if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205e8bb;
    pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
    if ((pFVar9 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    do {
      lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
      uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
      if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205e8bb;
      if (((ulonglong)pFVar8 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
      }
      EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar6);
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205e8bb;
    uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar9->field0_0x0).FlagsAndRefCount =
         (pFVar9->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205e8bb;
    local_80[0].Queue = &pFVar3->ObjectsToSerialize;
    pTVar12 = local_80;
LAB_14205e8b1:
    uVar7 = pFVar9->ClusterRootIndex;
  }
LAB_14205e8b4:
  MarkReferencedClustersAsReachable<9,UE::GC::TAddAdapter<9>_>(~uVar7,pTVar12);
LAB_14205e8bb:
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 1;
  return;
}

// HandleReferenceDirectly @ 14205e8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  bool *pbVar1;
  uint *puVar2;
  FWorkerContext *pFVar3;
  UObjectBase *this_00;
  code *pcVar4;
  EInternalObjectFlags EVar5;
  bool bVar6;
  uint uVar7;
  FUObjectItem *pFVar8;
  FUObjectItem *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FWorkBlockifier *this_01;
  TAddAdapter<0> *pTVar12;
  UObject *pUVar13;
  longlong lVar14;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<0> local_98;
  TAddAdapter<0> local_90;
  TAddAdapter<0> local_88;
  TAddAdapter<0> local_80 [2];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar3 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar11 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205eecb;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    pbVar1 = &(pFVar3->Stats).bFoundGarbageRef;
    *pbVar1 = (bool)(*pbVar1 |
                    (byte)((ulonglong)((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15) & 1);
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205eae7:
      if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205eecb;
      pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
      if ((pFVar9 == (FUObjectItem *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      do {
        lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
        uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
        if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205eecb;
        if (((ulonglong)pFVar8 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
        }
        EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar6);
      lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205eecb;
      uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar9->field0_0x0).FlagsAndRefCount =
           (pFVar9->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205eecb;
      local_90.Queue = &pFVar3->ObjectsToSerialize;
      pTVar12 = &local_90;
      goto LAB_14205eec1;
    }
    uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205eae7;
    local_98.Queue = &pFVar3->ObjectsToSerialize;
    if ((uVar7 >> 0x18 & 1) == 0) {
LAB_14205eab0:
      this_01 = &pFVar3->ObjectsToSerialize;
      *this_01->WipIt = pUVar13;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar3->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockSync(this_01);
      }
      goto LAB_14205eecb;
    }
    pTVar12 = &local_98;
    uVar7 = pFVar8->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar11 < (this->PermanentPool).Size) goto LAB_14205eecb;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar6 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar6) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar13 = *param_2;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar13->field_0xc);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar7 = (uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar7 >> 0x15 & 1) != 0) {
      if ((param_1 == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReferencingObject || IsEliminatingGarbage()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0xba5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *param_2 = (UObject *)0x0;
      goto LAB_14205eecb;
    }
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar11 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar6 = uVar11 == uVar10;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
          uVar10 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar10;
      } while (!bVar6);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        local_88.Queue = &pFVar3->ObjectsToSerialize;
        if ((uVar7 >> 0x18 & 1) == 0) goto LAB_14205eab0;
        pTVar12 = &local_88;
        uVar7 = pFVar8->ClusterRootIndex;
        goto LAB_14205eec4;
      }
    }
    if ((0 < pFVar8->ClusterRootIndex & ~(byte)(uVar7 >> 0x17)) == 0) goto LAB_14205eecb;
    pFVar9 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar8->ClusterRootIndex);
    if ((pFVar9 == (FUObjectItem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    do {
      lVar14 = (pFVar8->field0_0x0).FlagsAndRefCount;
      uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
      if ((uVar7 >> 0x17 & 1) != 0) goto LAB_14205eecb;
      if (((ulonglong)pFVar8 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar14 == (pFVar8->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar14 | 0x80000000000000;
      }
      EVar5 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar6);
    lVar14 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205eecb;
    uVar11 = (pFVar9->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar10 = (pFVar9->field0_0x0).FlagsAndRefCount;
      bVar6 = uVar11 == uVar10;
      if (bVar6) {
        (pFVar9->field0_0x0).FlagsAndRefCount = uVar11 & ~(lVar14 << 0x20);
        uVar10 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar10;
    } while (!bVar6);
    LOCK();
    (pFVar9->field0_0x0).FlagsAndRefCount =
         (pFVar9->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar5 & (EInternalObjectFlags)(uVar10 >> 0x20)) == Borrowed) goto LAB_14205eecb;
    local_80[0].Queue = &pFVar3->ObjectsToSerialize;
    pTVar12 = local_80;
LAB_14205eec1:
    uVar7 = pFVar9->ClusterRootIndex;
  }
LAB_14205eec4:
  MarkReferencedClustersAsReachable<0,UE::GC::TAddAdapter<0>_>(~uVar7,pTVar12);
LAB_14205eecb:
  puVar2 = &(this->Context->Stats).NumReferences;
  *puVar2 = *puVar2 + 1;
  return;
}

// HandleReferenceDirectly @ 14205ef00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  uint *puVar1;
  FWorkerContext *pFVar2;
  UObjectBase *this_00;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FWorkBlockifier *this_01;
  TAddAdapter<12> *pTVar11;
  UObject *pUVar12;
  longlong lVar13;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<12> local_98;
  TAddAdapter<12> local_90 [2];
  TAddAdapter<12> local_80;
  TAddAdapter<12> local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar2 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar10 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205f49b;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205f0e7:
      if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205f49b;
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      do {
        lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205f49b;
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
        }
        EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205f49b;
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205f49b;
      local_90[0].Queue = &pFVar2->ObjectsToSerialize;
      pTVar11 = local_90;
      goto LAB_14205f491;
    }
    uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar7->field0_0x0).FlagsAndRefCount =
         (pFVar7->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205f0e7;
    local_98.Queue = &pFVar2->ObjectsToSerialize;
    if ((uVar6 >> 0x18 & 1) == 0) {
LAB_14205f0b0:
      this_01 = &pFVar2->ObjectsToSerialize;
      *this_01->WipIt = pUVar12;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockSync(this_01);
      }
      goto LAB_14205f49b;
    }
    pTVar11 = &local_98;
    uVar6 = pFVar7->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205f49b;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar6 >> 0x15 & 1) != 0) {
      *param_2 = (UObject *)0x0;
      goto LAB_14205f49b;
    }
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) != Borrowed) {
        local_80.Queue = &pFVar2->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) goto LAB_14205f0b0;
        pTVar11 = &local_80;
        uVar6 = pFVar7->ClusterRootIndex;
        goto LAB_14205f494;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205f49b;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    do {
      lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
      uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205f49b;
      if (((ulonglong)pFVar7 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
      }
      EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar5);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205f49b;
    uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205f49b;
    local_78.Queue = &pFVar2->ObjectsToSerialize;
    pTVar11 = &local_78;
LAB_14205f491:
    uVar6 = pFVar8->ClusterRootIndex;
  }
LAB_14205f494:
  MarkReferencedClustersAsReachable<12,UE::GC::TAddAdapter<12>_>(~uVar6,pTVar11);
LAB_14205f49b:
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleReferenceDirectly @ 14205f4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_>::HandleReferenceDirectly
          (TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_> *this,UObject *param_1,
          UObject **param_2,FMemberId param_3,EKillable param_4)

{
  uint *puVar1;
  FWorkerContext *pFVar2;
  UObjectBase *this_00;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FWorkBlockifier *this_01;
  TAddAdapter<13> *pTVar11;
  UObject *pUVar12;
  longlong lVar13;
  FMemberId local_res8 [2];
  FReferenceToken local_a8;
  FReferenceToken local_a0;
  TAddAdapter<13> local_98;
  TAddAdapter<13> local_90 [2];
  TAddAdapter<13> local_80;
  TAddAdapter<13> local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar2 = this->Context;
  this_00 = (UObjectBase *)*param_2;
  uVar10 = (longlong)this_00 - (this->PermanentPool).Address;
  if (param_4 == No) {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205fa6b;
    param_4 = (EKillable)param_3;
    local_a8.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a8,&local_60,(FMemberId *)&param_4);
      FReferenceToken::GetDescription(&local_a8,&local_70);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
LAB_14205f6b7:
      if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205fa6b;
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      do {
        lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205fa6b;
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
        }
        EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) goto LAB_14205fa6b;
      uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar8->field0_0x0).FlagsAndRefCount =
           (pFVar8->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205fa6b;
      local_90[0].Queue = &pFVar2->ObjectsToSerialize;
      pTVar11 = local_90;
      goto LAB_14205fa61;
    }
    uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar7->field0_0x0).FlagsAndRefCount =
         (pFVar7->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205f6b7;
    local_98.Queue = &pFVar2->ObjectsToSerialize;
    if ((uVar6 >> 0x18 & 1) == 0) {
LAB_14205f680:
      this_01 = &pFVar2->ObjectsToSerialize;
      *this_01->WipIt = pUVar12;
      this_01->WipIt = this_01->WipIt + 1;
      if (this_01->WipIt == ((pFVar2->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
        FWorkBlockifier::PushFullBlockAsync(this_01);
      }
      goto LAB_14205fa6b;
    }
    pTVar11 = &local_98;
    uVar6 = pFVar7->ClusterRootIndex;
  }
  else {
    if (this_00 == (UObjectBase *)0x0 || uVar10 < (this->PermanentPool).Size) goto LAB_14205fa6b;
    local_res8[0] = param_3;
    local_a0.EncodedBits = (ulonglong)param_1 | 1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_00,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_a0,&local_40,local_res8);
      FReferenceToken::GetDescription(&local_a0,&local_50);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    pUVar12 = *param_2;
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&pUVar12->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if ((uVar6 >> 0x15 & 1) != 0) {
      *param_2 = (UObject *)0x0;
      goto LAB_14205fa6b;
    }
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar10 == uVar9;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
          uVar9 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar9;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) != Borrowed) {
        local_80.Queue = &pFVar2->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) goto LAB_14205f680;
        pTVar11 = &local_80;
        uVar6 = pFVar7->ClusterRootIndex;
        goto LAB_14205fa64;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) == 0) goto LAB_14205fa6b;
    pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
    if ((pFVar8 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    do {
      lVar13 = (pFVar7->field0_0x0).FlagsAndRefCount;
      uVar6 = (uint)((ulonglong)lVar13 >> 0x20);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14205fa6b;
      if (((ulonglong)pFVar7 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar5 = lVar13 == (pFVar7->field0_0x0).FlagsAndRefCount;
      if (bVar5) {
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar13 | 0x80000000000000;
      }
      EVar4 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      UNLOCK();
    } while (!bVar5);
    lVar13 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) goto LAB_14205fa6b;
    uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
      bVar5 = uVar10 == uVar9;
      if (bVar5) {
        (pFVar8->field0_0x0).FlagsAndRefCount = uVar10 & ~(lVar13 << 0x20);
        uVar9 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar9;
    } while (!bVar5);
    LOCK();
    (pFVar8->field0_0x0).FlagsAndRefCount =
         (pFVar8->field0_0x0).FlagsAndRefCount |
         (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
    UNLOCK();
    if ((EVar4 & (EInternalObjectFlags)(uVar9 >> 0x20)) == Borrowed) goto LAB_14205fa6b;
    local_78.Queue = &pFVar2->ObjectsToSerialize;
    pTVar11 = &local_78;
LAB_14205fa61:
    uVar6 = pFVar8->ClusterRootIndex;
  }
LAB_14205fa64:
  MarkReferencedClustersAsReachable<13,UE::GC::TAddAdapter<13>_>(~uVar6,pTVar11);
LAB_14205fa6b:
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

