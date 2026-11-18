// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4c99f0

UScriptStruct * __cdecl FRigUnit_ApplyFK::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ApplyFK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ApplyFK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ApplyFK,(UObject *)pUVar1,
                         L"RigUnit_ApplyFK");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ApplyFK.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ApplyFK.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c9a70

UScriptStruct * __thiscall FRigUnit_ApplyFK::GetExecuteContextStruct(FRigUnit_ApplyFK *this)

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

// Execute @ 14a4c9fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ApplyFK::Execute(FRigUnit_ApplyFK *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Joint,&this->Transform,&this->Filter,
                this->ApplyTransformMode,this->ApplyTransformSpace,&this->BaseTransform,
                &this->BaseJoint);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ca1a0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ApplyFK::GetUpgradeInfo
          (FRigUnit_ApplyFK *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_ApplyFK @ 14a50c240

FRigUnit_ApplyFK * __thiscall FRigUnit_ApplyFK::FRigUnit_ApplyFK(FRigUnit_ApplyFK *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined ***)this = &___7FRigUnit_ApplyFK__6B_;
  (this->Joint).ComparisonIndex = 0;
  (this->Joint).Number = 0;
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
  this->ApplyTransformSpace = LocalSpace;
  (this->Filter).TranslationFilter.bX = true;
  (this->Filter).TranslationFilter.bY = true;
  (this->Filter).TranslationFilter.bZ = true;
  (this->Filter).RotationFilter.bX = true;
  *(undefined4 *)&(this->Filter).RotationFilter.bY = 0x1010101;
  *(undefined2 *)&(this->Filter).ScaleFilter.bZ = 1;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->BaseTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->BaseTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->BaseTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->BaseTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->BaseTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->BaseTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->BaseTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->BaseTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->BaseJoint).ComparisonIndex = 0;
  (this->BaseJoint).Number = 0;
  return this;
}

// Execute @ 14a524820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ApplyFK::Execute(FRigUnit_ApplyFK *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Joint,&this->Transform,&this->Filter,this->ApplyTransformMode,
                this->ApplyTransformSpace,&this->BaseTransform,&this->BaseJoint);
  return;
}

// RigVMExecute @ 14a5357e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ApplyFK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EApplyTransformMode EVar1;
  ETransformSpaceMode EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  TTransform<double> *pTVar7;
  FTransformFilter *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  EApplyTransformMode *pEVar10;
  ETransformSpaceMode *pEVar11;
  TTransform<double> *pTVar12;
  FName *pFVar13;
  FControlRigExecuteContext *pFVar14;
  
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
    pTVar7 = (TTransform<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
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
    pFVar8 = (FTransformFilter *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FTransformFilter *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar1 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pEVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar2 = *pEVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,pFVar6,pTVar7,pFVar8,EVar1,EVar2,pTVar12,pFVar13);
  return;
}

// StaticExecute @ 14a561720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ApplyFK::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,TTransform<double> *param_3,
          FTransformFilter *param_4,EApplyTransformMode param_5,ETransformSpaceMode param_6,
          TTransform<double> *param_7,FName *param_8)

