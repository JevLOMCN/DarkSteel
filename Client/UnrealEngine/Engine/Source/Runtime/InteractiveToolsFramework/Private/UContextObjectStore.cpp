// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// FindContext<UGizmoViewContext> @ 14962fd10

UGizmoViewContext * __thiscall
UContextObjectStore::FindContext<UGizmoViewContext>(UContextObjectStore *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UGizmoViewContext *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  while( true ) {
    pFVar6 = (this->ContextObjects).AllocatorInstance.Data;
    iVar2 = (this->ContextObjects).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ContextObjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      pUVar4 = *(UGizmoViewContext **)pFVar6;
      if (pUVar4 != (UGizmoViewContext *)0x0) {
        pUVar5 = Z_Construct_UClass_UGizmoViewContext_NoRegister();
        iVar3 = (int)pUVar5->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar4;
        }
      }
      pFVar6 = pFVar6 + 8;
    }
    this = (UContextObjectStore *)this->_padding_;
    if (this == (UContextObjectStore *)0x0) {
      return (UGizmoViewContext *)0x0;
    }
    pUVar5 = Z_Construct_UClass_UContextObjectStore_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_) {
      return (UGizmoViewContext *)0x0;
    }
  }
  return (UGizmoViewContext *)0x0;
}

// StaticClass @ 14966d180

UClass * __cdecl UContextObjectStore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ContextObjectStore",
               &Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton,
               StaticRegisterNativesUContextObjectStore,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UContextObjectStore>,
               InternalVTableHelperCtorCaller<UContextObjectStore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton;
}

// FindContext<UCombinedTransformGizmoContextObject> @ 149674c60

UCombinedTransformGizmoContextObject * __thiscall
UContextObjectStore::FindContext<UCombinedTransformGizmoContextObject>(UContextObjectStore *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UCombinedTransformGizmoContextObject *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  while( true ) {
    pFVar6 = (this->ContextObjects).AllocatorInstance.Data;
    iVar2 = (this->ContextObjects).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ContextObjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      pUVar4 = *(UCombinedTransformGizmoContextObject **)pFVar6;
      if (pUVar4 != (UCombinedTransformGizmoContextObject *)0x0) {
        pUVar5 = UCombinedTransformGizmoContextObject::StaticClass();
        iVar3 = (int)pUVar5->_padding_;
        if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar4;
        }
      }
      pFVar6 = pFVar6 + 8;
    }
    this = (UContextObjectStore *)this->_padding_;
    if (this == (UContextObjectStore *)0x0) {
      return (UCombinedTransformGizmoContextObject *)0x0;
    }
    pUVar5 = StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_) {
      return (UCombinedTransformGizmoContextObject *)0x0;
    }
  }
  return (UCombinedTransformGizmoContextObject *)0x0;
}

// UContextObjectStore @ 149683730

UContextObjectStore * __thiscall
UContextObjectStore::UContextObjectStore(UContextObjectStore *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UContextObjectStore__6B_;
  (this->ContextObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjects).ArrayNum = 0;
  (this->ContextObjects).ArrayMax = 0;
  return this;
}

// UContextObjectStore @ 149683770

UContextObjectStore * __thiscall
UContextObjectStore::UContextObjectStore(UContextObjectStore *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UContextObjectStore__6B_;
  (this->ContextObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjects).ArrayNum = 0;
  (this->ContextObjects).ArrayMax = 0;
  return this;
}

// ~UContextObjectStore @ 149689600

void __thiscall UContextObjectStore::~UContextObjectStore(UContextObjectStore *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UContextObjectStore__6B_;
  pFVar1 = (this->ContextObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddContextObject @ 1496915d0

bool __thiscall UContextObjectStore::AddContextObject(UContextObjectStore *this,UObject *param_1)

{
  int iVar1;
  TObjectPtr<UObject>_u_0 local_res10 [3];
  
  if (param_1 != (UObject *)0x0) {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    iVar1 = TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TObjectPtr<UObject>_>
                      (&this->ContextObjects,(TObjectPtr<UObject> *)&local_res10[0].ObjectPtr);
    return iVar1 != -1;
  }
  return false;
}

// FindContextByClass @ 14969eb70

UObject * __thiscall
UContextObjectStore::FindContextByClass(UContextObjectStore *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  while( true ) {
    pFVar7 = (this->ContextObjects).AllocatorInstance.Data;
    if ((param_1->ClassFlags >> 0xe & 1) == 0) {
      iVar2 = (this->ContextObjects).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ContextObjects).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        pUVar4 = *(UObject **)pFVar7;
        if (pUVar4 != (UObject *)0x0) {
          iVar3 = (int)param_1->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
              &param_1->_padding_)) {
            return pUVar4;
          }
        }
        pFVar7 = pFVar7 + 8;
      }
    }
    else {
      iVar2 = (this->ContextObjects).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ContextObjects).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        pUVar4 = *(UObject **)pFVar7;
        if ((pUVar4 != (UObject *)0x0) &&
           (bVar5 = UClass::ImplementsInterface(*(UClass **)&pUVar4->field_0x10,param_1), bVar5)) {
          return pUVar4;
        }
        pFVar7 = pFVar7 + 8;
      }
    }
    this = (UContextObjectStore *)this->_padding_;
    if (this == (UContextObjectStore *)0x0) {
      return (UObject *)0x0;
    }
    pUVar6 = StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_) {
      return (UObject *)0x0;
    }
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 1496a44c0

