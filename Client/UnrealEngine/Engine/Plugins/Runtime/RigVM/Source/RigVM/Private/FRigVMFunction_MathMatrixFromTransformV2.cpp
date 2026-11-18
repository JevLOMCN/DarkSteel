// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a147d30

UScriptStruct * __cdecl FRigVMFunction_MathMatrixFromTransformV2::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2,
                         (UObject *)pUVar1,L"RigVMFunction_MathMatrixFromTransformV2");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2.OuterSingleton;
}

// FRigVMFunction_MathMatrixFromTransformV2 @ 14a18dac0

FRigVMFunction_MathMatrixFromTransformV2 * __thiscall
FRigVMFunction_MathMatrixFromTransformV2::FRigVMFunction_MathMatrixFromTransformV2
          (FRigVMFunction_MathMatrixFromTransformV2 *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathMatrixFromTransformV2__6B_;
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
  *&(this->Value).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Value).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Value).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Value).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Value).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Value).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Result).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Result).M[0][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Result).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Result).M[0][3] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Result).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Result).M[1][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Result).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Result).M[1][3] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Result).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Result).M[2][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Result).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Result).M[2][3] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Result).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Result).M[3][1] = dVar9;
  dVar9 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Result).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Result).M[3][3] = dVar9;
  return this;
}

// Execute @ 14a1a09f0

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
FRigVMFunction_MathMatrixFromTransformV2::Execute
          (FRigVMFunction_MathMatrixFromTransformV2 *this,FRigVMExecuteContext *param_1)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Value,&local_88);
  dVar1 = pTVar2->M[0][1];
  (this->Result).M[0][0] = pTVar2->M[0][0];
  (this->Result).M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  (this->Result).M[0][2] = pTVar2->M[0][2];
  (this->Result).M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  (this->Result).M[1][0] = pTVar2->M[1][0];
  (this->Result).M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  (this->Result).M[1][2] = pTVar2->M[1][2];
  (this->Result).M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  (this->Result).M[2][0] = pTVar2->M[2][0];
  (this->Result).M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  (this->Result).M[2][2] = pTVar2->M[2][2];
  (this->Result).M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  (this->Result).M[3][0] = pTVar2->M[3][0];
  (this->Result).M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  (this->Result).M[3][2] = pTVar2->M[3][2];
  (this->Result).M[3][3] = dVar1;
  return;
}

// Execute @ 14a1a0a70

void __thiscall
FRigVMFunction_MathMatrixFromTransformV2::Execute(FRigVMFunction_MathMatrixFromTransformV2 *this)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
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
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&this->Value,&local_88);
  dVar1 = pTVar2->M[0][1];
  (this->Result).M[0][0] = pTVar2->M[0][0];
  (this->Result).M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  (this->Result).M[0][2] = pTVar2->M[0][2];
  (this->Result).M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  (this->Result).M[1][0] = pTVar2->M[1][0];
  (this->Result).M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  (this->Result).M[1][2] = pTVar2->M[1][2];
  (this->Result).M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  (this->Result).M[2][0] = pTVar2->M[2][0];
  (this->Result).M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  (this->Result).M[2][2] = pTVar2->M[2][2];
  (this->Result).M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  (this->Result).M[3][0] = pTVar2->M[3][0];
  (this->Result).M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  (this->Result).M[3][2] = pTVar2->M[3][2];
  (this->Result).M[3][3] = dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetExecuteContextStruct @ 14a1ab820

UScriptStruct * __thiscall
FRigVMFunction_MathMatrixFromTransformV2::GetExecuteContextStruct
          (FRigVMFunction_MathMatrixFromTransformV2 *this)

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

// RigVMExecute @ 14a1c6590

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
FRigVMFunction_MathMatrixFromTransformV2::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TTransform<double> *this;
  TMatrix<double> *pTVar7;
  TMatrix<double> local_88;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TTransform<double> *)pFVar2->Ptr;
  }
  else {
    this = (TTransform<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pdVar3 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(this,&local_88);
  dVar5 = pTVar7->M[0][1];
  *pdVar3 = pTVar7->M[0][0];
  pdVar3[1] = dVar5;
  dVar5 = pTVar7->M[0][3];
  pdVar3[2] = pTVar7->M[0][2];
  pdVar3[3] = dVar5;
  dVar5 = pTVar7->M[1][1];
  pdVar3[4] = pTVar7->M[1][0];
  pdVar3[5] = dVar5;
  dVar5 = pTVar7->M[1][3];
  pdVar3[6] = pTVar7->M[1][2];
  pdVar3[7] = dVar5;
  dVar5 = pTVar7->M[2][1];
  pdVar3[8] = pTVar7->M[2][0];
  pdVar3[9] = dVar5;
  dVar5 = pTVar7->M[2][3];
  pdVar3[10] = pTVar7->M[2][2];
  pdVar3[0xb] = dVar5;
  dVar5 = pTVar7->M[3][1];
  pdVar3[0xc] = pTVar7->M[3][0];
  pdVar3[0xd] = dVar5;
  dVar5 = pTVar7->M[3][3];
  pdVar3[0xe] = pTVar7->M[3][2];
  pdVar3[0xf] = dVar5;
  return;
}

// StaticExecute @ 14a1dec20

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
FRigVMFunction_MathMatrixFromTransformV2::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,TMatrix<double> *param_3)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> local_88;
  
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_88);
  dVar1 = pTVar2->M[0][1];
  param_3->M[0][0] = pTVar2->M[0][0];
  param_3->M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  param_3->M[0][2] = pTVar2->M[0][2];
  param_3->M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  param_3->M[1][0] = pTVar2->M[1][0];
  param_3->M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  param_3->M[1][2] = pTVar2->M[1][2];
  param_3->M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  param_3->M[2][0] = pTVar2->M[2][0];
  param_3->M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  param_3->M[2][2] = pTVar2->M[2][2];
  param_3->M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  param_3->M[3][0] = pTVar2->M[3][0];
  param_3->M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  param_3->M[3][2] = pTVar2->M[3][2];
  param_3->M[3][3] = dVar1;
  return;
}

