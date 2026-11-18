// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4e2530

UScriptStruct * __cdecl FRigUnit_ParentSwitchConstraintArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray,
                         (UObject *)pUVar1,L"RigUnit_ParentSwitchConstraintArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.OuterSingleton;
}

// FRigUnit_ParentSwitchConstraintArray @ 14a5130b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ParentSwitchConstraintArray * __thiscall
FRigUnit_ParentSwitchConstraintArray::FRigUnit_ParentSwitchConstraintArray
          (FRigUnit_ParentSwitchConstraintArray *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_ParentSwitchConstraintArray__6B_;
  (this->Subject).Type = Null;
  (this->Subject).Name.ComparisonIndex = 0;
  (this->Subject).Name.Number = 0;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
  this->ParentIndex = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialGlobalTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialGlobalTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialGlobalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialGlobalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialGlobalTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialGlobalTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialGlobalTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialGlobalTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialGlobalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialGlobalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->Weight = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->Switched = false;
  (this->CachedSubject).Key.Type = None;
  (this->CachedSubject).Key.Name.ComparisonIndex = 0;
  (this->CachedSubject).Key.Name.Number = 0;
  (this->CachedSubject).Index = 0xffff;
  (this->CachedSubject).ContainerVersion = -1;
  (this->CachedSubject).Element = (FRigBaseElement *)0x0;
  (this->CachedParent).Key.Type = None;
  (this->CachedParent).Key.Name.ComparisonIndex = 0;
  (this->CachedParent).Key.Name.Number = 0;
  (this->CachedParent).Index = 0xffff;
  (this->CachedParent).ContainerVersion = -1;
  (this->CachedParent).Element = (FRigBaseElement *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RelativeOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RelativeOffset).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeOffset).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeOffset).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RelativeOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RelativeOffset).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeOffset).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeOffset).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RelativeOffset).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RelativeOffset).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// Execute @ 14a52b340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ParentSwitchConstraintArray::Execute
          (FRigUnit_ParentSwitchConstraintArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&this->Subject,this->ParentIndex,&local_18,&this->InitialGlobalTransform,
                this->Weight,&this->Transform,&this->Switched,&this->CachedSubject,
                &this->CachedParent,&this->RelativeOffset);
  return;
}

// Execute @ 14a52b410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ParentSwitchConstraintArray::Execute(FRigUnit_ParentSwitchConstraintArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2d8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
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
  local_278.DataPtr = (FRigElementKey *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Subject,this->ParentIndex,&local_278,
                &this->InitialGlobalTransform,this->Weight,&this->Transform,&this->Switched,
                &this->CachedSubject,&this->CachedParent,&this->RelativeOffset);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530fe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ParentSwitchConstraintArray::GetExecuteContextStruct
          (FRigUnit_ParentSwitchConstraintArray *this)

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

// GetUpgradeInfo @ 14a531c30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ParentSwitchConstraintArray::GetUpgradeInfo
          (FRigUnit_ParentSwitchConstraintArray *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RigVMExecute @ 14a54c720

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ParentSwitchConstraintArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  int *piVar7;
  uchar *puVar8;
  FRigVMMemoryHandle *pFVar9;
  TTransform<double> *pTVar10;
  float *pfVar11;
  TTransform<double> *pTVar12;
  bool *pbVar13;
  FRigVMSlice *pFVar14;
  FCachedRigElement *pFVar15;
  FCachedRigElement *pFVar16;
  TTransform<double> *pTVar17;
  FControlRigExecuteContext *pFVar18;
  TArrayView<FRigElementKey_const_,int> local_60 [2];
  
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar7 = (int *)pFVar9[1].Ptr;
  }
  else {
    piVar7 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  iVar3 = *piVar7;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pbVar13 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar15 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar14->Offset + pFVar14->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar16 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar14->Offset + pFVar14->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar17 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar14->Offset + pFVar14->Index);
  local_60[0].DataPtr = *(FRigElementKey **)puVar8;
  local_60[0].ArrayNum = *(int *)(puVar8 + 8);
  if (local_60[0].ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar18,pFVar6,iVar3,local_60,pTVar10,fVar1,pTVar12,pbVar13,pFVar15,pFVar16,pTVar17)
  ;
  return;
}

