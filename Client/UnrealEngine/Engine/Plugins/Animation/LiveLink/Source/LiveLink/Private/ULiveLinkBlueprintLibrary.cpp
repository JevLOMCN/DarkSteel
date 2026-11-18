// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 82

// StaticClass @ 14cff48b0

UClass * __cdecl ULiveLinkBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBlueprintLibrary",
               &Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesULiveLinkBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULiveLinkBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton;
}

// ULiveLinkBlueprintLibrary @ 14d013430

ULiveLinkBlueprintLibrary * __thiscall
ULiveLinkBlueprintLibrary::ULiveLinkBlueprintLibrary
          (ULiveLinkBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkBlueprintLibrary__6B_;
  return this;
}

// ULiveLinkBlueprintLibrary @ 14d013460

ULiveLinkBlueprintLibrary * __thiscall
ULiveLinkBlueprintLibrary::ULiveLinkBlueprintLibrary
          (ULiveLinkBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkBlueprintLibrary__6B_;
  return this;
}

// ~ULiveLinkBlueprintLibrary @ 14d016eb0

void __thiscall
ULiveLinkBlueprintLibrary::~ULiveLinkBlueprintLibrary(ULiveLinkBlueprintLibrary *this)

{
  *(undefined ***)this = &___7ULiveLinkBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ChildCount @ 14d029580

int __cdecl ULiveLinkBlueprintLibrary::ChildCount(FLiveLinkTransform *param_1)

{
  FCachedSubjectFrame *this;
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_18;
  
  this = (param_1->CachedFrame).Object;
  if (this != (FCachedSubjectFrame *)0x0) {
    TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_18.ArrayNum = 0;
    TStack_18.ArrayMax = 0;
    FCachedSubjectFrame::GetChildTransformIndices(this,param_1->TransformIndex,&TStack_18);
    iVar1 = TStack_18.ArrayNum;
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
    return iVar1;
  }
  return 0;
}

// ComponentSpaceTransform @ 14d029b00

void __cdecl
ULiveLinkBlueprintLibrary::ComponentSpaceTransform
          (FLiveLinkTransform *param_1,TTransform<double> *param_2)

{
  FCachedSubjectFrame *this;
  
  this = (param_1->CachedFrame).Object;
  if (this != (FCachedSubjectFrame *)0x0) {
    FCachedSubjectFrame::GetTransformRootSpace(this,param_1->TransformIndex,param_2);
    return;
  }
  return;
}

// EvaluateLiveLinkFrame @ 14d03cbf0

bool __cdecl
ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame
          (FLiveLinkSubjectRepresentation *param_1,FLiveLinkBaseBlueprintData *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkBlueprintLibrary.cpp"
                     ,0x13b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// EvaluateLiveLinkFrameAtSceneTime @ 14d03cc30

bool __cdecl
ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime
          (FLiveLinkSubjectName param_1,TSubclassOf<ULiveLinkRole> param_2,FTimecode *param_3,
          FLiveLinkBaseBlueprintData *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkBlueprintLibrary.cpp"
                     ,0x150,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// EvaluateLiveLinkFrameAtWorldTimeOffset @ 14d03cc70

bool __cdecl
ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset
          (FLiveLinkSubjectName param_1,TSubclassOf<ULiveLinkRole> param_2,float param_3,
          FLiveLinkBaseBlueprintData *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkBlueprintLibrary.cpp"
                     ,0x149,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// EvaluateLiveLinkFrameWithSpecificRole @ 14d03ccb0

bool __cdecl
ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole
          (FLiveLinkSubjectName param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkBaseBlueprintData *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkBlueprintLibrary.cpp"
                     ,0x142,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// GetAnimationFrameData @ 14d048110

bool __cdecl
ULiveLinkBlueprintLibrary::GetAnimationFrameData
          (FSubjectFrameHandle *param_1,FLiveLinkAnimationFrameData *param_2)

{
  FLiveLinkAnimationFrameData *pFVar1;
  
  pFVar1 = FSubjectFrameHandle::GetSourceAnimationFrameData(param_1);
  if (pFVar1 != (FLiveLinkAnimationFrameData *)0x0) {
    FLiveLinkAnimationFrameData::operator=(param_2,pFVar1);
    return true;
  }
  return false;
}

// GetAnimationStaticData @ 14d048150

bool __cdecl
ULiveLinkBlueprintLibrary::GetAnimationStaticData
          (FSubjectFrameHandle *param_1,FLiveLinkSkeletonStaticData *param_2)

{
  FLiveLinkSkeletonStaticData *pFVar1;
  
  pFVar1 = FSubjectFrameHandle::GetSourceSkeletonStaticData(param_1);
  if (pFVar1 != (FLiveLinkSkeletonStaticData *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar1);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&param_2->BoneNames,&pFVar1->BoneNames);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&param_2->BoneParents,&pFVar1->BoneParents);
    return true;
  }
  return false;
}

// GetBasicData @ 14d048380

void __cdecl
ULiveLinkBlueprintLibrary::GetBasicData
          (FSubjectFrameHandle *param_1,FLiveLinkBasicBlueprintData *param_2)

{
  FLiveLinkSkeletonStaticData *pFVar1;
  FLiveLinkAnimationFrameData *pFVar2;
  
  pFVar1 = FSubjectFrameHandle::GetSourceSkeletonStaticData(param_1);
  if (pFVar1 != (FLiveLinkSkeletonStaticData *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(param_2->StaticData).PropertyNames,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar1);
  }
  pFVar2 = FSubjectFrameHandle::GetSourceAnimationFrameData(param_1);
  if (pFVar2 != (FLiveLinkAnimationFrameData *)0x0) {
    FLiveLinkBaseFrameData::operator=(&param_2->FrameData,(FLiveLinkBaseFrameData *)pFVar2);
  }
  return;
}

// GetChildren @ 14d04a100

void __cdecl
ULiveLinkBlueprintLibrary::GetChildren
          (FLiveLinkTransform *param_1,
          TArray<FLiveLinkTransform,TSizedDefaultAllocator<32>_> *param_2)

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
  undefined1 auStackX_10 [8];
  undefined4 uStackX_18;
  uint uStackX_20;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_70;
  undefined8 uStack_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  piVar1 = &param_2->ArrayMax;
  pFVar4 = (FLiveLinkTransform *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayMax < 0) {
    DestructItems<FLiveLinkTransform,int>(pFVar4,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FLiveLinkTransform,int>(pFVar4,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  pFVar5 = (param_1->CachedFrame).Object;
  if (pFVar5 != (FCachedSubjectFrame *)0x0) {
    TStack_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_70.ArrayNum = 0;
    TStack_70.ArrayMax = 0;
    FCachedSubjectFrame::GetChildTransformIndices(pFVar5,param_1->TransformIndex,&TStack_70);
    uVar12 = (ulonglong)TStack_70.ArrayNum;
    uStackX_20 = TStack_70.ArrayNum;
    pFVar2 = TStack_70.AllocatorInstance.Data + uVar12 * 4;
    uVar13 = uVar12;
    FVar14.Data = TStack_70.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != (int)uVar13) {
        auStackX_10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (FVar14.Data == pFVar2) break;
      uVar9 = param_2->ArrayNum;
      uStackX_18 = *(undefined4 *)FVar14.Data;
      if (uVar9 == *piVar1) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = uVar9 + 1;
      lVar15 = (longlong)(int)uVar9 * 0x20;
      DefaultConstructItems<FLiveLinkTransform,int>((param_2->AllocatorInstance).Data + lVar15,1);
      uVar10 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
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
      pFVar11 = (param_2->AllocatorInstance).Data;
      pTVar6 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
      pFVar5 = (param_1->CachedFrame).Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = pFVar11 + lVar15 + 8;
      uStack_60 = *(undefined8 *)pFVar3;
      pTStack_58 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
      pFVar11 = pFVar11 + lVar15 + 8;
      *(FCachedSubjectFrame **)pFVar11 = pFVar5;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      uVar10 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
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
      uVar13 = (ulonglong)uStackX_20;
      *(undefined4 *)((param_2->AllocatorInstance).Data + lVar15 + 0x18) = uStackX_18;
      uVar12 = TStack_70._8_8_ & 0xffffffff;
    }
    if (TStack_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
  }
  return;
}

// GetCurves @ 14d04a990

void __cdecl
ULiveLinkBlueprintLibrary::GetCurves
          (FSubjectFrameHandle *param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2)

{
  FCachedSubjectFrame *this;
  
  this = (param_1->CachedFrame).Object;
  if (this != (FCachedSubjectFrame *)0x0) {
    if (this->bHaveCachedCurves == false) {
      FCachedSubjectFrame::CacheCurves(this);
    }
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
              (param_2,&this->CachedCurves);
  }
  return;
}

// GetLiveLinkEnabledSubjectNames @ 14d04ea30

TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> * __cdecl
ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames
          (TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  void *local_28;
  ulonglong local_20;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pIVar9 = IModularFeatures::Get();
  iVar7 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar7) {
    lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,ILiveLinkClient::ModularFeatureName,0);
    plVar12 = (longlong *)(lVar10 + -8);
    if (lVar10 == 0) {
      plVar12 = (longlong *)0x0;
    }
    (**(code **)(*plVar12 + 0x100))(plVar12,&local_28,0,param_1);
    iVar7 = (int)local_20;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_20 & 0xffffffff);
    }
    __return_storage_ptr__->ArrayNum = 0;
    if (*piVar1 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar7,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar7 = (int)local_20;
    pFVar13 = (FScriptContainerElement *)((longlong)local_28 + 0x10);
    pFVar2 = (FScriptContainerElement *)((longlong)local_28 + (longlong)iVar7 * 0x18);
    while( true ) {
      if ((int)local_20 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FLiveLinkSubjectKey,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar13 + -0x10 == pFVar2) break;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar4 = *(undefined8 *)pFVar13;
      pFVar13 = pFVar13 + 0x18;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           uVar4;
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return __return_storage_ptr__;
}

// GetLiveLinkSubjectRole @ 14d04ec00

TSubclassOf<ULiveLinkRole> __cdecl
ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(FLiveLinkSubjectName param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (0 < iVar1) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0xd0))(plVar4,param_1.Name);
    return (TSubclassOf<ULiveLinkRole>)param_1.Name;
  }
  *(undefined8 *)param_1.Name = 0;
  return (TSubclassOf<ULiveLinkRole>)param_1.Name;
}

// GetLiveLinkSubjectState @ 14d04eca0

ELiveLinkSubjectState __cdecl
ULiveLinkBlueprintLibrary::GetLiveLinkSubjectState(FLiveLinkSubjectName param_1)

{
  ELiveLinkSubjectState EVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (iVar2 < 1) {
    return Unknown;
  }
  lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
  plVar5 = (longlong *)(lVar4 + -8);
  if (lVar4 == 0) {
    plVar5 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d04ed0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*plVar5 + 0x148))(plVar5,param_1.Name);
  return EVar1;
}

