// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimLLRun
// Functions: 15

// StaticClass @ 14a733140

UClass * __cdecl UAnimDistanceMatchingLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationLocomotionLibraryRuntime",L"AnimDistanceMatchingLibrary",
               &Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton,
               StaticRegisterNativesUAnimDistanceMatchingLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimDistanceMatchingLibrary>,
               InternalVTableHelperCtorCaller<UAnimDistanceMatchingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton;
}

// UAnimDistanceMatchingLibrary @ 14a733520

UAnimDistanceMatchingLibrary * __thiscall
UAnimDistanceMatchingLibrary::UAnimDistanceMatchingLibrary
          (UAnimDistanceMatchingLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimDistanceMatchingLibrary__6B_;
  return this;
}

// UAnimDistanceMatchingLibrary @ 14a733550

UAnimDistanceMatchingLibrary * __thiscall
UAnimDistanceMatchingLibrary::UAnimDistanceMatchingLibrary
          (UAnimDistanceMatchingLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimDistanceMatchingLibrary__6B_;
  return this;
}

// ~UAnimDistanceMatchingLibrary @ 14a7335a0

void __thiscall
UAnimDistanceMatchingLibrary::~UAnimDistanceMatchingLibrary(UAnimDistanceMatchingLibrary *this)

{
  *(undefined ***)this = &___7UAnimDistanceMatchingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14a7335c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_SequenceEvaluator *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  FAnimationUpdateContext *pFVar7;
  UAnimSequenceBase *pUVar8;
  UClass *pUVar9;
  FStaticBasicLogRecord *pFVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float local_res8 [2];
  
  pFVar7 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)this);
  if (pFVar7 == (FAnimationUpdateContext *)0x0) {
    if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
    return;
  }
  fVar1 = pFVar7->DeltaTime;
  if (fVar1 <= 0.0) {
    return;
  }
  if (*(float *)((longlong)this + 8) <= 0.0) {
    return;
  }
  pUVar8 = (UAnimSequenceBase *)(**(code **)(*(longlong *)param_1 + 0x170))(param_1);
  if (pUVar8 != (UAnimSequenceBase *)0x0) {
    pUVar9 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar4 = (int)pUVar9->_padding_;
    if ((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar9->_padding_)) {
      fVar11 = (float)(**(code **)(*(longlong *)param_1 + 0x178))(param_1);
      fVar12 = (float)(**(code **)(*(longlong *)param_1 + 0xb8))(param_1);
      bVar5 = (bool)(**(code **)(*(longlong *)param_1 + 0xd0))(param_1);
      fVar13 = UE::Anim::DistanceMatchingUtility::GetTimeAfterDistanceTraveled
                         (pUVar8,fVar11,*(float *)((longlong)this + 8),
                          *(FName *)((longlong)this + 0xc),bVar5);
      if (fVar13 < fVar11) {
        fVar13 = fVar13 + fVar12;
      }
      dVar2 = *(double *)((longlong)this + 0x18);
      fVar13 = (fVar13 - fVar11) / fVar1;
      if ((0.0 <= dVar2) && (dVar3 = *(double *)((longlong)this + 0x20), dVar2 < dVar3)) {
        dVar14 = (double)fVar13;
        if (dVar3 <= (double)fVar13) {
          dVar14 = dVar3;
        }
        if (dVar14 <= dVar2) {
          dVar14 = dVar2;
        }
        fVar13 = (float)dVar14;
      }
      local_res8[0] = fVar11;
      FAnimationRuntime::AdvanceTime(bVar5,fVar13 * fVar1,local_res8,fVar12);
      cVar6 = (**(code **)(*(longlong *)param_1 + 0x158))(param_1,local_res8[0]);
      if (cVar6 != '\0') {
        return;
      }
      if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
        return;
      }
      pFVar10 = &::LOG_Static;
      goto LAB_14a73373c;
    }
  }
  if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
    return;
  }
  pFVar10 = &::LOG_Static;
LAB_14a73373c:
  UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
  return;
}

