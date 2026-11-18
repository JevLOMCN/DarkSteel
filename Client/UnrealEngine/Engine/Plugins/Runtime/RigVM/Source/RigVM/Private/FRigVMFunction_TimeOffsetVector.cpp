// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a15f790

UScriptStruct * __cdecl FRigVMFunction_TimeOffsetVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector,(UObject *)pUVar1
                         ,L"RigVMFunction_TimeOffsetVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetVector.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a15f810

UScriptStruct * __thiscall
FRigVMFunction_TimeOffsetVector::GetExecuteContextStruct(FRigVMFunction_TimeOffsetVector *this)

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

// Initialize @ 14a15fb30

void __thiscall FRigVMFunction_TimeOffsetVector::Initialize(FRigVMFunction_TimeOffsetVector *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  return;
}

// Execute @ 14a15fb70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRigVMFunction_TimeOffsetVector::Execute(FRigVMFunction_TimeOffsetVector *this)

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
  StaticExecute(&local_118,&this->Value,this->SecondsAgo,this->BufferSize,this->TimeRange,
                &this->Result,&this->Buffer,&this->DeltaTimes,&this->LastInsertIndex,
                &this->UpperBound);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a4290

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
FRigVMFunction_TimeOffsetVector::Execute
          (FRigVMFunction_TimeOffsetVector *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->SecondsAgo,this->BufferSize,this->TimeRange,&this->Result
                ,&this->Buffer,&this->DeltaTimes,&this->LastInsertIndex,&this->UpperBound);
  return;
}

