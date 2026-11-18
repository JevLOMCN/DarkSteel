// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FDeferredMessageLog @ 141f210a0

FDeferredMessageLog * __thiscall
FDeferredMessageLog::FDeferredMessageLog(FDeferredMessageLog *this,FName *param_1)

{
  TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*> *pTVar1;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> **ppTVar2;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> **ppTVar3;
  TPairInitializer<FName_const_&,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*_const_&>
  local_res8;
  FDeferredMessageLog *local_18;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> ***local_10;
  
  this->LogCategory = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&MessagesCritical);
  pTVar1 = TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                   *)&Messages,this->LogCategory);
  ppTVar3 = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> **)0x0;
  ppTVar2 = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> **)
            &pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>
                 *)0x0) {
    ppTVar2 = ppTVar3;
  }
  if (ppTVar2 == (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> **)0x0) {
    ppTVar2 = ::operator_new(0x10);
    if (ppTVar2 != (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> **)0x0) {
      *ppTVar2 = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0;
      ppTVar2[1] = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0;
      ppTVar3 = ppTVar2;
    }
    local_10 = &local_res8.Value;
    local_res8.Value = ppTVar3;
    local_18 = this;
    TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*_const_&>_>
              ((TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                *)&Messages,&local_res8,(bool *)&local_18);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&MessagesCritical);
  return this;
}

// AddMessage @ 141f290e0

void __thiscall
FDeferredMessageLog::AddMessage(FDeferredMessageLog *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*> *pTVar7;
  ForAnyElementType *pFVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&MessagesCritical);
  pTVar7 = TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                   *)&Messages,this->LogCategory);
  if (pTVar7 == (TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>
                 *)0x0) {
    pFVar8 = (ForAnyElementType *)0x0;
  }
  else {
    pFVar8 = *(ForAnyElementType **)&pTVar7->field_0x8;
    if (pFVar8 != (ForAnyElementType *)0x0) goto LAB_141f29144;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CategoryMessages",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\DeferredMessageLog.cpp"
                     ,0x1f,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_141f29144:
  if ((((TSharedRef<FTokenizedMessage,1> *)pFVar8->Data <= param_1) &&
      (param_1 < (TSharedRef<FTokenizedMessage,1> *)pFVar8->Data +
                 *(int *)((longlong)&pFVar8[1].Data + 4))) &&
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
  iVar6 = *(int *)&pFVar8[1].Data;
  piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar8,piVar1);
  }
  *(int *)&pFVar8[1].Data = iVar6 + 1;
  pFVar2 = pFVar8->Data;
  *(FTokenizedMessage **)(pFVar2 + (longlong)iVar6 * 0x10) = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar6 * 0x10 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x000141f291f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&MessagesCritical);
  return;
}

// Cleanup @ 141f2af30

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FDeferredMessageLog::Cleanup(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar7 = Messages._40_4_;
  iVar12 = 0;
  uVar5 = 1;
  iVar13 = 0;
  iVar6 = iVar13;
  if (Messages._40_4_ != 0) {
    puVar14 = (uint *)&Messages.field_0x10;
    if (Messages._32_8_ != 0) {
      puVar14 = (uint *)Messages._32_8_;
    }
    uVar11 = *puVar14;
    iVar13 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = Messages._40_4_;
      if ((int)(Messages._40_4_ + -1 + (Messages._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_141f2afdd;
      uVar11 = puVar14[lVar9 + 1];
    }
    uVar5 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar6 = local_res10 + -1 + iVar13;
    if ((int)Messages._40_4_ < iVar6) {
      iVar6 = Messages._40_4_;
    }
  }
LAB_141f2afdd:
  uVar11 = Messages._40_4_ & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)Messages._40_4_ >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,Messages._8_4_ - Messages._52_4_);
  bVar8 = Messages._40_1_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Messages.field_0x10;
  if (((int)Messages._40_4_ < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar7 != Messages._40_4_) {
    lVar9 = 0x154b88490;
    if (Messages._32_8_ != 0) {
      lVar9 = Messages._32_8_;
    }
    uVar5 = -1 << (bVar8 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar12 * 4);
    while (uVar5 == 0) {
      lVar10 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = Messages._40_4_;
      if ((int)(Messages._40_4_ + -1 + (Messages._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_141f2b0f0;
      uVar5 = *(uint *)(lVar9 + 4 + lVar10 * 4);
    }
    uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + uVar11;
    if ((int)Messages._40_4_ < iVar7) {
      iVar7 = Messages._40_4_;
    }
  }
LAB_141f2b0f0:
  while( true ) {
    if (Messages._8_4_ - Messages._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == iVar7) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&Messages.field_0x10)) break;
    puVar2 = *(undefined8 **)(Messages._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      DestructItems<TSharedRef<FTokenizedMessage,1>,int>
                ((TSharedRef<FTokenizedMessage,1> *)*puVar2,*(int *)(puVar2 + 1));
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x10);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar4 = 1 < (int)Messages._72_4_;
  if (!bVar4) {
    TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                      *)&Messages);
  }
  Messages._8_4_ = 0;
  if (Messages._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&Messages,0,(int *)&Messages.field_0xc);
  }
  Messages._48_4_ = 0xffffffff;
  Messages._52_4_ = 0;
  Messages._40_4_ = 0;
  if (0x80 < (uint)Messages._44_4_) {
    Messages._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&Messages.field_0x10,0);
  }
  if (bVar4) {
    Messages._72_4_ = 1;
    TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)&Messages);
  }
  return;
}

