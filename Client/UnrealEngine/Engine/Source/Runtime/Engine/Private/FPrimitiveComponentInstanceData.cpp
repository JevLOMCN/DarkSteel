// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 147889810

UScriptStruct * __cdecl FPrimitiveComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrimitiveComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrimitiveComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData,(UObject *)pUVar1
                         ,L"PrimitiveComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FPrimitiveComponentInstanceData.OuterSingleton;
}

// ContainsData @ 147889850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveComponentInstanceData::ContainsData(FPrimitiveComponentInstanceData *this)

{
  bool bVar1;
  
  bVar1 = FSceneComponentInstanceData::ContainsData((FSceneComponentInstanceData *)this);
  if (((!bVar1) && ((this->LODParent).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0)) &&
     (this->VisibilityId == -1)) {
    return false;
  }
  return true;
}

// ApplyToComponent @ 147889890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveComponentInstanceData::ApplyToComponent
          (FPrimitiveComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  UPrimitiveComponent *pUVar1;
  UPrimitiveComponent *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 extraout_EAX;
  int iVar20;
  UClass *pUVar21;
  FString *pFVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  UActorComponent *pUVar26;
  wchar_t *pwVar27;
  wchar_t *pwVar28;
  bool bVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  FString local_58;
  FString local_48 [4];
  
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar22 = GetTypeName<UPrimitiveComponent>(&local_58);
    if ((pFVar22->Data).ArrayNum == 0) {
      pwVar28 = L"";
    }
    else {
      pwVar28 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar28);
  }
  pUVar21 = UPrimitiveComponent::StaticClass();
  iVar24 = (int)pUVar21->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar24) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar24 * 8)
      != &pUVar21->_padding_)) {
    pFVar22 = GetTypeName<UPrimitiveComponent>(&local_58);
    pwVar28 = L"";
    if ((pFVar22->Data).ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
    }
    pFVar22 = GetFullNameForCastLogError<UActorComponent>(local_48,param_1);
    if ((pFVar22->Data).ArrayNum != 0) {
      pwVar28 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar28,pwVar27);
  }
  pUVar1 = (UPrimitiveComponent *)param_1[7]._padding_;
  pUVar2 = (this->LODParent).field0_0x0.DebugPtr;
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    bVar29 = pUVar2 == (UPrimitiveComponent *)0x0;
  }
  else {
    bVar29 = pUVar1 == pUVar2;
  }
  uVar19 = (undefined4)CONCAT71((int7)((ulonglong)pUVar1 >> 8),bVar29);
  if (bVar29 == false) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    param_1[7]._padding_ = (longlong)pUVar2;
    pUVar26 = param_1;
    UActorComponent::MarkRenderStateDirty(param_1);
    iVar24 = (int)pUVar26;
    uVar19 = extraout_EAX;
  }
  if (this->VisibilityId != -1) {
    dVar6 = (this->ComponentTransform).Translation.XY.m128d_f64[0] -
            *(double *)&param_1[2].UCSSerializationIndex;
    dVar7 = (this->ComponentTransform).Translation.XY.m128d_f64[1] -
            *(double *)&param_1[2].field_0x98;
    dVar10 = (this->ComponentTransform).Translation.ZW.m128d_f64[0] -
             (double)param_1[2].PhysicsStateAsyncCreationScene;
    dVar12 = (this->ComponentTransform).Translation.ZW.m128d_f64[1] -
             (double)param_1[2].OwnerPrivate;
    lVar30 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar7 >> 0x20),
                               _UNK_15061cc88 & SUB84(dVar7,0)));
    auVar4._8_4_ = (int)lVar30;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f50624de0000000 <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     (uint)((ulonglong)dVar6 >> 0x20),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar6,0)))
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    iVar20 = movmskpd(uVar19,auVar4);
    lVar30 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar12 >> 0x20),
                               _UNK_15061cc88 & SUB84(dVar12,0)));
    auVar14._8_4_ = (int)lVar30;
    auVar14._0_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                           (uint)((ulonglong)dVar10 >> 0x20),
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar10,0)));
    auVar14._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
    uVar23 = movmskpd(iVar24,auVar14);
    if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) {
      dVar6 = (this->ComponentTransform).Rotation.XY.m128d_f64[0] +
              *(double *)&param_1[2].ComponentTags.ArrayNum;
      dVar7 = (this->ComponentTransform).Rotation.XY.m128d_f64[1] +
              (double)param_1[2].AssetUserData.AllocatorInstance.Data;
      dVar11 = (this->ComponentTransform).Rotation.XY.m128d_f64[0] -
               *(double *)&param_1[2].ComponentTags.ArrayNum;
      dVar13 = (this->ComponentTransform).Rotation.XY.m128d_f64[1] -
               (double)param_1[2].AssetUserData.AllocatorInstance.Data;
      dVar10 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0] +
               *(double *)&param_1[2].AssetUserData.ArrayNum;
      dVar12 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1] +
               *(double *)&param_1[2].field_0x88;
      dVar15 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0] -
               *(double *)&param_1[2].AssetUserData.ArrayNum;
      dVar16 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1] -
               *(double *)&param_1[2].field_0x88;
      lVar30 = -(ulonglong)
                (__real_3f50624de0000000 <
                (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar13 >> 0x20),
                                 _UNK_15061cc88 & SUB84(dVar13,0)));
      auVar8._8_4_ = (int)lVar30;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3f50624de0000000 <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       (uint)((ulonglong)dVar11 >> 0x20),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       SUB84(dVar11,0)));
      auVar8._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      uVar23 = movmskpd(iVar20,auVar8);
      lVar30 = -(ulonglong)
                (__real_3f50624de0000000 <
                (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar16 >> 0x20),
                                 _UNK_15061cc88 & SUB84(dVar16,0)));
      auVar5._8_4_ = (int)lVar30;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f50624de0000000 <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       (uint)((ulonglong)dVar15 >> 0x20),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       SUB84(dVar15,0)));
      auVar5._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      iVar24 = movmskpd(0,auVar5);
      uVar25 = iVar24 << 2 | uVar23;
      if (uVar25 != 0) {
        lVar30 = -(ulonglong)
                  (__real_3f50624de0000000 <
                  (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar12 >> 0x20),
                                   _UNK_15061cc88 & SUB84(dVar12,0)));
        auVar18._8_4_ = (int)lVar30;
        auVar18._0_8_ =
             -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                               (uint)((ulonglong)dVar10 >> 0x20),
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar10,0)));
        auVar18._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        uVar25 = movmskpd(uVar25,auVar18);
        lVar30 = -(ulonglong)
                  (__real_3f50624de0000000 <
                  (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar7 >> 0x20),
                                   _UNK_15061cc88 & SUB84(dVar7,0)));
        auVar3._8_4_ = (int)lVar30;
        auVar3._0_8_ = -(ulonglong)
                        (__real_3f50624de0000000 <
                        (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                         (uint)((ulonglong)dVar6 >> 0x20),
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                         SUB84(dVar6,0)));
        auVar3._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        uVar23 = movmskpd(uVar23,auVar3);
        if ((uVar25 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_147889aa0;
      }
      dVar10 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] - (double)param_1[3]._padding_;
      dVar12 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] - (double)param_1[3]._padding_;
      dVar6 = (this->ComponentTransform).Scale3D.XY.m128d_f64[0] - (double)param_1[2].WorldPrivate;
      dVar7 = (this->ComponentTransform).Scale3D.XY.m128d_f64[1] - *(double *)&param_1[2].field_0xb8
      ;
      auVar31._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            (uint)((ulonglong)dVar10 >> 0x20),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar10,0));
      auVar31._8_4_ = _UNK_15061cc88 & SUB84(dVar12,0);
      auVar31._12_4_ = _UNK_15061cc8c & (uint)((ulonglong)dVar12 >> 0x20);
      lVar30 = -(ulonglong)(__real_3f50624de0000000 < auVar31._8_8_);
      auVar17._8_4_ = (int)lVar30;
      auVar17._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar31._0_8_);
      auVar17._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      uVar25 = movmskpd(0,auVar17);
      lVar30 = -(ulonglong)
                (__real_3f50624de0000000 <
                (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar7 >> 0x20),
                                 _UNK_15061cc88 & SUB84(dVar7,0)));
      auVar9._8_4_ = (int)lVar30;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f50624de0000000 <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       (uint)((ulonglong)dVar6 >> 0x20),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar6,0)
                                      ));
      auVar9._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
      iVar24 = movmskpd(uVar23,auVar9);
      if ((uVar25 & 0x3fffffff) == 0 && iVar24 == 0) {
        param_1[3].ComponentTags.ArrayNum = this->VisibilityId;
      }
    }
  }
