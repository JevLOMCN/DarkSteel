// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a476d10

UScriptStruct * __cdecl FRigUnit_SetBoneInitialTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoneInitialTransform,
                         (UObject *)pUVar1,L"RigUnit_SetBoneInitialTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetBoneInitialTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a476db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetBoneInitialTransform::GetExecuteContextStruct(FRigUnit_SetBoneInitialTransform *this)

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

// Execute @ 14a477060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetBoneInitialTransform::Execute(FRigUnit_SetBoneInitialTransform *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Bone,&this->Transform,&this->Result,
                this->Space,this->bPropagateToChildren,&this->CachedBone);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4771b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SetBoneInitialTransform::GetUpgradeInfo
          (FRigUnit_SetBoneInitialTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
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
  ERigVMTransformSpace local_ac;
  undefined1 local_ab;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_98 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dStack_90 = (this->Transform).Rotation.ZW.m128d_f64[1];
  local_e8[0] = 1;
  local_48 = 0x3f800000;
  local_c0 = &___7FRigVMExecutePin__6B_;
  local_78 = (this->Transform).Translation.ZW.m128d_f64[0];
  dStack_70 = (this->Transform).Translation.ZW.m128d_f64[1];
  local_c8 = (FRigVMStruct)&___7FRigUnit_SetTransform__6B_;
  local_34 = 0xffff;
  uStack_e4 = (uint)(this->Bone).ComparisonIndex;
  uStack_e0 = (this->Bone).Number;
  local_b8 = CONCAT44(uStack_e4,local_e8);
  local_a8 = (this->Transform).Rotation.XY.m128d_f64[0];
  dStack_a0 = (this->Transform).Rotation.XY.m128d_f64[1];
  local_b0 = uStack_e0;
  local_ac = this->Space;
  local_88 = (this->Transform).Translation.XY.m128d_f64[0];
  dStack_80 = (this->Transform).Translation.XY.m128d_f64[1];
  local_58 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_50 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  local_44 = 1;
  local_68 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dStack_60 = (this->Transform).Scale3D.XY.m128d_f64[1];
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
  local_ab = 1;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoneInitialTransform,
                         (UObject *)pUVar1,L"RigUnit_SetBoneInitialTransform");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_e8 = (undefined1  [4])0x52192370;
    uStack_e4 = 1;
    uStack_e0 = 1;
    local_d8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetBoneInitialTransform_Statics::RigVMFunctions;
    local_d8._12_4_ = iStack_dc;
    local_d8.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.
                       OuterSingleton,&local_d8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SetBoneInitialTransform.OuterSingleton;
  pUVar2 = FRigUnit_SetTransform::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
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
  ::FString::FString((FString *)local_e8,L"Value");
  ::FString::FString((FString *)&local_d8,L"Transform");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_d8,(FString *)local_e8,true,true);
  if (local_d8.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_d8.DataPtr);
  }
  if ((void *)CONCAT44(uStack_e4,local_e8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_e4,local_e8));
  }
  return __return_storage_ptr__;
}

// FRigUnit_SetBoneInitialTransform @ 14a515710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_SetBoneInitialTransform * __thiscall
FRigUnit_SetBoneInitialTransform::FRigUnit_SetBoneInitialTransform
          (FRigUnit_SetBoneInitialTransform *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_SetBoneInitialTransform__6B_;
  (this->Bone).ComparisonIndex = 0;
  (this->Bone).Number = 0;
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
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Result).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Result).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Result).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Result).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Result).Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Result).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Result).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Result).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Result).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Result).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Result).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Result).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->Space = GlobalSpace;
  this->bPropagateToChildren = true;
  (this->CachedBone).Key.Type = None;
  (this->CachedBone).Key.Name.ComparisonIndex = 0;
  (this->CachedBone).Key.Name.Number = 0;
  (this->CachedBone).Index = 0xffff;
  (this->CachedBone).ContainerVersion = -1;
  (this->CachedBone).Element = (FRigBaseElement *)0x0;
  return this;
}

// Execute @ 14a52c550

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetBoneInitialTransform::Execute
          (FRigUnit_SetBoneInitialTransform *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Bone,&this->Transform,&this->Result,this->Space,
                this->bPropagateToChildren,&this->CachedBone);
  return;
}

// RigVMExecute @ 14a54ff00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoneInitialTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  TTransform<double> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  ERigVMTransformSpace *pEVar9;
  uchar *puVar10;
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
    pTVar7 = (TTransform<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
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
  pTVar3 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  EVar1 = *pEVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar5 = (bool)*puVar10;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,pTVar7,pTVar3,EVar1,bVar5,pFVar12);
  return;
}

// StaticExecute @ 14a58fe20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetBoneInitialTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TTransform<double> *param_3,
          TTransform<double> *param_4,ERigVMTransformSpace param_5,bool param_6,
          FCachedRigElement *param_7)

{
  ushort uVar1;
  URigHierarchy *this;
  bool bVar2;
  uint uVar3;
  FRigElementKey local_78;
  TTransform<double> local_68;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_78.Name = *param_2;
    local_78.Type = Bone;
    bVar2 = FCachedRigElement::UpdateCache(param_7,&local_78,this);
    if (bVar2) {
      uVar1 = param_7->Index;
      uVar3 = 0xffffffff;
      if (param_5 == LocalSpace) {
        if (uVar1 != 0xffff) {
          uVar3 = (uint)uVar1;
        }
        URigHierarchy::SetInitialLocalTransform(this,uVar3,param_3,true,false,false);
      }
      else {
        if (uVar1 != 0xffff) {
          uVar3 = (uint)uVar1;
        }
        local_68.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
        local_68.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
        local_68.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
        local_68.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
        local_68.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
        local_68.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
        local_68.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
        local_68.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
        local_68.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
        local_68.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
        local_68.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
        local_68.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
        URigHierarchy::SetGlobalTransformByIndex(this,uVar3,&local_68,true,true,false,false);
      }
    }
  }
  return;
}

