// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a06dfe0

UScriptStruct * __cdecl FRigVMFunction_DampQuaternion::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion,(UObject *)pUVar1,
                         L"RigVMFunction_DampQuaternion");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_DampQuaternion_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_DampQuaternion.OuterSingleton;
}

// GetExecuteContextStruct @ 14a06e060

UScriptStruct * __thiscall
FRigVMFunction_DampQuaternion::GetExecuteContextStruct(FRigVMFunction_DampQuaternion *this)

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

// Execute @ 14a06e0b0

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

void __thiscall FRigVMFunction_DampQuaternion::Execute(FRigVMFunction_DampQuaternion *this)

{
  undefined1 auStackY_158 [32];
  FRigVMExecuteContext local_128;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_128.FramesPerSecond = __real_3f91111111111111;
  local_128.DeltaTime = 0.0;
  local_128.AbsoluteTime = 0.0;
  local_128.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_128.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_128.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_128.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_128.EventName.ComparisonIndex.Value = 0;
  local_128.EventName.Number = 0;
  local_128.FunctionName.ComparisonIndex.Value = 0;
  local_128.FunctionName.Number = 0;
  local_128.InstructionIndex = 0;
  local_128.NumExecutions = 0;
  local_128.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_128.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_128.Traits.ArrayNum = 0;
  local_128.Traits.ArrayMax = 0;
  local_128.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_128.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_128.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  local_128.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_128.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_128.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_128.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_128._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_128.RuntimeSettings.MaximumArraySize = 0x800;
  local_128.RuntimeSettings._4_4_ = 0;
  local_128.OwningObject = (UObject *)0x0;
  local_128.OwningActor = (AActor *)0x0;
  local_128.World = (UWorld *)0x0;
  local_128.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  local_128.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  StaticExecute(&local_128,&this->Value,&this->Target,this->SmoothingTime,&this->Result);
  local_128._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  if (local_128.AdditionalTraitMemoryHandles.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AdditionalTraitMemoryHandles.AllocatorInstance.Data);
  }
  if (local_128.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// Execute @ 14a091090

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
FRigVMFunction_DampQuaternion::Execute
          (FRigVMFunction_DampQuaternion *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Target,this->SmoothingTime,&this->Result);
  return;
}

// RigVMExecute @ 14a0a4500

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
FRigVMFunction_DampQuaternion::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TQuat<double> *pTVar5;
  TQuat<double> *pTVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  TQuat<double> *pTVar9;
  FRigVMExecuteContext *pFVar10;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TQuat<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TQuat<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar9 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar10,pTVar5,pTVar6,fVar1,pTVar9);
  return;
}

// StaticExecute @ 14a1da2a0

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
FRigVMFunction_DampQuaternion::StaticExecute
          (FRigVMExecuteContext *param_1,TQuat<double> *param_2,TQuat<double> *param_3,float param_4
          ,TQuat<double> *param_5)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TQuat<double> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  fVar14 = __real_38d1b717;
  dVar1 = param_1->DeltaTime;
  dVar10 = param_2->Y;
  param_5->X = param_2->X;
  param_5->Y = dVar10;
  dVar10 = param_2->W;
  param_5->Z = param_2->Z;
  param_5->W = dVar10;
  if (fVar14 < param_4) {
    fVar14 = (float)dVar1 / param_4;
    auVar16 = ZEXT416((uint)fVar14);
    pTVar7 = UE::Math::TQuat<double>::Slerp_NotNormalized
                       (local_48,param_5,param_3,
                        (double)(__real_3f800000 -
                                __real_3f800000 /
                                (((fVar14 * __real_3e83b5ca + __real_3ee6ad0d) * fVar14 +
                                 __real_3f80f478) * fVar14 + __real_3f800000)));
    dVar3 = pTVar7->X;
    dVar4 = pTVar7->Y;
    dVar5 = pTVar7->Z;
    dVar6 = pTVar7->W;
    dVar10 = dVar5 * dVar5 + dVar3 * dVar3;
    dVar12 = dVar6 * dVar6 + dVar4 * dVar4;
    dVar1 = dVar12 + dVar10;
    dVar10 = dVar10 + dVar12;
    auVar15._8_4_ = SUB84(dVar10,0);
    auVar15._0_8_ = dVar1;
    auVar15._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar15 = sqrtpd(auVar16,auVar15);
    uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
    uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
    uVar18 = (uint)(uVar8 >> 0x20);
    uVar19 = (uint)(uVar9 >> 0x20);
    auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
    auVar17._0_8_ = uVar8 & (ulonglong)(auVar16._0_8_ * dVar3);
    uVar2 = uVar9 & (ulonglong)(auVar16._8_8_ * dVar4);
    auVar17._8_4_ = (undefined4)uVar2;
    auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
    auVar16._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar16._4_4_ =
         ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar16._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar16._12_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
    auVar13._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar13._4_4_ =
         ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar13._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar13._12_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar11._0_8_ = (ulonglong)(auVar15._0_8_ * dVar5) & uVar8;
    uVar9 = (ulonglong)(auVar15._8_8_ * dVar6) & uVar9;
    auVar11._8_4_ = (undefined4)uVar9;
    auVar11._12_4_ = (undefined4)(uVar9 >> 0x20);
    param_5->X = (double)SUB168(auVar17 | auVar16,0);
    param_5->Y = (double)SUB168(auVar17 | auVar16,8);
    param_5->Z = (double)SUB168(auVar13 | auVar11,0);
    param_5->W = (double)SUB168(auVar13 | auVar11,8);
    return;
  }
  dVar1 = param_3->Y;
  param_5->X = param_3->X;
  param_5->Y = dVar1;
  dVar1 = param_3->W;
  param_5->Z = param_3->Z;
  param_5->W = dVar1;
  return;
}

