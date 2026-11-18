// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 13

// StaticStruct @ 14cfabac0

UScriptStruct * __cdecl FLiveLinkTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransform.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransform,(UObject *)pUVar1,
                         L"LiveLinkTransform");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkTransform.OuterSingleton;
}

// FLiveLinkTransform @ 14cfb5610

FLiveLinkTransform * __thiscall FLiveLinkTransform::FLiveLinkTransform(FLiveLinkTransform *this)

{
  this->TransformIndex = -1;
  this->_padding_ = (longlong)&___7FLiveLinkTransform__6B_;
  (this->CachedFrame).Object = (FCachedSubjectFrame *)0x0;
  (this->CachedFrame).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FLiveLinkTransform @ 14cfb6470

void __thiscall FLiveLinkTransform::~FLiveLinkTransform(FLiveLinkTransform *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedFrame).SharedReferenceCount.ReferenceController);
  return;
}

// GetChildCount @ 14cfb8f50

int __thiscall FLiveLinkTransform::GetChildCount(FLiveLinkTransform *this)

{
  FCachedSubjectFrame *this_00;
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = (this->CachedFrame).Object;
  if (this_00 != (FCachedSubjectFrame *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FCachedSubjectFrame::GetChildTransformIndices(this_00,this->TransformIndex,&local_18);
    iVar1 = local_18.ArrayNum;
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    return iVar1;
  }
  return 0;
}

// GetChildren @ 14cfb9160

void __thiscall
FLiveLinkTransform::GetChildren
          (FLiveLinkTransform *this,TArray<FLiveLinkTransform,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FLiveLinkTransform *pFVar4;
  FCachedSubjectFrame *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  uint local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  piVar1 = &param_1->ArrayMax;
  pFVar4 = (FLiveLinkTransform *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FLiveLinkTransform,int>(pFVar4,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FLiveLinkTransform,int>(pFVar4,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  pFVar5 = (this->CachedFrame).Object;
  if (pFVar5 != (FCachedSubjectFrame *)0x0) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    FCachedSubjectFrame::GetChildTransformIndices(pFVar5,this->TransformIndex,&local_70);
    uVar12 = (ulonglong)local_70.ArrayNum;
    local_res20 = local_70.ArrayNum;
    pFVar2 = local_70.AllocatorInstance.Data + uVar12 * 4;
    uVar13 = uVar12;
    FVar14.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != (int)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar14.Data == pFVar2) break;
      uVar9 = param_1->ArrayNum;
      local_res18 = *(undefined4 *)FVar14.Data;
      if (uVar9 == *piVar1) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = uVar9 + 1;
      lVar15 = (longlong)(int)uVar9 * 0x20;
      DefaultConstructItems<FLiveLinkTransform,int>((param_1->AllocatorInstance).Data + lVar15,1);
      uVar10 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      pTVar6 = (this->CachedFrame).SharedReferenceCount.ReferenceController;
      pFVar5 = (this->CachedFrame).Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = pFVar11 + lVar15 + 8;
      local_60 = *(undefined8 *)pFVar3;
      pTStack_58 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
      pFVar11 = pFVar11 + lVar15 + 8;
      *(FCachedSubjectFrame **)pFVar11 = pFVar5;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      uVar10 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar14.Data = FVar14.Data + 4;
      uVar13 = (ulonglong)local_res20;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar15 + 0x18) = local_res18;
      uVar12 = local_70._8_8_ & 0xffffffff;
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return;
}

// GetName @ 14cfba6c0

void __thiscall FLiveLinkTransform::GetName(FLiveLinkTransform *this,FName *param_1)

{
  uint uVar1;
  FCachedSubjectFrame *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName local_res8;
  
  pFVar2 = (this->CachedFrame).Object;
  if (pFVar2 != (FCachedSubjectFrame *)0x0) {
    uVar1 = this->TransformIndex;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar2->SourceAnimationFrameData).Transforms.ArrayNum))
    {
      uVar5 = 0;
      if ((int)uVar1 < (pFVar2->SourceSkeletonData).BoneNames.ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
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
      *param_1 = *(FName *)((pFVar2->SourceSkeletonData).BoneNames.AllocatorInstance.Data +
                           (longlong)(int)uVar1 * 8);
      return;
    }
    ::FName::FName(&local_res8,L"None");
    *param_1 = local_res8;
  }
  return;
}