// GetLiveLinkSubjects @ 14d04ed20

TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> * __cdecl
ULiveLinkBlueprintLibrary::GetLiveLinkSubjects
          (TArray<FLiveLinkSubjectKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1,bool param_2)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (iVar1 < 1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x100))(plVar4,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// GetMetadata @ 14d0501d0

void __cdecl
ULiveLinkBlueprintLibrary::GetMetadata(FSubjectFrameHandle *param_1,FSubjectMetadata *param_2)

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
  
  pFVar1 = (param_1->CachedFrame).Object;
  if (pFVar1 == (FCachedSubjectFrame *)0x0) {
    return;
  }
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)param_2,
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
  (param_2->SceneTimecode).Hours = (int)uVar10;
  (param_2->SceneTimecode).Minutes = (int)((ulonglong)uVar10 >> 0x20);
  (param_2->SceneTimecode).Seconds = (int)uVar13;
  (param_2->SceneTimecode).Frames = (int)((ulonglong)uVar13 >> 0x20);
  (param_2->SceneFramerate).Numerator = uVar6;
  (param_2->SceneFramerate).Denominator = uVar7;
  (param_2->SceneTimecode).Subframe = (float)(int)lVar5;
  (param_2->SceneTimecode).bDropFrameFormat = (bool)(char)((ulonglong)lVar5 >> 0x20);
  *(int3 *)&(param_2->SceneTimecode).field_0x15 = (int3)((ulonglong)lVar5 >> 0x28);
  return;
}

// GetParent @ 14d0519a0

void __cdecl
ULiveLinkBlueprintLibrary::GetParent(FLiveLinkTransform *param_1,FLiveLinkTransform *param_2)

{
  FCachedSubjectFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  
  pFVar1 = (param_1->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    iVar4 = FCachedSubjectFrame::GetParentTransformIndex(pFVar1,param_1->TransformIndex);
    pFVar1 = (param_1->CachedFrame).Object;
    pTVar2 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
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
    param_2->TransformIndex = iVar4;
  }
  return;
}

// GetPrivateStaticClass @ 14d051fb0

UClass * __cdecl ULiveLinkBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBlueprintLibrary",
               &Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesULiveLinkBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULiveLinkBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBlueprintLibrary.InnerSingleton;
}

// GetPropertyValue @ 14d0530b0

bool __cdecl
ULiveLinkBlueprintLibrary::GetPropertyValue
          (FLiveLinkBasicBlueprintData *param_1,FName param_2,float *param_3)

{
  bool bVar1;
  
  bVar1 = FLiveLinkBaseStaticData::FindPropertyValue
                    (&param_1->StaticData,&param_1->FrameData,param_2,param_3);
  return bVar1;
}

// GetRootTransform @ 14d053a00

void __cdecl
ULiveLinkBlueprintLibrary::GetRootTransform
          (FSubjectFrameHandle *param_1,FLiveLinkTransform *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FCachedSubjectFrame *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->CachedFrame).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (param_2->CachedFrame).SharedReferenceCount.ReferenceController;
  (param_2->CachedFrame).Object = pFVar2;
  (param_2->CachedFrame).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = (param_1->CachedFrame).Object;
  if (pFVar2 != (FCachedSubjectFrame *)0x0) {
    pFVar3 = (pFVar2->SourceSkeletonData).BoneParents.AllocatorInstance.Data;
    for (pFVar5 = pFVar3;
        pFVar5 != pFVar3 + (longlong)(pFVar2->SourceSkeletonData).BoneParents.ArrayNum * 4;
        pFVar5 = pFVar5 + 4) {
      if (*(int *)pFVar5 < 0) {
        param_2->TransformIndex = (int)((longlong)pFVar5 - (longlong)pFVar3 >> 2);
        return;
      }
    }
    param_2->TransformIndex = -1;
  }
  return;
}

