// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 24

// StaticClass @ 14cea3b50

UClass * __cdecl UGeometryScriptLibrary_PointSetSamplingFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_PointSetSamplingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_PointSetSamplingFunctions
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_PointSetSamplingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_PointSetSamplingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_PointSetSamplingFunctions @ 14ceae6f0

UGeometryScriptLibrary_PointSetSamplingFunctions * __thiscall
UGeometryScriptLibrary_PointSetSamplingFunctions::UGeometryScriptLibrary_PointSetSamplingFunctions
          (UGeometryScriptLibrary_PointSetSamplingFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_PointSetSamplingFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_PointSetSamplingFunctions @ 14ceae720

UGeometryScriptLibrary_PointSetSamplingFunctions * __thiscall
UGeometryScriptLibrary_PointSetSamplingFunctions::UGeometryScriptLibrary_PointSetSamplingFunctions
          (UGeometryScriptLibrary_PointSetSamplingFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_PointSetSamplingFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_PointSetSamplingFunctions @ 14ceaeb50

void __thiscall
UGeometryScriptLibrary_PointSetSamplingFunctions::~UGeometryScriptLibrary_PointSetSamplingFunctions
          (UGeometryScriptLibrary_PointSetSamplingFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_PointSetSamplingFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DownsamplePoints @ 14ceb8bf0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::DownsamplePoints
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptPointPriorityOptions *param_2,FGeometryScriptIndexList *param_3,int param_4
          ,UGeometryScriptDebug *param_5)

{
  int iVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar10;
  TArrayView<float_const_,int> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FPriorityOrderPoints local_148;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_130;
  TArrayView<float_const_,int> local_118;
  FTextFormat local_108;
  FText local_f8;
  FFormatArgumentValue local_e8;
  undefined4 local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  FText local_a8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_98;
  TArrayView<float_const_,int> local_88;
  FTextFormat local_78;
  undefined4 local_5c;
  undefined4 local_4c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  
  FGeometryScriptIndexList::Reset(param_3,Any,0);
  iVar1 = (param_2->OptionalPriorityWeights).ArrayNum;
  iVar2 = param_1->ArrayNum;
  if ((0 < iVar1) && (iVar1 < iVar2)) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"UGeometryScriptLibrary_PointSetFunctions",
                        L"DownsamplePointsMissingWeights",
                        L"DownsamplePoints: Found {0} points but only {1} PriorityWeights");
    pFVar9 = FTextFormat::FTextFormat(&local_78,pFVar8,Default);
    local_e8.Type = Int;
    local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_e8.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_c8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 2;
    local_e8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar2;
    local_c0 = (longlong)iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_130.AllocatorInstance,2,&local_130.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_130.AllocatorInstance.Data,&local_e8,2);
    local_108.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_108.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_108.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_f8,&local_108,&local_130);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
    if ((FFormatArgumentValue *)local_130.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    UE::Geometry::AppendWarning(param_5,InvalidInputs,&local_f8);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  uVar13 = 0;
  if (param_1->ArrayNum < param_4) {
    param_4 = param_1->ArrayNum;
  }
  if ((param_2->bUniformSpacing == false) && (iVar1 < iVar2)) {
    if (((param_3->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((param_3->List).Object,param_4,Default);
    uVar14 = uVar13;
    if (0 < param_4) {
      do {
        if (((param_3->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar3 = (param_3->List).Object;
        uVar12 = (uint)uVar13;
        uVar7 = 0;
        if ((int)uVar12 < pTVar3->ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((pTVar3->AllocatorInstance).Data + uVar14 * 4) = uVar12;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < (longlong)param_4);
    }
  }
  else {
    local_148.SpatialLevels = 10;
    local_148.Order.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Order.ArrayNum = 0;
    local_148.Order.ArrayMax = 0;
    if (param_2->bUniformSpacing == false) {
      pTVar11 = TArrayView<float_const_,int>::
                TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                          (&local_38,&param_2->OptionalPriorityWeights);
      local_88.DataPtr = pTVar11->DataPtr;
      local_88.ArrayNum = pTVar11->ArrayNum;
      local_88._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
      UE::Geometry::FPriorityOrderPoints::ComputeDescendingImportance(&local_148,&local_88);
    }
    else {
      if (iVar1 < iVar2) {
        local_118.DataPtr = (float *)0x0;
        iVar1 = 0;
      }
      else {
        local_118.DataPtr = (float *)(param_2->OptionalPriorityWeights).AllocatorInstance.Data;
        iVar1 = (param_2->OptionalPriorityWeights).ArrayNum;
        local_4c = local_5c;
        if ((iVar1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), local_4c = local_5c, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_118._12_4_ = local_4c;
      local_118.ArrayNum = iVar1;
      pTVar10 = TArrayView<UE::Math::TVector<double>_const_,int>::
                TArrayView<UE::Math::TVector<double>_const_,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                          (&local_48,param_1);
      local_98.DataPtr = pTVar10->DataPtr;
      local_98.ArrayNum = pTVar10->ArrayNum;
      local_98._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
      UE::Geometry::FPriorityOrderPoints::ComputeUniformSpaced
                (&local_148,&local_98,&local_118,param_4,4);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_148.Order,param_4,Default);
    if (((param_3->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar3 = (param_3->List).Object;
    if (pTVar3 != &local_148.Order) {
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar3->AllocatorInstance).Data = local_148.Order.AllocatorInstance.Data;
      local_148.Order.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar3->ArrayNum = local_148.Order.ArrayNum;
      pTVar3->ArrayMax = local_148.Order.ArrayMax;
      local_148.Order.ArrayNum = 0;
      local_148.Order.ArrayMax = 0;
    }
    if (local_148.Order.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Order.AllocatorInstance.Data);
    }
  }
  return;
}

// FlattenPoints @ 14ceb9a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::FlattenPoints
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          FGeometryScriptPointFlatteningOptions *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  EGeometryScriptAxis EVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 local_f0 [16];
  double local_e0;
  
  uVar4 = param_1->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar16 = *piVar1;
  if (iVar16 < (int)uVar4) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar4 - iVar16,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar16) {
      uVar21 = iVar16 - uVar4;
      if (((int)(uVar21 | uVar4) < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar21 != 0) {
        pFVar18 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10;
        iVar16 = (*piVar1 - uVar4) - uVar21;
        if (iVar16 != 0) {
          memmove(pFVar18,pFVar18 + (longlong)(int)uVar21 * 0x10,(longlong)iVar16 << 4);
        }
        *piVar1 = *piVar1 - uVar21;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  uVar14 = _UNK_15061cc8c;
  uVar13 = _UNK_15061cc88;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  EVar3 = param_3->DropAxis;
  iVar16 = param_1->ArrayNum;
  uVar19 = 0;
  if (0 < iVar16) {
    lVar20 = 0;
    lVar23 = 0;
    do {
      uVar22 = ~uVar19 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar19 < iVar16) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      dVar38 = (param_3->Frame).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar39 = (param_3->Frame).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar7 = (param_3->Frame).Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar8 = (param_3->Frame).Rotation.ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      pFVar18 = pFVar5 + lVar23;
      dVar27 = *(double *)(pFVar5 + lVar23 + 0x10) - (param_3->Frame).Translation.ZW.m128d_f64[0];
      dVar11 = *(double *)pFVar18 - (param_3->Frame).Translation.XY.m128d_f64[0];
      dVar12 = *(double *)(pFVar18 + 8) - (param_3->Frame).Translation.XY.m128d_f64[1];
      uVar44 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar28._8_4_ = SUB84(dVar7,0);
      auVar28._0_8_ = dVar39;
      auVar28._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar36._8_4_ = SUB84(dVar39,0);
      auVar36._0_8_ = dVar38;
      auVar36._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar33._8_4_ = SUB84(dVar8,0);
      auVar33._0_8_ = dVar7;
      auVar33._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar37 = blendpd(auVar36,auVar33,2);
      auVar46._8_4_ = SUB84(dVar12,0);
      auVar46._0_8_ = dVar11;
      auVar46._12_4_ = uVar44;
      auVar32._8_4_ = SUB84(dVar12,0);
      auVar32._0_8_ = dVar11;
      auVar32._12_4_ = uVar44;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = dVar27;
      auVar33 = blendpd(auVar32,auVar35,2);
      auVar47._0_8_ = auVar46._8_8_ * dVar38 - dVar39 * dVar11;
      auVar47._8_8_ = dVar27 * dVar39 - auVar28._8_8_ * dVar12;
      auVar34._0_8_ = auVar33._0_8_ * dVar7 - auVar37._0_8_ * dVar27;
      auVar34._8_8_ = auVar33._8_8_ * dVar8 - auVar37._8_8_ * 0.0;
      auVar33 = blendpd(auVar47,auVar34,2);
      dVar9 = auVar47._8_8_ + auVar47._8_8_;
      dVar10 = auVar34._0_8_ + auVar34._0_8_;
      uVar44 = SUB84(dVar10,0);
      uVar45 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar48._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar48._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      auVar42._8_4_ = uVar44;
      auVar42._0_8_ = dVar9;
      auVar42._12_4_ = uVar45;
      auVar29._8_4_ = uVar44;
      auVar29._0_8_ = dVar9;
      auVar29._12_4_ = uVar45;
      auVar40._8_4_ = uVar44;
      auVar40._0_8_ = dVar9;
      auVar40._12_4_ = uVar45;
      auVar33 = blendpd(auVar40,auVar48,2);
      auVar43._0_8_ = auVar42._8_8_ * dVar38 - dVar9 * dVar39;
      auVar43._8_8_ = auVar48._0_8_ * dVar39 - auVar29._8_8_ * dVar7;
      auVar30._8_4_ = SUB84(auVar48._8_8_,0);
      auVar30._0_8_ = auVar48._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar41._0_8_ = auVar33._0_8_ * dVar7 - auVar48._0_8_ * auVar37._0_8_;
      auVar41._8_8_ = auVar33._8_8_ * dVar8 - auVar30._8_8_ * auVar37._8_8_;
      auVar33 = *(undefined1 (*) [16])(param_3->Frame).Scale3D.ZW.m128d_f64;
      lVar24 = -(ulonglong)
                ((double)CONCAT44(auVar33._4_4_ & uVar21,auVar33._0_4_ & uVar4) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_3->Frame).Scale3D.XY.m128d_f64);
      lVar25 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(param_3->Frame).Scale3D.XY.m128d_f64 + 4) &
                                  uVar21,*(uint *)(param_3->Frame).Scale3D.XY.m128d_f64 & uVar4) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar26 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(param_3->Frame).Scale3D.XY.m128d_f64 + 0xc) &
                                  uVar14,*(uint *)((param_3->Frame).Scale3D.XY.m128d_f64 + 1) &
                                         uVar13) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar31._8_4_ = SUB84(auVar43._8_8_,0);
      auVar31._0_8_ = auVar43._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
      auVar37._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar37._0_8_ = auVar33._0_8_;
      auVar37._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
      dVar7 = (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar35._12_4_,
                               ~(uint)lVar26 & auVar35._8_4_) *
              (dVar10 * dVar8 + dVar12 + auVar41._0_8_);
      local_f0._8_4_ = SUB84(dVar7,0);
      local_f0._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar35._4_4_,
                            ~(uint)lVar25 & auVar35._0_4_) *
           (dVar9 * dVar8 + dVar11 + auVar31._8_8_);
      local_f0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar37 = blendpd(auVar43,auVar41,2);
      local_e0 = (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar33._4_4_,
                                  ~(uint)lVar24 & auVar33._0_4_) *
                 (auVar48._0_8_ * dVar8 + dVar27 + auVar37._0_8_);
      uVar2 = *(undefined8 *)(local_f0 + (ulonglong)(EVar3 == X) * 8);
      uVar17 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)((param_2->AllocatorInstance).Data + lVar20) = uVar2;
      uVar2 = *(undefined8 *)(local_f0 + (ulonglong)((EVar3 != Z) + 1) * 8);
      uVar17 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = uVar19 + 1;
      lVar23 = lVar23 + 0x18;
      *(undefined8 *)((param_2->AllocatorInstance).Data + lVar20 + 8) = uVar2;
      lVar20 = lVar20 + 0x10;
      iVar16 = param_1->ArrayNum;
    } while ((int)uVar19 < iVar16);
  }
  return;
}

// GetPointsFromIndexList @ 14cebb360

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::GetPointsFromIndexList
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptIndexList *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  
  pTVar6 = (param_2->List).Object;
  if (pTVar6 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
      return;
    }
  }
  else {
    uVar4 = pTVar6->ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar4,&param_3->AllocatorInstance,0,piVar1);
    }
    if (((param_2->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar6 = (param_2->List).Object;
    pFVar14 = (pTVar6->AllocatorInstance).Data;
    iVar5 = pTVar6->ArrayNum;
    pFVar2 = pFVar14 + (longlong)iVar5 * 4;
    while( true ) {
      if (pTVar6->ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar14 == pFVar2) break;
      uVar4 = *(uint *)pFVar14;
      uVar12 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (param_3->AllocatorInstance).Data;
      pFVar3 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x18;
      if (((pFVar7 <= pFVar3) && (pFVar3 < pFVar7 + (longlong)*piVar1 * 0x18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar13 = param_3->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_3->AllocatorInstance,piVar1);
      }
      pFVar14 = pFVar14 + 4;
      param_3->ArrayNum = iVar13 + 1;
      uVar10 = *(undefined8 *)(pFVar3 + 8);
      pFVar8 = (param_3->AllocatorInstance).Data;
      pFVar7 = pFVar8 + (longlong)iVar13 * 0x18;
      *(undefined8 *)pFVar7 = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar7 + 8) = uVar10;
      *(undefined8 *)(pFVar8 + (longlong)iVar13 * 0x18 + 0x10) = *(undefined8 *)(pFVar3 + 0x10);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14cebcef0

UClass * __cdecl UGeometryScriptLibrary_PointSetSamplingFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_PointSetSamplingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_PointSetSamplingFunctions
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_PointSetSamplingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_PointSetSamplingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions.InnerSingleton;
}

// KMeansClusterToArrays @ 14cebf010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::KMeansClusterToArrays
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptPointClusteringOptions *param_2,
          TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong local_res20;
  uint local_88 [2];
  TReferenceControllerBase<1> *local_80;
  FSharedReferencer<1> FStack_78;
  FClusterKMeans local_70;
  
  UE::Private::PointSetFunctionLocals::GetClustering(&local_70,param_1,param_2);
  iVar9 = local_70.ClusterSizes.ArrayNum;
  iVar12 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  if (iVar12 < local_70.ClusterSizes.ArrayNum) {
    iVar12 = local_70.ClusterSizes.ArrayNum - iVar12;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar12,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    DefaultConstructItems<FGeometryScriptIndexList,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x18,iVar12);
  }
  else {
    if (local_70.ClusterSizes.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_70.ClusterSizes.ArrayNum);
    }
    if (local_70.ClusterSizes.ArrayNum < iVar12) {
      uVar17 = iVar12 - local_70.ClusterSizes.ArrayNum;
      if (((int)(local_70.ClusterSizes.ArrayNum | uVar17) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar17 != 0) {
        TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_3,iVar9,uVar17);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  pTVar7 = _UNK_150651568;
  pTVar6 = ___xmm_00000000000000000000000000000010;
  iVar12 = *piVar1;
  uVar17 = 0;
  if (0 < iVar12) {
    lVar15 = 0;
    local_res20 = 0;
    do {
      uVar16 = ~uVar17 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar17 < iVar12) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = (param_3->AllocatorInstance).Data + local_res20;
      pFVar2 = pFVar14 + 8;
      if (*(longlong *)(pFVar14 + 8) == 0) {
        pTVar11 = ::operator_new(0x20);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          pTVar11 = (TReferenceControllerBase<1> *)0x0;
          pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
          local_80 = pTVar6;
          FStack_78.ReferenceController = pTVar7;
        }
        else {
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar13 = pTVar11 + 1;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          pTVar11->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
          ;
          pTVar11[1]._padding_ = 0;
          pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
          if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          FStack_78.ReferenceController = pTVar11;
          local_80 = pTVar13;
        }
        if (pFVar2 != (FScriptContainerElement *)&local_80) {
          *(TReferenceControllerBase<1> **)pFVar2 = pTVar13;
          local_80 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar14 + 0x10),&FStack_78);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_78.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        if ((*(TReferenceControllerBase<1> **)pFVar2 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar11 = *(TReferenceControllerBase<1> **)pFVar2;
      aVar3 = pTVar11->WeakReferenceCount;
      *(undefined4 *)&(pTVar11->SharedReferenceCount).field_0x0 = 0;
      if ((int)aVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pTVar11,0,(int *)&pTVar11->WeakReferenceCount);
      }
      *pFVar14 = (FScriptContainerElement)0x0;
      uVar10 = 0;
      if ((int)uVar17 < param_3->ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar2 + local_res20 + 8) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = *(ForAnyElementType **)(pFVar2 + local_res20 + 8);
      uVar10 = 0;
      if ((int)uVar17 < local_70.ClusterSizes.ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(uint *)(local_70.ClusterSizes.AllocatorInstance.Data + lVar15 * 4);
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if (*(int *)((longlong)&pFVar4[1].Data + 4) < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar10,pFVar4,*(int *)&pFVar4[1].Data,(int *)((longlong)&pFVar4[1].Data + 4))
        ;
      }
      iVar12 = param_3->ArrayNum;
      local_res20 = local_res20 + 0x18;
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 1;
    } while ((int)uVar17 < iVar12);
  }
  if ((iVar12 != 0) && (local_88[0] = 0, 0 < local_70.ClusterIDs.ArrayNum)) {
    do {
      uVar17 = local_88[0];
      uVar10 = 0;
      if ((int)local_88[0] < local_70.ClusterIDs.ArrayNum) {
        uVar10 = ~local_88[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar17 = *(uint *)(local_70.ClusterIDs.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
      uVar10 = 0;
      if ((int)uVar17 < param_3->ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar2 + (longlong)(int)uVar17 * 0x18 + 8) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = *(ForAnyElementType **)(pFVar2 + (longlong)(int)uVar17 * 0x18 + 8);
      if (((pFVar4->Data <= (FScriptContainerElement *)local_88) &&
          ((FScriptContainerElement *)local_88 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar12 + 1;
      *(uint *)(pFVar4->Data + (longlong)iVar12 * 4) = local_88[0];
      local_88[0] = local_88[0] + 1;
    } while ((int)local_88[0] < local_70.ClusterIDs.ArrayNum);
  }
  if (local_70.ClusterSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ClusterSizes.AllocatorInstance.Data);
  }
  if (local_70.ClusterIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ClusterIDs.AllocatorInstance.Data);
  }
  return;
}

// KMeansClusterToIDs @ 14cebf630

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::KMeansClusterToIDs
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptPointClusteringOptions *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FClusterKMeans local_38;
  
  UE::Private::PointSetFunctionLocals::GetClustering(&local_38,param_1,param_2);
  if (param_3 != &local_38.ClusterIDs) {
    pFVar1 = (param_3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->AllocatorInstance).Data = local_38.ClusterIDs.AllocatorInstance.Data;
    param_3->ArrayNum = local_38.ClusterIDs.ArrayNum;
    param_3->ArrayMax = local_38.ClusterIDs.ArrayMax;
    local_38.ClusterIDs.ArrayNum = 0;
    local_38.ClusterIDs.ArrayMax = 0;
    local_38.ClusterIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.ClusterSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ClusterSizes.AllocatorInstance.Data);
  }
  if (local_38.ClusterIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ClusterIDs.AllocatorInstance.Data);
  }
  return;
}

// MakeBoundingBoxFromPoints @ 14cebf6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::MakeBoundingBoxFromPoints
          (TBox<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  TBox<double> *pTVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    local_68 = 0;
    local_60 = (longlong)iVar1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TBox<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  UE::Math::TBox<double>::TBox<double>
            ((TBox<double> *)&local_58._s_0,(TVector<double> *)(param_1->AllocatorInstance).Data,
             iVar1);
  auVar3._8_4_ = SUB84(local_58._s_0.Y - param_2,0);
  auVar3._0_8_ = local_58._s_0.X - param_2;
  auVar3._12_4_ = (int)((ulonglong)(local_58._s_0.Y - param_2) >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar3;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_58._s_0.Z - param_2;
  auVar4._8_4_ = SUB84(dStack_38 + param_2,0);
  auVar4._0_8_ = local_40 + param_2;
  auVar4._12_4_ = (int)((ulonglong)(dStack_38 + param_2) >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Max).field0_0x0 = auVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_30 + param_2;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// OffsetTransforms @ 14cec00e0

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::OffsetTransforms
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,double param_2,
          TVector<double> *param_3,EGeometryScriptCoordinateSpace param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 local_res8 [8];
  
  UE::Math::TVector<double>::Normalize(param_3,__real_3e45798ee0000000);
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar7 = pFVar9 + 0x20;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    dVar3 = param_2 * (param_3->field0_0x0)._s_0.X;
    dVar12 = param_2 * (param_3->field0_0x0)._s_0.Y;
    dVar19 = param_2 * (param_3->field0_0x0)._s_0.Z;
    if (param_4 == Local) {
      auVar16 = *(undefined1 (*) [16])(pFVar9 + 0x10);
      dVar13 = auVar16._0_8_;
      dVar19 = dVar19 * *(double *)&pFVar7[0x30].field_0x0;
      dVar2 = *(double *)(pFVar7 + 0x38) * 0.0;
      auVar15 = *(undefined1 (*) [16])pFVar9;
      dVar6 = *(double *)(pFVar9 + 0x18);
      dVar3 = *(double *)&pFVar7[0x20].field_0x0 * dVar3;
      dVar12 = *(double *)(pFVar7 + 0x28) * dVar12;
      uVar25 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar10 = *(undefined1 (*) [16])pFVar9;
      auVar17 = blendpd(auVar10,auVar16,2);
      auVar22._8_4_ = SUB84(dVar12,0);
      auVar22._0_8_ = dVar3;
      auVar22._12_4_ = uVar25;
      auVar23._0_8_ = auVar22._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar3;
      auVar23._8_8_ = dVar19 * auVar10._8_8_ - dVar13 * dVar12;
      auVar18._8_4_ = SUB84(dVar12,0);
      auVar18._0_8_ = dVar3;
      auVar18._12_4_ = uVar25;
      auVar10._8_4_ = SUB84(dVar2,0);
      auVar10._0_8_ = dVar19;
      auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar10 = blendpd(auVar18,auVar10,2);
      auVar11._0_8_ = auVar10._0_8_ * dVar13 - auVar17._0_8_ * dVar19;
      auVar11._8_8_ = auVar10._8_8_ * auVar16._8_8_ - auVar17._8_8_ * dVar2;
      auVar10 = blendpd(auVar23,auVar11,2);
      dVar2 = auVar23._8_8_ + auVar23._8_8_;
      dVar4 = auVar11._0_8_ + auVar11._0_8_;
      uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar24._0_8_ = auVar10._0_8_ + auVar10._0_8_;
      auVar24._8_8_ = auVar10._8_8_ + auVar10._8_8_;
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar2;
      auVar20._12_4_ = uVar25;
      auVar14._8_4_ = SUB84(dVar4,0);
      auVar14._0_8_ = dVar2;
      auVar14._12_4_ = uVar25;
      auVar10 = blendpd(auVar14,auVar24,2);
      auVar21._0_8_ = auVar20._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar2;
      auVar21._8_8_ = auVar24._0_8_ * auVar15._8_8_ - dVar13 * dVar4;
      auVar17._8_4_ = SUB84(auVar21._8_8_,0);
      auVar17._0_8_ = auVar21._0_8_;
      auVar17._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
      auVar18 = blendpd(auVar15,auVar16,2);
      auVar15._0_8_ = auVar10._0_8_ * dVar13 - auVar18._0_8_ * auVar24._0_8_;
      auVar15._8_8_ = auVar10._8_8_ * auVar16._8_8_ - auVar18._8_8_ * auVar24._8_8_;
      auVar10 = blendpd(auVar21,auVar15,2);
      dVar3 = dVar2 * dVar6 + dVar3 + auVar17._8_8_;
      dVar12 = dVar4 * dVar6 + dVar12 + auVar15._0_8_;
      auVar5._4_8_ = auVar15._8_8_;
      auVar5._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar16._0_8_ = auVar5._0_8_ << 0x20;
      auVar16._8_4_ = SUB84(dVar12,0);
      auVar16._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      dVar19 = auVar24._0_8_ * dVar6 + dVar19 + auVar10._0_8_;
      dVar12 = auVar16._8_8_;
    }
    pFVar9 = pFVar9 + 0x60;
    dVar2 = *(double *)&pFVar7[0x10].field_0x0;
    *(double *)&pFVar7->field_0x0 = *(double *)&pFVar7->field_0x0 + dVar3;
    *(double *)(pFVar7 + 8) = *(double *)(pFVar7 + 8) + dVar12;
    *(double *)&pFVar7[0x10].field_0x0 = dVar2 + dVar19;
    *(undefined8 *)(pFVar7 + 0x18) = 0;
    pFVar7 = pFVar7 + 0x60;
  }
  return;
}

// StaticRegisterNativesUGeometryScriptLibrary_PointSetSamplingFunctions @ 14cec2740

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::
StaticRegisterNativesUGeometryScriptLibrary_PointSetSamplingFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_PointSetSamplingFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransformsToPoints @ 14cec2eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::TransformsToPoints
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,param_1->ArrayNum,Default);
  iVar12 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar12) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar12) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar1 = *(undefined8 *)(pFVar2 + lVar10 + 0x30);
      pFVar2 = pFVar2 + lVar10 + 0x20;
      uVar5 = *(undefined8 *)pFVar2;
      uVar6 = *(undefined8 *)(pFVar2 + 8);
      uVar8 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x60;
      pFVar2 = pFVar3 + lVar11;
      *(undefined8 *)pFVar2 = uVar5;
      *(undefined8 *)(pFVar2 + 8) = uVar6;
      *(undefined8 *)(pFVar3 + lVar11 + 0x10) = uVar1;
      lVar11 = lVar11 + 0x18;
      iVar12 = param_1->ArrayNum;
    } while ((int)uVar9 < iVar12);
  }
  return;
}

