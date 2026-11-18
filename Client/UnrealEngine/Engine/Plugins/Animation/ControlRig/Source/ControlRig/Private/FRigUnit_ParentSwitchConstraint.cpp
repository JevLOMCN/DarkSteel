// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4e0e90

UScriptStruct * __cdecl FRigUnit_ParentSwitchConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint,(UObject *)pUVar1
                         ,L"RigUnit_ParentSwitchConstraint");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4e0f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ParentSwitchConstraint::GetExecuteContextStruct(FRigUnit_ParentSwitchConstraint *this)

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

// Execute @ 14a4e1120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ParentSwitchConstraint::Execute(FRigUnit_ParentSwitchConstraint *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auStackY_2e8 [32];
  TArrayView<FRigElementKey_const_,int> local_288;
  undefined1 local_278 [592];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  if ((FRigVMNameCache *)local_278._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_278._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  local_288.DataPtr = (FRigElementKey *)(this->Parents).Keys.AllocatorInstance.Data;
  iVar2 = (this->Parents).Keys.ArrayNum;
  fVar1 = this->Weight;
  iVar3 = this->ParentIndex;
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_288.ArrayNum = iVar2;
  FRigUnit_ParentSwitchConstraintArray::StaticExecute
            ((FControlRigExecuteContext *)local_278,&this->Subject,iVar3,&local_288,
             &this->InitialGlobalTransform,fVar1,&this->Transform,&this->Switched,
             &this->CachedSubject,&this->CachedParent,&this->RelativeOffset);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  return;
}

// GetUpgradeInfo @ 14a4e1340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ParentSwitchConstraint::GetUpgradeInfo
          (FRigUnit_ParentSwitchConstraint *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FRigVMRegistry_RWLock *pFVar4;
  undefined1 auStackY_238 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_1f8;
  FRigUnit_ParentSwitchConstraintArray local_1e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  FRigUnit_ParentSwitchConstraintArray::FRigUnit_ParentSwitchConstraintArray(&local_1e8);
  local_1e8.Subject.Name.Number = (this->Subject).Name.Number;
  local_1e8.Subject.Type = (this->Subject).Type;
  local_1e8.Subject._1_3_ = *(undefined3 *)&(this->Subject).field_0x1;
  local_1e8.Subject.Name.ComparisonIndex.Value = (this->Subject).Name.ComparisonIndex.Value;
  local_1e8.ParentIndex = this->ParentIndex;
  if (&local_1e8.Parents != &(this->Parents).Keys) {
    iVar1 = (this->Parents).Keys.ArrayNum;
    _Src = (this->Parents).Keys.AllocatorInstance.Data;
    local_1e8.Parents.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_1e8.Parents.ArrayMax == 0)) {
      local_1e8.Parents.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar1,local_1e8.Parents.ArrayMax,&local_1e8.Parents.AllocatorInstance,iVar1,
                 &local_1e8.Parents.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_1e8.Parents.AllocatorInstance.Data,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  local_1e8.InitialGlobalTransform.Rotation.XY.m128d_f64[0] =
       (this->InitialGlobalTransform).Rotation.XY.m128d_f64[0];
  local_1e8.InitialGlobalTransform.Rotation.XY.m128d_f64[1] =
       (this->InitialGlobalTransform).Rotation.XY.m128d_f64[1];
  local_1e8.InitialGlobalTransform.Rotation.ZW.m128d_f64[0] =
       (this->InitialGlobalTransform).Rotation.ZW.m128d_f64[0];
  local_1e8.InitialGlobalTransform.Rotation.ZW.m128d_f64[1] =
       (this->InitialGlobalTransform).Rotation.ZW.m128d_f64[1];
  local_1e8.InitialGlobalTransform.Translation.XY.m128d_f64[0] =
       (this->InitialGlobalTransform).Translation.XY.m128d_f64[0];
  local_1e8.InitialGlobalTransform.Translation.XY.m128d_f64[1] =
       (this->InitialGlobalTransform).Translation.XY.m128d_f64[1];
  local_1e8.InitialGlobalTransform.Translation.ZW.m128d_f64[0] =
       (this->InitialGlobalTransform).Translation.ZW.m128d_f64[0];
  local_1e8.InitialGlobalTransform.Translation.ZW.m128d_f64[1] =
       (this->InitialGlobalTransform).Translation.ZW.m128d_f64[1];
  local_1e8.InitialGlobalTransform.Scale3D.XY.m128d_f64[0] =
       (this->InitialGlobalTransform).Scale3D.XY.m128d_f64[0];
  local_1e8.InitialGlobalTransform.Scale3D.XY.m128d_f64[1] =
       (this->InitialGlobalTransform).Scale3D.XY.m128d_f64[1];
  local_1e8.InitialGlobalTransform.Scale3D.ZW.m128d_f64[0] =
       (this->InitialGlobalTransform).Scale3D.ZW.m128d_f64[0];
  local_1e8.InitialGlobalTransform.Scale3D.ZW.m128d_f64[1] =
       (this->InitialGlobalTransform).Scale3D.ZW.m128d_f64[1];
  local_1e8.Weight = this->Weight;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint,(UObject *)pUVar3
                         ,L"RigUnit_ParentSwitchConstraint");
    pFVar4 = FRigVMRegistry_RWLock::Get();
    local_1f8.ArrayNum = 1;
    local_1f8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar4,Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.
                      OuterSingleton,&local_1f8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraint.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray,
                         (UObject *)pUVar3,L"RigUnit_ParentSwitchConstraintArray");
    pFVar4 = FRigVMRegistry_RWLock::Get();
    local_1f8.ArrayNum = 1;
    local_1f8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar4,Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.
                      OuterSingleton,&local_1f8);
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FRigUnit_ParentSwitchConstraintArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  __return_storage_ptr__->NewStruct = pUVar2;
  local_1f8.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_1e8);
  if (local_1e8.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Parents.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_ParentSwitchConstraint @ 14a512f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ParentSwitchConstraint * __thiscall
FRigUnit_ParentSwitchConstraint::FRigUnit_ParentSwitchConstraint
          (FRigUnit_ParentSwitchConstraint *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_ParentSwitchConstraint__6B_;
  (this->Subject).Type = Null;
  (this->Subject).Name.ComparisonIndex = 0;
  (this->Subject).Name.Number = 0;
  (this->Parents).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).Keys.ArrayNum = 0;
  (this->Parents).Keys.ArrayMax = 0;
  this->ParentIndex = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialGlobalTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialGlobalTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialGlobalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialGlobalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialGlobalTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialGlobalTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialGlobalTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialGlobalTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialGlobalTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialGlobalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialGlobalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialGlobalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->Weight = 1.0;
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
  this->Switched = false;
  (this->CachedSubject).Key.Type = None;
  (this->CachedSubject).Key.Name.ComparisonIndex = 0;
  (this->CachedSubject).Key.Name.Number = 0;
  (this->CachedSubject).Index = 0xffff;
  (this->CachedSubject).ContainerVersion = -1;
  (this->CachedSubject).Element = (FRigBaseElement *)0x0;
  (this->CachedParent).Key.Type = None;
  (this->CachedParent).Key.Name.ComparisonIndex = 0;
  (this->CachedParent).Key.Name.Number = 0;
  (this->CachedParent).Index = 0xffff;
  (this->CachedParent).ContainerVersion = -1;
  (this->CachedParent).Element = (FRigBaseElement *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RelativeOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RelativeOffset).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeOffset).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeOffset).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RelativeOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RelativeOffset).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeOffset).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeOffset).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RelativeOffset).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RelativeOffset).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// Execute @ 14a52b2b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ParentSwitchConstraint::Execute
          (FRigUnit_ParentSwitchConstraint *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Subject,this->ParentIndex,&this->Parents,
                &this->InitialGlobalTransform,this->Weight,&this->Transform,&this->Switched,
                &this->CachedSubject,&this->CachedParent,&this->RelativeOffset);
  return;
}

