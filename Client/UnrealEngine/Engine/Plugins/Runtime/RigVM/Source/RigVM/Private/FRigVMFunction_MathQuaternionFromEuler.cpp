// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a179430

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionFromEuler::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionFromEuler");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler.OuterSingleton;
}

// GetExecuteContextStruct @ 14a1794f0

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionFromEuler::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionFromEuler *this)

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

// Execute @ 14a1796f0

void __thiscall
FRigVMFunction_MathQuaternionFromEuler::Execute(FRigVMFunction_MathQuaternionFromEuler *this)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
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
  pTVar2 = AnimationCore::QuatFromEuler(&local_28,&this->Euler,this->RotationOrder,false);
  dVar1 = pTVar2->Y;
  (this->Result).X = pTVar2->X;
  (this->Result).Y = dVar1;
  dVar1 = pTVar2->W;
  (this->Result).Z = pTVar2->Z;
  (this->Result).W = dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0d10

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
FRigVMFunction_MathQuaternionFromEuler::Execute
          (FRigVMFunction_MathQuaternionFromEuler *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
  pTVar2 = AnimationCore::QuatFromEuler(&local_28,&this->Euler,this->RotationOrder,false);
  dVar1 = pTVar2->Y;
  (this->Result).X = pTVar2->X;
  (this->Result).Y = dVar1;
  dVar1 = pTVar2->W;
  (this->Result).Z = pTVar2->Z;
  (this->Result).W = dVar1;
  return;
}

// RigVMExecute @ 14a1c7220

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
FRigVMFunction_MathQuaternionFromEuler::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EEulerRotationOrder EVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  EEulerRotationOrder *pEVar9;
  TQuat<double> *pTVar10;
  TQuat<double> local_38;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TVector<double> *)pFVar3->Ptr;
  }
  else {
    pTVar8 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar9 = pFVar3[1].Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  EVar1 = *pEVar9;
  if (iVar2 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pdVar4 = (double *)param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  pTVar10 = AnimationCore::QuatFromEuler(&local_38,pTVar8,EVar1,false);
  dVar6 = pTVar10->Y;
  *pdVar4 = pTVar10->X;
  pdVar4[1] = dVar6;
  dVar6 = pTVar10->W;
  pdVar4[2] = pTVar10->Z;
  pdVar4[3] = dVar6;
  return;
}

// StaticExecute @ 14a1df1c0

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
FRigVMFunction_MathQuaternionFromEuler::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,EEulerRotationOrder param_3,
          TQuat<double> *param_4)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
  pTVar2 = AnimationCore::QuatFromEuler(&local_28,param_2,param_3,false);
  dVar1 = pTVar2->Y;
  param_4->X = pTVar2->X;
  param_4->Y = dVar1;
  dVar1 = pTVar2->W;
  param_4->Z = pTVar2->Z;
  param_4->W = dVar1;
  return;
}

