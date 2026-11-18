// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 30

// BP_OnEndEntryDropOperation @ 14690c4d0

void __thiscall IUserListEntry::BP_OnEndEntryDropOperation(IUserListEntry *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnEndEntryDropOperation instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x22,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BP_OnEntryDragOverChanged @ 14690c510

void __thiscall IUserListEntry::BP_OnEntryDragOverChanged(IUserListEntry *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnEntryDragOverChanged instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0xa7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BP_OnEntryDragged @ 14690c550

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IUserListEntry::BP_OnEntryDragged(IUserListEntry *this,UDragDropOperation *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnEntryDragged instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BP_OnEntryDropped @ 14690c590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IUserListEntry::BP_OnEntryDropped(IUserListEntry *this,UDragDropOperation *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnEntryDropped instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0xec,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BP_OnEntryReleased @ 14690c5d0

void __thiscall IUserListEntry::BP_OnEntryReleased(IUserListEntry *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnEntryReleased instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x128,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BP_OnItemExpansionChanged @ 14690c610

void __thiscall IUserListEntry::BP_OnItemExpansionChanged(IUserListEntry *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemExpansionChanged instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x15b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BP_OnItemSelectionChanged @ 14690c650

void __thiscall IUserListEntry::BP_OnItemSelectionChanged(IUserListEntry *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemSelectionChanged instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x1a0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// BP_OnUpdateEntryDropIndicator @ 14690c690

void __thiscall
IUserListEntry::BP_OnUpdateEntryDropIndicator(IUserListEntry *this,EUMGItemDropZone param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_OnUpdateEntryDropIndicator instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x1e5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EndEntryDropOperation @ 1469164c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserListEntry::EndEntryDropOperation(UUserWidget *param_1,bool param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined1 local_res8 [8];
  
  pUVar1 = (UClass *)param_1->_padding_;
  if (pUVar1 != (UClass *)0x0) {
    pUVar4 = UUserListEntry::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
    if (bVar3) {
      pUVar1 = (UClass *)param_1->_padding_;
      pUVar4 = UUserListEntry::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x28,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar5 = UObject::FindFunction
                         ((UObject *)param_1,NAME_UUserListEntry_BP_OnEndEntryDropOperation);
      if (pUVar5 != (UFunction *)0x0) {
        local_res8[0] = param_2;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar5,local_res8);
      }
    }
  }
  return;
}

// Execute_BP_OnEndEntryDropOperation @ 146918d70

void __cdecl IUserListEntry::Execute_BP_OnEndEntryDropOperation(UObject *param_1,bool param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  undefined1 local_res8 [8];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnEndEntryDropOperation);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8[0] = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,local_res8);
  }
  return;
}

// Execute_BP_OnEntryDragOverChanged @ 146918e40

void __cdecl IUserListEntry::Execute_BP_OnEntryDragOverChanged(UObject *param_1,bool param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  undefined1 local_res8 [8];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0xac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0xad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnEntryDragOverChanged);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8[0] = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,local_res8);
  }
  return;
}

// Execute_BP_OnEntryDragged @ 146918f10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl IUserListEntry::Execute_BP_OnEntryDragged(UObject *param_1,UDragDropOperation *param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UDragDropOperation *local_res8;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnEntryDragged);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return;
}

// Execute_BP_OnEntryDropped @ 146918fe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl IUserListEntry::Execute_BP_OnEntryDropped(UObject *param_1,UDragDropOperation *param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  UDragDropOperation *local_res8;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0xf1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0xf2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnEntryDropped);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,&local_res8);
  }
  return;
}

// Execute_BP_OnEntryReleased @ 1469190b0

void __cdecl IUserListEntry::Execute_BP_OnEntryReleased(UObject *param_1)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x12d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x12e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnEntryReleased);
  if (pUVar4 != (UFunction *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,0);
  }
  return;
}

// Execute_BP_OnItemExpansionChanged @ 146919170

void __cdecl IUserListEntry::Execute_BP_OnItemExpansionChanged(UObject *param_1,bool param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  undefined1 local_res8 [8];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x160,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x161,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnItemExpansionChanged);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8[0] = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,local_res8);
  }
  return;
}

