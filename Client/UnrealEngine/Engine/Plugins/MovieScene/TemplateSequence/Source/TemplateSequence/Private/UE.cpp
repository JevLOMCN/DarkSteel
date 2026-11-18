// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 21

// Construct<FTemplateSequenceBindingOverrideData> @ 14ac63070

void __cdecl
UE::CoreUObject::Private::Construct<FTemplateSequenceBindingOverrideData>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTemplateSequenceBindingOverrideData> @ 14ac63080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTemplateSequenceBindingOverrideData>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTemplateSequenceBindingOverrideData> @ 14ac630d0

void __cdecl UE::CoreUObject::Private::Destruct<FTemplateSequenceBindingOverrideData>(void *param_1)

{
  return;
}

// Copy<FTemplateSequenceBindingOverrideData> @ 14ac631a0

bool __cdecl
UE::CoreUObject::Private::Copy<FTemplateSequenceBindingOverrideData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTemplateSectionPropertyScale> @ 14ac63830

void __cdecl UE::CoreUObject::Private::Construct<FTemplateSectionPropertyScale>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x23) = 0;
  memset((void *)((longlong)param_1 + 0x28),0,0x128);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x28));
  return;
}

// ConstructForTests<FTemplateSectionPropertyScale> @ 14ac63880

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTemplateSectionPropertyScale>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x28));
  return;
}

// Destruct<FTemplateSectionPropertyScale> @ 14ac638b0

void __cdecl UE::CoreUObject::Private::Destruct<FTemplateSectionPropertyScale>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x28));
  return;
}

// Copy<FTemplateSectionPropertyScale> @ 14ac638c0

bool __cdecl
UE::CoreUObject::Private::Copy<FTemplateSectionPropertyScale>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x28),
                 (FMovieSceneFloatChannel *)((longlong)param_2 + 0x28));
      param_2 = (void *)((longlong)param_2 + 0x150);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x150);
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<ATemplateSequenceActor>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<ATemplateSequenceActor>_>,ATemplateSequenceActor_*> @ 14ac66330

ATemplateSequenceActor ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<ATemplateSequenceActor>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<ATemplateSequenceActor>_>,ATemplateSequenceActor_*>
          (TObjectPtr<ATemplateSequenceActor> *param_1)

{
  return (ATemplateSequenceActor **)param_1;
}

// DereferenceIfNecessary<ATemplateSequenceActor,ATemplateSequenceActor_*_&> @ 14ac663b0

