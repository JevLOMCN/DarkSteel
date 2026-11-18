// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c2270

UScriptStruct * __cdecl FRigUnit_VisualDebugVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector,(UObject *)pUVar1,
                         L"RigUnit_VisualDebugVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c22f0

UScriptStruct * __thiscall
FRigUnit_VisualDebugVector::GetExecuteContextStruct(FRigUnit_VisualDebugVector *this)

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

// Execute @ 14a4c3350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_VisualDebugVector::Execute(FRigUnit_VisualDebugVector *this)

{
  undefined1 auStackY_2c8 [32];
  FRigElementKey local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
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
  local_278.Name = this->BoneSpace;
  local_278.Type = Bone;
  FRigUnit_VisualDebugVectorItemSpace::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Value,this->bEnabled,this->Mode,
             &this->Color,this->Thickness,this->Scale,&local_278,
             (FRigVMDebugDrawSettings *)&this->_padding_);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4c3910

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_VisualDebugVector::GetUpgradeInfo
          (FRigUnit_VisualDebugVector *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector,(UObject *)pUVar1,
                         L"RigUnit_VisualDebugVector");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_68.ArrayNum = 1;
    local_68.DataPtr = Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton,
               &local_68);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_VisualDebugVector.OuterSingleton;
  pUVar2 = FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_58);
  return __return_storage_ptr__;
}

// Execute @ 14a52fa20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_VisualDebugVector::Execute
          (FRigUnit_VisualDebugVector *this,FControlRigExecuteContext *param_1)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Name = this->BoneSpace;
  local_18[0].Type = Bone;
  FRigUnit_VisualDebugVectorItemSpace::StaticExecute
            (param_1,&this->Value,this->bEnabled,this->Mode,&this->Color,this->Thickness,this->Scale
             ,local_18,(FRigVMDebugDrawSettings *)&this->_padding_);
  return;
}

// RigVMExecute @ 14a55c500

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugVector::RigVMExecute
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
  FName *pFVar14;
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
  pFVar14 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar15 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pTVar5,bVar7,EVar3,pFVar12,fVar1,fVar2,pFVar14,pFVar15);
  return;
}

// StaticExecute @ 14a5a2a70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_VisualDebugVector::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,bool param_3,
          ERigUnitVisualDebugPointMode param_4,FLinearColor *param_5,float param_6,float param_7,
          FName *param_8,FRigVMDebugDrawSettings *param_9)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Type = Bone;
  local_18[0].Name = *param_8;
  FRigUnit_VisualDebugVectorItemSpace::StaticExecute
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,local_18,param_9);
  return;
}

