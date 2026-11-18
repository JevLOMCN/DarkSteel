// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1582d0

UScriptStruct * __cdecl FRigVMFunction_MathBoxGetCenter::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetCenter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetCenter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter,(UObject *)pUVar1
                         ,L"RigVMFunction_MathBoxGetCenter");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetCenter.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathBoxGetCenter.OuterSingleton;
}

// GetExecuteContextStruct @ 14a158350

UScriptStruct * __thiscall
FRigVMFunction_MathBoxGetCenter::GetExecuteContextStruct(FRigVMFunction_MathBoxGetCenter *this)

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

// Execute @ 14a1585e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FRigVMFunction_MathBoxGetCenter::Execute(FRigVMFunction_MathBoxGetCenter *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
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
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((this->Box).IsValid != '\0') {
    dVar3 = (this->Box).Max.field0_0x0._s_0.Y;
    dVar2 = (this->Box).Max.field0_0x0._s_0.Z;
    dVar4 = (this->Box).Min.field0_0x0._s_0.Y;
    dVar5 = (this->Box).Min.field0_0x0._s_0.Z;
    (this->Center).field0_0x0._s_0.X =
         ((this->Box).Max.field0_0x0._s_0.X + (this->Box).Min.field0_0x0._s_0.X) *
         __real_3fe0000000000000;
    dVar2 = (dVar2 + dVar5) * _UNK_150689678;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = (dVar3 + dVar4) * ___xmm_3fe00000000000003fe0000000000000;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Center).field0_0x0 + 8) = auVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar6;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a19eed0

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

void __thiscall
FRigVMFunction_MathBoxGetCenter::Execute
          (FRigVMFunction_MathBoxGetCenter *this,FRigVMExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((this->Box).IsValid != '\0') {
    dVar3 = (this->Box).Max.field0_0x0._s_0.Y;
    dVar2 = (this->Box).Max.field0_0x0._s_0.Z;
    dVar4 = (this->Box).Min.field0_0x0._s_0.Y;
    dVar5 = (this->Box).Min.field0_0x0._s_0.Z;
    (this->Center).field0_0x0._s_0.X =
         ((this->Box).Min.field0_0x0._s_0.X + (this->Box).Max.field0_0x0._s_0.X) *
         __real_3fe0000000000000;
    dVar2 = (dVar2 + dVar5) * _UNK_150689678;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = (dVar3 + dVar4) * ___xmm_3fe00000000000003fe0000000000000;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Center).field0_0x0 + 8) = auVar1;
    return;
  }
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar6;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// RigVMExecute @ 14a1bb7f0

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
FRigVMFunction_MathBoxGetCenter::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  
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
    pdVar7 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar7 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
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
  pdVar3 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (*(char *)(pdVar7 + 6) == '\0') {
    *pdVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pdVar3[1] = (double)uVar5;
    pdVar3[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar9 = (pdVar7[4] + pdVar7[1]) * __real_3fe0000000000000;
    dVar8 = (pdVar7[5] + pdVar7[2]) * __real_3fe0000000000000;
    *pdVar3 = (*pdVar7 + pdVar7[3]) * __real_3fe0000000000000;
    pdVar3[1] = dVar9;
    pdVar3[2] = dVar8;
  }
  return;
}

// StaticExecute @ 14a1dca70

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
FRigVMFunction_MathBoxGetCenter::StaticExecute
          (FRigVMExecuteContext *param_1,TBox<double> *param_2,TVector<double> *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_2->IsValid != '\0') {
    dVar3 = ((param_2->Max).field0_0x0._s_0.Y + (param_2->Min).field0_0x0._s_0.Y) *
            __real_3fe0000000000000;
    dVar2 = ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) *
            __real_3fe0000000000000;
    (param_3->field0_0x0)._s_0.X =
         ((param_2->Min).field0_0x0._s_0.X + (param_2->Max).field0_0x0._s_0.X) *
         __real_3fe0000000000000;
    (param_3->field0_0x0)._s_0.Y = dVar3;
    (param_3->field0_0x0)._s_0.Z = dVar2;
    return;
  }
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar1;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

