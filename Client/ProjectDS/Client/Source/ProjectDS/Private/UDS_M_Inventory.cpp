// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 46

// StaticClass @ 14b509e10

UClass * __cdecl UDS_M_Inventory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Inventory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Inventory",
               &Z_Registration_Info_UClass_UDS_M_Inventory.InnerSingleton,
               StaticRegisterNativesUDS_M_Inventory,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_M_Inventory>,InternalVTableHelperCtorCaller<UDS_M_Inventory>
               ,local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Inventory.InnerSingleton;
}

// UDS_M_Inventory @ 14b5112e0

UDS_M_Inventory * __thiscall
UDS_M_Inventory::UDS_M_Inventory(UDS_M_Inventory *this,FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_M_Inventory *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UDS_M_Inventory__6B_;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res18 = 0;
  (this->ItemDetailInfoModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemDetailInfoModel).WeakPtr,(FObjectPtr)&local_res18);
  local_res20 = 0;
  (this->ContextMenuPopupModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ContextMenuPopupModel).WeakPtr,(FObjectPtr)&local_res20);
  (this->TabModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabModelList).ArrayNum = 0;
  (this->TabModelList).ArrayMax = 0;
  (this->WeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&(this->WeightModel).WeakPtr,(FObjectPtr)local_28);
  (this->FuncTypeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FuncTypeList).ArrayNum = 0;
  (this->FuncTypeList).ArrayMax = 0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->InputProcessor).Object = (FTooltipInputProcessor *)0x10;
    (this->InputProcessor).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTooltipInputProcessor___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FTooltipInputProcessor__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UDS_M_Inventory *)(*pcVar1)();
        return pUVar4;
      }
    }
    (this->InputProcessor).Object = (FTooltipInputProcessor *)(pTVar3 + 1);
    (this->InputProcessor).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

// UDS_M_Inventory @ 14b511430

UDS_M_Inventory * __thiscall
UDS_M_Inventory::UDS_M_Inventory(UDS_M_Inventory *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_M_Inventory *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UDS_M_Inventory__6B_;
  (this->ItemListModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res18 = 0;
  (this->ItemDetailInfoModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ItemDetailInfoModel).WeakPtr,(FObjectPtr)&local_res18);
  local_res20 = 0;
  (this->ContextMenuPopupModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ContextMenuPopupModel).WeakPtr,(FObjectPtr)&local_res20);
  (this->TabModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabModelList).ArrayNum = 0;
  (this->TabModelList).ArrayMax = 0;
  (this->WeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&(this->WeightModel).WeakPtr,(FObjectPtr)local_28);
  (this->FuncTypeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FuncTypeList).ArrayNum = 0;
  (this->FuncTypeList).ArrayMax = 0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->InputProcessor).Object = (FTooltipInputProcessor *)0x10;
    (this->InputProcessor).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTooltipInputProcessor___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FTooltipInputProcessor__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UDS_M_Inventory *)(*pcVar1)();
        return pUVar4;
      }
    }
    (this->InputProcessor).Object = (FTooltipInputProcessor *)(pTVar3 + 1);
    (this->InputProcessor).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

// ~UDS_M_Inventory @ 14b512f80

void __thiscall UDS_M_Inventory::~UDS_M_Inventory(UDS_M_Inventory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_Inventory__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputProcessor).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->FuncTypeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TabModelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515fc0

UClass * __cdecl UDS_M_Inventory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Inventory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Inventory",
               &Z_Registration_Info_UClass_UDS_M_Inventory.InnerSingleton,
               StaticRegisterNativesUDS_M_Inventory,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_M_Inventory>,InternalVTableHelperCtorCaller<UDS_M_Inventory>
               ,local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Inventory.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Inventory @ 14b516ce0

void __cdecl UDS_M_Inventory::StaticRegisterNativesUDS_M_Inventory(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_Inventory_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b5189c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_M_Inventory::__VTableCtorCaller(FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_ModelBase *this;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = GetPrivateStaticClass();
  this = (UDS_ModelBase *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this == (UDS_ModelBase *)0x0) {
    return (UObject *)0x0;
  }
  UDS_ModelBase::UDS_ModelBase(this,param_1);
  local_res18 = 0;
  this->_padding_ = (longlong)&___7UDS_M_Inventory__6B_;
  this[1]._padding_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(this + 1),(FObjectPtr)&local_res18);
  local_res20 = 0;
  this[1]._padding_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res20);
  local_28 = 0;
  this[1]._padding_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_28);
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1].ParentModel.field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
  local_20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[1].ParentModel,(FObjectPtr)&local_20);
  this[1].ChildModelList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this[1].ChildModelList.ArrayNum = 0;
  this[1].ChildModelList.ArrayMax = 0;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTooltipInputProcessor___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)&___7FTooltipInputProcessor__6B_;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UObject *)(*pcVar1)();
        return pUVar3;
      }
    }
    *(TReferenceControllerBase<1> **)&this[1].DataContainer.DataMap = pTVar5 + 1;
    *(TReferenceControllerBase<1> **)&this[1].DataContainer.DataMap.field_0x8 = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    return (UObject *)this;
  }
  *(undefined8 *)&this[1].DataContainer.DataMap = 0x10;
  *(undefined8 *)&this[1].DataContainer.DataMap.field_0x8 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (UObject *)this;
}

// execOnUpdateInventory @ 14b518fa0

void __cdecl UDS_M_Inventory::execOnUpdateInventory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_InventoryUpdate local_res10;
  
  local_res10 = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdateInventory((UDS_M_Inventory *)param_1,local_res10);
  return;
}

// execUpdatedItemDataSet @ 14b519030

void __cdecl UDS_M_Inventory::execUpdatedItemDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
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
  UpdatedItemDataSet((UDS_M_Inventory *)param_1,local_res10);
  return;
}

// operator() @ 14bce6990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()
          (void *this,UDS_UserWidget *param_1,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_3)

