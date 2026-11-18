// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 19

// StaticStruct @ 14d0972b0

UScriptStruct * __cdecl FMovieSceneLiveLinkSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneLiveLinkSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.OuterSingleton;
}

// FMovieSceneLiveLinkSectionTemplate @ 14d09e0e0

FMovieSceneLiveLinkSectionTemplate * __thiscall
FMovieSceneLiveLinkSectionTemplate::FMovieSceneLiveLinkSectionTemplate
          (FMovieSceneLiveLinkSectionTemplate *this,FMovieSceneLiveLinkSectionTemplate *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FLiveLinkSubSectionData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this,
             (FMovieScenePropertySectionTemplate *)param_1);
  this->_padding_ = (longlong)&___7FMovieSceneLiveLinkSectionTemplate__6B_;
  FLiveLinkSubjectPreset::FLiveLinkSubjectPreset(&this->SubjectPreset,&param_1->SubjectPreset);
  pTVar1 = &this->ChannelMask;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChannelMask).ArrayMax;
  iVar4 = (param_1->ChannelMask).ArrayNum;
  pFVar5 = (param_1->ChannelMask).AllocatorInstance.Data;
  (this->ChannelMask).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
  }
  pTVar3 = &this->SubSectionsData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SubSectionsData).ArrayMax;
  iVar4 = (param_1->SubSectionsData).ArrayNum;
  pFVar5 = (param_1->SubSectionsData).AllocatorInstance.Data;
  (this->SubSectionsData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FLiveLinkSubSectionData,FLiveLinkSubSectionData,int>
              ((pTVar3->AllocatorInstance).Data,(FLiveLinkSubSectionData *)pFVar5,iVar4);
  }
  this->bMustDoInterpolation = param_1->bMustDoInterpolation;
  this->bIsSectionUsable = param_1->bIsSectionUsable;
  (this->PropertyHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyHandlers).ArrayNum = 0;
  (this->PropertyHandlers).ArrayMax = 0;
  (this->StaticData).Object = (param_1->StaticData).Object;
  pTVar6 = (param_1->StaticData).SharedReferenceCount.ReferenceController;
  (this->StaticData).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  InitializePropertyHandlers(this);
  return this;
}

// FMovieSceneLiveLinkSectionTemplate @ 14d09e240

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneLiveLinkSectionTemplate * __thiscall
FMovieSceneLiveLinkSectionTemplate::FMovieSceneLiveLinkSectionTemplate
          (FMovieSceneLiveLinkSectionTemplate *this,UMovieSceneLiveLinkSection *param_1,
          UMovieScenePropertyTrack *param_2)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FLiveLinkSubSectionData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FString *pFVar12;
  FMovieSceneLiveLinkSectionTemplate *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_58;
  FString local_48;
  
  local_res10 = (param_2->PropertyBinding).PropertyPath;
  pFVar12 = ::FName::ToString(&local_res10,&local_48);
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this,(param_2->PropertyBinding).PropertyName,
             pFVar12);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FMovieSceneLiveLinkSectionTemplate__6B_;
  FLiveLinkSubjectPreset::FLiveLinkSubjectPreset(&this->SubjectPreset,&param_1->SubjectPreset);
  pTVar1 = &this->ChannelMask;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChannelMask).ArrayMax;
  iVar4 = (param_1->ChannelMask).ArrayNum;
  pFVar5 = (param_1->ChannelMask).AllocatorInstance.Data;
  (this->ChannelMask).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
  }
  (this->PropertyHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar3 = &this->SubSectionsData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SubSectionsData).ArrayNum = 0;
  (this->SubSectionsData).ArrayMax = 0;
  (this->PropertyHandlers).ArrayNum = 0;
  (this->PropertyHandlers).ArrayMax = 0;
  (this->StaticData).Object = (param_1->StaticData).Object;
  pTVar6 = (param_1->StaticData).SharedReferenceCount.ReferenceController;
  (this->StaticData).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar15 = (param_1->SubSections).AllocatorInstance.Data;
  iVar4 = (param_1->SubSections).ArrayNum;
  pFVar5 = pFVar15 + (longlong)iVar4 * 8;
  while( true ) {
    if ((param_1->SubSections).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneLiveLinkSubSection>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar5) break;
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    pFVar14 = (FScriptContainerElement *)(*(longlong *)pFVar15 + 0x28);
    if (((pFVar7 <= pFVar14) &&
        (pFVar14 < pFVar7 + (longlong)(this->SubSectionsData).ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FMovieSceneLiveLinkSectionTemplate *)(*pcVar9)();
      return pFVar13;
    }
    iVar11 = (this->SubSectionsData).ArrayNum;
    if (iVar11 == (this->SubSectionsData).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,&(this->SubSectionsData).ArrayMax);
    }
    (this->SubSectionsData).ArrayNum = iVar11 + 1;
    FLiveLinkSubSectionData::FLiveLinkSubSectionData
              ((FLiveLinkSubSectionData *)
               ((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10),
               (FLiveLinkSubSectionData *)pFVar14);
    pFVar15 = pFVar15 + 8;
  }
  bVar10 = AreChannelKeyCountEqual(this);
  this->bMustDoInterpolation = !bVar10;
  bVar10 = CacheIsSectionUsable(this);
  FVar8 = (this->SubjectPreset).Key.SubjectName.Name;
  this->bIsSectionUsable = bVar10;
  if (((FVar8 != (FName)0x0) && (!bVar10)) && (5 < (byte)LogLiveLinkMovieScene._0_1_)) {
    ::FName::ToString(&(this->SubjectPreset).Key.SubjectName.Name,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  InitializePropertyHandlers(this);
  return this;
}

// FMovieSceneLiveLinkSectionTemplate @ 14d09e4d0

FMovieSceneLiveLinkSectionTemplate * __thiscall
FMovieSceneLiveLinkSectionTemplate::FMovieSceneLiveLinkSectionTemplate
          (FMovieSceneLiveLinkSectionTemplate *this)

{
  bool bVar1;
  
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this);
  this->_padding_ = (longlong)&___7FMovieSceneLiveLinkSectionTemplate__6B_;
  (this->SubjectPreset).Key.Source.A = 0;
  (this->SubjectPreset).Key.Source.B = 0;
  (this->SubjectPreset).Key.Source.C = 0;
  (this->SubjectPreset).Key.Source.D = 0;
  (this->SubjectPreset).Key.SubjectName.Name = (FName)0x0;
  (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SubjectPreset).Settings.field0_0x0.DebugPtr = (ULiveLinkSubjectSettings *)0x0;
  (this->SubjectPreset).VirtualSubject.field0_0x0.DebugPtr = (ULiveLinkVirtualSubject *)0x0;
  (this->SubjectPreset).bEnabled = false;
  (this->ChannelMask).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelMask).ArrayNum = 0;
  (this->ChannelMask).ArrayMax = 0;
  (this->SubSectionsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubSectionsData).ArrayNum = 0;
  (this->SubSectionsData).ArrayMax = 0;
  (this->PropertyHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyHandlers).ArrayNum = 0;
  (this->PropertyHandlers).ArrayMax = 0;
  (this->StaticData).Object = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
  (this->StaticData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar1 = AreChannelKeyCountEqual(this);
  this->bMustDoInterpolation = !bVar1;
  bVar1 = CacheIsSectionUsable(this);
  this->bIsSectionUsable = bVar1;
  return this;
}

// ~FMovieSceneLiveLinkSectionTemplate @ 14d09ee70

void __thiscall
FMovieSceneLiveLinkSectionTemplate::~FMovieSceneLiveLinkSectionTemplate
          (FMovieSceneLiveLinkSectionTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StaticData).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
            ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
             (this->PropertyHandlers).AllocatorInstance.Data,(this->PropertyHandlers).ArrayNum);
  pFVar1 = (this->PropertyHandlers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLiveLinkSubSectionData,int>
            ((FLiveLinkSubSectionData *)(this->SubSectionsData).AllocatorInstance.Data,
             (this->SubSectionsData).ArrayNum);
  pFVar1 = (this->SubSectionsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelMask).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this);
  return;
}

