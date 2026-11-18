// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a14a5f0

UScriptStruct * __cdecl FRigVMFunction_MathVectorClampSpatially::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClampSpatially.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClampSpatially.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampSpatially,
                         (UObject *)pUVar1,L"RigVMFunction_MathVectorClampSpatially");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_MathVectorClampSpatially_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClampSpatially.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathVectorClampSpatially.OuterSingleton;
}

// GetExecuteContextStruct @ 14a14a670

UScriptStruct * __thiscall
FRigVMFunction_MathVectorClampSpatially::GetExecuteContextStruct
          (FRigVMFunction_MathVectorClampSpatially *this)

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

// Execute @ 14a14ab60

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
FRigVMFunction_MathVectorClampSpatially::Execute(FRigVMFunction_MathVectorClampSpatially *this)

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
  StaticExecute(&local_118,&this->Value,&this->Axis,&this->Type,this->Minimum,this->Maximum,
                &this->Space,this->bDrawDebug,&this->DebugColor,this->DebugThickness,&this->Result);
  if (local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AdditionalTraitMemoryHandles.AllocatorInstance.Data);
  }
  if (local_118.Traits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Traits.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.RuntimeSettings.LogFunction.SharedReferenceCount.ReferenceController);
  return;
}

// FRigVMFunction_MathVectorClampSpatially @ 14a190540

FRigVMFunction_MathVectorClampSpatially * __thiscall
FRigVMFunction_MathVectorClampSpatially::FRigVMFunction_MathVectorClampSpatially
          (FRigVMFunction_MathVectorClampSpatially *this)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  FLinearColor FVar12;
  undefined8 uVar13;
  
  this->_padding_ = (longlong)&___7FRigVMFunction_MathVectorClampSpatially__6B_;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Space).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Space).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Space).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Space).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Space).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Space).Scale3D.ZW.m128d_f64 = auVar9;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Result).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Result).field0_0x0._s_0.Y = (double)uVar13;
  (this->Result).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar10 = (this->Result).field0_0x0._s_0.X;
  dVar11 = (this->Result).field0_0x0._s_0.Y;
  this->Axis = '\x01';
  this->Type = '\0';
  dVar1 = (this->Result).field0_0x0._s_0.Z;
  (this->Value).field0_0x0._s_0.X = dVar10;
  (this->Value).field0_0x0._s_0.Y = dVar11;
  this->Minimum = 0.0;
  (this->Value).field0_0x0._s_0.Z = dVar1;
  this->Maximum = 100.0;
  *&(this->Space).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Space).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Space).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Space).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Space).Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
  ;
  *&(this->Space).Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
  ;
  this->bDrawDebug = false;
  FVar12 = FLinearColor::Red;
  this->DebugThickness = 1.0;
  (this->DebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar12.field0_0x0;
  return this;
}

// Execute @ 14a1a2b20

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
FRigVMFunction_MathVectorClampSpatially::Execute
          (FRigVMFunction_MathVectorClampSpatially *this,FRigVMExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Value,&this->Axis,&this->Type,this->Minimum,this->Maximum,
                &this->Space,this->bDrawDebug,&this->DebugColor,this->DebugThickness,&this->Result);
  return;
}

