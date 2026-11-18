// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 2

// GetNodesFor @ 142d47900

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
FMessageAddressBook::GetNodesFor
          (FMessageAddressBook *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FGuid *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  LPCRITICAL_SECTION local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = (LPCRITICAL_SECTION)this->CriticalSection;
  if (local_res10 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(local_res10);
    iVar2 = param_1->ArrayNum;
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FMessageAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar6) break;
      uVar3 = FCrc::MemCrc_DEPRECATED(pFVar7,0x10,0);
      iVar4 = TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMessageAddress>
                        ((TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
                          *)&this->Entries,uVar3,(FMessageAddress *)pFVar7);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)&this->Entries + (longlong)iVar4 * 0x28;
        pFVar5 = (FGuid *)(lVar1 + 0x10);
        if (lVar1 == 0) {
          pFVar5 = (FGuid *)0x0;
        }
        if (pFVar5 != (FGuid *)0x0) {
          TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
                    (__return_storage_ptr__,pFVar5);
        }
      }
      pFVar7 = pFVar7 + 0x10;
    }
    LeaveCriticalSection(local_res10);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemoveNode @ 142d4d380

void __thiscall
FMessageAddressBook::RemoveNode
          (FMessageAddressBook *this,FGuid *param_1,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  FGuid *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  piVar1 = &param_2->ArrayMax;
  iVar12 = 0;
  param_2->ArrayNum = 0;
  local_res10 = param_1;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)this->CriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  uVar8 = 1;
  iVar3 = *(int *)&(this->Entries).field_0x28;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->Entries).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_90.Array;
    }
    uVar4 = *puVar16;
    while (uVar4 == 0) {
      lVar11 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142d4d482;
      uVar4 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar14;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_142d4d482:
  TStack_90._padding_ = CONCAT44(uVar8,iVar12);
  local_res20 = *(uint *)&(this->Entries).field_0x28;
  TStack_90.CurrentBitIndex = iVar9;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  uVar8 = local_res20 & 0xffffffe0;
  iVar12 = (int)local_res20 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar14;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34);
  bVar10 = (byte)local_res20;
  if ((((int)local_res20 < 0) || (iVar3 < (int)local_res20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Entries).field_0x28;
  uVar17 = local_res20;
  if (local_res20 != uVar4) {
    puVar15 = *(undefined1 **)&(this->Entries).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->Entries).field_0x10;
    }
    uVar17 = -1 << (bVar10 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar8 = uVar8 + 0x20;
      iVar12 = iVar12 + 1;
      local_res20 = uVar4;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142d4d5a0;
      uVar17 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11 + -1 + uVar8;
    uVar17 = local_res20;
    if ((int)uVar4 < (int)local_res20) {
      local_res20 = uVar4;
      uVar17 = uVar4;
    }
  }
LAB_142d4d5a0:
  while( true ) {
    if (*(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34 != (int)uStack_70)
    {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar17) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10))
    break;
    pFVar13 = (FScriptContainerElement *)
              (*(longlong *)&this->Entries + (longlong)TStack_90.CurrentBitIndex * 0x28);
    if (((*(uint *)(*(longlong *)&this->Entries + 0x1c + (longlong)TStack_90.CurrentBitIndex * 0x28)
          == local_res10->D && *(uint *)(pFVar13 + 0x18) == local_res10->C) &&
        *(uint *)(pFVar13 + 0x14) == local_res10->B) && *(uint *)(pFVar13 + 0x10) == local_res10->A)
    {
      pFVar18 = (param_2->AllocatorInstance).Data;
      if (((pFVar18 <= pFVar13) && (pFVar13 < pFVar18 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar12 + 1;
      uVar6 = *(undefined8 *)(pFVar13 + 8);
      pFVar18 = (param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar18 = *(undefined8 *)pFVar13;
      *(undefined8 *)(pFVar18 + 8) = uVar6;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  iVar12 = param_2->ArrayNum;
  pFVar13 = (param_2->AllocatorInstance).Data;
  pFVar18 = pFVar13 + (longlong)iVar12 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar12) {
      `TCheckedPointerIterator<FMessageAddress,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar13 == pFVar18) break;
    if (*(int *)&(this->Entries).field_0x8 != *(int *)&(this->Entries).field_0x34) {
      uVar8 = FCrc::MemCrc_DEPRECATED(pFVar13,0x10,0);
      TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
      ::RemoveImpl<FMessageAddress>
                ((TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
                  *)&this->Entries,uVar8,(FMessageAddress *)pFVar13);
    }
    pFVar13 = pFVar13 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x000142d4d72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

