// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1480f0

UScriptStruct * __cdecl FRigVMFunction_MathVectorParallel::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorParallel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorParallel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorParallel,
                         (UObject *)pUVar1,L"RigVMFunction_MathVectorParallel");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorParallel_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorParallel.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorParallel.OuterSingleton;
}

// GetExecuteContextStruct @ 14a148170

UScriptStruct * __thiscall
FRigVMFunction_MathVectorParallel::GetExecuteContextStruct(FRigVMFunction_MathVectorParallel *this)

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

// Execute @ 14a148280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FRigVMFunction_MathVectorParallel::Execute(FRigVMFunction_MathVectorParallel *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
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
  dVar3 = *(double *)&(this->A).field0_0x0;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)((longlong)&(this->A).field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)((longlong)&(this->A).field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (((dVar2 = *(double *)&(this->B).field0_0x0,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (uVar1 = *(undefined8 *)((longlong)&(this->B).field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)((longlong)&(this->B).field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    dVar3 = (this->B).field0_0x0._s_0.Y * (this->A).field0_0x0._s_0.Y + dVar3 * dVar2 +
            (this->B).field0_0x0._s_0.Z * (this->A).field0_0x0._s_0.Z;
    this->Result = ___real_3feffebb00000000 <=
                   (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  this->Result = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a31c0

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
FRigVMFunction_MathVectorParallel::Execute
          (FRigVMFunction_MathVectorParallel *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->A,&this->B,&this->Result);
  return;
}

// RigVMExecute @ 14a1d0630

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
FRigVMFunction_MathVectorParallel::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  bool *pbVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  FRigVMExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar2->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar3 = (bool *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar6,pTVar7,pbVar3);
  return;
}

// StaticExecute @ 14a1e5c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FRigVMFunction_MathVectorParallel::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)&param_2->field0_0x0;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (((dVar2 = *(double *)&param_3->field0_0x0,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    dVar3 = (param_2->field0_0x0)._s_0.Y * (param_3->field0_0x0)._s_0.Y + dVar2 * dVar3 +
            (param_2->field0_0x0)._s_0.Z * (param_3->field0_0x0)._s_0.Z;
    *param_4 = ___real_3feffebb00000000 <=
               (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    return;
  }
  *param_4 = false;
  return;
}

