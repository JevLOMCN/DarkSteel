// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a181d00

UScriptStruct * __cdecl FRigVMFunction_MathColorLerp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorLerp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorLerp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp,(UObject *)pUVar1,
                         L"RigVMFunction_MathColorLerp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorLerp.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorLerp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a181d80

UScriptStruct * __thiscall
FRigVMFunction_MathColorLerp::GetExecuteContextStruct(FRigVMFunction_MathColorLerp *this)

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

// Execute @ 14a181f20

void __thiscall FRigVMFunction_MathColorLerp::Execute(FRigVMFunction_MathColorLerp *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
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
  fVar1 = this->T;
  fVar2 = (this->B).field0_0x0._s_0.G;
  fVar3 = (this->A).field0_0x0._s_0.G;
  fVar4 = (this->B).field0_0x0._s_0.B;
  fVar5 = (this->A).field0_0x0._s_0.B;
  fVar6 = (this->B).field0_0x0._s_0.A;
  fVar7 = (this->A).field0_0x0._s_0.A;
  fVar8 = (this->A).field0_0x0._s_0.G;
  fVar9 = (this->A).field0_0x0._s_0.B;
  fVar10 = (this->A).field0_0x0._s_0.A;
  (this->Result).field0_0x0._s_0.R =
       ((this->B).field0_0x0._s_0.R - (this->A).field0_0x0._s_0.R) * fVar1 +
       (this->A).field0_0x0._s_0.R;
  (this->Result).field0_0x0._s_0.G = (fVar2 - fVar3) * fVar1 + fVar8;
  (this->Result).field0_0x0._s_0.B = (fVar4 - fVar5) * fVar1 + fVar9;
  (this->Result).field0_0x0._s_0.A = (fVar6 - fVar7) * fVar1 + fVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f1b0

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
FRigVMFunction_MathColorLerp::Execute
          (FRigVMFunction_MathColorLerp *this,FRigVMExecuteContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = this->T;
  fVar2 = (this->B).field0_0x0._s_0.B;
  fVar3 = (this->A).field0_0x0._s_0.B;
  fVar4 = (this->B).field0_0x0._s_0.A;
  fVar5 = (this->A).field0_0x0._s_0.A;
  fVar6 = (this->B).field0_0x0._s_0.G;
  fVar7 = (this->A).field0_0x0._s_0.G;
  fVar8 = (this->A).field0_0x0._s_0.B;
  fVar9 = (this->A).field0_0x0._s_0.G;
  fVar10 = (this->A).field0_0x0._s_0.A;
  (this->Result).field0_0x0._s_0.R =
       ((this->B).field0_0x0._s_0.R - (this->A).field0_0x0._s_0.R) * fVar1 +
       (this->A).field0_0x0._s_0.R;
  (this->Result).field0_0x0._s_0.G = (fVar6 - fVar7) * fVar1 + fVar9;
  (this->Result).field0_0x0._s_0.B = (fVar2 - fVar3) * fVar1 + fVar8;
  (this->Result).field0_0x0._s_0.A = (fVar4 - fVar5) * fVar1 + fVar10;
  return;
}

// RigVMExecute @ 14a1bc760

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
FRigVMFunction_MathColorLerp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FLinearColor *pFVar5;
  FLinearColor *pFVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  FLinearColor *pFVar9;
  FRigVMExecuteContext *pFVar10;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FLinearColor *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FLinearColor *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar5,pFVar6,fVar1,pFVar9);
  return;
}

// StaticExecute @ 14a1dd030

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
FRigVMFunction_MathColorLerp::StaticExecute
          (FRigVMExecuteContext *param_1,FLinearColor *param_2,FLinearColor *param_3,float param_4,
          FLinearColor *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (param_3->field0_0x0)._s_0.G;
  fVar2 = (param_2->field0_0x0)._s_0.G;
  fVar3 = (param_3->field0_0x0)._s_0.A;
  fVar4 = (param_2->field0_0x0)._s_0.A;
  fVar5 = (param_3->field0_0x0)._s_0.B;
  fVar6 = (param_2->field0_0x0)._s_0.B;
  fVar7 = (param_2->field0_0x0)._s_0.G;
  fVar8 = (param_2->field0_0x0)._s_0.B;
  fVar9 = (param_2->field0_0x0)._s_0.A;
  (param_5->field0_0x0)._s_0.R =
       ((param_3->field0_0x0)._s_0.R - (param_2->field0_0x0)._s_0.R) * param_4 +
       (param_2->field0_0x0)._s_0.R;
  (param_5->field0_0x0)._s_0.G = (fVar1 - fVar2) * param_4 + fVar7;
  (param_5->field0_0x0)._s_0.B = (fVar5 - fVar6) * param_4 + fVar8;
  (param_5->field0_0x0)._s_0.A = (fVar3 - fVar4) * param_4 + fVar9;
  return;
}

