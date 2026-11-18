// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// GetExecuteContextStruct @ 14a30eda0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_AddBoneTransform::GetExecuteContextStruct(FRigUnit_AddBoneTransform *this)

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

// StaticStruct @ 14a4a0b30

UScriptStruct * __cdecl FRigUnit_AddBoneTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform,(UObject *)pUVar1,
                         L"RigUnit_AddBoneTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton;
}

// Execute @ 14a4a0df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AddBoneTransform::Execute(FRigUnit_AddBoneTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,&this->Transform,this->Weight,
                this->bPostMultiply,this->bPropagateToChildren,&this->CachedBone);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4a0fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_AddBoneTransform::GetUpgradeInfo
          (FRigUnit_AddBoneTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 auStack_118 [32];
  undefined1 local_e8 [4];
  uint uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_d8;
  FRigVMStruct local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  uint local_b0;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  float local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_58 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_c0 = &___7FRigVMExecutePin__6B_;
  local_a8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_c8 = (FRigVMStruct)&___7FRigUnit_OffsetTransformForItem__6B_;
  local_34 = 0xffff;
  uStack_e4 = (uint)(this->Bone).ComparisonIndex;
  uStack_e0 = (this->Bone).Number;
  local_88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_98 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_b0 = uStack_e0;
  local_44 = this->bPropagateToChildren;
  local_e8[0] = 1;
  local_b8 = CONCAT44(uStack_e4,local_e8);
  local_48 = this->Weight;
  local_78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform,(UObject *)pUVar1,
                         L"RigUnit_AddBoneTransform");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_e8 = (undefined1  [4])0x5218d1a8;
    uStack_e4 = 1;
    uStack_e0 = 1;
    local_d8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::RigVMFunctions;
    local_d8._12_4_ = iStack_dc;
    local_d8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton,
               &local_d8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_AddBoneTransform.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_OffsetTransformForItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_OffsetTransformForItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_OffsetTransformForItem,(UObject *)pUVar1
                         ,L"RigUnit_OffsetTransformForItem");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_e8 = (undefined1  [4])0x521918d8;
    uStack_e4 = 1;
    uStack_e0 = 1;
    local_d8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_OffsetTransformForItem_Statics::RigVMFunctions;
    local_d8._12_4_ = iStack_dc;
    local_d8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_OffsetTransformForItem.
                      OuterSingleton,&local_d8);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_OffsetTransformForItem.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_e8 = (undefined1  [4])0x0;
  uStack_e4 = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_c8);
  ::FString::FString((FString *)&local_d8,L"Item.Name");
  ::FString::FString((FString *)local_e8,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_e8,(FString *)&local_d8,true,true);
  if ((void *)CONCAT44(uStack_e4,local_e8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_e4,local_e8));
  }
  if (local_d8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a524230

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AddBoneTransform::Execute
          (FRigUnit_AddBoneTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,&this->Transform,this->Weight,this->bPostMultiply,
                this->bPropagateToChildren,&this->CachedBone);
  return;
}

// RigVMExecute @ 14a534240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AddBoneTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  TTransform<double> *pTVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
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
    pTVar7 = (TTransform<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
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
    pfVar8 = (float *)pFVar9[2].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  fVar1 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar5 = (bool)*puVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar2 = (bool)*puVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,pTVar7,fVar1,bVar5,bVar2,pFVar12);
  return;
}

// StaticExecute @ 14a55dc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AddBoneTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TTransform<double> *param_3,
          float param_4,bool param_5,bool param_6,FCachedRigElement *param_7)

