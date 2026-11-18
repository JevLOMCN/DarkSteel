// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 30

// StaticClass @ 146aac370

UClass * __cdecl UWidgetTree::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetTree",&Z_Registration_Info_UClass_UWidgetTree.InnerSingleton,
               StaticRegisterNativesUWidgetTree,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetTree>,InternalVTableHelperCtorCaller<UWidgetTree>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetTree.InnerSingleton;
}

// UWidgetTree @ 146aad510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetTree * __thiscall UWidgetTree::UWidgetTree(UWidgetTree *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INamedSlotInterface__;
  (this->RootWidget).field0_0x0.DebugPtr = (UWidget *)0x0;
  *(undefined8 *)&this->NamedSlotBindings = 0;
  *(undefined8 *)&(this->NamedSlotBindings).field_0x8 = 0;
  *(undefined8 *)&(this->NamedSlotBindings).field_0x20 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x28 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x34 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NamedSlotBindings).field_0x40 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x48 = 0;
  return this;
}

// UWidgetTree @ 146aad580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetTree * __thiscall UWidgetTree::UWidgetTree(UWidgetTree *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INamedSlotInterface__;
  (this->RootWidget).field0_0x0.DebugPtr = (UWidget *)0x0;
  *(undefined8 *)&this->NamedSlotBindings = 0;
  *(undefined8 *)&(this->NamedSlotBindings).field_0x8 = 0;
  *(undefined8 *)&(this->NamedSlotBindings).field_0x20 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x28 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x34 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NamedSlotBindings).field_0x40 = 0;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x48 = 0;
  return this;
}

// ~UWidgetTree @ 146aad6b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetTree::~UWidgetTree(UWidgetTree *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INamedSlotInterface__;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NamedSlotBindings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamedSlotBindings);
  this->_padding_ = (longlong)&___7INamedSlotInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146aad720

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UWidgetTree::ForEachWidgetAndDescendants'::__l2::<lambda_1>::operator()
          (void *this,UWidget *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UWidget *local_res8;
  undefined8 local_38;
  undefined8 local_30;
  UWidgetTree *local_28;
  undefined8 *local_20;
  code *local_18;
  UWidgetTree **local_10;
  
  if (*(UWidget **)(*(longlong *)this + 0x30) == (UWidget *)0x0) {
    bVar3 = param_1 == (UWidget *)0x0;
  }
  else {
    bVar3 = *(UWidget **)(*(longlong *)this + 0x30) == param_1;
  }
  if ((!bVar3) && (param_1 != (UWidget *)0x0)) {
    pUVar2 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_ &&
        (local_28 = *(UWidgetTree **)
                     (param_1[1].EnabledFieldNotifications.AllocatorInstance.InlineData + 8),
        local_28 != (UWidgetTree *)0x0)))) {
      local_38 = **(undefined8 **)((longlong)this + 8);
      local_30 = (*(undefined8 **)((longlong)this + 8))[1];
      local_20 = &local_38;
      local_10 = &local_28;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWidgetTree::ForEachWidgetAndDescendants'::__l2::<lambda_1>,void,UWidget_*>
                 ::Call;
      UWidgetTree::ForEachWidget(local_28,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
      return;
    }
  }
  local_res8 = param_1;
  (*(code *)**(undefined8 **)((longlong)this + 8))
            ((*(undefined8 **)((longlong)this + 8))[1],&local_res8);
  return;
}

// operator() @ 146aad800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UWidgetTree::GetAllWidgets'::__l2::<lambda_1>::operator()(void *this,UWidget *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWidget *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UWidget **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// operator() @ 146aad8b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UWidgetTree::GetChildWidgets'::__l2::<lambda_1>::operator()(void *this,UWidget *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWidget *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UWidget **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// FindChildIndex @ 146aadc20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UWidgetTree::FindChildIndex(UPanelWidget *param_1,UWidget *param_2)

{
  UPanelWidget *pUVar1;
  int iVar2;
  
joined_r0x000146aadc38:
  do {
    pUVar1 = (UPanelWidget *)param_2;
    if ((pUVar1 == (UPanelWidget *)0x0) || (pUVar1->_padding_ == 0)) {
      return -1;
    }
    param_2 = *(UWidget **)(pUVar1->_padding_ + 0x28);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPanelWidget *)param_2 == (UPanelWidget *)0x0) goto joined_r0x000146aadc38;
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    if (((UPanelWidget *)param_2 != (UPanelWidget *)0x0) && ((UPanelWidget *)param_2 == param_1)) {
      iVar2 = UPanelWidget::GetChildIndex((UPanelWidget *)param_2,(UWidget *)pUVar1);
      return iVar2;
    }
  } while( true );
}

