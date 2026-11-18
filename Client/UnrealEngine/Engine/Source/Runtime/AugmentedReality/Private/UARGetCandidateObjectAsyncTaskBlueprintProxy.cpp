// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 11

// StaticClass @ 14cf314e0

UClass * __cdecl UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGetCandidateObjectAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.
                InnerSingleton,StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy,
               0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UARGetCandidateObjectAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARGetCandidateObjectAsyncTaskBlueprintProxy>,
               local_res8,UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.InnerSingleton;
}

// UARGetCandidateObjectAsyncTaskBlueprintProxy @ 14cf41890

UARGetCandidateObjectAsyncTaskBlueprintProxy * __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::UARGetCandidateObjectAsyncTaskBlueprintProxy
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this,FVTableHelper *param_1)

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
  (this->CandidateObjectTask).Object = (FARGetCandidateObjectAsyncTask *)0x0;
  (this->CandidateObjectTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UARGetCandidateObjectAsyncTaskBlueprintProxy @ 14cf41910

UARGetCandidateObjectAsyncTaskBlueprintProxy * __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::UARGetCandidateObjectAsyncTaskBlueprintProxy
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this,FObjectInitializer *param_1)

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
  (this->CandidateObjectTask).Object = (FARGetCandidateObjectAsyncTask *)0x0;
  (this->CandidateObjectTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UARGetCandidateObjectAsyncTaskBlueprintProxy @ 14cf44360

void __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::~UARGetCandidateObjectAsyncTaskBlueprintProxy
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CandidateObjectTask).SharedReferenceCount.ReferenceController);
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

// ARGetCandidateObject @ 14cf489e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARGetCandidateObjectAsyncTaskBlueprintProxy * __cdecl
UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UARGetCandidateObjectAsyncTaskBlueprintProxy *pUVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar5);
  local_98._8_8_ = pUVar4;
  pUVar6 = (UARGetCandidateObjectAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,param_1);
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (pUVar6->Extent).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (pUVar6->Extent).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  (pUVar6->Extent).field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (pUVar6->Location).field0_0x0._s_0.X = dVar2;
  (pUVar6->Location).field0_0x0._s_0.Y = dVar3;
  (pUVar6->Location).field0_0x0._s_0.Z = dVar1;
  return pUVar6;
}

// Activate @ 14cf48c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::Activate
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this)

{
  atomic<int> *paVar1;
  TSharedPtr<FARGetCandidateObjectAsyncTask,1> *pTVar2;
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
  FARGetCandidateObjectAsyncTask *local_98;
  FSharedReferencer<1> FStack_90;
  TReferenceControllerBase<1> *local_88;
  FSharedReferencer<1> FStack_80;
  FARGetCandidateObjectAsyncTask *local_78;
  FSharedReferencer<1> local_70;
  FString local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double local_38;
  double dStack_30;
  double local_28;
  
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
    pTVar10 = ::operator_new(0x30);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      local_88 = ___xmm_00000000000000000000000000000010;
      pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_80.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFARErrorGetCandidateObjectAsyncTask___00_SharedPointerInternals__6B_
      ;
      pFVar11 = ::FString::FString(&local_68,
                                   L"ARGetCandidateObject - requires a valid, running session");
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar10[2]._padding_)->AllocatorInstance).
      Data = (FScriptContainerElement *)0x0;
      pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[1]._padding_ = (longlong)&___7FARAsyncTask__6B_;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[1]._padding_ = (longlong)&___7FARErrorGetCandidateObjectAsyncTask__6B_;
      pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
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
      FStack_80.ReferenceController = pTVar10;
      local_88 = pTVar15;
    }
    if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_88) {
      this->_padding_ = (longlong)pTVar15;
      local_88 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
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
      local_98 = (FARGetCandidateObjectAsyncTask *)0x0;
      FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_58 = (this->Extent).field0_0x0._s_0.X;
      dStack_50 = (this->Extent).field0_0x0._s_0.Y;
      local_48 = (this->Extent).field0_0x0._s_0.Z;
      local_38 = (this->Location).field0_0x0._s_0.X;
      dStack_30 = (this->Location).field0_0x0._s_0.Y;
      local_28 = (this->Location).field0_0x0._s_0.Z;
      (**(code **)(pIVar5->_padding_ + 200))(pIVar5,&local_98,&local_38,&local_58);
    }
    pTVar2 = &this->CandidateObjectTask;
    if (pTVar2 != (TSharedPtr<FARGetCandidateObjectAsyncTask,1> *)&local_98) {
      pTVar2->Object = local_98;
      local_98 = (FARGetCandidateObjectAsyncTask *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CandidateObjectTask).SharedReferenceCount,&FStack_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_90.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    local_70.ReferenceController =
         (this->CandidateObjectTask).SharedReferenceCount.ReferenceController;
    local_78 = pTVar2->Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FARGetCandidateObjectAsyncTask **)&this->_padding_ != &local_78) {
      this->_padding_ = (longlong)local_78;
      local_78 = (FARGetCandidateObjectAsyncTask *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
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

// GetPrivateStaticClass @ 14cf54800

UClass * __cdecl UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGetCandidateObjectAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.
                InnerSingleton,StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy,
               0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UARGetCandidateObjectAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARGetCandidateObjectAsyncTaskBlueprintProxy>,
               local_res8,UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.InnerSingleton;
}

// ReportFailure @ 14cf5c6d0

void __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::ReportFailure
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFailed,local_res8);
  return;
}

// ReportSuccess @ 14cf5c890

void __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::ReportSuccess
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_res8 [4];
  
  if ((this->CandidateObjectTask).Object == (FARGetCandidateObjectAsyncTask *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = (**(code **)(*(longlong *)(this->CandidateObjectTask).Object + 8))();
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess,local_res8);
  return;
}

// StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy @ 14cf61130

void __cdecl
UARGetCandidateObjectAsyncTaskBlueprintProxy::
StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execARGetCandidateObject @ 14cf6a800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UARGetCandidateObjectAsyncTaskBlueprintProxy::execARGetCandidateObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118 [2];
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  uVar2 = local_118[0];
  local_b8 = local_e8;
  uStack_b0 = uStack_e0;
  local_108 = local_d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8 = local_d0;
  uStack_a0 = uStack_c8;
  local_f8 = local_c0;
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
  *(undefined8 *)&pUVar3[3].field_0x20 = local_b8;
  *(undefined8 *)(pUVar3 + 4) = uStack_b0;
  *(undefined8 *)&pUVar3[4].field_0x8 = local_108;
  *(undefined8 *)&pUVar3[3].field_0x8 = local_a8;
  *(undefined8 *)&pUVar3[3].field_0x10 = uStack_a0;
  *(undefined8 *)&pUVar3[3].field_0x18 = local_f8;
  *(UObject **)param_3 = pUVar3;
  return;
}

