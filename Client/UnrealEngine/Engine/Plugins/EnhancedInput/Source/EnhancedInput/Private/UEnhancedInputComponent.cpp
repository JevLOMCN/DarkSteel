// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 19

// StaticClass @ 14a6b5410

UClass * __cdecl UEnhancedInputComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputComponent",
               &Z_Registration_Info_UClass_UEnhancedInputComponent.InnerSingleton,
               StaticRegisterNativesUEnhancedInputComponent,0x180,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedInputComponent>,
               InternalVTableHelperCtorCaller<UEnhancedInputComponent>,local_res8,
               UInputComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputComponent.InnerSingleton;
}

// UEnhancedInputComponent @ 14a6cb320

UEnhancedInputComponent * __thiscall
UEnhancedInputComponent::UEnhancedInputComponent
          (UEnhancedInputComponent *this,FVTableHelper *param_1)

{
  UInputComponent::UInputComponent((UInputComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->EnhancedActionEventBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnhancedActionEventBindings).ArrayNum = 0;
  (this->EnhancedActionEventBindings).ArrayMax = 0;
  (this->EnhancedActionValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnhancedActionValueBindings).ArrayNum = 0;
  (this->EnhancedActionValueBindings).ArrayMax = 0;
  (this->DebugKeyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugKeyBindings).ArrayNum = 0;
  (this->DebugKeyBindings).ArrayMax = 0;
  this->bShouldFireDelegatesInEditor = false;
  return this;
}

// UEnhancedInputComponent @ 14a6cb390

UEnhancedInputComponent * __thiscall
UEnhancedInputComponent::UEnhancedInputComponent
          (UEnhancedInputComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UInputComponent::UInputComponent((UInputComponent *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  (this->EnhancedActionEventBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnhancedActionEventBindings).ArrayNum = 0;
  (this->EnhancedActionEventBindings).ArrayMax = 0;
  (this->EnhancedActionValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnhancedActionValueBindings).ArrayNum = 0;
  (this->EnhancedActionValueBindings).ArrayMax = 0;
  (this->DebugKeyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugKeyBindings).ArrayNum = 0;
  (this->DebugKeyBindings).ArrayMax = 0;
  this->bShouldFireDelegatesInEditor = false;
  return this;
}

// ~UEnhancedInputComponent @ 14a6cef50

void __thiscall UEnhancedInputComponent::~UEnhancedInputComponent(UEnhancedInputComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_>,int>
            ((TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_> *)
             (this->DebugKeyBindings).AllocatorInstance.Data,(this->DebugKeyBindings).ArrayNum);
  pFVar1 = (this->DebugKeyBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnhancedActionValueBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,int>
            ((TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
              *)(this->EnhancedActionEventBindings).AllocatorInstance.Data,
             (this->EnhancedActionEventBindings).ArrayNum);
  pFVar1 = (this->EnhancedActionEventBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInputComponent::~UInputComponent((UInputComponent *)this);
  return;
}

// BindAction @ 14a6d5400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FEnhancedInputActionEventBinding * __thiscall
UEnhancedInputComponent::BindAction
          (UEnhancedInputComponent *this,UInputAction *param_1,ETriggerEvent param_2,
          UObject *param_3,FName param_4)

{
  TReferenceControllerBase<1> **ppTVar1;
  int *piVar2;
  TArray<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FEnhancedInputActionEventBinding *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  UInputAction *local_res8;
  UObject *local_res20;
  undefined8 *local_68;
  TReferenceControllerBase<1> *local_60;
  FSharedReferencer<1> FStack_58;
  FDestructionSentinel local_50;
  
  puVar8 = ::operator_new(0x38);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *(uint *)(puVar8 + 1) = GInputBindingHandle;
    *puVar8 = &___7FEnhancedInputActionEventBinding__6B_;
    GInputBindingHandle = GInputBindingHandle + 1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[2] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 2),(FObjectPtr)&local_res8);
    *(byte *)((longlong)puVar8 + 0x19) = *(byte *)((longlong)puVar8 + 0x19) & 0xfe;
    *puVar8 = &
              ___7__FEnhancedInputActionEventDelegateBinding_VFEnhancedInputActionHandlerDynamicSignature____6B_
    ;
    *(ETriggerEvent *)(puVar8 + 3) = param_2;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *(undefined1 *)(puVar8 + 6) = 0;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  ppTVar1 = (TReferenceControllerBase<1> **)(puVar8 + 4);
  if ((TScriptDelegate<FNotThreadSafeDelegateMode> *)puVar8[4] !=
      (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    TScriptDelegate<FNotThreadSafeDelegateMode>::Unbind
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)puVar8[4]);
  }
  FStack_58.ReferenceController = ::operator_new(0x28);
  if (FStack_58.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_60 = ___xmm_00000000000000000000000000000010;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_58.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_58.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = FStack_58.ReferenceController + 1;
    (FStack_58.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_58.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFEnhancedInputActionHandlerDynamicSignature___00_SharedPointerInternals__6B_
    ;
    FStack_58.ReferenceController[1]._padding_ = 0;
    FStack_58.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_58.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_58.ReferenceController[2]._padding_ = 0;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FEnhancedInputActionEventBinding *)(*pcVar5)();
        return pFVar9;
      }
    }
    LOCK();
    (FStack_58.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_58.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = FStack_58.ReferenceController;
    local_60 = pTVar11;
  }
  if (ppTVar1 != &local_60) {
    *ppTVar1 = pTVar11;
    local_60 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar8 + 5),&FStack_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (*ppTVar1 == (TReferenceControllerBase<1> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FEnhancedInputActionEventBinding *)(*pcVar5)();
      return pFVar9;
    }
  }
  pTVar10 = *ppTVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
             (FWriteAccessScope *)&local_50);
  local_res20 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&pTVar10->SharedReferenceCount,(FObjectPtr)&local_res20);
  ((FMRSWRecursiveAccessDetector *)&pTVar10[1]._padding_)->State = (atomic<unsigned___int64>)param_4
  ;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar3 = &this->EnhancedActionEventBindings;
  *(bool *)(puVar8 + 6) = this->bShouldFireDelegatesInEditor;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  local_68 = puVar8;
  if ((pFVar4 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar4 + (longlong)(this->EnhancedActionEventBindings).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FEnhancedInputActionEventBinding *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar7 = (this->EnhancedActionEventBindings).ArrayNum;
  piVar2 = &(this->EnhancedActionEventBindings).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->EnhancedActionEventBindings).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8;
  *(undefined8 **)pFVar4 = local_68;
  return *(FEnhancedInputActionEventBinding **)pFVar4;
}

