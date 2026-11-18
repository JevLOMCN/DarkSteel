// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a14b2d0

UScriptStruct * __cdecl FRigVMFunction_MathDoubleIsNearlyEqual::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual,
                         (UObject *)pUVar1,L"RigVMFunction_MathDoubleIsNearlyEqual");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual.OuterSingleton;
}

// GetExecuteContextStruct @ 14a14b420

UScriptStruct * __thiscall
FRigVMFunction_MathDoubleIsNearlyEqual::GetExecuteContextStruct
          (FRigVMFunction_MathDoubleIsNearlyEqual *this)

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

// Execute @ 14a14b650

void __thiscall
FRigVMFunction_MathDoubleIsNearlyEqual::Execute(FRigVMFunction_MathDoubleIsNearlyEqual *this)

{
  double dVar1;
  double dVar2;
  
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
  dVar2 = this->A - this->B;
  dVar1 = this->Tolerance;
  if (this->Tolerance <= __real_3e45798ee0000000) {
    dVar1 = __real_3e45798ee0000000;
  }
  this->Result = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f7c0

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
FRigVMFunction_MathDoubleIsNearlyEqual::Execute
          (FRigVMFunction_MathDoubleIsNearlyEqual *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = this->A - this->B;
  dVar1 = this->Tolerance;
  if (this->Tolerance <= __real_3e45798ee0000000) {
    dVar1 = __real_3e45798ee0000000;
  }
  this->Result = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 dVar1;
  return;
}

// RigVMExecute @ 14a1be890

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
FRigVMFunction_MathDoubleIsNearlyEqual::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  double *pdVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar8->Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  dVar1 = *pdVar7;
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar8[1].Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  dVar2 = *pdVar7;
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar8[2].Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  dVar3 = *pdVar7;
  uVar10 = SUB84(dVar3,0);
  uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if (dVar3 <= __real_3e45798ee0000000) {
    uVar10 = SUB84(__real_3e45798ee0000000,0);
    uVar11 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  }
  *puVar9 = (double)CONCAT44((uint)((ulonglong)(dVar1 - dVar2) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1 - dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
            <= (double)CONCAT44(uVar11,uVar10);
  return;
}

// StaticExecute @ 14a1dd730

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
FRigVMFunction_MathDoubleIsNearlyEqual::StaticExecute
          (FRigVMExecuteContext *param_1,double param_2,double param_3,double param_4,bool *param_5)

{
  if (param_4 <= __real_3e45798ee0000000) {
    param_4 = __real_3e45798ee0000000;
  }
  *param_5 = (double)CONCAT44((uint)((ulonglong)(param_2 - param_3) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(param_2 - param_3,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_4;
  return;
}

