// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 36

// StaticClass @ 146945510

UClass * __cdecl UPanelWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPanelWidget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PanelWidget",&Z_Registration_Info_UClass_UPanelWidget.InnerSingleton
               ,StaticRegisterNativesUPanelWidget,0x1c8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPanelWidget>,
               InternalVTableHelperCtorCaller<UPanelWidget>,aFStackX_8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanelWidget.InnerSingleton;
}

// UPanelWidget @ 14698c590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelWidget * __thiscall UPanelWidget::UPanelWidget(UPanelWidget *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Slots).ArrayNum = 0;
  (this->Slots).ArrayMax = 0;
  return this;
}

// UPanelWidget @ 14698c5e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelWidget * __thiscall UPanelWidget::UPanelWidget(UPanelWidget *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->bCanHaveMultipleChildren = true;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Slots).ArrayNum = 0;
  (this->Slots).ArrayMax = 0;
  return this;
}

// ~UPanelWidget @ 146993bb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPanelWidget::~UPanelWidget(UPanelWidget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->Slots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddChild @ 1469a10c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelSlot * __thiscall UPanelWidget::AddChild(UPanelWidget *this,UWidget *param_1)

{
  UPanelSlot *pUVar1;
  
  pUVar1 = AddChild(this,param_1,(UPanelSlot *)0x0);
  return pUVar1;
}

// AddChild @ 1469a10d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelSlot * __thiscall
UPanelWidget::AddChild(UPanelWidget *this,UWidget *param_1,UPanelSlot *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  UWidget *pUVar4;
  UPanelWidget *pUVar5;
  TObjectPtr<UPanelSlot>_u_0 *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  UClass *pUVar11;
  TObjectPtr<UPanelSlot>_u_0 TVar12;
  UPanelSlot *pUVar13;
  EObjectFlags EVar14;
  TObjectPtr<UPanelSlot>_u_0 local_38 [2];
  
  if ((param_1 == (UWidget *)0x0) ||
     ((this->bCanHaveMultipleChildren == false && (0 < (this->Slots).ArrayNum)))) {
    return (UPanelSlot *)0x0;
  }
  (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  EVar14 = (EObjectFlags)this->_padding_ & RF_Transient | RF_Transactional;
  if (param_2 != (UPanelSlot *)0x0) {
    lVar3 = param_2->_padding_;
    lVar10 = (**(code **)(this->_padding_ + 0x318))(this);
    if (lVar10 == lVar3) {
      pUVar4 = (param_2->Content).field0_0x0.DebugPtr;
      pUVar5 = (param_2->Parent).field0_0x0.DebugPtr;
      (param_2->Content).field0_0x0.DebugPtr = (UWidget *)0x0;
      (param_2->Parent).field0_0x0.DebugPtr = (UPanelWidget *)0x0;
      pUVar11 = (UClass *)(**(code **)(this->_padding_ + 0x318))(this);
      TVar12.DebugPtr =
           NewObject<UPanelSlot>
                     ((UObject *)this,pUVar11,(FName)0x0,EVar14,param_2,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (param_2->Content).field0_0x0.DebugPtr = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPanelWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (param_2->Parent).field0_0x0.DebugPtr = pUVar5;
      goto LAB_1469a1221;
    }
  }
  pUVar11 = (UClass *)(**(code **)(this->_padding_ + 0x318))(this);
  TVar12.DebugPtr =
       NewObject<UPanelSlot>
                 ((UObject *)this,pUVar11,(FName)0x0,EVar14,(UObject *)0x0,false,
                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_1469a1221:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  ((TVar12.DebugPtr)->Content).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  ((TVar12.DebugPtr)->Parent).field0_0x0.DebugPtr = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar12.DebugPtr != (UPanelSlot *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
  }
  (param_1->Slot).field0_0x0.DebugPtr = (UPanelSlot *)TVar12;
  pTVar2 = &this->Slots;
  local_38[0] = TVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar12.DebugPtr != (UPanelSlot *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
  }
  pTVar6 = (TObjectPtr<UPanelSlot>_u_0 *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar6 <= local_38) && (local_38 < pTVar6 + (this->Slots).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pUVar13 = (UPanelSlot *)(*pcVar7)();
      return pUVar13;
    }
  }
  iVar9 = (this->Slots).ArrayNum;
  piVar1 = &(this->Slots).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Slots).ArrayNum = iVar9 + 1;
  ((TObjectPtr<UPanelSlot>_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8))->DebugPtr
       = (UPanelSlot *)local_38[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38[0].DebugPtr != (UPanelSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38[0].DebugPtr);
  }
  (**(code **)(this->_padding_ + 800))(this,TVar12.DebugPtr);
  UWidget::InvalidateLayoutAndVolatility((UWidget *)this);
  return TVar12.DebugPtr;
}

// ClearChildren @ 1469a62a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPanelWidget::ClearChildren(UPanelWidget *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (this->Slots).ArrayNum + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 8;
    do {
      if ((-1 < iVar4) && (iVar4 < (this->Slots).ArrayNum)) {
        if ((iVar4 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->Slots).AllocatorInstance.Data + lVar5);
        TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Slots,iVar4,Default);
        if (plVar1 != (longlong *)0x0) {
          if (plVar1[6] != 0) {
            *(undefined8 *)(plVar1[6] + 0x30) = 0;
          }
          (**(code **)(this->_padding_ + 0x328))(this,plVar1);
          (**(code **)(*plVar1 + 0x2b0))(plVar1,1);
          plVar1[5] = 0;
          plVar1[6] = 0;
          UWidget::InvalidateLayoutAndVolatility((UWidget *)this);
        }
      }
      lVar5 = lVar5 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}

