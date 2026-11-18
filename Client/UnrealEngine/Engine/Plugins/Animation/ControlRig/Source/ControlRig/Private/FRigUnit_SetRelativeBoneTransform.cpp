// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4ee660

UScriptStruct * __cdecl FRigUnit_SetRelativeBoneTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform,
                         (UObject *)pUVar1,L"RigUnit_SetRelativeBoneTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ee6e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetRelativeBoneTransform::GetExecuteContextStruct(FRigUnit_SetRelativeBoneTransform *this)

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

// Execute @ 14a4eeb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetRelativeBoneTransform::Execute(FRigUnit_SetRelativeBoneTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,&this->Space,&this->Transform,
                this->Weight,this->bPropagateToChildren,&this->CachedBone,&this->CachedSpaceIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4eef70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SetRelativeBoneTransform::GetUpgradeInfo
          (FRigUnit_SetRelativeBoneTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 auStack_148 [32];
  undefined1 local_118 [4];
  uint uStack_114;
  uint uStack_110;
  int iStack_10c;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_108;
  FRigVMStruct local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_dc;
  uint local_d4;
  undefined1 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  float local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_b8 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dStack_b0 = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_118 = (undefined1  [4])CONCAT31(local_118._1_3_,1);
  local_d0 = 0;
  local_f0 = &___7FRigVMExecutePin__6B_;
  local_98 = (this->Transform).Translation.ZW.m128d_f64[0];
  dStack_90 = (this->Transform).Translation.ZW.m128d_f64[1];
  local_f8 = (FRigVMStruct)&___7FRigUnit_SetRelativeTransformForItem__6B_;
  local_54 = 0xffff;
  local_34 = 0xffff;
  uStack_114 = (uint)(this->Space).ComparisonIndex;
  uStack_110 = (this->Space).Number;
  local_dc = CONCAT44(uStack_114,local_118);
  local_d4 = uStack_110;
  uStack_114 = (uint)(this->Bone).ComparisonIndex;
  uStack_110 = (this->Bone).Number;
  local_118[0] = 1;
  local_e8 = CONCAT44(uStack_114,local_118);
  local_c8 = (this->Transform).Rotation.XY.m128d_f64[0];
  dStack_c0 = (this->Transform).Rotation.XY.m128d_f64[1];
  local_e0 = uStack_110;
  local_78 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_70 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_64 = 1;
  local_a8 = (this->Transform).Translation.XY.m128d_f64[0];
  dStack_a0 = (this->Transform).Translation.XY.m128d_f64[1];
  local_60 = 0;
  local_5c = 0;
  local_88 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dStack_80 = (this->Transform).Scale3D.XY.m128d_f64[1];
  local_50 = 0xffffffff;
  local_48 = 0;
  local_68 = this->Weight;
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
  local_40 = 0;
  local_3c = 0;
  local_30 = 0xffffffff;
  local_28 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform,
                         (UObject *)pUVar1,L"RigUnit_SetRelativeBoneTransform");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_118 = (undefined1  [4])0x52194128;
    uStack_114 = 1;
    uStack_110 = 1;
    local_108.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::RigVMFunctions;
    local_108._12_4_ = iStack_10c;
    local_108.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.
                      OuterSingleton,&local_108);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeBoneTransform.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeTransformForItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeTransformForItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem,
                         (UObject *)pUVar1,L"RigUnit_SetRelativeTransformForItem");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_118 = (undefined1  [4])0x52194280;
    uStack_114 = 1;
    uStack_110 = 1;
    local_108.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::RigVMFunctions;
    local_108._12_4_ = iStack_10c;
    local_108.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeTransformForItem.
                      OuterSingleton,&local_108);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetRelativeTransformForItem.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_118 = (undefined1  [4])0x0;
  uStack_114 = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_f8);
  ::FString::FString((FString *)&local_108,L"Parent.Name");
  ::FString::FString((FString *)local_118,L"Space");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_118,(FString *)&local_108,true,true);
  if ((void *)CONCAT44(uStack_114,local_118) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_114,local_118));
  }
  if (local_108.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_108.DataPtr);
  }
  ::FString::FString((FString *)local_118,L"Child.Name");
  ::FString::FString((FString *)&local_108,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_108,(FString *)local_118,true,true);
  if (local_108.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_108.DataPtr);
  }
  if ((void *)CONCAT44(uStack_114,local_118) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_114,local_118));
  }
  ::FString::FString((FString *)local_118,L"Transform");
  ::FString::FString((FString *)&local_108,L"RelativeTransform");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_108,(FString *)local_118,true,true);
  if (local_108.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_108.DataPtr);
  }
  if ((void *)CONCAT44(uStack_114,local_118) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_114,local_118));
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52d070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetRelativeBoneTransform::Execute
          (FRigUnit_SetRelativeBoneTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,&this->Space,&this->Transform,this->Weight,
                this->bPropagateToChildren,&this->CachedBone,&this->CachedSpaceIndex);
  return;
}