{
  FScriptContainerElement *pFVar1;
  UDS_ModelBase *this_00;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 this_01;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UDS_ModelBase *pUVar10;
  ulonglong uVar11;
  UObject *pUVar12;
  UEnum *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FName *pFVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [4];
  uint local_204;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  FDS_TextFormatArg *local_1f0;
  longlong *local_1e8;
  FScriptContainerElement local_1e0 [8];
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  FScriptContainerElement local_1b4;
  void *local_1b0;
  undefined8 local_1a8;
  FDS_TextFormatArg *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  FDelegateAllocation local_188;
  UDS_ModelBase *local_178;
  undefined1 local_170 [56];
  TSharedPtr<FDS_ViewModelContext,1> local_138;
  FDestructionSentinel local_128;
  undefined1 *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FName local_e8;
  FName local_e0;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_00 = *(UDS_ModelBase **)this;
  local_1e8 = this;
  local_170._8_8_ = param_2.WeakPtr;
  local_170._16_8_ = param_3.WeakPtr;
  local_170._24_8_ = param_1;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this_00,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UDS_M_ContextMenuPopup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar9);
  local_c8._8_8_ = this_00;
  pUVar10 = (UDS_ModelBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar17 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  UDS_ModelBase::AddChildModelInternal(this_00,pUVar10);
  lVar2 = *(longlong *)this;
  local_178 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar2 + 0x1b8),(FObjectPtr)&local_178);
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)this + 0x1b8));
  if (bVar7) {
    lVar3 = *(longlong *)this;
    local_204 = *(uint *)(lVar3 + 0x1e0);
    uVar11 = (ulonglong)(int)local_204;
    lVar19 = *(longlong *)(lVar3 + 0x1d8);
    lVar2 = uVar11 + lVar19;
    while( true ) {
      if (*(int *)(lVar3 + 0x1e0) != (int)uVar11) {
        local_208[0] = 0;
        `TCheckedPointerIterator<enum_EDS_DropDownPopup,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_208);
      }
      if (lVar19 == lVar2) break;
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x1b8));
      pUVar13 = StaticEnum<enum_EDS_DropDownPopup>();
      DS_Util::GetStringEnumTableKey((UEnum *)local_170,(int)pUVar13);
      puVar20 = &pUVar12[10].field_0x18;
      local_1d0 = local_170._0_8_;
      local_1e0[0] = (FScriptContainerElement)0x0;
      local_1d8 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      local_1b4 = (FScriptContainerElement)0x0;
      local_1b0 = (void *)0x0;
      local_1a8 = 0;
      local_1a0 = (FDS_TextFormatArg *)0x0;
      local_198 = 0;
      if ((*(FScriptContainerElement **)puVar20 <= local_1e0) &&
         (local_1e0 <
          *(FScriptContainerElement **)puVar20 + (longlong)*(int *)&pUVar12[10].field_0x24 * 0x50))
      {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pUVar12[10].field_0x20;
      if (iVar8 == *(int *)&pUVar12[10].field_0x24) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,(ForAnyElementType *)puVar20,(int *)&pUVar12[10].field_0x24);
      }
      *(int *)&pUVar12[10].field_0x20 = iVar8 + 1;
      pFVar21 = (FScriptContainerElement *)(*(longlong *)puVar20 + (longlong)iVar8 * 0x50);
      *pFVar21 = local_1e0[0];
      pFVar1 = pFVar21 + 0x30;
      *(undefined8 *)(pFVar21 + 8) = local_1d8;
      *(longlong *)(pFVar21 + 0x10) = local_1d0;
      *(undefined8 *)(pFVar21 + 0x18) = local_1c8;
      *(undefined8 *)(pFVar21 + 0x20) = uStack_1c0;
      *(undefined4 *)(pFVar21 + 0x28) = local_1b8;
      pFVar21[0x2c] = local_1b4;
      *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
      lVar18 = (longlong)(int)local_1a8;
      local_1f0 = local_1b0;
      *(int *)(pFVar21 + 0x38) = (int)local_1a8;
      if ((int)local_1a8 == 0) {
        *(int *)(pFVar21 + 0x3c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_1a8,0,(ForAnyElementType *)pFVar1,(int)local_1a8,
                   (int *)(pFVar21 + 0x3c));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar1,local_1f0,lVar18 * 2);
      }
      pFVar1 = pFVar21 + 0x40;
      *(FScriptContainerElement **)pFVar1 = (FScriptContainerElement *)0x0;
      iVar8 = (int)local_198;
      local_1f0 = local_1a0;
      *(int *)(pFVar21 + 0x48) = (int)local_198;
      if ((int)local_198 == 0) {
        *(int *)(pFVar21 + 0x4c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(int)local_198,0,(ForAnyElementType *)pFVar1,(int)local_198,
                   (int *)(pFVar21 + 0x4c));
                    /* WARNING: Load size is inaccurate */
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>(*pFVar1,local_1f0,iVar8);
      }
      DestructItems<FDS_TextFormatArg,int>(local_1a0,(int)local_198);
      if (local_1a0 != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1a0);
      }
      if (local_1b0 != (void *)0x0) {
        FMemory::Free(local_1b0);
      }
      uVar11 = (ulonglong)local_204;
      lVar19 = lVar19 + 1;
    }
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x1b8));
    uVar4 = *(undefined8 *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar12 + 0xb),
               (FWriteAccessScope *)&local_128);
    local_110 = &pUVar12[0xb].field_0x8;
    puVar14 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_110);
    this_01 = local_170._24_8_;
    uVar6 = local_170._16_8_;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
      ;
      ((FWeakObjectPtr *)(puVar14 + 1))->ObjectIndex = local_170._8_4_;
      ((FWeakObjectPtr *)(puVar14 + 1))->ObjectSerialNumber = local_170._12_4_;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,``UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
                  ::_vftable_;
      puVar14[3] = uVar4;
    }
    if (local_128.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
    }
    plVar17 = local_1e8;
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_1e8 + 0x1b8));
    pcVar5 = *(code **)(*(longlong *)pUVar12 + 0x308);
    ::FName::FName(&local_e8,L"");
    pFVar16 = ::FName::FName(&local_e0,L"");
    puVar14 = (undefined8 *)(*pcVar5)(pUVar12,local_d8,0x118,*pFVar16);
    local_138.Object = (FDS_ViewModelContext *)*puVar14;
    local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar14[1];
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_UserWidget *)this_01 != (UDS_UserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    local_170._32_8_ = this_01;
    local_200.ObjectIndex = 0;
    local_200.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_UserWidget *)this_01 != (UDS_UserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)((longlong)local_170 + 0x20));
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_200,&local_138,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_UserWidget *)this_01 != (UDS_UserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    local_1f8.ObjectIndex = 0;
    local_1f8.ObjectSerialNumber = 0;
    local_170._40_8_ = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_UserWidget *)this_01 != (UDS_UserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)((longlong)local_170 + 0x28));
    pUVar12 = (UObject *)*plVar17;
    local_190 = (undefined1  [8])0x0;
    local_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_188.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
               (FWriteAccessScope *)&local_108);
    local_f0 = &local_188;
    puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_188);
    uVar4 = local_170._16_8_;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U2___6B_
      ;
      local_170._16_4_ = (undefined4)uVar6;
      local_170._20_4_ = SUB84(uVar6,4);
      ((FWeakObjectPtr *)(puVar14 + 1))->ObjectIndex = local_170._16_4_;
      ((FWeakObjectPtr *)(puVar14 + 1))->ObjectSerialNumber = local_170._20_4_;
      *(FWeakObjectPtr *)(puVar14 + 2) = local_1f8;
      local_170._16_8_ = uVar4;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[3] = uVar15;
      *puVar14 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Inventory____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U3___6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      puVar14[4] = 0;
      local_170._48_8_ = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(puVar14 + 4),(FObjectPtr)((longlong)local_170 + 0x30));
      puVar14[5] = UDS_M_Inventory::OnUpdateContextMenuPopupSize;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    UDS_UserWidget::SetDelegateResize
              ((UDS_UserWidget *)this_01,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_190);
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357399>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x2a9,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ConvertModelEventToInventoryEvent @ 14bcebf20

EDS_InventoryModelEvent __thiscall
UDS_M_Inventory::ConvertModelEventToInventoryEvent
          (UDS_M_Inventory *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  FWeakObjectPtr FVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UDS_M_ItemImplBase *this_00;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  FWeakObjectPtr local_20;
  
  local_res10 = param_1.WeakPtr;
  FVar4 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
  FVar7.ObjectIndex = 0;
  FVar7.ObjectSerialNumber = 0;
  if (FVar4 == (FWeakObjectPtr)0x0) {
LAB_14bcebf65:
    FVar4 = FVar7;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bcebf65;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    FVar4 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
    if (FVar4 == (FWeakObjectPtr)0x0) {
LAB_14bcebffb:
      FVar4 = FVar7;
    }
    else {
      pUVar5 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_14bcebffb;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_20 = FVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res20);
      EVar3 = UDS_M_ItemImplBase::GetItemSlotType(this_00);
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      switch(*(undefined4 *)&pUVar6[5].field_0x8) {
      case 2:
        if (EVar3 == Inventory) {
          return OnDragCanceledInventorySlot;
        }
        break;
      case 3:
        if (EVar3 == Inventory) {
          return OnDroppedInventorySlot;
        }
        break;
      case 4:
        return OnMouseEnteredInventorySlot;
      case 6:
        if (EVar3 == Inventory) {
          return OnClickedMouseLeftButtonInventorySlot;
        }
        break;
      case 7:
        if (EVar3 == Inventory) {
          return OnClickedMouseRightButtonInventorySlot;
        }
        break;
      case 10:
        if (EVar3 == Inventory) {
          return OnDoubleClickedMouseRightButtonInventorySlot;
        }
      }
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  FVar4 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
  if (FVar4 != (FWeakObjectPtr)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_InventoryBagTabBtn_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bcec139;
  }
  FVar4 = FVar7;
LAB_14bcec139:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res20 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_28);
  return -(uint)bVar2 & OnClickedTab;
}

// GetExtendedInventorySlotCount @ 14bcf77e0

int __thiscall UDS_M_Inventory::GetExtendedInventorySlotCount(UDS_M_Inventory *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EDS_InventoryType EVar5;
  int iVar6;
  FDS_InventoryTabTableRow *pFVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res10 [8];
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar7 = GetInventoryTabTable(this);
  if (pFVar7 == (FDS_InventoryTabTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357086>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x3e2,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
LAB_14bcf78ac:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357453>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x273,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    iVar6 = 0;
  }
  else {
    FDS_InventoryBaseTableRow::GetAll(&local_28);
    iVar6 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar6 * 8;
    uVar8 = local_28._8_8_;
    FVar9.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDS_InventoryBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
        uVar8 = local_28._8_8_;
      }
      if (FVar9.Data == pFVar1) {
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        goto LAB_14bcf78ac;
      }
      lVar2 = *(longlong *)FVar9.Data;
      EVar5 = *(EDS_InventoryType *)(lVar2 + 0x10);
      if (EVar5 == pFVar7->ID_InventoryType) break;
      FVar9.Data = FVar9.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      EVar5 = *(EDS_InventoryType *)(lVar2 + 0x10);
    }
    iVar6 = DS_ItemDataUtil::GetInventorySlotCount(EVar5);
  }
  return iVar6;
}

// GetInventoryBaseTable @ 14bcf8840

FDS_InventoryBaseTableRow * __thiscall UDS_M_Inventory::GetInventoryBaseTable(UDS_M_Inventory *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDS_InventoryTabTableRow *pFVar4;
  FDS_InventoryBaseTableRow *pFVar5;
  int iVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res10 [8];
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar4 = GetInventoryTabTable(this);
  if (pFVar4 == (FDS_InventoryTabTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357086>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x3e2,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_InventoryBaseTableRow *)(*pcVar2)();
      return pFVar5;
    }
LAB_14bcf88fe:
    pFVar5 = (FDS_InventoryBaseTableRow *)0x0;
  }
  else {
    FDS_InventoryBaseTableRow::GetAll(&local_28);
    iVar6 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar6 * 8;
    uVar7 = local_28._8_8_;
    FVar8.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar6) {
        `TCheckedPointerIterator<FDS_InventoryBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
        uVar7 = local_28._8_8_;
      }
      if (FVar8.Data == pFVar1) {
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        goto LAB_14bcf88fe;
      }
      pFVar5 = *(FDS_InventoryBaseTableRow **)FVar8.Data;
      if (pFVar5->Type == pFVar4->ID_InventoryType) break;
      FVar8.Data = FVar8.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return pFVar5;
}

// GetInventoryTabModelList @ 14bcf8920

TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
UDS_M_Inventory::GetInventoryTabModelList
          (UDS_M_Inventory *this,
          TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->TabModelList).ArrayNum;
  _Src = (this->TabModelList).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetInventoryTabTable @ 14bcf89c0

FDS_InventoryTabTableRow * __thiscall UDS_M_Inventory::GetInventoryTabTable(UDS_M_Inventory *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  FDS_InventoryTabTableRow *pFVar6;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  pFVar6 = FDS_InventoryTabTableRow::Get((longlong)iVar3,true);
  return pFVar6;
}

// GetViewModelContext @ 14bcff7e0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_Inventory::GetViewModelContext
          (UDS_M_Inventory *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0xa0;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitFunctionTypeList @ 14bd01120

void __thiscall
UDS_M_Inventory::InitFunctionTypeList
          (UDS_M_Inventory *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EDS_SlotType EVar5;
  EDS_ItemUseType EVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  FDS_ItemConsumeFunctionTableRow *pFVar10;
  UDS_ItemData *pUVar11;
  TArray<EDS_DropDownPopup,TSizedDefaultAllocator<32>_> *pTVar12;
  FWeakObjectPtr local_res10;
  FScriptContainerElement local_18;
  FScriptContainerElement local_17;
  FScriptContainerElement local_16;
  FScriptContainerElement local_15;
  FScriptContainerElement local_14 [12];
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357334>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x2ea,"false");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar12 = &this->FuncTypeList;
  piVar1 = &(this->FuncTypeList).ArrayMax;
  (this->FuncTypeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar12->AllocatorInstance,0,piVar1);
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  iVar8 = *(int *)&pUVar9[8].field_0x10;
  EVar6 = DS_ItemDataUtil::GetItemUseType(iVar8);
  if (EVar6 == Equipment) {
    pUVar11 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
    EVar5 = UDS_ItemData::GetSlotType(pUVar11);
    if ((EVar5 == EquipBattle) || (EVar5 == EquipTool)) {
      pFVar2 = (pTVar12->AllocatorInstance).Data;
      local_15 = (FScriptContainerElement)0x2;
      if ((pFVar2 <= &local_15) &&
         ((&local_15 < pFVar2 + *piVar1 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (this->FuncTypeList).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar12->AllocatorInstance,piVar1);
      }
      (this->FuncTypeList).ArrayNum = iVar8 + 1;
      (pTVar12->AllocatorInstance).Data[iVar8] = local_15;
    }
    pUVar11 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
    bVar4 = UDS_ItemData::IsAvailableEquipGem(pUVar11);
    if (!bVar4) {
      return;
    }
    pFVar2 = (pTVar12->AllocatorInstance).Data;
    local_14[0] = (FScriptContainerElement)0x5;
    if (((pFVar2 <= local_14) && (local_14 < pFVar2 + *piVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = (this->FuncTypeList).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar12->AllocatorInstance,piVar1);
    }
  }
  else {
    if (EVar6 != Consume) {
      return;
    }
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    pFVar2 = (pTVar12->AllocatorInstance).Data;
    if (pUVar9[0x16].field_0x4 == 'o') {
      local_17 = (FScriptContainerElement)0xb;
      if (((pFVar2 <= &local_17) && (&local_17 < pFVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (this->FuncTypeList).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar12->AllocatorInstance,piVar1);
      }
      (this->FuncTypeList).ArrayNum = iVar7 + 1;
      (pTVar12->AllocatorInstance).Data[iVar7] = local_17;
    }
    else {
      local_18 = (FScriptContainerElement)0x1;
      if (((pFVar2 <= &local_18) && (&local_18 < pFVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (this->FuncTypeList).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar12->AllocatorInstance,piVar1);
      }
      (this->FuncTypeList).ArrayNum = iVar7 + 1;
      (pTVar12->AllocatorInstance).Data[iVar7] = local_18;
    }
    pFVar10 = DS_ItemDataUtil::GetConsumeFunctionTable(iVar8);
    if (pFVar10 == (FDS_ItemConsumeFunctionTableRow *)0x0) {
      return;
    }
    if (pFVar10->IsQuickSlotEnroll == false) {
      return;
    }
    pFVar2 = (pTVar12->AllocatorInstance).Data;
    local_16 = (FScriptContainerElement)0x3;
    if (((pFVar2 <= &local_16) && (&local_16 < pFVar2 + *piVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = (this->FuncTypeList).ArrayNum;
    local_14[0] = local_16;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar12->AllocatorInstance,piVar1);
      local_14[0] = local_16;
    }
  }
  (this->FuncTypeList).ArrayNum = iVar8 + 1;
  (pTVar12->AllocatorInstance).Data[iVar8] = local_14[0];
  return;
}

// InitItemDetailInfo @ 14bd01560

void __thiscall UDS_M_Inventory::InitItemDetailInfo(UDS_M_Inventory *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  UObject *pUVar5;
  TObjectPtr<UDS_M_ItemImplBase> TVar6;
  UClass *pUVar7;
  UDS_M_ItemImplBase *this_00;
  FName *pFVar8;
  undefined8 uVar9;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar10;
  UDS_ModelBase *pUVar11;
  TWeakObjectPtr<UDS_M_ItemImplDetail,FWeakObjectPtr> *this_01;
  FWeakObjectPtr local_res8;
  UDS_ModelBase *local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_28;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357700>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x17c,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bd016ac;
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&pUVar5[1].field_0x18,&local_28,SelectedItemUID);
  if (local_28.ArrayNum < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)local_28.AllocatorInstance.Data;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  DS_ItemDataUtil::GetItemDataByUID((long64)&local_res8);
  TVar10.WeakPtr._1_7_ = (undefined7)((ulonglong)uVar9 >> 8);
  TVar10.WeakPtr.ObjectIndex._0_1_ = 9;
  TVar6 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_res18,TVar10);
  pUVar11 = *(UDS_ModelBase **)TVar6.field0_0x0;
  if (pUVar11 == (UDS_ModelBase *)0x0) {
LAB_14bd01638:
    pUVar11 = (UDS_ModelBase *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_M_ItemImplDetail_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_14bd01638;
  }
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar11);
  this_01 = &this->ItemDetailInfoModel;
  local_res10 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_res10);
  bVar4 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
  if (bVar4) {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&this_01->WeakPtr);
    UDS_M_ItemImplBase::SetItemData(this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res8)
    ;
    pUVar5 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    pFVar8 = ::FName::FName(&local_res20,L"DS_VM_Item_Detail");
    uVar3 = pFVar8->Number;
    *(uint *)&pUVar5[9].field_0x10 = (pFVar8->ComparisonIndex).Value;
    *(uint *)&pUVar5[9].field_0x14 = uVar3;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357695>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x181,"false");
    if (bVar4) {
code_r0x00014bd016ac:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitItemList @ 14bd01700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_Inventory::InitItemList(UDS_M_Inventory *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UDS_ModelBase *pUVar6;
  FDS_InventoryTabTableRow *pFVar7;
  FName FVar8;
  FString *pFVar9;
  UEnum *this_00;
  FName *pFVar10;
  long64 lVar11;
  UDS_M_ItemList *this_01;
  FDS_DataContainer *pFVar12;
  longlong *plVar13;
  int iVar14;
  wchar_t *pwVar15;
  undefined1 auStackY_258 [32];
  EDS_SortingType local_228;
  UDS_ModelBase *local_220;
  FString local_218;
  undefined1 local_208 [8];
  FName local_200;
  FDS_DataContainer local_1f8;
  undefined1 local_158 [128];
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UDS_M_ItemListByInventory_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_158,pUVar5);
  local_158._8_8_ = this;
  pUVar6 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
  if (local_158._64_8_ != 0) {
    plVar13 = (longlong *)(local_158 + 0x50);
    if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_158._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar6);
  local_220 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&(this->ItemListModel).WeakPtr,(FObjectPtr)&local_220);
  bVar3 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar3) {
    pFVar7 = GetInventoryTabTable(this);
    if (pFVar7 == (FDS_InventoryTabTableRow *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7923606300477357716>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                         ,0x16c,"false");
      if (bVar3) goto code_r0x00014bd01831;
    }
    else {
      local_ac = 0x80;
      local_a8 = 0xffffffff;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_d8._0_8_ = (FScriptContainerElement *)0x0;
      local_d8._8_8_ = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a4 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_54 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)local_d8,InventoryType,pFVar7->ID_InventoryType);
      FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                        ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryData)local_208);
      uVar1 = *(undefined8 *)FVar8;
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
      pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)&this->_padding_,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar8
                         );
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_218,pwVar15);
      this_00 = StaticEnum<enum_EDS_SortingType>();
      if (this_00 != (UEnum *)0x0) {
        iVar14 = local_218.Data.ArrayNum + -1;
        if (local_218.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        pFVar10 = ::FName::FName(&local_200,iVar14,(wchar_t *)local_218.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        lVar11 = UEnum::GetValueByName(this_00,*pFVar10,None);
        local_228 = (EDS_SortingType)lVar11;
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)local_d8,SortType,local_228);
      FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)local_d8,FilterType,pFVar7->ID_Filter);
      FDS_DataContainer::SetData<enum_EDS_ItemSlotStateType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)local_d8,SlotType,Inventory);
      FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
                ((FDS_DataContainer *)local_d8,SortOrderType,Descend);
      this_01 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      pFVar12 = FDS_DataContainer::FDS_DataContainer(&local_1f8,(FDS_DataContainer *)local_d8);
      UDS_M_ItemList::InitModel(this_01,pFVar12);
      local_40 = 0;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,0,local_88._8_4_);
      iVar14 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar14 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      local_90 = 0;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_d8,0,local_d8._8_4_);
      iVar14 = SUB84(local_d8._8_8_,4);
      local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
      if (iVar14 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
      }
      local_a4 = 0;
      local_b0 = 0;
      local_a8 = 0xffffffff;
      if (0x80 < local_ac) {
        local_ac = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357719>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x169,"false");
    if (bVar3) {
code_r0x00014bd01831:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitSortType @ 14bd03a40

void __thiscall UDS_M_Inventory::InitSortType(UDS_M_Inventory *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDS_InventoryTabTableRow *pFVar6;
  FDS_SortingGroupTableRow *pFVar7;
  UEnum *this_00;
  FName FVar8;
  FString *this_01;
  FScriptContainerElement FVar9;
  int iVar10;
  undefined1 local_res10 [8];
  FString local_18;
  
  pFVar6 = GetInventoryTabTable(this);
  if (pFVar6 == (FDS_InventoryTabTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357742>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x152,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar9 = (FScriptContainerElement)0x0;
    pFVar7 = FDS_SortingGroupTableRow::Get(1,true);
    if ((pFVar7 != (FDS_SortingGroupTableRow *)0x0) &&
       (pFVar1 = (pFVar7->ID_SortingType).AllocatorInstance.Data,
       pFVar1 != pFVar1 + (pFVar7->ID_SortingType).ArrayNum)) {
      FVar9 = *pFVar1;
    }
    this_00 = StaticEnum<enum_EDS_SortingType>();
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString(&local_18,L"");
    }
    else {
      UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)(byte)FVar9);
    }
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                      ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryData)local_res10);
    uVar2 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&this->_padding_,uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8)
    ;
    iVar10 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar10);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InitTab @ 14bd03b70

