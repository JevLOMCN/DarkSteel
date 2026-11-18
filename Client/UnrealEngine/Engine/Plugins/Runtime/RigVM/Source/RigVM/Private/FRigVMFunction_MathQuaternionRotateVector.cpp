// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11ad10

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionRotateVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionRotateVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11ae10

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionRotateVector::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionRotateVector *this)

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

// Execute @ 14a11b130

void __thiscall
FRigVMFunction_MathQuaternionRotateVector::Execute(FRigVMFunction_MathQuaternionRotateVector *this)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
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
  local_48._s_0.X = (this->Vector).field0_0x0._s_0.X;
  local_48._s_0.Y = (this->Vector).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->Vector).field0_0x0._s_0.Z;
  pTVar2 = UE::Math::TQuat<double>::RotateVector
                     (&this->Transform,&local_28,(TVector<double> *)&local_48._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->Result).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->Result).field0_0x0._s_0.Y = dVar1;
  (this->Result).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a13d0

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
FRigVMFunction_MathQuaternionRotateVector::Execute
          (FRigVMFunction_MathQuaternionRotateVector *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  local_48._s_0.X = (this->Vector).field0_0x0._s_0.X;
  local_48._s_0.Y = (this->Vector).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->Vector).field0_0x0._s_0.Z;
  pTVar2 = UE::Math::TQuat<double>::RotateVector
                     (&this->Transform,&local_28,(TVector<double> *)&local_48._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->Result).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->Result).field0_0x0._s_0.Y = dVar1;
  (this->Result).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// RigVMExecute @ 14a1c83b0

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
FRigVMFunction_MathQuaternionRotateVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TQuat<double> *this;
  double *pdVar7;
  TVector<double> *pTVar8;
  TVector<double>_u_0 local_58;
  TVector<double> local_38;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TQuat<double> *)pFVar2->Ptr;
  }
  else {
    this = (TQuat<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar7 = (double *)pFVar2[1].Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pdVar3 = (double *)param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  local_58._s_0.X = *pdVar7;
  local_58._s_0.Y = pdVar7[1];
  local_58._s_0.Z = pdVar7[2];
  pTVar8 = UE::Math::TQuat<double>::RotateVector(this,&local_38,(TVector<double> *)&local_58._s_0);
  dVar5 = (pTVar8->field0_0x0)._s_0.Y;
  *pdVar3 = (pTVar8->field0_0x0)._s_0.X;
  pdVar3[1] = dVar5;
  pdVar3[2] = (pTVar8->field0_0x0)._s_0.Z;
  return;
}

// StaticExecute @ 14a1df980

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
FRigVMFunction_MathQuaternionRotateVector::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  local_48._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  pTVar2 = UE::Math::TQuat<double>::RotateVector
                     (param_2,&local_28,(TVector<double> *)&local_48._s_0);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_4->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar1;
  (param_4->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

