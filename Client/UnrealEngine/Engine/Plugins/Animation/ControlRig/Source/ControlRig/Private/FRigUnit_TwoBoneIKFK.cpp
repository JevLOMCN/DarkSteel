// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a48ea90

UScriptStruct * __cdecl FRigUnit_TwoBoneIKFK::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKFK.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKFK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK,(UObject *)pUVar1,
                         L"RigUnit_TwoBoneIKFK");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKFK.OuterSingleton,&local_18)
    ;
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TwoBoneIKFK.OuterSingleton;
}

// GetExecuteContextStruct @ 14a48eb10

UScriptStruct * __thiscall FRigUnit_TwoBoneIKFK::GetExecuteContextStruct(FRigUnit_TwoBoneIKFK *this)

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

// Execute @ 14a48ef40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_TwoBoneIKFK::Execute(FRigUnit_TwoBoneIKFK *this)

{
  undefined1 auStackY_338 [32];
  undefined1 local_288 [592];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  if ((FRigVMNameCache *)local_288._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_288._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_288,&this->StartJoint,&this->EndJoint,
                &this->PoleTarget,this->Spin,&this->EndEffector,this->IKBlend,
                &this->StartJointFKTransform,&this->MidJointFKTransform,&this->EndJointFKTransform,
                &this->PreviousFKIKBlend,&this->StartJointIKTransform,&this->MidJointIKTransform,
                &this->EndJointIKTransform,&this->StartJointIndex,&this->MidJointIndex,
                &this->EndJointIndex,&this->UpperLimbLength,&this->LowerLimbLength,
                &this->bIsInitialized);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_288);
  return;
}

// GetUpgradeInfo @ 14a48f670

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_TwoBoneIKFK::GetUpgradeInfo
          (FRigUnit_TwoBoneIKFK *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_TwoBoneIKFK @ 14a516a60

FRigUnit_TwoBoneIKFK * __thiscall
FRigUnit_TwoBoneIKFK::FRigUnit_TwoBoneIKFK(FRigUnit_TwoBoneIKFK *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_TwoBoneIKFK__6B_;
  (this->StartJoint).ComparisonIndex = 0;
  (this->StartJoint).Number = 0;
  (this->EndJoint).ComparisonIndex = 0;
  (this->EndJoint).Number = 0;
  (this->PoleTarget).field0_0x0._s_0.X = 0.0;
  (this->PoleTarget).field0_0x0._s_0.Y = 0.0;
  (this->PoleTarget).field0_0x0._s_0.Z = 0.0;
  this->Spin = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->EndEffector).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->EndEffector).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->EndEffector).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndEffector).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->EndEffector).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->EndEffector).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->EndEffector).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndEffector).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->EndEffector).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  (this->EndEffector).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->EndEffector).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndEffector).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->IKBlend = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->StartJointFKTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->StartJointFKTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartJointFKTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartJointFKTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->StartJointFKTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->StartJointFKTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartJointFKTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartJointFKTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->StartJointFKTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->StartJointFKTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->StartJointFKTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartJointFKTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->MidJointFKTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->MidJointFKTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->MidJointFKTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MidJointFKTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->MidJointFKTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->MidJointFKTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->MidJointFKTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MidJointFKTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->MidJointFKTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->MidJointFKTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->MidJointFKTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->MidJointFKTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->EndJointFKTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->EndJointFKTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->EndJointFKTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndJointFKTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->EndJointFKTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->EndJointFKTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->EndJointFKTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndJointFKTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->EndJointFKTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->EndJointFKTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->EndJointFKTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndJointFKTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->PreviousFKIKBlend = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->StartJointIKTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->StartJointIKTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartJointIKTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartJointIKTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->StartJointIKTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->StartJointIKTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartJointIKTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartJointIKTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->StartJointIKTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->StartJointIKTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->StartJointIKTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartJointIKTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->MidJointIKTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->MidJointIKTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->MidJointIKTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MidJointIKTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->MidJointIKTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->MidJointIKTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->MidJointIKTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MidJointIKTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->MidJointIKTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->MidJointIKTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->MidJointIKTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->MidJointIKTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->EndJointIKTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->EndJointIKTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->EndJointIKTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndJointIKTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->EndJointIKTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->EndJointIKTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->EndJointIKTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndJointIKTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->EndJointIKTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->EndJointIKTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->EndJointIKTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->EndJointIKTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->UpperLimbLength = 0.0;
  this->LowerLimbLength = 0.0;
  this->bIsInitialized = false;
  this->StartJointIndex = -1;
  this->MidJointIndex = -1;
  this->EndJointIndex = -1;
  return this;
}

// Execute @ 14a52f110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TwoBoneIKFK::Execute(FRigUnit_TwoBoneIKFK *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->StartJoint,&this->EndJoint,&this->PoleTarget,this->Spin,
                &this->EndEffector,this->IKBlend,&this->StartJointFKTransform,
                &this->MidJointFKTransform,&this->EndJointFKTransform,&this->PreviousFKIKBlend,
                &this->StartJointIKTransform,&this->MidJointIKTransform,&this->EndJointIKTransform,
                &this->StartJointIndex,&this->MidJointIndex,&this->EndJointIndex,
                &this->UpperLimbLength,&this->LowerLimbLength,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a55a670

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKFK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FName *pFVar7;
  TVector<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  float *pfVar10;
  TTransform<double> *pTVar11;
  FRigVMSlice *pFVar12;
  TTransform<double> *pTVar13;
  TTransform<double> *pTVar14;
  TTransform<double> *pTVar15;
  TTransform<double> *pTVar16;
  TTransform<double> *pTVar17;
  TTransform<double> *pTVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  float *pfVar22;
  float *pfVar23;
  bool *pbVar24;
  FControlRigExecuteContext *pFVar25;
  
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
    pFVar7 = (FName *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
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
    pTVar8 = (TVector<double> *)pFVar9[2].Ptr;
  }
  else {
    pTVar8 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar11 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar2 = *pfVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar13 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar14 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar15 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar16 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar17 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xc);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar18 = (TTransform<double> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xd);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar19 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xe);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar20 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xf);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar21 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x10);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar22 = (float *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x11);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pfVar23 = (float *)FRigVMMemoryHandle::GetData_Internal
                               (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0x12);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar24 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar25 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar25,pFVar6,pFVar7,pTVar8,fVar1,pTVar11,fVar2,pTVar13,pTVar14,pTVar15,pfVar10,
                pTVar16,pTVar17,pTVar18,piVar19,piVar20,piVar21,pfVar22,pfVar23,pbVar24);
  return;
}

// StaticExecute @ 14a59fb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TwoBoneIKFK::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,TVector<double> *param_4
          ,float param_5,TTransform<double> *param_6,float param_7,TTransform<double> *param_8,
          TTransform<double> *param_9,TTransform<double> *param_10,float *param_11,
          TTransform<double> *param_12,TTransform<double> *param_13,TTransform<double> *param_14,
          int *param_15,int *param_16,int *param_17,float *param_18,float *param_19,bool *param_20)

