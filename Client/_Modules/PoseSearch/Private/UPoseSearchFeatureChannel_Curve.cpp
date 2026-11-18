// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 9

// StaticClass @ 14a8d6160

UClass * __cdecl UPoseSearchFeatureChannel_Curve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Curve",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Curve,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Curve>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Curve>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton;
}

// UPoseSearchFeatureChannel_Curve @ 14a8e1580

UPoseSearchFeatureChannel_Curve * __thiscall
UPoseSearchFeatureChannel_Curve::UPoseSearchFeatureChannel_Curve
          (UPoseSearchFeatureChannel_Curve *this,FVTableHelper *param_1)

{
  FName FVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  FVar1 = UE::PoseSearch::DefaultRole;
  (this->CurveName).ComparisonIndex = 0;
  (this->CurveName).Number = 0;
  this->SampleRole = FVar1;
  this->CurveIdx = -1;
  this->SampleTimeOffset = 0.0;
  this->InputQueryPose = UseContinuingPose;
  this->bUseBlueprintQueryOverride = false;
  return this;
}

// UPoseSearchFeatureChannel_Curve @ 14a8e15f0

UPoseSearchFeatureChannel_Curve * __thiscall
UPoseSearchFeatureChannel_Curve::UPoseSearchFeatureChannel_Curve
          (UPoseSearchFeatureChannel_Curve *this)

{
  int iVar1;
  FName FVar2;
  FObjectInitializer *pFVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  pFVar3 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar3);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  FVar2 = UE::PoseSearch::DefaultRole;
  (this->CurveName).ComparisonIndex = 0;
  (this->CurveName).Number = 0;
  lVar5 = this->_padding_;
  this->SampleRole = FVar2;
  this->CurveIdx = -1;
  this->SampleTimeOffset = 0.0;
  this->InputQueryPose = UseContinuingPose;
  this->bUseBlueprintQueryOverride = false;
  if (lVar5 != 0) {
    pUVar4 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14a8e1687;
  }
  lVar5 = 0;
LAB_14a8e1687:
  this->bUseBlueprintQueryOverride = lVar5 != 0;
  return this;
}

// ~UPoseSearchFeatureChannel_Curve @ 14a8e2d10