// Execute_BP_OnItemSelectionChanged @ 146919240

void __cdecl IUserListEntry::Execute_BP_OnItemSelectionChanged(UObject *param_1,bool param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  undefined1 local_res8 [8];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x1a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x1a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnItemSelectionChanged);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8[0] = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,local_res8);
  }
  return;
}

// Execute_BP_OnUpdateEntryDropIndicator @ 146919310

void __cdecl
IUserListEntry::Execute_BP_OnUpdateEntryDropIndicator(UObject *param_1,EUMGItemDropZone param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  EUMGItemDropZone local_res8 [8];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x1ea,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x1eb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(param_1,NAME_UUserListEntry_BP_OnUpdateEntryDropIndicator);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8[0] = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar4,local_res8);
  }
  return;
}

// GetOwningListView @ 1469208f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListViewBase * __thiscall IUserListEntry::GetOwningListView(IUserListEntry *this)

{
  int iVar1;
  UUserWidget *this_00;
  UClass *pUVar2;
  UListViewBase *pUVar3;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  if (this != (IUserListEntry *)0x0) {
    this_00 = (UUserWidget *)(**(code **)((longlong)*this + 8))();
    if (this_00 != (UUserWidget *)0x0) {
      pUVar2 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pUVar2 = UUserListEntry::StaticClass();
        UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
        pUVar2 = Z_Construct_UClass_UUserWidget_NoRegister();
        iVar1 = (int)pUVar2->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar2->_padding_)) goto LAB_146920972;
      }
    }
  }
  this_00 = (UUserWidget *)0x0;
LAB_146920972:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,this_00);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    pUVar3 = (UListViewBase *)(**(code **)((longlong)*local_18.Object + 0x80))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return pUVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (UListViewBase *)0x0;
}

// HandleEntryDragged @ 146927bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserListEntry::HandleEntryDragged(UUserWidget *param_1,UDragDropOperation *param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UDragDropOperation *local_res8;
  
  pUVar1 = (UClass *)param_1->_padding_;
  if (pUVar1 != (UClass *)0x0) {
    pUVar4 = UUserListEntry::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
    if (bVar3) {
      pUVar1 = (UClass *)param_1->_padding_;
      pUVar4 = UUserListEntry::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x6d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar5 = UObject::FindFunction((UObject *)param_1,NAME_UUserListEntry_BP_OnEntryDragged);
      if (pUVar5 != (UFunction *)0x0) {
        local_res8 = param_2;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar5,&local_res8);
      }
    }
  }
  return;
}

// HandleEntryDropped @ 146927c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserListEntry::HandleEntryDropped(UUserWidget *param_1,UDragDropOperation *param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UDragDropOperation *local_res8;
  
  pUVar1 = (UClass *)param_1->_padding_;
  if (pUVar1 != (UClass *)0x0) {
    pUVar4 = UUserListEntry::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
    if (bVar3) {
      pUVar1 = (UClass *)param_1->_padding_;
      pUVar4 = UUserListEntry::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0xf2,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar5 = UObject::FindFunction((UObject *)param_1,NAME_UUserListEntry_BP_OnEntryDropped);
      if (pUVar5 != (UFunction *)0x0) {
        local_res8 = param_2;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar5,&local_res8);
      }
    }
  }
  return;
}

// IsListItemExpanded @ 14692c890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall IUserListEntry::IsListItemExpanded(IUserListEntry *this)

{
  int iVar1;
  undefined1 uVar2;
  UUserWidget *this_00;
  UClass *pUVar3;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  if (this != (IUserListEntry *)0x0) {
    this_00 = (UUserWidget *)(**(code **)((longlong)*this + 8))();
    if (this_00 != (UUserWidget *)0x0) {
      pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pUVar3 = UUserListEntry::StaticClass();
        UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
        pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) goto LAB_14692c912;
      }
    }
  }
  this_00 = (UUserWidget *)0x0;
