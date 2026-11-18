// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4c9f30

UScriptStruct * __cdecl FRigUnit_VisualDebugTransformItemSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace,
                         (UObject *)pUVar1,L"RigUnit_VisualDebugTransformItemSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ca0c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_VisualDebugTransformItemSpace::GetExecuteContextStruct
          (FRigUnit_VisualDebugTransformItemSpace *this)

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

// Execute @ 14a4ca4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_VisualDebugTransformItemSpace::Execute(FRigUnit_VisualDebugTransformItemSpace *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Value,this->bEnabled,this->Thickness,
                this->Scale,&this->Space,(FRigVMDebugDrawSettings *)&this->field_0x8);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ca6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_VisualDebugTransformItemSpace::GetUpgradeInfo
          (FRigUnit_VisualDebugTransformItemSpace *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_c8 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_a8;
  FRigVMStruct local_98;
  undefined1 local_90;
  undefined4 local_8c;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined1 local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88 = (this->Value).Rotation.XY.m128d_f64[0];
  dStack_80 = (this->Value).Rotation.XY.m128d_f64[1];
  local_90 = 1;
  local_78 = (this->Value).Rotation.ZW.m128d_f64[0];
  dStack_70 = (this->Value).Rotation.ZW.m128d_f64[1];
  local_8c = 0xbf800000;
  local_68 = (this->Value).Translation.XY.m128d_f64[0];
  dStack_60 = (this->Value).Translation.XY.m128d_f64[1];
  local_98 = (FRigVMStruct)&___7FRigVMFunction_VisualDebugTransformNoSpace__6B_;
  local_28 = this->bEnabled;
  local_58 = (this->Value).Translation.ZW.m128d_f64[0];
  dStack_50 = (this->Value).Translation.ZW.m128d_f64[1];
  local_48 = (this->Value).Scale3D.XY.m128d_f64[0];
  dStack_40 = (this->Value).Scale3D.XY.m128d_f64[1];
  local_38 = (this->Value).Scale3D.ZW.m128d_f64[0];
  dStack_30 = (this->Value).Scale3D.ZW.m128d_f64[1];
  local_24 = this->Thickness;
  local_20 = this->Scale;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace,
                         (UObject *)pUVar1,L"RigUnit_VisualDebugTransformItemSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_a8.ArrayNum = 1;
    local_a8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.
                       OuterSingleton,&local_a8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace.OuterSingleton;
  pUVar2 = FRigVMFunction_VisualDebugTransformNoSpace::StaticStruct();
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  __return_storage_ptr__->NewStruct = pUVar2;
  local_a8.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_98);
  return __return_storage_ptr__;
}

// FRigUnit_VisualDebugTransformItemSpace @ 14a517820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_VisualDebugTransformItemSpace * __thiscall
FRigUnit_VisualDebugTransformItemSpace::FRigUnit_VisualDebugTransformItemSpace
          (FRigUnit_VisualDebugTransformItemSpace *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  __m128d _Var10;
  uint local_18;
  
  this->field_0x8 = 1;
  *(undefined4 *)&this->field_0xc = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_VisualDebugTransformItemSpace__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_18 = CONCAT31(local_18._1_3_,1);
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Space).Type = None;
  (this->Space).Name.ComparisonIndex = 0;
  (this->Space).Name.Number = 0;
  *&(this->Value).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Value).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Value).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Value).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Value).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  uVar9 = (ulonglong)local_18;
  (this->Space).Type = (char)uVar9;
  *(int3 *)&(this->Space).field_0x1 = (int3)(uVar9 >> 8);
  (this->Space).Name.ComparisonIndex = (FNameEntryId)(int)(uVar9 >> 0x20);
  (this->Space).Name.Number = 0;
  this->Thickness = 0.0;
  *&(this->Value).Scale3D.ZW.m128d_f64 = _Var10.m128d_f64;
  this->bEnabled = true;
  this->Scale = 10.0;
  return this;
}

// Execute @ 14a52f9d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_VisualDebugTransformItemSpace::Execute
          (FRigUnit_VisualDebugTransformItemSpace *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->bEnabled,this->Thickness,this->Scale,&this->Space,
                (FRigVMDebugDrawSettings *)&this->field_0x8);
  return;
}

// RigVMExecute @ 14a55c310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugTransformItemSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  TTransform<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  FRigElementKey *pFVar11;
  FRigVMDebugDrawSettings *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar4 = (TTransform<double> *)param_2->DataPtr->Ptr;
  if (iVar3 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar10[1].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  bVar6 = (bool)*puVar8;
  if (iVar3 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[2].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  fVar1 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pTVar4,bVar6,fVar1,fVar2,pFVar11,pFVar12);
  return;
}

// StaticExecute @ 14a5a28d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugTransformItemSpace::StaticExecute
          (FControlRigExecuteContext *param_1,TTransform<double> *param_2,bool param_3,float param_4
          ,float param_5,FRigElementKey *param_6,FRigVMDebugDrawSettings *param_7)

{
  URigHierarchy *this;
  bool bVar1;
  int iVar2;
  undefined1 auStackY_158 [32];
  FRigElementKey local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((*(longlong *)&param_1->field_0x58 != 0) && (param_3)) {
    local_108.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_108.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_108.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_108.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    bVar1 = ::FName::IsWithinBounds((FNameEntryId)(param_6->Name).ComparisonIndex.Value);
    if ((bVar1) && ((param_6->Name != (FName)0x0 && (param_6->Type != None)))) {
      local_118.Type = param_6->Type;
      local_118._1_3_ = *(undefined3 *)&param_6->field_0x1;
      local_118.Name.ComparisonIndex.Value = (param_6->Name).ComparisonIndex.Value;
      local_118.Name.Number = (param_6->Name).Number;
      this = param_1->Hierarchy;
      iVar2 = URigHierarchy::GetIndex(this,&local_118,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_a8,iVar2,false);
      local_108.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
      local_108.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
      local_108.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
      local_108.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
      local_108.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
      local_108.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
      local_108.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
      local_108.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
      local_108.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
      local_108.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
      local_108.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
    }
    FRigVMDrawInterface::DrawAxes
              (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_108,param_2,param_5,param_4,
               (uint)(param_7->DepthPriority).Value,param_7->Lifetime);
  }
  return;
}

