// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a47cdf0

UScriptStruct * __cdecl FRigUnit_SetBoneRotation::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation,(UObject *)pUVar1,
                         L"RigUnit_SetBoneRotation");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47ceb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetBoneRotation::GetExecuteContextStruct(FRigUnit_SetBoneRotation *this)

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

// Execute @ 14a47d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetBoneRotation::Execute(FRigUnit_SetBoneRotation *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,&this->Rotation,this->Space,
                this->Weight,this->bPropagateToChildren,&this->CachedBone);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a47dd40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SetBoneRotation::GetUpgradeInfo
          (FRigUnit_SetBoneRotation *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 local_98 [4];
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_88;
  FRigVMStruct local_78;
  undefined **local_70;
  undefined8 local_68;
  uint local_60;
  ERigVMTransformSpace local_5c;
  undefined1 local_5b;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  float local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined4 local_20;
  undefined8 local_18;
  
  local_48 = (this->Rotation).Z;
  dStack_40 = (this->Rotation).W;
  local_98[0] = 1;
  local_5b = 0;
  local_70 = &___7FRigVMExecutePin__6B_;
  local_34 = 1;
  local_78 = (FRigVMStruct)&___7FRigUnit_SetRotation__6B_;
  local_24 = 0xffff;
  uStack_94 = (uint)(this->Bone).ComparisonIndex;
  uStack_90 = (this->Bone).Number;
  local_68 = CONCAT44(uStack_94,local_98);
  local_58 = (this->Rotation).X;
  dStack_50 = (this->Rotation).Y;
  local_60 = uStack_90;
  local_5c = this->Space;
  local_38 = this->Weight;
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
  local_30 = 0;
  local_2c = 0;
  local_20 = 0xffffffff;
  local_18 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation,(UObject *)pUVar1,
                         L"RigUnit_SetBoneRotation");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_98 = (undefined1  [4])0x52192480;
    uStack_94 = 1;
    uStack_90 = 1;
    local_88.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::RigVMFunctions;
    local_88._12_4_ = iStack_8c;
    local_88.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton,
               &local_88);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneRotation.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetRotation.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetRotation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRotation,(UObject *)pUVar1,
                         L"RigUnit_SetRotation");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_98 = (undefined1  [4])0x52194a58;
    uStack_94 = 1;
    uStack_90 = 1;
    local_88.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::RigVMFunctions;
    local_88._12_4_ = iStack_8c;
    local_88.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SetRotation.OuterSingleton,
               &local_88);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetRotation.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_78);
  ::FString::FString((FString *)&local_88,L"Item.Name");
  ::FString::FString((FString *)local_98,L"Bone");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)local_98,(FString *)&local_88,true,true);
  if ((void *)CONCAT44(uStack_94,local_98) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_94,local_98));
  }
  if (local_88.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  ::FString::FString((FString *)local_98,L"Value");
  ::FString::FString((FString *)&local_88,L"Rotation");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_88,(FString *)local_98,true,true);
  if (local_88.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  if ((void *)CONCAT44(uStack_94,local_98) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_94,local_98));
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52c5a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetBoneRotation::Execute(FRigUnit_SetBoneRotation *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,&this->Rotation,this->Space,this->Weight,
                this->bPropagateToChildren,&this->CachedBone);
  return;
}

// RigVMExecute @ 14a5500f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoneRotation::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  TQuat<double> *pTVar7;
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
    pTVar7 = (TQuat<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TQuat<double> *)
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

// StaticExecute @ 14a58ff30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoneRotation::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TQuat<double> *param_3,
          ERigVMTransformSpace param_4,float param_5,bool param_6,FCachedRigElement *param_7)

