// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a49a700

UScriptStruct * __cdecl FRigUnit_DrawContainerGetInstruction::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerGetInstruction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerGetInstruction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction,
                         (UObject *)pUVar1,L"RigUnit_DrawContainerGetInstruction");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerGetInstruction.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerGetInstruction.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49a7a0

UScriptStruct * __thiscall
FRigUnit_DrawContainerGetInstruction::GetExecuteContextStruct
          (FRigUnit_DrawContainerGetInstruction *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a49aba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawContainerGetInstruction::Execute(FRigUnit_DrawContainerGetInstruction *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->InstructionName,&this->Color,
                &this->Transform);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a49acb0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DrawContainerGetInstruction::GetUpgradeInfo
          (FRigUnit_DrawContainerGetInstruction *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a527340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawContainerGetInstruction::Execute
          (FRigUnit_DrawContainerGetInstruction *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InstructionName,&this->Color,&this->Transform);
  return;
}

// RigVMExecute @ 14a53daf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerGetInstruction::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FLinearColor *pFVar3;
  TTransform<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (FLinearColor *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar4 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pFVar7,pFVar3,pTVar4);
  return;
}

// StaticExecute @ 14a56ec00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerGetInstruction::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FLinearColor *param_3,
          TTransform<double> *param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  if (*(FRigVMDrawContainer **)&param_1->field_0x60 != (FRigVMDrawContainer *)0x0) {
    uVar8 = FRigVMDrawContainer::GetIndex(*(FRigVMDrawContainer **)&param_1->field_0x60,param_2);
    if (uVar8 == 0xffffffff) {
      (param_3->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red;
      *&(param_4->Rotation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(param_4->Rotation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(param_4->Translation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(param_4->Translation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(param_4->Scale3D).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(param_4->Scale3D).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      lVar3 = *(longlong *)&param_1->field_0x60;
      uVar9 = 0;
      if ((int)uVar8 < *(int *)(lVar3 + 0x10)) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 8);
      lVar10 = (longlong)(int)uVar8 * 0xd0;
      puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar3);
      uVar5 = puVar1[1];
      *(undefined8 *)&param_3->field0_0x0 = *puVar1;
      *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = uVar5;
      pdVar2 = (double *)(lVar10 + 0x40 + lVar3);
      dVar6 = pdVar2[1];
      (param_4->Rotation).XY.m128d_f64[0] = *pdVar2;
      (param_4->Rotation).XY.m128d_f64[1] = dVar6;
      pdVar2 = (double *)(lVar10 + 0x50 + lVar3);
      dVar6 = pdVar2[1];
      (param_4->Rotation).ZW.m128d_f64[0] = *pdVar2;
      (param_4->Rotation).ZW.m128d_f64[1] = dVar6;
      pdVar2 = (double *)(lVar10 + 0x60 + lVar3);
      dVar6 = pdVar2[1];
      (param_4->Translation).XY.m128d_f64[0] = *pdVar2;
      (param_4->Translation).XY.m128d_f64[1] = dVar6;
      pdVar2 = (double *)(lVar10 + 0x70 + lVar3);
      dVar6 = pdVar2[1];
      (param_4->Translation).ZW.m128d_f64[0] = *pdVar2;
      (param_4->Translation).ZW.m128d_f64[1] = dVar6;
      pdVar2 = (double *)(lVar10 + 0x80 + lVar3);
      dVar6 = pdVar2[1];
      (param_4->Scale3D).XY.m128d_f64[0] = *pdVar2;
      (param_4->Scale3D).XY.m128d_f64[1] = dVar6;
      pdVar2 = (double *)(lVar10 + 0x90 + lVar3);
      dVar6 = pdVar2[1];
      (param_4->Scale3D).ZW.m128d_f64[0] = *pdVar2;
      (param_4->Scale3D).ZW.m128d_f64[1] = dVar6;
    }
  }
  return;
}