// FindWidget @ 146aadcb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidgetTree::FindWidget(UWidgetTree *this,FName *param_1)

{
  UWidget *local_res10 [3];
  FName *local_28;
  UWidget **local_20;
  code *local_18;
  FName **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_res10[0] = (UWidget *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWidgetTree::FindWidget'::__l2::<lambda_1>,void,UWidget_*>::Call;
  local_28 = param_1;
  ForEachWidget(this,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  return local_res10[0];
}

// FindWidget @ 146aadd00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidgetTree::FindWidget(UWidgetTree *this,TSharedRef<SWidget,1> *param_1)

{
  UWidget *pUVar1;
  UWidget *local_res10 [3];
  TSharedRef<SWidget,1> *local_28;
  UWidget **local_20;
  code *local_18;
  TSharedRef<SWidget,1> **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_res10[0] = (UWidget *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWidgetTree::FindWidget'::__l2::<lambda_1>,void,UWidget_*>::Call;
  local_28 = param_1;
  ForEachWidget(this,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  pUVar1 = local_res10[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar1;
}

// FindWidgetChild @ 146aadd70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl UWidgetTree::FindWidgetChild(UPanelWidget *param_1,FName param_2,int *param_3)

{
  int iVar1;
  UWidget *pUVar2;
  int iVar3;
  UWidget *local_res8;
  UWidget **local_28;
  FName local_20;
  code *local_18;
  UWidget ***local_10;
  
  iVar3 = 0;
  *param_3 = -1;
  local_res8 = (UWidget *)0x0;
  if (param_1 == (UPanelWidget *)0x0) {
    return (UWidget *)0x0;
  }
  local_28 = &local_res8;
  local_20 = param_2;
  iVar1 = UPanelWidget::GetChildrenCount(param_1);
  if (iVar1 < 1) {
    return local_res8;
  }
  while( true ) {
    pUVar2 = UPanelWidget::GetChildAt(param_1,iVar3);
    if ((*local_28 == (UWidget *)0x0) && ((FName)pUVar2->_padding_ == local_20)) {
      *local_28 = pUVar2;
    }
    if (local_res8 != (UWidget *)0x0) break;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWidgetTree::FindWidgetChild'::__l5::<lambda_1>_const_,void,UWidget_*>
               ::Call;
    pUVar2 = UPanelWidget::GetChildAt(param_1,iVar3);
    ForWidgetAndChildren(pUVar2,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
    if (local_res8 != (UWidget *)0x0) break;
    iVar3 = iVar3 + 1;
    iVar1 = UPanelWidget::GetChildrenCount(param_1);
    if (iVar1 <= iVar3) {
      return local_res8;
    }
  }
  *param_3 = iVar3;
  return local_res8;
}

// FindWidgetParent @ 146aade80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelWidget * __cdecl UWidgetTree::FindWidgetParent(UWidget *param_1,int *param_2)

{
  int iVar1;
  UPanelWidget *this;
  
  this = UWidget::GetParent(param_1);
  if (this != (UPanelWidget *)0x0) {
    iVar1 = UPanelWidget::GetChildIndex(this,param_1);
    *param_2 = iVar1;
    return this;
  }
  *param_2 = 0;
  return (UPanelWidget *)0x0;
}

// ForEachWidget @ 146aadee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetTree::ForEachWidget(UWidgetTree *this,TFunctionRef<void___cdecl(UWidget_*)> *param_1)

{
  undefined1 *puVar1;
  TMap<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  TObjectPtr<UWidget>_u_0 TVar5;
  UWidget *pUVar6;
  code *pcVar7;
  TMap<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  TObjectPtr<UWidget>_u_0 local_res20;
  undefined4 uStack_9c;
  UWidget *local_98;
  TMap<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TFunctionRef<void___cdecl(UWidget_*)> local_60;
  TFunctionRef<void___cdecl(UWidget_*)> local_50;
  
  TVar5 = (TObjectPtr<UWidget>_u_0)(this->RootWidget).field0_0x0.DebugPtr;
  if (TVar5.DebugPtr != (UWidget *)0x0) {
    local_res20 = TVar5;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20);
    local_60._0_8_ = *(undefined8 *)param_1;
    local_60._8_8_ = *(undefined8 *)&param_1->field_0x8;
    ForWidgetAndChildren((this->RootWidget).field0_0x0.DebugPtr,&local_60);
  }
  iVar4 = *(int *)&(this->NamedSlotBindings).field_0x28;
  puVar1 = &(this->NamedSlotBindings).field_0x10;
  iVar14 = 0;
  pTVar2 = &this->NamedSlotBindings;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->NamedSlotBindings).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146aadfbd;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = iVar16 + -1 + (int)lVar12;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_146aadfbd:
  uVar13 = *(uint *)&(this->NamedSlotBindings).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar10,iVar14);
  TStack_88.CurrentBitIndex = iVar11;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_88._28_4_ = iVar11;
  TStack_88.BaseBitIndex = iVar16;
  uStack_68 = CONCAT44(uStack_9c,
                       *(int *)&(this->NamedSlotBindings).field_0x8 -
                       *(int *)&(this->NamedSlotBindings).field_0x34);
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&(this->NamedSlotBindings).field_0x28;
  if (uVar13 != uVar10) {
    puVar15 = *(undefined1 **)&(this->NamedSlotBindings).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_146aae0c0;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_146aae0c0:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar13) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pUVar6 = *(UWidget **)(*(longlong *)pTVar8 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    if (pUVar6 != (UWidget *)0x0) {
      local_98 = pUVar6;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_98);
      local_50._0_8_ = *(undefined8 *)param_1;
      local_50._8_8_ = *(undefined8 *)&param_1->field_0x8;
      ForWidgetAndChildren(pUVar6,&local_50);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// ForEachWidgetAndChildrenUntil @ 146aae160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UWidgetTree::ForEachWidgetAndChildrenUntil
          (UWidget *param_1,TFunctionRef<bool___cdecl(UWidget_*)> *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UWidget *pUVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  UWidget *local_res8;
  undefined8 *local_48;
  ulonglong local_40;
  TFunctionRef<bool___cdecl(UWidget_*)> local_38;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar5 = Z_Construct_UClass_UNamedSlotInterface_NoRegister();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    iVar9 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_48);
      iVar4 = (int)local_40;
      uVar8 = (ulonglong)(int)local_40;
      puVar1 = local_48 + uVar8;
      puVar10 = local_48;
      do {
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (puVar10 == puVar1) {
          if (local_48 != (undefined8 *)0x0) {
            FMemory::Free(local_48);
          }
          break;
        }
        pUVar7 = (UWidget *)(**(code **)(*plVar6 + 0x18))(plVar6,*puVar10);
        if (pUVar7 != (UWidget *)0x0) {
          local_res8 = pUVar7;
          cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
          if (cVar2 == '\0') {
LAB_146aae242:
            if (local_48 != (undefined8 *)0x0) {
              FMemory::Free(local_48);
            }
            return false;
          }
          local_38._0_8_ = *(undefined8 *)param_2;
          local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
          bVar3 = ForEachWidgetAndChildrenUntil(pUVar7,&local_38);
          if (!bVar3) goto LAB_146aae242;
        }
        uVar8 = local_40 & 0xffffffff;
        puVar10 = puVar10 + 1;
      } while( true );
    }
    pUVar5 = Z_Construct_UClass_UPanelWidget_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if (((iVar4 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
         &pUVar5->_padding_)) &&
       (iVar4 = UPanelWidget::GetChildrenCount((UPanelWidget *)param_1), 0 < iVar4)) {
      do {
        pUVar7 = UPanelWidget::GetChildAt((UPanelWidget *)param_1,iVar9);
        if (pUVar7 != (UWidget *)0x0) {
          local_res8 = pUVar7;
          cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
          if (cVar2 == '\0') {
            return false;
          }
          local_38._0_8_ = *(undefined8 *)param_2;
          local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
          bVar3 = ForEachWidgetAndChildrenUntil(pUVar7,&local_38);
          if (!bVar3) {
            return false;
          }
        }
        iVar9 = iVar9 + 1;
        iVar4 = UPanelWidget::GetChildrenCount((UPanelWidget *)param_1);
      } while (iVar9 < iVar4);
    }
  }
  return true;
}

// ForEachWidgetAndDescendants @ 146aae320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetTree::ForEachWidgetAndDescendants
          (UWidgetTree *this,TFunctionRef<void___cdecl(UWidget_*)> *param_1)

{
  UWidgetTree *local_28;
  TFunctionRef<void___cdecl(UWidget_*)> *local_20;
  code *local_18;
  UWidgetTree **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWidgetTree::ForEachWidgetAndDescendants'::__l2::<lambda_1>,void,UWidget_*>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  ForEachWidget(this,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  return;
}

// ForEachWidgetUntil @ 146aae360

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetTree::ForEachWidgetUntil(UWidgetTree *this,TFunctionRef<bool___cdecl(UWidget_*)> *param_1)

{
  TMap<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  TObjectPtr<UWidget>_u_0 TVar5;
  UWidget *pUVar6;
  code *pcVar7;
  TMap<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  *pTVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  TObjectPtr<UWidget>_u_0 local_res20;
  undefined4 uStack_9c;
  UWidget *local_98;
  TMap<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TFunctionRef<bool___cdecl(UWidget_*)> local_60;
  TFunctionRef<bool___cdecl(UWidget_*)> local_50;
  
  TVar5 = (TObjectPtr<UWidget>_u_0)(this->RootWidget).field0_0x0.DebugPtr;
  if (TVar5.DebugPtr != (UWidget *)0x0) {
    local_res20 = TVar5;
    cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20);
    if (cVar9 != '\0') {
      local_60._0_8_ = *(undefined8 *)param_1;
      local_60._8_8_ = *(undefined8 *)&param_1->field_0x8;
      bVar10 = ForEachWidgetAndChildrenUntil((this->RootWidget).field0_0x0.DebugPtr,&local_60);
      if (bVar10) goto LAB_146aae3bd;
    }
    return;
  }
LAB_146aae3bd:
  iVar4 = *(int *)&(this->NamedSlotBindings).field_0x28;
  iVar15 = 0;
  uVar11 = 1;
  pTVar1 = &this->NamedSlotBindings;
  puVar2 = &(this->NamedSlotBindings).field_0x10;
  iVar17 = 0;
  iVar12 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->NamedSlotBindings).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar12 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146aae46d;
      uVar14 = puVar18[lVar13 + 1];
    }
    uVar11 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = iVar17 + -1 + (int)lVar13;
    if (iVar4 < iVar12) {
      iVar12 = iVar4;
    }
  }