{
  URigHierarchy *this;
  undefined1 auVar1 [16];
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TQuat<double> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStackY_1a8 [32];
  FRigElementKey local_160 [2];
  TQuat<double> local_148;
  TTransform<double> local_128;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_160[0].Name = *param_2;
    local_160[0].Type = Bone;
    bVar8 = FCachedRigElement::UpdateCache(param_7,local_160,this);
    if (bVar8) {
      if (param_4 == LocalSpace) {
        uVar10 = 0xffffffff;
        uVar9 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar9 = (uint)param_7->Index;
        }
        URigHierarchy::GetLocalTransformByIndex(this,&local_a8,uVar9,false);
        if (__real_322bcc77 <
            (float)((uint)(param_5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (__real_3f800000 <= param_5) {
            param_5 = __real_3f800000;
          }
          local_148.X = local_a8.Rotation.XY.m128d_f64[0];
          local_148.Y = local_a8.Rotation.XY.m128d_f64[1];
          local_148.Z = local_a8.Rotation.ZW.m128d_f64[0];
          local_148.W = local_a8.Rotation.ZW.m128d_f64[1];
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          auVar23._0_8_ = (double)param_5;
          auVar23._8_8_ = 0;
          pTVar11 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (&local_c8,&local_148,param_3,auVar23._0_8_);
          dVar4 = pTVar11->X;
          dVar5 = pTVar11->Y;
          dVar6 = pTVar11->Z;
          dVar7 = pTVar11->W;
          dVar14 = dVar4 * dVar4 + dVar6 * dVar6;
          dVar18 = dVar5 * dVar5 + dVar7 * dVar7;
          dVar2 = dVar18 + dVar14;
          dVar14 = dVar14 + dVar18;
          auVar22._8_4_ = SUB84(dVar14,0);
          auVar22._0_8_ = dVar2;
          auVar22._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          auVar22 = sqrtpd(auVar23,auVar22);
          uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
          uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar14);
          auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
          uVar9 = (uint)(uVar12 >> 0x20);
          uVar24 = (uint)(uVar13 >> 0x20);
          auVar27._0_8_ = uVar12 & (ulonglong)(auVar25._0_8_ * dVar4);
          uVar3 = uVar13 & (ulonglong)(auVar25._8_8_ * dVar5);
          auVar27._8_4_ = (undefined4)uVar3;
          auVar27._12_4_ = (undefined4)(uVar3 >> 0x20);
          auVar25._0_4_ =
               ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar25._4_4_ =
               ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                              0x20);
          auVar25._8_4_ =
               ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar25._12_4_ =
               ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          local_128.Rotation.XY.m128d_f64 = (double  [2])(auVar27 | auVar25);
          auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
          auVar17._0_8_ = (ulonglong)(auVar22._0_8_ * dVar6) & uVar12;
          uVar3 = (ulonglong)(auVar22._8_8_ * dVar7) & uVar13;
          auVar17._8_4_ = (undefined4)uVar3;
          auVar17._12_4_ = (undefined4)(uVar3 >> 0x20);
          auVar20._0_4_ =
               ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar20._4_4_ =
               ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                              0x20);
          auVar20._8_4_ =
               ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar20._12_4_ =
               ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          local_128.Rotation.ZW.m128d_f64 = (double  [2])(auVar20 | auVar17);
        }
        else {
          local_128.Rotation.XY.m128d_f64[0] = param_3->X;
          local_128.Rotation.XY.m128d_f64[1] = param_3->Y;
          local_128.Rotation.ZW.m128d_f64[0] = param_3->Z;
          local_128.Rotation.ZW.m128d_f64[1] = param_3->W;
        }
        if (param_7->Index != 0xffff) {
          uVar10 = (uint)param_7->Index;
        }
        local_128.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
        local_128.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
        local_128.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
        local_128.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
        local_128.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
        local_128.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
        local_128.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
        local_128.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
        local_a8.Rotation.XY.m128d_f64 = local_128.Rotation.XY.m128d_f64;
        local_a8.Rotation.ZW.m128d_f64 = local_128.Rotation.ZW.m128d_f64;
        URigHierarchy::SetLocalTransformByIndex(this,uVar10,&local_128,false,param_6,false,false);
      }
      else if (param_4 == GlobalSpace) {
        uVar10 = 0xffffffff;
        uVar9 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar9 = (uint)param_7->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_a8,uVar9,false);
        if (__real_322bcc77 <
            (float)((uint)(param_5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (__real_3f800000 <= param_5) {
            param_5 = __real_3f800000;
          }
          local_148.X = local_a8.Rotation.XY.m128d_f64[0];
          local_148.Y = local_a8.Rotation.XY.m128d_f64[1];
          local_148.Z = local_a8.Rotation.ZW.m128d_f64[0];
          local_148.W = local_a8.Rotation.ZW.m128d_f64[1];
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          auVar21._0_8_ = (double)param_5;
          auVar21._8_8_ = 0;
          pTVar11 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (&local_c8,&local_148,param_3,auVar21._0_8_);
          dVar4 = pTVar11->X;
          dVar5 = pTVar11->Y;
          dVar6 = pTVar11->Z;
          dVar7 = pTVar11->W;
          dVar14 = dVar4 * dVar4 + dVar6 * dVar6;
          dVar18 = dVar5 * dVar5 + dVar7 * dVar7;
          dVar2 = dVar18 + dVar14;
          dVar14 = dVar14 + dVar18;
          auVar1._8_4_ = SUB84(dVar14,0);
          auVar1._0_8_ = dVar2;
          auVar1._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          auVar22 = sqrtpd(auVar21,auVar1);
          uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
          uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar14);
          auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
          uVar9 = (uint)(uVar12 >> 0x20);
          uVar24 = (uint)(uVar13 >> 0x20);
          auVar26._0_8_ = uVar12 & (ulonglong)(auVar25._0_8_ * dVar4);
          uVar3 = uVar13 & (ulonglong)(auVar25._8_8_ * dVar5);
          auVar26._8_4_ = (undefined4)uVar3;
          auVar26._12_4_ = (undefined4)(uVar3 >> 0x20);
          auVar15._0_4_ =
               ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar15._4_4_ =
               ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                              0x20);
          auVar15._8_4_ =
               ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar15._12_4_ =
               ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          local_128.Rotation.XY.m128d_f64 = (double  [2])(auVar26 | auVar15);
          auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
          auVar16._0_8_ = (ulonglong)(auVar22._0_8_ * dVar6) & uVar12;
          uVar3 = (ulonglong)(auVar22._8_8_ * dVar7) & uVar13;
          auVar16._8_4_ = (undefined4)uVar3;
          auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
          auVar19._0_4_ =
               ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar19._4_4_ =
               ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                              0x20);
          auVar19._8_4_ =
               ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar19._12_4_ =
               ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          local_128.Rotation.ZW.m128d_f64 = (double  [2])(auVar19 | auVar16);
        }
        else {
          local_128.Rotation.XY.m128d_f64[0] = param_3->X;
          local_128.Rotation.XY.m128d_f64[1] = param_3->Y;
          local_128.Rotation.ZW.m128d_f64[0] = param_3->Z;
          local_128.Rotation.ZW.m128d_f64[1] = param_3->W;
        }
        if (param_7->Index != 0xffff) {
          uVar10 = (uint)param_7->Index;
        }
        local_128.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
        local_128.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
        local_128.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
        local_128.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
        local_128.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
        local_128.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
        local_128.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
        local_128.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
        local_a8.Rotation.XY.m128d_f64 = local_128.Rotation.XY.m128d_f64;
        local_a8.Rotation.ZW.m128d_f64 = local_128.Rotation.ZW.m128d_f64;
        URigHierarchy::SetGlobalTransformByIndex(this,uVar10,&local_128,false,param_6,false,false);
      }
    }
  }
  return;
}

