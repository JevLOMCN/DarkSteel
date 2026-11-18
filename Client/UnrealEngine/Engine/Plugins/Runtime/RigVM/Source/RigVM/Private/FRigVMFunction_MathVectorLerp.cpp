// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a13a1a0

UScriptStruct * __cdecl FRigVMFunction_MathVectorLerp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorLerp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorLerp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLerp,(UObject *)pUVar1,
                         L"RigVMFunction_MathVectorLerp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorLerp_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorLerp.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorLerp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a13a220

UScriptStruct * __thiscall
FRigVMFunction_MathVectorLerp::GetExecuteContextStruct(FRigVMFunction_MathVectorLerp *this)

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

// Execute @ 14a13a3a0

void __thiscall FRigVMFunction_MathVectorLerp::Execute(FRigVMFunction_MathVectorLerp *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
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
  dVar3 = (this->A).field0_0x0._s_0.Y;
  dVar2 = (this->A).field0_0x0._s_0.Z;
  dVar4 = (this->B).field0_0x0._s_0.Y;
  dVar5 = (this->B).field0_0x0._s_0.Z;
  dVar6 = (double)this->T;
  (this->Result).field0_0x0._s_0.X =
       ((this->B).field0_0x0._s_0.X - (this->A).field0_0x0._s_0.X) * dVar6 +
       (this->A).field0_0x0._s_0.X;
  dVar2 = (dVar5 - dVar2) * dVar6 + dVar2;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (dVar4 - dVar3) * dVar6 + dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Result).field0_0x0 + 8) = auVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a2f20

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
FRigVMFunction_MathVectorLerp::Execute
          (FRigVMFunction_MathVectorLerp *this,FRigVMExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = (this->A).field0_0x0._s_0.Y;
  dVar2 = (this->A).field0_0x0._s_0.Z;
  dVar4 = (this->B).field0_0x0._s_0.Y;
  dVar5 = (this->B).field0_0x0._s_0.Z;
  dVar6 = (double)this->T;
  (this->Result).field0_0x0._s_0.X =
       ((this->B).field0_0x0._s_0.X - (this->A).field0_0x0._s_0.X) * dVar6 +
       (this->A).field0_0x0._s_0.X;
  dVar2 = (dVar5 - dVar2) * dVar6 + dVar2;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (dVar4 - dVar3) * dVar6 + dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Result).field0_0x0 + 8) = auVar1;
  return;
}

// RigVMExecute @ 14a1cf280

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
FRigVMFunction_MathVectorLerp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double *pdVar10;
  double *pdVar11;
  float *pfVar12;
  FRigVMMemoryHandle *pFVar13;
  double *pdVar14;
  double dVar15;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar10 = (double *)pFVar13->Ptr;
  }
  else {
    pdVar10 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar13->PropertyPath,pFVar13->Ptr,pFVar13->Property);
  }
  if (iVar2 < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar11 = (double *)pFVar13[1].Ptr;
  }
  else {
    pdVar11 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar13[1].PropertyPath,pFVar13[1].Ptr,pFVar13[1].Property);
  }
  if (iVar2 < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar12 = (float *)pFVar13[2].Ptr;
  }
  else {
    pfVar12 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar13[2].PropertyPath,pFVar13[2].Ptr,pFVar13[2].Property);
  }
  fVar1 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pdVar14 = (double *)FRigVMMemoryHandle::GetData_Internal(pFVar13,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  dVar6 = pdVar10[1];
  dVar5 = pdVar10[2];
  dVar7 = pdVar11[1];
  dVar8 = pdVar11[2];
  dVar15 = (double)fVar1;
  *pdVar14 = (*pdVar11 - *pdVar10) * dVar15 + *pdVar10;
  dVar5 = (dVar8 - dVar5) * dVar15 + dVar5;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (dVar7 - dVar6) * dVar15 + dVar6;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(pdVar14 + 1) = auVar4;
  return;
}

// StaticExecute @ 14a1e5640

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
FRigVMFunction_MathVectorLerp::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (double)param_4;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = ((param_3->field0_0x0)._s_0.Y - dVar5) * dVar7 + dVar5;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = ((param_3->field0_0x0)._s_0.X - dVar6) * dVar7 + dVar6;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&param_5->field0_0x0 = auVar4;
  (param_5->field0_0x0)._s_0.Z = (dVar1 - dVar2) * dVar7 + dVar3;
  return;
}