// operator() @ 14a7337b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UAnimDistanceMatchingLibrary::DistanceMatchToTarget'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_SequenceEvaluator *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  UAnimSequenceBase *pUVar4;
  UClass *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FAnimCurveBufferAccess local_48 [2];
  
  pUVar4 = (UAnimSequenceBase *)(**(code **)(*(longlong *)param_1 + 0x170))(param_1);
  if (pUVar4 != (UAnimSequenceBase *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) {
      fVar10 = (float)(*(uint *)this ^ __xmm_80000000800000008000000080000000);
      FAnimCurveBufferAccess::FAnimCurveBufferAccess(local_48,pUVar4,*(FName *)((longlong)this + 4))
      ;
      if ((local_48[0].CompressedBuffer == (float *)0x0) &&
         (local_48[0].RawCurve == (FFloatCurve *)0x0)) {
        fVar8 = 0.0;
      }
      else if (local_48[0].NumSamples < 2) {
        fVar8 = 0.0;
      }
      else {
        iVar7 = 1;
        iVar3 = local_48[0].NumSamples + -2;
        while (iVar1 = iVar3, 0 < iVar1) {
          iVar3 = iVar1 / 2;
          fVar9 = FAnimCurveBufferAccess::GetValue(local_48,iVar3 + iVar7);
          if (fVar9 < fVar10) {
            iVar7 = iVar3 + iVar7 + 1;
            iVar3 = iVar1 + (-1 - iVar3);
          }
        }
        fVar9 = FAnimCurveBufferAccess::GetValue(local_48,iVar7 + -1);
        fVar8 = FAnimCurveBufferAccess::GetValue(local_48,iVar7);
        if ((float)((uint)(fVar8 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_322bcc77) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = (fVar10 - fVar9) / (fVar8 - fVar9);
        }
        fVar8 = FAnimCurveBufferAccess::GetTime(local_48,iVar7 + -1);
        fVar9 = FAnimCurveBufferAccess::GetTime(local_48,iVar7);
        fVar8 = (fVar9 - fVar8) * fVar10 + fVar8;
      }
      cVar2 = (**(code **)(*(longlong *)param_1 + 0x158))(param_1,fVar8);
      if (cVar2 != '\0') {
        return;
      }
      if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
        return;
      }
      pFVar6 = &::LOG_Static;
      goto LAB_14a733952;
    }
  }
  if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
    return;
  }
  pFVar6 = &::LOG_Static;
LAB_14a733952:
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
  return;
}

// operator() @ 14a733980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_SequencePlayer *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  UAnimSequence *this_00;
  UClass *pUVar5;
  TTransform<double> *pTVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStackY_158 [32];
  FName local_128;
  undefined4 local_120;
  FString local_118;
  double local_108;
  FAnimExtractContext local_100;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = (UAnimSequence *)(**(code **)(param_1->_padding_ + 0x148))(param_1);
  if (this_00 != (UAnimSequence *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) {
      uVar8 = (**(code **)(this_00->_padding_ + 0x2c0))(this_00);
      fVar7 = (float)uVar8;
      uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
        if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
          return;
        }
        local_128 = (FName)this_00->_padding_;
        ::FName::ToString(&local_128,&local_118);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
        if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        return;
      }
      local_128.ComparisonIndex.Value = 0;
      local_128.Number = 0;
      local_120 = 0;
      local_100.bExtractRootMotion = false;
      local_100.DeltaTimeRecord.bPreviousIsValid = false;
      local_100.DeltaTimeRecord._9_2_ = 0;
      local_100.DeltaTimeRecord._11_1_ = 0;
      local_100.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.PoseCurves.ArrayNum = 0;
      local_100.PoseCurves.ArrayMax = 0;
      local_100.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.BonesRequired.ArrayNum = 0;
      local_100.BonesRequired.ArrayMax = 0;
      local_100.InterpolationOverride.bIsSet = false;
      local_100.bLooping = false;
      local_100.CurrentTime = 0.0;
      local_100.DeltaTimeRecord.Delta = 0.0;
      local_100.DeltaTimeRecord.Previous = 0.0;
      pTVar6 = UAnimSequence::ExtractRootMotionFromRange
                         (this_00,&local_b8,0.0,(double)fVar7,&local_100);
      local_108 = (pTVar6->Translation).ZW.m128d_f64[0];
      dVar1 = (pTVar6->Translation).XY.m128d_f64[0];
      dVar2 = (pTVar6->Translation).XY.m128d_f64[1];
      if (local_100.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.BonesRequired.AllocatorInstance.Data);
      }
      if (local_100.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.PoseCurves.AllocatorInstance.Data);
      }
      fVar10 = (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2);
      if (__real_322bcc77 < fVar10) {
        fVar10 = (fVar7 * *(float *)this) / fVar10;
        dVar1 = *(double *)((longlong)this + 8);
        if ((0.0 <= dVar1) && (dVar2 = *(double *)((longlong)this + 0x10), dVar1 < dVar2)) {
          dVar9 = (double)fVar10;
          if (dVar2 <= (double)fVar10) {
            dVar9 = dVar2;
          }
          if (dVar9 <= dVar1) {
            dVar9 = dVar1;
          }
          fVar10 = (float)dVar9;
          uVar11 = 0;
        }
        cVar4 = (**(code **)(param_1->_padding_ + 0x198))(param_1,CONCAT44(uVar11,fVar10));
        if (cVar4 != '\0') {
          return;
        }
        if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
        return;
      }
      if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
        return;
      }
      local_128 = (FName)this_00->_padding_;
      ::FName::ToString(&local_128,&local_118);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
      if (local_118.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
      return;
    }
  }
  if (2 < (byte)LogAnimDistanceMatchingLibrary._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
  }
  return;
}

