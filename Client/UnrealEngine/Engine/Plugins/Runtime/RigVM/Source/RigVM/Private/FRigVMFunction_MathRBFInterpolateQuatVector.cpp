// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a14baa0

UScriptStruct * __cdecl FRigVMFunction_MathRBFInterpolateQuatVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector,
                         (UObject *)pUVar1,L"RigVMFunction_MathRBFInterpolateQuatVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a14bb20

UScriptStruct * __thiscall
FRigVMFunction_MathRBFInterpolateQuatVector::GetExecuteContextStruct
          (FRigVMFunction_MathRBFInterpolateQuatVector *this)

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

// Execute @ 14a1560c0

/* WARNING: Removing unreachable block (ram,0x00014a156254) */
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
FRigVMFunction_MathRBFInterpolateQuatVector::Execute
          (FRigVMFunction_MathRBFInterpolateQuatVector *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateQuatVector_Target_const_,int> local_128;
  FRigVMExecuteContext local_118;
  
  local_118.FramesPerSecond = __real_3f91111111111111;
  local_118.RuntimeSettings.LogFunction.Object =
       (TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
        *)0x0;
  local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_118.DeltaTime = 0.0;
  local_118.AbsoluteTime = 0.0;
  local_118.ToWorldSpaceTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_118._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  local_118.ToWorldSpaceTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_118.ToWorldSpaceTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_118.OwningObject = (UObject *)0x0;
  local_118.OwningActor = (AActor *)0x0;
  local_118.EventName.ComparisonIndex.Value = 0;
  local_118.EventName.Number = 0;
  local_118.FunctionName.ComparisonIndex.Value = 0;
  local_118.FunctionName.Number = 0;
  local_118.InstructionIndex = 0;
  local_118.NumExecutions = 0;
  local_118.RuntimeSettings.MaximumArraySize = 0x800;
  local_118.RuntimeSettings._4_4_ = 0;
  local_118.DrawInterfacePtr = (FRigVMDrawInterface *)0x0;
  local_118.DrawContainerPtr = (FRigVMDrawContainer *)0x0;
  local_118.World = (UWorld *)0x0;
  local_118.Traits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Traits.ArrayNum = 0;
  local_118.Traits.ArrayMax = 0;
  local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AdditionalTraitMemoryHandles.ArrayNum = 0;
  local_118.AdditionalTraitMemoryHandles.ArrayMax = 0;
  local_118.ExtendedExecuteContext = (FRigVMExtendedExecuteContext *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FRigVMExecuteContext::Initialize'::__l5::
           _dynamic_atexit_destructor_for__StaticNameCache__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->Targets).ArrayNum;
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  local_128.DataPtr = (FMathRBFInterpolateQuatVector_Target *)(this->Targets).AllocatorInstance.Data
  ;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_128.ArrayNum = iVar1;
  StaticExecute(&local_118,&local_128,&this->Output,(TQuat<double> *)&this->field_0x10,
                this->field_0x30,this->field_0x31,*(float *)&this->field_0x34,(bool)this->field_0x38
                ,(TVector<double> *)&this->field_0x40,
                (FRigVMFunction_MathRBFInterpolateQuatWorkData *)&this->field_0x60);
  if (local_118.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// FRigVMFunction_MathRBFInterpolateQuatVector @ 14a18e2f0

FRigVMFunction_MathRBFInterpolateQuatVector * __thiscall
FRigVMFunction_MathRBFInterpolateQuatVector::FRigVMFunction_MathRBFInterpolateQuatVector
          (FRigVMFunction_MathRBFInterpolateQuatVector *this)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined ***)this = &___7FRigVMFunction_MathRBFInterpolateQuatBase__6B_;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)&this->field_0x10 = UE::Math::TQuat<double>::Identity.X;
  *(double *)&this->field_0x18 = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)&this->field_0x20 = UE::Math::TQuat<double>::Identity.Z;
  *(double *)&this->field_0x28 = dVar2;
  *(undefined2 *)&this->field_0x30 = 1;
  *(undefined4 *)&this->field_0x34 = 0x42340000;
  this->field_0x38 = 0;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x48 = uVar1;
  *(double *)&this->field_0x50 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  this->field_0xd8 = 1;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  *(undefined ***)this = &___7FRigVMFunction_MathRBFInterpolateQuatVector__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Output).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Output).field0_0x0._s_0.Y = (double)uVar1;
  (this->Output).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~FRigVMFunction_MathRBFInterpolateQuatVector @ 14a191980

