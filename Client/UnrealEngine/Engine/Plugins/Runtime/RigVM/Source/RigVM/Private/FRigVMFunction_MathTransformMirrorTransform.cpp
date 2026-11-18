// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a15e6d0

UScriptStruct * __cdecl FRigVMFunction_MathTransformMirrorTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformMirrorTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a15e750

UScriptStruct * __thiscall
FRigVMFunction_MathTransformMirrorTransform::GetExecuteContextStruct
          (FRigVMFunction_MathTransformMirrorTransform *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a15eda0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_MathTransformMirrorTransform::Execute
          (FRigVMFunction_MathTransformMirrorTransform *this)

{
  FRigVMExecuteContext local_118;
  
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
  StaticExecute(&local_118,&this->Value,&this->MirrorAxis,&this->AxisToFlip,&this->CentralTransform,
                &this->Result);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_MathTransformMirrorTransform @ 14a18fb20

FRigVMFunction_MathTransformMirrorTransform * __thiscall
FRigVMFunction_MathTransformMirrorTransform::FRigVMFunction_MathTransformMirrorTransform
          (FRigVMFunction_MathTransformMirrorTransform *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathTransformMirrorTransform__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Value).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CentralTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CentralTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CentralTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CentralTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CentralTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CentralTransform).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar20;
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
  this->MirrorAxis = '\x01';
  this->AxisToFlip = '\x03';
  dVar21 = (this->Result).Rotation.XY.m128d_f64[1];
  dVar22 = (this->Result).Rotation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Rotation.ZW.m128d_f64[1];
  (this->Value).Rotation.XY.m128d_f64[0] = (this->Result).Rotation.XY.m128d_f64[0];
  (this->Value).Rotation.XY.m128d_f64[1] = dVar21;
  dVar21 = (this->Result).Translation.XY.m128d_f64[0];
  dVar24 = (this->Result).Translation.XY.m128d_f64[1];
  (this->Value).Rotation.ZW.m128d_f64[0] = dVar22;
  (this->Value).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Translation.ZW.m128d_f64[0];
  dVar23 = (this->Result).Translation.ZW.m128d_f64[1];
  (this->Value).Translation.XY.m128d_f64[0] = dVar21;
  (this->Value).Translation.XY.m128d_f64[1] = dVar24;
  dVar21 = (this->Result).Scale3D.XY.m128d_f64[0];
  dVar24 = (this->Result).Scale3D.XY.m128d_f64[1];
  (this->Value).Translation.ZW.m128d_f64[0] = dVar22;
  (this->Value).Translation.ZW.m128d_f64[1] = dVar23;
  dVar22 = (this->Result).Scale3D.ZW.m128d_f64[0];
  dVar23 = (this->Result).Scale3D.ZW.m128d_f64[1];
  (this->Value).Scale3D.XY.m128d_f64[0] = dVar21;
  (this->Value).Scale3D.XY.m128d_f64[1] = dVar24;
  (this->Value).Scale3D.ZW.m128d_f64[0] = dVar22;
  (this->Value).Scale3D.ZW.m128d_f64[1] = dVar23;
  *&(this->CentralTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->CentralTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->CentralTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->CentralTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->CentralTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->CentralTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// Execute @ 14a1a24b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_MathTransformMirrorTransform::Execute
          (FRigVMFunction_MathTransformMirrorTransform *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->MirrorAxis,&this->AxisToFlip,&this->CentralTransform,
                &this->Result);
  return;
}

// RigVMExecute @ 14a1cc640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathTransformMirrorTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  TEnumAsByte<EAxis::Type> *pTVar5;
  TEnumAsByte<EAxis::Type> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  TTransform<double> *pTVar8;
  TTransform<double> *pTVar9;
  FRigVMExecuteContext *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar4 = (TTransform<double> *)pFVar7->Ptr;
  }
  else {
    pTVar4 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TEnumAsByte<EAxis::Type> *)pFVar7[1].Ptr;
  }
  else {
    pTVar5 = (TEnumAsByte<EAxis::Type> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TEnumAsByte<EAxis::Type> *)pFVar7[2].Ptr;
  }
  else {
    pTVar6 = (TEnumAsByte<EAxis::Type> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,true,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar10,pTVar4,pTVar5,pTVar6,pTVar8,pTVar9);
  return;
}

