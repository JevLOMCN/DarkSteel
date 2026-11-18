// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4947e0

UScriptStruct * __cdecl FRigUnit_SetBoneTranslation::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoneTranslation,(UObject *)pUVar1,
                         L"RigUnit_SetBoneTranslation");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetBoneTranslation_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton;
}

// GetExecuteContextStruct @ 14a494860

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetBoneTranslation::GetExecuteContextStruct(FRigUnit_SetBoneTranslation *this)

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

// Execute @ 14a4949e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetBoneTranslation::Execute(FRigUnit_SetBoneTranslation *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,&this->Translation,this->Space,
                this->Weight,this->bPropagateToChildren,&this->CachedBone);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a494b80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SetBoneTranslation::GetUpgradeInfo
          (FRigUnit_SetBoneTranslation *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 local_88 [4];
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_78;
  FRigVMStruct local_68;
  undefined **local_60;
  undefined8 local_58;
  uint local_50;
  ERigVMTransformSpace local_4c;
  undefined1 local_4b;
  double local_48;
  double dStack_40;
  double local_38;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  undefined4 local_18;
  undefined8 local_10;
  
  local_38 = (this->Translation).field0_0x0._s_0.Z;
  local_60 = &___7FRigVMExecutePin__6B_;
  local_88[0] = 1;
  local_68 = (FRigVMStruct)&___7FRigUnit_SetTranslation__6B_;
  local_4b = 0;
  local_1c = 0xffff;
  uStack_84 = (uint)(this->Bone).ComparisonIndex;
  uStack_80 = (this->Bone).Number;
  local_58 = CONCAT44(uStack_84,local_88);
  local_48 = (this->Translation).field0_0x0._s_0.X;
  dStack_40 = (this->Translation).field0_0x0._s_0.Y;
  local_50 = uStack_80;
  local_4c = this->Space;
  local_30 = this->Weight;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  local_2c = 1;
  local_28 = 0;
  local_24 = 0;
  local_18 = 0xffffffff;
  local_10 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoneTranslation,(UObject *)pUVar1,
                         L"RigUnit_SetBoneTranslation");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_88 = (undefined1  [4])0x521926d0;
    uStack_84 = 1;
    uStack_80 = 1;
    local_78.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetBoneTranslation_Statics::RigVMFunctions
    ;
    local_78._12_4_ = iStack_7c;
    local_78.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton,
               &local_78);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneTranslation.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetTranslation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetTranslation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTranslation,(UObject *)pUVar1,
                         L"RigUnit_SetTranslation");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_88 = (undefined1  [4])0x52194938;
    uStack_84 = 1;
    uStack_80 = 1;
    local_78.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::RigVMFunctions;
    local_78._12_4_ = iStack_7c;
    local_78.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SetTranslation.OuterSingleton,
               &local_78);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetTranslation.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_68);
  ::FString::FString((FString *)&local_78,L"Item.Name");
  ::FString::FString((FString *)local_88,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_88,(FString *)&local_78,true,true);
  if ((void *)CONCAT44(uStack_84,local_88) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_84,local_88));
  }
  if (local_78.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  ::FString::FString((FString *)local_88,L"Value");
  ::FString::FString((FString *)&local_78,L"Translation");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_78,(FString *)local_88,true,true);
  if (local_78.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  if ((void *)CONCAT44(uStack_84,local_88) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_84,local_88));
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52c710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetBoneTranslation::Execute
          (FRigUnit_SetBoneTranslation *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,&this->Translation,this->Space,this->Weight,
                this->bPropagateToChildren,&this->CachedBone);
  return;
}

// RigVMExecute @ 14a550520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoneTranslation::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  TVector<double> *pTVar7;
  ERigVMTransformSpace *pEVar8;
  FRigVMMemoryHandle *pFVar9;
  float *pfVar10;
  uchar *puVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  FControlRigExecuteContext *pFVar14;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
    pFVar6 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
  if (iVar3 < 2) {
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
    pTVar7 = (TVector<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar3 < 3) {
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
    pEVar8 = pFVar9[2].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  EVar2 = *pEVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar5 = (bool)*puVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,pFVar6,pTVar7,EVar2,fVar1,bVar5,pFVar13);
  return;
}

// StaticExecute @ 14a5905a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoneTranslation::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TVector<double> *param_3,
          ERigVMTransformSpace param_4,float param_5,bool param_6,FCachedRigElement *param_7)