// GetSourceMachineName @ 14d0556b0

FText * __cdecl
ULiveLinkBlueprintLibrary::GetSourceMachineName
          (FText *__return_storage_ptr__,FLiveLinkSourceHandle *param_1)

{
  ILiveLinkSource *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res10 [24];
  
  pIVar1 = (param_1->SourcePointer).Object;
  if (pIVar1 != (ILiveLinkSource *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetSourceStatus @ 14d055f70

FText * __cdecl
ULiveLinkBlueprintLibrary::GetSourceStatus
          (FText *__return_storage_ptr__,FLiveLinkSourceHandle *param_1)

{
  ILiveLinkSource *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res10 [24];
  
  pIVar1 = (param_1->SourcePointer).Object;
  if (pIVar1 != (ILiveLinkSource *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetSourceType @ 14d056370

FText * __cdecl
ULiveLinkBlueprintLibrary::GetSourceType
          (FText *__return_storage_ptr__,FLiveLinkSourceHandle *param_1)

{
  ILiveLinkSource *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res10 [24];
  
  pIVar1 = (param_1->SourcePointer).Object;
  if (pIVar1 != (ILiveLinkSource *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetSourceTypeFromGuid @ 14d0563e0

FText * __cdecl
ULiveLinkBlueprintLibrary::GetSourceTypeFromGuid(FText *__return_storage_ptr__,FGuid *param_1)

{
  ITextData *pIVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  FText *pFVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
  if (0 < iVar2) {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    local_18 = param_1->A;
    uStack_14 = param_1->B;
    uStack_10 = param_1->C;
    uStack_c = param_1->D;
    plVar6 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x50))(local_18,__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetSpecificLiveLinkSubjectRole @ 14d056550

TSubclassOf<ULiveLinkRole> __cdecl
ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey *param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (0 < iVar1) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0xd8))(plVar4,param_1);
    return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
  }
  (param_1->Source).A = 0;
  (param_1->Source).B = 0;
  return (TSubclassOf<ULiveLinkRole>)(TObjectPtr<UClass>)param_1;
}

// GetTransformByIndex @ 14d0574e0

void __cdecl
ULiveLinkBlueprintLibrary::GetTransformByIndex
          (FSubjectFrameHandle *param_1,int param_2,FLiveLinkTransform *param_3)

{
  FCachedSubjectFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = (param_1->CachedFrame).Object;
  pTVar2 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_3->CachedFrame).SharedReferenceCount.ReferenceController;
  (param_3->CachedFrame).Object = pFVar1;
  (param_3->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar1 = (param_1->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    pTVar2 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (param_3->CachedFrame).SharedReferenceCount.ReferenceController;
    (param_3->CachedFrame).Object = pFVar1;
    (param_3->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    param_3->TransformIndex = param_2;
  }
  return;
}

// GetTransformByName @ 14d0574f0

void __cdecl
ULiveLinkBlueprintLibrary::GetTransformByName
          (FSubjectFrameHandle *param_1,FName param_2,FLiveLinkTransform *param_3)

{
  FCachedSubjectFrame *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  FName *pFVar6;
  
  pFVar1 = (param_1->CachedFrame).Object;
  pTVar2 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (param_3->CachedFrame).SharedReferenceCount.ReferenceController;
  (param_3->CachedFrame).Object = pFVar1;
  (param_3->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar1 = (param_1->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    pFVar3 = (FName *)(pFVar1->SourceSkeletonData).BoneNames.AllocatorInstance.Data;
    for (pFVar6 = pFVar3; pFVar6 != pFVar3 + (pFVar1->SourceSkeletonData).BoneNames.ArrayNum;
        pFVar6 = pFVar6 + 1) {
      if (*pFVar6 == param_2) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar3 >> 3);
        goto LAB_14cfbc363;
      }
    }
    iVar5 = -1;
LAB_14cfbc363:
    pTVar2 = (param_1->CachedFrame).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (param_3->CachedFrame).SharedReferenceCount.ReferenceController;
    (param_3->CachedFrame).Object = pFVar1;
    (param_3->CachedFrame).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    param_3->TransformIndex = iVar5;
  }
  return;
}

// HasParent @ 14d059f90

bool __cdecl ULiveLinkBlueprintLibrary::HasParent(FLiveLinkTransform *param_1)

{
  FCachedSubjectFrame *this;
  int iVar1;
  
  this = (param_1->CachedFrame).Object;
  if (this != (FCachedSubjectFrame *)0x0) {
    iVar1 = FCachedSubjectFrame::GetParentTransformIndex(this,param_1->TransformIndex);
    return (bool)((byte)((uint)iVar1 >> 0x1f) ^ 1);
  }
  return false;
}

// IsLiveLinkSubjectEnabled @ 14d05f820

bool __cdecl ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(FLiveLinkSubjectName param_1)

{
  undefined1 uVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar2) {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d05f881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar5 + 0x118))(plVar5,param_1.Name);
    return (bool)uVar1;
  }
  return false;
}

// IsSourceStillValid @ 14d0604f0

bool __cdecl ULiveLinkBlueprintLibrary::IsSourceStillValid(FLiveLinkSourceHandle *param_1)

{
  ILiveLinkSource *pIVar1;
  char cVar2;
  
  pIVar1 = (param_1->SourcePointer).Object;
  if (pIVar1 != (ILiveLinkSource *)0x0) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x28))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsSpecificLiveLinkSubjectEnabled @ 14d060520

bool __cdecl
ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled
          (FLiveLinkSubjectKey *param_1,bool param_2)

{
  undefined1 uVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar2) {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    uVar1 = (**(code **)(*plVar5 + 0x120))(plVar5,param_1,param_2);
    return (bool)uVar1;
  }
  return false;
}

// NumberOfTransforms @ 14d062d50

int __cdecl ULiveLinkBlueprintLibrary::NumberOfTransforms(FSubjectFrameHandle *param_1)

{
  FCachedSubjectFrame *pFVar1;
  
  pFVar1 = (param_1->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    return (pFVar1->SourceAnimationFrameData).Transforms.ArrayNum;
  }
  return 0;
}

// ParentBoneSpaceTransform @ 14d06c750

void __cdecl
ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform
          (FLiveLinkTransform *param_1,TTransform<double> *param_2)

{
  uint uVar1;
  FCachedSubjectFrame *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  pFVar2 = (param_1->CachedFrame).Object;
  if (pFVar2 != (FCachedSubjectFrame *)0x0) {
    uVar1 = param_1->TransformIndex;
    *&(param_2->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_2->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_2->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_2->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
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
      (param_2->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar8);
      (param_2->Rotation).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x10 + 8);
      (param_2->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x10);
      (param_2->Rotation).ZW.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x20 + 8);
      (param_2->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x20);
      (param_2->Translation).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x30 + 8);
      (param_2->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x30);
      (param_2->Translation).ZW.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x40 + 8);
      (param_2->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x40);
      (param_2->Scale3D).XY.m128d_f64[1] = dVar5;
      dVar5 = *(double *)(pFVar3 + lVar8 + 0x50 + 8);
      (param_2->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar8 + 0x50);
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar5;
    }
  }
  return;
}

