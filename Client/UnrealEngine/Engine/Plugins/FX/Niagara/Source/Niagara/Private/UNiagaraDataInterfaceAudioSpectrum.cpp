// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 17

// StaticClass @ 14907d250

UClass * __cdecl UNiagaraDataInterfaceAudioSpectrum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioSpectrum",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioSpectrum,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioSpectrum>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioSpectrum>,local_res8,
               UNiagaraDataInterfaceAudioSubmix::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.InnerSingleton;
}

// UNiagaraDataInterfaceAudioSpectrum @ 1490b3e70

UNiagaraDataInterfaceAudioSpectrum * __thiscall
UNiagaraDataInterfaceAudioSpectrum::UNiagaraDataInterfaceAudioSpectrum
          (UNiagaraDataInterfaceAudioSpectrum *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioSpectrum__6B_;
  return this;
}

// UNiagaraDataInterfaceAudioSpectrum @ 1490b3eb0

UNiagaraDataInterfaceAudioSpectrum * __thiscall
UNiagaraDataInterfaceAudioSpectrum::UNiagaraDataInterfaceAudioSpectrum
          (UNiagaraDataInterfaceAudioSpectrum *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  FNiagaraDataInterfaceProxySpectrum *this_00;
  FNiagaraDataInterfaceProxySpectrum *pFVar2;
  
  UNiagaraDataInterfaceAudioSubmix::UNiagaraDataInterfaceAudioSubmix
            ((UNiagaraDataInterfaceAudioSubmix *)this,param_1);
  this->Resolution = 0x200;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioSpectrum__6B_;
  this->MinimumFrequency = 55.0;
  this->MaximumFrequency = 10000.0;
  this->NoiseFloorDb = -60.0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = ::operator_new(0x230);
    pFVar2 = (FNiagaraDataInterfaceProxySpectrum *)0x0;
    if (this_00 != (FNiagaraDataInterfaceProxySpectrum *)0x0) {
      pFVar2 = FNiagaraDataInterfaceProxySpectrum::FNiagaraDataInterfaceProxySpectrum
                         (this_00,this->MinimumFrequency,this->MaximumFrequency,this->Resolution,
                          this->NoiseFloorDb,0x4000);
    }
    puVar1 = (undefined8 *)this->_padding_;
    this->_padding_ = (longlong)pFVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return this;
}

// ~UNiagaraDataInterfaceAudioSpectrum @ 1490b9070