// UnflattenPoints @ 14cec3010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::UnflattenPoints
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          FGeometryScriptPointFlatteningOptions *param_3,double param_4)

{
  EGeometryScriptAxis EVar1;
  EGeometryScriptAxis EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  double local_d8 [3];
  undefined1 local_c0 [16];
  double local_b0;
  undefined1 local_a8 [16];
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,param_1->ArrayNum,Default);
  EVar1 = param_3->DropAxis;
  iVar13 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar13) {
    lVar17 = 0;
    lVar15 = 0;
    do {
      uVar16 = ~uVar14 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar14 < iVar13) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = param_1->ArrayNum;
      local_d8[EVar1 == X] = *(double *)((param_1->AllocatorInstance).Data + lVar15);
      uVar12 = 0;
      if ((int)uVar14 < iVar13) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_d8[(EVar1 != Z) + 1] = *(double *)((param_1->AllocatorInstance).Data + lVar15 + 8);
      EVar2 = param_3->DropAxis;
      if ((Z < EVar2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      auVar26 = *(undefined1 (*) [16])(param_3->Frame).Rotation.ZW.m128d_f64;
      auVar22 = *(undefined1 (*) [16])(param_3->Frame).Rotation.XY.m128d_f64;
      dVar6 = (param_3->Frame).Scale3D.XY.m128d_f64[0];
      dVar27 = (param_3->Frame).Scale3D.XY.m128d_f64[1];
      dVar10 = (param_3->Frame).Rotation.ZW.m128d_f64[1];
      iVar13 = param_2->ArrayNum;
      local_d8[EVar2] = param_4;
      uVar12 = 0;
      if ((int)uVar14 < iVar13) {
        uVar12 = uVar16;
      }
      dVar7 = local_d8[2] * (param_3->Frame).Scale3D.ZW.m128d_f64[0];
      dVar8 = (param_3->Frame).Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar6 = dVar6 * local_d8[0];
      dVar27 = dVar27 * local_d8[1];
      uVar31 = (undefined4)((ulonglong)dVar27 >> 0x20);
      local_a8 = *(undefined1 (*) [16])(param_3->Frame).Rotation.XY.m128d_f64;
      auVar28._8_4_ = SUB84(dVar27,0);
      auVar28._0_8_ = dVar6;
      auVar28._12_4_ = uVar31;
      dVar5 = auVar26._0_8_;
      auVar20 = blendpd(local_a8,auVar26,2);
      auVar29._0_8_ = auVar28._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar6;
      auVar29._8_8_ = dVar7 * local_a8._8_8_ - dVar5 * dVar27;
      auVar23._8_4_ = SUB84(dVar27,0);
      auVar23._0_8_ = dVar6;
      auVar23._12_4_ = uVar31;
      auVar18._8_4_ = SUB84(dVar8,0);
      auVar18._0_8_ = dVar7;
      auVar18._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar18 = blendpd(auVar23,auVar18,2);
      auVar19._0_8_ = auVar18._0_8_ * dVar5 - auVar20._0_8_ * dVar7;
      auVar19._8_8_ = auVar18._8_8_ * auVar26._8_8_ - auVar20._8_8_ * dVar8;
      auVar18 = blendpd(auVar29,auVar19,2);
      dVar8 = auVar29._8_8_ + auVar29._8_8_;
      dVar9 = auVar19._0_8_ + auVar19._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar30._0_8_ = auVar18._0_8_ + auVar18._0_8_;
      auVar30._8_8_ = auVar18._8_8_ + auVar18._8_8_;
      auVar24._8_4_ = SUB84(dVar9,0);
      auVar24._0_8_ = dVar8;
      auVar24._12_4_ = uVar31;
      auVar21._8_4_ = SUB84(dVar9,0);
      auVar21._0_8_ = dVar8;
      auVar21._12_4_ = uVar31;
      auVar18 = blendpd(auVar21,auVar30,2);
      auVar25._0_8_ = auVar24._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar8;
      auVar25._8_8_ = auVar30._0_8_ * auVar22._8_8_ - dVar5 * dVar9;
      auVar20._8_4_ = SUB84(auVar25._8_8_,0);
      auVar20._0_8_ = auVar25._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
      auVar23 = blendpd(auVar22,auVar26,2);
      auVar22._0_8_ = auVar18._0_8_ * dVar5 - auVar23._0_8_ * auVar30._0_8_;
      auVar22._8_8_ = auVar18._8_8_ * auVar26._8_8_ - auVar23._8_8_ * auVar30._8_8_;
      auVar26 = blendpd(auVar25,auVar22,2);
      dVar6 = dVar8 * dVar10 + dVar6 + auVar20._8_8_ + (param_3->Frame).Translation.XY.m128d_f64[0];
      dVar27 = dVar9 * dVar10 + dVar27 + auVar22._0_8_ +
               (param_3->Frame).Translation.XY.m128d_f64[1];
      uVar31 = SUB84(dVar27,0);
      uVar32 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar27 = auVar30._0_8_ * dVar10 + dVar7 + auVar26._0_8_ +
               (param_3->Frame).Translation.ZW.m128d_f64[0];
      local_c0._8_4_ = uVar31;
      local_c0._0_8_ = dVar6;
      local_c0._12_4_ = uVar32;
      local_b0 = dVar27;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x10;
      auVar26._8_4_ = uVar31;
      auVar26._0_8_ = dVar6;
      auVar26._12_4_ = uVar32;
      *(undefined1 (*) [16])(pFVar3 + lVar17) = auVar26;
      *(double *)(pFVar3 + lVar17 + 0x10) = dVar27;
      lVar17 = lVar17 + 0x18;
      iVar13 = param_1->ArrayNum;
    } while ((int)uVar14 < iVar13);
  }
  return;
}

