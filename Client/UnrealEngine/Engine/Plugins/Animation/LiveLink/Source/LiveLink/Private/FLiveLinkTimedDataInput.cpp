// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 16

// FLiveLinkTimedDataInput @ 14d0124c0

FLiveLinkTimedDataInput * __thiscall
FLiveLinkTimedDataInput::FLiveLinkTimedDataInput
          (FLiveLinkTimedDataInput *this,FLiveLinkClient *param_1,FGuid *param_2)

{
  int *piVar1;
  FName FVar2;
  FLiveLinkTimedDataInput **ppFVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FModuleManager *this_00;
  IModuleInterface *pIVar13;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FLiveLinkTimedDataInput *pFVar14;
  UClass *pUVar15;
  FLiveLinkTimedDataInput **ppFVar16;
  FName local_res8;
  FLiveLinkTimedDataInput *local_38 [4];
  
  uVar6 = param_2->A;
  uVar7 = param_2->B;
  uVar8 = param_2->C;
  uVar9 = param_2->D;
  this->LiveLinkClient = param_1;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FLiveLinkTimedDataInput__6B_;
  piVar1 = &(this->FrameTimes).ArrayMax;
  (this->Source).A = uVar6;
  (this->Source).B = uVar7;
  (this->Source).C = uVar8;
  (this->Source).D = uVar9;
  (this->EngineClockOffset).EstimatedOffset = 0.0;
  (this->TimecodeClockOffset).EstimatedOffset = 0.0;
  (this->EngineClockOffset).MaxAllowedEstimationError = 0.25;
  (this->TimecodeClockOffset).MaxAllowedEstimationError = 0.25;
  this->LastWorldSourceTime = 0.0;
  this->LastSceneTime = 0.0;
  (this->FrameTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTimes).ArrayNum = 0;
  *piVar1 = 0;
  this->FrameIntervalChangeCount = 0;
  (this->EngineClockOffset).CorrectionStep = 0.0001;
  (this->EngineClockOffset).ConsecutiveTooBigErrorRequired = 5;
  (this->EngineClockOffset).ConsecutiveBigErrorCount = 5;
  (this->TimecodeClockOffset).CorrectionStep = 0.0001;
  (this->TimecodeClockOffset).ConsecutiveTooBigErrorRequired = 5;
  (this->TimecodeClockOffset).ConsecutiveBigErrorCount = 5;
  this->NumFramesToConsiderForAverage = 0x7fffffff;
  pFVar12 = ::FName::FName(&local_res8,L"TimeManagement");
  FVar2 = *pFVar12;
  this_00 = FModuleManager::Get();
  pIVar13 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  this_01 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar13 + 0x40))(pIVar13);
  ppFVar3 = *(FLiveLinkTimedDataInput ***)(this_01 + 1);
  for (ppFVar16 = ppFVar3; local_38[0] = this, ppFVar16 != ppFVar3 + *(int *)&this_01[1].field_0x8;
      ppFVar16 = ppFVar16 + 1) {
    if (*ppFVar16 == this) goto LAB_14d01266e;
  }
  if (((ppFVar3 <= local_38) && (local_38 < ppFVar3 + *(int *)&this_01[1].field_0xc)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar4 = (code *)swi(3);
    pFVar14 = (FLiveLinkTimedDataInput *)(*pcVar4)();
    return pFVar14;
  }
  iVar11 = *(int *)&this_01[1].field_0x8;
  if (iVar11 == *(int *)&this_01[1].field_0xc) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(this_01 + 1),(int *)&this_01[1].field_0xc);
  }
  *(int *)&this_01[1].field_0x8 = iVar11 + 1;
  *(FLiveLinkTimedDataInput **)(*(longlong *)(this_01 + 1) + (longlong)iVar11 * 8) = local_38[0];
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_01);
LAB_14d01266e:
  pUVar15 = ULiveLinkSettings::StaticClass();
  if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar15);
  }
  dVar5 = (double)*(float *)&(pUVar15->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x10;
  if (0.0 < dVar5) {
    (this->EngineClockOffset).CorrectionStep = dVar5;
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5399497721910394955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\ClockOffsetEstimatorRamp.cpp"
                        ,0x4b,"NewValue > 0.0");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FLiveLinkTimedDataInput *)(*pcVar4)();
      return pFVar14;
    }
  }
  pUVar15 = ULiveLinkSettings::StaticClass();
  if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar15);
  }
  dVar5 = (double)*(float *)&(pUVar15->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x10;
  if (0.0 < dVar5) {
    (this->TimecodeClockOffset).CorrectionStep = dVar5;
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5399497721910394955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\ClockOffsetEstimatorRamp.cpp"
                        ,0x4b,"NewValue > 0.0");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FLiveLinkTimedDataInput *)(*pcVar4)();
      return pFVar14;
    }
  }
  if (*piVar1 < 200) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,200,&(this->FrameTimes).AllocatorInstance,(this->FrameTimes).ArrayNum,piVar1);
  }
  return this;
}