{
  uint uVar1;
  URigHierarchy *pUVar2;
  FRigTransformElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
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
  bool bVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  UScriptStruct *pUVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStackY_808 [32];
  undefined1 local_7a8 [8];
  undefined8 uStack_7a0;
  TTransform<double> local_748;
  TTransform<double> local_6e8;
  TTransform<double> local_688;
  bool *local_628;
  float *local_620;
  FRigElementKey local_618;
  FRigElementKey local_608;
  TVector<double>_u_0 local_5f8;
  TVector<double>_u_0 local_5e0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double local_580;
  double dStack_578;
  double local_570;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_808;
  local_620 = param_11;
  local_628 = param_20;
  if (*param_20 == false) {
    pUVar2 = param_1->Hierarchy;
    if (pUVar2 != (URigHierarchy *)0x0) {
      *param_17 = -1;
      *param_16 = -1;
      *param_15 = -1;
      *param_19 = 0.0;
      local_618.Type = Bone;
      local_608.Type = Bone;
      *param_18 = 0.0;
      local_618.Name = *param_2;
      local_608.Name = *param_3;
      iVar35 = URigHierarchy::GetIndex(pUVar2,&local_618,true);
      iVar36 = URigHierarchy::GetIndex(pUVar2,&local_608,true);
      if ((((iVar35 != -1) && (iVar36 != -1)) &&
          (iVar37 = URigHierarchy::GetFirstParent(pUVar2,iVar36), iVar37 != -1)) &&
         (iVar38 = URigHierarchy::GetFirstParent(pUVar2,iVar37), iVar38 == iVar35)) {
        *param_15 = iVar35;
        *param_16 = iVar37;
        *param_17 = iVar36;
        uVar1 = *param_15;
        if (((int)uVar1 < 0) || ((pUVar2->Elements).ArrayNum <= (int)uVar1)) {
LAB_14a59fe55:
          uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar58 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_3e8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_3e8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_3e8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_3e8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_3e8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_3e8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          uVar39 = 0;
          if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
            uVar39 = ~uVar1 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = *(FRigTransformElement **)
                    ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
          if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a59fe55;
          lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
          pUVar41 = FRigTransformElement::StaticStruct();
          if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a59fe55;
          iVar35 = (int)pUVar41->_padding_;
          if ((*(int *)(lVar40 + 0x38) < iVar35) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
              &pUVar41->_padding_)) {
            bVar34 = false;
          }
          else {
            bVar34 = true;
          }
          if (!bVar34) goto LAB_14a59fe55;
          URigHierarchy::GetTransform(pUVar2,&local_3e8,pFVar3,InitialGlobal);
          uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar58 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        }
        local_7a8._4_4_ = uVar44;
        local_7a8._0_4_ = uVar42;
        uStack_7a0._0_4_ = uVar46;
        uStack_7a0._4_4_ = uVar48;
        uVar1 = *param_16;
        uVar10 = uVar42;
        uVar11 = uVar44;
        uVar12 = uVar46;
        uVar13 = uVar48;
        uVar14 = uVar58;
        uVar15 = uVar57;
        uVar16 = uVar56;
        uVar17 = uVar65;
        uVar18 = uVar43;
        uVar19 = uVar60;
        uVar20 = uVar59;
        uVar21 = uVar62;
        uVar22 = uVar50;
        uVar23 = uVar45;
        uVar24 = uVar61;
        uVar25 = uVar63;
        uVar26 = uVar55;
        uVar27 = uVar51;
        uVar28 = uVar47;
        uVar29 = uVar64;
        uVar30 = uVar53;
        uVar31 = uVar54;
        uVar32 = uVar52;
        uVar33 = uVar49;
        if ((-1 < (int)uVar1) && ((int)uVar1 < (pUVar2->Elements).ArrayNum)) {
          uVar39 = 0;
          if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
            uVar39 = ~uVar1 >> 0x1f;
          }
          if (uVar39 == 0) {
            bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar34) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar44 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar46 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            uVar58 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar65 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar45 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
            local_7a8 = (undefined1  [8])
                        UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            uStack_7a0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          }
          pFVar3 = *(FRigTransformElement **)
                    ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
          uVar10 = uVar42;
          uVar11 = uVar44;
          uVar12 = uVar46;
          uVar13 = uVar48;
          uVar14 = uVar58;
          uVar15 = uVar57;
          uVar16 = uVar56;
          uVar17 = uVar65;
          uVar18 = uVar43;
          uVar19 = uVar60;
          uVar20 = uVar59;
          uVar21 = uVar62;
          uVar22 = uVar50;
          uVar23 = uVar45;
          uVar24 = uVar61;
          uVar25 = uVar63;
          uVar26 = uVar55;
          uVar27 = uVar51;
          uVar28 = uVar47;
          uVar29 = uVar64;
          uVar30 = uVar53;
          uVar31 = uVar54;
          uVar32 = uVar52;
          uVar33 = uVar49;
          if (pFVar3 != (FRigTransformElement *)0x0) {
            lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
            pUVar41 = FRigTransformElement::StaticStruct();
            if (pUVar41 != (UScriptStruct *)0x0) {
              iVar35 = (int)pUVar41->_padding_;
              if ((*(int *)(lVar40 + 0x38) < iVar35) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8)
                  != &pUVar41->_padding_)) {
                bVar34 = false;
              }
              else {
                bVar34 = true;
              }
              if (bVar34) {
                URigHierarchy::GetTransform(pUVar2,&local_388,pFVar3,InitialGlobal);
                uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar44 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar46 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar45 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar58 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar65 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                local_7a8 = (undefined1  [8])
                            UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
                uStack_7a0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
                uVar10 = local_388.Rotation.XY.m128d_f64[0]._0_4_;
                uVar11 = local_388.Rotation.XY.m128d_f64[0]._4_4_;
                uVar12 = local_388.Rotation.XY.m128d_f64[1]._0_4_;
                uVar13 = local_388.Rotation.XY.m128d_f64[1]._4_4_;
                uVar14 = local_388.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar15 = local_388.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar16 = local_388.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar17 = local_388.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar18 = local_388.Translation.XY.m128d_f64[0]._0_4_;
                uVar19 = local_388.Translation.XY.m128d_f64[0]._4_4_;
                uVar20 = local_388.Translation.XY.m128d_f64[1]._0_4_;
                uVar21 = local_388.Translation.XY.m128d_f64[1]._4_4_;
                uVar22 = local_388.Translation.ZW.m128d_f64[0]._0_4_;
                uVar23 = local_388.Translation.ZW.m128d_f64[0]._4_4_;
                uVar24 = local_388.Translation.ZW.m128d_f64[1]._0_4_;
                uVar25 = local_388.Translation.ZW.m128d_f64[1]._4_4_;
                uVar26 = local_388.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar27 = local_388.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar28 = local_388.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar29 = local_388.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar30 = local_388.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar31 = local_388.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar32 = local_388.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar33 = local_388.Scale3D.ZW.m128d_f64[1]._4_4_;
                goto LAB_14a5a005a;
              }
            }
            uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar44 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar46 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
            uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar45 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar58 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar65 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            local_7a8 = (undefined1  [8])
                        UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            uStack_7a0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            uVar10 = uVar42;
            uVar11 = uVar44;
            uVar12 = uVar46;
            uVar13 = uVar48;
            uVar14 = uVar58;
            uVar15 = uVar57;
            uVar16 = uVar56;
            uVar17 = uVar65;
            uVar18 = uVar43;
            uVar19 = uVar60;
            uVar20 = uVar59;
            uVar21 = uVar62;
            uVar22 = uVar50;
            uVar23 = uVar45;
            uVar24 = uVar61;
            uVar25 = uVar63;
            uVar26 = uVar55;
            uVar27 = uVar51;
            uVar28 = uVar47;
            uVar29 = uVar64;
            uVar30 = uVar53;
            uVar31 = uVar54;
            uVar32 = uVar52;
            uVar33 = uVar49;
          }
        }
LAB_14a5a005a:
        local_388.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar33;
        local_388.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar32;
        local_388.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar31;
        local_388.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar30;
        local_388.Scale3D.XY.m128d_f64[1]._4_4_ = uVar29;
        local_388.Scale3D.XY.m128d_f64[1]._0_4_ = uVar28;
        local_388.Scale3D.XY.m128d_f64[0]._4_4_ = uVar27;
        local_388.Scale3D.XY.m128d_f64[0]._0_4_ = uVar26;
        local_388.Translation.ZW.m128d_f64[1]._4_4_ = uVar25;
        local_388.Translation.ZW.m128d_f64[1]._0_4_ = uVar24;
        local_388.Translation.ZW.m128d_f64[0]._4_4_ = uVar23;
        local_388.Translation.ZW.m128d_f64[0]._0_4_ = uVar22;
        local_388.Translation.XY.m128d_f64[1]._4_4_ = uVar21;
        local_388.Translation.XY.m128d_f64[1]._0_4_ = uVar20;
        local_388.Translation.XY.m128d_f64[0]._4_4_ = uVar19;
        local_388.Translation.XY.m128d_f64[0]._0_4_ = uVar18;
        local_388.Rotation.ZW.m128d_f64[1]._4_4_ = uVar17;
        local_388.Rotation.ZW.m128d_f64[1]._0_4_ = uVar16;
        local_388.Rotation.ZW.m128d_f64[0]._4_4_ = uVar15;
        local_388.Rotation.ZW.m128d_f64[0]._0_4_ = uVar14;
        local_388.Rotation.XY.m128d_f64[1]._4_4_ = uVar13;
        local_388.Rotation.XY.m128d_f64[1]._0_4_ = uVar12;
        local_388.Rotation.XY.m128d_f64[0]._4_4_ = uVar11;
        local_388.Rotation.XY.m128d_f64[0]._0_4_ = uVar10;
        uVar1 = *param_17;
        if ((-1 < (int)uVar1) && ((int)uVar1 < (pUVar2->Elements).ArrayNum)) {
          uVar39 = 0;
          if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
            uVar39 = ~uVar1 >> 0x1f;
          }
          if (uVar39 == 0) {
            bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar34) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar44 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar46 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            uVar58 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar65 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar45 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
            local_7a8 = (undefined1  [8])
                        UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            uStack_7a0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          }
          pFVar3 = *(FRigTransformElement **)
                    ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
          if (pFVar3 != (FRigTransformElement *)0x0) {
            lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
            pUVar41 = FRigTransformElement::StaticStruct();
            if (pUVar41 != (UScriptStruct *)0x0) {
              iVar35 = (int)pUVar41->_padding_;
              if ((*(int *)(lVar40 + 0x38) < iVar35) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8)
                  != &pUVar41->_padding_)) {
                bVar34 = false;
              }
              else {
                bVar34 = true;
              }
              if (bVar34) {
                URigHierarchy::GetTransform(pUVar2,&local_448,pFVar3,InitialGlobal);
                local_7a8._4_4_ = local_448.Rotation.XY.m128d_f64[0]._4_4_;
                local_7a8._0_4_ = local_448.Rotation.XY.m128d_f64[0]._0_4_;
                uStack_7a0._4_4_ = local_448.Rotation.XY.m128d_f64[1]._4_4_;
                uStack_7a0._0_4_ = local_448.Rotation.XY.m128d_f64[1]._0_4_;
                uVar42 = local_448.Rotation.XY.m128d_f64[0]._0_4_;
                uVar44 = local_448.Rotation.XY.m128d_f64[0]._4_4_;
                uVar46 = local_448.Rotation.XY.m128d_f64[1]._0_4_;
                uVar48 = local_448.Rotation.XY.m128d_f64[1]._4_4_;
                uVar58 = local_448.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar57 = local_448.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar56 = local_448.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar65 = local_448.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar43 = local_448.Translation.XY.m128d_f64[0]._0_4_;
                uVar60 = local_448.Translation.XY.m128d_f64[0]._4_4_;
                uVar59 = local_448.Translation.XY.m128d_f64[1]._0_4_;
                uVar62 = local_448.Translation.XY.m128d_f64[1]._4_4_;
                uVar50 = local_448.Translation.ZW.m128d_f64[0]._0_4_;
                uVar45 = local_448.Translation.ZW.m128d_f64[0]._4_4_;
                uVar61 = local_448.Translation.ZW.m128d_f64[1]._0_4_;
                uVar63 = local_448.Translation.ZW.m128d_f64[1]._4_4_;
                uVar55 = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar51 = local_448.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar47 = local_448.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar64 = local_448.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar53 = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar54 = local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar52 = local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar49 = local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
                goto LAB_14a5a01fc;
              }
            }
            local_7a8 = (undefined1  [8])
                        UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            uStack_7a0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar44 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar46 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            uVar58 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar65 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
            uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
            uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
            uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
            uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            uVar45 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
            uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          }
        }