// PauseSubject @ 14d06c780

void __cdecl ULiveLinkBlueprintLibrary::PauseSubject(FLiveLinkSubjectName param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar1) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0xa8))(plVar4,param_1.Name);
  }
  return;
}

// RemoveSource @ 14d079e60

bool __cdecl ULiveLinkBlueprintLibrary::RemoveSource(FLiveLinkSourceHandle *param_1)

{
  code *pcVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  ILiveLinkSource *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((param_1->SourcePointer).Object != (ILiveLinkSource *)0x0) {
    pIVar3 = IModularFeatures::Get();
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
    if (0 < iVar2) {
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
      plVar5 = (longlong *)(lVar4 + -8);
      if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
      pcVar1 = *(code **)(*plVar5 + 0x28);
      local_18 = (param_1->SourcePointer).Object;
      local_10 = (param_1->SourcePointer).SharedReferenceCount.ReferenceController;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(plVar5,&local_18);
      return true;
    }
  }
  return false;
}

// SetLiveLinkSubjectEnabled @ 14d07e9a0

void __cdecl
ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey *param_1,bool param_2)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar1) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x128))(plVar4,param_1,param_2);
  }
  return;
}

// StaticRegisterNativesULiveLinkBlueprintLibrary @ 14d080680

void __cdecl ULiveLinkBlueprintLibrary::StaticRegisterNativesULiveLinkBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x26;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransformName @ 14d083530

void __cdecl ULiveLinkBlueprintLibrary::TransformName(FLiveLinkTransform *param_1,FName *param_2)

{
  uint uVar1;
  FCachedSubjectFrame *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FStackX_8;
  
  pFVar2 = (param_1->CachedFrame).Object;
  if (pFVar2 != (FCachedSubjectFrame *)0x0) {
    uVar1 = param_1->TransformIndex;
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
      *param_2 = *(FName *)((pFVar2->SourceSkeletonData).BoneNames.AllocatorInstance.Data +
                           (longlong)(int)uVar1 * 8);
      return;
    }
    ::FName::FName(&FStackX_8,L"None");
    *param_2 = FStackX_8;
  }
  return;
}

// TransformNames @ 14d083540

void __cdecl
ULiveLinkBlueprintLibrary::TransformNames
          (FSubjectFrameHandle *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FCachedSubjectFrame *pFVar1;
  
  pFVar1 = (param_1->CachedFrame).Object;
  if (pFVar1 != (FCachedSubjectFrame *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (param_2,&(pFVar1->SourceSkeletonData).BoneNames);
    return;
  }
  return;
}

// UnpauseSubject @ 14d085d20

void __cdecl ULiveLinkBlueprintLibrary::UnpauseSubject(FLiveLinkSubjectName param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar1) {
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0xb0))(plVar4,param_1.Name);
  }
  return;
}

// execChildCount @ 14d08be80

void __cdecl
ULiveLinkBlueprintLibrary::execChildCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FLiveLinkTransform *this;
  FLiveLinkTransform local_28;
  
  FLiveLinkTransform::FLiveLinkTransform(&local_28);
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
  this = &local_28;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    this = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FLiveLinkTransform::GetChildCount(this);
  *(int *)param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execComponentSpaceTransform @ 14d08bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkBlueprintLibrary::execComponentSpaceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FLiveLinkTransform *pFVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TTransform<double> *pTVar13;
  FLiveLinkTransform *this;
  undefined1 auStack_b8 [32];
  FLiveLinkTransform local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FLiveLinkTransform::FLiveLinkTransform(&local_98);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar1 = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_98;
  if (pFVar1 != (FLiveLinkTransform *)0x0) {
    this = pFVar1;
  }
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar12;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar13 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar13 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLiveLinkTransform::GetTransformRootSpace(this,pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execEvaluateLiveLinkFrame @ 14d08c390

void __cdecl
ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  UObject *pUVar2;
  UStruct *pUVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  UClass *pUVar10;
  UStruct *pUVar11;
  FText *pFVar12;
  IModularFeatures *pIVar13;
  longlong lVar14;
  UClass *pUVar15;
  undefined8 uVar16;
  longlong *plVar17;
  FProperty *pFVar18;
  FProperty *pFVar19;
  uchar *local_res10;
  undefined1 *local_res18;
  undefined1 local_res20 [8];
  longlong local_158;
  UClass *local_150;
  undefined1 local_148 [8];
  UClass *local_140;
  FBlueprintExceptionInfo local_138;
  FBlueprintExceptionInfo local_120;
  FBlueprintExceptionInfo local_108;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FStructOnScope local_c0;
  FStructOnScope local_98;
  FStructOnScope local_70;
  
  pFVar18 = (FProperty *)0x0;
  local_158 = 0;
  local_150 = (UClass *)0x0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar19 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar19->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar19);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar19 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar19->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar19);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pUVar15 = local_150;
  lVar5 = local_158;
  pFVar19 = param_2->MostRecentProperty;
  puVar1 = param_2->MostRecentPropertyAddress;
  if ((pFVar19 == (FProperty *)0x0) || ((*(uint *)(pFVar19->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    pFVar19 = pFVar18;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = puVar1;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_150 != (UClass *)0x0) goto LAB_14d08c4a6;
LAB_14d08c85f:
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_d0,L"EvaluateLiveLinkFrame",L"MissingRoleInput",
                         L"Failed to resolve the subject. Be sure the subject name and role are valid."
                        );
    local_108.EventType = AccessViolation;
    local_108.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
    if (local_108.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_108.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_108.Description.field0_0x0.TypedValue.TextData.Reference,local_148);
    }
    local_108.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
    if ((local_108.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_108);
    uVar16 = local_108.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  else {
    if (local_150 == (UClass *)0x0) goto LAB_14d08c85f;
    UE::GC::MarkAsReachable((UObject *)local_150);
LAB_14d08c4a6:
    pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar10 == (UClass *)0x0) goto LAB_14d08c85f;
    iVar9 = (int)pUVar10->_padding_;
    if (((int)pUVar15->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((!bVar6) || (lVar5 == 0)) goto LAB_14d08c85f;
    if ((pFVar19 != (FProperty *)0x0) && (puVar1 != (uchar *)0x0)) {
      pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      if (pUVar10 == (UClass *)0x0) {
LAB_14d08c52a:
        pUVar10 = (UClass *)0x0;
      }
      else {
        iVar9 = (int)pUVar10->_padding_;
        if (((int)pUVar15->_padding_ < iVar9) ||
           ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar9 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pUVar10 = pUVar15;
        if (!bVar6) goto LAB_14d08c52a;
      }
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar10);
      }
      pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UObject *)0x0) goto LAB_14d08c909;
      pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      iVar9 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar10->_padding_)) goto LAB_14d08c909;
      pUVar3 = (UStruct *)pFVar19[1]._padding_;
      pUVar11 = (UStruct *)(**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2);
      if (pUVar3 != pUVar11) {
        if (pUVar11 != (UStruct *)0x0) {
          iVar9 = (int)pUVar11->_padding_;
          if (((int)pUVar3->_padding_ < iVar9) ||
             ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar9 * 8) !=
              &pUVar11->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (bVar6 = FStructUtils::TheSameLayout(pUVar3,pUVar11,false), bVar6))
          goto LAB_14d08c678;
        }
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_f0,L"EvaluateLiveLinkFrame",L"IncompatibleProperty",
                             L"Incompatible output blueprint data; the role blueprint\'s data type is not the same as the return type."
                            );
        local_138.EventType = AccessViolation;
        local_138.Description.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
        if (local_138.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_138.Description.field0_0x0.TypedValue.TextData.Reference
                      + 8))(local_138.Description.field0_0x0.TypedValue.TextData.Reference,
                            &local_res10);
        }
        local_138.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
        if ((local_138.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
        }
        FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_138);
        uVar16 = local_138.Description.field0_0x0.TypedValue.TextData.Reference;
        goto LAB_14d08c8fe;
      }
