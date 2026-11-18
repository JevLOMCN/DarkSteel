// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 16

// StaticClass @ 14907d760

UClass * __cdecl UNiagaraDataInterfaceCurlNoise::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCurlNoise",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCurlNoise,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCurlNoise>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCurlNoise>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.InnerSingleton;
}

// UNiagaraDataInterfaceCurlNoise @ 1490b4830

UNiagaraDataInterfaceCurlNoise * __thiscall
UNiagaraDataInterfaceCurlNoise::UNiagaraDataInterfaceCurlNoise
          (UNiagaraDataInterfaceCurlNoise *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurlNoise__6B_;
  return this;
}

// UNiagaraDataInterfaceCurlNoise @ 1490b4860

UNiagaraDataInterfaceCurlNoise * __thiscall
UNiagaraDataInterfaceCurlNoise::UNiagaraDataInterfaceCurlNoise
          (UNiagaraDataInterfaceCurlNoise *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  TVector<float> *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  TVector<float> local_18;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  puVar4 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurlNoise__6B_;
  this->_padding_ = 0;
  this->Seed = 0;
  pTVar2 = SimplexNoiseOffsetFromSeed(&local_18,0);
  *(undefined8 *)&(this->OffsetFromSeed).field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
  (this->OffsetFromSeed).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  puVar3 = ::operator_new(0x20);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &___7FNiagaraDataInterfaceProxyCurlNoise__6B_;
    puVar3[2] = *(undefined8 *)&(this->OffsetFromSeed).field0_0x0;
    *(float *)(puVar3 + 3) = (this->OffsetFromSeed).field0_0x0._s_0.Z;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)this->_padding_;
  if ((puVar3 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceCurlNoise @ 1490b92c0

void __thiscall
UNiagaraDataInterfaceCurlNoise::~UNiagaraDataInterfaceCurlNoise
          (UNiagaraDataInterfaceCurlNoise *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurlNoise__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 1490d0f60

void __thiscall
UNiagaraDataInterfaceCurlNoise::BuildShaderParameters
          (UNiagaraDataInterfaceCurlNoise *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceCurlNoise::FShaderParameters>::
           GetStructMetadata();
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

// CanExecuteOnTarget @ 1490d2ab0

bool __thiscall
UNiagaraDataInterfaceCurlNoise::CanExecuteOnTarget
          (UNiagaraDataInterfaceCurlNoise *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1490d9670

bool __thiscall
UNiagaraDataInterfaceCurlNoise::CopyToInternal
          (UNiagaraDataInterfaceCurlNoise *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  float fVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    return false;
  }
  pUVar3 = StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    *(uint *)&param_1[1]._padding_ = this->Seed;
    *(undefined8 *)((longlong)&param_1[1]._padding_ + 4) =
         *(undefined8 *)&(this->OffsetFromSeed).field0_0x0;
    fVar2 = (this->OffsetFromSeed).field0_0x0._s_0.Z;
    param_1->bRenderDataDirty = 1;
    *(float *)((longlong)&param_1[1]._padding_ + 4) = fVar2;
    if (param_1->bRenderDataDirty == 1 && param_1->bUsedWithGPUScript == 1) {
      (**(code **)(param_1->_padding_ + 0x448))(param_1);
      param_1->bRenderDataDirty = 0;
    }
    return true;
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceCurlNoise>(&local_28);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar5);
}

// Equals @ 1490f2b50

bool __thiscall
UNiagaraDataInterfaceCurlNoise::Equals
          (UNiagaraDataInterfaceCurlNoise *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    return false;
  }
  pUVar2 = StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (uint)param_1[1]._padding_ == this->Seed;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceCurlNoise_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar4);
}

// GetPrivateStaticClass @ 149109d10

UClass * __cdecl UNiagaraDataInterfaceCurlNoise::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCurlNoise",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCurlNoise,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCurlNoise>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCurlNoise>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.InnerSingleton;
}

// GetVMExternalFunction @ 14910eb80

void __thiscall
UNiagaraDataInterfaceCurlNoise::GetVMExternalFunction
          (UNiagaraDataInterfaceCurlNoise *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_1->Name != SampleNoiseFieldName) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BindingInfo.Name == SampleNoiseFieldName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCurlNoise.cpp"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((param_1->InputParamLocations).ArrayNum != 3) || (param_1->NumOutputs != 3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BindingInfo.GetNumInputs() == 3 && BindingInfo.GetNumOutputs() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCurlNoise.cpp"
                       ,0x6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCurlNoise_SampleNoiseFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
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
  return;
}

// PostInitProperties @ 149120a20

void __thiscall
UNiagaraDataInterfaceCurlNoise::PostInitProperties(UNiagaraDataInterfaceCurlNoise *this)

{
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
  }
  return;
}

// PostLoad @ 149120e30

void __thiscall UNiagaraDataInterfaceCurlNoise::PostLoad(UNiagaraDataInterfaceCurlNoise *this)

