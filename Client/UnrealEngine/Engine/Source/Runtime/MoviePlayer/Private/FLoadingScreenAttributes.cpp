// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 3

// operator= @ 146c777b0

FLoadingScreenAttributes * __thiscall
FLoadingScreenAttributes::operator=
          (FLoadingScreenAttributes *this,FLoadingScreenAttributes *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    (this->WidgetLoadingScreen).Object = (param_1->WidgetLoadingScreen).Object;
    (param_1->WidgetLoadingScreen).Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetLoadingScreen).SharedReferenceCount,
               &(param_1->WidgetLoadingScreen).SharedReferenceCount);
  }
  pTVar1 = &param_1->MoviePaths;
  pTVar2 = &this->MoviePaths;
  if (pTVar2 != pTVar1) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(this->MoviePaths).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MoviePaths).ArrayNum = (param_1->MoviePaths).ArrayNum;
    (this->MoviePaths).ArrayMax = (param_1->MoviePaths).ArrayMax;
    (param_1->MoviePaths).ArrayNum = 0;
    (param_1->MoviePaths).ArrayMax = 0;
  }
  this->MinimumLoadingScreenDisplayTime = param_1->MinimumLoadingScreenDisplayTime;
  this->bAutoCompleteWhenLoadingCompletes = param_1->bAutoCompleteWhenLoadingCompletes;
  this->bMoviesAreSkippable = param_1->bMoviesAreSkippable;
  this->bWaitForManualStop = param_1->bWaitForManualStop;
  this->bAllowInEarlyStartup = param_1->bAllowInEarlyStartup;
  this->bAllowEngineTick = param_1->bAllowEngineTick;
  (this->PlaybackType).Value = (param_1->PlaybackType).Value;
  return this;
}

// IsValid @ 146c7f250

bool __thiscall FLoadingScreenAttributes::IsValid(FLoadingScreenAttributes *this)

{
  if (((this->WidgetLoadingScreen).Object == (SWidget *)0x0) && ((this->MoviePaths).ArrayNum < 1)) {
    return false;
  }
  return true;
}

// NewTestLoadingScreenWidget @ 146c7f2d0

TSharedRef<SWidget,1> * __cdecl
FLoadingScreenAttributes::NewTestLoadingScreenWidget(TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  SLoadingScreenTestWidget *pSVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FSlateBaseNamedArgs *pFVar7;
  TSharedRef<SWidget,1> *pTVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs> local_238;
  FSlateBaseNamedArgs local_220;
  
  pFVar7 = (FSlateBaseNamedArgs *)
           SLoadingScreenTestWidget::FArguments::FArguments((FArguments *)&local_220);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs>
            (&local_238,"SLoadingScreenTestWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayer.cpp"
             ,0x44,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar2 = local_238._Widget.Object;
  if (local_238._Widget.Object == (SLoadingScreenTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_238._Widget.Object,pFVar7);
  SLoadingScreenTestWidget::Construct(local_238._Widget.Object,(FArguments *)pFVar7);
  if (local_238._Widget.Object == (SLoadingScreenTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  if (((local_238._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)local_238._Widget.Object + 0x228))(local_238._Widget.Object);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_146c7f410;
  }
  bVar6 = 0x20;
LAB_146c7f410:
  (local_238._Widget.Object)->field_0x30 = (local_238._Widget.Object)->field_0x30 & 0xdf;
  (local_238._Widget.Object)->field_0x30 = (local_238._Widget.Object)->field_0x30 | bVar6;
  if (local_238._Widget.Object == (SLoadingScreenTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  (local_238._Widget.Object)->field_0x31 = (local_238._Widget.Object)->field_0x31 | 4;
  if (local_238._Widget.Object == (SLoadingScreenTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  FVar3.ReferenceController = local_238._Widget.SharedReferenceCount.ReferenceController;
  local_238._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_238._Widget.Object = (SLoadingScreenTestWidget *)0x0;
  if (pSVar2 == (SLoadingScreenTestWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_220);
  return __return_storage_ptr__;
}

