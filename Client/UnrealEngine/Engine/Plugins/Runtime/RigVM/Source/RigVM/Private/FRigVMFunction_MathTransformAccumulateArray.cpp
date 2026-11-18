// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a155330

UScriptStruct * __cdecl FRigVMFunction_MathTransformAccumulateArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray,
                         (UObject *)pUVar1,L"RigVMFunction_MathTransformAccumulateArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a1553b0

UScriptStruct * __thiscall
FRigVMFunction_MathTransformAccumulateArray::GetExecuteContextStruct
          (FRigVMFunction_MathTransformAccumulateArray *this)

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

// GetUnitLabel @ 14a1554f0

FString * __thiscall
FRigVMFunction_MathTransformAccumulateArray::GetUnitLabel
          (FRigVMFunction_MathTransformAccumulateArray *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  int *piVar2;
  
  pFVar1 = &RelativeLabel;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&RelativeLabel,L"Make Transform Array Relative");
      atexit(`FRigVMFunction_MathTransformAccumulateArray::GetUnitLabel'::__l2::
             _dynamic_atexit_destructor_for__RelativeLabel__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar2 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&AbsoluteLabel,L"Make Transform Array Absolute");
      atexit(`FRigVMFunction_MathTransformAccumulateArray::GetUnitLabel'::__l2::
             _dynamic_atexit_destructor_for__AbsoluteLabel__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (this->TargetSpace == GlobalSpace) {
    pFVar1 = &AbsoluteLabel;
  }
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// Execute @ 14a155610

/* WARNING: Removing unreachable block (ram,0x00014a15577a) */
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
FRigVMFunction_MathTransformAccumulateArray::Execute
          (FRigVMFunction_MathTransformAccumulateArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int_const_,int> local_128;
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
  iVar1 = (this->ParentIndices).ArrayNum;
  local_118.NameCache =
       &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        StaticNameCache;
  local_128.DataPtr = (int *)(this->ParentIndices).AllocatorInstance.Data;
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
  StaticExecute(&local_118,&this->Transforms,this->TargetSpace,&this->Root,&local_128);
  if (local_118.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// Execute @ 14a1a1fe0

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
FRigVMFunction_MathTransformAccumulateArray::Execute
          (FRigVMFunction_MathTransformAccumulateArray *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int_const_,int> local_18;
  
  local_18.DataPtr = (int *)(this->ParentIndices).AllocatorInstance.Data;
  iVar1 = (this->ParentIndices).ArrayNum;
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
  StaticExecute(param_1,&this->Transforms,this->TargetSpace,&this->Root,&local_18);
  return;
}

// RigVMExecute @ 14a1cb4c0

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
FRigVMFunction_MathTransformAccumulateArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigVMTransformSpace EVar1;
  int iVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  ERigVMTransformSpace *pEVar6;
  TTransform<double> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  FRigVMExecuteContext *pFVar10;
  TArrayView<int_const_,int> local_28;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pTVar3 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)param_2->DataPtr->Ptr
  ;
  if (iVar2 < 2) {
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
    pEVar6 = pFVar8[1].Ptr;
  }
  else {
    pEVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  EVar1 = *pEVar6;
  if (iVar2 < 3) {
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
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TTransform<double> *)pFVar8[2].Ptr;
  }
  else {
    pTVar7 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  local_28.DataPtr = *(int **)puVar9;
  local_28.ArrayNum = *(int *)(puVar9 + 8);
  if (local_28.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar10,pTVar3,EVar1,pTVar7,&local_28);
  return;
}

// StaticExecute @ 14a1e2b00

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

void __cdecl
FRigVMFunction_MathTransformAccumulateArray::StaticExecute
          (FRigVMExecuteContext *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          ERigVMTransformSpace param_3,TTransform<double> *param_4,
          TArrayView<int_const_,int> *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  TTransform<double> *pTVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStack_268 [32];
  ulonglong local_248;
  longlong local_240;
  TArrayView<int_const_,int> *local_238;
  TTransform<double> *local_230;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_268;
  iVar20 = param_2->ArrayNum;
  local_238 = param_5;
  if ((iVar20 != 0) && ((iVar1 = param_5->ArrayNum, iVar1 < 1 || (iVar1 == iVar20)))) {
    local_230 = param_4;
    if (param_3 == LocalSpace) {
      uVar21 = iVar20 - 1;
      uVar22 = (ulonglong)uVar21;
      if (iVar1 == 0) {
        if (-1 < (int)uVar21) {
          lVar24 = (longlong)(int)uVar21 * 0x60;
          do {
            uVar21 = (uint)uVar22;
            uVar23 = uVar21 - 1;
            pTVar18 = local_230;
            if (uVar21 != 0) {
              uVar17 = 0;
              if ((int)uVar23 < param_2->ArrayNum) {
                uVar17 = -uVar21 >> 0x1f;
              }
              if (uVar17 == 0) {
                local_248 = (longlong)(int)uVar21 - 1;
                local_240 = (longlong)param_2->ArrayNum;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pTVar18 = (TTransform<double> *)
                        ((param_2->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60 + -0x60);
            }
            uVar17 = 0;
            if ((int)uVar21 < param_2->ArrayNum) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (local_248 = uVar22, local_240 = (longlong)param_2->ArrayNum,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar18 = UE::Math::TTransform<double>::GetRelativeTransform
                                ((TTransform<double> *)
                                 ((param_2->AllocatorInstance).Data + uVar22 * 0x60),&local_168,
                                 pTVar18);
            dVar4 = (pTVar18->Rotation).XY.m128d_f64[0];
            dVar5 = (pTVar18->Rotation).XY.m128d_f64[1];
            dVar6 = (pTVar18->Rotation).ZW.m128d_f64[0];
            dVar7 = (pTVar18->Rotation).ZW.m128d_f64[1];
            dVar8 = (pTVar18->Translation).XY.m128d_f64[0];
            dVar9 = (pTVar18->Translation).XY.m128d_f64[1];
            dVar10 = (pTVar18->Translation).ZW.m128d_f64[0];
            dVar11 = (pTVar18->Translation).ZW.m128d_f64[1];
            dVar12 = (pTVar18->Scale3D).XY.m128d_f64[0];
            dVar13 = (pTVar18->Scale3D).XY.m128d_f64[1];
            dVar14 = (pTVar18->Scale3D).ZW.m128d_f64[0];
            dVar15 = (pTVar18->Scale3D).ZW.m128d_f64[1];
            uVar17 = 0;
            if ((int)uVar21 < param_2->ArrayNum) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (local_248 = uVar22, local_240 = (longlong)param_2->ArrayNum,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (param_2->AllocatorInstance).Data;
            uVar22 = (ulonglong)uVar23;
            *(double *)(pFVar2 + lVar24) = dVar4;
            *(double *)(pFVar2 + lVar24 + 8) = dVar5;
            *(double *)(pFVar2 + lVar24 + 0x10) = dVar6;
            *(double *)(pFVar2 + lVar24 + 0x10 + 8) = dVar7;
            *(double *)(pFVar2 + lVar24 + 0x20) = dVar8;
            *(double *)(pFVar2 + lVar24 + 0x20 + 8) = dVar9;
            *(double *)(pFVar2 + lVar24 + 0x30) = dVar10;
            *(double *)(pFVar2 + lVar24 + 0x30 + 8) = dVar11;
            *(double *)(pFVar2 + lVar24 + 0x40) = dVar12;
            *(double *)(pFVar2 + lVar24 + 0x40 + 8) = dVar13;
            *(double *)(pFVar2 + lVar24 + 0x50) = dVar14;
            *(double *)(pFVar2 + lVar24 + 0x50 + 8) = dVar15;
            lVar24 = lVar24 + -0x60;
          } while (-1 < (int)uVar23);
        }
      }
      else if (-1 < (int)uVar21) {
        uVar25 = (ulonglong)(int)uVar21;
        lVar24 = uVar25 * 0x60;
        do {
          uVar23 = (uint)uVar22;
          puVar19 = (uint *)TArrayView<int_const_,int>::operator[](local_238,uVar23);
          uVar21 = *puVar19;
          pTVar18 = param_4;
          if ((uVar21 != 0xffffffff) && ((int)uVar21 < (int)uVar23)) {
            uVar17 = 0;
            if ((int)uVar21 < param_2->ArrayNum) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (local_248 = (longlong)(int)uVar21, local_240 = (longlong)param_2->ArrayNum,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar18 = (TTransform<double> *)
                      ((param_2->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60);
          }
          uVar21 = 0;
          if ((int)uVar23 < param_2->ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_248 = uVar25, local_240 = (longlong)param_2->ArrayNum,
             bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar18 = UE::Math::TTransform<double>::GetRelativeTransform
                              ((TTransform<double> *)((param_2->AllocatorInstance).Data + lVar24),
                               &local_108,pTVar18);
          dVar4 = (pTVar18->Rotation).XY.m128d_f64[0];
          dVar5 = (pTVar18->Rotation).XY.m128d_f64[1];
          dVar6 = (pTVar18->Rotation).ZW.m128d_f64[0];
          dVar7 = (pTVar18->Rotation).ZW.m128d_f64[1];
          dVar8 = (pTVar18->Translation).XY.m128d_f64[0];
          dVar9 = (pTVar18->Translation).XY.m128d_f64[1];
          dVar10 = (pTVar18->Translation).ZW.m128d_f64[0];
          dVar11 = (pTVar18->Translation).ZW.m128d_f64[1];
          dVar12 = (pTVar18->Scale3D).XY.m128d_f64[0];
          dVar13 = (pTVar18->Scale3D).XY.m128d_f64[1];
          dVar14 = (pTVar18->Scale3D).ZW.m128d_f64[0];
          dVar15 = (pTVar18->Scale3D).ZW.m128d_f64[1];
          uVar21 = 0;
          if ((int)uVar23 < param_2->ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_248 = uVar25, local_240 = (longlong)param_2->ArrayNum,
             bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_2->AllocatorInstance).Data;
          uVar25 = uVar25 - 1;
          *(double *)(pFVar2 + lVar24) = dVar4;
          *(double *)(pFVar2 + lVar24 + 8) = dVar5;
          *(double *)(pFVar2 + lVar24 + 0x10) = dVar6;
          *(double *)(pFVar2 + lVar24 + 0x10 + 8) = dVar7;
          *(double *)(pFVar2 + lVar24 + 0x20) = dVar8;
          *(double *)(pFVar2 + lVar24 + 0x20 + 8) = dVar9;
          *(double *)(pFVar2 + lVar24 + 0x30) = dVar10;
          *(double *)(pFVar2 + lVar24 + 0x30 + 8) = dVar11;
          *(double *)(pFVar2 + lVar24 + 0x40) = dVar12;
          *(double *)(pFVar2 + lVar24 + 0x40 + 8) = dVar13;
          *(double *)(pFVar2 + lVar24 + 0x50) = dVar14;
          *(double *)(pFVar2 + lVar24 + 0x50 + 8) = dVar15;
          lVar24 = lVar24 + -0x60;
          uVar22 = (ulonglong)(uVar23 - 1);
        } while (-1 < (int)(uVar23 - 1));
      }
    }
    else {
      uVar21 = 0;
      if (iVar1 == 0) {
        if (0 < iVar20) {
          lVar24 = 0;
          do {
            pTVar18 = param_4;
            if (uVar21 != 0) {
              iVar1 = uVar21 - 1;
              uVar23 = 0;
              if (iVar1 < iVar20) {
                uVar23 = -uVar21 >> 0x1f;
              }
              if (uVar23 == 0) {
                local_240 = (longlong)iVar20;
                local_248 = (ulonglong)iVar1;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pTVar18 = (TTransform<double> *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar1 * 0x60);
            }
            uVar23 = 0;
            if ((int)uVar21 < param_2->ArrayNum) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            if (uVar23 == 0) {
              local_248 = (ulonglong)(int)uVar21;
              local_240 = (longlong)param_2->ArrayNum;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            local_228.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_228.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_228.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_228.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_228.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_228.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_228.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_228.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_228.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_228.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_228,
                       (TTransform<double> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60),pTVar18);
            dVar13 = local_228.Scale3D.ZW.m128d_f64[1];
            dVar12 = local_228.Scale3D.ZW.m128d_f64[0];
            dVar11 = local_228.Translation.ZW.m128d_f64[1];
            dVar10 = local_228.Translation.ZW.m128d_f64[0];
            dVar7 = local_228.Rotation.ZW.m128d_f64[1];
            dVar6 = local_228.Rotation.ZW.m128d_f64[0];
            dVar5 = local_228.Rotation.XY.m128d_f64[1];
            dVar4 = local_228.Rotation.XY.m128d_f64[0];
            dVar8 = local_228.Translation.XY.m128d_f64[0];
            dVar9 = local_228.Translation.XY.m128d_f64[1];
            uVar23 = 0;
            if ((int)uVar21 < param_2->ArrayNum) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            dVar14 = local_228.Scale3D.XY.m128d_f64[0];
            dVar15 = local_228.Scale3D.XY.m128d_f64[1];
            if ((uVar23 == 0) &&
               (local_248 = (longlong)(int)uVar21, local_240 = (longlong)param_2->ArrayNum,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (param_2->AllocatorInstance).Data;
            uVar21 = uVar21 + 1;
            *(double *)(pFVar2 + lVar24) = dVar4;
            *(double *)(pFVar2 + lVar24 + 8) = dVar5;
            *(double *)(pFVar2 + lVar24 + 0x10) = dVar6;
            *(double *)(pFVar2 + lVar24 + 0x10 + 8) = dVar7;
            *(double *)(pFVar2 + lVar24 + 0x20) = dVar8;
            *(double *)(pFVar2 + lVar24 + 0x20 + 8) = dVar9;
            *(double *)(pFVar2 + lVar24 + 0x30) = dVar10;
            *(double *)(pFVar2 + lVar24 + 0x30 + 8) = dVar11;
            *(double *)(pFVar2 + lVar24 + 0x40) = dVar14;
            *(double *)(pFVar2 + lVar24 + 0x40 + 8) = dVar15;
            *(double *)(pFVar2 + lVar24 + 0x50) = dVar12;
            *(double *)(pFVar2 + lVar24 + 0x50 + 8) = dVar13;
            lVar24 = lVar24 + 0x60;
            iVar20 = param_2->ArrayNum;
          } while ((int)uVar21 < iVar20);
        }
      }
      else if (0 < iVar20) {
        lVar24 = 0;
        do {
          puVar19 = (uint *)TArrayView<int_const_,int>::operator[](local_238,uVar21);
          uVar23 = *puVar19;
          pTVar18 = param_4;
          if ((uVar23 != 0xffffffff) && ((int)uVar23 < (int)uVar21)) {
            uVar17 = 0;
            if ((int)uVar23 < param_2->ArrayNum) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (local_248 = (longlong)(int)uVar23, local_240 = (longlong)param_2->ArrayNum,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar18 = (TTransform<double> *)
                      ((param_2->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x60);
          }
          uVar23 = 0;
          if ((int)uVar21 < param_2->ArrayNum) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          if (uVar23 == 0) {
            local_248 = (ulonglong)(int)uVar21;
            local_240 = (longlong)param_2->ArrayNum;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_1c8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1c8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1c8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_1c8,
                     (TTransform<double> *)
                     ((param_2->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60),pTVar18);
          dVar13 = local_1c8.Scale3D.ZW.m128d_f64[1];
          dVar12 = local_1c8.Scale3D.ZW.m128d_f64[0];
          dVar11 = local_1c8.Translation.ZW.m128d_f64[1];
          dVar10 = local_1c8.Translation.ZW.m128d_f64[0];
          dVar7 = local_1c8.Rotation.ZW.m128d_f64[1];
          dVar6 = local_1c8.Rotation.ZW.m128d_f64[0];
          dVar5 = local_1c8.Rotation.XY.m128d_f64[1];
          dVar4 = local_1c8.Rotation.XY.m128d_f64[0];
          dVar8 = local_1c8.Translation.XY.m128d_f64[0];
          dVar9 = local_1c8.Translation.XY.m128d_f64[1];
          uVar23 = 0;
          if ((int)uVar21 < param_2->ArrayNum) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          dVar14 = local_1c8.Scale3D.XY.m128d_f64[0];
          dVar15 = local_1c8.Scale3D.XY.m128d_f64[1];
          if ((uVar23 == 0) &&
             (local_248 = (longlong)(int)uVar21, local_240 = (longlong)param_2->ArrayNum,
             bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_2->AllocatorInstance).Data;
          uVar21 = uVar21 + 1;
          *(double *)(pFVar2 + lVar24) = dVar4;
          *(double *)(pFVar2 + lVar24 + 8) = dVar5;
          *(double *)(pFVar2 + lVar24 + 0x10) = dVar6;
          *(double *)(pFVar2 + lVar24 + 0x10 + 8) = dVar7;
          *(double *)(pFVar2 + lVar24 + 0x20) = dVar8;
          *(double *)(pFVar2 + lVar24 + 0x20 + 8) = dVar9;
          *(double *)(pFVar2 + lVar24 + 0x30) = dVar10;
          *(double *)(pFVar2 + lVar24 + 0x30 + 8) = dVar11;
          *(double *)(pFVar2 + lVar24 + 0x40) = dVar14;
          *(double *)(pFVar2 + lVar24 + 0x40 + 8) = dVar15;
          *(double *)(pFVar2 + lVar24 + 0x50) = dVar12;
          *(double *)(pFVar2 + lVar24 + 0x50 + 8) = dVar13;
          lVar24 = lVar24 + 0x60;
        } while ((int)uVar21 < param_2->ArrayNum);
      }
    }
  }
  return;
}

