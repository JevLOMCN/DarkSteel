// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 12

// StaticClass @ 14cfc14f0

UClass * __cdecl ULiveLinkRetargetAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkRetargetAsset",
               &Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton,
               StaticRegisterNativesULiveLinkRetargetAsset,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkRetargetAsset>,
               InternalVTableHelperCtorCaller<ULiveLinkRetargetAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton;
}

// ULiveLinkRetargetAsset @ 14cfc29c0

ULiveLinkRetargetAsset * __thiscall
ULiveLinkRetargetAsset::ULiveLinkRetargetAsset(ULiveLinkRetargetAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkRetargetAsset__6B_;
  return this;
}

// ULiveLinkRetargetAsset @ 14cfc29f0

ULiveLinkRetargetAsset * __thiscall
ULiveLinkRetargetAsset::ULiveLinkRetargetAsset
          (ULiveLinkRetargetAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkRetargetAsset__6B_;
  return this;
}

// ~ULiveLinkRetargetAsset @ 14cfc2ac0

void __thiscall ULiveLinkRetargetAsset::~ULiveLinkRetargetAsset(ULiveLinkRetargetAsset *this)

{
  *(undefined ***)this = &___7ULiveLinkRetargetAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyCurveValue @ 14cfc2e20

void __thiscall
ULiveLinkRetargetAsset::ApplyCurveValue
          (ULiveLinkRetargetAsset *this,USkeleton *param_1,FName param_2,float param_3,
          FBlendedCurve *param_4)

{
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Set
            ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,param_2,
             param_3);
  return;
}

// BuildCurveData @ 14cfc2e50

void __thiscall
ULiveLinkRetargetAsset::BuildCurveData
          (ULiveLinkRetargetAsset *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1,FCompactPose *param_2,FBlendedCurve *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FName *pFVar10;
  ECurveElementFlags *pEVar11;
  longlong lVar12;
  longlong lVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  int iVar16;
  FName *pFVar17;
  uint uVar18;
  FIdentityFunctor local_res20;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_48;
  
  local_48._padding_ = 0;
  local_48._padding_ = 0;
  local_48._padding_._0_1_ = '\0';
  local_48.Filter = (FCurveFilter *)0x0;
  UE::Anim::FCurveUtils::BuildUnsorted<TMemStackAllocator<0>,UE::Anim::FCurveElement>
            (&local_48,param_1);
  if (((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3 == &local_48) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar16 = (int)local_48._padding_;
  lVar12 = (longlong)(int)local_48._padding_;
  puVar1 = &param_3->field_0x8;
  iVar8 = *(int *)puVar1;
  if ((int)local_48._padding_ != 0) {
    if (param_3->field_0x10 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (*(FCurveElement **)param_3,iVar8,local_res20,(FElementSortPredicate)local_res20);
      param_3->field_0x10 = 1;
    }
    pFVar15 = (FCurveElement *)local_48._padding_;
    if ((char)local_48._padding_ == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)local_48._padding_,iVar16,local_res20,
                 (FElementSortPredicate)local_res20);
    }
    if (iVar16 < iVar8) {
      iVar16 = iVar8;
    }
    uVar18 = iVar16 / 2 + iVar16;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    puVar2 = &param_3->field_0xc;
    if (*(int *)&param_3->field_0xc < (int)uVar18) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_3,*(int *)puVar1,
                 (int *)puVar2);
    }
    pFVar17 = *(FName **)param_3;
    pFVar10 = pFVar17 + (longlong)iVar8 * 2;
    pFVar14 = (FCurveElement *)((longlong)pFVar15 + lVar12);
    if (pFVar17 != pFVar10) {
      if (pFVar15 == pFVar14) {
        return;
      }
      do {
        while( true ) {
          FVar4 = pFVar15->Name;
          FVar5 = *pFVar17;
          if (FVar5 != FVar4) break;
          pFVar17[1].ComparisonIndex.Value = (uint)pFVar15->Value;
          pEVar11 = &pFVar15->Flags;
          pFVar15 = pFVar15 + 1;
          *(ECurveElementFlags *)&pFVar17[1].Number = *pEVar11;
          pFVar17 = pFVar17 + 2;
          if ((pFVar17 == pFVar10) || (pFVar15 == pFVar14)) goto LAB_14cfc308c;
        }
        iVar8 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar8 == 0) {
          iVar8 = FVar5.Number - FVar4.Number;
        }
        if (iVar8 < 0) {
          pFVar17 = pFVar17 + 2;
          bVar7 = pFVar17 == pFVar10;
        }
        else {
          lVar12 = *(longlong *)param_3;
          iVar8 = *(int *)puVar1;
          if (iVar8 == *(int *)puVar2) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                              (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_3,
                               (int *)puVar2);
          }
          iVar16 = (int)((longlong)pFVar17 - lVar12 >> 4);
          *(int *)puVar1 = iVar8 + 1;
          lVar13 = (longlong)iVar16 * 0x10;
          memmove((void *)(*(longlong *)param_3 + lVar13 + 0x10),
                  (void *)(*(longlong *)param_3 + lVar13),(longlong)(iVar8 - iVar16) << 4);
          lVar12 = *(longlong *)param_3;
          pFVar10 = (FName *)((longlong)*(int *)puVar1 * 0x10 + lVar12);
          *(undefined8 *)(lVar13 + lVar12) = 0;
          ((undefined8 *)(lVar13 + lVar12))[1] = 0;
          *(undefined4 *)(lVar13 + 8 + lVar12) = 0;
          pFVar17 = (FName *)(lVar12 + 0x10 + lVar13);
          *(FName *)(lVar13 + lVar12) = pFVar15->Name;
          *(float *)(lVar13 + 8 + lVar12) = pFVar15->Value;
          pEVar11 = &pFVar15->Flags;
          pFVar15 = pFVar15 + 1;
          bVar7 = pFVar15 == pFVar14;
          *(ECurveElementFlags *)(lVar13 + 0xc + lVar12) = *pEVar11;
        }
      } while (!bVar7);
    }
