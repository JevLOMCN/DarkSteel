// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 4

// AddActiveWidgetInternal<UCommonActivatableWidget> @ 14a78ca30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonActivatableWidget * __thiscall
FUserWidgetPool::AddActiveWidgetInternal<UCommonActivatableWidget>
          (FUserWidgetPool *this,TSubclassOf<UCommonActivatableWidget> param_1,
          TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
          *param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  UObject *pUVar4;
  FName *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UCommonActivatableWidget *pUVar12;
  UClass *pUVar13;
  UWidget *this_00;
  APlayerController *pAVar14;
  UWorld *pUVar15;
  TSharedPtr<SWidget,1> *pTVar16;
  longlong lVar17;
  TSharedRef<SWidget,1> *pTVar18;
  uint uVar19;
  undefined1 *puVar20;
  FName FVar21;
  undefined1 local_res8 [8];
  FName local_d8;
  FName local_d0;
  FName local_c8;
  int local_c0 [2];
  SWidget *local_b8;
  FSharedReferencer<1> local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  UObject *local_90;
  UObject *local_88;
  UObject *local_80;
  FName *local_78;
  TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)> local_70;
  TSharedRef<SWidget,1> local_60;
  TSharedPtr<SWidget,1> local_50;
  
  bVar10 = false;
  bVar9 = FWeakObjectPtr::IsValid(&(this->OwningWidget).WeakPtr);
  if ((bVar9) || (bVar9 = FWeakObjectPtr::IsValid(&(this->OwningWorld).WeakPtr), bVar9)) {
    lVar17 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar17 != 0) &&
       (pUVar13 = UCommonActivatableWidget::StaticClass(), pUVar13 != (UClass *)0x0)) {
      iVar11 = (int)pUVar13->_padding_;
      if ((*(int *)(lVar17 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar13->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
        FVar21 = (FName)(this->InactiveWidgets).AllocatorInstance.Data;
        iVar11 = (this->InactiveWidgets).ArrayNum;
        local_d8.ComparisonIndex.Value = 0;
        local_d8.Number = 0;
        local_c8 = (FName)((longlong)FVar21 + (longlong)iVar11 * 8);
        do {
          FVar3 = local_c8;
          if ((this->InactiveWidgets).ArrayNum != iVar11) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UUserWidget>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar21 == FVar3) goto LAB_14a78cba3;
          lVar17 = *(longlong *)param_1.Class.field0_0x0;
          FVar3 = *(FName *)FVar21;
          if ((lVar17 == 0) ||
             (pUVar13 = UCommonActivatableWidget::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_14a78cb68:
            lVar17 = 0;
          }
          else {
            iVar2 = (int)pUVar13->_padding_;
            if ((*(int *)(lVar17 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar13->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_14a78cb68;
            lVar17 = *(longlong *)param_1.Class.field0_0x0;
          }
          if (*(longlong *)((longlong)FVar3 + 0x10) == lVar17) goto LAB_14a78cb7a;
          FVar21 = (FName)((longlong)FVar21 + 8);
        } while( true );
      }
    }
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5370306963798228889>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidgetPool.h"
                        ,0x67,"IsInitialized()");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pUVar12 = (UCommonActivatableWidget *)(*pcVar8)();
      return pUVar12;
    }
  }
  return (UCommonActivatableWidget *)0x0;
LAB_14a78cb7a:
  local_d8 = FVar3;
  local_98 = FVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            (&this->InactiveWidgets,(TObjectPtr<UUserWidget> *)&local_98,Default);
LAB_14a78cba3:
  this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->OwningWidget).WeakPtr);
  if (local_d8 == (FName)0x0) {
    if (this_00 == (UWidget *)0x0) {
      pAVar14 = (APlayerController *)FWeakObjectPtr::Get(&(this->DefaultPlayerController).WeakPtr);
      pUVar4 = *(UObject **)param_1.Class.field0_0x0;
      if (pAVar14 == (APlayerController *)0x0) {
        local_c8.ComparisonIndex.Value = 0;
        local_c8.Number = 0;
        local_80 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar15 = (UWorld *)FWeakObjectPtr::Get(&(this->OwningWorld).WeakPtr);
        local_d8 = (FName)CreateWidget<UUserWidget,UWorld_*>
                                    (pUVar15,(TSubclassOf<UUserWidget>)&local_80,local_c8);
      }
      else {
        local_a0.ComparisonIndex.Value = 0;
        local_a0.Number = 0;
        local_88 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_d8 = (FName)CreateWidget<UUserWidget,APlayerController_*>
                                    (pAVar14,(TSubclassOf<UUserWidget>)&local_88,local_a0);
      }
    }
    else {
      local_90 = *(UObject **)param_1.Class.field0_0x0;
      local_a8 = local_d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_90);
      }
      local_d8 = (FName)CreateWidget<UUserWidget,UWidget_*>
                                  (this_00,(TSubclassOf<UUserWidget>)&local_90,local_a8);
    }
    if (local_d8 == (FName)0x0) goto LAB_14a78cefc;
  }
  local_d0 = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  pFVar5 = (FName *)(this->ActiveWidgets).AllocatorInstance.Data;
  if (((pFVar5 <= &local_d0) && (&local_d0 < pFVar5 + (this->ActiveWidgets).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    pUVar12 = (UCommonActivatableWidget *)(*pcVar8)();
    return pUVar12;
  }
  iVar11 = (this->ActiveWidgets).ArrayNum;
  piVar1 = &(this->ActiveWidgets).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->ActiveWidgets).ArrayNum = iVar11 + 1;
  *(FName *)((this->ActiveWidgets).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_d0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  if (this_00 == (UWidget *)0x0) {
LAB_14a78cd78:
    bVar9 = true;
  }
  else {
    bVar10 = true;
    pTVar16 = UWidget::GetCachedWidget(this_00,&local_50);
    if (pTVar16->Object != (SWidget *)0x0) goto LAB_14a78cd78;
    bVar9 = false;
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    uVar19 = ((uint)((ulonglong)local_d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d8 >> 4)) *
             -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    uVar19 = uVar19 >> 0x10 ^ uVar19;
    if (*(int *)&(this->CachedSlateByWidgetObject).field_0x8 !=
        *(int *)&(this->CachedSlateByWidgetObject).field_0x34) {
      puVar20 = *(undefined1 **)&(this->CachedSlateByWidgetObject).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(this->CachedSlateByWidgetObject).field_0x38;
      }
      iVar11 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(this->CachedSlateByWidgetObject).field_0x48 - 1U & uVar19) * 4);
      if (iVar11 != -1) {
        lVar17 = *(longlong *)&this->CachedSlateByWidgetObject;
        do {
          if (*(FName *)((longlong)iVar11 * 0x20 + lVar17) == local_d8) {
            if ((iVar11 != -1) && (lVar17 = (longlong)iVar11 * 0x20 + lVar17, lVar17 != 0))
            goto LAB_14a78ce61;
            break;
          }
          iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar17);
        } while (iVar11 != -1);
      }
    }
    local_78 = &local_d8;
    TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UUserWidget_*_const_&>_>
              ((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                *)&this->CachedSlateByWidgetObject,(uint)local_c0,
               (TKeyInitializer<UUserWidget_*_const_&> *)(ulonglong)uVar19,(bool *)&local_78);
    lVar17 = (longlong)local_c0[0] * 0x20 + *(longlong *)&this->CachedSlateByWidgetObject;