void __thiscall UDS_M_Inventory::InitTab(UDS_M_Inventory *this)

{
  longlong *this_00;
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  FWeakObjectPtr *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UDS_ModelBase *pUVar12;
  FName FVar13;
  FString *pFVar14;
  ulonglong uVar15;
  wchar_t *_Str;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined1 local_res10 [8];
  uint local_res18;
  UDS_ModelBase *local_res20;
  FWeakObjectPtr local_c8;
  TArray<FDS_InventoryTabTableRow_const_*,TSizedDefaultAllocator<32>_> local_c0;
  FScriptContainerElement *local_b0;
  FDS_Text local_a8;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  FDS_InventoryTabTableRow::GetAll(&local_c0);
  uVar15 = (ulonglong)local_c0.ArrayNum;
  local_res18 = local_c0.ArrayNum;
  pFVar17 = local_c0.AllocatorInstance.Data + uVar15 * 8;
  FVar18.Data = local_c0.AllocatorInstance.Data;
  local_b0 = pFVar17;
  while( true ) {
    if (local_c0.ArrayNum != (uint)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_InventoryTabTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar18.Data == pFVar17) goto LAB_14bd03eb2;
    lVar3 = *(longlong *)FVar18.Data;
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 8) - 100U < 100) {
      pUVar11 = GetTransientPackageAsObject();
      pUVar12 = (UDS_ModelBase *)NewObject<UDS_M_InventoryBagTabBtn>(pUVar11);
      if (pUVar12 == (UDS_ModelBase *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7923606300477357761>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                           ,0x13f,"false");
        goto joined_r0x00014bd03eae;
      }
      this_00 = &this->_padding_;
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                         ((FDS_DataContainer *)this_00,(EDS_InventoryData)local_58);
      lVar4 = *(longlong *)FVar13;
      uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar16 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar16 = (longlong *)this->_padding_;
        }
        iVar10 = *(int *)((longlong)plVar16 +
                         (ulonglong)
                         ((int)this->_padding_ - 1U & (int)((ulonglong)lVar4 >> 0x20) + uVar9) * 4);
        if (iVar10 != -1) {
          do {
            if (*(longlong *)((longlong)iVar10 * 0x20 + *this_00) == lVar4) goto LAB_14bd03c94;
            iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *this_00);
          } while (iVar10 != -1);
        }
      }
      FDS_DataContainer::SetData<int,enum_EDS_InventoryData>
                ((FDS_DataContainer *)this_00,SelectedTabIndex,*(int *)(lVar3 + 8));
