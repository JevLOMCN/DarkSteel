// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 13

// FMovieSceneLiveLinkSource @ 14d09e570

FMovieSceneLiveLinkSource * __thiscall
FMovieSceneLiveLinkSource::FMovieSceneLiveLinkSource(FMovieSceneLiveLinkSource *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneLiveLinkSource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Client = (ILiveLinkClient *)0x0;
  (this->SourceGuid).A = 0;
  (this->SourceGuid).B = 0;
  (this->SourceGuid).C = 0;
  (this->SourceGuid).D = 0;
  (this->SubjectPreset).Key.Source.A = 0;
  (this->SubjectPreset).Key.Source.B = 0;
  (this->SubjectPreset).Key.Source.C = 0;
  (this->SubjectPreset).Key.Source.D = 0;
  (this->SubjectPreset).Key.SubjectName.Name = (FName)0x0;
  (this->SubjectPreset).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SubjectPreset).Settings.field0_0x0.DebugPtr = (ULiveLinkSubjectSettings *)0x0;
  (this->SubjectPreset).VirtualSubject.field0_0x0.DebugPtr = (ULiveLinkVirtualSubject *)0x0;
  (this->SubjectPreset).bEnabled = false;
  (this->PreviousSubjectEnabled).Source.A = 0;
  (this->PreviousSubjectEnabled).Source.B = 0;
  (this->PreviousSubjectEnabled).Source.C = 0;
  (this->PreviousSubjectEnabled).Source.D = 0;
  (this->PreviousSubjectEnabled).SubjectName.Name = (FName)0x0;
  return this;
}

// ~FMovieSceneLiveLinkSource @ 14d09eef0

void __thiscall
FMovieSceneLiveLinkSource::~FMovieSceneLiveLinkSource(FMovieSceneLiveLinkSource *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneLiveLinkSource__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  return;
}

// CreateLiveLinkSource @ 14d0a5e50

