// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 19

// StaticStruct @ 14a4f6580

UScriptStruct * __cdecl FRigUnit_Control::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_Control.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_Control.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Control,(UObject *)pUVar1,
                         L"RigUnit_Control");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_Control_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_Control.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_Control.OuterSingleton;
}

// FRigUnit_Control @ 14a50d540

FRigUnit_Control * __thiscall FRigUnit_Control::FRigUnit_Control(FRigUnit_Control *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  
  this->_padding_ = (longlong)&___7FRigUnit_Control__6B_;
  uVar9 = FEulerTransform::Identity.Location.field0_0x0._s_0.Y;
  (this->Transform).Location.field0_0x0._s_0.X =
       FEulerTransform::Identity.Location.field0_0x0._s_0.X;
  (this->Transform).Location.field0_0x0._s_0.Y = (double)uVar9;
  dVar10 = FEulerTransform::Identity.Rotation.Pitch;
  (this->Transform).Location.field0_0x0._s_0.Z =
       FEulerTransform::Identity.Location.field0_0x0._s_0.Z;
  (this->Transform).Rotation.Pitch = dVar10;
  dVar10 = FEulerTransform::Identity.Rotation.Roll;
  (this->Transform).Rotation.Yaw = FEulerTransform::Identity.Rotation.Yaw;
  (this->Transform).Rotation.Roll = dVar10;
  uVar9 = FEulerTransform::Identity.Scale.field0_0x0._s_0.Y;
  (this->Transform).Scale.field0_0x0._s_0.X = FEulerTransform::Identity.Scale.field0_0x0._s_0.X;
  (this->Transform).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->Transform).Scale.field0_0x0._s_0.Z = FEulerTransform::Identity.Scale.field0_0x0._s_0.Z;
  *&(this->Base).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Base).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Base).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Base).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Base).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Base).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitTransform).Scale3D.ZW.m128d_f64 = auVar8;
  *&(this->Result).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Result).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Result).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Result).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Result).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Result).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Filter).TranslationFilter.bX = true;
  (this->Filter).TranslationFilter.bY = true;
  (this->Filter).TranslationFilter.bZ = true;
  (this->Filter).RotationFilter.bX = true;
  *(undefined4 *)&(this->Filter).RotationFilter.bY = 0x1010101;
  *(undefined2 *)&(this->Filter).ScaleFilter.bZ = 1;
  return this;
}

// operator= @ 14a51a140

FRigUnit_Control * __thiscall
FRigUnit_Control::operator=(FRigUnit_Control *this,FRigUnit_Control *param_1)