LAB_14bd03c94:
      local_a8.StringTableID = *(long64 *)(lVar3 + 0x28);
      local_a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_a8.StringEnumTableNameID.Number = 0;
      local_a8.TimeExpressionType = None;
      local_a8.DateTime.Ticks = 0;
      local_a8.TimeSpan.Ticks = 0;
      local_a8.IsExpression = false;
      local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.UniqueString.Data.ArrayNum = 0;
      local_a8.UniqueString.Data.ArrayMax = 0;
      local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.FormatArgs.ArrayNum = 0;
      local_a8.FormatArgs.ArrayMax = 0;
      local_a8.StringTableType = StringBase;
      FDS_DataContainer::SetData<FDS_Text,enum_EDS_InventoryBagTabBtnData>
                (&pUVar12->DataContainer,TabName,&local_a8);
      FDS_DataContainer::SetData<int,enum_EDS_InventoryBagTabBtnData>
                (&pUVar12->DataContainer,TabIcon,*(int *)(lVar3 + 0x18));
      FDS_DataContainer::SetData<int,enum_EDS_InventoryBagTabBtnData>
                (&pUVar12->DataContainer,TabIndex,*(int *)(lVar3 + 8));
      FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                         ((FDS_DataContainer *)this_00,(EDS_InventoryData)local_50);
      uVar5 = *(undefined8 *)FVar13;
      uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
      pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)this_00,uVar9 + (int)((ulonglong)uVar5 >> 0x20),(FName *)FVar13);
      if ((pFVar14->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      iVar10 = _wtoi(_Str);
      FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagTabBtnData>
                (&pUVar12->DataContainer,Selected,iVar10 == *(int *)(lVar3 + 8));
      pTVar2 = &this->TabModelList;
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar12);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      local_c8.ObjectIndex = 0;
      local_c8.ObjectSerialNumber = 0;
      local_res20 = pUVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_res20);
      pFVar6 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar6 <= &local_c8) && (&local_c8 < pFVar6 + (this->TabModelList).ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->TabModelList).ArrayNum;
      piVar1 = &(this->TabModelList).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TabModelList).ArrayNum = iVar10 + 1;
      *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_c8;
      pFVar17 = local_b0;
    }
    uVar15 = (ulonglong)local_res18;
    FVar18.Data = FVar18.Data + 8;
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7923606300477357769>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                     ,0x137,"false");
joined_r0x00014bd03eae:
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14bd03eb2:
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

