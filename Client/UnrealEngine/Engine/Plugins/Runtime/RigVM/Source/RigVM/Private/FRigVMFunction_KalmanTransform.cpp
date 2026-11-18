// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a140240

UScriptStruct * __cdecl FRigVMFunction_KalmanTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform,(UObject *)pUVar1,
                         L"RigVMFunction_KalmanTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_KalmanTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a1402d0

UScriptStruct * __thiscall
FRigVMFunction_KalmanTransform::GetExecuteContextStruct(FRigVMFunction_KalmanTransform *this)

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

// Initialize @ 14a1406f0

void __thiscall FRigVMFunction_KalmanTransform::Initialize(FRigVMFunction_KalmanTransform *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  return;
}

// Execute @ 14a140780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_KalmanTransform::Execute(FRigVMFunction_KalmanTransform *this)

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
  StaticExecute(&local_118,&this->Value,this->BufferSize,&this->Result,&this->Buffer,
                &this->LastInsertIndex);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_KalmanTransform @ 14a18d490

FRigVMFunction_KalmanTransform * __thiscall
FRigVMFunction_KalmanTransform::FRigVMFunction_KalmanTransform(FRigVMFunction_KalmanTransform *this)

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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  *(undefined ***)this = &___7FRigVMFunction_KalmanTransform__6B_;
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
  *(undefined1 (*) [16])(this->Result).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Result).Scale3D.ZW.m128d_f64 = auVar14;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
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
  this->LastInsertIndex = 0;
  dVar15 = (this->Result).Rotation.XY.m128d_f64[1];
  dVar16 = (this->Result).Rotation.ZW.m128d_f64[0];
  dVar17 = (this->Result).Rotation.ZW.m128d_f64[1];
  (this->Value).Rotation.XY.m128d_f64[0] = (this->Result).Rotation.XY.m128d_f64[0];
  (this->Value).Rotation.XY.m128d_f64[1] = dVar15;
  this->BufferSize = 0x10;
  dVar15 = (this->Result).Translation.XY.m128d_f64[0];
  dVar18 = (this->Result).Translation.XY.m128d_f64[1];
  (this->Value).Rotation.ZW.m128d_f64[0] = dVar16;
  (this->Value).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar16 = (this->Result).Translation.ZW.m128d_f64[0];
  dVar17 = (this->Result).Translation.ZW.m128d_f64[1];
  (this->Value).Translation.XY.m128d_f64[0] = dVar15;
  (this->Value).Translation.XY.m128d_f64[1] = dVar18;
  dVar15 = (this->Result).Scale3D.XY.m128d_f64[0];
  dVar18 = (this->Result).Scale3D.XY.m128d_f64[1];
  (this->Value).Translation.ZW.m128d_f64[0] = dVar16;
  (this->Value).Translation.ZW.m128d_f64[1] = dVar17;
  dVar16 = (this->Result).Scale3D.ZW.m128d_f64[0];
  dVar17 = (this->Result).Scale3D.ZW.m128d_f64[1];
  (this->Value).Scale3D.XY.m128d_f64[0] = dVar15;
  (this->Value).Scale3D.XY.m128d_f64[1] = dVar18;
  (this->Value).Scale3D.ZW.m128d_f64[0] = dVar16;
  (this->Value).Scale3D.ZW.m128d_f64[1] = dVar17;
  return this;
}

// Execute @ 14a19eac0

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
FRigVMFunction_KalmanTransform::Execute
          (FRigVMFunction_KalmanTransform *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->BufferSize,&this->Result,&this->Buffer,
                &this->LastInsertIndex);
  return;
}

