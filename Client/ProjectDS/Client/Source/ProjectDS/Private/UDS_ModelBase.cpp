// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 48

// StaticClass @ 14b4efed0

UClass * __cdecl UDS_ModelBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelBase",
               &Z_Registration_Info_UClass_UDS_ModelBase.InnerSingleton,
               StaticRegisterNativesUDS_ModelBase,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ModelBase>,InternalVTableHelperCtorCaller<UDS_ModelBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelBase.InnerSingleton;
}

// UDS_ModelBase @ 14b4f12f0

UDS_ModelBase * __thiscall UDS_ModelBase::UDS_ModelBase(UDS_ModelBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelBase__6B_;
  (this->ParentModel).field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
  (this->ChildModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildModelList).ArrayNum = 0;
  (this->ChildModelList).ArrayMax = 0;
  *(undefined8 *)&(this->DataContainer).DataMap = 0;
  *(undefined8 *)&(this->DataContainer).DataMap.field_0x8 = 0;
  *(undefined8 *)&(this->DataContainer).DataMap.field_0x20 = 0;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x28 = 0;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x34 = 0;
  *(undefined8 *)&(this->DataContainer).DataMap.field_0x40 = 0;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x48 = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x48 = 0;
  this->IsDirty = false;
  *(undefined8 *)&this->ObjectData = 0;
  *(undefined8 *)&(this->ObjectData).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectData).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectData).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectData).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectData).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectData).field_0x48 = 0;
  *(undefined8 *)&this->UpdateViewDelegate = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x18 = 2;
  *(undefined8 *)&this->UpdateModelDelegate = 0;
  *(undefined8 *)&(this->UpdateModelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateModelDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->UpdateModelDelegate).field_0x18 = 2;
  ::FName::FName(&this->ViewModelName,L"");
  ::FName::FName(&this->WidgetName,L"");
  this->ViewModelTemplateKey = None;
  (this->ViewModelContext).Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (this->ViewModelContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bPropagationEnabled = true;
  return this;
}

// UDS_ModelBase @ 14b4f1470

UDS_ModelBase * __thiscall
UDS_ModelBase::UDS_ModelBase(UDS_ModelBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelBase__6B_;
  (this->ParentModel).field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
  (this->ChildModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildModelList).ArrayNum = 0;
  (this->ChildModelList).ArrayMax = 0;
  *(undefined8 *)&(this->DataContainer).DataMap = 0;
  *(undefined8 *)&(this->DataContainer).DataMap.field_0x8 = 0;
  *(undefined8 *)&(this->DataContainer).DataMap.field_0x20 = 0;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x28 = 0;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x34 = 0;
  *(undefined8 *)&(this->DataContainer).DataMap.field_0x40 = 0;
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x48 = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->DataContainer).ListDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x48 = 0;
  this->IsDirty = false;
  *(undefined8 *)&this->ObjectData = 0;
  *(undefined8 *)&(this->ObjectData).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectData).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectData).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectData).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectData).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectData).field_0x48 = 0;
  *(undefined8 *)&this->UpdateViewDelegate = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->UpdateViewDelegate).field_0x18 = 2;
  *(undefined8 *)&this->UpdateModelDelegate = 0;
  *(undefined8 *)&(this->UpdateModelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UpdateModelDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->UpdateModelDelegate).field_0x18 = 2;
  ::FName::FName(&this->ViewModelName,L"");
  ::FName::FName(&this->WidgetName,L"");
  this->ViewModelTemplateKey = None;
  (this->ViewModelContext).Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (this->ViewModelContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bPropagationEnabled = true;
  return this;
}

// ~UDS_ModelBase @ 14b4f18e0

void __thiscall UDS_ModelBase::~UDS_ModelBase(UDS_ModelBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_ModelBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewModelContext).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->UpdateModelDelegate).field_0x8,*(int *)&(this->UpdateModelDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->UpdateModelDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateModelDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->UpdateViewDelegate).field_0x8,*(int *)&(this->UpdateViewDelegate).field_0x10);
  pvVar1 = *(void **)&(this->UpdateViewDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateViewDelegate);
  *(undefined4 *)&(this->ObjectData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectData);
  *(undefined4 *)&(this->DataContainer).ListDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataContainer).ListDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DataContainer).ListDataMap);
  *(undefined4 *)&(this->DataContainer).DataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataContainer).DataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataContainer);
  pFVar2 = (this->ChildModelList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BindModel @ 14b4f1fa0

void __thiscall UDS_ModelBase::BindModel(UDS_ModelBase *this)

{
  return;
}

// GetPrivateStaticClass @ 14b4f23d0

UClass * __cdecl UDS_ModelBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelBase",
               &Z_Registration_Info_UClass_UDS_ModelBase.InnerSingleton,
               StaticRegisterNativesUDS_ModelBase,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ModelBase>,InternalVTableHelperCtorCaller<UDS_ModelBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelBase.InnerSingleton;
}

