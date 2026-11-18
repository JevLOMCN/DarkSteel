// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a179bf0

UScriptStruct * __cdecl FRigVMFunction_MathRayGetAt::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayGetAt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayGetAt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt,(UObject *)pUVar1,
                         L"RigVMFunction_MathRayGetAt");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayGetAt.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRayGetAt.OuterSingleton;
}

// GetExecuteContextStruct @ 14a179cb0

UScriptStruct * __thiscall
FRigVMFunction_MathRayGetAt::GetExecuteContextStruct(FRigVMFunction_MathRayGetAt *this)

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

// Execute @ 14a179f00

void __thiscall FRigVMFunction_MathRayGetAt::Execute(FRigVMFunction_MathRayGetAt *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
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
  dVar4 = (this->Ray).Direction.field0_0x0._s_0.Y;
  dVar5 = (this->Ray).Origin.field0_0x0._s_0.Y;
  dVar2 = (double)this->Ratio;
  dVar3 = dVar2 * (this->Ray).Direction.field0_0x0._s_0.Z + (this->Ray).Origin.field0_0x0._s_0.Z;
  (this->Result).field0_0x0._s_0.X =
       dVar2 * (this->Ray).Direction.field0_0x0._s_0.X + (this->Ray).Origin.field0_0x0._s_0.X;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2 * dVar4 + dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Result).field0_0x0 + 8) = auVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a1ee0

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
FRigVMFunction_MathRayGetAt::Execute
          (FRigVMFunction_MathRayGetAt *this,FRigVMExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (this->Ray).Direction.field0_0x0._s_0.Y;
  dVar5 = (this->Ray).Origin.field0_0x0._s_0.Y;
  dVar2 = (double)this->Ratio;
  dVar3 = dVar2 * (this->Ray).Direction.field0_0x0._s_0.Z + (this->Ray).Origin.field0_0x0._s_0.Z;
  (this->Result).field0_0x0._s_0.X =
       dVar2 * (this->Ray).Direction.field0_0x0._s_0.X + (this->Ray).Origin.field0_0x0._s_0.X;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2 * dVar4 + dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Result).field0_0x0 + 8) = auVar1;
  return;
}

// RigVMExecute @ 14a1cadf0

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
FRigVMFunction_MathRayGetAt::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  double *pdVar12;
  float *pfVar13;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar12 = (double *)pFVar3->Ptr;
  }
  else {
    pdVar12 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar2 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar13 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar13 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  fVar1 = *pfVar13;
  if (iVar2 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pdVar4 = (double *)param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  dVar9 = pdVar12[4];
  dVar10 = pdVar12[1];
  dVar7 = (double)fVar1;
  dVar8 = dVar7 * pdVar12[5] + pdVar12[2];
  *pdVar4 = dVar7 * pdVar12[3] + *pdVar12;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7 * dVar9 + dVar10;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(pdVar4 + 1) = auVar6;
  return;
}

// StaticExecute @ 14a1e2320

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
FRigVMFunction_MathRayGetAt::StaticExecute
          (FRigVMExecuteContext *param_1,TRay<double> *param_2,float param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)param_3;
  dVar1 = (param_2->Direction).field0_0x0._s_0.Y;
  dVar2 = (param_2->Direction).field0_0x0._s_0.Z;
  dVar3 = (param_2->Origin).field0_0x0._s_0.Y;
  dVar4 = (param_2->Origin).field0_0x0._s_0.Z;
  (param_4->field0_0x0)._s_0.X =
       dVar5 * (param_2->Direction).field0_0x0._s_0.X + (param_2->Origin).field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar5 * dVar1 + dVar3;
  (param_4->field0_0x0)._s_0.Z = dVar5 * dVar2 + dVar4;
  return;
}