// GetAllChildren @ 1469cced0

TArray<UWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
UPanelWidget::GetAllChildren
          (UPanelWidget *this,TArray<UWidget_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->Slots).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (this->Slots).AllocatorInstance.Data;
  iVar4 = (this->Slots).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Slots).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    local_28[0] = *(undefined8 *)(*(longlong *)pFVar10 + 0x30);
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<UWidget_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_28[0];
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1469ce300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UPanelWidget::GetChildAt(UPanelWidget *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UWidget *pUVar5;
  
  if ((-1 < param_1) && (param_1 < (this->Slots).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Slots).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UWidget *)(*pcVar2)();
        return pUVar5;
      }
    }
    lVar1 = *(longlong *)((this->Slots).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (lVar1 != 0) {
      return *(UWidget **)(lVar1 + 0x30);
    }
  }
  return (UWidget *)0x0;
}

// GetChildIndex @ 1469ce3a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UPanelWidget::GetChildIndex(UPanelWidget *this,UWidget *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_1 != (UWidget *)0x0) {
    lVar8 = (longlong)(this->Slots).ArrayNum;
    uVar6 = 0;
    if (0 < lVar8) {
      lVar7 = 0;
      do {
        if ((-1 < (int)uVar6) && ((int)uVar6 < (this->Slots).ArrayNum)) {
          uVar4 = 0;
          if ((int)uVar6 < (this->Slots).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          lVar1 = *(longlong *)((this->Slots).AllocatorInstance.Data + lVar7 * 8);
          if ((lVar1 != 0) && (*(UWidget **)(lVar1 + 0x30) == param_1)) {
            return uVar6;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar8);
    }
  }
  return -1;
}

// GetChildrenCount @ 1469ce490

int __thiscall UPanelWidget::GetChildrenCount(UPanelWidget *this)

{
  return (this->Slots).ArrayNum;
}

// GetPrivateStaticClass @ 1469d4f30

UClass * __cdecl UPanelWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPanelWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PanelWidget",&Z_Registration_Info_UClass_UPanelWidget.InnerSingleton
               ,StaticRegisterNativesUPanelWidget,0x1c8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPanelWidget>,
               InternalVTableHelperCtorCaller<UPanelWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanelWidget.InnerSingleton;
}

// GetSlotClass @ 1469d8750

UClass * __thiscall UPanelWidget::GetSlotClass(UPanelWidget *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPanelSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PanelSlot",&Z_Registration_Info_UClass_UPanelSlot.InnerSingleton,
               UPanelSlot::StaticRegisterNativesUPanelSlot,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPanelSlot>,InternalVTableHelperCtorCaller<UPanelSlot>,
               aFStackX_8,UVisual::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanelSlot.InnerSingleton;
}

// GetSlots @ 1469d8940

TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> * __thiscall
UPanelWidget::GetSlots(UPanelWidget *this)

{
  return (TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> *)&this->Slots;
}

// HasAnyChildren @ 1469ddff0

bool __thiscall UPanelWidget::HasAnyChildren(UPanelWidget *this)

{
  return 0 < (this->Slots).ArrayNum;
}

// HasChild @ 1469de0a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPanelWidget::HasChild(UPanelWidget *this,UWidget *param_1)

{
  UPanelSlot *pUVar1;
  
  if (param_1 == (UWidget *)0x0) {
    return false;
  }
  pUVar1 = (param_1->Slot).field0_0x0.DebugPtr;
  if (pUVar1 != (UPanelSlot *)0x0) {
    return (pUVar1->Parent).field0_0x0.DebugPtr == this;
  }
  return this == (UPanelWidget *)0x0;
}

