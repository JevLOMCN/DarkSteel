// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a164c70

UScriptStruct * __cdecl FRigVMFunction_MathRBFInterpolateQuatQuat::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat,
                         (UObject *)pUVar1,L"RigVMFunction_MathRBFInterpolateQuatQuat");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat.OuterSingleton;
}

// GetExecuteContextStruct @ 14a164cf0

UScriptStruct * __thiscall
FRigVMFunction_MathRBFInterpolateQuatQuat::GetExecuteContextStruct
          (FRigVMFunction_MathRBFInterpolateQuatQuat *this)

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

// Execute @ 14a169da0

/* WARNING: Removing unreachable block (ram,0x00014a169f34) */
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
FRigVMFunction_MathRBFInterpolateQuatQuat::Execute(FRigVMFunction_MathRBFInterpolateQuatQuat *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateQuatQuat_Target_const_,int> local_128;
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
  local_128.DataPtr = (FMathRBFInterpolateQuatQuat_Target *)(this->Targets).AllocatorInstance.Data;
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
  StaticExecute(&local_118,&local_128,&this->Output,(TQuat<double> *)&this->_padding_,
                (ERBFQuatDistanceType)this->_padding_,
                *(ERBFKernelType *)((longlong)&this->_padding_ + 1),
                *(float *)((longlong)&this->_padding_ + 4),SUB81(this->_padding_,0),
                (TVector<double> *)&this->_padding_,
                (FRigVMFunction_MathRBFInterpolateQuatWorkData *)&this->_padding_);
  if (local_118.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// FRigVMFunction_MathRBFInterpolateQuatQuat @ 14a18e220

FRigVMFunction_MathRBFInterpolateQuatQuat * __thiscall
FRigVMFunction_MathRBFInterpolateQuatQuat::FRigVMFunction_MathRBFInterpolateQuatQuat
          (FRigVMFunction_MathRBFInterpolateQuatQuat *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRBFInterpolateQuatBase__6B_;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  this->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.X;
  this->_padding_ = (longlong)dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  this->_padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
  this->_padding_ = (longlong)dVar2;
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x42340000;
  *(undefined1 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
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
  this->_padding_ = (longlong)&___7FRigVMFunction_MathRBFInterpolateQuatQuat__6B_;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Output).X = UE::Math::TQuat<double>::Identity.X;
  (this->Output).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Output).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Output).W = dVar2;
  return this;
}

// ~FRigVMFunction_MathRBFInterpolateQuatQuat @ 14a191900

void __thiscall
FRigVMFunction_MathRBFInterpolateQuatQuat::~FRigVMFunction_MathRBFInterpolateQuatQuat
          (FRigVMFunction_MathRBFInterpolateQuatQuat *this)

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

// Execute @ 14a1a1930

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
FRigVMFunction_MathRBFInterpolateQuatQuat::Execute
          (FRigVMFunction_MathRBFInterpolateQuatQuat *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMathRBFInterpolateQuatQuat_Target_const_,int> local_18;
  
  local_18.DataPtr = (FMathRBFInterpolateQuatQuat_Target *)(this->Targets).AllocatorInstance.Data;
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
  StaticExecute(param_1,&local_18,&this->Output,(TQuat<double> *)&this->_padding_,
                (ERBFQuatDistanceType)this->_padding_,
                *(ERBFKernelType *)((longlong)&this->_padding_ + 1),
                *(float *)((longlong)&this->_padding_ + 4),SUB81(this->_padding_,0),
                (TVector<double> *)&this->_padding_,
                (FRigVMFunction_MathRBFInterpolateQuatWorkData *)&this->_padding_);
  return;
}

// RigVMExecute @ 14a1c9910

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
FRigVMFunction_MathRBFInterpolateQuatQuat::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERBFQuatDistanceType EVar2;
  ERBFKernelType EVar3;
  int iVar4;
  TQuat<double> *pTVar5;
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
  TArrayView<FMathRBFInterpolateQuatQuat_Target_const_,int> local_58 [2];
  
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
  local_58[0].DataPtr = *(FMathRBFInterpolateQuatQuat_Target **)puVar9;
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

// StaticExecute @ 14a1e08a0

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
FRigVMFunction_MathRBFInterpolateQuatQuat::StaticExecute
          (FRigVMExecuteContext *param_1,
          TArrayView<FMathRBFInterpolateQuatQuat_Target_const_,int> *param_2,TQuat<double> *param_3,
          TQuat<double> *param_4,ERBFQuatDistanceType param_5,ERBFKernelType param_6,float param_7,
          bool param_8,TVector<double> *param_9,
          FRigVMFunction_MathRBFInterpolateQuatWorkData *param_10)

