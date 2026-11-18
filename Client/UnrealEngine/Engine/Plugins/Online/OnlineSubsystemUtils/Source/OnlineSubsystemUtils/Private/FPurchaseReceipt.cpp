// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Serialize @ 14ec95cc0

void __thiscall
FPurchaseReceipt::Serialize(FPurchaseReceipt *this,FJsonSerializerBase *param_1,bool param_2)

{
  int *piVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_90;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_78 = 0x5305e668;
  uStack_74 = 1;
  uStack_70 = 0xd;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_78,&this->TransactionId);
  cVar3 = (**(code **)*param_1)(param_1);
  if (cVar3 == '\0') {
    uStack_80 = 0xb;
    local_88 = L"receiptList";
    local_38 = 0x5305e688;
    uStack_34 = 1;
    uStack_30 = 0xb;
    uStack_2c = uStack_7c;
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_38);
    for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (this->ReceiptOffers).ArrayNum)); iVar6 = iVar6 + 1) {
      if ((iVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->ReceiptOffers).AllocatorInstance.Data + (longlong)iVar6 * 0x40;
      (**(code **)(*(longlong *)pFVar12 + 0x50))(pFVar12,param_1,0);
    }
    (**(code **)((longlong)*param_1 + 0x38))(param_1);
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_88);
    if ((*plVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               *)*plVar8;
    local_68._12_4_ = uStack_9c;
    local_68.Size = 0xb;
    local_68.DataPtr = L"receiptList";
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(0xb,L"receiptList");
    pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(this_00,uVar5,&local_68);
    if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
       (pTVar9->Object->Type != Array)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_7c,uStack_80));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_7c,uStack_80));
      plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_48);
      if ((*plVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58._12_4_ = uStack_9c;
      local_58.Size = 0xb;
      local_58.DataPtr = L"receiptList";
      pTVar10 = FJsonObject::GetArrayField((FJsonObject *)*plVar8,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      for (uVar5 = 0; (-1 < (int)uVar5 && ((int)uVar5 < pTVar10->ArrayNum)); uVar5 = uVar5 + 1) {
        iVar6 = (this->ReceiptOffers).ArrayNum;
        piVar1 = &(this->ReceiptOffers).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&(this->ReceiptOffers).AllocatorInstance,piVar1);
        }
        (this->ReceiptOffers).ArrayNum = iVar6 + 1;
        pFVar12 = (this->ReceiptOffers).AllocatorInstance.Data + (longlong)iVar6 * 0x40;
        DefaultConstructItems<FPurchaseReceipt::FReceiptOfferEntry,int>(pFVar12,1);
        pcVar2 = *(code **)(*(longlong *)pFVar12 + 0x18);
        uVar7 = 0;
        if ((int)uVar5 < pTVar10->ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar13 = (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
        if ((*(longlong *)pFVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar11 = (undefined8 *)(**(code **)**(undefined8 **)pFVar13)();
        local_98 = *puVar11;
        local_90 = puVar11[1];
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
          UNLOCK();
        }
        (*pcVar2)(pFVar12,&local_98);
      }
    }
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