// InitWeight @ 14bd046e0

void __thiscall UDS_M_Inventory::InitWeight(UDS_M_Inventory *this)

{
  TWeakObjectPtr<UDS_M_Weight,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_M_Weight *this_01;
  UDS_M_Weight *local_res8 [4];
  
  this_00 = &this->WeightModel;
  local_res8[0] = UDS_ModelBase::AddChildModel1<UDS_M_Weight>((UDS_ModelBase *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UDS_M_Weight *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357664>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x1a0,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  this_01 = (UDS_M_Weight *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_M_Weight::Init(this_01,PlayerNormal,0,0);
  return;
}

// InventoryUsedSlotCount @ 14bd04ce0

int __thiscall UDS_M_Inventory::InventoryUsedSlotCount(UDS_M_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_InventoryTabTableRow *pFVar4;
  
  pFVar4 = GetInventoryTabTable(this);
  if (pFVar4 != (FDS_InventoryTabTableRow *)0x0) {
    iVar3 = DS_ItemDataUtil::GetUsedInventorySlotCount(pFVar4->ID_InventoryType);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7923606300477357099>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                     ,0x3d5,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// IsEmpty @ 14bd05750

bool __thiscall UDS_M_Inventory::IsEmpty(UDS_M_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    return *(int *)(pUVar4 + 0xd) == 0;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7923606300477357446>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                     ,0x27a,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// IsShowWeight @ 14bd063d0

bool __thiscall UDS_M_Inventory::IsShowWeight(UDS_M_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_InventoryTabTableRow *pFVar4;
  
  pFVar4 = GetInventoryTabTable(this);
  if (pFVar4 != (FDS_InventoryTabTableRow *)0x0) {
    return pFVar4->IsWeight;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7923606300477357437>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                     ,0x283,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// IsSortOrderDescend @ 14bd06530

bool __thiscall UDS_M_Inventory::IsSortOrderDescend(UDS_M_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EDS_SortOrder EVar4;
  UDS_M_ItemList *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    EVar4 = UDS_M_ItemList::GetSortOrderType(this_00);
    return EVar4 == Descend;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7923606300477357430>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                     ,0x28a,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// OnChangedTabRedDotState @ 14bd0a640

void __thiscall UDS_M_Inventory::OnChangedTabRedDotState(UDS_M_Inventory *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  UObject *pUVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryData)&local_res8);
  uVar3 = *(undefined8 *)FVar8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar5 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar8);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  iVar6 = _wtoi(pwVar11);
  pFVar12 = (FWeakObjectPtr *)(this->TabModelList).AllocatorInstance.Data;
  iVar2 = (this->TabModelList).ArrayNum;
  pFVar1 = pFVar12 + iVar2;
  while( true ) {
    if ((this->TabModelList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar12 == pFVar1) break;
    local_res8 = *pFVar12;
    bVar4 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar4) {
      pUVar10 = FWeakObjectPtr::Get(&local_res8);
      FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                        ((FDS_DataContainer *)&pUVar10[1].field_0x18,
                         (EDS_InventoryBagTabBtnData)local_res10);
      uVar3 = *(undefined8 *)FVar8;
      uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)&pUVar10[1].field_0x18,uVar5 + (int)((ulonglong)uVar3 >> 0x20),
                          (FName *)FVar8);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      iVar7 = _wtoi(pwVar11);
      if (iVar6 == iVar7) {
        pUVar10 = FWeakObjectPtr::Get(&local_res8);
        pUVar10[5].field_0x18 = 1;
      }
    }
    pFVar12 = pFVar12 + 1;
  }
  return;
}

// OnClickedFilterApplyButton @ 14bd0b230

void __thiscall
UDS_M_Inventory::OnClickedFilterApplyButton(UDS_M_Inventory *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnClickedFilterCloseButton @ 14bd0b240

void __thiscall
UDS_M_Inventory::OnClickedFilterCloseButton(UDS_M_Inventory *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnClickedFilterOpenButton @ 14bd0b250

void __thiscall UDS_M_Inventory::OnClickedFilterOpenButton(UDS_M_Inventory *this)

{
  return;
}

// OnClickedFilterResetButton @ 14bd0b260

void __thiscall
UDS_M_Inventory::OnClickedFilterResetButton(UDS_M_Inventory *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnClickedSortOrderButton @ 14bd0c180

void __thiscall UDS_M_Inventory::OnClickedSortOrderButton(UDS_M_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_SortOrder EVar3;
  UDS_M_ItemList *this_00;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    EVar3 = UDS_M_ItemList::GetSortOrderType(this_00);
    if (EVar3 == Ascend) {
      EVar3 = Descend;
    }
    else if (EVar3 == Descend) {
      EVar3 = Ascend;
    }
    pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::SetData<enum_EDS_SortOrder,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar4[1].field_0x18,SortOrderType,EVar3);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
    pUVar4[5].field_0x18 = 1;
    *(undefined1 *)&this->_padding_ = 1;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (*pcVar1)(this,local_res8,0);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357226>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x356,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedTab @ 14bd0c2a0

void __thiscall UDS_M_Inventory::OnClickedTab(UDS_M_Inventory *this,int param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  FName FVar10;
  FString *pFVar11;
  FDS_InventoryTabTableRow *pFVar12;
  UDS_M_ItemImplBase *this_00;
  UDS_M_ItemList *this_01;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar13;
  wchar_t *pwVar14;
  FWeakObjectPtr *pFVar15;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  FString local_48;
  
  FDS_DataContainer::SetData<int,enum_EDS_InventoryData>
            ((FDS_DataContainer *)&this->_padding_,SelectedTabIndex,param_1);
  pFVar15 = (FWeakObjectPtr *)(this->TabModelList).AllocatorInstance.Data;
  iVar2 = (this->TabModelList).ArrayNum;
  pFVar1 = pFVar15 + iVar2;
  while( true ) {
    if ((this->TabModelList).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar1) break;
    local_res18 = *pFVar15;
    bVar6 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar6) {
      pUVar9 = FWeakObjectPtr::Get(&local_res18);
      FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                         ((FDS_DataContainer *)&pUVar9[1].field_0x18,
                          (EDS_InventoryBagTabBtnData)local_res20);
      uVar3 = *(undefined8 *)FVar10;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar9[1].field_0x18,uVar7 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar10);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      iVar8 = _wtoi(pwVar14);
      pUVar9 = FWeakObjectPtr::Get(&local_res18);
      pwVar14 = L"true";
      if (param_1 != iVar8) {
        pwVar14 = L"false";
      }
      ::FString::FString(&local_48,pwVar14);
      FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                         ((FDS_DataContainer *)&pUVar9[1].field_0x18,
                          (EDS_InventoryBagTabBtnData)local_58);
      uVar3 = *(undefined8 *)FVar10;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar9[1].field_0x18,uVar7 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar10);
      if (pFVar11 != &local_48) {
        pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar11->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar11->Data).ArrayNum = local_48.Data.ArrayNum;
        (pFVar11->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pUVar9 = FWeakObjectPtr::Get(&local_res18);
      pUVar9[5].field_0x18 = 1;
    }
    pFVar15 = pFVar15 + 1;
  }
  pFVar12 = GetInventoryTabTable(this);
  if (pFVar12 == (FDS_InventoryTabTableRow *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357656>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x1a8,"false");
    if (bVar6) {
code_r0x00014bd0c5a5:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    bVar6 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
    if (bVar6) {
      pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar9[1].field_0x18,InventoryType,pFVar12->ID_InventoryType)
      ;
      pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar9[1].field_0x18,FilterType,pFVar12->ID_Filter);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar9[1].field_0x18,Generation,true);
      pUVar9[5].field_0x18 = 1;
      pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      (**(code **)(*(longlong *)pUVar9 + 800))(pUVar9);
      bVar6 = FWeakObjectPtr::IsValid(&(this->ItemDetailInfoModel).WeakPtr);
      if (bVar6) {
        this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->ItemDetailInfoModel).WeakPtr);
        this_01 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        UDS_M_ItemList::GetSelectedItemUID(this_01);
        TVar13 = DS_ItemDataUtil::GetItemDataByUID((long64)local_50);
                    /* WARNING: Load size is inaccurate */
        UDS_M_ItemImplBase::SetItemData
                  (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*TVar13.WeakPtr);
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7923606300477357647>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                           ,0x1b1,"false");
        if (bVar6) goto code_r0x00014bd0c5a5;
      }
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7923606300477357654>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                         ,0x1aa,"false");
      if (bVar6) goto code_r0x00014bd0c5a5;
    }
  }
  return;
}

