// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149edf7c0

UClass * __cdecl UPCGDefaultExecutionSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDefaultExecutionSource",
               &Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton,
               StaticRegisterNativesUPCGDefaultExecutionSource,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGDefaultExecutionSource>,
               InternalVTableHelperCtorCaller<UPCGDefaultExecutionSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton;
}

// UPCGDefaultExecutionSource @ 149eee360

UPCGDefaultExecutionSource * __thiscall
UPCGDefaultExecutionSource::UPCGDefaultExecutionSource
          (UPCGDefaultExecutionSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CurrentGenerationTask = 0xffffffffffffffff;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->GraphInterface).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IPCGGraphExecutionSource__;
  (this->State)._padding_ = (longlong)&___7FPCGDefaultExecutionState__6B_;
  (this->State).Source = (UPCGDefaultExecutionSource *)0x0;
  this->Seed = 0x2a;
  return this;
}

// UPCGDefaultExecutionSource @ 149eee3c0

UPCGDefaultExecutionSource * __thiscall
UPCGDefaultExecutionSource::UPCGDefaultExecutionSource(UPCGDefaultExecutionSource *this)

{
  UObject::UObject((UObject *)this);
  this->CurrentGenerationTask = 0xffffffffffffffff;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGraphExecutionSource__;
  (this->State)._padding_ = (longlong)&___7FPCGDefaultExecutionState__6B_;
  (this->GraphInterface).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  (this->State).Source = this;
  this->Seed = 0x2a;
  return this;
}

// ~UPCGDefaultExecutionSource @ 149eefd10

