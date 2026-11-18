// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 48

// StaticClass @ 14788c320

UClass * __cdecl UInputComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInputComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputComponent",
               &Z_Registration_Info_UClass_UInputComponent.InnerSingleton,
               StaticRegisterNativesUInputComponent,0x148,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UInputComponent>,InternalVTableHelperCtorCaller<UInputComponent>,
               aFStackX_8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputComponent.InnerSingleton;
}

// UInputComponent @ 1478a9160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInputComponent * __thiscall
UInputComponent::UInputComponent(UInputComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->KeyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyBindings).ArrayNum = 0;
  (this->KeyBindings).ArrayMax = 0;
  (this->TouchBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TouchBindings).ArrayNum = 0;
  (this->TouchBindings).ArrayMax = 0;
  (this->AxisBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisBindings).ArrayNum = 0;
  (this->AxisBindings).ArrayMax = 0;
  (this->AxisKeyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisKeyBindings).ArrayNum = 0;
  (this->AxisKeyBindings).ArrayMax = 0;
  (this->VectorAxisBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorAxisBindings).ArrayNum = 0;
  (this->VectorAxisBindings).ArrayMax = 0;
  (this->GestureBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GestureBindings).ArrayNum = 0;
  (this->GestureBindings).ArrayMax = 0;
  (this->ActionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionBindings).ArrayNum = 0;
  (this->ActionBindings).ArrayMax = 0;
  (this->CachedKeyToActionInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedKeyToActionInfo).ArrayNum = 0;
  (this->CachedKeyToActionInfo).ArrayMax = 0;
  return this;
}

// UInputComponent @ 1478a9210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UInputComponent * __thiscall
UInputComponent::UInputComponent(UInputComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->bBlockInput = '\0';
  (this->KeyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyBindings).ArrayNum = 0;
  (this->KeyBindings).ArrayMax = 0;
  (this->TouchBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TouchBindings).ArrayNum = 0;
  (this->TouchBindings).ArrayMax = 0;
  (this->AxisBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisBindings).ArrayNum = 0;
  (this->AxisBindings).ArrayMax = 0;
  (this->AxisKeyBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisKeyBindings).ArrayNum = 0;
  (this->AxisKeyBindings).ArrayMax = 0;
  (this->VectorAxisBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorAxisBindings).ArrayNum = 0;
  (this->VectorAxisBindings).ArrayMax = 0;
  (this->GestureBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GestureBindings).ArrayNum = 0;
  (this->GestureBindings).ArrayMax = 0;
  (this->ActionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionBindings).ArrayNum = 0;
  (this->ActionBindings).ArrayMax = 0;
  (this->CachedKeyToActionInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedKeyToActionInfo).ArrayNum = 0;
  (this->CachedKeyToActionInfo).ArrayMax = 0;
  return this;
}

