// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1381a0

UScriptStruct * __cdecl FRigVMFunction_MathVectorCeil::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorCeil.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorCeil.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCeil,(UObject *)pUVar1,
                         L"RigVMFunction_MathVectorCeil");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorCeil_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorCeil.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorCeil.OuterSingleton;
}

// GetExecuteContextStruct @ 14a138220

UScriptStruct * __thiscall
FRigVMFunction_MathVectorCeil::GetExecuteContextStruct(FRigVMFunction_MathVectorCeil *this)

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

// Execute @ 14a138350

void __thiscall FRigVMFunction_MathVectorCeil::Execute(FRigVMFunction_MathVectorCeil *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
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
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulonglong *)&this->field_0x8;
  auVar2 = roundpd(auVar1,auVar1,2);
  *(longlong *)&this->field_0x20 = auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)&this->field_0x10;
  auVar3 = roundpd(auVar2,auVar3,2);
  *(longlong *)&this->field_0x28 = auVar3._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)&this->field_0x18;
  auVar3 = roundpd(auVar3,auVar2,2);
  *(longlong *)&this->field_0x30 = auVar3._0_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a2a50

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
FRigVMFunction_MathVectorCeil::Execute
          (FRigVMFunction_MathVectorCeil *this,FRigVMExecuteContext *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulonglong *)&this->field_0x8;
  auVar2 = roundpd(auVar1,auVar1,2);
  *(longlong *)&this->field_0x20 = auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)&this->field_0x10;
  auVar3 = roundpd(auVar2,auVar3,2);
  *(longlong *)&this->field_0x28 = auVar3._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)&this->field_0x18;
  auVar3 = roundpd(auVar3,auVar2,2);
  *(longlong *)&this->field_0x30 = auVar3._0_8_;
  return;
}

// RigVMExecute @ 14a1cda90

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
FRigVMFunction_MathVectorCeil::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
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
    puVar6 = (ulonglong *)pFVar2->Ptr;
  }
  else {
    puVar6 = (ulonglong *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  puVar3 = param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *puVar6;
  auVar8 = roundpd(auVar7,auVar7,2);
  *(longlong *)puVar3 = auVar8._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = puVar6[1];
  auVar9 = roundpd(auVar8,auVar9,2);
  *(longlong *)(puVar3 + 8) = auVar9._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = puVar6[2];
  auVar9 = roundpd(auVar9,auVar8,2);
  *(longlong *)(puVar3 + 0x10) = auVar9._0_8_;
  return;
}

// StaticExecute @ 14a1e4740

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
FRigVMFunction_MathVectorCeil::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (param_2->field0_0x0)._s_0.X;
  auVar2 = roundpd(auVar1,auVar1,2);
  (param_3->field0_0x0)._s_0.X = auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (param_2->field0_0x0)._s_0.Y;
  auVar3 = roundpd(auVar2,auVar3,2);
  (param_3->field0_0x0)._s_0.Y = auVar3._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (param_2->field0_0x0)._s_0.Z;
  auVar3 = roundpd(auVar3,auVar2,2);
  (param_3->field0_0x0)._s_0.Z = auVar3._0_8_;
  return;
}

