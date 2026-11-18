// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149c3bfd0

UClass * __cdecl UPCGStaticMeshSpawnerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerSettings",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshSpawnerSettings,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerSettings>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton;
}

// UPCGStaticMeshSpawnerSettings @ 149c4bff0

UPCGStaticMeshSpawnerSettings * __thiscall
UPCGStaticMeshSpawnerSettings::UPCGStaticMeshSpawnerSettings
          (UPCGStaticMeshSpawnerSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bAllowDescriptorChanges = true;
  this_00 = &(this->TargetActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerSettings__6B_;
  (this->MeshSelectorType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MeshSelectorParameters).field0_0x0.DebugPtr = (UPCGMeshSelectorBase *)0x0;
  (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InstanceDataPackerParameters).field0_0x0.DebugPtr = (UPCGInstanceDataPackerBase *)0x0;
  (this->StaticMeshComponentPropertyOverrides).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticMeshComponentPropertyOverrides).ArrayNum = 0;
  (this->StaticMeshComponentPropertyOverrides).ArrayMax = 0;
  (this->OutAttributeName).ComparisonIndex = 0;
  (this->OutAttributeName).Number = 0;
  this->bApplyMeshBoundsToPoints = true;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  this->bSynchronousLoad = false;
  this->bAllowMergeDifferentDataInSameInstancedComponents = true;
  this->bSilenceOverrideAttributeNotFoundErrors = false;
  this->bWarnOnIdenticalSpawn = true;
  return this;
}

// UPCGStaticMeshSpawnerSettings @ 149c4c0b0

UPCGStaticMeshSpawnerSettings * __thiscall
UPCGStaticMeshSpawnerSettings::UPCGStaticMeshSpawnerSettings
          (UPCGStaticMeshSpawnerSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  FName FVar1;
  FObjectInitializer *pFVar2;
  UClass *pUVar3;
  FName *pFVar4;
  UObject *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->bAllowDescriptorChanges = true;
  this_00 = &(this->TargetActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerSettings__6B_;
  (this->MeshSelectorType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MeshSelectorParameters).field0_0x0.DebugPtr = (UPCGMeshSelectorBase *)0x0;
  (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InstanceDataPackerParameters).field0_0x0.DebugPtr = (UPCGInstanceDataPackerBase *)0x0;
  (this->StaticMeshComponentPropertyOverrides).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticMeshComponentPropertyOverrides).ArrayNum = 0;
  (this->StaticMeshComponentPropertyOverrides).ArrayMax = 0;
  (this->OutAttributeName).ComparisonIndex = 0;
  (this->OutAttributeName).Number = 0;
  this->bApplyMeshBoundsToPoints = true;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  this->bSynchronousLoad = false;
  this->bAllowMergeDifferentDataInSameInstancedComponents = true;
  this->bSilenceOverrideAttributeNotFoundErrors = false;
  this->bWarnOnIdenticalSpawn = true;
  pUVar3 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->MeshSelectorType).Class.field0_0x0.DebugPtr = pUVar3;
  if ((this->_padding_ & 0x10) == 0) {
    pFVar4 = ::FName::FName(&local_res8,L"DefaultSelectorInstance");
    FVar1 = *pFVar4;
    pUVar3 = Z_Construct_UClass_UPCGMeshSelectorWeighted_NoRegister();
    pUVar5 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (this->MeshSelectorParameters).field0_0x0.DebugPtr = (UPCGMeshSelectorBase *)pUVar5;
  }
  return this;
}

// ~UPCGStaticMeshSpawnerSettings @ 149c4ddb0

