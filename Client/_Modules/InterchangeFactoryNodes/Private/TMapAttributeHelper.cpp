// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 3

// operator= @ 14e536bf0

TMapAttributeHelper<int,FString> * __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::operator=
          (TMapAttributeHelper<int,FString> *this,
          TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  atomic<int> aVar5;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *pTVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  TMapAttributeHelper<int,FString> *pTVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined1 local_res8 [8];
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *local_res10;
  int local_res18 [2];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pTVar14 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar14->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e536c35;
      }
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar19 = aVar5 == aVar7;
      if (bVar19) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar19);
    if ((this->Attributes).Object != (FAttributeStorage *)0x0) {
      EmptyInternal(this,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
      local_res18[0] = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
      FAttributeStorage::TAttributeHandle<int,void>::Set(&this->KeyCountHandle,local_res18);
      iVar3 = *(int *)&param_1->field_0x28;
      puVar1 = &param_1->field_0x10;
      iVar15 = 0;
      uVar8 = 1;
      iVar17 = 0;
      iVar9 = 0;
      if (iVar3 != 0) {
        puVar12 = *(uint **)&param_1->field_0x20;
        if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
          puVar12 = (uint *)puVar1;
        }
        uVar13 = *puVar12;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          iVar9 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14e536d30;
          uVar13 = puVar12[lVar11 + 1];
        }
        uVar8 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res20 = (int)lVar11;
        iVar9 = iVar17 + -1 + local_res20;
        if (iVar3 < iVar9) {
          iVar9 = iVar3;
        }
      }
LAB_14e536d30:
      uVar13 = *(uint *)&param_1->field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_70._padding_ = CONCAT44(uVar8,iVar15);
      TStack_70.CurrentBitIndex = iVar9;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar13 >> 5;
      TStack_70._28_4_ = iVar9;
      TStack_70.BaseBitIndex = iVar17;
      uStack_50 = CONCAT44(uStack_7c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
      TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TMapAttributeHelper<int,FString> *)(*pcVar4)();
        return pTVar10;
      }
      pTVar6 = local_res10;
      uVar8 = *(uint *)&param_1->field_0x28;
      if (uVar13 != uVar8) {
        puVar16 = *(undefined1 **)&param_1->field_0x20;
        if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
          puVar16 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar15;
          uVar18 = uVar18 + 0x20;
          iVar15 = iVar15 + 1;
          uVar13 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14e536e40;
          uVar13 = *(uint *)(puVar16 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar13 = (int)lVar11 + -1 + uVar18;
        if ((int)uVar8 < (int)uVar13) {
          uVar13 = uVar8;
        }
      }
LAB_14e536e40:
      while( true ) {
        if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_50) {
          `TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_70.CurrentBitIndex == uVar13) &&
            (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (param_1 == pTVar6)) break;
        puVar12 = (uint *)((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)param_1);
        SetKeyValueByHash(this,*puVar12,(int *)puVar12,(FString *)(puVar12 + 2));
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
      goto LAB_14e536c62;
    }
  }
LAB_14e536c35:
  bVar19 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494728>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x1c8,"AttributesPtr.IsValid()");
  if (bVar19) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TMapAttributeHelper<int,FString> *)(*pcVar4)();
    return pTVar10;
  }
LAB_14e536c62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return this;
}

// EmptyInternal @ 14e54c360

void __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::EmptyInternal
          (TMapAttributeHelper<int,FString> *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FAttributeStorage *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  FAttributeKey *pFVar9;
  longlong lVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18 [2];
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar12->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e54c3a0;
      }
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar18 = aVar5 == aVar6;
      if (bVar18) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar18);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      iVar3 = *(int *)&(this->CachedKeysAndValues).field_0x28;
      iVar13 = 0;
      iVar15 = 0;
      uVar7 = 1;
      puVar1 = &(this->CachedKeysAndValues).field_0x10;
      iVar8 = 0;
      if (iVar3 != 0) {
        puVar16 = *(uint **)&(this->CachedKeysAndValues).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar1;
        }
        uVar11 = *puVar16;
        while (uVar11 == 0) {
          lVar10 = (longlong)iVar13;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar13 + 1;
          iVar8 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e54c48e;
          uVar11 = puVar16[lVar10 + 1];
        }
        uVar7 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res20 = (int)lVar10;
        iVar8 = local_res20 + -1 + iVar15;
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
LAB_14e54c48e:
      uVar11 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
      uVar17 = uVar11 & 0xffffffe0;
      TStack_78._padding_ = CONCAT44(uVar7,iVar13);
      TStack_78.CurrentBitIndex = iVar8;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar11 >> 5;
      TStack_78._28_4_ = iVar8;
      TStack_78.BaseBitIndex = iVar15;
      uStack_58 = CONCAT44(uStack_84,
                           *(int *)&(this->CachedKeysAndValues).field_0x8 -
                           *(int *)&(this->CachedKeysAndValues).field_0x34);
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
      if (uVar11 != uVar7) {
        puVar14 = *(undefined1 **)&(this->CachedKeysAndValues).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
        while (uVar11 == 0) {
          lVar10 = (longlong)iVar13;
          uVar17 = uVar17 + 0x20;
          iVar13 = iVar13 + 1;
          uVar11 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14e54c5a0;
          uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar11 = (int)lVar10 + -1 + uVar17;
        if ((int)uVar7 < (int)uVar11) {
          uVar11 = uVar7;
        }
      }
LAB_14e54c5a0:
      while( true ) {
        if (*(int *)&(this->CachedKeysAndValues).field_0x8 -
            *(int *)&(this->CachedKeysAndValues).field_0x34 != (int)uStack_58) {
          `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_78.CurrentBitIndex == uVar11) &&
           (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        lVar10 = *(longlong *)&this->CachedKeysAndValues +
                 (longlong)TStack_78.CurrentBitIndex * 0x40;
        pFVar9 = FAttributeStorage::TAttributeHandle<int,void>::GetKey
                           ((TAttributeHandle<int,void> *)(lVar10 + 8));
        FAttributeStorage::UnregisterAttribute(this_00,pFVar9);
        pFVar9 = FAttributeStorage::TAttributeHandle<FString,void>::GetKey
                           ((TAttributeHandle<FString,void> *)(lVar10 + 0x20));
        FAttributeStorage::UnregisterAttribute(this_00,pFVar9);
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      }
      TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res10);
      local_res18[0] = 0;
      FAttributeStorage::TAttributeHandle<int,void>::Set(&this->KeyCountHandle,local_res18);
      goto LAB_14e54c3cd;
    }
  }