TSharedPtr<FMovieSceneLiveLinkSource,1> * __cdecl
FMovieSceneLiveLinkSource::CreateLiveLinkSource
          (TSharedPtr<FMovieSceneLiveLinkSource,1> *__return_storage_ptr__,
          FLiveLinkSubjectPreset *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FMovieSceneLiveLinkSource,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FMovieSceneLiveLinkSource *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FMovieSceneLiveLinkSource *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [16];
  
  pIVar6 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,ILiveLinkClient::ModularFeatureName);
  if (iVar5 < 1) {
    __return_storage_ptr__->Object = (FMovieSceneLiveLinkSource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pIVar6 = IModularFeatures::Get();
  lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,ILiveLinkClient::ModularFeatureName,0);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar12 = (TReferenceControllerBase<1> *)(lVar7 + -8);
  if (lVar7 == 0) {
    pTVar12 = pTVar10;
  }
  pTVar8 = ::operator_new(0x90);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar11 = (FMovieSceneLiveLinkSource *)&DAT_00000010;
LAB_14d0a5f68:
    if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
       (*(int *)(pFVar11->_padding_ + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11->_padding_ = (longlong)pFVar11;
      if (pTVar10 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar2 = (longlong *)pFVar11->_padding_;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        pFVar11->_padding_ = (longlong)pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0a5fd3;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pFVar11 = (FMovieSceneLiveLinkSource *)(pTVar8 + 1);
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMovieSceneLiveLinkSource___00_SharedPointerInternals__6B_
    ;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[4]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar8[7]._padding_ = 0;
    pTVar8[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[8]._padding_ = 0;
    pTVar8[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[1]._padding_ = (longlong)&___7FMovieSceneLiveLinkSource__6B_;
    pTVar10 = pTVar8;
    if (pFVar11 != (FMovieSceneLiveLinkSource *)0x0) goto LAB_14d0a5f68;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FMovieSceneLiveLinkSource,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  LOCK();
  pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
  UNLOCK();
LAB_14d0a5fd3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pFVar11 == (FMovieSceneLiveLinkSource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FMovieSceneLiveLinkSource,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  FLiveLinkSubjectPreset::operator=(&pFVar11->SubjectPreset,param_1);
  lVar7 = pTVar12->_padding_;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pFVar11;
  local_30 = pTVar10;
  (**(code **)(lVar7 + 8))(pTVar12,local_28,&local_38);
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSourceMachineName @ 14d0b2d50

FText * __thiscall
FMovieSceneLiveLinkSource::GetSourceMachineName
          (FMovieSceneLiveLinkSource *this,FText *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FText local_18;
  
  FText::FText(&local_18);
  pwVar1 = FWindowsPlatformProcess::ComputerName();
  FText::FromString(__return_storage_ptr__,pwVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSourceStatus @ 14d0b2da0

FText * __thiscall
FMovieSceneLiveLinkSource::GetSourceStatus
          (FMovieSceneLiveLinkSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"MovieSceneLiveLinkSource",L"MovieSceneLiveLinkSourceStatus",
             L"Active");
  return __return_storage_ptr__;
}

// GetSourceType @ 14d0b2de0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FMovieSceneLiveLinkSource::GetSourceType
          (FMovieSceneLiveLinkSource *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = FText::FromName(&local_28,&(this->SubjectPreset).Key.SubjectName.Name);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FMovieSceneLiveLinkSource",L"MovieSceneLiveLinkSourceType",
                      L"Sequencer Live Link ({0})");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar3,pFVar1);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// InitializeSettings @ 14d0b4280

void __thiscall
FMovieSceneLiveLinkSource::InitializeSettings
          (FMovieSceneLiveLinkSource *this,ULiveLinkSourceSettings *param_1)

{
  (param_1->BufferSettings).MaxNumberOfFrameToBuffered = 1;
  return;
}

// IsSourceStillValid @ 14d0b4440

bool __thiscall FMovieSceneLiveLinkSource::IsSourceStillValid(FMovieSceneLiveLinkSource *this)

{
  return this->Client != (ILiveLinkClient *)0x0;
}

// PublishLiveLinkFrameData @ 14d0b4550

void __thiscall
FMovieSceneLiveLinkSource::PublishLiveLinkFrameData
          (FMovieSceneLiveLinkSource *this,
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->Client == (ILiveLinkClient *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Client != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSource.cpp"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x28;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    (**(code **)((longlong)*this->Client + 0x80))(this->Client,&this->SubjectPreset,pFVar5);
    pFVar5 = pFVar5 + 0x28;
  }
  return;
}

// PublishLiveLinkStaticData @ 14d0b4600

void __thiscall
FMovieSceneLiveLinkSource::PublishLiveLinkStaticData
          (FMovieSceneLiveLinkSource *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1
          )

{
  int iVar1;
  ILiveLinkClient *pIVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  UScriptStruct *this_00;
  void *pvVar9;
  void *pvVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  FStructOnScope local_48;
  
  if (this->Client == (ILiveLinkClient *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Client != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkSource.cpp"
                       ,0x6b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FStructOnScope::FStructOnScope(&local_48);
  pUVar6 = (UObject *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (pUVar6 == (UObject *)0x0) {
LAB_14d0b467e:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14d0b467e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FVar4 = local_res8;
  (**(code **)(local_48._padding_ + 0x40))(&local_48);
  local_48.ScriptStruct.WeakPtr = FVar4;
  (**(code **)local_48._padding_)(&local_48);
  lVar8 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  if (lVar8 == 0) goto LAB_14d0b4765;
  this_00 = (UScriptStruct *)(**(code **)(local_48._padding_ + 0x20))(&local_48);
  if (this_00 == (UScriptStruct *)0x0) {
LAB_14d0b4736:
    this_00 = (UScriptStruct *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_14d0b4736;
  }
  pvVar9 = (void *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  pvVar10 = (void *)(**(code **)(local_48._padding_ + 0x18))(&local_48);
  UScriptStruct::CopyScriptStruct(this_00,pvVar10,pvVar9,1);
LAB_14d0b4765:
  pIVar2 = this->Client;
  local_res18 = (TObjectPtr<UClass>_u_0)(this->SubjectPreset).Role.Class.field0_0x0.DebugPtr;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0x78);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  (*pcVar3)(pIVar2,&this->SubjectPreset,&local_res18,&local_48);
  FStructOnScope::~FStructOnScope(&local_48);
  return;
}

// ReceiveClient @ 14d0b47d0

void __thiscall
FMovieSceneLiveLinkSource::ReceiveClient
          (FMovieSceneLiveLinkSource *this,ILiveLinkClient *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *local_18;
  int local_10;
  
  uVar1 = param_2->A;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  this->Client = param_1;
  (this->SubjectPreset).bEnabled = true;
  (this->SourceGuid).A = uVar1;
  (this->SourceGuid).B = uVar2;
  (this->SourceGuid).C = uVar3;
  (this->SourceGuid).D = uVar4;
  (this->SubjectPreset).Key.Source.A = uVar1;
  (this->SubjectPreset).Key.Source.B = uVar2;
  (this->SubjectPreset).Key.Source.C = uVar3;
  (this->SubjectPreset).Key.Source.D = uVar4;
  (**(code **)((longlong)*param_1 + 0x100))(param_1,&local_18,0,0);
  if (local_18 != local_18 + (longlong)local_10 * 6) {
    puVar5 = local_18;
    do {
      if ((this->SubjectPreset).Key.SubjectName.Name == *(FName *)(puVar5 + 4)) {
        if ((((this->SourceGuid).D != puVar5[3] || (this->SourceGuid).C != puVar5[2]) ||
            (this->SourceGuid).B != puVar5[1]) || (this->SourceGuid).A != *puVar5) {
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[3];
          (this->PreviousSubjectEnabled).Source.A = *puVar5;
          (this->PreviousSubjectEnabled).Source.B = uVar1;
          (this->PreviousSubjectEnabled).Source.C = uVar2;
          (this->PreviousSubjectEnabled).Source.D = uVar3;
          (this->PreviousSubjectEnabled).SubjectName.Name = *(FName *)(puVar5 + 4);
          goto LAB_14d0b483f;
        }
        break;
      }
      puVar5 = puVar5 + 6;
    } while (puVar5 != local_18 + (longlong)local_10 * 6);
  }
  (this->PreviousSubjectEnabled).Source.C = 0;
  (this->PreviousSubjectEnabled).Source.D = 0;
  (this->PreviousSubjectEnabled).Source.A = 0;
  (this->PreviousSubjectEnabled).Source.B = 0;
LAB_14d0b483f:
  (**(code **)((longlong)*this->Client + 0x88))(this->Client,&this->SubjectPreset);
  if (local_18 != (uint *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// RemoveLiveLinkSource @ 14d0b68d0

void __cdecl
FMovieSceneLiveLinkSource::RemoveLiveLinkSource(TSharedPtr<FMovieSceneLiveLinkSource,1> *param_1)

{
  FMovieSceneLiveLinkSource *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  longlong *plVar8;
  FMovieSceneLiveLinkSource *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar6 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar5) {
    pIVar6 = IModularFeatures::Get();
    lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,ILiveLinkClient::ModularFeatureName,0);
    plVar8 = (longlong *)(lVar7 + -8);
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if ((param_1->Object == (FMovieSceneLiveLinkSource *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = param_1->Object;
    if ((((pFVar1->PreviousSubjectEnabled).Source.D != 0 ||
         (pFVar1->PreviousSubjectEnabled).Source.C != 0) ||
        (pFVar1->PreviousSubjectEnabled).Source.B != 0) ||
        (pFVar1->PreviousSubjectEnabled).Source.A != 0) {
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if ((pFVar1 == (FMovieSceneLiveLinkSource *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar4 = (*pcVar2)(plVar8,&param_1->Object->SubjectPreset,0);
      if (cVar4 != '\0') {
        pcVar2 = *(code **)(*plVar8 + 0x128);
        if ((param_1->Object == (FMovieSceneLiveLinkSource *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*pcVar2)(plVar8,&param_1->Object->PreviousSubjectEnabled,1);
      }
    }
    pcVar2 = *(code **)(*plVar8 + 0x28);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(plVar8,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RequestSourceShutdown @ 14d0b6a50

bool __thiscall FMovieSceneLiveLinkSource::RequestSourceShutdown(FMovieSceneLiveLinkSource *this)

{
  this->Client = (ILiveLinkClient *)0x0;
  return true;
}

