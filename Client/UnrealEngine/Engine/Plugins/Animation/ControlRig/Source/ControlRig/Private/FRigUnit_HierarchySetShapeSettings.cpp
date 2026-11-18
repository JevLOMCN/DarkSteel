// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4911a0

UScriptStruct * __cdecl FRigUnit_HierarchySetShapeSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetShapeSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetShapeSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchySetShapeSettings,
                         (UObject *)pUVar1,L"RigUnit_HierarchySetShapeSettings");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchySetShapeSettings_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetShapeSettings.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetShapeSettings.OuterSingleton;
}

// GetExecuteContextStruct @ 14a491230

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchySetShapeSettings::GetExecuteContextStruct
          (FRigUnit_HierarchySetShapeSettings *this)

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

// Execute @ 14a491460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchySetShapeSettings::Execute(FRigUnit_HierarchySetShapeSettings *this)

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

// Execute @ 14a52a350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchySetShapeSettings::Execute
          (FRigUnit_HierarchySetShapeSettings *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Settings);
  return;
}

// RigVMExecute @ 14a549540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchySetShapeSettings::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  FRigUnit_HierarchyAddControl_ShapeSettings *pFVar6;
  FControlRigExecuteContext *pFVar7;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigUnit_HierarchyAddControl_ShapeSettings *)pFVar2[1].Ptr;
  }
  else {
    pFVar6 = (FRigUnit_HierarchyAddControl_ShapeSettings *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar5,pFVar6);
  return;
}

// StaticExecute @ 14a5825c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchySetShapeSettings::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          FRigUnit_HierarchyAddControl_ShapeSettings *param_3)

{
  URigHierarchy *this;
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  FRigControlElement *pFVar4;
  FRigNotificationSubject local_78;
  TTransform<double> local_68;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    iVar3 = URigHierarchy::GetIndex(this,param_2,true);
    pFVar4 = URigHierarchy::Get<FRigControlElement>(this,iVar3);
    if (pFVar4 != (FRigControlElement *)0x0) {
      if (((((pFVar4->Settings).bShapeVisible == param_3->bVisible) &&
           ((param_3->Color).field0_0x0._s_0.R == (pFVar4->Settings).ShapeColor.field0_0x0._s_0.R))
          && ((param_3->Color).field0_0x0._s_0.G == (pFVar4->Settings).ShapeColor.field0_0x0._s_0.G)
          ) && ((((param_3->Color).field0_0x0._s_0.B ==
                  (pFVar4->Settings).ShapeColor.field0_0x0._s_0.B &&
                 ((param_3->Color).field0_0x0._s_0.A ==
                  (pFVar4->Settings).ShapeColor.field0_0x0._s_0.A)) &&
                ((pFVar4->Settings).ShapeName == param_3->Name)))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      (pFVar4->Settings).bShapeVisible = param_3->bVisible;
      uVar1 = *(undefined8 *)((longlong)&(param_3->Color).field0_0x0 + 8);
      *(undefined8 *)&(pFVar4->Settings).ShapeColor.field0_0x0 =
           *(undefined8 *)&(param_3->Color).field0_0x0;
      *(undefined8 *)((longlong)&(pFVar4->Settings).ShapeColor.field0_0x0 + 8) = uVar1;
      (pFVar4->Settings).ShapeName = param_3->Name;
      if (bVar2) {
        local_78.Component = (FRigBaseComponent *)0x0;
        local_78.Element = (FRigBaseElement *)pFVar4;
        URigHierarchy::Notify(this,ControlSettingChanged,&local_78);
      }
      local_68.Rotation.XY.m128d_f64[0] = (param_3->Transform).Rotation.XY.m128d_f64[0];
      local_68.Rotation.XY.m128d_f64[1] = (param_3->Transform).Rotation.XY.m128d_f64[1];
      local_68.Rotation.ZW.m128d_f64[0] = (param_3->Transform).Rotation.ZW.m128d_f64[0];
      local_68.Rotation.ZW.m128d_f64[1] = (param_3->Transform).Rotation.ZW.m128d_f64[1];
      local_68.Translation.XY.m128d_f64[0] = (param_3->Transform).Translation.XY.m128d_f64[0];
      local_68.Translation.XY.m128d_f64[1] = (param_3->Transform).Translation.XY.m128d_f64[1];
      local_68.Translation.ZW.m128d_f64[0] = (param_3->Transform).Translation.ZW.m128d_f64[0];
      local_68.Translation.ZW.m128d_f64[1] = (param_3->Transform).Translation.ZW.m128d_f64[1];
      local_68.Scale3D.XY.m128d_f64[0] = (param_3->Transform).Scale3D.XY.m128d_f64[0];
      local_68.Scale3D.XY.m128d_f64[1] = (param_3->Transform).Scale3D.XY.m128d_f64[1];
      local_68.Scale3D.ZW.m128d_f64[0] = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
      local_68.Scale3D.ZW.m128d_f64[1] = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
      URigHierarchy::SetControlShapeTransformByIndex
                (this,*(int *)&pFVar4->field_0x1c,&local_68,true,false);
      local_68.Rotation.XY.m128d_f64[0] = (param_3->Transform).Rotation.XY.m128d_f64[0];
      local_68.Rotation.XY.m128d_f64[1] = (param_3->Transform).Rotation.XY.m128d_f64[1];
      local_68.Rotation.ZW.m128d_f64[0] = (param_3->Transform).Rotation.ZW.m128d_f64[0];
      local_68.Rotation.ZW.m128d_f64[1] = (param_3->Transform).Rotation.ZW.m128d_f64[1];
      local_68.Translation.XY.m128d_f64[0] = (param_3->Transform).Translation.XY.m128d_f64[0];
      local_68.Translation.XY.m128d_f64[1] = (param_3->Transform).Translation.XY.m128d_f64[1];
      local_68.Translation.ZW.m128d_f64[0] = (param_3->Transform).Translation.ZW.m128d_f64[0];
      local_68.Translation.ZW.m128d_f64[1] = (param_3->Transform).Translation.ZW.m128d_f64[1];
      local_68.Scale3D.XY.m128d_f64[0] = (param_3->Transform).Scale3D.XY.m128d_f64[0];
      local_68.Scale3D.XY.m128d_f64[1] = (param_3->Transform).Scale3D.XY.m128d_f64[1];
      local_68.Scale3D.ZW.m128d_f64[0] = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
      local_68.Scale3D.ZW.m128d_f64[1] = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
      URigHierarchy::SetControlShapeTransformByIndex
                (this,*(int *)&pFVar4->field_0x1c,&local_68,false,false);
    }
  }
  return;
}

