// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a1491f0

UScriptStruct * __cdecl FRigVMFunction_MathMatrixFromVectors::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromVectors.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromVectors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixFromVectors");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromVectors.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromVectors.OuterSingleton;
}

// GetExecuteContextStruct @ 14a149270

UScriptStruct * __thiscall
FRigVMFunction_MathMatrixFromVectors::GetExecuteContextStruct
          (FRigVMFunction_MathMatrixFromVectors *this)

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

// Execute @ 14a149430

void __thiscall
FRigVMFunction_MathMatrixFromVectors::Execute(FRigVMFunction_MathMatrixFromVectors *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
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
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = (this->X).field0_0x0._s_0.Y;
  dVar4 = (this->X).field0_0x0._s_0.Z;
  dVar5 = (this->Y).field0_0x0._s_0.X;
  dVar6 = (this->Y).field0_0x0._s_0.Y;
  dVar1 = (this->Y).field0_0x0._s_0.Z;
  dVar7 = (this->Z).field0_0x0._s_0.X;
  dVar8 = (this->Z).field0_0x0._s_0.Y;
  dVar2 = (this->Z).field0_0x0._s_0.Z;
  (this->Result).M[0][0] = (this->X).field0_0x0._s_0.X;
  (this->Result).M[0][1] = dVar3;
  (this->Result).M[0][2] = dVar4;
  (this->Result).M[0][3] = 0.0;
  (this->Result).M[1][0] = dVar5;
  (this->Result).M[1][1] = dVar6;
  (this->Result).M[1][2] = dVar1;
  (this->Result).M[1][3] = 0.0;
  (this->Result).M[2][0] = dVar7;
  (this->Result).M[2][1] = dVar8;
  (this->Result).M[2][2] = dVar2;
  (this->Result).M[2][3] = 0.0;
  (this->Result).M[3][0] = (double)uVar9;
  (this->Result).M[3][1] = (double)uVar10;
  (this->Result).M[3][2] = (double)uVar11;
  (this->Result).M[3][3] = 1.0;
  (this->Result).M[3][0] = (this->Origin).field0_0x0._s_0.X;
  (this->Result).M[3][1] = (this->Origin).field0_0x0._s_0.Y;
  (this->Result).M[3][2] = (this->Origin).field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathMatrixFromVectors @ 14a18dbd0

FRigVMFunction_MathMatrixFromVectors * __thiscall
FRigVMFunction_MathMatrixFromVectors::FRigVMFunction_MathMatrixFromVectors
          (FRigVMFunction_MathMatrixFromVectors *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathMatrixFromVectors__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (this->Origin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->X).field0_0x0._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->X).field0_0x0._s_0.Y = (double)uVar1;
  (this->X).field0_0x0._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  (this->Y).field0_0x0._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  (this->Y).field0_0x0._s_0.Y = (double)uVar1;
  (this->Y).field0_0x0._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  (this->Z).field0_0x0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (this->Z).field0_0x0._s_0.Y = (double)uVar1;
  (this->Z).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Result).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Result).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Result).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Result).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Result).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Result).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Result).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Result).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Result).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Result).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Result).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Result).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Result).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Result).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Result).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Result).M[3][3] = dVar2;
  return this;
}

// Execute @ 14a1a0b50

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
FRigVMFunction_MathMatrixFromVectors::Execute
          (FRigVMFunction_MathMatrixFromVectors *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Origin,&this->X,&this->Y,&this->Z,&this->Result);
  return;
}

// RigVMExecute @ 14a1c66d0

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
FRigVMFunction_MathMatrixFromVectors::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  TVector<double> *pTVar8;
  TMatrix<double> *pTVar9;
  FRigVMExecuteContext *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar4 = (TVector<double> *)pFVar7->Ptr;
  }
  else {
    pTVar4 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TVector<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar7[2].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TMatrix<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar10,pTVar4,pTVar5,pTVar6,pTVar8,pTVar9);
  return;
}

// StaticExecute @ 14a1dec90

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
FRigVMFunction_MathMatrixFromVectors::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TMatrix<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = (param_4->field0_0x0)._s_0.X;
  dVar6 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  dVar7 = (param_5->field0_0x0)._s_0.X;
  dVar8 = (param_5->field0_0x0)._s_0.Y;
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  param_6->M[0][0] = (param_3->field0_0x0)._s_0.X;
  param_6->M[0][1] = dVar3;
  param_6->M[0][2] = dVar4;
  param_6->M[0][3] = 0.0;
  param_6->M[1][0] = dVar5;
  param_6->M[1][1] = dVar6;
  param_6->M[1][2] = dVar1;
  param_6->M[1][3] = 0.0;
  param_6->M[2][0] = dVar7;
  param_6->M[2][1] = dVar8;
  param_6->M[2][2] = dVar2;
  param_6->M[2][3] = 0.0;
  param_6->M[3][0] = (double)uVar9;
  param_6->M[3][1] = (double)uVar10;
  param_6->M[3][2] = (double)uVar11;
  param_6->M[3][3] = 1.0;
  param_6->M[3][0] = (param_2->field0_0x0)._s_0.X;
  param_6->M[3][1] = (param_2->field0_0x0)._s_0.Y;
  param_6->M[3][2] = (param_2->field0_0x0)._s_0.Z;
  return;
}

