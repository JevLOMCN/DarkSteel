// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 18

// StaticStruct @ 14cfb1280

UScriptStruct * __cdecl FCachedSubjectFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedSubjectFrame.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FCachedSubjectFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedSubjectFrame,(UObject *)pUVar1,
                         L"CachedSubjectFrame");
  }
  return Z_Registration_Info_UScriptStruct_FCachedSubjectFrame.OuterSingleton;
}

// FCachedSubjectFrame @ 14cfb4d20

FCachedSubjectFrame * __thiscall
FCachedSubjectFrame::FCachedSubjectFrame
          (FCachedSubjectFrame *this,FLiveLinkSkeletonStaticData *param_1,
          FLiveLinkAnimationFrameData *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  int *piVar1;
  int *piVar2;
  TArray<TTuple<bool,UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_> *this_02
  ;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FCachedSubjectFrame *pFVar9;
  FScriptContainerElement *_Dst;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  this_00 = &(this->SourceSkeletonData).BoneNames;
  this_01 = &(this->SourceSkeletonData).BoneParents;
  this->_padding_ = (longlong)&___7FCachedSubjectFrame__6B_;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SourceSkeletonData).BoneNames.ArrayNum = 0;
  (this->SourceSkeletonData).BoneNames.ArrayMax = 0;
  (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SourceSkeletonData).BoneParents.ArrayNum = 0;
  (this->SourceSkeletonData).BoneParents.ArrayMax = 0;
  (this->SourceSkeletonData)._padding_ = 0;
  (this->SourceSkeletonData)._padding_ = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)&this->SourceAnimationFrameData);
  (this->SourceAnimationFrameData).Transforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceAnimationFrameData).Transforms.ArrayNum = 0;
  (this->SourceAnimationFrameData).Transforms.ArrayMax = 0;
  *(undefined8 *)&this->CachedCurves = 0;
  pTVar3 = &this->CachedRootSpaceTransforms;
  *(undefined8 *)&(this->CachedCurves).field_0x8 = 0;
  this_02 = &this->CachedChildTransformIndices;
  *(undefined8 *)&(this->CachedCurves).field_0x20 = 0;
  piVar1 = &(this->CachedRootSpaceTransforms).ArrayNum;
  *piVar1 = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedRootSpaceTransforms).ArrayMax = 0;
  (this_02->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedChildTransformIndices).ArrayNum = 0;
  (this->CachedChildTransformIndices).ArrayMax = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x28 = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedCurves).field_0x34 = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedCurves).field_0x40 = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x48 = 0;
  this->bHaveCachedCurves = false;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->SourceSkeletonData,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)param_1);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this_00,&param_1->BoneNames);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_01,&param_1->BoneParents);
  FLiveLinkBaseFrameData::operator=
            ((FLiveLinkBaseFrameData *)&this->SourceAnimationFrameData,
             (FLiveLinkBaseFrameData *)param_2);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->SourceAnimationFrameData).Transforms,&param_2->Transforms);
  uVar8 = (param_2->Transforms).ArrayNum;
  if ((param_1->BoneNames).ArrayNum != uVar8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStaticData->BoneNames.Num() == NumTransforms",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\Roles\\LiveLinkAnimationBlueprintStructs.cpp"
                       ,0x19,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FCachedSubjectFrame *)(*pcVar4)();
      return pFVar9;
    }
  }
  if ((param_1->BoneParents).ArrayNum != uVar8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStaticData->BoneParents.Num() == NumTransforms",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\Roles\\LiveLinkAnimationBlueprintStructs.cpp"
                       ,0x1a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FCachedSubjectFrame *)(*pcVar4)();
      return pFVar9;
    }
  }
  if ((int)param_1->_padding_ != (int)param_2->_padding_) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStaticData->PropertyNames.Num() == InAnimData->PropertyValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\Roles\\LiveLinkAnimationBlueprintStructs.cpp"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FCachedSubjectFrame *)(*pcVar4)();
      return pFVar9;
    }
  }
  iVar7 = *piVar1;
  if (iVar7 < (int)uVar8) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,0x10,uVar8 - iVar7,&pTVar3->AllocatorInstance,piVar1,
                       &(this->CachedRootSpaceTransforms).ArrayMax);
    DefaultConstructItems<TTuple<bool,UE::Math::TTransform<double>_>,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x70,uVar8 - iVar7);
  }
  else {
    if ((int)uVar8 < 0) goto LAB_14cfb51a0;
    if ((int)uVar8 < iVar7) {
      uVar10 = iVar7 - uVar8;
      if ((int)(uVar10 | uVar8) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FCachedSubjectFrame *)(*pcVar4)();
          return pFVar9;
        }
      }
      if (uVar10 != 0) {
        _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x70;
        iVar7 = (*piVar1 - uVar10) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 0x70,(longlong)iVar7 * 0x70);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,&pTVar3->AllocatorInstance,*piVar1,
                   &(this->CachedRootSpaceTransforms).ArrayMax);
      }
    }
  }
  iVar7 = (this->CachedChildTransformIndices).ArrayNum;
  piVar2 = &(this->CachedChildTransformIndices).ArrayNum;
  if (iVar7 < (int)uVar8) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar8 - iVar7,&this_02->AllocatorInstance,piVar2,
                       &(this->CachedChildTransformIndices).ArrayMax);
    DefaultConstructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
              ((this_02->AllocatorInstance).Data + (longlong)iVar6 * 0x18,uVar8 - iVar7);
  }
  else {
    if ((int)uVar8 < 0) {
LAB_14cfb51a0:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar7) {
      uVar10 = iVar7 - uVar8;
      if ((int)(uVar10 | uVar8) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FCachedSubjectFrame *)(*pcVar4)();
          return pFVar9;
        }
      }
      if (uVar10 != 0) {
        TArray<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_02,uVar8,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this_02->AllocatorInstance,*piVar2,
                   &(this->CachedChildTransformIndices).ArrayMax);
      }
    }
  }
  uVar10 = 0;
  lVar11 = (longlong)(int)uVar8;
  if (0 < (int)uVar8) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FCachedSubjectFrame *)(*pcVar4)();
          return pFVar9;
        }
      }
      (this->CachedRootSpaceTransforms).AllocatorInstance.Data[lVar13] =
           (FScriptContainerElement)0x0;
      uVar8 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FCachedSubjectFrame *)(*pcVar4)();
          return pFVar9;
        }
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x70;
      (this_02->AllocatorInstance).Data[lVar12] = (FScriptContainerElement)0x0;
      lVar12 = lVar12 + 0x18;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// FCachedSubjectFrame @ 14cfb51b0