LAB_14692c912:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,this_00);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    uVar2 = (**(code **)((longlong)*local_18.Object + 0x20))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (bool)uVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// IsListItemSelected @ 14692c9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall IUserListEntry::IsListItemSelected(IUserListEntry *this)

{
  int iVar1;
  undefined1 uVar2;
  UUserWidget *this_00;
  UClass *pUVar3;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  if (this != (IUserListEntry *)0x0) {
    this_00 = (UUserWidget *)(**(code **)((longlong)*this + 8))();
    if (this_00 != (UUserWidget *)0x0) {
      pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pUVar3 = UUserListEntry::StaticClass();
        UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
        pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) goto LAB_14692ca72;
      }
    }
  }
  this_00 = (UUserWidget *)0x0;
LAB_14692ca72:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,this_00);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    uVar2 = (**(code **)((longlong)*local_18.Object + 0x30))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (bool)uVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// NativeOnEntryReleased @ 14692db60

void __thiscall IUserListEntry::NativeOnEntryReleased(IUserListEntry *this)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *this_01;
  UClass *pUVar3;
  UFunction *pUVar4;
  
  if (this != (IUserListEntry *)0x0) {
    this_01 = (UObject *)(**(code **)((longlong)*this + 8))();
    if (this_01 != (UObject *)0x0) goto LAB_14692dba5;
  }
  this_01 = (UObject *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("O != 0",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x12d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14692dba5:
  this_00 = *(UClass **)&this_01->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x12e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(this_01,NAME_UUserListEntry_BP_OnEntryReleased);
  if (pUVar4 != (UFunction *)0x0) {
    (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar4,0);
  }
  return;
}

// NativeOnItemExpansionChanged @ 14692dc20

void __thiscall IUserListEntry::NativeOnItemExpansionChanged(IUserListEntry *this,bool param_1)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *this_01;
  UClass *pUVar3;
  UFunction *pUVar4;
  undefined1 local_res8 [8];
  
  if (this != (IUserListEntry *)0x0) {
    this_01 = (UObject *)(**(code **)((longlong)*this + 8))();
    if (this_01 != (UObject *)0x0) goto LAB_14692dc6d;
  }
  this_01 = (UObject *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("O != 0",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x160,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14692dc6d:
  this_00 = *(UClass **)&this_01->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x161,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(this_01,NAME_UUserListEntry_BP_OnItemExpansionChanged);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8[0] = param_1;
    (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar4,local_res8);
  }
  return;
}

// NativeOnItemSelectionChanged @ 14692dd00

void __thiscall IUserListEntry::NativeOnItemSelectionChanged(IUserListEntry *this,bool param_1)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *this_01;
  UClass *pUVar3;
  UFunction *pUVar4;
  undefined1 local_res8 [8];
  
  if (this != (IUserListEntry *)0x0) {
    this_01 = (UObject *)(**(code **)((longlong)*this + 8))();
    if (this_01 != (UObject *)0x0) goto LAB_14692dd4d;
  }
  this_01 = (UObject *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("O != 0",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                     ,0x1a5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14692dd4d:
  this_00 = *(UClass **)&this_01->field_0x10;
  pUVar3 = UUserListEntry::StaticClass();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                       ,0x1a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UObject::FindFunction(this_01,NAME_UUserListEntry_BP_OnItemSelectionChanged);
  if (pUVar4 != (UFunction *)0x0) {
    local_res8[0] = param_1;
    (**(code **)(*(longlong *)this_01 + 0x260))(this_01,pUVar4,local_res8);
  }
  return;
}

// ReleaseEntry @ 14693a8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserListEntry::ReleaseEntry(UUserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  
  if (param_1 != (UUserWidget *)0x0) {
    pUVar3 = UUserListEntry::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014693a922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x28))(plVar4,*(code **)(*plVar4 + 0x28));
      return;
    }
  }
  pUVar3 = (UClass *)param_1->_padding_;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UUserListEntry::StaticClass();
    bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
    if (bVar2) {
      pUVar3 = (UClass *)param_1->_padding_;
      pUVar5 = UUserListEntry::StaticClass();
      bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x12e,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction((UObject *)param_1,NAME_UUserListEntry_BP_OnEntryReleased);
      if (pUVar6 != (UFunction *)0x0) {
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar6,0);
      }
    }
  }
  return;
}