void __thiscall
UPoseSearchFeatureChannel_Curve::~UPoseSearchFeatureChannel_Curve
          (UPoseSearchFeatureChannel_Curve *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BP_GetCurveValue @ 14a8e7750

float __thiscall
UPoseSearchFeatureChannel_Curve::BP_GetCurveValue
          (UPoseSearchFeatureChannel_Curve *this,UAnimInstance *param_1)

{
  UFunction *pUVar1;
  UAnimInstance *local_18;
  float local_10;
  
  local_10 = 0.0;
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return local_10;
}

// BuildQuery @ 14a8e7a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchFeatureChannel_Curve::BuildQuery
          (UPoseSearchFeatureChannel_Curve *this,FSearchContext *param_1)

{
  int iVar1;
  UObject *pUVar2;
  FName FVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  bool bVar9;
  uint uVar10;
  FChooserEvaluationContext *pFVar11;
  UClass *pUVar12;
  UFunction *pUVar13;
  TArrayView<float,int> *pTVar14;
  UPoseSearchFeatureChannel *pUVar15;
  uint uVar16;
  float fVar17;
  TArrayView<float_const_,int> local_108;
  UObject *local_f8;
  float local_f0;
  float *local_e8;
  undefined8 uStack_e0;
  float *local_d8;
  undefined8 uStack_d0;
  TArrayView<float_const_,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48 [2];
  
  if (this->bUseBlueprintQueryOverride == false) {
    if (param_1->bUseCachedChannelData != false) {
      FVar3 = this->CurveName;
      uVar16 = *(uint *)(this->_padding_ + 0xc);
      uVar10 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      FVar4 = this->SampleRole;
      uVar16 = uVar16 * 0x40 + FVar3.Number + (uVar16 >> 2) + uVar10 + 0x9e3779b9 ^ uVar16;
      uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      local_108.DataPtr = (float *)0x0;
      local_108.ArrayNum = 0;
      uVar16 = uVar16 * 0x40 + FVar4.Number + (uVar16 >> 2) + uVar10 + 0x9e3779b9 ^ uVar16;
      uVar16 = this->CurveIdx + -0x61c88647 + uVar16 * 0x40 + (uVar16 >> 2) ^ uVar16;
      uVar16 = uVar16 * 0x40 + (int)this->SampleTimeOffset + (uVar16 >> 2) + 0x9e3779b9 ^ uVar16;
      pUVar15 = UE::PoseSearch::FSearchContext::GetCachedChannelData
                          (param_1,this->InputQueryPose + 0x9e3779b9 + uVar16 * 0x40 + (uVar16 >> 2)
                                   ^ uVar16,(UPoseSearchFeatureChannel *)this,&local_108);
      if (pUVar15 != (UPoseSearchFeatureChannel *)0x0) {
        pUVar12 = StaticClass();
        iVar1 = (int)pUVar12->_padding_;
        if (((*(int *)(pUVar15->_padding_ + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar12->_padding_)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedCurveChannel",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x45,L""), pUVar15 = (UPoseSearchFeatureChannel *)0x0, bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pUVar15->ChannelCardinality != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedCurveChannel->GetChannelCardinality() == ChannelCardinality",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x46,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((local_108.ArrayNum != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedChannelData.Num() == ChannelCardinality",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x47,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((FName)pUVar15[1]._padding_ != this->CurveName) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedCurveChannel->CurveName == CurveName",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x4a,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((FName)pUVar15[1]._padding_ != this->SampleRole) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedCurveChannel->SampleRole == SampleRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x4b,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((char)pUVar15[1]._padding_ != this->CurveIdx) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedCurveChannel->CurveIdx == CurveIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x4c,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this->SampleTimeOffset != *(float *)((longlong)&pUVar15[1]._padding_ + 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedCurveChannel->SampleTimeOffset == SampleTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x4d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((EInputQueryPose)pUVar15[1]._padding_ != this->InputQueryPose) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedCurveChannel->InputQueryPose == InputQueryPose",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Curve.cpp"
                               ,0x4e,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar8 = local_108.DataPtr;
        uVar6._4_4_ = local_108._12_4_;
        uVar6._0_4_ = local_108.ArrayNum;
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_78);
        local_c8.DataPtr = pfVar8;
        local_c8._8_8_ = uVar6;
        pTVar14 = TArrayView<float,int>::Slice
                            (pTVar14,&local_68,(int)this->_padding_,
                             *(int *)((longlong)&this->_padding_ + 4));
        local_b8.DataPtr = pTVar14->DataPtr;
        local_b8.ArrayNum = pTVar14->ArrayNum;
        local_b8._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
        UE::PoseSearch::FFeatureVectorHelper::Copy(&local_b8,0,iVar1,&local_c8);
        return;
      }
    }
    bVar9 = UE::PoseSearch::FSearchContext::CanUseContinuingPoseValues(param_1);
    if ((this->InputQueryPose != UseCharacterPose) && (bVar9)) {
      local_a8.DataPtr = (param_1->ContinuingPoseValues).DataPtr;
      local_a8.ArrayNum = (param_1->ContinuingPoseValues).ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&(param_1->ContinuingPoseValues).field_0xc;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar7 = this->_padding_;
      pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_58);
      local_98.DataPtr = pTVar14->DataPtr;
      local_98.ArrayNum = pTVar14->ArrayNum;
      local_98._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
      UE::PoseSearch::FFeatureVectorHelper::Copy(&local_98,(int)lVar7,iVar1,&local_a8);
      return;
    }
    fVar17 = UE::PoseSearch::FSearchContext::GetSampleCurveValue
                       (param_1,this->SampleTimeOffset,&this->CurveName,&this->SampleRole);
    uVar16 = (uint)this->_padding_;
    pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,local_48);
    local_d8 = pTVar14->DataPtr;
    uStack_d0 = *(undefined8 *)&pTVar14->ArrayNum;
    iVar1 = pTVar14->ArrayNum;
    if ((iVar1 < (int)uVar16) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x7e,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = 0;
    if ((int)uVar16 < iVar1) {
      uVar10 = ~uVar16 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_d8[(int)uVar16] = fVar17;
    return;
  }
  pFVar11 = UE::PoseSearch::FSearchContext::GetContext(param_1,&this->SampleRole);
  if (0 < (pFVar11->ObjectParams).ArrayNum) {
    if (((pFVar11->ObjectParams).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar2 = *(UObject **)(pFVar11->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 == (UObject *)0x0) goto LAB_14a8e7c11;
      UE::GC::MarkAsReachable(pUVar2);
    }
    if (pUVar2 != (UObject *)0x0) {
      pUVar12 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar12->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar12->_padding_)) {
        local_f0 = 0.0;
        local_f8 = pUVar2;
        pUVar13 = UObject::FindFunctionChecked
                            ((UObject *)this,NAME_UPoseSearchFeatureChannel_Curve_BP_GetCurveValue);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar13,&local_f8);
        fVar17 = local_f0;
        uVar16 = (uint)this->_padding_;
        pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_88);
        local_e8 = pTVar14->DataPtr;
        uStack_e0 = *(undefined8 *)&pTVar14->ArrayNum;
        iVar1 = pTVar14->ArrayNum;
        if ((iVar1 < (int)uVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Values.Num() >= DataOffset + 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                               ,0x7e,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar16 < iVar1) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_e8[(int)uVar16] = fVar17;
        return;
      }
    }
  }
LAB_14a8e7c11:
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

// Finalize @ 14a8f67a0

bool __thiscall
UPoseSearchFeatureChannel_Curve::Finalize
          (UPoseSearchFeatureChannel_Curve *this,UPoseSearchSchema *param_1)

{
  schar sVar1;
  
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  param_1->SchemaCardinality = param_1->SchemaCardinality + 1;
  sVar1 = UPoseSearchSchema::AddCurveReference(param_1,&this->CurveName,&this->SampleRole);
  this->CurveIdx = sVar1;
  return true;
}

// GetPrivateStaticClass @ 14a8fc1b0

UClass * __cdecl UPoseSearchFeatureChannel_Curve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Curve",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Curve,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Curve>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Curve>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Curve.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Curve @ 14a908d60

void __cdecl
UPoseSearchFeatureChannel_Curve::StaticRegisterNativesUPoseSearchFeatureChannel_Curve(void)

{
  return;
}

