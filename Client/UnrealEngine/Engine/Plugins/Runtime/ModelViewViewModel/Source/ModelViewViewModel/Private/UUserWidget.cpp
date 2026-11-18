// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// GetExtension<UMVVMView> @ 14a73d120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMVVMView * __thiscall UUserWidget::GetExtension<UMVVMView>(UUserWidget *this)

{
  int iVar1;
  UMVVMView *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = UMVVMView::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMVVMView *)GetExtension(this,(TSubclassOf<UUserWidgetExtension>)&local_res10);
  if (pUVar2 == (UMVVMView *)0x0) {
    pUVar2 = (UMVVMView *)0x0;
  }
  else {
    pUVar3 = UMVVMView::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMVVMView>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UUserWidgetExtension>
                         (&local_18,(UUserWidgetExtension *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