FCachedSubjectFrame * __thiscall FCachedSubjectFrame::FCachedSubjectFrame(FCachedSubjectFrame *this)

{
  this->_padding_ = (longlong)&___7FCachedSubjectFrame__6B_;
  (this->SourceSkeletonData)._padding_ = 0;
  (this->SourceSkeletonData)._padding_ = 0;
  (this->SourceSkeletonData).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceSkeletonData).BoneNames.ArrayNum = 0;
  (this->SourceSkeletonData).BoneNames.ArrayMax = 0;
  (this->SourceSkeletonData).BoneParents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceSkeletonData).BoneParents.ArrayNum = 0;
  (this->SourceSkeletonData).BoneParents.ArrayMax = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData
            ((FLiveLinkBaseFrameData *)&this->SourceAnimationFrameData);
  (this->SourceAnimationFrameData).Transforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceAnimationFrameData).Transforms.ArrayNum = 0;
  (this->SourceAnimationFrameData).Transforms.ArrayMax = 0;
  (this->CachedRootSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRootSpaceTransforms).ArrayNum = 0;
  (this->CachedRootSpaceTransforms).ArrayMax = 0;
  (this->CachedChildTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildTransformIndices).ArrayNum = 0;
  (this->CachedChildTransformIndices).ArrayMax = 0;
  *(undefined8 *)&this->CachedCurves = 0;
  *(undefined8 *)&(this->CachedCurves).field_0x8 = 0;
  *(undefined8 *)&(this->CachedCurves).field_0x20 = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x28 = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedCurves).field_0x34 = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedCurves).field_0x40 = 0;
  *(undefined4 *)&(this->CachedCurves).field_0x48 = 0;
  this->bHaveCachedCurves = false;
  return this;
}