void __thiscall
UNiagaraDataInterfaceAudioSpectrum::~UNiagaraDataInterfaceAudioSpectrum
          (UNiagaraDataInterfaceAudioSpectrum *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioSubmix__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 1490d0c40

void __thiscall
UNiagaraDataInterfaceAudioSpectrum::BuildShaderParameters
          (UNiagaraDataInterfaceAudioSpectrum *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceAudioSpectrum::FShaderParameters>::
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

// CanExecuteOnTarget @ 1490d2a70

bool __thiscall
UNiagaraDataInterfaceAudioSpectrum::CanExecuteOnTarget
          (UNiagaraDataInterfaceAudioSpectrum *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1490d90a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceAudioSpectrum::CopyToInternal
          (UNiagaraDataInterfaceAudioSpectrum *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  FNiagaraDataInterfaceProxySpectrum *pFVar7;
  FWeakObjectPtr local_res10;
  UNiagaraDataInterface *local_res18;
  code *local_38 [2];
  undefined **local_28;
  FWeakObjectPtr local_20;
  undefined8 local_10;
  
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar6 = UNiagaraDataInterfaceAudioSubmix::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)this->_padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this->_padding_);
      }
      param_1[1]._padding_ = this->_padding_;
      bVar4 = IsInGameThread();
      if (bVar4) {
        pFVar2 = (param_1->Proxy).Ptr;
        if ((pFVar2 == (FNiagaraDataInterfaceProxy *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypedProxy != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                               ,0x3a0,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,this->_padding_);
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res18 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
        local_10 = 0;
        local_28 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::`10'::<lambda_1>,1,0>
                    ::_vftable_;
        local_20 = local_res10;
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::__l10::<lambda_1>,void>
                      ::Call;
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
      }
    }
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      *(int *)&param_1[1]._padding_ = this->Resolution;
      *(float *)((longlong)&param_1[1]._padding_ + 4) = this->MinimumFrequency;
      *(float *)&param_1[1]._padding_ = this->MaximumFrequency;
      *(float *)((longlong)&param_1[1]._padding_ + 4) = this->NoiseFloorDb;
      if (((uint)param_1->_padding_ >> 4 & 1) == 0) {
        pFVar7 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxySpectrum>(param_1);
        FNiagaraDataInterfaceProxySpectrum::UpdateCQT
                  (pFVar7,this->MinimumFrequency,this->MaximumFrequency,this->Resolution);
        pFVar7 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxySpectrum>(param_1);
        FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor(pFVar7,this->NoiseFloorDb);
      }
    }
  }
  return true;
}

// Equals @ 1490f25d0

bool __thiscall
UNiagaraDataInterfaceAudioSpectrum::Equals
          (UNiagaraDataInterfaceAudioSpectrum *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  UClass *pUVar4;
  FString *pFVar5;
  byte bVar6;
  wchar_t *pwVar7;
  byte bVar8;
  wchar_t *pwVar9;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    bVar8 = 0;
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar5 = GetTypeName<UNiagaraDataInterfaceAudioSubmix_const_>(&local_28);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
  }
  else {
    bVar8 = 1;
  }
  pUVar4 = UNiagaraDataInterfaceAudioSubmix::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    lVar2 = this->_padding_;
    lVar3 = param_1[1]._padding_;
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      bVar6 = 0;
      if ((int)param_1[1]._padding_ == this->Resolution) {
        bVar6 = lVar3 == lVar2 & bVar8;
      }
      return (bool)(this->MaximumFrequency == *(float *)&param_1[1]._padding_ &
                    bVar6 & this->MinimumFrequency ==
                            *(float *)((longlong)&param_1[1]._padding_ + 4) &
                   this->NoiseFloorDb == *(float *)((longlong)&param_1[1]._padding_ + 4));
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceAudioSpectrum_const_>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar9);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceAudioSubmix_const_>(&local_18);
  pwVar7 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_28,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar9);
}

// GetNumChannels @ 149107320

void __thiscall
UNiagaraDataInterfaceAudioSpectrum::GetNumChannels
          (UNiagaraDataInterfaceAudioSpectrum *this,FVectorVMExternalFunctionContext *param_1)

{
  FNiagaraDataInterfaceProxySubmix *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int local_20 [2];
  
  iVar6 = 0;
  local_20[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar2 = local_20[0];
  pfVar5 = pfVar5 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      this_00 = (FNiagaraDataInterfaceProxySubmix *)this->_padding_;
      if ((this_00 == (FNiagaraDataInterfaceProxySubmix *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar4 = (float)FNiagaraDataInterfaceProxySubmix::GetNumChannels(this_00);
      iVar6 = iVar6 + 1;
      *pfVar5 = fVar4;
      pfVar5 = pfVar5 + iVar2;
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 149109890

UClass * __cdecl UNiagaraDataInterfaceAudioSpectrum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioSpectrum",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioSpectrum,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioSpectrum>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioSpectrum>,local_res8,
               UNiagaraDataInterfaceAudioSubmix::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.InnerSingleton;
}

// GetSpectrumValue @ 14910a320

void __thiscall
UNiagaraDataInterfaceAudioSpectrum::GetSpectrumValue
          (UNiagaraDataInterfaceAudioSpectrum *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  FNiagaraDataInterfaceProxySpectrum *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  float *local_60;
  float *local_58;
  int local_50 [6];
  
  pFVar2 = (FNiagaraDataInterfaceProxySpectrum *)this->_padding_;
  if ((pFVar2 == (FNiagaraDataInterfaceProxySpectrum *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraDataInterfaceProxySpectrum::UpdateSpectrum(pFVar2);
  iVar11 = 0;
  local_68[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  iVar5 = local_68[0];
  local_50[0] = 0;
  pfVar8 = pfVar8 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = pfVar8;
  local_70 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar6 = local_50[0];
  local_80[0] = 0;
  pfVar9 = pfVar9 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  local_60 = pfVar9;
  local_58 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar4 = local_80[0];
  pfVar10 = pfVar10 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar9;
      fVar12 = *pfVar8;
      pFVar2 = (FNiagaraDataInterfaceProxySpectrum *)this->_padding_;
      if ((pFVar2 == (FNiagaraDataInterfaceProxySpectrum *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar12 = FNiagaraDataInterfaceProxySpectrum::GetSpectrumValue(pFVar2,fVar12,(int)fVar1);
      iVar11 = iVar11 + 1;
      *pfVar10 = fVar12;
      pfVar8 = pfVar8 + iVar5;
      pfVar9 = pfVar9 + iVar6;
      pfVar10 = pfVar10 + iVar4;
      local_78 = pfVar8;
      local_60 = pfVar9;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// GetVMExternalFunction @ 14910dc90

void __thiscall
UNiagaraDataInterfaceAudioSpectrum::GetVMExternalFunction
          (UNiagaraDataInterfaceAudioSpectrum *this,FVMExternalFunctionBindingInfo *param_1,
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
  
  if (param_1->Name == GetSpectrumFunctionName) {
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
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioSpectrum_GetSpectrumValueBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
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
  else if (param_1->Name == GetNumChannelsFunctionName) {
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
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceAudioSpectrum_GetNumChannelsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
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
    `UNiagaraDataInterfaceAudioSpectrum::GetVMExternalFunction'::__l11::<lambda_1>::operator()
              (local_res10);
  }
  return;
}

// PostInitProperties @ 1491206a0

void __thiscall
UNiagaraDataInterfaceAudioSpectrum::PostInitProperties(UNiagaraDataInterfaceAudioSpectrum *this)

{
  FNiagaraDataInterfaceProxySpectrum *pFVar1;
  code *pcVar2;
  bool bVar3;
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
  pFVar1 = (FNiagaraDataInterfaceProxySpectrum *)this->_padding_;
  if (pFVar1 == (FNiagaraDataInterfaceProxySpectrum *)0x0) {
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
  FNiagaraDataInterfaceProxySpectrum::UpdateCQT
            (pFVar1,this->MinimumFrequency,this->MaximumFrequency,this->Resolution);
  pFVar1 = (FNiagaraDataInterfaceProxySpectrum *)this->_padding_;
  if (pFVar1 == (FNiagaraDataInterfaceProxySpectrum *)0x0) {
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
  FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor(pFVar1,this->NoiseFloorDb);
  return;
}

// PostLoad @ 149120ce0

void __thiscall
UNiagaraDataInterfaceAudioSpectrum::PostLoad(UNiagaraDataInterfaceAudioSpectrum *this)

{
  longlong *plVar1;
  FNiagaraDataInterfaceProxySpectrum *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  UObject::PostLoad((UObject *)this);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this->_padding_);
  if ((this->_padding_ & 0x10) == 0) {
    pFVar2 = (FNiagaraDataInterfaceProxySpectrum *)this->_padding_;
    if (pFVar2 == (FNiagaraDataInterfaceProxySpectrum *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FNiagaraDataInterfaceProxySpectrum::UpdateCQT
              (pFVar2,this->MinimumFrequency,this->MaximumFrequency,this->Resolution);
    pFVar2 = (FNiagaraDataInterfaceProxySpectrum *)this->_padding_;
    if (pFVar2 == (FNiagaraDataInterfaceProxySpectrum *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor(pFVar2,this->NoiseFloorDb);
  }
  return;
}

// SetShaderParameters @ 149132ae0

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
UNiagaraDataInterfaceAudioSpectrum::SetShaderParameters
          (UNiagaraDataInterfaceAudioSpectrum *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxySubmix *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIShaderResourceView *pFVar6;
  undefined ***pppuVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraDataInterfaceProxySubmix *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataInterfaceProxySubmix *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FNiagaraDataInterfaceProxySubmix *)param_1->DataInterfaceProxy;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = this_00;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataInterfaceProxySpectrum::PostDataToGPU_::__l2::TSTR_FUpdateSpectrumBuffer158>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::TSTR_FUpdateSpectrumBuffer158>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar9 = (ulonglong)local_28;
    if (2 < uVar9) {
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
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar7 = local_30;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar7 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  uVar8 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceAudioSpectrum::FShaderParameters>::
           GetStructMetadata();
  piVar10 = (int *)(param_1->BaseParameters + uVar8);
  param_1->ParametersOffset = pFVar5->Size + uVar8;
  iVar3 = FNiagaraDataInterfaceProxySubmix::GetNumChannels(this_00);
  *piVar10 = iVar3;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudioSpectrum.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  piVar10[1] = (int)this_00[1]._padding_;
  pFVar6 = (FRHIShaderResourceView *)this_00[1].PatchMixer.CurrentInputs.AllocatorInstance.Data;
  if (pFVar6 == (FRHIShaderResourceView *)0x0) {
    pFVar6 = FNiagaraRenderer::GetDummyFloatBuffer();
  }
  *(FRHIShaderResourceView **)(piVar10 + 2) = pFVar6;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceAudioSpectrum @ 149139f80

void __cdecl
UNiagaraDataInterfaceAudioSpectrum::StaticRegisterNativesUNiagaraDataInterfaceAudioSpectrum(void)

{
  return;
}

// operator() @ 15053e0a0

bool __thiscall
`UNiagaraDataInterfaceAudioSpectrum::GetVMExternalFunction'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3664311332095655291>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3664311332095655291>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

