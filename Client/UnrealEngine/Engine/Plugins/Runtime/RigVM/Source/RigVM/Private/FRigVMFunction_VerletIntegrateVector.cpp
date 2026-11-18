// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a16a4d0

UScriptStruct * __cdecl FRigVMFunction_VerletIntegrateVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_VerletIntegrateVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_VerletIntegrateVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector,
                         (UObject *)pUVar1,L"RigVMFunction_VerletIntegrateVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_VerletIntegrateVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_VerletIntegrateVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a16a550

UScriptStruct * __thiscall
FRigVMFunction_VerletIntegrateVector::GetExecuteContextStruct
          (FRigVMFunction_VerletIntegrateVector *this)

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

// Execute @ 14a16a6e0

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
FRigVMFunction_VerletIntegrateVector::Execute(FRigVMFunction_VerletIntegrateVector *this)

{
  FRigVMExecuteContext local_118;
  
  local_118.FramesPerSecond = __real_3f91111111111111;
  local_118.DeltaTime = 0.0;
  local_118.AbsoluteTime = 0.0;
  local_118.EventName.ComparisonIndex.Value = 0;
  local_118.EventName.Number = 0;
  local_118.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_118.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_118.FunctionName.ComparisonIndex.Value = 0;
  local_118.FunctionName.Number = 0;
  local_118.InstructionIndex = 0;
  local_118.NumExecutions = 0;
  local_118.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_118.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_118.Traits.ArrayNum = 0;
  local_118.Traits.ArrayMax = 0;
  local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_118.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_118.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  local_118._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_118.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_118.RuntimeSettings.MaximumArraySize = 0x800;
  local_118.RuntimeSettings._4_4_ = 0;
  local_118.OwningObject = (UObject *)0x0;
  local_118.OwningActor = (AActor *)0x0;
  local_118.World = (UWorld *)0x0;
  local_118.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  StaticExecute(&local_118,&this->Target,this->Strength,this->Damp,this->Blend,&this->Force,
                &this->Position,&this->Velocity,&this->Acceleration,&this->Point,&this->bInitialized
               );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// FRigVMFunction_VerletIntegrateVector @ 14a190ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRigVMFunction_VerletIntegrateVector * __thiscall
FRigVMFunction_VerletIntegrateVector::FRigVMFunction_VerletIntegrateVector
          (FRigVMFunction_VerletIntegrateVector *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar5 = _UNK_1520d77f8;
  uVar11 = ___xmm_000000003c23d70a000000003f800000;
  (this->Point).Mass = 1.0;
  (this->Point).Size = 0.0;
  (this->Point).LinearDamping = 0.01;
  (this->Point).InheritMotion = 0.0;
  this->_padding_ = (longlong)&___7FRigVMFunction_VerletIntegrateVector__6B_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Point).LinearVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Point).LinearVelocity.field0_0x0._s_0.Y = (double)uVar10;
  (this->Point).LinearVelocity.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar2 = (this->Point).LinearVelocity.field0_0x0._s_0.Y;
  dVar1 = (this->Point).LinearVelocity.field0_0x0._s_0.Z;
  (this->Point).Position.field0_0x0._s_0.X = (this->Point).LinearVelocity.field0_0x0._s_0.X;
  (this->Point).Position.field0_0x0._s_0.Y = dVar2;
  (this->Point).Position.field0_0x0._s_0.Z = dVar1;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).field0_0x0._s_0.Y = (double)uVar10;
  (this->Acceleration).field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  dVar2 = (this->Acceleration).field0_0x0._s_0.X;
  dVar3 = (this->Acceleration).field0_0x0._s_0.Y;
  this->Strength = 64.0;
  dVar1 = (this->Acceleration).field0_0x0._s_0.Z;
  (this->Velocity).field0_0x0._s_0.X = dVar2;
  (this->Velocity).field0_0x0._s_0.Y = dVar3;
  this->Damp = 0.01;
  (this->Position).field0_0x0._s_0.X = dVar2;
  (this->Position).field0_0x0._s_0.Y = dVar3;
  this->Blend = 5.0;
  (this->Force).field0_0x0._s_0.X = dVar2;
  (this->Force).field0_0x0._s_0.Y = dVar3;
  (this->Target).field0_0x0._s_0.X = dVar2;
  (this->Target).field0_0x0._s_0.Y = dVar3;
  (this->Velocity).field0_0x0._s_0.Z = dVar1;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  (this->Force).field0_0x0._s_0.Z = dVar1;
  (this->Target).field0_0x0._s_0.Z = dVar1;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->bInitialized = false;
  uVar10 = ___xmm_000000003c23d70a000000003f800000;
  ___xmm_000000003c23d70a000000003f800000 = (undefined4)uVar11;
  _UNK_1520d77f4 = SUB84(uVar11,4);
  uVar4 = _UNK_1520d77f4;
  (this->Point).Mass = (float)___xmm_000000003c23d70a000000003f800000;
  ___xmm_000000003c23d70a000000003f800000 = uVar10;
  uVar11 = _UNK_1520d77f8;
  (this->Point).Size = (float)uVar4;
  _UNK_1520d77f8 = (undefined4)uVar5;
  _UNK_1520d77fc = SUB84(uVar5,4);
  uVar4 = _UNK_1520d77fc;
  (this->Point).LinearDamping = (float)_UNK_1520d77f8;
  _UNK_1520d77f8 = uVar11;
  (this->Point).InheritMotion = (float)uVar4;
  local_20 = (undefined4)uVar6;
  uStack_1c = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_18 = (undefined4)uVar7;
  uStack_14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  (this->Point).Position.field0_0x0._s_0.X = (double)uVar6;
  (this->Point).Position.field0_0x0._s_0.Y = (double)uVar7;
  *(undefined4 *)((longlong)&(this->Point).Position.field0_0x0 + 0x10) = uVar8;
  *(undefined4 *)((longlong)&(this->Point).Position.field0_0x0 + 0x14) = uVar9;
  *(undefined4 *)&(this->Point).LinearVelocity.field0_0x0 = local_20;
  *(undefined4 *)((longlong)&(this->Point).LinearVelocity.field0_0x0 + 4) = uStack_1c;
  *(undefined4 *)((longlong)&(this->Point).LinearVelocity.field0_0x0 + 8) = uStack_18;
  *(undefined4 *)((longlong)&(this->Point).LinearVelocity.field0_0x0 + 0xc) = uStack_14;
  *(undefined4 *)((longlong)&(this->Point).LinearVelocity.field0_0x0 + 0x10) = uVar8;
  *(undefined4 *)((longlong)&(this->Point).LinearVelocity.field0_0x0 + 0x14) = uVar9;
  return this;
}