LAB_14cfc308c:
    if (pFVar15 < pFVar14) {
      iVar8 = *(int *)puVar1;
      iVar16 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
      uVar18 = iVar16 + iVar8;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (*(int *)puVar2 < (int)uVar18) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_3,iVar8,
                   (int *)puVar2);
      }
      UE::Core::Private::
      ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar16,(ForElementType<UE::Anim::FCurveElement> *)param_3,(int *)puVar1,
                 (int *)puVar2);
      puVar9 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)param_3);
      lVar12 = (longlong)pFVar15 - (longlong)puVar9;
      pEVar11 = &pFVar15->Flags;
      do {
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = *(undefined8 *)(lVar12 + (longlong)puVar9);
        puVar3 = puVar9 + 2;
        *(float *)(puVar9 + 1) = *(float *)(pEVar11 + -4);
        *(ECurveElementFlags *)((longlong)puVar9 + 0xc) = *pEVar11;
        puVar9 = puVar3;
        pEVar11 = pEVar11 + 0x10;
      } while ((FCurveElement *)(lVar12 + (longlong)puVar3) < pFVar14);
    }
  }
  return;
}

// BuildCurveData @ 14cfc3170

void __thiscall
ULiveLinkRetargetAsset::BuildCurveData
          (ULiveLinkRetargetAsset *this,FLiveLinkSkeletonStaticData *param_1,
          FLiveLinkAnimationFrameData *param_2,FCompactPose *param_3,FBlendedCurve *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FName *pFVar10;
  ECurveElementFlags *pEVar11;
  longlong lVar12;
  longlong lVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  int iVar16;
  FName *pFVar17;
  uint uVar18;
  FIdentityFunctor local_res10;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_48;
  
  FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&param_3->field_0x10 + 0x40));
  iVar8 = (int)param_1->_padding_;
  if (iVar8 == (int)param_2->_padding_) {
    local_48._padding_ = 0;
    local_48._padding_ = 0;
    local_48._padding_._0_1_ = '\0';
    local_48.Filter = (FCurveFilter *)0x0;
    UE::Anim::FCurveUtils::
    BuildLinearUnfiltered<_ULiveLinkRetargetAsset::BuildCurveData_::__l5::<lambda_1>,_ULiveLinkRetargetAsset::BuildCurveData_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              (&local_48,iVar8,(<lambda_1>)param_1,(<lambda_2>)param_2);
    if (((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4 == &local_48)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                              ,0x10a,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar16 = (int)local_48._padding_;
    lVar12 = (longlong)(int)local_48._padding_;
    puVar1 = &param_4->field_0x8;
    iVar8 = *(int *)puVar1;
    if ((int)local_48._padding_ != 0) {
      if (param_4->field_0x10 == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                  (*(FCurveElement **)param_4,iVar8,local_res10,(FElementSortPredicate)local_res10);
        param_4->field_0x10 = 1;
      }
      pFVar15 = (FCurveElement *)local_48._padding_;
      if ((char)local_48._padding_ == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                  ((FCurveElement *)local_48._padding_,iVar16,local_res10,
                   (FElementSortPredicate)local_res10);
      }
      if (iVar16 < iVar8) {
        iVar16 = iVar8;
      }
      uVar18 = iVar16 / 2 + iVar16;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      puVar2 = &param_4->field_0xc;
      if (*(int *)&param_4->field_0xc < (int)uVar18) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_4,*(int *)puVar1,
                   (int *)puVar2);
      }
      pFVar17 = *(FName **)param_4;
      pFVar10 = pFVar17 + (longlong)iVar8 * 2;
      pFVar14 = (FCurveElement *)((longlong)pFVar15 + lVar12);
      if (pFVar17 != pFVar10) {
        if (pFVar15 == pFVar14) {
          return;
        }
        do {
          while( true ) {
            FVar4 = pFVar15->Name;
            FVar5 = *pFVar17;
            if (FVar5 != FVar4) break;
            pFVar17[1].ComparisonIndex.Value = (uint)pFVar15->Value;
            pEVar11 = &pFVar15->Flags;
            pFVar15 = pFVar15 + 1;
            *(ECurveElementFlags *)&pFVar17[1].Number = *pEVar11;
            pFVar17 = pFVar17 + 2;
            if ((pFVar17 == pFVar10) || (pFVar15 == pFVar14)) goto LAB_14cfc33dc;
          }
          iVar8 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
          if (iVar8 == 0) {
            iVar8 = FVar5.Number - FVar4.Number;
          }
          if (iVar8 < 0) {
            pFVar17 = pFVar17 + 2;
            bVar7 = pFVar17 == pFVar10;
          }
          else {
            lVar12 = *(longlong *)param_4;
            iVar8 = *(int *)puVar1;
            if (iVar8 == *(int *)puVar2) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_4,
                                 (int *)puVar2);
            }
            iVar16 = (int)((longlong)pFVar17 - lVar12 >> 4);
            *(int *)puVar1 = iVar8 + 1;
            lVar13 = (longlong)iVar16 * 0x10;
            memmove((void *)(*(longlong *)param_4 + lVar13 + 0x10),
                    (void *)(*(longlong *)param_4 + lVar13),(longlong)(iVar8 - iVar16) << 4);
            lVar12 = *(longlong *)param_4;
            pFVar10 = (FName *)((longlong)*(int *)puVar1 * 0x10 + lVar12);
            *(undefined8 *)(lVar13 + lVar12) = 0;
            ((undefined8 *)(lVar13 + lVar12))[1] = 0;
            *(undefined4 *)(lVar13 + 8 + lVar12) = 0;
            pFVar17 = (FName *)(lVar12 + 0x10 + lVar13);
            *(FName *)(lVar13 + lVar12) = pFVar15->Name;
            *(float *)(lVar13 + 8 + lVar12) = pFVar15->Value;
            pEVar11 = &pFVar15->Flags;
            pFVar15 = pFVar15 + 1;
            bVar7 = pFVar15 == pFVar14;
            *(ECurveElementFlags *)(lVar13 + 0xc + lVar12) = *pEVar11;
          }
        } while (!bVar7);
      }
