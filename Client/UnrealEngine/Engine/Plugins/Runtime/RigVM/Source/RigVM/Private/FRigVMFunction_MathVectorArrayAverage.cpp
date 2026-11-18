// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1524b0

UScriptStruct * __cdecl FRigVMFunction_MathVectorArrayAverage::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArrayAverage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArrayAverage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArrayAverage,
                         (UObject *)pUVar1,L"RigVMFunction_MathVectorArrayAverage");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorArrayAverage_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArrayAverage.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorArrayAverage.OuterSingleton;
}

// GetExecuteContextStruct @ 14a152540

UScriptStruct * __thiscall
FRigVMFunction_MathVectorArrayAverage::GetExecuteContextStruct
          (FRigVMFunction_MathVectorArrayAverage *this)

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

// Execute @ 14a152980

/* WARNING: Removing unreachable block (ram,0x00014a152b90) */
/* WARNING: Removing unreachable block (ram,0x00014a152ba1) */

void __thiscall
FRigVMFunction_MathVectorArrayAverage::Execute(FRigVMFunction_MathVectorArrayAverage *this)

{
  TVector<double> *pTVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  
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
  pFVar9 = (this->Array).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pTVar1 = &this->Average;
  (pTVar1->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Average).field0_0x0._s_0.Y = (double)uVar7;
  (this->Average).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (iVar4 != 0) {
    pFVar2 = pFVar9 + (longlong)iVar4 * 0x18;
    if (pFVar9 != pFVar2) {
      dVar3 = (this->Average).field0_0x0._s_0.Y;
      dVar11 = (this->Average).field0_0x0._s_0.Z;
      dVar10 = (pTVar1->field0_0x0)._s_0.X;
      do {
        dVar10 = dVar10 + *(double *)pFVar9;
        (pTVar1->field0_0x0)._s_0.X = dVar10;
        dVar3 = dVar3 + *(double *)(pFVar9 + 8);
        (this->Average).field0_0x0._s_0.Y = dVar3;
        dVar11 = dVar11 + *(double *)(pFVar9 + 0x10);
        pFVar9 = pFVar9 + 0x18;
        (this->Average).field0_0x0._s_0.Z = dVar11;
      } while (pFVar9 != pFVar2);
    }
    dVar10 = (this->Average).field0_0x0._s_0.Y;
    dVar3 = __real_3ff0000000000000 / (double)iVar4;
    dVar11 = dVar3 * (this->Average).field0_0x0._s_0.Z;
    (pTVar1->field0_0x0)._s_0.X = dVar3 * (pTVar1->field0_0x0)._s_0.X;
    auVar6._8_4_ = SUB84(dVar11,0);
    auVar6._0_8_ = dVar3 * dVar10;
    auVar6._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Average).field0_0x0 + 8) = auVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a28c0

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
FRigVMFunction_MathVectorArrayAverage::Execute
          (FRigVMFunction_MathVectorArrayAverage *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  local_18.DataPtr = (TVector<double> *)(this->Array).AllocatorInstance.Data;
  iVar1 = (this->Array).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&local_18,&this->Average);
  return;
}

// RigVMExecute @ 14a1cd650

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
FRigVMFunction_MathVectorArrayAverage::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FRigVMExecuteContext *pFVar7;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
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
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  iVar1 = *(int *)(puVar6 + 8);
  pTVar3 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  local_18.DataPtr = *(TVector<double> **)puVar6;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar7,&local_18,pTVar3);
  return;
}

// StaticExecute @ 14a1e45c0

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
FRigVMFunction_MathVectorArrayAverage::StaticExecute
          (FRigVMExecuteContext *param_1,TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TVector<double> *param_3)

{
  TVector<double> *pTVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  TVector<double> *pTVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar4;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (param_2->ArrayNum != 0) {
    pTVar5 = param_2->DataPtr;
    pTVar1 = pTVar5 + param_2->ArrayNum;
    if (pTVar5 != pTVar1) {
      dVar2 = (param_3->field0_0x0)._s_0.Y;
      dVar7 = (param_3->field0_0x0)._s_0.Z;
      dVar6 = (param_3->field0_0x0)._s_0.X;
      do {
        dVar6 = dVar6 + (pTVar5->field0_0x0)._s_0.X;
        (param_3->field0_0x0)._s_0.X = dVar6;
        dVar2 = dVar2 + (pTVar5->field0_0x0)._s_0.Y;
        (param_3->field0_0x0)._s_0.Y = dVar2;
        dVar7 = dVar7 + (pTVar5->field0_0x0)._s_0.Z;
        pTVar5 = pTVar5 + 1;
        (param_3->field0_0x0)._s_0.Z = dVar7;
      } while (pTVar5 != pTVar1);
    }
    dVar7 = __real_3ff0000000000000 / (double)param_2->ArrayNum;
    dVar2 = dVar7 * (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = dVar7 * (param_3->field0_0x0)._s_0.Z;
    auVar3._8_4_ = SUB84(dVar2,0);
    auVar3._0_8_ = dVar7 * (param_3->field0_0x0)._s_0.X;
    auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])&param_3->field0_0x0 = auVar3;
  }
  return;
}

