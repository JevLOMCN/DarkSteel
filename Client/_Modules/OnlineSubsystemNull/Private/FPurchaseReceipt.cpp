// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 2

// FPurchaseReceipt @ 14ed118e0

FPurchaseReceipt * __thiscall
FPurchaseReceipt::FPurchaseReceipt(FPurchaseReceipt *this,FPurchaseReceipt *param_1)

{
  TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FReceiptOfferEntry *pFVar4;
  
  this->_padding_ = (longlong)&___7FPurchaseReceipt__6B_;
  ::FString::FString(&this->TransactionId,&param_1->TransactionId);
  pTVar1 = &this->ReceiptOffers;
  this->TransactionState = param_1->TransactionState;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ReceiptOffers).ArrayMax;
  iVar3 = (param_1->ReceiptOffers).ArrayNum;
  pFVar4 = (FReceiptOfferEntry *)(param_1->ReceiptOffers).AllocatorInstance.Data;
  (this->ReceiptOffers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPurchaseReceipt::FReceiptOfferEntry,FPurchaseReceipt::FReceiptOfferEntry,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// AddReceiptOffer @ 14ed1b560

void __thiscall
FPurchaseReceipt::AddReceiptOffer(FPurchaseReceipt *this,FReceiptOfferEntry *param_1)

{
  TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FReceiptOfferEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &this->ReceiptOffers;
  pFVar3 = (FReceiptOfferEntry *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ReceiptOffers).ArrayMax)) {
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
  iVar6 = (this->ReceiptOffers).ArrayNum;
  piVar2 = &(this->ReceiptOffers).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ReceiptOffers).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x40;
  *(undefined ***)pFVar7 = &___7FReceiptOfferEntry_FPurchaseReceipt__6B_;
  *(undefined8 *)(pFVar7 + 8) = 0;
  *(FScriptContainerElement **)(pFVar7 + 8) = (param_1->Namespace).Data.AllocatorInstance.Data;
  (param_1->Namespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 0x10) = (param_1->Namespace).Data.ArrayNum;
  *(int *)(pFVar7 + 0x14) = (param_1->Namespace).Data.ArrayMax;
  (param_1->Namespace).Data.ArrayNum = 0;
  (param_1->Namespace).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x18) = (param_1->OfferId).Data.AllocatorInstance.Data;
  (param_1->OfferId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 0x20) = (param_1->OfferId).Data.ArrayNum;
  *(int *)(pFVar7 + 0x24) = (param_1->OfferId).Data.ArrayMax;
  (param_1->OfferId).Data.ArrayNum = 0;
  (param_1->OfferId).Data.ArrayMax = 0;
  iVar6 = param_1->Quantity;
  *(undefined8 *)(pFVar7 + 0x30) = 0;
  *(int *)(pFVar7 + 0x28) = iVar6;
  *(FScriptContainerElement **)(pFVar7 + 0x30) = (param_1->LineItems).AllocatorInstance.Data;
  (param_1->LineItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 0x38) = (param_1->LineItems).ArrayNum;
  *(int *)(pFVar7 + 0x3c) = (param_1->LineItems).ArrayMax;
  (param_1->LineItems).ArrayNum = 0;
  (param_1->LineItems).ArrayMax = 0;
  return;
}