// ~UInputComponent @ 1478abca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInputComponent::~UInputComponent(UInputComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<FCachedKeyToActionInfo,int>
            ((FCachedKeyToActionInfo *)(this->CachedKeyToActionInfo).AllocatorInstance.Data,
             (this->CachedKeyToActionInfo).ArrayNum);
  pFVar1 = (this->CachedKeyToActionInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FInputActionBinding,1>,int>
            ((TSharedPtr<FInputActionBinding,1> *)(this->ActionBindings).AllocatorInstance.Data,
             (this->ActionBindings).ArrayNum);
  pFVar1 = (this->ActionBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputGestureBinding,int>
            ((FInputGestureBinding *)(this->GestureBindings).AllocatorInstance.Data,
             (this->GestureBindings).ArrayNum);
  pFVar1 = (this->GestureBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputVectorAxisBinding,int>
            ((FInputVectorAxisBinding *)(this->VectorAxisBindings).AllocatorInstance.Data,
             (this->VectorAxisBindings).ArrayNum);
  pFVar1 = (this->VectorAxisBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputAxisKeyBinding,int>
            ((FInputAxisKeyBinding *)(this->AxisKeyBindings).AllocatorInstance.Data,
             (this->AxisKeyBindings).ArrayNum);
  pFVar1 = (this->AxisKeyBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputAxisBinding,int>
            ((FInputAxisBinding *)(this->AxisBindings).AllocatorInstance.Data,
             (this->AxisBindings).ArrayNum);
  pFVar1 = (this->AxisBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputTouchBinding,int>
            ((FInputTouchBinding *)(this->TouchBindings).AllocatorInstance.Data,
             (this->TouchBindings).ArrayNum);
  pFVar1 = (this->TouchBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputKeyBinding,int>
            ((FInputKeyBinding *)(this->KeyBindings).AllocatorInstance.Data,
             (this->KeyBindings).ArrayNum);
  pFVar1 = (this->KeyBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddActionBinding @ 1478b1970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputActionBinding * __thiscall
UInputComponent::AddActionBinding(UInputComponent *this,FInputActionBinding *param_1)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  byte bVar4;
  uchar uVar5;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *pTVar6;
  FInputActionHandlerDynamicSignature *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TReferenceControllerBase<1> *pTVar12;
  FInputActionBinding *pFVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  LogDeprecatedBindingWarning(param_1->ActionName);
  pTVar3 = &this->ActionBindings;
  pTVar12 = ::operator_new(0x58);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFInputActionBinding___00_SharedPointerInternals__6B_;
    bVar4 = *(byte *)((longlong)&pTVar12[1]._padding_ + 1);
    *(char *)&pTVar12[1]._padding_ = param_1->_padding_;
    pbVar1 = (byte *)((longlong)&pTVar12[1]._padding_ + 1);
    *pbVar1 = *pbVar1 ^ (bVar4 ^ param_1->bPaired) & 1;
    *(uchar *)((longlong)&pTVar12[1]._padding_ + 2) = (param_1->KeyEvent).Value;
    *(FName *)((longlong)&pTVar12[1]._padding_ + 4) = param_1->ActionName;
    pTVar12[1].WeakReferenceCount = (atomic<int>)param_1->Handle;
    pTVar12[2]._padding_ = (longlong)(param_1->ActionDelegate).FuncDelegate.Object;
    *(TReferenceControllerBase<1> **)&pTVar12[2].SharedReferenceCount =
         (param_1->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController;
    pTVar6 = (param_1->ActionDelegate).FuncDelegateWithKey.Object;
    (param_1->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->ActionDelegate).FuncDelegate.Object =
         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
    pTVar12[3]._padding_ = (longlong)pTVar6;
    *(TReferenceControllerBase<1> **)&pTVar12[3].SharedReferenceCount =
         (param_1->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
    pFVar7 = (param_1->ActionDelegate).FuncDynDelegate.Object;
    (param_1->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->ActionDelegate).FuncDelegateWithKey.Object =
         (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
    pTVar12[4]._padding_ = (longlong)pFVar7;
    *(TReferenceControllerBase<1> **)&pTVar12[4].SharedReferenceCount =
         (param_1->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController;
    (param_1->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_1->ActionDelegate).FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
    *(EBoundDelegate *)&pTVar12[5]._padding_ = (param_1->ActionDelegate).BoundDelegateType;
    if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FInputActionBinding *)(*pcVar9)();
      return pFVar13;
    }
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = pTVar12 + 1;
    pTStack_30 = pTVar12;
  }
  pFVar17 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar17 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar17 + (longlong)(this->ActionBindings).ArrayMax * 0x10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar13 = (FInputActionBinding *)(*pcVar9)();
    return pFVar13;
  }
  iVar11 = (this->ActionBindings).ArrayNum;
  piVar2 = &(this->ActionBindings).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->ActionBindings).ArrayNum = iVar11 + 1;
  pFVar17 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar17 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar17 + 8) = pTStack_30;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  iVar11 = (this->ActionBindings).ArrayNum;
  uVar14 = iVar11 - 1;
  uVar15 = 0;
  if ((int)uVar14 < iVar11) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar13 = (FInputActionBinding *)(*pcVar9)();
    return pFVar13;
  }
  pFVar13 = *(FInputActionBinding **)
             ((pTVar3->AllocatorInstance).Data +
             (longlong)(this->ActionBindings).ArrayNum * 0x10 + -0x10);
  pFVar13->Handle = GHandle;
  GHandle = GHandle + 1;
  uVar5 = (pFVar13->KeyEvent).Value;
  if ((uVar5 == '\0') || (uVar5 == '\x01')) {
    uVar15 = (this->ActionBindings).ArrayNum - 2;
    if (-1 < (int)uVar15) {
      lVar18 = (longlong)(int)uVar15 << 4;
      do {
        uVar14 = 0;
        if ((int)uVar15 < (this->ActionBindings).ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar13 = (FInputActionBinding *)(*pcVar9)();
          return pFVar13;
        }
        lVar8 = *(longlong *)((pTVar3->AllocatorInstance).Data + lVar18);
        if (*(FName *)(lVar8 + 4) == pFVar13->ActionName) {
          if ((*(byte *)(lVar8 + 1) & 1) != 0) {
            pFVar13->bPaired = '\x01';
            break;
          }
          if ((bool)*(char *)(lVar8 + 2) == (uVar5 == '\0')) {
            *(byte *)(lVar8 + 1) = *(byte *)(lVar8 + 1) | 1;
            pFVar13->bPaired = '\x01';
          }
        }
        lVar18 = lVar18 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
  }
  iVar11 = (this->CachedKeyToActionInfo).ArrayNum;
  pFVar17 = (this->CachedKeyToActionInfo).AllocatorInstance.Data;
  pFVar16 = pFVar17 + (longlong)iVar11 * 0x70;
  while( true ) {
    if ((this->CachedKeyToActionInfo).ArrayNum != iVar11) {
      `TCheckedPointerIterator<FCachedKeyToActionInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar17 == pFVar16) break;
    *(undefined4 *)(pFVar17 + 8) = 0;
    pFVar17 = pFVar17 + 0x70;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController);
  return pFVar13;
}

// ClearActionBindings @ 1478b8db0

void __thiscall UInputComponent::ClearActionBindings(UInputComponent *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FInputActionBinding,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->CachedKeyToActionInfo).ArrayNum;
  pFVar4 = (this->CachedKeyToActionInfo).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x70;
  while( true ) {
    if ((this->CachedKeyToActionInfo).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCachedKeyToActionInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    *(undefined4 *)(pFVar4 + 8) = 0;
    pFVar4 = pFVar4 + 0x70;
  }
  piVar1 = &(this->ActionBindings).ArrayMax;
  pTVar3 = (TSharedPtr<FInputActionBinding,1> *)(this->ActionBindings).AllocatorInstance.Data;
  iVar2 = (this->ActionBindings).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FInputActionBinding,1>,int>(pTVar3,iVar2);
    (this->ActionBindings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ActionBindings).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FInputActionBinding,1>,int>(pTVar3,iVar2);
    (this->ActionBindings).ArrayNum = 0;
  }
  return;
}

// ClearAxisBindings @ 1478b8e70

void __thiscall UInputComponent::ClearAxisBindings(UInputComponent *this)

{
  int *piVar1;
  int iVar2;
  FInputAxisBinding *pFVar3;
  
  piVar1 = &(this->AxisBindings).ArrayMax;
  pFVar3 = (FInputAxisBinding *)(this->AxisBindings).AllocatorInstance.Data;
  iVar2 = (this->AxisBindings).ArrayNum;
  if (-1 < (this->AxisBindings).ArrayMax) {
    DestructItems<FInputAxisBinding,int>(pFVar3,iVar2);
    (this->AxisBindings).ArrayNum = 0;
    return;
  }
  DestructItems<FInputAxisBinding,int>(pFVar3,iVar2);
  (this->AxisBindings).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->AxisBindings).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearBindingValues @ 1478b90c0

void __thiscall UInputComponent::ClearBindingValues(UInputComponent *this)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AxisBindings).ArrayNum;
  pFVar3 = (this->AxisBindings).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->AxisBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputAxisBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar5) break;
    *(undefined4 *)(pFVar3 + 0x30) = 0;
    pFVar3 = pFVar3 + 0x38;
  }
  iVar1 = (this->AxisKeyBindings).ArrayNum;
  pFVar3 = (this->AxisKeyBindings).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->AxisKeyBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputAxisKeyBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    *(undefined4 *)(pFVar3 + 4) = 0;
    pFVar3 = pFVar3 + 0x40;
  }
  pFVar5 = (this->VectorAxisBindings).AllocatorInstance.Data;
  iVar1 = (this->VectorAxisBindings).ArrayNum;
  pFVar3 = pFVar5 + 8;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->VectorAxisBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputVectorAxisBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pFVar5 == pFVar4) break;
    pFVar5 = pFVar5 + 0x58;
    *(double *)pFVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar3 + 8) = uVar2;
    *(double *)(pFVar3 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pFVar3 = pFVar3 + 0x58;
  }
  iVar1 = (this->GestureBindings).ArrayNum;
  pFVar3 = (this->GestureBindings).AllocatorInstance.Data;
  pFVar5 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->GestureBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputGestureBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar5) break;
    *(undefined4 *)(pFVar3 + 4) = 0;
    pFVar3 = pFVar3 + 0x40;
  }
  return;
}

// ClearBindingsForObject @ 1478b9210

void __thiscall UInputComponent::ClearBindingsForObject(UInputComponent *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId115,"UInputComponent::ClearBindingsForObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InputComponent.cpp"
               ,0x73);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId115);
  }
  uVar6 = (this->CachedKeyToActionInfo).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 0x70;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->CachedKeyToActionInfo).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->CachedKeyToActionInfo).AllocatorInstance.Data + lVar7));
      if (pUVar4 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UObject_NoRegister();
        pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar4,pUVar5);
        if (pUVar4 == param_1) {
          uVar3 = 0;
          if ((int)uVar6 < (this->CachedKeyToActionInfo).ArrayNum) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->CachedKeyToActionInfo,uVar6);
        }
      }
      lVar7 = lVar7 + -0x70;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ConditionalBuildKeyMap @ 1478be7c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UInputComponent::ConditionalBuildKeyMap(UInputComponent *this,UPlayerInput *param_1)

{
  int *piVar1;
  TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_> *this_00;
  FWeakObjectPtr FVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  char *pcVar13;
  longlong *plVar14;
  TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FWeakObjectPtr FVar20;
  int iVar21;
  char *pcVar22;
  FWeakObjectPtr FVar23;
  uint uVar24;
  FWeakObjectPtr *pFVar25;
  bool bVar26;
  undefined1 local_res20 [8];
  undefined1 local_138;
  undefined1 local_137 [7];
  FWeakObjectPtr *local_130;
  uint local_128;
  uint local_124;
  FWeakObjectPtr local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  int local_108;
  int local_104;
  UPlayerInput *local_100;
  FName local_f8;
  FWeakObjectPtr *local_f0;
  longlong local_e8;
  FWeakObjectPtr *local_e0;
  int iStack_d8;
  uint uStack_d4;
  FWeakObjectPtr local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  FWeakObjectPtr *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  code *local_78;
  longlong lStack_70;
  undefined4 local_4c;
  
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId29,"UInputComponent::ConditionalBuildKeyMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InputComponent.cpp"
               ,0x1d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId29);
  }
  if (param_1 == (UPlayerInput *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_185505478669762529>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InputComponent.cpp"
                       ,0x1f,"PlayerInput");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto LAB_1478bf07b;
  }
  this_00 = &this->CachedKeyToActionInfo;
  uVar19 = (this->CachedKeyToActionInfo).ArrayNum;
  uVar10 = 1;
  while (uVar19 = uVar19 - 1, -1 < (int)uVar19) {
    uVar24 = 0;
    if ((int)uVar19 < (this->CachedKeyToActionInfo).ArrayNum) {
      uVar24 = ~uVar19 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar25 = (FWeakObjectPtr *)((this_00->AllocatorInstance).Data + (ulonglong)uVar19 * 0x70);
    local_130 = pFVar25;
    bVar8 = TWeakObjectPtr<UPlayerInput,FWeakObjectPtr>::UEOpEquals<UPlayerInput,bool>
                      ((TWeakObjectPtr<UPlayerInput,FWeakObjectPtr> *)pFVar25,param_1);
    if (bVar8) {
      if (pFVar25[1].ObjectIndex == param_1->KeyMapBuildIndex) goto LAB_1478bf07b;
      goto LAB_1478beb4d;
    }
    bVar8 = TWeakObjectPtr<UPlayerInput,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPlayerInput,FWeakObjectPtr> *)pFVar25,(void *)0x0);
    if (bVar8) {
      uVar24 = 0;
      if ((int)uVar19 < (this->CachedKeyToActionInfo).ArrayNum) {
        uVar24 = ~uVar19 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar19);
    }
  }
  iVar9 = (this->CachedKeyToActionInfo).ArrayNum;
  piVar1 = &(this->CachedKeyToActionInfo).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&this_00->AllocatorInstance,piVar1);
    (this->CachedKeyToActionInfo).ArrayNum = iVar9;
  }
  (this->CachedKeyToActionInfo).ArrayNum = iVar9 + 1;
  DefaultConstructItems<FCachedKeyToActionInfo,int>
            ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x70,1);
  iVar9 = (this->CachedKeyToActionInfo).ArrayNum;
  uVar24 = iVar9 - 1;
  uVar19 = 0;
  if ((int)uVar24 < iVar9) {
    uVar19 = ~uVar24 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar25 = (FWeakObjectPtr *)
            ((this_00->AllocatorInstance).Data +
            (longlong)((this->CachedKeyToActionInfo).ArrayNum + -1) * 0x70);
  local_130 = pFVar25;
  local_100 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(pFVar25,(FObjectPtr)&local_100);
  pUVar11 = Z_Construct_UClass_AActor_NoRegister();
  pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar11);
  if (pUVar12 != (UObject *)0x0) {
    pcVar13 = strstr("&UInputComponent::OnInputOwnerEndPlayed","::");
    if (pcVar13 == (char *)0x0) {
LAB_1478bead6:
      pcVar22 = &DAT_00000002;
LAB_1478beadb:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      do {
        pcVar22 = pcVar13;
        pcVar13 = strstr(pcVar22 + 1,"::");
      } while (pcVar13 != (char *)0x0);
      if (pcVar22 == (char *)0x0) goto LAB_1478bead6;
      pcVar22 = pcVar22 + 2;
      if (*pcVar22 == '0') goto LAB_1478beadb;
    }
    ::FName::FName(&local_f8,pcVar22);
    local_118 = (FWeakObjectPtr)OnInputOwnerEndPlayed;
    uStack_110 = 0;
    lStack_70 = (ulonglong)uStack_10c << 0x20;
    local_78 = OnInputOwnerEndPlayed;
    TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
    ::__Internal_AddUniqueDynamic<UInputComponent>
              ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                *)&pUVar12[0xd].field_0xf,this,(pmf_ac14fc04 *)&local_78,local_f8);
  }
LAB_1478beb4d:
  pFVar6 = local_130;
  pFVar25 = pFVar25 + 2;
  local_d0 = (FWeakObjectPtr)(local_130 + 4);
  iStack_d8 = 0;
  local_c0 = 0;
  iVar9 = local_130[7].ObjectIndex;
  iStack_c4 = 0;
  if (iVar9 != 0) {
    FVar20 = local_130[6];
    if (local_130[6] == (FWeakObjectPtr)0x0) {
      FVar20 = local_d0;
    }
    uVar19 = *(uint *)FVar20;
    while (uVar19 == 0) {
      lVar16 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_1478bebd0;
      uVar19 = *(uint *)((FScriptContainerElement *)((longlong)FVar20 + 4) + lVar16 * 4);
    }
    uVar10 = -uVar19 & uVar19;
    uVar17 = (ulonglong)uVar10 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_108 = (int)lVar16;
    iStack_c4 = local_c0 + -1 + local_108;
    if (iVar9 < iStack_c4) {
      iStack_c4 = iVar9;
    }
  }
LAB_1478bebd0:
  uStack_bc = local_4c;
  uStack_c8 = 0xffffffff;
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  uVar19 = local_130[7].ObjectIndex;
  FVar20 = (FWeakObjectPtr)(local_130 + 4);
  iStack_b8 = local_130[3].ObjectIndex - local_130[8].ObjectSerialNumber;
  TStack_a8._padding_ = CONCAT44(uVar10,iStack_d8);
  uVar24 = uVar19 & 0xffffffe0;
  iVar21 = (int)uVar19 >> 5;
  TStack_a8._28_4_ = local_4c;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_e0 = pFVar25;
  uStack_d4 = uVar10;
  local_b0 = pFVar25;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
  if ((((int)uVar19 < 0) || (iVar9 < (int)uVar19)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = pFVar6[7].ObjectIndex;
  if (uVar19 != uVar10) {
    FVar2 = pFVar6[6];
    FVar23 = FVar20;
    if (FVar2 != (FWeakObjectPtr)0x0) {
      FVar23 = FVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar21 * 4);
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar21;
      uVar24 = uVar24 + 0x20;
      iVar21 = iVar21 + 1;
      uVar19 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_1478bece0;
      uVar19 = *(uint *)((FScriptContainerElement *)((longlong)FVar23 + 4) + lVar16 * 4);
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_104 = (int)lVar16;
    uVar19 = local_104 + -1 + uVar24;
    if ((int)uVar10 < (int)uVar19) {
      uVar19 = uVar10;
    }
  }
LAB_1478bece0:
  while( true ) {
    pFVar6 = local_b0;
    if (local_b0[1].ObjectIndex - local_b0[6].ObjectSerialNumber != (int)uStack_88) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    pFVar7 = local_130;
    if (((TStack_a8.CurrentBitIndex == uVar19) && ((FWeakObjectPtr)TStack_a8.Array == FVar20)) &&
       (pFVar6 == pFVar25)) break;
    lVar16 = (longlong)*pFVar6 + (longlong)TStack_a8.CurrentBitIndex * 0x30;
    if (*(int *)(lVar16 + 0x24) < 0) {
      DestructItems<TSharedPtr<FInputActionBinding,1>,int>
                (*(TSharedPtr<FInputActionBinding,1> **)(lVar16 + 0x18),*(int *)(lVar16 + 0x20));
      *(undefined4 *)(lVar16 + 0x20) = 0;
      if (*(int *)(lVar16 + 0x24) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)(lVar16 + 0x18),0,(int *)(lVar16 + 0x24));
      }
    }
    else {
      DestructItems<TSharedPtr<FInputActionBinding,1>,int>
                (*(TSharedPtr<FInputActionBinding,1> **)(lVar16 + 0x18),*(int *)(lVar16 + 0x20));
      *(undefined4 *)(lVar16 + 0x20) = 0;
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  }
  pFVar25 = local_130 + 0xc;
  piVar1 = &local_130[0xd].ObjectSerialNumber;
  if (local_130[0xd].ObjectSerialNumber < 0) {
    DestructItems<TSharedPtr<FInputActionBinding,1>,int>
              ((TSharedPtr<FInputActionBinding,1> *)local_130[0xc],local_130[0xd].ObjectIndex);
    pFVar7[0xd].ObjectIndex = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pFVar25,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FInputActionBinding,1>,int>
              ((TSharedPtr<FInputActionBinding,1> *)local_130[0xc],local_130[0xd].ObjectIndex);
    pFVar7[0xd].ObjectIndex = 0;
  }
  local_f0 = pFVar7 + 2;
  local_124 = (this->ActionBindings).ArrayNum;
  uVar17 = (ulonglong)(int)local_124;
  FVar20 = (FWeakObjectPtr)(this->ActionBindings).AllocatorInstance.Data;
  local_118 = (FWeakObjectPtr)(uVar17 * 0x10 + (longlong)FVar20);
  while( true ) {
    FVar2 = local_118;
    if ((this->ActionBindings).ArrayNum != (int)uVar17) {
      local_138 = 0;
      `TCheckedPointerIterator<TSharedPtr<FInputActionBinding,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_138);
    }
    if (FVar20 == FVar2) break;
    pcVar5 = *(code **)(param_1->_padding_ + 0x308);
    if ((*(longlong *)FVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar14 = (longlong *)(*pcVar5)(param_1,*(undefined8 *)(*(longlong *)FVar20 + 4));
    lVar16 = *plVar14;
    local_128 = *(uint *)(plVar14 + 1);
    uVar17 = (ulonglong)(int)local_128;
    local_e8 = lVar16 + uVar17 * 0x28;
    while( true ) {
      lVar4 = local_e8;
      if ((int)plVar14[1] != (int)uVar17) {
        local_137[0] = 0;
        `TCheckedPointerIterator<FInputActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_137);
      }
      if (lVar16 == lVar4) break;
      FVar3 = *(FName *)(lVar16 + 0x10);
      if (FVar3 == EKeys::AnyKey.KeyName) {
        if ((((ulonglong)*pFVar25 <= (ulonglong)FVar20) &&
            ((ulonglong)FVar20 < (ulonglong)((longlong)*piVar1 * 0x10 + (longlong)*pFVar25))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = pFVar7[0xd].ObjectIndex;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)pFVar25,piVar1);
        }
        pFVar18 = (FScriptContainerElement *)((longlong)iVar9 * 0x10 + (longlong)*pFVar25);
        pFVar7[0xd].ObjectIndex = iVar9 + 1;
      }
      else {
        uVar19 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        pTVar15 = TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FKey_const_&>
                            ((TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_f0,uVar19 + FVar3.Number,(FKey *)(lVar16 + 0x10));
        FVar2 = (FWeakObjectPtr)(pTVar15->AllocatorInstance).Data;
        if ((((ulonglong)FVar2 <= (ulonglong)FVar20) &&
            ((ulonglong)FVar20 < (ulonglong)((longlong)pTVar15->ArrayMax * 0x10 + (longlong)FVar2)))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = pTVar15->ArrayNum;
        if (iVar9 == pTVar15->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        pFVar18 = (pTVar15->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        pTVar15->ArrayNum = iVar9 + 1;
      }
      *(undefined8 *)pFVar18 = *(undefined8 *)FVar20;
      lVar4 = *(longlong *)((longlong)FVar20 + 8);
      *(longlong *)(pFVar18 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      uVar17 = (ulonglong)local_128;
      lVar16 = lVar16 + 0x28;
    }
    FVar20 = (FWeakObjectPtr)((longlong)FVar20 + 0x10);
    uVar17 = (ulonglong)local_124;
  }
  local_130[1].ObjectIndex = param_1->KeyMapBuildIndex;
LAB_1478bf07b:
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetActionsBoundToKey @ 1478cf5f0

void __thiscall
UInputComponent::GetActionsBoundToKey
          (UInputComponent *this,UPlayerInput *param_1,FKey *param_2,
          TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar5;
  TSharedPtr<FInputActionBinding,1> *pTVar6;
  TSharedPtr<FInputActionBinding,1> *pTVar7;
  undefined1 local_res8 [8];
  undefined1 local_48;
  undefined1 local_47 [7];
  FKey local_40;
  
  iVar1 = (this->CachedKeyToActionInfo).ArrayNum;
  this_00 = (this->CachedKeyToActionInfo).AllocatorInstance.Data;
  pFVar5 = this_00 + (longlong)iVar1 * 0x70;
  while( true ) {
    if ((this->CachedKeyToActionInfo).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCachedKeyToActionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar5) break;
    bVar3 = TWeakObjectPtr<UPlayerInput,FWeakObjectPtr>::UEOpEquals<UPlayerInput,bool>
                      ((TWeakObjectPtr<UPlayerInput,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) {
      pTVar4 = TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>,0>_>
                       *)(this_00 + 0x10),param_2);
      if (pTVar4 != (TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *)0x0) {
        iVar1 = pTVar4->ArrayNum;
        pTVar7 = (TSharedPtr<FInputActionBinding,1> *)(pTVar4->AllocatorInstance).Data;
        pTVar6 = pTVar7 + iVar1;
        while( true ) {
          if (pTVar4->ArrayNum != iVar1) {
            `TCheckedPointerIterator<TSharedPtr<FInputActionBinding,1>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_48);
          }
          if (pTVar7 == pTVar6) break;
          TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TSharedPtr<FInputActionBinding,1>_const_&>(param_3,pTVar7);
          pTVar7 = pTVar7 + 1;
        }
      }
      iVar1 = *(int *)&this_00[0x68].field_0x0;
      pTVar7 = *(TSharedPtr<FInputActionBinding,1> **)(this_00 + 0x60);
      pTVar6 = pTVar7 + iVar1;
      while( true ) {
        if (*(int *)&this_00[0x68].field_0x0 != iVar1) {
          `TCheckedPointerIterator<TSharedPtr<FInputActionBinding,1>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_47);
        }
        if (pTVar7 == pTVar6) break;
        TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TSharedPtr<FInputActionBinding,1>_const_&>(param_3,pTVar7);
        pTVar7 = pTVar7 + 1;
      }
LAB_1478cf75a:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return;
    }
    this_00 = this_00 + 0x70;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_185505478669762401>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InputComponent.cpp"
                     ,0x9f,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ConditionalBuildKeyMap(this,param_1);
  local_40.KeyName = param_2->KeyName;
  local_40.KeyDetails.Object = (param_2->KeyDetails).Object;
  local_40.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_40.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_40.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  GetActionsBoundToKey(this,param_1,&local_40,param_3);
  goto LAB_1478cf75a;
}

// GetAxisKeyValue @ 1478cfa50

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UInputComponent::GetAxisKeyValue(UInputComponent *this,FKey *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  undefined1 local_res8 [8];
  FString local_38 [2];
  
  iVar1 = (this->AxisKeyBindings).ArrayNum;
  pFVar2 = (this->AxisKeyBindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  fVar4 = 0.0;
  while( true ) {
    if ((this->AxisKeyBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputAxisKeyBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(FName *)(pFVar2 + 8) == param_1->KeyName) {
      fVar4 = *(float *)(pFVar2 + 4);
LAB_1478cfb08:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return fVar4;
    }
    pFVar2 = pFVar2 + 0x40;
  }
  if (2 < (byte)LogPlayerController._0_1_) {
    FKey::ToString(param_1,local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  goto LAB_1478cfb08;
}

// GetAxisValue @ 1478cfb40

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UInputComponent::GetAxisValue(UInputComponent *this,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_38 [2];
  
  if (param_1 == (FName)0x0) {
    return 0.0;
  }
  pFVar2 = (this->AxisBindings).AllocatorInstance.Data;
  iVar1 = (this->AxisBindings).ArrayNum;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  local_res10 = param_1;
  while( true ) {
    if ((this->AxisBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInputAxisBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
      param_1 = local_res10;
    }
    if (pFVar2 == pFVar3) break;
    if (*(FName *)(pFVar2 + 4) == param_1) {
      return *(float *)(pFVar2 + 0x30);
    }
    pFVar2 = pFVar2 + 0x38;
  }
  if ((byte)LogPlayerController._0_1_ < 3) {
    return 0.0;
  }
  ::FName::ToString(&local_res10,local_38);
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
  if (local_38[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return 0.0;
  }
  FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  return 0.0;
}

// GetControllerAnalogKeyState @ 1478d0ad0

float __thiscall UInputComponent::GetControllerAnalogKeyState(UInputComponent *this,FKey *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return 0.0;
}

// GetControllerAnalogStickState @ 1478d0af0

void __thiscall
UInputComponent::GetControllerAnalogStickState
          (UInputComponent *this,Type param_1,float *param_2,float *param_3)

{
  return;
}

// GetControllerKeyTimeDown @ 1478d0b00

float __thiscall UInputComponent::GetControllerKeyTimeDown(UInputComponent *this,FKey *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return 0.0;
}

// GetControllerMouseDelta @ 1478d0b20

void __thiscall
UInputComponent::GetControllerMouseDelta(UInputComponent *this,float *param_1,float *param_2)

{
  return;
}

// GetControllerVectorKeyState @ 1478d0b30

TVector<double> * __thiscall
UInputComponent::GetControllerVectorKeyState
          (UInputComponent *this,TVector<double> *__return_storage_ptr__,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d92f0

UClass * __cdecl UInputComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputComponent",
               &Z_Registration_Info_UClass_UInputComponent.InnerSingleton,
               StaticRegisterNativesUInputComponent,0x148,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UInputComponent>,InternalVTableHelperCtorCaller<UInputComponent>,
               local_res8,UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputComponent.InnerSingleton;
}

// GetTouchState @ 1478dd930

void __thiscall
UInputComponent::GetTouchState
          (UInputComponent *this,int param_1,float *param_2,float *param_3,bool *param_4)

{
  return;
}

// GetVectorAxisValue @ 1478de670

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
UInputComponent::GetVectorAxisValue
          (UInputComponent *this,TVector<double> *__return_storage_ptr__,FKey *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar2 = (this->VectorAxisBindings).ArrayNum;
  pFVar5 = (this->VectorAxisBindings).AllocatorInstance.Data;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x58;
  while( true ) {
    if ((this->VectorAxisBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInputVectorAxisBinding_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(FName *)(pFVar5 + 0x20) == param_1->KeyName) {
      dVar3 = *(double *)(pFVar5 + 0x10);
      dVar1 = *(double *)(pFVar5 + 0x18);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(pFVar5 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
LAB_1478de746:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 0x58;
  }
  if (2 < (byte)LogPlayerController._0_1_) {
    FKey::ToString(param_1,&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_1478de746;
}

// HasBindings @ 1478df3d0

bool __thiscall UInputComponent::HasBindings(UInputComponent *this)

{
  if (((((this->ActionBindings).ArrayNum < 1) && ((this->AxisBindings).ArrayNum < 1)) &&
      ((this->AxisKeyBindings).ArrayNum < 1)) &&
     ((((this->KeyBindings).ArrayNum < 1 && ((this->TouchBindings).ArrayNum < 1)) &&
      (((this->GestureBindings).ArrayNum < 1 && ((this->VectorAxisBindings).ArrayNum < 1)))))) {
    return false;
  }
  return true;
}

// IsControllerKeyDown @ 1478e0ff0

bool __thiscall UInputComponent::IsControllerKeyDown(UInputComponent *this,FKey *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// LogDeprecatedBindingWarning @ 1478e21c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UInputComponent::LogDeprecatedBindingWarning(FName param_1)

{
  UInputSettings *this;
  bool bVar1;
  UClass *this_00;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UInputSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((((bool)this->bEnabledLegacyMappingDeprecationWarnings) &&
      (bVar1 = UInputSettings::IsActionMappingDeprecated(this,local_res8[0]), bVar1)) &&
     (2 < (byte)LogPlayerInput._0_1_)) {
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerInput);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnInputOwnerEndPlayed @ 1478e5a80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInputComponent::OnInputOwnerEndPlayed(UInputComponent *this,AActor *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *this_00;
  UClass *pUVar4;
  AActor *pAVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId100,"UInputComponent::OnInputOwnerEndPlayed",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\InputComponent.cpp"
               ,100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId100);
  }
  uVar6 = (this->CachedKeyToActionInfo).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 0x70;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->CachedKeyToActionInfo).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((this->CachedKeyToActionInfo).AllocatorInstance.Data + lVar7));
      if (this_00 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_AActor_NoRegister();
        pAVar5 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
        if (pAVar5 == param_1) {
          uVar3 = 0;
          if ((int)uVar6 < (this->CachedKeyToActionInfo).ArrayNum) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->CachedKeyToActionInfo,uVar6);
        }
      }
      lVar7 = lVar7 + -0x70;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// RemoveActionBinding @ 1478e9d10

void __thiscall
UInputComponent::RemoveActionBinding(UInputComponent *this,FInputActionBinding *param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  uchar uVar3;
  uchar uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res18 [16];
  uint local_48 [2];
  ForAnyElementType local_40;
  uint local_38;
  uint local_34 [3];
  
  LogDeprecatedBindingWarning(param_1->ActionName);
  uVar15 = 0;
  uVar10 = 0;
  if (param_1->bPaired != 0) {
    local_40.Data = (FScriptContainerElement *)0x0;
    uVar3 = (param_1->KeyEvent).Value;
    local_38 = 0;
    local_34[0] = 0;
    local_48[0] = 0;
    uVar12 = uVar15;
    uVar14 = uVar15;
    if (0 < (this->ActionBindings).ArrayNum) {
      do {
        uVar8 = (uint)uVar14;
        if (uVar8 != param_2) {
          uVar13 = uVar10;
          if ((int)uVar8 < (this->ActionBindings).ArrayNum) {
            uVar13 = ~uVar8 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar12 = (ulonglong)local_38;
          }
          lVar5 = *(longlong *)
                   ((this->ActionBindings).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10);
          if (*(FName *)(lVar5 + 4) == param_1->ActionName) {
            uVar4 = *(uchar *)(lVar5 + 2);
            if (uVar4 == (param_1->KeyEvent).Value) {
              uVar12 = 0;
              local_38 = 0;
              if (local_34[0] != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_40,0,(int *)local_34);
                uVar12 = (ulonglong)local_38;
              }
              break;
            }
            if ((bool)uVar4 == (uVar3 == '\0')) {
              uVar8 = (uint)uVar12;
              if (((local_40.Data <= (FScriptContainerElement *)local_48) &&
                  ((FScriptContainerElement *)local_48 <
                   local_40.Data + (longlong)(int)local_34[0] * 4)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), uVar8 = local_38, bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (uVar8 == local_34[0]) {
                uVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_40,(int *)local_34);
              }
              local_38 = uVar8 + 1;
              *(uint *)(local_40.Data + (longlong)(int)uVar8 * 4) = local_48[0];
              uVar12 = (ulonglong)local_38;
            }
          }
        }
        local_48[0] = local_48[0] + 1;
        if ((this->ActionBindings).ArrayNum <= (int)local_48[0]) break;
        uVar14 = (ulonglong)local_48[0];
      } while( true );
    }
    uVar14 = uVar15;
    if (0 < (int)uVar12) {
      do {
        uVar13 = (uint)uVar15;
        uVar8 = uVar10;
        if ((int)uVar13 < (int)uVar12) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar8 = *(uint *)(local_40.Data + uVar14);
        uVar9 = uVar10;
        if ((int)uVar8 < (this->ActionBindings).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = (this->ActionBindings).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar15 = (ulonglong)(uVar13 + 1);
        pbVar1 = (byte *)(*(longlong *)pFVar16 + 1);
        *pbVar1 = *pbVar1 & 0xfe;
        uVar12 = (ulonglong)local_38;
        uVar14 = uVar14 + 4;
      } while ((int)(uVar13 + 1) < (int)local_38);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  if (param_2 < (this->ActionBindings).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (this->ActionBindings).AllocatorInstance.Data + (longlong)param_2 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar16 + 8));
  iVar11 = (this->ActionBindings).ArrayNum + ~param_2;
  if (iVar11 != 0) {
    memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar11 << 4);
  }
  piVar2 = &(this->ActionBindings).ArrayNum;
  *piVar2 = *piVar2 + -1;
  iVar11 = (this->CachedKeyToActionInfo).ArrayNum;
  pFVar16 = (this->CachedKeyToActionInfo).AllocatorInstance.Data;
  pFVar17 = pFVar16 + (longlong)iVar11 * 0x70;
  while( true ) {
    if ((this->CachedKeyToActionInfo).ArrayNum != iVar11) {
      `TCheckedPointerIterator<FCachedKeyToActionInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar16 == pFVar17) break;
    *(undefined4 *)(pFVar16 + 8) = 0;
    pFVar16 = pFVar16 + 0x70;
  }
  return;
}

// RemoveActionBinding @ 1478ea0d0

void __thiscall UInputComponent::RemoveActionBinding(UInputComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((-1 < param_1) && (param_1 < (this->ActionBindings).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RemoveActionBinding(this,*(FInputActionBinding **)
                              ((this->ActionBindings).AllocatorInstance.Data +
                              (longlong)param_1 * 0x10),param_1);
  }
  return;
}

// RemoveActionBinding @ 1478ea160

void __thiscall
UInputComponent::RemoveActionBinding(UInputComponent *this,FName param_1,EInputEvent param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  LogDeprecatedBindingWarning(param_1);
  uVar5 = 0;
  if (0 < (this->ActionBindings).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ActionBindings).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = (this->ActionBindings).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar6) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FName *)(*(longlong *)(pFVar1 + lVar6) + 4) == param_1) {
        if ((*(longlong *)(pFVar1 + lVar6) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(byte *)(*(longlong *)(pFVar1 + lVar6) + 2) == param_2) {
          if ((int)uVar5 < 0) {
            return;
          }
          if ((this->ActionBindings).ArrayNum <= (int)uVar5) {
            return;
          }
          if (((int)uVar5 < 0) &&
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
          RemoveActionBinding(this,*(FInputActionBinding **)
                                    ((this->ActionBindings).AllocatorInstance.Data +
                                    (longlong)(int)uVar5 * 0x10),uVar5);
          return;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->ActionBindings).ArrayNum);
  }
  return;
}

// RemoveActionBindingForHandle @ 1478ea300

void __thiscall UInputComponent::RemoveActionBindingForHandle(UInputComponent *this,int param_1)

{
  FInputActionBinding *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ActionBindings).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ActionBindings).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pFVar1 = *(FInputActionBinding **)((this->ActionBindings).AllocatorInstance.Data + lVar6);
      if (pFVar1->Handle == param_1) {
        RemoveActionBinding(this,pFVar1,uVar5);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->ActionBindings).ArrayNum);
  }
  return;
}

// RemoveAxisBinding @ 1478ea830

void __thiscall UInputComponent::RemoveAxisBinding(UInputComponent *this,FName param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  longlong lVar7;
  
  LogDeprecatedBindingWarning(param_1);
  uVar6 = (this->AxisBindings).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 0x38;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->AxisBindings).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
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
      if (*(FName *)((this->AxisBindings).AllocatorInstance.Data + lVar7 + 4) == param_1) {
        uVar4 = 0;
        if ((int)uVar6 < (this->AxisBindings).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
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
        _Dst = (this->AxisBindings).AllocatorInstance.Data + lVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(_Dst + 0x28));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(_Dst + 0x18));
        iVar5 = ~uVar6 + (this->AxisBindings).ArrayNum;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 0x38,(longlong)iVar5 * 0x38);
        }
        piVar1 = &(this->AxisBindings).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar7 = lVar7 + -0x38;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// RemoveAxisKeyBinding @ 1478ea980

