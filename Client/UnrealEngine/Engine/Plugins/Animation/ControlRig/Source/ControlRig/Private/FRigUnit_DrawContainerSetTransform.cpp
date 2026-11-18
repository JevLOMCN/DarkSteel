// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a49c570

UScriptStruct * __cdecl FRigUnit_DrawContainerSetTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform,
                         (UObject *)pUVar1,L"RigUnit_DrawContainerSetTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DrawContainerSetTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49c600

UScriptStruct * __thiscall
FRigUnit_DrawContainerSetTransform::GetExecuteContextStruct
          (FRigUnit_DrawContainerSetTransform *this)

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

// Execute @ 14a49c830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawContainerSetTransform::Execute(FRigUnit_DrawContainerSetTransform *this)

{
  double dVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [96];
  FRigVMDrawContainer *local_208;
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
  if (local_208 != (FRigVMDrawContainer *)0x0) {
    iVar2 = FRigVMDrawContainer::GetIndex(local_208,&this->InstructionName);
    if (iVar2 != -1) {
      pFVar3 = FRigVMDrawContainer::operator[](local_208,iVar2);
      dVar1 = (this->Transform).Rotation.XY.m128d_f64[1];
      (pFVar3->Transform).Rotation.XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
      (pFVar3->Transform).Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (this->Transform).Rotation.ZW.m128d_f64[1];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[0] = (this->Transform).Rotation.ZW.m128d_f64[0];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (this->Transform).Translation.XY.m128d_f64[1];
      (pFVar3->Transform).Translation.XY.m128d_f64[0] =
           (this->Transform).Translation.XY.m128d_f64[0];
      (pFVar3->Transform).Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (this->Transform).Translation.ZW.m128d_f64[1];
      (pFVar3->Transform).Translation.ZW.m128d_f64[0] =
           (this->Transform).Translation.ZW.m128d_f64[0];
      (pFVar3->Transform).Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (this->Transform).Scale3D.XY.m128d_f64[1];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[0] = (this->Transform).Scale3D.XY.m128d_f64[0];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (this->Transform).Scale3D.ZW.m128d_f64[1];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[0] = (this->Transform).Scale3D.ZW.m128d_f64[0];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a49c960

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DrawContainerSetTransform::GetUpgradeInfo
          (FRigUnit_DrawContainerSetTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a527400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawContainerSetTransform::Execute
          (FRigUnit_DrawContainerSetTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->InstructionName,&this->Transform);
  return;
}

// RigVMExecute @ 14a53deb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerSetTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TTransform<double> *pTVar6;
  FControlRigExecuteContext *pFVar7;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TTransform<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar5,pTVar6);
  return;
}

// StaticExecute @ 14a56ede0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawContainerSetTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TTransform<double> *param_3)

{
  double dVar1;
  int iVar2;
  FRigVMDrawInstruction *pFVar3;
  
  if (*(FRigVMDrawContainer **)&param_1->field_0x60 != (FRigVMDrawContainer *)0x0) {
    iVar2 = FRigVMDrawContainer::GetIndex(*(FRigVMDrawContainer **)&param_1->field_0x60,param_2);
    if (iVar2 != -1) {
      pFVar3 = FRigVMDrawContainer::operator[](*(FRigVMDrawContainer **)&param_1->field_0x60,iVar2);
      dVar1 = (param_3->Rotation).XY.m128d_f64[1];
      (pFVar3->Transform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
      (pFVar3->Transform).Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_3->Rotation).ZW.m128d_f64[1];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
      (pFVar3->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_3->Translation).XY.m128d_f64[1];
      (pFVar3->Transform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
      (pFVar3->Transform).Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_3->Translation).ZW.m128d_f64[1];
      (pFVar3->Transform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
      (pFVar3->Transform).Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_3->Scale3D).XY.m128d_f64[1];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
      (pFVar3->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_3->Scale3D).ZW.m128d_f64[1];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
      (pFVar3->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
    }
  }
  return;
}