LAB_146aae46d:
  uVar14 = *(uint *)&(this->NamedSlotBindings).field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar11,iVar15);
  TStack_88.CurrentBitIndex = iVar12;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iVar12;
  TStack_88.BaseBitIndex = iVar17;
  uStack_68 = CONCAT44(uStack_9c,
                       *(int *)&(this->NamedSlotBindings).field_0x8 -
                       *(int *)&(this->NamedSlotBindings).field_0x34);
  local_90 = pTVar1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)&(this->NamedSlotBindings).field_0x28;
  if (uVar14 != uVar11) {
    puVar16 = *(undefined1 **)&(this->NamedSlotBindings).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_146aae580;
      uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar14 = (int)lVar13 + -1 + uVar19;
    if ((int)uVar11 < (int)uVar14) {
      uVar14 = uVar11;
    }
  }
LAB_146aae580:
  do {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar1))
    {
      return;
    }
    pUVar6 = *(UWidget **)(*(longlong *)pTVar8 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    if (pUVar6 != (UWidget *)0x0) {
      local_98 = pUVar6;
      cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_98);
      if (cVar9 == '\0') {
        return;
      }
      local_50._0_8_ = *(undefined8 *)param_1;
      local_50._8_8_ = *(undefined8 *)&param_1->field_0x8;
      bVar10 = ForEachWidgetAndChildrenUntil(pUVar6,&local_50);
      if (!bVar10) {
        return;
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  } while( true );
}