void __thiscall
FRigVMFunction_MathRBFInterpolateQuatVector::~FRigVMFunction_MathRBFInterpolateQuatVector
          (FRigVMFunction_MathRBFInterpolateQuatVector *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  pFVar1 = (this->Targets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    plVar2 = (longlong *)&this->field_0xa0;
    if (*(longlong **)&this->field_0xb8 != (longlong *)0x0) {
      plVar2 = *(longlong **)&this->field_0xb8;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  *(undefined ***)this = &___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a1a19f0

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
FRigVMFunction_MathRBFInterpolateQuatVector::Execute
          (FRigVMFunction_MathRBFInterpolateQuatVector *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateQuatVector_Target_const_,int> local_18;
  
  local_18.DataPtr = (FMathRBFInterpolateQuatVector_Target *)(this->Targets).AllocatorInstance.Data;
  iVar1 = (this->Targets).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->Output,(TQuat<double> *)&this->field_0x10,this->field_0x30,
                this->field_0x31,*(float *)&this->field_0x34,(bool)this->field_0x38,
                (TVector<double> *)&this->field_0x40,
                (FRigVMFunction_MathRBFInterpolateQuatWorkData *)&this->field_0x60);
  return;
}

// RigVMExecute @ 14a1c9bc0

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
FRigVMFunction_MathRBFInterpolateQuatVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERBFQuatDistanceType EVar2;
  ERBFKernelType EVar3;
  int iVar4;
  TVector<double> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  TQuat<double> *pTVar10;
  FRigVMMemoryHandle *pFVar11;
  ERBFQuatDistanceType *pEVar12;
  ERBFKernelType *pEVar13;
  float *pfVar14;
  uchar *puVar15;
  TVector<double> *pTVar16;
  FRigVMSlice *pFVar17;
  FRigVMFunction_MathRBFInterpolateQuatWorkData *pFVar18;
  FRigVMExecuteContext *pFVar19;
  TArrayView<FMathRBFInterpolateQuatVector_Target_const_,int> local_58 [2];
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar11->Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
  if (iVar4 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar5 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  if (iVar4 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar10 = (TQuat<double> *)pFVar11[2].Ptr;
  }
  else {
    pTVar10 = (TQuat<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pEVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  EVar2 = *pEVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pEVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  EVar3 = *pEVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar14 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar14;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar7 = (bool)*puVar15;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar16 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar17 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar18 = (FRigVMFunction_MathRBFInterpolateQuatWorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar11,false,pFVar17->Offset + pFVar17->Index);
  local_58[0].DataPtr = *(FMathRBFInterpolateQuatVector_Target **)puVar9;
  local_58[0].ArrayNum = *(int *)(puVar9 + 8);
  if (local_58[0].ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar19,local_58,pTVar5,pTVar10,EVar2,EVar3,fVar1,bVar7,pTVar16,pFVar18);
  return;
}

// StaticExecute @ 14a1e0be0

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
FRigVMFunction_MathRBFInterpolateQuatVector::StaticExecute
          (FRigVMExecuteContext *param_1,
          TArrayView<FMathRBFInterpolateQuatVector_Target_const_,int> *param_2,
          TVector<double> *param_3,TQuat<double> *param_4,ERBFQuatDistanceType param_5,
          ERBFKernelType param_6,float param_7,bool param_8,TVector<double> *param_9,
          FRigVMFunction_MathRBFInterpolateQuatWorkData *param_10)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  FMathRBFInterpolateQuatVector_Target *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FMathRBFInterpolateQuatVector_Target_const_,int> local_48;
  TVector<double>_u_0 local_38;
  
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  if ((local_48.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38._s_0.X = (param_9->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_9->field0_0x0)._s_0.Y;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_38._s_0.Z = (param_9->field0_0x0)._s_0.Z;
  FRigVMFunction_MathRBFInterpolateQuatBase::
  GetInterpolatedWeights<FMathRBFInterpolateQuatVector_Target>
            (param_10,&local_48,param_4,param_5,param_6,param_7,param_8,
             (TVector<double> *)&local_38._s_0,&local_58);
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar11 = 0;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar7;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  iVar10 = param_2->ArrayNum;
  if (0 < iVar10) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = param_2->DataPtr;
      uVar9 = 0;
      if ((int)uVar11 < local_58.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = uVar11 + 1;
      lVar1 = lVar13 * 4;
      lVar13 = lVar13 + 1;
      dVar6 = (double)*(float *)(local_58.AllocatorInstance.Data + lVar1);
      lVar1 = lVar12 + 8;
      dVar2 = *(double *)((longlong)&(pFVar4->Value).field0_0x0 + lVar12 + 0x10);
      dVar3 = *(double *)((longlong)&(pFVar4->Value).field0_0x0 + lVar12);
      lVar12 = lVar12 + 0x40;
      (param_3->field0_0x0)._s_0.Y =
           dVar6 * *(double *)((longlong)&(pFVar4->Value).field0_0x0 + lVar1) +
           (param_3->field0_0x0)._s_0.Y;
      (param_3->field0_0x0)._s_0.Z = dVar6 * dVar2 + (param_3->field0_0x0)._s_0.Z;
      (param_3->field0_0x0)._s_0.X = dVar6 * dVar3 + (param_3->field0_0x0)._s_0.X;
      iVar10 = param_2->ArrayNum;
    } while ((int)uVar11 < iVar10);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

