// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a17d2d0

UScriptStruct * __cdecl FRigVMFunction_MathQuaternionScale::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionScale");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.OuterSingleton;
}

// GetExecuteContextStruct @ 14a17d390

UScriptStruct * __thiscall
FRigVMFunction_MathQuaternionScale::GetExecuteContextStruct
          (FRigVMFunction_MathQuaternionScale *this)

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

// Execute @ 14a17d550

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
FRigVMFunction_MathQuaternionScale::Execute(FRigVMFunction_MathQuaternionScale *this)

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
  StaticExecute(&local_118,&this->Value,this->Scale);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetUpgradeInfo @ 14a17d700

FRigVMStructUpgradeInfo * __thiscall
FRigVMFunction_MathQuaternionScale::GetUpgradeInfo
          (FRigVMFunction_MathQuaternionScale *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  FString local_88;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_78;
  FRigVMStruct local_68 [2];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  float local_38;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  local_58 = (this->Value).X;
  dStack_50 = (this->Value).Y;
  local_68[0] = (FRigVMStruct)&___7FRigVMFunction_MathQuaternionScaleV2__6B_;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  local_48 = (this->Value).Z;
  dStack_40 = (this->Value).W;
  local_38 = this->Scale;
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
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionScale");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_88.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::RigVMFunctions;
    local_88.Data.ArrayNum = 1;
    local_78._12_4_ = local_88.Data.ArrayMax;
    local_78.ArrayNum = 1;
    local_78.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.
                      OuterSingleton,&local_78);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScale.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2,
                         (UObject *)pUVar1,L"RigVMFunction_MathQuaternionScaleV2");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_88.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::RigVMFunctions;
    local_88.Data.ArrayNum = 1;
    local_78._12_4_ = local_88.Data.ArrayMax;
    local_78.ArrayNum = 1;
    local_78.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2.
                      OuterSingleton,&local_78);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,local_68);
  ::FString::FString((FString *)&local_78,L"Factor");
  ::FString::FString(&local_88,L"Scale");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_88,(FString *)&local_78,true,true);
  if ((FRigVMCompiledInFunction *)local_88.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  ::FString::FString(&local_88,L"Result");
  ::FString::FString((FString *)&local_78,L"Value");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_78,&local_88,false,true);
  if (local_78.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  if ((FRigVMCompiledInFunction *)local_88.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a1a1430

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
FRigVMFunction_MathQuaternionScale::Execute
          (FRigVMFunction_MathQuaternionScale *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->Scale);
  return;
}

// RigVMExecute @ 14a1c85a0

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
FRigVMFunction_MathQuaternionScale::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  TQuat<double> *pTVar3;
  FRigVMMemoryHandle *pFVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  FRigVMExecuteContext *pFVar8;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (TQuat<double> *)param_2->DataPtr->Ptr;
  if (iVar2 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar4[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar4[1].PropertyPath,pFVar4[1].Ptr,pFVar4[1].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar3,fVar1);
  return;
}

// StaticExecute @ 14a1df9e0

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
FRigVMFunction_MathQuaternionScale::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,float param_3)

{
  double dVar1;
  float fVar2;
  undefined1 auVar3 [12];
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  dVar1 = param_2->W;
  uVar11 = SUB84(__real_bff0000000000000,0);
  uVar12 = (int)((ulonglong)__real_bff0000000000000 >> 0x20);
  if ((__real_bff0000000000000 <= dVar1) &&
     (uVar11 = SUB84(dVar1,0), uVar12 = (int)((ulonglong)dVar1 >> 0x20),
     __real_3ff0000000000000 <= dVar1)) {
    uVar11 = SUB84(__real_3ff0000000000000,0);
    uVar12 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar5 = param_2->X;
  dVar6 = param_2->Y;
  dVar7 = param_2->Z;
  dVar13 = dVar7 * dVar7 + dVar5 * dVar5;
  dVar15 = dVar6 * dVar6 + 0.0;
  dVar1 = dVar15 + dVar13;
  dVar13 = dVar13 + dVar15;
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar1;
  auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar16 = sqrtpd(in_XMM3,auVar16);
  uVar8 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
  uVar10 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar13)
  ;
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  uVar9 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
  auVar18._0_8_ = uVar8 & (ulonglong)(auVar17._0_8_ * dVar5);
  uVar4 = uVar10 & (ulonglong)(auVar17._8_8_ * dVar6);
  auVar18._8_4_ = (undefined4)uVar4;
  auVar18._12_4_ = (undefined4)(uVar4 >> 0x20);
  fVar2 = GlobalVectorConstants::Float1000.m128_f32[2];
  auVar17._4_4_ =
       ~(uint)(uVar8 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar17._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar17._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar17._12_4_ =
       ~(uint)(uVar10 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar18 = auVar18 | auVar17;
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  acos((double)CONCAT44(uVar12,uVar11));
  auVar17 = ZEXT816(0) << 0x20;
  __libm_sse2_sincos_();
  auVar3._4_8_ = auVar17._8_8_;
  auVar3._0_4_ = auVar18._4_4_;
  auVar14._0_8_ = auVar3._0_8_ << 0x20;
  auVar14._8_4_ = auVar18._8_4_;
  auVar14._12_4_ = auVar18._12_4_;
  param_2->X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * auVar18._0_8_;
  param_2->Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * auVar14._8_8_;
  param_2->Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
               (double)(CONCAT44(~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(double)fVar2 >> 0x20),
                                 ~(uint)uVar9 & SUB84((double)fVar2,0)) |
                       uVar9 & (ulonglong)(auVar16._0_8_ * dVar7));
  param_2->W = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  return;
}