// OnDeInit @ 14bd0cc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_Inventory::OnDeInit(UDS_M_Inventory *this)

{
  bool bVar1;
  UObject *pUVar2;
  FSlateApplication *this_00;
  FWeakObjectPtr local_res10 [3];
  TSharedPtr<IInputProcessor,1> local_18;
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x13].field_0x18,this);
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    local_18.Object = (IInputProcessor *)(this->InputProcessor).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->InputProcessor).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::UnregisterInputPreProcessor(this_00,&local_18);
  }
  return;
}

// OnInit @ 14bd0e8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_Inventory::OnInit(UDS_M_Inventory *this)

{
  bool bVar1;
  UObject *pUVar2;
  FSlateApplication *this_00;
  FWeakObjectPtr local_res10 [3];
  TSharedPtr<IInputProcessor,1> local_18;
  
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InventoryUpdate),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_M_Inventory>
              (&pUVar2[0x13].field_0x18,(UDS_M_Inventory *)(local_res10 + 1),(pmf_345a7293)this);
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    local_18.Object = (IInputProcessor *)(this->InputProcessor).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->InputProcessor).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::RegisterInputPreProcessor(this_00,&local_18);
  }
  return;
}

// OnInventoryFilterOpenCallback @ 14bd0e9a0

void __thiscall
UDS_M_Inventory::OnInventoryFilterOpenCallback(UDS_M_Inventory *this,UDS_UserWidget *param_1)

{
  return;
}

// OnSortTypeChanged @ 14bd111e0

void __thiscall UDS_M_Inventory::OnSortTypeChanged(UDS_M_Inventory *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_SortingGroupTableRow *pFVar3;
  UDS_M_ItemList *this_00;
  uint uVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357467>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x265,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bd11341:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FDS_SortingGroupTableRow::Get(1,true);
  if (pFVar3 != (FDS_SortingGroupTableRow *)0x0) {
    if ((-1 < param_1) && (param_1 < (pFVar3->ID_SortingType).ArrayNum)) {
      this_00 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      uVar4 = 0;
      if (param_1 < (pFVar3->ID_SortingType).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UDS_M_ItemList::SetSortType
                (this_00,(EDS_SortingType)(pFVar3->ID_SortingType).AllocatorInstance.Data[param_1]);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = 0;
      pcVar1 = *(code **)(this->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      (*pcVar1)(this,local_res8,0);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357462>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x26a,"false");
    if (bVar2) goto code_r0x00014bd11341;
  }
  return;
}

// OnUpdateContextMenuPopupSize @ 14bd114b0

void __thiscall
UDS_M_Inventory::OnUpdateContextMenuPopupSize
          (UDS_M_Inventory *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  TVector2<double>_u_0 local_18;
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357274>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x326,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bd11536:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar2) {
    local_18._s_0.X = 0.0;
    local_18._s_0.Y = 0.0;
    DS_Util::TransformTooltipPosition
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,
               (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18[0],
               (TVector2<double> *)&local_18._s_0,None);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357273>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x327,"false");
    if (bVar2) goto code_r0x00014bd11536;
  }
  return;
}

// OnUpdateInventory @ 14bd116c0

void __thiscall
UDS_M_Inventory::OnUpdateInventory(UDS_M_Inventory *this,EDS_InventoryUpdate param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357245>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x343,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bd1175a:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemDetailInfoModel).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    if ((param_1 & (Cooltime|CooltimeFinish|CooltimeStart)) == None) {
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar3[1].field_0x18,Generation,true);
      pUVar3[5].field_0x18 = 1;
      pUVar3 = FWeakObjectPtr::Get(&(this->ItemDetailInfoModel).WeakPtr);
      pUVar3[5].field_0x18 = 1;
      *(undefined1 *)&this->_padding_ = 1;
    }
    else {
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar3[1].field_0x18,Update,true);
    }
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (*pcVar1)(this,local_res8,0);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357244>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x344,"false");
    if (bVar2) goto code_r0x00014bd1175a;
  }
  return;
}

// OnUpdateModel @ 14bd11ec0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_Inventory::OnUpdateModel
          (UDS_M_Inventory *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  EDS_InventoryModelEvent EVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  ADS_PlayerController *this_00;
  UDS_WindowManager *this_01;
  undefined8 *puVar11;
  ulong64 uVar12;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar13;
  UObject *pUVar14;
  long64 lVar15;
  UDS_ItemData *pUVar16;
  FName FVar17;
  FString *pFVar18;
  UDS_M_ItemImplBase *this_02;
  wchar_t *pwVar19;
  FWeakObjectPtr *pFVar20;
  char cVar21;
  FWeakObjectPtr *pFVar22;
  bool bVar23;
  float local_res8 [2];
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  FWeakObjectPtr *local_res20;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  undefined1 local_110 [8];
  FDelegateAllocation local_108;
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr local_e0;
  UObject *local_d8;
  UObject *local_d0;
  UObject *local_c8;
  UObject *local_c0;
  UObject *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_68;
  
  local_res10 = param_1.WeakPtr;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_VM_W_Inventory_UpdateModel");
  bVar23 = CpuChannel->Enabled < 0;
  if (bVar23) {
    local_res8[0] = (float)((uint)local_res8[0]._1_3_ << 8);
  }
  else {
    local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId126,"UDS_VM_W_Inventory_UpdateModel",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp",
               0x7e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId126);
  }
  cVar21 = !bVar23;
  bVar23 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (!bVar23) {
    bVar23 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7923606300477357952>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                        ,0x80,"false");
