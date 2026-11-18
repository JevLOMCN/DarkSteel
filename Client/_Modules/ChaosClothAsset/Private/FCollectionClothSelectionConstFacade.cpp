// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 13

// FCollectionClothSelectionConstFacade @ 14db3af80

FCollectionClothSelectionConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::FCollectionClothSelectionConstFacade
          (FCollectionClothSelectionConstFacade *this,
          TSharedRef<FManagedArrayCollection_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FCollectionClothSelectionConstFacade_ClothAsset_Chaos_UE__6B_;
  (this->ManagedArrayCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ManagedArrayCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FCollectionClothSelectionConstFacade @ 14db3bb90

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::~FCollectionClothSelectionConstFacade
          (FCollectionClothSelectionConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ManagedArrayCollection).SharedReferenceCount.ReferenceController);
  return;
}

// FindSelectionSecondarySet @ 14db557f0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::FindSelectionSecondarySet
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,100,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    ((this->ManagedArrayCollection).Object,*param_1,
                     ClothAsset::Private::SelectionGroup);
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((this->ManagedArrayCollection).Object,*param_1,
                      ClothAsset::Private::SelectionSecondaryGroup);
  if (pTVar4 != (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrimaryAttributeExists || !SecondarySelection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                         ,0x68,
                         L"FCollectionClothSelectionConstFacade: Secondary Selection found with no matching Primary attribute"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
}

// FindSelectionSet @ 14db55990

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::FindSelectionSet
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((this->ManagedArrayCollection).Object,*param_1,
                      ClothAsset::Private::SelectionGroup);
  if (pTVar4 != (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
}

// GetNames @ 14db58030

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetNames
          (FCollectionClothSelectionConstFacade *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FManagedArrayCollection::AttributeNames
            ((this->ManagedArrayCollection).Object,__return_storage_ptr__,
             ClothAsset::Private::SelectionGroup);
  return __return_storage_ptr__;
}

// GetNumSelections @ 14db58320

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetNumSelections
          (FCollectionClothSelectionConstFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumAttributes
                    ((this->ManagedArrayCollection).Object,ClothAsset::Private::SelectionGroup);
  return iVar1;
}

// GetSelectionGroup @ 14db5cb80

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionGroup
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName *in_R8;
  
  bVar2 = IsValid(this);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                         ,0x2f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  bVar2 = IsValid(this);
  if (((!bVar2) ||
      (bVar2 = FManagedArrayCollection::HasAttribute
                         ((this->ManagedArrayCollection).Object,*in_R8,
                          ClothAsset::Private::SelectionGroup), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasSelection(Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                         ,0x30,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  FManagedArrayCollection::GetDependency
            ((this->ManagedArrayCollection).Object,(FName)param_1,*in_R8);
  return (FName)param_1;
}

// GetSelectionSecondaryGroup @ 14db5cc50

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionSecondaryGroup
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName *in_R8;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  bVar2 = HasSelectionSecondarySet(this,in_R8);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasSelectionSecondarySet(Name)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  FManagedArrayCollection::GetDependency
            ((this->ManagedArrayCollection).Object,(FName)param_1,*in_R8);
  return (FName)param_1;
}

// GetSelectionSecondarySet @ 14db5cd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionSecondarySet
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    ((this->ManagedArrayCollection).Object,*param_1,
                     ClothAsset::Private::SelectionGroup);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagedArrayCollection->HasAttribute(Name, Private::SelectionGroup)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x5b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((this->ManagedArrayCollection).Object,*param_1,
                      ClothAsset::Private::SelectionSecondaryGroup);
  if (pTVar4 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Selection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
    return _DAT_00000010;
  }
  return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
}

// GetSelectionSet @ 14db5cee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::GetSelectionSet
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x36,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((this->ManagedArrayCollection).Object,*param_1,
                      ClothAsset::Private::SelectionGroup);
  if (pTVar4 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Selection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
    return _DAT_00000010;
  }
  return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
}

// HasSelection @ 14db61650

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::HasSelection
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  bool bVar1;
  
  bVar1 = IsValid(this);
  if (bVar1) {
    bVar1 = FManagedArrayCollection::HasAttribute
                      ((this->ManagedArrayCollection).Object,*param_1,
                       ClothAsset::Private::SelectionGroup);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// HasSelectionSecondarySet @ 14db616a0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::HasSelectionSecondarySet
          (FCollectionClothSelectionConstFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    return false;
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    ((this->ManagedArrayCollection).Object,*param_1,
                     ClothAsset::Private::SelectionGroup);
  bVar3 = FManagedArrayCollection::HasAttribute
                    ((this->ManagedArrayCollection).Object,*param_1,
                     ClothAsset::Private::SelectionSecondaryGroup);
  if (bVar3) {
    if (bVar2) {
      return true;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPrimaryAttributeExists || !bSecondaryAttributeExists",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0x4b,
                       L"FCollectionClothSelectionConstFacade: Secondary Selection found with no matching Primary attribute"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// IsValid @ 14db659e0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::IsValid
          (FCollectionClothSelectionConstFacade *this)

{
  FManagedArrayCollection *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  FVar2 = ClothAsset::Private::SelectionGroup;
  pFVar1 = (this->ManagedArrayCollection).Object;
  uVar3 = ::GetTypeHash(ClothAsset::Private::SelectionGroup.ComparisonIndex.Value);
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar5 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & FVar2.Number + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar4 * 0x14) == FVar2) {
          iVar4 = FManagedArrayCollection::NumElements
                            ((this->ManagedArrayCollection).Object,
                             ClothAsset::Private::SelectionGroup);
          if (iVar4 != 1) {
            return false;
          }
          return true;
        }
        iVar4 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  return false;
}