// AdvanceTimeByDistanceMatching @ 14a733d40

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceEvaluatorReference * __cdecl
UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching
          (FSequenceEvaluatorReference *__return_storage_ptr__,FAnimUpdateContext *param_1,
          FSequenceEvaluatorReference *param_2,float param_3,FName param_4,TVector2<double> *param_5
          )

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FAnimUpdateContext *local_38;
  float local_30;
  FName local_2c;
  double local_20;
  double dStack_18;
  
  local_2c = param_4;
  local_20 = (param_5->field0_0x0)._s_0.X;
  dStack_18 = (param_5->field0_0x0)._s_0.Y;
  local_38 = param_1;
  local_30 = param_3;
  if ((*(longlong *)param_2 != 0) && (lVar2 = *(longlong *)&param_2->field_0x8, lVar2 != 0)) {
    pUVar5 = FAnimNode_SequenceEvaluator::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (*(FAnimNode_SequenceEvaluator **)param_2 != (FAnimNode_SequenceEvaluator *)0x0)) {
        `UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching'::__l2::<lambda_1>::operator()
                  (&local_38,*(FAnimNode_SequenceEvaluator **)param_2);
        goto LAB_14a733df1;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a733df1:
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// DistanceMatchToTarget @ 14a733e40

/* WARNING: Enum "Type": Some values do not have unique names */

FSequenceEvaluatorReference * __cdecl
UAnimDistanceMatchingLibrary::DistanceMatchToTarget
          (FSequenceEvaluatorReference *__return_storage_ptr__,FSequenceEvaluatorReference *param_1,
          float param_2,FName param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  float local_18;
  FName local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    pUVar5 = FAnimNode_SequenceEvaluator::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (*(FAnimNode_SequenceEvaluator **)param_1 != (FAnimNode_SequenceEvaluator *)0x0)) {
        `UAnimDistanceMatchingLibrary::DistanceMatchToTarget'::__l2::<lambda_1>::operator()
                  (&local_18,*(FAnimNode_SequenceEvaluator **)param_1);
        goto LAB_14a733ed4;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a733ed4:
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a733ff0

UClass * __cdecl UAnimDistanceMatchingLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationLocomotionLibraryRuntime",L"AnimDistanceMatchingLibrary",
               &Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton,
               StaticRegisterNativesUAnimDistanceMatchingLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimDistanceMatchingLibrary>,
               InternalVTableHelperCtorCaller<UAnimDistanceMatchingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton;
}