// ~FLiveLinkTimedDataInput @ 14d016710

void __thiscall FLiveLinkTimedDataInput::~FLiveLinkTimedDataInput(FLiveLinkTimedDataInput *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  IModuleInterface *pIVar7;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FLiveLinkTimedDataInput__6B_;
  pFVar6 = ::FName::FName(&local_res8,"TimeManagement");
  pIVar7 = FModuleManager::GetModulePtr_Internal(*pFVar6);
  if (pIVar7 != (IModuleInterface *)0x0) {
    this_00 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
    plVar1 = *(longlong **)(this_00 + 1);
    for (plVar10 = plVar1; plVar10 != plVar1 + *(int *)&this_00[1].field_0x8; plVar10 = plVar10 + 1)
    {
      if ((FLiveLinkTimedDataInput *)*plVar10 == this) {
        uVar9 = (uint)((longlong)plVar10 - (longlong)plVar1 >> 3);
        if (uVar9 != 0xffffffff) {
          uVar8 = 0;
          if ((int)(uVar9 + 1) <= *(int *)&this_00[1].field_0x8) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = *(int *)&this_00[1].field_0x8 + ~uVar9;
          if (1 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            memmove((void *)(*(longlong *)(this_00 + 1) + (longlong)(int)uVar9 * 8),
                    (void *)(*(longlong *)(this_00 + 1) +
                            (longlong)(*(int *)&this_00[1].field_0x8 - iVar5) * 8),
                    (longlong)iVar5 << 3);
          }
          *(int *)&this_00[1].field_0x8 = *(int *)&this_00[1].field_0x8 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)(this_00 + 1),*(int *)&this_00[1].field_0x8,
                     (int *)&this_00[1].field_0xc);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_00);
        }
        break;
      }
    }
  }
  pFVar2 = (this->FrameTimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Channels).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ITimedDataInput__6B_;
  return;
}

// AddChannel @ 14d020730

void __thiscall
FLiveLinkTimedDataInput::AddChannel(FLiveLinkTimedDataInput *this,ITimedDataInputChannel *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ITimedDataInputChannel *local_res10 [3];
  
  pFVar2 = (this->Channels).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Channels).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Channels).ArrayNum;
  piVar1 = &(this->Channels).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Channels).AllocatorInstance,piVar1);
  }
  (this->Channels).ArrayNum = iVar5 + 1;
  *(ITimedDataInputChannel **)((this->Channels).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

// GetChannels @ 14d04a070

TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkTimedDataInput::GetChannels
          (FLiveLinkTimedDataInput *this,
          TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Channels).ArrayNum;
  _Src = (this->Channels).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetDataBufferSize @ 14d04ab10

int __thiscall FLiveLinkTimedDataInput::GetDataBufferSize(FLiveLinkTimedDataInput *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x84);
  }
  return 0;
}

// GetDisplayName @ 14d04b520

FText * __thiscall
FLiveLinkTimedDataInput::GetDisplayName(FLiveLinkTimedDataInput *this,FText *__return_storage_ptr__)