// ForWidgetAndChildren @ 146aae640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetTree::ForWidgetAndChildren(UWidget *param_1,TFunctionRef<void___cdecl(UWidget_*)> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UWidget *pUVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  UWidget *local_res8;
  undefined8 *local_48;
  ulonglong local_40;
  TFunctionRef<void___cdecl(UWidget_*)> local_38;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar3 = Z_Construct_UClass_UNamedSlotInterface_NoRegister();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    iVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_48);
      iVar2 = (int)local_40;
      uVar6 = (ulonglong)(int)local_40;
      puVar1 = local_48 + uVar6;
      puVar8 = local_48;
      while( true ) {
        if ((int)uVar6 != iVar2) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (puVar8 == puVar1) break;
        pUVar5 = (UWidget *)(**(code **)(*plVar4 + 0x18))(plVar4,*puVar8);
        if (pUVar5 != (UWidget *)0x0) {
          local_res8 = pUVar5;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
          local_38._0_8_ = *(undefined8 *)param_2;
          local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
          ForWidgetAndChildren(pUVar5,&local_38);
        }
        uVar6 = local_40 & 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      if (local_48 != (undefined8 *)0x0) {
        FMemory::Free(local_48);
      }
    }
    pUVar3 = Z_Construct_UClass_UPanelWidget_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar3->_padding_)) &&
       (iVar2 = UPanelWidget::GetChildrenCount((UPanelWidget *)param_1), 0 < iVar2)) {
      do {
        pUVar5 = UPanelWidget::GetChildAt((UPanelWidget *)param_1,iVar7);
        if (pUVar5 != (UWidget *)0x0) {
          local_res8 = pUVar5;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
          local_38._0_8_ = *(undefined8 *)param_2;
          local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
          ForWidgetAndChildren(pUVar5,&local_38);
        }
        iVar7 = iVar7 + 1;
        iVar2 = UPanelWidget::GetChildrenCount((UPanelWidget *)param_1);
      } while (iVar7 < iVar2);
    }
  }
  return;
}

