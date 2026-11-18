// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 8

// StaticStruct @ 14a160420

UScriptStruct * __cdecl FRigVMFunction_TimeOffsetTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform,
                         (UObject *)pUVar1,L"RigVMFunction_TimeOffsetTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetTransform.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_TimeOffsetTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a160520

UScriptStruct * __thiscall
FRigVMFunction_TimeOffsetTransform::GetExecuteContextStruct
          (FRigVMFunction_TimeOffsetTransform *this)

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

// Initialize @ 14a160900

void __thiscall
FRigVMFunction_TimeOffsetTransform::Initialize(FRigVMFunction_TimeOffsetTransform *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  return;
}

// Execute @ 14a160950

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
FRigVMFunction_TimeOffsetTransform::Execute(FRigVMFunction_TimeOffsetTransform *this)

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

// FRigVMFunction_TimeOffsetTransform @ 14a190920

FRigVMFunction_TimeOffsetTransform * __thiscall
FRigVMFunction_TimeOffsetTransform::FRigVMFunction_TimeOffsetTransform
          (FRigVMFunction_TimeOffsetTransform *this)

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
  
  *(undefined ***)this = &___7FRigVMFunction_TimeOffsetTransform__6B_;
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
  (this->DeltaTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaTimes).ArrayNum = 0;
  (this->DeltaTimes).ArrayMax = 0;
  this->SecondsAgo = 0.5;
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
  this->UpperBound = 0;
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
  this->TimeRange = 1.0;
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

// Execute @ 14a1a4210

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
FRigVMFunction_TimeOffsetTransform::Execute
          (FRigVMFunction_TimeOffsetTransform *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,this->SecondsAgo,this->BufferSize,this->TimeRange,&this->Result
                ,&this->Buffer,&this->DeltaTimes,&this->LastInsertIndex,&this->UpperBound);
  return;
}