LAB_14e54c3a0:
  bVar18 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494856>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x248,"AttributesPtr.IsValid()");
  if (bVar18) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e54c3cd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// EmptyInternal @ 14e54c660

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
          (TMapAttributeHelper<FString,FString> *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FAttributeStorage *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  FAttributeKey *pFVar9;
  longlong lVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18 [2];
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar12->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e54c6a0;
      }
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar18 = aVar5 == aVar6;
      if (bVar18) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar18);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      iVar3 = *(int *)&(this->CachedKeysAndValues).field_0x28;
      iVar13 = 0;
      iVar15 = 0;
      uVar7 = 1;
      puVar1 = &(this->CachedKeysAndValues).field_0x10;
      iVar8 = 0;
      if (iVar3 != 0) {
        puVar16 = *(uint **)&(this->CachedKeysAndValues).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar1;
        }
        uVar11 = *puVar16;
        while (uVar11 == 0) {
          lVar10 = (longlong)iVar13;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar13 + 1;
          iVar8 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e54c78e;
          uVar11 = puVar16[lVar10 + 1];
        }
        uVar7 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res20 = (int)lVar10;
        iVar8 = local_res20 + -1 + iVar15;
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
LAB_14e54c78e:
      uVar11 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
      uVar17 = uVar11 & 0xffffffe0;
      TStack_78._padding_ = CONCAT44(uVar7,iVar13);
      TStack_78.CurrentBitIndex = iVar8;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar11 >> 5;
      TStack_78._28_4_ = iVar8;
      TStack_78.BaseBitIndex = iVar15;
      uStack_58 = CONCAT44(uStack_84,
                           *(int *)&(this->CachedKeysAndValues).field_0x8 -
                           *(int *)&(this->CachedKeysAndValues).field_0x34);
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
      if (uVar11 != uVar7) {
        puVar14 = *(undefined1 **)&(this->CachedKeysAndValues).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = puVar1;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
        while (uVar11 == 0) {
          lVar10 = (longlong)iVar13;
          uVar17 = uVar17 + 0x20;
          iVar13 = iVar13 + 1;
          uVar11 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14e54c8a0;
          uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar11 = (int)lVar10 + -1 + uVar17;
        if ((int)uVar7 < (int)uVar11) {
          uVar11 = uVar7;
        }
      }
LAB_14e54c8a0:
      while( true ) {
        if (*(int *)&(this->CachedKeysAndValues).field_0x8 -
            *(int *)&(this->CachedKeysAndValues).field_0x34 != (int)uStack_58) {
          `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_78.CurrentBitIndex == uVar11) &&
           (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        lVar10 = *(longlong *)&this->CachedKeysAndValues +
                 (longlong)TStack_78.CurrentBitIndex * 0x48;
        pFVar9 = FAttributeStorage::TAttributeHandle<FString,void>::GetKey
                           ((TAttributeHandle<FString,void> *)(lVar10 + 0x10));
        FAttributeStorage::UnregisterAttribute(this_00,pFVar9);
        pFVar9 = FAttributeStorage::TAttributeHandle<FString,void>::GetKey
                           ((TAttributeHandle<FString,void> *)(lVar10 + 0x28));
        FAttributeStorage::UnregisterAttribute(this_00,pFVar9);
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      }
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res10);
      local_res18[0] = 0;
      FAttributeStorage::TAttributeHandle<int,void>::Set(&this->KeyCountHandle,local_res18);
      goto LAB_14e54c6cd;
    }
  }
LAB_14e54c6a0:
  bVar18 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494856>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x248,"AttributesPtr.IsValid()");
  if (bVar18) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e54c6cd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

