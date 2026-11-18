// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149b9e190

UClass * __cdecl UPCGPointMatchAndSetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointMatchAndSetSettings",
               &Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointMatchAndSetSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointMatchAndSetSettings>,
               InternalVTableHelperCtorCaller<UPCGPointMatchAndSetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.InnerSingleton;
}

// UPCGPointMatchAndSetSettings @ 149be7a80

UPCGPointMatchAndSetSettings * __thiscall
UPCGPointMatchAndSetSettings::UPCGPointMatchAndSetSettings
          (UPCGPointMatchAndSetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPointMatchAndSetSettings__6B_;
  (this->MatchAndSetType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MatchAndSetInstance).field0_0x0.DebugPtr = (UPCGMatchAndSetBase *)0x0;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->SetTarget);
  this->SetTargetType = Double;
  return this;
}

// UPCGPointMatchAndSetSettings @ 149be7ad0

UPCGPointMatchAndSetSettings * __thiscall
UPCGPointMatchAndSetSettings::UPCGPointMatchAndSetSettings
          (UPCGPointMatchAndSetSettings *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  UClass *pUVar3;
  FName *pFVar4;
  UPCGMatchAndSetBase *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->_padding_ = (longlong)&___7UPCGPointMatchAndSetSettings__6B_;
  (this->MatchAndSetType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MatchAndSetInstance).field0_0x0.DebugPtr = (UPCGMatchAndSetBase *)0x0;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->SetTarget);
  this->SetTargetType = Double;
  pUVar3 = Z_Construct_UClass_UPCGMatchAndSetWeighted_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->MatchAndSetType).Class.field0_0x0.DebugPtr = pUVar3;
  if ((this->_padding_ & 0x10) == 0) {
    pFVar4 = ::FName::FName(&local_res8,L"DefaultMatchAndSet");
    FVar1 = *pFVar4;
    pUVar3 = Z_Construct_UClass_UPCGMatchAndSetWeighted_NoRegister();
    pUVar5 = (UPCGMatchAndSetBase *)
             FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UPCGMatchAndSetBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->MatchAndSetInstance).field0_0x0.DebugPtr = pUVar5;
  }
  return this;
}

// ~UPCGPointMatchAndSetSettings @ 149be9fc0

