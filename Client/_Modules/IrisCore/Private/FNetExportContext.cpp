// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// AddExported @ 14426bbc0

void __thiscall
UE::Net::Private::FNetExportContext::AddExported(FNetExportContext *this,FNetToken param_1)

{
  TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  FBatchExports *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Net::FNetToken> FVar7;
  FNetToken_u_0 local_res10 [6];
  
  pFVar3 = this->BatchExports;
  FVar7 = (pFVar3->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData;
  pTVar1 = &pFVar3->NetTokensExportedInCurrentBatch;
  if (FVar7 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar7 = (ForElementType<UE::Net::FNetToken>)pTVar1;
  }
  local_res10[0] = param_1.field0_0x0;
  if (((ulonglong)FVar7 <= local_res10) &&
     (local_res10 <
      (FNetToken_u_0 *)
      ((longlong)FVar7 + (longlong)(pFVar3->NetTokensExportedInCurrentBatch).ArrayMax * 4))) {
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
  iVar6 = (pFVar3->NetTokensExportedInCurrentBatch).ArrayNum;
  piVar2 = &(pFVar3->NetTokensExportedInCurrentBatch).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar3->NetTokensExportedInCurrentBatch).ArrayNum = iVar6 + 1;
  FVar7 = (pFVar3->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar7 = (ForElementType<UE::Net::FNetToken>)pTVar1;
  }
  ((FNetToken_u_0 *)((longlong)FVar7 + (longlong)iVar6 * 4))->_s_0 =
       (FNetToken_u_0_s_0)local_res10[0];
  return;
}

// IsExported @ 144282a00

bool __thiscall
UE::Net::Private::FNetExportContext::IsExported(FNetExportContext *this,FNetRefHandle param_1)

{
  FAcknowledgedExports *pFVar1;
  longlong lVar2;
  ForElementType<UE::Net::FNetRefHandle> FVar3;
  int iVar4;
  ForElementType<UE::Net::FNetRefHandle> FVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ForElementType<UE::Net::FNetRefHandle> FVar8;
  
  pFVar1 = this->AcknowledgedExports;
  uVar6 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(pFVar1->AcknowledgedExportedHandles).Elements.field_0x8 !=
      *(int *)&(pFVar1->AcknowledgedExportedHandles).Elements.field_0x34) {
    FVar7 = (pFVar1->AcknowledgedExportedHandles).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(pFVar1->AcknowledgedExportedHandles).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    ((uVar6 >> 0x20) * 0x17 + uVar6 &
                    (ulonglong)((pFVar1->AcknowledgedExportedHandles).HashSize - 1)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(pFVar1->AcknowledgedExportedHandles).Elements;
      do {
        if ((*(ulonglong *)(lVar2 + (longlong)iVar4 * 0x10) & 0x3fffffffffffff) == uVar6) {
          return true;
        }
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  FVar3 = (ForElementType<UE::Net::FNetRefHandle>)this->BatchExports;
  FVar8 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar3 + 0x100);
  if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar3 + 0x100) ==
      (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FVar8 = FVar3;
  }
  FVar5 = FVar8;
  while( true ) {
    if (FVar5 == (ForElementType<UE::Net::FNetRefHandle>)
                 ((longlong)FVar8 + (longlong)*(int *)((longlong)FVar3 + 0x108) * 8)) {
      return false;
    }
    if ((*(ulonglong *)FVar5 & 0x3fffffffffffff) == uVar6) break;
    FVar5 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar5 + 8);
  }
  if ((int)((longlong)FVar5 - (longlong)FVar8 >> 3) == -1) {
    return false;
  }
  return true;
}

// IsExported @ 144282ae0

bool __thiscall
UE::Net::Private::FNetExportContext::IsExported(FNetExportContext *this,FNetToken param_1)

{
  FAcknowledgedExports *pFVar1;
  longlong lVar2;
  FBatchExports *pFVar3;
  int iVar4;
  ForElementType<UE::Net::FNetToken> FVar5;
  ForElementType<FSetElementId> FVar6;
  ForElementType<UE::Net::FNetToken> FVar7;
  
  pFVar1 = this->AcknowledgedExports;
  if (*(int *)&(pFVar1->AcknowledgedExportedNetTokens).Elements.field_0x8 !=
      *(int *)&(pFVar1->AcknowledgedExportedNetTokens).Elements.field_0x34) {
    FVar6 = (pFVar1->AcknowledgedExportedNetTokens).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(pFVar1->AcknowledgedExportedNetTokens).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((pFVar1->AcknowledgedExportedNetTokens).HashSize - 1U &
                    (uint)param_1.field0_0x0) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(pFVar1->AcknowledgedExportedNetTokens).Elements;
      do {
        if ((FNetToken_u_0)((FNetToken_u_0 *)(lVar2 + (longlong)iVar4 * 0xc))->Value ==
            param_1.field0_0x0) {
          return true;
        }
        iVar4 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  pFVar3 = this->BatchExports;
  FVar7 = (pFVar3->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar7 = (ForElementType<UE::Net::FNetToken>)&pFVar3->NetTokensExportedInCurrentBatch;
  }
  FVar5 = FVar7;
  while( true ) {
    if (FVar5 == (ForElementType<UE::Net::FNetToken>)
                 ((longlong)FVar7 + (longlong)(pFVar3->NetTokensExportedInCurrentBatch).ArrayNum * 4
                 )) {
      return false;
    }
    if ((FNetToken_u_0)(*(FNetToken_u_0 *)FVar5).Value == param_1.field0_0x0) break;
    FVar5 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar5 + 4);
  }
  if ((int)((longlong)FVar5 - (longlong)FVar7 >> 2) == -1) {
    return false;
  }
  return true;
}