LAB_14d08c678:
      FStructOnScope::FStructOnScope(&local_c0,pUVar3,local_res10);
      pIVar13 = IModularFeatures::Get();
      iVar9 = (**(code **)((longlong)*pIVar13 + 0x18))(pIVar13,ILiveLinkClient::ModularFeatureName);
      if (0 < iVar9) {
        lVar14 = (**(code **)((longlong)*pIVar13 + 0x20))
                           (pIVar13,ILiveLinkClient::ModularFeatureName,0);
        plVar17 = (longlong *)(lVar14 + -8);
        if (lVar14 == 0) {
          plVar17 = (longlong *)0x0;
        }
        FStructOnScope::FStructOnScope(&local_98);
        FStructOnScope::FStructOnScope(&local_70);
        local_140 = pUVar15;
        pcVar4 = *(code **)(*plVar17 + 0x198);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        cVar7 = (*pcVar4)(plVar17,lVar5,&local_140,&local_98);
        bVar8 = 0;
        if (cVar7 != '\0') {
          if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar15);
          }
          pUVar2 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar2 == (UObject *)0x0) {
LAB_14d08c75a:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result && Result->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                               ,0x93,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            pUVar15 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
            iVar9 = (int)pUVar15->_padding_;
            if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar15->_padding_)) goto LAB_14d08c75a;
          }
          bVar8 = (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,&local_98,&local_c0);
        }
        pFVar18 = (FProperty *)(ulonglong)bVar8;
        FStructOnScope::~FStructOnScope(&local_70);
        FStructOnScope::~FStructOnScope(&local_98);
      }
      FStructOnScope::~FStructOnScope(&local_c0);
      goto LAB_14d08c909;
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_e0,L"EvaluateLiveLinkFrame",L"MissingOutputProperty",
                         L"Failed to resolve the output parameter for EvaluateLiveLinkFrame.");
    local_120.EventType = AccessViolation;
    local_120.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
    if (local_120.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_120.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_120.Description.field0_0x0.TypedValue.TextData.Reference,local_res20);
    }
    local_120.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
    if ((local_120.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_120);
    uVar16 = local_120.Description.field0_0x0.TypedValue.TextData.Reference;
  }
LAB_14d08c8fe:
  pFVar18 = (FProperty *)0x0;
  if ((ITextData *)uVar16 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar16 + 0x10))();
  }
LAB_14d08c909:
  *local_res18 = (char)pFVar18;
  return;
}

// execEvaluateLiveLinkFrameAtSceneTime @ 14d08c930

void __cdecl
ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrameAtSceneTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FStructProperty *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  double dVar14;
  FName local_res10;
  void *local_res18;
  UClass *local_res20;
  FQualifiedFrameTime local_a0;
  FLiveLinkSubjectRepresentation local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  char local_6c;
  
  iVar5 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18 = param_3;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FClassProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_70 = 0.0;
  local_80 = 0;
  uStack_78 = 0;
  local_6c = '\0';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar8 = (FStructProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar8 == (FStructProperty *)0x0) || ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0x14 & 1) == 0)
     ) {
    pFVar8 = (FStructProperty *)0x0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a0.Rate = FApp::GetTimecodeFrameRate();
  fVar3 = (float)*(int *)local_a0.Rate / (float)*(int *)((longlong)local_a0.Rate + 4);
  iVar10 = (int)ROUND(__real_bf000000 - (fVar3 + fVar3)) >> 1;
  iVar11 = -iVar10;
  if (0 < iVar11) {
    iVar7 = (int)uStack_78 + uStack_78._4_4_ / iVar11;
    iVar9 = local_80._4_4_ + iVar7 / 0x3c;
    iVar5 = (int)local_80 + iVar9 / 0x3c;
    iVar9 = iVar9 % 0x3c;
    if (local_6c == '\0') {
      iVar5 = iVar5 * iVar10 * -0xe10;
    }
    else {
      iVar12 = 4;
      if (iVar11 < 0x1f) {
        iVar12 = 2;
      }
      iVar6 = iVar5 * 0x3c + iVar9;
      dVar14 = (double)iVar6 * __real_3fb999999999999a;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar14;
      if (0.0 <= dVar14) {
        auVar13 = roundpd(auVar13,auVar13,1);
        dVar14 = auVar13._0_8_;
      }
      else {
        auVar13 = roundpd(auVar13,auVar13,2);
        dVar14 = auVar13._0_8_;
      }
      iVar5 = iVar5 * iVar10 * -0xe10 - (iVar6 - (int)dVar14) * iVar12;
    }
    iVar5 = (iVar7 % 0x3c) * iVar11 + iVar9 * iVar10 * -0x3c + uStack_78._4_4_ % iVar11 + iVar5;
    param_3 = local_res18;
  }
  local_a0.Time.SubFrame = local_70;
  if (::FFrameTime::MaxSubframe <= local_70) {
    local_a0.Time.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_a0.Time.SubFrame <= 0.0) {
    local_a0.Time.SubFrame = 0.0;
  }
  local_a0.Rate = *(FFrameRate *)local_a0.Rate;
  local_a0.Time.FrameNumber.Value = iVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_90.Subject.Name = local_res10;
  local_90.Role.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  bVar4 = ::EvaluateLiveLinkFrame::Generic_Evaluate
                    ((ULiveLinkBlueprintLibrary *)param_1,param_2,pFVar8,&local_90,SceneTime,0.0,
                     &local_a0,puVar2);
  *(bool *)param_3 = bVar4;
  return;
}

// execEvaluateLiveLinkFrameAtWorldTimeOffset @ 14d08cc70

void __cdecl
ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrameAtWorldTimeOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  double dVar3;
  bool bVar4;
  FStructProperty *pFVar5;
  float local_res10 [2];
  FName local_res18;
  UClass *local_res20;
  FQualifiedFrameTime local_58;
  FLiveLinkSubjectRepresentation local_48 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FClassProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar5 = (FStructProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar5 == (FStructProperty *)0x0) || ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x14 & 1) == 0)
     ) {
    pFVar5 = (FStructProperty *)0x0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58.Time.FrameNumber.Value = 0;
  local_58.Time.SubFrame = 0.0;
  local_58.Rate.Numerator = 0x18;
  local_58.Rate.Denominator = 1;
  dVar3 = (double)local_res10[0] + (double)FApp::CurrentTime;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_48[0].Subject.Name = local_res18;
  local_48[0].Role.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  bVar4 = ::EvaluateLiveLinkFrame::Generic_Evaluate
                    ((ULiveLinkBlueprintLibrary *)param_1,param_2,pFVar5,local_48,WorldTime,dVar3,
                     &local_58,puVar2);
  *(bool *)param_3 = bVar4;
  return;
}