// InsertChildAt @ 1469e05f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelSlot * __thiscall UPanelWidget::InsertChildAt(UPanelWidget *this,int param_1,UWidget *param_2)

{
  UPanelSlot *pUVar1;
  
  pUVar1 = InsertChildAt(this,param_1,param_2,(UPanelSlot *)0x0);
  return pUVar1;
}

// InsertChildAt @ 1469e0600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UPanelSlot * __thiscall
UPanelWidget::InsertChildAt(UPanelWidget *this,int param_1,UWidget *param_2,UPanelSlot *param_3)

{
  TObjectPtr<UPanelSlot> *pTVar1;
  int *piVar2;
  TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_> *this_00;
  UPanelSlot *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPanelSlot *pUVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  
  if (param_2 == (UWidget *)0x0) {
    return (UPanelSlot *)0x0;
  }
  pUVar7 = AddChild(this,param_2,param_3);
  iVar6 = GetChildIndex(this,param_2);
  if (iVar6 != -1) {
    this_00 = &this->Slots;
    TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar6,Default);
    iVar6 = (this->Slots).ArrayNum;
    pFVar8 = (this_00->AllocatorInstance).Data;
    if (param_1 < iVar6) {
      iVar6 = param_1;
    }
    pTVar1 = &param_2->Slot;
    iVar9 = 0;
    if (0 < iVar6) {
      iVar9 = iVar6;
    }
    if ((pFVar8 <= pTVar1) && (pTVar1 < pFVar8 + (longlong)(this->Slots).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UPanelSlot *)(*pcVar4)();
        return pUVar7;
      }
    }
    iVar6 = (this->Slots).ArrayNum;
    piVar2 = &(this->Slots).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this_00->AllocatorInstance,piVar2);
    }
    pFVar8 = (this_00->AllocatorInstance).Data;
    (this->Slots).ArrayNum = iVar6 + 1;
    pFVar8 = pFVar8 + (longlong)iVar9 * 8;
    memmove(pFVar8 + 8,pFVar8,(longlong)(iVar6 - iVar9) << 3);
    pUVar3 = (pTVar1->field0_0x0).DebugPtr;
    *(UPanelSlot **)((this_00->AllocatorInstance).Data + (longlong)iVar9 * 8) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UWidget::InvalidateLayoutAndVolatility((UWidget *)this);
  }
  return pUVar7;
}

// OnSlotAdded @ 1469f0a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPanelWidget::OnSlotAdded(UPanelWidget *this,UPanelSlot *param_1)

{
  return;
}

// OnSlotRemoved @ 1469f1640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPanelWidget::OnSlotRemoved(UPanelWidget *this,UPanelSlot *param_1)

{
  return;
}

// PostLoad @ 1469f3fd0

void __thiscall UPanelWidget::PostLoad(UPanelWidget *this)

{
  int *piVar1;
  TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  UObject::PostLoad((UObject *)this);
  uVar6 = 0;
  if (0 < (this->Slots).ArrayNum) {
    pTVar2 = &this->Slots;
    lVar9 = 0;
    do {
      uVar7 = ~uVar6 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar6 < (this->Slots).ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar9) == 0) {
LAB_1469f40bd:
        uVar5 = 0;
        if ((int)uVar6 < (this->Slots).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
        iVar8 = ~uVar6 + (this->Slots).ArrayNum;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->Slots).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->Slots).ArrayNum,&(this->Slots).ArrayMax);
        uVar6 = uVar6 - 1;
        lVar9 = lVar9 + -8;
      }
      else {
        uVar5 = 0;
        if ((int)uVar6 < (this->Slots).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar9) + 0x30) == 0)
        goto LAB_1469f40bd;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar6 < (this->Slots).ArrayNum);
  }
  return;
}

// ReleaseSlateResources @ 146a0ac80

void __thiscall UPanelWidget::ReleaseSlateResources(UPanelWidget *this,bool param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((param_1) && (uVar5 = 0, 0 < (this->Slots).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar6 = ~uVar5 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar5 < (this->Slots).ArrayNum) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->Slots).AllocatorInstance.Data + lVar7) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->Slots).ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)(*(longlong *)((this->Slots).AllocatorInstance.Data + lVar7) + 0x30) != 0)
        {
          uVar4 = 0;
          if ((int)uVar5 < (this->Slots).ArrayNum) {
            uVar4 = uVar6;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar1 = *(longlong **)((this->Slots).AllocatorInstance.Data + lVar7);
          (**(code **)(*plVar1 + 0x2b0))(plVar1,1);
        }
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < (this->Slots).ArrayNum);
  }
  return;
}