void __thiscall
UPCGDefaultExecutionSource::~UPCGDefaultExecutionSource(UPCGDefaultExecutionSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPCGGraphExecutionSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 149ef4370

void __cdecl
UPCGDefaultExecutionSource::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGDefaultExecutionSource>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UPCGDefaultExecutionSource>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// Generate @ 149efdbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGDefaultExecutionSource::Generate(UPCGDefaultExecutionSource *this)

{
  UPCGGraphInterface *pUVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  IPCGBaseSubsystem *this_00;
  TReferenceControllerBase<1> *pTVar4;
  ulong64 uVar5;
  longlong *plVar6;
  code **ppcVar7;
  IPCGGraphExecutionSource *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  UPCGGraph *pUVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 auStackY_248 [32];
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  FWeakObjectPtr local_1f8;
  IPCGBaseSubsystem *pIStack_1f0;
  FPCGDataCollection local_1e8;
  FPCGDataCollection local_1b8;
  FWeakObjectPtr local_188;
  IPCGBaseSubsystem *pIStack_180;
  code *local_178;
  longlong local_168 [3];
  longlong *local_150;
  FPCGScheduleGraphParams local_148;
  UPCGDefaultExecutionSource *local_f0;
  FWeakObjectPtr FStack_e8;
  IPCGBaseSubsystem *pIStack_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  IPCGGraphExecutionSource *local_a8;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((this->CurrentGenerationTask == 0xffffffffffffffff) &&
     (this_00 = (IPCGBaseSubsystem *)(**(code **)((this->State)._padding_ + 0xb0))(&this->State),
     this_00 != (IPCGBaseSubsystem *)0x0)) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    local_1b8.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.TaggedData.ArrayNum = 0;
    local_1b8.TaggedData.ArrayMax = 0;
    local_1b8.bCancelExecutionOnEmpty = false;
    local_1b8.bCancelExecution = false;
    local_1b8.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.DataCrcs.ArrayNum = 0;
    local_1b8.DataCrcs.ArrayMax = 0;
    local_1b8.InactiveOutputPinBitmask = 0;
    pTVar4 = ::operator_new(0x48);
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPCGInputForwardingElement___00_SharedPointerInternals__6B_
      ;
      FPCGInputForwardingElement::FPCGInputForwardingElement
                ((FPCGInputForwardingElement *)(pTVar4 + 1),&local_1b8);
      pTVar13 = pTVar4 + 1;
      if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      pTVar9 = pTVar4;
    }
    local_1e8.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.TaggedData.ArrayNum = 0;
    local_1e8.TaggedData.ArrayMax = 0;
    local_1e8.bCancelExecutionOnEmpty = false;
    local_1e8.bCancelExecution = false;
    local_1e8.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.DataCrcs.ArrayNum = 0;
    local_1e8.DataCrcs.ArrayMax = 0;
    local_1e8.InactiveOutputPinBitmask = 0;
    pTVar4 = ::operator_new(0x48);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFPCGInputForwardingElement___00_SharedPointerInternals__6B_
      ;
      FPCGInputForwardingElement::FPCGInputForwardingElement
                ((FPCGInputForwardingElement *)(pTVar4 + 1),&local_1e8);
      pTVar12 = pTVar4 + 1;
      if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.Graph = (UPCGGraph *)0x0;
    pUVar1 = (this->GraphInterface).field0_0x0.DebugPtr;
    pUVar10 = (UPCGGraph *)&this->_padding_;
    if (this == (UPCGDefaultExecutionSource *)0x0) {
      pUVar10 = local_148.Graph;
    }
    if (pUVar1 != (UPCGGraphInterface *)0x0) {
      local_148.Graph = (UPCGGraph *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.ExternalDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ExternalDependencies.ArrayNum = 0;
    local_148.ExternalDependencies.ArrayMax = 0;
    local_148.FromStack = (FPCGStack *)0x0;
    local_148.bAllowHierarchicalGeneration = false;
    local_148.ExecutionSource = (IPCGGraphExecutionSource *)pUVar10;
    local_148.PreGraphElement.Object = (IPCGElement *)pTVar12;
    local_148.PreGraphElement.SharedReferenceCount.ReferenceController = pTVar4;
    local_148.InputElement.Object = (IPCGElement *)pTVar13;
    local_148.InputElement.SharedReferenceCount.ReferenceController = pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (local_1e8.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_1e8.TaggedData.AllocatorInstance.Data,
               local_1e8.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_1e8.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_1e8.TaggedData.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (local_1b8.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_1b8.TaggedData.AllocatorInstance.Data,
               local_1b8.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_1b8.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_1b8.TaggedData.AllocatorInstance.Data);
    }
    uVar5 = IPCGBaseSubsystem::ScheduleGraph(this_00,&local_148);
    if (uVar5 != 0xffffffffffffffff) {
      local_208.Data = (FScriptContainerElement *)0x0;
      local_200 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_208,1,&local_1fc);
      *(ulong64 *)local_208.Data = uVar5;
      pIVar8 = (IPCGGraphExecutionSource *)&this->_padding_;
      if (this == (UPCGDefaultExecutionSource *)0x0) {
        pIVar8 = (IPCGGraphExecutionSource *)0x0;
      }
      local_1f8.ObjectIndex = 0;
      local_1f8.ObjectSerialNumber = 0;
      pIStack_1f0 = (IPCGBaseSubsystem *)0x0;
      local_188 = (FWeakObjectPtr)(**(code **)(this_00->_padding_ + 8))(this_00);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (FWeakObjectPtr)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_188);
      }
      FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_188);
      bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_1f8,(void *)0x0);
      if (!bVar3) {
        pIStack_1f0 = this_00;
      }
      local_178 = (code *)0x0;
      local_188 = local_1f8;
      FStack_e8 = local_1f8;
      pIStack_180 = pIStack_1f0;
      local_f0 = this;
      pIStack_e0 = pIStack_1f0;
      local_b0 = FMemory::Malloc(0x20,8);
      _Src.Data = local_208.Data;
      local_b0[1] = (code *)local_f0;
      *(FWeakObjectPtr *)(local_b0 + 2) = FStack_e8;
      *local_b0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::`11'::<lambda_1>,0,1>
                           ::_vftable_;
      local_b0[3] = (code *)pIStack_180;
      if (local_b0 != (code **)&DAT_fffffffffffffff8) {
        local_178 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UPCGDefaultExecutionSource::Generate'::__l11::<lambda_1>,bool,FPCGContext_*>
                    ::Call;
      }
      local_150 = (longlong *)0x0;
      local_d8[0] = local_178;
      local_c8[0]._0_4_ = (undefined4)local_168[0];
      local_c8[0]._4_4_ = local_168[0]._4_4_;
      local_c8[1]._0_4_ = (undefined4)local_168[1];
      local_c8[1]._4_4_ = local_168[1]._4_4_;
      local_c8[2] = (code *)local_168[2];
      if (local_178 != (code *)0x0) {
        local_178 = (code *)0x0;
      }
      lVar11 = (longlong)local_200;
      local_a8 = pIVar8;
      local_98 = 0;
      local_70 = (longlong *)0x0;
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = local_200;
      if (local_200 == 0) {
        local_5c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_200,0,&local_68,local_200,&local_5c);
        memcpy(local_68.Data,_Src.Data,lVar11 << 3);
      }
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
      local_48._0_1_ = true;
      local_48._1_1_ = true;
      if (local_178 != (code *)0x0) {
        plVar6 = local_168;
        if (local_150 != (longlong *)0x0) {
          plVar6 = local_150;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_208.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data);
      }
      uVar5 = IPCGBaseSubsystem::ScheduleGeneric(this_00,(FPCGScheduleGenericParams *)local_d8);
      this->CurrentGenerationTask = uVar5;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (local_98 != 0) {
        plVar6 = local_88;
        if (local_70 != (longlong *)0x0) {
          plVar6 = local_70;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_d8[0] != (code *)0x0) {
        ppcVar7 = local_d8 + 2;
        if (local_b0 != (code **)0x0) {
          ppcVar7 = local_b0;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
    if (local_148.ExternalDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.ExternalDependencies.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.InputElement.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.PreGraphElement.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetExecutionState @ 149effd70

IPCGGraphExecutionState * __thiscall
UPCGDefaultExecutionSource::GetExecutionState(UPCGDefaultExecutionSource *this)

{
  return (IPCGGraphExecutionState *)&this->_padding_;
}

// GetExecutionState @ 149effd80

IPCGGraphExecutionState * __thiscall
UPCGDefaultExecutionSource::GetExecutionState(UPCGDefaultExecutionSource *this)

{
  return (IPCGGraphExecutionState *)&this->_padding_;
}

// GetGraph @ 149f00600

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGDefaultExecutionSource::GetGraph(UPCGDefaultExecutionSource *this)

{
  UPCGGraphInterface *pUVar1;
  UPCGGraph *pUVar2;
  
  pUVar1 = (this->GraphInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f0060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UPCGGraph *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return pUVar2;
  }
  return (UPCGGraph *)0x0;
}

// GetGraphInstance @ 149f00830

UPCGGraphInstance * __thiscall
UPCGDefaultExecutionSource::GetGraphInstance(UPCGDefaultExecutionSource *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((this->GraphInterface).field0_0x0.DebugPtr != (UPCGGraphInterface *)0x0) {
    pUVar2 = UPCGGraphInstance::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->GraphInterface,pUVar2);
    if (bVar1) {
      return (UPCGGraphInstance *)(this->GraphInterface).field0_0x0.DebugPtr;
    }
  }
  return (UPCGGraphInstance *)0x0;
}

// GetPrivateStaticClass @ 149f04270

UClass * __cdecl UPCGDefaultExecutionSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDefaultExecutionSource",
               &Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton,
               StaticRegisterNativesUPCGDefaultExecutionSource,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGDefaultExecutionSource>,
               InternalVTableHelperCtorCaller<UPCGDefaultExecutionSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDefaultExecutionSource.InnerSingleton;
}

// Initialize @ 149f06ca0

void __thiscall
UPCGDefaultExecutionSource::Initialize
          (UPCGDefaultExecutionSource *this,FPCGDefaultExecutionSourceParams *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  
  pUVar1 = (UObject *)(this->GraphInterface).field0_0x0.DebugPtr;
  pUVar2 = (UObject *)param_1->GraphInterface;
  if (pUVar1 == (UObject *)0x0) {
    bVar3 = pUVar2 == (UObject *)0x0;
  }
  else {
    bVar3 = pUVar1 == pUVar2;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (this->GraphInterface).field0_0x0.DebugPtr = (UPCGGraphInterface *)pUVar2;
    this->Seed = param_1->Seed;
    return;
  }
  this->Seed = param_1->Seed;
  return;
}

// SetGraphInterface @ 149f11ef0

void __thiscall
UPCGDefaultExecutionSource::SetGraphInterface
          (UPCGDefaultExecutionSource *this,UPCGGraphInterface *param_1)

{
  UPCGGraphInterface *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->GraphInterface).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInterface *)0x0) {
    bVar2 = param_1 == (UPCGGraphInterface *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGGraphInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->GraphInterface).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// SetSeed @ 149f12930

void __thiscall UPCGDefaultExecutionSource::SetSeed(UPCGDefaultExecutionSource *this,int param_1)

{
  this->Seed = param_1;
  return;
}

// StaticRegisterNativesUPCGDefaultExecutionSource @ 149f13fb0

void __cdecl UPCGDefaultExecutionSource::StaticRegisterNativesUPCGDefaultExecutionSource(void)

{
  return;
}

// Sunset @ 149f14360

void __thiscall UPCGDefaultExecutionSource::Sunset(UPCGDefaultExecutionSource *this)

{
  return;
}

// _getUObject @ 149f165e0

UObject * __thiscall UPCGDefaultExecutionSource::_getUObject(UPCGDefaultExecutionSource *this)

{
  return (UObject *)&this[-1].CurrentGenerationTask;
}