{
  double dVar1;
  FFilterOptionPerAxis FVar2;
  bool bVar3;
  bool bVar4;
  
  dVar1 = (param_1->Transform).Location.field0_0x0._s_0.Y;
  (this->Transform).Location.field0_0x0._s_0.X = (param_1->Transform).Location.field0_0x0._s_0.X;
  (this->Transform).Location.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Transform).Rotation.Pitch;
  (this->Transform).Location.field0_0x0._s_0.Z = (param_1->Transform).Location.field0_0x0._s_0.Z;
  (this->Transform).Rotation.Pitch = dVar1;
  dVar1 = (param_1->Transform).Rotation.Roll;
  (this->Transform).Rotation.Yaw = (param_1->Transform).Rotation.Yaw;
  (this->Transform).Rotation.Roll = dVar1;
  dVar1 = (param_1->Transform).Scale.field0_0x0._s_0.Y;
  (this->Transform).Scale.field0_0x0._s_0.X = (param_1->Transform).Scale.field0_0x0._s_0.X;
  (this->Transform).Scale.field0_0x0._s_0.Y = dVar1;
  (this->Transform).Scale.field0_0x0._s_0.Z = (param_1->Transform).Scale.field0_0x0._s_0.Z;
  dVar1 = (param_1->Base).Rotation.XY.m128d_f64[1];
  (this->Base).Rotation.XY.m128d_f64[0] = (param_1->Base).Rotation.XY.m128d_f64[0];
  (this->Base).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Base).Rotation.ZW.m128d_f64[1];
  (this->Base).Rotation.ZW.m128d_f64[0] = (param_1->Base).Rotation.ZW.m128d_f64[0];
  (this->Base).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Base).Translation.XY.m128d_f64[1];
  (this->Base).Translation.XY.m128d_f64[0] = (param_1->Base).Translation.XY.m128d_f64[0];
  (this->Base).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Base).Translation.ZW.m128d_f64[1];
  (this->Base).Translation.ZW.m128d_f64[0] = (param_1->Base).Translation.ZW.m128d_f64[0];
  (this->Base).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Base).Scale3D.XY.m128d_f64[1];
  (this->Base).Scale3D.XY.m128d_f64[0] = (param_1->Base).Scale3D.XY.m128d_f64[0];
  (this->Base).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Base).Scale3D.ZW.m128d_f64[1];
  (this->Base).Scale3D.ZW.m128d_f64[0] = (param_1->Base).Scale3D.ZW.m128d_f64[0];
  (this->Base).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->InitTransform).Rotation.XY.m128d_f64[1];
  (this->InitTransform).Rotation.XY.m128d_f64[0] = (param_1->InitTransform).Rotation.XY.m128d_f64[0]
  ;
  (this->InitTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->InitTransform).Rotation.ZW.m128d_f64[1];
  (this->InitTransform).Rotation.ZW.m128d_f64[0] = (param_1->InitTransform).Rotation.ZW.m128d_f64[0]
  ;
  (this->InitTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->InitTransform).Translation.XY.m128d_f64[1];
  (this->InitTransform).Translation.XY.m128d_f64[0] =
       (param_1->InitTransform).Translation.XY.m128d_f64[0];
  (this->InitTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->InitTransform).Translation.ZW.m128d_f64[1];
  (this->InitTransform).Translation.ZW.m128d_f64[0] =
       (param_1->InitTransform).Translation.ZW.m128d_f64[0];
  (this->InitTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->InitTransform).Scale3D.XY.m128d_f64[1];
  (this->InitTransform).Scale3D.XY.m128d_f64[0] = (param_1->InitTransform).Scale3D.XY.m128d_f64[0];
  (this->InitTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->InitTransform).Scale3D.ZW.m128d_f64[1];
  (this->InitTransform).Scale3D.ZW.m128d_f64[0] = (param_1->InitTransform).Scale3D.ZW.m128d_f64[0];
  (this->InitTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Result).Rotation.XY.m128d_f64[1];
  (this->Result).Rotation.XY.m128d_f64[0] = (param_1->Result).Rotation.XY.m128d_f64[0];
  (this->Result).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Result).Rotation.ZW.m128d_f64[1];
  (this->Result).Rotation.ZW.m128d_f64[0] = (param_1->Result).Rotation.ZW.m128d_f64[0];
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Result).Translation.XY.m128d_f64[1];
  (this->Result).Translation.XY.m128d_f64[0] = (param_1->Result).Translation.XY.m128d_f64[0];
  (this->Result).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Result).Translation.ZW.m128d_f64[1];
  (this->Result).Translation.ZW.m128d_f64[0] = (param_1->Result).Translation.ZW.m128d_f64[0];
  (this->Result).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Result).Scale3D.XY.m128d_f64[1];
  (this->Result).Scale3D.XY.m128d_f64[0] = (param_1->Result).Scale3D.XY.m128d_f64[0];
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Result).Scale3D.ZW.m128d_f64[1];
  (this->Result).Scale3D.ZW.m128d_f64[0] = (param_1->Result).Scale3D.ZW.m128d_f64[0];
  (this->Result).Scale3D.ZW.m128d_f64[1] = dVar1;
  FVar2 = (param_1->Filter).RotationFilter;
  bVar3 = (param_1->Filter).ScaleFilter.bX;
  bVar4 = (param_1->Filter).ScaleFilter.bY;
  (this->Filter).TranslationFilter = (param_1->Filter).TranslationFilter;
  (this->Filter).RotationFilter = FVar2;
  (this->Filter).ScaleFilter.bX = bVar3;
  (this->Filter).ScaleFilter.bY = bVar4;
  (this->Filter).ScaleFilter.bZ = (param_1->Filter).ScaleFilter.bZ;
  this->bIsInitialized = param_1->bIsInitialized;
  return this;
}

