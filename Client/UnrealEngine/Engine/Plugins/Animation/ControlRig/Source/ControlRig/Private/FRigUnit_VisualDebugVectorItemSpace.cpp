// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c40b0

UScriptStruct * __cdecl FRigUnit_VisualDebugVectorItemSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace,
                         (UObject *)pUVar1,L"RigUnit_VisualDebugVectorItemSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c4190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_VisualDebugVectorItemSpace::GetExecuteContextStruct
          (FRigUnit_VisualDebugVectorItemSpace *this)

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

// Execute @ 14a4c4bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_VisualDebugVectorItemSpace::Execute(FRigUnit_VisualDebugVectorItemSpace *this)

{
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Value,this->bEnabled,this->Mode,
                &this->Color,this->Thickness,this->Scale,&this->Space,
                (FRigVMDebugDrawSettings *)&this->_padding_);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4c4ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_VisualDebugVectorItemSpace::GetUpgradeInfo
          (FRigUnit_VisualDebugVectorItemSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__
          )

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_68;
  FRigVMStruct local_58;
  undefined1 local_50;
  undefined4 local_4c;
  double local_48;
  double dStack_40;
  double local_38;
  undefined1 local_30;
  ERigUnitVisualDebugPointMode local_2f;
  undefined8 local_2c;
  undefined8 uStack_24;
  float local_1c;
  float local_18;
  
  local_48 = (this->Value).field0_0x0._s_0.X;
  dStack_40 = (this->Value).field0_0x0._s_0.Y;
  local_38 = (this->Value).field0_0x0._s_0.Z;
  local_58 = (FRigVMStruct)&___7FRigVMFunction_VisualDebugVectorNoSpace__6B_;
  local_30 = this->bEnabled;
  local_2c = *(undefined8 *)&(this->Color).field0_0x0;
  uStack_24 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  local_2f = this->Mode;
  local_18 = this->Scale;
  local_1c = this->Thickness;
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
  local_50 = 1;
  local_4c = 0xbf800000;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace,
                         (UObject *)pUVar1,L"RigUnit_VisualDebugVectorItemSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_68.ArrayNum = 1;
    local_68.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.
                       OuterSingleton,&local_68);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace.OuterSingleton;
  pUVar2 = FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_58);
  return __return_storage_ptr__;
}

// Execute @ 14a52fa90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_VisualDebugVectorItemSpace::Execute
          (FRigUnit_VisualDebugVectorItemSpace *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->bEnabled,this->Mode,&this->Color,this->Thickness,
                this->Scale,&this->Space,(FRigVMDebugDrawSettings *)&this->_padding_);
  return;
}

// RigVMExecute @ 14a55c740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugVectorItemSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigUnitVisualDebugPointMode EVar3;
  int iVar4;
  TVector<double> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  ERigUnitVisualDebugPointMode *pEVar10;
  FRigVMMemoryHandle *pFVar11;
  FLinearColor *pFVar12;
  float *pfVar13;
  FRigElementKey *pFVar14;
  FRigVMDebugDrawSettings *pFVar15;
  FControlRigExecuteContext *pFVar16;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = (TVector<double> *)param_2->DataPtr->Ptr;
  if (iVar4 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar11[1].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  bVar7 = (bool)*puVar9;
  if (iVar4 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar10 = pFVar11[2].Ptr;
  }
  else {
    pEVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  EVar3 = *pEVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar12 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar14 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar15 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pTVar5,bVar7,EVar3,pFVar12,fVar1,fVar2,pFVar14,pFVar15);
  return;
}

// StaticExecute @ 14a5a2ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugVectorItemSpace::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,bool param_3,
          ERigUnitVisualDebugPointMode param_4,FLinearColor *param_5,float param_6,float param_7,
          FRigElementKey *param_8,FRigVMDebugDrawSettings *param_9)

{
  URigHierarchy *this;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  undefined1 auStackY_178 [32];
  FRigElementKey local_138;
  TVector<double>_u_0 local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((*(longlong *)&param_1->field_0x58 != 0) && (param_3)) {
    local_108.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_108.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_108.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_108.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    bVar3 = ::FName::IsWithinBounds((FNameEntryId)(param_8->Name).ComparisonIndex.Value);
    if ((bVar3) && ((param_8->Name != (FName)0x0 && (param_8->Type != None)))) {
      local_138.Type = param_8->Type;
      local_138._1_3_ = *(undefined3 *)&param_8->field_0x1;
      local_138.Name.ComparisonIndex.Value = (param_8->Name).ComparisonIndex.Value;
      local_138.Name.Number = (param_8->Name).Number;
      this = param_1->Hierarchy;
      iVar4 = URigHierarchy::GetIndex(this,&local_138,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_a8,iVar4,false);
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
    if (param_4 == Point) {
      FRigVMDrawInterface::DrawPoint
                (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_108,param_2,param_6,param_5,
                 (uint)(param_9->DepthPriority).Value,param_9->Lifetime);
    }
    else if (param_4 == Vector) {
      dVar5 = (double)param_7;
      dVar2 = (param_2->field0_0x0)._s_0.Y * dVar5;
      local_128._s_0.Z = dVar5 * (param_2->field0_0x0)._s_0.Z;
      local_128._8_4_ = SUB84(dVar2,0);
      local_128._0_8_ = (param_2->field0_0x0)._s_0.X * dVar5;
      local_128._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      FRigVMDrawInterface::DrawLine
                (*(FRigVMDrawInterface **)&param_1->field_0x58,&local_108,
                 &UE::Math::TVector<double>::ZeroVector,(TVector<double> *)&local_128._s_0,param_5,
                 param_6,(uint)(param_9->DepthPriority).Value,param_9->Lifetime);
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Debug\\RigUnit_VisualDebug.cpp"
                         ,0x39,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