joined_r0x00014bd11f99:
    if (bVar23) goto code_r0x00014bd1266e;
    goto LAB_14bd12875;
  }
  bVar23 = FWeakObjectPtr::IsValid(&(this->ItemDetailInfoModel).WeakPtr);
  if (!bVar23) goto LAB_14bd12875;
  EVar4 = ConvertModelEventToInventoryEvent
                    (this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  if (EVar4 == OnClickedMouseLeftButtonInventorySlot) {
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 1));
    if (pUVar9 == (UObject *)0x0) {
LAB_14bd125e6:
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar10 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
      iVar5 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar10->_padding_)) goto LAB_14bd125e6;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    local_b8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_b8);
    bVar23 = FWeakObjectPtr::IsValid(&local_138);
    if (!bVar23) {
      bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7923606300477357938>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                          ,0x8e,"false");
      if (bVar23) {
code_r0x00014bd1266e:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14bd12875;
    }
    pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::ClearListData<enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar9[1].field_0x18,SelectedItemUID);
    pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    pUVar14 = FWeakObjectPtr::Get(&local_138);
    lVar15 = (**(code **)(*(longlong *)pUVar14 + 0x388))(pUVar14);
    FDS_DataContainer::AddListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar9[1].field_0x18,SelectedItemUID,lVar15);
    pUVar9 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar9[1].field_0x18,Update,true);
    pUVar9 = FWeakObjectPtr::Get(&local_138);
    (**(code **)(*(longlong *)pUVar9 + 0x3a0))(pUVar9,&local_118);
    bVar23 = FWeakObjectPtr::IsValid(&local_118);
    if (!bVar23) goto LAB_14bd12875;
    pUVar16 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_118);
    bVar23 = UDS_ItemData::IsNewSymbol(pUVar16);
    if (bVar23) {
      FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                         ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryData)local_78);
      uVar1 = *(undefined8 *)FVar17;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
      pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&this->_padding_,(int)((ulonglong)uVar1 >> 0x20) + uVar6,
                           (FName *)FVar17);
      if ((pFVar18->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
      }
      iVar7 = _wtoi(pwVar19);
      pFVar22 = (FWeakObjectPtr *)(this->TabModelList).AllocatorInstance.Data;
      iVar5 = (this->TabModelList).ArrayNum;
      pFVar20 = pFVar22 + iVar5;
      local_res20 = pFVar20;
      while( true ) {
        if ((this->TabModelList).ArrayNum != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar22 == pFVar20) break;
        local_e8 = *pFVar22;
        bVar23 = FWeakObjectPtr::IsValid(&local_e8);
        if (bVar23) {
          pUVar9 = FWeakObjectPtr::Get(&local_e8);
          FVar17 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                             ((FDS_DataContainer *)&pUVar9[1].field_0x18,
                              (EDS_InventoryBagTabBtnData)local_70);
          uVar1 = *(undefined8 *)FVar17;
          uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
          pFVar18 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    ::FindOrAddImpl<FName>
                              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                *)&pUVar9[1].field_0x18,(int)((ulonglong)uVar1 >> 0x20) + uVar6,
                               (FName *)FVar17);
          if ((pFVar18->Data).ArrayNum == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
          }
          iVar8 = _wtoi(pwVar19);
          pFVar20 = local_res20;
          if (iVar7 == iVar8) {
            pUVar9 = FWeakObjectPtr::Get(&local_e8);
            pUVar9[5].field_0x18 = 1;
            pFVar20 = local_res20;
          }
        }
        pFVar22 = pFVar22 + 1;
      }
      pUVar16 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_118);
      UDS_ItemData::SetNewSymbol(pUVar16,false);
      cVar21 = local_res8[0]._0_1_;
    }
    this_02 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->ItemDetailInfoModel).WeakPtr);
    UDS_M_ItemImplBase::SetItemData(this_02,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_118);
  }
  else {
    if (EVar4 == OnClickedMouseRightButtonInventorySlot) {
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 1));
      if (pUVar9 == (UObject *)0x0) {
LAB_14bd121b3:
        pUVar9 = (UObject *)0x0;
      }
      else {
        pUVar10 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
        iVar5 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar10->_padding_)) goto LAB_14bd121b3;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_128.ObjectIndex = 0;
      local_128.ObjectSerialNumber = 0;
      local_d0 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_d0);
      bVar23 = FWeakObjectPtr::IsValid(&local_128);
      if (!bVar23) {
        bVar23 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7923606300477357908>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                            ,0xac,"false");
joined_r0x00014bd12234:
        if (bVar23) goto code_r0x00014bd1266e;
        goto LAB_14bd12875;
      }
      pUVar9 = FWeakObjectPtr::Get(&local_128);
      (**(code **)(*(longlong *)pUVar9 + 0x3a0))(pUVar9);
      bVar23 = FWeakObjectPtr::IsValid(&local_f0);
      if (!bVar23) {
        bVar23 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7923606300477357905>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                            ,0xaf,"false");
        if (!bVar23) goto LAB_14bd12875;
        goto code_r0x00014bd1266e;
      }
      ADS_PlayerController::GetPlayerController();
      bVar23 = FWeakObjectPtr::IsValid(&local_e0);
      if (!bVar23) {
        bVar23 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7923606300477357902>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                            ,0xb2,"false");
        if (bVar23) goto code_r0x00014bd1266e;
        goto LAB_14bd12875;
      }
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_e0);
      bVar23 = ADS_PlayerController::IsKeyPressed(this_00,IA_Function);
      if (!bVar23) {
        DS_ItemDataUtil::Use((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_f0,0,0,0);
        goto LAB_14bd12875;
      }
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      if (pUVar9 == (UObject *)0x0) {
LAB_14bd1233c:
        pUVar9 = (UObject *)0x0;
      }
      else {
        pUVar10 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
        iVar5 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar10->_padding_)) goto LAB_14bd1233c;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_120.ObjectIndex = 0;
      local_120.ObjectSerialNumber = 0;
      local_c8 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_c8);
      bVar23 = FWeakObjectPtr::IsValid(&local_120);
      if (bVar23) {
        pUVar9 = FWeakObjectPtr::Get(&local_120);
        local_c0 = *(UObject **)&pUVar9[5].field_0x10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_c0);
        }
        local_f8.ObjectIndex = 0;
        local_f8.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_c0);
        }
        FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_c0);
        FVar3 = local_f8;
        InitFunctionTypeList(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_f0);
        this_01 = UDS_WindowManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_01 == (UDS_WindowManager *)0x0) goto LAB_14bd12875;
        }
        else {
          if (this_01 == (UDS_WindowManager *)0x0) goto LAB_14bd12875;
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        local_res8[0] = 0.0;
        local_res20 = (FWeakObjectPtr *)((ulonglong)local_res20 & 0xffffffff00000000);
        UDS_WindowManager::CloseWindow(this_01,ItemDetailInfo,(uint *)&local_res20,local_res8);
        local_110 = (undefined1  [8])0x0;
        local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_108.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
                   (FWriteAccessScope *)&local_98);
        local_80 = &local_108;
        puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_108);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
          ;
          *(FWeakObjectPtr *)(puVar11 + 1) = local_f0;
          *(FWeakObjectPtr *)(puVar11 + 2) = FVar3;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[3] = uVar12;
          *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
                      ::_vftable_;
          puVar11[4] = this;
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        pTVar13 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                            (&local_68,
                             (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *
                             )local_110);
        UDS_WindowManager::OpenWindow(this_01,ContextMenu,pTVar13);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
                   (FWriteAccessScope *)&local_b0);
        if ((local_108.DelegateSize != 0) &&
           (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_108.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_108,0,0,0x10);
          local_108.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_108.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_110);
      }
      else {
        bVar23 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7923606300477357897>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                            ,0xb7,"false");
        if (bVar23) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      goto LAB_14bd12875;
    }
    if (EVar4 == OnDroppedInventorySlot) {
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      if (pUVar9 == (UObject *)0x0) {
LAB_14bd12098:
        pUVar9 = (UObject *)0x0;
      }
      else {
        pUVar10 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
        iVar5 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar10->_padding_)) goto LAB_14bd12098;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_130.ObjectIndex = 0;
      local_130.ObjectSerialNumber = 0;
      local_d8 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_d8);
      bVar23 = FWeakObjectPtr::IsValid(&local_130);
      if (bVar23) {
        pUVar9 = FWeakObjectPtr::Get(&local_130);
        if ((*(longlong *)(pUVar9 + 0xc) == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar23)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined1 *)(*(longlong *)(pUVar9 + 0xc) + 0x90) = 1;
        goto LAB_14bd12875;
      }
      bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7923606300477357858>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                          ,0xde,"false");
      goto joined_r0x00014bd11f99;
    }
    if (EVar4 != OnClickedTab) goto LAB_14bd12875;
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    bVar23 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar9 + 1));
    if (!bVar23) {
      bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7923606300477357800>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                          ,0x118,"false");
      goto joined_r0x00014bd12234;
    }
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 1));
    iVar5 = FDS_DataContainer::GetData<int,enum_EDS_InventoryBagTabBtnData>
                      ((FDS_DataContainer *)&pUVar9[1].field_0x18,TabIndex);
    OnClickedTab(this,iVar5);
  }
  *(undefined1 *)&this->_padding_ = 1;