// Execute @ 14a525d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_Control::Execute(FRigUnit_Control *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Transform,&this->Base,&this->InitTransform,&this->Result,
                &this->Filter,&this->bIsInitialized);
  return;
}

// Execute @ 14a525d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_Control::Execute(FRigUnit_Control *this)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_2e8 [32];
  TTransform<double> local_2c8;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2e8;
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
  if (this->bIsInitialized == false) {
    FEulerTransform::FromFTransform(&this->Transform,&this->InitTransform);
    this->bIsInitialized = true;
  }
  pTVar2 = StaticGetResultantTransform(&local_2c8,&this->Transform,&this->Base,&this->Filter);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (this->Result).Rotation.XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (this->Result).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (this->Result).Rotation.ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (this->Result).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (this->Result).Translation.XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (this->Result).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (this->Result).Translation.ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (this->Result).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (this->Result).Scale3D.XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (this->Result).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (this->Result).Scale3D.ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (this->Result).Scale3D.ZW.m128d_f64[1] = dVar1;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530ae0

UScriptStruct * __thiscall FRigUnit_Control::GetExecuteContextStruct(FRigUnit_Control *this)

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

// GetFilteredTransform @ 14a531360

FEulerTransform * __thiscall
FRigUnit_Control::GetFilteredTransform
          (FRigUnit_Control *this,FEulerTransform *__return_storage_ptr__)

{
  StaticGetFilteredTransform(__return_storage_ptr__,&this->Transform,&this->Filter);
  return __return_storage_ptr__;
}

// GetResultantMatrix @ 14a5315d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
FRigUnit_Control::GetResultantMatrix(FRigUnit_Control *this,TMatrix<double> *__return_storage_ptr__)

{
  TScaleRotationTranslationMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_188 [32];
  FEulerTransform local_168;
  TScaleRotationTranslationMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  StaticGetFilteredTransform(&local_168,&this->Transform,&this->Filter);
  pTVar1 = UE::Math::TScaleRotationTranslationMatrix<double>::
           TScaleRotationTranslationMatrix<double>
                     (&local_118,&local_168.Scale,&local_168.Rotation,&local_168.Location);
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Base,&local_98);
  VectorMatrixMultiply(__return_storage_ptr__,(TMatrix<double> *)pTVar1,pTVar2);
  return __return_storage_ptr__;
}

// GetResultantTransform @ 14a531680

TTransform<double> * __thiscall
FRigUnit_Control::GetResultantTransform
          (FRigUnit_Control *this,TTransform<double> *__return_storage_ptr__)

{
  StaticGetResultantTransform(__return_storage_ptr__,&this->Transform,&this->Base,&this->Filter);
  return __return_storage_ptr__;
}

// GetUpgradeInfo @ 14a531bf0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_Control::GetUpgradeInfo
          (FRigUnit_Control *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RigVMExecute @ 14a539270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_Control::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TTransform<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FRigVMSlice *pFVar5;
  FEulerTransform *pFVar6;
  TTransform<double> *pTVar7;
  TTransform<double> *pTVar8;
  FRigVMMemoryHandle *pFVar9;
  FTransformFilter *pFVar10;
  bool *pbVar11;
  FControlRigExecuteContext *pFVar12;
  
  if (param_2->ArrayNum < 1) {
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
  pFVar5 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar6 = (FEulerTransform *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr,false,pFVar5->Offset + pFVar5->Index);
  iVar1 = param_2->ArrayNum;
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TTransform<double> *)pFVar9[1].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  if (iVar1 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TTransform<double> *)pFVar9[2].Ptr;
  }
  else {
    pTVar8 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  if (iVar1 < 4) {
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
  pTVar2 = (TTransform<double> *)param_2->DataPtr[3].Ptr;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = (FTransformFilter *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar5 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar11 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar9,false,pFVar5->Offset + pFVar5->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar6,pTVar7,pTVar8,pTVar2,pFVar10,pbVar11);
  return;
}

// SetResultantMatrix @ 14a55d000

void __thiscall
FRigUnit_Control::SetResultantMatrix(FRigUnit_Control *this,TMatrix<double> *param_1)

{
  StaticSetResultantMatrix(param_1,&this->Base,&this->Transform);
  return;
}

// SetResultantTransform @ 14a55d020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigUnit_Control::SetResultantTransform(FRigUnit_Control *this,TTransform<double> *param_1)

{
  TTransform<double> *pTVar1;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar1 = UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_78,&this->Base);
  FEulerTransform::FromFTransform(&this->Transform,pTVar1);
  return;
}