{
  float fVar1;
  longlong lVar2;
  TVector<float> *pTVar3;
  TVector<float> local_18;
  
  UObject::PostLoad((UObject *)this);
  pTVar3 = SimplexNoiseOffsetFromSeed(&local_18,this->Seed);
  *(undefined8 *)&(this->OffsetFromSeed).field0_0x0 = *(undefined8 *)&pTVar3->field0_0x0;
  fVar1 = (pTVar3->field0_0x0)._s_0.Z;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  lVar2 = this->_padding_;
  (this->OffsetFromSeed).field0_0x0._s_0.Z = fVar1;
  if ((lVar2 & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// PushToRenderThreadImpl @ 149125840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl(UNiagaraDataInterfaceCurlNoise *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
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
  local_a8 = *(undefined8 *)&(this->OffsetFromSeed).field0_0x0;
  local_90 = (this->OffsetFromSeed).field0_0x0._s_0.Z;
  local_88[0] = (code *)0x0;
  local_a0 = lVar1;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  uStack_98 = (undefined4)local_a8;
  uStack_94 = (undefined4)((ulonglong)local_a8 >> 0x20);
  *(undefined4 *)(local_60 + 1) = (undefined4)local_a0;
  *(undefined4 *)((longlong)local_60 + 0xc) = local_a0._4_4_;
  *(undefined4 *)(local_60 + 2) = uStack_98;
  *(undefined4 *)((longlong)local_60 + 0x14) = uStack_94;
  local_60[3] = (code *)CONCAT44(uStack_8c,local_90);
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl_::__l2::TSTR_FUpdateDIColorCurve185>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl'::__l2::TSTR_FUpdateDIColorCurve185>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar5 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar5 = local_30;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar5 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar5 = local_60;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  return;
}

// SampleNoiseField @ 14912cb50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceCurlNoise::SampleNoiseField
          (UNiagaraDataInterfaceCurlNoise *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *local_res18;
  float *local_res20;
  undefined1 local_b8 [16];
  int local_a8 [4];
  float *local_98;
  float *local_90;
  float *local_88;
  float *local_80;
  longlong local_78;
  int local_70 [2];
  FNiagaraMatrix3x4 local_68;
  
  iVar5 = 0;
  local_a8[0] = 0;
  local_98 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a8);
  iVar4 = local_a8[0];
  lVar10 = (longlong)local_a8[0];
  local_a8[0] = 0;
  local_98 = local_98 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a8);
  iVar4 = local_a8[0];
  lVar9 = (longlong)local_a8[0];
  local_a8[0] = 0;
  local_res20 = local_res20 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a8);
  lVar6 = (longlong)local_a8[0];
  local_b8._8_4_ = 0.0;
  iVar4 = local_a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = FVectorVMExternalFunctionContext::GetNextRegister
                       (param_1,(int *)&(((TVector<float>_u_0 *)local_b8)->_s_0).Z);
  uVar1 = local_b8._8_4_;
  lVar7 = (longlong)(int)local_b8._8_4_;
  local_b8._8_4_ = 0.0;
  local_90 = local_90 + uVar1 * param_1->PerInstanceFnInstanceIdx;
  local_88 = FVectorVMExternalFunctionContext::GetNextRegister
                       (param_1,(int *)&(((TVector<float>_u_0 *)local_b8)->_s_0).Z);
  local_70[0] = 0;
  local_88 = local_88 + local_b8._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  if (0 < param_1->NumInstances) {
    local_78 = (longlong)local_70[0] << 2;
    lVar8 = (longlong)(int)local_b8._8_4_;
    local_res18 = pfVar2 + iVar4;
    local_80 = pfVar3 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      local_b8._4_4_ = (this->OffsetFromSeed).field0_0x0._s_0.Y + *local_res20;
      local_res20 = local_res20 + lVar9;
      local_b8._0_4_ = *local_98;
      local_98 = local_98 + lVar10;
      local_b8._0_4_ = (float)local_b8._0_4_ + (this->OffsetFromSeed).field0_0x0._s_0.X;
      local_b8._8_4_ = *local_res18 + (this->OffsetFromSeed).field0_0x0._s_0.Z;
      JacobianSimplex_ALU(&local_68,(TVector<float> *)&((TVector<float>_u_0 *)local_b8)->_s_0);
      iVar5 = iVar5 + 1;
      *local_90 = local_68.row1.field0_0x0._s_0.Z - local_68.row2.field0_0x0._s_0.Y;
      local_90 = local_90 + lVar7;
      *local_88 = local_68.row2.field0_0x0._s_0.X - local_68.row0.field0_0x0._s_0.Z;
      local_88 = local_88 + lVar8;
      *local_80 = local_68.row0.field0_0x0._s_0.Y - local_68.row1.field0_0x0._s_0.X;
      local_res18 = local_res18 + lVar6;
      local_80 = (float *)(local_78 + (longlong)local_80);
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

// SetShaderParameters @ 149133120

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
UNiagaraDataInterfaceCurlNoise::SetShaderParameters
          (UNiagaraDataInterfaceCurlNoise *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uint uVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  uint uVar7;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar7 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceCurlNoise::FShaderParameters>::
           GetStructMetadata();
  param_1->ParametersOffset = pFVar6->Size + uVar7;
  puVar3 = param_1->BaseParameters;
  uVar1 = pFVar2[1].SourceDIName.ComparisonIndex.Value;
  *(longlong *)(puVar3 + uVar7) = pFVar2[1]._padding_;
  *(uint *)(puVar3 + (ulonglong)uVar7 + 8) = uVar1;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceCurlNoise @ 149139fe0

void __cdecl
UNiagaraDataInterfaceCurlNoise::StaticRegisterNativesUNiagaraDataInterfaceCurlNoise(void)

{
  return;
}

