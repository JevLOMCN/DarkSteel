// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a1353f0

UScriptStruct * __cdecl FRigVMFunction_MathRBFInterpolateVectorQuat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat,
                         (UObject *)pUVar1,L"RigVMFunction_MathRBFInterpolateVectorQuat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a135470

UScriptStruct * __thiscall
FRigVMFunction_MathRBFInterpolateVectorQuat::GetExecuteContextStruct
          (FRigVMFunction_MathRBFInterpolateVectorQuat *this)

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

// Execute @ 14a13adb0

/* WARNING: Removing unreachable block (ram,0x00014a13af3b) */
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
FRigVMFunction_MathRBFInterpolateVectorQuat::Execute
          (FRigVMFunction_MathRBFInterpolateVectorQuat *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateVectorQuat_Target_const_,int> local_128;
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
  local_128.DataPtr = (FMathRBFInterpolateVectorQuat_Target *)(this->Targets).AllocatorInstance.Data
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

// FRigVMFunction_MathRBFInterpolateVectorQuat @ 14a18e4c0

FRigVMFunction_MathRBFInterpolateVectorQuat * __thiscall
FRigVMFunction_MathRBFInterpolateVectorQuat::FRigVMFunction_MathRBFInterpolateVectorQuat
          (FRigVMFunction_MathRBFInterpolateVectorQuat *this)

{
  undefined8 uVar1;
  double dVar2;
  
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
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRBFInterpolateVectorQuat__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x40a00000;
  *(undefined1 *)&this->_padding_ = 0;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Output).X = UE::Math::TQuat<double>::Identity.X;
  (this->Output).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Output).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Output).W = dVar2;
  return this;
}

// ~FRigVMFunction_MathRBFInterpolateVectorQuat @ 14a191b60

void __thiscall
FRigVMFunction_MathRBFInterpolateVectorQuat::~FRigVMFunction_MathRBFInterpolateVectorQuat
          (FRigVMFunction_MathRBFInterpolateVectorQuat *this)

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

