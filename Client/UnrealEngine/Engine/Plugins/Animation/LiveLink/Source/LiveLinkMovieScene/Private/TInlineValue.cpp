// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 1

// InitializeFrom<FMovieSceneLiveLinkSectionTemplate,FMovieSceneLiveLinkSectionTemplate> @ 14d09c430

void __thiscall
TInlineValue<FMovieSceneEvalTemplate,128,8>::
InitializeFrom<FMovieSceneLiveLinkSectionTemplate,FMovieSceneLiveLinkSectionTemplate>
          (TInlineValue<FMovieSceneEvalTemplate,128,8> *this,
          FMovieSceneLiveLinkSectionTemplate *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FLiveLinkSubSectionData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  FMovieSceneLiveLinkSectionTemplate *this_00;
  TInlineValue<FMovieSceneEvalTemplate,128,8> *pTVar10;
  
  this->bInline = false;
  this_00 = FMemory::Malloc(0xb8,8);
  this->bIsValid = true;
  *(FMovieSceneLiveLinkSectionTemplate **)(this->Data).Pad = this_00;
  if (this->bInline) {
    this_00 = (FMovieSceneLiveLinkSectionTemplate *)this;
  }
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this_00,
             (FMovieScenePropertySectionTemplate *)param_1);
  this_00->_padding_ = (longlong)&___7FMovieSceneLiveLinkSectionTemplate__6B_;
  FLiveLinkSubjectPreset::FLiveLinkSubjectPreset(&this_00->SubjectPreset,&param_1->SubjectPreset);
  pTVar1 = &this_00->ChannelMask;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this_00->ChannelMask).ArrayMax;
  iVar5 = (param_1->ChannelMask).ArrayNum;
  pFVar6 = (param_1->ChannelMask).AllocatorInstance.Data;
  (this_00->ChannelMask).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  pTVar3 = &this_00->SubSectionsData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this_00->SubSectionsData).ArrayMax;
  iVar5 = (param_1->SubSectionsData).ArrayNum;
  pFVar6 = (param_1->SubSectionsData).AllocatorInstance.Data;
  (this_00->SubSectionsData).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FLiveLinkSubSectionData,FLiveLinkSubSectionData,int>
              ((pTVar3->AllocatorInstance).Data,(FLiveLinkSubSectionData *)pFVar6,iVar5);
  }
  this_00->bMustDoInterpolation = param_1->bMustDoInterpolation;
  this_00->bIsSectionUsable = param_1->bIsSectionUsable;
  (this_00->PropertyHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->PropertyHandlers).ArrayNum = 0;
  (this_00->PropertyHandlers).ArrayMax = 0;
  (this_00->StaticData).Object = (param_1->StaticData).Object;
  pTVar7 = (param_1->StaticData).SharedReferenceCount.ReferenceController;
  (this_00->StaticData).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneLiveLinkSectionTemplate::InitializePropertyHandlers(this_00);
  if (!this->bIsValid) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar10 = this;
  if (!this->bInline) {
    pTVar10 = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (!this->bIsValid) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (!this->bInline) {
    this = *(TInlineValue<FMovieSceneEvalTemplate,128,8> **)(this->Data).Pad;
  }
  if (pTVar10 != this) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

