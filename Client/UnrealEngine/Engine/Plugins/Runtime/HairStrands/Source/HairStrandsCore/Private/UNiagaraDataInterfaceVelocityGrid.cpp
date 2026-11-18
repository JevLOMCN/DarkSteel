// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 23

// StaticClass @ 14e0cb540

UClass * __cdecl UNiagaraDataInterfaceVelocityGrid::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfaceVelocityGrid",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVelocityGrid,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVelocityGrid>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVelocityGrid>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton;
}

// UNiagaraDataInterfaceVelocityGrid @ 14e0d12c0

UNiagaraDataInterfaceVelocityGrid * __thiscall
UNiagaraDataInterfaceVelocityGrid::UNiagaraDataInterfaceVelocityGrid
          (UNiagaraDataInterfaceVelocityGrid *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVelocityGrid__6B_;
  return this;
}

// UNiagaraDataInterfaceVelocityGrid @ 14e0d12f0

UNiagaraDataInterfaceVelocityGrid * __thiscall
UNiagaraDataInterfaceVelocityGrid::UNiagaraDataInterfaceVelocityGrid
          (UNiagaraDataInterfaceVelocityGrid *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVelocityGrid__6B_;
  (this->GridSize).field0_0x0._s_0.X = 10;
  (this->GridSize).field0_0x0._s_0.Y = 10;
  (this->GridSize).field0_0x0._s_0.Z = 10;
  puVar1 = ::operator_new(0x60);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[1] = 0;
    *puVar1 = &___7FNDIVelocityGridProxy__6B_;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  this->NumAttributes = 6;
  return this;
}

// ~UNiagaraDataInterfaceVelocityGrid @ 14e0d1690

