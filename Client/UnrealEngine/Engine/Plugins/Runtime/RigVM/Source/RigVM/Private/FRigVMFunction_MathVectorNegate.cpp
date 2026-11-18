// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a136e40

UScriptStruct * __cdecl FRigVMFunction_MathVectorNegate::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorNegate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorNegate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNegate,(UObject *)pUVar1
                         ,L"RigVMFunction_MathVectorNegate");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorNegate_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorNegate.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorNegate.OuterSingleton;
}

// GetExecuteContextStruct @ 14a136ec0

UScriptStruct * __thiscall
FRigVMFunction_MathVectorNegate::GetExecuteContextStruct(FRigVMFunction_MathVectorNegate *this)

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

// Execute @ 14a137150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FRigVMFunction_MathVectorNegate::Execute(FRigVMFunction_MathVectorNegate *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
  *(ulonglong *)&this->field_0x20 =
       CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x8 >> 0x20) ^
                __xmm_80000000000000008000000000000000._4_4_,
                (uint)*(undefined8 *)&this->field_0x8 ^ (uint)__xmm_80000000000000008000000000000000
               );
  uVar1 = *(uint *)&this->field_0x14 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = *(uint *)&this->field_0x18 ^ _UNK_15066df78;
  uVar3 = *(uint *)&this->field_0x1c ^ _UNK_15066df7c;
  *(uint *)&this->field_0x28 =
       *(uint *)&this->field_0x10 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)&this->field_0x2c = uVar1;
  *(uint *)&this->field_0x30 = uVar2;
  *(uint *)&this->field_0x34 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3130

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
FRigVMFunction_MathVectorNegate::Execute
          (FRigVMFunction_MathVectorNegate *this,FRigVMExecuteContext *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(ulonglong *)&this->field_0x20 =
       CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x8 >> 0x20) ^
                __xmm_80000000000000008000000000000000._4_4_,
                (uint)*(undefined8 *)&this->field_0x8 ^ (uint)__xmm_80000000000000008000000000000000
               );
  uVar1 = *(uint *)&this->field_0x14 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = *(uint *)&this->field_0x18 ^ _UNK_15066df78;
  uVar3 = *(uint *)&this->field_0x1c ^ _UNK_15066df7c;
  *(uint *)&this->field_0x28 =
       *(uint *)&this->field_0x10 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)&this->field_0x2c = uVar1;
  *(uint *)&this->field_0x30 = uVar2;
  *(uint *)&this->field_0x34 = uVar3;
  return;
}

// RigVMExecute @ 14a1d0250

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

void __cdecl
FRigVMFunction_MathVectorNegate::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
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
    puVar7 = pFVar2->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  puVar3 = param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar5 = *(uint *)(puVar7 + 8);
  uVar8 = *(uint *)(puVar7 + 0xc);
  uVar9 = *(uint *)(puVar7 + 0x10);
  uVar10 = *(uint *)(puVar7 + 0x14);
  *(ulonglong *)puVar3 =
       CONCAT44((uint)((ulonglong)*(undefined8 *)puVar7 >> 0x20) ^
                __xmm_80000000000000008000000000000000._4_4_,
                (uint)*(undefined8 *)puVar7 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar8 = uVar8 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar9 = uVar9 ^ _UNK_15066df78;
  uVar10 = uVar10 ^ _UNK_15066df7c;
  *(uint *)(puVar3 + 8) = uVar5 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)(puVar3 + 0xc) = uVar8;
  *(uint *)(puVar3 + 0x10) = uVar9;
  *(uint *)(puVar3 + 0x14) = uVar10;
  return;
}

// StaticExecute @ 14a1e5b20

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

void __cdecl
FRigVMFunction_MathVectorNegate::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar2 = *(uint *)((longlong)&param_2->field0_0x0 + 4) ^
          __xmm_80000000000000008000000000000000._4_4_;
  uVar3 = *(uint *)((longlong)&param_2->field0_0x0 + 8) ^ _UNK_15066df78;
  uVar4 = *(uint *)((longlong)&param_2->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  uVar5 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  *(uint *)&param_3->field0_0x0 =
       *(uint *)&param_2->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&param_3->field0_0x0 + 4) = uVar2;
  *(uint *)((longlong)&param_3->field0_0x0 + 8) = uVar3;
  *(uint *)((longlong)&param_3->field0_0x0 + 0xc) = uVar4;
  (param_3->field0_0x0)._s_0.Z = (double)CONCAT44(uVar6,uVar5);
  return;
}

