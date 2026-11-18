// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 71

// StaticClass @ 1474216b0

UClass * __cdecl UAnimDataModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimDataModel",
               &Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton,
               StaticRegisterNativesUAnimDataModel,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimDataModel>,InternalVTableHelperCtorCaller<UAnimDataModel>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton;
}

// operator()<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 147424e20

void __thiscall
`UAnimDataModel::PostLoad'::__l18::<lambda_1>::
operator()<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18 = *(undefined8 *)pFVar1;
  local_10 = *(undefined4 *)(pFVar1 + 8);
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 0xc)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + (longlong)iVar4 * 0xc) = local_18;
  *(undefined4 *)(pFVar1 + (longlong)iVar4 * 0xc + 8) = local_10;
  if (param_1->ArrayNum != *(int *)(*(longlong *)this + 0x90)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3847633434075725764>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                       ,0x3c,"Keys.Num() == NumberOfKeys");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// GenerateStateHash<UE::Anim::DataModel::FHasherSha> @ 14742c430

void __thiscall
UAnimDataModel::GenerateStateHash<UE::Anim::DataModel::FHasherSha>
          (UAnimDataModel *this,FHasherSha *param_1,FGuidGenerationSettings *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  uint *puVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_88;
  FName local_84;
  FTransformCurve *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FAnimatedBoneAttribute *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TArrayView<FTransformCurve_const_,int> local_48;
  TArrayView<FAnimatedBoneAttribute_const_,int> local_38;
  
  if (param_2->bIncludeTimingData != '\0') {
    local_88 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
    FSHA1::Update(&param_1->Sha,(uchar *)&local_88,4);
  }
  if (param_2->bIncludeBoneData != 0) {
    pFVar8 = (this->BoneAnimationTracks).AllocatorInstance.Data;
    iVar1 = (this->BoneAnimationTracks).ArrayNum;
    pFVar10 = pFVar8 + (longlong)iVar1 * 0x40;
    pFVar6 = pFVar8 + 0x28;
    while( true ) {
      if ((this->BoneAnimationTracks).ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FBoneAnimationTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar8 == pFVar10) break;
      FSHA1::Update(&param_1->Sha,*(uchar **)pFVar8,(longlong)(*(int *)(pFVar6 + -0x20) * 0xc));
      FSHA1::Update(&param_1->Sha,*(uchar **)(pFVar6 + -0x18),
                    (longlong)(*(int *)(pFVar6 + -0x10) << 4));
      FSHA1::Update(&param_1->Sha,*(uchar **)(pFVar6 + -8),(longlong)(*(int *)pFVar6 * 0xc));
      pFVar8 = pFVar8 + 0x40;
      pFVar6 = pFVar6 + 0x40;
    }
  }
  if (param_2->bIncludeCurveData != '\0') {
    pFVar7 = (FName *)(this->CurveData).FloatCurves.AllocatorInstance.Data;
    iVar1 = (this->CurveData).FloatCurves.ArrayNum;
    puVar11 = &pFVar7[0xf].Number;
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x12;
    while( true ) {
      if ((this->CurveData).FloatCurves.ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FFloatCurve_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar7 == pFVar9) break;
      local_84 = *pFVar7;
      pFVar4 = ::FName::ToString(&local_84,&local_58);
      FSHA1::Update(&param_1->Sha,(uchar *)(pFVar4->Data).AllocatorInstance.Data,
                    (longlong)((pFVar4->Data).ArrayNum * 2));
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FSHA1::Update(&param_1->Sha,(uchar *)(puVar11 + -1),4);
      pTVar5 = FRichCurve::GetConstRefOfKeys((FRichCurve *)(puVar11 + -0x1b));
      FSHA1::Update(&param_1->Sha,(uchar *)(pTVar5->AllocatorInstance).Data,
                    (longlong)(pTVar5->ArrayNum * 0x1c));
      FSHA1::Update(&param_1->Sha,(uchar *)puVar11,1);
      FSHA1::Update(&param_1->Sha,(uchar *)((longlong)puVar11 + 1),1);
      pFVar7 = pFVar7 + 0x12;
      puVar11 = puVar11 + 0x24;
    }
    local_78 = (FTransformCurve *)(this->CurveData).TransformCurves.AllocatorInstance.Data;
    iVar1 = (this->CurveData).TransformCurves.ArrayNum;
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
    local_48._12_4_ = uStack_6c;
    local_48.ArrayNum = iVar1;
    local_48.DataPtr = local_78;
    iStack_70 = iVar1;
    UE::Anim::DataModel::FHasherBase<UE::Anim::DataModel::FHasherSha>::UpdateTransformCurves
              ((FHasherBase<UE::Anim::DataModel::FHasherSha> *)param_1,&local_48,L"TC");
  }
  if (param_2->bIncludeAttributeData != '\0') {
    local_68 = (FAnimatedBoneAttribute *)(this->AnimatedBoneAttributes).AllocatorInstance.Data;
    iVar1 = (this->AnimatedBoneAttributes).ArrayNum;
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
    local_38._12_4_ = uStack_5c;
    local_38.ArrayNum = iVar1;
    local_38.DataPtr = local_68;
    iStack_60 = iVar1;
    UE::Anim::DataModel::FHasherBase<UE::Anim::DataModel::FHasherSha>::UpdateAnimatedBoneAttributes
              ((FHasherBase<UE::Anim::DataModel::FHasherSha> *)param_1,&local_38,L"ABA");
  }
  return;
}

// UAnimDataModel @ 147434fe0

UAnimDataModel * __thiscall
UAnimDataModel::UAnimDataModel(UAnimDataModel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->ModifiedEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAnimationDataModel__;
  this->BracketCounter = 0;
  *(undefined8 *)&this->ModifiedEventDynamic = 0;
  *(undefined8 *)&(this->ModifiedEventDynamic).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedEventDynamic).field_0x10 = 0;
  *(undefined8 *)&this->ModifiedEvent = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x10 = 0;
  (this->BoneAnimationTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneAnimationTracks).ArrayNum = 0;
  (this->BoneAnimationTracks).ArrayMax = 0;
  (this->CurveData).FloatCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveData).FloatCurves.ArrayNum = 0;
  (this->CurveData).FloatCurves.ArrayMax = 0;
  (this->CurveData).TransformCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveData).TransformCurves.ArrayNum = 0;
  (this->CurveData).TransformCurves.ArrayMax = 0;
  (this->AnimatedBoneAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimatedBoneAttributes).ArrayNum = 0;
  (this->AnimatedBoneAttributes).ArrayMax = 0;
  this->bPopulated = false;
  (this->Notifier).Ptr = (FModelNotifier *)0x0;
  (this->FrameRate).Numerator = 60000;
  (this->FrameRate).Denominator = 1;
  return this;
}

// UAnimDataModel @ 147435090

UAnimDataModel * __thiscall
UAnimDataModel::UAnimDataModel(UAnimDataModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->ModifiedEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAnimationDataModel__;
  this->BracketCounter = 0;
  *(undefined8 *)&this->ModifiedEventDynamic = 0;
  *(undefined8 *)&(this->ModifiedEventDynamic).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedEventDynamic).field_0x10 = 0;
  *(undefined8 *)&this->ModifiedEvent = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedEvent).field_0x10 = 0;
  (this->BoneAnimationTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneAnimationTracks).ArrayNum = 0;
  (this->BoneAnimationTracks).ArrayMax = 0;
  (this->CurveData).FloatCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveData).FloatCurves.ArrayNum = 0;
  (this->CurveData).FloatCurves.ArrayMax = 0;
  (this->CurveData).TransformCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveData).TransformCurves.ArrayNum = 0;
  (this->CurveData).TransformCurves.ArrayMax = 0;
  (this->AnimatedBoneAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimatedBoneAttributes).ArrayNum = 0;
  (this->AnimatedBoneAttributes).ArrayMax = 0;
  this->bPopulated = false;
  (this->Notifier).Ptr = (FModelNotifier *)0x0;
  (this->FrameRate).Numerator = 60000;
  (this->FrameRate).Denominator = 1;
  return this;
}

// ~UAnimDataModel @ 147436b00

void __thiscall UAnimDataModel::~UAnimDataModel(UAnimDataModel *this)

{
  FModelNotifier *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAnimationDataModel__;
  pFVar1 = (this->Notifier).Ptr;
  if (pFVar1 != (FModelNotifier *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  DestructItems<FAnimatedBoneAttribute,int>
            ((FAnimatedBoneAttribute *)(this->AnimatedBoneAttributes).AllocatorInstance.Data,
             (this->AnimatedBoneAttributes).ArrayNum);
  pFVar2 = (this->AnimatedBoneAttributes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FTransformCurve,int>
            ((FTransformCurve *)(this->CurveData).TransformCurves.AllocatorInstance.Data,
             (this->CurveData).TransformCurves.ArrayNum);
  pFVar2 = (this->CurveData).TransformCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FFloatCurve,int>
            ((FFloatCurve *)(this->CurveData).FloatCurves.AllocatorInstance.Data,
             (this->CurveData).FloatCurves.ArrayNum);
  pFVar2 = (this->CurveData).FloatCurves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FBoneAnimationTrack,int>
            ((FBoneAnimationTrack *)(this->BoneAnimationTracks).AllocatorInstance.Data,
             (this->BoneAnimationTracks).ArrayNum);
  pFVar2 = (this->BoneAnimationTracks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModifiedEvent).field_0x8,*(int *)&(this->ModifiedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ModifiedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifiedEvent);
  pvVar3 = *(void **)&(this->ModifiedEventDynamic).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifiedEventDynamic);
  this->_padding_ = (longlong)&___7IAnimationDataModel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// EvaluateBoneTrackTransform @ 147449eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UAnimDataModel::EvaluateBoneTrackTransform
          (UAnimDataModel *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          FFrameTime *param_2,EAnimInterpolationType *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_198 [32];
  int local_178 [4];
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  fVar1 = param_2->SubFrame;
  fVar2 = fVar1;
  if (*param_3 == Step) {
    auVar3 = roundps(unaff_XMM6,ZEXT416((uint)(fVar1 + __real_3f000000)),1);
    fVar2 = auVar3._0_4_;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar2 - __real_3f800000) & (uint)___xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_178[0] = (param_2->FrameNumber).Value;
    if (__real_322bcc77 < (float)((uint)fVar2 & (uint)___xmm_7fffffff7fffffff7fffffff7fffffff)) {
      (**(code **)(this->_padding_ + 0x40))(this,&local_a8,fVar1,local_178);
      local_178[0] = (param_2->FrameNumber).Value;
      if (param_2->SubFrame != 0.0) {
        local_178[0] = local_178[0] + 1;
      }
      (**(code **)(this->_padding_ + 0x40))(this,&local_108,param_1,local_178);
      local_168.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_168.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_168.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Blend(&local_168,&local_a8,&local_108,fVar2);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_168.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_168.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_168.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_168.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_168.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_168.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_168.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_168.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_168.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_168.Scale3D.XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_168.Scale3D.ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_168.Scale3D.ZW.m128d_f64[1];
    }
    else {
      (**(code **)(this->_padding_ + 0x40))();
    }
  }
  else {
    local_178[0] = (param_2->FrameNumber).Value;
    if (fVar1 != 0.0) {
      local_178[0] = local_178[0] + 1;
    }
    (**(code **)(this->_padding_ + 0x40))(0,___xmm_7fffffff7fffffff7fffffff7fffffff,fVar1,local_178)
    ;
  }
  return __return_storage_ptr__;
}

// FindAttribute @ 14744ab70

FAnimatedBoneAttribute * __thiscall
UAnimDataModel::FindAttribute(UAnimDataModel *this,FAnimationAttributeIdentifier *param_1)

{
  FAnimatedBoneAttribute *pFVar1;
  FAnimationAttributeIdentifier local_88;
  FAnimationAttributeIdentifier local_48;
  
  FAnimationAttributeIdentifier::FAnimationAttributeIdentifier(&local_88,param_1);
  FAnimationAttributeIdentifier::FAnimationAttributeIdentifier(&local_48,&local_88);
  pFVar1 = TArray<FAnimatedBoneAttribute,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UAnimDataModel::FindAttribute_::__l2::<lambda_1>_>
                     ((TArray<FAnimatedBoneAttribute,TSizedDefaultAllocator<32>_> *)
                      &this->NumberOfKeys,(<lambda_1> *)&local_48);
  if (local_88.ScriptStructPath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ScriptStructPath.SubPathString.Data.AllocatorInstance.Data);
  }
  return pFVar1;
}

// FindBoneTrackByIndex @ 14744abd0

FBoneAnimationTrack * __thiscall
UAnimDataModel::FindBoneTrackByIndex(UAnimDataModel *this,int param_1)

{
  FBoneAnimationTrack *pFVar1;
  FBoneAnimationTrack *pFVar2;
  
  pFVar1 = *(FBoneAnimationTrack **)&(this->ModifiedEventDynamic).field_0x10;
  pFVar2 = pFVar1 + *(int *)&this->ModifiedEvent;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FBoneAnimationTrack *)0x0;
    }
    if (pFVar1->BoneTreeIndex == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindBoneTrackByName @ 14744ac00

FBoneAnimationTrack * __thiscall
UAnimDataModel::FindBoneTrackByName(UAnimDataModel *this,FName param_1)

{
  FBoneAnimationTrack *pFVar1;
  FBoneAnimationTrack *pFVar2;
  
  pFVar1 = *(FBoneAnimationTrack **)&(this->ModifiedEventDynamic).field_0x10;
  pFVar2 = pFVar1 + *(int *)&this->ModifiedEvent;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FBoneAnimationTrack *)0x0;
    }
    if (pFVar1->Name == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindCurve @ 14744ae30

FAnimCurveBase * __thiscall
UAnimDataModel::FindCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  FAnimCurveBase *pFVar1;
  
  if (param_1->CurveType == RCT_Float) {
                    /* WARNING: Could not recover jumptable at 0x00014744ae4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FAnimCurveBase *)(**(code **)(this->_padding_ + 0xe0))();
    return pFVar1;
  }
  if (param_1->CurveType != RCT_Transform) {
    return (FAnimCurveBase *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014744ae42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FAnimCurveBase *)(**(code **)(this->_padding_ + 0xe8))();
  return pFVar1;
}

// FindFloatCurve @ 14744ae60

FFloatCurve * __thiscall
UAnimDataModel::FindFloatCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FFloatCurve *pFVar4;
  FFloatCurve *pFVar5;
  undefined1 local_res8 [8];
  
  if ((param_1->CurveType != RCT_Float) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3847633434075725467>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                         ,0x165,"CurveIdentifier.CurveType == ERawCurveTrackTypes::RCT_Float"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FFloatCurve *)(*pcVar2)();
    return pFVar4;
  }
  iVar1 = (this->BoneAnimationTracks).ArrayNum;
  pFVar4 = (FFloatCurve *)(this->BoneAnimationTracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->BoneAnimationTracks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloatCurve_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((FName)pFVar4->_padding_ == param_1->CurveName) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  return (FFloatCurve *)0x0;
}

// FindMutableBoneTrackByName @ 14744af10

FBoneAnimationTrack * __thiscall
UAnimDataModel::FindMutableBoneTrackByName(UAnimDataModel *this,FName param_1)

{
  FBoneAnimationTrack *pFVar1;
  FBoneAnimationTrack *pFVar2;
  
  pFVar1 = (FBoneAnimationTrack *)(this->BoneAnimationTracks).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->BoneAnimationTracks).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FBoneAnimationTrack *)0x0;
    }
    if (pFVar1->Name == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindMutableCurveById @ 14744af40

FAnimCurveBase * __thiscall
UAnimDataModel::FindMutableCurveById(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  FTransformCurve *pFVar1;
  FFloatCurve *pFVar2;
  
  if (param_1->CurveType == RCT_Float) {
    pFVar2 = FindMutableFloatCurveById(this,param_1);
    return (FAnimCurveBase *)pFVar2;
  }
  if (param_1->CurveType != RCT_Transform) {
    return (FAnimCurveBase *)0x0;
  }
  pFVar1 = FindMutableTransformCurveById(this,param_1);
  return (FAnimCurveBase *)pFVar1;
}

// FindMutableFloatCurveById @ 14744af60

FFloatCurve * __thiscall
UAnimDataModel::FindMutableFloatCurveById(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  int iVar1;
  FFloatCurve *pFVar2;
  FFloatCurve *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->CurveData).FloatCurves.ArrayNum;
  pFVar2 = (FFloatCurve *)(this->CurveData).FloatCurves.AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->CurveData).FloatCurves.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((FName)pFVar2->_padding_ == param_1->CurveName) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FFloatCurve *)0x0;
}

// FindMutableTransformCurveById @ 14744afe0

FTransformCurve * __thiscall
UAnimDataModel::FindMutableTransformCurveById
          (UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  int iVar1;
  FTransformCurve *pFVar2;
  FTransformCurve *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->CurveData).TransformCurves.ArrayNum;
  pFVar2 = (FTransformCurve *)(this->CurveData).TransformCurves.AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->CurveData).TransformCurves.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTransformCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((FName)pFVar2->_padding_ == param_1->CurveName) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FTransformCurve *)0x0;
}

// FindRichCurve @ 14744b060

FRichCurve * __thiscall
UAnimDataModel::FindRichCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  ERawCurveTrackTypes EVar1;
  ETransformCurveChannel EVar2;
  longlong lVar3;
  longlong lVar4;
  FRichCurve *pFVar5;
  FRichCurve *pFVar6;
  
  pFVar6 = (FRichCurve *)0x0;
  pFVar5 = (FRichCurve *)0x0;
  if ((param_1->CurveName != (FName)0x0) && (EVar1 = param_1->CurveType, EVar1 != RCT_MAX)) {
    if (EVar1 == RCT_Float) {
      lVar3 = (**(code **)(this->_padding_ + 0xe0))();
      pFVar5 = (FRichCurve *)(lVar3 + 0x10);
      if (lVar3 == 0) {
        pFVar5 = pFVar6;
      }
      return pFVar5;
    }
    if ((((EVar1 == RCT_Transform) && (pFVar6 = pFVar5, param_1->Channel != Invalid)) &&
        (param_1->Axis != Invalid)) && (lVar3 = (**(code **)(this->_padding_ + 0xe8))(), lVar3 != 0)
       ) {
      EVar2 = param_1->Channel;
      if (EVar2 == Position) {
        lVar4 = 0x10;
      }
      else if (EVar2 == Rotation) {
        lVar4 = 0x1a0;
      }
      else {
        if (EVar2 != Scale) {
          return (FRichCurve *)0x0;
        }
        lVar4 = 0x330;
      }
      if (lVar3 + lVar4 != 0) {
        pFVar6 = (FRichCurve *)((ulonglong)param_1->Axis * 0x80 + 0x10 + lVar3 + lVar4);
      }
    }
  }
  return pFVar6;
}

// FindTransformCurve @ 14744b1b0

FTransformCurve * __thiscall
UAnimDataModel::FindTransformCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTransformCurve *pFVar4;
  FTransformCurve *pFVar5;
  undefined1 local_res8 [8];
  
  if ((param_1->CurveType != RCT_Transform) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3847633434075725453>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                         ,0x173,"CurveIdentifier.CurveType == ERawCurveTrackTypes::RCT_Transform"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTransformCurve *)(*pcVar2)();
    return pFVar4;
  }
  iVar1 = (this->FrameRate).Denominator;
  pFVar4 = *(FTransformCurve **)&this->PlayLength;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->FrameRate).Denominator != iVar1) {
      `TCheckedPointerIterator<FTransformCurve_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((FName)pFVar4->_padding_ == param_1->CurveName) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  return (FTransformCurve *)0x0;
}

