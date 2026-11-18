// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 11

// StaticClass @ 142c2e180

UClass * __cdecl UToolMenuWidgetCollectionContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuWidgetCollectionContext",
               &Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton,
               StaticRegisterNativesUToolMenuWidgetCollectionContext,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuWidgetCollectionContext>,
               InternalVTableHelperCtorCaller<UToolMenuWidgetCollectionContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton;
}

// UToolMenuWidgetCollectionContext @ 142c3b150

UToolMenuWidgetCollectionContext * __thiscall
UToolMenuWidgetCollectionContext::UToolMenuWidgetCollectionContext
          (UToolMenuWidgetCollectionContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolMenuWidgetCollectionContext__6B_;
  (this->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Widgets).ArrayNum = 0;
  (this->Widgets).ArrayMax = 0;
  return this;
}

// UToolMenuWidgetCollectionContext @ 142c3b190

UToolMenuWidgetCollectionContext * __thiscall
UToolMenuWidgetCollectionContext::UToolMenuWidgetCollectionContext
          (UToolMenuWidgetCollectionContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolMenuWidgetCollectionContext__6B_;
  (this->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Widgets).ArrayNum = 0;
  (this->Widgets).ArrayMax = 0;
  return this;
}

// ~UToolMenuWidgetCollectionContext @ 142c3ca60

void __thiscall
UToolMenuWidgetCollectionContext::~UToolMenuWidgetCollectionContext
          (UToolMenuWidgetCollectionContext *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UToolMenuWidgetCollectionContext__6B_;
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->Widgets).AllocatorInstance.Data,(this->Widgets).ArrayNum)
  ;
  pFVar1 = (this->Widgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UToolMenuContextBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 142c3fa00

bool __thiscall
`UToolMenuWidgetCollectionContext::FindWidgetByClassType'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<SWidget,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  SWidget *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong lVar9;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  if (param_1->Object == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  lVar9 = (**(code **)(param_1->Object->_padding_ + 8))();
  if (*(longlong *)(lVar9 + 0x30) == *plVar1) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    puVar3 = *(undefined8 **)this;
    pSVar4 = param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TReferenceControllerBase<1> *)puVar3[1];
    *puVar3 = pSVar4;
    puVar3[1] = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    return false;
  }
  return true;
}

// AddWidget @ 142c49a60

void __thiscall
UToolMenuWidgetCollectionContext::AddWidget
          (UToolMenuWidgetCollectionContext *this,TSharedRef<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TWeakPtr<SWidget,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TArray<TWeakPtr<SWidget,1>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TWeakPtr<SWidget,1>_>
            (&this->Widgets,&local_18);
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// EnumerateWidgets @ 142c572b0

void __thiscall
UToolMenuWidgetCollectionContext::EnumerateWidgets
          (UToolMenuWidgetCollectionContext *this,
          TFunctionRef<bool___cdecl(TSharedPtr<SWidget,1>_const_&)> *param_1)

{
  int iVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  
  iVar1 = (this->Widgets).ArrayNum;
  pFVar5 = (this->Widgets).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  do {
    if ((this->Widgets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TWeakPtr<SWidget,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return;
    }
    local_20 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    local_28 = 0;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = local_20->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_20 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142c5733c;
        }
        LOCK();
        aVar4 = local_20->SharedReferenceCount;
        bVar7 = aVar2 == aVar4;
        if (bVar7) {
          local_20->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar7);
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        local_28 = *(longlong *)pFVar5;
      }
    }
LAB_142c5733c:
    if ((local_28 != 0) &&
       (cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28), cVar3 == '\0'))
    {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// FindWidgetByClassType @ 142c5b120

TSharedPtr<SWidget,1> * __thiscall
UToolMenuWidgetCollectionContext::FindWidgetByClassType
          (UToolMenuWidgetCollectionContext *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FName *param_1)

{
  int iVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  TSharedPtr<SWidget,1> local_38;
  TSharedPtr<SWidget,1> *local_28;
  FName *local_20;
  
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  iVar1 = (this->Widgets).ArrayNum;
  pFVar4 = (this->Widgets).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  local_28 = __return_storage_ptr__;
  local_20 = param_1;
  do {
    if ((this->Widgets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TWeakPtr<SWidget,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      return __return_storage_ptr__;
    }
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    local_38.Object = (SWidget *)0x0;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142c5b1bc;
        }
        LOCK();
        aVar3 = (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar2 == aVar3;
        if (bVar6) {
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar6);
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_38.Object = *(SWidget **)pFVar4;
      }
    }
LAB_142c5b1bc:
    if ((local_38.Object != (SWidget *)0x0) &&
       (bVar6 = `UToolMenuWidgetCollectionContext::FindWidgetByClassType'::__l2::<lambda_1>::
                operator()(&local_28,&local_38), !bVar6)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar4 = pFVar4 + 0x10;
  } while( true );
}

// Get @ 142c5d400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UToolMenuWidgetCollectionContext * __cdecl
UToolMenuWidgetCollectionContext::Get(FToolMenuContext *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UToolMenuWidgetCollectionContext *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  TObjectPtr<UObject>_u_0 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar9 = (param_1->ContextObjects).AllocatorInstance.Data;
  iVar2 = (param_1->ContextObjects).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->ContextObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (pFVar9 == pFVar1) break;
    pUVar4 = *(UToolMenuWidgetCollectionContext **)pFVar9;
    if (pUVar4 != (UToolMenuWidgetCollectionContext *)0x0) {
      pUVar5 = StaticClass();
      iVar3 = (int)pUVar5->_padding_;
      if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  if (param_2) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = pUVar6;
    TVar7.DebugPtr = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    local_b0.DebugPtr = TVar7.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UToolMenuWidgetCollectionContext *)TVar7.DebugPtr !=
        (UToolMenuWidgetCollectionContext *)0x0)) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
              (&param_1->ContextObjects,(TObjectPtr<UObject> *)&local_b0.ObjectPtr);
  }
  else {
    TVar7.DebugPtr = (UObject *)0x0;
  }
  return (UToolMenuWidgetCollectionContext *)TVar7.DebugPtr;
}

// GetPrivateStaticClass @ 142c5f8c0

UClass * __cdecl UToolMenuWidgetCollectionContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuWidgetCollectionContext",
               &Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton,
               StaticRegisterNativesUToolMenuWidgetCollectionContext,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuWidgetCollectionContext>,
               InternalVTableHelperCtorCaller<UToolMenuWidgetCollectionContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuWidgetCollectionContext.InnerSingleton;
}

// StaticRegisterNativesUToolMenuWidgetCollectionContext @ 142c70fe0

void __cdecl
UToolMenuWidgetCollectionContext::StaticRegisterNativesUToolMenuWidgetCollectionContext(void)

{
  return;
}