// StaticExecute @ 14a5882c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ParentSwitchConstraintArray::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,int param_3,
          TArrayView<FRigElementKey_const_,int> *param_4,TTransform<double> *param_5,float param_6,
          TTransform<double> *param_7,bool *param_8,FCachedRigElement *param_9,
          FCachedRigElement *param_10,TTransform<double> *param_11)

{
  ushort uVar1;
  URigHierarchy *this;
  double dVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FRigElementKey *pFVar7;
  TTransform<double> *pTVar8;
  undefined1 auStackY_248 [32];
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  *param_8 = false;
  *&(param_7->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_7->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_7->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_7->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_7->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_7->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this = param_1->Hierarchy;
  if ((((this != (URigHierarchy *)0x0) &&
       (bVar4 = FCachedRigElement::UpdateCache(param_9,param_2,this), bVar4)) && (-1 < param_3)) &&
     (param_3 < param_4->ArrayNum)) {
    bVar4 = FCachedRigElement::IsValid(param_10);
    uVar6 = 0xffffffff;
    if (!bVar4) {
      pFVar7 = TArrayView<FRigElementKey_const_,int>::operator[](param_4,param_3);
      bVar4 = FCachedRigElement::UpdateCache(param_10,pFVar7,this);
      if (!bVar4) {
        return;
      }
      uVar5 = 0xffffffff;
      if (param_10->Index != 0xffff) {
        uVar5 = (uint)param_10->Index;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_188,uVar5,false);
      pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform(param_5,&local_1e8,&local_188);
      dVar2 = (pTVar8->Rotation).XY.m128d_f64[1];
      (param_11->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (param_11->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (param_11->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (param_11->Rotation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Translation).XY.m128d_f64[1];
      (param_11->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
      (param_11->Translation).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Translation).ZW.m128d_f64[1];
      (param_11->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
      (param_11->Translation).ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (param_11->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (param_11->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (param_11->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (param_11->Scale3D).ZW.m128d_f64[1] = dVar2;
    }
    uVar5 = 0xffffffff;
    if (param_10->Index != 0xffff) {
      uVar5 = (uint)param_10->Index;
    }
    URigHierarchy::GetGlobalTransformByIndex(this,&local_128,uVar5,false);
    local_1e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_1e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_1e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_1e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_1e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_1e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_1e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_1e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_1e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_1e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_1e8,param_11,&local_128);
    fVar3 = __real_322bcc77;
    (param_7->Rotation).XY.m128d_f64[0] = local_1e8.Rotation.XY.m128d_f64[0];
    (param_7->Rotation).XY.m128d_f64[1] = local_1e8.Rotation.XY.m128d_f64[1];
    (param_7->Rotation).ZW.m128d_f64[0] = local_1e8.Rotation.ZW.m128d_f64[0];
    (param_7->Rotation).ZW.m128d_f64[1] = local_1e8.Rotation.ZW.m128d_f64[1];
    (param_7->Translation).XY.m128d_f64[0] = local_1e8.Translation.XY.m128d_f64[0];
    (param_7->Translation).XY.m128d_f64[1] = local_1e8.Translation.XY.m128d_f64[1];
    (param_7->Translation).ZW.m128d_f64[0] = local_1e8.Translation.ZW.m128d_f64[0];
    (param_7->Translation).ZW.m128d_f64[1] = local_1e8.Translation.ZW.m128d_f64[1];
    (param_7->Scale3D).XY.m128d_f64[0] = local_1e8.Scale3D.XY.m128d_f64[0];
    (param_7->Scale3D).XY.m128d_f64[1] = local_1e8.Scale3D.XY.m128d_f64[1];
    (param_7->Scale3D).ZW.m128d_f64[0] = local_1e8.Scale3D.ZW.m128d_f64[0];
    (param_7->Scale3D).ZW.m128d_f64[1] = local_1e8.Scale3D.ZW.m128d_f64[1];
    if (fVar3 < param_6) {
      uVar1 = param_9->Index;
      if (__real_3f800000 <= param_6) {
        uVar5 = 0xffffffff;
        if (uVar1 != 0xffff) {
          uVar5 = (uint)uVar1;
        }
        URigHierarchy::SetGlobalTransform(this,uVar5,param_7,true,false);
      }
      else {
        uVar5 = 0xffffffff;
        if (uVar1 != 0xffff) {
          uVar5 = (uint)uVar1;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_1e8,uVar5,false);
        pTVar8 = FRigVMMathLibrary::LerpTransform(&local_c8,&local_1e8,param_7,param_6);
        local_1e8.Rotation.XY.m128d_f64 = *&(pTVar8->Rotation).XY.m128d_f64;
        local_1e8.Rotation.ZW.m128d_f64 = *&(pTVar8->Rotation).ZW.m128d_f64;
        uVar5 = 0xffffffff;
        local_1e8.Translation.XY.m128d_f64 = *&(pTVar8->Translation).XY.m128d_f64;
        local_1e8.Translation.ZW.m128d_f64 = *&(pTVar8->Translation).ZW.m128d_f64;
        local_1e8.Scale3D.XY.m128d_f64 = *&(pTVar8->Scale3D).XY.m128d_f64;
        local_1e8.Scale3D.ZW.m128d_f64 = *&(pTVar8->Scale3D).ZW.m128d_f64;
        if (param_9->Index != 0xffff) {
          uVar5 = (uint)param_9->Index;
        }
        local_188.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
        local_188.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
        local_188.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
        local_188.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
        local_188.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
        local_188.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
        local_188.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
        local_188.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
        local_188.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
        local_188.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
        local_188.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
        local_188.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
        URigHierarchy::SetGlobalTransformByIndex(this,uVar5,&local_188,false,true,false,false);
      }
    }
    pFVar7 = TArrayView<FRigElementKey_const_,int>::operator[](param_4,param_3);
    if (((param_10->Key).Name != pFVar7->Name) || ((param_10->Key).Type != pFVar7->Type)) {
      pFVar7 = TArrayView<FRigElementKey_const_,int>::operator[](param_4,param_3);
      bVar4 = FCachedRigElement::UpdateCache(param_10,pFVar7,this);
      if (bVar4) {
        if (param_10->Index != 0xffff) {
          uVar6 = (uint)param_10->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_188,uVar6,false);
        local_128.Rotation.XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
        local_128.Rotation.XY.m128d_f64[1] = local_188.Rotation.XY.m128d_f64[1];
        local_128.Rotation.ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
        local_128.Rotation.ZW.m128d_f64[1] = local_188.Rotation.ZW.m128d_f64[1];
        local_128.Translation.XY.m128d_f64[0] = local_188.Translation.XY.m128d_f64[0];
        local_128.Translation.XY.m128d_f64[1] = local_188.Translation.XY.m128d_f64[1];
        local_128.Translation.ZW.m128d_f64[0] = local_188.Translation.ZW.m128d_f64[0];
        local_128.Translation.ZW.m128d_f64[1] = local_188.Translation.ZW.m128d_f64[1];
        local_128.Scale3D.XY.m128d_f64[0] = local_188.Scale3D.XY.m128d_f64[0];
        local_128.Scale3D.XY.m128d_f64[1] = local_188.Scale3D.XY.m128d_f64[1];
        local_128.Scale3D.ZW.m128d_f64[0] = local_188.Scale3D.ZW.m128d_f64[0];
        local_128.Scale3D.ZW.m128d_f64[1] = local_188.Scale3D.ZW.m128d_f64[1];
        pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform(param_7,&local_c8,&local_128);
        dVar2 = (pTVar8->Rotation).XY.m128d_f64[1];
        (param_11->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
        (param_11->Rotation).XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar8->Rotation).ZW.m128d_f64[1];
        (param_11->Rotation).ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
        (param_11->Rotation).ZW.m128d_f64[1] = dVar2;
        dVar2 = (pTVar8->Translation).XY.m128d_f64[1];
        (param_11->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
        (param_11->Translation).XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar8->Translation).ZW.m128d_f64[1];
        (param_11->Translation).ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
        (param_11->Translation).ZW.m128d_f64[1] = dVar2;
        dVar2 = (pTVar8->Scale3D).XY.m128d_f64[1];
        (param_11->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
        (param_11->Scale3D).XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar8->Scale3D).ZW.m128d_f64[1];
        (param_11->Scale3D).ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
        (param_11->Scale3D).ZW.m128d_f64[1] = dVar2;
        *param_8 = true;
      }
    }
  }
  return;
}