// OnDeInit @ 14b4f26b0

void __thiscall UDS_ModelBase::OnDeInit(UDS_ModelBase *this)

{
  return;
}

// OnInit @ 14b4f26c0

void __thiscall UDS_ModelBase::OnInit(UDS_ModelBase *this)

{
  return;
}

// OnReset @ 14b4f26d0

void __thiscall UDS_ModelBase::OnReset(UDS_ModelBase *this)

{
  return;
}

// StaticRegisterNativesUDS_ModelBase @ 14b4f2740

void __cdecl UDS_ModelBase::StaticRegisterNativesUDS_ModelBase(void)

{
  return;
}

// UnBindModel @ 14b4f2780

void __thiscall UDS_ModelBase::UnBindModel(UDS_ModelBase *this)

{
  return;
}

// AddChildModel1<UDS_M_InventoryBag> @ 14bcd08e0

UDS_M_InventoryBag * __thiscall
UDS_ModelBase::AddChildModel1<UDS_M_InventoryBag>(UDS_ModelBase *this)

{
  UDS_M_InventoryBag *pUVar1;
  
  pUVar1 = NewObject<UDS_M_InventoryBag>((UObject *)this);
  AddChildModelInternal(this,(UDS_ModelBase *)pUVar1);
  return pUVar1;
}

// AddChildModel1<UDS_M_ItemList> @ 14bcd0920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_M_ItemList * __thiscall UDS_ModelBase::AddChildModel1<UDS_M_ItemList>(UDS_ModelBase *this)

{
  UClass *pUVar1;
  UDS_M_ItemList *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_M_ItemList_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UDS_M_ItemList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  AddChildModelInternal(this,(UDS_ModelBase *)pUVar2);
  return pUVar2;
}

// AddChildModel1<UDS_M_Weight> @ 14bcd09d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_M_Weight * __thiscall UDS_ModelBase::AddChildModel1<UDS_M_Weight>(UDS_ModelBase *this)

{
  UClass *pUVar1;
  UDS_ModelBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_M_Weight_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  AddChildModelInternal(this,pUVar2);
  return (UDS_M_Weight *)pUVar2;
}

// FindParentModel<UDS_M_ItemGem_GemSocket> @ 14bcd9400

TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr> __thiscall
UDS_ModelBase::FindParentModel<UDS_M_ItemGem_GemSocket>(UDS_ModelBase *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_ModelBase *pUVar5;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  UDS_ModelBase *local_res20;
  
  pUVar5 = (this->ParentModel).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar5 != (UDS_ModelBase *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_ModelBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar2) {
    *(undefined8 *)in_RDX = 0;
    local_res20 = (UDS_ModelBase *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr>)in_RDX;
  }
  pUVar3 = FWeakObjectPtr::Get(local_res8);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bcd94d8;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bcd94d8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = (UDS_ModelBase *)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    *(FWeakObjectPtr *)in_RDX = local_res18;
    return (TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr>)in_RDX;
  }
  pUVar5 = (UDS_ModelBase *)FWeakObjectPtr::Get(local_res8);
  FindParentModel<UDS_M_ItemGem_GemSocket>(pUVar5);
  return (TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr>)in_RDX;
}

// AddChildModelInternal @ 14bce7e00

void __thiscall UDS_ModelBase::AddChildModelInternal(UDS_ModelBase *this,UDS_ModelBase *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_ModelBase *local_res8;
  UDS_ModelBase *local_18 [2];
  
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ChildModelList).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8))
  {
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
  iVar5 = (this->ChildModelList).ArrayNum;
  piVar1 = &(this->ChildModelList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ChildModelList).AllocatorInstance,piVar1);
  }
  (this->ChildModelList).ArrayNum = iVar5 + 1;
  *(UDS_ModelBase **)((this->ChildModelList).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UDS_ModelBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  SetParentModel(param_1,(TObjectPtr<UDS_ModelBase>)&local_res8);
  return;
}