{
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_18 = (this->Source).A;
  uStack_14 = (this->Source).B;
  uStack_10 = (this->Source).C;
  uStack_c = (this->Source).D;
  (**(code **)(this->LiveLinkClient->_padding_ + 0x50))
            (this->LiveLinkClient,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetEvaluationOffsetInSeconds @ 14d04b870

double __thiscall
FLiveLinkTimedDataInput::GetEvaluationOffsetInSeconds(FLiveLinkTimedDataInput *this)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if (lVar2 == 0) {
    return 0.0;
  }
  cVar1 = *(char *)(lVar2 + 0x28);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return (double)*(float *)(lVar2 + 0x38);
    }
    if (cVar1 == '\x02') {
      dVar3 = ITimedDataInput::ConvertFrameOffsetInSecondOffset
                        ((double)*(float *)(lVar2 + 0x70),*(FFrameRate *)(lVar2 + 0x54));
      return dVar3;
    }
  }
  return (double)*(int *)(lVar2 + 0x80);
}

// GetEvaluationType @ 14d04b8e0

ETimedDataInputEvaluationType __thiscall
FLiveLinkTimedDataInput::GetEvaluationType(FLiveLinkTimedDataInput *this)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if ((lVar2 != 0) && (cVar1 = *(char *)(lVar2 + 0x28), cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      return PlatformTime;
    }
    if (cVar1 == '\x02') {
      return Timecode;
    }
  }
  return None;
}

// GetFrameRate @ 14d04d530

FFrameRate __thiscall FLiveLinkTimedDataInput::GetFrameRate(FLiveLinkTimedDataInput *this)

{
  longlong lVar1;
  FFrameRate in_RDX;
  
  lVar1 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x28) == '\x02')) {
    *(FFrameRate *)in_RDX = *(FFrameRate *)(lVar1 + 0x54);
    return in_RDX;
  }
  *(FFrameRate *)in_RDX = ITimedDataInput::UnknownFrameRate;
  return in_RDX;
}

// IsDataBufferSizeControlledByInput @ 14d05eed0

bool __thiscall
FLiveLinkTimedDataInput::IsDataBufferSizeControlledByInput(FLiveLinkTimedDataInput *this)

{
  return true;
}

// ProcessNewFrameTimingInfo @ 14d071450

void __thiscall
FLiveLinkTimedDataInput::ProcessNewFrameTimingInfo
          (FLiveLinkTimedDataInput *this,FLiveLinkBaseFrameData *param_1)

{
  FFrameRate FVar1;
  FFrameTime FVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  float fStackX_c;
  
  pTVar3 = LiveLinkTimedDataInput::CVarLiveLinkUpdateContinuousClockOffset.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      lVar6 = 1;
      goto LAB_14d071487;
    }
  }
  lVar6 = 0;
LAB_14d071487:
  dVar8 = (param_1->WorldTime).Time;
  dVar7 = dVar8 - this->LastWorldSourceTime;
  bVar4 = pTVar3->ShadowedValue[lVar6];
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    this->LastWorldSourceTime = dVar8;
    if (bVar4 != false) {
      FClockOffsetEstimatorRamp::UpdateEstimation
                (&this->EngineClockOffset,(param_1->WorldTime).Time,(param_1->ArrivalTime).WorldTime
                );
    }
    UpdateSmoothEngineTimeOffset(this,param_1);
  }
  FVar1 = (param_1->MetaData).SceneTime.Rate;
  FVar2 = (param_1->MetaData).SceneTime.Time;
  iVar5 = FVar1.Denominator;
  fStackX_c = FVar2.SubFrame;
  dVar7 = ((double)iVar5 * (double)fStackX_c +
          (double)((longlong)iVar5 * (longlong)FVar2.FrameNumber.Value.Value)) /
          (double)FVar1.Numerator;
  dVar8 = dVar7 - this->LastSceneTime;
  if ((__real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (this->LastSceneTime = dVar7, bVar4 != false)) {
    FVar1 = (param_1->ArrivalTime).SceneTime.Rate;
    FVar2 = (param_1->ArrivalTime).SceneTime.Time;
    iVar5 = FVar1.Denominator;
    fStackX_c = FVar2.SubFrame;
    FClockOffsetEstimatorRamp::UpdateEstimation
              (&this->TimecodeClockOffset,dVar7,
               ((double)iVar5 * (double)fStackX_c +
               (double)((longlong)iVar5 * (longlong)FVar2.FrameNumber.Value.Value)) /
               (double)FVar1.Numerator);
  }
  lVar6 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if (lVar6 == 0) {
    dVar8 = (this->EngineClockOffset).EstimatedOffset;
  }
  else {
    *(double *)(lVar6 + 0x40) = (this->EngineClockOffset).EstimatedOffset;
    *(double *)(lVar6 + 0x78) = (this->TimecodeClockOffset).EstimatedOffset;
    dVar8 = (this->EngineClockOffset).EstimatedOffset;
  }
  (param_1->WorldTime).Offset = dVar8;
  return;
}

