// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 12

// StaticClass @ 14a739fd0

UClass * __cdecl UMVVMViewModelCollectionObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelCollectionObject",
               &Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton,
               StaticRegisterNativesUMVVMViewModelCollectionObject,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewModelCollectionObject>,
               InternalVTableHelperCtorCaller<UMVVMViewModelCollectionObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton;
}

// UMVVMViewModelCollectionObject @ 14a740130

UMVVMViewModelCollectionObject * __thiscall
UMVVMViewModelCollectionObject::UMVVMViewModelCollectionObject
          (UMVVMViewModelCollectionObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMViewModelCollectionObject__6B_;
  (this->ViewModelCollection).ViewModelInstances.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ViewModelCollection).ViewModelInstances.ArrayNum = 0;
  (this->ViewModelCollection).ViewModelInstances.ArrayMax = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x18 = 2;
  return this;
}

// UMVVMViewModelCollectionObject @ 14a740180

UMVVMViewModelCollectionObject * __thiscall
UMVVMViewModelCollectionObject::UMVVMViewModelCollectionObject
          (UMVVMViewModelCollectionObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMViewModelCollectionObject__6B_;
  (this->ViewModelCollection).ViewModelInstances.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ViewModelCollection).ViewModelInstances.ArrayNum = 0;
  (this->ViewModelCollection).ViewModelInstances.ArrayMax = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x18 = 2;
  return this;
}

// ~UMVVMViewModelCollectionObject @ 14a740a00

void __thiscall
UMVVMViewModelCollectionObject::~UMVVMViewModelCollectionObject
          (UMVVMViewModelCollectionObject *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMVVMViewModelCollectionObject__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x8,
             *(int *)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x10);
  pvVar1 = *(void **)&(this->ViewModelCollection).OnCollectionChangedDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->ViewModelCollection).OnCollectionChangedDelegate);
  pFVar2 = (this->ViewModelCollection).ViewModelInstances.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FindViewModelInstance @ 14a74e1f0

UMVVMViewModelBase * __thiscall
UMVVMViewModelCollectionObject::FindViewModelInstance
          (UMVVMViewModelCollectionObject *this,FMVVMViewModelContext *param_1)

{
  TObjectPtr<UClass>_u_0 *pTVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  FName FVar3;
  bool bVar4;
  TObjectPtr<UClass>_u_0 *pTVar5;
  TObjectPtr<UClass>_u_0 local_28;
  FName local_20;
  TObjectPtr<UClass>_u_0 local_18;
  TObjectPtr<UClass>_u_0 local_10;
  
  TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ContextClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar2.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  FVar3 = param_1->ContextName;
  local_28.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  pTVar5 = (TObjectPtr<UClass>_u_0 *)
           (this->ViewModelCollection).ViewModelInstances.AllocatorInstance.Data;
  pTVar1 = pTVar5 + (longlong)(this->ViewModelCollection).ViewModelInstances.ArrayNum * 3;
  local_20 = FVar3;
  while( true ) {
    if (pTVar5 == pTVar1) {
      return (UMVVMViewModelBase *)0x0;
    }
    local_18 = (TObjectPtr<UClass>_u_0)pTVar5->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
    }
    local_10 = pTVar5[1];
    bVar4 = FMVVMViewModelContext::operator==
                      ((FMVVMViewModelContext *)&local_18.ObjectPtr,
                       (FMVVMViewModelContext *)&local_28.ObjectPtr);
    if (bVar4) break;
    pTVar5 = pTVar5 + 3;
  }
  return (UMVVMViewModelBase *)pTVar5[2].DebugPtr;
}

// GetPrivateStaticClass @ 14a754060

UClass * __cdecl UMVVMViewModelCollectionObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewModelCollectionObject",
               &Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton,
               StaticRegisterNativesUMVVMViewModelCollectionObject,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewModelCollectionObject>,
               InternalVTableHelperCtorCaller<UMVVMViewModelCollectionObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.InnerSingleton;
}

// StaticRegisterNativesUMVVMViewModelCollectionObject @ 14a760290