// RigVMExecute @ 14a54c440

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ParentSwitchConstraint::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  int *piVar7;
  FRigElementKeyCollection *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  TTransform<double> *pTVar10;
  float *pfVar11;
  TTransform<double> *pTVar12;
  bool *pbVar13;
  FRigVMSlice *pFVar14;
  FCachedRigElement *pFVar15;
  FCachedRigElement *pFVar16;
  TTransform<double> *pTVar17;
  FControlRigExecuteContext *pFVar18;
  
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar7 = (int *)pFVar9[1].Ptr;
  }
  else {
    piVar7 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  iVar3 = *piVar7;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FRigElementKeyCollection *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pbVar13 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar15 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar14->Offset + pFVar14->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar16 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar14->Offset + pFVar14->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar17 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar14->Offset + pFVar14->Index);
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar18,pFVar6,iVar3,pFVar8,pTVar10,fVar1,pTVar12,pbVar13,pFVar15,pFVar16,pTVar17);
  return;
}

// StaticExecute @ 14a5881d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ParentSwitchConstraint::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,int param_3,
          FRigElementKeyCollection *param_4,TTransform<double> *param_5,float param_6,
          TTransform<double> *param_7,bool *param_8,FCachedRigElement *param_9,
          FCachedRigElement *param_10,TTransform<double> *param_11)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(param_4->Keys).AllocatorInstance.Data;
  iVar1 = (param_4->Keys).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  FRigUnit_ParentSwitchConstraintArray::StaticExecute
            (param_1,param_2,param_3,&local_18,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11);
  return;
}