// StaticExecute @ 14a569de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_Control::StaticExecute
          (FControlRigExecuteContext *param_1,FEulerTransform *param_2,TTransform<double> *param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,FTransformFilter *param_6,
          bool *param_7)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_b8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (*param_7 == false) {
    FEulerTransform::FromFTransform(param_2,param_4);
    *param_7 = true;
  }
  pTVar2 = StaticGetResultantTransform(&local_98,param_2,param_3,param_6);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_5->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_5->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_5->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_5->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_5->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_5->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_5->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_5->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_5->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_5->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_5->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_5->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

// StaticGetFilteredTransform @ 14a5a2d20

FEulerTransform * __cdecl
FRigUnit_Control::StaticGetFilteredTransform
          (FEulerTransform *__return_storage_ptr__,FEulerTransform *param_1,
          FTransformFilter *param_2)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  double local_28;
  double dStack_20;
  
  bVar2 = (param_2->TranslationFilter).bX;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  dVar3 = (param_1->Location).field0_0x0._s_0.Z;
  dVar4 = (param_1->Rotation).Pitch;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Yaw;
  dVar5 = (param_1->Rotation).Roll;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->Rotation).Pitch = dVar4;
  dVar3 = (param_1->Scale).field0_0x0._s_0.X;
  dVar4 = (param_1->Scale).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Rotation).Yaw = dVar1;
  (__return_storage_ptr__->Rotation).Roll = dVar5;
  dVar1 = (param_1->Scale).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = dVar1;
  local_28 = (__return_storage_ptr__->Location).field0_0x0._s_0.X;
  dStack_20 = (__return_storage_ptr__->Location).field0_0x0._s_0.Y;
  if (bVar2 == false) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  if ((param_2->TranslationFilter).bY == false) {
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  uVar8 = (__return_storage_ptr__->Location).field0_0x0._s_0.Z;
  if ((param_2->TranslationFilter).bZ == false) {
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  bVar2 = (param_2->RotationFilter).bX;
  dVar1 = (__return_storage_ptr__->Rotation).Roll;
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = local_28;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dStack_20;
  local_28 = (__return_storage_ptr__->Rotation).Pitch;
  dStack_20 = (__return_storage_ptr__->Rotation).Yaw;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = (double)uVar8;
  if (bVar2 == false) {
    uVar6 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
    uVar7 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
  }
  if ((param_2->RotationFilter).bY == false) {
    local_28 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  }
  if ((param_2->RotationFilter).bZ == false) {
    dStack_20 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  }
  bVar2 = (param_2->ScaleFilter).bX;
  (__return_storage_ptr__->Rotation).Pitch = local_28;
  (__return_storage_ptr__->Rotation).Yaw = dStack_20;
  local_28 = (__return_storage_ptr__->Scale).field0_0x0._s_0.X;
  dStack_20 = (__return_storage_ptr__->Scale).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Rotation).Roll = (double)CONCAT44(uVar7,uVar6);
  uVar8 = *(undefined8 *)((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 0x10);
  uVar6 = (undefined4)uVar8;
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (bVar2 == false) {
    local_28 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  }
  if ((param_2->ScaleFilter).bY == false) {
    dStack_20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  }
  if ((param_2->ScaleFilter).bZ == false) {
    uVar6 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
  }
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X = local_28;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = dStack_20;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = (double)CONCAT44(uVar7,uVar6);
  return __return_storage_ptr__;
}

// StaticGetResultantMatrix @ 14a5a2e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
FRigUnit_Control::StaticGetResultantMatrix
          (TMatrix<double> *__return_storage_ptr__,FEulerTransform *param_1,
          TTransform<double> *param_2,FTransformFilter *param_3)

{
  TScaleRotationTranslationMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_188 [32];
  FEulerTransform local_168;
  TScaleRotationTranslationMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  StaticGetFilteredTransform(&local_168,param_1,param_3);
  pTVar1 = UE::Math::TScaleRotationTranslationMatrix<double>::
           TScaleRotationTranslationMatrix<double>
                     (&local_118,&local_168.Scale,&local_168.Rotation,&local_168.Location);
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_98);
  VectorMatrixMultiply(__return_storage_ptr__,(TMatrix<double> *)pTVar1,pTVar2);
  return __return_storage_ptr__;
}

