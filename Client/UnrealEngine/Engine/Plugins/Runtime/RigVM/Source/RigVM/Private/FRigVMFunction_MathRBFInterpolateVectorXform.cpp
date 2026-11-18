// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a1409b0

UScriptStruct * __cdecl FRigVMFunction_MathRBFInterpolateVectorXform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform,
                         (UObject *)pUVar1,L"RigVMFunction_MathRBFInterpolateVectorXform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a140a80

UScriptStruct * __thiscall
FRigVMFunction_MathRBFInterpolateVectorXform::GetExecuteContextStruct
          (FRigVMFunction_MathRBFInterpolateVectorXform *this)

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

// Execute @ 14a148550

/* WARNING: Removing unreachable block (ram,0x00014a1486db) */
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
FRigVMFunction_MathRBFInterpolateVectorXform::Execute
          (FRigVMFunction_MathRBFInterpolateVectorXform *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateVectorXform_Target_const_,int> local_128;
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
  local_128.DataPtr =
       (FMathRBFInterpolateVectorXform_Target *)(this->Targets).AllocatorInstance.Data;
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
  StaticExecute(&local_118,&local_128,&this->Output,(TVector<double> *)&this->_padding_,
                (ERBFVectorDistanceType)this->_padding_,
                *(ERBFKernelType *)((longlong)&this->_padding_ + 1),
                *(float *)((longlong)&this->_padding_ + 4),SUB81(this->_padding_,0),
                (FRigVMFunction_MathRBFInterpolateVectorWorkData *)&this->_padding_);
  if (local_118.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// FRigVMFunction_MathRBFInterpolateVectorXform @ 14a18e620

FRigVMFunction_MathRBFInterpolateVectorXform * __thiscall
FRigVMFunction_MathRBFInterpolateVectorXform::FRigVMFunction_MathRBFInterpolateVectorXform
          (FRigVMFunction_MathRBFInterpolateVectorXform *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRBFInterpolateVectorBase__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRBFInterpolateVectorXform__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x40a00000;
  *(undefined1 *)&this->_padding_ = 0;
  *&(this->Output).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Output).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Output).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Output).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Output).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Output).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// ~FRigVMFunction_MathRBFInterpolateVectorXform @ 14a191c40