// ~FCachedSubjectFrame @ 14cfb62e0

void __thiscall FCachedSubjectFrame::~FCachedSubjectFrame(FCachedSubjectFrame *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->CachedCurves).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedCurves).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedCurves);
  DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->CachedChildTransformIndices).AllocatorInstance.Data,
             (this->CachedChildTransformIndices).ArrayNum);
  pFVar2 = (this->CachedChildTransformIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CachedRootSpaceTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SourceAnimationFrameData).Transforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = (void *)(this->SourceAnimationFrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SourceAnimationFrameData)._padding_ = 0;
  pvVar1 = (void *)(this->SourceAnimationFrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SourceAnimationFrameData)._padding_);
  pFVar2 = (this->SourceSkeletonData).BoneParents.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SourceSkeletonData).BoneNames.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = (void *)(this->SourceSkeletonData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// CacheCurves @ 14cfb7b70

void __thiscall FCachedSubjectFrame::CacheCurves(FCachedSubjectFrame *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong local_28;
  longlong local_20;
  
  this->bHaveCachedCurves = false;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&this->CachedCurves);
  iVar1 = (int)(this->SourceSkeletonData)._padding_;
  if (iVar1 == (int)(this->SourceAnimationFrameData)._padding_) {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Reserve((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)&this->CachedCurves,iVar1);
    uVar6 = 0;
    if (0 < (int)(this->SourceSkeletonData)._padding_) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (int)(this->SourceAnimationFrameData)._padding_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (this->SourceAnimationFrameData)._padding_;
        uVar5 = 0;
        if ((int)uVar6 < (int)(this->SourceSkeletonData)._padding_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_28 = (this->SourceSkeletonData)._padding_ + (longlong)(int)uVar6 * 8;
        local_20 = lVar2 + (longlong)(int)uVar6 * 4;
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                  ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)&this->CachedCurves,
                   (TPairInitializer<FName_const_&,float_const_&> *)&stack0x00000008,
                   (bool *)&local_28);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)(this->SourceSkeletonData)._padding_);
    }
    this->bHaveCachedCurves = true;
  }
  return;
}

// GetChildTransformIndices @ 14cfb8fb0

void __thiscall
FCachedSubjectFrame::GetChildTransformIndices
          (FCachedSubjectFrame *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if ((-1 < param_1) && (param_1 < (this->SourceAnimationFrameData).Transforms.ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (this->CachedChildTransformIndices).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->CachedChildTransformIndices).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)param_1 * 0x18;
    if (pFVar2[(longlong)param_1 * 0x18] == (FScriptContainerElement)0x0) {
      iVar6 = (this->SourceSkeletonData).BoneParents.ArrayNum;
      uVar7 = 0;
      if (0 < iVar6) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar7 < iVar6) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((this->SourceSkeletonData).BoneParents.AllocatorInstance.Data + lVar8) ==
              param_1) {
            iVar6 = *(int *)(pFVar1 + 0x10);
            if (iVar6 == *(int *)(pFVar1 + 0x14)) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,(ForAnyElementType *)(pFVar1 + 8),(int *)(pFVar1 + 0x14));
            }
            *(int *)(pFVar1 + 0x10) = iVar6 + 1;
            *(uint *)(*(longlong *)(pFVar1 + 8) + (longlong)iVar6 * 4) = uVar7;
          }
          iVar6 = (this->SourceSkeletonData).BoneParents.ArrayNum;
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 4;
        } while ((int)uVar7 < iVar6);
      }
      *pFVar1 = (FScriptContainerElement)0x1;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar1 + 8));
  }
  return;
}

// GetCurveValueByName @ 14cfb9410