{
  double *pdVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  __m128d _Var10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar19;
  double dVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar31;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  TArrayView<FMathRBFInterpolateQuatQuat_Target_const_,int> local_68;
  TVector<double>_u_0 local_58 [2];
  
  local_68.DataPtr = param_2->DataPtr;
  local_68.ArrayNum = param_2->ArrayNum;
  if ((local_68.ArrayNum < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0]._0_8_ = (param_9->field0_0x0)._s_0.X;
  local_58[0]._8_8_ = (param_9->field0_0x0)._s_0.Y;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_58[0]._16_8_ = (param_9->field0_0x0)._s_0.Z;
  FRigVMFunction_MathRBFInterpolateQuatBase::
  GetInterpolatedWeights<FMathRBFInterpolateQuatQuat_Target>
            (param_10,&local_68,param_4,param_5,param_6,param_7,param_8,
             (TVector<double> *)&local_58[0]._s_0,&local_78);
  dVar21 = UE::Math::TQuat<double>::Identity.Y;
  uVar12 = 0;
  param_3->X = UE::Math::TQuat<double>::Identity.X;
  param_3->Y = dVar21;
  auVar25 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
  dVar21 = UE::Math::TQuat<double>::Identity.W;
  param_3->Z = UE::Math::TQuat<double>::Identity.Z;
  param_3->W = dVar21;
  if (0 < param_2->ArrayNum) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      uVar31 = 0;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar31 = ~uVar12 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar19 = auVar25._8_8_;
      fVar2 = *(float *)(local_78.AllocatorInstance.Data + lVar13);
      uVar31 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar31 = ~uVar12 >> 0x1f;
      }
      if (uVar31 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        uVar19 = auVar25._8_8_;
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      dVar21 = (double)fVar2;
      auVar27._8_4_ = SUB84(dVar21,0);
      auVar27._0_8_ = dVar21;
      auVar27._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      pdVar1 = (double *)((longlong)&(param_2->DataPtr->Value).X + lVar14);
      dVar26 = dVar21 * *pdVar1;
      dVar30 = auVar27._8_8_ * pdVar1[1];
      pdVar1 = (double *)((longlong)&(param_2->DataPtr->Value).Z + lVar14);
      dVar22 = dVar21 * *pdVar1;
      dVar21 = dVar21 * pdVar1[1];
      auVar6._4_8_ = uVar19;
      auVar6._0_4_ = (int)((ulonglong)dVar22 >> 0x20);
      auVar28._0_8_ = auVar6._0_8_ << 0x20;
      auVar28._8_4_ = SUB84(dVar21,0);
      auVar28._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      auVar25._0_8_ = auVar28._8_8_ * param_3->W + dVar22 * param_3->Z;
      auVar25._8_8_ = dVar21;
      if (dVar30 * param_3->Y + dVar26 * param_3->X + auVar25._0_8_ < 0.0) {
        dVar21 = param_3->W - dVar21;
        in_XMM4._0_8_ = param_3->X - dVar26;
        in_XMM4._8_8_ = param_3->Y - dVar30;
        auVar23._8_4_ = SUB84(dVar21,0);
        auVar23._0_8_ = param_3->Z - dVar22;
        auVar23._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      }
      else {
        in_XMM4._0_8_ = param_3->X + dVar26;
        in_XMM4._8_8_ = param_3->Y + dVar30;
        auVar23._0_8_ = dVar22 + param_3->Z;
        auVar23._8_8_ = dVar21 + param_3->W;
      }
      param_3->X = (double)in_XMM4._0_8_;
      param_3->Y = (double)in_XMM4._8_8_;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
      param_3->Z = (double)auVar23._0_8_;
      param_3->W = (double)auVar23._8_8_;
      lVar14 = lVar14 + 0x40;
    } while ((int)uVar12 < param_2->ArrayNum);
  }
  _Var10.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
  dVar26 = param_3->X;
  dVar30 = param_3->Y;
  dVar8 = param_3->Z;
  dVar9 = param_3->W;
  dVar22 = dVar8 * dVar8 + dVar26 * dVar26;
  dVar20 = dVar9 * dVar9 + dVar30 * dVar30;
  dVar21 = dVar20 + dVar22;
  dVar22 = dVar22 + dVar20;
  auVar5._8_4_ = SUB84(dVar22,0);
  auVar5._0_8_ = dVar21;
  auVar5._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar25 = sqrtpd(in_XMM4,auVar5);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar21);
  uVar16 = -(ulonglong)(__real_3e45798ee0000000 <= dVar22);
  uVar12 = (uint)(uVar15 >> 0x20);
  uVar31 = (uint)(uVar16 >> 0x20);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar29._0_8_ = uVar15 & (ulonglong)(auVar28._0_8_ * dVar26);
  uVar7 = uVar16 & (ulonglong)(auVar28._8_8_ * dVar30);
  auVar29._8_4_ = (undefined4)uVar7;
  auVar29._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar17._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar17._4_4_ =
       ~uVar12 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar17._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._12_4_ =
       ~uVar31 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  param_3->X = (double)SUB168(auVar29 | auVar17,0);
  param_3->Y = (double)SUB168(auVar29 | auVar17,8);
  auVar25 = divpd((undefined1  [16])_Var10.m128d_f64,auVar25);
  auVar24._0_4_ = ~(uint)uVar15 & SUB84((double)fVar2,0);
  auVar24._4_4_ = ~uVar12 & (uint)((ulonglong)(double)fVar2 >> 0x20);
  auVar24._8_4_ = ~(uint)uVar16 & SUB84((double)fVar4,0);
  auVar24._12_4_ = ~uVar31 & (uint)((ulonglong)(double)fVar4 >> 0x20);
  auVar18._0_8_ = (ulonglong)(auVar25._0_8_ * dVar8) & uVar15;
  uVar16 = (ulonglong)(auVar25._8_8_ * dVar9) & uVar16;
  auVar18._8_4_ = (undefined4)uVar16;
  auVar18._12_4_ = (undefined4)(uVar16 >> 0x20);
  param_3->Z = (double)SUB168(auVar24 | auVar18,0);
  param_3->W = (double)SUB168(auVar24 | auVar18,8);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

