// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 18

// AddUniqueImpl<FUIActionBindingHandle_const_&> @ 14a792370

int __thiscall
TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FUIActionBindingHandle_const_&>
          (TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *this,
          FUIActionBindingHandle *param_1)

{
  FScriptContainerElement *this_00;
  FUIActionBindingHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FUIActionBindingHandle *pFVar5;
  
  pFVar1 = (FUIActionBindingHandle *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar5 = pFVar1;
    do {
      if (pFVar5->RegistrationId == param_1->RegistrationId) {
        iVar4 = (int)(((longlong)pFVar5 - (longlong)pFVar1) / 0x18);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  this_00 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x18;
  ::FString::FString((FString *)this_00,&param_1->CachedDebugActionName);
  *(int *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[0x10].field_0x0)->
           AllocatorInstance).Data = param_1->RegistrationId;
  return iVar4;
}

// AddUniqueImpl<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>_> @ 14a7924b0

int __thiscall
TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// AddUniqueImpl<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>_> @ 14a792570

int __thiscall
TArray<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// AddUniqueImpl<TSharedRef<SWidget,1>_> @ 14a792630

int __thiscall
TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TSharedRef<SWidget,1>_>
          (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<SWidget,1> *param_1)

{
  TSharedRef<SWidget,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedRef<SWidget,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(SWidget **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// Append<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> @ 14a792a80

void __thiscall
TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::
Append<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>
          (TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *this,
          TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FUIActionBindingHandle,FUIActionBindingHandle,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,
               (FUIActionBindingHandle *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// FindByKey<UWidget> @ 14a799370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPendingWidgetRegistration * __thiscall
TArray<UCommonUIActionRouterBase::FPendingWidgetRegistration,TSizedDefaultAllocator<32>_>::
FindByKey<UWidget>(TArray<UCommonUIActionRouterBase::FPendingWidgetRegistration,TSizedDefaultAllocator<32>_>
                   *this,UWidget *param_1)

{
  UWidget *pUVar1;
  FPendingWidgetRegistration *this_00;
  FPendingWidgetRegistration *pFVar2;
  
  this_00 = (FPendingWidgetRegistration *)(this->AllocatorInstance).Data;
  pFVar2 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FPendingWidgetRegistration *)0x0;
    }
    pUVar1 = (UWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (param_1 == pUVar1) break;
    this_00 = this_00 + 1;
  }
  return this_00;
}

// operator= @ 14a7b3e90

TArray<FKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FKey,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FKey,TSizedDefaultAllocator<32>_> *this,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    DestructItems<FKey,int>((FKey *)(this->AllocatorInstance).Data,this->ArrayNum);
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// Find @ 14a7db730

int __thiscall
TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>::UEOpEquals<UWidget_const_,bool>
                      ((TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// Find @ 14a7db7b0

int __thiscall
TArray<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>::
            UEOpEquals<UCommonActivatableWidget,bool>
                      ((TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// Remove @ 14a8126c0

int __thiscall
TArray<TObjectPtr<UCommonActivatableWidget>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UCommonActivatableWidget>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UCommonActivatableWidget> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UCommonActivatableWidget **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UCommonActivatableWidget **)(pFVar1 + lVar6 * 8) !=
                     (param_1->field0_0x0).DebugPtr)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 14a812830

int __thiscall
TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  iVar8 = 0;
  if (iVar6 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  bVar4 = TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>::UEOpEquals<UWidget_const_,bool>
                    ((TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)pFVar1,param_1);
  bVar4 = !bVar4;
  iVar7 = 0;
  do {
    iVar3 = iVar7;
    do {
      iVar3 = iVar3 + 1;
      if (iVar6 <= iVar3) break;
      bVar5 = TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>::UEOpEquals<UWidget_const_,bool>
                        ((TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)
                         (pFVar1 + (longlong)iVar3 * 8),param_1);
    } while (bVar4 == !bVar5);
    if (bVar4 != false) {
      if (iVar8 != iVar7) {
        memmove(pFVar1 + (longlong)iVar8 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar3 - iVar7) << 3);
      }
      iVar8 = iVar8 + (iVar3 - iVar7);
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar7 = iVar3;
    if (iVar6 <= iVar3) {
      this->ArrayNum = iVar8;
      return iVar6 - iVar8;
    }
  } while( true );
}

// Remove @ 14a812990

int __thiscall
TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *this,
          FUIActionBindingHandle *param_1)

{
  FUIActionBindingHandle *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  pFVar1 = (FUIActionBindingHandle *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  bVar4 = *(int *)(pFVar2 + 0x10) != param_1->RegistrationId;
  lVar8 = 0;
  iVar11 = 0;
  do {
    lVar9 = lVar8 + 1;
    iVar12 = iVar11 + 1;
    if (lVar9 < lVar6) {
      pFVar7 = pFVar2 + (lVar9 + (lVar8 + 2) * 2) * 8;
      do {
        if (bVar4 != (*(int *)pFVar7 != param_1->RegistrationId)) break;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
        pFVar7 = pFVar7 + 0x18;
      } while (lVar9 < lVar6);
    }
    iVar10 = iVar12 - iVar11;
    if (bVar4 == false) {
      DestructItems<FUIActionBindingHandle,int>
                ((FUIActionBindingHandle *)(pFVar2 + (longlong)iVar11 * 0x18),iVar10);
    }
    else {
      if (iVar13 != iVar11) {
        memmove(pFVar2 + (longlong)iVar13 * 0x18,pFVar2 + (longlong)iVar11 * 0x18,
                (longlong)iVar10 * 0x18);
      }
      iVar13 = iVar13 + iVar10;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    lVar8 = lVar9;
    iVar11 = iVar12;
    if (lVar6 <= lVar9) {
      this->ArrayNum = iVar13;
      return iVar5 - iVar13;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 14a813040

void __thiscall
TArray<FKey,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FKey,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x18 + 0x10));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14a8130d0

void __thiscall
TArray<TSharedRef<FActivatableTreeNode,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedRef<FActivatableTreeNode,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14a813150

void __thiscall
TArray<TSharedRef<FActivatableTreeRoot,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedRef<FActivatableTreeRoot,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingleSwap @ 14a813930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UUserWidget> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(UUserWidget **)pFVar7 == (param_1->field0_0x0).DebugPtr) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// RemoveSwap @ 14a813a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FKey,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<FKey,TSizedDefaultAllocator<32>_> *this,FKey *param_1,EAllowShrinking param_2)

{
  FKey *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  pFVar1 = (FKey *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar10 = iVar5;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar7 = uVar8;
      if (*(FName *)((this->AllocatorInstance).Data + lVar9) == param_1->KeyName) {
        uVar7 = uVar8 - 1;
        lVar9 = lVar9 + -0x18;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        RemoveAtSwapImpl(this,uVar8);
      }
      iVar10 = this->ArrayNum;
      uVar8 = uVar7 + 1;
      lVar9 = lVar9 + 0x18;
    } while ((int)uVar8 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// RemoveSwap @ 14a813c40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<FActivatableTreeRoot,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TSharedRef<FActivatableTreeRoot,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FActivatableTreeRoot,1> *param_1,EAllowShrinking param_2)

{
  TSharedRef<FActivatableTreeRoot,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  pTVar1 = (TSharedRef<FActivatableTreeRoot,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar10 = iVar5;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar7 = uVar8;
      if (*(FActivatableTreeRoot **)((this->AllocatorInstance).Data + lVar9) == param_1->Object) {
        uVar7 = uVar8 - 1;
        lVar9 = lVar9 + -0x10;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        RemoveAtSwapImpl(this,uVar8);
      }
      iVar10 = this->ArrayNum;
      uVar8 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

