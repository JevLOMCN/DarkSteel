// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146e77960

UClass * __cdecl UAIAsyncTaskBlueprintProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUAIAsyncTaskBlueprintProxy,0x78,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAIAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UAIAsyncTaskBlueprintProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton;
}

// UAIAsyncTaskBlueprintProxy @ 146e807a0

UAIAsyncTaskBlueprintProxy * __thiscall
UAIAsyncTaskBlueprintProxy::UAIAsyncTaskBlueprintProxy
          (UAIAsyncTaskBlueprintProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAIAsyncTaskBlueprintProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFail = 0;
  *(undefined8 *)&(this->OnFail).field_0x8 = 0;
  *(undefined8 *)&(this->OnFail).field_0x10 = 0;
  (this->AIController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MyWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TimerHandle_OnInstantFinish).Handle = 0;
  (this->MoveRequestId).RequestID = 0xffffffff;
  return this;
}

// ~UAIAsyncTaskBlueprintProxy @ 146e81ac0

void __thiscall
UAIAsyncTaskBlueprintProxy::~UAIAsyncTaskBlueprintProxy(UAIAsyncTaskBlueprintProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAIAsyncTaskBlueprintProxy__6B_;
  pvVar1 = *(void **)&(this->OnFail).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFail);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8e800

UClass * __cdecl UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUAIAsyncTaskBlueprintProxy,0x78,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAIAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UAIAsyncTaskBlueprintProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIAsyncTaskBlueprintProxy.InnerSingleton;
}

// StaticRegisterNativesUAIAsyncTaskBlueprintProxy @ 146ea0080

void __cdecl UAIAsyncTaskBlueprintProxy::StaticRegisterNativesUAIAsyncTaskBlueprintProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMoveCompleted @ 146ea6fc0

void __cdecl
UAIAsyncTaskBlueprintProxy::execOnMoveCompleted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [16];
  FAIRequestID local_res20 [2];
  
  local_res20[0].RequestID = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMoveCompleted((UAIAsyncTaskBlueprintProxy *)param_1,local_res20[0],(uint)local_res10[0]);
  return;
}

// UAIAsyncTaskBlueprintProxy @ 146f29d30