// GenerateGuid @ 14744bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
UAnimDataModel::GenerateGuid
          (UAnimDataModel *this,FGuid *__return_storage_ptr__,FGuidGenerationSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGuid *pFVar3;
  undefined1 auStack_d8 [32];
  FHasherSha local_b8;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FSHA1::FSHA1(&local_b8.Sha);
  local_b8.bFinalized = false;
  GenerateStateHash<UE::Anim::DataModel::FHasherSha>
            ((UAnimDataModel *)&this[-1].CurveData.TransformCurves.ArrayNum,&local_b8,param_1);
  if (local_b8.bFinalized != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFinalized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimDataModelHasher.h"
                       ,0xc0,L"Calling FinalGuid more than once is not implemented.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGuid *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_b8.bFinalized = true;
  FSHA1::Final(&local_b8.Sha);
  FSHA1::GetHash(&local_b8.Sha,(uchar *)&local_28);
  __return_storage_ptr__->A = local_28 ^ local_18;
  __return_storage_ptr__->B = local_24;
  __return_storage_ptr__->C = local_20;
  __return_storage_ptr__->D = local_1c;
  FSHA1::~FSHA1(&local_b8.Sha);
  return __return_storage_ptr__;
}

// GetAnimationSequence @ 14744c320

UAnimSequence * __thiscall UAnimDataModel::GetAnimationSequence(UAnimDataModel *this)

{
  int iVar1;
  UClass *pUVar2;
  UAnimSequence *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  pUVar2 = Z_Construct_UClass_UAnimSequence_NoRegister();
  pUVar3 = (UAnimSequence *)
           FindObjectWithOuter((UObjectBase *)this[-1].Notifier.Ptr,pUVar2,(FName)0x0);
  if ((pUVar3 == (UAnimSequence *)0x0) &&
     (pUVar3 = (UAnimSequence *)this[-1].Notifier.Ptr, pUVar3 == (UAnimSequence *)0x0)) {
    pFVar5 = GetTypeName<UAnimSequence>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
  pUVar2 = (((TNonAccessTrackedObjectPtr<UClass> *)&pUVar3->_padding_)->ObjectPtr).field0_0x0.
           DebugPtr;
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= (int)pUVar2->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_))
  {
    return pUVar3;
  }
  pFVar5 = GetTypeName<UAnimSequence>(&local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar3);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// GetAttribute @ 14744c410

FAnimatedBoneAttribute * __thiscall
UAnimDataModel::GetAttribute(UAnimDataModel *this,FAnimationAttributeIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnimatedBoneAttribute *pFVar3;
  
  pFVar3 = (FAnimatedBoneAttribute *)(**(code **)(this->_padding_ + 0x140))();
  if ((pFVar3 == (FAnimatedBoneAttribute *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                         ,0x1e3,L"Unable to find attribute for provided identifier"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAnimatedBoneAttribute *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// GetAttributes @ 14744c460

TArrayView<FAnimatedBoneAttribute_const_,int> * __thiscall
UAnimDataModel::GetAttributes
          (UAnimDataModel *this,
          TArrayView<FAnimatedBoneAttribute_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FAnimatedBoneAttribute_const_,int> *pTVar4;
  
  iVar1 = *(int *)&(this->CurveData).FloatCurves.AllocatorInstance.Data;
  __return_storage_ptr__->DataPtr = *(FAnimatedBoneAttribute **)&this->NumberOfKeys;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FAnimatedBoneAttribute_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetAttributesForBone @ 14744c4d0

void __thiscall
UAnimDataModel::GetAttributesForBone
          (UAnimDataModel *this,FName *param_1,
          TArray<FAnimatedBoneAttribute_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  iVar1 = *(int *)&(this->CurveData).FloatCurves.AllocatorInstance.Data;
  lVar8 = *(longlong *)&this->NumberOfKeys;
  FVar2 = *param_1;
  lVar7 = (longlong)iVar1 * 0xf0 + lVar8;
  while( true ) {
    if (*(int *)&(this->CurveData).FloatCurves.AllocatorInstance.Data != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAnimatedBoneAttribute_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar8 == lVar7) break;
    if (*(FName *)(lVar8 + 8) == FVar2) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      local_28[0] = lVar8;
      if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)param_2->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
    }
    lVar8 = lVar8 + 0xf0;
  }
  return;
}

// GetBoneAnimationTracks @ 14744c640

TArray<FBoneAnimationTrack,TSizedDefaultAllocator<32>_> * __thiscall
UAnimDataModel::GetBoneAnimationTracks(UAnimDataModel *this)

{
  return (TArray<FBoneAnimationTrack,TSizedDefaultAllocator<32>_> *)
         &(this->ModifiedEventDynamic).field_0x10;
}

// GetBoneTrackByIndex @ 147453910

FBoneAnimationTrack * __thiscall
UAnimDataModel::GetBoneTrackByIndex(UAnimDataModel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBoneAnimationTrack *pFVar4;
  
  if ((param_1 < 0) || (*(int *)&this->ModifiedEvent <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneAnimationTracks.IsValidIndex(TrackIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                       ,0x78,L"Unable to find animation track by index");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneAnimationTrack *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < *(int *)&this->ModifiedEvent) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneAnimationTrack *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBoneAnimationTrack *)
         ((longlong)param_1 * 0x40 + *(longlong *)&(this->ModifiedEventDynamic).field_0x10);
}

// GetBoneTrackByName @ 1474539c0

FBoneAnimationTrack * __thiscall
UAnimDataModel::GetBoneTrackByName(UAnimDataModel *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FBoneAnimationTrack *pFVar3;
  FBoneAnimationTrack *pFVar4;
  
  pFVar3 = *(FBoneAnimationTrack **)&(this->ModifiedEventDynamic).field_0x10;
  pFVar4 = pFVar3 + *(int *)&this->ModifiedEvent;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if (pFVar3->Name == param_1) {
      return pFVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TrackPtr != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                     ,0x83,L"Unable to find animation track by name");
  if (!bVar2) {
    return (FBoneAnimationTrack *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FBoneAnimationTrack *)(*pcVar1)();
  return pFVar3;
}

// GetBoneTrackIndex @ 147453a20

int __thiscall UAnimDataModel::GetBoneTrackIndex(UAnimDataModel *this,FBoneAnimationTrack *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)&(this->ModifiedEventDynamic).field_0x10;
  lVar3 = (longlong)*(int *)&this->ModifiedEvent * 0x40 + lVar1;
  if (lVar1 != lVar3) {
    lVar2 = lVar1;
    do {
      if (*(FName *)(lVar2 + 0x34) == param_1->Name) {
        return (int)(lVar2 - lVar1 >> 6);
      }
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != lVar3);
  }
  return -1;
}

// GetBoneTrackIndexByName @ 147453a70

int __thiscall UAnimDataModel::GetBoneTrackIndexByName(UAnimDataModel *this,FName param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x70))();
  if (lVar2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000147453a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(this,lVar2,UNRECOVERED_JUMPTABLE);
    return iVar1;
  }
  return -1;
}

// GetBoneTrackNames @ 147453ab0

void __thiscall
UAnimDataModel::GetBoneTrackNames
          (UAnimDataModel *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  iVar1 = *(int *)&this->ModifiedEvent;
  lVar7 = *(longlong *)&(this->ModifiedEventDynamic).field_0x10;
  lVar6 = (longlong)iVar1 * 0x40 + lVar7;
  while( true ) {
    if (*(int *)&this->ModifiedEvent != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBoneAnimationTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar7 == lVar6) break;
    local_28[0] = *(undefined8 *)(lVar7 + 0x34);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    lVar7 = lVar7 + 0x40;
    param_1->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  }
  return;
}

// GetBoneTrackTransform @ 147453be0

TTransform<double> * __thiscall
UAnimDataModel::GetBoneTrackTransform
          (UAnimDataModel *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          FFrameNumber *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  __m128d _Var16;
  __m128d _Var17;
  bool bVar18;
  uint uVar19;
  longlong *plVar20;
  TTransform<double> *pTVar21;
  longlong lVar22;
  uint uVar23;
  longlong *plVar24;
  double dVar25;
  
  plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  _Var16 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  plVar24 = (longlong *)*plVar20;
  plVar20 = plVar24 + (longlong)(int)plVar20[1] * 8;
  do {
    if (plVar24 == plVar20) {
LAB_147453c21:
      *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      _Var17 = UE::Math::TTransform<double>::Identity.Translation.XY;
      *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var16.m128d_f64;
      _Var16 = UE::Math::TTransform<double>::Identity.Translation.ZW;
      *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var17.m128d_f64;
      _Var17 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
      *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var16.m128d_f64;
      _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var17.m128d_f64;
      *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var16.m128d_f64;
      return __return_storage_ptr__;
    }
    if (*(FName *)((longlong)plVar24 + 0x34) == param_1) {
      uVar6 = param_2->Value;
      lVar22 = (longlong)(int)uVar6;
      if ((((-1 < (int)uVar6) && ((int)uVar6 < (int)plVar24[1])) && ((int)uVar6 < (int)plVar24[3]))
         && ((int)uVar6 < (int)plVar24[5])) {
        uVar23 = ~uVar6 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar6 < (int)plVar24[5]) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TTransform<double> *)(*pcVar8)();
          return pTVar21;
        }
        lVar7 = plVar24[4];
        fVar1 = *(float *)(lVar7 + lVar22 * 0xc);
        fVar2 = *(float *)(lVar7 + 8 + lVar22 * 0xc);
        uVar19 = 0;
        if ((int)uVar6 < (int)plVar24[1]) {
          uVar19 = uVar23;
        }
        dVar15 = (double)*(float *)(lVar7 + 4 + lVar22 * 0xc);
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TTransform<double> *)(*pcVar8)();
          return pTVar21;
        }
        lVar7 = *plVar24;
        fVar3 = *(float *)(lVar7 + lVar22 * 0xc);
        fVar4 = *(float *)(lVar7 + 8 + lVar22 * 0xc);
        uVar19 = 0;
        if ((int)uVar6 < (int)plVar24[3]) {
          uVar19 = uVar23;
        }
        dVar14 = (double)*(float *)(lVar7 + 4 + lVar22 * 0xc);
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TTransform<double> *)(*pcVar8)();
          return pTVar21;
        }
        lVar7 = plVar24[2];
        uVar5 = *(undefined8 *)(lVar7 + 8 + lVar22 * 0x10);
        dVar13 = (double)(float)((ulonglong)uVar5 >> 0x20);
        dVar25 = (double)*(float *)(lVar7 + 4 + lVar22 * 0x10);
        auVar9._8_4_ = SUB84(dVar25,0);
        auVar9._0_8_ = (double)*(float *)(lVar7 + lVar22 * 0x10);
        auVar9._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar9;
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ = (double)(float)uVar5;
        auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar12;
        auVar10._8_4_ = SUB84(dVar14,0);
        auVar10._0_8_ = (double)fVar3;
        auVar10._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar10;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar4;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
        auVar11._8_4_ = SUB84(dVar15,0);
        auVar11._0_8_ = (double)fVar1;
        auVar11._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar11;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
        return __return_storage_ptr__;
      }
      goto LAB_147453c21;
    }
    plVar24 = plVar24 + 8;
  } while( true );
}

