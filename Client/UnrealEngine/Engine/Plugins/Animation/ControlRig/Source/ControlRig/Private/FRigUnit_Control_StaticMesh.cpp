// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a471d90

UScriptStruct * __cdecl FRigUnit_Control_StaticMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_Control_StaticMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_Control_StaticMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh,(UObject *)pUVar1,
                         L"RigUnit_Control_StaticMesh");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_Control_StaticMesh.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_Control_StaticMesh.OuterSingleton;
}

// FRigUnit_Control_StaticMesh @ 14a50d6b0

FRigUnit_Control_StaticMesh * __thiscall
FRigUnit_Control_StaticMesh::FRigUnit_Control_StaticMesh(FRigUnit_Control_StaticMesh *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FRigUnit_Control::FRigUnit_Control((FRigUnit_Control *)this);
  this->_padding_ = (longlong)&___7FRigUnit_Control_StaticMesh__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->MeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->MeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->MeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->MeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->MeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->MeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// Execute @ 14a525ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_Control_StaticMesh::Execute
          (FRigUnit_Control_StaticMesh *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_Control::StaticExecute
            (param_1,(FEulerTransform *)&this->_padding_,(TTransform<double> *)&this->_padding_,
             (TTransform<double> *)&this->_padding_,(TTransform<double> *)&this->_padding_,
             (FTransformFilter *)&this->_padding_,(bool *)((longlong)&this->_padding_ + 1));
  return;
}

// Execute @ 14a525f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_Control_StaticMesh::Execute(FRigUnit_Control_StaticMesh *this)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_2e8 [32];
  TTransform<double> local_2c8;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2e8;
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
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    FEulerTransform::FromFTransform
              ((FEulerTransform *)&this->_padding_,(TTransform<double> *)&this->_padding_);
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  pTVar2 = FRigUnit_Control::StaticGetResultantTransform
                     (&local_2c8,(FEulerTransform *)&this->_padding_,
                      (TTransform<double> *)&this->_padding_,(FTransformFilter *)&this->_padding_);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar2->Rotation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar2->Rotation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar2->Translation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar2->Translation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar2->Scale3D).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(pTVar2->Scale3D).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar1;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530b20

UScriptStruct * __thiscall
FRigUnit_Control_StaticMesh::GetExecuteContextStruct(FRigUnit_Control_StaticMesh *this)

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

// GetUpgradeInfo @ 14a531c10

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_Control_StaticMesh::GetUpgradeInfo
          (FRigUnit_Control_StaticMesh *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RigVMExecute @ 14a539500

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_Control_StaticMesh::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMSlice *pFVar4;
  FEulerTransform *pFVar5;
  TTransform<double> *pTVar6;
  TTransform<double> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  TTransform<double> *pTVar9;
  FTransformFilter *pFVar10;
  bool *pbVar11;
  FControlRigExecuteContext *pFVar12;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar5 = (FEulerTransform *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 1,false,pFVar4->Offset + pFVar4->Index);
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TTransform<double> *)pFVar8[2].Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  if (iVar1 < 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[3].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TTransform<double> *)pFVar8[3].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[3].PropertyPath,pFVar8[3].Ptr,pFVar8[3].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = (FTransformFilter *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar4 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar11 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar8,false,pFVar4->Offset + pFVar4->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_Control::StaticExecute(pFVar12,pFVar5,pTVar6,pTVar7,pTVar9,pFVar10,pbVar11);
  return;
}

// StaticExecute @ 14a569eb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_Control_StaticMesh::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,FEulerTransform *param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,TTransform<double> *param_6,
          FTransformFilter *param_7,bool *param_8)

{
  FRigUnit_Control::StaticExecute(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