// RigVMExecute @ 14a1d4df0

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
FRigVMFunction_TimeOffsetVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  float *pfVar7;
  int *piVar8;
  FRigVMMemoryHandle *pFVar9;
  TVector<double> *pTVar10;
  FRigVMSlice *pFVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  int *piVar14;
  FRigVMExecuteContext *pFVar15;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar9->Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
    ;
  }
  if (iVar3 < 2) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar9[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  fVar1 = *pfVar7;
  if (iVar3 < 3) {
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar8 = (int *)pFVar9[2].Ptr;
  }
  else {
    piVar8 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  iVar3 = *piVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar7 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar2 = *pfVar7;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar10 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar12 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar8 = (int *)FRigVMMemoryHandle::GetData_Internal
                            (pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  piVar14 = (int *)FRigVMMemoryHandle::GetData_Internal
                             (pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar15,pTVar6,fVar1,iVar3,fVar2,pTVar10,pTVar12,pTVar13,piVar8,piVar14);
  return;
}

// StaticExecute @ 14a1e9130

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
FRigVMFunction_TimeOffsetVector::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,float param_3,int param_4,
          float param_5,TVector<double> *param_6,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<float,TSizedDefaultAllocator<32>_> *param_8,int *param_9,int *param_10)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double local_c8;
  double local_b0;
  
  pTVar6 = param_7;
  dVar15 = (param_2->field0_0x0)._s_0.Y;
  (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_6->field0_0x0)._s_0.Y = dVar15;
  (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if ((param_4 < 1) || (fVar23 = 0.0, param_5 <= 0.0)) {
    dVar15 = (param_2->field0_0x0)._s_0.Y;
    (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_6->field0_0x0)._s_0.Y = dVar15;
    (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    return;
  }
  if (param_7->ArrayNum == 0) {
    *param_10 = 0;
  }
  uVar8 = 0x200;
  if (param_4 < 0x200) {
    uVar8 = param_4;
  }
  uVar10 = 2;
  if (2 < uVar8) {
    uVar10 = uVar8;
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_7,uVar10,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_8,uVar10,Default);
  uVar8 = param_7->ArrayNum;
  if ((int)uVar10 < param_7->ArrayNum) {
    uVar8 = uVar10;
  }
  if (*param_10 == 0) {
    dVar15 = (param_2->field0_0x0)._s_0.Y;
    (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (param_6->field0_0x0)._s_0.Y = dVar15;
    (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    local_b0 = (param_2->field0_0x0)._s_0.Z;
    uVar17 = *(undefined4 *)&param_2->field0_0x0;
    uVar18 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar24 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar25 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    uVar10 = *param_9;
    uVar12 = (ulonglong)(int)uVar10;
    uVar11 = 0;
    if ((int)uVar10 < param_8->ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_3 < *(float *)((param_8->AllocatorInstance).Data + uVar12 * 4)) || (*param_10 == 1))
    {
      uVar11 = 0;
      if ((int)uVar10 < param_7->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (param_7->AllocatorInstance).Data;
      local_c8 = *(double *)(pFVar9 + uVar12 * 0x18 + 0x10);
      pFVar9 = pFVar9 + uVar12 * 0x18;
      uVar19 = *(undefined4 *)pFVar9;
      uVar20 = *(undefined4 *)(pFVar9 + 4);
      uVar21 = *(undefined4 *)(pFVar9 + 8);
      uVar22 = *(undefined4 *)(pFVar9 + 0xc);
      uVar11 = 0;
      if ((int)uVar10 < param_8->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar23 = param_3 / *(float *)((param_8->AllocatorInstance).Data + uVar12 * 4);
    }
    else {
      param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
      fVar16 = 0.0;
      uVar19 = uVar17;
      uVar20 = uVar18;
      uVar21 = uVar24;
      uVar22 = uVar25;
      local_c8 = local_b0;
      if (0 < *param_10) {
        do {
          uVar11 = (uint)uVar12;
          uVar14 = ~uVar11 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar11 < pTVar6->ArrayNum) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = (pTVar6->AllocatorInstance).Data;
          lVar13 = (longlong)(int)uVar11;
          local_c8 = *(double *)(pFVar9 + lVar13 * 0x18 + 0x10);
          pFVar9 = pFVar9 + lVar13 * 0x18;
          uVar19 = *(undefined4 *)pFVar9;
          uVar20 = *(undefined4 *)(pFVar9 + 4);
          uVar21 = *(undefined4 *)(pFVar9 + 8);
          uVar22 = *(undefined4 *)(pFVar9 + 0xc);
          if (param_3 <= fVar16) {
            uVar10 = 0;
            if ((int)uVar11 < param_8->ArrayNum) {
              uVar10 = uVar14;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar23 = __real_3f800000 -
                     (fVar16 - param_3) / *(float *)((param_8->AllocatorInstance).Data + lVar13 * 4)
            ;
            break;
          }
          uVar10 = 0;
          if ((int)uVar11 < param_8->ArrayNum) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar1 = *param_10;
          fVar16 = fVar16 + *(float *)((param_8->AllocatorInstance).Data + lVar13 * 4);
          uVar12 = (longlong)(int)(iVar1 + -1 + uVar11) % (longlong)iVar1 & 0xffffffff;
          uVar10 = (int)param_7 + 1;
          param_7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                    (ulonglong)uVar10;
          uVar17 = uVar19;
          uVar18 = uVar20;
          uVar24 = uVar21;
          uVar25 = uVar22;
          local_b0 = local_c8;
        } while ((int)uVar10 < iVar1);
      }
    }
    dVar15 = (double)fVar23;
    (param_6->field0_0x0)._s_0.X =
         ((double)CONCAT44(uVar20,uVar19) - (double)CONCAT44(uVar18,uVar17)) * dVar15 +
         (double)CONCAT44(uVar18,uVar17);
    (param_6->field0_0x0)._s_0.Y =
         ((double)CONCAT44(uVar22,uVar21) - (double)CONCAT44(uVar25,uVar24)) * dVar15 +
         (double)CONCAT44(uVar25,uVar24);
    (param_6->field0_0x0)._s_0.Z = (local_c8 - local_b0) * dVar15 + local_b0;
  }
  if (param_1->DeltaTime <= __real_3e45798ee0000000) {
    return;
  }
  if (*param_10 == 0) {
    *param_9 = 0;
    uVar8 = *param_10;
    dVar4 = (param_2->field0_0x0)._s_0.X;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    dVar15 = (param_2->field0_0x0)._s_0.Z;
    uVar10 = 0;
    if ((int)uVar8 < pTVar6->ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    pFVar9 = pFVar2 + (longlong)(int)uVar8 * 0x18;
    *(double *)pFVar9 = dVar4;
    *(double *)(pFVar9 + 8) = dVar5;
    *(double *)(pFVar2 + (longlong)(int)uVar8 * 0x18 + 0x10) = dVar15;
    uVar8 = *param_10;
    dVar15 = param_1->DeltaTime;
    *param_10 = uVar8 + 1;
    uVar10 = 0;
    if ((int)uVar8 < param_8->ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
  }
  else {
    uVar10 = *param_9;
    uVar11 = 0;
    if ((int)uVar10 < param_8->ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar15 = param_1->DeltaTime;
    if (*(float *)((param_8->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) <=
        param_5 / (float)(int)(uVar8 - 1) - (float)dVar15 * __real_3f000000) {
      uVar8 = *param_9;
      lVar13 = (longlong)(int)uVar8;
      uVar10 = 0;
      if ((int)uVar8 < param_8->ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (param_8->AllocatorInstance).Data;
      fVar23 = (float)dVar15 + *(float *)(pFVar9 + lVar13 * 4);
      goto LAB_14a1e984c;
    }
    iVar1 = *param_10;
    if (iVar1 < (int)uVar8) {
      *param_9 = iVar1;
      uVar8 = *param_10;
      dVar4 = (param_2->field0_0x0)._s_0.X;
      dVar5 = (param_2->field0_0x0)._s_0.Y;
      dVar15 = (param_2->field0_0x0)._s_0.Z;
      uVar10 = 0;
      if ((int)uVar8 < pTVar6->ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      pFVar9 = pFVar2 + (longlong)(int)uVar8 * 0x18;
      *(double *)pFVar9 = dVar4;
      *(double *)(pFVar9 + 8) = dVar5;
      *(double *)(pFVar2 + (longlong)(int)uVar8 * 0x18 + 0x10) = dVar15;
      uVar8 = *param_10;
      uVar17 = SUB84(param_1->DeltaTime,0);
      uVar18 = (undefined4)((ulonglong)param_1->DeltaTime >> 0x20);
      *param_10 = uVar8 + 1;
    }
    else {
      uVar10 = (*param_9 + 1) % iVar1;
      *param_9 = uVar10;
      dVar4 = (param_2->field0_0x0)._s_0.X;
      dVar5 = (param_2->field0_0x0)._s_0.Y;
      dVar15 = (param_2->field0_0x0)._s_0.Z;
      uVar8 = 0;
      if ((int)uVar10 < pTVar6->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      pFVar9 = pFVar2 + (longlong)(int)uVar10 * 0x18;
      *(double *)pFVar9 = dVar4;
      *(double *)(pFVar9 + 8) = dVar5;
      *(double *)(pFVar2 + (longlong)(int)uVar10 * 0x18 + 0x10) = dVar15;
      uVar8 = *param_9;
      uVar17 = SUB84(param_1->DeltaTime,0);
      uVar18 = (undefined4)((ulonglong)param_1->DeltaTime >> 0x20);
    }
    dVar15 = (double)CONCAT44(uVar18,uVar17);
    uVar10 = 0;
    if ((int)uVar8 < param_8->ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
  }
  lVar13 = (longlong)(int)uVar8;
  fVar23 = (float)dVar15;
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = (param_8->AllocatorInstance).Data;
LAB_14a1e984c:
  *(float *)(pFVar9 + lVar13 * 4) = fVar23;
  return;
}