// RemoveChannel @ 14d078e50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FLiveLinkTimedDataInput::RemoveChannel
          (FLiveLinkTimedDataInput *this,ITimedDataInputChannel *param_1)

{
  ITimedDataInputChannel *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            (&this->Channels,local_res10,Default);
  return;
}

// SetDataBufferSize @ 14d07e390

void __thiscall
FLiveLinkTimedDataInput::SetDataBufferSize(FLiveLinkTimedDataInput *this,int param_1)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  pTVar3 = LiveLinkTimedDataInput::CVarLiveLinkMaxBufferSize.Ref;
  bVar4 = IsInParallelGameThread();
  lVar6 = 4;
  if (bVar4) {
LAB_14d07e3d1:
    lVar7 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_14d07e3d1;
    lVar7 = 4;
  }
  pTVar2 = LiveLinkTimedDataInput::CVarLiveLinkMinBufferSize.Ref;
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar7);
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) goto LAB_14d07e3f1;
  }
  lVar6 = 0;
LAB_14d07e3f1:
  iVar5 = *(int *)((longlong)pTVar2->ShadowedValue + lVar6);
  if (param_1 < iVar1) {
    iVar1 = param_1;
  }
  lVar6 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if (lVar6 != 0) {
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    *(int *)(lVar6 + 0x84) = iVar5;
  }
  return;
}

// SetEvaluationOffsetInSeconds @ 14d07e870

void __thiscall
FLiveLinkTimedDataInput::SetEvaluationOffsetInSeconds(FLiveLinkTimedDataInput *this,double param_1)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x28);
    if (cVar1 == '\0') {
      *(int *)(lVar2 + 0x80) = (int)param_1;
    }
    else {
      if (cVar1 == '\x01') {
        *(float *)(lVar2 + 0x38) = (float)param_1;
        return;
      }
      if (cVar1 == '\x02') {
        dVar3 = ITimedDataInput::ConvertSecondOffsetInFrameOffset
                          (param_1,*(FFrameRate *)(lVar2 + 0x54));
        *(float *)(lVar2 + 0x70) = (float)dVar3;
        return;
      }
    }
  }
  return;
}

// SetEvaluationType @ 14d07e910

void __thiscall
FLiveLinkTimedDataInput::SetEvaluationType
          (FLiveLinkTimedDataInput *this,ETimedDataInputEvaluationType param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))(this->LiveLinkClient,&this->Source)
  ;
  if (lVar2 == 0) {
    return;
  }
  if (param_1 != None) {
    if (param_1 == Timecode) {
      cVar1 = '\x02';
      goto LAB_14d07e950;
    }
    if (param_1 == PlatformTime) {
      cVar1 = '\x01';
      goto LAB_14d07e950;
    }
  }
  cVar1 = '\0';
LAB_14d07e950:
  if (*(char *)(lVar2 + 0x28) != cVar1) {
    *(char *)(lVar2 + 0x28) = cVar1;
  }
  return;
}

// UpdateSmoothEngineTimeOffset @ 14d0880e0