// RigVMExecute @ 14a553970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetRelativeBoneTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FName *pFVar6;
  TTransform<double> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  uchar *puVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FCachedRigElement *pFVar13;
  FControlRigExecuteContext *pFVar14;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FName *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TTransform<double> *)pFVar8[2].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  fVar1 = *pfVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar10;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,pFVar5,pFVar6,pTVar7,fVar1,bVar4,pFVar12,pFVar13);
  return;
}

// StaticExecute @ 14a5936b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetRelativeBoneTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,
          TTransform<double> *param_4,float param_5,bool param_6,FCachedRigElement *param_7,
          FCachedRigElement *param_8)

{
  __m128d *p_Var1;
  __m128d *p_Var2;
  __m128d *p_Var3;
  URigHierarchy *this;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  undefined1 auStackY_228 [32];
  FRigElementKey local_1e8;
  FRigElementKey local_1d8;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_1e8.Name = *param_2;
    local_1d8.Name = *param_3;
    local_1e8.Type = Bone;
    local_1d8.Type = Bone;
    bVar4 = FCachedRigElement::UpdateCache(param_7,&local_1e8,this);
    if (bVar4) {
      bVar4 = FCachedRigElement::UpdateCache(param_8,&local_1d8,this);
      if (bVar4) {
        uVar7 = 0xffffffff;
        uVar6 = 0xffffffff;
        uVar5 = uVar6;
        if (param_8->Index != 0xffff) {
          uVar5 = (uint)param_8->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_108,uVar5,false);
        local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_1c8,param_4,&local_108);
        if ((float)((uint)(param_5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_322bcc77) {
          local_168.Rotation.XY.m128d_f64[0]._0_4_ = local_1c8.Rotation.XY.m128d_f64[0]._0_4_;
          local_168.Rotation.XY.m128d_f64[0]._4_4_ = local_1c8.Rotation.XY.m128d_f64[0]._4_4_;
          local_168.Rotation.XY.m128d_f64[1]._0_4_ = local_1c8.Rotation.XY.m128d_f64[1]._0_4_;
          local_168.Rotation.XY.m128d_f64[1]._4_4_ = local_1c8.Rotation.XY.m128d_f64[1]._4_4_;
          local_168.Rotation.ZW.m128d_f64[0]._0_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._0_4_;
          local_168.Rotation.ZW.m128d_f64[0]._4_4_ = local_1c8.Rotation.ZW.m128d_f64[0]._4_4_;
          local_168.Rotation.ZW.m128d_f64[1]._0_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._0_4_;
          local_168.Rotation.ZW.m128d_f64[1]._4_4_ = local_1c8.Rotation.ZW.m128d_f64[1]._4_4_;
          local_168.Translation.XY.m128d_f64[0]._0_4_ = local_1c8.Translation.XY.m128d_f64[0]._0_4_;
          local_168.Translation.XY.m128d_f64[0]._4_4_ = local_1c8.Translation.XY.m128d_f64[0]._4_4_;
          local_168.Translation.XY.m128d_f64[1]._0_4_ = local_1c8.Translation.XY.m128d_f64[1]._0_4_;
          local_168.Translation.XY.m128d_f64[1]._4_4_ = local_1c8.Translation.XY.m128d_f64[1]._4_4_;
          local_168.Translation.ZW.m128d_f64[0]._0_4_ = local_1c8.Translation.ZW.m128d_f64[0]._0_4_;
          local_168.Translation.ZW.m128d_f64[0]._4_4_ = local_1c8.Translation.ZW.m128d_f64[0]._4_4_;
          local_168.Translation.ZW.m128d_f64[1]._0_4_ = local_1c8.Translation.ZW.m128d_f64[1]._0_4_;
          local_168.Translation.ZW.m128d_f64[1]._4_4_ = local_1c8.Translation.ZW.m128d_f64[1]._4_4_;
          local_168.Scale3D.XY.m128d_f64[0]._0_4_ = local_1c8.Scale3D.XY.m128d_f64[0]._0_4_;
          local_168.Scale3D.XY.m128d_f64[0]._4_4_ = local_1c8.Scale3D.XY.m128d_f64[0]._4_4_;
          local_168.Scale3D.XY.m128d_f64[1]._0_4_ = local_1c8.Scale3D.XY.m128d_f64[1]._0_4_;
          local_168.Scale3D.XY.m128d_f64[1]._4_4_ = local_1c8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_168.Scale3D.ZW.m128d_f64[0]._0_4_ = local_1c8.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_168.Scale3D.ZW.m128d_f64[0]._4_4_ = local_1c8.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_168.Scale3D.ZW.m128d_f64[1]._0_4_ = local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_168.Scale3D.ZW.m128d_f64[1]._4_4_ = local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        else {
          if (__real_3f800000 <= param_5) {
            param_5 = __real_3f800000;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          if (param_7->Index != 0xffff) {
            uVar6 = (uint)param_7->Index;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_168,uVar6,false);
          pTVar8 = FRigVMMathLibrary::LerpTransform(&local_a8,&local_168,&local_1c8,param_5);
          local_1c8.Rotation.XY.m128d_f64 = *&(pTVar8->Rotation).XY.m128d_f64;
          p_Var1 = &(pTVar8->Rotation).ZW;
          local_1c8.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
          local_1c8.Translation.XY.m128d_f64 = *&(pTVar8->Translation).XY.m128d_f64;
          p_Var2 = &(pTVar8->Translation).ZW;
          local_1c8.Translation.ZW.m128d_f64 = *&p_Var2->m128d_f64;
          local_1c8.Scale3D.XY.m128d_f64 = *&(pTVar8->Scale3D).XY.m128d_f64;
          p_Var3 = &(pTVar8->Scale3D).ZW;
          local_1c8.Scale3D.ZW.m128d_f64 = *&p_Var3->m128d_f64;
          local_168.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
          local_168.Rotation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
          local_168.Rotation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
          local_168.Rotation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
          local_168.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var1->m128d_f64;
          local_168.Rotation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
          local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar8->Rotation).ZW.m128d_f64 + 1);
          local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
          local_168.Translation.XY.m128d_f64[0]._0_4_ =
               *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
          local_168.Translation.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
          local_168.Translation.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
          local_168.Translation.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
          local_168.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var2->m128d_f64;
          local_168.Translation.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
          local_168.Translation.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
          local_168.Translation.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
          local_168.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
          local_168.Scale3D.XY.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
          local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
          local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
          local_168.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)p_Var3->m128d_f64;
          local_168.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
          local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
          local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
        }
        if (param_7->Index != 0xffff) {
          uVar7 = (uint)param_7->Index;
        }
        URigHierarchy::SetGlobalTransformByIndex(this,uVar7,&local_168,false,param_6,false,false);
      }
    }
  }
  return;
}