// AddUpdateModelDelegate @ 14bce8680

void __thiscall
UDS_ModelBase::AddUpdateModelDelegate
          (UDS_ModelBase *this,
          TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  ulong64 *puVar2;
  FDelegateHandle FVar3;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((*(int *)&param_1->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 == (longlong *)0x0)) {
    FVar3.ID = 0;
  }
  else {
    puVar2 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    FVar3.ID = *puVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            *)&this->UpdateModelDelegate,FVar3);
  TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
         *)&this->UpdateModelDelegate,
        (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
         *)local_res8);
  return;
}

// AddUpdateViewDelegate @ 14bce8710

void __thiscall
UDS_ModelBase::AddUpdateViewDelegate
          (UDS_ModelBase *this,
          TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  ulong64 *puVar2;
  FDelegateHandle FVar3;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((*(int *)&param_1->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 == (longlong *)0x0)) {
    FVar3.ID = 0;
  }
  else {
    puVar2 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    FVar3.ID = *puVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            *)&this->UpdateViewDelegate,FVar3);
  TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
         *)&this->UpdateViewDelegate,
        (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
         *)local_res8);
  return;
}

// BeginDestroy @ 14bce8ca0

void __thiscall UDS_ModelBase::BeginDestroy(UDS_ModelBase *this)

{
  if ((this->_padding_ & 0x10) == 0) {
    (**(code **)(this->_padding_ + 0x2c0))();
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BindViewModel @ 14bce9890

void __thiscall
UDS_ModelBase::BindViewModel
          (UDS_ModelBase *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_UserWidget *this_00;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  uint local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FName local_res20;
  UDS_UserWidget *local_a8;
  UObject *local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  bVar5 = false;
  local_res8[0] = 0;
  local_res10 = param_1.WeakPtr;
  if (this->WidgetName == (FName)0x0) {
LAB_14bce9983:
    bVar4 = false;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
    local_res20.Number = *(uint *)&pUVar6->field_0x1c;
    ::FName::ToString(&local_res20,&local_88);
    _Src.Data = local_88.Data.AllocatorInstance.Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = local_88.Data.ArrayNum;
    if (local_88.Data.ArrayNum == 0) {
      local_8c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,&local_98,local_88.Data.ArrayNum,&local_8c);
      memcpy(local_98.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
    }
    iStack_70 = local_90 + -1;
    if (local_90 == 0) {
      iStack_70 = 0;
    }
    local_58._12_4_ = uStack_6c;
    local_58.Size = iStack_70;
    local_78 = local_98.Data;
    local_58.DataPtr = (wchar_t *)local_98.Data;
    bVar4 = ::FName::Equals(this->WidgetName,&local_58);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    bVar5 = true;
    if (bVar4) goto LAB_14bce9983;
    bVar4 = true;
  }
  if ((bVar5) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    this_00 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_res10);
    local_a8 = UDS_UserWidget::FindChildWidget(this_00,this->WidgetName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_a8);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_a8);
    bVar5 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1502362375976648847>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp"
                         ,0x8f,"false");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014bce9b60;
    }
  }
  if (this->bPropagationEnabled != false) {
    puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x310))(this,local_48);
    local_68.Object = (FDS_ViewModelContext *)*puVar7;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_68,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  pFVar8 = (this->ChildModelList).AllocatorInstance.Data;
  iVar2 = (this->ChildModelList).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildModelList).ArrayNum != iVar2) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<TObjectPtr<UDS_ModelBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pUVar6 = *(UObject **)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_a0 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_a0);
    bVar5 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar5) break;
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)pUVar6 + 0x2e8))(pUVar6,local_res10);
    pFVar8 = pFVar8 + 8;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1502362375976648860>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp"
                     ,0x9c,"false");
  if (!bVar5) {
    return;
  }
code_r0x00014bce9b60:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ClearModelDelegate @ 14bceb270

void __thiscall UDS_ModelBase::ClearModelDelegate(UDS_ModelBase *this)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UpdateModelDelegate,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->UpdateModelDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ClearViewDelegate @ 14bceb720

void __thiscall UDS_ModelBase::ClearViewDelegate(UDS_ModelBase *this)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UpdateViewDelegate,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->UpdateViewDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// GetObjectData @ 14bcf9730

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
UDS_ModelBase::GetObjectData(UDS_ModelBase *this,int param_1)