void __cdecl
UMVVMViewModelCollectionObject::StaticRegisterNativesUMVVMViewModelCollectionObject(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddViewModelInstance @ 14a768f80

void __cdecl
UMVVMViewModelCollectionObject::execAddViewModelInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMVVMViewModelBase *pUVar2;
  UClass *pUVar3;
  undefined8 uVar4;
  bool bVar5;
  UMVVMViewModelBase *local_res8;
  UClass *local_38;
  undefined8 local_30;
  TObjectPtr<UClass>_u_0 local_28;
  undefined8 local_20;
  
  local_38 = (UClass *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8 = (UMVVMViewModelBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_38;
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  uVar4 = local_30;
  local_28.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_20 = uVar4;
  bVar5 = FMVVMViewModelCollection::AddInstance
                    ((FMVVMViewModelCollection *)(param_1 + 1),
                     (FMVVMViewModelContext *)&local_28.ObjectPtr,pUVar2);
  *(bool *)param_3 = bVar5;
  return;
}

// execFindFirstViewModelInstanceOfType @ 14a76b520

void __cdecl
UMVVMViewModelCollectionObject::execFindFirstViewModelInstanceOfType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TObjectPtr<UClass>_u_0 *pTVar3;
  TObjectPtr<UClass>_u_0 *pTVar4;
  TObjectPtr<UClass>_u_0 local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 local_28;
  TObjectPtr<UClass>_u_0 local_20;
  
  local_res8.DebugPtr = (UClass *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pTVar3 = &local_res8;
  if ((TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress != (TObjectPtr<UClass>_u_0 *)0x0)
  {
    pTVar3 = (TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = (TObjectPtr<UClass>_u_0)pTVar3->DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  pTVar4 = *(TObjectPtr<UClass>_u_0 **)(param_1 + 1);
  pTVar3 = pTVar4 + (longlong)*(int *)&param_1[1].field_0x8 * 3;
  while( true ) {
    if (pTVar4 == pTVar3) {
      *(undefined8 *)param_3 = 0;
      return;
    }
    local_28 = (TObjectPtr<UClass>_u_0)pTVar4->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
    }
    local_20 = pTVar4[1];
    bVar2 = FMVVMViewModelContext::IsCompatibleWith
                      ((FMVVMViewModelContext *)&local_28.ObjectPtr,
                       (TSubclassOf<UMVVMViewModelBase> *)&local_res10.ObjectPtr);
    if (bVar2) break;
    pTVar4 = pTVar4 + 3;
  }
  *(TObjectPtr<UClass>_u_0 *)param_3 = pTVar4[2];
  return;
}

// execFindViewModelInstance @ 14a76b640

void __cdecl
UMVVMViewModelCollectionObject::execFindViewModelInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMVVMViewModelBase *pUVar2;
  UClass *local_28;
  undefined8 local_20;
  TObjectPtr<UClass>_u_0 local_18;
  undefined8 local_10;
  
  local_28 = (UClass *)0x0;
  local_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.DebugPtr = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  local_10 = local_20;
  pUVar2 = FindViewModelInstance
                     ((UMVVMViewModelCollectionObject *)param_1,
                      (FMVVMViewModelContext *)&local_18.ObjectPtr);
  *(UMVVMViewModelBase **)param_3 = pUVar2;
  return;
}

// execRemoveAllViewModelInstance @ 14a76c710

void __cdecl
UMVVMViewModelCollectionObject::execRemoveAllViewModelInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x8;
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  lVar3 = *(longlong *)(param_1 + 1);
  iVar10 = 0;
  bVar11 = *(longlong *)(lVar3 + 0x10) != local_res20;
  lVar8 = 0;
  iVar6 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar7 = iVar6 + 1;
    if (lVar8 < lVar9) {
      plVar5 = (longlong *)(lVar3 + 0x10 + lVar8 * 0x18);
      do {
        if (bVar11 != (*plVar5 != lVar4)) break;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar8 < lVar9);
    }
    if (bVar11 != false) {
      if (iVar10 != iVar6) {
        memmove((void *)((longlong)iVar10 * 0x18 + lVar3),(void *)((longlong)iVar6 * 0x18 + lVar3),
                (longlong)(iVar7 - iVar6) * 0x18);
      }
      iVar10 = iVar10 + (iVar7 - iVar6);
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar6 = iVar7;
    if (lVar9 <= lVar8) {
      *(int *)&param_1[1].field_0x8 = iVar10;
      if (iVar1 - iVar10 != 0) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &param_1[1].field_0x10);
      }
      *(int *)param_3 = iVar1 - iVar10;
      return;
    }
  } while( true );
}

// execRemoveViewModel @ 14a76c8c0

void __cdecl
UMVVMViewModelCollectionObject::execRemoveViewModel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  undefined8 uVar3;
  bool bVar4;
  UClass *local_28;
  undefined8 local_20;
  TObjectPtr<UClass>_u_0 local_18;
  undefined8 local_10;
  
  local_28 = (UClass *)0x0;
  local_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar2 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  uVar3 = local_20;
  local_18.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_10 = uVar3;
  bVar4 = FMVVMViewModelCollection::RemoveInstance
                    ((FMVVMViewModelCollection *)(param_1 + 1),
                     (FMVVMViewModelContext *)&local_18.ObjectPtr);
  *(bool *)param_3 = bVar4;
  return;
}