// RigVMExecute @ 14a1cdf30

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
FRigVMFunction_MathVectorClampSpatially::RigVMExecute
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
  TEnumAsByte<EAxis::Type> *pTVar8;
  TEnumAsByte<ERigVMClampSpatialMode::Type> *pTVar9;
  FRigVMMemoryHandle *pFVar10;
  float *pfVar11;
  TTransform<double> *pTVar12;
  uchar *puVar13;
  FLinearColor *pFVar14;
  TVector<double> *pTVar15;
  FRigVMExecuteContext *pFVar16;
  
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar10->Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar8 = (TEnumAsByte<EAxis::Type> *)pFVar10[1].Ptr;
  }
  else {
    pTVar8 = (TEnumAsByte<EAxis::Type> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar9 = (TEnumAsByte<ERigVMClampSpatialMode::Type> *)pFVar10[2].Ptr;
  }
  else {
    pTVar9 = (TEnumAsByte<ERigVMClampSpatialMode::Type> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar1 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar12 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar13 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar6 = (bool)*puVar13;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar14 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar3 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pTVar15 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar16,pTVar7,pTVar8,pTVar9,fVar1,fVar2,pTVar12,bVar6,pFVar14,fVar3,pTVar15);
  return;
}

// StaticExecute @ 14a1e48f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FRigVMFunction_MathVectorClampSpatially::StaticExecute
          (FRigVMExecuteContext *param_1,TVector<double> *param_2,TEnumAsByte<EAxis::Type> *param_3,
          TEnumAsByte<ERigVMClampSpatialMode::Type> *param_4,float param_5,float param_6,
          TTransform<double> *param_7,bool param_8,FLinearColor *param_9,float param_10,
          TVector<double> *param_11)

{
  uchar uVar1;
  FRigVMDrawInterface *this;
  double dVar2;
  double dVar3;
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
  TVector<double> *pTVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStackY_358 [32];
  float local_318 [4];
  TVector<double>_u_0 local_308;
  float local_2e8;
  TVector<double> local_2e0;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_268.Rotation.XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
  local_268.Rotation.XY.m128d_f64[1] = (param_7->Rotation).XY.m128d_f64[1];
  local_268.Rotation.ZW.m128d_f64 = *&(param_7->Rotation).ZW.m128d_f64;
  local_268.Translation.XY.m128d_f64[0] = (param_7->Translation).XY.m128d_f64[0];
  local_268.Translation.XY.m128d_f64[1] = (param_7->Translation).XY.m128d_f64[1];
  local_268.Translation.ZW.m128d_f64[0] = (param_7->Translation).ZW.m128d_f64[0];
  local_268.Translation.ZW.m128d_f64[1] = (param_7->Translation).ZW.m128d_f64[1];
  local_268.Scale3D.XY.m128d_f64 = *&(param_7->Scale3D).XY.m128d_f64;
  local_268.Scale3D.ZW.m128d_f64 = *&(param_7->Scale3D).ZW.m128d_f64;
  local_2e8 = param_5;
  pTVar15 = FRigVMMathLibrary::ClampSpatially
                      (&local_2e0,param_2,(uint)param_3->Value,(uint)param_4->Value,param_5,param_6,
                       &local_268);
  dVar16 = (pTVar15->field0_0x0)._s_0.Y;
  (param_11->field0_0x0)._s_0.X = (pTVar15->field0_0x0)._s_0.X;
  (param_11->field0_0x0)._s_0.Y = dVar16;
  (param_11->field0_0x0)._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
  this = param_1->DrawInterfacePtr;
  if (this == (FRigVMDrawInterface *)0x0) {
    return;
  }
  if (!param_8) {
    return;
  }
  local_2c8.Rotation.XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
  local_2c8.Rotation.XY.m128d_f64[1] = (param_7->Rotation).XY.m128d_f64[1];
  local_2c8.Rotation.ZW.m128d_f64[0] = (param_7->Rotation).ZW.m128d_f64[0];
  local_2c8.Rotation.ZW.m128d_f64[1] = (param_7->Rotation).ZW.m128d_f64[1];
  uVar1 = param_4->Value;
  local_2c8.Translation.XY.m128d_f64[0] = (param_7->Translation).XY.m128d_f64[0];
  local_2c8.Translation.XY.m128d_f64[1] = (param_7->Translation).XY.m128d_f64[1];
  local_2c8.Translation.ZW.m128d_f64[0] = (param_7->Translation).ZW.m128d_f64[0];
  local_2c8.Translation.ZW.m128d_f64[1] = (param_7->Translation).ZW.m128d_f64[1];
  local_2c8.Scale3D.XY.m128d_f64[0] = (param_7->Scale3D).XY.m128d_f64[0];
  local_2c8.Scale3D.XY.m128d_f64[1] = (param_7->Scale3D).XY.m128d_f64[1];
  local_2c8.Scale3D.ZW.m128d_f64[0] = (param_7->Scale3D).ZW.m128d_f64[0];
  local_2c8.Scale3D.ZW.m128d_f64[1] = (param_7->Scale3D).ZW.m128d_f64[1];
  local_318[0] = param_6;
  if (uVar1 == '\0') {
    local_308._s_0.X = (pTVar15->field0_0x0)._s_0.X;
    local_308._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
    local_308._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
    FRigVMFunction_DrawPlane
              (this,(uint)param_3->Value,param_5,local_318,&local_2c8,
               (TVector<double> *)&local_308._s_0);
  }
  else if (uVar1 == '\x01') {
    local_308._s_0.X = (pTVar15->field0_0x0)._s_0.X;
    local_308._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
    local_308._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
    FRigVMFunction_DrawCylinder
              (this,(uint)param_3->Value,param_5,local_318,&local_2c8,
               (TVector<double> *)&local_308._s_0);
  }
  else {
    if ((uVar1 != '\x02') && (uVar1 == '\x03')) {
      fVar30 = param_5 + param_5;
      if (fVar30 <= param_6) {
        if (fVar30 <= param_6) {
          fVar30 = param_6;
        }
        fVar30 = fVar30 * __real_3f000000;
        local_208.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_208.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_208.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_208.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_208.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_208.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        dVar16 = ___xmm_3fe6a09e6ecb41fe0000000000000000;
        dVar17 = _UNK_152072268;
        if ((param_3->Value == '\x01') ||
           (dVar16 = ___xmm_00000000000000003fe6a09e6ecb41fe, dVar17 = _UNK_152072248,
           param_3->Value == '\x02')) {
          local_208.Rotation.ZW.m128d_f64[1] = _UNK_152072258;
          local_208.Rotation.ZW.m128d_f64[0] = ___xmm_3fe6a09e5e3335980000000000000000;
          local_208.Rotation.XY.m128d_f64[1] = dVar17;
          local_208.Rotation.XY.m128d_f64[0] = dVar16;
        }
        local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_268.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_268,&local_208,param_7);
        uVar31 = (uint)__xmm_80000000000000008000000000000000;
        uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        local_208.Rotation.XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
        local_208.Rotation.XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
        local_208.Translation.XY.m128d_f64[1] = local_268.Translation.XY.m128d_f64[1];
        local_208.Translation.XY.m128d_f64[0] = local_268.Translation.XY.m128d_f64[0];
        local_208.Scale3D.XY.m128d_f64[1] = local_268.Scale3D.XY.m128d_f64[1];
        local_208.Scale3D.XY.m128d_f64[0] = local_268.Scale3D.XY.m128d_f64[0];
        dVar16 = (double)param_5;
        local_208.Rotation.ZW.m128d_f64[1] = local_268.Rotation.ZW.m128d_f64[1];
        local_208.Rotation.ZW.m128d_f64[0] = local_268.Rotation.ZW.m128d_f64[0];
        local_208.Translation.ZW.m128d_f64[1] = local_268.Translation.ZW.m128d_f64[1];
        local_208.Translation.ZW.m128d_f64[0] = local_268.Translation.ZW.m128d_f64[0];
        local_208.Scale3D.ZW.m128d_f64[1] = local_268.Scale3D.ZW.m128d_f64[1];
        local_208.Scale3D.ZW.m128d_f64[0] = local_268.Scale3D.ZW.m128d_f64[0];
        dVar3 = (double)(fVar30 - param_5);
        dVar2 = dVar3 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        dVar17 = dVar3 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        dVar3 = dVar3 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_1a8.Rotation.XY.m128d_f64[0] =
             dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X - dVar2;
        local_1a8.Translation.XY.m128d_f64[0] =
             dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y + dVar17;
        local_1a8.Rotation.XY.m128d_f64[1] =
             dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y - dVar17;
        local_1a8.Translation.XY.m128d_f64[1] =
             dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z + dVar3;
        local_1a8.Rotation.ZW.m128d_f64[1] =
             dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X + dVar2;
        local_1a8.Rotation.ZW.m128d_f64[0] =
             dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z - dVar3;
        uVar26 = SUB84(dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X,0) ^ uVar31
        ;
        uVar27 = (uint)((ulonglong)
                        (dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X) >> 0x20)
                 ^ uVar32;
        local_1a8.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar27,uVar26) - dVar2;
        uVar22 = SUB84(dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y,0) ^ uVar31
        ;
        uVar23 = (uint)((ulonglong)
                        (dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y) >> 0x20)
                 ^ uVar32;
        local_1a8.Translation.ZW.m128d_f64[1] = (double)CONCAT44(uVar23,uVar22) - dVar17;
        uVar18 = SUB84(dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0) ^ uVar31
        ;
        uVar19 = (uint)((ulonglong)
                        (dVar16 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z) >> 0x20)
                 ^ uVar32;
        local_308._8_4_ = 8;
        local_308._s_0.X = (double)&local_1a8;
        local_1a8.Scale3D.ZW.m128d_f64[1] = (double)CONCAT44(uVar19,uVar18) + dVar3;
        local_1a8.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uVar23,uVar22) + dVar17;
        local_1a8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar27,uVar26) + dVar2;
        local_1a8.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar19,uVar18) - dVar3;
        local_128 = dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y + dVar17;
        local_140 = dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y - dVar17;
        local_130 = dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X + dVar2;
        local_148 = dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X - dVar2;
        local_138 = dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z - dVar3;
        local_120 = dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z + dVar3;
        uVar18 = SUB84(dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X,0) ^ uVar31
        ;
        uVar19 = (uint)((ulonglong)
                        (dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X) >> 0x20)
                 ^ uVar32;
        local_118 = (double)CONCAT44(uVar19,uVar18) - dVar2;
        local_100 = (double)CONCAT44(uVar19,uVar18) + dVar2;
        uVar18 = SUB84(dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0) ^ uVar31
        ;
        uVar19 = (uint)((ulonglong)
                        (dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z) >> 0x20)
                 ^ uVar32;
        local_f0 = (double)CONCAT44(uVar19,uVar18) + dVar3;
        local_108 = (double)CONCAT44(uVar19,uVar18) - dVar3;
        uVar18 = SUB84(dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y,0) ^ uVar31
        ;
        uVar19 = (uint)((ulonglong)
                        (dVar16 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y) >> 0x20)
                 ^ uVar32;
        local_f8 = (double)CONCAT44(uVar19,uVar18) + dVar17;
        local_110 = (double)CONCAT44(uVar19,uVar18) - dVar17;
        FRigVMDrawInterface::DrawLines
                  (this,&local_208,
                   (TArrayView<UE::Math::TVector<double>_const_,int> *)&local_308._s_0,
                   &FLinearColor::Yellow,0.0,SDPG_Foreground,__real_bf800000);
        local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_318[0] = 0.0;
        uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        uVar29 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        uVar24 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar25 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
        local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
        local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar24;
        local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar25;
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
        uVar20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        uVar21 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_268.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar20;
        local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar21;
        local_268.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
        local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_268.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
        local_268.Scale3D.XY.m128d_f64[1]._0_4_ = uVar24;
        local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_268.Scale3D.XY.m128d_f64[1]._4_4_ = uVar25;
        local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar20;
        local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar21;
        local_1a8.Rotation.XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
        local_1a8.Rotation.XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
        local_1a8.Translation.XY.m128d_f64[0] = dVar2;
        local_1a8.Translation.XY.m128d_f64[1] = dVar17;
        local_1a8.Translation.ZW.m128d_f64[0] = dVar3;
        UE::Math::TTransform<double>::Multiply(&local_268,&local_1a8,&local_208);
        dVar14 = local_2c8.Scale3D.ZW.m128d_f64[1];
        dVar13 = local_2c8.Scale3D.ZW.m128d_f64[0];
        dVar12 = local_2c8.Scale3D.XY.m128d_f64[1];
        dVar11 = local_2c8.Scale3D.XY.m128d_f64[0];
        dVar10 = local_2c8.Translation.ZW.m128d_f64[1];
        dVar9 = local_2c8.Translation.ZW.m128d_f64[0];
        dVar8 = local_2c8.Translation.XY.m128d_f64[1];
        dVar7 = local_2c8.Translation.XY.m128d_f64[0];
        dVar6 = local_2c8.Rotation.ZW.m128d_f64[1];
        dVar5 = local_2c8.Rotation.ZW.m128d_f64[0];
        dVar4 = local_2c8.Rotation.XY.m128d_f64[1];
        dVar16 = local_2c8.Rotation.XY.m128d_f64[0];
        local_2c8.Rotation.XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
        local_2c8.Rotation.XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
        local_2c8.Rotation.ZW.m128d_f64[0] = local_268.Rotation.ZW.m128d_f64[0];
        local_2c8.Rotation.ZW.m128d_f64[1] = local_268.Rotation.ZW.m128d_f64[1];
        local_2c8.Translation.XY.m128d_f64[0] = local_268.Translation.XY.m128d_f64[0];
        local_2c8.Translation.XY.m128d_f64[1] = local_268.Translation.XY.m128d_f64[1];
        local_2c8.Translation.ZW.m128d_f64[0] = local_268.Translation.ZW.m128d_f64[0];
        local_2c8.Translation.ZW.m128d_f64[1] = local_268.Translation.ZW.m128d_f64[1];
        local_2c8.Scale3D.XY.m128d_f64[0] = local_268.Scale3D.XY.m128d_f64[0];
        local_2c8.Scale3D.XY.m128d_f64[1] = local_268.Scale3D.XY.m128d_f64[1];
        local_308._s_0.X = (param_11->field0_0x0)._s_0.X;
        local_308._s_0.Y = (param_11->field0_0x0)._s_0.Y;
        local_2c8.Scale3D.ZW.m128d_f64[0] = local_268.Scale3D.ZW.m128d_f64[0];
        local_2c8.Scale3D.ZW.m128d_f64[1] = local_268.Scale3D.ZW.m128d_f64[1];
        local_308._s_0.Z = (param_11->field0_0x0)._s_0.Z;
        FRigVMFunction_DrawSphere
                  (this,(uint)param_3->Value,local_2e8,local_318,&local_2c8,
                   (TVector<double> *)&local_308._s_0);
        local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        uVar29 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1a8.Translation.XY.m128d_f64[1] =
             (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar32,SUB84(dVar17,0) ^ uVar31);
        local_1a8.Translation.XY.m128d_f64[0] =
             (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar32,SUB84(dVar2,0) ^ uVar31);
        local_1a8.Translation.ZW.m128d_f64[0] =
             (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar32,SUB84(dVar3,0) ^ uVar31);
        uVar24 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar25 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        uVar20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        uVar21 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
        local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar20;
        local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar21;
        local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
        local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
        local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar24;
        local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar25;
        local_268.Rotation.ZW.m128d_f64[1]._0_4_ = uVar28;
        local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_268.Rotation.ZW.m128d_f64[1]._4_4_ = uVar29;
        local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_268.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_268.Scale3D.XY.m128d_f64[1]._0_4_ = uVar24;
        local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_268.Scale3D.XY.m128d_f64[1]._4_4_ = uVar25;
        local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar20;
        local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar21;
        local_2c8.Rotation.XY.m128d_f64[0] = dVar16;
        local_2c8.Rotation.XY.m128d_f64[1] = dVar4;
        local_2c8.Rotation.ZW.m128d_f64[0] = dVar5;
        local_2c8.Rotation.ZW.m128d_f64[1] = dVar6;
        local_2c8.Translation.XY.m128d_f64[0] = dVar7;
        local_2c8.Translation.XY.m128d_f64[1] = dVar8;
        local_2c8.Translation.ZW.m128d_f64[0] = dVar9;
        local_2c8.Translation.ZW.m128d_f64[1] = dVar10;
        local_2c8.Scale3D.XY.m128d_f64[0] = dVar11;
        local_2c8.Scale3D.XY.m128d_f64[1] = dVar12;
        local_2c8.Scale3D.ZW.m128d_f64[0] = dVar13;
        local_2c8.Scale3D.ZW.m128d_f64[1] = dVar14;
        local_1a8.Rotation.XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
        local_1a8.Rotation.XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
        UE::Math::TTransform<double>::Multiply(&local_268,&local_1a8,&local_208);
        dVar11 = local_2c8.Scale3D.ZW.m128d_f64[1];
        dVar10 = local_2c8.Scale3D.ZW.m128d_f64[0];
        dVar9 = local_2c8.Scale3D.XY.m128d_f64[1];
        dVar8 = local_2c8.Scale3D.XY.m128d_f64[0];
        dVar7 = local_2c8.Translation.ZW.m128d_f64[1];
        dVar6 = local_2c8.Translation.ZW.m128d_f64[0];
        dVar5 = local_2c8.Translation.XY.m128d_f64[1];
        dVar4 = local_2c8.Translation.XY.m128d_f64[0];
        dVar3 = local_2c8.Rotation.ZW.m128d_f64[1];
        dVar2 = local_2c8.Rotation.ZW.m128d_f64[0];
        dVar17 = local_2c8.Rotation.XY.m128d_f64[1];
        dVar16 = local_2c8.Rotation.XY.m128d_f64[0];
        local_2c8.Rotation.XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
        local_2c8.Rotation.XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
        local_2c8.Rotation.ZW.m128d_f64[0] = local_268.Rotation.ZW.m128d_f64[0];
        local_2c8.Rotation.ZW.m128d_f64[1] = local_268.Rotation.ZW.m128d_f64[1];
        local_2c8.Translation.XY.m128d_f64[0] = local_268.Translation.XY.m128d_f64[0];
        local_2c8.Translation.XY.m128d_f64[1] = local_268.Translation.XY.m128d_f64[1];
        local_2c8.Translation.ZW.m128d_f64[0] = local_268.Translation.ZW.m128d_f64[0];
        local_2c8.Translation.ZW.m128d_f64[1] = local_268.Translation.ZW.m128d_f64[1];
        local_2c8.Scale3D.XY.m128d_f64[0] = local_268.Scale3D.XY.m128d_f64[0];
        local_2c8.Scale3D.XY.m128d_f64[1] = local_268.Scale3D.XY.m128d_f64[1];
        local_308._s_0.X = (param_11->field0_0x0)._s_0.X;
        local_308._s_0.Y = (param_11->field0_0x0)._s_0.Y;
        local_2c8.Scale3D.ZW.m128d_f64[0] = local_268.Scale3D.ZW.m128d_f64[0];
        local_2c8.Scale3D.ZW.m128d_f64[1] = local_268.Scale3D.ZW.m128d_f64[1];
        local_308._s_0.Z = (param_11->field0_0x0)._s_0.Z;
        FRigVMFunction_DrawSphere
                  (this,(uint)param_3->Value,local_2e8,local_318,&local_2c8,
                   (TVector<double> *)&local_308._s_0);
        local_2c8.Rotation.XY.m128d_f64[0] = dVar16;
        local_2c8.Rotation.XY.m128d_f64[1] = dVar17;
        local_2c8.Rotation.ZW.m128d_f64[0] = dVar2;
        local_2c8.Rotation.ZW.m128d_f64[1] = dVar3;
        local_2c8.Translation.XY.m128d_f64[0] = dVar4;
        local_2c8.Translation.XY.m128d_f64[1] = dVar5;
        local_2c8.Translation.ZW.m128d_f64[0] = dVar6;
        local_2c8.Translation.ZW.m128d_f64[1] = dVar7;
        local_2c8.Scale3D.XY.m128d_f64[0] = dVar8;
        local_2c8.Scale3D.XY.m128d_f64[1] = dVar9;
        local_2c8.Scale3D.ZW.m128d_f64[0] = dVar10;
        local_2c8.Scale3D.ZW.m128d_f64[1] = dVar11;
        goto LAB_14a1e51b9;
      }
      local_318[0] = 0.0;
    }
    local_308._s_0.X = (pTVar15->field0_0x0)._s_0.X;
    local_308._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
    local_308._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
    FRigVMFunction_DrawSphere
              (this,(uint)param_3->Value,param_5,local_318,&local_2c8,
               (TVector<double> *)&local_308._s_0);
  }
LAB_14a1e51b9:
  FRigVMDrawInterface::DrawPoint
            (this,&UE::Math::TTransform<double>::Identity,param_11,param_10 * __real_41000000,
             param_9,SDPG_Foreground,__real_bf800000);
  return;
}