// execDownsamplePoints @ 14cecaab0

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execDownsamplePoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptPointPriorityOptions *pFVar1;
  FProperty *pFVar2;
  FGeometryScriptIndexList *pFVar3;
  FGeometryScriptPointPriorityOptions *pFVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  int local_res10 [4];
  UGeometryScriptDebug *local_res20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_68;
  FGeometryScriptPointPriorityOptions local_58;
  FGeometryScriptIndexList local_40;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58.OptionalPriorityWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.OptionalPriorityWeights.ArrayNum = 0;
  local_58.OptionalPriorityWeights.ArrayMax = 0;
  pTVar5 = &local_68;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_58.bUniformSpacing = true;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar1 = (FGeometryScriptPointPriorityOptions *)param_2->MostRecentPropertyAddress;
  local_40.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_58;
  if (pFVar1 != (FGeometryScriptPointPriorityOptions *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_40.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_40.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  pFVar3 = &local_40;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    pFVar3 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DownsamplePoints(pTVar5,pFVar4,pFVar3,local_res10[0],local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.List.SharedReferenceCount.ReferenceController);
  if (local_58.OptionalPriorityWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.OptionalPriorityWeights.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execFlattenPoints @ 14cecb390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execFlattenPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeometryScriptPointFlatteningOptions *pFVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 auStack_d8 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  FGeometryScriptPointFlatteningOptions local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  pTVar2 = &local_a8;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_98.Frame.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_98.Frame.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  pTVar4 = &local_b8;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_98.Frame.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_98.Frame.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_98.Frame.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_98.Frame.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_98.DropAxis = Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar3 = &local_98;
  if ((FGeometryScriptPointFlatteningOptions *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptPointFlatteningOptions *)0x0) {
    pFVar3 = (FGeometryScriptPointFlatteningOptions *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FlattenPoints(pTVar2,pTVar4,pFVar3);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// execGetPointsFromIndexList @ 14cecd3d0

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execGetPointsFromIndexList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeometryScriptIndexList *pFVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptIndexList local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  local_28.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar2 = &local_38;
  if (pTVar4 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = pTVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar3 = &local_28;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    pFVar3 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar4 = &local_48;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetPointsFromIndexList(pTVar2,pFVar3,pTVar4);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.List.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execKMeansClusterToArrays @ 14ced24d0

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execKMeansClusterToArrays
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPointClusteringOptions *pFVar2;
  TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptPointClusteringOptions local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.InitialClusterCenters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InitialClusterCenters.ArrayNum = 0;
  local_28.InitialClusterCenters.ArrayMax = 0;
  pTVar4 = &local_38;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_28.TargetNumClusters = 3;
  local_28.InitializeMethod = UniformSpacing;
  local_28.RandomSeed = 0;
  local_28.MaxIterations = 500;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar2 = &local_28;
  if ((FGeometryScriptPointClusteringOptions *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptPointClusteringOptions *)0x0) {
    pFVar2 = (FGeometryScriptPointClusteringOptions *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar3 = &local_48;
  if ((TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  KMeansClusterToArrays(pTVar4,pFVar2,pTVar3);
  DestructItems<FGeometryScriptIndexList,int>
            ((FGeometryScriptIndexList *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FGeometryScriptIndexList *)local_48.AllocatorInstance.Data != (FGeometryScriptIndexList *)0x0
     ) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.InitialClusterCenters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.InitialClusterCenters.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execKMeansClusterToIDs @ 14ced2670

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execKMeansClusterToIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  FGeometryScriptPointClusteringOptions *pFVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  void *local_88;
  undefined8 local_80;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  FGeometryScriptPointClusteringOptions local_68;
  FClusterKMeans local_48;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.InitialClusterCenters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.InitialClusterCenters.ArrayNum = 0;
  local_68.InitialClusterCenters.ArrayMax = 0;
  pTVar4 = &local_78;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_68.TargetNumClusters = 3;
  local_68.InitializeMethod = UniformSpacing;
  local_68.RandomSeed = 0;
  local_68.MaxIterations = 500;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  pFVar3 = &local_68;
  if ((FGeometryScriptPointClusteringOptions *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptPointClusteringOptions *)0x0) {
    pFVar3 = (FGeometryScriptPointClusteringOptions *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  ppvVar2 = &local_88;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Private::PointSetFunctionLocals::GetClustering(&local_48,pTVar4,pFVar3);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)ppvVar2 != &local_48.ClusterIDs) {
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free(*ppvVar2);
    }
    *ppvVar2 = local_48.ClusterIDs.AllocatorInstance.Data;
    *(int *)(ppvVar2 + 1) = local_48.ClusterIDs.ArrayNum;
    *(int *)((longlong)ppvVar2 + 0xc) = local_48.ClusterIDs.ArrayMax;
    local_48.ClusterIDs.ArrayNum = 0;
    local_48.ClusterIDs.ArrayMax = 0;
    local_48.ClusterIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.ClusterSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ClusterSizes.AllocatorInstance.Data);
  }
  if (local_48.ClusterIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ClusterIDs.AllocatorInstance.Data);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_68.InitialClusterCenters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.InitialClusterCenters.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execMakeBoundingBoxFromPoints @ 14ced2870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execMakeBoundingBoxFromPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  void **ppvVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  double local_88;
  void *local_80;
  undefined8 local_78;
  TVector<double>_u_0 local_70;
  double local_58;
  double local_50;
  double local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = (void *)0x0;
  local_78 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88 = 0.0;
  ppvVar7 = &local_80;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar7 = (void **)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  dVar5 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppvVar7 + 1);
  if (iVar1 < 1) {
    local_98 = 0;
    local_90 = (longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::Math::TBox<double>::TBox<double>((TBox<double> *)&local_70._s_0,*ppvVar7,iVar1);
  local_40 = 1;
  auVar4._8_4_ = SUB84(local_70._s_0.Y - dVar5,0);
  auVar4._0_8_ = local_70._s_0.X - dVar5;
  auVar4._12_4_ = (int)((ulonglong)(local_70._s_0.Y - dVar5) >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar4;
  *(double *)((longlong)param_3 + 0x10) = local_70._s_0.Z - dVar5;
  *(double *)((longlong)param_3 + 0x18) = local_58 + dVar5;
  *(double *)((longlong)param_3 + 0x20) = local_50 + dVar5;
  *(double *)((longlong)param_3 + 0x28) = local_48 + dVar5;
  *(ulonglong *)((longlong)param_3 + 0x30) = CONCAT71(uStack_3f,1);
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  return;
}

// execOffsetTransforms @ 14ced3690

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execOffsetTransforms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  EGeometryScriptCoordinateSpace local_res10 [8];
  double local_res20;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = 0.0;
  pTVar2 = &local_58;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = Local;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  OffsetTransforms(pTVar2,local_res20,(TVector<double> *)&local_28._s_0,local_res10[0]);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execTransformsToPoints @ 14ced99c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execTransformsToPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  void **ppvVar16;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar13 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  ppvVar16 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar16 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  this = &local_78;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this,*(int *)(ppvVar16 + 1),Default);
  iVar11 = *(int *)(ppvVar16 + 1);
  uVar14 = uVar13;
  uVar15 = uVar13;
  if (0 < iVar11) {
    do {
      uVar12 = (uint)uVar13;
      uVar10 = 0;
      if ((int)uVar12 < iVar11) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined8 *)((longlong)*ppvVar16 + uVar14 + 0x30);
      puVar2 = (undefined8 *)((longlong)*ppvVar16 + uVar14 + 0x20);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      local_48 = uVar3;
      uVar10 = 0;
      if ((int)uVar12 < this->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      local_58 = uVar7;
      uStack_50 = uVar8;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->AllocatorInstance).Data;
      uVar13 = (ulonglong)(uVar12 + 1);
      pFVar1 = pFVar5 + uVar15;
      *(undefined8 *)pFVar1 = uVar7;
      *(undefined8 *)(pFVar1 + 8) = uVar8;
      *(undefined8 *)(pFVar5 + uVar15 + 0x10) = uVar3;
      iVar11 = *(int *)(ppvVar16 + 1);
      uVar14 = uVar14 + 0x60;
      uVar15 = uVar15 + 0x18;
    } while ((int)(uVar12 + 1) < iVar11);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execUnflattenPoints @ 14ced9c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_PointSetSamplingFunctions::execUnflattenPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptPointFlatteningOptions *pFVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 auStack_e8 [32];
  double local_c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_c0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_b0;
  FGeometryScriptPointFlatteningOptions local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  pTVar3 = &local_b0;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_98.Frame.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_98.Frame.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  pTVar4 = &local_c0;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_98.Frame.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_98.Frame.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_98.Frame.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_98.Frame.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_98.DropAxis = Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_c8 = 0.0;
  pFVar2 = &local_98;
  if ((FGeometryScriptPointFlatteningOptions *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptPointFlatteningOptions *)0x0) {
    pFVar2 = (FGeometryScriptPointFlatteningOptions *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnflattenPoints(pTVar3,pTVar4,pFVar2,local_c8);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