// GetBoneTrackTransforms @ 147453ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAnimDataModel::GetBoneTrackTransforms
          (UAnimDataModel *this,FName param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  uint local_f8 [2];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  lVar10 = *plVar6;
  lVar8 = (longlong)(int)plVar6[1] * 0x40 + lVar10;
  while( true ) {
    if (lVar10 == lVar8) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (param_2,*(int *)&(this->ModifiedEvent).field_0x18,Default);
      return;
    }
    if (*(FName *)(lVar10 + 0x34) == param_1) break;
    lVar10 = lVar10 + 0x40;
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,*(int *)&(this->ModifiedEvent).field_0x18,Default);
  if (lVar10 == 0) {
    return;
  }
  uVar9 = 0;
  if (*(int *)&(this->ModifiedEvent).field_0x18 < 1) {
    return;
  }
  lVar10 = 0;
  do {
    local_f8[0] = uVar9;
    puVar7 = (undefined4 *)(**(code **)(this->_padding_ + 0x40))(this,local_88,param_1,local_f8);
    local_e0 = *(undefined8 *)(puVar7 + 4);
    uStack_d8 = *(undefined8 *)(puVar7 + 6);
    local_d0 = *(undefined8 *)(puVar7 + 8);
    uStack_c8 = *(undefined8 *)(puVar7 + 10);
    local_f0 = *puVar7;
    uStack_ec = puVar7[1];
    uStack_e8 = puVar7[2];
    uStack_e4 = puVar7[3];
    local_c0 = *(undefined8 *)(puVar7 + 0xc);
    uStack_b8 = *(undefined8 *)(puVar7 + 0xe);
    local_a0 = *(undefined8 *)(puVar7 + 0x14);
    uStack_98 = *(undefined8 *)(puVar7 + 0x16);
    local_b0 = *(undefined8 *)(puVar7 + 0x10);
    uStack_a8 = *(undefined8 *)(puVar7 + 0x12);
    uVar5 = 0;
    if ((int)uVar9 < param_2->ArrayNum) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_108 = (longlong)(int)uVar9;
      local_100 = (longlong)param_2->ArrayNum;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    uVar9 = uVar9 + 1;
    pFVar1 = pFVar2 + lVar10;
    *(undefined4 *)pFVar1 = local_f0;
    *(undefined4 *)(pFVar1 + 4) = uStack_ec;
    *(undefined4 *)(pFVar1 + 8) = uStack_e8;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_e4;
    *(undefined8 *)(pFVar2 + lVar10 + 0x10) = local_e0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x10 + 8) = uStack_d8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x20) = local_d0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x20 + 8) = uStack_c8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x30) = local_c0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x30 + 8) = uStack_b8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x40) = local_b0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x40 + 8) = uStack_a8;
    *(undefined8 *)(pFVar2 + lVar10 + 0x50) = local_a0;
    *(undefined8 *)(pFVar2 + lVar10 + 0x50 + 8) = uStack_98;
    lVar10 = lVar10 + 0x60;
  } while ((int)uVar9 < *(int *)&(this->ModifiedEvent).field_0x18);
  return;
}