// GetAllWidgets @ 146aae7f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetTree::GetAllWidgets(UWidgetTree *this,TArray<UWidget_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> *local_res10 [3];
  code *local_18;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWidgetTree::GetAllWidgets'::__l2::<lambda_1>,void,UWidget_*>::Call
  ;
  local_res10[0] = param_1;
  ForEachWidget(this,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  return;
}

// GetChildWidgets @ 146aae830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetTree::GetChildWidgets
          (UWidget *param_1,TArray<UWidget_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> *local_res10 [3];
  code *local_18;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWidgetTree::GetChildWidgets'::__l2::<lambda_1>,void,UWidget_*>::
             Call;
  local_res10[0] = param_2;
  ForWidgetAndChildren(param_1,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
  return;
}

// GetContentForSlot @ 146aae870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidgetTree::GetContentForSlot(UWidgetTree *this,FName param_1)

{
  UWidget *pUVar1;
  TTuple<FName,TObjectPtr<UWidget>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FName,TObjectPtr<UWidget>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UWidget>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,param_1);
  if (pTVar2 != (TTuple<FName,TObjectPtr<UWidget>_> *)0x0) {
    pUVar1 = *(UWidget **)&pTVar2->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UWidget *)0x0;
}

// GetPrivateStaticClass @ 146aaed60

UClass * __cdecl UWidgetTree::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetTree",&Z_Registration_Info_UClass_UWidgetTree.InnerSingleton,
               StaticRegisterNativesUWidgetTree,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetTree>,InternalVTableHelperCtorCaller<UWidgetTree>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetTree.InnerSingleton;
}

// GetSlotNames @ 146aaee10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetTree::GetSlotNames(UWidgetTree *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TObjectPtr<UWidget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>_>
              *)&this->_padding_,param_1);
  return;
}

// GetWorld @ 146aaf1b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWidgetTree::GetWorld(UWidgetTree *this)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000146aaf1ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UWorld *)(**(code **)(*plVar2 + 0x180))(plVar2);
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