// Execute @ 14a1a1cd0

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
FRigVMFunction_MathRBFInterpolateVectorQuat::Execute
          (FRigVMFunction_MathRBFInterpolateVectorQuat *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateVectorQuat_Target_const_,int> local_18;
  
  local_18.DataPtr = (FMathRBFInterpolateVectorQuat_Target *)(this->Targets).AllocatorInstance.Data;
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

// RigVMExecute @ 14a1ca640

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
FRigVMFunction_MathRBFInterpolateVectorQuat::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERBFVectorDistanceType EVar2;
  ERBFKernelType EVar3;
  int iVar4;
  TQuat<double> *pTVar5;
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
  TArrayView<FMathRBFInterpolateVectorQuat_Target_const_,int> local_48 [2];
  
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
  pTVar5 = (TQuat<double> *)param_2->DataPtr[1].Ptr;
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
  local_48[0].DataPtr = *(FMathRBFInterpolateVectorQuat_Target **)puVar9;
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

// StaticExecute @ 14a1e1840

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
FRigVMFunction_MathRBFInterpolateVectorQuat::StaticExecute
          (FRigVMExecuteContext *param_1,
          TArrayView<FMathRBFInterpolateVectorQuat_Target_const_,int> *param_2,
          TQuat<double> *param_3,TVector<double> *param_4,ERBFVectorDistanceType param_5,
          ERBFKernelType param_6,float param_7,bool param_8,
          FRigVMFunction_MathRBFInterpolateVectorWorkData *param_9)

{
  double *pdVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  __m128d _Var9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar27;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FMathRBFInterpolateVectorQuat_Target_const_,int> local_48 [3];
  
  local_48[0].DataPtr = param_2->DataPtr;
  local_48[0].ArrayNum = param_2->ArrayNum;
  if ((local_48[0].ArrayNum < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FRigVMFunction_MathRBFInterpolateVectorBase::
  GetInterpolatedWeights<FMathRBFInterpolateVectorQuat_Target>
            (param_9,local_48,param_4,param_5,param_6,param_7,param_8,&local_58);
  dVar19 = UE::Math::TQuat<double>::Identity.Y;
  uVar11 = 0;
  param_3->X = UE::Math::TQuat<double>::Identity.X;
  param_3->Y = dVar19;
  dVar19 = UE::Math::TQuat<double>::Identity.W;
  param_3->Z = UE::Math::TQuat<double>::Identity.Z;
  param_3->W = dVar19;
  if (0 < param_2->ArrayNum) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar27 = 0;
      if ((int)uVar11 < local_58.ArrayNum) {
        uVar27 = ~uVar11 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)(local_58.AllocatorInstance.Data + lVar12);
      uVar27 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar27 = ~uVar11 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar19 = (double)fVar2;
      auVar22._8_4_ = SUB84(dVar19,0);
      auVar22._0_8_ = dVar19;
      auVar22._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      pdVar1 = (double *)((longlong)&(param_2->DataPtr->Value).X + lVar13);
      dVar23 = dVar19 * *pdVar1;
      dVar26 = auVar22._8_8_ * pdVar1[1];
      pdVar1 = (double *)((longlong)&(param_2->DataPtr->Value).Z + lVar13);
      dVar20 = dVar19 * *pdVar1;
      dVar19 = dVar19 * pdVar1[1];
      if (dVar23 * param_3->X + dVar26 * param_3->Y + dVar20 * param_3->Z + dVar19 * param_3->W <
          0.0) {
        dVar19 = param_3->W - dVar19;
        in_XMM4._0_8_ = param_3->X - dVar23;
        in_XMM4._8_8_ = param_3->Y - dVar26;
        auVar24._8_4_ = SUB84(dVar19,0);
        auVar24._0_8_ = param_3->Z - dVar20;
        auVar24._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      }
      else {
        in_XMM4._0_8_ = param_3->X + dVar23;
        in_XMM4._8_8_ = param_3->Y + dVar26;
        auVar24._0_8_ = dVar20 + param_3->Z;
        auVar24._8_8_ = dVar19 + param_3->W;
      }
      param_3->X = (double)in_XMM4._0_8_;
      param_3->Y = (double)in_XMM4._8_8_;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 4;
      param_3->Z = (double)auVar24._0_8_;
      param_3->W = (double)auVar24._8_8_;
      lVar13 = lVar13 + 0x40;
    } while ((int)uVar11 < param_2->ArrayNum);
  }
  _Var9.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
  dVar23 = param_3->X;
  dVar26 = param_3->Y;
  dVar7 = param_3->Z;
  dVar8 = param_3->W;
  dVar20 = dVar7 * dVar7 + dVar23 * dVar23;
  dVar18 = dVar8 * dVar8 + dVar26 * dVar26;
  dVar19 = dVar18 + dVar20;
  dVar20 = dVar20 + dVar18;
  auVar5._8_4_ = SUB84(dVar20,0);
  auVar5._0_8_ = dVar19;
  auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar22 = sqrtpd(in_XMM4,auVar5);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar19);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar20);
  uVar11 = (uint)(uVar14 >> 0x20);
  uVar27 = (uint)(uVar15 >> 0x20);
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar25._0_8_ = uVar14 & (ulonglong)(auVar24._0_8_ * dVar23);
  uVar6 = uVar15 & (ulonglong)(auVar24._8_8_ * dVar26);
  auVar25._8_4_ = (undefined4)uVar6;
  auVar25._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  param_3->X = (double)SUB168(auVar25 | auVar16,0);
  param_3->Y = (double)SUB168(auVar25 | auVar16,8);
  auVar22 = divpd((undefined1  [16])_Var9.m128d_f64,auVar22);
  auVar21._0_4_ = ~(uint)uVar14 & SUB84((double)fVar2,0);
  auVar21._4_4_ = ~uVar11 & (uint)((ulonglong)(double)fVar2 >> 0x20);
  auVar21._8_4_ = ~(uint)uVar15 & SUB84((double)fVar4,0);
  auVar21._12_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar4 >> 0x20);
  auVar17._0_8_ = (ulonglong)(auVar22._0_8_ * dVar7) & uVar14;
  uVar15 = (ulonglong)(auVar22._8_8_ * dVar8) & uVar15;
  auVar17._8_4_ = (undefined4)uVar15;
  auVar17._12_4_ = (undefined4)(uVar15 >> 0x20);
  param_3->Z = (double)SUB168(auVar21 | auVar17,0);
  param_3->W = (double)SUB168(auVar21 | auVar17,8);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

