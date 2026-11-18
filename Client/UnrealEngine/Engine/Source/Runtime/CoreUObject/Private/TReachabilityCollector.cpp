// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 72

// AddStableReference @ 142018280

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<1>::AddStableReference
          (TReachabilityCollector<1> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018300

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<1>::AddStableReference
          (TReachabilityCollector<1> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018380

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<4>::AddStableReference
          (TReachabilityCollector<4> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 1420183f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<4>::AddStableReference
          (TReachabilityCollector<4> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018460

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<5>::AddStableReference
          (TReachabilityCollector<5> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 1420184d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<5>::AddStableReference
          (TReachabilityCollector<5> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018540

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<8>::AddStableReference
          (TReachabilityCollector<8> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 1420185c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<8>::AddStableReference
          (TReachabilityCollector<8> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018640

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<9>::AddStableReference
          (TReachabilityCollector<9> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 1420186c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<9>::AddStableReference
          (TReachabilityCollector<9> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018740

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<0>::AddStableReference
          (TReachabilityCollector<0> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 1420187c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<0>::AddStableReference
          (TReachabilityCollector<0> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018840

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<12>::AddStableReference
          (TReachabilityCollector<12> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 1420188b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<12>::AddStableReference
          (TReachabilityCollector<12> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018920

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<13>::AddStableReference
          (TReachabilityCollector<13> *this,UObject **param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object = *param_1;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReference @ 142018990

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<13>::AddStableReference
          (TReachabilityCollector<13> *this,TObjectPtr<UObject> *param_1)

{
  uint uVar1;
  uint *puVar2;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar3;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar4;
  TBatchQueue<UE::GC::FImmutableReference,1024,64> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
  *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong auStack_58 [2];
  ulong64 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    *(TObjectPtr<UObject>_u_0 *)
     ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries +
     (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num) = param_1->field0_0x0;
    pTVar4 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
    pTVar4->Num = pTVar4->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
      uVar16 = 2;
      puVar2 = &(this_00->Context->Stats).NumReferences;
      *puVar2 = *puVar2 + 0x20;
      uVar9 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Address;
      uVar12 = (this->Dispatcher).ImmutableBatcher.PermanentPool.Size;
      auStack_58[1] = 0;
      uStack_48 = uVar9;
      uStack_40 = uVar12;
      auStack_58[0] = 0;
      uVar15 = 2;
      do {
        uVar11 = uVar15 - 2;
        uVar1 = uVar15 - 1;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar11 = uVar15 + 1;
        auStack_58[(ulonglong)(uVar15 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar15 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object -
             uVar9) << ((byte)uVar15 & 0x3f);
        uVar1 = uVar15 + 2;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 3;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 4;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 5;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 6;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 7;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 8;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 9;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 10;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xb;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        uVar1 = uVar15 + 0xc;
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xd;
        auStack_58[(ulonglong)(uVar1 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar1 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar1].Object - uVar9
             ) << ((byte)uVar1 & 0x3f);
        auStack_58[(ulonglong)(uVar11 >> 6) + 1] =
             auStack_58[(ulonglong)(uVar11 >> 6) + 1] |
             (ulonglong)
             (uVar12 <=
             (longlong)
             (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object -
             uVar9) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar15 + 0xe;
        uVar15 = uVar15 + 0x10;
      } while (uVar11 < 0x20);
      do {
        uVar11 = uVar16 - 2;
        uVar15 = uVar16 - 1;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 1;
        auStack_58[uVar16 >> 6] =
             auStack_58[uVar16 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar16].Object !=
             (UObject *)0x0) << ((byte)uVar16 & 0x3f);
        uVar11 = uVar16 + 2;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 3;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 4;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 5;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 6;
        uVar11 = uVar16 + 7;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 8;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 9;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 10;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xb;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        uVar15 = uVar16 + 0xc;
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar16 + 0xd;
        auStack_58[uVar15 >> 6] =
             auStack_58[uVar15 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar15].Object !=
             (UObject *)0x0) << ((byte)uVar15 & 0x3f);
        auStack_58[uVar11 >> 6] =
             auStack_58[uVar11 >> 6] |
             (ulonglong)
             ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar11].Object !=
             (UObject *)0x0) << ((byte)uVar11 & 0x3f);
        uVar15 = uVar16 + 0xe;
        uVar16 = uVar16 + 0x10;
      } while (uVar15 < 0x20);
      uVar13 = auStack_58[0] & auStack_58[1];
      uVar15 = 0x400 - (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uVar14 = 0;
      uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      uVar17 = uVar12 >> 0x38;
      bVar8 = (byte)(uVar12 >> 0x38);
      uVar16 = (uint)bVar8;
      if (uVar15 <= bVar8) {
        do {
          uVar11 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
          uStack_38 = uVar13;
          uVar16 = uVar11 + uVar15;
          if (uVar11 < uVar16) {
            bVar8 = (byte)uVar14 & 0x3f;
            uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
            do {
              uVar6 = auStack_58[(uVar14 >> 6) + 4];
              (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar11].Object =
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar11 = uVar11 + ((uVar6 & uVar12) != 0);
              uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
            } while (uVar11 < uVar16);
          }
          pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
          pTVar5->Num = pTVar5->Num + uVar15;
          if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num != 0x400) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValidatedReferences.IsFull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x686,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
          ::DrainValidatedFull(this_00);
          uVar16 = (int)uVar17 - uVar15;
          uVar17 = (ulonglong)uVar16;
          uVar15 = 0x400;
        } while (0x3ff < uVar16);
      }
      uVar15 = (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num;
      uStack_48 = uVar13;
      uVar11 = uVar15 + uVar16;
      if (uVar15 < uVar11) {
        bVar8 = (byte)uVar14 & 0x3f;
        uVar12 = 1L << bVar8 | 1UL >> 0x40 - bVar8;
        do {
          uVar13 = auStack_58[(uVar14 >> 6) + 2];
          (this->Dispatcher).ImmutableBatcher.ValidatedReferences.Entries[uVar15].Object =
               (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries[uVar14].Object;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar15 = uVar15 + ((uVar13 & uVar12) != 0);
          uVar12 = uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0);
        } while (uVar15 < uVar11);
      }
      pTVar5 = &(this->Dispatcher).ImmutableBatcher.ValidatedReferences;
      pTVar5->Num = pTVar5->Num + uVar16;
      if (((this->Dispatcher).ImmutableBatcher.ValidatedReferences.Num == 0x400) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!ValidatedReferences.IsFull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x68c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num = 0;
      return;
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object = (UObject **)param_1;
    pTVar3 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
    pTVar3->Num = pTVar3->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
      ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a100

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<1>::AddStableReferenceArray
          (TReachabilityCollector<1> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a160

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<1>::AddStableReferenceArray
          (TReachabilityCollector<1> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  cVar3 = *(char *)((longlong)&this->_padding_ + 1);
  iVar4 = param_1->ArrayNum;
  lVar5 = this->_padding_;
  pFVar2 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar6 = pFVar6 + 8;
  }
  if ((cVar3 == '\x01' & (byte)lVar5) == 1) {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  else {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a220

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<4>::AddStableReferenceArray
          (TReachabilityCollector<4> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a270

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<4>::AddStableReferenceArray
          (TReachabilityCollector<4> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  lVar4 = this->_padding_;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    pFVar5 = pFVar5 + 8;
  }
  if ((lVar4 & 1) == 0) {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a320

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<5>::AddStableReferenceArray
          (TReachabilityCollector<5> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a370

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<5>::AddStableReferenceArray
          (TReachabilityCollector<5> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  lVar4 = this->_padding_;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    pFVar5 = pFVar5 + 8;
  }
  if ((lVar4 & 1) == 0) {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a420

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<8>::AddStableReferenceArray
          (TReachabilityCollector<8> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a480

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<8>::AddStableReferenceArray
          (TReachabilityCollector<8> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  cVar3 = *(char *)((longlong)&this->_padding_ + 1);
  iVar4 = param_1->ArrayNum;
  lVar5 = this->_padding_;
  pFVar2 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar6 = pFVar6 + 8;
  }
  if ((cVar3 == '\x01' & (byte)lVar5) == 1) {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  else {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a540

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<9>::AddStableReferenceArray
          (TReachabilityCollector<9> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a5a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<9>::AddStableReferenceArray
          (TReachabilityCollector<9> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  cVar3 = *(char *)((longlong)&this->_padding_ + 1);
  iVar4 = param_1->ArrayNum;
  lVar5 = this->_padding_;
  pFVar2 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar6 = pFVar6 + 8;
  }
  if ((cVar3 == '\x01' & (byte)lVar5) == 1) {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  else {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a660

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<0>::AddStableReferenceArray
          (TReachabilityCollector<0> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a6c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<0>::AddStableReferenceArray
          (TReachabilityCollector<0> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  cVar3 = *(char *)((longlong)&this->_padding_ + 1);
  iVar4 = param_1->ArrayNum;
  lVar5 = this->_padding_;
  pFVar2 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar6 = pFVar6 + 8;
  }
  if ((cVar3 == '\x01' & (byte)lVar5) == 1) {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  else {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a780

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<12>::AddStableReferenceArray
          (TReachabilityCollector<12> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a7d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<12>::AddStableReferenceArray
          (TReachabilityCollector<12> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  lVar4 = this->_padding_;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    pFVar5 = pFVar5 + 8;
  }
  if ((lVar4 & 1) == 0) {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a880

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<13>::AddStableReferenceArray
          (TReachabilityCollector<13> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  undefined1 *puVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImmutableReference *pFVar6;
  bool bVar7;
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FReferenceArray *pFVar12;
  FReferenceArray *pFVar13;
  
  if ((this->_padding_ & 1) == 0) {
    this_00 = &(this->Dispatcher).ImmutableBatcher;
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      pFVar13 = (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries;
      puVar2 = &(this->Dispatcher).ImmutableBatcher.field_0x148;
      pFVar12 = pFVar13;
      if (pFVar13 == (FReferenceArray *)puVar2) {
        (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
        return;
      }
      do {
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != (FReferenceArray *)puVar2);
      do {
        pFVar9 = (pFVar13->Array->AllocatorInstance).Data;
        uVar10 = pFVar13->Array->ArrayNum;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          uVar11 = 0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar8 = pFVar9;
          if (uVar11 <= uVar10) {
            do {
              if (((int)uVar10 < (int)uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Idx <= Body.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x5cd,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((int)uVar11 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = uVar10 - uVar11;
              pFVar8 = pFVar9 + (longlong)(int)uVar11 * 8;
              if (((int)uVar10 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x660,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = pFVar9 + (longlong)(int)uVar11 * 8;
              pFVar6 = (this_00->UnvalidatedReferences).Entries +
                       (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
              for (; pFVar9 != pFVar4; pFVar9 = pFVar9 + 8) {
                pFVar6->Object = *(UObject **)pFVar9;
                pFVar6 = pFVar6 + 1;
              }
              pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
              pTVar3->Num = pTVar3->Num + uVar11;
              if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num != 0x20) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UnvalidatedReferences.IsFull()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                     ,0x615,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
              ::DrainUnvalidatedFull(this_00);
              uVar11 = 0x20;
              pFVar9 = pFVar8;
            } while (0x1f < uVar10);
          }
          if ((0x20 - (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num < uVar10) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)GetNum(View) <= UnvalidatedReferences.Slack()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x660,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar6 = (this_00->UnvalidatedReferences).Entries +
                   (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num;
          pFVar9 = pFVar8 + (longlong)(int)uVar10 * 8;
          for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 8) {
            pFVar6->Object = *(UObject **)pFVar8;
            pFVar6 = pFVar6 + 1;
          }
          pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
          pTVar3->Num = pTVar3->Num + uVar10;
          if (((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!UnvalidatedReferences.IsFull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                 ,0x61a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == (FReferenceArray *)puVar2) {
          (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num = 0;
          return;
        }
      } while( true );
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array = param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
      return;
    }
  }
  return;
}

// AddStableReferenceArray @ 14201a8d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<13>::AddStableReferenceArray
          (TReachabilityCollector<13> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBatchQueue<UE::GC::FReferenceArray,32,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  lVar4 = this->_padding_;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    pFVar5 = pFVar5 + 8;
  }
  if ((lVar4 & 1) == 0) {
    (this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).ImmutableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
      ::DrainArraysFull(&(this->Dispatcher).ImmutableBatcher);
    }
  }
  else {
    (this->Dispatcher).KillableBatcher.UnvalidatedArrays.Entries
    [(this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num].Array =
         (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_1;
    pTVar1 = &(this->Dispatcher).KillableBatcher.UnvalidatedArrays;
    pTVar1->Num = pTVar1->Num + 1;
    if ((this->Dispatcher).KillableBatcher.UnvalidatedArrays.Num == 0x20) {
      TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
      ::DrainArraysFull(&(this->Dispatcher).KillableBatcher);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201da80

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<1>::AddStableReferenceSet
          (TReachabilityCollector<1> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201dd1e;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201dd1e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201de20;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201de20:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201db3e;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201db3e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201dc40;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201dc40:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201dec0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<1>::AddStableReferenceSet
          (TReachabilityCollector<1> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar13 = this->_padding_;
  iVar18 = 0;
  cVar5 = *(char *)((longlong)&this->_padding_ + 1);
  iVar19 = 0;
  pTVar12 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar6 = *(int *)&(pTVar12->Elements).field_0x28;
  iVar15 = 0;
  uVar10 = 1;
  puVar1 = &(pTVar12->Elements).field_0x10;
  if (((byte)lVar13 & cVar5 == '\x01') == 0) {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14201e15f;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = iVar15 + -1 + (int)lVar13;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_14201e15f:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar10,iVar19);
    TStack_88.CurrentBitIndex = iVar11;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_88._28_4_ = iVar11;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    local_90 = pTVar12;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14201e260;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_14201e260:
    while( true ) {
      pTVar8 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar14) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == pTVar12)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar8->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14201df7f;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      iVar11 = local_res20 + -1 + iVar15;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_14201df7f:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar10,iVar19);
    TStack_b8.CurrentBitIndex = iVar11;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14201e080;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_14201e080:
    while( true ) {
      if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar14) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar12->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201e300

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<4>::AddStableReferenceSet
          (TReachabilityCollector<4> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  uVar9 = 1;
  iVar15 = 0;
  if ((this->_padding_ & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14201e58e;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar15 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201e58e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar13);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14201e690;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201e690:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14201e3ae;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar15;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201e3ae:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar13);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14201e4b0;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201e4b0:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201e730

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<4>::AddStableReferenceSet
          (TReachabilityCollector<4> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar12 = this->_padding_;
  pTVar11 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar5 = *(int *)&(pTVar11->Elements).field_0x28;
  iVar14 = 0;
  iVar16 = 0;
  puVar1 = &(pTVar11->Elements).field_0x10;
  uVar9 = 1;
  if ((lVar12 & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201e9ce;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar12;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201e9ce:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    local_90 = pTVar11;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201ead0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_14201ead0:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar13) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == pTVar11)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201e7ee;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201e7ee:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201e8f0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_14201e8f0:
    while( true ) {
      if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar13) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar11->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201eb70

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<5>::AddStableReferenceSet
          (TReachabilityCollector<5> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  uVar9 = 1;
  iVar15 = 0;
  if ((this->_padding_ & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14201edfe;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar15 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201edfe:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar13);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14201ef00;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201ef00:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14201ec1e;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar15;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201ec1e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar13);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14201ed20;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201ed20:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201efa0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<5>::AddStableReferenceSet
          (TReachabilityCollector<5> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar12 = this->_padding_;
  pTVar11 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar5 = *(int *)&(pTVar11->Elements).field_0x28;
  iVar14 = 0;
  iVar16 = 0;
  puVar1 = &(pTVar11->Elements).field_0x10;
  uVar9 = 1;
  if ((lVar12 & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201f23e;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar12;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201f23e:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    local_90 = pTVar11;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201f340;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_14201f340:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar13) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == pTVar11)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201f05e;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201f05e:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201f160;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_14201f160:
    while( true ) {
      if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar13) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar11->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201f3e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<8>::AddStableReferenceSet
          (TReachabilityCollector<8> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201f67e;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201f67e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201f780;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201f780:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201f49e;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201f49e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201f5a0;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201f5a0:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201f820

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<8>::AddStableReferenceSet
          (TReachabilityCollector<8> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar13 = this->_padding_;
  iVar18 = 0;
  cVar5 = *(char *)((longlong)&this->_padding_ + 1);
  iVar19 = 0;
  pTVar12 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar6 = *(int *)&(pTVar12->Elements).field_0x28;
  iVar15 = 0;
  uVar10 = 1;
  puVar1 = &(pTVar12->Elements).field_0x10;
  if (((byte)lVar13 & cVar5 == '\x01') == 0) {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14201fabf;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = iVar15 + -1 + (int)lVar13;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_14201fabf:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar10,iVar19);
    TStack_88.CurrentBitIndex = iVar11;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_88._28_4_ = iVar11;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    local_90 = pTVar12;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14201fbc0;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_14201fbc0:
    while( true ) {
      pTVar8 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar14) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == pTVar12)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar8->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14201f8df;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      iVar11 = local_res20 + -1 + iVar15;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_14201f8df:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar10,iVar19);
    TStack_b8.CurrentBitIndex = iVar11;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14201f9e0;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_14201f9e0:
    while( true ) {
      if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar14) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar12->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 14201fc60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<9>::AddStableReferenceSet
          (TReachabilityCollector<9> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201fefe;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201fefe:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_142020000;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_142020000:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14201fd1e;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14201fd1e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14201fe20;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14201fe20:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 1420200a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<9>::AddStableReferenceSet
          (TReachabilityCollector<9> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar13 = this->_padding_;
  iVar18 = 0;
  cVar5 = *(char *)((longlong)&this->_padding_ + 1);
  iVar19 = 0;
  pTVar12 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar6 = *(int *)&(pTVar12->Elements).field_0x28;
  iVar15 = 0;
  uVar10 = 1;
  puVar1 = &(pTVar12->Elements).field_0x10;
  if (((byte)lVar13 & cVar5 == '\x01') == 0) {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14202033f;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = iVar15 + -1 + (int)lVar13;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_14202033f:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar10,iVar19);
    TStack_88.CurrentBitIndex = iVar11;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_88._28_4_ = iVar11;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    local_90 = pTVar12;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142020440;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_142020440:
    while( true ) {
      pTVar8 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar14) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == pTVar12)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar8->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14202015f;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      iVar11 = local_res20 + -1 + iVar15;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_14202015f:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar10,iVar19);
    TStack_b8.CurrentBitIndex = iVar11;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142020260;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_142020260:
    while( true ) {
      if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar14) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar12->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 1420204e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<0>::AddStableReferenceSet
          (TReachabilityCollector<0> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  if (((byte)this->_padding_ & *(char *)((longlong)&this->_padding_ + 1) == '\x01') == 0) {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14202077e;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14202077e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_142020880;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_142020880:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = iVar14;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      iVar16 = iVar13;
      iVar14 = iVar13;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14202059e;
        uVar12 = puVar17[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14202059e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1420206a0;
        uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_1420206a0:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 142020920

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<0>::AddStableReferenceSet
          (TReachabilityCollector<0> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar13 = this->_padding_;
  iVar18 = 0;
  cVar5 = *(char *)((longlong)&this->_padding_ + 1);
  iVar19 = 0;
  pTVar12 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar6 = *(int *)&(pTVar12->Elements).field_0x28;
  iVar15 = 0;
  uVar10 = 1;
  puVar1 = &(pTVar12->Elements).field_0x10;
  if (((byte)lVar13 & cVar5 == '\x01') == 0) {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_142020bbf;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = iVar15 + -1 + (int)lVar13;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_142020bbf:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar10,iVar19);
    TStack_88.CurrentBitIndex = iVar11;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_88._28_4_ = iVar11;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    local_90 = pTVar12;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142020cc0;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_142020cc0:
    while( true ) {
      pTVar8 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar14) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == pTVar12)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar8->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar11 = iVar19;
    if (iVar6 != 0) {
      puVar17 = *(uint **)&(pTVar12->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      iVar15 = iVar18;
      iVar19 = iVar18;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        iVar15 = iVar15 + 0x20;
        iVar19 = iVar19 + 1;
        iVar11 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1420209df;
        uVar14 = puVar17[lVar13 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      iVar11 = local_res20 + -1 + iVar15;
      if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
    }
LAB_1420209df:
    uVar14 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar10,iVar19);
    TStack_b8.CurrentBitIndex = iVar11;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar14 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142020ae0;
        uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_142020ae0:
    while( true ) {
      if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar14) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar12->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 142020d60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<12>::AddStableReferenceSet
          (TReachabilityCollector<12> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  uVar9 = 1;
  iVar15 = 0;
  if ((this->_padding_ & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142020fee;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar15 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_142020fee:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar13);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1420210f0;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_1420210f0:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142020e0e;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar15;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_142020e0e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar13);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_142020f10;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_142020f10:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 142021190

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<12>::AddStableReferenceSet
          (TReachabilityCollector<12> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar12 = this->_padding_;
  pTVar11 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar5 = *(int *)&(pTVar11->Elements).field_0x28;
  iVar14 = 0;
  iVar16 = 0;
  puVar1 = &(pTVar11->Elements).field_0x10;
  uVar9 = 1;
  if ((lVar12 & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14202142e;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar12;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14202142e:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    local_90 = pTVar11;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_142021530;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_142021530:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar13) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == pTVar11)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14202124e;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14202124e:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_142021350;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_142021350:
    while( true ) {
      if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar13) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar11->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 1420215d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<13>::AddStableReferenceSet
          (TReachabilityCollector<13> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  uVar9 = 1;
  iVar15 = 0;
  if ((this->_padding_ & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14202185e;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = iVar15 + -1 + (int)lVar11;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14202185e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar13);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_90 = param_1;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_142021960;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_142021960:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14202167e;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar9 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iVar10 = local_res20 + -1 + iVar15;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_14202167e:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar13);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar15;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_142021780;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_142021780:
    while( true ) {
      if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar12) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// AddStableReferenceSet @ 142021a00

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::GC::TReachabilityCollector<13>::AddStableReferenceSet
          (TReachabilityCollector<13> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TBatchQueue<UE::GC::FMutableReference,32,0> *pTVar2;
  TBatchQueue<UE::GC::FImmutableReference,32,0> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lVar12 = this->_padding_;
  pTVar11 = Core::Private::Unsafe::
            Decay<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
                      (param_1);
  iVar5 = *(int *)&(pTVar11->Elements).field_0x28;
  iVar14 = 0;
  iVar16 = 0;
  puVar1 = &(pTVar11->Elements).field_0x10;
  uVar9 = 1;
  if ((lVar12 & 1) == 0) {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142021c9e;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = iVar16 + -1 + (int)lVar12;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_142021c9e:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar14);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_88._28_4_ = iVar10;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    local_90 = pTVar11;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_142021da0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_142021da0:
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_88.CurrentBitIndex == uVar13) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == pTVar11)) break;
      (this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num].Object =
           *(UObject **)
            (*(longlong *)&pTVar7->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      pTVar3 = &(this->Dispatcher).ImmutableBatcher.UnvalidatedReferences;
      pTVar3->Num = pTVar3->Num + 1;
      if ((this->Dispatcher).ImmutableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).ImmutableBatcher);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  else {
    iVar10 = 0;
    if (iVar5 != 0) {
      puVar17 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar10 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142021abe;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar9 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iVar10 = local_res20 + -1 + iVar16;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_142021abe:
    uVar13 = *(uint *)&(pTVar11->Elements).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
    TStack_b8.CurrentBitIndex = iVar10;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_b8._28_4_ = local_44;
    TStack_b8.BaseBitIndex = iVar16;
    uStack_98 = CONCAT44(uStack_cc,
                         *(int *)&(pTVar11->Elements).field_0x8 -
                         *(int *)&(pTVar11->Elements).field_0x34);
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_142021bc0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_142021bc0:
    while( true ) {
      if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_b8.CurrentBitIndex == uVar13) &&
         (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (this->Dispatcher).KillableBatcher.UnvalidatedReferences.Entries
      [(this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num].Object =
           (UObject **)
           ((longlong)TStack_b8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar11->Elements);
      pTVar2 = &(this->Dispatcher).KillableBatcher.UnvalidatedReferences;
      pTVar2->Num = pTVar2->Num + 1;
      if ((this->Dispatcher).KillableBatcher.UnvalidatedReferences.Num == 0x20) {
        TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
        ::DrainUnvalidatedFull(&(this->Dispatcher).KillableBatcher);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  return;
}

// HandleObjectReference @ 142059400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<1>::HandleObjectReference
          (TReachabilityCollector<1> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,
             (uint)(*(char *)((longlong)&this->_padding_ + 1) == '\x01' & (byte)this->_padding_));
  return;
}

// HandleObjectReference @ 142059550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<4>::HandleObjectReference
          (TReachabilityCollector<4> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,(byte)this->_padding_ & Yes);
  return;
}

// HandleObjectReference @ 142059690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<5>::HandleObjectReference
          (TReachabilityCollector<5> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,(byte)this->_padding_ & Yes);
  return;
}

// HandleObjectReference @ 1420597d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<8>::HandleObjectReference
          (TReachabilityCollector<8> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,
             (uint)(*(char *)((longlong)&this->_padding_ + 1) == '\x01' & (byte)this->_padding_));
  return;
}

// HandleObjectReference @ 142059920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<9>::HandleObjectReference
          (TReachabilityCollector<9> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,
             (uint)(*(char *)((longlong)&this->_padding_ + 1) == '\x01' & (byte)this->_padding_));
  return;
}

// HandleObjectReference @ 142059a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<0>::HandleObjectReference
          (TReachabilityCollector<0> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,
             (uint)(*(char *)((longlong)&this->_padding_ + 1) == '\x01' & (byte)this->_padding_));
  return;
}

// HandleObjectReference @ 142059bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<12>::HandleObjectReference
          (TReachabilityCollector<12> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,(byte)this->_padding_ & Yes);
  return;
}

// HandleObjectReference @ 142059d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<13>::HandleObjectReference
          (TReachabilityCollector<13> *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  
  bVar1 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar2)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar3 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
               (FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_>::HandleReferenceDirectly
            (&this->Dispatcher,param_2,param_1,(FMemberId)0x20000000,(byte)this->_padding_ & Yes);
  return;
}

// HandleObjectReferences @ 14205bca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<1>::HandleObjectReferences
          (TReachabilityCollector<1> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  UObject **ppUVar8;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    lVar6 = this->_padding_;
    bVar5 = false;
    bVar4 = false;
    cVar2 = *(char *)((longlong)&this->_padding_ + 1);
    if ((param_2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar8 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar8 != (UObjectBase *)0x0) &&
           (bVar7 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar8,true), !bVar7)) {
          if (param_4 != (FProperty *)0x0) {
            bVar5 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar4 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar4) &&
             (bVar4 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar5) &&
             (bVar5 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar8 = ppUVar8 + 1;
      } while (ppUVar8 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<1>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,
                   (uint)(cVar2 == '\x01' & (byte)lVar6));
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// HandleObjectReferences @ 14205be70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<4>::HandleObjectReferences
          (TReachabilityCollector<4> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  UObject **ppUVar7;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    bVar4 = false;
    bVar3 = false;
    lVar5 = this->_padding_;
    if ((param_2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar7 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar7 != (UObjectBase *)0x0) &&
           (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar7,true), !bVar6)) {
          if (param_4 != (FProperty *)0x0) {
            bVar4 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar3 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar3) &&
             (bVar3 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar4) &&
             (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar7 = ppUVar7 + 1;
      } while (ppUVar7 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<4>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,(byte)lVar5 & Yes);
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// HandleObjectReferences @ 14205c040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<5>::HandleObjectReferences
          (TReachabilityCollector<5> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  UObject **ppUVar7;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    bVar4 = false;
    bVar3 = false;
    lVar5 = this->_padding_;
    if ((param_2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar7 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar7 != (UObjectBase *)0x0) &&
           (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar7,true), !bVar6)) {
          if (param_4 != (FProperty *)0x0) {
            bVar4 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar3 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar3) &&
             (bVar3 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar4) &&
             (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar7 = ppUVar7 + 1;
      } while (ppUVar7 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<5>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,(byte)lVar5 & Yes);
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// HandleObjectReferences @ 14205c210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<8>::HandleObjectReferences
          (TReachabilityCollector<8> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  UObject **ppUVar8;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    lVar6 = this->_padding_;
    bVar5 = false;
    bVar4 = false;
    cVar2 = *(char *)((longlong)&this->_padding_ + 1);
    if ((param_2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar8 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar8 != (UObjectBase *)0x0) &&
           (bVar7 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar8,true), !bVar7)) {
          if (param_4 != (FProperty *)0x0) {
            bVar5 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar4 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar4) &&
             (bVar4 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar5) &&
             (bVar5 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar8 = ppUVar8 + 1;
      } while (ppUVar8 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<8>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,
                   (uint)(cVar2 == '\x01' & (byte)lVar6));
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// HandleObjectReferences @ 14205c3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<9>::HandleObjectReferences
          (TReachabilityCollector<9> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  UObject **ppUVar8;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    lVar6 = this->_padding_;
    bVar5 = false;
    bVar4 = false;
    cVar2 = *(char *)((longlong)&this->_padding_ + 1);
    if ((param_2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar8 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar8 != (UObjectBase *)0x0) &&
           (bVar7 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar8,true), !bVar7)) {
          if (param_4 != (FProperty *)0x0) {
            bVar5 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar4 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar4) &&
             (bVar4 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar5) &&
             (bVar5 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar8 = ppUVar8 + 1;
      } while (ppUVar8 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<9>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,
                   (uint)(cVar2 == '\x01' & (byte)lVar6));
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// HandleObjectReferences @ 14205c5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<0>::HandleObjectReferences
          (TReachabilityCollector<0> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  UObject **ppUVar8;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    lVar6 = this->_padding_;
    bVar5 = false;
    bVar4 = false;
    cVar2 = *(char *)((longlong)&this->_padding_ + 1);
    if ((param_2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar8 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar8 != (UObjectBase *)0x0) &&
           (bVar7 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar8,true), !bVar7)) {
          if (param_4 != (FProperty *)0x0) {
            bVar5 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar4 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar4) &&
             (bVar4 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar5) &&
             (bVar5 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar8 = ppUVar8 + 1;
      } while (ppUVar8 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<0>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,
                   (uint)(cVar2 == '\x01' & (byte)lVar6));
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// HandleObjectReferences @ 14205c780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<12>::HandleObjectReferences
          (TReachabilityCollector<12> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  UObject **ppUVar7;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    bVar4 = false;
    bVar3 = false;
    lVar5 = this->_padding_;
    if ((param_2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar7 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar7 != (UObjectBase *)0x0) &&
           (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar7,true), !bVar6)) {
          if (param_4 != (FProperty *)0x0) {
            bVar4 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar3 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar3) &&
             (bVar3 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar4) &&
             (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar7 = ppUVar7 + 1;
      } while (ppUVar7 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<12>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,(byte)lVar5 & Yes);
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// HandleObjectReferences @ 14205c950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TReachabilityCollector<13>::HandleObjectReferences
          (TReachabilityCollector<13> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  UObject **ppUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  UObject **ppUVar7;
  FString local_58;
  FString local_48;
  
  if (param_2 != 0) {
    bVar4 = false;
    bVar3 = false;
    lVar5 = this->_padding_;
    if ((param_2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ppUVar1 = param_1 + param_2;
    ppUVar7 = param_1;
    if (param_1 != ppUVar1) {
      do {
        if (((UObjectBase *)*ppUVar7 != (UObjectBase *)0x0) &&
           (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*ppUVar7,true), !bVar6)) {
          if (param_4 != (FProperty *)0x0) {
            bVar4 = true;
            FField::GetFullName((FField *)param_4,&local_48);
          }
          if (param_3 != (UObject *)0x0) {
            bVar3 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150833a60,
                     (FLogCategoryBase *)&LogGarbage);
          if ((bVar3) &&
             (bVar3 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar4) &&
             (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        ppUVar7 = ppUVar7 + 1;
      } while (ppUVar7 != ppUVar1);
      do {
        TBatchDispatcher<UE::GC::TReachabilityProcessor<13>_>::HandleReferenceDirectly
                  (&this->Dispatcher,param_3,param_1,(FMemberId)0x20000000,(byte)lVar5 & Yes);
        param_1 = param_1 + 1;
      } while (param_1 != ppUVar1);
    }
  }
  return;
}

// MarkWeakObjectReferenceForClearing @ 142064e40

bool __thiscall
UE::GC::TReachabilityCollector<1>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<1> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064f10

bool __thiscall
UE::GC::TReachabilityCollector<4>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<4> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064fe0

bool __thiscall
UE::GC::TReachabilityCollector<5>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<5> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 1420650b0

bool __thiscall
UE::GC::TReachabilityCollector<8>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<8> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142065180

bool __thiscall
UE::GC::TReachabilityCollector<9>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<9> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142065250

bool __thiscall
UE::GC::TReachabilityCollector<0>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<0> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142065320

bool __thiscall
UE::GC::TReachabilityCollector<12>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<12> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 1420653f0

bool __thiscall
UE::GC::TReachabilityCollector<13>::MarkWeakObjectReferenceForClearing
          (TReachabilityCollector<13> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = (this->Dispatcher).Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

