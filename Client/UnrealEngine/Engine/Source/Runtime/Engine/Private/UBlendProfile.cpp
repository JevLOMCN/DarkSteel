// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// StaticClass @ 14750efd0

UClass * __cdecl UBlendProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendProfile",
               &Z_Registration_Info_UClass_UBlendProfile.InnerSingleton,
               StaticRegisterNativesUBlendProfile,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendProfile>,InternalVTableHelperCtorCaller<UBlendProfile>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendProfile.InnerSingleton;
}

// UBlendProfile @ 147532450

UBlendProfile * __thiscall UBlendProfile::UBlendProfile(UBlendProfile *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendProfileInterface__;
  (this->OwningSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->ProfileEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileEntries).ArrayNum = 0;
  (this->ProfileEntries).ArrayMax = 0;
  return this;
}

// UBlendProfile @ 147532490

UBlendProfile * __thiscall UBlendProfile::UBlendProfile(UBlendProfile *this)

{
  int iVar1;
  USkeleton *pUVar2;
  UClass *pUVar3;
  
  UObject::UObject((UObject *)this);
  pUVar2 = (USkeleton *)this->_padding_;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendProfileInterface__;
  (this->OwningSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->ProfileEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileEntries).ArrayNum = 0;
  (this->ProfileEntries).ArrayMax = 0;
  this->Mode = WeightFactor;
  if (pUVar2 != (USkeleton *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      SetSkeleton(this,pUVar2);
    }
  }
  return this;
}

// ~UBlendProfile @ 147533c00

