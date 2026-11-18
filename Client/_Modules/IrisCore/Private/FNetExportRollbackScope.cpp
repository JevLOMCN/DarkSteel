// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// Rollback @ 144218e10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Net::Private::FNetExportRollbackScope::Rollback(FNetExportRollbackScope *this)

{
  ForElementType<UE::Net::FNetRefHandle> *pFVar1;
  int *piVar2;
  uint uVar3;
  FNetExportContext *pFVar4;
  ForElementType<UE::Net::FNetRefHandle> FVar5;
  FBatchExports *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ForElementType<UE::Net::FNetRefHandle> FVar11;
  ForElementType<UE::Net::FNetObjectReference> FVar12;
  void *pvVar13;
  TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar14;
  uint uVar15;
  
  pFVar4 = this->Context->ExportContext;
  if (pFVar4 != (FNetExportContext *)0x0) {
    uVar3 = this->StartNumNetHandleExports;
    FVar5 = (ForElementType<UE::Net::FNetRefHandle>)pFVar4->BatchExports;
    pFVar1 = (ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar5 + 0x108);
    iVar10 = *(int *)pFVar1->InlineData;
    if (iVar10 < (int)uVar3) {
      iVar9 = Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                        (8,8,uVar3 - iVar10,(ForElementType<UE::Net::FNetRefHandle> *)FVar5,
                         (int *)pFVar1,(int *)((longlong)FVar5 + 0x10c));
      FVar11 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar5 + 0x100);
      if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar5 + 0x100) ==
          (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar11 = FVar5;
      }
      DefaultConstructItems<UE::Net::FNetRefHandle,int>
                ((void *)((longlong)FVar11 + (longlong)iVar9 * 8),uVar3 - iVar10);
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar10) {
        uVar15 = iVar10 - uVar3;
        if (((int)(uVar15 | uVar3) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar15 != 0) {
          FVar11 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar5 + 0x100);
          if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar5 + 0x100) ==
              (ForElementType<UE::Net::FNetRefHandle>)0x0) {
            FVar11 = FVar5;
          }
          pvVar13 = (void *)((longlong)FVar11 + (longlong)(int)uVar3 * 8);
          iVar10 = (*(int *)pFVar1->InlineData - uVar3) - uVar15;
          if (iVar10 != 0) {
            memmove(pvVar13,(void *)((longlong)pvVar13 + (longlong)(int)uVar15 * 8),
                    (longlong)iVar10 << 3);
          }
          *(uint *)pFVar1->InlineData = *(int *)pFVar1->InlineData - uVar15;
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                    (8,8,(ForElementType<UE::Net::FNetRefHandle> *)FVar5,*(int *)pFVar1->InlineData,
                     (int *)((longlong)FVar5 + 0x10c));
        }
      }
    }
    TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&pFVar4->BatchExports->NetTokensExportedInCurrentBatch,this->StartNumNetTokenExports,
               Default);
    TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&pFVar4->BatchExports->NetTokensPendingExportInCurrentBatch,
               this->StartNumNetTokensPendingExports,Default);
    pFVar6 = pFVar4->BatchExports;
    uVar3 = this->StartNumPendingExports;
    pTVar14 = &pFVar6->ReferencesPendingExportInCurrentBatch;
    piVar2 = &(pFVar6->ReferencesPendingExportInCurrentBatch).ArrayNum;
    iVar10 = *piVar2;
    if (iVar10 < (int)uVar3) {
      iVar9 = Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                        (0x10,8,uVar3 - iVar10,&pTVar14->AllocatorInstance,piVar2,
                         &(pFVar6->ReferencesPendingExportInCurrentBatch).ArrayMax);
      FVar12 = (pFVar6->ReferencesPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<UE::Net::FNetObjectReference>)0x0) {
        FVar12 = (ForElementType<UE::Net::FNetObjectReference>)pTVar14;
      }
      DefaultConstructItems<UE::Net::FNetObjectReference,int>
                ((void *)((longlong)FVar12 + (longlong)iVar9 * 0x10),uVar3 - iVar10);
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar10) {
        uVar15 = iVar10 - uVar3;
        if (((int)(uVar15 | uVar3) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar15 != 0) {
          FVar12 = (pFVar6->ReferencesPendingExportInCurrentBatch).AllocatorInstance.SecondaryData;
          if (FVar12 == (ForElementType<UE::Net::FNetObjectReference>)0x0) {
            FVar12 = (ForElementType<UE::Net::FNetObjectReference>)pTVar14;
          }
          pvVar13 = (void *)((longlong)FVar12 + (longlong)(int)uVar3 * 0x10);
          iVar10 = (*piVar2 - uVar3) - uVar15;
          if (iVar10 != 0) {
            memmove(pvVar13,(void *)((longlong)(int)uVar15 * 0x10 + (longlong)pvVar13),
                    (longlong)iVar10 << 4);
          }
          *piVar2 = *piVar2 - uVar15;
          Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
                    (0x10,8,&pTVar14->AllocatorInstance,*piVar2,
                     &(pFVar6->ReferencesPendingExportInCurrentBatch).ArrayMax);
        }
      }
    }
  }
  return;
}