void __thiscall
UPCGStaticMeshSpawnerSettings::~UPCGStaticMeshSpawnerSettings(UPCGStaticMeshSpawnerSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshSpawnerSettings__6B_;
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TargetActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->StaticMeshComponentPropertyOverrides).AllocatorInstance.Data,
             (this->StaticMeshComponentPropertyOverrides).ArrayNum);
  pFVar1 = (this->StaticMeshComponentPropertyOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60800

TSharedPtr<IPCGElement,1> * __thiscall
UPCGStaticMeshSpawnerSettings::CreateElement
          (UPCGStaticMeshSpawnerSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGStaticMeshSpawnerElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGStaticMeshSpawnerElement__6B_;
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

// GetPrivateStaticClass @ 149c78ab0

UClass * __cdecl UPCGStaticMeshSpawnerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshSpawnerSettings",
               &Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshSpawnerSettings,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshSpawnerSettings>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshSpawnerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshSpawnerSettings.InnerSingleton;
}

// InputPinProperties @ 149c80040

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGStaticMeshSpawnerSettings::InputPinProperties
          (UPCGStaticMeshSpawnerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinProperties *pFVar6;
  FPCGDataTypeIdentifier local_28;
  
  cVar2 = (**(code **)(this->_padding_ + 0x4a8))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar6 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar3 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar5,cVar2 == '\0',true,pFVar4);
  pFVar6->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81660

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGStaticMeshSpawnerSettings::OutputPinProperties
          (UPCGStaticMeshSpawnerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PostLoad @ 149c81c20

void __thiscall UPCGStaticMeshSpawnerSettings::PostLoad(UPCGStaticMeshSpawnerSettings *this)

{
  UObjectBase *pUVar1;
  EObjectFlags EVar2;
  
  UPCGSettings::PostLoad((UPCGSettings *)this);
  pUVar1 = (UObjectBase *)(this->MeshSelectorParameters).field0_0x0.DebugPtr;
  EVar2 = (EObjectFlags)this->_padding_ & (RF_Transient|RF_ArchetypeObject|RF_Public) |
          RF_Transactional;
  if (pUVar1 == (UObjectBase *)0x0) {
    RefreshMeshSelector(this);
  }
  else {
    UObjectBase::AtomicallySetFlags(pUVar1,EVar2);
  }
  pUVar1 = (UObjectBase *)(this->InstanceDataPackerParameters).field0_0x0.DebugPtr;
  if (pUVar1 == (UObjectBase *)0x0) {
    RefreshInstancePacker(this);
    return;
  }
  UObjectBase::AtomicallySetFlags(pUVar1,EVar2);
  return;
}

// RefreshInstancePacker @ 149c84d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPCGStaticMeshSpawnerSettings::RefreshInstancePacker(UPCGStaticMeshSpawnerSettings *this)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  longlong *plVar8;
  UClass *pUVar9;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pUVar9 = (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister(), pUVar5 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((this->InstanceDataPackerType).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      bVar4 = IsInGameThread();
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3915437163654677264>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                             ,0x310,"IsInGameThread()"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (UObjectBaseUtility *)(this->InstanceDataPackerParameters).field0_0x0.DebugPtr;
      pUVar9 = (UClass *)0x0;
      if (this_00 != (UObjectBaseUtility *)0x0) {
        UObjectBaseUtility::MarkAsGarbage(this_00);
        (this->InstanceDataPackerParameters).field0_0x0.DebugPtr = (UPCGInstanceDataPackerBase *)0x0
        ;
      }
      lVar3 = this->_padding_;
      pUVar5 = (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr;
      if ((pUVar5 != (UClass *)0x0) &&
         (pUVar6 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister(),
         pUVar6 != (UClass *)0x0)) {
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
          pUVar9 = (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr;
        }
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister();
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
      pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar8 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      (this->InstanceDataPackerParameters).field0_0x0.DebugPtr =
           (UPCGInstanceDataPackerBase *)pUVar7;
      return;
    }
  }
  (this->InstanceDataPackerParameters).field0_0x0.DebugPtr = (UPCGInstanceDataPackerBase *)0x0;
  return;
}

// RefreshMeshSelector @ 149c84f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPCGStaticMeshSpawnerSettings::RefreshMeshSelector(UPCGStaticMeshSpawnerSettings *this)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  longlong *plVar8;
  UClass *pUVar9;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pUVar9 = (this->MeshSelectorType).Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((this->MeshSelectorType).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      bVar4 = IsInGameThread();
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3915437163654677240>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGStaticMeshSpawner.cpp"
                             ,0x2f8,"IsInGameThread()"), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (UObjectBaseUtility *)(this->MeshSelectorParameters).field0_0x0.DebugPtr;
      pUVar9 = (UClass *)0x0;
      if (this_00 != (UObjectBaseUtility *)0x0) {
        UObjectBaseUtility::MarkAsGarbage(this_00);
        (this->MeshSelectorParameters).field0_0x0.DebugPtr = (UPCGMeshSelectorBase *)0x0;
      }
      lVar3 = this->_padding_;
      pUVar5 = (this->MeshSelectorType).Class.field0_0x0.DebugPtr;
      if ((pUVar5 != (UClass *)0x0) &&
         (pUVar6 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
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
          pUVar9 = (this->MeshSelectorType).Class.field0_0x0.DebugPtr;
        }
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister();
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
      pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar8 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar8 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      (this->MeshSelectorParameters).field0_0x0.DebugPtr = (UPCGMeshSelectorBase *)pUVar7;
      return;
    }
  }
  (this->MeshSelectorParameters).field0_0x0.DebugPtr = (UPCGMeshSelectorBase *)0x0;
  return;
}

// SetInstancePackerType @ 149c8c320

void __thiscall
UPCGStaticMeshSpawnerSettings::SetInstancePackerType
          (UPCGStaticMeshSpawnerSettings *this,TSubclassOf<UPCGInstanceDataPackerBase> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  
  pUVar8 = (UClass *)0x0;
  if ((this->InstanceDataPackerParameters).field0_0x0.DebugPtr != (UPCGInstanceDataPackerBase *)0x0)
  {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    pUVar7 = pUVar8;
    if ((lVar2 != 0) &&
       (pUVar4 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister(), pUVar4 != (UClass *)0x0
       )) {
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
    pUVar4 = (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr;
    pUVar6 = pUVar8;
    if ((pUVar4 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister(), pUVar5 != (UClass *)0x0
       )) {
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
        pUVar6 = (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr;
      }
    }
    if (pUVar7 == pUVar6) {
      return;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar7 = pUVar8;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister(), pUVar4 != (UClass *)0x0))
  {
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
  pUVar4 = (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UPCGInstanceDataPackerBase_NoRegister(), pUVar6 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = (this->InstanceDataPackerType).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar7 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->InstanceDataPackerType).Class.field0_0x0 =
         *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  }
  RefreshInstancePacker(this);
  return;
}

// SetMeshSelectorType @ 149c8c4b0

void __thiscall
UPCGStaticMeshSpawnerSettings::SetMeshSelectorType
          (UPCGStaticMeshSpawnerSettings *this,TSubclassOf<UPCGMeshSelectorBase> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  
  pUVar8 = (UClass *)0x0;
  if ((this->MeshSelectorParameters).field0_0x0.DebugPtr != (UPCGMeshSelectorBase *)0x0) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    pUVar7 = pUVar8;
    if ((lVar2 != 0) &&
       (pUVar4 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister(), pUVar4 != (UClass *)0x0)) {
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
    pUVar4 = (this->MeshSelectorType).Class.field0_0x0.DebugPtr;
    pUVar6 = pUVar8;
    if ((pUVar4 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister(), pUVar5 != (UClass *)0x0)) {
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
        pUVar6 = (this->MeshSelectorType).Class.field0_0x0.DebugPtr;
      }
    }
    if (pUVar7 == pUVar6) {
      return;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar7 = pUVar8;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister(), pUVar4 != (UClass *)0x0)) {
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
  pUVar4 = (this->MeshSelectorType).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UPCGMeshSelectorBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = (this->MeshSelectorType).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar7 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->MeshSelectorType).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  }
  RefreshMeshSelector(this);
  return;
}

// StaticRegisterNativesUPCGStaticMeshSpawnerSettings @ 149c92020

void __cdecl UPCGStaticMeshSpawnerSettings::StaticRegisterNativesUPCGStaticMeshSpawnerSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UseSeed @ 149c93690

bool __thiscall UPCGStaticMeshSpawnerSettings::UseSeed(UPCGStaticMeshSpawnerSettings *this)

{
  return true;
}

// execSetInstancePackerType @ 149c94f40

void __cdecl
UPCGStaticMeshSpawnerSettings::execSetInstancePackerType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  SetInstancePackerType
            ((UPCGStaticMeshSpawnerSettings *)param_1,
             (TSubclassOf<UPCGInstanceDataPackerBase>)&local_res20);
  return;
}

// execSetMeshSelectorType @ 149c94ff0

void __cdecl
UPCGStaticMeshSpawnerSettings::execSetMeshSelectorType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  SetMeshSelectorType((UPCGStaticMeshSpawnerSettings *)param_1,
                      (TSubclassOf<UPCGMeshSelectorBase>)&local_res20);
  return;
}