void __thiscall
FRigVMFunction_MathRBFInterpolateVectorXform::~FRigVMFunction_MathRBFInterpolateVectorXform
          (FRigVMFunction_MathRBFInterpolateVectorXform *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  pFVar1 = (this->Targets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a1a1e30

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
FRigVMFunction_MathRBFInterpolateVectorXform::Execute
          (FRigVMFunction_MathRBFInterpolateVectorXform *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateVectorXform_Target_const_,int> local_18;
  
  local_18.DataPtr = (FMathRBFInterpolateVectorXform_Target *)(this->Targets).AllocatorInstance.Data
  ;
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
  StaticExecute(param_1,&local_18,&this->Output,(TVector<double> *)&this->_padding_,
                (ERBFVectorDistanceType)this->_padding_,
                *(ERBFKernelType *)((longlong)&this->_padding_ + 1),
                *(float *)((longlong)&this->_padding_ + 4),SUB81(this->_padding_,0),
                (FRigVMFunction_MathRBFInterpolateVectorWorkData *)&this->_padding_);
  return;
}

// RigVMExecute @ 14a1cab60

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
FRigVMFunction_MathRBFInterpolateVectorXform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERBFVectorDistanceType EVar2;
  ERBFKernelType EVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  TVector<double> *pTVar10;
  FRigVMMemoryHandle *pFVar11;
  ERBFVectorDistanceType *pEVar12;
  ERBFKernelType *pEVar13;
  float *pfVar14;
  uchar *puVar15;
  FRigVMSlice *pFVar16;
  FRigVMFunction_MathRBFInterpolateVectorWorkData *pFVar17;
  FRigVMExecuteContext *pFVar18;
  TArrayView<FMathRBFInterpolateVectorXform_Target_const_,int> local_48 [2];
  
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
  pTVar5 = (TTransform<double> *)param_2->DataPtr[1].Ptr;
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
    pTVar10 = (TVector<double> *)pFVar11[2].Ptr;
  }
  else {
    pTVar10 = (TVector<double> *)
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
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar17 = (FRigVMFunction_MathRBFInterpolateVectorWorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar11,false,pFVar16->Offset + pFVar16->Index);
  local_48[0].DataPtr = *(FMathRBFInterpolateVectorXform_Target **)puVar9;
  local_48[0].ArrayNum = *(int *)(puVar9 + 8);
  if (local_48[0].ArrayNum < 0) {
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
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar18,local_48,pTVar5,pTVar10,EVar2,EVar3,fVar1,bVar7,pFVar17);
  return;
}

// StaticExecute @ 14a1e1d90

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
FRigVMFunction_MathRBFInterpolateVectorXform::StaticExecute
          (FRigVMExecuteContext *param_1,
          TArrayView<FMathRBFInterpolateVectorXform_Target_const_,int> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,ERBFVectorDistanceType param_5,
          ERBFKernelType param_6,float param_7,bool param_8,
          FRigVMFunction_MathRBFInterpolateVectorWorkData *param_9)

{
  double *pdVar1;
  FMathRBFInterpolateVectorXform_Target *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  ulonglong uVar16;
  bool bVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  uint uVar33;
  double local_res10;
  double local_res18;
  TArray<float,TSizedDefaultAllocator<32>_> local_158;
  TArrayView<FMathRBFInterpolateVectorXform_Target_const_,int> local_148 [2];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  
  local_148[0].DataPtr = param_2->DataPtr;
  local_148[0].ArrayNum = param_2->ArrayNum;
  if ((local_148[0].ArrayNum < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  FRigVMFunction_MathRBFInterpolateVectorBase::
  GetInterpolatedWeights<FMathRBFInterpolateVectorXform_Target>
            (param_9,local_148,param_4,param_5,param_6,param_7,param_8,&local_158);
  iVar18 = param_2->ArrayNum;
  uVar20 = 0;
  local_res10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar9 = UE::Math::TQuat<double>::Identity.Z;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  dVar5 = UE::Math::TQuat<double>::Identity.X;
  dVar6 = UE::Math::TQuat<double>::Identity.Y;
  if (0 < iVar18) {
    lVar19 = 0;
    lVar21 = 0;
    do {
      uVar33 = 0;
      if ((int)uVar20 < iVar18) {
        uVar33 = ~uVar20 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = param_2->DataPtr;
      uVar33 = 0;
      if ((int)uVar20 < local_158.ArrayNum) {
        uVar33 = ~uVar20 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pdVar1 = (double *)((longlong)(pFVar2->Value).Scale3D.XY.m128d_f64 + lVar21);
      local_108 = *pdVar1;
      dStack_100 = pdVar1[1];
      local_f8 = *(double *)((longlong)(pFVar2->Value).Scale3D.ZW.m128d_f64 + lVar21);
      dVar31 = (double)*(float *)(local_158.AllocatorInstance.Data + lVar19 * 4);
      pdVar1 = (double *)((longlong)(pFVar2->Value).Translation.XY.m128d_f64 + lVar21);
      local_f0 = *pdVar1;
      dStack_e8 = pdVar1[1];
      uVar11 = (double)uVar11 + dVar31 * local_108;
      uVar12 = (double)uVar12 + dVar31 * dStack_100;
      local_e0 = *(double *)((longlong)(pFVar2->Value).Translation.ZW.m128d_f64 + lVar21);
      uVar13 = (double)uVar13 + dVar31 * local_f8;
      uVar14 = (double)uVar14 + dVar31 * local_f0;
      local_res10 = local_res10 + dVar31 * dStack_e8;
      pdVar1 = (double *)((longlong)(pFVar2->Value).Rotation.ZW.m128d_f64 + lVar21);
      dVar29 = dVar31 * *pdVar1;
      dVar8 = dVar31 * pdVar1[1];
      pdVar1 = (double *)((longlong)(pFVar2->Value).Rotation.XY.m128d_f64 + lVar21);
      dVar4 = dVar31 * *pdVar1;
      dVar24 = dVar31 * pdVar1[1];
      local_res18 = local_res18 + dVar31 * local_e0;
      auVar15._4_8_ = dStack_e8;
      auVar15._0_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar26._0_8_ = auVar15._0_8_ << 0x20;
      auVar26._8_4_ = SUB84(dVar8,0);
      auVar26._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      in_XMM2._0_8_ = auVar26._8_8_ * dVar10 + dVar29 * dVar9 + dVar24 * dVar6 + dVar4 * dVar5;
      in_XMM2._8_8_ = dVar8;
      if (in_XMM2._0_8_ < __real_0000000000000000) {
        dVar5 = dVar5 - dVar4;
        dVar6 = dVar6 - dVar24;
        dVar9 = dVar9 - dVar29;
        dVar10 = dVar10 - dVar8;
        local_128._8_4_ = SUB84(dVar6,0);
        local_128._0_8_ = dVar5;
        local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        dVar5 = dVar4 + dVar5;
        dVar6 = dVar24 + dVar6;
        dVar9 = dVar9 + dVar29;
        dVar10 = dVar10 + dVar8;
        local_128._8_4_ = SUB84(dVar6,0);
        local_128._0_8_ = dVar5;
        local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      }
      iVar18 = param_2->ArrayNum;
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + 1;
      local_118._8_4_ = SUB84(dVar10,0);
      local_118._0_8_ = dVar9;
      local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      lVar21 = lVar21 + 0x80;
    } while ((int)uVar20 < iVar18);
  }
  auVar25._8_4_ = SUB84(dVar10,0);
  auVar25._0_8_ = dVar9;
  auVar25._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar24 = dVar9 * dVar9 + dVar5 * dVar5;
  dVar29 = auVar25._8_8_ * dVar10 + dVar6 * dVar6;
  dVar4 = dVar29 + dVar24;
  dVar24 = dVar24 + dVar29;
  auVar30._8_4_ = SUB84(dVar24,0);
  auVar30._0_8_ = dVar4;
  auVar30._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar30 = sqrtpd(in_XMM2,auVar30);
  uVar22 = -(ulonglong)(__real_3e45798ee0000000 <= dVar4);
  uVar23 = -(ulonglong)(__real_3e45798ee0000000 <= dVar24);
  uVar20 = (uint)(uVar22 >> 0x20);
  uVar33 = (uint)(uVar23 >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
  auVar27._0_8_ = uVar22 & (ulonglong)(auVar26._0_8_ * dVar9);
  uVar16 = uVar23 & (ulonglong)(auVar26._8_8_ * dVar10);
  auVar27._8_4_ = (undefined4)uVar16;
  auVar27._12_4_ = (undefined4)(uVar16 >> 0x20);
  auVar32._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar32._4_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar32._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar32._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
  auVar28._0_8_ = (ulonglong)(auVar26._0_8_ * dVar5) & uVar22;
  uVar16 = (ulonglong)(auVar26._8_8_ * dVar6) & uVar23;
  auVar28._8_4_ = (undefined4)uVar16;
  auVar28._12_4_ = (undefined4)(uVar16 >> 0x20);
  auVar7._4_4_ = ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
  auVar7._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar7._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar28 | auVar7;
  *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar32 | auVar27;
  (param_3->Translation).XY.m128d_f64[0] = (double)uVar14;
  (param_3->Translation).XY.m128d_f64[1] = local_res10;
  (param_3->Translation).ZW.m128d_f64[0] = local_res18;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  (param_3->Scale3D).XY.m128d_f64[0] = (double)uVar11;
  (param_3->Scale3D).XY.m128d_f64[1] = (double)uVar12;
  (param_3->Scale3D).ZW.m128d_f64[0] = (double)uVar13;
  (param_3->Scale3D).ZW.m128d_f64[1] = 0.0;
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