void __thiscall UBlendProfile::~UBlendProfile(UBlendProfile *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendProfileInterface__;
  pFVar1 = (this->ProfileEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateBoneWeight @ 14754b990

float __cdecl
UBlendProfile::CalculateBoneWeight
          (float param_1,EBlendProfileMode param_2,FAlphaBlend *param_3,float param_4,float param_5,
          bool param_6)

{
  UCurveFloat *pUVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = __real_3f800000;
  if (param_2 == TimeFactor) {
    if (param_1 < __real_3f7fff58) {
      pUVar1 = (param_3->CustomCurve).field0_0x0.DebugPtr;
      if (__real_3f800000 <= param_1) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      if (param_1 <= __real_3727c5ac) {
        fVar5 = FAlphaBlend::AlphaToBlendOption(__real_3f800000,param_3->BlendOption,pUVar1);
        fVar6 = fVar4;
      }
      else {
        fVar6 = param_4 / param_1;
        if (__real_3f800000 <= param_4 / param_1) {
          fVar6 = __real_3f800000;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar5 = FAlphaBlend::AlphaToBlendOption(fVar6,param_3->BlendOption,pUVar1);
        fVar6 = param_3->AlphaLerp / param_1;
        if (fVar4 <= fVar6) {
          fVar6 = fVar4;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
      }
      fVar6 = FAlphaBlend::AlphaToBlendOption
                        (fVar6,param_3->BlendOption,(param_3->CustomCurve).field0_0x0.DebugPtr);
      fVar5 = (param_3->DesiredValue - fVar5) * fVar6 + fVar5;
      if (fVar4 <= fVar5) {
        fVar5 = fVar4;
      }
      if (fVar5 <= __real_3727c5ac) {
        fVar5 = __real_3727c5ac;
      }
      if (param_6) {
        fVar5 = fVar4 - fVar5;
      }
      return fVar5;
    }
    if (param_6) {
      return __real_3f800000 - param_5;
    }
  }
  else {
    if (param_2 == WeightFactor) {
      if (!param_6) {
        fVar4 = param_1 * param_5;
        if (param_1 * param_5 <= __real_3727c5ac) {
          fVar4 = __real_3727c5ac;
        }
        return fVar4;
      }
      if (param_1 <= __real_3727c5ac) {
        if (__real_3f800000 <= __real_3727c5ac) {
          fVar4 = __real_3727c5ac;
        }
        return fVar4;
      }
      fVar4 = param_5 / param_1;
      if (param_5 / param_1 <= __real_3727c5ac) {
        fVar4 = __real_3727c5ac;
      }
      return fVar4;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendProfile.cpp"
                       ,0x1e0,L"The selected Blend Profile Mode is not supported (Mode=%d)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  return param_5;
}

// CleanupBoneEntries @ 14754d350

void __thiscall UBlendProfile::CleanupBoneEntries(UBlendProfile *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = (this->ProfileEntries).ArrayNum;
  lVar2 = (longlong)iVar5;
  if (iVar5 != 0) {
    pFVar1 = (this->ProfileEntries).AllocatorInstance.Data;
    iVar7 = 0;
    bVar8 = (*(uint *)(pFVar1 + 8) & 0x7fffffff) != 0x7fffffff;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        pFVar3 = pFVar1 + (lVar4 * 5 + 2) * 4;
        do {
          if (bVar8 != ((*(uint *)pFVar3 & 0x7fffffff) != 0x7fffffff)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          pFVar3 = pFVar3 + 0x14;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          memmove(pFVar1 + (longlong)iVar7 * 0x14,pFVar1 + (longlong)iVar5 * 0x14,
                  (longlong)(iVar6 - iVar5) * 0x14);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    (this->ProfileEntries).ArrayNum = iVar7;
  }
  return;
}

// ClearEntries @ 14754da90

void __thiscall UBlendProfile::ClearEntries(UBlendProfile *this)

{
  int *piVar1;
  
  piVar1 = &(this->ProfileEntries).ArrayMax;
  (this->ProfileEntries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&(this->ProfileEntries).AllocatorInstance,0,piVar1);
  }
  return;
}

// FillBoneScalesArray @ 147553490

void __thiscall
UBlendProfile::FillBoneScalesArray
          (UBlendProfile *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          FBoneContainer *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FSkeletonRemappingRegistry *this_00;
  USkeleton *pUVar4;
  FSkeletonRemapping *this_01;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar9 = (param_2->BoneIndicesArray).ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_1->ArrayNum;
  uVar7 = 0;
  *piVar1 = 0;
  if (param_1->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar9,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  uVar10 = uVar7;
  if (0 < (int)uVar9) {
    do {
      uVar5 = (uint)uVar7;
      uVar6 = 0;
      if ((int)uVar5 < *piVar1) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = (ulonglong)(uVar5 + 1);
      *(undefined4 *)((param_1->AllocatorInstance).Data + uVar10 * 4) = 0x3f800000;
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)(int)uVar9);
  }
  this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
  pUVar4 = (USkeleton *)FWeakObjectPtr::Get(&(param_2->AssetSkeleton).WeakPtr);
  this_01 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping
                      (this_00,(this->OwningSkeleton).field0_0x0.DebugPtr,pUVar4);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
  if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&(this_01->TargetSkeleton).WeakPtr), bVar3)) {
    uVar9 = 0;
    if (0 < (this->ProfileEntries).ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->ProfileEntries).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = *(int *)((this->ProfileEntries).AllocatorInstance.Data + lVar8 + 8) * 2 >> 1;
        if (((int)uVar6 < 0) || ((this_01->SourceToTargetBoneIndexes).ArrayNum <= (int)uVar6)) {
LAB_14755376c:
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8192494858347217512>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                             ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          uVar5 = 0;
          if ((int)uVar6 < (this_01->SourceToTargetBoneIndexes).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = *(uint *)((this_01->SourceToTargetBoneIndexes).AllocatorInstance.Data +
                           (longlong)(int)uVar6 * 4);
          if (((int)uVar6 < 0) || ((param_2->SkeletonToCompactPose).ArrayNum <= (int)uVar6))
          goto LAB_14755376c;
          uVar5 = 0;
          if ((int)uVar6 < (param_2->SkeletonToCompactPose).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = *(uint *)((param_2->SkeletonToCompactPose).AllocatorInstance.Data +
                           (longlong)(int)uVar6 * 4);
          if (uVar6 != 0xffffffff) {
            fVar11 = GetEntryBlendScale(this,uVar9);
            uVar5 = 0;
            if ((int)uVar6 < *piVar1) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) = fVar11;
          }
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x14;
      } while ((int)uVar9 < (this->ProfileEntries).ArrayNum);
    }
  }
  else {
    uVar9 = 0;
    if (0 < (this->ProfileEntries).ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->ProfileEntries).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = *(int *)((this->ProfileEntries).AllocatorInstance.Data + lVar8 + 8) * 2 >> 1;
        if (((int)uVar6 < 0) || ((param_2->SkeletonToCompactPose).ArrayNum <= (int)uVar6)) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8192494858347217512>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                             ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          uVar5 = 0;
          if ((int)uVar6 < (param_2->SkeletonToCompactPose).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = *(uint *)((param_2->SkeletonToCompactPose).AllocatorInstance.Data +
                           (longlong)(int)uVar6 * 4);
          if (uVar6 != 0xffffffff) {
            fVar11 = GetEntryBlendScale(this,uVar9);
            uVar5 = 0;
            if ((int)uVar6 < *piVar1) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) = fVar11;
          }
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x14;
      } while ((int)uVar9 < (this->ProfileEntries).ArrayNum);
    }
  }
  return;
}

// FillSkeletonBoneDurationsArray @ 147553970

void __thiscall
UBlendProfile::FillSkeletonBoneDurationsArray
          (UBlendProfile *this,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  USkeleton *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uStack_2c;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_28 [2];
  
  uVar2 = *(undefined8 *)param_1;
  iVar1 = *(int *)&param_1->field_0x8;
  pUVar3 = (this->OwningSkeleton).field0_0x0.DebugPtr;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28[0]._12_4_ = uStack_2c;
  local_28[0]._8_4_ = iVar1;
  local_28[0]._0_8_ = uVar2;
  FillSkeletonBoneDurationsArray(this,local_28,param_2,pUVar3);
  return;
}

// FillSkeletonBoneDurationsArray @ 147553a00

void __thiscall
UBlendProfile::FillSkeletonBoneDurationsArray
          (UBlendProfile *this,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *param_1,float param_2,
          USkeleton *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FSkeletonRemappingRegistry *this_00;
  FSkeletonRemapping *this_01;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  float *pfVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [48];
  
  if (((this->OwningSkeleton).field0_0x0.DebugPtr == (USkeleton *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningSkeleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendProfile.cpp"
                         ,0x15c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_3 == (USkeleton *)0x0) {
    param_3 = (this->OwningSkeleton).field0_0x0.DebugPtr;
  }
  this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
  this_01 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping
                      (this_00,(this->OwningSkeleton).field0_0x0.DebugPtr,param_3);
  pfVar12 = *(float **)param_1;
  uVar9 = (longlong)*(int *)&param_1->field_0x8 & 0x3fffffffffffffff;
  if (pfVar12 + *(int *)&param_1->field_0x8 < pfVar12) {
    uVar9 = 0;
  }
  if (uVar9 != 0) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pfVar12 = param_2;
      pfVar12 = pfVar12 + 1;
    }
  }
  uVar7 = 0;
  if (this->Mode == TimeFactor) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
    if ((bVar6) && (bVar6 = FWeakObjectPtr::IsValid(&(this_01->TargetSkeleton).WeakPtr), bVar6)) {
      iVar4 = (this->ProfileEntries).ArrayNum;
      pFVar10 = (this->ProfileEntries).AllocatorInstance.Data;
      pFVar1 = pFVar10 + (longlong)iVar4 * 0x14;
      while( true ) {
        if ((this->ProfileEntries).ArrayNum != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FBlendProfileBoneEntry_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar10 == pFVar1) break;
        uVar11 = *(int *)(pFVar10 + 8) * 2 >> 1;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (this_01->SourceToTargetBoneIndexes).ArrayNum)) {
          uVar8 = uVar7;
          if ((int)uVar11 < (this_01->SourceToTargetBoneIndexes).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar11 = *(uint *)((this_01->SourceToTargetBoneIndexes).AllocatorInstance.Data +
                            (longlong)(int)uVar11 * 4);
          if (uVar11 != 0xffffffff) {
            fVar3 = *(float *)(pFVar10 + 0x10);
            uVar8 = uVar7;
            if ((int)uVar11 < *(int *)&param_1->field_0x8) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4) =
                 fVar3 * *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4);
          }
        }
        pFVar10 = pFVar10 + 0x14;
      }
    }
    else {
      iVar4 = (this->ProfileEntries).ArrayNum;
      pFVar10 = (this->ProfileEntries).AllocatorInstance.Data;
      pFVar1 = pFVar10 + (longlong)iVar4 * 0x14;
      while( true ) {
        if ((this->ProfileEntries).ArrayNum != iVar4) {
          local_68[0] = 0;
          `TCheckedPointerIterator<FBlendProfileBoneEntry_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_68);
        }
        if (pFVar10 == pFVar1) break;
        uVar11 = *(int *)(pFVar10 + 8) * 2 >> 1;
        if (uVar11 != 0xffffffff) {
          fVar3 = *(float *)(pFVar10 + 0x10);
          uVar8 = uVar7;
          if ((int)uVar11 < *(int *)&param_1->field_0x8) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4) =
               fVar3 * *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4);
        }
        pFVar10 = pFVar10 + 0x14;
      }
    }
  }
  else if (this->Mode == WeightFactor) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
    if ((bVar6) &&
       (bVar6 = FWeakObjectPtr::IsValid(&(this_01->TargetSkeleton).WeakPtr), fVar3 = __real_322bcc77
       , bVar6)) {
      iVar4 = (this->ProfileEntries).ArrayNum;
      pFVar10 = (this->ProfileEntries).AllocatorInstance.Data;
      pFVar1 = pFVar10 + (longlong)iVar4 * 0x14;
      while( true ) {
        if ((this->ProfileEntries).ArrayNum != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FBlendProfileBoneEntry_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar1) break;
        uVar11 = *(int *)(pFVar10 + 8) * 2 >> 1;
        if (((int)uVar11 < 0) || ((this_01->SourceToTargetBoneIndexes).ArrayNum <= (int)uVar11)) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar8 = uVar7;
          if ((int)uVar11 < (this_01->SourceToTargetBoneIndexes).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar11 = *(uint *)((this_01->SourceToTargetBoneIndexes).AllocatorInstance.Data +
                            (longlong)(int)uVar11 * 4);
        }
        fVar2 = *(float *)(pFVar10 + 0x10);
        if ((fVar3 < fVar2) && (uVar11 != 0xffffffff)) {
          uVar8 = uVar7;
          if ((int)uVar11 < *(int *)&param_1->field_0x8) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4) =
               *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4) / fVar2;
        }
        pFVar10 = pFVar10 + 0x14;
      }
    }
    else {
      fVar3 = __real_322bcc77;
      iVar4 = (this->ProfileEntries).ArrayNum;
      pFVar10 = (this->ProfileEntries).AllocatorInstance.Data;
      pFVar1 = pFVar10 + (longlong)iVar4 * 0x14;
      while( true ) {
        if ((this->ProfileEntries).ArrayNum != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FBlendProfileBoneEntry_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar10 == pFVar1) break;
        fVar2 = *(float *)(pFVar10 + 0x10);
        uVar11 = *(int *)(pFVar10 + 8) * 2 >> 1;
        if ((fVar3 < fVar2) && (uVar11 != 0xffffffff)) {
          uVar8 = uVar7;
          if ((int)uVar11 < *(int *)&param_1->field_0x8) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4) =
               *(float *)(*(longlong *)param_1 + (longlong)(int)uVar11 * 4) / fVar2;
        }
        pFVar10 = pFVar10 + 0x14;
      }
    }
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendProfile.cpp"
                       ,0x1a3,L"The selected Blend Profile Mode is not supported (Mode=%d)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// GetBoneBlendScale @ 14755aac0

float __thiscall UBlendProfile::GetBoneBlendScale(UBlendProfile *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  float fVar3;
  
  pFVar2 = (FName *)(this->ProfileEntries).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar2 + (longlong)(this->ProfileEntries).ArrayNum * 0x14);
  while( true ) {
    if (pFVar2 == pFVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014755aae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(**(code **)(this->_padding_ + 0x2b0))();
      return fVar3;
    }
    if (*pFVar2 == *param_1) break;
    pFVar2 = (FName *)&pFVar2[2].Number;
  }
  return (float)pFVar2[2].ComparisonIndex.Value;
}

// GetBoneBlendScale @ 14755ab00

float __thiscall UBlendProfile::GetBoneBlendScale(UBlendProfile *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = this->_padding_;
  lVar1 = lVar2 + (longlong)(int)this->_padding_ * 0x14;
  while( true ) {
    if (lVar2 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014755ab3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(**(code **)(this[-1]._padding_ + 0x2b0))(&this[-1]._padding_);
      return fVar3;
    }
    if (*(int *)(lVar2 + 8) * 2 >> 1 == param_1) break;
    lVar2 = lVar2 + 0x14;
  }
  return *(float *)(lVar2 + 0x10);
}

// GetDefaultBlendScale @ 14755b600

float __thiscall UBlendProfile::GetDefaultBlendScale(UBlendProfile *this)

{
  if (this->Mode == BlendMask) {
    return 0.0;
  }
  return __real_3f800000;
}

// GetEntry @ 14755baa0

FBlendProfileBoneEntry * __thiscall UBlendProfile::GetEntry(UBlendProfile *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBlendProfileBoneEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ProfileEntries).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBlendProfileBoneEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBlendProfileBoneEntry *)
         ((this->ProfileEntries).AllocatorInstance.Data + (longlong)param_1 * 0x14);
}

// GetEntryBlendScale @ 14755bb20

float __thiscall UBlendProfile::GetEntryBlendScale(UBlendProfile *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ProfileEntries).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->ProfileEntries).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    return *(float *)((this->ProfileEntries).AllocatorInstance.Data +
                     (longlong)param_1 * 0x14 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00014755bba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(this->_padding_ + 0x2b0))();
  return fVar4;
}

// GetEntryIndex @ 14755bbc0

int __thiscall UBlendProfile::GetEntryIndex(UBlendProfile *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ProfileEntries).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ProfileEntries).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->ProfileEntries).AllocatorInstance.Data + lVar6) == *param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x14;
    } while ((int)uVar5 < (this->ProfileEntries).ArrayNum);
  }
  return -1;
}

// GetEntryIndex @ 14755bc80

int __thiscall UBlendProfile::GetEntryIndex(UBlendProfile *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->ProfileEntries).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->ProfileEntries).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(int *)((this->ProfileEntries).AllocatorInstance.Data + lVar5 + 8) * 2 >> 1 == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while ((int)uVar6 < (this->ProfileEntries).ArrayNum);
  }
  return -1;
}

// GetEntryIndex @ 14755bc90

int __thiscall UBlendProfile::GetEntryIndex(UBlendProfile *this,FSkeletonPoseBoneIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->ProfileEntries).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->ProfileEntries).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((FSkeletonPoseBoneIndex)
          (*(int *)((this->ProfileEntries).AllocatorInstance.Data + lVar5 + 8) * 2 >> 1) == param_1)
      {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x14;
    } while ((int)uVar6 < (this->ProfileEntries).ArrayNum);
  }
  return -1;
}

// GetMode @ 14755d930

EBlendProfileMode __thiscall UBlendProfile::GetMode(UBlendProfile *this)

{
  return (EBlendProfileMode)this->_padding_;
}

// GetNumBlendEntries @ 14755dcf0

int __thiscall UBlendProfile::GetNumBlendEntries(UBlendProfile *this)

{
  return (int)this->_padding_;
}

// GetPerBoneInterpolationIndex @ 14755e330

int __thiscall
UBlendProfile::GetPerBoneInterpolationIndex
          (UBlendProfile *this,FCompactPoseBoneIndex *param_1,FBoneContainer *param_2,
          FPerBoneInterpolationData *param_3)

{
  FCompactPoseBoneIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FSkeletonPoseBoneIndex FVar6;
  
  FVar1 = *param_1;
  if (((int)FVar1 < 0) || ((param_2->CompactPoseToSkeletonIndex).ArrayNum <= (int)FVar1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8192494858347217501>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                       ,0x25d,"CompactPoseToSkeletonIndex.IsValidIndex(BoneIndex.GetInt())");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar6 = (FSkeletonPoseBoneIndex)0xffffffff;
  }
  else {
    uVar4 = 0;
    if ((int)FVar1 < (param_2->CompactPoseToSkeletonIndex).ArrayNum) {
      uVar4 = ~(uint)FVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    FVar6 = *(FSkeletonPoseBoneIndex *)
             ((param_2->CompactPoseToSkeletonIndex).AllocatorInstance.Data +
             (longlong)(int)FVar1 * 4);
  }
  iVar5 = GetEntryIndex((UBlendProfile *)&this[-1]._padding_,FVar6);
  return iVar5;
}

// GetPerBoneInterpolationIndex @ 14755e400

int __thiscall
UBlendProfile::GetPerBoneInterpolationIndex
          (UBlendProfile *this,FSkeletonPoseBoneIndex param_1,USkeleton *param_2,
          FPerBoneInterpolationData *param_3)

{
  int iVar1;
  
  iVar1 = GetEntryIndex((UBlendProfile *)&this[-1]._padding_,param_1);
  return iVar1;
}

// GetPrivateStaticClass @ 14755eee0

UClass * __cdecl UBlendProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendProfile",
               &Z_Registration_Info_UClass_UBlendProfile.InnerSingleton,
               StaticRegisterNativesUBlendProfile,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendProfile>,InternalVTableHelperCtorCaller<UBlendProfile>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendProfile.InnerSingleton;
}

// GetSkeleton @ 147562b20

TObjectPtr<USkeleton> __thiscall UBlendProfile::GetSkeleton(UBlendProfile *this)

{
  UObject *pUVar1;
  TObjectPtr<USkeleton>_u_0 in_RDX;
  
  pUVar1 = (UObject *)this->_padding_;
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<USkeleton>)in_RDX;
}

// IsSafeForRootSet @ 14756ada0

bool __thiscall UBlendProfile::IsSafeForRootSet(UBlendProfile *this)

{
  return false;
}

// PostLoad @ 147571e30

void __thiscall UBlendProfile::PostLoad(UBlendProfile *this)

{
  FName *pFVar1;
  int iVar2;
  USkeleton *pUVar3;
  uint *puVar4;
  FName *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  if ((this->OwningSkeleton).field0_0x0.DebugPtr != (USkeleton *)0x0) {
    pFVar5 = (FName *)(this->ProfileEntries).AllocatorInstance.Data;
    iVar2 = (this->ProfileEntries).ArrayNum;
    pFVar1 = (FName *)((longlong)pFVar5 + (longlong)iVar2 * 0x14);
    while( true ) {
      if ((this->ProfileEntries).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FBlendProfileBoneEntry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      pUVar3 = (this->OwningSkeleton).field0_0x0.DebugPtr;
      if ((pUVar3 == (USkeleton *)0x0) || (*pFVar5 == (FName)0x0)) {
        pFVar5[1].ComparisonIndex.Value = pFVar5[1].ComparisonIndex.Value | 0x7fffffff;
        pFVar5[1].Number = 0xffffffff;
        pFVar5 = (FName *)&pFVar5[2].Number;
      }
      else {
        uVar6 = 0xffffffff;
        puVar4 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                 *)&(pUVar3->ReferenceSkeleton).FinalNameToIndexMap,*pFVar5);
        if (puVar4 != (uint *)0x0) {
          uVar6 = *puVar4;
        }
        pFVar5[1].Number = 0xffffffff;
        pFVar5[1].ComparisonIndex.Value = uVar6 | 0x80000000;
        pFVar5 = (FName *)&pFVar5[2].Number;
      }
    }
  }
  return;
}

// RefreshBoneEntriesFromName @ 147572a30

void __thiscall UBlendProfile::RefreshBoneEntriesFromName(UBlendProfile *this)

{
  FName *pFVar1;
  int iVar2;
  USkeleton *pUVar3;
  uint *puVar4;
  FName *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ProfileEntries).ArrayNum;
  pFVar5 = (FName *)(this->ProfileEntries).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar5 + (longlong)iVar2 * 0x14);
  while( true ) {
    if ((this->ProfileEntries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FBlendProfileBoneEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar3 = (this->OwningSkeleton).field0_0x0.DebugPtr;
    if ((pUVar3 == (USkeleton *)0x0) || (*pFVar5 == (FName)0x0)) {
      pFVar5[1].ComparisonIndex.Value = pFVar5[1].ComparisonIndex.Value | 0x7fffffff;
      pFVar5[1].Number = 0xffffffff;
      pFVar5 = (FName *)&pFVar5[2].Number;
    }
    else {
      uVar6 = 0xffffffff;
      puVar4 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)&(pUVar3->ReferenceSkeleton).FinalNameToIndexMap,*pFVar5);
      if (puVar4 != (uint *)0x0) {
        uVar6 = *puVar4;
      }
      pFVar5[1].Number = 0xffffffff;
      pFVar5[1].ComparisonIndex.Value = uVar6 | 0x80000000;
      pFVar5 = (FName *)&pFVar5[2].Number;
    }
  }
  return;
}

// RefreshBoneEntry @ 147572ae0

void __thiscall UBlendProfile::RefreshBoneEntry(UBlendProfile *this,int param_1)

{
  FName *pFVar1;
  USkeleton *pUVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  FName *pFVar8;
  
  pFVar8 = (FName *)(this->ProfileEntries).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar8 + (longlong)(this->ProfileEntries).ArrayNum * 0x14);
  if (pFVar8 != pFVar1) {
    while ((int)(pFVar8[1].ComparisonIndex.Value * 2) >> 1 != param_1) {
      pFVar8 = (FName *)&pFVar8[2].Number;
      if (pFVar8 == pFVar1) {
        return;
      }
    }
    pUVar2 = (this->OwningSkeleton).field0_0x0.DebugPtr;
    uVar6 = 0;
    if (param_1 < (pUVar2->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3 = *(FName *)((pUVar2->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
                      (longlong)param_1 * 0xc);
    *pFVar8 = FVar3;
    pUVar2 = (this->OwningSkeleton).field0_0x0.DebugPtr;
    if ((pUVar2 == (USkeleton *)0x0) || (FVar3 == (FName)0x0)) {
      pFVar8[1].ComparisonIndex.Value = pFVar8[1].ComparisonIndex.Value | 0x7fffffff;
    }
    else {
      uVar6 = 0xffffffff;
      puVar7 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)&(pUVar2->ReferenceSkeleton).FinalNameToIndexMap,FVar3);
      if (puVar7 != (uint *)0x0) {
        uVar6 = *puVar7;
      }
      pFVar8[1].ComparisonIndex.Value = uVar6 | 0x80000000;
    }
    pFVar8[1].Number = 0xffffffff;
  }
  return;
}

// RemoveEntry @ 1475740b0

void __thiscall UBlendProfile::RemoveEntry(UBlendProfile *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = (this->ProfileEntries).ArrayNum;
  lVar2 = (longlong)iVar5;
  if (iVar5 != 0) {
    pFVar1 = (this->ProfileEntries).AllocatorInstance.Data;
    iVar7 = 0;
    bVar8 = *(int *)(pFVar1 + 8) * 2 >> 1 != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        pFVar3 = pFVar1 + lVar4 * 0x14 + 8;
        do {
          if (bVar8 != (*(int *)pFVar3 * 2 >> 1 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          pFVar3 = pFVar3 + 0x14;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          memmove(pFVar1 + (longlong)iVar7 * 0x14,pFVar1 + (longlong)iVar5 * 0x14,
                  (longlong)(iVar6 - iVar5) * 0x14);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    (this->ProfileEntries).ArrayNum = iVar7;
  }
  return;
}

// SetBoneBlendScale @ 147578ba0

void __thiscall
UBlendProfile::SetBoneBlendScale
          (UBlendProfile *this,FName *param_1,float param_2,bool param_3,bool param_4)

{
  int iVar1;
  USkeleton *pUVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = 0xffffffff;
  if ((*param_1 != (FName)0x0) &&
     (puVar8 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)&(((this->OwningSkeleton).field0_0x0.DebugPtr)->ReferenceSkeleton).
                                  FinalNameToIndexMap,*param_1), puVar8 != (uint *)0x0)) {
    uVar9 = *puVar8;
  }
  SetSingleBoneBlendScale(this,uVar9,param_2,param_4);
  if (param_3) {
    pUVar2 = (this->OwningSkeleton).field0_0x0.DebugPtr;
    iVar1 = (pUVar2->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
    uVar4 = uVar9;
joined_r0x000147578c1d:
    uVar4 = uVar4 + 1;
    if ((int)uVar4 < iVar1) {
      if ((uVar9 != 0xffffffff) && ((int)uVar9 < (int)uVar4)) {
        uVar6 = FReferenceSkeleton::GetParentIndex(&pUVar2->ReferenceSkeleton,uVar4);
        do {
          if (uVar6 == uVar9) {
            SetSingleBoneBlendScale(this,uVar4,param_2,param_4);
            break;
          }
          uVar7 = 0;
          if ((int)uVar6 < (pUVar2->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = *(uint *)((pUVar2->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
                           (longlong)(int)uVar6 * 0xc + 8);
        } while (uVar6 != 0xffffffff);
      }
      goto joined_r0x000147578c1d;
    }
  }
  return;
}

// SetBoneBlendScale @ 147578d00

void __thiscall
UBlendProfile::SetBoneBlendScale
          (UBlendProfile *this,int param_1,float param_2,bool param_3,bool param_4)

{
  int iVar1;
  USkeleton *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  SetSingleBoneBlendScale(this,param_1,param_2,param_4);
  if (param_3) {
    pUVar2 = (this->OwningSkeleton).field0_0x0.DebugPtr;
    iVar1 = (pUVar2->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
    iVar4 = param_1;
joined_r0x000147578d56:
    iVar4 = iVar4 + 1;
    if (iVar4 < iVar1) {
      if ((param_1 != -1) && (param_1 < iVar4)) {
        uVar6 = FReferenceSkeleton::GetParentIndex(&pUVar2->ReferenceSkeleton,iVar4);
        do {
          if (uVar6 == param_1) {
            SetSingleBoneBlendScale(this,iVar4,param_2,param_4);
            break;
          }
          uVar7 = 0;
          if ((int)uVar6 < (pUVar2->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = *(uint *)((pUVar2->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
                           (longlong)(int)uVar6 * 0xc + 8);
        } while (uVar6 != 0xffffffff);
      }
      goto joined_r0x000147578d56;
    }
  }
  return;
}

// SetSingleBoneBlendScale @ 147579fd0

void __thiscall
UBlendProfile::SetSingleBoneBlendScale(UBlendProfile *this,int param_1,float param_2,bool param_3)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  USkeleton *pUVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  
  pFVar13 = (FName *)(this->ProfileEntries).AllocatorInstance.Data;
  iVar7 = (this->ProfileEntries).ArrayNum;
  pFVar1 = (FName *)((longlong)pFVar13 + (longlong)iVar7 * 0x14);
  do {
    if (pFVar13 == pFVar1) {
LAB_14757a021:
      if (param_3) {
        if (iVar7 == (this->ProfileEntries).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x414,&(this->ProfileEntries).AllocatorInstance,
                             &(this->ProfileEntries).ArrayMax);
          (this->ProfileEntries).ArrayNum = iVar7;
        }
        uVar8 = (this->ProfileEntries).ArrayNum;
        lVar11 = (longlong)(int)uVar8;
        (this->ProfileEntries).ArrayNum = uVar8 + 1;
        pFVar12 = (this->ProfileEntries).AllocatorInstance.Data;
        pFVar2 = pFVar12 + lVar11 * 0x14;
        *(undefined8 *)pFVar2 = 0;
        *(undefined8 *)(pFVar2 + 8) = 0;
        *(undefined4 *)(pFVar12 + lVar11 * 0x14 + 0x10) = 0;
        uVar10 = 0;
        if ((int)uVar8 < (this->ProfileEntries).ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar3 = (this->OwningSkeleton).field0_0x0.DebugPtr;
        pFVar13 = (FName *)((this->ProfileEntries).AllocatorInstance.Data + lVar11 * 0x14);
        uVar8 = 0;
        if (param_1 < (pUVar3->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
          uVar8 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = *(FName *)((pUVar3->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
                          (longlong)param_1 * 0xc);
        *pFVar13 = FVar4;
        pUVar3 = (this->OwningSkeleton).field0_0x0.DebugPtr;
        if ((pUVar3 == (USkeleton *)0x0) || (FVar4 == (FName)0x0)) {
          pFVar13[1].ComparisonIndex.Value = pFVar13[1].ComparisonIndex.Value | 0x7fffffff;
        }
        else {
          uVar8 = 0xffffffff;
          puVar9 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                   *)&(pUVar3->ReferenceSkeleton).FinalNameToIndexMap,FVar4);
          if (puVar9 != (uint *)0x0) {
            uVar8 = *puVar9;
          }
          pFVar13[1].ComparisonIndex.Value = uVar8 | 0x80000000;
        }
        pFVar13[1].Number = 0xffffffff;
        pFVar13[2].ComparisonIndex.Value = (uint)param_2;
        if (pFVar13 != (FName *)0x0) {
LAB_14757a15a:
          pFVar13[2].ComparisonIndex.Value = (uint)param_2;
          fVar17 = (float)(**(code **)(this->_padding_ + 0x2b0))(this);
          if ((param_2 == fVar17) &&
             (iVar7 = (this->ProfileEntries).ArrayNum, lVar11 = (longlong)iVar7, iVar7 != 0)) {
            pFVar2 = (this->ProfileEntries).AllocatorInstance.Data;
            iVar16 = 0;
            bVar6 = *(int *)(pFVar2 + 8) * 2 >> 1 != param_1;
            lVar14 = 0;
            iVar7 = 0;
            do {
              lVar14 = lVar14 + 1;
              iVar15 = iVar7 + 1;
              if (lVar14 < lVar11) {
                pFVar12 = pFVar2 + lVar14 * 0x14 + 8;
                do {
                  if (bVar6 != (*(int *)pFVar12 * 2 >> 1 != param_1)) break;
                  iVar15 = iVar15 + 1;
                  lVar14 = lVar14 + 1;
                  pFVar12 = pFVar12 + 0x14;
                } while (lVar14 < lVar11);
              }
              if (bVar6 != false) {
                if (iVar16 != iVar7) {
                  memmove(pFVar2 + (longlong)iVar16 * 0x14,pFVar2 + (longlong)iVar7 * 0x14,
                          (longlong)(iVar15 - iVar7) * 0x14);
                }
                iVar16 = iVar16 + (iVar15 - iVar7);
              }
              bVar6 = (bool)(bVar6 ^ 1);
              iVar7 = iVar15;
            } while (lVar14 < lVar11);
            (this->ProfileEntries).ArrayNum = iVar16;
          }
        }
      }
      return;
    }
    if ((int)(pFVar13[1].ComparisonIndex.Value * 2) >> 1 == param_1) {
      if (pFVar13 != (FName *)0x0) goto LAB_14757a15a;
      goto LAB_14757a021;
    }
    pFVar13 = (FName *)&pFVar13[2].Number;
  } while( true );
}

// SetSkeleton @ 14757a290

void __thiscall UBlendProfile::SetSkeleton(UBlendProfile *this,USkeleton *param_1)

{
  FName *pFVar1;
  USkeleton *pUVar2;
  FScriptContainerElement *pFVar3;
  uint *puVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->OwningSkeleton).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->OwningSkeleton).field0_0x0.DebugPtr = param_1;
    if (param_1 == (USkeleton *)0x0) goto LAB_14757a33c;
  }
  iVar10 = (this->ProfileEntries).ArrayNum;
  pFVar7 = (FName *)(this->ProfileEntries).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar7 + (longlong)iVar10 * 0x14);
  while( true ) {
    if ((this->ProfileEntries).ArrayNum != iVar10) {
      `TCheckedPointerIterator<FBlendProfileBoneEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    pUVar2 = (this->OwningSkeleton).field0_0x0.DebugPtr;
    if ((pUVar2 == (USkeleton *)0x0) || (*pFVar7 == (FName)0x0)) {
      pFVar7[1].ComparisonIndex.Value = pFVar7[1].ComparisonIndex.Value | 0x7fffffff;
      pFVar7[1].Number = 0xffffffff;
      pFVar7 = (FName *)&pFVar7[2].Number;
    }
    else {
      uVar9 = 0xffffffff;
      puVar4 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)&(pUVar2->ReferenceSkeleton).FinalNameToIndexMap,*pFVar7);
      if (puVar4 != (uint *)0x0) {
        uVar9 = *puVar4;
      }
      pFVar7[1].Number = 0xffffffff;
      pFVar7[1].ComparisonIndex.Value = uVar9 | 0x80000000;
      pFVar7 = (FName *)&pFVar7[2].Number;
    }
  }
