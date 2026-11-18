// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a148410

UScriptStruct * __cdecl FRigVMFunction_MathMatrixToVectors::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixToVectors.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixToVectors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixToVectors");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixToVectors.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixToVectors.OuterSingleton;
}

// GetExecuteContextStruct @ 14a148490

UScriptStruct * __thiscall
FRigVMFunction_MathMatrixToVectors::GetExecuteContextStruct
          (FRigVMFunction_MathMatrixToVectors *this)

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

// Execute @ 14a1487e0

void __thiscall
FRigVMFunction_MathMatrixToVectors::Execute(FRigVMFunction_MathMatrixToVectors *this)

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
  dVar1 = (this->Value).M[0][1];
  dVar2 = (this->Value).M[0][2];
  (this->X).field0_0x0._s_0.X = (this->Value).M[0][0];
  (this->X).field0_0x0._s_0.Y = dVar1;
  (this->X).field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Value).M[1][1];
  dVar2 = (this->Value).M[1][2];
  (this->Y).field0_0x0._s_0.X = (this->Value).M[1][0];
  (this->Y).field0_0x0._s_0.Y = dVar1;
  (this->Y).field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Value).M[2][1];
  dVar2 = (this->Value).M[2][2];
  (this->Z).field0_0x0._s_0.X = (this->Value).M[2][0];
  (this->Z).field0_0x0._s_0.Y = dVar1;
  (this->Z).field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Value).M[3][1];
  dVar2 = (this->Value).M[3][2];
  (this->Origin).field0_0x0._s_0.X = (this->Value).M[3][0];
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathMatrixToVectors @ 14a18ded0

FRigVMFunction_MathMatrixToVectors * __thiscall
FRigVMFunction_MathMatrixToVectors::FRigVMFunction_MathMatrixToVectors
          (FRigVMFunction_MathMatrixToVectors *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathMatrixToVectors__6B_;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Value).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Value).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Value).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Value).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Value).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Value).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Value).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Value).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Value).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Value).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Value).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Value).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Value).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Value).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Value).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Value).M[3][3] = dVar2;
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
  return this;
}

// Execute @ 14a1a0c00

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
FRigVMFunction_MathMatrixToVectors::Execute
          (FRigVMFunction_MathMatrixToVectors *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->Value).M[0][1];
  dVar2 = (this->Value).M[0][2];
  (this->X).field0_0x0._s_0.X = (this->Value).M[0][0];
  (this->X).field0_0x0._s_0.Y = dVar1;
  (this->X).field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Value).M[1][1];
  dVar2 = (this->Value).M[1][2];
  (this->Y).field0_0x0._s_0.X = (this->Value).M[1][0];
  (this->Y).field0_0x0._s_0.Y = dVar1;
  (this->Y).field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Value).M[2][1];
  dVar2 = (this->Value).M[2][2];
  (this->Z).field0_0x0._s_0.X = (this->Value).M[2][0];
  (this->Z).field0_0x0._s_0.Y = dVar1;
  (this->Z).field0_0x0._s_0.Z = dVar2;
  dVar1 = (this->Value).M[3][1];
  dVar2 = (this->Value).M[3][2];
  (this->Origin).field0_0x0._s_0.X = (this->Value).M[3][0];
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = dVar2;
  return;
}

// RigVMExecute @ 14a1c6be0

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
FRigVMFunction_MathMatrixToVectors::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uchar *puVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  uchar *puVar11;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar2 = param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = param_2->DataPtr[2].Ptr;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar5 = *(undefined8 *)(puVar8 + 8);
  uVar6 = *(undefined8 *)(puVar8 + 0x10);
  *(undefined8 *)puVar3 = *(undefined8 *)puVar8;
  *(undefined8 *)(puVar3 + 8) = uVar5;
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  uVar5 = *(undefined8 *)(puVar8 + 0x28);
  uVar6 = *(undefined8 *)(puVar8 + 0x30);
  *(undefined8 *)puVar10 = *(undefined8 *)(puVar8 + 0x20);
  *(undefined8 *)(puVar10 + 8) = uVar5;
  *(undefined8 *)(puVar10 + 0x10) = uVar6;
  uVar5 = *(undefined8 *)(puVar8 + 0x48);
  uVar6 = *(undefined8 *)(puVar8 + 0x50);
  *(undefined8 *)puVar11 = *(undefined8 *)(puVar8 + 0x40);
  *(undefined8 *)(puVar11 + 8) = uVar5;
  *(undefined8 *)(puVar11 + 0x10) = uVar6;
  uVar5 = *(undefined8 *)(puVar8 + 0x68);
  uVar6 = *(undefined8 *)(puVar8 + 0x70);
  *(undefined8 *)puVar2 = *(undefined8 *)(puVar8 + 0x60);
  *(undefined8 *)(puVar2 + 8) = uVar5;
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  return;
}

// StaticExecute @ 14a1defb0

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
FRigVMFunction_MathMatrixToVectors::StaticExecute
          (FRigVMExecuteContext *param_1,TMatrix<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_2->M[0][1];
  dVar2 = param_2->M[0][2];
  (param_4->field0_0x0)._s_0.X = param_2->M[0][0];
  (param_4->field0_0x0)._s_0.Y = dVar1;
  (param_4->field0_0x0)._s_0.Z = dVar2;
  dVar1 = param_2->M[1][1];
  dVar2 = param_2->M[1][2];
  (param_5->field0_0x0)._s_0.X = param_2->M[1][0];
  (param_5->field0_0x0)._s_0.Y = dVar1;
  (param_5->field0_0x0)._s_0.Z = dVar2;
  dVar1 = param_2->M[2][1];
  dVar2 = param_2->M[2][2];
  (param_6->field0_0x0)._s_0.X = param_2->M[2][0];
  (param_6->field0_0x0)._s_0.Y = dVar1;
  (param_6->field0_0x0)._s_0.Z = dVar2;
  dVar1 = param_2->M[3][1];
  dVar2 = param_2->M[3][2];
  (param_3->field0_0x0)._s_0.X = param_2->M[3][0];
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = dVar2;
  return;
}