// RigVMExecute @ 14a1b9ea0

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
FRigVMFunction_KalmanTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  int *piVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  FRigVMExecuteContext *pFVar11;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TTransform<double> *)pFVar8->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar7 = (int *)pFVar8[1].Ptr;
  }
  else {
    piVar7 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  iVar2 = *piVar7;
  if (iVar1 < 3) {
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
  pTVar3 = (TTransform<double> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar10 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar7 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar11,pTVar6,iVar2,pTVar3,pTVar10,piVar7);
  return;
}

// StaticExecute @ 14a1dbaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigVMFunction_KalmanTransform::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,int param_3,
          TTransform<double> *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,int *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  uint uVar23;
  TMatrix<double> *this;
  TQuat<double> *pTVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined8 uVar49;
  undefined8 uVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c7 [7];
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  undefined8 local_280;
  TVector<double>_u_0 local_278;
  undefined8 local_260;
  undefined8 uStack_258;
  double local_250;
  TQuat<double> local_188;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  dVar7 = __real_47efffffe0000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  if (param_3 < 1) {
    dVar7 = (param_2->Rotation).XY.m128d_f64[1];
    (param_4->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (param_4->Rotation).XY.m128d_f64[1] = dVar7;
    dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
    (param_4->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (param_4->Rotation).ZW.m128d_f64[1] = dVar7;
    dVar7 = (param_2->Translation).XY.m128d_f64[1];
    (param_4->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (param_4->Translation).XY.m128d_f64[1] = dVar7;
    dVar7 = (param_2->Translation).ZW.m128d_f64[1];
    (param_4->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (param_4->Translation).ZW.m128d_f64[1] = dVar7;
    dVar7 = (param_2->Scale3D).XY.m128d_f64[1];
    (param_4->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (param_4->Scale3D).XY.m128d_f64[1] = dVar7;
    dVar7 = (param_2->Scale3D).ZW.m128d_f64[1];
    (param_4->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (param_4->Scale3D).ZW.m128d_f64[1] = dVar7;
  }
  else {
    if (param_5->ArrayNum != param_3) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (param_5,param_3,Default);
      uVar54 = _UNK_150b28868;
      uVar49 = ___xmm_47efffffe000000047efffffe0000000;
      iVar29 = param_5->ArrayNum;
      pFVar27 = (param_5->AllocatorInstance).Data;
      pFVar30 = pFVar27 + (longlong)iVar29 * 0x60;
      while( true ) {
        if (param_5->ArrayNum != iVar29) {
          local_2c8 = 0;
          `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2c8);
        }
        if (pFVar27 == pFVar30) break;
        *(undefined8 *)(pFVar27 + 0x20) = uVar49;
        *(undefined8 *)(pFVar27 + 0x28) = uVar54;
        *(double *)(pFVar27 + 0x30) = dVar7;
        *(undefined8 *)(pFVar27 + 0x38) = 0;
        *param_6 = -1;
        pFVar27 = pFVar27 + 0x60;
        local_260 = uVar49;
        uStack_258 = uVar54;
        local_250 = dVar7;
      }
    }
    iVar29 = *param_6;
    if (iVar29 == param_5->ArrayNum + -1) {
      *param_6 = -1;
      iVar29 = -1;
    }
    dVar5 = (param_2->Rotation).XY.m128d_f64[0];
    dVar6 = (param_2->Rotation).XY.m128d_f64[1];
    uVar26 = iVar29 + 1;
    dVar39 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar33 = (param_2->Rotation).ZW.m128d_f64[1];
    iVar29 = 0;
    dVar38 = (param_2->Translation).XY.m128d_f64[0];
    dVar14 = (param_2->Translation).XY.m128d_f64[1];
    dVar15 = (param_2->Translation).ZW.m128d_f64[0];
    dVar16 = (param_2->Translation).ZW.m128d_f64[1];
    dVar17 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar18 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar19 = (param_2->Scale3D).ZW.m128d_f64[0];
    dVar20 = (param_2->Scale3D).ZW.m128d_f64[1];
    *param_6 = uVar26;
    uVar23 = 0;
    if ((int)uVar26 < param_5->ArrayNum) {
      uVar23 = ~uVar26 >> 0x1f;
    }
    if (uVar23 == 0) {
      local_2d8 = (longlong)(int)uVar26;
      local_2d0 = (longlong)param_5->ArrayNum;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar27 = (param_5->AllocatorInstance).Data;
    lVar25 = (longlong)(int)uVar26 * 0x60;
    *(double *)(pFVar27 + lVar25) = dVar5;
    *(double *)(pFVar27 + lVar25 + 8) = dVar6;
    *(double *)(pFVar27 + lVar25 + 0x10) = dVar39;
    *(double *)(pFVar27 + lVar25 + 0x10 + 8) = dVar33;
    *(double *)(pFVar27 + lVar25 + 0x20) = dVar38;
    *(double *)(pFVar27 + lVar25 + 0x20 + 8) = dVar14;
    *(double *)(pFVar27 + lVar25 + 0x30) = dVar15;
    *(double *)(pFVar27 + lVar25 + 0x30 + 8) = dVar16;
    *(double *)(pFVar27 + lVar25 + 0x40) = dVar17;
    *(double *)(pFVar27 + lVar25 + 0x40 + 8) = dVar18;
    *(double *)(pFVar27 + lVar25 + 0x50) = dVar19;
    *(double *)(pFVar27 + lVar25 + 0x50 + 8) = dVar20;
    pFVar30 = (param_5->AllocatorInstance).Data;
    iVar3 = param_5->ArrayNum;
    pFVar27 = pFVar30 + 0x20;
    dStack_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_290 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pFVar28 = pFVar30 + (longlong)iVar3 * 0x60;
    local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_2c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    while( true ) {
      dStack_2a0 = (double)uVar54;
      local_298 = (double)uVar49;
      local_280 = uVar8;
      local_278._s_0.X = (double)uVar12;
      local_278._s_0.Y = (double)uVar13;
      local_278._s_0.Z = (double)uVar9;
      if (param_5->ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_2c7);
      }
      if (pFVar30 == pFVar28) break;
      if (*(double *)&pFVar27->field_0x0 == dVar7) break;
      auVar45._8_8_ = _UNK_150689518;
      auVar45._0_8_ = ___xmm_00000000000000003ff0000000000000;
      local_2c0 = local_2c0 + *(double *)&pFVar27->field_0x0;
      dVar39 = *(double *)(pFVar30 + 0x18);
      dStack_2b8 = dStack_2b8 + *(double *)(pFVar27 + 8);
      local_2b0 = local_2b0 + *(double *)&pFVar27[0x10].field_0x0;
      auVar42 = *(undefined1 (*) [16])(pFVar30 + 0x10);
      auVar2 = *(undefined1 (*) [16])pFVar30;
      dVar33 = auVar42._0_8_;
      dVar38 = auVar42._8_8_;
      auVar40 = blendpd(auVar2,auVar42,2);
      auVar50._0_8_ =
           _UNK_150689518 * auVar2._0_8_ - auVar2._8_8_ * ___xmm_00000000000000003ff0000000000000;
      auVar50._8_8_ = auVar2._8_8_ * 0.0 - dVar33 * _UNK_150689518;
      auVar2 = *(undefined1 (*) [16])pFVar30;
      auVar31 = blendpd(auVar45,ZEXT816(0),2);
      auVar41._0_8_ = auVar31._0_8_ * dVar33 - auVar40._0_8_ * 0.0;
      auVar41._8_8_ = auVar31._8_8_ * dVar38 - auVar40._8_8_ * 0.0;
      auVar31 = blendpd(auVar50,auVar41,2);
      auVar51._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar51._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      dVar5 = auVar50._8_8_ + auVar50._8_8_;
      dVar6 = auVar41._0_8_ + auVar41._0_8_;
      uVar48 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar43._8_4_ = SUB84(dVar6,0);
      auVar43._0_8_ = dVar5;
      auVar43._12_4_ = uVar48;
      auVar34._8_4_ = SUB84(dVar6,0);
      auVar34._0_8_ = dVar5;
      auVar34._12_4_ = uVar48;
      auVar31 = blendpd(auVar34,auVar51,2);
      auVar44._0_8_ = auVar43._8_8_ * auVar2._0_8_ - auVar2._8_8_ * dVar5;
      auVar44._8_8_ = auVar51._0_8_ * auVar2._8_8_ - dVar33 * dVar6;
      auVar42 = blendpd(auVar2,auVar42,2);
      auVar40._8_4_ = SUB84(auVar44._8_8_,0);
      auVar40._0_8_ = auVar44._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
      auVar35._0_8_ = auVar31._0_8_ * dVar33 - auVar42._0_8_ * auVar51._0_8_;
      auVar35._8_8_ = auVar31._8_8_ * dVar38 - auVar42._8_8_ * auVar51._8_8_;
      auVar31._8_8_ = _UNK_15061cbc8;
      auVar31._0_8_ = ___xmm_3ff00000000000000000000000000000;
      auVar42 = *(undefined1 (*) [16])pFVar30;
      auVar45 = blendpd(auVar44,auVar35,2);
      auVar2 = *(undefined1 (*) [16])(pFVar30 + 0x10);
      dVar33 = auVar2._0_8_;
      uVar12 = (double)uVar12 +
               dVar5 * dVar39 + ___xmm_00000000000000003ff0000000000000 + auVar40._8_8_;
      uVar9 = (double)uVar9 + auVar51._0_8_ * dVar39 + auVar45._0_8_;
      uVar13 = (double)uVar13 + dVar6 * dVar39 + _UNK_150689518 + auVar35._0_8_;
      auVar52._0_8_ =
           _UNK_15061cbc8 * auVar42._0_8_ - auVar42._8_8_ * ___xmm_3ff00000000000000000000000000000;
      auVar52._8_8_ = auVar42._8_8_ * 0.0 - dVar33 * _UNK_15061cbc8;
      auVar45 = blendpd(auVar31,ZEXT816(0),2);
      auVar31 = *(undefined1 (*) [16])pFVar30;
      auVar41 = blendpd(auVar42,auVar2,2);
      iVar29 = iVar29 + 1;
      pFVar30 = pFVar30 + 0x60;
      auVar42._0_8_ = auVar45._0_8_ * dVar33 - auVar41._0_8_ * 0.0;
      auVar42._8_8_ = auVar45._8_8_ * auVar2._8_8_ - auVar41._8_8_ * 0.0;
      auVar45 = blendpd(auVar52,auVar42,2);
      dVar5 = auVar52._8_8_ + auVar52._8_8_;
      dVar6 = auVar42._0_8_ + auVar42._0_8_;
      uVar48 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar53._0_8_ = auVar45._0_8_ + auVar45._0_8_;
      auVar53._8_8_ = auVar45._8_8_ + auVar45._8_8_;
      auVar46._8_4_ = SUB84(dVar6,0);
      auVar46._0_8_ = dVar5;
      auVar46._12_4_ = uVar48;
      auVar36._8_4_ = SUB84(dVar6,0);
      auVar36._0_8_ = dVar5;
      auVar36._12_4_ = uVar48;
      auVar42 = blendpd(auVar36,auVar53,2);
      auVar47._0_8_ = auVar46._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar5;
      auVar47._8_8_ = auVar53._0_8_ * auVar31._8_8_ - dVar33 * dVar6;
      auVar31 = blendpd(auVar31,auVar2,2);
      auVar32._8_4_ = SUB84(auVar47._8_8_,0);
      auVar32._0_8_ = auVar47._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar37._0_8_ = auVar42._0_8_ * dVar33 - auVar31._0_8_ * auVar53._0_8_;
      auVar37._8_8_ = auVar42._8_8_ * auVar2._8_8_ - auVar31._8_8_ * auVar53._8_8_;
      pFVar21 = pFVar27 + 0x28;
      auVar42 = blendpd(auVar47,auVar37,2);
      pFVar1 = pFVar27 + 0x30;
      uVar10 = (double)uVar10 +
               dVar5 * dVar38 + ___xmm_3ff00000000000000000000000000000 + auVar32._8_8_;
      local_2a8 = local_2a8 + *(double *)&pFVar27[0x20].field_0x0;
      pFVar27 = pFVar27 + 0x60;
      uVar11 = (double)uVar11 + dVar6 * dVar38 + _UNK_15061cbc8 + auVar37._0_8_;
      uVar8 = (double)uVar8 + auVar53._0_8_ * dVar38 + auVar42._0_8_;
      uVar54 = dStack_2a0 + *(double *)pFVar21;
      uVar49 = local_298 + *(double *)&pFVar1->field_0x0;
      dStack_288 = (double)uVar11;
      local_290 = (double)uVar10;
    }
    if (0 < iVar29) {
      local_298 = __real_3ff0000000000000 / (double)iVar29;
      local_2c0 = local_2c0 * local_298;
      dStack_2b8 = dStack_2b8 * local_298;
      dVar5 = (double)uVar12 * local_298;
      local_2b0 = local_2b0 * local_298;
      dVar6 = (double)uVar13 * local_298;
      dVar7 = (double)uVar9 * local_298;
      dVar39 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
      local_278._s_0.Z = dVar7;
      local_278._s_0.X = dVar5;
      local_278._s_0.Y = dVar6;
      if ((dVar39 != __real_3ff0000000000000) &&
         (local_278._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         local_278._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         local_278._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar39)) {
        dVar39 = __real_3ff0000000000000 / SQRT(dVar39);
        local_278._s_0.Z = dVar7 * dVar39;
        local_278._s_0.X = dVar5 * dVar39;
        local_278._s_0.Y = dVar6 * dVar39;
      }
      dVar5 = (double)uVar10 * local_298;
      dVar6 = (double)uVar11 * local_298;
      dVar7 = (double)uVar8 * local_298;
      dVar39 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
      uVar8 = dVar5;
      uVar9 = dVar6;
      local_280 = dVar7;
      if ((dVar39 != __real_3ff0000000000000) &&
         (uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         local_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar39)) {
        dVar39 = __real_3ff0000000000000 / SQRT(dVar39);
        uVar8 = dVar5 * dVar39;
        uVar9 = dVar6 * dVar39;
        local_280 = dVar7 * dVar39;
      }
      local_2a8 = local_2a8 * local_298;
      dStack_2a0 = (double)uVar54 * local_298;
      local_298 = (double)uVar49 * local_298;
      unique0x100000d7 = (int)uVar9;
      local_290 = (double)uVar8;
      unique0x100000db = (int)((ulonglong)uVar9 >> 0x20);
    }
    (param_4->Translation).XY.m128d_f64[0] = local_2c0;
    (param_4->Translation).XY.m128d_f64[1] = dStack_2b8;
    (param_4->Translation).ZW.m128d_f64[0] = local_2b0;
    (param_4->Translation).ZW.m128d_f64[1] = 0.0;
    this = UE::Math::TRotationMatrix<double>::MakeFromXY
                     (&local_168,(TVector<double> *)&local_278._s_0,(TVector<double> *)&local_290);
    pTVar24 = UE::Math::TMatrix<double>::ToQuat(this,&local_188);
    dVar7 = pTVar24->Y;
    dVar5 = pTVar24->Z;
    dVar6 = pTVar24->W;
    (param_4->Rotation).XY.m128d_f64[0] = pTVar24->X;
    (param_4->Rotation).XY.m128d_f64[1] = dVar7;
    (param_4->Rotation).ZW.m128d_f64[0] = dVar5;
    (param_4->Rotation).ZW.m128d_f64[1] = dVar6;
    (param_4->Scale3D).XY.m128d_f64[0] = local_2a8;
    (param_4->Scale3D).XY.m128d_f64[1] = dStack_2a0;
    (param_4->Scale3D).ZW.m128d_f64[0] = local_298;
    (param_4->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return;
}