LAB_14a5a01fc:
        local_448.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar49;
        local_448.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar52;
        local_448.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar54;
        local_448.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar53;
        local_448.Scale3D.XY.m128d_f64[1]._4_4_ = uVar64;
        local_448.Scale3D.XY.m128d_f64[1]._0_4_ = uVar47;
        local_448.Scale3D.XY.m128d_f64[0]._4_4_ = uVar51;
        local_448.Scale3D.XY.m128d_f64[0]._0_4_ = uVar55;
        local_448.Translation.ZW.m128d_f64[1]._4_4_ = uVar63;
        local_448.Translation.ZW.m128d_f64[1]._0_4_ = uVar61;
        local_448.Translation.ZW.m128d_f64[0]._4_4_ = uVar45;
        local_448.Translation.ZW.m128d_f64[0]._0_4_ = uVar50;
        local_448.Translation.XY.m128d_f64[1]._4_4_ = uVar62;
        local_448.Translation.XY.m128d_f64[1]._0_4_ = uVar59;
        local_448.Translation.XY.m128d_f64[0]._4_4_ = uVar60;
        local_448.Translation.XY.m128d_f64[0]._0_4_ = uVar43;
        local_448.Rotation.ZW.m128d_f64[1]._4_4_ = uVar65;
        local_448.Rotation.ZW.m128d_f64[1]._0_4_ = uVar56;
        local_448.Rotation.ZW.m128d_f64[0]._4_4_ = uVar57;
        local_448.Rotation.ZW.m128d_f64[0]._0_4_ = uVar58;
        local_448.Rotation.XY.m128d_f64[1]._4_4_ = uVar48;
        local_448.Rotation.XY.m128d_f64[1]._0_4_ = uVar46;
        local_448.Rotation.XY.m128d_f64[0]._4_4_ = uVar44;
        local_448.Rotation.XY.m128d_f64[0]._0_4_ = uVar42;
        local_598 = (double)CONCAT44(local_388.Translation.XY.m128d_f64[0]._4_4_,
                                     local_388.Translation.XY.m128d_f64[0]._0_4_);
        dStack_590 = (double)CONCAT44(local_388.Translation.XY.m128d_f64[1]._4_4_,
                                      local_388.Translation.XY.m128d_f64[1]._0_4_);
        local_588 = (double)CONCAT44(local_388.Translation.ZW.m128d_f64[0]._4_4_,
                                     local_388.Translation.ZW.m128d_f64[0]._0_4_);
        dVar6 = dStack_590 -
                (double)CONCAT44(local_448.Translation.XY.m128d_f64[1]._4_4_,
                                 local_448.Translation.XY.m128d_f64[1]._0_4_);
        dVar5 = local_588 -
                (double)CONCAT44(local_448.Translation.ZW.m128d_f64[0]._4_4_,
                                 local_448.Translation.ZW.m128d_f64[0]._0_4_);
        local_5a0 = local_3e8.Translation.ZW.m128d_f64[0];
        dVar7 = local_598 -
                (double)CONCAT44(local_448.Translation.XY.m128d_f64[0]._4_4_,
                                 local_448.Translation.XY.m128d_f64[0]._0_4_);
        local_5b0 = local_3e8.Translation.XY.m128d_f64[0];
        dStack_5a8 = local_3e8.Translation.XY.m128d_f64[1];
        local_5b8 = CONCAT44(local_448.Translation.ZW.m128d_f64[0]._4_4_,
                             local_448.Translation.ZW.m128d_f64[0]._0_4_);
        *param_18 = (float)SQRT((local_3e8.Translation.XY.m128d_f64[1] - dStack_590) *
                                (local_3e8.Translation.XY.m128d_f64[1] - dStack_590) +
                                (local_3e8.Translation.XY.m128d_f64[0] - local_598) *
                                (local_3e8.Translation.XY.m128d_f64[0] - local_598) +
                                (local_3e8.Translation.ZW.m128d_f64[0] - local_588) *
                                (local_3e8.Translation.ZW.m128d_f64[0] - local_588));
        *param_19 = (float)SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5);
        (param_8->Rotation).XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
        (param_8->Rotation).XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
        (param_8->Rotation).ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
        (param_8->Rotation).ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
        (param_8->Translation).XY.m128d_f64[0] = local_3e8.Translation.XY.m128d_f64[0];
        (param_8->Translation).XY.m128d_f64[1] = local_3e8.Translation.XY.m128d_f64[1];
        (param_8->Translation).ZW.m128d_f64[0] = local_3e8.Translation.ZW.m128d_f64[0];
        (param_8->Translation).ZW.m128d_f64[1] = local_3e8.Translation.ZW.m128d_f64[1];
        (param_8->Scale3D).XY.m128d_f64[0] = local_3e8.Scale3D.XY.m128d_f64[0];
        (param_8->Scale3D).XY.m128d_f64[1] = local_3e8.Scale3D.XY.m128d_f64[1];
        (param_8->Scale3D).ZW.m128d_f64[0] = local_3e8.Scale3D.ZW.m128d_f64[0];
        (param_8->Scale3D).ZW.m128d_f64[1] = local_3e8.Scale3D.ZW.m128d_f64[1];
        (param_12->Rotation).XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
        (param_12->Rotation).XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
        (param_12->Rotation).ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
        (param_12->Rotation).ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
        (param_12->Translation).XY.m128d_f64[0] = local_3e8.Translation.XY.m128d_f64[0];
        (param_12->Translation).XY.m128d_f64[1] = local_3e8.Translation.XY.m128d_f64[1];
        (param_12->Translation).ZW.m128d_f64[0] = local_3e8.Translation.ZW.m128d_f64[0];
        (param_12->Translation).ZW.m128d_f64[1] = local_3e8.Translation.ZW.m128d_f64[1];
        (param_12->Scale3D).XY.m128d_f64[0] = local_3e8.Scale3D.XY.m128d_f64[0];
        (param_12->Scale3D).XY.m128d_f64[1] = local_3e8.Scale3D.XY.m128d_f64[1];
        (param_12->Scale3D).ZW.m128d_f64[0] = local_3e8.Scale3D.ZW.m128d_f64[0];
        (param_12->Scale3D).ZW.m128d_f64[1] = local_3e8.Scale3D.ZW.m128d_f64[1];
        (param_9->Rotation).XY.m128d_f64[0] =
             (double)CONCAT44(local_388.Rotation.XY.m128d_f64[0]._4_4_,
                              local_388.Rotation.XY.m128d_f64[0]._0_4_);
        (param_9->Rotation).XY.m128d_f64[1] =
             (double)CONCAT44(local_388.Rotation.XY.m128d_f64[1]._4_4_,
                              local_388.Rotation.XY.m128d_f64[1]._0_4_);
        (param_9->Rotation).ZW.m128d_f64[0] =
             (double)CONCAT44(local_388.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_388.Rotation.ZW.m128d_f64[0]._0_4_);
        (param_9->Rotation).ZW.m128d_f64[1] =
             (double)CONCAT44(local_388.Rotation.ZW.m128d_f64[1]._4_4_,
                              local_388.Rotation.ZW.m128d_f64[1]._0_4_);
        (param_9->Translation).XY.m128d_f64[0] = local_598;
        (param_9->Translation).XY.m128d_f64[1] = dStack_590;
        (param_9->Translation).ZW.m128d_f64[0] = local_588;
        (param_9->Translation).ZW.m128d_f64[1] =
             (double)CONCAT44(local_388.Translation.ZW.m128d_f64[1]._4_4_,
                              local_388.Translation.ZW.m128d_f64[1]._0_4_);
        (param_9->Scale3D).XY.m128d_f64[0] =
             (double)CONCAT44(local_388.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_388.Scale3D.XY.m128d_f64[0]._0_4_);
        (param_9->Scale3D).XY.m128d_f64[1] =
             (double)CONCAT44(local_388.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_388.Scale3D.XY.m128d_f64[1]._0_4_);
        (param_9->Scale3D).ZW.m128d_f64[0] =
             (double)CONCAT44(local_388.Scale3D.ZW.m128d_f64[0]._4_4_,
                              local_388.Scale3D.ZW.m128d_f64[0]._0_4_);
        (param_9->Scale3D).ZW.m128d_f64[1] =
             (double)CONCAT44(local_388.Scale3D.ZW.m128d_f64[1]._4_4_,
                              local_388.Scale3D.ZW.m128d_f64[1]._0_4_);
        (param_13->Rotation).XY.m128d_f64[0] =
             (double)CONCAT44(local_388.Rotation.XY.m128d_f64[0]._4_4_,
                              local_388.Rotation.XY.m128d_f64[0]._0_4_);
        (param_13->Rotation).XY.m128d_f64[1] =
             (double)CONCAT44(local_388.Rotation.XY.m128d_f64[1]._4_4_,
                              local_388.Rotation.XY.m128d_f64[1]._0_4_);
        (param_13->Rotation).ZW.m128d_f64[0] =
             (double)CONCAT44(local_388.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_388.Rotation.ZW.m128d_f64[0]._0_4_);
        (param_13->Rotation).ZW.m128d_f64[1] =
             (double)CONCAT44(local_388.Rotation.ZW.m128d_f64[1]._4_4_,
                              local_388.Rotation.ZW.m128d_f64[1]._0_4_);
        (param_13->Translation).XY.m128d_f64[0] = local_598;
        (param_13->Translation).XY.m128d_f64[1] = dStack_590;
        (param_13->Translation).ZW.m128d_f64[0] = local_588;
        (param_13->Translation).ZW.m128d_f64[1] =
             (double)CONCAT44(local_388.Translation.ZW.m128d_f64[1]._4_4_,
                              local_388.Translation.ZW.m128d_f64[1]._0_4_);
        (param_13->Scale3D).XY.m128d_f64[0] =
             (double)CONCAT44(local_388.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_388.Scale3D.XY.m128d_f64[0]._0_4_);
        (param_13->Scale3D).XY.m128d_f64[1] =
             (double)CONCAT44(local_388.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_388.Scale3D.XY.m128d_f64[1]._0_4_);
        (param_13->Scale3D).ZW.m128d_f64[0] =
             (double)CONCAT44(local_388.Scale3D.ZW.m128d_f64[0]._4_4_,
                              local_388.Scale3D.ZW.m128d_f64[0]._0_4_);
        (param_13->Scale3D).ZW.m128d_f64[1] =
             (double)CONCAT44(local_388.Scale3D.ZW.m128d_f64[1]._4_4_,
                              local_388.Scale3D.ZW.m128d_f64[1]._0_4_);
        (param_10->Rotation).XY.m128d_f64[0] = (double)local_7a8;
        (param_10->Rotation).XY.m128d_f64[1] = uStack_7a0;
        *(undefined4 *)(param_10->Rotation).ZW.m128d_f64 = local_448.Rotation.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_10->Rotation).ZW.m128d_f64 + 4) =
             local_448.Rotation.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_10->Rotation).ZW.m128d_f64 + 1) =
             local_448.Rotation.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_10->Rotation).ZW.m128d_f64 + 0xc) =
             local_448.Rotation.ZW.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_10->Translation).XY.m128d_f64 =
             local_448.Translation.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_10->Translation).XY.m128d_f64 + 4) =
             local_448.Translation.XY.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_10->Translation).XY.m128d_f64 + 1) =
             local_448.Translation.XY.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_10->Translation).XY.m128d_f64 + 0xc) =
             local_448.Translation.XY.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_10->Translation).ZW.m128d_f64 =
             local_448.Translation.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_10->Translation).ZW.m128d_f64 + 4) =
             local_448.Translation.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_10->Translation).ZW.m128d_f64 + 1) =
             local_448.Translation.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_10->Translation).ZW.m128d_f64 + 0xc) =
             local_448.Translation.ZW.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_10->Scale3D).XY.m128d_f64 = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_10->Scale3D).XY.m128d_f64 + 4) =
             local_448.Scale3D.XY.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_10->Scale3D).XY.m128d_f64 + 1) =
             local_448.Scale3D.XY.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_10->Scale3D).XY.m128d_f64 + 0xc) =
             local_448.Scale3D.XY.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_10->Scale3D).ZW.m128d_f64 = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_10->Scale3D).ZW.m128d_f64 + 4) =
             local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_10->Scale3D).ZW.m128d_f64 + 1) =
             local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_10->Scale3D).ZW.m128d_f64 + 0xc) =
             local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
        (param_14->Rotation).XY.m128d_f64[0] = (double)local_7a8;
        (param_14->Rotation).XY.m128d_f64[1] = uStack_7a0;
        *(undefined4 *)(param_14->Rotation).ZW.m128d_f64 = local_448.Rotation.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_14->Rotation).ZW.m128d_f64 + 4) =
             local_448.Rotation.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_14->Rotation).ZW.m128d_f64 + 1) =
             local_448.Rotation.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_14->Rotation).ZW.m128d_f64 + 0xc) =
             local_448.Rotation.ZW.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_14->Translation).XY.m128d_f64 =
             local_448.Translation.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_14->Translation).XY.m128d_f64 + 4) =
             local_448.Translation.XY.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_14->Translation).XY.m128d_f64 + 1) =
             local_448.Translation.XY.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_14->Translation).XY.m128d_f64 + 0xc) =
             local_448.Translation.XY.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_14->Translation).ZW.m128d_f64 =
             local_448.Translation.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_14->Translation).ZW.m128d_f64 + 4) =
             local_448.Translation.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_14->Translation).ZW.m128d_f64 + 1) =
             local_448.Translation.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_14->Translation).ZW.m128d_f64 + 0xc) =
             local_448.Translation.ZW.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_14->Scale3D).XY.m128d_f64 = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_14->Scale3D).XY.m128d_f64 + 4) =
             local_448.Scale3D.XY.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_14->Scale3D).XY.m128d_f64 + 1) =
             local_448.Scale3D.XY.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_14->Scale3D).XY.m128d_f64 + 0xc) =
             local_448.Scale3D.XY.m128d_f64[1]._4_4_;
        *(undefined4 *)(param_14->Scale3D).ZW.m128d_f64 = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)((longlong)(param_14->Scale3D).ZW.m128d_f64 + 4) =
             local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)((param_14->Scale3D).ZW.m128d_f64 + 1) =
             local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)(param_14->Scale3D).ZW.m128d_f64 + 0xc) =
             local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_5c8 = local_448.Translation.XY.m128d_f64[0]._0_4_;
        uStack_5c4 = local_448.Translation.XY.m128d_f64[0]._4_4_;
        uStack_5c0 = local_448.Translation.XY.m128d_f64[1]._0_4_;
        uStack_5bc = local_448.Translation.XY.m128d_f64[1]._4_4_;
        local_580 = local_598;
        dStack_578 = dStack_590;
        local_570 = local_588;
      }
    }
    *local_628 = true;
  }
  if (*param_15 == -1) {
    return;
  }
  if (*param_16 == -1) {
    return;
  }
  if (*param_17 == -1) {
    return;
  }
  dVar9 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  uVar51 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar45 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  uVar44 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar54 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar7 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  uVar43 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar58 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  dVar6 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar55 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar50 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  dVar5 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  uVar42 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar53 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_748.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_748.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_748.Rotation.XY.m128d_f64[1]._0_4_ = uVar51;
  local_748.Rotation.XY.m128d_f64[0] = dVar9;
  local_748.Rotation.XY.m128d_f64[1]._4_4_ = uVar45;
  local_6e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar51;
  local_6e8.Rotation.XY.m128d_f64[0] = dVar9;
  local_6e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar45;
  local_688.Rotation.XY.m128d_f64[1]._0_4_ = uVar51;
  local_688.Rotation.XY.m128d_f64[0] = dVar9;
  local_688.Rotation.XY.m128d_f64[1]._4_4_ = uVar45;
  local_748.Scale3D.XY.m128d_f64[1]._0_4_ = uVar42;
  local_748.Scale3D.XY.m128d_f64[0] = dVar5;
  local_748.Scale3D.XY.m128d_f64[1]._4_4_ = uVar53;
  local_6e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar42;
  local_6e8.Scale3D.XY.m128d_f64[0] = dVar5;
  local_6e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar53;
  local_688.Scale3D.XY.m128d_f64[1]._0_4_ = uVar42;
  local_688.Scale3D.XY.m128d_f64[0] = dVar5;
  local_688.Scale3D.XY.m128d_f64[1]._4_4_ = uVar53;
  local_748.Rotation.ZW.m128d_f64[1]._0_4_ = uVar44;
  local_748.Rotation.ZW.m128d_f64[0] = dVar8;
  local_748.Rotation.ZW.m128d_f64[1]._4_4_ = uVar54;
  local_748.Translation.XY.m128d_f64[1]._0_4_ = uVar43;
  local_748.Translation.XY.m128d_f64[0] = dVar7;
  local_748.Translation.XY.m128d_f64[1]._4_4_ = uVar58;
  local_748.Translation.ZW.m128d_f64[1]._0_4_ = uVar55;
  local_748.Translation.ZW.m128d_f64[0] = dVar6;
  local_748.Translation.ZW.m128d_f64[1]._4_4_ = uVar50;
  local_6e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar44;
  local_6e8.Rotation.ZW.m128d_f64[0] = dVar8;
  local_6e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar54;
  local_6e8.Translation.XY.m128d_f64[1]._0_4_ = uVar43;
  local_6e8.Translation.XY.m128d_f64[0] = dVar7;
  local_6e8.Translation.XY.m128d_f64[1]._4_4_ = uVar58;
  local_6e8.Translation.ZW.m128d_f64[1]._0_4_ = uVar55;
  local_6e8.Translation.ZW.m128d_f64[0] = dVar6;
  local_6e8.Translation.ZW.m128d_f64[1]._4_4_ = uVar50;
  local_688.Rotation.ZW.m128d_f64[1]._0_4_ = uVar44;
  local_688.Rotation.ZW.m128d_f64[0] = dVar8;
  local_688.Rotation.ZW.m128d_f64[1]._4_4_ = uVar54;
  local_688.Translation.XY.m128d_f64[1]._0_4_ = uVar43;
  local_688.Translation.XY.m128d_f64[0] = dVar7;
  local_688.Translation.XY.m128d_f64[1]._4_4_ = uVar58;
  local_688.Translation.ZW.m128d_f64[1]._0_4_ = uVar55;
  local_688.Translation.ZW.m128d_f64[0] = dVar6;
  local_688.Translation.ZW.m128d_f64[1]._4_4_ = uVar50;
  if ((float)((uint)param_7 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    local_748.Rotation.XY.m128d_f64 = *&(param_8->Rotation).XY.m128d_f64;
    local_748.Rotation.ZW.m128d_f64 = *&(param_8->Rotation).ZW.m128d_f64;
    local_748.Translation.XY.m128d_f64 = *&(param_8->Translation).XY.m128d_f64;
    local_748.Translation.ZW.m128d_f64 = *&(param_8->Translation).ZW.m128d_f64;
    local_748.Scale3D.XY.m128d_f64 = *&(param_8->Scale3D).XY.m128d_f64;
    local_748.Scale3D.ZW.m128d_f64[0] = (param_8->Scale3D).ZW.m128d_f64[0];
    local_748.Scale3D.ZW.m128d_f64[1] = (param_8->Scale3D).ZW.m128d_f64[1];
    local_6e8.Rotation.XY.m128d_f64 = *&(param_9->Rotation).XY.m128d_f64;
    local_6e8.Rotation.ZW.m128d_f64 = *&(param_9->Rotation).ZW.m128d_f64;
    local_6e8.Translation.XY.m128d_f64 = *&(param_9->Translation).XY.m128d_f64;
    local_6e8.Translation.ZW.m128d_f64 = *&(param_9->Translation).ZW.m128d_f64;
    local_6e8.Scale3D.XY.m128d_f64 = *&(param_9->Scale3D).XY.m128d_f64;
    local_6e8.Scale3D.ZW.m128d_f64[0] = (param_9->Scale3D).ZW.m128d_f64[0];
    local_6e8.Scale3D.ZW.m128d_f64[1] = (param_9->Scale3D).ZW.m128d_f64[1];
    local_688.Rotation.XY.m128d_f64 = *&(param_10->Rotation).XY.m128d_f64;
    local_688.Rotation.ZW.m128d_f64 = *&(param_10->Rotation).ZW.m128d_f64;
    local_688.Translation.XY.m128d_f64 = *&(param_10->Translation).XY.m128d_f64;
    local_688.Translation.ZW.m128d_f64 = *&(param_10->Translation).ZW.m128d_f64;
    local_688.Scale3D.XY.m128d_f64 = *&(param_10->Scale3D).XY.m128d_f64;
    local_688.Scale3D.ZW.m128d_f64[0] = (param_10->Scale3D).ZW.m128d_f64[0];
    local_688.Scale3D.ZW.m128d_f64[1] = (param_10->Scale3D).ZW.m128d_f64[1];
    goto LAB_14a5a1097;
  }
  pUVar2 = param_1->Hierarchy;
  local_6e8.Scale3D.ZW.m128d_f64[0] = local_748.Scale3D.ZW.m128d_f64[0];
  local_6e8.Scale3D.ZW.m128d_f64[1] = local_748.Scale3D.ZW.m128d_f64[1];
  local_688.Scale3D.ZW.m128d_f64[0] = local_748.Scale3D.ZW.m128d_f64[0];
  local_688.Scale3D.ZW.m128d_f64[1] = local_748.Scale3D.ZW.m128d_f64[1];
  if (__real_322bcc77 <
      (float)((uint)(param_7 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if ((pUVar2 == (URigHierarchy *)0x0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("Hierarchy",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Deprecated\\RigUnit_TwoBoneIKFK.cpp"
                            ,0x61,L""), bVar34)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = *param_15;
    if (((int)uVar1 < 0) || ((pUVar2->Elements).ArrayNum <= (int)uVar1)) {
LAB_14a5a0c9c:
      uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar58 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar60 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar61 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar44 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar55 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar54 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar46 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar56 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar51 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar52 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_208.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_208.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_208.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_208.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_208.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_208.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      uVar39 = 0;
      if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
        uVar39 = ~uVar1 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FRigTransformElement **)
                ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a5a0c9c;
      lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pUVar41 = FRigTransformElement::StaticStruct();
      if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a5a0c9c;
      iVar35 = (int)pUVar41->_padding_;
      if ((*(int *)(lVar40 + 0x38) < iVar35) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
          &pUVar41->_padding_)) {
        bVar34 = false;
      }
      else {
        bVar34 = true;
      }
      if (!bVar34) goto LAB_14a5a0c9c;
      URigHierarchy::GetTransform(pUVar2,&local_208,pFVar3,CurrentGlobal);
      uVar43 = local_208.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar45 = local_208.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar47 = local_208.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar49 = local_208.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar50 = local_208.Translation.ZW.m128d_f64[0]._0_4_;
      uVar51 = local_208.Translation.ZW.m128d_f64[0]._4_4_;
      uVar52 = local_208.Translation.ZW.m128d_f64[1]._0_4_;
      uVar48 = local_208.Translation.ZW.m128d_f64[1]._4_4_;
      uVar55 = local_208.Translation.XY.m128d_f64[0]._0_4_;
      uVar54 = local_208.Translation.XY.m128d_f64[0]._4_4_;
      uVar46 = local_208.Translation.XY.m128d_f64[1]._0_4_;
      uVar56 = local_208.Translation.XY.m128d_f64[1]._4_4_;
      uVar53 = local_208.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar44 = local_208.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar57 = local_208.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar59 = local_208.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar42 = local_208.Rotation.XY.m128d_f64[0]._0_4_;
      uVar58 = local_208.Rotation.XY.m128d_f64[0]._4_4_;
      uVar60 = local_208.Rotation.XY.m128d_f64[1]._0_4_;
      uVar61 = local_208.Rotation.XY.m128d_f64[1]._4_4_;
    }
    *(undefined4 *)(param_12->Rotation).XY.m128d_f64 = uVar42;
    *(undefined4 *)((longlong)(param_12->Rotation).XY.m128d_f64 + 4) = uVar58;
    *(undefined4 *)((param_12->Rotation).XY.m128d_f64 + 1) = uVar60;
    *(undefined4 *)((longlong)(param_12->Rotation).XY.m128d_f64 + 0xc) = uVar61;
    *(undefined4 *)(param_12->Rotation).ZW.m128d_f64 = uVar53;
    *(undefined4 *)((longlong)(param_12->Rotation).ZW.m128d_f64 + 4) = uVar44;
    *(undefined4 *)((param_12->Rotation).ZW.m128d_f64 + 1) = uVar57;
    *(undefined4 *)((longlong)(param_12->Rotation).ZW.m128d_f64 + 0xc) = uVar59;
    *(undefined4 *)(param_12->Translation).XY.m128d_f64 = uVar55;
    *(undefined4 *)((longlong)(param_12->Translation).XY.m128d_f64 + 4) = uVar54;
    *(undefined4 *)((param_12->Translation).XY.m128d_f64 + 1) = uVar46;
    *(undefined4 *)((longlong)(param_12->Translation).XY.m128d_f64 + 0xc) = uVar56;
    *(undefined4 *)(param_12->Translation).ZW.m128d_f64 = uVar50;
    *(undefined4 *)((longlong)(param_12->Translation).ZW.m128d_f64 + 4) = uVar51;
    *(undefined4 *)((param_12->Translation).ZW.m128d_f64 + 1) = uVar52;
    *(undefined4 *)((longlong)(param_12->Translation).ZW.m128d_f64 + 0xc) = uVar48;
    *&(param_12->Scale3D).XY.m128d_f64 = local_208.Scale3D.XY.m128d_f64;
    *(undefined4 *)(param_12->Scale3D).ZW.m128d_f64 = uVar43;
    *(undefined4 *)((longlong)(param_12->Scale3D).ZW.m128d_f64 + 4) = uVar45;
    *(undefined4 *)((param_12->Scale3D).ZW.m128d_f64 + 1) = uVar47;
    *(undefined4 *)((longlong)(param_12->Scale3D).ZW.m128d_f64 + 0xc) = uVar49;
    uVar1 = *param_16;
    if (((int)uVar1 < 0) || ((pUVar2->Elements).ArrayNum <= (int)uVar1)) {
LAB_14a5a0e05:
      uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar58 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar60 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar61 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar44 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar55 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar54 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar46 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar56 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar51 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar52 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_1a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_1a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_1a8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_1a8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_1a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_1a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      uVar39 = 0;
      if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
        uVar39 = ~uVar1 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FRigTransformElement **)
                ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a5a0e05;
      lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pUVar41 = FRigTransformElement::StaticStruct();
      if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a5a0e05;
      iVar35 = (int)pUVar41->_padding_;
      if ((*(int *)(lVar40 + 0x38) < iVar35) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
          &pUVar41->_padding_)) {
        bVar34 = false;
      }
      else {
        bVar34 = true;
      }
      if (!bVar34) goto LAB_14a5a0e05;
      URigHierarchy::GetTransform(pUVar2,&local_1a8,pFVar3,CurrentGlobal);
      uVar43 = local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar45 = local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar47 = local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar49 = local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar50 = local_1a8.Translation.ZW.m128d_f64[0]._0_4_;
      uVar51 = local_1a8.Translation.ZW.m128d_f64[0]._4_4_;
      uVar52 = local_1a8.Translation.ZW.m128d_f64[1]._0_4_;
      uVar48 = local_1a8.Translation.ZW.m128d_f64[1]._4_4_;
      uVar55 = local_1a8.Translation.XY.m128d_f64[0]._0_4_;
      uVar54 = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
      uVar46 = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
      uVar56 = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
      uVar53 = local_1a8.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar44 = local_1a8.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar57 = local_1a8.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar59 = local_1a8.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar42 = local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
      uVar58 = local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
      uVar60 = local_1a8.Rotation.XY.m128d_f64[1]._0_4_;
      uVar61 = local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
    }
    *(undefined4 *)(param_13->Rotation).XY.m128d_f64 = uVar42;
    *(undefined4 *)((longlong)(param_13->Rotation).XY.m128d_f64 + 4) = uVar58;
    *(undefined4 *)((param_13->Rotation).XY.m128d_f64 + 1) = uVar60;
    *(undefined4 *)((longlong)(param_13->Rotation).XY.m128d_f64 + 0xc) = uVar61;
    *(undefined4 *)(param_13->Rotation).ZW.m128d_f64 = uVar53;
    *(undefined4 *)((longlong)(param_13->Rotation).ZW.m128d_f64 + 4) = uVar44;
    *(undefined4 *)((param_13->Rotation).ZW.m128d_f64 + 1) = uVar57;
    *(undefined4 *)((longlong)(param_13->Rotation).ZW.m128d_f64 + 0xc) = uVar59;
    *(undefined4 *)(param_13->Translation).XY.m128d_f64 = uVar55;
    *(undefined4 *)((longlong)(param_13->Translation).XY.m128d_f64 + 4) = uVar54;
    *(undefined4 *)((param_13->Translation).XY.m128d_f64 + 1) = uVar46;
    *(undefined4 *)((longlong)(param_13->Translation).XY.m128d_f64 + 0xc) = uVar56;
    *(undefined4 *)(param_13->Translation).ZW.m128d_f64 = uVar50;
    *(undefined4 *)((longlong)(param_13->Translation).ZW.m128d_f64 + 4) = uVar51;
    *(undefined4 *)((param_13->Translation).ZW.m128d_f64 + 1) = uVar52;
    *(undefined4 *)((longlong)(param_13->Translation).ZW.m128d_f64 + 0xc) = uVar48;
    *&(param_13->Scale3D).XY.m128d_f64 = local_1a8.Scale3D.XY.m128d_f64;
    *(undefined4 *)(param_13->Scale3D).ZW.m128d_f64 = uVar43;
    *(undefined4 *)((longlong)(param_13->Scale3D).ZW.m128d_f64 + 4) = uVar45;
    *(undefined4 *)((param_13->Scale3D).ZW.m128d_f64 + 1) = uVar47;
    *(undefined4 *)((longlong)(param_13->Scale3D).ZW.m128d_f64 + 0xc) = uVar49;
    uVar1 = *param_17;
    if (((int)uVar1 < 0) || ((pUVar2->Elements).ArrayNum <= (int)uVar1)) {
LAB_14a5a0f68:
      uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar58 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar60 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar61 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar44 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar55 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar54 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar46 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar56 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar51 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar52 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_148.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_148.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_148.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_148.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_148.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_148.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      uVar39 = 0;
      if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
        uVar39 = ~uVar1 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FRigTransformElement **)
                ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a5a0f68;
      lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pUVar41 = FRigTransformElement::StaticStruct();
      if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a5a0f68;
      iVar35 = (int)pUVar41->_padding_;
      if ((*(int *)(lVar40 + 0x38) < iVar35) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
          &pUVar41->_padding_)) {
        bVar34 = false;
      }
      else {
        bVar34 = true;
      }
      if (!bVar34) goto LAB_14a5a0f68;
      URigHierarchy::GetTransform(pUVar2,&local_148,pFVar3,CurrentGlobal);
      uVar43 = local_148.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar45 = local_148.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar47 = local_148.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar49 = local_148.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar50 = local_148.Translation.ZW.m128d_f64[0]._0_4_;
      uVar51 = local_148.Translation.ZW.m128d_f64[0]._4_4_;
      uVar52 = local_148.Translation.ZW.m128d_f64[1]._0_4_;
      uVar48 = local_148.Translation.ZW.m128d_f64[1]._4_4_;
      uVar55 = local_148.Translation.XY.m128d_f64[0]._0_4_;
      uVar54 = local_148.Translation.XY.m128d_f64[0]._4_4_;
      uVar46 = local_148.Translation.XY.m128d_f64[1]._0_4_;
      uVar56 = local_148.Translation.XY.m128d_f64[1]._4_4_;
      uVar53 = local_148.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar44 = local_148.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar57 = local_148.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar59 = local_148.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar42 = local_148.Rotation.XY.m128d_f64[0]._0_4_;
      uVar58 = local_148.Rotation.XY.m128d_f64[0]._4_4_;
      uVar60 = local_148.Rotation.XY.m128d_f64[1]._0_4_;
      uVar61 = local_148.Rotation.XY.m128d_f64[1]._4_4_;
    }
    *(undefined4 *)(param_14->Rotation).XY.m128d_f64 = uVar42;
    *(undefined4 *)((longlong)(param_14->Rotation).XY.m128d_f64 + 4) = uVar58;
    *(undefined4 *)((param_14->Rotation).XY.m128d_f64 + 1) = uVar60;
    *(undefined4 *)((longlong)(param_14->Rotation).XY.m128d_f64 + 0xc) = uVar61;
    *(undefined4 *)(param_14->Rotation).ZW.m128d_f64 = uVar53;
    *(undefined4 *)((longlong)(param_14->Rotation).ZW.m128d_f64 + 4) = uVar44;
    *(undefined4 *)((param_14->Rotation).ZW.m128d_f64 + 1) = uVar57;
    *(undefined4 *)((longlong)(param_14->Rotation).ZW.m128d_f64 + 0xc) = uVar59;
    *(undefined4 *)(param_14->Translation).XY.m128d_f64 = uVar55;
    *(undefined4 *)((longlong)(param_14->Translation).XY.m128d_f64 + 4) = uVar54;
    *(undefined4 *)((param_14->Translation).XY.m128d_f64 + 1) = uVar46;
    *(undefined4 *)((longlong)(param_14->Translation).XY.m128d_f64 + 0xc) = uVar56;
    *(undefined4 *)(param_14->Translation).ZW.m128d_f64 = uVar50;
    *(undefined4 *)((longlong)(param_14->Translation).ZW.m128d_f64 + 4) = uVar51;
    *(undefined4 *)((param_14->Translation).ZW.m128d_f64 + 1) = uVar52;
    *(undefined4 *)((longlong)(param_14->Translation).ZW.m128d_f64 + 0xc) = uVar48;
    *&(param_14->Scale3D).XY.m128d_f64 = local_148.Scale3D.XY.m128d_f64;
    *(undefined4 *)(param_14->Scale3D).ZW.m128d_f64 = uVar43;
    *(undefined4 *)((longlong)(param_14->Scale3D).ZW.m128d_f64 + 4) = uVar45;
    *(undefined4 *)((param_14->Scale3D).ZW.m128d_f64 + 1) = uVar47;
    *(undefined4 *)((longlong)(param_14->Scale3D).ZW.m128d_f64 + 0xc) = uVar49;
    local_5e0._s_0.X = (param_6->Translation).XY.m128d_f64[0];
    local_5e0._s_0.Y = (param_6->Translation).XY.m128d_f64[1];
    local_5e0._s_0.Z = (param_6->Translation).ZW.m128d_f64[0];
    AnimationCore::SolveTwoBoneIK
              (param_12,param_13,param_14,param_4,(TVector<double> *)&local_5e0._s_0,
               (double)*param_18,(double)*param_19,false,___xmm_3ff0ccccc00000003ff0000000000000,
               _UNK_15219d488);
    dVar5 = (param_6->Rotation).XY.m128d_f64[1];
    dVar6 = (param_6->Rotation).ZW.m128d_f64[0];
    dVar7 = (param_6->Rotation).ZW.m128d_f64[1];
    (param_14->Rotation).XY.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
    (param_14->Rotation).XY.m128d_f64[1] = dVar5;
    (param_14->Rotation).ZW.m128d_f64[0] = dVar6;
    (param_14->Rotation).ZW.m128d_f64[1] = dVar7;
    UE::Math::TTransform<double>::Blend(&local_748,param_8,param_12,param_7);
    UE::Math::TTransform<double>::Blend(&local_6e8,param_9,param_13,param_7);
    UE::Math::TTransform<double>::Blend(&local_688,param_9,param_14,param_7);
    goto LAB_14a5a1097;
  }
  if ((pUVar2 == (URigHierarchy *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("Hierarchy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Deprecated\\RigUnit_TwoBoneIKFK.cpp"
                          ,0x50,L""), bVar34)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = *param_15;
  if (((int)uVar1 < 0) || ((pUVar2->Elements).ArrayNum <= (int)uVar1)) {
LAB_14a5a0714:
    uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar58 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar60 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar61 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar44 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar55 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar54 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar46 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar56 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar51 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar52 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_328.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_328.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_328.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_328.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_328.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_328.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    uVar39 = 0;
    if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
      uVar39 = ~uVar1 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar34)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = *(FRigTransformElement **)
              ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a5a0714;
    lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
    pUVar41 = FRigTransformElement::StaticStruct();
    if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a5a0714;
    iVar35 = (int)pUVar41->_padding_;
    if ((*(int *)(lVar40 + 0x38) < iVar35) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
        &pUVar41->_padding_)) {
      bVar34 = false;
    }
    else {
      bVar34 = true;
    }
    if (!bVar34) goto LAB_14a5a0714;
    URigHierarchy::GetTransform(pUVar2,&local_328,pFVar3,CurrentGlobal);
    uVar43 = local_328.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar45 = local_328.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar47 = local_328.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar49 = local_328.Scale3D.ZW.m128d_f64[1]._4_4_;
    uVar50 = local_328.Translation.ZW.m128d_f64[0]._0_4_;
    uVar51 = local_328.Translation.ZW.m128d_f64[0]._4_4_;
    uVar52 = local_328.Translation.ZW.m128d_f64[1]._0_4_;
    uVar48 = local_328.Translation.ZW.m128d_f64[1]._4_4_;
    uVar55 = local_328.Translation.XY.m128d_f64[0]._0_4_;
    uVar54 = local_328.Translation.XY.m128d_f64[0]._4_4_;
    uVar46 = local_328.Translation.XY.m128d_f64[1]._0_4_;
    uVar56 = local_328.Translation.XY.m128d_f64[1]._4_4_;
    uVar53 = local_328.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar44 = local_328.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar57 = local_328.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar59 = local_328.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar42 = local_328.Rotation.XY.m128d_f64[0]._0_4_;
    uVar58 = local_328.Rotation.XY.m128d_f64[0]._4_4_;
    uVar60 = local_328.Rotation.XY.m128d_f64[1]._0_4_;
    uVar61 = local_328.Rotation.XY.m128d_f64[1]._4_4_;
  }
  *(undefined4 *)(param_12->Rotation).XY.m128d_f64 = uVar42;
  *(undefined4 *)((longlong)(param_12->Rotation).XY.m128d_f64 + 4) = uVar58;
  *(undefined4 *)((param_12->Rotation).XY.m128d_f64 + 1) = uVar60;
  *(undefined4 *)((longlong)(param_12->Rotation).XY.m128d_f64 + 0xc) = uVar61;
  *(undefined4 *)(param_12->Rotation).ZW.m128d_f64 = uVar53;
  *(undefined4 *)((longlong)(param_12->Rotation).ZW.m128d_f64 + 4) = uVar44;
  *(undefined4 *)((param_12->Rotation).ZW.m128d_f64 + 1) = uVar57;
  *(undefined4 *)((longlong)(param_12->Rotation).ZW.m128d_f64 + 0xc) = uVar59;
  *(undefined4 *)(param_12->Translation).XY.m128d_f64 = uVar55;
  *(undefined4 *)((longlong)(param_12->Translation).XY.m128d_f64 + 4) = uVar54;
  *(undefined4 *)((param_12->Translation).XY.m128d_f64 + 1) = uVar46;
  *(undefined4 *)((longlong)(param_12->Translation).XY.m128d_f64 + 0xc) = uVar56;
  *(undefined4 *)(param_12->Translation).ZW.m128d_f64 = uVar50;
  *(undefined4 *)((longlong)(param_12->Translation).ZW.m128d_f64 + 4) = uVar51;
  *(undefined4 *)((param_12->Translation).ZW.m128d_f64 + 1) = uVar52;
  *(undefined4 *)((longlong)(param_12->Translation).ZW.m128d_f64 + 0xc) = uVar48;
  *&(param_12->Scale3D).XY.m128d_f64 = local_328.Scale3D.XY.m128d_f64;
  *(undefined4 *)(param_12->Scale3D).ZW.m128d_f64 = uVar43;
  *(undefined4 *)((longlong)(param_12->Scale3D).ZW.m128d_f64 + 4) = uVar45;
  *(undefined4 *)((param_12->Scale3D).ZW.m128d_f64 + 1) = uVar47;
  *(undefined4 *)((longlong)(param_12->Scale3D).ZW.m128d_f64 + 0xc) = uVar49;
  uVar1 = *param_16;
  if (((int)uVar1 < 0) || ((pUVar2->Elements).ArrayNum <= (int)uVar1)) {
LAB_14a5a087d:
    uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar58 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar60 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar61 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar44 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar55 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar54 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar46 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar56 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar51 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar52 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_2c8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_2c8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_2c8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_2c8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_2c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_2c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    uVar39 = 0;
    if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
      uVar39 = ~uVar1 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar34)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = *(FRigTransformElement **)
              ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a5a087d;
    lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
    pUVar41 = FRigTransformElement::StaticStruct();
    if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a5a087d;
    iVar35 = (int)pUVar41->_padding_;
    if ((*(int *)(lVar40 + 0x38) < iVar35) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
        &pUVar41->_padding_)) {
      bVar34 = false;
    }
    else {
      bVar34 = true;
    }
    if (!bVar34) goto LAB_14a5a087d;
    URigHierarchy::GetTransform(pUVar2,&local_2c8,pFVar3,CurrentGlobal);
    uVar43 = local_2c8.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar45 = local_2c8.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar47 = local_2c8.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar49 = local_2c8.Scale3D.ZW.m128d_f64[1]._4_4_;
    uVar50 = local_2c8.Translation.ZW.m128d_f64[0]._0_4_;
    uVar51 = local_2c8.Translation.ZW.m128d_f64[0]._4_4_;
    uVar52 = local_2c8.Translation.ZW.m128d_f64[1]._0_4_;
    uVar48 = local_2c8.Translation.ZW.m128d_f64[1]._4_4_;
    uVar55 = local_2c8.Translation.XY.m128d_f64[0]._0_4_;
    uVar54 = local_2c8.Translation.XY.m128d_f64[0]._4_4_;
    uVar46 = local_2c8.Translation.XY.m128d_f64[1]._0_4_;
    uVar56 = local_2c8.Translation.XY.m128d_f64[1]._4_4_;
    uVar53 = local_2c8.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar44 = local_2c8.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar57 = local_2c8.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar59 = local_2c8.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar42 = local_2c8.Rotation.XY.m128d_f64[0]._0_4_;
    uVar58 = local_2c8.Rotation.XY.m128d_f64[0]._4_4_;
    uVar60 = local_2c8.Rotation.XY.m128d_f64[1]._0_4_;
    uVar61 = local_2c8.Rotation.XY.m128d_f64[1]._4_4_;
  }
  *(undefined4 *)(param_13->Rotation).XY.m128d_f64 = uVar42;
  *(undefined4 *)((longlong)(param_13->Rotation).XY.m128d_f64 + 4) = uVar58;
  *(undefined4 *)((param_13->Rotation).XY.m128d_f64 + 1) = uVar60;
  *(undefined4 *)((longlong)(param_13->Rotation).XY.m128d_f64 + 0xc) = uVar61;
  *(undefined4 *)(param_13->Rotation).ZW.m128d_f64 = uVar53;
  *(undefined4 *)((longlong)(param_13->Rotation).ZW.m128d_f64 + 4) = uVar44;
  *(undefined4 *)((param_13->Rotation).ZW.m128d_f64 + 1) = uVar57;
  *(undefined4 *)((longlong)(param_13->Rotation).ZW.m128d_f64 + 0xc) = uVar59;
  *(undefined4 *)(param_13->Translation).XY.m128d_f64 = uVar55;
  *(undefined4 *)((longlong)(param_13->Translation).XY.m128d_f64 + 4) = uVar54;
  *(undefined4 *)((param_13->Translation).XY.m128d_f64 + 1) = uVar46;
  *(undefined4 *)((longlong)(param_13->Translation).XY.m128d_f64 + 0xc) = uVar56;
  *(undefined4 *)(param_13->Translation).ZW.m128d_f64 = uVar50;
  *(undefined4 *)((longlong)(param_13->Translation).ZW.m128d_f64 + 4) = uVar51;
  *(undefined4 *)((param_13->Translation).ZW.m128d_f64 + 1) = uVar52;
  *(undefined4 *)((longlong)(param_13->Translation).ZW.m128d_f64 + 0xc) = uVar48;
  *&(param_13->Scale3D).XY.m128d_f64 = local_2c8.Scale3D.XY.m128d_f64;
  *(undefined4 *)(param_13->Scale3D).ZW.m128d_f64 = uVar43;
  *(undefined4 *)((longlong)(param_13->Scale3D).ZW.m128d_f64 + 4) = uVar45;
  *(undefined4 *)((param_13->Scale3D).ZW.m128d_f64 + 1) = uVar47;
  *(undefined4 *)((longlong)(param_13->Scale3D).ZW.m128d_f64 + 0xc) = uVar49;
  uVar1 = *param_17;
  if (((int)uVar1 < 0) || ((pUVar2->Elements).ArrayNum <= (int)uVar1)) {
LAB_14a5a09e0:
    uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar58 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar60 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar61 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar44 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar55 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar54 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar46 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar56 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar50 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar51 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar52 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar47 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_268.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_268.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_268.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_268.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_268.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_268.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    uVar39 = 0;
    if ((int)uVar1 < (pUVar2->Elements).ArrayNum) {
      uVar39 = ~uVar1 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar34)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = *(FRigTransformElement **)
              ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if (pFVar3 == (FRigTransformElement *)0x0) goto LAB_14a5a09e0;
    lVar40 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
    pUVar41 = FRigTransformElement::StaticStruct();
    if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a5a09e0;
    iVar35 = (int)pUVar41->_padding_;
    if ((*(int *)(lVar40 + 0x38) < iVar35) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
        &pUVar41->_padding_)) {
      bVar34 = false;
    }
    else {
      bVar34 = true;
    }
    if (!bVar34) goto LAB_14a5a09e0;
    URigHierarchy::GetTransform(pUVar2,&local_268,pFVar3,CurrentGlobal);
    uVar43 = local_268.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar45 = local_268.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar47 = local_268.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar49 = local_268.Scale3D.ZW.m128d_f64[1]._4_4_;
    uVar50 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
    uVar51 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
    uVar52 = local_268.Translation.ZW.m128d_f64[1]._0_4_;
    uVar48 = local_268.Translation.ZW.m128d_f64[1]._4_4_;
    uVar55 = local_268.Translation.XY.m128d_f64[0]._0_4_;
    uVar54 = local_268.Translation.XY.m128d_f64[0]._4_4_;
    uVar46 = local_268.Translation.XY.m128d_f64[1]._0_4_;
    uVar56 = local_268.Translation.XY.m128d_f64[1]._4_4_;
    uVar53 = local_268.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar44 = local_268.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar57 = local_268.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar59 = local_268.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar42 = local_268.Rotation.XY.m128d_f64[0]._0_4_;
    uVar58 = local_268.Rotation.XY.m128d_f64[0]._4_4_;
    uVar60 = local_268.Rotation.XY.m128d_f64[1]._0_4_;
    uVar61 = local_268.Rotation.XY.m128d_f64[1]._4_4_;
  }
  *(undefined4 *)(param_14->Rotation).XY.m128d_f64 = uVar42;
  *(undefined4 *)((longlong)(param_14->Rotation).XY.m128d_f64 + 4) = uVar58;
  *(undefined4 *)((param_14->Rotation).XY.m128d_f64 + 1) = uVar60;
  *(undefined4 *)((longlong)(param_14->Rotation).XY.m128d_f64 + 0xc) = uVar61;
  *(undefined4 *)(param_14->Rotation).ZW.m128d_f64 = uVar53;
  *(undefined4 *)((longlong)(param_14->Rotation).ZW.m128d_f64 + 4) = uVar44;
  *(undefined4 *)((param_14->Rotation).ZW.m128d_f64 + 1) = uVar57;
  *(undefined4 *)((longlong)(param_14->Rotation).ZW.m128d_f64 + 0xc) = uVar59;
  *(undefined4 *)(param_14->Translation).XY.m128d_f64 = uVar55;
  *(undefined4 *)((longlong)(param_14->Translation).XY.m128d_f64 + 4) = uVar54;
  *(undefined4 *)((param_14->Translation).XY.m128d_f64 + 1) = uVar46;
  *(undefined4 *)((longlong)(param_14->Translation).XY.m128d_f64 + 0xc) = uVar56;
  *(undefined4 *)(param_14->Translation).ZW.m128d_f64 = uVar50;
  *(undefined4 *)((longlong)(param_14->Translation).ZW.m128d_f64 + 4) = uVar51;
  *(undefined4 *)((param_14->Translation).ZW.m128d_f64 + 1) = uVar52;
  *(undefined4 *)((longlong)(param_14->Translation).ZW.m128d_f64 + 0xc) = uVar48;
  *&(param_14->Scale3D).XY.m128d_f64 = local_268.Scale3D.XY.m128d_f64;
  *(undefined4 *)(param_14->Scale3D).ZW.m128d_f64 = uVar43;
  *(undefined4 *)((longlong)(param_14->Scale3D).ZW.m128d_f64 + 4) = uVar45;
  *(undefined4 *)((param_14->Scale3D).ZW.m128d_f64 + 1) = uVar47;
  *(undefined4 *)((longlong)(param_14->Scale3D).ZW.m128d_f64 + 0xc) = uVar49;
  local_5f8._s_0.X = (param_6->Translation).XY.m128d_f64[0];
  local_5f8._s_0.Y = (param_6->Translation).XY.m128d_f64[1];
  local_5f8._s_0.Z = (param_6->Translation).ZW.m128d_f64[0];
  AnimationCore::SolveTwoBoneIK
            (param_12,param_13,param_14,param_4,(TVector<double> *)&local_5f8._s_0,(double)*param_18
             ,(double)*param_19,false,___xmm_3ff0ccccc00000003ff0000000000000,_UNK_15219d488);
  dVar5 = (param_6->Rotation).XY.m128d_f64[1];
  dVar6 = (param_6->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_6->Rotation).ZW.m128d_f64[1];
  (param_14->Rotation).XY.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
  (param_14->Rotation).XY.m128d_f64[1] = dVar5;
  (param_14->Rotation).ZW.m128d_f64[0] = dVar6;
  (param_14->Rotation).ZW.m128d_f64[1] = dVar7;
  local_748.Rotation.XY.m128d_f64 = *&(param_12->Rotation).XY.m128d_f64;
  local_748.Rotation.ZW.m128d_f64 = *&(param_12->Rotation).ZW.m128d_f64;
  local_748.Translation.XY.m128d_f64 = *&(param_12->Translation).XY.m128d_f64;
  local_748.Translation.ZW.m128d_f64 = *&(param_12->Translation).ZW.m128d_f64;
  local_748.Scale3D.XY.m128d_f64 = *&(param_12->Scale3D).XY.m128d_f64;
  local_748.Scale3D.ZW.m128d_f64[0] = (param_12->Scale3D).ZW.m128d_f64[0];
  local_748.Scale3D.ZW.m128d_f64[1] = (param_12->Scale3D).ZW.m128d_f64[1];
  local_6e8.Rotation.XY.m128d_f64 = *&(param_13->Rotation).XY.m128d_f64;
  local_6e8.Rotation.ZW.m128d_f64 = *&(param_13->Rotation).ZW.m128d_f64;
  local_6e8.Translation.XY.m128d_f64 = *&(param_13->Translation).XY.m128d_f64;
  local_6e8.Translation.ZW.m128d_f64 = *&(param_13->Translation).ZW.m128d_f64;
  local_6e8.Scale3D.XY.m128d_f64 = *&(param_13->Scale3D).XY.m128d_f64;
  local_6e8.Scale3D.ZW.m128d_f64[0] = (param_13->Scale3D).ZW.m128d_f64[0];
  local_6e8.Scale3D.ZW.m128d_f64[1] = (param_13->Scale3D).ZW.m128d_f64[1];
  local_688.Rotation.XY.m128d_f64 = *&(param_14->Rotation).XY.m128d_f64;
  local_688.Rotation.ZW.m128d_f64 = *&(param_14->Rotation).ZW.m128d_f64;
  local_688.Translation.XY.m128d_f64 = *&(param_14->Translation).XY.m128d_f64;
  local_688.Translation.ZW.m128d_f64 = *&(param_14->Translation).ZW.m128d_f64;
  local_688.Scale3D.XY.m128d_f64 = *&(param_14->Scale3D).XY.m128d_f64;
  local_688.Scale3D.ZW.m128d_f64[0] = (param_14->Scale3D).ZW.m128d_f64[0];
  local_688.Scale3D.ZW.m128d_f64[1] = (param_14->Scale3D).ZW.m128d_f64[1];
