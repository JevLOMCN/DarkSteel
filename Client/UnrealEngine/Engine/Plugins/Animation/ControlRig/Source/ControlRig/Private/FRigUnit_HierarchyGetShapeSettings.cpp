// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a490520

UScriptStruct * __cdecl FRigUnit_HierarchyGetShapeSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetShapeSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetShapeSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetShapeSettings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyGetShapeSettings");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetShapeSettings_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetShapeSettings.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetShapeSettings.OuterSingleton;
}

// GetExecuteContextStruct @ 14a490660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetShapeSettings::GetExecuteContextStruct
          (FRigUnit_HierarchyGetShapeSettings *this)

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

// Execute @ 14a4907e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetShapeSettings::Execute(FRigUnit_HierarchyGetShapeSettings *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,&this->Settings);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a529e30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetShapeSettings::Execute
          (FRigUnit_HierarchyGetShapeSettings *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Settings);
  return;
}

// RigVMExecute @ 14a548810

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetShapeSettings::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FRigUnit_HierarchyAddControl_ShapeSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  FControlRigExecuteContext *pFVar7;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar3 = (FRigUnit_HierarchyAddControl_ShapeSettings *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar6,pFVar3);
  return;
}

// StaticExecute @ 14a5812d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetShapeSettings::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          FRigUnit_HierarchyAddControl_ShapeSettings *param_3)

{
  URigHierarchy *this;
  undefined8 uVar1;
  double dVar2;
  __m128d _Var3;
  __m128d _Var4;
  __m128d _Var5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  int iVar9;
  FRigControlElement *pFVar10;
  TTransform<double> *pTVar11;
  undefined1 auStack_e8 [32];
  TTransform<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.Rotation.XY.m128d_f64[0]._0_1_ = 1;
  ::FName::FName((FName *)((longlong)local_c8.Rotation.XY.m128d_f64 + 4),L"Default");
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var7 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var6 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var5 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var4 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var3 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  local_c8.Rotation.XY.m128d_f64[1]._4_4_ = FLinearColor::Red.field0_0x0._0_4_;
  local_c8.Rotation.ZW.m128d_f64[0] = FLinearColor::Red.field0_0x0._4_8_;
  local_c8.Rotation.ZW.m128d_f64[1]._0_4_ = FLinearColor::Red.field0_0x0._12_4_;
  param_3->bVisible = (bool)local_c8.Rotation.XY.m128d_f64[0]._0_1_;
  *(int3 *)&param_3->field_0x1 = (int3)local_c8.Rotation.XY.m128d_f64[0]._1_7_;
  (param_3->Name).ComparisonIndex =
       (FNameEntryId)(int)((uint7)local_c8.Rotation.XY.m128d_f64[0]._1_7_ >> 0x18);
  *(ulonglong *)&(param_3->Name).Number =
       CONCAT44(local_c8.Rotation.XY.m128d_f64[1]._4_4_,local_c8.Rotation.XY.m128d_f64[1]._0_4_);
  *(double *)((longlong)&(param_3->Color).field0_0x0 + 4) = local_c8.Rotation.ZW.m128d_f64[0];
  *(ulonglong *)((longlong)&(param_3->Color).field0_0x0 + 0xc) =
       CONCAT44(local_c8.Rotation.ZW.m128d_f64[1]._4_4_,local_c8.Rotation.ZW.m128d_f64[1]._0_4_);
  *&(param_3->Transform).Rotation.XY.m128d_f64 = _Var3.m128d_f64;
  *&(param_3->Transform).Rotation.ZW.m128d_f64 = _Var4.m128d_f64;
  *&(param_3->Transform).Translation.XY.m128d_f64 = _Var5.m128d_f64;
  *&(param_3->Transform).Translation.ZW.m128d_f64 = _Var6.m128d_f64;
  *&(param_3->Transform).Scale3D.XY.m128d_f64 = _Var7.m128d_f64;
  *&(param_3->Transform).Scale3D.ZW.m128d_f64 = _Var8.m128d_f64;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    iVar9 = URigHierarchy::GetIndex(this,param_2,true);
    pFVar10 = URigHierarchy::Get<FRigControlElement>(this,iVar9);
    if (pFVar10 != (FRigControlElement *)0x0) {
      param_3->bVisible = (pFVar10->Settings).bShapeVisible;
      uVar1 = *(undefined8 *)((longlong)&(pFVar10->Settings).ShapeColor.field0_0x0 + 8);
      *(undefined8 *)&(param_3->Color).field0_0x0 =
           *(undefined8 *)&(pFVar10->Settings).ShapeColor.field0_0x0;
      *(undefined8 *)((longlong)&(param_3->Color).field0_0x0 + 8) = uVar1;
      param_3->Name = (pFVar10->Settings).ShapeName;
      pTVar11 = URigHierarchy::GetControlShapeTransform(this,&local_c8,pFVar10,InitialLocal);
      dVar2 = (pTVar11->Rotation).XY.m128d_f64[1];
      (param_3->Transform).Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Rotation).ZW.m128d_f64[1];
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Translation).XY.m128d_f64[1];
      (param_3->Transform).Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
      (param_3->Transform).Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Translation).ZW.m128d_f64[1];
      (param_3->Transform).Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
      (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Scale3D).XY.m128d_f64[1];
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Scale3D).ZW.m128d_f64[1];
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
    }
  }
  return;
}

