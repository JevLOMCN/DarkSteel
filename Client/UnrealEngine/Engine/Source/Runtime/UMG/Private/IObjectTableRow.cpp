// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// ObjectRowFromUserWidget @ 14692e320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<IObjectTableRow_const_,1> * __cdecl
IObjectTableRow::ObjectRowFromUserWidget
          (TSharedPtr<IObjectTableRow_const_,1> *__return_storage_ptr__,UUserWidget *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  atomic<int> aVar6;
  longlong lVar7;
  longlong *plVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  FVar4 = local_res10;
  if (ObjectRowsByUserWidget._8_4_ != ObjectRowsByUserWidget._52_4_) {
    lVar7 = 0x154bfda68;
    if (ObjectRowsByUserWidget._64_8_ != 0) {
      lVar7 = ObjectRowsByUserWidget._64_8_;
    }
    iVar1 = *(int *)(lVar7 + (ulonglong)
                             (ObjectRowsByUserWidget._72_4_ - 1 &
                             (local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex)) * 4);
    while (iVar1 != -1) {
      lVar7 = (longlong)iVar1 * 0x20;
      local_res18 = FVar4;
      local_res20 = *(FWeakObjectPtr *)(lVar7 + ObjectRowsByUserWidget._0_8_);
      bVar5 = TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>::UEOpEquals<UUserWidget_const_,bool>
                        ((TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *)&local_res18);
      if (bVar5) {
        plVar8 = (longlong *)(ObjectRowsByUserWidget._0_8_ + lVar7 + 8);
        if (ObjectRowsByUserWidget._0_8_ + lVar7 == 0) {
          plVar8 = (longlong *)0x0;
        }
        if ((((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) && (plVar8[1] != 0)) &&
           (0 < *(int *)(plVar8[1] + 8))) {
          __return_storage_ptr__->Object = (IObjectTableRow *)0x0;
          pTVar2 = (TReferenceControllerBase<1> *)plVar8[1];
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 == (TReferenceControllerBase<1> *)0x0) goto LAB_14692e476;
          aVar3 = pTVar2->SharedReferenceCount;
          goto joined_r0x00014692e462;
        }
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x18 + ObjectRowsByUserWidget._0_8_);
    }
  }
  __return_storage_ptr__->Object = (IObjectTableRow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
  while( true ) {
    LOCK();
    aVar6 = pTVar2->SharedReferenceCount;
    bVar5 = aVar3 == aVar6;
    if (bVar5) {
      pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
      aVar6 = aVar3;
    }
    UNLOCK();
    aVar3 = aVar6;
    if (bVar5) break;
joined_r0x00014692e462:
    if (aVar3 == (atomic<int>)0x0) {
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      break;
    }
  }
LAB_14692e476:
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IObjectTableRow *)*plVar8;
  return __return_storage_ptr__;
}

