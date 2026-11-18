// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// StaticStruct @ 144054cd0

UScriptStruct * __cdecl FRecordedTransformTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecordedTransformTrack,(UObject *)pUVar1,
                         L"RecordedTransformTrack");
  }
  return Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton;
}

// ProcessRawRecordedData @ 14409c030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FRecordedTransformTrack * __cdecl
FRecordedTransformTrack::ProcessRawRecordedData
          (FRecordedTransformTrack *__return_storage_ptr__,FRecordedTransformTrack *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  FRecordedFrame *pFVar8;
  code *pcVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  UScriptStruct *pUVar21;
  TConsoleVariableData<int> *pTVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  UPackage *pUVar26;
  FStructuredArchiveFromArchive *pFVar27;
  FStructuredArchiveSlot FVar28;
  FRecordedTransformTrack *pFVar29;
  undefined7 extraout_var;
  FScriptContainerElement *pFVar30;
  FText *pFVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  char *pcVar36;
  FScriptContainerElement *pFVar37;
  FScriptContainerElement *pFVar38;
  longlong lVar39;
  void *pvVar40;
  uint uVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar68;
  undefined4 uVar69;
  float fVar70;
  float fVar72;
  double dVar71;
  ulong64 uVar73;
  double dVar74;
  float fVar75;
  float fVar76;
  ulong64 uVar77;
  undefined1 auStackY_5e8 [32];
  FNumberFormattingOptions local_570;
  TSharedPtr<FCulture,1> local_558;
  TSharedPtr<FCulture,1> local_548;
  TSharedPtr<FCulture,1> local_538;
  double local_520;
  double local_518;
  double local_510;
  FText local_500;
  FText local_4f0;
  FText local_4e0;
  FArchiveState local_4c8;
  undefined8 local_438;
  undefined8 local_430;
  FArchiveState local_428;
  undefined8 local_398;
  undefined8 local_390;
  FStructuredArchiveFromArchive local_388;
  FStructuredArchiveFromArchive local_1f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  (__return_storage_ptr__->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Records).ArrayMax;
  iVar7 = (param_1->Records).ArrayNum;
  pFVar8 = (FRecordedFrame *)(param_1->Records).AllocatorInstance.Data;
  (__return_storage_ptr__->Records).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar7,0,(ForAnyElementType *)__return_storage_ptr__,iVar7,piVar1);
    ConstructItems<FRecordedFrame,FRecordedFrame,int>
              ((__return_storage_ptr__->Records).AllocatorInstance.Data,pFVar8,iVar7);
  }
  FArchiveState::FArchiveState(&local_428);
  pTVar22 = CVarLogCacheReduction.Ref;
  local_428._padding_ = (longlong)&___7FArchiveCountMem__6B_;
  local_398 = 0;
  local_428.ArIsFilterEditorOnly = '\0';
  local_428.ArIsCountingMemory = '\x01';
  local_390 = 0;
  bVar23 = IsInParallelGameThread();
  if (!bVar23) {
    bVar23 = IsInGameThread();
    lVar42 = 4;
    if (!bVar23) goto LAB_14409c112;
  }
  lVar42 = 0;