void __thiscall
UNiagaraDataInterfaceVelocityGrid::~UNiagaraDataInterfaceVelocityGrid
          (UNiagaraDataInterfaceVelocityGrid *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVelocityGrid__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// BuildShaderParameters @ 14e0d9160

void __thiscall
UNiagaraDataInterfaceVelocityGrid::BuildShaderParameters
          (UNiagaraDataInterfaceVelocityGrid *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIVelocityGridLocal::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xa0;
  return;
}

// BuildVelocityField @ 14e0d9220

void __thiscall
UNiagaraDataInterfaceVelocityGrid::BuildVelocityField
          (UNiagaraDataInterfaceVelocityGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// CanExecuteOnTarget @ 14e0d9470

bool __thiscall
UNiagaraDataInterfaceVelocityGrid::CanExecuteOnTarget
          (UNiagaraDataInterfaceVelocityGrid *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// ComputeGridSize @ 14e0d9fa0

void __thiscall
UNiagaraDataInterfaceVelocityGrid::ComputeGridSize
          (UNiagaraDataInterfaceVelocityGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// CopyToInternal @ 14e0dbd80

bool __thiscall
UNiagaraDataInterfaceVelocityGrid::CopyToInternal
          (UNiagaraDataInterfaceVelocityGrid *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      param_1[1]._padding_ = *(longlong *)&(this->GridSize).field0_0x0;
      *(int *)&param_1[1]._padding_ = (this->GridSize).field0_0x0._s_0.Z;
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceVelocityGrid>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceVelocityGrid>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 14e0e4ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData
          (UNiagaraDataInterfaceVelocityGrid *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FNDIVelocityGridData::Release(param_1);
  lStack_70 = this->_padding_;
  if (lStack_70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData185>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    lStack_40 = lStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceVelocityGrid::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData185>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// Equals @ 14e0e5210

bool __thiscall
UNiagaraDataInterfaceVelocityGrid::Equals
          (UNiagaraDataInterfaceVelocityGrid *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVelocityGrid_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVelocityGrid_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    if ((((int)param_1[1]._padding_ == (this->GridSize).field0_0x0._s_0.X) &&
        (*(int *)((longlong)&param_1[1]._padding_ + 4) == (this->GridSize).field0_0x0._s_0.Y)) &&
       ((int)param_1[1]._padding_ == (this->GridSize).field0_0x0._s_0.Z)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e0eaa30

UClass * __cdecl UNiagaraDataInterfaceVelocityGrid::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfaceVelocityGrid",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVelocityGrid,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVelocityGrid>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVelocityGrid>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVelocityGrid.InnerSingleton;
}

// GetVMExternalFunction @ 14e0f0cc0

void __thiscall
UNiagaraDataInterfaceVelocityGrid::GetVMExternalFunction
          (UNiagaraDataInterfaceVelocityGrid *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [8];
  FDelegateAllocation local_178;
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  undefined1 local_150 [8];
  FDelegateAllocation local_148;
  undefined1 local_138 [8];
  FDelegateAllocation local_130;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIVelocityGridLocal::BuildVelocityFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 0x1c) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 28 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceVelocityGrid.cpp"
                           ,0x169,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_198 = (undefined1  [8])0x0;
    local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_190.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_190;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_190);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_BuildVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_120);
    if ((local_190.DelegateSize != 0) &&
       (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
    }
    if (local_120.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
    }
    if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_190.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_198;
  }
  else if (FVar1 == NDIVelocityGridLocal::SampleVelocityFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 9) || (param_1->NumOutputs != 0x14)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 9 && BindingInfo.GetNumOutputs() == 20",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceVelocityGrid.cpp"
                           ,0x16e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_180 = (undefined1  [8])0x0;
    local_178.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_178.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_178;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_178);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SampleVelocityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_108);
    if ((local_178.DelegateSize != 0) &&
       (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_178.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_178,0,0,0x10);
      local_178.DelegateSize = 0;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_178.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_180;
  }
  else if (FVar1 == NDIVelocityGridLocal::ComputeGridSizeName) {
    if ((((param_1->InputParamLocations).ArrayNum != 7) || (param_1->NumOutputs != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 7 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceVelocityGrid.cpp"
                           ,0x173,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_168 = (undefined1  [8])0x0;
    local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_160.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_160;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_160);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_ComputeGridSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
               (FWriteAccessScope *)&local_f0);
    if ((local_160.DelegateSize != 0) &&
       (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_160,0,0,0x10);
      local_160.DelegateSize = 0;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_160.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_168;
  }
  else if (FVar1 == NDIVelocityGridLocal::UpdateGridTransformName) {
    if ((((param_1->InputParamLocations).ArrayNum != 0x11) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 17 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceVelocityGrid.cpp"
                           ,0x178,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_150 = (undefined1  [8])0x0;
    local_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_148.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_148;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_148);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_UpdateGridTransformBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_150);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
               (FWriteAccessScope *)&local_d8);
    if ((local_148.DelegateSize != 0) &&
       (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_148.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_148,0,0,0x10);
      local_148.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_148.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_150;
  }
  else {
    if (FVar1 != NDIVelocityGridLocal::SetGridDimensionName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceVelocityGrid.cpp"
                           ,0x17d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_138 = (undefined1  [8])0x0;
    local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_130.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_130;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_130);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVelocityGrid_SetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_138);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
               (FWriteAccessScope *)&local_c0);
    if ((local_130.DelegateSize != 0) &&
       (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_130,0,0,0x10);
      local_130.DelegateSize = 0;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_130.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_138;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// InitPerInstanceData @ 14e0f2370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceVelocityGrid::InitPerInstanceData
          (UNiagaraDataInterfaceVelocityGrid *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  FNDIVelocityGridBuffer *this_00;
  FNDIVelocityGridBuffer *pFVar10;
  FNDIVelocityGridBuffer *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar1 = (this->GridSize).field0_0x0._s_0.Z;
  iVar2 = (this->GridSize).field0_0x0._s_0.Y;
  iVar3 = (this->GridSize).field0_0x0._s_0.X;
  iVar5 = 0x32;
  if (iVar1 < 0x32) {
    iVar5 = iVar1;
  }
  iVar6 = 0x32;
  if (iVar2 < 0x32) {
    iVar6 = iVar2;
  }
  iVar13 = 0x32;
  if (iVar3 < 0x32) {
    iVar13 = iVar3;
  }
  pFVar11 = (FNDIVelocityGridBuffer *)0x0;
  iVar12 = 0;
  iVar14 = iVar12;
  if (0 < iVar13) {
    iVar14 = iVar13;
  }
  iVar13 = iVar12;
  if (0 < iVar6) {
    iVar13 = iVar6;
  }
  if (0 < iVar5) {
    iVar12 = iVar5;
  }
  if ((((iVar3 != iVar14) || (iVar2 != iVar13)) || (iVar1 != iVar12)) &&
     (2 < (byte)LogVelocityGrid._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVelocityGrid);
  }
  (this->GridSize).field0_0x0._s_0.X = iVar14;
  (this->GridSize).field0_0x0._s_0.Y = iVar13;
  (this->GridSize).field0_0x0._s_0.Z = iVar12;
  memset(param_1,0,0x130);
  if ((param_1 == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceVelocityGrid.cpp"
                         ,0xac,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar1 = this->NumAttributes;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][1];
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TMatrix<double>::Identity.M[0][0];
  *(double *)((longlong)param_1 + 0xa8) = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][3];
  *(double *)((longlong)param_1 + 0xb0) = UE::Math::TMatrix<double>::Identity.M[0][2];
  *(double *)((longlong)param_1 + 0xb8) = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][1];
  *(double *)((longlong)param_1 + 0xc0) = UE::Math::TMatrix<double>::Identity.M[1][0];
  *(double *)((longlong)param_1 + 200) = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][3];
  *(double *)((longlong)param_1 + 0xd0) = UE::Math::TMatrix<double>::Identity.M[1][2];
  *(double *)((longlong)param_1 + 0xd8) = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][1];
  *(double *)((longlong)param_1 + 0xe0) = UE::Math::TMatrix<double>::Identity.M[2][0];
  *(double *)((longlong)param_1 + 0xe8) = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][3];
  *(double *)((longlong)param_1 + 0xf0) = UE::Math::TMatrix<double>::Identity.M[2][2];
  *(double *)((longlong)param_1 + 0xf8) = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][1];
  *(double *)((longlong)param_1 + 0x100) = UE::Math::TMatrix<double>::Identity.M[3][0];
  *(double *)((longlong)param_1 + 0x108) = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][3];
  *(double *)((longlong)param_1 + 0x110) = UE::Math::TMatrix<double>::Identity.M[3][2];
  *(double *)((longlong)param_1 + 0x118) = dVar7;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_1 + 0xb8);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_1 + 0xc0);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_1 + 200);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_1 + 0xd0);
  *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_1 + 0xd8);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_1 + 0xe0);
  *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_1 + 0xe8);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_1 + 0xf0);
  *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_1 + 0xf8);
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_1 + 0x100);
  *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_1 + 0x108);
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_1 + 0x110);
  *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_1 + 0x118);
  if ((((this->GridSize).field0_0x0._s_0.X != 0) && ((this->GridSize).field0_0x0._s_0.Y != 0)) &&
     ((this->GridSize).field0_0x0._s_0.Z != 0)) {
    *(undefined8 *)param_1 = *(undefined8 *)&(this->GridSize).field0_0x0;
    iVar2 = (this->GridSize).field0_0x0._s_0.Z;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    *(int *)((longlong)param_1 + 8) = iVar2;
    this_00 = ::operator_new(0x60);
    pFVar10 = pFVar11;
    if (this_00 != (FNDIVelocityGridBuffer *)0x0) {
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      (this_00->GridDataBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      *(undefined8 *)&(this_00->GridDataBuffer).PixelFormat = 0;
      (this_00->GridDataBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (this_00->GridDataBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (this_00->GridDataBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (this_00->GridDataBuffer).NumBytes = 0;
      *(undefined8 *)&(this_00->GridSize).field0_0x0 = 0;
      *(undefined8 *)((longlong)&(this_00->GridSize).field0_0x0 + 8) = 0;
      pFVar10 = FNDIVelocityGridBuffer::FNDIVelocityGridBuffer(this_00);
    }
    *(FNDIVelocityGridBuffer **)((longlong)param_1 + 0x120) = pFVar10;
    pFVar10 = ::operator_new(0x60);
    if (pFVar10 != (FNDIVelocityGridBuffer *)0x0) {
      pFVar10->_padding_ = 0;
      pFVar10->_padding_ = 0;
      pFVar10->_padding_ = 0;
      pFVar10->_padding_ = 0;
      (pFVar10->GridDataBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      *(undefined8 *)&(pFVar10->GridDataBuffer).PixelFormat = 0;
      (pFVar10->GridDataBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (pFVar10->GridDataBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (pFVar10->GridDataBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (pFVar10->GridDataBuffer).NumBytes = 0;
      *(undefined8 *)&(pFVar10->GridSize).field0_0x0 = 0;
      *(undefined8 *)((longlong)&(pFVar10->GridSize).field0_0x0 + 8) = 0;
      pFVar11 = FNDIVelocityGridBuffer::FNDIVelocityGridBuffer(pFVar10);
    }
    *(FNDIVelocityGridBuffer **)((longlong)param_1 + 0x128) = pFVar11;
    FNDIVelocityGridData::Resize(param_1);
  }
  return true;
}

// PerInstanceDataSize @ 14e0f3f90

int __thiscall
UNiagaraDataInterfaceVelocityGrid::PerInstanceDataSize(UNiagaraDataInterfaceVelocityGrid *this)

{
  return 0x130;
}

// PerInstanceTick @ 14e0f44e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceVelocityGrid::PerInstanceTick
          (UNiagaraDataInterfaceVelocityGrid *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
  if (param_1 != (void *)0x0) {
    pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&param_2->WorldTransform,&local_88);
    dVar1 = pTVar2->M[0][1];
    *(double *)((longlong)param_1 + 0x20) = pTVar2->M[0][0];
    *(double *)((longlong)param_1 + 0x28) = dVar1;
    dVar1 = pTVar2->M[0][3];
    *(double *)((longlong)param_1 + 0x30) = pTVar2->M[0][2];
    *(double *)((longlong)param_1 + 0x38) = dVar1;
    dVar1 = pTVar2->M[1][1];
    *(double *)((longlong)param_1 + 0x40) = pTVar2->M[1][0];
    *(double *)((longlong)param_1 + 0x48) = dVar1;
    dVar1 = pTVar2->M[1][3];
    *(double *)((longlong)param_1 + 0x50) = pTVar2->M[1][2];
    *(double *)((longlong)param_1 + 0x58) = dVar1;
    dVar1 = pTVar2->M[2][1];
    *(double *)((longlong)param_1 + 0x60) = pTVar2->M[2][0];
    *(double *)((longlong)param_1 + 0x68) = dVar1;
    dVar1 = pTVar2->M[2][3];
    *(double *)((longlong)param_1 + 0x70) = pTVar2->M[2][2];
    *(double *)((longlong)param_1 + 0x78) = dVar1;
    dVar1 = pTVar2->M[3][1];
    *(double *)((longlong)param_1 + 0x80) = pTVar2->M[3][0];
    *(double *)((longlong)param_1 + 0x88) = dVar1;
    dVar1 = pTVar2->M[3][3];
    *(double *)((longlong)param_1 + 0x90) = pTVar2->M[3][2];
    *(double *)((longlong)param_1 + 0x98) = dVar1;
    if (*(char *)((longlong)param_1 + 0x10) != '\0') {
      FNDIVelocityGridData::Resize(param_1);
    }
  }
  return false;
}

// PostInitProperties @ 14e0f45f0

void __thiscall
UNiagaraDataInterfaceVelocityGrid::PostInitProperties(UNiagaraDataInterfaceVelocityGrid *this)

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

// ProvidePerInstanceDataForRenderThread @ 14e0f4b60

void __thiscall
UNiagaraDataInterfaceVelocityGrid::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceVelocityGrid *this,void *param_1,void *param_2,ulong64 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xb8);
  *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 200);
  *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
  *(undefined8 *)((longlong)param_1 + 200) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xd8);
  *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xe8);
  *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0xe0);
  *(undefined8 *)((longlong)param_1 + 0xe8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xf8);
  *(undefined8 *)((longlong)param_1 + 0xf0) = *(undefined8 *)((longlong)param_2 + 0xf0);
  *(undefined8 *)((longlong)param_1 + 0xf8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x108);
  *(undefined8 *)((longlong)param_1 + 0x100) = *(undefined8 *)((longlong)param_2 + 0x100);
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x118);
  *(undefined8 *)((longlong)param_1 + 0x110) = *(undefined8 *)((longlong)param_2 + 0x110);
  *(undefined8 *)((longlong)param_1 + 0x118) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x128) = *(undefined8 *)((longlong)param_2 + 0x128);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  return;
}

