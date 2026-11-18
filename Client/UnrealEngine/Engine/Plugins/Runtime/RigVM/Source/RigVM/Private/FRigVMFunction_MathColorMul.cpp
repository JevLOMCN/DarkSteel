// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a181160

UScriptStruct * __cdecl FRigVMFunction_MathColorMul::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMul.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMul.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul,(UObject *)pUVar1,
                         L"RigVMFunction_MathColorMul");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMul.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathColorMul.OuterSingleton;
}

// GetExecuteContextStruct @ 14a1811f0

UScriptStruct * __thiscall
FRigVMFunction_MathColorMul::GetExecuteContextStruct(FRigVMFunction_MathColorMul *this)

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

// Execute @ 14a181520

void __thiscall FRigVMFunction_MathColorMul::Execute(FRigVMFunction_MathColorMul *this)

{
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
  *(float *)&this->field_0x28 = *(float *)&this->field_0x8 * *(float *)&this->field_0x18;
  *(float *)&this->field_0x2c = *(float *)&this->field_0xc * *(float *)&this->field_0x1c;
  *(float *)&this->field_0x30 = *(float *)&this->field_0x10 * *(float *)&this->field_0x20;
  *(float *)&this->field_0x34 = *(float *)&this->field_0x14 * *(float *)&this->field_0x24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19f260

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
FRigVMFunction_MathColorMul::Execute
          (FRigVMFunction_MathColorMul *this,FRigVMExecuteContext *param_1)

{
  *(float *)&this->field_0x28 = *(float *)&this->field_0x8 * *(float *)&this->field_0x18;
  *(float *)&this->field_0x2c = *(float *)&this->field_0xc * *(float *)&this->field_0x1c;
  *(float *)&this->field_0x30 = *(float *)&this->field_0x10 * *(float *)&this->field_0x20;
  *(float *)&this->field_0x34 = *(float *)&this->field_0x14 * *(float *)&this->field_0x24;
  return;
}

// RigVMExecute @ 14a1bcb00

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
FRigVMFunction_MathColorMul::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  code *pcVar10;
  bool bVar11;
  float *pfVar12;
  float *pfVar13;
  
  iVar7 = param_2->ArrayNum;
  if (iVar7 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar12 = (float *)pFVar8->Ptr;
  }
  else {
    pfVar12 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  if (iVar7 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar13 = (float *)pFVar8[1].Ptr;
  }
  else {
    pfVar13 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar7 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pfVar9 = (float *)param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  fVar1 = pfVar13[1];
  fVar2 = pfVar13[2];
  fVar3 = pfVar13[3];
  fVar4 = pfVar12[1];
  fVar5 = pfVar12[2];
  fVar6 = pfVar12[3];
  *pfVar9 = *pfVar12 * *pfVar13;
  pfVar9[1] = fVar1 * fVar4;
  pfVar9[2] = fVar2 * fVar5;
  pfVar9[3] = fVar3 * fVar6;
  return;
}

// StaticExecute @ 14a1dd0e0

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
FRigVMFunction_MathColorMul::StaticExecute
          (FRigVMExecuteContext *param_1,FLinearColor *param_2,FLinearColor *param_3,
          FLinearColor *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_2->field0_0x0)._s_0.G;
  fVar2 = (param_2->field0_0x0)._s_0.B;
  fVar3 = (param_2->field0_0x0)._s_0.A;
  fVar4 = (param_3->field0_0x0)._s_0.G;
  fVar5 = (param_3->field0_0x0)._s_0.B;
  fVar6 = (param_3->field0_0x0)._s_0.A;
  (param_4->field0_0x0)._s_0.R = (param_2->field0_0x0)._s_0.R * (param_3->field0_0x0)._s_0.R;
  (param_4->field0_0x0)._s_0.G = fVar1 * fVar4;
  (param_4->field0_0x0)._s_0.B = fVar2 * fVar5;
  (param_4->field0_0x0)._s_0.A = fVar3 * fVar6;
  return;
}