{
  double dVar1;
  undefined8 uVar2;
  URigHierarchy *this;
  int iVar3;
  uint uVar4;
  int iVar5;
  TRotator<double> *pTVar6;
  TQuat<double> *pTVar7;
  FRigElementKey *pFVar8;
  TTransform<double> *pTVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStackY_2d8 [32];
  TRotator<double> local_298;
  FRigElementKey local_280 [2];
  TQuat<double> local_268;
  undefined4 local_248;
  FNameEntryId FStack_244;
  uint uStack_240;
  TQuat<double> local_238;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  local_280[0].Name.ComparisonIndex = (*param_2).ComparisonIndex;
  local_280[0].Name.Number = (*param_2).Number;
  local_280[0].Type = Bone;
  iVar3 = URigHierarchy::GetIndex(this,local_280,true);
  if (iVar3 == -1) {
    return;
  }
  local_f8.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  local_f8.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
  local_238.X = (param_3->Rotation).XY.m128d_f64[0];
  local_238.Y = (param_3->Rotation).XY.m128d_f64[1];
  local_238.Z = (param_3->Rotation).ZW.m128d_f64[0];
  local_238.W = (param_3->Rotation).ZW.m128d_f64[1];
  local_298.Pitch = (param_3->Translation).XY.m128d_f64[0];
  local_298.Yaw = (param_3->Translation).XY.m128d_f64[1];
  local_f8.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  local_f8.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
  dVar1 = (param_3->Translation).ZW.m128d_f64[0];
  uVar10 = SUB84(dVar1,0);
  uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if ((param_4->TranslationFilter).bX == false) {
    local_298.Pitch = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  if ((param_4->TranslationFilter).bY == false) {
    local_298.Yaw = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  if ((param_4->TranslationFilter).bZ == false) {
    uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar11 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    local_298.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  local_f8.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar11,uVar10);
  local_f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_f8.Translation.XY.m128d_f64[0] = local_298.Pitch;
  local_f8.Translation.XY.m128d_f64[1] = local_298.Yaw;
  local_f8.Rotation.XY.m128d_f64[0] = local_238.X;
  local_f8.Rotation.XY.m128d_f64[1] = local_238.Y;
  local_f8.Rotation.ZW.m128d_f64[0] = local_238.Z;
  local_f8.Rotation.ZW.m128d_f64[1] = local_238.W;
  UE::Math::TQuat<double>::Rotator(&local_238,&local_298);
  pTVar6 = UE::Math::TQuat<double>::Rotator
                     (&UE::Math::TQuat<double>::Identity,(TRotator<double> *)&local_268);
  if ((param_4->RotationFilter).bX == false) {
    local_298.Roll = pTVar6->Roll;
  }
  if ((param_4->RotationFilter).bY == false) {
    local_298.Pitch = pTVar6->Pitch;
  }
  if ((param_4->RotationFilter).bZ == false) {
    local_298.Yaw = pTVar6->Yaw;
  }
  pTVar7 = UE::Math::TRotator<double>::Quaternion(&local_298,&local_268);
  local_238.X = pTVar7->X;
  local_238.Y = pTVar7->Y;
  local_f8.Rotation.ZW.m128d_f64[0] = pTVar7->Z;
  local_f8.Rotation.ZW.m128d_f64[1] = pTVar7->W;
  uVar10 = SUB84(local_f8.Scale3D.ZW.m128d_f64[0],0);
  uVar11 = (undefined4)((ulonglong)local_f8.Scale3D.ZW.m128d_f64[0] >> 0x20);
  local_298.Pitch = local_f8.Scale3D.XY.m128d_f64[0];
  local_298.Yaw = local_f8.Scale3D.XY.m128d_f64[1];
  if ((param_4->ScaleFilter).bX == false) {
    local_298.Pitch = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  }
  if ((param_4->ScaleFilter).bY == false) {
    local_298.Yaw = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  }
  if ((param_4->ScaleFilter).bZ == false) {
    uVar10 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    uVar11 = (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20)
    ;
    local_298.Roll = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  }
  local_248 = CONCAT31(local_248._1_3_,1);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uVar11,uVar10);
  local_f8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_f8.Scale3D.XY.m128d_f64[0] = local_298.Pitch;
  local_f8.Scale3D.XY.m128d_f64[1] = local_298.Yaw;
  local_268.X = (double)CONCAT44(local_280[0].Name.ComparisonIndex.Value,local_280[0]._0_4_);
  FStack_244 = (*param_8).ComparisonIndex;
  uStack_240 = (*param_8).Number;
  local_268.Y._0_4_ = local_280[0].Name.Number;
  local_f8.Rotation.XY.m128d_f64[0] = local_238.X;
  local_f8.Rotation.XY.m128d_f64[1] = local_238.Y;
  pFVar8 = URigHierarchy::GetFirstParent
                     (this,(FRigElementKey *)&local_298,(FRigElementKey *)&local_268);
  if (param_6 == LocalSpace) {
    uVar2._0_1_ = pFVar8->Type;
    uVar2._1_3_ = *(undefined3 *)&pFVar8->field_0x1;
    uVar2._4_4_ = (pFVar8->Name).ComparisonIndex.Value;
    uVar10 = (int)uVar2;
    uVar4 = (pFVar8->Name).Number;
LAB_14a5619e8:
    local_268.X = (double)CONCAT44(uVar2._4_4_,uVar10);
    local_268.Y._0_4_ = uVar4;
    iVar5 = URigHierarchy::GetIndex(this,(FRigElementKey *)&local_268,true);
    URigHierarchy::GetGlobalTransformByIndex(this,&local_1b8,iVar5,false);
  }
  else {
    if (param_6 != GlobalSpace) {
      if (param_6 == BaseSpace) {
        local_1b8.Rotation.XY.m128d_f64 = *&(param_7->Rotation).XY.m128d_f64;
        local_1b8.Rotation.ZW.m128d_f64 = *&(param_7->Rotation).ZW.m128d_f64;
        local_1b8.Translation.XY.m128d_f64 = *&(param_7->Translation).XY.m128d_f64;
        local_1b8.Translation.ZW.m128d_f64 = *&(param_7->Translation).ZW.m128d_f64;
        local_1b8.Scale3D.XY.m128d_f64 = *&(param_7->Scale3D).XY.m128d_f64;
        local_1b8.Scale3D.ZW.m128d_f64 = *&(param_7->Scale3D).ZW.m128d_f64;
        goto LAB_14a561a14;
      }
      uVar10 = local_248;
      uVar2._4_4_ = FStack_244.Value;
      uVar4 = uStack_240;
      if (param_6 == BaseJoint) goto LAB_14a5619e8;
    }
    local_1b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1b8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_1b8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_1b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
LAB_14a561a14:
  if (param_5 == Override) {
    local_218.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_218.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_218.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_218.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_218.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_218.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_218,&local_f8,&local_1b8);
    local_158.Rotation.XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
    local_158.Rotation.XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
    local_158.Rotation.ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
    local_158.Rotation.ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
    local_158.Translation.XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
    local_158.Translation.XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
    local_158.Translation.ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
    local_158.Translation.ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
    local_158.Scale3D.XY.m128d_f64[0] = local_218.Scale3D.XY.m128d_f64[0];
    local_158.Scale3D.XY.m128d_f64[1] = local_218.Scale3D.XY.m128d_f64[1];
    local_158.Scale3D.ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
    local_158.Scale3D.ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
    URigHierarchy::SetGlobalTransformByIndex(this,iVar3,&local_158,false,true,false,false);
  }
  else {
    URigHierarchy::GetGlobalTransformByIndex(this,&local_98,iVar3,false);
    pTVar9 = UE::Math::TTransform<double>::GetRelativeTransform(&local_98,&local_158,&local_1b8);
    local_218.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_218.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_218.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_218.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_218.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_218.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_218,&local_f8,pTVar9);
    local_158.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_158.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_158.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_158.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_158.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_158.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_158,&local_218,&local_1b8);
    URigHierarchy::SetGlobalTransform(this,iVar3,&local_158,true,false);
  }
  return;
}