// RigVMExecute @ 14a1d4b20

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
FRigVMFunction_TimeOffsetTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  float *pfVar7;
  int *piVar8;
  FRigVMMemoryHandle *pFVar9;
  TTransform<double> *pTVar10;
  FRigVMSlice *pFVar11;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar12;
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
    pTVar6 = (TTransform<double> *)pFVar9->Ptr;
  }
  else {
    pTVar6 = (TTransform<double> *)
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
  pTVar10 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar12 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
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

// StaticExecute @ 14a1e85a0

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
FRigVMFunction_TimeOffsetTransform::StaticExecute
          (FRigVMExecuteContext *param_1,TTransform<double> *param_2,float param_3,int param_4,
          float param_5,TTransform<double> *param_6,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<float,TSizedDefaultAllocator<32>_> *param_8,int *param_9,int *param_10)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TTransform<double> *pTVar14;
  bool bVar15;
  uint uVar16;
  TQuat<double> *pTVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_register_00001284 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  TQuat<double> local_1e8;
  TQuat<double> local_1c8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  TQuat<double> local_f8 [6];
  
  pTVar14 = param_6;
  auVar30._4_12_ = in_register_00001284;
  auVar30._0_4_ = param_3;
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  (param_6->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (param_6->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  (param_6->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (param_6->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (param_6->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (param_6->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (param_6->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (param_6->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (param_6->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (param_6->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (param_6->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (param_6->Scale3D).ZW.m128d_f64[1] = dVar1;
  if ((param_4 < 1) || (fVar41 = 0.0, param_5 <= 0.0)) {
    dVar1 = (param_2->Rotation).XY.m128d_f64[1];
    (param_6->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
    (param_6->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
    (param_6->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
    (param_6->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Translation).XY.m128d_f64[1];
    (param_6->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
    (param_6->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Translation).ZW.m128d_f64[1];
    (param_6->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
    (param_6->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
    (param_6->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
    (param_6->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
    (param_6->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
    (param_6->Scale3D).ZW.m128d_f64[1] = dVar1;
  }
  else {
    if (param_7->ArrayNum == 0) {
      *param_10 = 0;
    }
    uVar16 = 0x200;
    if (param_4 < 0x200) {
      uVar16 = param_4;
    }
    uVar20 = 2;
    if (2 < uVar16) {
      uVar20 = uVar16;
    }
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum(param_7,uVar20,Default)
    ;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_8,uVar20,Default);
    uVar37 = SUB84(__real_3e45798ee0000000,0);
    uVar38 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    local_228 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_220 = (param_2->Rotation).XY.m128d_f64[1];
    uVar16 = param_7->ArrayNum;
    if ((int)uVar20 < param_7->ArrayNum) {
      uVar16 = uVar20;
    }
    if (*param_10 == 0) {
      (param_6->Rotation).XY.m128d_f64[0] = local_228;
      (param_6->Rotation).XY.m128d_f64[1] = dStack_220;
      dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
      (param_6->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      (param_6->Rotation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_2->Translation).XY.m128d_f64[1];
      (param_6->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      (param_6->Translation).XY.m128d_f64[1] = dVar1;
      dVar1 = (param_2->Translation).ZW.m128d_f64[1];
      (param_6->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      (param_6->Translation).ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
      (param_6->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      (param_6->Scale3D).XY.m128d_f64[1] = dVar1;
      dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
      (param_6->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      (param_6->Scale3D).ZW.m128d_f64[1] = dVar1;
    }
    else {
      local_238 = (param_2->Translation).ZW.m128d_f64[0];
      uVar37 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
      uVar38 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
      uVar39 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
      uVar40 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
      uVar46 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
      uVar47 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
      uVar20 = *param_9;
      uVar22 = (ulonglong)(int)uVar20;
      local_218 = (param_2->Rotation).ZW.m128d_f64[0];
      dStack_210 = (param_2->Rotation).ZW.m128d_f64[1];
      local_248 = (param_2->Translation).XY.m128d_f64[0];
      dStack_240 = (param_2->Translation).XY.m128d_f64[1];
      uVar21 = 0;
      if ((int)uVar20 < param_8->ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      uVar50 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
      uVar51 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
      uVar52 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
      uVar53 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
      local_1f8 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
      uStack_1f4 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
      uVar54 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
      uVar55 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
      uVar56 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
      uVar57 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
      local_208 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
      uStack_204 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
      uStack_200 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
      uStack_1fc = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_3 < *(float *)((param_8->AllocatorInstance).Data + uVar22 * 4)) || (*param_10 == 1)
         ) {
        uVar21 = 0;
        if ((int)uVar20 < param_7->ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_7->AllocatorInstance).Data;
        lVar19 = uVar22 * 0x60;
        pFVar18 = pFVar3 + lVar19;
        uVar50 = *(undefined4 *)pFVar18;
        uVar51 = *(undefined4 *)(pFVar18 + 4);
        uVar52 = *(undefined4 *)(pFVar18 + 8);
        uVar53 = *(undefined4 *)(pFVar18 + 0xc);
        pFVar18 = pFVar3 + lVar19 + 0x10;
        uVar54 = *(undefined4 *)pFVar18;
        uVar55 = *(undefined4 *)(pFVar18 + 4);
        uVar56 = *(undefined4 *)(pFVar18 + 8);
        uVar57 = *(undefined4 *)(pFVar18 + 0xc);
        pFVar18 = pFVar3 + lVar19 + 0x20;
        uVar37 = *(undefined4 *)pFVar18;
        uVar38 = *(undefined4 *)(pFVar18 + 4);
        uVar39 = *(undefined4 *)(pFVar18 + 8);
        uVar40 = *(undefined4 *)(pFVar18 + 0xc);
        uVar46 = *(undefined4 *)(pFVar3 + lVar19 + 0x30);
        uVar47 = *(undefined4 *)(pFVar3 + lVar19 + 0x30 + 4);
        pFVar18 = pFVar3 + lVar19 + 0x40;
        uVar42 = *(undefined4 *)pFVar18;
        uVar43 = *(undefined4 *)(pFVar18 + 4);
        uVar44 = *(undefined4 *)(pFVar18 + 8);
        uVar45 = *(undefined4 *)(pFVar18 + 0xc);
        uVar48 = *(undefined4 *)(pFVar3 + lVar19 + 0x50);
        uVar49 = *(undefined4 *)(pFVar3 + lVar19 + 0x50 + 4);
        uVar21 = 0;
        if ((int)uVar20 < param_8->ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar41 = param_3 / *(float *)((param_8->AllocatorInstance).Data + uVar22 * 4);
      }
      else {
        param_6 = (TTransform<double> *)0x0;
        fVar36 = 0.0;
        uVar42 = local_208;
        uVar43 = uStack_204;
        uVar44 = uStack_200;
        uVar45 = uStack_1fc;
        uVar48 = local_1f8;
        uVar49 = uStack_1f4;
        if (0 < *param_10) {
          do {
            uVar21 = (uint)uVar22;
            uVar23 = ~uVar21 >> 0x1f;
            uVar20 = 0;
            if ((int)uVar21 < param_7->ArrayNum) {
              uVar20 = uVar23;
            }
            if ((uVar20 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (param_7->AllocatorInstance).Data;
            lVar24 = (longlong)(int)uVar21;
            lVar19 = lVar24 * 0x60;
            pFVar18 = pFVar3 + lVar19;
            uVar50 = *(undefined4 *)pFVar18;
            uVar51 = *(undefined4 *)(pFVar18 + 4);
            dVar1 = *(double *)pFVar18;
            uVar52 = *(undefined4 *)(pFVar18 + 8);
            uVar53 = *(undefined4 *)(pFVar18 + 0xc);
            dVar29 = *(double *)(pFVar18 + 8);
            pFVar18 = pFVar3 + lVar19 + 0x10;
            uVar54 = *(undefined4 *)pFVar18;
            uVar55 = *(undefined4 *)(pFVar18 + 4);
            dVar33 = *(double *)pFVar18;
            uVar56 = *(undefined4 *)(pFVar18 + 8);
            uVar57 = *(undefined4 *)(pFVar18 + 0xc);
            dVar5 = *(double *)(pFVar18 + 8);
            pFVar18 = pFVar3 + lVar19 + 0x20;
            uVar37 = *(undefined4 *)pFVar18;
            uVar38 = *(undefined4 *)(pFVar18 + 4);
            dVar6 = *(double *)pFVar18;
            uVar39 = *(undefined4 *)(pFVar18 + 8);
            uVar40 = *(undefined4 *)(pFVar18 + 0xc);
            dVar7 = *(double *)(pFVar18 + 8);
            pFVar18 = pFVar3 + lVar19 + 0x30;
            uVar46 = *(undefined4 *)pFVar18;
            uVar47 = *(undefined4 *)(pFVar18 + 4);
            dVar8 = *(double *)pFVar18;
            pFVar18 = pFVar3 + lVar19 + 0x40;
            uVar42 = *(undefined4 *)pFVar18;
            uVar43 = *(undefined4 *)(pFVar18 + 4);
            uVar44 = *(undefined4 *)(pFVar18 + 8);
            uVar45 = *(undefined4 *)(pFVar18 + 0xc);
            uVar48 = *(undefined4 *)(pFVar3 + lVar19 + 0x50);
            uVar49 = *(undefined4 *)(pFVar3 + lVar19 + 0x50 + 4);
            if (param_3 <= fVar36) {
              uVar20 = 0;
              if ((int)uVar21 < param_8->ArrayNum) {
                uVar20 = uVar23;
              }
              if ((uVar20 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              fVar41 = __real_3f800000 -
                       (fVar36 - param_3) /
                       *(float *)((param_8->AllocatorInstance).Data + lVar24 * 4);
              break;
            }
            uVar20 = 0;
            if ((int)uVar21 < param_8->ArrayNum) {
              uVar20 = uVar23;
            }
            if ((uVar20 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar36 = fVar36 + *(float *)((param_8->AllocatorInstance).Data + lVar24 * 4);
            iVar2 = *param_10;
            uVar22 = (longlong)(int)(iVar2 + -1 + uVar21) % (longlong)iVar2 & 0xffffffff;
            uVar20 = (int)param_6 + 1;
            param_6 = (TTransform<double> *)(ulonglong)uVar20;
            local_248 = dVar6;
            dStack_240 = dVar7;
            local_238 = dVar8;
            local_228 = dVar1;
            dStack_220 = dVar29;
            local_218 = dVar33;
            dStack_210 = dVar5;
            local_208 = uVar42;
            uStack_204 = uVar43;
            uStack_200 = uVar44;
            uStack_1fc = uVar45;
            local_1f8 = uVar48;
            uStack_1f4 = uVar49;
          } while ((int)uVar20 < iVar2);
        }
      }
      local_198 = CONCAT44(uVar47,uVar46);
      local_190 = local_248;
      dStack_188 = dStack_240;
      dVar1 = (double)fVar41;
      local_178 = ((double)CONCAT44(uVar38,uVar37) - local_248) * dVar1 + local_248;
      dStack_170 = ((double)CONCAT44(uVar40,uVar39) - dStack_240) * dVar1 + dStack_240;
      local_180 = local_238;
      local_168 = ((double)CONCAT44(uVar47,uVar46) - local_238) * dVar1 + local_238;
      (pTVar14->Translation).XY.m128d_f64[0] = local_178;
      (pTVar14->Translation).XY.m128d_f64[1] = dStack_170;
      (pTVar14->Translation).ZW.m128d_f64[0] = local_168;
      (pTVar14->Translation).ZW.m128d_f64[1] = 0.0;
      local_1c8.X = local_228;
      local_1c8.Y = dStack_220;
      local_1c8.Z = local_218;
      local_1c8.W = dStack_210;
      local_1e8.X._0_4_ = uVar50;
      local_1e8.X._4_4_ = uVar51;
      local_1e8.Y._0_4_ = uVar52;
      local_1e8.Y._4_4_ = uVar53;
      local_1e8.Z._0_4_ = uVar54;
      local_1e8.Z._4_4_ = uVar55;
      local_1e8.W._0_4_ = uVar56;
      local_1e8.W._4_4_ = uVar57;
      local_1a8 = uVar37;
      uStack_1a4 = uVar38;
      uStack_1a0 = uVar39;
      uStack_19c = uVar40;
      pTVar17 = UE::Math::TQuat<double>::Slerp_NotNormalized(local_f8,&local_1c8,&local_1e8,dVar1);
      uVar37 = SUB84(__real_3e45798ee0000000,0);
      uVar38 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      local_118 = pTVar17->X;
      dStack_110 = pTVar17->Y;
      local_108 = pTVar17->Z;
      dStack_100 = pTVar17->W;
      dVar29 = local_108 * local_108 + local_118 * local_118;
      dVar33 = dStack_100 * dStack_100 + dStack_110 * dStack_110;
      auVar27._8_4_ = SUB84(dVar33,0);
      auVar27._0_8_ = dVar29;
      auVar27._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      auVar28._0_8_ = auVar27._8_8_ + dVar29;
      auVar28._8_8_ = dVar29 + dVar33;
      auVar34 = sqrtpd(auVar30,auVar28);
      uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= auVar28._0_8_);
      uVar26 = -(ulonglong)(__real_3e45798ee0000000 <= auVar28._8_8_);
      uVar20 = (uint)(uVar25 >> 0x20);
      uVar21 = (uint)(uVar26 >> 0x20);
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
      auVar31._0_8_ = uVar25 & (ulonglong)(auVar30._0_8_ * local_108);
      uVar22 = uVar26 & (ulonglong)(auVar30._8_8_ * dStack_100);
      auVar31._8_4_ = (undefined4)uVar22;
      auVar31._12_4_ = (undefined4)(uVar22 >> 0x20);
      auVar35._0_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar35._4_4_ =
           ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar35._8_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar35._12_4_ =
           ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
      auVar32._0_8_ = (ulonglong)(auVar30._0_8_ * local_118) & uVar25;
      uVar22 = (ulonglong)(auVar30._8_8_ * dStack_110) & uVar26;
      auVar32._8_4_ = (undefined4)uVar22;
      auVar32._12_4_ = (undefined4)(uVar22 >> 0x20);
      auVar34._4_4_ =
           ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar34._0_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar34._8_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar34._12_4_ =
           ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(pTVar14->Rotation).XY.m128d_f64 = auVar32 | auVar34;
      *(undefined1 (*) [16])(pTVar14->Rotation).ZW.m128d_f64 = auVar35 | auVar31;
      local_148 = (double)CONCAT44(uStack_204,local_208);
      dStack_140 = (double)CONCAT44(uStack_1fc,uStack_200);
      local_130 = ((double)CONCAT44(uVar43,uVar42) - local_148) * dVar1 + local_148;
      local_150 = CONCAT44(uVar49,uVar48);
      dStack_128 = ((double)CONCAT44(uVar45,uVar44) - dStack_140) * dVar1 + dStack_140;
      local_138 = (double)CONCAT44(uStack_1f4,local_1f8);
      local_120 = ((double)CONCAT44(uVar49,uVar48) - local_138) * dVar1 + local_138;
      (pTVar14->Scale3D).XY.m128d_f64[0] = local_130;
      (pTVar14->Scale3D).XY.m128d_f64[1] = dStack_128;
      (pTVar14->Scale3D).ZW.m128d_f64[0] = local_120;
      (pTVar14->Scale3D).ZW.m128d_f64[1] = 0.0;
      local_160 = uVar42;
      uStack_15c = uVar43;
      uStack_158 = uVar44;
      uStack_154 = uVar45;
    }
    if ((double)CONCAT44(uVar38,uVar37) < param_1->DeltaTime) {
      if (*param_10 == 0) {
        *param_9 = 0;
        uVar16 = *param_10;
        dVar1 = (param_2->Rotation).XY.m128d_f64[0];
        dVar29 = (param_2->Rotation).XY.m128d_f64[1];
        dVar33 = (param_2->Rotation).ZW.m128d_f64[0];
        dVar5 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar6 = (param_2->Translation).XY.m128d_f64[0];
        dVar7 = (param_2->Translation).XY.m128d_f64[1];
        dVar8 = (param_2->Translation).ZW.m128d_f64[0];
        dVar9 = (param_2->Translation).ZW.m128d_f64[1];
        dVar10 = (param_2->Scale3D).XY.m128d_f64[0];
        dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
        dVar12 = (param_2->Scale3D).ZW.m128d_f64[0];
        dVar13 = (param_2->Scale3D).ZW.m128d_f64[1];
        uVar20 = 0;
        if ((int)uVar16 < param_7->ArrayNum) {
          uVar20 = ~uVar16 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar18 = (param_7->AllocatorInstance).Data;
        lVar19 = (longlong)(int)uVar16 * 0x60;
        *(double *)(pFVar18 + lVar19) = dVar1;
        *(double *)(pFVar18 + lVar19 + 8) = dVar29;
        *(double *)(pFVar18 + lVar19 + 0x10) = dVar33;
        *(double *)(pFVar18 + lVar19 + 0x10 + 8) = dVar5;
        *(double *)(pFVar18 + lVar19 + 0x20) = dVar6;
        *(double *)(pFVar18 + lVar19 + 0x20 + 8) = dVar7;
        *(double *)(pFVar18 + lVar19 + 0x30) = dVar8;
        *(double *)(pFVar18 + lVar19 + 0x30 + 8) = dVar9;
        *(double *)(pFVar18 + lVar19 + 0x40) = dVar10;
        *(double *)(pFVar18 + lVar19 + 0x40 + 8) = dVar11;
        *(double *)(pFVar18 + lVar19 + 0x50) = dVar12;
        *(double *)(pFVar18 + lVar19 + 0x50 + 8) = dVar13;
        uVar16 = *param_10;
        dVar1 = param_1->DeltaTime;
        *param_10 = uVar16 + 1;
        uVar20 = 0;
        if ((int)uVar16 < param_8->ArrayNum) {
          uVar20 = ~uVar16 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(float *)((param_8->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) = (float)dVar1;
      }
      else {
        uVar20 = *param_9;
        uVar21 = 0;
        if ((int)uVar20 < param_8->ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar1 = param_1->DeltaTime;
        if (*(float *)((param_8->AllocatorInstance).Data + (longlong)(int)uVar20 * 4) <=
            param_5 / (float)(int)(uVar16 - 1) - (float)dVar1 * __real_3f000000) {
          uVar16 = *param_9;
          lVar19 = (longlong)(int)uVar16;
          uVar20 = 0;
          if ((int)uVar16 < param_8->ArrayNum) {
            uVar20 = ~uVar16 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar18 = (param_8->AllocatorInstance).Data;
          fVar41 = (float)dVar1 + *(float *)(pFVar18 + lVar19 * 4);
        }
        else {
          iVar2 = *param_10;
          if (iVar2 < (int)uVar16) {
            *param_9 = iVar2;
            dVar1 = (param_2->Rotation).XY.m128d_f64[0];
            dVar29 = (param_2->Rotation).XY.m128d_f64[1];
            dVar33 = (param_2->Rotation).ZW.m128d_f64[0];
            dVar5 = (param_2->Rotation).ZW.m128d_f64[1];
            dVar6 = (param_2->Translation).XY.m128d_f64[0];
            dVar7 = (param_2->Translation).XY.m128d_f64[1];
            dVar8 = (param_2->Translation).ZW.m128d_f64[0];
            dVar9 = (param_2->Translation).ZW.m128d_f64[1];
            dVar10 = (param_2->Scale3D).XY.m128d_f64[0];
            dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
            dVar12 = (param_2->Scale3D).ZW.m128d_f64[0];
            dVar13 = (param_2->Scale3D).ZW.m128d_f64[1];
            uVar16 = *param_10;
            uVar20 = 0;
            if ((int)uVar16 < param_7->ArrayNum) {
              uVar20 = ~uVar16 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar18 = (param_7->AllocatorInstance).Data;
            lVar19 = (longlong)(int)uVar16 * 0x60;
            *(double *)(pFVar18 + lVar19) = dVar1;
            *(double *)(pFVar18 + lVar19 + 8) = dVar29;
            *(double *)(pFVar18 + lVar19 + 0x10) = dVar33;
            *(double *)(pFVar18 + lVar19 + 0x10 + 8) = dVar5;
            *(double *)(pFVar18 + lVar19 + 0x20) = dVar6;
            *(double *)(pFVar18 + lVar19 + 0x20 + 8) = dVar7;
            *(double *)(pFVar18 + lVar19 + 0x30) = dVar8;
            *(double *)(pFVar18 + lVar19 + 0x30 + 8) = dVar9;
            *(double *)(pFVar18 + lVar19 + 0x40) = dVar10;
            *(double *)(pFVar18 + lVar19 + 0x40 + 8) = dVar11;
            *(double *)(pFVar18 + lVar19 + 0x50) = dVar12;
            *(double *)(pFVar18 + lVar19 + 0x50 + 8) = dVar13;
            uVar16 = *param_10;
            uVar37 = SUB84(param_1->DeltaTime,0);
            uVar38 = (undefined4)((ulonglong)param_1->DeltaTime >> 0x20);
            *param_10 = uVar16 + 1;
          }
          else {
            uVar20 = (*param_9 + 1) % iVar2;
            *param_9 = uVar20;
            dVar1 = (param_2->Rotation).XY.m128d_f64[0];
            dVar29 = (param_2->Rotation).XY.m128d_f64[1];
            dVar33 = (param_2->Rotation).ZW.m128d_f64[0];
            dVar5 = (param_2->Rotation).ZW.m128d_f64[1];
            dVar6 = (param_2->Translation).XY.m128d_f64[0];
            dVar7 = (param_2->Translation).XY.m128d_f64[1];
            dVar8 = (param_2->Translation).ZW.m128d_f64[0];
            dVar9 = (param_2->Translation).ZW.m128d_f64[1];
            dVar10 = (param_2->Scale3D).XY.m128d_f64[0];
            dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
            dVar12 = (param_2->Scale3D).ZW.m128d_f64[0];
            dVar13 = (param_2->Scale3D).ZW.m128d_f64[1];
            uVar16 = 0;
            if ((int)uVar20 < param_7->ArrayNum) {
              uVar16 = ~uVar20 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar18 = (param_7->AllocatorInstance).Data;
            lVar19 = (longlong)(int)uVar20 * 0x60;
            *(double *)(pFVar18 + lVar19) = dVar1;
            *(double *)(pFVar18 + lVar19 + 8) = dVar29;
            *(double *)(pFVar18 + lVar19 + 0x10) = dVar33;
            *(double *)(pFVar18 + lVar19 + 0x10 + 8) = dVar5;
            *(double *)(pFVar18 + lVar19 + 0x20) = dVar6;
            *(double *)(pFVar18 + lVar19 + 0x20 + 8) = dVar7;
            *(double *)(pFVar18 + lVar19 + 0x30) = dVar8;
            *(double *)(pFVar18 + lVar19 + 0x30 + 8) = dVar9;
            *(double *)(pFVar18 + lVar19 + 0x40) = dVar10;
            *(double *)(pFVar18 + lVar19 + 0x40 + 8) = dVar11;
            *(double *)(pFVar18 + lVar19 + 0x50) = dVar12;
            *(double *)(pFVar18 + lVar19 + 0x50 + 8) = dVar13;
            uVar16 = *param_9;
            uVar37 = SUB84(param_1->DeltaTime,0);
            uVar38 = (undefined4)((ulonglong)param_1->DeltaTime >> 0x20);
          }
          lVar19 = (longlong)(int)uVar16;
          fVar41 = (float)(double)CONCAT44(uVar38,uVar37);
          uVar20 = 0;
          if ((int)uVar16 < param_8->ArrayNum) {
            uVar20 = ~uVar16 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar18 = (param_8->AllocatorInstance).Data;
        }
        *(float *)(pFVar18 + lVar19 * 4) = fVar41;
      }
    }
  }
  return;
}