{
  UObject *pUVar1;
  TObjectPtr<UObject> *pTVar2;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  uint in_R8D;
  UObject *local_res8;
  int local_res18 [4];
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  pTVar2 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->ObjectData,in_R8D,local_res18);
  pUVar1 = (pTVar2->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)this_00;
}

// GetParentModel @ 14bcf9990

TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> __thiscall
UDS_ModelBase::GetParentModel(UDS_ModelBase *this)

{
  UDS_ModelBase *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_ModelBase *local_res8;
  
  pUVar1 = (this->ParentModel).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_ModelBase *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ModelBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>)in_RDX;
}

// GetViewModelContext @ 14bcffc50

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_ModelBase::GetViewModelContext
          (UDS_ModelBase *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__,
          EDS_ViewModelTemplateKey param_1,FName param_2,FName param_3)

{
  this->WidgetName = param_3;
  this->ViewModelTemplateKey = param_1;
  this->ViewModelName = param_2;
  (**(code **)(this->_padding_ + 0x310))();
  return __return_storage_ptr__;
}

// GetViewModelContext @ 14bcffc90

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_ModelBase::GetViewModelContext
          (UDS_ModelBase *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FDS_ViewModelContext_ModelBase *pFVar5;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext_ModelBase *pFVar8;
  FSharedReferencer<1> FVar9;
  FDS_ViewModelContext_ModelBase *local_38;
  FSharedReferencer<1> FStack_30;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pTVar6 = &this->ViewModelContext;
  FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6->Object == (FDS_ViewModelContext_ModelBase *)0x0) {
    pFVar5 = ::operator_new(0x28);
    pFVar8 = (FDS_ViewModelContext_ModelBase *)FVar9.ReferenceController;
    if (pFVar5 != (FDS_ViewModelContext_ModelBase *)0x0) {
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_ModelBase__6B_;
      (pFVar5->Model).field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
      pFVar8 = pFVar5;
    }
    local_38 = pFVar8;
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext_ModelBase *)0x0) {
      *(undefined4 *)&pFVar5->_padding_ = 1;
      pFVar5->_padding_ = (longlong)ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ModelBase__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 1;
      pFVar5->_padding_ = (longlong)pFVar8;
      FVar9.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    }
    FStack_30.ReferenceController = FVar9.ReferenceController;
    if ((pFVar8 == (FDS_ViewModelContext_ModelBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar3)();
      return pTVar6;
    }
    pUVar7 = FDS_ViewModelContext_ModelBase::StaticStruct();
    pFVar8->_padding_ = (longlong)pUVar7;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      local_28.Object = (FDS_ViewModelContext *)local_38;
      local_28.SharedReferenceCount.ReferenceController = FStack_30.ReferenceController;
      if ((FDS_ViewModelContext_ModelBase *)FVar9.ReferenceController !=
          (FDS_ViewModelContext_ModelBase *)0x0) {
        LOCK();
        *(int *)&((FDS_ViewModelContext_ModelBase *)FVar9.ReferenceController)->_padding_ =
             (int)((FDS_ViewModelContext_ModelBase *)FVar9.ReferenceController)->_padding_ + 1;
        UNLOCK();
      }
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    if (pTVar6 != (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)&local_38) {
      pTVar6->Object = pFVar8;
      local_38 = (FDS_ViewModelContext_ModelBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ViewModelContext).SharedReferenceCount,&FStack_30);
      FVar9.ReferenceController = FStack_30.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
  }
  if (pTVar6->Object == (FDS_ViewModelContext_ModelBase *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1502362375976648786>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp"
                       ,0x52,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar3)();
      return pTVar6;
    }
    __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    *(EDS_ViewModelTemplateKey *)&pTVar6->Object->_padding_ = this->ViewModelTemplateKey;
    FVar1 = this->ViewModelName;
    if ((pTVar6->Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar3)();
      return pTVar6;
    }
    pTVar6->Object->_padding_ = (longlong)FVar1;
    if ((pTVar6->Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar3)();
      return pTVar6;
    }
    pFVar8 = pTVar6->Object;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pFVar8->Model).field0_0x0.DebugPtr = this;
    __return_storage_ptr__->Object = pTVar6->Object;
    pTVar2 = (this->ViewModelContext).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// OnUpdateModel @ 14bd14520