LAB_14a78ce61:
    if (*(longlong *)(lVar17 + 8) == 0) {
      local_70._0_8_ = *(undefined8 *)param_2;
      local_70._8_8_ = *(undefined8 *)&param_2->field_0x8;
      pTVar18 = UWidget::TakeWidget_Private((UWidget *)local_d8,&local_60,&local_70);
      pTVar6 = (pTVar18->SharedReferenceCount).ReferenceController;
      pSVar7 = pTVar18->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8 = pSVar7;
      local_b0.ReferenceController = pTVar6;
      if ((SWidget **)(lVar17 + 8) != &local_b8) {
        *(SWidget **)(lVar17 + 8) = pSVar7;
        local_b8 = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar17 + 0x10),&local_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
LAB_14a78cefc:
  FVar21 = local_d8;
  if (local_d8 != (FName)0x0) {
    pUVar13 = UCommonActivatableWidget::StaticClass();
    lVar17 = *(longlong *)((longlong)FVar21 + 0x10);
    iVar11 = (int)pUVar13->_padding_;
    if ((iVar11 <= *(int *)(lVar17 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar13->_padding_)) {
      return (UCommonActivatableWidget *)FVar21;
    }
  }
  return (UCommonActivatableWidget *)0x0;
}

// AddActiveWidgetInternal<UCommonButtonBase> @ 14a78cf50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonButtonBase * __thiscall
FUserWidgetPool::AddActiveWidgetInternal<UCommonButtonBase>
          (FUserWidgetPool *this,TSubclassOf<UCommonButtonBase> param_1,
          TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
          *param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  UObject *pUVar4;
  FName *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UCommonButtonBase *pUVar12;
  UClass *pUVar13;
  UWidget *this_00;
  APlayerController *pAVar14;
  UWorld *pUVar15;
  TSharedPtr<SWidget,1> *pTVar16;
  longlong lVar17;
  TSharedRef<SWidget,1> *pTVar18;
  uint uVar19;
  undefined1 *puVar20;
  FName FVar21;
  undefined1 local_res8 [8];
  FName local_d8;
  FName local_d0;
  FName local_c8;
  int local_c0 [2];
  SWidget *local_b8;
  FSharedReferencer<1> local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  UObject *local_90;
  UObject *local_88;
  UObject *local_80;
  FName *local_78;
  TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)> local_70;
  TSharedRef<SWidget,1> local_60;
  TSharedPtr<SWidget,1> local_50;
  
  bVar10 = false;
  bVar9 = FWeakObjectPtr::IsValid(&(this->OwningWidget).WeakPtr);
  if ((bVar9) || (bVar9 = FWeakObjectPtr::IsValid(&(this->OwningWorld).WeakPtr), bVar9)) {
    lVar17 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar17 != 0) && (pUVar13 = UCommonButtonBase::StaticClass(), pUVar13 != (UClass *)0x0)) {
      iVar11 = (int)pUVar13->_padding_;
      if ((*(int *)(lVar17 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar13->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
        FVar21 = (FName)(this->InactiveWidgets).AllocatorInstance.Data;
        iVar11 = (this->InactiveWidgets).ArrayNum;
        local_d8.ComparisonIndex.Value = 0;
        local_d8.Number = 0;
        local_c8 = (FName)((longlong)FVar21 + (longlong)iVar11 * 8);
        do {
          FVar3 = local_c8;
          if ((this->InactiveWidgets).ArrayNum != iVar11) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UUserWidget>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar21 == FVar3) goto LAB_14a78d0c3;
          lVar17 = *(longlong *)param_1.Class.field0_0x0;
          FVar3 = *(FName *)FVar21;
          if ((lVar17 == 0) ||
             (pUVar13 = UCommonButtonBase::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_14a78d088:
            lVar17 = 0;
          }
          else {
            iVar2 = (int)pUVar13->_padding_;
            if ((*(int *)(lVar17 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar13->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_14a78d088;
            lVar17 = *(longlong *)param_1.Class.field0_0x0;
          }
          if (*(longlong *)((longlong)FVar3 + 0x10) == lVar17) goto LAB_14a78d09a;
          FVar21 = (FName)((longlong)FVar21 + 8);
        } while( true );
      }
    }
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5370306963798228889>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidgetPool.h"
                        ,0x67,"IsInitialized()");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pUVar12 = (UCommonButtonBase *)(*pcVar8)();
      return pUVar12;
    }
  }
  return (UCommonButtonBase *)0x0;
LAB_14a78d09a:
  local_d8 = FVar3;
  local_98 = FVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            (&this->InactiveWidgets,(TObjectPtr<UUserWidget> *)&local_98,Default);
LAB_14a78d0c3:
  this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->OwningWidget).WeakPtr);
  if (local_d8 == (FName)0x0) {
    if (this_00 == (UWidget *)0x0) {
      pAVar14 = (APlayerController *)FWeakObjectPtr::Get(&(this->DefaultPlayerController).WeakPtr);
      pUVar4 = *(UObject **)param_1.Class.field0_0x0;
      if (pAVar14 == (APlayerController *)0x0) {
        local_c8.ComparisonIndex.Value = 0;
        local_c8.Number = 0;
        local_80 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar15 = (UWorld *)FWeakObjectPtr::Get(&(this->OwningWorld).WeakPtr);
        local_d8 = (FName)CreateWidget<UUserWidget,UWorld_*>
                                    (pUVar15,(TSubclassOf<UUserWidget>)&local_80,local_c8);
      }
      else {
        local_a0.ComparisonIndex.Value = 0;
        local_a0.Number = 0;
        local_88 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_d8 = (FName)CreateWidget<UUserWidget,APlayerController_*>
                                    (pAVar14,(TSubclassOf<UUserWidget>)&local_88,local_a0);
      }
    }
    else {
      local_90 = *(UObject **)param_1.Class.field0_0x0;
      local_a8 = local_d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_90);
      }
      local_d8 = (FName)CreateWidget<UUserWidget,UWidget_*>
                                  (this_00,(TSubclassOf<UUserWidget>)&local_90,local_a8);
    }
    if (local_d8 == (FName)0x0) goto LAB_14a78d41c;
  }
  local_d0 = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  pFVar5 = (FName *)(this->ActiveWidgets).AllocatorInstance.Data;
  if (((pFVar5 <= &local_d0) && (&local_d0 < pFVar5 + (this->ActiveWidgets).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    pUVar12 = (UCommonButtonBase *)(*pcVar8)();
    return pUVar12;
  }
  iVar11 = (this->ActiveWidgets).ArrayNum;
  piVar1 = &(this->ActiveWidgets).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->ActiveWidgets).ArrayNum = iVar11 + 1;
  *(FName *)((this->ActiveWidgets).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_d0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d0);
  }
  if (this_00 == (UWidget *)0x0) {
LAB_14a78d298:
    bVar9 = true;
  }
  else {
    bVar10 = true;
    pTVar16 = UWidget::GetCachedWidget(this_00,&local_50);
    if (pTVar16->Object != (SWidget *)0x0) goto LAB_14a78d298;
    bVar9 = false;
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    uVar19 = ((uint)((ulonglong)local_d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d8 >> 4)) *
             -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    uVar19 = uVar19 >> 0x10 ^ uVar19;
    if (*(int *)&(this->CachedSlateByWidgetObject).field_0x8 !=
        *(int *)&(this->CachedSlateByWidgetObject).field_0x34) {
      puVar20 = *(undefined1 **)&(this->CachedSlateByWidgetObject).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(this->CachedSlateByWidgetObject).field_0x38;
      }
      iVar11 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(this->CachedSlateByWidgetObject).field_0x48 - 1U & uVar19) * 4);
      if (iVar11 != -1) {
        lVar17 = *(longlong *)&this->CachedSlateByWidgetObject;
        do {
          if (*(FName *)((longlong)iVar11 * 0x20 + lVar17) == local_d8) {
            if ((iVar11 != -1) && (lVar17 = (longlong)iVar11 * 0x20 + lVar17, lVar17 != 0))
            goto LAB_14a78d381;
            break;
          }
          iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar17);
        } while (iVar11 != -1);
      }
    }
    local_78 = &local_d8;
    TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UUserWidget_*_const_&>_>
              ((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                *)&this->CachedSlateByWidgetObject,(uint)local_c0,
               (TKeyInitializer<UUserWidget_*_const_&> *)(ulonglong)uVar19,(bool *)&local_78);
    lVar17 = (longlong)local_c0[0] * 0x20 + *(longlong *)&this->CachedSlateByWidgetObject;