// GetBoneTrackTransforms @ 147454060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAnimDataModel::GetBoneTrackTransforms
          (UAnimDataModel *this,FName param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  lVar11 = *plVar6;
  lVar9 = (longlong)(int)plVar6[1] * 0x40 + lVar11;
  while( true ) {
    if (lVar11 == lVar9) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (param_3,param_2->ArrayNum,Default);
      return;
    }
    if (*(FName *)(lVar11 + 0x34) == param_1) break;
    lVar11 = lVar11 + 0x40;
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_3,param_2->ArrayNum,Default);
  if (lVar11 == 0) {
    return;
  }
  iVar8 = param_2->ArrayNum;
  uVar10 = 0;
  if (iVar8 < 1) {
    return;
  }
  lVar11 = 0;
  while( true ) {
    local_108 = *(code **)(this->_padding_ + 0x40);
    uVar5 = 0;
    if ((int)uVar10 < iVar8) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_110 = (longlong)iVar8;
      local_118 = (longlong)(int)uVar10;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar7 = (undefined4 *)
             (*local_108)(this,local_a8,param_1,
                          (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
    local_f8 = *(undefined8 *)(puVar7 + 4);
    uStack_f0 = *(undefined8 *)(puVar7 + 6);
    local_e8 = *(undefined8 *)(puVar7 + 8);
    uStack_e0 = *(undefined8 *)(puVar7 + 10);
    local_108._0_4_ = *puVar7;
    local_108._4_4_ = puVar7[1];
    uStack_100 = puVar7[2];
    uStack_fc = puVar7[3];
    local_d8 = *(undefined8 *)(puVar7 + 0xc);
    uStack_d0 = *(undefined8 *)(puVar7 + 0xe);
    local_b8 = *(undefined8 *)(puVar7 + 0x14);
    uStack_b0 = *(undefined8 *)(puVar7 + 0x16);
    local_c8 = *(undefined8 *)(puVar7 + 0x10);
    uStack_c0 = *(undefined8 *)(puVar7 + 0x12);
    uVar5 = 0;
    if ((int)uVar10 < param_3->ArrayNum) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (local_118 = (longlong)(int)uVar10, local_110 = (longlong)param_3->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar2 = (param_3->AllocatorInstance).Data;
    uVar10 = uVar10 + 1;
    pFVar1 = pFVar2 + lVar11;
    *(undefined4 *)pFVar1 = (undefined4)local_108;
    *(undefined4 *)(pFVar1 + 4) = local_108._4_4_;
    *(undefined4 *)(pFVar1 + 8) = uStack_100;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_fc;
    *(undefined8 *)(pFVar2 + lVar11 + 0x10) = local_f8;
    *(undefined8 *)(pFVar2 + lVar11 + 0x10 + 8) = uStack_f0;
    *(undefined8 *)(pFVar2 + lVar11 + 0x20) = local_e8;
    *(undefined8 *)(pFVar2 + lVar11 + 0x20 + 8) = uStack_e0;
    *(undefined8 *)(pFVar2 + lVar11 + 0x30) = local_d8;
    *(undefined8 *)(pFVar2 + lVar11 + 0x30 + 8) = uStack_d0;
    *(undefined8 *)(pFVar2 + lVar11 + 0x40) = local_c8;
    *(undefined8 *)(pFVar2 + lVar11 + 0x40 + 8) = uStack_c0;
    *(undefined8 *)(pFVar2 + lVar11 + 0x50) = local_b8;
    *(undefined8 *)(pFVar2 + lVar11 + 0x50 + 8) = uStack_b0;
    lVar11 = lVar11 + 0x60;
    iVar8 = param_2->ArrayNum;
    if (iVar8 <= (int)uVar10) {
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// GetBoneTracksTransform @ 147454290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAnimDataModel::GetBoneTracksTransform
          (UAnimDataModel *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FFrameNumber *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  FFrameNumber *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_128 = param_2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_3,param_1->ArrayNum,Default);
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      pcVar2 = *(code **)(this->_padding_ + 0x40);
      uVar5 = 0;
      if ((int)uVar9 < iVar7) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_130 = (longlong)iVar7;
        local_138 = (longlong)(int)uVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar6 = (undefined4 *)
               (*pcVar2)(this,local_b8,*(undefined8 *)((param_1->AllocatorInstance).Data + lVar10),
                         local_128);
      local_110 = *(undefined8 *)(puVar6 + 4);
      uStack_108 = *(undefined8 *)(puVar6 + 6);
      local_100 = *(undefined8 *)(puVar6 + 8);
      uStack_f8 = *(undefined8 *)(puVar6 + 10);
      local_120 = *puVar6;
      uStack_11c = puVar6[1];
      uStack_118 = puVar6[2];
      uStack_114 = puVar6[3];
      local_f0 = *(undefined8 *)(puVar6 + 0xc);
      uStack_e8 = *(undefined8 *)(puVar6 + 0xe);
      local_d0 = *(undefined8 *)(puVar6 + 0x14);
      uStack_c8 = *(undefined8 *)(puVar6 + 0x16);
      local_e0 = *(undefined8 *)(puVar6 + 0x10);
      uStack_d8 = *(undefined8 *)(puVar6 + 0x12);
      uVar5 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_138 = (longlong)(int)uVar9;
        local_130 = (longlong)param_3->ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
      pFVar1 = pFVar3 + lVar8;
      *(undefined4 *)pFVar1 = local_120;
      *(undefined4 *)(pFVar1 + 4) = uStack_11c;
      *(undefined4 *)(pFVar1 + 8) = uStack_118;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_114;
      *(undefined8 *)(pFVar3 + lVar8 + 0x10) = local_110;
      *(undefined8 *)(pFVar3 + lVar8 + 0x10 + 8) = uStack_108;
      *(undefined8 *)(pFVar3 + lVar8 + 0x20) = local_100;
      *(undefined8 *)(pFVar3 + lVar8 + 0x20 + 8) = uStack_f8;
      *(undefined8 *)(pFVar3 + lVar8 + 0x30) = local_f0;
      *(undefined8 *)(pFVar3 + lVar8 + 0x30 + 8) = uStack_e8;
      *(undefined8 *)(pFVar3 + lVar8 + 0x40) = local_e0;
      *(undefined8 *)(pFVar3 + lVar8 + 0x40 + 8) = uStack_d8;
      *(undefined8 *)(pFVar3 + lVar8 + 0x50) = local_d0;
      *(undefined8 *)(pFVar3 + lVar8 + 0x50 + 8) = uStack_c8;
      lVar8 = lVar8 + 0x60;
      iVar7 = param_1->ArrayNum;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// GetController @ 147454890

TScriptInterface<IAnimationDataController> * __thiscall
UAnimDataModel::GetController
          (UAnimDataModel *this,TScriptInterface<IAnimationDataController> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetCurve @ 147454a70

FAnimCurveBase * __thiscall
UAnimDataModel::GetCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnimCurveBase *pFVar3;
  
  pFVar3 = (FAnimCurveBase *)(**(code **)(this->_padding_ + 0xd8))();
  if ((pFVar3 == (FAnimCurveBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurvePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                         ,0x1a6,L"Tried to retrieve non-existing curve"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAnimCurveBase *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// GetCurveData @ 147454c80

FAnimationCurveData * __thiscall UAnimDataModel::GetCurveData(UAnimDataModel *this)

{
  return (FAnimationCurveData *)&this->BoneAnimationTracks;
}

// GetFloatCurve @ 147454e50

FFloatCurve * __thiscall
UAnimDataModel::GetFloatCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFloatCurve *pFVar3;
  
  pFVar3 = (FFloatCurve *)(**(code **)(this->_padding_ + 0xe0))();
  if ((pFVar3 == (FFloatCurve *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurvePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                         ,0x1ad,L"Tried to retrieve non-existing curve"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFloatCurve *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// GetFloatCurves @ 147454ea0

TArray<FFloatCurve,TSizedDefaultAllocator<32>_> * __thiscall
UAnimDataModel::GetFloatCurves(UAnimDataModel *this)

{
  return (TArray<FFloatCurve,TSizedDefaultAllocator<32>_> *)&this->BoneAnimationTracks;
}

// GetFrameRate @ 147454eb0

FFrameRate __thiscall UAnimDataModel::GetFrameRate(UAnimDataModel *this)

{
  FFrameRate in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&(this->ModifiedEvent).field_0xc;
  return in_RDX;
}

// GetModifiedDynamicEvent @ 1474586a0

FAnimDataModelModifiedDynamicEvent * __thiscall
UAnimDataModel::GetModifiedDynamicEvent(UAnimDataModel *this)

{
  return (FAnimDataModelModifiedDynamicEvent *)&this->_padding_;
}

// GetModifiedEvent @ 1474586b0

TMulticastDelegate<void___cdecl(EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
* __thiscall UAnimDataModel::GetModifiedEvent(UAnimDataModel *this)

{
  return (TMulticastDelegate<void___cdecl(EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
          *)&this->_padding_;
}

// GetMutableBoneTrackByName @ 1474587a0

FBoneAnimationTrack * __thiscall
UAnimDataModel::GetMutableBoneTrackByName(UAnimDataModel *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FBoneAnimationTrack *pFVar3;
  FBoneAnimationTrack *pFVar4;
  
  pFVar3 = (FBoneAnimationTrack *)(this->BoneAnimationTracks).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->BoneAnimationTracks).ArrayNum;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if (pFVar3->Name == param_1) {
      return pFVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TrackPtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                     ,0x368,L"Failed to find track by name");
  if (!bVar2) {
    return (FBoneAnimationTrack *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FBoneAnimationTrack *)(*pcVar1)();
  return pFVar3;
}

// GetMutableRichCurve @ 147458ef0

FRichCurve * __thiscall
UAnimDataModel::GetMutableRichCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  ERawCurveTrackTypes EVar1;
  ETransformCurveChannel EVar2;
  int iVar3;
  FTransformCurve *pFVar4;
  longlong lVar5;
  FRichCurve *pFVar6;
  FRichCurve *pFVar7;
  FRichCurve *pFVar8;
  FRichCurve *pFVar9;
  undefined1 local_res10 [8];
  
  pFVar8 = (FRichCurve *)0x0;
  pFVar7 = (FRichCurve *)0x0;
  if ((param_1->CurveName != (FName)0x0) && (EVar1 = param_1->CurveType, EVar1 != RCT_MAX)) {
    if (EVar1 == RCT_Float) {
      pFVar7 = (FRichCurve *)(this->CurveData).FloatCurves.AllocatorInstance.Data;
      iVar3 = (this->CurveData).FloatCurves.ArrayNum;
      pFVar9 = (FRichCurve *)((longlong)pFVar7 + (longlong)iVar3 * 0x90);
      while( true ) {
        if ((this->CurveData).FloatCurves.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        pFVar6 = pFVar8;
        if ((pFVar7 == pFVar9) || (pFVar6 = pFVar7, (FName)pFVar7->_padding_ == param_1->CurveName))
        break;
        pFVar7 = (FRichCurve *)&pFVar7[1]._padding_;
      }
      pFVar7 = (FRichCurve *)&pFVar6->_padding_;
      if (pFVar6 == (FRichCurve *)0x0) {
        pFVar7 = pFVar8;
      }
      return pFVar7;
    }
    if ((((EVar1 == RCT_Transform) && (pFVar8 = pFVar7, param_1->Channel != Invalid)) &&
        (param_1->Axis != Invalid)) &&
       (pFVar4 = FindMutableTransformCurveById(this,param_1), pFVar4 != (FTransformCurve *)0x0)) {
      EVar2 = param_1->Channel;
      if (EVar2 == Position) {
        lVar5 = 0x10;
      }
      else if (EVar2 == Rotation) {
        lVar5 = 0x1a0;
      }
      else {
        if (EVar2 != Scale) {
          return (FRichCurve *)0x0;
        }
        lVar5 = 0x330;
      }
      lVar5 = (longlong)(pFVar4->TranslationCurve).FloatCurves + lVar5 + -0x20;
      if (lVar5 != 0) {
        pFVar8 = (FRichCurve *)((ulonglong)param_1->Axis * 0x80 + 0x10 + lVar5);
      }
    }
  }
  return pFVar8;
}

// GetNotifier @ 147459100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FModelNotifier * __thiscall UAnimDataModel::GetNotifier(UAnimDataModel *this)

{
  int *piVar1;
  FModelNotifier *pFVar2;
  FModelNotifier *pFVar3;
  TMulticastDelegate<void___cdecl(EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
  *pTVar4;
  FAnimDataModelModifiedDynamicEvent *pFVar5;
  UAnimDataModel *pUVar6;
  UAnimDataModel *pUVar7;
  
  piVar1 = &this[-1].CurveData.TransformCurves.ArrayNum;
  if ((this->CurveData).TransformCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    return (FModelNotifier *)(this->CurveData).TransformCurves.AllocatorInstance.Data;
  }
  pFVar3 = ::operator_new(0x30);
  if (pFVar3 == (FModelNotifier *)0x0) {
    pFVar3 = (FModelNotifier *)0x0;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (piVar1 != (int *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)piVar1);
    }
    pUVar7 = (UAnimDataModel *)0x0;
    pFVar3->_padding_ = (longlong)&___7FModelNotifier_IAnimationDataModel__6B_;
    *(int **)&pFVar3->DataModel = piVar1;
    pUVar6 = this;
    if (piVar1 == (int *)0x0) {
      pUVar6 = pUVar7;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (piVar1 == (int *)0x0)) {
      *(UAnimDataModel **)&(pFVar3->DataModel).field_0x8 = pUVar6;
      if (piVar1 == (int *)0x0) {
        pTVar4 = (TMulticastDelegate<void___cdecl(EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
                  *)(**(code **)(_DAT_00000000 + 0x150))(0);
      }
      else {
        pTVar4 = (TMulticastDelegate<void___cdecl(EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
                  *)(**(code **)(pUVar6->_padding_ + 0x150))(pUVar6);
        pUVar7 = pUVar6;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)piVar1);
      *(UAnimDataModel **)&(pFVar3->DataModel).field_0x8 = pUVar6;
      pTVar4 = (TMulticastDelegate<void___cdecl(EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
                *)(**(code **)(pUVar6->_padding_ + 0x150))(pUVar6);
      pUVar7 = pUVar6;
    }
    pFVar3->ModifiedEvent = pTVar4;
    pFVar5 = (FAnimDataModelModifiedDynamicEvent *)(**(code **)(pUVar7->_padding_ + 0x180))(pUVar7);
    pFVar3->ModifiedEventDynamic = pFVar5;
    pFVar3->BracketCounter = 0;
  }
  pFVar2 = (FModelNotifier *)(this->CurveData).TransformCurves.AllocatorInstance.Data;
  if (pFVar2 != pFVar3) {
    (this->CurveData).TransformCurves.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
    if (pFVar2 != (FModelNotifier *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return (FModelNotifier *)(this->CurveData).TransformCurves.AllocatorInstance.Data;
    }
    return pFVar3;
  }
  return pFVar2;
}

// GetNumBoneTracks @ 147459270

int __thiscall UAnimDataModel::GetNumBoneTracks(UAnimDataModel *this)

{
  return *(int *)&this->ModifiedEvent;
}

// GetNumberOfAttributes @ 1474592b0

int __thiscall UAnimDataModel::GetNumberOfAttributes(UAnimDataModel *this)

{
  return *(int *)&(this->CurveData).FloatCurves.AllocatorInstance.Data;
}

// GetNumberOfAttributesForBoneIndex @ 1474592c0

int __thiscall UAnimDataModel::GetNumberOfAttributesForBoneIndex(UAnimDataModel *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res10 [8];
  
  iVar1 = *(int *)&(this->CurveData).FloatCurves.AllocatorInstance.Data;
  iVar4 = 0;
  lVar2 = *(longlong *)&this->NumberOfKeys;
  lVar3 = (longlong)iVar1 * 0xf0 + lVar2;
  while( true ) {
    if (*(int *)&(this->CurveData).FloatCurves.AllocatorInstance.Data != iVar1) {
      `TCheckedPointerIterator<FAnimatedBoneAttribute_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (lVar2 == lVar3) break;
    iVar4 = iVar4 + (uint)(*(int *)(lVar2 + 0x10) == param_1);
    lVar2 = lVar2 + 0xf0;
  }
  return iVar4;
}

// GetNumberOfFloatCurves @ 147459350

int __thiscall UAnimDataModel::GetNumberOfFloatCurves(UAnimDataModel *this)

{
  return (this->BoneAnimationTracks).ArrayNum;
}

// GetNumberOfFrames @ 147459360

int __thiscall UAnimDataModel::GetNumberOfFrames(UAnimDataModel *this)

{
  return *(int *)&(this->ModifiedEvent).field_0x14;
}

// GetNumberOfKeys @ 147459370

int __thiscall UAnimDataModel::GetNumberOfKeys(UAnimDataModel *this)

{
  return *(int *)&(this->ModifiedEvent).field_0x18;
}

// GetNumberOfTransformCurves @ 147459380

int __thiscall UAnimDataModel::GetNumberOfTransformCurves(UAnimDataModel *this)

{
  return (this->FrameRate).Denominator;
}

// GetPlayLength @ 1474593d0

double __thiscall UAnimDataModel::GetPlayLength(UAnimDataModel *this)

{
  int iVar1;
  
  iVar1 = *(int *)&(this->ModifiedEvent).field_0x10;
  return ((double)iVar1 * 0.0 +
         (double)((longlong)iVar1 * (longlong)*(int *)&(this->ModifiedEvent).field_0x14)) /
         (double)*(int *)&(this->ModifiedEvent).field_0xc;
}

// GetPopulationFlag @ 147459430

bool * __thiscall UAnimDataModel::GetPopulationFlag(UAnimDataModel *this)

{
  return (bool *)&(this->CurveData).FloatCurves.ArrayNum;
}

// GetPrivateStaticClass @ 1474624c0

UClass * __cdecl UAnimDataModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimDataModel",
               &Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton,
               StaticRegisterNativesUAnimDataModel,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimDataModel>,InternalVTableHelperCtorCaller<UAnimDataModel>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimDataModel.InnerSingleton;
}

// GetRichCurve @ 147463060

FRichCurve * __thiscall
UAnimDataModel::GetRichCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRichCurve *pFVar3;
  
  pFVar3 = (FRichCurve *)(**(code **)(this->_padding_ + 0xf0))();
  if ((pFVar3 == (FRichCurve *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurvePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                         ,0x1bb,L"Tried to retrieve non-existing curve"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRichCurve *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// GetSkeleton @ 147463290

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

USkeleton * __thiscall UAnimDataModel::GetSkeleton(UAnimDataModel *this)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  USkeleton *pUVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  FText local_88;
  FText local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  FTextFormat local_38;
  FString local_28;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pFVar6 = GetTypeName<UAnimationAsset>(&local_58);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar5 = Z_Construct_UClass_UAnimationAsset_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar5->_padding_)) {
    pUVar10 = *(USkeleton **)&this_00[1].field_0x10;
    if (pUVar10 == (USkeleton *)0x0) {
      pFVar6 = UObjectBaseUtility::GetPathName(this_00,&local_68,(UObject *)0x0);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar7 = FText::FromString(&local_48,pwVar11);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"AnimDataModel",L"UnableToFindSkeleton",
                          L"Unable to retrieve target USkeleton for Animation Asset ({0})");
      local_c8.TextData.Reference = (pFVar7->TextData).Reference;
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res8);
      }
      local_c8.Flags = pFVar7->Flags;
      pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
      local_a8.Type = Text;
      FText::FText((FText *)&local_a8.TextValue,&local_c8);
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar10 = (USkeleton *)(*pcVar3)();
          return pUVar10;
        }
      }
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_d8.AllocatorInstance.Data,&local_a8,1);
      local_b8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_88,&local_b8,&local_d8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      pIVar2 = (pFVar7->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    return pUVar10;
  }
  pFVar6 = GetTypeName<UAnimationAsset>(&local_28);
  pwVar11 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)this_00);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar12);
}

// GetTransformCurve @ 147464b80

FTransformCurve * __thiscall
UAnimDataModel::GetTransformCurve(UAnimDataModel *this,FAnimationCurveIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTransformCurve *pFVar3;
  
  pFVar3 = (FTransformCurve *)(**(code **)(this->_padding_ + 0xe8))();
  if ((pFVar3 == (FTransformCurve *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurvePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                         ,0x1b4,L"Tried to retrieve non-existing curve"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTransformCurve *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// GetTransformCurves @ 147464bd0

TArray<FTransformCurve,TSizedDefaultAllocator<32>_> * __thiscall
UAnimDataModel::GetTransformCurves(UAnimDataModel *this)

{
  return (TArray<FTransformCurve,TSizedDefaultAllocator<32>_> *)&this->PlayLength;
}

// HasBeenPopulated @ 147464fe0

bool __thiscall UAnimDataModel::HasBeenPopulated(UAnimDataModel *this)

{
  return (bool)(char)(this->CurveData).FloatCurves.ArrayNum;
}

// IsEditorOnly @ 147467380

bool __thiscall UAnimDataModel::IsEditorOnly(UAnimDataModel *this)

{
  return true;
}

// IsValidBoneTrackIndex @ 147467a30

bool __thiscall UAnimDataModel::IsValidBoneTrackIndex(UAnimDataModel *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)&this->ModifiedEvent)) {
    return true;
  }
  return false;
}

// IsValidBoneTrackName @ 147467a50

bool __thiscall UAnimDataModel::IsValidBoneTrackName(UAnimDataModel *this,FName *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)&(this->ModifiedEventDynamic).field_0x10;
  lVar2 = (longlong)*(int *)&this->ModifiedEvent * 0x40 + lVar1;
  if (lVar1 != lVar2) {
    do {
      if (*(FName *)(lVar1 + 0x34) == *param_1) goto LAB_147467a78;
      lVar1 = lVar1 + 0x40;
    } while (lVar1 != lVar2);
  }
  lVar1 = 0;
LAB_147467a78:
  return lVar1 != 0;
}

// IterateBoneKeys @ 147467a90

void __thiscall
UAnimDataModel::IterateBoneKeys
          (UAnimDataModel *this,FName *param_1,
          TFunction<bool___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TQuat<float>_const_&,UE::Math::TVector<float>,FFrameNumber_const_&)>
          *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint local_60 [2];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x70))(this,*param_1);
  if (plVar8 != (longlong *)0x0) {
    uVar11 = 0;
    iVar6 = (**(code **)(this->_padding_ + 0x20))(this);
    if (0 < iVar6) {
      lVar13 = 0;
      do {
        uVar12 = ~uVar11 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar11 < (int)plVar8[5]) {
          uVar7 = uVar12;
        }
        local_60[0] = uVar11;
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_58 = *(undefined8 *)(lVar13 + plVar8[4]);
        uVar1 = *(undefined4 *)(lVar13 + 8 + plVar8[4]);
        uVar7 = 0;
        if ((int)uVar11 < (int)plVar8[3]) {
          uVar7 = uVar12;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_50 = plVar8[2];
        uVar7 = 0;
        if ((int)uVar11 < (int)plVar8[1]) {
          uVar7 = uVar12;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar2 = *plVar8;
        local_48 = local_58;
        local_40 = uVar1;
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar3 = *(code **)param_2;
        plVar10 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar10 = (longlong *)&param_2->field_0x10;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        cVar5 = (*pcVar3)(uVar9,lVar2 + (longlong)(int)uVar11 * 0xc,
                          (longlong)(int)uVar11 * 0x10 + local_50,&local_48,local_60);
        if (cVar5 == '\0') break;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0xc;
        iVar6 = (**(code **)(this->_padding_ + 0x20))(this);
      } while ((int)uVar11 < iVar6);
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// LockEvaluationAndModification @ 147467e40

void __thiscall UAnimDataModel::LockEvaluationAndModification(UAnimDataModel *this)

{
  return;
}

// OnNotify @ 14746ba10

void __thiscall
UAnimDataModel::OnNotify
          (UAnimDataModel *this,EAnimDataModelNotifyType *param_1,
          FAnimDataModelNotifPayload *param_2)

{
  return;
}

// PostDuplicate @ 14746ef10

void __thiscall UAnimDataModel::PostDuplicate(UAnimDataModel *this,bool param_1)

{
  FModelNotifier *this_00;
  
  this_00 = (FModelNotifier *)(**(code **)(this->_padding_ + 0x1b0))(&this->_padding_);
  IAnimationDataModel::FModelNotifier::Notify(this_00,Populated);
  return;
}

// PostLoad @ 14746f3a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UAnimDataModel::PostLoad(UAnimDataModel *this)

{
  float fVar1;
  int iVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar3;
  ITextData *pIVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FModelNotifier *pFVar10;
  longlong lVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  longlong *plVar18;
  int *piVar19;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar20;
  IAnimationDataModel *pIVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar24;
  double dVar25;
  EAnimDataModelNotifyType local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  UAnimDataModel *local_228;
  undefined8 local_220;
  undefined4 local_218;
  uint local_210;
  undefined4 uStack_20c;
  uint local_208;
  undefined4 uStack_204;
  uint local_200;
  undefined4 uStack_1fc;
  FAnimDataModelNotifPayload local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  UObject *local_1a0 [2];
  FText local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  TSharedPtr<FCulture,1> local_150;
  TSharedPtr<FCulture,1> local_140;
  TSharedPtr<FCulture,1> local_130;
  FGuid local_118;
  FGuid local_108;
  FGuid local_f8;
  FText local_e8;
  FText local_d8;
  FReadAccessScope local_c8;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FTextFormat local_70 [3];
  
  UObject::PostLoad((UObject *)this);
  local_118 = FUE5MainStreamObjectVersion::GUID;
  iVar8 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_118);
  if (iVar8 < 0x41) {
    pFVar10 = (FModelNotifier *)(**(code **)(this->_padding_ + 0x1b0))(&this->_padding_);
    IAnimationDataModel::FModelNotifier::Notify(pFVar10,BracketOpened);
    iVar8 = (this->CurveData).FloatCurves.ArrayNum;
    pFVar23 = (this->CurveData).FloatCurves.AllocatorInstance.Data;
    pFVar22 = pFVar23 + (longlong)iVar8 * 0x90;
    while( true ) {
      if ((this->CurveData).FloatCurves.ArrayNum != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FFloatCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar23 == pFVar22) break;
      FRichCurve::AutoSetTangents((FRichCurve *)(pFVar23 + 0x10),0.0);
      local_220 = *(undefined8 *)pFVar23;
      local_218 = CONCAT13(local_218._3_1_,0x30300);
      local_1a8 = local_218;
      local_1b0 = local_220;
      lVar11 = (**(code **)(this->_padding_ + 0x1b0))(&this->_padding_);
      local_res8[0] = CurveChanged;
      local_1f8.Struct = FCurvePayload::StaticStruct();
      local_1f8.Data = (schar *)&local_1b0;
      if (*(longlong *)(lVar11 + 8) == 0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        plVar18 = *(longlong **)(lVar11 + 0x10);
      }
      (**(code **)(*plVar18 + 0x188))(plVar18,local_res8);
      if (*(longlong *)(lVar11 + 8) == 0) {
        pIVar21 = (IAnimationDataModel *)0x0;
      }
      else {
        pIVar21 = *(IAnimationDataModel **)(lVar11 + 0x10);
      }
      TMulticastDelegate<void___cdecl(enum_EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(*(void **)(lVar11 + 0x18),local_res8,pIVar21,&local_1f8);
      this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(lVar11 + 0x20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_c8);
      iVar9 = *(int *)&this_00[2].AccessDetector.State;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c8);
      if (0 < iVar9) {
        local_1a0[0] = *(UObject **)(lVar11 + 8);
        pTVar3 = *(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> **)(lVar11 + 0x20);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0[0] != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(local_1a0[0]);
        }
        local_1a0[1] = *(UObject **)(lVar11 + 0x10);
        FAnimDataModelModifiedDynamicEvent_DelegateWrapper
                  (pTVar3,local_res8[0],(TScriptInterface<IAnimationDataModel> *)local_1a0,
                   &local_1f8);
      }
      if (local_res8[0] == BracketOpened) {
        *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + 1;
      }
      else if (local_res8[0] == BracketClosed) {
        *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + -1;
      }
      if ((*(int *)(lVar11 + 0x28) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BracketCounter >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimData\\IAnimationDataModel.h"
                             ,0x1e2,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23 = pFVar23 + 0x90;
    }
    pFVar10 = (FModelNotifier *)(**(code **)(this->_padding_ + 0x1b0))(&this->_padding_);
    IAnimationDataModel::FModelNotifier::Notify(pFVar10,BracketClosed);
  }
  iVar8 = (this->BoneAnimationTracks).ArrayNum;
  local_108 = FFortniteMainBranchObjectVersion::GUID;
  local_res20 = iVar8;
  iVar9 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_108);
  if ((iVar9 < 0x43) && (0 < iVar8)) {
    if (((this->BoneAnimationTracks).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar20 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              (this->BoneAnimationTracks).AllocatorInstance.Data;
    if ((pTVar20->ArrayNum == 1) && (this->NumberOfKeys == 2)) {
      iVar8 = (this->BoneAnimationTracks).ArrayNum;
      piVar19 = &pTVar20[1].ArrayNum;
      pTVar24 = pTVar20 + (longlong)iVar8 * 4;
      local_228 = this;
      while( true ) {
        if ((this->BoneAnimationTracks).ArrayNum != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FBoneAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pTVar20 == pTVar24) break;
        `UAnimDataModel::PostLoad'::__l18::<lambda_1>::
        operator()<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  (&local_228,pTVar20);
        if ((*piVar19 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar23 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(piVar19 + -2))
                  ->AllocatorInstance).Data;
        local_1e8 = *(undefined8 *)pFVar23;
        uStack_1e0 = *(undefined8 *)(pFVar23 + 8);
        if (((pFVar23 <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 < pFVar23 + (longlong)piVar19[1] * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *piVar19;
        if (iVar9 == piVar19[1]) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,(ForAnyElementType *)(piVar19 + -2),piVar19 + 1);
        }
        *piVar19 = iVar9 + 1;
        pFVar23 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(piVar19 + -2))
                  ->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar23 = local_1e8;
        *(undefined8 *)(pFVar23 + 8) = uStack_1e0;
        if ((*piVar19 != local_228->NumberOfKeys) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3847633434075725764>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimDataModel.cpp"
                               ,0x3c,"Keys.Num() == NumberOfKeys"), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        `UAnimDataModel::PostLoad'::__l18::<lambda_1>::
        operator()<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  (&local_228,
                   (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(piVar19 + 2));
        pTVar20 = pTVar20 + 4;
        piVar19 = piVar19 + 0x10;
      }
      pFVar10 = (FModelNotifier *)(**(code **)(this->_padding_ + 0x1b0))(&this->_padding_);
      IAnimationDataModel::FModelNotifier::Notify(pFVar10,TrackChanged);
      iVar8 = local_res20;
    }
  }
  local_f8 = FUE5MainStreamObjectVersion::GUID;
  iVar9 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_f8);
  if (iVar9 < 0x59) {
    local_210 = this->NumberOfFrames;
    fVar1 = this->PlayLength;
    uStack_20c = 0;
    local_1c8 = (ulonglong)local_210;
    iVar9 = (this->FrameRate).Denominator;
    dVar25 = __real_3ff0000000000000 / (double)(this->FrameRate).Numerator;
    if ((float)(((double)((longlong)(int)local_210 * (longlong)iVar9) + (double)iVar9 * 0.0) *
               dVar25) != fVar1) {
      if (iVar8 < 1) {
        uStack_1fc = 0;
        local_1b8 = (ulonglong)local_210;
        this->PlayLength =
             (float)(((double)((longlong)(int)local_210 * (longlong)iVar9) + (double)iVar9 * 0.0) *
                    dVar25);
        local_200 = local_210;
      }
      else {
        iVar8 = this->NumberOfKeys;
        if (((this->BoneAnimationTracks).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar23 = (this->BoneAnimationTracks).AllocatorInstance.Data;
        if (*(int *)(pFVar23 + 8) < iVar8) {
          iVar8 = *(int *)(pFVar23 + 8);
        }
        if (iVar8 != this->NumberOfKeys) {
          iVar9 = (this->FrameRate).Denominator;
          local_208 = iVar8 - 1;
          uStack_204 = 0;
          local_1c0 = (ulonglong)local_208;
          local_130.Object = (FCulture *)0x0;
          local_130.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          iVar2 = (this->FrameRate).Numerator;
          this->NumberOfFrames = local_208;
          this->NumberOfKeys = iVar8;
          fVar6 = ((float)((longlong)(int)local_208 * (longlong)iVar9) + (float)iVar9 * 0.0) /
                  (float)iVar2;
          this->PlayLength = fVar6;
          pFVar12 = FText::AsNumber(&local_b0,fVar6,(FNumberFormattingOptions *)0x0,&local_130);
          pFVar13 = FFrameRate::ToPrettyText(&this->FrameRate,&local_a0);
          local_140.Object = (FCulture *)0x0;
          local_140.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          iVar8 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
          pFVar14 = FText::AsNumber(&local_90,iVar8,(FNumberFormattingOptions *)0x0,&local_140);
          local_150.Object = (FCulture *)0x0;
          local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar15 = FText::AsNumber(&local_80,fVar1,(FNumberFormattingOptions *)0x0,&local_150);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_d8,L"AnimDataModel",L"AnimDataModelPlayLengthAlteredToBones",
                               L"Playable length {0} has been updated according to number of frames {1} and frame-rate {2}, new length: {3}"
                              );
          local_190.TextData.Reference = (pFVar12->TextData).Reference;
          if (local_190.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_190.TextData.Reference + 8))
                      (local_190.TextData.Reference,local_1d8);
          }
          local_190.Flags = pFVar12->Flags;
          local_180.TextData.Reference = (pFVar13->TextData).Reference;
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_180.TextData.Reference + 8))
                      (local_180.TextData.Reference,local_1d4);
          }
          local_170.TextData.Reference = (pFVar14->TextData).Reference;
          local_180.Flags = pFVar13->Flags;
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 8))
                      (local_170.TextData.Reference,local_1d0);
          }
          local_160.TextData.Reference = (pFVar15->TextData).Reference;
          local_170.Flags = pFVar14->Flags;
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 8))
                      (local_160.TextData.Reference,local_1cc);
          }
          local_160.Flags = pFVar15->Flags;
          pFVar17 = FTextFormat::FTextFormat(local_70,pFVar16,Default);
          FText::Format<FText,FText,FText,FText>
                    (&local_e8,pFVar17,&local_160,&local_170,&local_180,&local_190);
          if (local_e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
          }
          pIVar4 = (pFVar15->TextData).Reference;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))();
          }
          pIVar4 = (pFVar14->TextData).Reference;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))();
          }
          pIVar4 = (pFVar13->TextData).Reference;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))();
          }
          pIVar4 = (pFVar12->TextData).Reference;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))();
          }
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_150.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_140.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_130.SharedReferenceCount.ReferenceController);
        }
      }
      pFVar10 = (FModelNotifier *)(**(code **)(this->_padding_ + 0x1b0))(&this->_padding_);
      IAnimationDataModel::FModelNotifier::Notify(pFVar10,Populated);
    }
  }
  return;
}

// StaticRegisterNativesUAnimDataModel @ 14747b300

void __cdecl UAnimDataModel::StaticRegisterNativesUAnimDataModel(void)

{
  return;
}

// TryLockEvaluationAndModification @ 14747d670

bool __thiscall UAnimDataModel::TryLockEvaluationAndModification(UAnimDataModel *this)

{
  return true;
}

// UnlockEvaluationAndModification @ 14747f3e0

void __thiscall UAnimDataModel::UnlockEvaluationAndModification(UAnimDataModel *this)

{
  return;
}

// _getUObject @ 1474846c0

UObject * __thiscall UAnimDataModel::_getUObject(UAnimDataModel *this)

{
  return (UObject *)&this[-1].CurveData.TransformCurves.ArrayNum;
}

