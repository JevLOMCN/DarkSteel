// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a138810

UScriptStruct * __cdecl FRigVMFunction_MathVectorRound::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorRound.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorRound.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRound,(UObject *)pUVar1,
                         L"RigVMFunction_MathVectorRound");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorRound_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorRound.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorRound.OuterSingleton;
}

// GetExecuteContextStruct @ 14a138890

UScriptStruct * __thiscall
FRigVMFunction_MathVectorRound::GetExecuteContextStruct(FRigVMFunction_MathVectorRound *this)

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

// Execute @ 14a138a80

void __thiscall FRigVMFunction_MathVectorRound::Execute(FRigVMFunction_MathVectorRound *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    in_XMM0 = extraout_XMM0;
    if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__ == -1) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      in_XMM0 = extraout_XMM0_00;
    }
  }
  dVar3 = __real_3fe0000000000000;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(double *)&this->field_0x8 + __real_3fe0000000000000;
  auVar4 = roundpd(in_XMM0,auVar4,1);
  *(longlong *)&this->field_0x20 = auVar4._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(double *)&this->field_0x10 + dVar3;
  auVar4 = roundpd(auVar4,auVar1,1);
  *(longlong *)&this->field_0x28 = auVar4._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(double *)&this->field_0x18 + dVar3;
  auVar4 = roundpd(auVar4,auVar2,1);
  *(longlong *)&this->field_0x30 = auVar4._0_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3270

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
FRigVMFunction_MathVectorRound::Execute
          (FRigVMFunction_MathVectorRound *this,FRigVMExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  
  dVar3 = __real_3fe0000000000000;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(double *)&this->field_0x8 + __real_3fe0000000000000;
  auVar4 = roundpd(in_XMM0,auVar4,1);
  *(longlong *)&this->field_0x20 = auVar4._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(double *)&this->field_0x10 + dVar3;
  auVar4 = roundpd(auVar4,auVar1,1);
  *(longlong *)&this->field_0x28 = auVar4._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(double *)&this->field_0x18 + dVar3;
  auVar4 = roundpd(auVar4,auVar2,1);
  *(longlong *)&this->field_0x30 = auVar4._0_8_;
  return;
}

// RigVMExecute @ 14a1d0ac0

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
FRigVMFunction_MathVectorRound::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  double *pdVar9;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar10 [16];
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar9 = (double *)pFVar2->Ptr;
  }
  else {
    pdVar9 = (double *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar3 = param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  dVar7 = __real_3fe0000000000000;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *pdVar9 + __real_3fe0000000000000;
  auVar10 = roundpd(extraout_XMM0,auVar10,1);
  *(longlong *)puVar3 = auVar10._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = pdVar9[1] + dVar7;
  auVar10 = roundpd(auVar10,auVar5,1);
  *(longlong *)(puVar3 + 8) = auVar10._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = pdVar9[2] + dVar7;
  auVar10 = roundpd(auVar10,auVar6,1);
  *(longlong *)(puVar3 + 0x10) = auVar10._0_8_;
  return;
}

// StaticExecute @ 14a1e5e80

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
FRigVMFunction_MathVectorRound::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  
  dVar3 = __real_3fe0000000000000;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (param_2->field0_0x0)._s_0.X + __real_3fe0000000000000;
  auVar4 = roundpd(in_XMM0,auVar4,1);
  (param_3->field0_0x0)._s_0.X = auVar4._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (param_2->field0_0x0)._s_0.Y + dVar3;
  auVar4 = roundpd(auVar4,auVar1,1);
  (param_3->field0_0x0)._s_0.Y = auVar4._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (param_2->field0_0x0)._s_0.Z + dVar3;
  auVar4 = roundpd(auVar4,auVar2,1);
  (param_3->field0_0x0)._s_0.Z = auVar4._0_8_;
  return;
}