void __thiscall
FLiveLinkTimedDataInput::UpdateSmoothEngineTimeOffset
          (FLiveLinkTimedDataInput *this,FLiveLinkBaseFrameData *param_1)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double local_58 [4];
  
  pTVar2 = &this->FrameTimes;
  if (199 < (this->FrameTimes).ArrayNum) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    iVar8 = (this->FrameTimes).ArrayNum + -1;
    if (iVar8 != 0) {
      memmove(pFVar4,pFVar4 + 8,(longlong)iVar8 << 3);
    }
    piVar1 = &(this->FrameTimes).ArrayNum;
    *piVar1 = *piVar1 + -1;
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_58[0] = (param_1->WorldTime).Time;
  if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
      ((FScriptContainerElement *)local_58 < pFVar4 + (longlong)(this->FrameTimes).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->FrameTimes).ArrayNum;
  piVar1 = &(this->FrameTimes).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
    (this->FrameTimes).ArrayNum = iVar8;
  }
  (this->FrameTimes).ArrayNum = iVar8 + 1;
  *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_58[0];
  lVar11 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))
                     (this->LiveLinkClient,&this->Source);
  pTVar6 = LiveLinkTimedDataInput::CVarLiveLinkNumFramesForSmoothOffset.Ref;
  if (lVar11 == 0) {
    return;
  }
  bVar7 = IsInParallelGameThread();
  if (bVar7) {
LAB_14d08821a:
    lVar12 = 0;
  }
  else {
    bVar7 = IsInGameThread();
    lVar12 = 4;
    if (bVar7) goto LAB_14d08821a;
  }
  fVar3 = *(float *)((longlong)pTVar6->ShadowedValue + lVar12);
  if (fVar3 <= 0.0) {
    *(undefined8 *)(lVar11 + 0x48) = 0;
    return;
  }
  iVar8 = (this->FrameTimes).ArrayNum;
  if (iVar8 < 2) {
    return;
  }
  uVar13 = iVar8 - 2;
  uVar15 = 0;
  if ((int)uVar13 < iVar8) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = iVar8 - 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  uVar9 = 0;
  uVar15 = uVar9;
  if ((int)uVar14 < (this->FrameTimes).ArrayNum) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar16 = *(double *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar14 * 8) -
           *(double *)(pFVar4 + (longlong)(int)uVar13 * 8);
  if (__real_3fe0000000000000 < dVar16) {
    if ((int)uVar14 <= (this->FrameTimes).ArrayNum) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar14 != 0) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      iVar8 = (this->FrameTimes).ArrayNum - uVar14;
      if (iVar8 != 0) {
        memmove(pFVar4,pFVar4 + (longlong)(int)uVar14 * 8,(longlong)iVar8 << 3);
      }
      piVar1 = &(this->FrameTimes).ArrayNum;
      *piVar1 = *piVar1 - uVar14;
    }
    *(undefined8 *)(lVar11 + 0x48) = 0;
    this->NumFramesToConsiderForAverage = 1;
    return;
  }
  dVar16 = dVar16 - *(double *)(lVar11 + 0x48) / (double)fVar3;
  if (__real_3f747ae147ae147b <
      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    iVar10 = this->FrameIntervalChangeCount + 1;
    this->FrameIntervalChangeCount = iVar10;
    if (iVar10 < 5) goto LAB_14d0883f3;
    this->NumFramesToConsiderForAverage = 4;
  }
  this->FrameIntervalChangeCount = 0;
LAB_14d0883f3:
  if (this->NumFramesToConsiderForAverage < iVar8) {
    iVar10 = this->NumFramesToConsiderForAverage + 1;
    this->NumFramesToConsiderForAverage = iVar10;
    if ((iVar10 < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFramesToConsiderForAverage > 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkTimedDataInput.cpp"
                           ,0x13a,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    this->NumFramesToConsiderForAverage = iVar8;
  }
  uVar13 = iVar8 - this->NumFramesToConsiderForAverage;
  uVar15 = uVar9;
  if ((int)uVar13 < (this->FrameTimes).ArrayNum) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar15 = iVar8 - 1;
  pFVar4 = (this->FrameTimes).AllocatorInstance.Data;
  if ((int)uVar15 < (this->FrameTimes).ArrayNum) {
    uVar9 = ~uVar15 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(double *)(lVar11 + 0x48) =
       ((*(double *)((this->FrameTimes).AllocatorInstance.Data + (longlong)(int)uVar15 * 8) -
        *(double *)(pFVar4 + (longlong)(int)uVar13 * 8)) /
       (double)(this->NumFramesToConsiderForAverage + -1)) * (double)fVar3;
  return;
}