// RemoveChild @ 146a0bf00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPanelWidget::RemoveChild(UPanelWidget *this,UWidget *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetChildIndex(this,param_1);
  if (iVar2 != -1) {
    bVar1 = RemoveChildAt(this,iVar2);
    return bVar1;
  }
  return false;
}

// RemoveChildAt @ 146a0bf30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPanelWidget::RemoveChildAt(UPanelWidget *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Slots).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    plVar1 = *(longlong **)((this->Slots).AllocatorInstance.Data + (longlong)param_1 * 8);
    TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Slots,param_1,Default);
    if (plVar1 != (longlong *)0x0) {
      if (plVar1[6] != 0) {
        *(undefined8 *)(plVar1[6] + 0x30) = 0;
      }
      (**(code **)(this->_padding_ + 0x328))(this,plVar1);
      (**(code **)(*plVar1 + 0x2b0))(plVar1,1);
      plVar1[5] = 0;
      plVar1[6] = 0;
      UWidget::InvalidateLayoutAndVolatility((UWidget *)this);
      return true;
    }
  }
  return false;
}

// ShiftChild @ 146a1e140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPanelWidget::ShiftChild(UPanelWidget *this,int param_1,UWidget *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_> *this_00;
  UPanelSlot *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  TObjectPtr<UPanelSlot> *pTVar8;
  
  iVar5 = GetChildIndex(this,param_2);
  if (iVar5 != -1) {
    this_00 = &this->Slots;
    TArray<TObjectPtr<UPanelSlot>,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar5,Default);
    iVar5 = (this->Slots).ArrayNum;
    pFVar6 = (this_00->AllocatorInstance).Data;
    if (param_1 < iVar5) {
      iVar5 = param_1;
    }
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
    pTVar8 = &param_2->Slot;
    if ((pFVar6 <= pTVar8) && (pTVar8 < pFVar6 + (longlong)(this->Slots).ArrayMax * 8)) {
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
    iVar5 = (this->Slots).ArrayNum;
    piVar1 = &(this->Slots).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this_00->AllocatorInstance,piVar1);
    }
    pFVar6 = (this_00->AllocatorInstance).Data;
    (this->Slots).ArrayNum = iVar5 + 1;
    pFVar6 = pFVar6 + (longlong)iVar7 * 8;
    memmove(pFVar6 + 8,pFVar6,(longlong)(iVar5 - iVar7) << 3);
    pUVar2 = (pTVar8->field0_0x0).DebugPtr;
    *(UPanelSlot **)((this_00->AllocatorInstance).Data + (longlong)iVar7 * 8) = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    UWidget::InvalidateLayoutAndVolatility((UWidget *)this);
  }
  return;
}

// StaticRegisterNativesUPanelWidget @ 146a1ec60

void __cdecl UPanelWidget::StaticRegisterNativesUPanelWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UPanelWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddChild @ 146a30cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPanelWidget::execAddChild(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  EObjectFlags EVar2;
  FProperty *pFVar3;
  code *pcVar4;
  TObjectPtr<UWidget>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UPanelSlot *pUVar9;
  TObjectPtr<UWidget>_u_0 local_res10;
  undefined8 local_res18;
  UPanelSlot *local_28 [2];
  
  local_res10.DebugPtr = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  TVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10.DebugPtr == (UWidget *)0x0) ||
     ((param_1[0xb].field_0x8 == '\0' && (0 < *(int *)(param_1 + 0xb))))) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    (**(code **)((local_res10.DebugPtr)->_padding_ + 0x2d0))(local_res10.DebugPtr);
    EVar2 = *(EObjectFlags *)&param_1->field_0x8;
    local_res18 = 0;
    pUVar8 = (UClass *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
    pUVar9 = NewObject<UPanelSlot>
                       (param_1,pUVar8,(FName)0x0,EVar2 & RF_Transient | RF_Transactional,
                        (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    (pUVar9->Content).field0_0x0.DebugPtr = (UWidget *)TVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    (pUVar9->Parent).field0_0x0.DebugPtr = (UPanelWidget *)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (((TObjectPtr<UPanelSlot> *)((longlong)TVar5 + 0x30))->field0_0x0).DebugPtr = pUVar9;
    puVar1 = &param_1[10].field_0x20;
    local_28[0] = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if ((*(UPanelSlot ***)puVar1 <= local_28) &&
       (local_28 < *(UPanelSlot ***)puVar1 + *(int *)&param_1[0xb].field_0x4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)(param_1 + 0xb);
    if (iVar7 == *(int *)&param_1[0xb].field_0x4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar1,(int *)&param_1[0xb].field_0x4);
    }
    *(int *)(param_1 + 0xb) = iVar7 + 1;
    *(UPanelSlot **)(*(longlong *)puVar1 + (longlong)iVar7 * 8) = local_28[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UPanelSlot *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_28[0]);
    }
    (**(code **)(*(longlong *)param_1 + 800))(param_1,pUVar9);
    UWidget::InvalidateLayoutAndVolatility((UWidget *)param_1);
    *(UPanelSlot **)param_3 = pUVar9;
  }
  return;
}

