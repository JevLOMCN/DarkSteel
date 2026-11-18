// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a164560

UScriptStruct * __cdecl FRigVMFunction_AnimEvalRichCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimEvalRichCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimEvalRichCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve,
                         (UObject *)pUVar1,L"RigVMFunction_AnimEvalRichCurve");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimEvalRichCurve.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_AnimEvalRichCurve.OuterSingleton;
}

// GetExecuteContextStruct @ 14a1645e0

UScriptStruct * __thiscall
FRigVMFunction_AnimEvalRichCurve::GetExecuteContextStruct(FRigVMFunction_AnimEvalRichCurve *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a164870

void __thiscall FRigVMFunction_AnimEvalRichCurve::Execute(FRigVMFunction_AnimEvalRichCurve *this)

{
  float fVar1;
  float fVar2;
  FRichCurve *pFVar3;
  float fVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  fVar1 = this->TargetMaximum;
  fVar2 = this->TargetMinimum;
  fVar4 = (this->Value - this->SourceMinimum) / (this->SourceMaximum - this->SourceMinimum);
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  this->Result = fVar4;
  pFVar3 = FRuntimeFloatCurve::GetRichCurveConst(&this->Curve);
  if (0 < (pFVar3->Keys).ArrayNum) {
    pFVar3 = FRuntimeFloatCurve::GetRichCurveConst(&this->Curve);
    fVar4 = FRichCurve::Eval(pFVar3,this->Result,0.0);
    this->Result = fVar4;
  }
  this->Result = (fVar1 - fVar2) * this->Result + fVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_AnimEvalRichCurve @ 14a18bf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMFunction_AnimEvalRichCurve * __thiscall
FRigVMFunction_AnimEvalRichCurve::FRigVMFunction_AnimEvalRichCurve
          (FRigVMFunction_AnimEvalRichCurve *this)

{
  FRuntimeFloatCurve *pFVar1;
  FRichCurve *pFVar2;
  undefined1 in_R9B;
  float in_XMM1_Da;
  undefined1 auStackY_e8 [32];
  uint in_stack_ffffffffffffff38;
  FKeyHandle FVar3;
  FKeyHandle local_b8;
  FKeyHandle local_b4 [3];
  undefined1 local_a8 [72];
  void *local_60;
  undefined4 local_58;
  void *local_50;
  ForAnyElementType local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this->_padding_ = (longlong)&___7FRigVMFunction_AnimEvalRichCurve__6B_;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Curve);
  this->Result = 0.0;
  this->Value = 0.0;
  pFVar1 = FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_a8);
  FRuntimeFloatCurve::operator=(&this->Curve,pFVar1);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_a8._0_8_ = &___7FIndexedCurve__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 8));
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->Curve);
  FKeyHandle::FKeyHandle(&local_b8);
  FVar3.Index = in_stack_ffffffffffffff38 & 0xffffff00;
  FRichCurve::AddKey(pFVar2,in_XMM1_Da,0.0,(bool)in_R9B,FVar3);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->Curve);
  FKeyHandle::FKeyHandle(local_b4);
  FRichCurve::AddKey(pFVar2,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar3.Index & 0xffffff00));
  this->TargetMinimum = 0.0;
  this->SourceMinimum = 0.0;
  this->TargetMaximum = 1.0;
  this->SourceMaximum = 1.0;
  return this;
}

// ~FRigVMFunction_AnimEvalRichCurve @ 14a191620

void __thiscall
FRigVMFunction_AnimEvalRichCurve::~FRigVMFunction_AnimEvalRichCurve
          (FRigVMFunction_AnimEvalRichCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Curve).EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a19df80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_AnimEvalRichCurve::Execute
          (FRigVMFunction_AnimEvalRichCurve *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,this->Value,&this->Curve,this->SourceMinimum,this->SourceMaximum,
                this->TargetMinimum,this->TargetMaximum,&this->Result);
  return;
}

// RigVMExecute @ 14a1b6b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_AnimEvalRichCurve::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  float *pfVar9;
  FRuntimeFloatCurve *pFVar10;
  FRigVMMemoryHandle *pFVar11;
  FRigVMExecuteContext *pFVar12;
  
  iVar6 = param_2->ArrayNum;
  if (iVar6 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar11->Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
  fVar1 = *pfVar9;
  if (iVar6 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar10 = (FRuntimeFloatCurve *)pFVar11[1].Ptr;
  }
  else {
    pFVar10 = (FRuntimeFloatCurve *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  if (iVar6 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar11[2].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  fVar2 = *pfVar9;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar3 = *pfVar9;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar4 = *pfVar9;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar5 = *pfVar9;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,false,-1);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar12,fVar1,pFVar10,fVar2,fVar3,fVar4,fVar5,pfVar9);
  return;
}

// StaticExecute @ 14a1d9fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_AnimEvalRichCurve::StaticExecute
          (FRigVMExecuteContext *param_1,float param_2,FRuntimeFloatCurve *param_3,float param_4,
          float param_5,float param_6,float param_7,float *param_8)

{
  FRichCurve *pFVar1;
  float fVar2;
  
  fVar2 = (param_2 - param_4) / (param_5 - param_4);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_8 = fVar2;
  pFVar1 = FRuntimeFloatCurve::GetRichCurveConst(param_3);
  if (0 < (pFVar1->Keys).ArrayNum) {
    pFVar1 = FRuntimeFloatCurve::GetRichCurveConst(param_3);
    fVar2 = FRichCurve::Eval(pFVar1,*param_8,0.0);
    *param_8 = fVar2;
  }
  *param_8 = (param_7 - param_6) * *param_8 + param_6;
  return;
}