LAB_14757a33c:
  iVar10 = (this->ProfileEntries).ArrayNum;
  lVar5 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar3 = (this->ProfileEntries).AllocatorInstance.Data;
    iVar12 = 0;
    bVar13 = (*(uint *)(pFVar3 + 8) & 0x7fffffff) != 0x7fffffff;
    lVar8 = 0;
    iVar10 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar11 = iVar10 + 1;
      if (lVar8 < lVar5) {
        pFVar6 = pFVar3 + (lVar8 * 5 + 2) * 4;
        do {
          if (bVar13 != ((*(uint *)pFVar6 & 0x7fffffff) != 0x7fffffff)) break;
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          pFVar6 = pFVar6 + 0x14;
        } while (lVar8 < lVar5);
      }
      if (bVar13 != false) {
        if (iVar12 != iVar10) {
          memmove(pFVar3 + (longlong)iVar12 * 0x14,pFVar3 + (longlong)iVar10 * 0x14,
                  (longlong)(iVar11 - iVar10) * 0x14);
        }
        iVar12 = iVar12 + (iVar11 - iVar10);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < lVar5);
    (this->ProfileEntries).ArrayNum = iVar12;
  }
  return;
}

// StaticRegisterNativesUBlendProfile @ 14757acf0

void __cdecl UBlendProfile::StaticRegisterNativesUBlendProfile(void)

{
  return;
}

// UpdateBoneWeights @ 147581ea0

void __thiscall
UBlendProfile::UpdateBoneWeights
          (UBlendProfile *this,FBlendSampleData *param_1,FAlphaBlend *param_2,float param_3,
          float param_4,bool param_5)

{
  EBlendProfileMode EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  if (0 < (param_1->PerBoneBlendData).ArrayNum) {
    lVar5 = 0;
    do {
      EVar1 = this->Mode;
      fVar7 = GetEntryBlendScale(this,uVar6);
      fVar7 = CalculateBoneWeight(fVar7,EVar1,param_2,param_3,param_4,param_5);
      uVar4 = 0;
      if ((int)uVar6 < (param_1->PerBoneBlendData).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(float *)((param_1->PerBoneBlendData).AllocatorInstance.Data + lVar5) = fVar7;
      lVar5 = lVar5 + 4;
    } while ((int)uVar6 < (param_1->PerBoneBlendData).ArrayNum);
  }
  return;
}

