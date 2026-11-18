// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// Execute_OnListItemObjectSet @ 1469193e0

void __cdecl IUserObjectListEntry::Execute_OnListItemObjectSet(UObject *param_1,UObject *param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UObject *local_res8;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserObjectListEntry.gen.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserObjectListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserObjectListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserObjectListEntry.gen.cpp"
                       ,0x26,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserObjectListEntry_OnListItemObjectSet);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return;
}

// GetListItemObjectInternal @ 14691efa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __thiscall IUserObjectListEntry::GetListItemObjectInternal(IUserObjectListEntry *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  UUserWidget *this_00;
  UClass *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  TSharedPtr<SWidget,1> *pTVar9;
  undefined8 *puVar10;
  UObject *pUVar11;
  UUserWidget *pUVar12;
  TSharedPtr<IObjectTableRow_const_,1> local_28;
  TSharedPtr<SWidget,1> local_18;
  
  if (this == (IUserObjectListEntry *)0x0) {
    return (UObject *)0x0;
  }
  this_00 = (UUserWidget *)(**(code **)((longlong)*this + 8))();
  if (this_00 == (UUserWidget *)0x0) {
    return (UObject *)0x0;
  }
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_) {
    return (UObject *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pUVar6 = UUserObjectListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar6);
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar6->_padding_) {
    return (UObject *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pUVar6 = UUserListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar6);
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     (pUVar12 = this_00,
     (longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar6->_padding_)) {
    pUVar12 = (UUserWidget *)0x0;
  }
  IObjectTableRow::ObjectRowFromUserWidget(&local_28,pUVar12);
  if (local_28.Object == (IObjectTableRow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return (UObject *)0x0;
  }
  lVar7 = (**(code **)((longlong)*local_28.Object + 0x80))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (lVar7 == 0) {
    return (UObject *)0x0;
  }
  pUVar6 = Z_Construct_UClass_UListView_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_) {
    return (UObject *)0x0;
  }
  lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x348) + 0x88))();
  pUVar6 = (UClass *)this_00->_padding_;
  if (pUVar6 == (UClass *)0x0) {
LAB_14691f184:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<883302746462093448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x88,"EntryWidget.Implements<UUserListEntry>()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar11 = (UObject *)(*pcVar4)();
      return pUVar11;
    }
  }
  else {
    pUVar8 = UUserListEntry::StaticClass();
    bVar5 = UClass::ImplementsInterface(pUVar6,pUVar8);
    if (!bVar5) goto LAB_14691f184;
    if (lVar7 != 0) {
      pTVar9 = UWidget::GetCachedWidget((UWidget *)this_00,&local_18);
      pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar9->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if (pSVar3 != (SWidget *)0x0) {
        puVar10 = (undefined8 *)
                  (**(code **)(*(longlong *)(lVar7 + 0x598) + 0x48))
                            ((longlong *)(lVar7 + 0x598),&pSVar3[1].PersistentState.DesktopGeometry)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        goto LAB_14691f1b3;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_14691f1b3:
  if (puVar10 == (undefined8 *)0x0) {
    return (UObject *)0x0;
  }
  return (UObject *)*puVar10;
}

// NativeOnListItemObjectSet @ 14692dde0

void __thiscall
IUserObjectListEntry::NativeOnListItemObjectSet(IUserObjectListEntry *this,UObject *param_1)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *this_01;
  UClass *pUVar3;
  UFunction *pUVar4;
  UObject *local_res8;
  
  if (this != (IUserObjectListEntry *)0x0) {
    this_01 = (UObject *)(**(code **)((longlong)*this + 8))();
    if (this_01 != (UObject *)0x0) goto LAB_14692de2d;
  }
  this_01 = (UObject *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("O != 0",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserObjectListEntry.gen.cpp"
                     ,0x25,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14692de2d:
  this_00 = *(UClass **)&this_01->field_0x10;
  pUVar3 = UUserObjectListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserObjectListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserObjectListEntry.gen.cpp"
                       ,0x26,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(this_01,NAME_UUserObjectListEntry_OnListItemObjectSet);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8 = param_1;
    (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar4,&local_res8);
  }
  return;
}

// OnListItemObjectSet @ 14692ed40

void __thiscall
IUserObjectListEntry::OnListItemObjectSet(IUserObjectListEntry *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_OnListItemObjectSet instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserObjectListEntry.gen.cpp"
                     ,0x20,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetListItemObject @ 146943180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserObjectListEntry::SetListItemObject(UUserWidget *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  UObject *local_res8;
  
  if (param_1 != (UUserWidget *)0x0) {
    pUVar3 = UUserObjectListEntry::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469431c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x30))(plVar4,param_2,*(code **)(*plVar4 + 0x30));
      return;
    }
  }
  pUVar3 = (UClass *)param_1->_padding_;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UUserObjectListEntry::StaticClass();
    bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
    if (bVar2) {
      pUVar3 = (UClass *)param_1->_padding_;
      pUVar5 = UUserObjectListEntry::StaticClass();
      bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserObjectListEntry::StaticClass())"
                           ,
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserObjectListEntry.gen.cpp"
                           ,0x26,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction
                         ((UObject *)param_1,NAME_UUserObjectListEntry_OnListItemObjectSet);
      if (pUVar6 != (UFunction *)0x0) {
        local_res8 = param_2;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar6,&local_res8);
      }
    }
  }
  return;
}

