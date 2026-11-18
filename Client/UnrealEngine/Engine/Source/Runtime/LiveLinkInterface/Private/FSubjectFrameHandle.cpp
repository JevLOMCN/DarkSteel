// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 13

// StaticStruct @ 14cfabc70

UScriptStruct * __cdecl FSubjectFrameHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubjectFrameHandle,(UObject *)pUVar1,
                         L"SubjectFrameHandle");
  }
  return Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.OuterSingleton;
}

// ~FSubjectFrameHandle @ 14cfb6480

void __thiscall FSubjectFrameHandle::~FSubjectFrameHandle(FSubjectFrameHandle *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedFrame).SharedReferenceCount.ReferenceController);
  return;
}

// GetCurveValueByName @ 14cfb9500

bool __thiscall
FSubjectFrameHandle::GetCurveValueByName(FSubjectFrameHandle *this,FName param_1,float *param_2)

{
  longlong lVar1;
  FCachedSubjectFrame *this_00;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  float *pfVar5;
  
  this_00 = (this->CachedFrame).Object;
  if (this_00 != (FCachedSubjectFrame *)0x0) {
    if (this_00->bHaveCachedCurves == false) {
      FCachedSubjectFrame::CacheCurves(this_00);
    }
    uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (*(int *)&(this_00->CachedCurves).field_0x8 != *(int *)&(this_00->CachedCurves).field_0x34) {
      puVar4 = *(undefined1 **)&(this_00->CachedCurves).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this_00->CachedCurves).field_0x38;
      }
      iVar3 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this_00->CachedCurves).field_0x48 - 1U &
                                param_1.Number + uVar2) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *(longlong *)&this_00->CachedCurves + (longlong)iVar3 * 0x14;
          if (*(FName *)(*(longlong *)&this_00->CachedCurves + (longlong)iVar3 * 0x14) == param_1) {
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
  }
  return false;
}

// GetCurves @ 14cfb95f0

void __thiscall
FSubjectFrameHandle::GetCurves
          (FSubjectFrameHandle *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1)

{
  FCachedSubjectFrame *this_00;
  
  this_00 = (this->CachedFrame).Object;
  if (this_00 != (FCachedSubjectFrame *)0x0) {
    if (this_00->bHaveCachedCurves == false) {
      FCachedSubjectFrame::CacheCurves(this_00);
    }
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
              (param_1,&this_00->CachedCurves);
  }
  return;
}

// GetNumberOfTransforms @ 14cfba790

int __thiscall FSubjectFrameHandle::GetNumberOfTransforms(FSubjectFrameHandle *this)

{
  FCachedSubjectFrame *pFVar1;
  
  pFVar1 = (this->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    return (pFVar1->SourceAnimationFrameData).Transforms.ArrayNum;
  }
  return 0;
}

// GetRootTransform @ 14cfbbc00

void __thiscall
FSubjectFrameHandle::GetRootTransform(FSubjectFrameHandle *this,FLiveLinkTransform *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FCachedSubjectFrame *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = (this->CachedFrame).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->CachedFrame).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
  (param_1->CachedFrame).Object = pFVar2;
  (param_1->CachedFrame).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = (this->CachedFrame).Object;
  if (pFVar2 != (FCachedSubjectFrame *)0x0) {
    pFVar3 = (pFVar2->SourceSkeletonData).BoneParents.AllocatorInstance.Data;
    for (pFVar5 = pFVar3;
        pFVar5 != pFVar3 + (longlong)(pFVar2->SourceSkeletonData).BoneParents.ArrayNum * 4;
        pFVar5 = pFVar5 + 4) {
      if (*(int *)pFVar5 < 0) {
        param_1->TransformIndex = (int)((longlong)pFVar5 - (longlong)pFVar3 >> 2);
        return;
      }
    }
    param_1->TransformIndex = -1;
  }
  return;
}

// GetSourceAnimationFrameData @ 14cfbbcc0

FLiveLinkAnimationFrameData * __thiscall
FSubjectFrameHandle::GetSourceAnimationFrameData(FSubjectFrameHandle *this)

{
  FCachedSubjectFrame *pFVar1;
  FLiveLinkAnimationFrameData *pFVar2;
  
  pFVar1 = (this->CachedFrame).Object;
  pFVar2 = (FLiveLinkAnimationFrameData *)0x0;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    pFVar2 = &pFVar1->SourceAnimationFrameData;
  }
  return pFVar2;
}

// GetSourceSkeletonStaticData @ 14cfbbd20

FLiveLinkSkeletonStaticData * __thiscall
FSubjectFrameHandle::GetSourceSkeletonStaticData(FSubjectFrameHandle *this)

{
  FCachedSubjectFrame *pFVar1;
  FLiveLinkSkeletonStaticData *pFVar2;
  
  pFVar1 = (this->CachedFrame).Object;
  pFVar2 = (FLiveLinkSkeletonStaticData *)0x0;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    pFVar2 = &pFVar1->SourceSkeletonData;
  }
  return pFVar2;
}

// GetSubjectMetadata @ 14cfbc160

void __thiscall
FSubjectFrameHandle::GetSubjectMetadata(FSubjectFrameHandle *this,FSubjectMetadata *param_1)