void __thiscall
UDS_ModelBase::OnUpdateModel
          (UDS_ModelBase *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->UpdateModelDelegate,param_1);
  return;
}

// OnUpdateView @ 14bd14a90

void __thiscall
UDS_ModelBase::OnUpdateView
          (UDS_ModelBase *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->UpdateViewDelegate,param_1);
  this->IsDirty = false;
  return;
}

// PostInitProperties @ 14bd14f10

void __thiscall UDS_ModelBase::PostInitProperties(UDS_ModelBase *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd14f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2b8))(this);
    return;
  }
  return;
}

// PreInitBindViewModel @ 14bd17450

void __thiscall UDS_ModelBase::PreInitBindViewModel(UDS_ModelBase *this)

{
  return;
}

// RemoveUpdateViewDelegate @ 14bd1ab90

void __thiscall
UDS_ModelBase::RemoveUpdateViewDelegate
          (UDS_ModelBase *this,
          TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  ulong64 *puVar2;
  FDelegateHandle FVar3;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((*(int *)&param_1->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 == (longlong *)0x0)) {
    FVar3.ID = 0;
  }
  else {
    puVar2 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    FVar3.ID = *puVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            *)&this->UpdateViewDelegate,FVar3);
  return;
}

// Reset @ 14bd1c3e0

void __thiscall UDS_ModelBase::Reset(UDS_ModelBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  
  (**(code **)(this->_padding_ + 0x300))();
  pFVar6 = (this->ChildModelList).AllocatorInstance.Data;
  iVar2 = (this->ChildModelList).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildModelList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_ModelBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) {
      return;
    }
    pUVar5 = *(UObject **)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar4) break;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
    pFVar6 = pFVar6 + 8;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1502362375976648937>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp"
                     ,0xe9,"false");
  if (!bVar4) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetContextViewModel @ 14bd1ebc0

void __thiscall
UDS_ModelBase::SetContextViewModel
          (UDS_ModelBase *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *param_1)

{
  FDS_ViewModelContext_ModelBase *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ViewModelContext).SharedReferenceCount.ReferenceController;
  (this->ViewModelContext).Object = pFVar1;
  (this->ViewModelContext).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDirty @ 14bd1f250

void __thiscall UDS_ModelBase::SetDirty(UDS_ModelBase *this,bool param_1)

{
  this->IsDirty = param_1;
  return;
}

// SetObjectData @ 14bd20410

void __thiscall
UDS_ModelBase::SetObjectData(UDS_ModelBase *this,int param_1,TObjectPtr<UObject> param_2)

{
  TObjectPtr<UObject> TVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pTVar2 = &TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                        *)&this->ObjectData,param_1,local_res10)->field0_0x0;
  TVar1.field0_0x0 = *(TObjectPtr<UObject>_u_0 *)param_2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.field0_0x0 != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
                    /* WARNING: Load size is inaccurate */
    *pTVar2 = *param_2.field0_0x0;
    return;
  }
  *pTVar2 = TVar1.field0_0x0;
  return;
}

// SetParentModel @ 14bd20470

void __thiscall UDS_ModelBase::SetParentModel(UDS_ModelBase *this,TObjectPtr<UDS_ModelBase> param_1)