// execEvaluateLiveLinkFrameWithSpecificRole @ 14d08cea0

void __cdecl
ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrameWithSpecificRole
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  bool bVar3;
  FStructProperty *pFVar4;
  FName local_res10;
  UClass *local_res18;
  FQualifiedFrameTime local_48;
  FLiveLinkSubjectRepresentation local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FClassProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar4 = (FStructProperty *)param_2->MostRecentProperty;
  puVar2 = param_2->MostRecentPropertyAddress;
  if ((pFVar4 == (FStructProperty *)0x0) || ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x14 & 1) == 0)
     ) {
    pFVar4 = (FStructProperty *)0x0;
  }
  local_48.Time.FrameNumber.Value = 0;
  local_48.Time.SubFrame = 0.0;
  local_48.Rate.Numerator = 0x18;
  local_48.Rate.Denominator = 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_38.Subject.Name = local_res10;
  local_38.Role.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>)local_res18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  bVar3 = ::EvaluateLiveLinkFrame::Generic_Evaluate
                    ((ULiveLinkBlueprintLibrary *)param_1,param_2,pFVar4,&local_38,Snapshot,0.0,
                     &local_48,puVar2);
  *(bool *)param_3 = bVar3;
  return;
}

// execGetAnimationFrameData @ 14d08d070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkBlueprintLibrary::execGetAnimationFrameData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLiveLinkAnimationFrameData *pFVar2;
  FSubjectFrameHandle *this;
  FLiveLinkAnimationFrameData *this_00;
  undefined1 auStack_118 [32];
  FSubjectFrameHandle local_f8;
  undefined1 local_d8 [80];
  void *local_88;
  undefined4 local_80;
  ForAnyElementType local_68;
  ForAnyElementType local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_f8.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_f8.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  this = &local_f8;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)local_d8);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  this_00 = (FLiveLinkAnimationFrameData *)local_d8;
  if ((FLiveLinkAnimationFrameData *)param_2->MostRecentPropertyAddress !=
      (FLiveLinkAnimationFrameData *)0x0) {
    this_00 = (FLiveLinkAnimationFrameData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSubjectFrameHandle::GetSourceAnimationFrameData(this);
  if (pFVar2 != (FLiveLinkAnimationFrameData *)0x0) {
    FLiveLinkAnimationFrameData::operator=(this_00,pFVar2);
  }
  *(bool *)param_3 = pFVar2 != (FLiveLinkAnimationFrameData *)0x0;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 0x10));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAnimationStaticData @ 14d08d220

void __cdecl
ULiveLinkBlueprintLibrary::execGetAnimationStaticData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLiveLinkSkeletonStaticData *pFVar2;
  FSubjectFrameHandle *this;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FSubjectFrameHandle local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_40;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_58._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_58.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  this = &local_58;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  this_00 = &local_40;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSubjectFrameHandle::GetSourceSkeletonStaticData(this);
  if (pFVar2 != (FLiveLinkSkeletonStaticData *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (this_00,(TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar2);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this_00 + 1,&pFVar2->BoneNames);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(this_00 + 2),&pFVar2->BoneParents);
  }
  *(bool *)param_3 = pFVar2 != (FLiveLinkSkeletonStaticData *)0x0;
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetBasicData @ 14d08d710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkBlueprintLibrary::execGetBasicData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLiveLinkSkeletonStaticData *pFVar2;
  FLiveLinkAnimationFrameData *pFVar3;
  FSubjectFrameHandle *this;
  undefined ***pppuVar4;
  undefined1 auStack_118 [32];
  FSubjectFrameHandle local_f8;
  undefined **local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [80];
  void *local_70;
  undefined4 local_68;
  ForAnyElementType local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  local_f8.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_f8.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_d0 = (void *)0x0;
  local_c8 = 0;
  this = &local_f8;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  local_d8 = &___7FLiveLinkBasicBlueprintData__6B_;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)local_c0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pppuVar4 = &local_d8;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar4 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSubjectFrameHandle::GetSourceSkeletonStaticData(this);
  if (pFVar2 != (FLiveLinkSkeletonStaticData *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pppuVar4 + 1),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar2);
  }
  pFVar3 = FSubjectFrameHandle::GetSourceAnimationFrameData(this);
  if (pFVar3 != (FLiveLinkAnimationFrameData *)0x0) {
    FLiveLinkBaseFrameData::operator=
              ((FLiveLinkBaseFrameData *)(pppuVar4 + 3),(FLiveLinkBaseFrameData *)pFVar3);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c0 + 0x10));
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetChildren @ 14d08d8d0

void __cdecl
ULiveLinkBlueprintLibrary::execGetChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FLiveLinkTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  FLiveLinkTransform *this;
  TArray<FLiveLinkTransform,TSizedDefaultAllocator<32>_> local_38;
  FLiveLinkTransform local_28;
  
  FLiveLinkTransform::FLiveLinkTransform(&local_28);
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
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this = &local_28;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    this = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
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
  pTVar2 = &local_38;
  if ((TArray<FLiveLinkTransform,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FLiveLinkTransform,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FLiveLinkTransform,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLiveLinkTransform::GetChildren(this,pTVar2);
  DestructItems<FLiveLinkTransform,int>
            ((FLiveLinkTransform *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FLiveLinkTransform *)local_38.AllocatorInstance.Data != (FLiveLinkTransform *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetCurves @ 14d08d9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkBlueprintLibrary::execGetCurves(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar3;
  FSubjectFrameHandle *this;
  undefined1 auStackY_b8 [32];
  FSubjectFrameHandle local_88;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  local_88.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_88.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
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
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  this = &local_88;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pTVar3 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
           local_68;
  if ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
      param_2->MostRecentPropertyAddress !=
      (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0) {
    pTVar3 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSubjectFrameHandle::GetCurves(this,pTVar3);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetLiveLinkEnabledSubjectNames @ 14d08dbc0

void __cdecl
ULiveLinkBlueprintLibrary::execGetLiveLinkEnabledSubjectNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FLiveLinkSubjectName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetLiveLinkEnabledSubjectNames(&local_18,local_res10[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetLiveLinkSubjectRole @ 14d08dc90

void __cdecl
ULiveLinkBlueprintLibrary::execGetLiveLinkSubjectRole
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_res10;
  UObject *local_res18 [2];
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,ILiveLinkClient::ModularFeatureName);
  if (iVar3 < 1) {
    local_res18[0] = (UObject *)0x0;
  }
  else {
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,ILiveLinkClient::ModularFeatureName,0);
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0xd0))(plVar6,local_res18,uVar2);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
    *(UObject **)param_3 = local_res18[0];
    return;
  }
  *(UObject **)param_3 = local_res18[0];
  return;
}

// execGetLiveLinkSubjectState @ 14d08dda0

void __cdecl
ULiveLinkBlueprintLibrary::execGetLiveLinkSubjectState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,ILiveLinkClient::ModularFeatureName);
  if (iVar4 < 1) {
    *(undefined1 *)param_3 = 5;
  }
  else {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,ILiveLinkClient::ModularFeatureName,0);
    plVar7 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    uVar3 = (**(code **)(*plVar7 + 0x148))(plVar7,uVar2);
    *(undefined1 *)param_3 = uVar3;
  }
  return;
}