{
  URigHierarchy *this;
  double dVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStackY_158 [32];
  FRigElementKey local_118 [4];
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_118[0].Name = *param_2;
    local_118[0].Type = Bone;
    bVar2 = FCachedRigElement::UpdateCache(param_7,local_118,this);
    if (bVar2) {
      if (param_4 == LocalSpace) {
        uVar4 = 0xffffffff;
        uVar3 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar3 = (uint)param_7->Index;
        }
        URigHierarchy::GetLocalTransformByIndex(this,&local_88,uVar3,false);
        if (__real_322bcc77 <
            (float)((uint)(param_5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (__real_3f800000 <= param_5) {
            param_5 = __real_3f800000;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          dVar1 = (double)param_5;
          local_88.Translation.XY.m128d_f64[0] =
               ((param_3->field0_0x0)._s_0.X - local_88.Translation.XY.m128d_f64[0]) * dVar1 +
               local_88.Translation.XY.m128d_f64[0];
          local_e8.Translation.ZW.m128d_f64[0] =
               ((param_3->field0_0x0)._s_0.Z - local_88.Translation.ZW.m128d_f64[0]) * dVar1 +
               local_88.Translation.ZW.m128d_f64[0];
          dVar1 = ((param_3->field0_0x0)._s_0.Y - local_88.Translation.XY.m128d_f64[1]) * dVar1 +
                  local_88.Translation.XY.m128d_f64[1];
        }
        else {
          local_88.Translation.XY.m128d_f64[0] = *(double *)&param_3->field0_0x0;
          dVar1 = *(double *)((longlong)&param_3->field0_0x0 + 8);
          local_e8.Translation.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
        }
        uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_88.Translation.ZW.m128d_f64[1] = 0.0;
        local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
        local_88.Translation.XY.m128d_f64[1]._4_4_ = uVar5;
        if (param_7->Index != 0xffff) {
          uVar4 = (uint)param_7->Index;
        }
        local_e8.Rotation.XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
        local_e8.Rotation.XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
        local_e8.Rotation.ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
        local_e8.Rotation.ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
        local_e8.Scale3D.XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
        local_e8.Scale3D.XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
        local_e8.Scale3D.ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
        local_e8.Scale3D.ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
        local_e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
        local_e8.Translation.XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
        local_e8.Translation.XY.m128d_f64[1]._4_4_ = uVar5;
        local_e8.Translation.ZW.m128d_f64[1] = 0.0;
        local_88.Translation.ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
        URigHierarchy::SetLocalTransformByIndex(this,uVar4,&local_e8,false,param_6,false,false);
      }
      else if (param_4 == GlobalSpace) {
        uVar4 = 0xffffffff;
        uVar3 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar3 = (uint)param_7->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_88,uVar3,false);
        if (__real_322bcc77 <
            (float)((uint)(param_5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (__real_3f800000 <= param_5) {
            param_5 = __real_3f800000;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          dVar1 = (double)param_5;
          local_88.Translation.XY.m128d_f64[0] =
               ((param_3->field0_0x0)._s_0.X - local_88.Translation.XY.m128d_f64[0]) * dVar1 +
               local_88.Translation.XY.m128d_f64[0];
          local_e8.Translation.ZW.m128d_f64[0] =
               ((param_3->field0_0x0)._s_0.Z - local_88.Translation.ZW.m128d_f64[0]) * dVar1 +
               local_88.Translation.ZW.m128d_f64[0];
          dVar1 = ((param_3->field0_0x0)._s_0.Y - local_88.Translation.XY.m128d_f64[1]) * dVar1 +
                  local_88.Translation.XY.m128d_f64[1];
        }
        else {
          local_88.Translation.XY.m128d_f64[0] = *(double *)&param_3->field0_0x0;
          dVar1 = *(double *)((longlong)&param_3->field0_0x0 + 8);
          local_e8.Translation.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
        }
        uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_88.Translation.ZW.m128d_f64[1] = 0.0;
        local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
        local_88.Translation.XY.m128d_f64[1]._4_4_ = uVar5;
        if (param_7->Index != 0xffff) {
          uVar4 = (uint)param_7->Index;
        }
        local_e8.Rotation.XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
        local_e8.Rotation.XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
        local_e8.Rotation.ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
        local_e8.Rotation.ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
        local_e8.Scale3D.XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
        local_e8.Scale3D.XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
        local_e8.Scale3D.ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
        local_e8.Scale3D.ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
        local_e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
        local_e8.Translation.XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
        local_e8.Translation.XY.m128d_f64[1]._4_4_ = uVar5;
        local_e8.Translation.ZW.m128d_f64[1] = 0.0;
        local_88.Translation.ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
        URigHierarchy::SetGlobalTransformByIndex(this,uVar4,&local_e8,false,param_6,false,false);
      }
    }
  }
  return;
}