LAB_14409c112:
  if (*(int *)((longlong)pTVar22->ShadowedValue + lVar42) != 0) {
    if (Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar26 = Z_Construct_UPackage__Script_Chaos();
      Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRecordedTransformTrack,(UObject *)pUVar26,
                           L"RecordedTransformTrack");
    }
    pUVar21 = Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton;
    pcVar9 = *(code **)((Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton)->
                        _padding_ + 0x2e0);
    pFVar27 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                        (&local_388,(FArchive *)&local_428);
    FVar28 = FStructuredArchiveFromArchive::GetSlot(pFVar27);
    (*pcVar9)(pUVar21,*(undefined8 *)FVar28,__return_storage_ptr__,pUVar21);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_388);
  }
  dVar20 = __real_3f1a36e2e0000000;
  uVar19 = _UNK_15061cc8c;
  uVar18 = _UNK_15061cc88;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar7 = (__return_storage_ptr__->Records).ArrayNum;
  uVar24 = iVar7 - 1;
  uVar43 = (ulonglong)(int)uVar24;
  uVar44 = uVar43;
  do {
    if ((int)uVar24 < 0) {
      FArchiveState::FArchiveState(&local_4c8);
      pTVar22 = CVarLogCacheReduction.Ref;
      local_4c8._padding_ = (longlong)&___7FArchiveCountMem__6B_;
      local_438 = 0;
      local_4c8.ArIsFilterEditorOnly = '\0';
      local_4c8.ArIsCountingMemory = '\x01';
      local_430 = 0;
      bVar23 = IsInParallelGameThread();
      if ((bVar23) || (bVar23 = IsInGameThread(), lVar42 = 4, bVar23)) {
        lVar42 = 0;
      }
      if (*(int *)((longlong)pTVar22->ShadowedValue + lVar42) != 0) {
        if (Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar26 = Z_Construct_UPackage__Script_Chaos();
          Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FRecordedTransformTrack,(UObject *)pUVar26,
                               L"RecordedTransformTrack");
        }
        pUVar21 = Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.OuterSingleton;
        pcVar9 = *(code **)((Z_Registration_Info_UScriptStruct_FRecordedTransformTrack.
                            OuterSingleton)->_padding_ + 0x2e0);
        pFVar27 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                            (&local_1f8,(FArchive *)&local_4c8);
        FVar28 = FStructuredArchiveFromArchive::GetSlot(pFVar27);
        (*pcVar9)(pUVar21,*(undefined8 *)FVar28,__return_storage_ptr__,pUVar21);
        FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1f8);
        iVar33 = (int)local_398;
        iVar7 = (int)local_438;
        FNumberFormattingOptions::FNumberFormattingOptions(&local_570);
        local_570.UseGrouping = true;
        local_570.MinimumFractionalDigits = 2;
        local_570.MaximumFractionalDigits = 2;
        if ((4 < (byte)LogGeometryCollectionCache._0_1_) &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache),
           4 < (byte)LogGeometryCollectionCache._0_1_)) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache);
        }
        if ((4 < (byte)LogGeometryCollectionCache._0_1_) &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache),
           4 < (byte)LogGeometryCollectionCache._0_1_)) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache);
        }
        if (4 < (byte)LogGeometryCollectionCache._0_1_) {
          local_558.Object = (FCulture *)0x0;
          local_558.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar31 = FText::AsNumber(&local_500,(int)((iVar33 >> 0x1f & 0x3ffU) + iVar33) >> 10,
                                    &local_570,&local_558);
          FText::ToString(pFVar31);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache);
          if (local_500.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_500.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_558.SharedReferenceCount.ReferenceController);
          if (4 < (byte)LogGeometryCollectionCache._0_1_) {
            local_548.Object = (FCulture *)0x0;
            local_548.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar31 = FText::AsNumber(&local_4f0,(int)((iVar7 >> 0x1f & 0x3ffU) + iVar7) >> 10,
                                      &local_570,&local_548);
            FText::ToString(pFVar31);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache);
            if (local_4f0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_4f0.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_548.SharedReferenceCount.ReferenceController);
            if (4 < (byte)LogGeometryCollectionCache._0_1_) {
              local_538.Object = (FCulture *)0x0;
              local_538.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar31 = FText::AsNumber(&local_4e0,
                                        (int)((iVar33 - iVar7 >> 0x1f & 0x3ffU) + (iVar33 - iVar7))
                                        >> 10,&local_570,&local_538);
              FText::ToString(pFVar31);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u_____Saved_______150b41d50,
                         (FLogCategoryBase *)&LogGeometryCollectionCache);
              if (local_4e0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_4e0.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_538.SharedReferenceCount.ReferenceController);
              if ((4 < (byte)LogGeometryCollectionCache._0_1_) &&
                 (UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache),
                 4 < (byte)LogGeometryCollectionCache._0_1_)) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionCache);
              }
            }
          }
        }
      }
      FArchive::~FArchive((FArchive *)&local_4c8);
      FArchive::~FArchive((FArchive *)&local_428);
      return __return_storage_ptr__;
    }
    uVar32 = ~(uint)uVar44 >> 0x1f;
    pcVar36 = (char *)(ulonglong)uVar32;
    uVar25 = 0;
    if ((int)(uint)uVar44 < (__return_storage_ptr__->Records).ArrayNum) {
      uVar25 = uVar32;
    }
    if (uVar25 == 0) {
      pcVar36 = "(Index >= 0) & (Index < ArrayNum)";
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
        return pFVar29;
      }
    }
    uVar32 = 0;
    pFVar38 = (__return_storage_ptr__->Records).AllocatorInstance.Data + uVar43 * 0xb8;
    lVar42 = 0;
    uVar25 = *(uint *)&pFVar38[8].field_0x0;
    if (0 < (int)uVar25) {
      fVar70 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
      fVar72 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
      uVar73 = GlobalVectorConstants::ThreshQuatNormalized.m128_u64[1];
      lVar39 = 0;
      fVar75 = GlobalVectorConstants::FloatOne.m128_f32[0];
      fVar76 = GlobalVectorConstants::FloatOne.m128_f32[1];
      uVar77 = GlobalVectorConstants::FloatOne.m128_u64[1];
      do {
        uVar68 = SUB84(pcVar36,0);
        uVar41 = 0;
        if ((int)uVar32 < (int)uVar25) {
          uVar41 = ~uVar32 >> 0x1f;
        }
        if (uVar41 == 0) {
          uVar68 = 0x506106c8;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar41 = (uint)CONCAT71(extraout_var,bVar23);
          if (bVar23) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
            return pFVar29;
          }
          fVar75 = GlobalVectorConstants::FloatOne.m128_f32[0];
          fVar76 = GlobalVectorConstants::FloatOne.m128_f32[1];
          uVar77 = GlobalVectorConstants::FloatOne.m128_u64[1];
          fVar70 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
          fVar72 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
          uVar73 = GlobalVectorConstants::ThreshQuatNormalized.m128_u64[1];
        }
        lVar47 = *(longlong *)&pFVar38->field_0x0;
        dVar66 = *(double *)(lVar47 + lVar39);
        dVar15 = ((double *)(lVar47 + lVar39))[1];
        pdVar4 = (double *)(lVar47 + lVar39 + 0x10);
        dVar60 = *pdVar4;
        dVar71 = pdVar4[1];
        dVar59 = dVar60 * dVar60 + dVar66 * dVar66;
        dVar66 = dVar71 * dVar71 + dVar15 * dVar15;
        dVar15 = dVar66 + dVar59;
        dVar59 = dVar59 + dVar66;
        dVar66 = (double)(float)uVar77 - dVar15;
        dVar60 = (double)(float)(uVar77 >> 0x20) - dVar59;
        auVar62._8_8_ =
             -(ulonglong)
              ((double)(float)(uVar73 >> 0x20) <
              (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar19,SUB84(dVar60,0) & uVar18))
        ;
        auVar62._0_8_ =
             -(ulonglong)
              ((double)(float)uVar73 <
              (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) & uVar17,SUB84(dVar66,0) & uVar16))
        ;
        dVar15 = (double)fVar75 - dVar15;
        dVar59 = (double)fVar76 - dVar59;
        iVar33 = movmskpd(uVar68,auVar62);
        auVar48._8_8_ =
             -(ulonglong)
              ((double)fVar72 <
              (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar19,SUB84(dVar59,0) & uVar18))
        ;
        auVar48._0_8_ =
             -(ulonglong)
              ((double)fVar70 <
              (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar17,SUB84(dVar15,0) & uVar16))
        ;
        uVar25 = movmskpd(uVar41,auVar48);
        uVar25 = iVar33 << 2 | uVar25;
        pcVar36 = (char *)(ulonglong)uVar25;
        if (uVar25 != 0) {
          pcVar36 = (char *)(longlong)*(int *)&pFVar38[0x38].field_0x0;
          uVar25 = 0;
          if ((int)uVar32 < *(int *)&pFVar38[0x38].field_0x0) {
            uVar25 = ~uVar32 >> 0x1f;
          }
          if (uVar25 == 0) {
            pcVar36 = "(Index >= 0) & (Index < ArrayNum)";
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar9 = (code *)swi(3);
              pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
              return pFVar29;
            }
            fVar75 = GlobalVectorConstants::FloatOne.m128_f32[0];
            fVar76 = GlobalVectorConstants::FloatOne.m128_f32[1];
            uVar77 = GlobalVectorConstants::FloatOne.m128_u64[1];
            fVar70 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
            fVar72 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
            uVar73 = GlobalVectorConstants::ThreshQuatNormalized.m128_u64[1];
          }
          if (*(char *)(*(longlong *)&pFVar38[0x30].field_0x0 + lVar42) == '\0') {
            *(double (*) [2])(lVar47 + lVar39) =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            *(double (*) [2])(lVar47 + lVar39 + 0x10) =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            *(double (*) [2])(lVar47 + lVar39 + 0x20) =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            *(double (*) [2])(lVar47 + lVar39 + 0x30) =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            *(double (*) [2])(lVar47 + lVar39 + 0x40) =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            *(double (*) [2])(lVar47 + lVar39 + 0x50) =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            fVar70 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
            fVar72 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
            uVar73 = GlobalVectorConstants::ThreshQuatNormalized.m128_u64[1];
            fVar75 = GlobalVectorConstants::FloatOne.m128_f32[0];
            fVar76 = GlobalVectorConstants::FloatOne.m128_f32[1];
            uVar77 = GlobalVectorConstants::FloatOne.m128_u64[1];
          }
        }
        uVar25 = *(uint *)&pFVar38[8].field_0x0;
        uVar32 = uVar32 + 1;
        lVar42 = lVar42 + 1;
        lVar39 = lVar39 + 0x60;
      } while ((int)uVar32 < (int)uVar25);
    }
    pFVar2 = pFVar38 + 0x10;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    iVar33 = *(int *)(pFVar38 + 0x1c);
    pFVar3 = pFVar38 + 0x18;
    *(int *)&pFVar3->field_0x0 = 0;
    if (iVar33 < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar25,(ForAnyElementType *)pFVar2,0,(int *)(pFVar38 + 0x1c));
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar25,(ForAnyElementType *)pFVar2,(int *)pFVar3,(int *)(pFVar38 + 0x1c));
    uVar32 = 0;
    if (0 < (int)uVar25) {
      lVar42 = 0;
      do {
        uVar41 = 0;
        if ((int)uVar32 < *(int *)&pFVar3->field_0x0) {
          uVar41 = ~uVar32 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar9 = (code *)swi(3);
          pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
          return pFVar29;
        }
        *(uint *)(*(FScriptContainerElement **)&pFVar2->field_0x0 + lVar42) = uVar32;
        uVar32 = uVar32 + 1;
        lVar42 = lVar42 + 4;
      } while ((int)uVar32 < (int)uVar25);
    }
    if (uVar24 != 0) {
      uVar32 = 0;
      if ((int)(uVar24 - 1) < (__return_storage_ptr__->Records).ArrayNum) {
        uVar32 = -uVar24 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
        return pFVar29;
      }
      pFVar30 = (__return_storage_ptr__->Records).AllocatorInstance.Data + (uVar43 - 1) * 0xb8;
      uVar25 = uVar25 - 1;
      if (-1 < (int)uVar25) {
        lVar42 = (longlong)(int)uVar25;
        lVar39 = lVar42 * 0x60;
        do {
          uVar41 = ~uVar25;
          uVar45 = uVar41 >> 0x1f;
          uVar32 = 0;
          if ((int)uVar25 < *(int *)&pFVar38[0x38].field_0x0) {
            uVar32 = uVar45;
          }
          if ((uVar32 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
            return pFVar29;
          }
          if (*(char *)(*(longlong *)&pFVar38[0x30].field_0x0 + lVar42) == '\0') {
            uVar32 = 0;
            if ((int)uVar25 < *(int *)&pFVar38[8].field_0x0) {
              uVar32 = uVar45;
            }
            if ((uVar32 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar9 = (code *)swi(3);
              pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
              return pFVar29;
            }
            lVar47 = *(longlong *)&pFVar38->field_0x0;
            iVar33 = *(int *)(pFVar30 + 8);
            uVar32 = 0;
            if ((int)uVar25 < iVar33) {
              uVar32 = uVar45;
            }
            if (uVar32 == 0) {
              iVar33 = 0x506106c8;
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar9 = (code *)swi(3);
                pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
                return pFVar29;
              }
            }
            pdVar4 = (double *)(lVar47 + lVar39 + 0x30);
            pdVar5 = (double *)(lVar47 + lVar39 + 0x20);
            uVar68 = SUB84(dVar20,0);
            uVar69 = (undefined4)((ulonglong)dVar20 >> 0x20);
            lVar10 = *(longlong *)pFVar30;
            auVar49._8_4_ = uVar68;
            auVar49._0_8_ = dVar20;
            auVar49._12_4_ = uVar69;
            local_520 = dVar20;
            pdVar6 = (double *)(lVar10 + 0x30 + lVar39);
            dVar60 = *pdVar4 - *pdVar6;
            dVar59 = pdVar4[1] - pdVar6[1];
            pdVar4 = (double *)(lVar10 + 0x20 + lVar39);
            dVar66 = *pdVar5 - *pdVar4;
            dVar15 = pdVar5[1] - pdVar4[1];
            auVar63._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar17,
                                  SUB84(dVar60,0) & uVar16);
            auVar63._8_4_ = SUB84(dVar59,0) & uVar18;
            auVar63._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & uVar19;
            auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar63._8_8_);
            auVar50._0_8_ = -(ulonglong)(dVar20 < auVar63._0_8_);
            uVar32 = movmskpd(iVar33,auVar50);
            lVar46 = -(ulonglong)
                      (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar19,
                                                 SUB84(dVar15,0) & uVar18));
            auVar12._8_4_ = (int)lVar46;
            auVar12._0_8_ =
                 -(ulonglong)
                  (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) & uVar17,
                                             SUB84(dVar66,0) & uVar16));
            auVar12._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
            iVar33 = movmskpd((int)pFVar30,auVar12);
            if ((uVar32 & 0x3fffffff) == 0 && iVar33 == 0) {
              pdVar4 = (double *)(lVar47 + lVar39 + 0x10);
              dVar60 = *pdVar4;
              dVar59 = pdVar4[1];
              dVar71 = *(double *)(lVar47 + lVar39);
              dVar74 = ((double *)(lVar47 + lVar39))[1];
              local_518 = dVar20;
              pdVar4 = (double *)(lVar10 + 0x10 + lVar39);
              dVar61 = dVar60 - *pdVar4;
              dVar67 = dVar59 - pdVar4[1];
              pdVar4 = (double *)(lVar10 + 0x10 + lVar39);
              dVar60 = dVar60 + *pdVar4;
              dVar59 = dVar59 + pdVar4[1];
              dVar66 = dVar71 - *(double *)(lVar10 + lVar39);
              dVar15 = dVar74 - ((double *)(lVar10 + lVar39))[1];
              dVar71 = dVar71 + *(double *)(lVar10 + lVar39);
              dVar74 = dVar74 + ((double *)(lVar10 + lVar39))[1];
              auVar64._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar17,
                                    SUB84(dVar61,0) & uVar16);
              auVar64._8_4_ = SUB84(dVar67,0) & uVar18;
              auVar64._12_4_ = (uint)((ulonglong)dVar67 >> 0x20) & uVar19;
              auVar51._8_4_ = uVar68;
              auVar51._0_8_ = dVar20;
              auVar51._12_4_ = uVar69;
              auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < auVar64._8_8_);
              auVar52._0_8_ = -(ulonglong)(dVar20 < auVar64._0_8_);
              iVar34 = movmskpd(0,auVar52);
              auVar53._8_4_ = uVar68;
              auVar53._0_8_ = dVar20;
              auVar53._12_4_ = uVar69;
              auVar54._8_8_ =
                   -(ulonglong)
                    (auVar53._8_8_ <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar19,
                                     SUB84(dVar15,0) & uVar18));
              auVar54._0_8_ =
                   -(ulonglong)
                    (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) & uVar17,
                                               SUB84(dVar66,0) & uVar16));
              uVar32 = movmskpd(iVar33,auVar54);
              uVar35 = iVar34 << 2 | uVar32;
              if (uVar35 != 0) {
                auVar55._8_4_ = uVar68;
                auVar55._0_8_ = dVar20;
                auVar55._12_4_ = uVar69;
                auVar56._8_8_ =
                     -(ulonglong)
                      (auVar55._8_8_ <
                      (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar19,
                                       SUB84(dVar59,0) & uVar18));
                auVar56._0_8_ =
                     -(ulonglong)
                      (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar17,
                                                 SUB84(dVar60,0) & uVar16));
                uVar35 = movmskpd(uVar35,auVar56);
                lVar46 = -(ulonglong)
                          (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) & uVar19,
                                                     SUB84(dVar74,0) & uVar18));
                auVar13._8_4_ = (int)lVar46;
                auVar13._0_8_ =
                     -(ulonglong)
                      (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) & uVar17,
                                                 SUB84(dVar71,0) & uVar16));
                auVar13._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
                uVar32 = movmskpd(uVar32,auVar13);
                if ((uVar35 & 0x3fffffff) != 0 || uVar32 != 0) goto LAB_14409c855;
              }
              pdVar4 = (double *)(lVar47 + lVar39 + 0x50);
              pdVar5 = (double *)(lVar47 + lVar39 + 0x40);
              pdVar6 = (double *)(lVar10 + 0x50 + lVar39);
              dVar60 = *pdVar4 - *pdVar6;
              dVar59 = pdVar4[1] - pdVar6[1];
              pdVar4 = (double *)(lVar10 + 0x40 + lVar39);
              dVar66 = *pdVar5 - *pdVar4;
              dVar15 = pdVar5[1] - pdVar4[1];
              auVar65._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar17,
                                    SUB84(dVar60,0) & uVar16);
              auVar65._8_4_ = SUB84(dVar59,0) & uVar18;
              auVar65._12_4_ = (uint)((ulonglong)dVar59 >> 0x20) & uVar19;
              auVar57._8_4_ = uVar68;
              auVar57._0_8_ = dVar20;
              auVar57._12_4_ = uVar69;
              local_510 = dVar20;
              auVar58._8_8_ = -(ulonglong)(auVar57._8_8_ < auVar65._8_8_);
              auVar58._0_8_ = -(ulonglong)(dVar20 < auVar65._0_8_);
              uVar35 = movmskpd(0,auVar58);
              lVar47 = -(ulonglong)
                        (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar19,
                                                   SUB84(dVar15,0) & uVar18));
              auVar14._8_4_ = (int)lVar47;
              auVar14._0_8_ =
                   -(ulonglong)
                    (dVar20 < (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) & uVar17,
                                               SUB84(dVar66,0) & uVar16));
              auVar14._12_4_ = (int)((ulonglong)lVar47 >> 0x20);
              iVar33 = movmskpd(uVar32,auVar14);
              if ((uVar35 & 0x3fffffff) == 0 && iVar33 == 0) goto LAB_14409c77d;
            }
          }
          else {
LAB_14409c77d:
            uVar32 = 0;
            if ((int)uVar25 < *(int *)&pFVar38[8].field_0x0) {
              uVar32 = uVar45;
            }
            if ((uVar32 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar9 = (code *)swi(3);
              pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
              return pFVar29;
            }
            pvVar40 = (void *)(*(longlong *)&pFVar38->field_0x0 + lVar39);
            iVar33 = *(int *)&pFVar38[8].field_0x0 + uVar41;
            if (iVar33 != 0) {
              memmove(pvVar40,(void *)((longlong)pvVar40 + 0x60),(longlong)iVar33 * 0x60);
            }
            *(int *)&pFVar38[8].field_0x0 = *(int *)&pFVar38[8].field_0x0 + -1;
            uVar32 = 0;
            if ((int)uVar25 < *(int *)&pFVar3->field_0x0) {
              uVar32 = uVar45;
            }
            if ((uVar32 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar9 = (code *)swi(3);
              pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
              return pFVar29;
            }
            pvVar40 = (void *)(*(longlong *)&pFVar38[0x10].field_0x0 + lVar42 * 4);
            iVar33 = *(int *)&pFVar3->field_0x0 + uVar41;
            if (iVar33 != 0) {
              memmove(pvVar40,(void *)((longlong)pvVar40 + 4),(longlong)iVar33 << 2);
            }
            *(int *)&pFVar3->field_0x0 = *(int *)&pFVar3->field_0x0 + -1;
          }
LAB_14409c855:
          lVar42 = lVar42 + -1;
          lVar39 = lVar39 + -0x60;
          uVar25 = uVar25 - 1;
        } while (-1 < (int)uVar25);
      }
      iVar33 = *(int *)&pFVar38[8].field_0x0;
      if (*(int *)(pFVar38 + 0xc) != iVar33) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar33,(ForAnyElementType *)pFVar38,iVar33,(int *)(pFVar38 + 0xc));
      }
      iVar33 = *(int *)&pFVar3->field_0x0;
      if (*(int *)(pFVar38 + 0x1c) != iVar33) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar33,(ForAnyElementType *)(pFVar38 + 0x10),iVar33,(int *)(pFVar38 + 0x1c));
      }
    }
    if ((int)uVar24 < iVar7 + -1) {
      uVar25 = 0;
      if ((int)(uVar24 + 1) < (__return_storage_ptr__->Records).ArrayNum) {
        uVar25 = ~(uVar24 + 1) >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
        return pFVar29;
      }
      pFVar38 = (__return_storage_ptr__->Records).AllocatorInstance.Data;
      lVar42 = (uVar43 + 1) * 0xb8;
      uVar25 = *(uint *)(pFVar38 + lVar42 + 0x18);
      if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
      }
      pFVar30 = pFVar38 + lVar42 + 0x28;
      *(int *)pFVar30 = 0;
      if (*(int *)(pFVar38 + lVar42 + 0x2c) < (int)uVar25) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar25,(ForAnyElementType *)(pFVar38 + lVar42 + 0x20),0,
                   (int *)(pFVar38 + lVar42 + 0x2c));
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar25,(ForAnyElementType *)(pFVar38 + lVar42 + 0x20),(int *)pFVar30,
                 (int *)(pFVar38 + lVar42 + 0x2c));
      uVar25 = uVar25 - 1;
      if (-1 < (int)uVar25) {
        lVar39 = (longlong)(int)uVar25;
        do {
          uVar32 = 0;
          if ((int)uVar25 < *(int *)(pFVar38 + lVar42 + 0x18)) {
            uVar32 = ~uVar25 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
            return pFVar29;
          }
          lVar47 = *(longlong *)(pFVar38 + lVar42 + 0x10);
          uVar32 = 0;
          if ((int)uVar25 < *(int *)pFVar30) {
            uVar32 = ~uVar25 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            pFVar29 = (FRecordedTransformTrack *)(*pcVar9)();
            return pFVar29;
          }
          pFVar11 = *(FScriptContainerElement **)&pFVar2->field_0x0;
          if (pFVar11 != pFVar11 + (longlong)*(int *)&pFVar3->field_0x0 * 4) {
            pFVar37 = pFVar11;
            do {
              if (*(int *)pFVar37 == *(int *)(lVar47 + lVar39 * 4)) {
                uVar68 = (undefined4)((longlong)pFVar37 - (longlong)pFVar11 >> 2);
                goto LAB_14409ca76;
              }
              pFVar37 = pFVar37 + 4;
            } while (pFVar37 != pFVar11 + (longlong)*(int *)&pFVar3->field_0x0 * 4);
          }
          uVar68 = 0xffffffff;
LAB_14409ca76:
          *(undefined4 *)(*(longlong *)(pFVar38 + lVar42 + 0x20) + lVar39 * 4) = uVar68;
          lVar39 = lVar39 + -1;
          uVar25 = uVar25 - 1;
        } while (-1 < (int)uVar25);
      }
    }
    uVar24 = uVar24 - 1;
    uVar44 = (ulonglong)uVar24;
    uVar43 = uVar43 - 1;
  } while( true );
}