void __thiscall
UPCGPointMatchAndSetSettings::~UPCGPointMatchAndSetSettings(UPCGPointMatchAndSetSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGPointMatchAndSetSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->SetTarget).field_0x28,*(int *)&(this->SetTarget).field_0x30);
  pvVar1 = *(void **)&(this->SetTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05b60

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPointMatchAndSetSettings::CreateElement
          (UPCGPointMatchAndSetSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGPointMatchAndSetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPointMatchAndSetElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c26450

UClass * __cdecl UPCGPointMatchAndSetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointMatchAndSetSettings",
               &Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointMatchAndSetSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointMatchAndSetSettings>,
               InternalVTableHelperCtorCaller<UPCGPointMatchAndSetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.InnerSingleton;
}

// InputPinProperties @ 149c2ca90

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointMatchAndSetSettings::InputPinProperties
          (UPCGPointMatchAndSetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2eae0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointMatchAndSetSettings::OutputPinProperties
          (UPCGPointMatchAndSetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149c2f370

void __thiscall UPCGPointMatchAndSetSettings::PostLoad(UPCGPointMatchAndSetSettings *this)

{
  UPCGSettings::PostLoad((UPCGSettings *)this);
  if ((this->MatchAndSetInstance).field0_0x0.DebugPtr == (UPCGMatchAndSetBase *)0x0) {
    RefreshMatchAndSet(this);
    return;
  }
  UObjectBase::AtomicallySetFlags
            ((UObjectBase *)(this->MatchAndSetInstance).field0_0x0.DebugPtr,
             (EObjectFlags)this->_padding_ & (RF_Transient|RF_ArchetypeObject|RF_Public) |
             RF_Transactional);
  return;
}

// RefreshMatchAndSet @ 149c32980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPCGPointMatchAndSetSettings::RefreshMatchAndSet(UPCGPointMatchAndSetSettings *this)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UPCGMatchAndSetBase *pUVar7;
  longlong *plVar8;
  UClass *pUVar9;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pUVar9 = (this->MatchAndSetType).Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((this->MatchAndSetType).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      bVar4 = IsInGameThread();
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3412855797372157790>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointMatchAndSet.cpp"
                             ,0xa2,"IsInGameThread()"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = (this->MatchAndSetInstance).field0_0x0.DebugPtr;
      pUVar9 = (UClass *)0x0;
      if (pUVar7 != (UPCGMatchAndSetBase *)0x0) {
        UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar7);
        (this->MatchAndSetInstance).field0_0x0.DebugPtr = (UPCGMatchAndSetBase *)0x0;
      }
      lVar3 = this->_padding_;
      pUVar5 = (this->MatchAndSetType).Class.field0_0x0.DebugPtr;
      if ((pUVar5 != (UClass *)0x0) &&
         (pUVar6 = Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar9 = (this->MatchAndSetType).Class.field0_0x0.DebugPtr;
        }
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister();
      CheckIsClassChildOf_Internal(pUVar5,pUVar9);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar9);
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_a8._16_4_ = 0;
      local_a8._20_4_ = 0;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_a8._8_8_ = this;
      local_a8._24_4_ =
           (EObjectFlags)lVar3 & (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public);
      pUVar7 = (UPCGMatchAndSetBase *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar8 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar7 == (UPCGMatchAndSetBase *)0x0)) {
        (this->MatchAndSetInstance).field0_0x0.DebugPtr = pUVar7;
        if ((pUVar7 == (UPCGMatchAndSetBase *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("MatchAndSetInstance",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointMatchAndSet.cpp"
                               ,0xb0,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
        (this->MatchAndSetInstance).field0_0x0.DebugPtr = pUVar7;
      }
      pUVar7 = (this->MatchAndSetInstance).field0_0x0.DebugPtr;
      (**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7,this->SetTargetType);
      return;
    }
  }
  (this->MatchAndSetInstance).field0_0x0.DebugPtr = (UPCGMatchAndSetBase *)0x0;
  return;
}

// SetMatchAndSetType @ 149c33b60

void __thiscall
UPCGPointMatchAndSetSettings::SetMatchAndSetType
          (UPCGPointMatchAndSetSettings *this,TSubclassOf<UPCGMatchAndSetBase> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  if ((this->MatchAndSetInstance).field0_0x0.DebugPtr != (UPCGMatchAndSetBase *)0x0) {
    pUVar6 = (UClass *)0x0;
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    pUVar7 = pUVar6;
    if ((lVar2 != 0) &&
       (pUVar4 = Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar7 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pUVar4 = (this->MatchAndSetType).Class.field0_0x0.DebugPtr;
    if ((pUVar4 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = (this->MatchAndSetType).Class.field0_0x0.DebugPtr;
      }
    }
    if (pUVar7 == pUVar6) {
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->MatchAndSetType).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  RefreshMatchAndSet(this);
  return;
}

// StaticRegisterNativesUPCGPointMatchAndSetSettings @ 149c35560

void __cdecl UPCGPointMatchAndSetSettings::StaticRegisterNativesUPCGPointMatchAndSetSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UseSeed @ 149c36350

bool __thiscall UPCGPointMatchAndSetSettings::UseSeed(UPCGPointMatchAndSetSettings *this)

{
  UPCGMatchAndSetBase *pUVar1;
  char cVar2;
  
  pUVar1 = (this->MatchAndSetInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGMatchAndSetBase *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// execSetMatchAndSetType @ 149c38bd0

void __cdecl
UPCGPointMatchAndSetSettings::execSetMatchAndSetType(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  
  pUVar8 = (UObject *)0x0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  if (*(longlong *)&param_1[5].field_0x8 == 0) goto LAB_149c38cef;
  if ((pUVar5 == (UObject *)0x0) ||
     (pUVar6 = Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_149c38c9b:
    pUVar7 = pUVar8;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pUVar7 = pUVar5;
    if (!bVar4) goto LAB_149c38c9b;
  }
  lVar3 = *(longlong *)(param_1 + 5);
  if ((lVar3 != 0) &&
     (pUVar6 = Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar8 = *(UObject **)(param_1 + 5);
    }
  }
  if (pUVar7 == pUVar8) {
    return;
  }
LAB_149c38cef:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(param_1 + 5) = pUVar5;
  RefreshMatchAndSet((UPCGPointMatchAndSetSettings *)param_1);
  return;
}

