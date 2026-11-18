// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a472020

UScriptStruct * __cdecl FRigUnit_SetControlVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlVector,(UObject *)pUVar1,
                         L"RigUnit_SetControlVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a472120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlVector::GetExecuteContextStruct(FRigUnit_SetControlVector *this)

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

// Execute @ 14a472340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlVector::Execute(FRigUnit_SetControlVector *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,this->Weight,&this->Vector,
                this->Space,&this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52cb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlVector::Execute
          (FRigUnit_SetControlVector *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,this->Weight,&this->Vector,this->Space,
                &this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a551f60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMTransformSpace EVar2;
  int iVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  ERigVMTransformSpace *pEVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
  }
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  fVar1 = *pfVar8;
  if (iVar3 < 3) {
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
  pTVar4 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar2 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar7,fVar1,pTVar4,EVar2,pFVar12);
  return;
}

// StaticExecute @ 14a591d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlVector::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,float param_3,TVector<double> *param_4,
          ERigVMTransformSpace param_5,FCachedRigElement *param_6)

{
  ERigControlType EVar1;
  URigHierarchy *this;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FRigControlElement *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
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
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_158 [32];
  FRigElementKey local_118 [4];
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_118[0].Name = *param_2;
    local_118[0].Type = Control;
    bVar5 = FCachedRigElement::UpdateCache(param_6,local_118,this);
    if (bVar5) {
      uVar8 = 0xffffffff;
      uVar7 = 0xffffffff;
      uVar6 = 0xffffffff;
      if (param_6->Index != 0xffff) {
        uVar6 = (uint)param_6->Index;
      }
      pFVar9 = URigHierarchy::GetChecked<FRigControlElement>(this,uVar6);
      EVar1 = (pFVar9->Settings).ControlType;
      uVar17 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar18 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar10 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar12 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar11 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar13 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar21 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar22 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar23 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar24 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar25 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar26 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar27 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar28 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar29 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar30 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar31 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar32 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar33 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar34 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar35 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar36 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      if (param_5 == GlobalSpace) {
        if (param_6->Index != 0xffff) {
          uVar7 = (uint)param_6->Index;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_e8,uVar7,false);
        uVar17 = local_e8.Translation.ZW.m128d_f64[0]._0_4_;
        uVar18 = local_e8.Translation.ZW.m128d_f64[0]._4_4_;
        uVar10 = local_e8.Translation.ZW.m128d_f64[1]._0_4_;
        uVar12 = local_e8.Translation.ZW.m128d_f64[1]._4_4_;
        uVar19 = local_e8.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar20 = local_e8.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar11 = local_e8.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar13 = local_e8.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar21 = local_e8.Translation.XY.m128d_f64[0]._0_4_;
        uVar22 = local_e8.Translation.XY.m128d_f64[0]._4_4_;
        uVar23 = local_e8.Translation.XY.m128d_f64[1]._0_4_;
        uVar24 = local_e8.Translation.XY.m128d_f64[1]._4_4_;
        uVar25 = local_e8.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar26 = local_e8.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar27 = local_e8.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar28 = local_e8.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar29 = local_e8.Rotation.XY.m128d_f64[0]._0_4_;
        uVar30 = local_e8.Rotation.XY.m128d_f64[0]._4_4_;
        uVar31 = local_e8.Rotation.XY.m128d_f64[1]._0_4_;
        uVar32 = local_e8.Rotation.XY.m128d_f64[1]._4_4_;
        uVar33 = local_e8.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar34 = local_e8.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar35 = local_e8.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar36 = local_e8.Rotation.ZW.m128d_f64[1]._4_4_;
      }
      dVar15 = (double)CONCAT44(uVar28,uVar27);
      dVar16 = (double)CONCAT44(uVar26,uVar25);
      dVar14 = (double)CONCAT44(uVar20,uVar19);
      if (EVar1 == Position) {
        if (__real_322bcc77 <
            (float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (__real_3f800000 <= param_3) {
            param_3 = __real_3f800000;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          dVar14 = (double)param_3;
          uVar10 = 0;
          uVar12 = 0;
          dVar2 = ((param_4->field0_0x0)._s_0.Z - (double)CONCAT44(uVar18,uVar17)) * dVar14 +
                  (double)CONCAT44(uVar18,uVar17);
          dVar3 = ((param_4->field0_0x0)._s_0.X - (double)CONCAT44(uVar22,uVar21)) * dVar14 +
                  (double)CONCAT44(uVar22,uVar21);
          dVar4 = ((param_4->field0_0x0)._s_0.Y - (double)CONCAT44(uVar24,uVar23)) * dVar14 +
                  (double)CONCAT44(uVar24,uVar23);
          dVar14 = (double)CONCAT44(uVar20,uVar19);
          dVar16 = (double)CONCAT44(uVar26,uVar25);
          dVar15 = (double)CONCAT44(uVar28,uVar27);
        }
        else {
          uVar10 = 0;
          uVar12 = 0;
          dVar2 = *(double *)((longlong)&param_4->field0_0x0 + 0x10);
          dVar3 = *(double *)&param_4->field0_0x0;
          dVar4 = *(double *)((longlong)&param_4->field0_0x0 + 8);
          dVar14 = (double)CONCAT44(uVar20,uVar19);
          dVar16 = (double)CONCAT44(uVar26,uVar25);
          dVar15 = (double)CONCAT44(uVar28,uVar27);
        }
      }
      else {
        dVar2 = (double)CONCAT44(uVar18,uVar17);
        dVar3 = (double)CONCAT44(uVar22,uVar21);
        dVar4 = (double)CONCAT44(uVar24,uVar23);
        if (EVar1 == Scale) {
          if (__real_322bcc77 <
              (float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            if (__real_3f800000 <= param_3) {
              param_3 = __real_3f800000;
            }
            if (param_3 <= 0.0) {
              param_3 = 0.0;
            }
            dVar15 = (double)param_3;
            dVar16 = ((param_4->field0_0x0)._s_0.X - (double)CONCAT44(uVar26,uVar25)) * dVar15 +
                     (double)CONCAT44(uVar26,uVar25);
            dVar14 = ((param_4->field0_0x0)._s_0.Z - (double)CONCAT44(uVar20,uVar19)) * dVar15 +
                     (double)CONCAT44(uVar20,uVar19);
            uVar11 = 0;
            uVar13 = 0;
            dVar15 = ((param_4->field0_0x0)._s_0.Y - (double)CONCAT44(uVar28,uVar27)) * dVar15 +
                     (double)CONCAT44(uVar28,uVar27);
            dVar2 = (double)CONCAT44(uVar18,uVar17);
            dVar3 = (double)CONCAT44(uVar22,uVar21);
            dVar4 = (double)CONCAT44(uVar24,uVar23);
          }
          else {
            dVar16 = *(double *)&param_4->field0_0x0;
            dVar15 = *(double *)((longlong)&param_4->field0_0x0 + 8);
            dVar14 = *(double *)((longlong)&param_4->field0_0x0 + 0x10);
            uVar11 = 0;
            uVar13 = 0;
            dVar2 = (double)CONCAT44(uVar18,uVar17);
            dVar3 = (double)CONCAT44(uVar22,uVar21);
            dVar4 = (double)CONCAT44(uVar24,uVar23);
          }
        }
      }
      uVar18 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
      local_e8.Rotation.XY.m128d_f64[0]._0_4_ = uVar29;
      local_e8.Rotation.XY.m128d_f64[0]._4_4_ = uVar30;
      local_e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
      local_e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
      local_e8.Rotation.ZW.m128d_f64[0]._0_4_ = uVar33;
      local_e8.Rotation.ZW.m128d_f64[0]._4_4_ = uVar34;
      local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar35;
      local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar36;
      if (param_5 == LocalSpace) {
        if (param_6->Index != 0xffff) {
          uVar8 = (uint)param_6->Index;
        }
        local_e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
        local_e8.Translation.XY.m128d_f64[0] = dVar3;
        local_e8.Translation.XY.m128d_f64[1]._4_4_ = uVar17;
        local_e8.Translation.ZW.m128d_f64[1]._0_4_ = uVar10;
        local_e8.Translation.ZW.m128d_f64[0] = dVar2;
        local_e8.Translation.ZW.m128d_f64[1]._4_4_ = uVar12;
        local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar15,0);
        local_e8.Scale3D.XY.m128d_f64[0] = dVar16;
        local_e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar18;
        local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar11;
        local_e8.Scale3D.ZW.m128d_f64[0] = dVar14;
        local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar13;
        URigHierarchy::SetLocalTransformByIndex(this,uVar8,&local_e8,false,true,false,false);
      }
      else if (param_5 == GlobalSpace) {
        if (param_6->Index != 0xffff) {
          uVar8 = (uint)param_6->Index;
        }
        local_e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
        local_e8.Translation.XY.m128d_f64[0] = dVar3;
        local_e8.Translation.XY.m128d_f64[1]._4_4_ = uVar17;
        local_e8.Translation.ZW.m128d_f64[1]._0_4_ = uVar10;
        local_e8.Translation.ZW.m128d_f64[0] = dVar2;
        local_e8.Translation.ZW.m128d_f64[1]._4_4_ = uVar12;
        local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar15,0);
        local_e8.Scale3D.XY.m128d_f64[0] = dVar16;
        local_e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar18;
        local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar11;
        local_e8.Scale3D.ZW.m128d_f64[0] = dVar14;
        local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar13;
        URigHierarchy::SetGlobalTransformByIndex(this,uVar8,&local_e8,false,true,false,false);
      }
    }
  }
  return;
}