// AreChannelKeyCountEqual @ 14d0a1270

bool __thiscall
FMovieSceneLiveLinkSectionTemplate::AreChannelKeyCountEqual
          (FMovieSceneLiveLinkSectionTemplate *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  int *piVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  uint local_64;
  uint local_60;
  longlong local_58;
  FScriptContainerElement *local_50;
  
  pFVar11 = (this->SubSectionsData).AllocatorInstance.Data;
  local_60 = (this->SubSectionsData).ArrayNum;
  uVar7 = (ulonglong)(int)local_60;
  iVar9 = -1;
  local_50 = pFVar11 + uVar7 * 0x10;
  while( true ) {
    pFVar4 = local_50;
    if ((this->SubSectionsData).ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FLiveLinkSubSectionData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar11 == pFVar4) break;
    local_64 = *(uint *)(pFVar11 + 8);
    uVar7 = (ulonglong)(int)local_64;
    lVar12 = *(longlong *)pFVar11;
    piVar13 = (int *)(lVar12 + 0x40);
    local_58 = uVar7 * 0x58 + lVar12;
    while( true ) {
      lVar10 = local_58;
      if (*(int *)(pFVar11 + 8) != (int)uVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FLiveLinkPropertyData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (lVar12 == lVar10) break;
      iVar1 = piVar13[-0xc];
      lVar10 = *(longlong *)(piVar13 + -0xe);
      lVar8 = (longlong)iVar1 * 0x128 + lVar10;
      while( true ) {
        if (piVar13[-0xc] != iVar1) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FMovieSceneFloatChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (lVar10 == lVar8) break;
        iVar2 = *(int *)(lVar10 + 0x78);
        if (iVar9 == -1) {
          iVar9 = iVar2;
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        else {
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (iVar2 != iVar9) {
            return false;
          }
        }
        lVar10 = lVar10 + 0x128;
      }
      iVar1 = *piVar13;
      lVar10 = *(longlong *)(piVar13 + -2);
      lVar8 = (longlong)iVar1 * 0x120 + lVar10;
      while( true ) {
        if (*piVar13 != iVar1) {
          local_68 = 0;
          `TCheckedPointerIterator<FMovieSceneBoolChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_68);
        }
        if (lVar10 == lVar8) break;
        iVar2 = *(int *)(lVar10 + 0x78);
        if (iVar9 == -1) {
          iVar9 = iVar2;
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        else {
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (iVar2 != iVar9) {
            return false;
          }
        }
        lVar10 = lVar10 + 0x120;
      }
      iVar1 = piVar13[-4];
      lVar10 = *(longlong *)(piVar13 + -6);
      lVar8 = (longlong)iVar1 * 0x120 + lVar10;
      while( true ) {
        if (piVar13[-4] != iVar1) {
          local_67 = 0;
          `TCheckedPointerIterator<FMovieSceneIntegerChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_67);
        }
        if (lVar10 == lVar8) break;
        iVar2 = *(int *)(lVar10 + 0x78);
        if (iVar9 == -1) {
          iVar9 = iVar2;
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        else {
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (iVar2 != iVar9) {
            return false;
          }
        }
        lVar10 = lVar10 + 0x120;
      }
      iVar1 = piVar13[4];
      lVar10 = *(longlong *)(piVar13 + 2);
      lVar8 = (longlong)iVar1 * 0x128 + lVar10;
      while( true ) {
        if (piVar13[4] != iVar1) {
          local_66 = 0;
          `TCheckedPointerIterator<FMovieSceneByteChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_66);
        }
        if (lVar10 == lVar8) break;
        iVar2 = *(int *)(lVar10 + 0x78);
        if (iVar9 == -1) {
          iVar9 = iVar2;
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        else {
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (iVar2 != iVar9) {
            return false;
          }
        }
        lVar10 = lVar10 + 0x128;
      }
      iVar1 = piVar13[-8];
      lVar10 = *(longlong *)(piVar13 + -10);
      lVar8 = (longlong)iVar1 * 0x128 + lVar10;
      while( true ) {
        if (piVar13[-8] != iVar1) {
          local_65 = 0;
          `TCheckedPointerIterator<FMovieSceneStringChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_65);
        }
        if (lVar10 == lVar8) break;
        iVar2 = *(int *)(lVar10 + 0x70);
        if (iVar9 == -1) {
          iVar9 = iVar2;
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        else {
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (iVar2 != iVar9) {
            return false;
          }
        }
        lVar10 = lVar10 + 0x128;
      }
      lVar12 = lVar12 + 0x58;
      uVar7 = (ulonglong)local_64;
      piVar13 = piVar13 + 0x16;
    }
    pFVar11 = pFVar11 + 0x10;
    uVar7 = (ulonglong)local_60;
  }
  return true;
}

// CacheIsSectionUsable @ 14d0a1750

bool __thiscall
FMovieSceneLiveLinkSectionTemplate::CacheIsSectionUsable(FMovieSceneLiveLinkSectionTemplate *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56 [2];
  uint local_54;
  FScriptContainerElement *local_50;
  
  pFVar13 = (this->SubSectionsData).AllocatorInstance.Data;
  local_54 = (this->SubSectionsData).ArrayNum;
  uVar7 = (ulonglong)(int)local_54;
  local_50 = pFVar13 + uVar7 * 0x10;
  do {
    pFVar4 = local_50;
    if ((this->SubSectionsData).ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FLiveLinkSubSectionData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar13 == pFVar4) {
      return true;
    }
    lVar9 = *(longlong *)pFVar13;
    iVar1 = *(int *)(pFVar13 + 8);
    piVar12 = (int *)(lVar9 + 0x30);
    lVar11 = (longlong)iVar1 * 0x58 + lVar9;
    while( true ) {
      if (*(int *)(pFVar13 + 8) != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FLiveLinkPropertyData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (lVar9 == lVar11) break;
      iVar2 = piVar12[-8];
      if (0 < iVar2) {
        lVar8 = *(longlong *)(piVar12 + -10);
        lVar10 = (longlong)iVar2 * 0x128 + lVar8;
        do {
          if (piVar12[-8] != iVar2) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FMovieSceneFloatChannel_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (lVar8 == lVar10) {
            return false;
          }
          if (*(int *)(lVar8 + 0x78) < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          else if (0 < *(int *)(lVar8 + 0x78)) break;
          if (*(char *)(lVar8 + 0x94) != '\0') break;
          lVar8 = lVar8 + 0x128;
        } while( true );
      }
      bVar5 = LiveLinkSectionTemplateUtils::AreChannelsUsable<FMovieSceneStringChannel>
                        ((TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *)
                         (piVar12 + -6));
      if (!bVar5) {
        return false;
      }
      iVar2 = *piVar12;
      if (0 < iVar2) {
        lVar8 = *(longlong *)(piVar12 + -2);
        lVar10 = (longlong)iVar2 * 0x120 + lVar8;
        do {
          if (*piVar12 != iVar2) {
            local_58 = 0;
            `TCheckedPointerIterator<FMovieSceneIntegerChannel_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_58);
          }
          if (lVar8 == lVar10) {
            return false;
          }
          if (*(int *)(lVar8 + 0x78) < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          else if (0 < *(int *)(lVar8 + 0x78)) break;
          if (*(char *)(lVar8 + 0x84) != '\0') break;
          lVar8 = lVar8 + 0x120;
        } while( true );
      }
      iVar2 = piVar12[4];
      if (0 < iVar2) {
        lVar8 = *(longlong *)(piVar12 + 2);
        lVar10 = (longlong)iVar2 * 0x120 + lVar8;
        do {
          if (piVar12[4] != iVar2) {
            local_57 = 0;
            `TCheckedPointerIterator<FMovieSceneBoolChannel_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_57);
          }
          if (lVar8 == lVar10) {
            return false;
          }
          if (*(int *)(lVar8 + 0x78) < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          else if (0 < *(int *)(lVar8 + 0x78)) break;
          if (*(char *)(lVar8 + 0x81) != '\0') break;
          lVar8 = lVar8 + 0x120;
        } while( true );
      }
      iVar2 = piVar12[8];
      if (0 < iVar2) {
        lVar8 = *(longlong *)(piVar12 + 6);
        lVar10 = (longlong)iVar2 * 0x128 + lVar8;
        do {
          if (piVar12[8] != iVar2) {
            local_56[0] = 0;
            `TCheckedPointerIterator<FMovieSceneByteChannel_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_56);
          }
          if (lVar8 == lVar10) {
            return false;
          }
          if (*(int *)(lVar8 + 0x78) < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          else if (0 < *(int *)(lVar8 + 0x78)) break;
          if (*(char *)(lVar8 + 0x81) != '\0') break;
          lVar8 = lVar8 + 0x128;
        } while( true );
      }
      lVar9 = lVar9 + 0x58;
      piVar12 = piVar12 + 0x16;
    }
    pFVar13 = pFVar13 + 0x10;
    uVar7 = (ulonglong)local_54;
  } while( true );
}

// Evaluate @ 14d0a74b0

void __thiscall
FMovieSceneLiveLinkSectionTemplate::Evaluate
          (FMovieSceneLiveLinkSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  char cVar4;
  FMovieSceneLiveLinkSectionTemplatePersistentData *pFVar5;
  UClass *pUVar6;
  FMovieSceneLiveLinkSource *pFVar7;
  FFrameTime local_res8;
  FFrameRate local_28;
  TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_> local_20;
  
  pFVar5 = FPersistentEvaluationData::
           FindSectionData<FMovieSceneLiveLinkSectionTemplatePersistentData>(param_3);
  if ((this->bIsSectionUsable != false) &&
     (pFVar5 != (FMovieSceneLiveLinkSectionTemplatePersistentData *)0x0)) {
    pFVar7 = (pFVar5->LiveLinkSource).Object;
    if ((pFVar7 != (FMovieSceneLiveLinkSource *)0x0) &&
       (((cVar4 = (**(code **)(pFVar7->_padding_ + 0x28))(), cVar4 != '\0' &&
         (pUVar2 = (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0))
        && (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 != (UClass *)0x0)))) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((this->SubjectPreset).Role.Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_20.ArrayNum = 0;
        local_20.ArrayMax = 0;
        FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2);
        local_28 = (FFrameRate)param_2->_padding_;
        GetLiveLinkFrameArray(this,&local_res8,&local_res8,&local_res8,&local_20,&local_28);
        pFVar7 = TSharedPtr<FMovieSceneLiveLinkSource,1>::operator->(&pFVar5->LiveLinkSource);
        FMovieSceneLiveLinkSource::PublishLiveLinkFrameData(pFVar7,&local_20);
        DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                  ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
                   local_20.AllocatorInstance.Data,local_20.ArrayNum);
        if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// EvaluateSwept @ 14d0a75f0

void __thiscall
FMovieSceneLiveLinkSectionTemplate::EvaluateSwept
          (FMovieSceneLiveLinkSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,TRange<FFrameNumber> *param_3,
          FPersistentEvaluationData *param_4,FMovieSceneExecutionTokens *param_5)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  char cVar4;
  FMovieSceneLiveLinkSectionTemplatePersistentData *pFVar5;
  UClass *pUVar6;
  FFrameNumber *pFVar7;
  FFrameTime FVar8;
  FMovieSceneLiveLinkSource *pFVar9;
  FFrameTime local_res8;
  FFrameTime local_48;
  FFrameRate local_40 [2];
  TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_> local_30;
  
  pFVar5 = FPersistentEvaluationData::
           FindSectionData<FMovieSceneLiveLinkSectionTemplatePersistentData>(param_4);
  if ((this->bIsSectionUsable != false) &&
     (pFVar5 != (FMovieSceneLiveLinkSectionTemplatePersistentData *)0x0)) {
    pFVar9 = (pFVar5->LiveLinkSource).Object;
    if ((pFVar9 != (FMovieSceneLiveLinkSource *)0x0) &&
       (((cVar4 = (**(code **)(pFVar9->_padding_ + 0x28))(), cVar4 != '\0' &&
         (pUVar2 = (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0))
        && (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 != (UClass *)0x0)))) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((this->SubjectPreset).Role.Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_30.ArrayNum = 0;
        local_30.ArrayMax = 0;
        local_40[0] = (FFrameRate)param_2->_padding_;
        pFVar7 = TRange<FFrameNumber>::GetUpperBoundValue(param_3);
        local_res8.SubFrame = 0.0;
        local_res8.FrameNumber.Value = pFVar7->Value;
        pFVar7 = TRange<FFrameNumber>::GetLowerBoundValue(param_3);
        local_48.SubFrame = 0.0;
        local_48.FrameNumber.Value = pFVar7->Value;
        FVar8 = FMovieSceneEvaluationRange::GetTime((FMovieSceneEvaluationRange *)param_2);
        GetLiveLinkFrameArray(this,(FFrameTime *)FVar8,&local_48,&local_res8,&local_30,local_40);
        pFVar9 = TSharedPtr<FMovieSceneLiveLinkSource,1>::operator->(&pFVar5->LiveLinkSource);
        FMovieSceneLiveLinkSource::PublishLiveLinkFrameData(pFVar9,&local_30);
        DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                  ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
                   local_30.AllocatorInstance.Data,local_30.ArrayNum);
        if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// FillFrame @ 14d0a93f0

void __thiscall
FMovieSceneLiveLinkSectionTemplate::FillFrame
          (FMovieSceneLiveLinkSectionTemplate *this,int param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_4)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  double dVar6;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar7;
  bool bVar8;
  double *pdVar9;
  ULiveLinkRole *pUVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  
  pFVar7 = param_4;
  pdVar9 = (double *)(**(code **)((param_4->WrappedStruct)._padding_ + 0x18))(param_4);
  if (param_3->bIsSet != false) {
    FVar5 = (param_3->TypedValue).Rate;
    *(FFrameTime *)(pdVar9 + 0xc) = (param_3->TypedValue).Time;
    *(FFrameRate *)(pdVar9 + 0xd) = FVar5;
  }
  dVar6 = param_2->Offset;
  *pdVar9 = param_2->Time;
  pdVar9[1] = dVar6;
  pUVar10 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&(this->SubjectPreset).Role);
  uVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10);
  pFVar14 = (this->PropertyHandlers).AllocatorInstance.Data;
  uVar1 = (this->PropertyHandlers).ArrayNum;
  uVar12 = (ulonglong)(int)uVar1;
  pFVar15 = pFVar14 + uVar12 * 0x10;
  while( true ) {
    if ((this->PropertyHandlers).ArrayNum != (int)uVar12) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (pFVar14 == pFVar15) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
    plVar3 = *(longlong **)pFVar14;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 == (longlong *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pcVar4 = *(code **)(*plVar3 + 0x28);
    uVar13 = (**(code **)((pFVar7->WrappedStruct)._padding_ + 0x18))(pFVar7);
    (*pcVar4)(plVar3,param_1,param_2,param_3,uVar11,uVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar12 = (ulonglong)uVar1;
    pFVar14 = pFVar14 + 0x10;
  }
  return;
}

// FillFrameInterpolated @ 14d0aa900

void __thiscall
FMovieSceneLiveLinkSectionTemplate::FillFrameInterpolated
          (FMovieSceneLiveLinkSectionTemplate *this,FFrameTime *param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_4)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  double dVar6;
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar7;
  bool bVar8;
  double *pdVar9;
  ULiveLinkRole *pUVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  
  pFVar7 = param_4;
  pdVar9 = (double *)(**(code **)((param_4->WrappedStruct)._padding_ + 0x18))(param_4);
  if (param_3->bIsSet != false) {
    FVar5 = (param_3->TypedValue).Rate;
    *(FFrameTime *)(pdVar9 + 0xc) = (param_3->TypedValue).Time;
    *(FFrameRate *)(pdVar9 + 0xd) = FVar5;
  }
  dVar6 = param_2->Offset;
  *pdVar9 = param_2->Time;
  pdVar9[1] = dVar6;
  pUVar10 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&(this->SubjectPreset).Role);
  uVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10);
  pFVar14 = (this->PropertyHandlers).AllocatorInstance.Data;
  uVar1 = (this->PropertyHandlers).ArrayNum;
  uVar12 = (ulonglong)(int)uVar1;
  pFVar15 = pFVar14 + uVar12 * 0x10;
  while( true ) {
    if ((this->PropertyHandlers).ArrayNum != (int)uVar12) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (pFVar14 == pFVar15) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
    plVar3 = *(longlong **)pFVar14;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 == (longlong *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pcVar4 = *(code **)(*plVar3 + 0x30);
    uVar13 = (**(code **)((pFVar7->WrappedStruct)._padding_ + 0x18))(pFVar7);
    (*pcVar4)(plVar3,param_1,param_2,param_3,uVar11,uVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar12 = (ulonglong)uVar1;
    pFVar14 = pFVar14 + 0x10;
  }
  return;
}

// GetFirstTimeArray @ 14d0b1280

void __thiscall
FMovieSceneLiveLinkSectionTemplate::GetFirstTimeArray
          (FMovieSceneLiveLinkSectionTemplate *this,TArrayView<FFrameNumber_const_,int> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  uint local_b0;
  uint local_ac;
  FScriptContainerElement *local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  FFrameNumber *local_90;
  int iStack_88;
  undefined4 uStack_84;
  FFrameNumber *local_80;
  int iStack_78;
  undefined4 uStack_74;
  FFrameNumber *local_70;
  int iStack_68;
  undefined4 uStack_64;
  FFrameNumber *local_60;
  int iStack_58;
  undefined4 uStack_54;
  FFrameNumber *local_50;
  int iStack_48;
  undefined4 uStack_44;
  
  pFVar7 = (this->SubSectionsData).AllocatorInstance.Data;
  local_ac = (this->SubSectionsData).ArrayNum;
  uVar6 = (ulonglong)(int)local_ac;
  local_98 = pFVar7 + uVar6 * 0x10;
  while( true ) {
    pFVar4 = local_98;
    local_a8 = pFVar7;
    if ((this->SubSectionsData).ArrayNum != (int)uVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FLiveLinkSubSectionData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar7 == pFVar4) break;
    local_b0 = *(uint *)(pFVar7 + 8);
    uVar6 = (ulonglong)(int)local_b0;
    lVar10 = *(longlong *)pFVar7;
    piVar11 = (int *)(lVar10 + 0x40);
    local_a0 = uVar6 * 0x58 + lVar10;
    while( true ) {
      lVar8 = local_a0;
      if (*(int *)(pFVar7 + 8) != (int)uVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FLiveLinkPropertyData_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if (lVar10 == lVar8) break;
      iVar1 = piVar11[-0xc];
      lVar8 = *(longlong *)(piVar11 + -0xe);
      lVar9 = (longlong)iVar1 * 0x128 + lVar8;
      while( true ) {
        if (piVar11[-0xc] != iVar1) {
          local_b8 = 0;
          `TCheckedPointerIterator<FMovieSceneFloatChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_b8);
        }
        if (lVar8 == lVar9) break;
        local_90 = *(FFrameNumber **)(lVar8 + 0x70);
        iVar2 = *(int *)(lVar8 + 0x78);
        if (iVar2 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + 0x128;
        param_1->DataPtr = local_90;
        *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_84,iVar2);
        iStack_88 = iVar2;
      }
      iVar1 = *piVar11;
      lVar8 = *(longlong *)(piVar11 + -2);
      lVar9 = (longlong)iVar1 * 0x120 + lVar8;
      while( true ) {
        if (*piVar11 != iVar1) {
          local_b7 = 0;
          `TCheckedPointerIterator<FMovieSceneBoolChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_b7);
        }
        if (lVar8 == lVar9) break;
        local_80 = *(FFrameNumber **)(lVar8 + 0x70);
        iVar2 = *(int *)(lVar8 + 0x78);
        if (iVar2 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + 0x120;
        param_1->DataPtr = local_80;
        *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_74,iVar2);
        iStack_78 = iVar2;
      }
      iVar1 = piVar11[-4];
      lVar8 = *(longlong *)(piVar11 + -6);
      lVar9 = (longlong)iVar1 * 0x120 + lVar8;
      while( true ) {
        if (piVar11[-4] != iVar1) {
          local_b6 = 0;
          `TCheckedPointerIterator<FMovieSceneIntegerChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_b6);
        }
        if (lVar8 == lVar9) break;
        local_70 = *(FFrameNumber **)(lVar8 + 0x70);
        iVar2 = *(int *)(lVar8 + 0x78);
        if (iVar2 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + 0x120;
        param_1->DataPtr = local_70;
        *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_64,iVar2);
        iStack_68 = iVar2;
      }
      iVar1 = piVar11[4];
      lVar8 = *(longlong *)(piVar11 + 2);
      lVar9 = (longlong)iVar1 * 0x128 + lVar8;
      while( true ) {
        if (piVar11[4] != iVar1) {
          local_b5 = 0;
          `TCheckedPointerIterator<FMovieSceneByteChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_b5);
        }
        if (lVar8 == lVar9) break;
        local_60 = *(FFrameNumber **)(lVar8 + 0x70);
        iVar2 = *(int *)(lVar8 + 0x78);
        if (iVar2 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + 0x128;
        param_1->DataPtr = local_60;
        *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_54,iVar2);
        iStack_58 = iVar2;
      }
      iVar1 = piVar11[-8];
      lVar8 = *(longlong *)(piVar11 + -10);
      lVar9 = (longlong)iVar1 * 0x128 + lVar8;
      while( true ) {
        if (piVar11[-8] != iVar1) {
          local_b4[0] = 0;
          `TCheckedPointerIterator<FMovieSceneStringChannel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_b4);
        }
        if (lVar8 == lVar9) break;
        local_50 = *(FFrameNumber **)(lVar8 + 0x68);
        iVar2 = *(int *)(lVar8 + 0x70);
        if (iVar2 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + 0x128;
        param_1->DataPtr = local_50;
        *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_44,iVar2);
        iStack_48 = iVar2;
      }
      lVar10 = lVar10 + 0x58;
      piVar11 = piVar11 + 0x16;
      uVar6 = (ulonglong)local_b0;
      pFVar7 = local_a8;
    }
    pFVar7 = pFVar7 + 0x10;
    uVar6 = (ulonglong)local_ac;
  }
  return;
}

// GetLiveLinkFrameArray @ 14d0b15c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneLiveLinkSectionTemplate::GetLiveLinkFrameArray
          (FMovieSceneLiveLinkSectionTemplate *this,FFrameTime *param_1,FFrameTime *param_2,
          FFrameTime *param_3,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_4,FFrameRate *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FStructOnScope *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FFrameNumber FVar10;
  uint uVar11;
  FQualifiedFrameTime *pFVar12;
  ULiveLinkRole *pUVar13;
  UStruct *pUVar14;
  double *pdVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FFrameNumber FVar18;
  FScriptContainerElement *pFVar19;
  FFrameTime FVar20;
  uint uVar21;
  FFrameTime FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  FFrameNumber *pFVar27;
  uint uVar28;
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 local_1a7;
  undefined1 local_1a6 [6];
  FFrameTime local_1a0;
  FFrameTime local_198;
  FFrameTime local_190;
  FFrameTime local_188;
  FFrameTime local_180;
  TArrayView<FFrameNumber_const_,int> local_178;
  LARGE_INTEGER local_168;
  FFrameTime local_160;
  double local_158;
  double dStack_150;
  FQualifiedFrameTime local_148;
  char local_138;
  uint local_130;
  undefined4 uStack_12c;
  int local_128;
  float fStack_124;
  FQualifiedFrameTime local_120;
  char local_110;
  undefined8 local_108;
  FFrameTime local_100;
  longlong local_f8;
  double local_f0;
  double dStack_e8;
  FStructOnScope local_e0;
  FStructOnScope local_b8;
  FQualifiedFrameTime local_90 [5];
  
  local_138 = FApp::CurrentFrameTime.bIsSet;
  if (FApp::CurrentFrameTime.bIsSet) {
    local_148 = FApp::CurrentFrameTime.TypedValue;
  }
  iVar9 = (**(code **)(*(longlong *)CVarSequencerAlwaysSendInterpolatedLiveLink._padding_ + 200))();
  if ((iVar9 == 0) && (local_138 != '\0')) {
    local_198 = *param_3;
    local_190 = *param_2;
    if (local_190.FrameNumber.Value.Value == local_198.FrameNumber.Value.Value) {
      if (local_190.SubFrame == local_198.SubFrame) goto LAB_14d0b1d31;
    }
    if (this->bMustDoInterpolation == false) {
      dStack_150 = 0.0;
      QueryPerformanceCounter(&local_168);
      local_198 = *param_3;
      local_1a0 = *param_2;
      uVar28 = 0;
      uVar24 = 0;
      local_158 = (double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                  __real_4170000000000000;
      FVar10 = local_198.FrameNumber.Value;
      FVar18 = local_1a0.FrameNumber.Value;
      bVar8 = false;
      local_190.SubFrame = local_1a0.SubFrame;
      if ((((FVar10.Value < FVar18.Value) ||
           ((FVar22 = local_198, FVar18.Value == FVar10.Value &&
            (local_198.SubFrame < local_190.SubFrame)))) &&
          (FVar22 = local_1a0, FVar10.Value < FVar18.Value)) ||
         ((FVar18.Value == FVar10.Value && (local_198.SubFrame < local_190.SubFrame)))) {
        local_190 = FVar22;
        bVar8 = true;
        FVar22 = local_190;
      }
      local_190 = FVar22;
      FVar22 = local_190;
      local_178.DataPtr = (FFrameNumber *)0x0;
      local_178.ArrayNum = 0;
      if (bVar8) {
        param_2 = param_3;
      }
      FVar20 = *param_2;
      local_188 = local_198;
      local_100 = FVar20;
      GetFirstTimeArray(this,&local_178);
      uVar21 = local_178.ArrayNum;
      pFVar27 = local_178.DataPtr;
      uVar11 = local_178.ArrayNum;
      uVar25 = uVar28;
      if (0 < local_178.ArrayNum) {
        do {
          uVar26 = uVar11 >> 1;
          uVar24 = uVar25;
          if (local_178.DataPtr[(int)(uVar26 + uVar25)].Value < FVar22.FrameNumber.Value.Value) {
            uVar24 = uVar26 + uVar25 + (uVar11 & 1);
          }
          uVar11 = uVar26;
          uVar25 = uVar24;
        } while (uVar26 != 0);
      }
      if (uVar24 == 0xffffffff) {
        uVar25 = 0;
        uVar11 = local_178.ArrayNum;
        if (0 < local_178.ArrayNum) {
          do {
            uVar26 = uVar11 >> 1;
            uVar25 = uVar28;
            if (local_178.DataPtr[(int)(uVar26 + uVar28)].Value <= FVar20.FrameNumber.Value.Value) {
              uVar25 = uVar26 + uVar28 + (uVar11 & 1);
            }
            uVar11 = uVar26;
            uVar28 = uVar25;
          } while (uVar26 != 0);
        }
        uVar11 = local_178.ArrayNum - 1;
        if ((int)uVar25 < local_178.ArrayNum) {
          uVar11 = uVar25;
        }
        uVar28 = uVar11;
        if (uVar11 == 0xffffffff) goto LAB_14d0b17c7;
      }
      else {
        uVar11 = local_178.ArrayNum - 1;
        if ((int)uVar24 < local_178.ArrayNum) {
          uVar11 = uVar24;
        }
        uVar24 = local_178.ArrayNum;
        if (0 < local_178.ArrayNum) {
          do {
            uVar25 = uVar24 >> 1;
            if (local_178.DataPtr[(int)(uVar25 + uVar28)].Value <= FVar20.FrameNumber.Value.Value) {
              uVar28 = uVar25 + uVar28 + (uVar24 & 1);
            }
            uVar24 = uVar25;
          } while (uVar25 != 0);
        }
        uVar24 = uVar11;
        if (uVar28 == 0xffffffff) {
          uVar28 = uVar11;
        }
LAB_14d0b17c7:
        uVar11 = uVar24;
        if (uVar11 == 0xffffffff) goto LAB_14d0b1d61;
      }
      bVar8 = true;
      if (5 < (byte)LogLiveLinkMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
      }
      uVar24 = __xmm_80000000800000008000000080000000;
      local_1a0 = (FFrameTime)(longlong)(int)uVar28;
      local_f8 = (longlong)(int)uVar11;
      if ((longlong)local_1a0 <= local_f8) {
        local_198.SubFrame = FVar20.SubFrame;
        fVar5 = local_198.SubFrame;
        local_198 = FVar20;
        do {
          uVar25 = ~uVar28 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar28 < (int)uVar21) {
            uVar11 = uVar25;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          local_188.FrameNumber.Value = pFVar27[(longlong)local_1a0].Value;
          local_188.SubFrame = 0.0;
          local_160 = local_188;
          if ((FVar20.FrameNumber.Value.Value < local_188.FrameNumber.Value) ||
             ((local_188.FrameNumber.Value == FVar20.FrameNumber.Value.Value && (fVar5 < 0.0)))) {
            uStack_12c = 0;
            local_160.SubFrame = 0.0;
            local_160.FrameNumber.Value = local_188.FrameNumber.Value;
            local_180 = FVar22;
            local_130 = local_188.FrameNumber.Value;
            if ((local_188.FrameNumber.Value < FVar22.FrameNumber.Value.Value) ||
               ((local_188.FrameNumber.Value == FVar22.FrameNumber.Value.Value &&
                (local_180.SubFrame = FVar22.SubFrame, bVar6 = 0.0 <= local_180.SubFrame, bVar6))))
            {
              if (5 < (byte)LogLiveLinkMovieScene._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMovieScene);
              }
              bVar8 = false;
              uVar11 = 0;
              if ((int)uVar28 < (int)uVar21) {
                uVar11 = uVar25;
              }
              if ((uVar11 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              local_180 = *param_1;
              auVar29 = roundps(in_XMM2,ZEXT416((uint)local_180.SubFrame ^ uVar24),1);
              fStack_124 = (float)((uint)local_180.SubFrame ^ uVar24) - auVar29._0_4_;
              dStack_e8 = 0.0;
              local_110 = '\0';
              if (::FFrameTime::MaxSubframe <= fStack_124) {
                fStack_124 = ::FFrameTime::MaxSubframe;
              }
              local_128 = (int)auVar29._0_4_ +
                          (pFVar27[(longlong)local_1a0].Value - local_180.FrameNumber.Value);
              if (fStack_124 <= 0.0) {
                fStack_124 = 0.0;
              }
              local_108 = CONCAT44(fStack_124,local_128);
              in_XMM2._0_8_ =
                   ((double)((longlong)param_5->Denominator * (longlong)local_128) +
                   (double)param_5->Denominator * (double)fStack_124) / (double)param_5->Numerator +
                   dStack_150 + local_158;
              in_XMM2._8_8_ = 0;
              local_f0 = in_XMM2._0_8_;
              if (local_138 != '\0') {
                uVar11 = 0;
                if ((int)uVar28 < (int)uVar21) {
                  uVar11 = uVar25;
                }
                if ((uVar11 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                local_198.SubFrame = 0.0;
                local_198.FrameNumber.Value = pFVar27[(longlong)local_1a0].Value;
                pFVar12 = ConvertFrameTimeToTimeCodeTime
                                    (local_90,&local_198,param_5,param_1,&local_148);
                if (pFVar12 != &local_120) {
                  local_120.Time = pFVar12->Time;
                  local_120.Rate = pFVar12->Rate;
                  local_110 = '\x01';
                }
              }
              pUVar13 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&(this->SubjectPreset).Role);
              pUVar14 = (UStruct *)(**(code **)(*(longlong *)pUVar13 + 0x2b8))(pUVar13);
              FStructOnScope::FStructOnScope(&local_e0,pUVar14);
              pdVar15 = (double *)(**(code **)(local_e0._padding_ + 0x18))(&local_e0);
              if (local_110 != '\0') {
                *(FFrameTime *)(pdVar15 + 0xc) = local_120.Time;
                *(FFrameRate *)(pdVar15 + 0xd) = local_120.Rate;
              }
              *pdVar15 = local_f0;
              pdVar15[1] = dStack_e8;
              pUVar13 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&(this->SubjectPreset).Role);
              local_180 = (FFrameTime)(**(code **)(*(longlong *)pUVar13 + 0x2b8))(pUVar13);
              iVar9 = (this->PropertyHandlers).ArrayNum;
              pFVar23 = (this->PropertyHandlers).AllocatorInstance.Data;
              pFVar19 = pFVar23 + (longlong)iVar9 * 0x10;
              while( true ) {
                if ((this->PropertyHandlers).ArrayNum != iVar9) {
                  local_1a7 = 0;
                  `TCheckedPointerIterator<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_1a7);
                }
                FVar20 = local_100;
                FVar22 = local_190;
                if (pFVar23 == pFVar19) break;
                pTVar1 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
                plVar2 = *(longlong **)pFVar23;
                if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar1->SharedReferenceCount =
                       (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((plVar2 == (longlong *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                pcVar4 = *(code **)(*plVar2 + 0x28);
                uVar16 = (**(code **)(local_e0._padding_ + 0x18))(&local_e0);
                (*pcVar4)(plVar2,uVar28,&local_f0,&local_120,local_180,uVar16);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar1);
                pFVar23 = pFVar23 + 0x10;
              }
              pFVar3 = (FStructOnScope *)(param_4->AllocatorInstance).Data;
              if (((pFVar3 <= &local_e0) && (&local_e0 < pFVar3 + param_4->ArrayMax)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              iVar9 = param_4->ArrayNum;
              if (iVar9 == param_4->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar9 + 1;
              FStructOnScope::FStructOnScope
                        ((FStructOnScope *)
                         ((param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x28),&local_e0);
              FStructOnScope::~FStructOnScope(&local_e0);
              pFVar27 = local_178.DataPtr;
              uVar21 = local_178.ArrayNum;
            }
          }
          uVar28 = uVar28 + 1;
          local_1a0 = (FFrameTime)((longlong)local_1a0 + 1);
        } while ((longlong)local_1a0 <= local_f8);
        if (!bVar8) {
          return true;
        }
      }
      goto LAB_14d0b1d61;
    }
  }
LAB_14d0b1d31:
  dStack_150 = 0.0;
  QueryPerformanceCounter(&local_168);
  local_158 = (double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
LAB_14d0b1d61:
  pUVar13 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&(this->SubjectPreset).Role);
  pUVar14 = (UStruct *)(**(code **)(*(longlong *)pUVar13 + 0x2b8))(pUVar13);
  FStructOnScope::FStructOnScope(&local_b8,pUVar14);
  pdVar15 = (double *)(**(code **)(local_b8._padding_ + 0x18))(&local_b8);
  if (local_138 != '\0') {
    *(FFrameTime *)(pdVar15 + 0xc) = local_148.Time;
    *(FFrameRate *)(pdVar15 + 0xd) = local_148.Rate;
  }
  *pdVar15 = local_158;
  pdVar15[1] = dStack_150;
  pUVar13 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&(this->SubjectPreset).Role);
  uVar16 = (**(code **)(*(longlong *)pUVar13 + 0x2b8))(pUVar13);
  iVar9 = (this->PropertyHandlers).ArrayNum;
  pFVar23 = (this->PropertyHandlers).AllocatorInstance.Data;
  pFVar19 = pFVar23 + (longlong)iVar9 * 0x10;
  while( true ) {
    if ((this->PropertyHandlers).ArrayNum != iVar9) {
      local_1a6[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1a6);
    }
    if (pFVar23 == pFVar19) break;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
    plVar2 = *(longlong **)pFVar23;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar2 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pcVar4 = *(code **)(*plVar2 + 0x30);
    uVar17 = (**(code **)(local_b8._padding_ + 0x18))(&local_b8);
    (*pcVar4)(plVar2,param_1,&local_158,&local_148,uVar16,uVar17);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pFVar23 = pFVar23 + 0x10;
  }
  pFVar3 = (FStructOnScope *)(param_4->AllocatorInstance).Data;
  if (((pFVar3 <= &local_b8) && (&local_b8 < pFVar3 + param_4->ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar9 = param_4->ArrayNum;
  if (iVar9 == param_4->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar9 + 1;
  FStructOnScope::FStructOnScope
            ((FStructOnScope *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 0x28),
             &local_b8);
  FStructOnScope::~FStructOnScope(&local_b8);
  return true;
}

// GetScriptStructImpl @ 14d0b2d10

UScriptStruct * __thiscall
FMovieSceneLiveLinkSectionTemplate::GetScriptStructImpl(FMovieSceneLiveLinkSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneLiveLinkSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.OuterSingleton;
}

// InitializePropertyHandlers @ 14d0b4000

void __thiscall
FMovieSceneLiveLinkSectionTemplate::InitializePropertyHandlers
          (FMovieSceneLiveLinkSectionTemplate *this)

{
  int *piVar1;
  TArray<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UClass *pUVar4;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  ULiveLinkRole *pUVar10;
  UScriptStruct *pUVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FLiveLinkPropertyData *pFVar14;
  FScriptContainerElement *pFVar15;
  FLiveLinkPropertyData *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> local_48;
  
  pUVar4 = (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar4->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_)
       ) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && ((this->SubjectPreset).Role.Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      pUVar10 = TSubclassOf<ULiveLinkRole>::GetDefaultObject(&(this->SubjectPreset).Role);
      pUVar11 = (UScriptStruct *)(**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10);
      pFVar15 = (this->SubSectionsData).AllocatorInstance.Data;
      local_res18 = (this->SubSectionsData).ArrayNum;
      uVar12 = (ulonglong)(int)local_res18;
      pFVar17 = pFVar15 + uVar12 * 0x10;
      while( true ) {
        if ((this->SubSectionsData).ArrayNum != (int)uVar12) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FLiveLinkSubSectionData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar15 == pFVar17) break;
        iVar3 = *(int *)(pFVar15 + 8);
        pFVar16 = *(FLiveLinkPropertyData **)pFVar15;
        pFVar14 = pFVar16 + iVar3;
        while( true ) {
          if (*(int *)(pFVar15 + 8) != iVar3) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FLiveLinkPropertyData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar16 == pFVar14) break;
          LiveLinkPropertiesUtils::CreatePropertyHandler(&local_48,pUVar11,pFVar16);
          if (local_48.Object != (IMovieSceneLiveLinkPropertyHandler *)0x0) {
            if ((local_48.Object == (IMovieSceneLiveLinkPropertyHandler *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)((longlong)*local_48.Object + 0x20))(local_48.Object,pUVar11);
            pTVar2 = &this->PropertyHandlers;
            pTVar5 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
                     (pTVar2->AllocatorInstance).Data;
            if (((pTVar5 <= &local_48) && (&local_48 < pTVar5 + (this->PropertyHandlers).ArrayMax))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = (this->PropertyHandlers).ArrayNum;
            piVar1 = &(this->PropertyHandlers).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->PropertyHandlers).ArrayNum = iVar8 + 1;
            pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
            *(IMovieSceneLiveLinkPropertyHandler **)pFVar13 = local_48.Object;
            *(TReferenceControllerBase<1> **)(pFVar13 + 8) =
                 local_48.SharedReferenceCount.ReferenceController;
            if (local_48.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          pFVar16 = pFVar16 + 1;
        }
        uVar12 = (ulonglong)local_res18;
        pFVar15 = pFVar15 + 0x10;
      }
    }
  }
  return;
}

// Serialize @ 14d0b6a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneLiveLinkSectionTemplate::Serialize
          (FMovieSceneLiveLinkSectionTemplate *this,FArchive *param_1)

{
  uint *puVar1;
  TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *pTVar2;
  uint uVar3;
  code *pcVar4;
  ulonglong *puVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar10;
  TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *pTVar11;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  bool local_1e8 [4];
  uint local_1e4;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *local_1e0;
  FSharedReferencer<1> local_1d8 [2];
  TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> local_1c8;
  FStructuredArchiveFromArchive local_1b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLiveLinkCustomVersion::GUID);
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x20))(this);
  if ((param_1->field_0x2b & 4) == 0) {
    pcVar4 = *(code **)(*plVar9 + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b8,param_1);
    FVar10 = FStructuredArchiveFromArchive::GetSlot(this_00);
    local_1f0 = 0;
    local_1f8 = 0;
    (*pcVar4)(plVar9,*(undefined8 *)FVar10,this,plVar9);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b8);
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) {
      return true;
    }
    local_1e8[0] = (this->StaticData).Object !=
                   (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
    ::operator<<(param_1,local_1e8);
    if (local_1e8[0] == false) {
      return true;
    }
    if (((this->StaticData).Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    ::operator<<(param_1,(this->StaticData).Object);
    return true;
  }
  iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FLiveLinkCustomVersion::GUID);
  if (iVar8 < 1) {
    return true;
  }
  pTVar11 = MakeShared<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1>(&local_1c8);
  local_1d8[0].ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
  local_1e0 = pTVar11->Object;
  if (local_1d8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1d8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->StaticData;
  if (pTVar2 != (TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *)&local_1e0) {
    pTVar2->Object = local_1e0;
    local_1e0 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StaticData).SharedReferenceCount,local_1d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    local_1e4 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1e4,4);
    if (1 < local_1e4) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_1e4;
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14d0b6c24;
  }
  else {
    uVar3 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    if ((pTVar2->Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    ::operator<<(param_1,pTVar2->Object);
  }
LAB_14d0b6c24:
  InitializePropertyHandlers(this);
  return true;
}

// Setup @ 14d0b76b0

void __thiscall
FMovieSceneLiveLinkSectionTemplate::Setup
          (FMovieSceneLiveLinkSectionTemplate *this,FPersistentEvaluationData *param_1,
          IMovieScenePlayer *param_2)

{
  FMovieSceneEvaluationKey *pFVar1;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  *this_00;
  FMovieSceneLiveLinkSource *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  TSharedPtr<FMovieSceneLiveLinkSource,1> *pTVar6;
  longlong lVar7;
  undefined8 *puVar8;
  TSharedPtr<FMovieSceneLiveLinkSource,1> *pTVar9;
  undefined8 *local_res20;
  FMovieSceneEvaluationKey *local_48;
  undefined8 **local_40;
  TSharedPtr<FMovieSceneLiveLinkSource,1> local_38;
  
  if ((this->StaticData).Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) {
    return;
  }
  pFVar1 = &param_1->SectionKey;
  if ((param_1->EntityData ==
       (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                         ,0x11d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
             *)param_1->EntityData;
  iVar4 = TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationKey>
                    (this_00,~(param_1->SectionKey).TrackIdentifier.Value ^
                             (param_1->SectionKey).SectionIndex ^ (pFVar1->SequenceID).Value,pFVar1)
  ;
  puVar8 = (undefined8 *)0x0;
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0x20 + *(longlong *)&this_00->Elements;
    puVar5 = (undefined8 *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      puVar5 = puVar8;
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar5;
      goto LAB_14d0b77ec;
    }
  }
  if ((this_00 ==
       (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                         ,300,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar5 = ::operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = &___7FMovieSceneLiveLinkSectionTemplatePersistentData__6B_;
    puVar5[2] = 0;
    puVar8 = puVar5;
  }
  local_40 = &local_res20;
  local_res20 = puVar8;
  local_48 = pFVar1;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
            ((TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
              *)param_1->EntityData,
             (TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
              *)&stack0x00000008,(bool *)&local_48);
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
LAB_14d0b77ec:
  pTVar6 = FMovieSceneLiveLinkSource::CreateLiveLinkSource(&local_38,&this->SubjectPreset);
  pTVar9 = (TSharedPtr<FMovieSceneLiveLinkSource,1> *)(puVar8 + 1);
  if (pTVar9 != pTVar6) {
    pTVar9->Object = pTVar6->Object;
    pTVar6->Object = (FMovieSceneLiveLinkSource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar8 + 2),&pTVar6->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((pTVar9->Object == (FMovieSceneLiveLinkSource *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = pTVar9->Object;
  if (((this->StaticData).Object == (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMovieSceneLiveLinkSource::PublishLiveLinkStaticData(this_01,(this->StaticData).Object);
  return;
}

// SetupOverrides @ 14d0b7fa0

void __thiscall
FMovieSceneLiveLinkSectionTemplate::SetupOverrides(FMovieSceneLiveLinkSectionTemplate *this)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  return;
}

// TearDown @ 14d0b8080

void __thiscall
FMovieSceneLiveLinkSectionTemplate::TearDown
          (FMovieSceneLiveLinkSectionTemplate *this,FPersistentEvaluationData *param_1,
          IMovieScenePlayer *param_2)

{
  TSharedPtr<FMovieSceneLiveLinkSource,1> *pTVar1;
  FMovieSceneLiveLinkSource *pFVar2;
  char cVar3;
  FMovieSceneLiveLinkSectionTemplatePersistentData *pFVar4;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<FMovieSceneLiveLinkSource,1> local_18;
  
  pFVar4 = FPersistentEvaluationData::
           FindSectionData<FMovieSceneLiveLinkSectionTemplatePersistentData>(param_1);
  if (pFVar4 != (FMovieSceneLiveLinkSectionTemplatePersistentData *)0x0) {
    pFVar2 = (pFVar4->LiveLinkSource).Object;
    pTVar1 = &pFVar4->LiveLinkSource;
    if (pFVar2 != (FMovieSceneLiveLinkSource *)0x0) {
      cVar3 = (**(code **)(pFVar2->_padding_ + 0x28))();
      if (cVar3 != '\0') {
        local_18.Object = pTVar1->Object;
        local_18.SharedReferenceCount.ReferenceController =
             (pFVar4->LiveLinkSource).SharedReferenceCount.ReferenceController;
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FMovieSceneLiveLinkSource::RemoveLiveLinkSource(&local_18);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FMovieSceneLiveLinkSource,1> *)&local_28) {
        pTVar1->Object = (FMovieSceneLiveLinkSource *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar4->LiveLinkSource).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
  }
  return;
}