// Execute @ 14a1a4360

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
FRigVMFunction_VerletIntegrateVector::Execute
          (FRigVMFunction_VerletIntegrateVector *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Target,this->Strength,this->Damp,this->Blend,&this->Force,
                &this->Position,&this->Velocity,&this->Acceleration,&this->Point,&this->bInitialized
               );
  return;
}

// RigVMExecute @ 14a1d5350

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
FRigVMFunction_VerletIntegrateVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  TVector<double> *pTVar10;
  TVector<double> *pTVar11;
  TVector<double> *pTVar12;
  TVector<double> *pTVar13;
  FRigVMSlice *pFVar14;
  FRigVMSimPoint *pFVar15;
  bool *pbVar16;
  FRigVMExecuteContext *pFVar17;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar9->Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar4 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  fVar1 = *pfVar8;
  if (iVar4 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[2].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  fVar2 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar8 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar3 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar11 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar12 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar13 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar15 = (FRigVMSimPoint *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar14->Offset + pFVar14->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar16 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar9,false,pFVar14->Offset + pFVar14->Index);
  pFVar17 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar17,pTVar7,fVar1,fVar2,fVar3,pTVar10,pTVar11,pTVar12,pTVar13,pFVar15,pbVar16);
  return;
}