// PostLoad @ 146aaf210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetTree::PostLoad(UWidgetTree *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UWidgetTree **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreSave @ 146aaf220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetTree::PreSave(UWidgetTree *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RemoveWidget @ 146aaf600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidgetTree::RemoveWidget(UWidgetTree *this,UWidget *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  UWidget *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UPanelWidget *this_00;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_00 = UWidget::GetParent(param_1);
  if (this_00 != (UPanelWidget *)0x0) {
    bVar6 = UPanelWidget::RemoveChild(this_00,param_1);
    return bVar6;
  }
  pUVar4 = (this->RootWidget).field0_0x0.DebugPtr;
  if (pUVar4 == (UWidget *)0x0) {
    bVar6 = param_1 == (UWidget *)0x0;
  }
  else {
    bVar6 = pUVar4 == param_1;
  }
  iVar13 = 0;
  if (bVar6) {
    (this->RootWidget).field0_0x0.DebugPtr = (UWidget *)0x0;
    return true;
  }
  iVar3 = *(int *)&(this->NamedSlotBindings).field_0x28;
  uVar8 = 1;
  puVar2 = &(this->NamedSlotBindings).field_0x10;
  iVar9 = 0;
  iVar14 = iVar13;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->NamedSlotBindings).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar12 = *puVar15;
    iVar14 = 0;
    iVar13 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_146aaf71f;
      uVar12 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar9 = iVar14 + -1 + local_res20;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_146aaf71f:
  uVar12 = *(uint *)&(this->NamedSlotBindings).field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->NamedSlotBindings).field_0x8 -
                       *(int *)&(this->NamedSlotBindings).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->NamedSlotBindings).field_0x28;
  if (uVar12 != uVar8) {
    puVar11 = *(undefined1 **)&(this->NamedSlotBindings).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar13) goto LAB_146aaf830;
      uVar12 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_146aaf830:
  while( true ) {
    if (*(int *)&(this->NamedSlotBindings).field_0x8 - *(int *)&(this->NamedSlotBindings).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar4 = *(UWidget **)
              (*(longlong *)&this->NamedSlotBindings + 8 +
              (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (pUVar4 == (UWidget *)0x0) {
      bVar6 = param_1 == (UWidget *)0x0;
    }
    else {
      bVar6 = pUVar4 == param_1;
    }
    if (bVar6) {
      (**(code **)(this->_padding_ + 0x20))
                (&this->_padding_,
                 *(undefined8 *)
                  (*(longlong *)&this->NamedSlotBindings +
                  (longlong)TStack_60.CurrentBitIndex * 0x18),0);
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// SetContentForSlot @ 146aaf9b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetTree::SetContentForSlot(UWidgetTree *this,FName param_1,UWidget *param_2)

{
  uint uVar1;
  FName local_res10;
  TPairInitializer<FName_const_&,TObjectPtr<UWidget>_&&> local_res18;
  FName *local_18;
  TObjectPtr<UWidget> **local_10;
  
  local_res10 = param_1;
  if (param_2 != (UWidget *)0x0) {
    local_res18.Value = (TObjectPtr<UWidget> *)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_18 = &local_res10;
    local_10 = &local_res18.Value;
    TSet<TTuple<FName,TObjectPtr<UWidget>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UWidget>_&&>_>
              ((TSet<TTuple<FName,TObjectPtr<UWidget>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res18,(bool *)&local_18);
    return;
  }
  if ((int)this->_padding_ != *(int *)&(this->NamedSlotBindings).field_0xc) {
    local_res18.Key = (FName *)param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TObjectPtr<UWidget>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UWidget>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UWidget>,0>,FDefaultSetAllocator>
                         *)&this->_padding_,param_1.Number + uVar1,(FName *)&local_res18);
  }
  return;
}

// StaticRegisterNativesUWidgetTree @ 146aaffd0

void __cdecl UWidgetTree::StaticRegisterNativesUWidgetTree(void)

{
  return;
}

// TryMoveWidgetToNewTree @ 146aaffe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UWidgetTree::TryMoveWidgetToNewTree(UWidget *param_1,UWidgetTree *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  ForAnyElementType FVar5;
  UWidgetTree *pUVar6;
  FName local_res8;
  FString local_18;
  
  if ((param_1 != (UWidget *)0x0) &&
     (pUVar6 = (UWidgetTree *)param_1->_padding_, pUVar6 != (UWidgetTree *)0x0)) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_146ab0028;
  }
  pUVar6 = (UWidgetTree *)0x0;
LAB_146ab0028:
  if (((param_2 == (UWidgetTree *)0x0) || (pUVar6 == (UWidgetTree *)0x0)) || (pUVar6 == param_2)) {
    uVar3 = 0;
  }
  else {
    pcVar2 = *(code **)(param_1->_padding_ + 0x170);
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    uVar3 = (*pcVar2)(param_1,FVar5.Data,param_2,0x10);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return (bool)uVar3;
    }
  }
  return (bool)uVar3;
}

// _getUObject @ 146ab02b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UWidgetTree::_getUObject(UWidgetTree *this)

{
  return (UObject *)&this[-1].NamedSlotBindings.field_0x28;
}