// Error @ 141f2e520

TSharedRef<FTokenizedMessage,1> * __thiscall
FDeferredMessageLog::Error
          (FDeferredMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
          FText *param_1)

{
  FTokenizedMessage::Create(__return_storage_ptr__,Error,param_1);
  AddMessage(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Flush @ 141f2f320

void __cdecl FDeferredMessageLog::Flush(void)

{
  FName *pFVar1;
  FName FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FMessageLog local_68;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&MessagesCritical);
  uVar6 = 1;
  iVar11 = 0;
  iVar12 = 0;
  uVar13 = Messages._40_4_;
  uVar7 = 0;
  if (uVar13 != 0) {
    puVar14 = (uint *)&Messages.field_0x10;
    if (Messages._32_8_ != 0) {
      puVar14 = (uint *)Messages._32_8_;
    }
    uVar7 = *puVar14;
    iVar12 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar7 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_141f2f3dd;
      uVar7 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    uVar7 = iVar12 + -1 + local_res10;
    if ((int)uVar13 < (int)uVar7) {
      uVar7 = uVar13;
    }
  }
LAB_141f2f3dd:
  bVar4 = Messages._40_1_;
  uVar10 = uVar13 & 0xffffffe0;
  uVar15 = Messages._40_8_ & 0xffffffff;
  TStack_90._padding_ = CONCAT44(uVar6,iVar11);
  TStack_90.CurrentBitIndex = uVar7;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_90._28_4_ = uVar7;
  TStack_90.BaseBitIndex = iVar12;
  uStack_70 = CONCAT44(uStack_9c,Messages._8_4_ - Messages._52_4_);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Messages.field_0x10;
  if (((int)uVar13 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = Messages._40_4_;
  if (uVar13 != uVar7) {
    uVar15 = Messages._40_8_ & 0xffffffff;
    lVar8 = 0x154b88490;
    if (Messages._32_8_ != 0) {
      lVar8 = Messages._32_8_;
    }
    uVar6 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar11 * 4);
    while (uVar6 == 0) {
      lVar9 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141f2f4f0;
      uVar6 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar15 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
    uVar15 = (ulonglong)uVar10;
  }
LAB_141f2f4f0:
  while( true ) {
    if (Messages._8_4_ - Messages._52_4_ != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == (int)uVar15) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&Messages.field_0x10)) break;
    pFVar1 = (FName *)(Messages._0_8_ + (longlong)TStack_90.CurrentBitIndex * 0x18);
    if (*(int *)(*(longlong *)(Messages._0_8_ + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18) + 8)
        != 0) {
      FMessageLog::FMessageLog(&local_68,pFVar1);
      FMessageLog::AddMessages
                (&local_68,
                 (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)pFVar1[1]);
      FVar2 = pFVar1[1];
      uVar7 = *(uint *)((longlong)FVar2 + 8);
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      DestructItems<TSharedRef<FTokenizedMessage,1>,int>
                (*(TSharedRef<FTokenizedMessage,1> **)FVar2,uVar7);
      *(undefined4 *)((longlong)FVar2 + 8) = 0;
      if (*(uint *)((longlong)FVar2 + 0xc) != uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar7,(ForAnyElementType *)FVar2,0,(int *)((longlong)FVar2 + 0xc));
      }
      FMessageLog::~FMessageLog(&local_68);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
                    /* WARNING: Could not recover jumptable at 0x000141f2f5cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&MessagesCritical);
  return;
}

// Info @ 141f37330

TSharedRef<FTokenizedMessage,1> * __thiscall
FDeferredMessageLog::Info
          (FDeferredMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
          FText *param_1)

{
  FTokenizedMessage::Create(__return_storage_ptr__,Info,param_1);
  AddMessage(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Warning @ 141f50780

TSharedRef<FTokenizedMessage,1> * __thiscall
FDeferredMessageLog::Warning
          (FDeferredMessageLog *this,TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__,
          FText *param_1)

{
  FTokenizedMessage::Create(__return_storage_ptr__,Warning,param_1);
  AddMessage(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