{
  int *piVar1;
  int iVar2;
  UDS_ModelBase *pUVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((*(longlong *)param_1.field0_0x0 == 0) &&
     (pUVar3 = (this->ParentModel).field0_0x0.DebugPtr, pUVar3 != (UDS_ModelBase *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = (FWeakObjectPtr)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_res10 = local_res8;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pFVar4 = (pUVar3->ChildModelList).AllocatorInstance.Data;
    iVar2 = (pUVar3->ChildModelList).ArrayNum;
    for (pFVar7 = pFVar4; pFVar7 != pFVar4 + (longlong)iVar2 * 8; pFVar7 = pFVar7 + 8) {
      if (*(UObject **)pFVar7 == pUVar5) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar4 >> 3);
        if (iVar6 != -1) {
          memmove(pFVar4 + (longlong)iVar6 * 8,pFVar4 + (longlong)iVar6 * 8 + 8,
                  (longlong)((iVar2 - iVar6) + -1) << 3);
          piVar1 = &(pUVar3->ChildModelList).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)param_1.field0_0x0 == (UObject *)0x0) {
      (this->ParentModel).field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
      return;
    }
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  (this->ParentModel).field0_0x0 = *param_1.field0_0x0;
  return;
}

// SetPropagationEnabled @ 14bd20bb0

void __thiscall UDS_ModelBase::SetPropagationEnabled(UDS_ModelBase *this,bool param_1)

{
  this->bPropagationEnabled = param_1;
  return;
}

// SetViewModelName @ 14bd22ee0

void __thiscall UDS_ModelBase::SetViewModelName(UDS_ModelBase *this,FName param_1)

{
  this->ViewModelName = param_1;
  return;
}

// SetViewModelTemplateKey @ 14bd22ef0

void __thiscall
UDS_ModelBase::SetViewModelTemplateKey(UDS_ModelBase *this,EDS_ViewModelTemplateKey param_1)

{
  this->ViewModelTemplateKey = param_1;
  return;
}

// SetWidgetName @ 14bd22f60

void __thiscall UDS_ModelBase::SetWidgetName(UDS_ModelBase *this,FName param_1)

{
  this->WidgetName = param_1;
  return;
}

// UpdateModel @ 14bd28660

void __thiscall
UDS_ModelBase::UpdateModel
          (UDS_ModelBase *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  UDS_ModelBase *this_00;
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_ModelBase_UpdateModel");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId108,"UDS_ModelBase_UpdateModel",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp",
               0x6c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId108);
  }
  (**(code **)(this->_padding_ + 0x2f0))(this,param_1.WeakPtr);
  this_00 = (this->ParentModel).field0_0x0.DebugPtr;
  if (this_00 == (UDS_ModelBase *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (*pcVar1)(this,local_res8,0);
  }
  else {
    UpdateModel(this_00,param_1);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UpdateView @ 14bd2aa80

void __thiscall
UDS_ModelBase::UpdateView
          (UDS_ModelBase *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res20;
  UObject *local_48 [2];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_ModelBase_UpdateView");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId124,"UDS_ModelBase_UpdateView",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp",
               0x7c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId124);
  }
  if ((this->IsDirty != false) || (param_2)) {
    (**(code **)(this->_padding_ + 0x2f8))(this,param_1.WeakPtr);
  }
  pFVar6 = (this->ChildModelList).AllocatorInstance.Data;
  iVar2 = (this->ChildModelList).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildModelList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_ModelBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) goto LAB_14bd2ac3b;
    pUVar5 = *(UObject **)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48[0] = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_48);
    bVar4 = FWeakObjectPtr::IsValid(&local_res20);
    if (!bVar4) break;
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,param_1.WeakPtr,param_2);
    pFVar6 = pFVar6 + 8;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1502362375976648837>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.cpp"
                     ,0x85,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14bd2ac3b:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AddChildModel1<UDS_M_CommonIconTextButton> @ 14bd2b180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_M_CommonIconTextButton * __thiscall
UDS_ModelBase::AddChildModel1<UDS_M_CommonIconTextButton>(UDS_ModelBase *this)

{
  UClass *pUVar1;
  UDS_ModelBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_M_CommonIconTextButton_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  AddChildModelInternal(this,pUVar2);
  return (UDS_M_CommonIconTextButton *)pUVar2;
}

// AddChildModel1<UDS_ModelBase> @ 14bd2b230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_ModelBase * __thiscall UDS_ModelBase::AddChildModel1<UDS_ModelBase>(UDS_ModelBase *this)

{
  UClass *pUVar1;
  UDS_ModelBase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  AddChildModelInternal(this,pUVar2);
  return pUVar2;
}

// CreateEvent<UDS_ModelEventBase> @ 14bd37aa0

TObjectPtr<UDS_ModelEventBase> __thiscall
UDS_ModelBase::CreateEvent<UDS_ModelEventBase>(UDS_ModelBase *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ModelEventBase *pUVar3;
  TObjectPtr<UDS_ModelEventBase> TVar4;
  TObjectPtr<UDS_ModelEventBase>_u_0 in_RDX;
  UDS_ModelBase *local_res18;
  
  pUVar3 = NewObject<UDS_ModelEventBase>((UObject *)this);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UDS_ModelEventBase *)0x0) goto LAB_14bd37b3b;
  }
  else {
    if (pUVar3 == (UDS_ModelEventBase *)0x0) {
LAB_14bd37b3b:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_608430135212769108>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.h"
                         ,0xac,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.field0_0x0 = (TObjectPtr<UDS_ModelEventBase>_u_0)(*pcVar1)();
        return (TObjectPtr<UDS_ModelEventBase>)TVar4.field0_0x0;
      }
      (in_RDX.DebugPtr)->_padding_ = 0;
      return (TObjectPtr<UDS_ModelEventBase>)in_RDX.DebugPtr;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_res18 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar3->Model).WeakPtr,(FObjectPtr)&local_res18);
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_ModelEventBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return (TObjectPtr<UDS_ModelEventBase>)in_RDX;
}