void __thiscall UInputComponent::RemoveAxisKeyBinding(UInputComponent *this,FKey *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *_Dst;
  longlong lVar7;
  
  uVar6 = (this->AxisKeyBindings).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 6;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->AxisKeyBindings).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
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
      if (*(FName *)((this->AxisKeyBindings).AllocatorInstance.Data + lVar7 + 8) == param_1->KeyName
         ) {
        uVar4 = 0;
        if ((int)uVar6 < (this->AxisKeyBindings).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
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
        _Dst = (this->AxisKeyBindings).AllocatorInstance.Data + lVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(_Dst + 0x38));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(_Dst + 0x28));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(_Dst + 0x18));
        iVar5 = ~uVar6 + (this->AxisKeyBindings).ArrayNum;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 0x40,(longlong)iVar5 << 6);
        }
        piVar1 = &(this->AxisKeyBindings).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar7 = lVar7 + -0x40;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUInputComponent @ 1478f7ed0

void __cdecl UInputComponent::StaticRegisterNativesUInputComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UInputComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WasControllerKeyJustPressed @ 1478fe630

bool __thiscall UInputComponent::WasControllerKeyJustPressed(UInputComponent *this,FKey *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// WasControllerKeyJustReleased @ 1478fe650

bool __thiscall UInputComponent::WasControllerKeyJustReleased(UInputComponent *this,FKey *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// execGetControllerAnalogKeyState @ 147903170

void __cdecl
UInputComponent::execGetControllerAnalogKeyState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = 0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined4 *)param_3 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetControllerAnalogStickState @ 147903220

void __cdecl
UInputComponent::execGetControllerAnalogStickState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
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
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_18[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execGetControllerKeyTimeDown @ 147903320

void __cdecl
UInputComponent::execGetControllerKeyTimeDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = 0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined4 *)param_3 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetControllerMouseDelta @ 1479033d0

void __cdecl
UInputComponent::execGetControllerMouseDelta(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execGetControllerVectorKeyState @ 147903490

void __cdecl
UInputComponent::execGetControllerVectorKeyState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  pTStack_38 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_38->SharedReferenceCount = (atomic<int>)((int)pTStack_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// execGetTouchState @ 147904b40

void __cdecl UInputComponent::execGetTouchState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_14[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_14,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_14);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execIsControllerKeyDown @ 147905530

void __cdecl
UInputComponent::execIsControllerKeyDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = 0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined1 *)param_3 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execOnInputOwnerEndPlayed @ 147907430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UInputComponent::execOnInputOwnerEndPlayed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  AActor *local_res20;
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  OnInputOwnerEndPlayed((UInputComponent *)param_1,local_res20,(uint)local_res10[0]);
  return;
}

// execWasControllerKeyJustPressed @ 147913fa0

void __cdecl
UInputComponent::execWasControllerKeyJustPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = 0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined1 *)param_3 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execWasControllerKeyJustReleased @ 147914050