// execClearChildren @ 146a32dd0

void __cdecl UPanelWidget::execClearChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146a32de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x310))();
  return;
}

// execGetAllChildren @ 146a342f0

void __cdecl UPanelWidget::execGetAllChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined8 local_48;
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  aiStack_34[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(uint *)(param_1 + 0xb);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&local_40,0,aiStack_34);
  }
  plVar7 = *(longlong **)&param_1[10].field_0x20;
  iVar3 = *(int *)(param_1 + 0xb);
  plVar1 = plVar7 + iVar3;
  while( true ) {
    if (*(int *)(param_1 + 0xb) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar7 == plVar1) break;
    local_48 = *(undefined8 *)(*plVar7 + 0x30);
    if ((local_40.Data <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)aiStack_34[0] * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_38 == aiStack_34[0]) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_40,aiStack_34);
    }
    lVar6 = (longlong)local_38;
    plVar7 = plVar7 + 1;
    local_38 = local_38 + 1;
    *(undefined8 *)(local_40.Data + lVar6 * 8) = local_48;
  }
  if (param_3 != &local_40) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_40.Data;
    *(int *)((longlong)param_3 + 8) = local_38;
    *(int *)((longlong)param_3 + 0xc) = aiStack_34[0];
    local_38 = 0;
    aiStack_34[0] = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// execGetChildAt @ 146a346b0

void __cdecl UPanelWidget::execGetChildAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_res8[0];
  if ((-1 < (int)local_res8[0]) && ((int)local_res8[0] < *(int *)(param_1 + 0xb))) {
    uVar4 = 0;
    if ((int)local_res8[0] < *(int *)(param_1 + 0xb)) {
      uVar4 = ~local_res8[0] >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar5 = *(longlong *)(*(longlong *)&param_1[10].field_0x20 + lVar5 * 8);
    if (lVar5 != 0) {
      *(undefined8 *)param_3 = *(undefined8 *)(lVar5 + 0x30);
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetChildIndex @ 146a347c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPanelWidget::execGetChildIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UWidget *pUVar3;
  UWidget *pUVar4;
  int iVar5;
  UWidget *local_res10;
  
  iVar5 = 0;
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != (UWidget *)0x0) && (iVar1 = *(int *)(param_1 + 0xb), 0 < iVar1)) {
    do {
      pUVar4 = GetChildAt((UPanelWidget *)param_1,iVar5);
      if (pUVar4 == pUVar3) {
        *(int *)param_3 = iVar5;
        return;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetChildrenCount @ 146a34880

void __cdecl UPanelWidget::execGetChildrenCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0xb);
  return;
}

// execHasAnyChildren @ 146a36b20

void __cdecl UPanelWidget::execHasAnyChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)(param_1 + 0xb);
  return;
}

// execHasChild @ 146a36c10

void __cdecl UPanelWidget::execHasChild(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong local_res10;
  
  pUVar2 = (UObject *)0x0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (*(longlong *)(local_res10 + 0x30) != 0) {
      pUVar2 = *(UObject **)(*(longlong *)(local_res10 + 0x30) + 0x28);
    }
    *(bool *)param_3 = pUVar2 == param_1;
  }
  return;
}

// execRemoveChild @ 146a38310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPanelWidget::execRemoveChild(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UWidget *pUVar3;
  bool bVar4;
  UWidget *pUVar5;
  int iVar6;
  UWidget *local_res10;
  
  iVar6 = 0;
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != (UWidget *)0x0) && (iVar1 = *(int *)(param_1 + 0xb), 0 < iVar1)) {
    do {
      pUVar5 = GetChildAt((UPanelWidget *)param_1,iVar6);
      if (pUVar5 == pUVar3) {
        bVar4 = RemoveChildAt((UPanelWidget *)param_1,iVar6);
        *(bool *)param_3 = bVar4;
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveChildAt @ 146a383e0

void __cdecl UPanelWidget::execRemoveChildAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveChildAt((UPanelWidget *)param_1,local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

