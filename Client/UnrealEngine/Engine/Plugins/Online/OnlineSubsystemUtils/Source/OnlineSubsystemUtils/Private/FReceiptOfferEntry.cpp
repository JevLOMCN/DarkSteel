// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Serialize @ 14ec960a0

void __thiscall
FPurchaseReceipt::FReceiptOfferEntry::Serialize
          (FReceiptOfferEntry *this,FJsonSerializerBase *param_1,bool param_2)

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
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
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
  local_98 = 0x5305e618;
  uStack_94 = 1;
  uStack_90 = 9;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_98,&this->Namespace);
  local_88 = 0x5305e630;
  uStack_84 = 1;
  uStack_80 = 7;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_88,&this->OfferId);
  local_78 = 0x5305e640;
  uStack_74 = 1;
  uStack_70 = 8;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_78,&this->Quantity);
  cVar3 = (**(code **)*param_1)(param_1);
  if (cVar3 == '\0') {
    uStack_b0 = 5;
    local_b8 = L"items";
    local_38 = 0x5305e658;
    uStack_34 = 1;
    uStack_30 = 5;
    uStack_2c = uStack_ac;
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_38);
    for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (this->LineItems).ArrayNum)); iVar6 = iVar6 + 1) {
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
      pFVar12 = (this->LineItems).AllocatorInstance.Data + (longlong)iVar6 * 0x38;
      (**(code **)(*(longlong *)pFVar12 + 0x50))(pFVar12,param_1,0);
    }
    (**(code **)((longlong)*param_1 + 0x38))(param_1);
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_b8);
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
    local_68._12_4_ = uStack_bc;
    local_68.Size = 5;
    local_68.DataPtr = L"items";
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"items");
    pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             ::FindByHash<TStringView<wchar_t>_>(this_00,uVar5,&local_68);
    if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
       (pTVar9->Object->Type != Array)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_ac,uStack_b0));
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_ac,uStack_b0));
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
      local_58._12_4_ = uStack_bc;
      local_58.Size = 5;
      local_58.DataPtr = L"items";
      pTVar10 = FJsonObject::GetArrayField((FJsonObject *)*plVar8,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      for (uVar5 = 0; (-1 < (int)uVar5 && ((int)uVar5 < pTVar10->ArrayNum)); uVar5 = uVar5 + 1) {
        iVar6 = (this->LineItems).ArrayNum;
        piVar1 = &(this->LineItems).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&(this->LineItems).AllocatorInstance,piVar1);
        }
        (this->LineItems).ArrayNum = iVar6 + 1;
        pFVar12 = (this->LineItems).AllocatorInstance.Data + (longlong)iVar6 * 0x38;
        DefaultConstructItems<FPurchaseReceipt::FLineItemInfo,int>(pFVar12,1);
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
        local_a8 = *puVar11;
        local_a0 = puVar11[1];
        if (local_a0 != 0) {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        (*pcVar2)(pFVar12,&local_a8);
      }
    }
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

