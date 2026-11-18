// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c7360

UScriptStruct * __cdecl FRigUnit_VisualDebugQuatItemSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace,
                         (UObject *)pUVar1,L"RigUnit_VisualDebugQuatItemSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c73e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_VisualDebugQuatItemSpace::GetExecuteContextStruct(FRigUnit_VisualDebugQuatItemSpace *this)

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

// Execute @ 14a4c78b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_VisualDebugQuatItemSpace::Execute(FRigUnit_VisualDebugQuatItemSpace *this)

{
  undefined1 auStackY_308 [32];
  TTransform<double> local_2c8;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_308;
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
  local_2c8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_2c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_2c8.Rotation.XY.m128d_f64[0] = (this->Value).X;
  local_2c8.Rotation.XY.m128d_f64[1] = (this->Value).Y;
  local_2c8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_2c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_2c8.Rotation.ZW.m128d_f64[0] = (this->Value).Z;
  local_2c8.Rotation.ZW.m128d_f64[1] = (this->Value).W;
  FRigUnit_VisualDebugTransformItemSpace::StaticExecute
            ((FControlRigExecuteContext *)local_268,&local_2c8,this->bEnabled,this->Thickness,
             this->Scale,&this->Space,(FRigVMDebugDrawSettings *)&this->field_0x8);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4c7a10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_VisualDebugQuatItemSpace::GetUpgradeInfo
          (FRigUnit_VisualDebugQuatItemSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_58;
  FRigVMStruct local_48;
  undefined1 local_40;
  undefined4 local_3c;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined1 local_18;
  float local_14;
  float local_10;
  
  local_38 = (this->Value).X;
  dStack_30 = (this->Value).Y;
  local_28 = (this->Value).Z;
  dStack_20 = (this->Value).W;
  local_48 = (FRigVMStruct)&___7FRigVMFunction_VisualDebugQuatNoSpace__6B_;
  local_18 = this->bEnabled;
  local_14 = this->Thickness;
  local_10 = this->Scale;
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
  local_40 = 1;
  local_3c = 0xbf800000;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace,
                         (UObject *)pUVar1,L"RigUnit_VisualDebugQuatItemSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_58.ArrayNum = 1;
    local_58.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.
                       OuterSingleton,&local_58);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace.OuterSingleton;
  pUVar2 = FRigVMFunction_VisualDebugQuatNoSpace::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_48);
  return __return_storage_ptr__;
}

// Execute @ 14a52f920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_VisualDebugQuatItemSpace::Execute
          (FRigUnit_VisualDebugQuatItemSpace *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->bEnabled,this->Thickness,this->Scale,&this->Space,
                (FRigVMDebugDrawSettings *)&this->field_0x8);
  return;
}

// RigVMExecute @ 14a55bf20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugQuatItemSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  TQuat<double> *pTVar4;
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
  pTVar4 = (TQuat<double> *)param_2->DataPtr->Ptr;
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

// StaticExecute @ 14a5a27d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugQuatItemSpace::StaticExecute
          (FControlRigExecuteContext *param_1,TQuat<double> *param_2,bool param_3,float param_4,
          float param_5,FRigElementKey *param_6,FRigVMDebugDrawSettings *param_7)

{
  undefined1 auStackY_b8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_78.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_78.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_78.Rotation.XY.m128d_f64[0] = param_2->X;
  local_78.Rotation.XY.m128d_f64[1] = param_2->Y;
  local_78.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_78.Rotation.ZW.m128d_f64[0] = param_2->Z;
  local_78.Rotation.ZW.m128d_f64[1] = param_2->W;
  FRigUnit_VisualDebugTransformItemSpace::StaticExecute
            (param_1,&local_78,param_3,param_4,param_5,param_6,param_7);
  return;
}