// GetParent @ 14cfba7b0

void __thiscall FLiveLinkTransform::GetParent(FLiveLinkTransform *this,FLiveLinkTransform *param_1)

{
  FCachedSubjectFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  
  pFVar1 = (this->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    iVar4 = FCachedSubjectFrame::GetParentTransformIndex(pFVar1,this->TransformIndex);
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
    pTVar3 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
    (param_1->CachedFrame).Object = pFVar1;
    (param_1->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    param_1->TransformIndex = iVar4;
  }
  return;
}

// GetTransformIndex @ 14cfbc3d0

int __thiscall FLiveLinkTransform::GetTransformIndex(FLiveLinkTransform *this)

{
  return this->TransformIndex;
}

// GetTransformParentSpace @ 14cfbc640

void __thiscall
FLiveLinkTransform::GetTransformParentSpace(FLiveLinkTransform *this,TTransform<double> *param_1)

{
  uint uVar1;
  FCachedSubjectFrame *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  pFVar2 = (this->CachedFrame).Object;
  if (pFVar2 != (FCachedSubjectFrame *)0x0) {
    uVar1 = this->TransformIndex;
    *&(param_1->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_1->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_1->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_1->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar2->SourceAnimationFrameData).Transforms.ArrayNum))
    {
      uVar7 = 0;
      if ((int)uVar1 < (pFVar2->SourceAnimationFrameData).Transforms.ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pFVar2->SourceAnimationFrameData).Transforms.AllocatorInstance.Data;
      lVar8 = (longlong)(int)uVar1 * 0x60;
      dVar5 = *(double *)(pFVar3 + lVar8 + 8);
      (param_1->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar8);
      (param_1->Rotation).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x10 + 8);
      (param_1->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x10);
      (param_1->Rotation).ZW.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x20 + 8);
      (param_1->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x20);
      (param_1->Translation).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x30 + 8);
      (param_1->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x30);
      (param_1->Translation).ZW.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x40 + 8);
      (param_1->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x40);
      (param_1->Scale3D).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x50 + 8);
      (param_1->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x50);
      (param_1->Scale3D).ZW.m128d_f64[1] = dVar5;
    }
  }
  return;
}

// GetTransformRootSpace @ 14cfbcac0

void __thiscall
FLiveLinkTransform::GetTransformRootSpace(FLiveLinkTransform *this,TTransform<double> *param_1)

{
  FCachedSubjectFrame *this_00;
  
  this_00 = (this->CachedFrame).Object;
  if (this_00 != (FCachedSubjectFrame *)0x0) {
    FCachedSubjectFrame::GetTransformRootSpace(this_00,this->TransformIndex,param_1);
    return;
  }
  return;
}

// HasParent @ 14cfbcb80

bool __thiscall FLiveLinkTransform::HasParent(FLiveLinkTransform *this)

{
  FCachedSubjectFrame *this_00;
  int iVar1;
  
  this_00 = (this->CachedFrame).Object;
  if (this_00 != (FCachedSubjectFrame *)0x0) {
    iVar1 = FCachedSubjectFrame::GetParentTransformIndex(this_00,this->TransformIndex);
    return (bool)((byte)((uint)iVar1 >> 0x1f) ^ 1);
  }
  return false;
}

// SetCachedFrame @ 14cfbe150

void __thiscall
FLiveLinkTransform::SetCachedFrame
          (FLiveLinkTransform *this,TSharedPtr<FCachedSubjectFrame,1> *param_1)

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

// SetTransformIndex @ 14cfbe240

void __thiscall FLiveLinkTransform::SetTransformIndex(FLiveLinkTransform *this,int param_1)

{
  this->TransformIndex = param_1;
  return;
}