// StaticGetResultantTransform @ 14a5a2ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
FRigUnit_Control::StaticGetResultantTransform
          (TTransform<double> *__return_storage_ptr__,FEulerTransform *param_1,
          TTransform<double> *param_2,FTransformFilter *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FEulerTransform *pFVar9;
  TQuat<double> *pTVar10;
  undefined1 auStack_118 [32];
  TQuat<double> local_f8;
  FEulerTransform local_d8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar9 = StaticGetFilteredTransform(&local_d8,param_1,param_3);
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&pFVar9->Rotation,&local_f8);
  local_88.Rotation.ZW.m128d_f64[0] = pTVar10->Z;
  local_88.Rotation.ZW.m128d_f64[1] = pTVar10->W;
  local_88.Rotation.XY.m128d_f64[0] = pTVar10->X;
  local_88.Rotation.XY.m128d_f64[1] = pTVar10->Y;
  local_88.Translation.ZW.m128d_f64[0] = (pFVar9->Location).field0_0x0._s_0.Z;
  local_88.Translation.XY.m128d_f64[0] = (pFVar9->Location).field0_0x0._s_0.X;
  local_88.Translation.XY.m128d_f64[1] = (pFVar9->Location).field0_0x0._s_0.Y;
  local_88.Translation.ZW.m128d_f64[1] = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_88.Scale3D.XY.m128d_f64[0] = (pFVar9->Scale).field0_0x0._s_0.X;
  local_88.Scale3D.XY.m128d_f64[1] = (pFVar9->Scale).field0_0x0._s_0.Y;
  local_88.Scale3D.ZW.m128d_f64[0] = (pFVar9->Scale).field0_0x0._s_0.Z;
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  local_88.Scale3D.ZW.m128d_f64[1] = 0.0;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_88,param_2);
  return __return_storage_ptr__;
}

// StaticSetResultantMatrix @ 14a5a3090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigUnit_Control::StaticSetResultantMatrix
          (TMatrix<double> *param_1,TTransform<double> *param_2,FEulerTransform *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  TMatrix<double> *pTVar5;
  TRotator<double> *pTVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined1 in_XMM4 [16];
  double dVar11;
  undefined1 in_XMM5 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_288 [48];
  double local_258;
  TRotator<double> local_250;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_b8);
  dVar4 = __real_3e45798ee0000000;
  dVar11 = pTVar5->M[0][0];
  dVar10 = pTVar5->M[0][1];
  dVar1 = pTVar5->M[0][2];
  if ((((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee0000000) &&
      ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3e45798ee0000000)) &&
     (uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar9,uVar8) < __real_3e45798ee0000000 ||
     (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee0000000)) {
    dVar11 = pTVar5->M[1][0];
    dVar10 = pTVar5->M[1][1];
    dVar1 = pTVar5->M[1][2];
    if ((((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3e45798ee0000000) &&
        ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3e45798ee0000000)) &&
       (uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar9,uVar8) < __real_3e45798ee0000000 ||
       (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee0000000)) {
      dVar11 = pTVar5->M[2][0];
      dVar10 = pTVar5->M[2][1];
      dVar1 = pTVar5->M[2][2];
      if ((((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee0000000) &&
          ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3e45798ee0000000)) &&
         (uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar9,uVar8) < __real_3e45798ee0000000 ||
         (double)CONCAT44(uVar9,uVar8) == __real_3e45798ee0000000)) {
        local_238.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
        local_238.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
        local_238.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
        local_238.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
        local_238.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
        local_238.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
        local_238.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
        local_238.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
        local_238.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
        local_238.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
        local_238.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
        local_238.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
        local_238.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
        local_238.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
        local_238.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
        local_238.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
        goto LAB_14a5a3220;
      }
    }
  }
  FMath::MatrixInverse(&local_138,pTVar5);
  local_238.M[0][0] = local_138.M[0][0];
  local_238.M[0][1] = local_138.M[0][1];
  local_238.M[0][2] = local_138.M[0][2];
  local_238.M[0][3] = local_138.M[0][3];
  local_238.M[1][0] = local_138.M[1][0];
  local_238.M[1][1] = local_138.M[1][1];
  local_238.M[1][2] = local_138.M[1][2];
  local_238.M[1][3] = local_138.M[1][3];
  local_238.M[2][0] = local_138.M[2][0];
  local_238.M[2][1] = local_138.M[2][1];
  local_238.M[2][2] = local_138.M[2][2];
  local_238.M[2][3] = local_138.M[2][3];
  local_238.M[3][0] = local_138.M[3][0];
  local_238.M[3][1] = local_138.M[3][1];
  local_238.M[3][2] = local_138.M[3][2];
  local_238.M[3][3] = local_138.M[3][3];
