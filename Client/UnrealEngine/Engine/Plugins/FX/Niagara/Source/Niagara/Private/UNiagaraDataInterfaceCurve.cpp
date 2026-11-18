// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// StaticClass @ 14907df40

UClass * __cdecl UNiagaraDataInterfaceCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCurve,0xf0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNiagaraDataInterfaceCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.InnerSingleton;
}

// SampleCurve<TIntegralConstant<bool,1>_> @ 1490aa3d0

void __thiscall
UNiagaraDataInterfaceCurve::SampleCurve<TIntegralConstant<bool,1>_>
          (UNiagaraDataInterfaceCurve *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 unaff_XMM7 [16];
  int local_90 [2];
  float *local_88;
  float *local_80;
  int local_78 [16];
  
  local_78[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  local_90[0] = 0;
  pfVar6 = pfVar6 + local_78[0] * param_1->PerInstanceFnInstanceIdx;
  local_88 = pfVar6;
  local_80 = pfVar6;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  fVar3 = __real_3f800000;
  iVar10 = 0;
  pfVar7 = pfVar7 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      fVar12 = (*pfVar6 - *(float *)&this->_padding_) * *(float *)&this->_padding_ * fVar1;
      if (fVar1 <= fVar12) {
        fVar12 = fVar1;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      unaff_XMM7 = roundps(unaff_XMM7,ZEXT416((uint)fVar12),3);
      fVar13 = unaff_XMM7._0_4_;
      fVar11 = fVar13;
      if (fVar13 < fVar1) {
        fVar11 = fVar13 + fVar3;
      }
      uVar9 = (uint)fVar13;
      uVar8 = (uint)fVar11;
      uVar5 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)(this->_padding_ + (longlong)(int)uVar9 * 4);
      uVar5 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = iVar10 + 1;
      pfVar6 = pfVar6 + local_78[0];
      *pfVar7 = (*(float *)(this->_padding_ + (longlong)(int)uVar8 * 4) - fVar1) * (fVar12 - fVar13)
                + fVar1;
      pfVar7 = pfVar7 + local_90[0];
      local_88 = pfVar6;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// SampleCurve<TIntegralConstant<bool,0>_> @ 1490aa8a0

void __thiscall
UNiagaraDataInterfaceCurve::SampleCurve<TIntegralConstant<bool,0>_>
          (UNiagaraDataInterfaceCurve *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  int local_30 [2];
  int local_28 [4];
  
  iVar4 = 0;
  local_28[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  lVar5 = (longlong)local_28[0];
  local_30[0] = 0;
  pfVar1 = pfVar1 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  lVar3 = (longlong)local_30[0];
  pfVar2 = pfVar2 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar6 = FRichCurve::Eval(&this->Curve,*pfVar1,0.0);
      *pfVar2 = fVar6;
      pfVar1 = pfVar1 + lVar5;
      pfVar2 = pfVar2 + lVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// UNiagaraDataInterfaceCurve @ 1490b4920

UNiagaraDataInterfaceCurve * __thiscall
UNiagaraDataInterfaceCurve::UNiagaraDataInterfaceCurve
          (UNiagaraDataInterfaceCurve *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurve__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Curve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Curve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Curve)._padding_ + 4) = 0;
  (this->Curve)._padding_ = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Curve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Curve)._padding_ + 4) = 0x404;
  (this->Curve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curve).Keys.ArrayNum = 0;
  (this->Curve).Keys.ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceCurve @ 1490b49e0

UNiagaraDataInterfaceCurve * __thiscall
UNiagaraDataInterfaceCurve::UNiagaraDataInterfaceCurve
          (UNiagaraDataInterfaceCurve *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UNiagaraDataInterfaceCurveBase::UNiagaraDataInterfaceCurveBase
            ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurve__6B_;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Curve)._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->Curve)._padding_ + 4) = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0xffffffff;
  (this->Curve)._padding_ = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curve).Keys.ArrayNum = 0;
  (this->Curve).Keys.ArrayMax = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Curve)._padding_ + 4) = 0x404;
  (this->Curve)._padding_ = (longlong)&___7FRichCurve__6B_;
  ::FName::FName(local_res8,L"Float Curve");
  this->_padding_ = (longlong)local_res8[0];
  UNiagaraDataInterfaceCurveBase::SetDefaultLUT((UNiagaraDataInterfaceCurveBase *)this);
  return this;
}

// ~UNiagaraDataInterfaceCurve @ 1490b92e0

void __thiscall
UNiagaraDataInterfaceCurve::~UNiagaraDataInterfaceCurve(UNiagaraDataInterfaceCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurve__6B_;
  pFVar1 = (this->Curve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Curve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Curve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Curve)._padding_ = 0;
  pvVar2 = (void *)(this->Curve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Curve)._padding_);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCurveBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildLUT @ 1490d07c0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraDataInterfaceCurve::BuildLUT
          (UNiagaraDataInterfaceCurve *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  float fVar8;
  float local_48 [12];
  
  iVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 < 2) {
    fVar8 = 0.0;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < 1) {
      return __return_storage_ptr__;
    }
  }
  else {
    fVar8 = __real_3f800000 / ((float)param_1 - __real_3f800000);
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_1,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  do {
    local_48[0] = FRichCurve::Eval(&this->Curve,
                                   ((float)iVar7 * fVar8) / *(float *)&this->_padding_ +
                                   *(float *)&this->_padding_,0.0);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)*piVar1 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    iVar7 = iVar7 + 1;
    *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_48[0]
    ;
  } while (iVar7 < param_1);
  return __return_storage_ptr__;
}