// SampleVelocityField @ 14e0f6450

void __thiscall
UNiagaraDataInterfaceVelocityGrid::SampleVelocityField
          (UNiagaraDataInterfaceVelocityGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SetGridDimension @ 14e0f6470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceVelocityGrid::SetGridDimension
          (UNiagaraDataInterfaceVelocityGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_50 [2];
  int local_48 [2];
  FUserPtrHandler<FNDIVelocityGridData> local_40;
  
  VectorVM::FUserPtrHandler<FNDIVelocityGridData>::FUserPtrHandler<FNDIVelocityGridData>
            (&local_40,param_1);
  iVar9 = 0;
  local_48[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar13 = (longlong)local_48[0];
  local_48[0] = 0;
  pfVar5 = pfVar5 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  lVar11 = (longlong)local_48[0];
  local_48[0] = 0;
  pfVar6 = pfVar6 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  lVar12 = (longlong)local_48[0];
  local_50[0] = 0;
  pfVar7 = pfVar7 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  puVar10 = (undefined1 *)
            ((longlong)(local_50[0] * param_1->PerInstanceFnInstanceIdx) + (longlong)pfVar8);
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar5;
      iVar9 = iVar9 + 1;
      pfVar5 = pfVar5 + lVar13;
      fVar2 = *pfVar6;
      pfVar6 = pfVar6 + lVar11;
      fVar3 = *pfVar7;
      ((local_40.Ptr)->GridSize).field0_0x0._s_0.X = (int)fVar1;
      pfVar7 = pfVar7 + lVar12;
      ((local_40.Ptr)->GridSize).field0_0x0._s_0.Y = (int)fVar2;
      ((local_40.Ptr)->GridSize).field0_0x0._s_0.Z = (int)fVar3;
      (local_40.Ptr)->NeedResize = true;
      *puVar10 = 1;
      puVar10 = puVar10 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// SetShaderParameters @ 14e0f72b0

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
UNiagaraDataInterfaceVelocityGrid::SetShaderParameters
          (UNiagaraDataInterfaceVelocityGrid *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FRDGBuilder *pFVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  bool bVar20;
  ulong64 uVar21;
  FNDIVelocityGridData *pFVar22;
  FShaderParametersMetadata *pFVar23;
  FRDGBufferSRV *pFVar24;
  FRDGBufferUAV *pFVar25;
  uint uVar26;
  float *pfVar27;
  
  pFVar1 = param_1->GraphBuilder;
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("DataInterfaceProxy",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                        ,0x1c1,L"");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar21 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar22 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
            ::Find((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                    *)(pFVar2 + 1),uVar21);
  uVar26 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar23 = TShaderParameterStructTypeInfo<NDIVelocityGridLocal::FShaderParameters>::
            GetStructMetadata();
  pfVar27 = (float *)(param_1->BaseParameters + uVar26);
  param_1->ParametersOffset = pFVar23->Size + uVar26;
  if ((((pFVar22 == (FNDIVelocityGridData *)0x0) ||
       (pFVar22->CurrentGridBuffer == (FNDIVelocityGridBuffer *)0x0)) ||
      (pFVar22->DestinationGridBuffer == (FNDIVelocityGridBuffer *)0x0)) ||
     (((int)pFVar22->CurrentGridBuffer->_padding_ == -1 ||
      ((int)pFVar22->DestinationGridBuffer->_padding_ == -1)))) {
    *(undefined8 *)(pfVar27 + 0x20) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    pfVar27[0x22] = (float)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)pfVar27 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)(pfVar27 + 2) = uVar19;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(pfVar27 + 4) = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)(pfVar27 + 6) = uVar19;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(pfVar27 + 8) = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)(pfVar27 + 10) = uVar19;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(pfVar27 + 0xc) = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)(pfVar27 + 0xe) = uVar19;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(pfVar27 + 0x10) = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)(pfVar27 + 0x12) = uVar19;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(pfVar27 + 0x14) = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)(pfVar27 + 0x16) = uVar19;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(pfVar27 + 0x18) = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)(pfVar27 + 0x1a) = uVar19;
    uVar19 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(pfVar27 + 0x1c) = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)(pfVar27 + 0x1e) = uVar19;
    pFVar24 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferSRV
                        (param_1->ComputeDispatchInterface,pFVar1,PF_R32_SINT);
    *(FRDGBufferSRV **)(pfVar27 + 0x24) = pFVar24;
    pFVar25 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferUAV
                        (param_1->ComputeDispatchInterface,pFVar1,PF_R32_SINT);
    *(FRDGBufferUAV **)(pfVar27 + 0x26) = pFVar25;
  }
  else {
    *(undefined8 *)(pfVar27 + 0x20) = *(undefined8 *)&(pFVar22->GridSize).field0_0x0;
    pfVar27[0x22] = (float)(pFVar22->GridSize).field0_0x0._s_0.Z;
    dVar4 = (pFVar22->WorldTransform).M[1][2];
    dVar5 = (pFVar22->WorldTransform).M[1][3];
    dVar6 = (pFVar22->WorldTransform).M[1][0];
    dVar7 = (pFVar22->WorldTransform).M[1][1];
    dVar8 = (pFVar22->WorldTransform).M[2][0];
    dVar9 = (pFVar22->WorldTransform).M[2][1];
    dVar10 = (pFVar22->WorldTransform).M[2][2];
    dVar11 = (pFVar22->WorldTransform).M[2][3];
    dVar12 = (pFVar22->WorldTransform).M[3][0];
    dVar13 = (pFVar22->WorldTransform).M[3][1];
    dVar14 = (pFVar22->WorldTransform).M[3][2];
    dVar15 = (pFVar22->WorldTransform).M[3][3];
    dVar16 = (pFVar22->WorldTransform).M[0][1];
    dVar17 = (pFVar22->WorldTransform).M[0][2];
    dVar18 = (pFVar22->WorldTransform).M[0][3];
    *pfVar27 = (float)(pFVar22->WorldTransform).M[0][0];
    pfVar27[1] = (float)dVar16;
    pfVar27[2] = (float)dVar17;
    pfVar27[3] = (float)dVar18;
    pfVar27[4] = (float)dVar6;
    pfVar27[5] = (float)dVar7;
    pfVar27[6] = (float)dVar4;
    pfVar27[7] = (float)dVar5;
    pfVar27[8] = (float)dVar8;
    pfVar27[9] = (float)dVar9;
    pfVar27[10] = (float)dVar10;
    pfVar27[0xb] = (float)dVar11;
    pfVar27[0xc] = (float)dVar12;
    pfVar27[0xd] = (float)dVar13;
    pfVar27[0xe] = (float)dVar14;
    pfVar27[0xf] = (float)dVar15;
    dVar4 = (pFVar22->WorldInverse).M[1][2];
    dVar5 = (pFVar22->WorldInverse).M[1][3];
    dVar6 = (pFVar22->WorldInverse).M[1][0];
    dVar7 = (pFVar22->WorldInverse).M[1][1];
    dVar8 = (pFVar22->WorldInverse).M[2][2];
    dVar9 = (pFVar22->WorldInverse).M[2][3];
    dVar10 = (pFVar22->WorldInverse).M[2][0];
    dVar11 = (pFVar22->WorldInverse).M[2][1];
    dVar12 = (pFVar22->WorldInverse).M[3][2];
    dVar13 = (pFVar22->WorldInverse).M[3][3];
    dVar14 = (pFVar22->WorldInverse).M[3][0];
    dVar15 = (pFVar22->WorldInverse).M[3][1];
    dVar16 = (pFVar22->WorldInverse).M[0][2];
    dVar17 = (pFVar22->WorldInverse).M[0][3];
    dVar18 = (pFVar22->WorldInverse).M[0][1];
    pfVar27[0x10] = (float)(pFVar22->WorldInverse).M[0][0];
    pfVar27[0x11] = (float)dVar18;
    pfVar27[0x12] = (float)dVar16;
    pfVar27[0x13] = (float)dVar17;
    pfVar27[0x14] = (float)dVar6;
    pfVar27[0x15] = (float)dVar7;
    pfVar27[0x16] = (float)dVar4;
    pfVar27[0x17] = (float)dVar5;
    pfVar27[0x18] = (float)dVar10;
    pfVar27[0x19] = (float)dVar11;
    pfVar27[0x1a] = (float)dVar8;
    pfVar27[0x1b] = (float)dVar9;
    pfVar27[0x1c] = (float)dVar14;
    pfVar27[0x1d] = (float)dVar15;
    pfVar27[0x1e] = (float)dVar12;
    pfVar27[0x1f] = (float)dVar13;
    pFVar24 = FNiagaraPooledRWBuffer::GetOrCreateSRV
                        (&pFVar22->CurrentGridBuffer->GridDataBuffer,pFVar1);
    *(FRDGBufferSRV **)(pfVar27 + 0x24) = pFVar24;
    pFVar25 = FNiagaraPooledRWBuffer::GetOrCreateUAV
                        (&pFVar22->DestinationGridBuffer->GridDataBuffer,pFVar1);
    *(FRDGBufferUAV **)(pfVar27 + 0x26) = pFVar25;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVelocityGrid @ 14e0f8490

void __cdecl
UNiagaraDataInterfaceVelocityGrid::StaticRegisterNativesUNiagaraDataInterfaceVelocityGrid(void)

{
  return;
}

// UpdateGridTransform @ 14e0f9c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceVelocityGrid::UpdateGridTransform
          (UNiagaraDataInterfaceVelocityGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FNDIVelocityGridData *pFVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 *puVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  undefined4 uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  undefined4 uVar41;
  uint uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined1 auStack_3d8 [48];
  int local_3a8 [2];
  float *local_3a0;
  float *local_398;
  float *local_390;
  float *local_388;
  float *local_380;
  float *local_378;
  float *local_370;
  float *local_368;
  float *local_360;
  float *local_358;
  float *local_350;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  int local_2b8 [2];
  longlong local_2b0;
  FUserPtrHandler<FNDIVelocityGridData> local_2a8 [2];
  int local_288 [6];
  int local_270 [6];
  int local_258 [6];
  int local_240 [6];
  int local_228 [6];
  int local_210 [6];
  int local_1f8 [6];
  int local_1e0 [6];
  int local_1c8 [6];
  int local_1b0 [6];
  int local_198 [6];
  int local_180 [2];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  VectorVM::FUserPtrHandler<FNDIVelocityGridData>::FUserPtrHandler<FNDIVelocityGridData>
            (local_2a8,param_1);
  iVar27 = 0;
  local_3a8[0] = 0;
  local_3a0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3a8);
  iVar14 = local_3a8[0];
  lVar25 = (longlong)local_3a8[0];
  local_3a8[0] = 0;
  local_3a0 = local_3a0 + iVar14 * param_1->PerInstanceFnInstanceIdx;
  local_398 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3a8);
  iVar14 = local_3a8[0];
  lVar32 = (longlong)local_3a8[0];
  local_3a8[0] = 0;
  local_398 = local_398 + iVar14 * param_1->PerInstanceFnInstanceIdx;
  local_390 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3a8);
  lVar33 = (longlong)local_3a8[0];
  local_288[0] = 0;
  local_390 = local_390 + local_3a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_388 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_288);
  local_270[0] = 0;
  local_388 = local_388 + local_288[0] * param_1->PerInstanceFnInstanceIdx;
  local_380 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_270);
  local_258[0] = 0;
  local_380 = local_380 + local_270[0] * param_1->PerInstanceFnInstanceIdx;
  local_378 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_258);
  local_240[0] = 0;
  local_378 = local_378 + local_258[0] * param_1->PerInstanceFnInstanceIdx;
  local_370 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_240);
  local_228[0] = 0;
  local_370 = local_370 + local_240[0] * param_1->PerInstanceFnInstanceIdx;
  local_368 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_228);
  local_210[0] = 0;
  local_368 = local_368 + local_228[0] * param_1->PerInstanceFnInstanceIdx;
  local_360 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_210);
  local_1f8[0] = 0;
  local_360 = local_360 + local_210[0] * param_1->PerInstanceFnInstanceIdx;
  local_358 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1f8);
  local_1e0[0] = 0;
  local_358 = local_358 + local_1f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_350 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1e0);
  local_1c8[0] = 0;
  local_350 = local_350 + local_1e0[0] * param_1->PerInstanceFnInstanceIdx;
  local_348 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1c8);
  local_1b0[0] = 0;
  local_348 = local_348 + local_1c8[0] * param_1->PerInstanceFnInstanceIdx;
  local_340 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1b0);
  local_198[0] = 0;
  local_340 = local_340 + local_1b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_338 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_198);
  local_180[0] = 0;
  local_338 = local_338 + local_198[0] * param_1->PerInstanceFnInstanceIdx;
  local_330 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_180);
  local_3a8[0] = 0;
  local_330 = local_330 + local_180[0] * param_1->PerInstanceFnInstanceIdx;
  local_328 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_3a8);
  local_2b8[0] = 0;
  local_328 = local_328 + local_3a8[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar16 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2b8);
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar11 = __real_3e45798ee0000000;
  if (0 < param_1->NumInstances) {
    local_2b0 = (longlong)local_1f8[0] << 2;
    local_318 = (longlong)local_1e0[0] << 2;
    local_310 = (longlong)local_1c8[0] << 2;
    local_308 = (longlong)local_1b0[0] << 2;
    local_300 = (longlong)local_198[0] << 2;
    local_2f8 = (longlong)local_180[0] << 2;
    local_320 = (longlong)local_288[0] << 2;
    lVar24 = (longlong)local_270[0] << 2;
    lVar28 = (longlong)local_258[0] << 2;
    lVar29 = (longlong)local_240[0] << 2;
    lVar30 = (longlong)local_228[0] << 2;
    lVar31 = (longlong)local_210[0] << 2;
    local_2f0 = (longlong)local_3a8[0] << 2;
    puVar26 = (undefined1 *)
              ((longlong)(local_2b8[0] * param_1->PerInstanceFnInstanceIdx) + (longlong)pfVar16);
    local_2e8 = lVar24;
    local_2e0 = lVar28;
    local_2d8 = lVar29;
    local_2d0 = lVar30;
    local_2c8 = lVar31;
    do {
      pFVar15 = local_2a8[0].Ptr;
      fVar8 = *local_3a0;
      local_3a0 = local_3a0 + lVar25;
      dVar10 = (double)fVar8;
      pfVar16 = local_398 + lVar32;
      uVar40 = SUB84((double)*local_398,0);
      uVar42 = (uint)((ulonglong)(double)*local_398 >> 0x20);
      pfVar1 = local_390 + lVar33;
      local_168 = (double)*local_390;
      pfVar2 = (float *)(local_320 + (longlong)local_388);
      dStack_160 = (double)*local_388;
      pfVar3 = (float *)(lVar24 + (longlong)local_380);
      local_158 = (double)*local_380;
      pfVar4 = (float *)(lVar28 + (longlong)local_378);
      dStack_150 = (double)*local_378;
      pfVar5 = (float *)(lVar29 + (longlong)local_370);
      local_148 = (double)*local_370;
      pfVar6 = (float *)(lVar30 + (longlong)local_368);
      dStack_140 = (double)*local_368;
      pfVar7 = (float *)(lVar31 + (longlong)local_360);
      pfVar17 = (float *)(local_2b0 + (longlong)local_358);
      local_138 = (double)*local_360;
      dStack_130 = (double)*local_358;
      pfVar18 = (float *)(local_318 + (longlong)local_350);
      local_128 = (double)*local_350;
      pfVar19 = (float *)(local_310 + (longlong)local_348);
      dStack_120 = (double)*local_348;
      pfVar20 = (float *)(local_308 + (longlong)local_340);
      local_118 = (double)*local_340;
      pfVar21 = (float *)(local_300 + (longlong)local_338);
      dStack_110 = (double)*local_338;
      pfVar22 = (float *)(local_2f8 + (longlong)local_330);
      local_108 = (double)*local_330;
      pfVar23 = (float *)(local_2f0 + (longlong)local_328);
      dStack_100 = (double)*local_328;
      local_178._8_4_ = uVar40;
      local_178._0_8_ = dVar10;
      local_178._12_4_ = uVar42;
      auVar9._8_4_ = uVar40;
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = uVar42;
      *(undefined1 (*) [16])((local_2a8[0].Ptr)->WorldTransform).M[0] = auVar9;
      ((local_2a8[0].Ptr)->WorldTransform).M[0][2] = local_168;
      ((local_2a8[0].Ptr)->WorldTransform).M[0][3] = dStack_160;
      ((local_2a8[0].Ptr)->WorldTransform).M[1][0] = local_158;
      ((local_2a8[0].Ptr)->WorldTransform).M[1][1] = dStack_150;
      ((local_2a8[0].Ptr)->WorldTransform).M[1][2] = local_148;
      ((local_2a8[0].Ptr)->WorldTransform).M[1][3] = dStack_140;
      ((local_2a8[0].Ptr)->WorldTransform).M[2][0] = local_138;
      ((local_2a8[0].Ptr)->WorldTransform).M[2][1] = dStack_130;
      ((local_2a8[0].Ptr)->WorldTransform).M[2][2] = local_128;
      ((local_2a8[0].Ptr)->WorldTransform).M[2][3] = dStack_120;
      ((local_2a8[0].Ptr)->WorldTransform).M[3][0] = local_118;
      ((local_2a8[0].Ptr)->WorldTransform).M[3][1] = dStack_110;
      ((local_2a8[0].Ptr)->WorldTransform).M[3][2] = local_108;
      ((local_2a8[0].Ptr)->WorldTransform).M[3][3] = dStack_100;
      uVar34 = SUB84(dVar10,0) & uVar12;
      uVar36 = (uint)((ulonglong)dVar10 >> 0x20) & uVar13;
      local_398 = pfVar16;
      local_390 = pfVar1;
      local_388 = pfVar2;
      local_380 = pfVar3;
      local_378 = pfVar4;
      local_370 = pfVar5;
      local_368 = pfVar6;
      local_360 = pfVar7;
      local_358 = pfVar17;
      local_350 = pfVar18;
      local_348 = pfVar19;
      local_340 = pfVar20;
      local_338 = pfVar21;
      local_330 = pfVar22;
      local_328 = pfVar23;
      if ((((((dVar11 <= (double)CONCAT44(uVar36,uVar34) &&
               (double)CONCAT44(uVar36,uVar34) != dVar11) ||
             (dVar11 <= (double)CONCAT44(uVar42 & uVar13,uVar40 & uVar12) &&
              (double)CONCAT44(uVar42 & uVar13,uVar40 & uVar12) != dVar11)) ||
            (uVar34 = SUB84(local_168,0) & uVar12,
            uVar36 = (uint)((ulonglong)local_168 >> 0x20) & uVar13,
            dVar11 <= (double)CONCAT44(uVar36,uVar34) && (double)CONCAT44(uVar36,uVar34) != dVar11))
           || ((uVar34 = SUB84(local_158,0) & uVar12,
               uVar36 = (uint)((ulonglong)local_158 >> 0x20) & uVar13,
               dVar11 <= (double)CONCAT44(uVar36,uVar34) &&
               (double)CONCAT44(uVar36,uVar34) != dVar11 ||
               (uVar34 = SUB84(dStack_150,0) & uVar12,
               uVar36 = (uint)((ulonglong)dStack_150 >> 0x20) & uVar13,
               dVar11 <= (double)CONCAT44(uVar36,uVar34) &&
               (double)CONCAT44(uVar36,uVar34) != dVar11)))) ||
          ((uVar34 = SUB84(local_148,0) & uVar12,
           uVar36 = (uint)((ulonglong)local_148 >> 0x20) & uVar13,
           dVar11 <= (double)CONCAT44(uVar36,uVar34) && (double)CONCAT44(uVar36,uVar34) != dVar11 ||
           ((uVar34 = SUB84(local_138,0) & uVar12,
            uVar36 = (uint)((ulonglong)local_138 >> 0x20) & uVar13,
            dVar11 <= (double)CONCAT44(uVar36,uVar34) && (double)CONCAT44(uVar36,uVar34) != dVar11
            || (uVar34 = SUB84(dStack_130,0) & uVar12,
               uVar36 = (uint)((ulonglong)dStack_130 >> 0x20) & uVar13,
               dVar11 <= (double)CONCAT44(uVar36,uVar34) &&
               (double)CONCAT44(uVar36,uVar34) != dVar11)))))) ||
         (uVar34 = SUB84(local_128,0) & uVar12,
         uVar36 = (uint)((ulonglong)local_128 >> 0x20) & uVar13,
         uVar35 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_,
         uVar37 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
         uVar38 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_,
         uVar39 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
         uVar41 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_,
         uVar43 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_,
         uVar44 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_,
         uVar45 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_,
         uVar46 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_,
         uVar47 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
         uVar48 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_,
         uVar49 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
         uVar50 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_,
         uVar51 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
         uVar52 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_,
         uVar53 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
         uVar54 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
         uVar55 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
         uVar56 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
         uVar57 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
         uVar58 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
         uVar59 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
         uVar60 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
         uVar61 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
         uVar62 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
         uVar63 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
         uVar64 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
         uVar65 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
         uVar66 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
         uVar67 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
         uVar68 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
         uVar69 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
         dVar11 <= (double)CONCAT44(uVar36,uVar34) && (double)CONCAT44(uVar36,uVar34) != dVar11)) {
        FMath::MatrixInverse(&local_f8,(TMatrix<double> *)local_178);
        lVar24 = local_2e8;
        lVar28 = local_2e0;
        lVar29 = local_2d8;
        lVar30 = local_2d0;
        lVar31 = local_2c8;
        uVar35 = local_f8.M[0][0]._0_4_;
        uVar37 = local_f8.M[0][0]._4_4_;
        uVar38 = local_f8.M[0][1]._0_4_;
        uVar39 = local_f8.M[0][1]._4_4_;
        uVar41 = local_f8.M[0][2]._0_4_;
        uVar43 = local_f8.M[0][2]._4_4_;
        uVar44 = local_f8.M[0][3]._0_4_;
        uVar45 = local_f8.M[0][3]._4_4_;
        uVar46 = local_f8.M[1][0]._0_4_;
        uVar47 = local_f8.M[1][0]._4_4_;
        uVar48 = local_f8.M[1][1]._0_4_;
        uVar49 = local_f8.M[1][1]._4_4_;
        uVar50 = local_f8.M[1][2]._0_4_;
        uVar51 = local_f8.M[1][2]._4_4_;
        uVar52 = local_f8.M[1][3]._0_4_;
        uVar53 = local_f8.M[1][3]._4_4_;
        uVar54 = local_f8.M[2][0]._0_4_;
        uVar55 = local_f8.M[2][0]._4_4_;
        uVar56 = local_f8.M[2][1]._0_4_;
        uVar57 = local_f8.M[2][1]._4_4_;
        uVar58 = local_f8.M[2][2]._0_4_;
        uVar59 = local_f8.M[2][2]._4_4_;
        uVar60 = local_f8.M[2][3]._0_4_;
        uVar61 = local_f8.M[2][3]._4_4_;
        uVar62 = local_f8.M[3][0]._0_4_;
        uVar63 = local_f8.M[3][0]._4_4_;
        uVar64 = local_f8.M[3][1]._0_4_;
        uVar65 = local_f8.M[3][1]._4_4_;
        uVar66 = local_f8.M[3][2]._0_4_;
        uVar67 = local_f8.M[3][2]._4_4_;
        uVar68 = local_f8.M[3][3]._0_4_;
        uVar69 = local_f8.M[3][3]._4_4_;
      }
      *(undefined4 *)(pFVar15->WorldInverse).M[0] = uVar35;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[0] + 4) = uVar37;
      *(undefined4 *)((pFVar15->WorldInverse).M[0] + 1) = uVar38;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[0] + 0xc) = uVar39;
      *(undefined4 *)((pFVar15->WorldInverse).M[0] + 2) = uVar41;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[0] + 0x14) = uVar43;
      *(undefined4 *)((pFVar15->WorldInverse).M[0] + 3) = uVar44;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[0] + 0x1c) = uVar45;
      iVar27 = iVar27 + 1;
      *(undefined4 *)(pFVar15->WorldInverse).M[1] = uVar46;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[1] + 4) = uVar47;
      *(undefined4 *)((pFVar15->WorldInverse).M[1] + 1) = uVar48;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[1] + 0xc) = uVar49;
      *(undefined4 *)((pFVar15->WorldInverse).M[1] + 2) = uVar50;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[1] + 0x14) = uVar51;
      *(undefined4 *)((pFVar15->WorldInverse).M[1] + 3) = uVar52;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[1] + 0x1c) = uVar53;
      *(undefined4 *)(pFVar15->WorldInverse).M[2] = uVar54;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[2] + 4) = uVar55;
      *(undefined4 *)((pFVar15->WorldInverse).M[2] + 1) = uVar56;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[2] + 0xc) = uVar57;
      *(undefined4 *)((pFVar15->WorldInverse).M[2] + 2) = uVar58;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[2] + 0x14) = uVar59;
      *(undefined4 *)((pFVar15->WorldInverse).M[2] + 3) = uVar60;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[2] + 0x1c) = uVar61;
      *(undefined4 *)(pFVar15->WorldInverse).M[3] = uVar62;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[3] + 4) = uVar63;
      *(undefined4 *)((pFVar15->WorldInverse).M[3] + 1) = uVar64;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[3] + 0xc) = uVar65;
      *(undefined4 *)((pFVar15->WorldInverse).M[3] + 2) = uVar66;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[3] + 0x14) = uVar67;
      *(undefined4 *)((pFVar15->WorldInverse).M[3] + 3) = uVar68;
      *(undefined4 *)((longlong)(pFVar15->WorldInverse).M[3] + 0x1c) = uVar69;
      *puVar26 = 1;
      puVar26 = puVar26 + local_2b8[0];
    } while (iVar27 < param_1->NumInstances);
  }
  return;
}