// StaticExecute @ 14a1e3cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathTransformMirrorTransform::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,
          TEnumAsByte<EAxis::Type> *param_3,TEnumAsByte<EAxis::Type> *param_4,
          TTransform<double> *param_5,TTransform<double> *param_6)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TTransform<double> *pTVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  FRigVMMirrorSettings local_128;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.SearchString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SearchString.Data.ArrayNum = 0;
  local_128.SearchString.Data.ArrayMax = 0;
  local_128.ReplaceString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ReplaceString.Data.ArrayNum = 0;
  local_128.ReplaceString.Data.ArrayMax = 0;
  local_128.MirrorAxis = (TEnumAsByte<EAxis::Type>)param_3->Value;
  local_f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_128.AxisToFlip = (TEnumAsByte<EAxis::Type>)param_4->Value;
  local_f8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_f8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_f8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_f8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pTVar6 = UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_98,param_5);
  dVar2 = (pTVar6->Rotation).XY.m128d_f64[0];
  dVar3 = (pTVar6->Rotation).XY.m128d_f64[1];
  dVar4 = (pTVar6->Rotation).ZW.m128d_f64[0];
  dVar5 = (pTVar6->Rotation).ZW.m128d_f64[1];
  local_f8.Translation.XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
  local_f8.Translation.XY.m128d_f64[1] = (pTVar6->Translation).XY.m128d_f64[1];
  local_f8.Translation.ZW.m128d_f64[0] = (pTVar6->Translation).ZW.m128d_f64[0];
  local_f8.Translation.ZW.m128d_f64[1] = (pTVar6->Translation).ZW.m128d_f64[1];
  local_f8.Scale3D.XY.m128d_f64[0] = (pTVar6->Scale3D).XY.m128d_f64[0];
  local_f8.Scale3D.XY.m128d_f64[1] = (pTVar6->Scale3D).XY.m128d_f64[1];
  local_f8.Scale3D.ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
  local_f8.Scale3D.ZW.m128d_f64[1] = (pTVar6->Scale3D).ZW.m128d_f64[1];
  auVar16._0_8_ = dVar2 * dVar2 + dVar4 * dVar4;
  auVar16._8_8_ = dVar3 * dVar3 + dVar5 * dVar5;
  auVar11._8_4_ = SUB84(auVar16._8_8_,0);
  auVar11._0_8_ = auVar16._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar12._0_8_ = auVar11._8_8_ + auVar16._0_8_;
  auVar12._8_8_ = auVar16._0_8_ + auVar16._8_8_;
  auVar17 = sqrtpd(auVar16,auVar12);
  uVar7 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar12._0_8_);
  uVar9 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar12._8_8_);
  uVar8 = -(ulonglong)
           (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar12._0_8_);
  uVar10 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar12._8_8_);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  auVar15._0_8_ = uVar7 & (ulonglong)(auVar14._0_8_ * dVar2);
  uVar1 = uVar9 & (ulonglong)(auVar14._8_8_ * dVar3);
  auVar15._8_4_ = (undefined4)uVar1;
  auVar15._12_4_ = (undefined4)(uVar1 >> 0x20);
  auVar13._0_8_ = uVar8 & (ulonglong)(auVar17._0_8_ * dVar4);
  uVar1 = uVar10 & (ulonglong)(auVar17._8_8_ * dVar5);
  auVar13._8_4_ = (undefined4)uVar1;
  auVar13._12_4_ = (undefined4)(uVar1 >> 0x20);
  auVar17._4_4_ = ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar17._0_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar17._8_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar17._12_4_ = ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  local_f8.Rotation.XY.m128d_f64 = (double  [2])(auVar15 | auVar17);
  auVar14._4_4_ = ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar14._0_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar14._8_4_ = ~(uint)uVar10 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar14._12_4_ = ~(uint)(uVar10 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  local_f8.Rotation.ZW.m128d_f64 = (double  [2])(auVar13 | auVar14);
  pTVar6 = FRigVMMirrorSettings::MirrorTransform(&local_128,&local_98,&local_f8);
  local_f8.Rotation.XY.m128d_f64 = *&(pTVar6->Rotation).XY.m128d_f64;
  local_f8.Rotation.ZW.m128d_f64 = *&(pTVar6->Rotation).ZW.m128d_f64;
  local_f8.Translation.XY.m128d_f64 = *&(pTVar6->Translation).XY.m128d_f64;
  local_f8.Translation.ZW.m128d_f64 = *&(pTVar6->Translation).ZW.m128d_f64;
  local_f8.Scale3D.XY.m128d_f64 = *&(pTVar6->Scale3D).XY.m128d_f64;
  local_f8.Scale3D.ZW.m128d_f64 = *&(pTVar6->Scale3D).ZW.m128d_f64;
  FRigVMFunction_MathTransformMakeAbsolute::StaticExecute(param_1,&local_f8,param_5,param_6);
  return;
}