UClass * __cdecl UContextObjectStore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ContextObjectStore",
               &Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton,
               StaticRegisterNativesUContextObjectStore,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UContextObjectStore>,
               InternalVTableHelperCtorCaller<UContextObjectStore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContextObjectStore.InnerSingleton;
}

// RemoveContextObject @ 1496b8510

bool __thiscall UContextObjectStore::RemoveContextObject(UContextObjectStore *this,UObject *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar3 = (this->ContextObjects).AllocatorInstance.Data;
  iVar2 = (this->ContextObjects).ArrayNum;
  pFVar5 = pFVar3;
  while( true ) {
    if (pFVar5 == pFVar3 + (longlong)iVar2 * 8) {
      return false;
    }
    if (*(UObject **)pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 8;
  }
  iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar3 >> 3);
  if (iVar4 == -1) {
    return false;
  }
  memmove(pFVar3 + (longlong)iVar4 * 8,pFVar3 + (longlong)iVar4 * 8 + 8,
          (longlong)((iVar2 - iVar4) + -1) << 3);
  piVar1 = &(this->ContextObjects).ArrayNum;
  *piVar1 = *piVar1 + -1;
  return true;
}

// RemoveContextObjectsOfType @ 1496b85b0

bool __thiscall
UContextObjectStore::RemoveContextObjectsOfType(UContextObjectStore *this,UClass *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar1 = (this->ContextObjects).ArrayNum;
  lVar9 = (longlong)iVar1;
  uVar5 = 0;
  iVar4 = 0;
  if (iVar1 != 0) {
    pFVar2 = (this->ContextObjects).AllocatorInstance.Data;
    iVar4 = (int)param_1->_padding_;
    uVar11 = uVar5;
    if ((*(int *)(*(longlong *)(*(longlong *)pFVar2 + 0x10) + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)(*(longlong *)pFVar2 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        &param_1->_padding_)) {
      bVar6 = 1;
      uVar8 = uVar5;
    }
    else {
      bVar6 = 0;
      uVar8 = uVar5;
    }
    do {
      iVar4 = (int)uVar8;
      uVar5 = uVar5 + 1;
      uVar8 = (ulonglong)(iVar4 + 1);
      if ((longlong)uVar5 < lVar9) {
        iVar7 = (int)param_1->_padding_;
        do {
          if ((*(int *)(*(longlong *)(*(longlong *)(pFVar2 + uVar5 * 8) + 0x10) + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(*(longlong *)(pFVar2 + uVar5 * 8) + 0x10) + 0x30) +
               (longlong)iVar7 * 8) != &param_1->_padding_)) {
            bVar3 = 1;
          }
          else {
            bVar3 = 0;
          }
          if (bVar6 != bVar3) break;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 < lVar9);
      }
      iVar7 = (int)uVar8 - iVar4;
      if (bVar6 != 0) {
        iVar10 = (int)uVar11;
        if (iVar10 != iVar4) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar4 * 8,(longlong)iVar7 << 3);
        }
        uVar11 = (ulonglong)(uint)(iVar10 + iVar7);
      }
      bVar6 = bVar6 ^ 1;
    } while ((longlong)uVar5 < lVar9);
    (this->ContextObjects).ArrayNum = (int)uVar11;
    iVar4 = iVar1 - (int)uVar11;
  }
  return 0 < iVar4;
}

// Shutdown @ 1496c2590

void __thiscall UContextObjectStore::Shutdown(UContextObjectStore *this)

{
  int *piVar1;
  
  piVar1 = &(this->ContextObjects).ArrayMax;
  (this->ContextObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ContextObjects).AllocatorInstance,0,piVar1);
  }
  return;
}

// StaticRegisterNativesUContextObjectStore @ 1496c27b0

void __cdecl UContextObjectStore::StaticRegisterNativesUContextObjectStore(void)

{
  return;
}

// FindContext<USceneSnappingManager> @ 1496cef80

USceneSnappingManager * __thiscall
UContextObjectStore::FindContext<USceneSnappingManager>(UContextObjectStore *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  USceneSnappingManager *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  while( true ) {
    pFVar6 = (this->ContextObjects).AllocatorInstance.Data;
    iVar2 = (this->ContextObjects).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ContextObjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      pUVar4 = *(USceneSnappingManager **)pFVar6;
      if (pUVar4 != (USceneSnappingManager *)0x0) {
        pUVar5 = USceneSnappingManager::StaticClass();
        iVar3 = (int)pUVar5->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar4;
        }
      }
      pFVar6 = pFVar6 + 8;
    }
    this = (UContextObjectStore *)this->_padding_;
    if (this == (UContextObjectStore *)0x0) {
      return (USceneSnappingManager *)0x0;
    }
    pUVar5 = Z_Construct_UClass_UContextObjectStore_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_) {
      return (USceneSnappingManager *)0x0;
    }
  }
  return (USceneSnappingManager *)0x0;
}