// execGetLiveLinkSubjects @ 14d08de80

void __cdecl
ULiveLinkBlueprintLibrary::execGetLiveLinkSubjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [2];
  int local_res18 [2];
  void *local_28;
  undefined8 local_20;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar6 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar7 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (iVar2 < 1) {
    local_20 = 0;
    local_28 = (void *)0x0;
  }
  else {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x100))(plVar5,&local_28,bVar6,bVar7);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_28;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    local_28 = (void *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetMetadata @ 14d08e010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkBlueprintLibrary::execGetMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FSubjectMetadata *pFVar3;
  FSubjectFrameHandle *this;
  undefined1 auStackY_d8 [32];
  FSubjectFrameHandle local_a8;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  FTimecode local_38;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a8._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  local_a8.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_a8.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
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
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  this = &local_a8;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38.Hours = 0;
  local_38.Minutes = 0;
  local_38.Seconds = 0;
  local_38.Frames = 0;
  local_38.Subframe = 0.0;
  local_38.bDropFrameFormat = false;
  local_20 = 60000;
  local_1c = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  pFVar3 = (FSubjectMetadata *)local_88;
  if ((FSubjectMetadata *)param_2->MostRecentPropertyAddress != (FSubjectMetadata *)0x0) {
    pFVar3 = (FSubjectMetadata *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSubjectFrameHandle::GetSubjectMetadata(this,pFVar3);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetParent @ 14d08e210

void __cdecl
ULiveLinkBlueprintLibrary::execGetParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLiveLinkTransform *pFVar2;
  FLiveLinkTransform *this;
  FLiveLinkTransform local_48;
  FLiveLinkTransform local_28;
  
  FLiveLinkTransform::FLiveLinkTransform(&local_28);
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
  this = &local_28;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    this = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
  FLiveLinkTransform::FLiveLinkTransform(&local_48);
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
  pFVar2 = &local_48;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    pFVar2 = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLiveLinkTransform::GetParent(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.CachedFrame.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetPropertyValue @ 14d08e320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkBlueprintLibrary::execGetPropertyValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined ***pppuVar3;
  float *pfVar4;
  undefined1 auStack_118 [32];
  float local_f8 [2];
  FName local_f0;
  undefined **local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [80];
  void *local_80;
  undefined4 local_78;
  ForAnyElementType local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e8 = &___7FLiveLinkBasicBlueprintData__6B_;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)local_d0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  pppuVar3 = &local_e8;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar3 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  pfVar4 = local_f8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FLiveLinkBaseStaticData::FindPropertyValue
                    ((FLiveLinkBaseStaticData *)(pppuVar3 + 1),
                     (FLiveLinkBaseFrameData *)(pppuVar3 + 3),local_f0,pfVar4);
  *(bool *)param_3 = bVar2;
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  local_78 = 0;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d0 + 0x10));
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// execGetRootTransform @ 14d08e4e0

void __cdecl
ULiveLinkBlueprintLibrary::execGetRootTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FLiveLinkTransform *pFVar2;
  FSubjectFrameHandle *this;
  FSubjectFrameHandle local_48;
  FLiveLinkTransform local_30;
  
  local_48._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  local_48.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_48.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
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
  this = &local_48;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  FLiveLinkTransform::FLiveLinkTransform(&local_30);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  pFVar2 = &local_30;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    pFVar2 = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSubjectFrameHandle::GetRootTransform(this,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.CachedFrame.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetSourceMachineName @ 14d08e600

void __cdecl
ULiveLinkBlueprintLibrary::execGetSourceMachineName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **ppuVar2;
  FText *pFVar3;
  undefined ***pppuVar4;
  undefined1 local_res10 [8];
  FText local_38;
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = &___7FLiveLinkSourceHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pppuVar4 = &local_28;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar4 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ppuVar2 = pppuVar4[1];
  if (ppuVar2 == (undefined **)0x0) {
    pFVar3 = FText::GetEmpty();
    local_38.TextData.Reference = (pFVar3->TextData).Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    local_38.Flags = pFVar3->Flags;
  }
  else {
    (**(code **)(*ppuVar2 + 0x40))(ppuVar2,&local_38);
  }
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetSourceStatus @ 14d08e710

void __cdecl
ULiveLinkBlueprintLibrary::execGetSourceStatus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **ppuVar2;
  FText *pFVar3;
  undefined ***pppuVar4;
  undefined1 local_res10 [8];
  FText local_38;
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = &___7FLiveLinkSourceHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pppuVar4 = &local_28;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar4 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ppuVar2 = pppuVar4[1];
  if (ppuVar2 == (undefined **)0x0) {
    pFVar3 = FText::GetEmpty();
    local_38.TextData.Reference = (pFVar3->TextData).Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    local_38.Flags = pFVar3->Flags;
  }
  else {
    (**(code **)(*ppuVar2 + 0x48))(ppuVar2,&local_38);
  }
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetSourceType @ 14d08e820

void __cdecl
ULiveLinkBlueprintLibrary::execGetSourceType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined **ppuVar2;
  FText *pFVar3;
  undefined ***pppuVar4;
  undefined1 local_res10 [8];
  FText local_38;
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = &___7FLiveLinkSourceHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pppuVar4 = &local_28;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar4 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ppuVar2 = pppuVar4[1];
  if (ppuVar2 == (undefined **)0x0) {
    pFVar3 = FText::GetEmpty();
    local_38.TextData.Reference = (pFVar3->TextData).Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    local_38.Flags = pFVar3->Flags;
  }
  else {
    (**(code **)(*ppuVar2 + 0x38))(ppuVar2,&local_38);
  }
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetSourceTypeFromGuid @ 14d08e930

void __cdecl
ULiveLinkBlueprintLibrary::execGetSourceTypeFromGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  FText *pFVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  FText local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_48 = 0;
  uStack_40 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  uVar3 = uStack_40;
  uVar2 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,ILiveLinkClient::ModularFeatureName);
  if (iVar4 < 1) {
    pFVar7 = FText::GetEmpty();
    local_38.TextData.Reference = (pFVar7->TextData).Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    local_38.Flags = pFVar7->Flags;
  }
  else {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,ILiveLinkClient::ModularFeatureName,0);
    local_28 = uVar2;
    uStack_20 = uVar3;
    plVar8 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x50))(plVar8,&local_38,&local_28);
  }
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execGetSpecificLiveLinkSubjectRole @ 14d08ea70

void __cdecl
ULiveLinkBlueprintLibrary::execGetSpecificLiveLinkSubjectRole
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  UObject *local_res10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_20 = uStack_40;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (iVar2 < 1) {
    local_res10 = (UObject *)0x0;
  }
  else {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0xd8))(plVar5,&local_res10,&local_28);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
    *(UObject **)param_3 = local_res10;
    return;
  }
  *(UObject **)param_3 = local_res10;
  return;
}

// execGetTransformByIndex @ 14d08ebb0

