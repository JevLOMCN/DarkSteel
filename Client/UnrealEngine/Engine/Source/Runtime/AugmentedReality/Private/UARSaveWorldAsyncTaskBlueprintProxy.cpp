// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 11

// StaticClass @ 14cf30e50

UClass * __cdecl UARSaveWorldAsyncTaskBlueprintProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSaveWorldAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARSaveWorldAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARSaveWorldAsyncTaskBlueprintProxy>,local_res8,
               UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton;
}

// UARSaveWorldAsyncTaskBlueprintProxy @ 14cf42650

UARSaveWorldAsyncTaskBlueprintProxy * __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::UARSaveWorldAsyncTaskBlueprintProxy
          (UARSaveWorldAsyncTaskBlueprintProxy *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailed = 0;
  *(undefined8 *)&(this->OnFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailed).field_0x10 = 0;
  (this->SaveWorldTask).Object = (FARSaveWorldAsyncTask *)0x0;
  (this->SaveWorldTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UARSaveWorldAsyncTaskBlueprintProxy @ 14cf426d0

UARSaveWorldAsyncTaskBlueprintProxy * __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::UARSaveWorldAsyncTaskBlueprintProxy
          (UARSaveWorldAsyncTaskBlueprintProxy *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailed = 0;
  *(undefined8 *)&(this->OnFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailed).field_0x10 = 0;
  (this->SaveWorldTask).Object = (FARSaveWorldAsyncTask *)0x0;
  (this->SaveWorldTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UARSaveWorldAsyncTaskBlueprintProxy @ 14cf44750

void __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::~UARSaveWorldAsyncTaskBlueprintProxy
          (UARSaveWorldAsyncTaskBlueprintProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SaveWorldTask).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnFailed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailed);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  this->_padding_ =
       (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// ARSaveWorld @ 14cf48ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARSaveWorldAsyncTaskBlueprintProxy * __cdecl
UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(UObject *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARSaveWorldAsyncTaskBlueprintProxy *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UARSaveWorldAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1);
  return pUVar3;
}

// Activate @ 14cf48f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::Activate(UARSaveWorldAsyncTaskBlueprintProxy *this)

{
  atomic<int> *paVar1;
  TSharedPtr<FARSaveWorldAsyncTask,1> *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  IARSystemSupport *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FWeakReferencer<1> FVar8;
  atomic<int> aVar9;
  TReferenceControllerBase<1> *pTVar10;
  FString *pFVar11;
  FARSupportInterface *pFVar12;
  int iVar13;
  FWeakReferencer<1> FVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  FARSaveWorldAsyncTask *local_58;
  FSharedReferencer<1> FStack_50;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> FStack_40;
  FARSaveWorldAsyncTask *local_38;
  FSharedReferencer<1> local_30;
  FString local_28;
  
  FVar8.ReferenceController =
       UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar12 = UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.Object;
  if (UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
    WeakReferenceCount =
         (atomic<int>)
         ((int)(UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.
               ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar12 == (FARSupportInterface *)0x0) ||
      (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar8.ReferenceController)->SharedReferenceCount < 1)) {
    pTVar10 = ::operator_new(0x40);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      local_48 = ___xmm_00000000000000000000000000000010;
      pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_40.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFARErrorSaveWorldAsyncTask___00_SharedPointerInternals__6B_
      ;
      pFVar11 = ::FString::FString(&local_28,L"ARSaveWorld - requires a valid, running session");
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar10[2]._padding_)->AllocatorInstance).
      Data = (FScriptContainerElement *)0x0;
      pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[1]._padding_ = (longlong)&___7FARAsyncTask__6B_;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[1]._padding_ = (longlong)&___7FARErrorSaveWorldAsyncTask__6B_;
      pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[3]._padding_ = 0;
      pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
      iVar4 = (pFVar11->Data).ArrayNum;
      iVar13 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar13 = 0;
      }
      ::FString::AssignRange
                ((FString *)(pTVar10 + 2),(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar13);
      LOCK();
      pTVar10[1].WeakReferenceCount = (atomic<int>)0x1;
      UNLOCK();
      LOCK();
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x1;
      UNLOCK();
      pFVar6 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      pTVar15 = pTVar10 + 1;
      if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      FStack_40.ReferenceController = pTVar10;
      local_48 = pTVar15;
    }
    if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_48) {
      this->_padding_ = (longlong)pTVar15;
      local_48 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return;
    }
  }
  else {
    aVar3 = (FVar8.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar12 = (FARSupportInterface *)0x0;
        FVar14.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        break;
      }
      LOCK();
      aVar9 = (FVar8.ReferenceController)->SharedReferenceCount;
      bVar16 = aVar3 == aVar9;
      if (bVar16) {
        (FVar8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      FVar14.ReferenceController = FVar8.ReferenceController;
      aVar3 = aVar9;
    } while (!bVar16);
    pIVar5 = pFVar12->ARImplemention;
    if (pIVar5 == (IARSystemSupport *)0x0) {
      local_58 = (FARSaveWorldAsyncTask *)0x0;
      FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      (**(code **)(pIVar5->_padding_ + 0xd0))(pIVar5,&local_58);
    }
    pTVar2 = &this->SaveWorldTask;
    if (pTVar2 != (TSharedPtr<FARSaveWorldAsyncTask,1> *)&local_58) {
      pTVar2->Object = local_58;
      local_58 = (FARSaveWorldAsyncTask *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SaveWorldTask).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    local_30.ReferenceController = (this->SaveWorldTask).SharedReferenceCount.ReferenceController;
    local_38 = pTVar2->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FARSaveWorldAsyncTask **)&this->_padding_ != &local_38) {
      this->_padding_ = (longlong)local_38;
      local_38 = (FARSaveWorldAsyncTask *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar8.ReferenceController)->WeakReferenceCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x1) {
    (**(code **)((FVar8.ReferenceController)->_padding_ + 8))(FVar8.ReferenceController,1);
  }
  return;
}

// GetPrivateStaticClass @ 14cf551a0

UClass * __cdecl UARSaveWorldAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSaveWorldAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARSaveWorldAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARSaveWorldAsyncTaskBlueprintProxy>,local_res8,
               UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton;
}

// ReportFailure @ 14cf5c700

void __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::ReportFailure(UARSaveWorldAsyncTaskBlueprintProxy *this)

{
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailed,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// ReportSuccess @ 14cf5c900

void __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::ReportSuccess(UARSaveWorldAsyncTaskBlueprintProxy *this)

{
  FARSaveWorldAsyncTask *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->SaveWorldTask).Object == (FARSaveWorldAsyncTask *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SaveWorldTask).Object;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((int)pFVar1->_padding_ == 0) {
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
  }
  else {
    local_18.AllocatorInstance.Data = (pFVar1->WorldData).AllocatorInstance.Data;
    (pFVar1->WorldData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = (pFVar1->WorldData).ArrayNum;
    local_18.ArrayMax = (pFVar1->WorldData).ArrayMax;
    (pFVar1->WorldData).ArrayNum = 0;
    (pFVar1->WorldData).ArrayMax = 0;
  }
  FVar3.Data = local_18.AllocatorInstance.Data;
  FARSaveWorldPin::Broadcast(&this->OnSuccess,&local_18);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy @ 14cf61440

void __cdecl
UARSaveWorldAsyncTaskBlueprintProxy::StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execARSaveWorld @ 14cf6aa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UARSaveWorldAsyncTaskBlueprintProxy::execARSaveWorld(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  uVar2 = local_a8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,uVar2);
  *(UObject **)param_3 = pUVar3;
  return;
}