LAB_14cfc33dc:
      if (pFVar15 < pFVar14) {
        iVar8 = *(int *)puVar1;
        iVar16 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
        uVar18 = iVar8 + iVar16;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        if (*(int *)puVar2 < (int)uVar18) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_4,iVar8,
                     (int *)puVar2);
        }
        UE::Core::Private::
        ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,iVar16,(ForElementType<UE::Anim::FCurveElement> *)param_4,(int *)puVar1,
                   (int *)puVar2);
        puVar9 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)param_4);
        lVar12 = (longlong)pFVar15 - (longlong)puVar9;
        pEVar11 = &pFVar15->Flags;
        do {
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = *(undefined8 *)((longlong)puVar9 + lVar12);
          puVar3 = puVar9 + 2;
          *(float *)(puVar9 + 1) = *(float *)(pEVar11 + -4);
          *(ECurveElementFlags *)((longlong)puVar9 + 0xc) = *pEVar11;
          puVar9 = puVar3;
          pEVar11 = pEVar11 + 0x10;
        } while ((FCurveElement *)(lVar12 + (longlong)puVar3) < pFVar14);
      }
    }
  }
  return;
}

// BuildPoseAndCurveFromBaseData @ 14cfc4000

void __thiscall
ULiveLinkRetargetAsset::BuildPoseAndCurveFromBaseData
          (ULiveLinkRetargetAsset *this,float param_1,FLiveLinkBaseStaticData *param_2,
          FLiveLinkBaseFrameData *param_3,FCompactPose *param_4,FBlendedCurve *param_5)

{
  return;
}

// BuildPoseFromAnimationData @ 14cfc4750

void __thiscall
ULiveLinkRetargetAsset::BuildPoseFromAnimationData
          (ULiveLinkRetargetAsset *this,float param_1,FLiveLinkSkeletonStaticData *param_2,
          FLiveLinkAnimationFrameData *param_3,FCompactPose *param_4)

{
  return;
}

// GetPrivateStaticClass @ 14cfc5040

UClass * __cdecl ULiveLinkRetargetAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkAnimationCore",L"LiveLinkRetargetAsset",
               &Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton,
               StaticRegisterNativesULiveLinkRetargetAsset,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkRetargetAsset>,
               InternalVTableHelperCtorCaller<ULiveLinkRetargetAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRetargetAsset.InnerSingleton;
}

// Initialize @ 14cfc5260

void __thiscall ULiveLinkRetargetAsset::Initialize(ULiveLinkRetargetAsset *this)

{
  return;
}

// StaticRegisterNativesULiveLinkRetargetAsset @ 14cfc5a70

void __cdecl ULiveLinkRetargetAsset::StaticRegisterNativesULiveLinkRetargetAsset(void)

{
  return;
}