// CreateEvent<UDS_ModelEventItemBase> @ 14bd37b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_ModelEventItemBase> __thiscall
UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>(UDS_ModelBase *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TObjectPtr<UDS_ModelEventItemBase> TVar5;
  longlong *plVar6;
  TObjectPtr<UDS_ModelEventItemBase>_u_0 in_RDX;
  undefined1 auStackY_e8 [32];
  UDS_ModelBase *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = this;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UObject *)0x0) goto LAB_14bd37c9a;
  }
  else {
    if (pUVar4 == (UObject *)0x0) {
LAB_14bd37c9a:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_608430135212769108>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.h"
                         ,0xac,"false");
      if (!bVar2) {
        (in_RDX.DebugPtr)->_padding_ = 0;
        return (TObjectPtr<UDS_ModelEventItemBase>)in_RDX.DebugPtr;
      }
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TObjectPtr<UDS_ModelEventItemBase>_u_0)(*pcVar1)();
      return (TObjectPtr<UDS_ModelEventItemBase>)TVar5.field0_0x0;
    }
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_b8[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar4 + 1),(FObjectPtr)local_b8);
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return (TObjectPtr<UDS_ModelEventItemBase>)in_RDX;
}

// CreateEvent<UDS_ModelEventWaitCompleteListSlot> @ 14bd37ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_ModelEventWaitCompleteListSlot> __thiscall
UDS_ModelBase::CreateEvent<UDS_ModelEventWaitCompleteListSlot>(UDS_ModelBase *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TObjectPtr<UDS_ModelEventWaitCompleteListSlot> TVar5;
  longlong *plVar6;
  TObjectPtr<UDS_ModelEventWaitCompleteListSlot>_u_0 in_RDX;
  undefined1 auStackY_e8 [32];
  UDS_ModelBase *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_ModelEventWaitCompleteListSlot_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = this;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UObject *)0x0) goto LAB_14bd37dea;
  }
  else {
    if (pUVar4 == (UObject *)0x0) {
LAB_14bd37dea:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_608430135212769108>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_ModelBase.h"
                         ,0xac,"false");
      if (!bVar2) {
        (in_RDX.DebugPtr)->_padding_ = 0;
        return (TObjectPtr<UDS_ModelEventWaitCompleteListSlot>)in_RDX.DebugPtr;
      }
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TObjectPtr<UDS_ModelEventWaitCompleteListSlot>_u_0)(*pcVar1)();
      return (TObjectPtr<UDS_ModelEventWaitCompleteListSlot>)TVar5.field0_0x0;
    }
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_b8[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar4 + 1),(FObjectPtr)local_b8);
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return (TObjectPtr<UDS_ModelEventWaitCompleteListSlot>)in_RDX;
}

// FindParentModel<UDS_M_ItemGemPopup> @ 14bd39cb0

TWeakObjectPtr<UDS_M_ItemGemPopup,FWeakObjectPtr> __thiscall
UDS_ModelBase::FindParentModel<UDS_M_ItemGemPopup>(UDS_ModelBase *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_ModelBase *this_00;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  GetParentModel(this);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    *(undefined8 *)in_RDX = 0;
    local_18[0] = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_18);
    return (TWeakObjectPtr<UDS_M_ItemGemPopup,FWeakObjectPtr>)in_RDX;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemGemPopup_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bd39d39;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bd39d39:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_18[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    *(FWeakObjectPtr *)in_RDX = local_res18;
    return (TWeakObjectPtr<UDS_M_ItemGemPopup,FWeakObjectPtr>)in_RDX;
  }
  this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&local_res20);
  FindParentModel<UDS_M_ItemGemPopup>(this_00);
  return (TWeakObjectPtr<UDS_M_ItemGemPopup,FWeakObjectPtr>)in_RDX;
}

