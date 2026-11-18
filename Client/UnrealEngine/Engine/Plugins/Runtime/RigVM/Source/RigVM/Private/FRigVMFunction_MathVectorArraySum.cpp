// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a151000

UScriptStruct * __cdecl FRigVMFunction_MathVectorArraySum::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArraySum.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArraySum.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArraySum,
                         (UObject *)pUVar1,L"RigVMFunction_MathVectorArraySum");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArraySum_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArraySum.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArraySum.OuterSingleton;
}

// GetExecuteContextStruct @ 14a151080

UScriptStruct * __thiscall
FRigVMFunction_MathVectorArraySum::GetExecuteContextStruct(FRigVMFunction_MathVectorArraySum *this)

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

// Execute @ 14a151530

/* WARNING: Removing unreachable block (ram,0x00014a1516cb) */
/* WARNING: Removing unreachable block (ram,0x00014a1516dc) */

void __thiscall FRigVMFunction_MathVectorArraySum::Execute(FRigVMFunction_MathVectorArraySum *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  iVar4 = (this->Array).ArrayNum;
  pFVar8 = (this->Array).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar1 = pFVar8 + (longlong)iVar4 * 0x18;
  (this->Sum).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Sum).field0_0x0._s_0.Y = (double)uVar6;
  (this->Sum).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pFVar8 != pFVar1) {
    dVar2 = (this->Sum).field0_0x0._s_0.Y;
    dVar9 = (this->Sum).field0_0x0._s_0.Z;
    dVar3 = (this->Sum).field0_0x0._s_0.X;
    do {
      dVar3 = dVar3 + *(double *)pFVar8;
      (this->Sum).field0_0x0._s_0.X = dVar3;
      dVar2 = dVar2 + *(double *)(pFVar8 + 8);
      (this->Sum).field0_0x0._s_0.Y = dVar2;
      dVar9 = dVar9 + *(double *)(pFVar8 + 0x10);
      pFVar8 = pFVar8 + 0x18;
      (this->Sum).field0_0x0._s_0.Z = dVar9;
    } while (pFVar8 != pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a2940

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
FRigVMFunction_MathVectorArraySum::Execute
          (FRigVMFunction_MathVectorArraySum *this,FRigVMExecuteContext *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = (this->Array).ArrayNum;
  pFVar7 = (this->Array).AllocatorInstance.Data;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar1 = pFVar7 + (longlong)iVar3 * 0x18;
  (this->Sum).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Sum).field0_0x0._s_0.Y = (double)uVar5;
  (this->Sum).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pFVar7 != pFVar1) {
    dVar8 = (this->Sum).field0_0x0._s_0.Y;
    dVar9 = (this->Sum).field0_0x0._s_0.Z;
    dVar2 = (this->Sum).field0_0x0._s_0.X;
    do {
      dVar2 = dVar2 + *(double *)pFVar7;
      (this->Sum).field0_0x0._s_0.X = dVar2;
      dVar8 = dVar8 + *(double *)(pFVar7 + 8);
      (this->Sum).field0_0x0._s_0.Y = dVar8;
      dVar9 = dVar9 + *(double *)(pFVar7 + 0x10);
      pFVar7 = pFVar7 + 0x18;
      (this->Sum).field0_0x0._s_0.Z = dVar9;
    } while (pFVar7 != pFVar1);
  }
  return;
}

// RigVMExecute @ 14a1cd780

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
FRigVMFunction_MathVectorArraySum::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  FRigVMMemoryHandle *pFVar4;
  double *pdVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uchar *puVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar4->Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal(pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property)
    ;
  }
  if (iVar3 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pdVar10 = *(double **)puVar9;
  iVar3 = *(int *)(puVar9 + 8);
  pdVar5 = (double *)param_2->DataPtr[1].Ptr;
  if (iVar3 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pdVar1 = pdVar10 + (longlong)iVar3 * 3;
  *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pdVar5[1] = (double)uVar7;
  pdVar5[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pdVar10 != pdVar1) {
    dVar2 = *pdVar5;
    dVar11 = pdVar5[1];
    dVar12 = pdVar5[2];
    do {
      dVar2 = dVar2 + *pdVar10;
      *pdVar5 = dVar2;
      dVar11 = dVar11 + pdVar10[1];
      pdVar5[1] = dVar11;
      dVar12 = dVar12 + pdVar10[2];
      pdVar10 = pdVar10 + 3;
      pdVar5[2] = dVar12;
    } while (pdVar10 != pdVar1);
  }
  return;
}

// StaticExecute @ 14a1e4680

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
FRigVMFunction_MathVectorArraySum::StaticExecute
          (FRigVMExecuteContext *param_1,TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TVector<double> *param_3)

{
  TVector<double> *pTVar1;
  double dVar2;
  undefined8 uVar3;
  TVector<double> *pTVar4;
  double dVar5;
  double dVar6;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar3;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pTVar4 = param_2->DataPtr;
  pTVar1 = pTVar4 + param_2->ArrayNum;
  if (pTVar4 != pTVar1) {
    dVar5 = (param_3->field0_0x0)._s_0.Y;
    dVar6 = (param_3->field0_0x0)._s_0.Z;
    dVar2 = (param_3->field0_0x0)._s_0.X;
    do {
      dVar2 = dVar2 + (pTVar4->field0_0x0)._s_0.X;
      (param_3->field0_0x0)._s_0.X = dVar2;
      dVar5 = dVar5 + (pTVar4->field0_0x0)._s_0.Y;
      (param_3->field0_0x0)._s_0.Y = dVar5;
      dVar6 = dVar6 + (pTVar4->field0_0x0)._s_0.Z;
      pTVar4 = pTVar4 + 1;
      (param_3->field0_0x0)._s_0.Z = dVar6;
    } while (pTVar4 != pTVar1);
  }
  return;
}

