// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f14e0

UScriptStruct * __cdecl FRigUnit_SetControlVector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D,(UObject *)pUVar1,
                         L"RigUnit_SetControlVector2D");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector2D.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector2D.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f15a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlVector2D::GetExecuteContextStruct(FRigUnit_SetControlVector2D *this)

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

// Execute @ 14a4f1cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlVector2D::Execute(FRigUnit_SetControlVector2D *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Weight,&this->Vector,
                &this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52caf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlVector2D::Execute
          (FRigUnit_SetControlVector2D *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Weight,&this->Vector,&this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a551dc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlVector2D::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  TVector2<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  fVar1 = *pfVar7;
  if (iVar2 < 3) {
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
  pTVar3 = (TVector2<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar6,fVar1,pTVar3,pFVar10);
  return;
}

// StaticExecute @ 14a591b60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlVector2D::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,float param_3,TVector2<double> *param_4
          ,FCachedRigElement *param_5)

{
  ushort uVar1;
  URigHierarchy *this;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  FRigElementKey local_168;
  FRigControlValue local_158;
  FRigControlValue local_d4;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_168.Name = *param_2;
    local_168.Type = Control;
    bVar3 = FCachedRigElement::UpdateCache(param_5,&local_168,this);
    fVar2 = __real_3f800000;
    if (bVar3) {
      uVar1 = param_5->Index;
      fVar6 = (float)(param_4->field0_0x0)._s_0.X;
      fVar7 = (float)(param_4->field0_0x0)._s_0.Y;
      uVar4 = 0xffffffff;
      if (__real_322bcc77 <
          (float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        uVar5 = 0xffffffff;
        if (uVar1 != 0xffff) {
          uVar5 = (uint)uVar1;
        }
        URigHierarchy::GetControlValueByIndex(this,&local_d4,uVar5,Current);
        if (fVar2 <= param_3) {
          param_3 = fVar2;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        local_158.FloatStorage.Float01 =
             (fVar7 - local_d4.FloatStorage.Float01) * param_3 + local_d4.FloatStorage.Float01;
        local_158.FloatStorage.Float00 =
             (fVar6 - local_d4.FloatStorage.Float00) * param_3 + local_d4.FloatStorage.Float00;
        local_158.FloatStorage.Float03 = 0.0;
        local_158.FloatStorage.Float02 = (fVar2 - param_3 * fVar2) * local_d4.FloatStorage.Float02;
        if (param_5->Index != 0xffff) {
          uVar4 = (uint)param_5->Index;
        }
      }
      else {
        local_158.FloatStorage.Float02 = 0.0;
        local_158.FloatStorage.Float03 = 0.0;
        local_158.FloatStorage.Float01 = fVar7;
        local_158.FloatStorage.Float00 = fVar6;
        if (uVar1 != 0xffff) {
          uVar4 = (uint)uVar1;
        }
      }
      local_158.FloatStorage.bValid = true;
      local_158.FloatStorage._129_3_ = 0;
      local_158.FloatStorage.Float32_2 = 0.0;
      local_158.FloatStorage.Float33_2 = 0.0;
      local_158.FloatStorage.Float30_2 = 0.0;
      local_158.FloatStorage.Float31_2 = 0.0;
      local_158.FloatStorage.Float22_2 = 0.0;
      local_158.FloatStorage.Float23_2 = 0.0;
      local_158.FloatStorage.Float20_2 = 0.0;
      local_158.FloatStorage.Float21_2 = 0.0;
      local_158.FloatStorage.Float12_2 = 0.0;
      local_158.FloatStorage.Float13_2 = 0.0;
      local_158.FloatStorage.Float10_2 = 0.0;
      local_158.FloatStorage.Float11_2 = 0.0;
      local_158.FloatStorage.Float02_2 = 0.0;
      local_158.FloatStorage.Float03_2 = 0.0;
      local_158.FloatStorage.Float00_2 = 0.0;
      local_158.FloatStorage.Float01_2 = 0.0;
      local_158.FloatStorage.Float32 = 0.0;
      local_158.FloatStorage.Float33 = 0.0;
      local_158.FloatStorage.Float30 = 0.0;
      local_158.FloatStorage.Float31 = 0.0;
      local_158.FloatStorage.Float22 = 0.0;
      local_158.FloatStorage.Float23 = 0.0;
      local_158.FloatStorage.Float20 = 0.0;
      local_158.FloatStorage.Float21 = 0.0;
      local_158.FloatStorage.Float12 = 0.0;
      local_158.FloatStorage.Float13 = 0.0;
      local_158.FloatStorage.Float10 = 0.0;
      local_158.FloatStorage.Float11 = 0.0;
      URigHierarchy::SetControlValue(this,uVar4,&local_158,Current,false,false);
    }
  }
  return;
}