LAB_14a5a1097:
  pUVar2 = param_1->Hierarchy;
  if ((pUVar2 == (URigHierarchy *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("Hierarchy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Deprecated\\RigUnit_TwoBoneIKFK.cpp"
                          ,0x70,L""), bVar34)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_568.Rotation.XY.m128d_f64[0] = local_748.Rotation.XY.m128d_f64[0];
  local_568.Rotation.XY.m128d_f64[1] = local_748.Rotation.XY.m128d_f64[1];
  local_568.Rotation.ZW.m128d_f64[0] = local_748.Rotation.ZW.m128d_f64[0];
  local_568.Rotation.ZW.m128d_f64[1] = local_748.Rotation.ZW.m128d_f64[1];
  local_568.Translation.XY.m128d_f64[0] = local_748.Translation.XY.m128d_f64[0];
  local_568.Translation.XY.m128d_f64[1] = local_748.Translation.XY.m128d_f64[1];
  local_568.Translation.ZW.m128d_f64[0] = local_748.Translation.ZW.m128d_f64[0];
  local_568.Translation.ZW.m128d_f64[1] = local_748.Translation.ZW.m128d_f64[1];
  local_568.Scale3D.XY.m128d_f64[0] = local_748.Scale3D.XY.m128d_f64[0];
  local_568.Scale3D.XY.m128d_f64[1] = local_748.Scale3D.XY.m128d_f64[1];
  local_568.Scale3D.ZW.m128d_f64[0] = local_748.Scale3D.ZW.m128d_f64[0];
  local_568.Scale3D.ZW.m128d_f64[1] = local_748.Scale3D.ZW.m128d_f64[1];
  URigHierarchy::SetGlobalTransformByIndex(pUVar2,*param_15,&local_568,false,true,false,false);
  local_508.Rotation.XY.m128d_f64[0] = local_6e8.Rotation.XY.m128d_f64[0];
  local_508.Rotation.XY.m128d_f64[1] = local_6e8.Rotation.XY.m128d_f64[1];
  local_508.Rotation.ZW.m128d_f64[0] = local_6e8.Rotation.ZW.m128d_f64[0];
  local_508.Rotation.ZW.m128d_f64[1] = local_6e8.Rotation.ZW.m128d_f64[1];
  local_508.Translation.XY.m128d_f64[0] = local_6e8.Translation.XY.m128d_f64[0];
  local_508.Translation.XY.m128d_f64[1] = local_6e8.Translation.XY.m128d_f64[1];
  local_508.Translation.ZW.m128d_f64[0] = local_6e8.Translation.ZW.m128d_f64[0];
  local_508.Translation.ZW.m128d_f64[1] = local_6e8.Translation.ZW.m128d_f64[1];
  local_508.Scale3D.XY.m128d_f64[0] = local_6e8.Scale3D.XY.m128d_f64[0];
  local_508.Scale3D.XY.m128d_f64[1] = local_6e8.Scale3D.XY.m128d_f64[1];
  local_508.Scale3D.ZW.m128d_f64[0] = local_6e8.Scale3D.ZW.m128d_f64[0];
  local_508.Scale3D.ZW.m128d_f64[1] = local_6e8.Scale3D.ZW.m128d_f64[1];
  URigHierarchy::SetGlobalTransformByIndex(pUVar2,*param_16,&local_508,false,true,false,false);
  local_4a8.Rotation.XY.m128d_f64[0] = local_688.Rotation.XY.m128d_f64[0];
  local_4a8.Rotation.XY.m128d_f64[1] = local_688.Rotation.XY.m128d_f64[1];
  local_4a8.Rotation.ZW.m128d_f64[0] = local_688.Rotation.ZW.m128d_f64[0];
  local_4a8.Rotation.ZW.m128d_f64[1] = local_688.Rotation.ZW.m128d_f64[1];
  local_4a8.Translation.XY.m128d_f64[0] = local_688.Translation.XY.m128d_f64[0];
  local_4a8.Translation.XY.m128d_f64[1] = local_688.Translation.XY.m128d_f64[1];
  local_4a8.Translation.ZW.m128d_f64[0] = local_688.Translation.ZW.m128d_f64[0];
  local_4a8.Translation.ZW.m128d_f64[1] = local_688.Translation.ZW.m128d_f64[1];
  local_4a8.Scale3D.XY.m128d_f64[0] = local_688.Scale3D.XY.m128d_f64[0];
  local_4a8.Scale3D.XY.m128d_f64[1] = local_688.Scale3D.XY.m128d_f64[1];
  local_4a8.Scale3D.ZW.m128d_f64[0] = local_688.Scale3D.ZW.m128d_f64[0];
  local_4a8.Scale3D.ZW.m128d_f64[1] = local_688.Scale3D.ZW.m128d_f64[1];
  URigHierarchy::SetGlobalTransformByIndex(pUVar2,*param_17,&local_4a8,false,true,false,false);
  *local_620 = param_7;
  return;
}