void __cdecl
UInputComponent::execWasControllerKeyJustReleased(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = 0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_18->SharedReferenceCount = (atomic<int>)((int)pTStack_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  *(undefined1 *)param_3 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// BindAction<ADebugCameraController> @ 147aac760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputActionBinding * __thiscall
UInputComponent::BindAction<ADebugCameraController>
          (UInputComponent *this,FName param_1,EInputEvent param_2,ADebugCameraController *param_3,
          pmf_df982789 *param_4)

{
  FInputActionBinding *pFVar1;
  byte local_b8;
  FInputActionUnifiedDelegate local_a8;
  FInputActionBinding local_68;
  pmf_df982789 local_18;
  
  local_a8.FuncDelegate.Object = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  local_a8.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_a8.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
  local_a8.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_18._0_8_ = *(undefined8 *)param_4;
  local_18._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_a8.FuncDelegateWithKey.Object =
       (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
  local_a8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_a8.BoundDelegateType = Unbound;
  FInputActionUnifiedDelegate::BindDelegate<ADebugCameraController>(&local_a8,param_3,&local_18);
  local_68.bPaired = '\0';
  local_68.Handle = -1;
  local_68.ActionDelegate.FuncDelegate.Object = local_a8.FuncDelegate.Object;
  local_68.ActionDelegate.FuncDelegate.SharedReferenceCount.ReferenceController =
       local_a8.FuncDelegate.SharedReferenceCount.ReferenceController;
  local_68.ActionDelegate.FuncDelegateWithKey.Object = local_a8.FuncDelegateWithKey.Object;
  local_68.ActionDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
       local_a8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
  local_68.ActionDelegate.FuncDynDelegate.Object = local_a8.FuncDynDelegate.Object;
  local_68.ActionDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       local_a8.FuncDynDelegate.SharedReferenceCount.ReferenceController;
  local_68.ActionDelegate.BoundDelegateType = local_a8.BoundDelegateType;
  local_68._padding_ = local_b8 & 0xfd | 1;
  local_68.KeyEvent.Value = (uchar)param_2;
  local_68.ActionName = param_1;
  pFVar1 = AddActionBinding(this,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return pFVar1;
}

// BindAxis<ADefaultPawn> @ 147aac870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInputAxisBinding * __thiscall
UInputComponent::BindAxis<ADefaultPawn>
          (UInputComponent *this,FName param_1,ADefaultPawn *param_2,pmf_099752ad *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInputAxisBinding *pFVar7;
  uint uVar8;
  longlong lVar9;
  TArray<FInputAxisBinding,TSizedDefaultAllocator<32>_> *pTVar10;
  pmf_099752ad local_58;
  FScriptContainerElement local_48;
  FName local_44;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  local_38;
  undefined4 local_18;
  
  LogDeprecatedBindingWarning(param_1);
  local_38.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_48 = (FScriptContainerElement)((byte)local_48 & 0xfd | 1);
  local_18 = 0;
  local_38.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
  local_38.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_44 = param_1;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  ::BindDelegate<ADefaultPawn>(&local_38,param_2,&local_58);
  pTVar10 = &this->AxisBindings;
  iVar5 = (this->AxisBindings).ArrayNum;
  piVar1 = &(this->AxisBindings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->AxisBindings).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  lVar9 = (longlong)iVar5 * 0x38;
  pFVar2[lVar9] = local_48;
  *(FName *)(pFVar2 + lVar9 + 4) = local_44;
  *(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)(pFVar2 + lVar9 + 0x10) =
       local_38.FuncDelegate.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 + 0x18) =
       local_38.FuncDelegate.SharedReferenceCount.ReferenceController;
  *(FInputAxisHandlerDynamicSignature **)(pFVar2 + lVar9 + 0x20) = local_38.FuncDynDelegate.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 + 0x28) =
       local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController;
  *(undefined4 *)(pFVar2 + lVar9 + 0x30) = local_18;
  iVar5 = (this->AxisBindings).ArrayNum;
  local_38.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_38.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
  local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar8 = iVar5 - 1;
  local_38.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  uVar6 = 0;
  if ((int)uVar8 < iVar5) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInputAxisBinding *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->AxisBindings).ArrayNum;
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (FInputAxisBinding *)(pFVar2 + (longlong)(iVar5 + -1) * 0x38);
}

// BindTouch<ADebugCameraController> @ 147aad6b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputTouchBinding * __thiscall
UInputComponent::BindTouch<ADebugCameraController>
          (UInputComponent *this,EInputEvent param_1,ADebugCameraController *param_2,
          pmf_12c40d2c *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInputTouchBinding *pFVar7;
  uint uVar8;
  TArray<FInputTouchBinding,TSizedDefaultAllocator<32>_> *pTVar9;
  pmf_12c40d2c local_48;
  FScriptContainerElement local_38;
  FScriptContainerElement local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_37 = SUB41(param_1,0);
  local_30 = 0;
  uStack_28 = 0;
  local_48._0_8_ = *(undefined8 *)param_3;
  local_48._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_38 = (FScriptContainerElement)((byte)local_38 & 0xfd | 1);
  local_20 = 0;
  uStack_18 = 0;
  TInputUnifiedDelegate<TDelegate<void___cdecl(enum_ETouchIndex::Type,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>,FInputTouchHandlerDynamicSignature>
  ::BindDelegate<ADebugCameraController>(&local_30,param_2,&local_48);
  pTVar9 = &this->TouchBindings;
  iVar5 = (this->TouchBindings).ArrayNum;
  piVar1 = &(this->TouchBindings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->TouchBindings).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x28;
  *pFVar2 = local_38;
  pFVar2[1] = local_37;
  *(undefined8 *)(pFVar2 + 8) = local_30;
  *(undefined8 *)(pFVar2 + 0x10) = uStack_28;
  *(undefined8 *)(pFVar2 + 0x18) = local_20;
  *(undefined8 *)(pFVar2 + 0x20) = uStack_18;
  iVar5 = (this->TouchBindings).ArrayNum;
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uVar8 = iVar5 - 1;
  local_20 = 0;
  uVar6 = 0;
  if ((int)uVar8 < iVar5) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInputTouchBinding *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->TouchBindings).ArrayNum;
  pFVar2 = (pTVar9->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (FInputTouchBinding *)(pFVar2 + (longlong)(iVar5 + -1) * 0x28);
}

// BindAxis<APlayerController> @ 1483393e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputAxisBinding * __thiscall
UInputComponent::BindAxis<APlayerController>
          (UInputComponent *this,FName param_1,APlayerController *param_2,pmf_59f4dd13 *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInputAxisBinding *pFVar7;
  uint uVar8;
  longlong lVar9;
  TArray<FInputAxisBinding,TSizedDefaultAllocator<32>_> *pTVar10;
  pmf_59f4dd13 local_58;
  FScriptContainerElement local_48;
  FName local_44;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  local_38;
  undefined4 local_18;
  
  LogDeprecatedBindingWarning(param_1);
  local_38.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_48 = (FScriptContainerElement)((byte)local_48 & 0xfd | 1);
  local_18 = 0;
  local_38.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
  local_38.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_44 = param_1;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  ::BindDelegate<APlayerController>(&local_38,param_2,&local_58);
  pTVar10 = &this->AxisBindings;
  iVar5 = (this->AxisBindings).ArrayNum;
  piVar1 = &(this->AxisBindings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->AxisBindings).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  lVar9 = (longlong)iVar5 * 0x38;
  pFVar2[lVar9] = local_48;
  *(FName *)(pFVar2 + lVar9 + 4) = local_44;
  *(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)(pFVar2 + lVar9 + 0x10) =
       local_38.FuncDelegate.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 + 0x18) =
       local_38.FuncDelegate.SharedReferenceCount.ReferenceController;
  *(FInputAxisHandlerDynamicSignature **)(pFVar2 + lVar9 + 0x20) = local_38.FuncDynDelegate.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 + 0x28) =
       local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController;
  *(undefined4 *)(pFVar2 + lVar9 + 0x30) = local_18;
  iVar5 = (this->AxisBindings).ArrayNum;
  local_38.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_38.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
  local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar8 = iVar5 - 1;
  local_38.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  uVar6 = 0;
  if ((int)uVar8 < iVar5) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInputAxisBinding *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->AxisBindings).ArrayNum;
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (FInputAxisBinding *)(pFVar2 + (longlong)(iVar5 + -1) * 0x38);
}