bool __thiscall
FCachedSubjectFrame::GetCurveValueByName(FCachedSubjectFrame *this,FName param_1,float *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  float *pfVar5;
  
  if (this->bHaveCachedCurves == false) {
    CacheCurves(this);
  }
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->CachedCurves).field_0x8 != *(int *)&(this->CachedCurves).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CachedCurves).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CachedCurves).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->CachedCurves).field_0x48 - 1U &
                              param_1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedCurves + (longlong)iVar3 * 0x14;
        if (*(FName *)(*(longlong *)&this->CachedCurves + (longlong)iVar3 * 0x14) == param_1) {
          pfVar5 = (float *)(lVar1 + 8);
          if (lVar1 == 0) {
            pfVar5 = (float *)0x0;
          }
          if (pfVar5 == (float *)0x0) {
            return false;
          }
          iVar3 = _finite((double)*pfVar5);
          if (iVar3 == 0) {
            return false;
          }
          *param_2 = *pfVar5;
          return true;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// GetNumberOfTransforms @ 14cfba780

int __thiscall FCachedSubjectFrame::GetNumberOfTransforms(FCachedSubjectFrame *this)

{
  return (this->SourceAnimationFrameData).Transforms.ArrayNum;
}

// GetParentTransformIndex @ 14cfba830

int __thiscall FCachedSubjectFrame::GetParentTransformIndex(FCachedSubjectFrame *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SourceAnimationFrameData).Transforms.ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SourceSkeletonData).BoneParents.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->SourceSkeletonData).BoneParents.AllocatorInstance.Data +
                   (longlong)param_1 * 4);
  }
  return -1;
}

// GetRootIndex @ 14cfbbbc0

int __thiscall FCachedSubjectFrame::GetRootIndex(FCachedSubjectFrame *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->SourceSkeletonData).BoneParents.AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->SourceSkeletonData).BoneParents.ArrayNum * 4) {
      return -1;
    }
    if (*(int *)pFVar2 < 0) break;
    pFVar2 = pFVar2 + 4;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 2);
}

// GetSubjectMetadata @ 14cfbbfc0

void __thiscall
FCachedSubjectFrame::GetSubjectMetadata(FCachedSubjectFrame *this,FSubjectMetadata *param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  uint uStack_14;
  
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)param_1,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&(this->SourceAnimationFrameData)._padding_);
  iVar2 = (int)(this->SourceAnimationFrameData)._padding_;
  plVar3 = &(this->SourceAnimationFrameData)._padding_;
  uVar5 = *(undefined4 *)plVar3;
  uVar6 = *(undefined4 *)((longlong)plVar3 + 4);
  fVar1 = (float)(int)*plVar3 /
          (float)*(int *)((longlong)&(this->SourceAnimationFrameData)._padding_ + 4);
  iVar7 = (int)ROUND(__real_bf000000 - (fVar1 + fVar1)) >> 1;
  iVar8 = -iVar7;
  if (iVar8 < 1) {
    uVar9 = 0;
    uVar12 = 0;
  }
  else {
    dVar15 = (double)iVar2;
    dVar13 = dVar15 / (double)(iVar7 * -0xe10);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar13;
    if (0.0 <= dVar13) {
      auVar16 = roundpd(in_XMM4,auVar16,1);
      dVar13 = auVar16._0_8_;
    }
    else {
      auVar16 = roundpd(in_XMM4,auVar16,2);
      dVar13 = auVar16._0_8_;
    }
    dVar14 = dVar15 / (double)(iVar7 * -0x3c);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar14;
    if (0.0 <= dVar14) {
      auVar16 = roundpd(auVar10,auVar10,1);
      dVar14 = auVar16._0_8_;
    }
    else {
      auVar16 = roundpd(auVar10,auVar10,2);
      dVar14 = auVar16._0_8_;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar15 / (double)iVar8;
    if (0.0 <= dVar15 / (double)iVar8) {
      auVar16 = roundpd(auVar11,auVar11,1);
      dVar15 = auVar16._0_8_;
    }
    else {
      auVar16 = roundpd(auVar11,auVar11,2);
      dVar15 = auVar16._0_8_;
    }
    uVar9 = CONCAT44((int)dVar14 % 0x3c,(int)dVar13);
    uVar12 = CONCAT44(iVar2 % iVar8,(int)dVar15 % 0x3c);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  lVar4 = (ulonglong)uStack_14 << 0x20;
  (param_1->SceneTimecode).Hours = (int)uVar9;
  (param_1->SceneTimecode).Minutes = (int)((ulonglong)uVar9 >> 0x20);
  (param_1->SceneTimecode).Seconds = (int)uVar12;
  (param_1->SceneTimecode).Frames = (int)((ulonglong)uVar12 >> 0x20);
  (param_1->SceneFramerate).Numerator = uVar5;
  (param_1->SceneFramerate).Denominator = uVar6;
  (param_1->SceneTimecode).Subframe = (float)(int)lVar4;
  (param_1->SceneTimecode).bDropFrameFormat = (bool)(char)((ulonglong)lVar4 >> 0x20);
  *(int3 *)&(param_1->SceneTimecode).field_0x15 = (int3)((ulonglong)lVar4 >> 0x28);
  return;
}

// GetTransformIndexFromName @ 14cfbc3e0

int __thiscall
FCachedSubjectFrame::GetTransformIndexFromName(FCachedSubjectFrame *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->SourceSkeletonData).BoneNames.AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (this->SourceSkeletonData).BoneNames.ArrayNum) {
      return -1;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
}

