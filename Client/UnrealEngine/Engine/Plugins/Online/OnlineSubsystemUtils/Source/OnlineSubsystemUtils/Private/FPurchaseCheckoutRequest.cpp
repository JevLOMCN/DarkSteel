// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// AddPurchaseOffer @ 14ec5fbb0

/* WARNING: Removing unreachable block (ram,0x00014ec5fcdc) */
/* WARNING: Removing unreachable block (ram,0x00014ec5fceb) */

void __thiscall
FPurchaseCheckoutRequest::AddPurchaseOffer
          (FPurchaseCheckoutRequest *this,FString *param_1,FString *param_2,int param_3,bool param_4
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString local_38;
  FString local_28;
  int local_18;
  
  ::FString::FString(&local_38,param_1);
  ::FString::FString(&local_28,param_2);
  pFVar2 = (this->PurchaseOffers).AllocatorInstance.Data;
  local_18 = param_3;
  if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar2 + (longlong)(this->PurchaseOffers).ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->PurchaseOffers).ArrayNum;
  piVar1 = &(this->PurchaseOffers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar1);
  }
  (this->PurchaseOffers).ArrayNum = iVar5 + 1;
  pFVar2 = (this->PurchaseOffers).AllocatorInstance.Data + (longlong)iVar5 * 0x28;
  *(undefined8 *)pFVar2 = 0;
  *(FScriptContainerElement **)pFVar2 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar2 + 0xc) = local_38.Data.ArrayMax;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + 0x10) = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + 0x18) = local_28.Data.ArrayNum;
  *(int *)(pFVar2 + 0x1c) = local_28.Data.ArrayMax;
  *(int *)(pFVar2 + 0x20) = local_18;
  return;
}

// ~FPurchaseCheckoutRequest @ 14ecdadc0

void __thiscall FPurchaseCheckoutRequest::~FPurchaseCheckoutRequest(FPurchaseCheckoutRequest *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->AdditionalCheckoutProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalCheckoutProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalCheckoutProperties);
  if ((*(int *)((longlong)&(this->AccountId).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->AccountId).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPurchaseCheckoutRequest::FPurchaseOfferEntry,int>
            ((FPurchaseOfferEntry *)(this->PurchaseOffers).AllocatorInstance.Data,
             (this->PurchaseOffers).ArrayNum);
  pFVar2 = (this->PurchaseOffers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