void __cdecl
ULiveLinkBlueprintLibrary::execGetTransformByIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSubjectFrameHandle *this;
  FLiveLinkTransform *pFVar2;
  int local_res10 [2];
  FSubjectFrameHandle local_48;
  FLiveLinkTransform local_30;
  
  local_48._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  local_48.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_48.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
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
  local_res10[0] = 0;
  this = &local_48;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FLiveLinkTransform::FLiveLinkTransform(&local_30);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  pFVar2 = &local_30;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    pFVar2 = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSubjectFrameHandle::GetTransformByIndex(this,local_res10[0],pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.CachedFrame.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execGetTransformByName @ 14d08ed10

void __cdecl
ULiveLinkBlueprintLibrary::execGetTransformByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSubjectFrameHandle *this;
  FLiveLinkTransform *pFVar2;
  FName local_res10;
  FSubjectFrameHandle local_48;
  FLiveLinkTransform local_30;
  
  local_48._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  local_48.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_48.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
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
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  this = &local_48;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FLiveLinkTransform::FLiveLinkTransform(&local_30);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  pFVar2 = &local_30;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    pFVar2 = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSubjectFrameHandle::GetTransformByName(this,local_res10,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.CachedFrame.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execHasParent @ 14d08ee70

void __cdecl
ULiveLinkBlueprintLibrary::execHasParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FLiveLinkTransform *this;
  FLiveLinkTransform local_28;
  
  FLiveLinkTransform::FLiveLinkTransform(&local_28);
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
  this = &local_28;
  if ((FLiveLinkTransform *)param_2->MostRecentPropertyAddress != (FLiveLinkTransform *)0x0) {
    this = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FLiveLinkTransform::HasParent(this);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execIsLiveLinkSubjectEnabled @ 14d08ef40

void __cdecl
ULiveLinkBlueprintLibrary::execIsLiveLinkSubjectEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,ILiveLinkClient::ModularFeatureName);
  if (iVar4 < 1) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,ILiveLinkClient::ModularFeatureName,0);
    plVar7 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    uVar3 = (**(code **)(*plVar7 + 0x118))(plVar7,uVar2);
    *(undefined1 *)param_3 = uVar3;
  }
  return;
}

// execIsSourceStillValid @ 14d08f030

void __cdecl
ULiveLinkBlueprintLibrary::execIsSourceStillValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = &___7FLiveLinkSourceHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pppuVar4 = &local_28;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar4 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pppuVar4[1] != (undefined **)0x0) {
    cVar2 = (**(code **)(*pppuVar4[1] + 0x28))();
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_14d08f0d4;
    }
  }
  uVar3 = 0;
LAB_14d08f0d4:
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execIsSpecificLiveLinkSubjectEnabled @ 14d08f100

void __cdecl
ULiveLinkBlueprintLibrary::execIsSpecificLiveLinkSubjectEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  int local_res10 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  local_28 = local_48;
  uStack_20 = uStack_40;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,ILiveLinkClient::ModularFeatureName);
  if (iVar3 < 1) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,ILiveLinkClient::ModularFeatureName,0);
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar6 + 0x120))(plVar6,&local_28,bVar7);
    *(undefined1 *)param_3 = uVar2;
  }
  return;
}

// execNumberOfTransforms @ 14d08f250

void __cdecl
ULiveLinkBlueprintLibrary::execNumberOfTransforms(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FSubjectFrameHandle *this;
  FSubjectFrameHandle local_28;
  
  local_28._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_28.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FSubjectFrameHandle::GetNumberOfTransforms(this);
  *(int *)param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execParentBoneSpaceTransform @ 14d08f310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULiveLinkBlueprintLibrary::execParentBoneSpaceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FLiveLinkTransform *pFVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TTransform<double> *pTVar13;
  FLiveLinkTransform *this;
  undefined1 auStack_b8 [32];
  FLiveLinkTransform local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FLiveLinkTransform::FLiveLinkTransform(&local_98);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  pFVar1 = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_98;
  if (pFVar1 != (FLiveLinkTransform *)0x0) {
    this = pFVar1;
  }
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar12;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar13 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar13 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLiveLinkTransform::GetTransformParentSpace(this,pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execPauseSubject @ 14d08f480

void __cdecl
ULiveLinkBlueprintLibrary::execPauseSubject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar3) {
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,ILiveLinkClient::ModularFeatureName,0);
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0xa8))(plVar6,uVar2);
  }
  return;
}

// execRemoveSource @ 14d08f550

void __cdecl
ULiveLinkBlueprintLibrary::execRemoveSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  undefined **local_38;
  undefined **local_30;
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28 = &___7FLiveLinkSourceHandle__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_20 = 0;
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pppuVar8 = &local_28;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar8 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pppuVar8[1] != (undefined **)0x0) {
    pIVar5 = IModularFeatures::Get();
    iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,ILiveLinkClient::ModularFeatureName);
    if (0 < iVar4) {
      lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,ILiveLinkClient::ModularFeatureName,0);
      plVar7 = (longlong *)(lVar6 + -8);
      if (lVar6 == 0) {
        plVar7 = (longlong *)0x0;
      }
      pcVar2 = *(code **)(*plVar7 + 0x28);
      local_38 = pppuVar8[1];
      local_30 = pppuVar8[2];
      if (local_30 != (undefined **)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
        UNLOCK();
      }
      (*pcVar2)(plVar7,&local_38);
      uVar3 = 1;
      goto LAB_14d08f65a;
    }
  }
  uVar3 = 0;
LAB_14d08f65a:
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execSetLiveLinkSubjectEnabled @ 14d08f950

void __cdecl
ULiveLinkBlueprintLibrary::execSetLiveLinkSubjectEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int local_res10 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar6 = local_res10[0] != 0;
  local_28 = local_48;
  uStack_20 = uStack_40;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar2) {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x128))(plVar5,&local_28,bVar6);
  }
  return;
}

// execTransformName @ 14d08fa90

void __cdecl
ULiveLinkBlueprintLibrary::execTransformName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FLiveLinkTransform *pFVar1;
  FProperty *pFVar2;
  FName *pFVar3;
  FLiveLinkTransform *this;
  FName local_res10;
  FLiveLinkTransform local_28;
  
  FLiveLinkTransform::FLiveLinkTransform(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FLiveLinkTransform *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_28;
  if (pFVar1 != (FLiveLinkTransform *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLiveLinkTransform::GetName(this,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execTransformNames @ 14d08fb90

void __cdecl
ULiveLinkBlueprintLibrary::execTransformNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FSubjectFrameHandle *this;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  FSubjectFrameHandle local_28;
  
  local_28._padding_ = (longlong)&___7FSubjectFrameHandle__6B_;
  local_28.CachedFrame.Object = (FCachedSubjectFrame *)0x0;
  local_28.CachedFrame.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
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
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this = &local_28;
  if ((FSubjectFrameHandle *)param_2->MostRecentPropertyAddress != (FSubjectFrameHandle *)0x0) {
    this = (FSubjectFrameHandle *)param_2->MostRecentPropertyAddress;
  }
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
  pTVar2 = &local_38;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSubjectFrameHandle::GetTransformNames(this,pTVar2);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.CachedFrame.SharedReferenceCount.ReferenceController);
  return;
}

// execUnpauseSubject @ 14d08fcb0

void __cdecl
ULiveLinkBlueprintLibrary::execUnpauseSubject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar3) {
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,ILiveLinkClient::ModularFeatureName,0);
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0xb0))(plVar6,uVar2);
  }
  return;
}