// GetTransformName @ 14cfbc420

void __thiscall
FCachedSubjectFrame::GetTransformName(FCachedSubjectFrame *this,int param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName local_res20;
  
  if ((-1 < param_1) && (param_1 < (this->SourceAnimationFrameData).Transforms.ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SourceSkeletonData).BoneNames.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_2 = *(FName *)((this->SourceSkeletonData).BoneNames.AllocatorInstance.Data +
                         (longlong)param_1 * 8);
    return;
  }
  ::FName::FName(&local_res20,L"None");
  *param_2 = local_res20;
  return;
}

// GetTransformNames @ 14cfbc4e0

void __thiscall
FCachedSubjectFrame::GetTransformNames
          (FCachedSubjectFrame *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (param_1,&(this->SourceSkeletonData).BoneNames);
  return;
}

// GetTransformParentSpace @ 14cfbc520

void __thiscall
FCachedSubjectFrame::GetTransformParentSpace
          (FCachedSubjectFrame *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((-1 < param_1) && (param_1 < (this->SourceAnimationFrameData).Transforms.ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->SourceAnimationFrameData).Transforms.ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    pFVar1 = (this->SourceAnimationFrameData).Transforms.AllocatorInstance.Data;
    lVar6 = (longlong)param_1 * 0x60;
    dVar3 = *(double *)(pFVar1 + lVar6 + 8);
    (param_2->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar6);
    (param_2->Rotation).XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(pFVar1 + lVar6 + 0x10 + 8);
    (param_2->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar6 + 0x10);
    (param_2->Rotation).ZW.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(pFVar1 + lVar6 + 0x20 + 8);
    (param_2->Translation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar6 + 0x20);
    (param_2->Translation).XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(pFVar1 + lVar6 + 0x30 + 8);
    (param_2->Translation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar6 + 0x30);
    (param_2->Translation).ZW.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(pFVar1 + lVar6 + 0x40 + 8);
    (param_2->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar6 + 0x40);
    (param_2->Scale3D).XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(pFVar1 + lVar6 + 0x50 + 8);
    (param_2->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar6 + 0x50);
    (param_2->Scale3D).ZW.m128d_f64[1] = dVar3;
  }
  return;
}