UAIAsyncTaskBlueprintProxy * __thiscall
UAIAsyncTaskBlueprintProxy::UAIAsyncTaskBlueprintProxy
          (UAIAsyncTaskBlueprintProxy *this,FObjectInitializer *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0 TVar4;
  TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  local_res8 = (TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0)this->_padding_;
  this->_padding_ = (longlong)&___7UAIAsyncTaskBlueprintProxy__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFail = 0;
  *(undefined8 *)&(this->OnFail).field_0x8 = 0;
  *(undefined8 *)&(this->OnFail).field_0x10 = 0;
  (this->AIController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MoveRequestId).RequestID = 0xffffffff;
  (this->MyWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TimerHandle_OnInstantFinish).Handle = 0;
  if (local_res8.DebugPtr == (UAIAsyncTaskBlueprintProxy *)0x0) {
LAB_146f29daf:
    local_res8.DebugPtr = (UAIAsyncTaskBlueprintProxy *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)((local_res8.DebugPtr)->_padding_ + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((local_res8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) goto LAB_146f29daf;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8.DebugPtr != (UAIAsyncTaskBlueprintProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  FWeakObjectPtr::operator=(&(this->MyWorld).WeakPtr,(FObjectPtr)&local_res8);
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    return this;
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pUVar3 = FWeakObjectPtr::Get(&(this->MyWorld).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    return this;
  }
  TVar4 = (TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0)
          ((TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0 *)(pUVar3 + 0xb))->DebugPtr;
  if (TVar4.DebugPtr != (UAIAsyncTaskBlueprintProxy *)0x0) {
    pUVar2 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)((TVar4.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar4.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146f29e32;
  }
  TVar4.DebugPtr = (UAIAsyncTaskBlueprintProxy *)0x0;
LAB_146f29e32:
  if (TVar4.DebugPtr != (UAIAsyncTaskBlueprintProxy *)0x0) {
    local_res8.DebugPtr = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UAIAsyncTaskBlueprintProxy>_>
              ((TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_> *)
               &TVar4.DebugPtr[2].OnSuccess.field_0x8,
               (TObjectPtr<UAIAsyncTaskBlueprintProxy> *)&local_res8.ObjectPtr);
  }
  return this;
}

// BeginDestroy @ 146f35160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UAIAsyncTaskBlueprintProxy::BeginDestroy(UAIAsyncTaskBlueprintProxy *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0 local_res8;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->MyWorld).WeakPtr);
  if (pUVar2 == (UObject *)0x0) goto LAB_146f351e6;
  lVar4 = *(longlong *)(pUVar2 + 0xb);
  if (lVar4 == 0) {
LAB_146f351ab:
    lVar4 = 0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146f351ab;
  }
  if (lVar4 != 0) {
    local_res8.DebugPtr = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAIAsyncTaskBlueprintProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_>::RemoveSwap
              ((TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_> *)
               (lVar4 + 0x120),(TObjectPtr<UAIAsyncTaskBlueprintProxy> *)&local_res8.ObjectPtr,
               Default);
  }
LAB_146f351e6:
  UObject::BeginDestroy((UObject *)this);
  return;
}

// OnAtGoal @ 146f5e2e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UAIAsyncTaskBlueprintProxy::OnAtGoal(UAIAsyncTaskBlueprintProxy *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0 local_res8;
  
  FOAISimpleDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess,Success);
  pUVar2 = FWeakObjectPtr::Get(&(this->MyWorld).WeakPtr);
  if (pUVar2 == (UObject *)0x0) {
    return;
  }
  lVar4 = *(longlong *)(pUVar2 + 0xb);
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146f5e338;
  }
  lVar4 = 0;
LAB_146f5e338:
  if (lVar4 != 0) {
    local_res8.DebugPtr = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAIAsyncTaskBlueprintProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_>::RemoveSwap
              ((TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_> *)
               (lVar4 + 0x120),(TObjectPtr<UAIAsyncTaskBlueprintProxy> *)&local_res8.ObjectPtr,
               Default);
  }
  return;
}

// OnMoveCompleted @ 146f5e480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAIAsyncTaskBlueprintProxy::OnMoveCompleted
          (UAIAsyncTaskBlueprintProxy *this,FAIRequestID param_1,Type param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  UObject *pUVar7;
  char *pcVar8;
  UClass *pUVar9;
  longlong lVar10;
  FName local_res8;
  TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0 local_res20;
  
  uVar1 = (this->MoveRequestId).RequestID;
  if (uVar1 == 0xffffffff) {
    return;
  }
  if (param_1.RequestID == 0xffffffff) {
    return;
  }
  if (((param_1.RequestID != uVar1) && (param_1.RequestID != 0)) && (uVar1 != 0)) {
    return;
  }
  bVar6 = FWeakObjectPtr::IsValid(&(this->AIController).WeakPtr,true,false);
  if (!bVar6) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&(this->AIController).WeakPtr);
  pcVar8 = strstr("&UAIAsyncTaskBlueprintProxy::OnMoveCompleted","::");
  pcVar5 = (char *)0x0;
  while (pcVar4 = pcVar8, pcVar4 != (char *)0x0) {
    pcVar8 = strstr(pcVar4 + 1,"::");
    pcVar5 = pcVar4;
  }
  if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_res8,pcVar5 + 2);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7[0x18].field_0x20,
             (UObject *)this,local_res8);
  lVar10 = 0x28;
  if (param_2 != Success) {
    lVar10 = 0x40;
  }
  FOAISimpleDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             ((longlong)&this->_padding_ + lVar10),param_2);
  pUVar7 = FWeakObjectPtr::Get(&(this->MyWorld).WeakPtr);
  if (pUVar7 == (UObject *)0x0) {
    return;
  }
  lVar10 = *(longlong *)(pUVar7 + 0xb);
  if (lVar10 != 0) {
    pUVar9 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) goto LAB_146f5e5e3;
  }
  lVar10 = 0;
LAB_146f5e5e3:
  if (lVar10 != 0) {
    local_res20.DebugPtr = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_>::RemoveSwap
              ((TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_> *)
               (lVar10 + 0x120),(TObjectPtr<UAIAsyncTaskBlueprintProxy> *)&local_res20.ObjectPtr,
               Default);
  }
  return;
}

// OnNoPath @ 146f5e630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UAIAsyncTaskBlueprintProxy::OnNoPath(UAIAsyncTaskBlueprintProxy *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  TObjectPtr<UAIAsyncTaskBlueprintProxy>_u_0 local_res8;
  
  FOAISimpleDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFail,Aborted);
  pUVar2 = FWeakObjectPtr::Get(&(this->MyWorld).WeakPtr);
  if (pUVar2 == (UObject *)0x0) {
    return;
  }
  lVar4 = *(longlong *)(pUVar2 + 0xb);
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146f5e68b;
  }
  lVar4 = 0;
LAB_146f5e68b:
  if (lVar4 != 0) {
    local_res8.DebugPtr = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAIAsyncTaskBlueprintProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_>::RemoveSwap
              ((TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_> *)
               (lVar4 + 0x120),(TObjectPtr<UAIAsyncTaskBlueprintProxy> *)&local_res8.ObjectPtr,
               Default);
  }
  return;
}