LAB_14bd12875:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// OpenFunctionList @ 14bd14cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_Inventory::OpenFunctionList
          (UDS_M_Inventory *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  float local_res20 [2];
  uint local_68 [2];
  undefined1 local_60 [8];
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  InitFunctionTypeList(this,param_1);
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_68[0] = 0;
  local_res20[0] = 0.0;
  UDS_WindowManager::CloseWindow(this_00,ItemDetailInfo,local_68,local_res20);
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 1) = param_1.WeakPtr;
    *(FWeakObjectPtr *)(puVar1 + 2) = param_2.WeakPtr;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[3] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
               ::_vftable_;
    puVar1[4] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      &local_48,
                      (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      local_60);
  UDS_WindowManager::OpenWindow(this_00,ContextMenu,pTVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  return;
}

// PreInitBindViewModel @ 14bd15910

void __thiscall UDS_M_Inventory::PreInitBindViewModel(UDS_M_Inventory *this)

{
  TWeakObjectPtr<UDS_M_Weight,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDS_InventoryTabTableRow *pFVar6;
  FDS_SortingGroupTableRow *pFVar7;
  UEnum *this_01;
  FName FVar8;
  FString *this_02;
  UDS_M_Weight *this_03;
  FScriptContainerElement FVar9;
  int iVar10;
  UDS_M_Weight *local_res8;
  undefined1 local_res10 [8];
  FString local_28;
  
  InitTab(this);
  pFVar6 = GetInventoryTabTable(this);
  if (pFVar6 == (FDS_InventoryTabTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357742>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x152,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar9 = (FScriptContainerElement)0x0;
    pFVar7 = FDS_SortingGroupTableRow::Get(1,true);
    if ((pFVar7 != (FDS_SortingGroupTableRow *)0x0) &&
       (pFVar1 = (pFVar7->ID_SortingType).AllocatorInstance.Data,
       pFVar1 != pFVar1 + (pFVar7->ID_SortingType).ArrayNum)) {
      FVar9 = *pFVar1;
    }
    this_01 = StaticEnum<enum_EDS_SortingType>();
    if (this_01 == (UEnum *)0x0) {
      ::FString::FString(&local_28,L"");
    }
    else {
      UEnum::GetNameStringByValue(this_01,&local_28,(ulonglong)(byte)FVar9);
    }
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                      ((FDS_DataContainer *)&this->_padding_,(EDS_InventoryData)local_res10);
    uVar2 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    this_02 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&this->_padding_,uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8)
    ;
    iVar10 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange(this_02,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar10);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  InitItemList(this);
  InitItemDetailInfo(this);
  this_00 = &this->WeightModel;
  local_res8 = UDS_ModelBase::AddChildModel1<UDS_M_Weight>((UDS_ModelBase *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UDS_M_Weight *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    this_03 = (UDS_M_Weight *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_M_Weight::Init(this_03,PlayerNormal,0,0);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357664>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x1a0,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RefreshInventory @ 14bd17720

void __thiscall UDS_M_Inventory::RefreshInventory(UDS_M_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_InventoryTabTableRow *pFVar3;
  UObject *pUVar4;
  UDS_M_ItemImplBase *this_00;
  UDS_M_ItemList *this_01;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar5;
  undefined1 local_res10 [8];
  
  pFVar3 = GetInventoryTabTable(this);
  if (pFVar3 == (FDS_InventoryTabTableRow *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357656>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x1a8,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      FDS_DataContainer::SetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,InventoryType,pFVar3->ID_InventoryType);
      pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      FDS_DataContainer::SetData<enum_EDS_FilterType,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,FilterType,pFVar3->ID_Filter);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,Generation,true);
      pUVar4[5].field_0x18 = 1;
      pUVar4 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
      (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4);
      bVar2 = FWeakObjectPtr::IsValid(&(this->ItemDetailInfoModel).WeakPtr);
      if (bVar2) {
        this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->ItemDetailInfoModel).WeakPtr);
        this_01 = (UDS_M_ItemList *)FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
        UDS_M_ItemList::GetSelectedItemUID(this_01);
        TVar5 = DS_ItemDataUtil::GetItemDataByUID((long64)local_res10);
                    /* WARNING: Load size is inaccurate */
        UDS_M_ItemImplBase::SetItemData
                  (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*TVar5.WeakPtr);
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7923606300477357647>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                           ,0x1b1,"false");
        if (bVar2) goto code_r0x00014bd1787e;
      }
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357654>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x1aa,"false");
    if (!bVar2) {
      return;
    }
  }
code_r0x00014bd1787e:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// UpdateSelectedItem @ 14bd29660

void __thiscall UDS_M_Inventory::UpdateSelectedItem(UDS_M_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_M_ItemImplBase *this_00;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  TArray<__int64,TSizedDefaultAllocator<32>_> local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357514>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x236,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bd29709:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3);
  bVar2 = FWeakObjectPtr::IsValid(&(this->ItemDetailInfoModel).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&(this->ItemDetailInfoModel).WeakPtr);
    pUVar3 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    FDS_DataContainer::GetListData<__int64,enum_EDS_ItemListData>
              ((FDS_DataContainer *)&pUVar3[1].field_0x18,&local_28,SelectedItemUID);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    TVar4 = DS_ItemDataUtil::GetItemDataByUID((long64)local_res18);
                    /* WARNING: Load size is inaccurate */
    UDS_M_ItemImplBase::SetItemData
              (this_00,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*TVar4.WeakPtr);
    *(undefined1 *)&this->_padding_ = 1;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (*pcVar1)(this,local_res8,0);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7923606300477357509>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Inventory.cpp"
                       ,0x23b,"false");
    if (bVar2) goto code_r0x00014bd29709;
  }
  return;
}

// UpdateView @ 14bd2a5f0

void __thiscall
UDS_M_Inventory::UpdateView
          (UDS_M_Inventory *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1,
          bool param_2)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemListModel).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ItemListModel).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x350))(pUVar2,0);
  }
  UDS_ModelBase::UpdateView((UDS_ModelBase *)this,param_1,param_2);
  return;
}

// UpdatedItemDataSet @ 14bd2ac80

void __thiscall UDS_M_Inventory::UpdatedItemDataSet(UDS_M_Inventory *this,UDS_DataSetBase *param_1)

{
  return;
}

