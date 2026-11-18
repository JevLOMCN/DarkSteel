// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a1376c0

UScriptStruct * __cdecl FRigVMFunction_MathVectorAbs::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorAbs.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorAbs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAbs,(UObject *)pUVar1,
                         L"RigVMFunction_MathVectorAbs");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorAbs_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorAbs.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorAbs.OuterSingleton;
}

// GetExecuteContextStruct @ 14a137740

UScriptStruct * __thiscall
FRigVMFunction_MathVectorAbs::GetExecuteContextStruct(FRigVMFunction_MathVectorAbs *this)

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

// Execute @ 14a1378f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FRigVMFunction_MathVectorAbs::Execute(FRigVMFunction_MathVectorAbs *this)

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
  uVar1 = *(uint *)&this->field_0xc & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = *(uint *)&this->field_0x10 & _UNK_15061cc88;
  uVar3 = *(uint *)&this->field_0x14 & _UNK_15061cc8c;
  *(uint *)&this->field_0x20 =
       *(uint *)&this->field_0x8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(uint *)&this->field_0x24 = uVar1;
  *(uint *)&this->field_0x28 = uVar2;
  *(uint *)&this->field_0x2c = uVar3;
  *(ulonglong *)&this->field_0x30 =
       CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x18 >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                (uint)*(undefined8 *)&this->field_0x18 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a2840

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
FRigVMFunction_MathVectorAbs::Execute
          (FRigVMFunction_MathVectorAbs *this,FRigVMExecuteContext *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)&this->field_0xc & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = *(uint *)&this->field_0x10 & _UNK_15061cc88;
  uVar3 = *(uint *)&this->field_0x14 & _UNK_15061cc8c;
  *(uint *)&this->field_0x20 =
       *(uint *)&this->field_0x8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(uint *)&this->field_0x24 = uVar1;
  *(uint *)&this->field_0x28 = uVar2;
  *(uint *)&this->field_0x2c = uVar3;
  *(ulonglong *)&this->field_0x30 =
       CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0x18 >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                (uint)*(undefined8 *)&this->field_0x18 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  return;
}

// RigVMExecute @ 14a1cd270

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
FRigVMFunction_MathVectorAbs::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uchar *puVar8;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar2->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  puVar3 = param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(ulonglong *)puVar3 =
       CONCAT44((uint)((ulonglong)*(undefined8 *)puVar8 >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                (uint)*(undefined8 *)puVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  *(ulonglong *)(puVar3 + 8) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar8 + 8) >> 0x20) & uVar6,
                (uint)*(undefined8 *)(puVar8 + 8) & uVar5);
  *(ulonglong *)(puVar3 + 0x10) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar8 + 0x10) >> 0x20) & uVar6,
                (uint)*(undefined8 *)(puVar8 + 0x10) & uVar5);
  return;
}

// StaticExecute @ 14a1e4480

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
FRigVMFunction_MathVectorAbs::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  (param_3->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)*(undefined8 *)&param_2->field0_0x0 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  (param_3->field0_0x0)._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar3,(uint)uVar1 & uVar2);
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  (param_3->field0_0x0)._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar3,(uint)uVar1 & uVar2);
  return;
}