// SetPlayrateToMatchSpeed @ 14a734840

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencePlayerReference * __cdecl
UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed
          (FSequencePlayerReference *__return_storage_ptr__,FSequencePlayerReference *param_1,
          float param_2,TVector2<double> *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  float local_28 [2];
  double local_20;
  double dStack_18;
  
  local_20 = (param_3->field0_0x0)._s_0.X;
  dStack_18 = (param_3->field0_0x0)._s_0.Y;
  local_28[0] = param_2;
  if ((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)&param_1->field_0x8, lVar2 != 0)) {
    pUVar5 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(FAnimNode_SequencePlayer **)param_1 != (FAnimNode_SequencePlayer *)0x0)) {
        `UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed'::__l2::<lambda_1>::operator()
                  (local_28,*(FAnimNode_SequencePlayer **)param_1);
        goto LAB_14a7348d8;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a7348d8:
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAnimDistanceMatchingLibrary @ 14a734940

void __cdecl UAnimDistanceMatchingLibrary::StaticRegisterNativesUAnimDistanceMatchingLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAdvanceTimeByDistanceMatching @ 14a734b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimDistanceMatchingLibrary::execAdvanceTimeByDistanceMatching
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  UScriptStruct *pUVar10;
  uchar *puVar11;
  longlong *plVar12;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  uchar local_98 [8];
  longlong *plStack_90;
  longlong local_88 [3];
  undefined8 uStack_70;
  uchar *local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  plStack_90 = (longlong *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar11 = local_98;
  if (puVar4 != (uchar *)0x0) {
    puVar11 = puVar4;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_res10[0] = 0;
  plVar12 = local_88;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88 + 2,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88 + 2);
  }
  local_60 = local_res10[0];
  local_68 = puVar11;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_5c = local_res18[0];
  local_50 = local_88[2];
  uStack_48 = uStack_70;
  if ((*plVar12 != 0) && (lVar6 = plVar12[1], lVar6 != 0)) {
    pUVar10 = FAnimNode_SequenceEvaluator::StaticStruct();
    if (pUVar10 != (UScriptStruct *)0x0) {
      iVar3 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar10->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) && ((FAnimNode_SequenceEvaluator *)*plVar12 != (FAnimNode_SequenceEvaluator *)0x0)
         ) {
        `UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching'::__l2::<lambda_1>::operator()
                  (&local_68,(FAnimNode_SequenceEvaluator *)*plVar12);
        goto LAB_14a734cf7;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a734cf7:
  uVar7 = *(undefined4 *)((longlong)plVar12 + 4);
  lVar6 = plVar12[1];
  uVar8 = *(undefined4 *)((longlong)plVar12 + 0xc);
  *(int *)param_3 = (int)*plVar12;
  *(undefined4 *)((longlong)param_3 + 4) = uVar7;
  *(int *)((longlong)param_3 + 8) = (int)lVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar8;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_90 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_90 + 8))(plStack_90,1);
    }
  }
  return;
}

// execDistanceMatchToTarget @ 14a734d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimDistanceMatchingLibrary::execDistanceMatchToTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  longlong *plVar7;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  undefined4 local_48;
  undefined8 local_44;
  longlong local_38 [2];
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0] = 0;
  plVar7 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_48 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_44 = local_res18[0];
  if ((*plVar7 != 0) && (lVar4 = plVar7[1], lVar4 != 0)) {
    pUVar6 = FAnimNode_SequenceEvaluator::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((FAnimNode_SequenceEvaluator *)*plVar7 != (FAnimNode_SequenceEvaluator *)0x0))
      {
        `UAnimDistanceMatchingLibrary::DistanceMatchToTarget'::__l2::<lambda_1>::operator()
                  (&local_48,(FAnimNode_SequenceEvaluator *)*plVar7);
        goto LAB_14a734ed2;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a734ed2:
  lVar4 = plVar7[1];
  *(longlong *)param_3 = *plVar7;
  *(longlong *)((longlong)param_3 + 8) = lVar4;
  return;
}

// execSetPlayrateToMatchSpeed @ 14a7355b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAnimDistanceMatchingLibrary::execSetPlayrateToMatchSpeed
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  longlong *plVar7;
  undefined4 local_res10 [2];
  longlong local_58 [3];
  undefined8 uStack_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res10[0] = 0;
  plVar7 = local_58;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58 + 2,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58 + 2);
  }
  local_38[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = local_58[2];
  uStack_28 = uStack_40;
  if ((*plVar7 != 0) && (lVar4 = plVar7[1], lVar4 != 0)) {
    pUVar6 = FAnimNode_SequencePlayer::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((FAnimNode_SequencePlayer *)*plVar7 != (FAnimNode_SequencePlayer *)0x0)) {
        `UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed'::__l2::<lambda_1>::operator()
                  (local_38,(FAnimNode_SequencePlayer *)*plVar7);
        goto LAB_14a735735;
      }
    }
  }
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequencePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequencePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
LAB_14a735735:
  lVar4 = plVar7[1];
  *(longlong *)param_3 = *plVar7;
  *(longlong *)((longlong)param_3 + 8) = lVar4;
  return;
}