{
  __m128d *p_Var1;
  URigHierarchy *this;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  TTransform<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_1d8 [32];
  FRigElementKey local_198;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_198.Name = *param_2;
    local_198.Type = Bone;
    bVar2 = FCachedRigElement::UpdateCache(param_7,&local_198,this);
    if (bVar2) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
      local_128.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_128.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_128.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_128.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_128.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_128.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (param_7->Index != 0xffff) {
        uVar3 = (uint)param_7->Index;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_c8,uVar3,false);
      local_188.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_188.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_188.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_188.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_188.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_188.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (param_5) {
        pTVar6 = &local_c8;
        pTVar5 = param_3;
      }
      else {
        pTVar5 = &local_c8;
        pTVar6 = param_3;
      }
      UE::Math::TTransform<double>::Multiply(&local_188,pTVar6,pTVar5);
      uVar27 = local_188.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar28 = local_188.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar29 = local_188.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar30 = local_188.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar23 = local_188.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar24 = local_188.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar25 = local_188.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar26 = local_188.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar19 = local_188.Translation.ZW.m128d_f64[0]._0_4_;
      uVar20 = local_188.Translation.ZW.m128d_f64[0]._4_4_;
      uVar21 = local_188.Translation.ZW.m128d_f64[1]._0_4_;
      uVar22 = local_188.Translation.ZW.m128d_f64[1]._4_4_;
      uVar15 = local_188.Translation.XY.m128d_f64[0]._0_4_;
      uVar16 = local_188.Translation.XY.m128d_f64[0]._4_4_;
      uVar17 = local_188.Translation.XY.m128d_f64[1]._0_4_;
      uVar18 = local_188.Translation.XY.m128d_f64[1]._4_4_;
      uVar11 = local_188.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar12 = local_188.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar13 = local_188.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar14 = local_188.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar7 = local_188.Rotation.XY.m128d_f64[0]._0_4_;
      uVar8 = local_188.Rotation.XY.m128d_f64[0]._4_4_;
      uVar9 = local_188.Rotation.XY.m128d_f64[1]._0_4_;
      uVar10 = local_188.Rotation.XY.m128d_f64[1]._4_4_;
      local_128.Scale3D.ZW.m128d_f64[0] = local_188.Scale3D.ZW.m128d_f64[0];
      local_128.Scale3D.ZW.m128d_f64[1] = local_188.Scale3D.ZW.m128d_f64[1];
      local_128.Scale3D.XY.m128d_f64[0] = local_188.Scale3D.XY.m128d_f64[0];
      local_128.Scale3D.XY.m128d_f64[1] = local_188.Scale3D.XY.m128d_f64[1];
      local_128.Translation.ZW.m128d_f64[0] = local_188.Translation.ZW.m128d_f64[0];
      local_128.Translation.ZW.m128d_f64[1] = local_188.Translation.ZW.m128d_f64[1];
      local_128.Translation.XY.m128d_f64[0] = local_188.Translation.XY.m128d_f64[0];
      local_128.Translation.XY.m128d_f64[1] = local_188.Translation.XY.m128d_f64[1];
      local_128.Rotation.ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
      local_128.Rotation.ZW.m128d_f64[1] = local_188.Rotation.ZW.m128d_f64[1];
      local_128.Rotation.XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
      local_128.Rotation.XY.m128d_f64[1] = local_188.Rotation.XY.m128d_f64[1];
      if (__real_322bcc77 <
          (float)((uint)(param_4 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if (__real_3f800000 <= param_4) {
          param_4 = __real_3f800000;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        pTVar5 = FRigVMMathLibrary::LerpTransform(&local_188,&local_c8,&local_128,param_4);
        uVar7 = *(undefined4 *)(pTVar5->Rotation).XY.m128d_f64;
        uVar8 = *(undefined4 *)((longlong)(pTVar5->Rotation).XY.m128d_f64 + 4);
        uVar9 = *(undefined4 *)((pTVar5->Rotation).XY.m128d_f64 + 1);
        uVar10 = *(undefined4 *)((longlong)(pTVar5->Rotation).XY.m128d_f64 + 0xc);
        local_128.Rotation.XY.m128d_f64 = *&(pTVar5->Rotation).XY.m128d_f64;
        p_Var1 = &(pTVar5->Rotation).ZW;
        uVar11 = *(undefined4 *)p_Var1->m128d_f64;
        uVar12 = *(undefined4 *)((longlong)(pTVar5->Rotation).ZW.m128d_f64 + 4);
        uVar13 = *(undefined4 *)((pTVar5->Rotation).ZW.m128d_f64 + 1);
        uVar14 = *(undefined4 *)((longlong)(pTVar5->Rotation).ZW.m128d_f64 + 0xc);
        local_128.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
        uVar15 = *(undefined4 *)(pTVar5->Translation).XY.m128d_f64;
        uVar16 = *(undefined4 *)((longlong)(pTVar5->Translation).XY.m128d_f64 + 4);
        uVar17 = *(undefined4 *)((pTVar5->Translation).XY.m128d_f64 + 1);
        uVar18 = *(undefined4 *)((longlong)(pTVar5->Translation).XY.m128d_f64 + 0xc);
        local_128.Translation.XY.m128d_f64 = *&(pTVar5->Translation).XY.m128d_f64;
        p_Var1 = &(pTVar5->Translation).ZW;
        uVar19 = *(undefined4 *)p_Var1->m128d_f64;
        uVar20 = *(undefined4 *)((longlong)(pTVar5->Translation).ZW.m128d_f64 + 4);
        uVar21 = *(undefined4 *)((pTVar5->Translation).ZW.m128d_f64 + 1);
        uVar22 = *(undefined4 *)((longlong)(pTVar5->Translation).ZW.m128d_f64 + 0xc);
        local_128.Translation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
        uVar23 = *(undefined4 *)(pTVar5->Scale3D).XY.m128d_f64;
        uVar24 = *(undefined4 *)((longlong)(pTVar5->Scale3D).XY.m128d_f64 + 4);
        uVar25 = *(undefined4 *)((pTVar5->Scale3D).XY.m128d_f64 + 1);
        uVar26 = *(undefined4 *)((longlong)(pTVar5->Scale3D).XY.m128d_f64 + 0xc);
        local_128.Scale3D.XY.m128d_f64 = *&(pTVar5->Scale3D).XY.m128d_f64;
        p_Var1 = &(pTVar5->Scale3D).ZW;
        uVar27 = *(undefined4 *)p_Var1->m128d_f64;
        uVar28 = *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 4);
        uVar29 = *(undefined4 *)((pTVar5->Scale3D).ZW.m128d_f64 + 1);
        uVar30 = *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 0xc);
        local_128.Scale3D.ZW.m128d_f64 = *&p_Var1->m128d_f64;
      }
      if (param_7->Index != 0xffff) {
        uVar4 = (uint)param_7->Index;
      }
      local_188.Rotation.XY.m128d_f64[0]._4_4_ = uVar8;
      local_188.Rotation.XY.m128d_f64[0]._0_4_ = uVar7;
      local_188.Rotation.XY.m128d_f64[1]._0_4_ = uVar9;
      local_188.Rotation.XY.m128d_f64[1]._4_4_ = uVar10;
      local_188.Rotation.ZW.m128d_f64[0]._4_4_ = uVar12;
      local_188.Rotation.ZW.m128d_f64[0]._0_4_ = uVar11;
      local_188.Rotation.ZW.m128d_f64[1]._0_4_ = uVar13;
      local_188.Rotation.ZW.m128d_f64[1]._4_4_ = uVar14;
      local_188.Translation.XY.m128d_f64[0]._4_4_ = uVar16;
      local_188.Translation.XY.m128d_f64[0]._0_4_ = uVar15;
      local_188.Translation.XY.m128d_f64[1]._0_4_ = uVar17;
      local_188.Translation.XY.m128d_f64[1]._4_4_ = uVar18;
      local_188.Translation.ZW.m128d_f64[0]._4_4_ = uVar20;
      local_188.Translation.ZW.m128d_f64[0]._0_4_ = uVar19;
      local_188.Translation.ZW.m128d_f64[1]._0_4_ = uVar21;
      local_188.Translation.ZW.m128d_f64[1]._4_4_ = uVar22;
      local_188.Scale3D.XY.m128d_f64[0]._4_4_ = uVar24;
      local_188.Scale3D.XY.m128d_f64[0]._0_4_ = uVar23;
      local_188.Scale3D.XY.m128d_f64[1]._0_4_ = uVar25;
      local_188.Scale3D.XY.m128d_f64[1]._4_4_ = uVar26;
      local_188.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar28;
      local_188.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar27;
      local_188.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar29;
      local_188.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar30;
      URigHierarchy::SetGlobalTransformByIndex(this,uVar4,&local_188,false,param_6,false,false);
    }
  }
  return;
}

