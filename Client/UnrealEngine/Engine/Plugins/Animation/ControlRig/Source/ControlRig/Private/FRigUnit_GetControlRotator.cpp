// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a486a30

UScriptStruct * __cdecl FRigUnit_GetControlRotator::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlRotator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlRotator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlRotator,(UObject *)pUVar1,
                         L"RigUnit_GetControlRotator");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetControlRotator_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlRotator.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlRotator.OuterSingleton;
}

// GetExecuteContextStruct @ 14a486ab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlRotator::GetExecuteContextStruct(FRigUnit_GetControlRotator *this)

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

// Execute @ 14a486da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlRotator::Execute(FRigUnit_GetControlRotator *this)

{
  undefined1 auStackY_2a8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Space,&this->Rotator,
                &this->Minimum,&this->Maximum,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlRotator::Execute
          (FRigUnit_GetControlRotator *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Space,&this->Rotator,&this->Minimum,&this->Maximum,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a541080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlRotator::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  TRotator<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  ERigVMTransformSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  TRotator<double> *pTVar9;
  TRotator<double> *pTVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
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
    pEVar7 = pFVar8[1].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar7;
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
  pTVar3 = (TRotator<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TRotator<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TRotator<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,EVar1,pTVar3,pTVar9,pTVar10,pFVar12);
  return;
}

// StaticExecute @ 14a5767f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlRotator::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigVMTransformSpace param_3,
          TRotator<double> *param_4,TRotator<double> *param_5,TRotator<double> *param_6,
          FCachedRigElement *param_7)

{
  URigHierarchy *this;
  double dVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TRotator<double> *pTVar5;
  undefined1 auStack_1c8 [32];
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TRotator<double> local_178 [5];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  FRigControlValue local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_1a8._4_4_ = (*param_2).ComparisonIndex;
    local_1a8._8_4_ = (*param_2).Number;
    local_1a8._0_1_ = 4;
    bVar2 = FCachedRigElement::UpdateCache(param_7,(FRigElementKey *)&local_1a8._s_0,this);
    if (bVar2) {
      uVar4 = 0xffffffff;
      if (param_3 == LocalSpace) {
        uVar3 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar3 = (uint)param_7->Index;
        }
        URigHierarchy::GetLocalTransformByIndex(this,(TTransform<double> *)&local_d8,uVar3,false);
        local_f8 = local_d8.FloatStorage.Float00;
        fStack_f4 = local_d8.FloatStorage.Float01;
        fStack_f0 = local_d8.FloatStorage.Float02;
        fStack_ec = local_d8.FloatStorage.Float03;
        local_e8 = local_d8.FloatStorage.Float10;
        fStack_e4 = local_d8.FloatStorage.Float11;
        fStack_e0 = local_d8.FloatStorage.Float12;
        fStack_dc = local_d8.FloatStorage.Float13;
      }
      else {
        local_f8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        fStack_f4 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        fStack_f0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        fStack_ec = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        local_e8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        fStack_e4 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        fStack_e0 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        fStack_dc = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        if (param_3 == GlobalSpace) {
          uVar3 = 0xffffffff;
          if (param_7->Index != 0xffff) {
            uVar3 = (uint)param_7->Index;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,(TTransform<double> *)&local_d8,uVar3,false)
          ;
          local_f8 = local_d8.FloatStorage.Float00;
          fStack_f4 = local_d8.FloatStorage.Float01;
          fStack_f0 = local_d8.FloatStorage.Float02;
          fStack_ec = local_d8.FloatStorage.Float03;
          local_e8 = local_d8.FloatStorage.Float10;
          fStack_e4 = local_d8.FloatStorage.Float11;
          fStack_e0 = local_d8.FloatStorage.Float12;
          fStack_dc = local_d8.FloatStorage.Float13;
        }
      }
      pTVar5 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_f8,local_178);
      uVar3 = 0xffffffff;
      dVar1 = pTVar5->Yaw;
      param_4->Pitch = pTVar5->Pitch;
      param_4->Yaw = dVar1;
      param_4->Roll = pTVar5->Roll;
      if (param_7->Index != 0xffff) {
        uVar3 = (uint)param_7->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,&local_d8,uVar3,Minimum);
      local_1a8._s_0.X = (double)local_d8.FloatStorage.Float00;
      local_1a8._s_0.Y = (double)local_d8.FloatStorage.Float01;
      local_1a8._s_0.Z = (double)local_d8.FloatStorage.Float02;
      if (param_7->Index != 0xffff) {
        uVar4 = (uint)param_7->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,&local_d8,uVar4,Maximum);
      local_190._s_0.X = (double)local_d8.FloatStorage.Float00;
      local_190._s_0.Y = (double)local_d8.FloatStorage.Float01;
      local_190._s_0.Z = (double)local_d8.FloatStorage.Float02;
      pTVar5 = UE::Math::TRotator<double>::MakeFromEuler
                         (local_178,(TVector<double> *)&local_1a8._s_0);
      dVar1 = pTVar5->Yaw;
      param_5->Pitch = pTVar5->Pitch;
      param_5->Yaw = dVar1;
      param_5->Roll = pTVar5->Roll;
      pTVar5 = UE::Math::TRotator<double>::MakeFromEuler
                         (local_178,(TVector<double> *)&local_190._s_0);
      dVar1 = pTVar5->Yaw;
      param_6->Pitch = pTVar5->Pitch;
      param_6->Yaw = dVar1;
      param_6->Roll = pTVar5->Roll;
    }
  }
  return;
}