LAB_14a78d381:
    if (*(longlong *)(lVar17 + 8) == 0) {
      local_70._0_8_ = *(undefined8 *)param_2;
      local_70._8_8_ = *(undefined8 *)&param_2->field_0x8;
      pTVar18 = UWidget::TakeWidget_Private((UWidget *)local_d8,&local_60,&local_70);
      pTVar6 = (pTVar18->SharedReferenceCount).ReferenceController;
      pSVar7 = pTVar18->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8 = pSVar7;
      local_b0.ReferenceController = pTVar6;
      if ((SWidget **)(lVar17 + 8) != &local_b8) {
        *(SWidget **)(lVar17 + 8) = pSVar7;
        local_b8 = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar17 + 0x10),&local_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
LAB_14a78d41c:
  FVar21 = local_d8;
  if (local_d8 != (FName)0x0) {
    pUVar13 = UCommonButtonBase::StaticClass();
    lVar17 = *(longlong *)((longlong)FVar21 + 0x10);
    iVar11 = (int)pUVar13->_padding_;
    if ((iVar11 <= *(int *)(lVar17 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar13->_padding_)) {
      return (UCommonButtonBase *)FVar21;
    }
  }
  return (UCommonButtonBase *)0x0;
}

// operator() @ 14a7b5650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SObjectWidget,1> * __thiscall
`FUserWidgetPool::GetOrCreateInstance<UCommonActivatableWidget>'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SObjectWidget,1> *__return_storage_ptr__,UUserWidget *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  FLLMScope local_res10 [2];
  UUserWidget *local_res18;
  FName local_res20;
  T1RequiredArgs<UUserWidget_*_&> local_248;
  FMemScope local_240;
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_> local_238;
  FArguments local_220;
  
  local_res18 = param_1;
  pFVar4 = SObjectWidget::FArguments::FArguments(&local_220);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_248.Arg0 = &local_res18;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_240,&local_res20,true);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>
            (&local_238,"SObjectWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidgetPool.h"
             ,0x41,&local_248);
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::operator<<=
            (&local_238,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14a7b5790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SObjectWidget,1> * __thiscall
`FUserWidgetPool::GetOrCreateInstance<UCommonButtonBase>'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SObjectWidget,1> *__return_storage_ptr__,UUserWidget *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  FLLMScope local_res10 [2];
  UUserWidget *local_res18;
  FName local_res20;
  T1RequiredArgs<UUserWidget_*_&> local_248;
  FMemScope local_240;
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_> local_238;
  FArguments local_220;
  
  local_res18 = param_1;
  pFVar4 = SObjectWidget::FArguments::FArguments(&local_220);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_248.Arg0 = &local_res18;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_240,&local_res20,true);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>
            (&local_238,"SObjectWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidgetPool.h"
             ,0x41,&local_248);
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::operator<<=
            (&local_238,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