// GetTransformRootSpace @ 14cfbc760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCachedSubjectFrame::GetTransformRootSpace
          (FCachedSubjectFrame *this,int param_1,TTransform<double> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  lVar8 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->SourceAnimationFrameData).Transforms.ArrayNum)) {
    iVar1 = (this->CachedRootSpaceTransforms).ArrayNum;
    uVar9 = (uint)~param_1 >> 0x1f;
    uVar7 = 0;
    if (param_1 < iVar1) {
      uVar7 = uVar9;
    }
    if ((uVar7 == 0) &&
       (local_118 = lVar8, local_110 = (longlong)iVar1,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = (this->CachedRootSpaceTransforms).AllocatorInstance.Data + lVar8 * 0x70;
    if (*pFVar10 == (FScriptContainerElement)0x0) {
      iVar1 = (this->SourceSkeletonData).BoneParents.ArrayNum;
      uVar7 = 0;
      if (param_1 < iVar1) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (local_118 = lVar8, local_110 = (longlong)iVar1,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar1 = *(int *)((this->SourceSkeletonData).BoneParents.AllocatorInstance.Data + lVar8 * 4);
      iVar2 = (this->SourceAnimationFrameData).Transforms.ArrayNum;
      uVar7 = 0;
      if (param_1 < iVar2) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (local_118 = lVar8, local_110 = (longlong)iVar2,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->SourceAnimationFrameData).Transforms.AllocatorInstance.Data;
      local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      GetTransformRootSpace(this,iVar1,&local_a8);
      local_108.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_108.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_108.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_108.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_108.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_108.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_108,(TTransform<double> *)(pFVar3 + lVar8 * 0x60),&local_a8);
      (param_2->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
      *pFVar10 = (FScriptContainerElement)0x1;
      dVar5 = (param_2->Rotation).XY.m128d_f64[1];
      *(double *)(pFVar10 + 0x10) = (param_2->Rotation).XY.m128d_f64[0];
      *(double *)(pFVar10 + 0x18) = dVar5;
      dVar5 = (param_2->Rotation).ZW.m128d_f64[1];
      *(double *)(pFVar10 + 0x20) = (param_2->Rotation).ZW.m128d_f64[0];
      *(double *)(pFVar10 + 0x28) = dVar5;
      dVar5 = (param_2->Translation).XY.m128d_f64[1];
      *(double *)(pFVar10 + 0x30) = (param_2->Translation).XY.m128d_f64[0];
      *(double *)(pFVar10 + 0x38) = dVar5;
      dVar5 = (param_2->Translation).ZW.m128d_f64[1];
      *(double *)(pFVar10 + 0x40) = (param_2->Translation).ZW.m128d_f64[0];
      *(double *)(pFVar10 + 0x48) = dVar5;
      dVar5 = (param_2->Scale3D).XY.m128d_f64[1];
      *(double *)(pFVar10 + 0x50) = (param_2->Scale3D).XY.m128d_f64[0];
      *(double *)(pFVar10 + 0x58) = dVar5;
      dVar5 = (param_2->Scale3D).ZW.m128d_f64[1];
      *(double *)(pFVar10 + 0x60) = (param_2->Scale3D).ZW.m128d_f64[0];
      *(double *)(pFVar10 + 0x68) = dVar5;
    }
    else {
      dVar5 = *(double *)(pFVar10 + 0x18);
      (param_2->Rotation).XY.m128d_f64[0] = *(double *)(pFVar10 + 0x10);
      (param_2->Rotation).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar10 + 0x28);
      (param_2->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x20);
      (param_2->Rotation).ZW.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar10 + 0x38);
      (param_2->Translation).XY.m128d_f64[0] = *(double *)(pFVar10 + 0x30);
      (param_2->Translation).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar10 + 0x48);
      (param_2->Translation).ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x40);
      (param_2->Translation).ZW.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar10 + 0x58);
      (param_2->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar10 + 0x50);
      (param_2->Scale3D).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar10 + 0x68);
      (param_2->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x60);
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar5;
    }
  }
  return;
}

// IsValidTransformIndex @ 14cfbdfa0

bool __thiscall FCachedSubjectFrame::IsValidTransformIndex(FCachedSubjectFrame *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->SourceAnimationFrameData).Transforms.ArrayNum)) {
    return true;
  }
  return false;
}

// SetCurvesFromCache @ 14cfbe1f0

void __thiscall
FCachedSubjectFrame::SetCurvesFromCache
          (FCachedSubjectFrame *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1)

{
  if (this->bHaveCachedCurves == false) {
    CacheCurves(this);
  }
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
            (param_1,&this->CachedCurves);
  return;
}