{
  FCachedSubjectFrame *pFVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM4 [16];
  uint uStack_14;
  
  pFVar1 = (this->CachedFrame).Object;
  if (pFVar1 == (FCachedSubjectFrame *)0x0) {
    return;
  }
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)param_1,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&(pFVar1->SourceAnimationFrameData)._padding_);
  iVar3 = (int)(pFVar1->SourceAnimationFrameData)._padding_;
  plVar4 = &(pFVar1->SourceAnimationFrameData)._padding_;
  uVar6 = *(undefined4 *)plVar4;
  uVar7 = *(undefined4 *)((longlong)plVar4 + 4);
  fVar2 = (float)(int)*plVar4 /
          (float)*(int *)((longlong)&(pFVar1->SourceAnimationFrameData)._padding_ + 4);
  iVar8 = (int)ROUND(__real_bf000000 - (fVar2 + fVar2)) >> 1;
  iVar9 = -iVar8;
  if (iVar9 < 1) {
    uVar10 = 0;
    uVar13 = 0;
  }
  else {
    dVar16 = (double)iVar3;
    dVar14 = dVar16 / (double)(iVar8 * -0xe10);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar14;
    if (0.0 <= dVar14) {
      auVar17 = roundpd(in_XMM4,auVar17,1);
      dVar14 = auVar17._0_8_;
    }
    else {
      auVar17 = roundpd(in_XMM4,auVar17,2);
      dVar14 = auVar17._0_8_;
    }
    dVar15 = dVar16 / (double)(iVar8 * -0x3c);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar15;
    if (0.0 <= dVar15) {
      auVar17 = roundpd(auVar11,auVar11,1);
      dVar15 = auVar17._0_8_;
    }
    else {
      auVar17 = roundpd(auVar11,auVar11,2);
      dVar15 = auVar17._0_8_;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar16 / (double)iVar9;
    if (0.0 <= dVar16 / (double)iVar9) {
      auVar17 = roundpd(auVar12,auVar12,1);
      dVar16 = auVar17._0_8_;
    }
    else {
      auVar17 = roundpd(auVar12,auVar12,2);
      dVar16 = auVar17._0_8_;
    }
    uVar10 = CONCAT44((int)dVar15 % 0x3c,(int)dVar14);
    uVar13 = CONCAT44(iVar3 % iVar9,(int)dVar16 % 0x3c);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  lVar5 = (ulonglong)uStack_14 << 0x20;
  (param_1->SceneTimecode).Hours = (int)uVar10;
  (param_1->SceneTimecode).Minutes = (int)((ulonglong)uVar10 >> 0x20);
  (param_1->SceneTimecode).Seconds = (int)uVar13;
  (param_1->SceneTimecode).Frames = (int)((ulonglong)uVar13 >> 0x20);
  (param_1->SceneFramerate).Numerator = uVar6;
  (param_1->SceneFramerate).Denominator = uVar7;
  (param_1->SceneTimecode).Subframe = (float)(int)lVar5;
  (param_1->SceneTimecode).bDropFrameFormat = (bool)(char)((ulonglong)lVar5 >> 0x20);
  *(int3 *)&(param_1->SceneTimecode).field_0x15 = (int3)((ulonglong)lVar5 >> 0x28);
  return;
}

// GetTransformByIndex @ 14cfbc200

void __thiscall
FSubjectFrameHandle::GetTransformByIndex
          (FSubjectFrameHandle *this,int param_1,FLiveLinkTransform *param_2)

{
  FCachedSubjectFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = (this->CachedFrame).Object;
  pTVar2 = (this->CachedFrame).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->CachedFrame).SharedReferenceCount.ReferenceController;
  (param_2->CachedFrame).Object = pFVar1;
  (param_2->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar1 = (this->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    pTVar2 = (this->CachedFrame).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (param_2->CachedFrame).SharedReferenceCount.ReferenceController;
    (param_2->CachedFrame).Object = pFVar1;
    (param_2->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    param_2->TransformIndex = param_1;
  }
  return;
}

// GetTransformByName @ 14cfbc2d0

void __thiscall
FSubjectFrameHandle::GetTransformByName
          (FSubjectFrameHandle *this,FName param_1,FLiveLinkTransform *param_2)

{
  FCachedSubjectFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  FName *pFVar6;
  
  pFVar1 = (this->CachedFrame).Object;
  pTVar2 = (this->CachedFrame).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (param_2->CachedFrame).SharedReferenceCount.ReferenceController;
  (param_2->CachedFrame).Object = pFVar1;
  (param_2->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar1 = (this->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    pFVar3 = (FName *)(pFVar1->SourceSkeletonData).BoneNames.AllocatorInstance.Data;
    for (pFVar6 = pFVar3; pFVar6 != pFVar3 + (pFVar1->SourceSkeletonData).BoneNames.ArrayNum;
        pFVar6 = pFVar6 + 1) {
      if (*pFVar6 == param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar3 >> 3);
        goto LAB_14cfbc363;
      }
    }
    iVar5 = -1;
LAB_14cfbc363:
    pTVar2 = (this->CachedFrame).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (param_2->CachedFrame).SharedReferenceCount.ReferenceController;
    (param_2->CachedFrame).Object = pFVar1;
    (param_2->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    param_2->TransformIndex = iVar5;
  }
  return;
}

// GetTransformNames @ 14cfbc500

void __thiscall
FSubjectFrameHandle::GetTransformNames
          (FSubjectFrameHandle *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FCachedSubjectFrame *pFVar1;
  
  pFVar1 = (this->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (param_1,&(pFVar1->SourceSkeletonData).BoneNames);
    return;
  }
  return;
}

// SetCachedFrame @ 14cfbe1a0

void __thiscall
FSubjectFrameHandle::SetCachedFrame
          (FSubjectFrameHandle *this,TSharedPtr<FCachedSubjectFrame,1> *param_1)

{
  FCachedSubjectFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->CachedFrame).SharedReferenceCount.ReferenceController;
  (this->CachedFrame).Object = pFVar1;
  (this->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