// StaticExecute @ 14a1e9970

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
FRigVMFunction_VerletIntegrateVector::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,float param_3,float param_4,
          float param_5,TVector<double> *param_6,TVector<double> *param_7,TVector<double> *param_8,
          TVector<double> *param_9,FRigVMSimPoint *param_10,bool *param_11)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  
  if (*param_11 == false) {
    param_10->Mass = 1.0;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (param_10->Position).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_10->Position).field0_0x0._s_0.Y = dVar1;
    (param_10->Position).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar1 = (param_10->Position).field0_0x0._s_0.Y;
    (param_7->field0_0x0)._s_0.X = (param_10->Position).field0_0x0._s_0.X;
    (param_7->field0_0x0)._s_0.Y = dVar1;
    (param_7->field0_0x0)._s_0.Z = (param_10->Position).field0_0x0._s_0.Z;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_10->LinearVelocity).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_10->LinearVelocity).field0_0x0._s_0.Y = (double)uVar17;
    (param_10->LinearVelocity).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar1 = (param_10->LinearVelocity).field0_0x0._s_0.Y;
    (param_9->field0_0x0)._s_0.X = (param_10->LinearVelocity).field0_0x0._s_0.X;
    (param_9->field0_0x0)._s_0.Y = dVar1;
    (param_9->field0_0x0)._s_0.Z = (param_10->LinearVelocity).field0_0x0._s_0.Z;
    dVar1 = (param_9->field0_0x0)._s_0.Y;
    (param_8->field0_0x0)._s_0.X = (param_9->field0_0x0)._s_0.X;
    (param_8->field0_0x0)._s_0.Y = dVar1;
    (param_8->field0_0x0)._s_0.Z = (param_9->field0_0x0)._s_0.Z;
    *param_11 = true;
  }
  param_10->LinearDamping = param_4;
  dVar13 = __real_3ff0000000000000;
  dVar1 = param_1->DeltaTime;
  if (__real_3e45798ee0000000 < dVar1) {
    if (param_3 <= __real_38d1b717) {
      param_3 = __real_38d1b717;
    }
    dVar8 = (double)param_3;
    dVar14 = (param_10->LinearVelocity).field0_0x0._s_0.X;
    dVar15 = (param_10->LinearVelocity).field0_0x0._s_0.Y;
    fVar16 = param_10->Mass;
    dVar21 = (param_10->LinearVelocity).field0_0x0._s_0.Y;
    dVar12 = (param_10->LinearVelocity).field0_0x0._s_0.Z;
    dVar2 = (param_10->LinearVelocity).field0_0x0._s_0.Z;
    fVar22 = (float)dVar1 * param_5;
    dVar6 = (param_10->Position).field0_0x0._s_0.Z;
    dVar10 = (param_10->LinearVelocity).field0_0x0._s_0.X;
    dVar20 = (param_10->Position).field0_0x0._s_0.X;
    dVar19 = *(double *)((longlong)&(param_10->Position).field0_0x0 + 8);
    if (__real_322bcc77 < fVar16) {
      if (__real_3f800000 <= fVar22) {
        fVar22 = __real_3f800000;
      }
      dVar11 = __real_3ff0000000000000 / (double)fVar16;
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      dVar18 = (double)fVar22;
      fVar22 = __real_3f800000 - param_4;
      if (__real_3f800000 <= __real_3f800000 - param_4) {
        fVar22 = __real_3f800000;
      }
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      dVar5 = (double)fVar22;
      dVar21 = ((dVar11 * (((param_2->field0_0x0)._s_0.Y - (param_10->Position).field0_0x0._s_0.Y) *
                           dVar8 + dVar1 * (param_6->field0_0x0)._s_0.Y * __real_404e000000000000) -
                dVar21) * dVar18 + dVar21) * dVar5;
      dVar9 = (double)(float)dVar1;
      dVar12 = ((dVar11 * (((param_2->field0_0x0)._s_0.Z - (param_10->Position).field0_0x0._s_0.Z) *
                           dVar8 + dVar1 * (param_6->field0_0x0)._s_0.Z * __real_404e000000000000) -
                dVar12) * dVar18 + dVar12) * dVar5;
      dVar10 = ((dVar11 * (((param_2->field0_0x0)._s_0.X - (param_10->Position).field0_0x0._s_0.X) *
                           dVar8 + dVar1 * (param_6->field0_0x0)._s_0.X * __real_404e000000000000) -
                dVar10) * dVar18 + dVar10) * dVar5;
      dVar19 = dVar19 + dVar21 * dVar9;
      dVar20 = dVar20 + dVar10 * dVar9;
      dVar6 = dVar6 + dVar12 * dVar9;
    }
    param_10->Mass = fVar16;
    param_10->Size = param_10->Size;
    param_10->LinearDamping = param_10->LinearDamping;
    param_10->InheritMotion = param_10->InheritMotion;
    auVar3._8_4_ = SUB84(dVar19,0);
    auVar3._0_8_ = dVar20;
    auVar3._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])&(param_10->Position).field0_0x0 = auVar3;
    auVar4._8_4_ = SUB84(dVar10,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_10->Position).field0_0x0 + 0x10) = auVar4;
    auVar7._8_4_ = SUB84(dVar12,0);
    auVar7._0_8_ = dVar21;
    auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_10->LinearVelocity).field0_0x0 + 8) = auVar7;
    dVar1 = (param_10->LinearVelocity).field0_0x0._s_0.Y;
    dVar13 = dVar13 / (double)(float)param_1->DeltaTime;
    dVar6 = (param_10->LinearVelocity).field0_0x0._s_0.Z;
    (param_9->field0_0x0)._s_0.X = ((param_10->LinearVelocity).field0_0x0._s_0.X - dVar14) * dVar13;
    (param_9->field0_0x0)._s_0.Y = (dVar1 - dVar15) * dVar13;
    (param_9->field0_0x0)._s_0.Z = (dVar6 - dVar2) * dVar13;
    dVar1 = (param_10->Position).field0_0x0._s_0.Y;
    (param_7->field0_0x0)._s_0.X = (param_10->Position).field0_0x0._s_0.X;
    (param_7->field0_0x0)._s_0.Y = dVar1;
    (param_7->field0_0x0)._s_0.Z = (param_10->Position).field0_0x0._s_0.Z;
    dVar1 = (param_10->LinearVelocity).field0_0x0._s_0.Y;
    (param_8->field0_0x0)._s_0.X = (param_10->LinearVelocity).field0_0x0._s_0.X;
    (param_8->field0_0x0)._s_0.Y = dVar1;
    (param_8->field0_0x0)._s_0.Z = (param_10->LinearVelocity).field0_0x0._s_0.Z;
  }
  return;
}