ATemplateSequenceActor * __cdecl
UE::Core::Private::DereferenceIfNecessary<ATemplateSequenceActor,ATemplateSequenceActor_*_&>
          (ATemplateSequenceActor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCameraAnimationSequencePlayer,UCameraAnimationSequencePlayer_*_&> @ 14ac663d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationSequencePlayer * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UCameraAnimationSequencePlayer,UCameraAnimationSequencePlayer_*_&>
          (UCameraAnimationSequencePlayer **param_1)

{
  return *param_1;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>_> @ 14ac69c80

FTemplateSequencePropertyScaleComponentData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
           *param_1,int param_2)

{
  return (FTemplateSequencePropertyScaleComponentData *)
         ((longlong)param_2 * 0x2c + *(longlong *)&param_1->field_0x10);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_> @ 14ac69ca0

FTemplateSequencePropertyScaleComponentData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>_>
          (TRead<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *param_1,int param_2)

{
  return (FTemplateSequencePropertyScaleComponentData *)
         ((longlong)param_2 * 0x2c + (longlong)*param_1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_> @ 14ac6d820

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_>
          (ushort param_1,ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_> @ 14ac6d8f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
          (ushort param_1,ForElementType<UE::MovieScene::FMovieSceneEntityID> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FMovieSceneEntityID>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_> @ 14ac6d9c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ScalePropertyValue<double,UE::MovieScene::TWrite<double>_> @ 14ac6e0a0

void __cdecl
UE::MovieScene::ScalePropertyValue<double,UE::MovieScene::TWrite<double>_>
          (float param_1,TReadOptional<double> param_2,TWrite<double> param_3,int param_4)

{
  longlong lVar1;
  double dVar2;
  
  if (param_3 != (TWrite<double>)0x0) {
    lVar1 = (longlong)param_4;
    if (param_2 != (TReadOptional<double>)0x0) {
      dVar2 = (double)(float)*(double *)((longlong)param_2 + lVar1 * 8);
      *(double *)((longlong)param_3 + lVar1 * 8) =
           (*(double *)((longlong)param_3 + lVar1 * 8) - dVar2) * (double)param_1 + dVar2;
      return;
    }
    *(double *)((longlong)param_3 + lVar1 * 8) =
         (double)param_1 * *(double *)((longlong)param_3 + lVar1 * 8);
  }
  return;
}

// ScalePropertyValue<double,UE::MovieScene::TWriteOptional<double>_> @ 14ac6e0f0

void __cdecl
UE::MovieScene::ScalePropertyValue<double,UE::MovieScene::TWriteOptional<double>_>
          (float param_1,TReadOptional<double> param_2,TWriteOptional<double> param_3,int param_4)

{
  longlong lVar1;
  double dVar2;
  
  if (param_3 != (TWriteOptional<double>)0x0) {
    lVar1 = (longlong)param_4;
    if (param_2 != (TReadOptional<double>)0x0) {
      dVar2 = (double)(float)*(double *)((longlong)param_2 + lVar1 * 8);
      *(double *)((longlong)param_3 + lVar1 * 8) =
           (*(double *)((longlong)param_3 + lVar1 * 8) - dVar2) * (double)param_1 + dVar2;
      return;
    }
    *(double *)((longlong)param_3 + lVar1 * 8) =
         (double)param_1 * *(double *)((longlong)param_3 + lVar1 * 8);
  }
  return;
}

// UpdateInitialPropertyValues<UE::MovieScene::FFloatPropertyTraits> @ 14ac6f680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::UpdateInitialPropertyValues<UE::MovieScene::FFloatPropertyTraits>
          (UMovieSceneEntitySystemLinker *param_1,
          TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *param_2)

{
  TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>
  local_res18 [16];
  
  TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>::
  Update(local_res18,param_1,param_2);
  return;
}

// GetCameraStandInTransform @ 14ac77190

FIntermediate3DTransform * __cdecl
UE::MovieScene::GetCameraStandInTransform
          (FIntermediate3DTransform *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCameraAnimationSequenceCameraStandIn::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    __return_storage_ptr__->T_X = 0.0;
    __return_storage_ptr__->T_Y = 0.0;
    __return_storage_ptr__->T_Z = 0.0;
    __return_storage_ptr__->R_X = 0.0;
    __return_storage_ptr__->R_Y = 0.0;
    __return_storage_ptr__->R_Z = 0.0;
    __return_storage_ptr__->S_X = 0.0;
    __return_storage_ptr__->S_Y = 0.0;
    __return_storage_ptr__->S_Z = 0.0;
    ConvertOperationalProperty
              ((TTransform<double> *)&param_1[0x35].field_0x18,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// SetCameraStandInTransform @ 14ac80010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::SetCameraStandInTransform(UObject *param_1,FIntermediate3DTransform *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined1 auStack_b8 [32];
  FString local_98;
  FString local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn>(&local_98);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCameraAnimationSequenceCameraStandIn::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    local_78.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_78.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_78.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_78.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_78.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_78.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    ConvertOperationalProperty(param_2,&local_78);
    *(double *)&param_1[0x35].field_0x18 = local_78.Rotation.XY.m128d_f64[0];
    *(double *)&param_1[0x35].field_0x20 = local_78.Rotation.XY.m128d_f64[1];
    *(double *)(param_1 + 0x36) = local_78.Rotation.ZW.m128d_f64[0];
    *(double *)&param_1[0x36].field_0x8 = local_78.Rotation.ZW.m128d_f64[1];
    *(double *)&param_1[0x36].field_0x10 = local_78.Translation.XY.m128d_f64[0];
    *(double *)&param_1[0x36].field_0x18 = local_78.Translation.XY.m128d_f64[1];
    *(double *)&param_1[0x36].field_0x20 = local_78.Translation.ZW.m128d_f64[0];
    *(double *)(param_1 + 0x37) = local_78.Translation.ZW.m128d_f64[1];
    *(double *)&param_1[0x37].field_0x8 = local_78.Scale3D.XY.m128d_f64[0];
    *(double *)&param_1[0x37].field_0x10 = local_78.Scale3D.XY.m128d_f64[1];
    *(double *)&param_1[0x37].field_0x18 = local_78.Scale3D.ZW.m128d_f64[0];
    *(double *)&param_1[0x37].field_0x20 = local_78.Scale3D.ZW.m128d_f64[1];
    return;
  }
  pFVar3 = GetTypeName<UCameraAnimationSequenceCameraStandIn>(&local_98);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_88,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