// BindDebugKey @ 14a6d5750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputDebugKeyBinding * __thiscall
UEnhancedInputComponent::BindDebugKey
          (UEnhancedInputComponent *this,FInputChord *param_1,EInputEvent param_2,UObject *param_3,
          FName param_4,bool param_5)

{
  TEnhancedInputUnifiedDelegate<FInputDebugKeyHandlerDynamicSignature> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *this_01;
  FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *pFVar7;
  FInputDebugKeyBinding *pFVar8;
  FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *pFVar9;
  FInputDebugKeyHandlerDynamicSignature *pFVar10;
  UObject *local_res8;
  longlong *local_78;
  FSharedReferencer<1> FStack_70;
  FDestructionSentinel local_68;
  FInputChord local_50;
  
  this_01 = ::operator_new(0x50);
  pFVar9 = (FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)0x0;
  pFVar7 = pFVar9;
  if (this_01 != (FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)0x0) {
    local_50.Key.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    local_50.Key.KeyName = (param_1->Key).KeyName;
    local_50.Key.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
    if (local_50.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&param_1->field_0x18;
    local_50._24_4_ = (ZPULL(uVar3,0,1) ^ local_50._24_4_) & 1 ^ local_50._24_4_;
    local_50._24_4_ = (local_50._24_4_ ^ uVar3) & 2 ^ local_50._24_4_;
    local_50._24_4_ = (local_50._24_4_ ^ uVar3) & 4 ^ local_50._24_4_;
    local_50._24_4_ = (local_50._24_4_ ^ uVar3) & 8 ^ local_50._24_4_;
    pFVar7 = FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature>::
             FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature>
                       (this_01,&local_50,param_2,param_5);
  }
  this_00 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(pFVar7->Delegate).Delegate.Object;
  pTVar1 = &pFVar7->Delegate;
  if (this_00 != (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    TScriptDelegate<FNotThreadSafeDelegateMode>::Unbind(this_00);
  }
  FStack_70.ReferenceController = ::operator_new(0x28);
  if ((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
      FStack_70.ReferenceController ==
      (FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)0x0) {
    pFVar10 = (FInputDebugKeyHandlerDynamicSignature *)&DAT_00000010;
    local_78 = ___xmm_00000000000000000000000000000010;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)
     &((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
      FStack_70.ReferenceController)->_padding_ = 1;
    pFVar10 = (FInputDebugKeyHandlerDynamicSignature *)
              &((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
               FStack_70.ReferenceController)->_padding_;
    *(undefined4 *)
     ((longlong)
      &((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
       FStack_70.ReferenceController)->_padding_ + 4) = 1;
    ((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
    FStack_70.ReferenceController)->_padding_ = 0;
    ((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
    FStack_70.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInputDebugKeyHandlerDynamicSignature___00_SharedPointerInternals__6B_
    ;
    ((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
    FStack_70.ReferenceController)->_padding_ = 0;
    ((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
    FStack_70.ReferenceController)->_padding_ = 0;
    if ((pFVar10 == (FInputDebugKeyHandlerDynamicSignature *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FInputDebugKeyBinding *)(*pcVar4)();
      return pFVar8;
    }
    LOCK();
    *(int *)&((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
             FStack_70.ReferenceController)->_padding_ =
         (int)((FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
              FStack_70.ReferenceController)->_padding_ + 1;
    UNLOCK();
    pFVar9 = (FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> *)
             FStack_70.ReferenceController;
    local_78 = (longlong *)pFVar10;
  }
  if (pTVar1 != (TEnhancedInputUnifiedDelegate<FInputDebugKeyHandlerDynamicSignature> *)&local_78) {
    (pTVar1->Delegate).Object = pFVar10;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar7->Delegate).Delegate.SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  if (((pTVar1->Delegate).Object == (FInputDebugKeyHandlerDynamicSignature *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FInputDebugKeyBinding *)(*pcVar4)();
    return pFVar8;
  }
  pFVar10 = (pTVar1->Delegate).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar10,
             (FWriteAccessScope *)&local_68);
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar10->field_0x8,(FObjectPtr)&local_res8);
  *(uint *)&pFVar10->field_0x10 = param_4.ComparisonIndex.Value;
  *(uint *)&pFVar10->field_0x14 = param_4.Number;
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  piVar2 = &(this->DebugKeyBindings).ArrayMax;
  (pFVar7->Delegate).bShouldFireWithEditorScriptGuard = this->bShouldFireDelegatesInEditor;
  iVar6 = (this->DebugKeyBindings).ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DebugKeyBindings).AllocatorInstance,piVar2);
  }
  (this->DebugKeyBindings).ArrayNum = iVar6 + 1;
  *(FInputDebugKeyDelegateBinding<FInputDebugKeyHandlerDynamicSignature> **)
   ((this->DebugKeyBindings).AllocatorInstance.Data + (longlong)iVar6 * 8) = pFVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  return (FInputDebugKeyBinding *)pFVar7;
}

// ClearActionBindings @ 14a6d6410

void __thiscall UEnhancedInputComponent::ClearActionBindings(UEnhancedInputComponent *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  UInputComponent::ClearActionBindings((UInputComponent *)this);
  pFVar3 = (this->EnhancedActionEventBindings).AllocatorInstance.Data;
  piVar1 = &(this->EnhancedActionEventBindings).ArrayMax;
  iVar2 = (this->EnhancedActionEventBindings).ArrayNum;
  if (-1 < (this->EnhancedActionEventBindings).ArrayMax) {
    DestructItems<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,int>
              ((TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
                *)pFVar3,iVar2);
    (this->EnhancedActionEventBindings).ArrayNum = 0;
    return;
  }
  DestructItems<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,int>
            ((TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
              *)pFVar3,iVar2);
  (this->EnhancedActionEventBindings).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EnhancedActionEventBindings).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearBindingsForObject @ 14a6d6610

void __thiscall
UEnhancedInputComponent::ClearBindingsForObject(UEnhancedInputComponent *this,UObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  UInputComponent::ClearBindingsForObject((UInputComponent *)this,param_1);
  uVar6 = (this->EnhancedActionEventBindings).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->EnhancedActionEventBindings).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->EnhancedActionEventBindings).AllocatorInstance.Data + lVar7);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
      if (cVar4 != '\0') {
        uVar5 = 0;
        if ((int)uVar6 < (this->EnhancedActionEventBindings).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->EnhancedActionEventBindings,uVar6);
      }
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// GetBoundActionValue @ 14a6de910

FInputActionValue * __thiscall
UEnhancedInputComponent::GetBoundActionValue
          (UEnhancedInputComponent *this,FInputActionValue *__return_storage_ptr__,
          UInputAction *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EInputActionValueType EVar6;
  UInputAction *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EnhancedActionValueBindings).ArrayNum;
  pFVar8 = (this->EnhancedActionValueBindings).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->EnhancedActionValueBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FEnhancedInputActionValueBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (pFVar8 == pFVar9) break;
    pUVar7 = (UInputAction *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar8 + 0x10));
    if (pUVar7 == param_1) {
      dVar2 = *(double *)(pFVar8 + 0x20);
      dVar3 = *(double *)(pFVar8 + 0x28);
      uVar4 = *(undefined8 *)(pFVar8 + 0x30);
      (__return_storage_ptr__->Value).field0_0x0._s_0.X = *(double *)(pFVar8 + 0x18);
      (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar2;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar3;
      *(undefined8 *)&__return_storage_ptr__->ValueType = uVar4;
      return __return_storage_ptr__;
    }
    pFVar8 = pFVar8 + 0x38;
  }
  if (param_1 == (UInputAction *)0x0) {
    EVar6 = Axis3D;
  }
  else {
    EVar6 = param_1->ValueType;
  }
  __return_storage_ptr__->ValueType = EVar6;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = (double)uVar4;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((EVar6 == Boolean) || (EVar6 == Axis1D)) {
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = 0.0;
  }
  else if (EVar6 != Axis2D) {
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a6e0730

UClass * __cdecl UEnhancedInputComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputComponent",
               &Z_Registration_Info_UClass_UEnhancedInputComponent.InnerSingleton,
               StaticRegisterNativesUEnhancedInputComponent,0x180,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedInputComponent>,
               InternalVTableHelperCtorCaller<UEnhancedInputComponent>,local_res8,
               UInputComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputComponent.InnerSingleton;
}

// HasBindings @ 14a6e3ac0

bool __thiscall UEnhancedInputComponent::HasBindings(UEnhancedInputComponent *this)

{
  bool bVar1;
  
  if ((((this->EnhancedActionEventBindings).ArrayNum < 1) &&
      ((this->EnhancedActionValueBindings).ArrayNum < 1)) && ((this->DebugKeyBindings).ArrayNum < 1)
     ) {
    bVar1 = UInputComponent::HasBindings((UInputComponent *)this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// RemoveActionEventBinding @ 14a6f2530

bool __thiscall
UEnhancedInputComponent::RemoveActionEventBinding(UEnhancedInputComponent *this,int param_1)

{
  bool bVar1;
  
  bVar1 = RemoveBindingByIndex<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>_>
                    (&this->EnhancedActionEventBindings,param_1);
  return bVar1;
}

// RemoveActionValueBinding @ 14a6f2550

bool __thiscall
UEnhancedInputComponent::RemoveActionValueBinding(UEnhancedInputComponent *this,int param_1)

{
  bool bVar1;
  
  bVar1 = RemoveBindingByIndex<FEnhancedInputActionValueBinding>
                    (&this->EnhancedActionValueBindings,param_1);
  return bVar1;
}

// RemoveBinding @ 14a6f2870

bool __thiscall
UEnhancedInputComponent::RemoveBinding(UEnhancedInputComponent *this,FInputBindingHandle *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  uVar1 = param_1->Handle;
  pFVar2 = (this->EnhancedActionEventBindings).AllocatorInstance.Data;
  for (pFVar4 = pFVar2;
      pFVar4 != pFVar2 + (longlong)(this->EnhancedActionEventBindings).ArrayNum * 8;
      pFVar4 = pFVar4 + 8) {
    if (*(uint *)(*(longlong *)pFVar4 + 8) == uVar1) {
      iVar5 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 3);
      if ((iVar5 != -1) &&
         (bVar3 = RemoveBindingByIndex<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>_>
                            (&this->EnhancedActionEventBindings,iVar5), bVar3)) {
        return true;
      }
      break;
    }
  }
  pFVar2 = (this->EnhancedActionValueBindings).AllocatorInstance.Data;
  pFVar4 = pFVar2;
  do {
    if (pFVar4 == pFVar2 + (longlong)(this->EnhancedActionValueBindings).ArrayNum * 0x38) {
LAB_14a6f2933:
      pFVar2 = (this->DebugKeyBindings).AllocatorInstance.Data;
      pFVar4 = pFVar2;
      while( true ) {
        if (pFVar4 == pFVar2 + (longlong)(this->DebugKeyBindings).ArrayNum * 8) {
          return false;
        }
        if (*(uint *)(*(longlong *)pFVar4 + 8) == uVar1) break;
        pFVar4 = pFVar4 + 8;
      }
      iVar5 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 3);
      if (iVar5 == -1) {
        return false;
      }
      bVar3 = RemoveBindingByIndex<TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_>_>
                        (&this->DebugKeyBindings,iVar5);
      if (!bVar3) {
        return false;
      }
      return true;
    }
    if (*(uint *)(pFVar4 + 8) == uVar1) {
      iVar5 = (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x38);
      if ((iVar5 != -1) &&
         (bVar3 = RemoveBindingByIndex<FEnhancedInputActionValueBinding>
                            (&this->EnhancedActionValueBindings,iVar5), bVar3)) {
        return true;
      }
      goto LAB_14a6f2933;
    }
    pFVar4 = pFVar4 + 0x38;
  } while( true );
}

// RemoveBindingByHandle @ 14a6f29a0

bool __thiscall
UEnhancedInputComponent::RemoveBindingByHandle(UEnhancedInputComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pFVar1 = (this->EnhancedActionEventBindings).AllocatorInstance.Data;
  for (pFVar3 = pFVar1;
      pFVar3 != pFVar1 + (longlong)(this->EnhancedActionEventBindings).ArrayNum * 8;
      pFVar3 = pFVar3 + 8) {
    if (*(uint *)(*(longlong *)pFVar3 + 8) == param_1) {
      iVar4 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      if ((iVar4 != -1) &&
         (bVar2 = RemoveBindingByIndex<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>_>
                            (&this->EnhancedActionEventBindings,iVar4), bVar2)) {
        return true;
      }
      break;
    }
  }
  pFVar1 = (this->EnhancedActionValueBindings).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  do {
    if (pFVar3 == pFVar1 + (longlong)(this->EnhancedActionValueBindings).ArrayNum * 0x38) {
LAB_14a6f2a63:
      pFVar1 = (this->DebugKeyBindings).AllocatorInstance.Data;
      pFVar3 = pFVar1;
      while( true ) {
        if (pFVar3 == pFVar1 + (longlong)(this->DebugKeyBindings).ArrayNum * 8) {
          return false;
        }
        if (*(uint *)(*(longlong *)pFVar3 + 8) == param_1) break;
        pFVar3 = pFVar3 + 8;
      }
      iVar4 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      if (iVar4 == -1) {
        return false;
      }
      bVar2 = RemoveBindingByIndex<TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_>_>
                        (&this->DebugKeyBindings,iVar4);
      if (!bVar2) {
        return false;
      }
      return true;
    }
    if (*(uint *)(pFVar3 + 8) == param_1) {
      iVar4 = (int)(((longlong)pFVar3 - (longlong)pFVar1) / 0x38);
      if ((iVar4 != -1) &&
         (bVar2 = RemoveBindingByIndex<FEnhancedInputActionValueBinding>
                            (&this->EnhancedActionValueBindings,iVar4), bVar2)) {
        return true;
      }
      goto LAB_14a6f2a63;
    }
    pFVar3 = pFVar3 + 0x38;
  } while( true );
}

// RemoveDebugKeyBinding @ 14a6f2d00

bool __thiscall
UEnhancedInputComponent::RemoveDebugKeyBinding(UEnhancedInputComponent *this,int param_1)

{
  bool bVar1;
  
  bVar1 = RemoveBindingByIndex<TUniquePtr<FInputDebugKeyBinding,TDefaultDelete<FInputDebugKeyBinding>_>_>
                    (&this->DebugKeyBindings,param_1);
  return bVar1;
}

// SetShouldFireDelegatesInEditor @ 14a6f65e0

void __thiscall
UEnhancedInputComponent::SetShouldFireDelegatesInEditor(UEnhancedInputComponent *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  this->bShouldFireDelegatesInEditor = param_1;
  cVar3 = (**(code **)(this->_padding_ + 0x500))();
  if (cVar3 != '\0') {
    pFVar4 = (this->EnhancedActionEventBindings).AllocatorInstance.Data;
    iVar2 = (this->EnhancedActionEventBindings).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->EnhancedActionEventBindings).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar4 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar4 + 0x18))
                (*(longlong **)pFVar4,this->bShouldFireDelegatesInEditor);
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// StaticRegisterNativesUEnhancedInputComponent @ 14a6fb390

void __cdecl UEnhancedInputComponent::StaticRegisterNativesUEnhancedInputComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UEnhancedInputComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBoundActionValue @ 14a704510

void __cdecl
UEnhancedInputComponent::execGetBoundActionValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  char cVar4;
  UObject *pUVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_res8 [8];
  UObject *local_res10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res10 = (UObject *)0x0;
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
  iVar1 = *(int *)&param_1[8].field_0x20;
  lVar6 = *(longlong *)&param_1[8].field_0x18;
  lVar7 = (longlong)iVar1 * 0x38 + lVar6;
  while( true ) {
    if (*(int *)&param_1[8].field_0x20 != iVar1) {
      `TCheckedPointerIterator<FEnhancedInputActionValueBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar6 == lVar7) break;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar6 + 0x10));
    if (pUVar5 == pUVar3) {
      local_38 = *(undefined4 *)(lVar6 + 0x28);
      uStack_34 = *(undefined4 *)(lVar6 + 0x2c);
      uStack_30 = *(undefined4 *)(lVar6 + 0x30);
      uStack_2c = *(undefined4 *)(lVar6 + 0x34);
      uVar8 = *(undefined4 *)(lVar6 + 0x18);
      uVar9 = *(undefined4 *)(lVar6 + 0x1c);
      uVar10 = *(undefined4 *)(lVar6 + 0x20);
      uVar11 = *(undefined4 *)(lVar6 + 0x24);
LAB_14a704624:
      *(undefined4 *)param_3 = uVar8;
      *(undefined4 *)((longlong)param_3 + 4) = uVar9;
      *(undefined4 *)((longlong)param_3 + 8) = uVar10;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar11;
      *(undefined4 *)((longlong)param_3 + 0x10) = local_38;
      *(undefined4 *)((longlong)param_3 + 0x14) = uStack_34;
      *(undefined4 *)((longlong)param_3 + 0x18) = uStack_30;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_2c;
      return;
    }
    lVar6 = lVar6 + 0x38;
  }
  if (pUVar3 == (UObject *)0x0) {
    cVar4 = '\x03';
  }
  else {
    cVar4 = pUVar3[1].field_0x20;
  }
  uStack_30 = CONCAT31(uStack_30._1_3_,cVar4);
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  if ((cVar4 == '\0') || (cVar4 == '\x01')) {
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (cVar4 != '\x02') {
      local_38 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uStack_34 = (undefined4)
                  ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      goto LAB_14a704624;
    }
  }
  local_38 = 0;
  uStack_34 = 0;
  goto LAB_14a704624;
}

