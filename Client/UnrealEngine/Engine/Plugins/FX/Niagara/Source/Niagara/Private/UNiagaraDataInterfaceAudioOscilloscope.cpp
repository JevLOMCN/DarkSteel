// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// StaticClass @ 149077e20

UClass * __cdecl UNiagaraDataInterfaceAudioOscilloscope::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioOscilloscope",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioOscilloscope,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioOscilloscope>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioOscilloscope>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.InnerSingleton;
}

// UNiagaraDataInterfaceAudioOscilloscope @ 1490b3bd0

UNiagaraDataInterfaceAudioOscilloscope * __thiscall
UNiagaraDataInterfaceAudioOscilloscope::UNiagaraDataInterfaceAudioOscilloscope
          (UNiagaraDataInterfaceAudioOscilloscope *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioOscilloscope__6B_;
  this->_padding_ = 0;
  (this->Submix).field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  return this;
}

// UNiagaraDataInterfaceAudioOscilloscope @ 1490b3c10

UNiagaraDataInterfaceAudioOscilloscope * __thiscall
UNiagaraDataInterfaceAudioOscilloscope::UNiagaraDataInterfaceAudioOscilloscope
          (UNiagaraDataInterfaceAudioOscilloscope *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  FObjectInitializer *pFVar2;
  FNiagaraDataInterfaceProxyOscilloscope *this_00;
  FNiagaraDataInterfaceProxyOscilloscope *pFVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar2);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  pFVar3 = (FNiagaraDataInterfaceProxyOscilloscope *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioOscilloscope__6B_;
  this->_padding_ = 0;
  (this->Submix).field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  this->Resolution = 0x200;
  this->ScopeInMilliseconds = 20.0;
  this_00 = ::operator_new(0x1a8);
  if (this_00 != (FNiagaraDataInterfaceProxyOscilloscope *)0x0) {
    pFVar3 = FNiagaraDataInterfaceProxyOscilloscope::FNiagaraDataInterfaceProxyOscilloscope
                       (this_00,this->Resolution,this->ScopeInMilliseconds);
  }
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)pFVar3;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceAudioOscilloscope @ 1490b8fd0

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::~UNiagaraDataInterfaceAudioOscilloscope
          (UNiagaraDataInterfaceAudioOscilloscope *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioOscilloscope__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BeginDestroy @ 1490cccb0

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::BeginDestroy(UNiagaraDataInterfaceAudioOscilloscope *this)

{
  FNiagaraDataInterfaceProxyOscilloscope *this_00;
  FDelegateHandle FVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = (FNiagaraDataInterfaceProxyOscilloscope *)this->_padding_;
  if (this_00 == (FNiagaraDataInterfaceProxyOscilloscope *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1.ID = (this_00->DeviceCreatedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceCreated,FVar1);
  }
  FVar1.ID = (this_00->DeviceDestroyedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,FVar1);
  }
  (this_00->DeviceCreatedHandle).ID = 0;
  (this_00->DeviceDestroyedHandle).ID = 0;
  if (this_00->bIsSubmixListenerRegistered != false) {
    FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices
              (this_00,this_00->SubmixRegisteredTo);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BuildShaderParameters @ 1490d0b80

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::BuildShaderParameters
          (UNiagaraDataInterfaceAudioOscilloscope *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceAudioOscilloscope::FShaderParameters>
           ::GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x10;
  return;
}

// CanExecuteOnTarget @ 1490d2a50

bool __thiscall
UNiagaraDataInterfaceAudioOscilloscope::CanExecuteOnTarget
          (UNiagaraDataInterfaceAudioOscilloscope *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1490d8e20

bool __thiscall
UNiagaraDataInterfaceAudioOscilloscope::CopyToInternal
          (UNiagaraDataInterfaceAudioOscilloscope *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  USoundSubmix *pUVar2;
  FNiagaraDataInterfaceProxyOscilloscope *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar7 = StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->Submix).field0_0x0.DebugPtr, pUVar2 != (USoundSubmix *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<USoundSubmix>_u_0 *)(param_1 + 1) = (this->Submix).field0_0x0;
      pFVar3 = (FNiagaraDataInterfaceProxyOscilloscope *)(param_1->Proxy).Ptr;
      *(int *)&param_1[1]._padding_ = this->Resolution;
      *(float *)((longlong)&param_1[1]._padding_ + 4) = this->ScopeInMilliseconds;
      if (pFVar3 == (FNiagaraDataInterfaceProxyOscilloscope *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling
                (pFVar3,this->Resolution,this->ScopeInMilliseconds);
      pFVar3 = (FNiagaraDataInterfaceProxyOscilloscope *)(param_1->Proxy).Ptr;
      if (pFVar3 == (FNiagaraDataInterfaceProxyOscilloscope *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      FNiagaraDataInterfaceProxyOscilloscope::OnUpdateSubmix
                (pFVar3,(this->Submix).field0_0x0.DebugPtr);
    }
  }
  return true;
}

// Equals @ 1490f2420

bool __thiscall
UNiagaraDataInterfaceAudioOscilloscope::Equals
          (UNiagaraDataInterfaceAudioOscilloscope *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *pUVar3;
  
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar3 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_1490f2469;
  }
  pUVar3 = (UNiagaraDataInterface *)0x0;
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    return false;
  }
LAB_1490f2469:
  if ((((param_1->_padding_ == this->_padding_) &&
       ((USoundSubmix *)pUVar3[1]._padding_ == (this->Submix).field0_0x0.DebugPtr)) &&
      ((int)pUVar3[1]._padding_ == this->Resolution)) &&
     ((float)((uint)(*(float *)((longlong)&pUVar3[1]._padding_ + 4) - this->ScopeInMilliseconds) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    return true;
  }
  return false;
}

// GetNumChannels @ 149107250

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::GetNumChannels
          (UNiagaraDataInterfaceAudioOscilloscope *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  int local_20 [2];
  
  iVar6 = 0;
  local_20[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar3 = local_20[0];
  pfVar5 = pfVar5 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      lVar1 = this->_padding_;
      if ((lVar1 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = iVar6 + 1;
      *pfVar5 = *(float *)(lVar1 + 0x158);
      pfVar5 = pfVar5 + iVar3;
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 149109660

UClass * __cdecl UNiagaraDataInterfaceAudioOscilloscope::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioOscilloscope",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioOscilloscope,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioOscilloscope>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioOscilloscope>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.InnerSingleton;
}

// GetVMExternalFunction @ 14910cd30

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::GetVMExternalFunction
          (UNiagaraDataInterfaceAudioOscilloscope *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_res10 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_1->Name == SampleAudioBufferFunctionName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioOscilloscope_SampleAudioBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar1[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (param_1->Name == GetAudioBufferNumChannelsFunctionName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioOscilloscope_GetNumChannelsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar1[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else {
    `UNiagaraDataInterfaceAudioOscilloscope::GetVMExternalFunction'::__l11::<lambda_1>::operator()
              (local_res10);
  }
  return;
}

// PostInitProperties @ 149120560

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::PostInitProperties
          (UNiagaraDataInterfaceAudioOscilloscope *this)

{
  FNiagaraDataInterfaceProxyOscilloscope *pFVar1;
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
    return;
  }
  if ((((uint)this->_padding_ >> 10 & 1) == 0) && ((this->_padding_ & 8) == 0)) {
    pFVar1 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyOscilloscope>
                       ((UNiagaraDataInterface *)this);
    FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling
              (pFVar1,this->Resolution,this->ScopeInMilliseconds);
    pFVar1 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyOscilloscope>
                       ((UNiagaraDataInterface *)this);
    FNiagaraDataInterfaceProxyOscilloscope::OnUpdateSubmix
              (pFVar1,(this->Submix).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// PostLoad @ 149120c40

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::PostLoad(UNiagaraDataInterfaceAudioOscilloscope *this)

{
  FNiagaraDataInterfaceProxyOscilloscope *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  UObject::PostLoad((UObject *)this);
  pFVar1 = (FNiagaraDataInterfaceProxyOscilloscope *)this->_padding_;
  if (pFVar1 == (FNiagaraDataInterfaceProxyOscilloscope *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling
            (pFVar1,this->Resolution,this->ScopeInMilliseconds);
  pFVar1 = (FNiagaraDataInterfaceProxyOscilloscope *)this->_padding_;
  if (pFVar1 == (FNiagaraDataInterfaceProxyOscilloscope *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraDataInterfaceProxyOscilloscope::OnUpdateSubmix(pFVar1,(this->Submix).field0_0x0.DebugPtr);
  return;
}

// SampleAudio @ 14912c6d0

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::SampleAudio
          (UNiagaraDataInterfaceAudioOscilloscope *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  FNiagaraDataInterfaceProxyOscilloscope *this_00;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float *local_c8;
  int local_c0 [2];
  float *local_b8;
  float *local_b0;
  int local_a8 [2];
  float *local_a0;
  float *local_98;
  int local_90 [22];
  
  this_00 = (FNiagaraDataInterfaceProxyOscilloscope *)this->_padding_;
  if ((this_00 == (FNiagaraDataInterfaceProxyOscilloscope *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = FNiagaraDataInterfaceProxyOscilloscope::DownsampleAudioToBuffer(this_00);
  local_a8[0] = 0;
  local_b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a8);
  local_90[0] = 0;
  local_b8 = local_b8 + local_a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_b0 = local_b8;
  local_a0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_c0[0] = 0;
  local_a0 = local_a0 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  local_98 = local_a0;
  local_c8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  lVar2 = this->_padding_;
  local_c8 = local_c8 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  if ((lVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  fVar1 = *(float *)(lVar2 + 0x158);
  iVar14 = 0;
  if (0 < param_1->NumInstances) {
    do {
      lVar2 = this->_padding_;
      fVar16 = *local_b8;
      fVar15 = *local_a0;
      if ((lVar2 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((iVar8 == 0) || (fVar1 == 0.0)) {
        fVar15 = 0.0;
      }
      else {
        if (fVar5 <= fVar16) {
          fVar16 = fVar5;
        }
        fVar4 = fVar1;
        if ((int)fVar15 < (int)fVar1) {
          fVar4 = fVar15;
        }
        fVar10 = 0.0;
        if (0 < (int)fVar4) {
          fVar10 = fVar4;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 * (float)(iVar8 / (int)fVar1);
        iVar13 = (int)ROUND((fVar16 + fVar16) - fVar6) >> 1;
        uVar11 = iVar13 * (int)fVar1 + (int)fVar10;
        uVar9 = 0;
        if ((int)uVar11 < *(int *)(lVar2 + 0x168)) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = iVar13 + 1;
        if (iVar8 <= iVar13) {
          iVar12 = iVar13;
        }
        fVar15 = *(float *)(*(longlong *)(lVar2 + 0x160) + (longlong)(int)uVar11 * 4);
        uVar11 = iVar12 * (int)fVar1 + (int)fVar10;
        uVar9 = 0;
        if ((int)uVar11 < *(int *)(lVar2 + 0x168)) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar15 = (*(float *)(*(longlong *)(lVar2 + 0x160) + (longlong)(int)uVar11 * 4) - fVar15) *
                 ((float)iVar12 - fVar16) + fVar15;
      }
      iVar14 = iVar14 + 1;
      *local_c8 = fVar15;
      local_b8 = local_b8 + local_a8[0];
      local_a0 = local_a0 + local_90[0];
      local_c8 = local_c8 + local_c0[0];
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// SetShaderParameters @ 149132910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceAudioOscilloscope::SetShaderParameters
          (UNiagaraDataInterfaceAudioOscilloscope *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  FShaderParametersMetadata *pFVar6;
  FName FVar7;
  undefined ***pppuVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraDataInterfaceProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataInterfaceProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->DataInterfaceProxy;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = pFVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU_::__l2::TSTR_FUpdateDIAudioBuffer462>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::TSTR_FUpdateDIAudioBuffer462>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar10 = (ulonglong)local_28;
    if (2 < uVar10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar8 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar8 = local_30;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar8 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar8 = local_60;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  uVar9 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceAudioOscilloscope::FShaderParameters>
           ::GetStructMetadata();
  puVar2 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar6->Size + uVar9;
  *(uint *)(puVar2 + uVar9) = pFVar1[0x15].SourceDIName.ComparisonIndex.Value;
  FVar7 = pFVar1[0x14].SourceDIName;
  if (FVar7 == (FName)0x0) {
    FVar7 = (FName)FNiagaraRenderer::GetDummyFloatBuffer();
  }
  *(FName *)((longlong)(puVar2 + uVar9) + 8) = FVar7;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceAudioOscilloscope @ 149139f50

void __cdecl
UNiagaraDataInterfaceAudioOscilloscope::StaticRegisterNativesUNiagaraDataInterfaceAudioOscilloscope
          (void)

{
  return;
}

// operator() @ 15053e060

bool __thiscall
`UNiagaraDataInterfaceAudioOscilloscope::GetVMExternalFunction'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<936582687647334635>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<936582687647334635>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