LAB_147889aa0:
  if ((param_1->bRegistered != 0) && ((this->VisibilityId != -1 || (0 < (int)this->_padding_)))) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)&param_1[3].field_0x88,
               (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1[3].AssetUserData);
    UActorComponent::MarkRenderStateDirty(param_1);
  }
  return;
}

// FindAndReplaceInstances @ 147889b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveComponentInstanceData::FindAndReplaceInstances
          (FPrimitiveComponentInstanceData *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  UObject **ppUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  FSceneComponentInstanceData::FindAndReplaceInstances((FSceneComponentInstanceData *)this,param_1);
  pUVar2 = (this->LODParent).field0_0x0.DebugPtr;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    ppUVar3 = TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
              ::Find((TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                      *)param_1,(UObject *)pUVar2);
    if (ppUVar3 != (UObject **)0x0) {
      pUVar2 = (UPrimitiveComponent *)*ppUVar3;
      if (pUVar2 != (UPrimitiveComponent *)0x0) {
        pUVar4 = UPrimitiveComponent::StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          pFVar5 = GetTypeName<UPrimitiveComponent>(&local_28);
          pwVar7 = L"";
          if ((pFVar5->Data).ArrayNum == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
          pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
          if ((pFVar5->Data).ArrayNum != 0) {
            pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar7,pwVar6);
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UPrimitiveComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->LODParent).field0_0x0.DebugPtr = pUVar2;
    }
  }
  return;
}