LAB_14a5a3220:
  VectorMatrixMultiply(&local_1b8,param_1,&local_238);
  (param_3->Location).field0_0x0._s_0.X = local_1b8.M[3][0];
  (param_3->Location).field0_0x0._s_0.Y = local_1b8.M[3][1];
  (param_3->Location).field0_0x0._s_0.Z = local_1b8.M[3][2];
  pTVar6 = UE::Math::TMatrix<double>::Rotator(&local_1b8,&local_250);
  dVar11 = pTVar6->Yaw;
  (param_3->Rotation).Pitch = pTVar6->Pitch;
  (param_3->Rotation).Yaw = dVar11;
  (param_3->Rotation).Roll = pTVar6->Roll;
  dVar11 = local_1b8.M[0][0] * local_1b8.M[0][0] + local_1b8.M[0][1] * local_1b8.M[0][1] +
           local_1b8.M[0][2] * local_1b8.M[0][2];
  if (dVar11 <= dVar4) {
    dVar11 = 0.0;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar11;
    auVar12 = sqrtpd(in_XMM5,auVar12);
    dVar11 = auVar12._0_8_;
  }
  dVar10 = local_1b8.M[1][0] * local_1b8.M[1][0] + local_1b8.M[1][1] * local_1b8.M[1][1] +
           local_1b8.M[1][2] * local_1b8.M[1][2];
  if (dVar10 <= dVar4) {
    dVar10 = 0.0;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar10;
    auVar12 = sqrtpd(in_XMM4,auVar2);
    dVar10 = auVar12._0_8_;
  }
  auVar7._0_8_ = local_1b8.M[2][1] * local_1b8.M[2][1];
  auVar7._8_8_ = 0;
  dVar1 = local_1b8.M[2][0] * local_1b8.M[2][0] + auVar7._0_8_ +
          local_1b8.M[2][2] * local_1b8.M[2][2];
  if (dVar1 <= dVar4) {
    local_258 = 0.0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar1;
    auVar12 = sqrtpd(auVar7,auVar3);
    local_258 = auVar12._0_8_;
  }
  (param_3->Scale).field0_0x0._s_0.X = dVar11;
  (param_3->Scale).field0_0x0._s_0.Y = dVar10;
  (param_3->Scale).field0_0x0._s_0.Z = local_258;
  return;
}

// StaticSetResultantTransform @ 14a5a3350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigUnit_Control::StaticSetResultantTransform
          (TTransform<double> *param_1,TTransform<double> *param_2,FEulerTransform *param_3)

{
  TTransform<double> *pTVar1;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar1 = UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_78,param_2);
  FEulerTransform::FromFTransform(param_3,pTVar1);
  return;
}