// CopyToInternal @ 1490d9750

bool __thiscall
UNiagaraDataInterfaceCurve::CopyToInternal
          (UNiagaraDataInterfaceCurve *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceCurveBase::CopyToInternal
                    ((UNiagaraDataInterfaceCurveBase *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      FRichCurve::operator=((FRichCurve *)(param_1 + 2),&this->Curve);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceCurve>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceCurve>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// Equals @ 1490f2c10

bool __thiscall
UNiagaraDataInterfaceCurve::Equals(UNiagaraDataInterfaceCurve *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceCurveBase::Equals((UNiagaraDataInterfaceCurveBase *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar2 = FRichCurve::operator==((FRichCurve *)(param_1 + 2),&this->Curve);
      return bVar2;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceCurve>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceCurve>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// GetCurveData @ 1491049b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceCurve::GetCurveData
          (UNiagaraDataInterfaceCurve *this,
          TArray<UNiagaraDataInterfaceCurveBase::FCurveData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRichCurve *local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28 = &this->Curve;
  lStack_20 = 0;
  local_18 = ___xmm_3f8000003d4ccccd3d4ccccd3f800000;
  uStack_10 = _UNK_150e74ab8;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 0x20)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x20;
  *(FRichCurve **)pFVar1 = local_28;
  *(longlong *)(pFVar1 + 8) = lStack_20;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
  *(undefined8 *)pFVar2 = local_18;
  *(undefined8 *)(pFVar2 + 8) = uStack_10;
  return;
}

// GetCurveNumElems @ 149104ac0

int __thiscall UNiagaraDataInterfaceCurve::GetCurveNumElems(UNiagaraDataInterfaceCurve *this)

{
  return 1;
}

// GetPrivateStaticClass @ 149109dd0

UClass * __cdecl UNiagaraDataInterfaceCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCurve",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCurve,0xf0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNiagaraDataInterfaceCurve>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCurve>,local_res8,
               UNiagaraDataInterfaceCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.InnerSingleton;
}

// GetVMExternalFunction @ 14910ed10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCurve::GetVMExternalFunction
          (UNiagaraDataInterfaceCurve *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FString local_28;
  FString local_18;
  
  if (((param_1->Name == SampleCurveName) && ((param_1->InputParamLocations).ArrayNum == 1)) &&
     (param_1->NumOutputs == 1)) {
    TCurveUseLUTBinder<TUNiagaraDataInterfaceCurve_SampleCurveBinder>::Bind<>
              ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    return;
  }
  if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,&local_18);
    if (this == (UNiagaraDataInterfaceCurve *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostInitProperties @ 149120aa0

void __thiscall UNiagaraDataInterfaceCurve::PostInitProperties(UNiagaraDataInterfaceCurve *this)

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

// Serialize @ 14912d140

void __thiscall
UNiagaraDataInterfaceCurve::Serialize(UNiagaraDataInterfaceCurve *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// Serialize @ 14912d190

void __thiscall
UNiagaraDataInterfaceCurve::Serialize
          (UNiagaraDataInterfaceCurve *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) &&
     (*(uint *)&this->_padding_ = (uint)this->_padding_ | 1, (this->_padding_ & 4) != 0)) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceCurve @ 149139ff0

void __cdecl UNiagaraDataInterfaceCurve::StaticRegisterNativesUNiagaraDataInterfaceCurve(void)

{
  return;
}

// UpdateTimeRanges @ 1491415b0

void __thiscall UNiagaraDataInterfaceCurve::UpdateTimeRanges(UNiagaraDataInterfaceCurve *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FRichCurveKey *pFVar4;
  FRichCurveKey local_28;
  
  fVar1 = __real_3f800000;
  if (0 < (this->Curve).Keys.ArrayNum) {
    pFVar4 = FRichCurve::GetFirstKey(&this->Curve,&local_28);
    *(float *)&this->_padding_ = pFVar4->Time;
    pFVar4 = FRichCurve::GetLastKey(&this->Curve,&local_28);
    fVar3 = __real_3f800000;
    fVar1 = pFVar4->Time;
    fVar2 = *(float *)&this->_padding_;
    *(float *)((longlong)&this->_padding_ + 4) = fVar1;
    *(float *)&this->_padding_ = fVar3 / (fVar1 - fVar2);
    return;
  }
  *(undefined4 *)&this->_padding_ = 0;
  *(float *)((longlong)&this->_padding_ + 4) = fVar1;
  *(float *)&this->_padding_ = fVar1;
  return;
}