// AddReferencedObjects @ 147889c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveComponentInstanceData::AddReferencedObjects
          (FPrimitiveComponentInstanceData *this,FReferenceCollector *param_1)

{
  FSceneComponentInstanceData::AddReferencedObjects((FSceneComponentInstanceData *)this,param_1);
  if ((this->LODParent).field0_0x0.DebugPtr != (UPrimitiveComponent *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->LODParent,0,0);
  }
  return;
}

// FPrimitiveComponentInstanceData @ 1478a81f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveComponentInstanceData * __thiscall
FPrimitiveComponentInstanceData::FPrimitiveComponentInstanceData
          (FPrimitiveComponentInstanceData *this,UPrimitiveComponent *param_1)

{
  UPrimitiveComponent *pUVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  
  FSceneComponentInstanceData::FSceneComponentInstanceData
            ((FSceneComponentInstanceData *)this,(USceneComponent *)param_1);
  this->_padding_ = (longlong)&___7FPrimitiveComponentInstanceData__6B_;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.ZW.m128d_f64 = auVar9;
  this->VisibilityId = param_1->VisibilityId;
  pUVar1 = (param_1->LODParentPrimitive).field0_0x0.DebugPtr;
  (this->LODParent).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if ((param_1->field_0x1a8 & 1) == 0) {
    USceneComponent::UpdateComponentToWorld((USceneComponent *)param_1,None,None);
  }
  dVar10 = *(double *)&param_1->field_0x1f8;
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] = *(double *)&param_1->field_0x1f0;
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = *(double *)&param_1->field_0x208;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x200;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = *(double *)&param_1->field_0x218;
  (this->ComponentTransform).Translation.XY.m128d_f64[0] = *(double *)&param_1->field_0x210;
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = *(double *)&param_1->field_0x228;
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x220;
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = *(double *)&param_1->field_0x238;
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] = *(double *)&param_1->field_0x230;
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = *(double *)&param_1->field_0x248;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = *(double *)&param_1->field_0x240;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  return this;
}

// FPrimitiveComponentInstanceData @ 1478a8320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveComponentInstanceData * __thiscall
FPrimitiveComponentInstanceData::FPrimitiveComponentInstanceData
          (FPrimitiveComponentInstanceData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FSceneComponentInstanceData::FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  this->_padding_ = (longlong)&___7FPrimitiveComponentInstanceData__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->VisibilityId = -1;
  (this->LODParent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  return this;
}

// ~FPrimitiveComponentInstanceData @ 1478ab9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveComponentInstanceData::~FPrimitiveComponentInstanceData
          (FPrimitiveComponentInstanceData *this)

{
  this->_padding_ = (longlong)&___7FSceneComponentInstanceData__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  FInstanceCacheDataBase::~FInstanceCacheDataBase((FInstanceCacheDataBase *)this);
  return;
}

