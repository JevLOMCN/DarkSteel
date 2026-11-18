// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b5d2c90

UClass * __cdecl UDS_UserObjectTreeItem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UserObjectTreeItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UserObjectTreeItem",
               &Z_Registration_Info_UClass_UDS_UserObjectTreeItem.InnerSingleton,
               StaticRegisterNativesUDS_UserObjectTreeItem,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_UserObjectTreeItem>,
               InternalVTableHelperCtorCaller<UDS_UserObjectTreeItem>,local_res8,
               UDS_UserObjectListItem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UserObjectTreeItem.InnerSingleton;
}

// UDS_UserObjectTreeItem @ 14b5d8fa0

UDS_UserObjectTreeItem * __thiscall
UDS_UserObjectTreeItem::UDS_UserObjectTreeItem(UDS_UserObjectTreeItem *this,FVTableHelper *param_1)

{
  UDS_UserObjectListItem::UDS_UserObjectListItem((UDS_UserObjectListItem *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_UserObjectTreeItem__6B_;
  (this->ChildItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildItems).ArrayNum = 0;
  (this->ChildItems).ArrayMax = 0;
  this->Depth = 0;
  this->bItemExpanded = false;
  return this;
}

// UDS_UserObjectTreeItem @ 14b5d8ff0

UDS_UserObjectTreeItem * __thiscall
UDS_UserObjectTreeItem::UDS_UserObjectTreeItem
          (UDS_UserObjectTreeItem *this,FObjectInitializer *param_1)

{
  UDS_UserObjectListItem::UDS_UserObjectListItem((UDS_UserObjectListItem *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_UserObjectTreeItem__6B_;
  (this->ChildItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildItems).ArrayNum = 0;
  (this->ChildItems).ArrayMax = 0;
  this->Depth = 0;
  this->bItemExpanded = false;
  return this;
}

// ~UDS_UserObjectTreeItem @ 14b5da230

void __thiscall UDS_UserObjectTreeItem::~UDS_UserObjectTreeItem(UDS_UserObjectTreeItem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_UserObjectTreeItem__6B_;
  pFVar1 = (this->ChildItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_UserObjectListItem::~UDS_UserObjectListItem((UDS_UserObjectListItem *)this);
  return;
}

// GetPrivateStaticClass @ 14b5db5b0

UClass * __cdecl UDS_UserObjectTreeItem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UserObjectTreeItem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UserObjectTreeItem",
               &Z_Registration_Info_UClass_UDS_UserObjectTreeItem.InnerSingleton,
               StaticRegisterNativesUDS_UserObjectTreeItem,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_UserObjectTreeItem>,
               InternalVTableHelperCtorCaller<UDS_UserObjectTreeItem>,local_res8,
               UDS_UserObjectListItem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UserObjectTreeItem.InnerSingleton;
}

// StaticRegisterNativesUDS_UserObjectTreeItem @ 14b5dbd50

void __cdecl UDS_UserObjectTreeItem::StaticRegisterNativesUDS_UserObjectTreeItem(void)

{
  return;
}

// AddChildItem @ 14bdae540

void __thiscall
UDS_UserObjectTreeItem::AddChildItem
          (UDS_UserObjectTreeItem *this,TObjectPtr<UDS_UserObjectTreeItem> param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  int iVar4;
  
  iVar4 = (this->ChildItems).ArrayNum;
  piVar1 = &(this->ChildItems).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ChildItems).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->ChildItems).AllocatorInstance.Data;
  (this->ChildItems).ArrayNum = iVar4 + 1;
  pUVar3 = *(UObject **)param_1.field0_0x0;
  *(UObject **)(pFVar2 + (longlong)iVar4 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return;
}

// AddChildItems @ 14bdae5b0

void __thiscall
UDS_UserObjectTreeItem::AddChildItems
          (UDS_UserObjectTreeItem *this,
          TArray<TObjectPtr<UDS_UserObjectTreeItem>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TObjectPtr<UDS_UserObjectTreeItem>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->ChildItems;
  if (pTVar1 == param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&pTVar1->AllocatorInstance,&(this->ChildItems).ArrayNum,
                       &(this->ChildItems).ArrayMax);
    ConstructItems<TObjectPtr<UDS_UserObjectTreeItem>,TObjectPtr<UDS_UserObjectTreeItem>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,
               (TObjectPtr<UDS_UserObjectTreeItem> *)(param_1->AllocatorInstance).Data,iVar2);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetChildItems @ 14bdc2c80

TArray<TObjectPtr<UDS_UserObjectTreeItem>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_UserObjectTreeItem::GetChildItems(UDS_UserObjectTreeItem *this)

{
  return &this->ChildItems;
}

// GetDepth @ 14bdc2d70

int __thiscall UDS_UserObjectTreeItem::GetDepth(UDS_UserObjectTreeItem *this)

{
  return this->Depth;
}

// HasChildren @ 14bdc4b30

bool __thiscall UDS_UserObjectTreeItem::HasChildren(UDS_UserObjectTreeItem *this)

{
  return 0 < (this->ChildItems).ArrayNum;
}

// IsItemExpanded @ 14bdc8890

bool __thiscall UDS_UserObjectTreeItem::IsItemExpanded(UDS_UserObjectTreeItem *this)

{
  return this->bItemExpanded;
}

// Reset @ 14bde31d0

void __thiscall UDS_UserObjectTreeItem::Reset(UDS_UserObjectTreeItem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar4;
  bool bVar5;
  UDS_UserWidget *this_00;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pFVar6 = (this->ChildItems).AllocatorInstance.Data;
  iVar3 = (this->ChildItems).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ChildItems).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectTreeItem>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar6 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar6 + 0x2b0))();
    pFVar6 = pFVar6 + 8;
  }
  (this->ChildItems).ArrayNum = 0;
  if ((this->ChildItems).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ChildItems).AllocatorInstance,0,&(this->ChildItems).ArrayMax);
  }
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (bVar5) {
    this_00 = (UDS_UserWidget *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    UDS_UserWidget::OnReleasedListViewEvent(this_00);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = local_res8;
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  pTVar4 = (TSharedPtr<FDS_ViewModelContext,1> *)this->_padding_;
  iVar3 = (int)this->_padding_;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(pTVar4,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDS_ViewModelContext,1>,int>(pTVar4,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
  }
  return;
}

// SetDepth @ 14bde5520

void __thiscall UDS_UserObjectTreeItem::SetDepth(UDS_UserObjectTreeItem *this,int param_1)

{
  this->Depth = param_1;
  return;
}

// SetItemExpanded @ 14bde6dd0

void __thiscall UDS_UserObjectTreeItem::SetItemExpanded(UDS_UserObjectTreeItem *this,bool param_1)

{
  this->bItemExpanded = param_1;
  return;
}