// UpdateEntryDragOverState @ 14694a880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserListEntry::UpdateEntryDragOverState(UUserWidget *param_1,bool param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  undefined1 local_res8 [8];
  
  pUVar1 = (UClass *)param_1->_padding_;
  if (pUVar1 != (UClass *)0x0) {
    pUVar4 = UUserListEntry::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
    if (bVar3) {
      pUVar1 = (UClass *)param_1->_padding_;
      pUVar4 = UUserListEntry::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0xad,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar5 = UObject::FindFunction
                         ((UObject *)param_1,NAME_UUserListEntry_BP_OnEntryDragOverChanged);
      if (pUVar5 != (UFunction *)0x0) {
        local_res8[0] = param_2;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar5,local_res8);
      }
    }
  }
  return;
}

// UpdateEntryDropIndicator @ 14694a940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
IUserListEntry::UpdateEntryDropIndicator(UUserWidget *param_1,TOptional<EItemDropZone> param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  EUMGItemDropZone EVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  EUMGItemDropZone local_res8 [8];
  undefined4 local_res18;
  char local_res1c;
  
  pUVar1 = (UClass *)param_1->_padding_;
  if (pUVar1 != (UClass *)0x0) {
    pUVar5 = UUserListEntry::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar1,pUVar5);
    if ((bVar3) && (local_res1c = *(char *)((longlong)param_2 + 4), local_res1c != '\0')) {
      local_res18 = *(undefined4 *)param_2;
      EVar4 = UDragDropOperation::ConvertSlateDropZoneToUMG((TOptional<EItemDropZone>)&local_res18);
      pUVar1 = (UClass *)param_1->_padding_;
      pUVar5 = UUserListEntry::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar1,pUVar5);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x1eb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction
                         ((UObject *)param_1,NAME_UUserListEntry_BP_OnUpdateEntryDropIndicator);
      if (pUVar6 != (UFunction *)0x0) {
        local_res8[0] = EVar4;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar6,local_res8);
      }
    }
  }
  return;
}

// UpdateItemExpansion @ 14694aa30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserListEntry::UpdateItemExpansion(UUserWidget *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  undefined1 local_res8 [8];
  
  if (param_1 != (UUserWidget *)0x0) {
    pUVar3 = UUserListEntry::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014694aa72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2,*(code **)(*plVar4 + 0x20));
      return;
    }
  }
  pUVar3 = (UClass *)param_1->_padding_;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UUserListEntry::StaticClass();
    bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
    if (bVar2) {
      pUVar3 = (UClass *)param_1->_padding_;
      pUVar5 = UUserListEntry::StaticClass();
      bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x161,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction
                         ((UObject *)param_1,NAME_UUserListEntry_BP_OnItemExpansionChanged);
      if (pUVar6 != (UFunction *)0x0) {
        local_res8[0] = param_2;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar6,local_res8);
      }
    }
  }
  return;
}

// UpdateItemSelection @ 14694ab20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl IUserListEntry::UpdateItemSelection(UUserWidget *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  undefined1 local_res8 [8];
  
  if (param_1 != (UUserWidget *)0x0) {
    pUVar3 = UUserListEntry::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014694ab62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,*(code **)(*plVar4 + 0x18));
      return;
    }
  }
  pUVar3 = (UClass *)param_1->_padding_;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UUserListEntry::StaticClass();
    bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
    if (bVar2) {
      pUVar3 = (UClass *)param_1->_padding_;
      pUVar5 = UUserListEntry::StaticClass();
      bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x1a6,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction
                         ((UObject *)param_1,NAME_UUserListEntry_BP_OnItemSelectionChanged);
      if (pUVar6 != (UFunction *)0x0) {
        local_res8[0] = param_2;
        (**(code **)(param_1->_padding_ + 0x260))(param_1,pUVar6,local_res8);
      }
    }
  }
  return;
}

