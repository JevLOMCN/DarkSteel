// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 28

// FCurveSequence @ 14242cad0

FCurveSequence * __thiscall
FCurveSequence::FCurveSequence
          (FCurveSequence *this,float param_1,float param_2,ECurveEaseFunction param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FCurveHandle local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->OwnerWidget).Object = (SWidget *)0x0;
  (this->OwnerWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTimerHandle).Object = (FActiveTimerHandle *)0x0;
  (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).ArrayNum = 0;
  (this->Curves).ArrayMax = 0;
  this->StartTime = 0.0;
  this->PauseTime = 0.0;
  this->TotalDuration = 0.0;
  puVar2 = &this->field_0x68;
  this->bInReverse = '\x01';
  this->bIsPaused = '\0';
  this->bIsLooping = '\0';
  AddCurve(this,&local_18,param_1,param_2,param_3);
  return this;
}

// FCurveSequence @ 14242cb40

FCurveSequence * __thiscall FCurveSequence::FCurveSequence(FCurveSequence *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->OwnerWidget).Object = (SWidget *)0x0;
  (this->OwnerWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTimerHandle).Object = (FActiveTimerHandle *)0x0;
  (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).ArrayNum = 0;
  (this->Curves).ArrayMax = 0;
  this->StartTime = 0.0;
  this->PauseTime = 0.0;
  this->TotalDuration = 0.0;
  puVar2 = &this->field_0x68;
  this->bInReverse = '\x01';
  this->bIsPaused = '\0';
  this->bIsLooping = '\0';
  return this;
}

// ~FCurveSequence @ 14242ec60

void __thiscall FCurveSequence::~FCurveSequence(FCurveSequence *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  atomic<int> aVar9;
  SWidget *pSVar10;
  SWidget *pSVar11;
  SWidget *pSVar12;
  SWidget *this_00;
  bool bVar13;
  TSharedRef<FActiveTimerHandle,1> local_28;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  if (((((this->OwnerWidget).Object == (SWidget *)0x0) ||
       (pTVar5 = (this->OwnerWidget).WeakReferenceCount.ReferenceController,
       pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) ||
     ((((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0 ||
       (pTVar5 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
       pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1))))
  goto LAB_14242edd5;
  pSVar11 = (SWidget *)(this->OwnerWidget).WeakReferenceCount.ReferenceController;
  pSVar12 = (SWidget *)0x0;
  pSVar10 = pSVar11;
  this_00 = pSVar12;
  if (pSVar11 == (SWidget *)0x0) {
LAB_14242ecf5:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar11 = pSVar10;
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar10 = pSVar12;
      this_00 = (SWidget *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14242ecf5;
      LOCK();
      aVar9 = *(atomic<int> *)&pSVar11->_padding_;
      bVar13 = aVar3 == aVar9;
      if (bVar13) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar13);
    this_00 = (this->OwnerWidget).Object;
    pSVar10 = pSVar11;
    if (this_00 == (SWidget *)0x0) goto LAB_14242ecf5;
  }
  local_28.SharedReferenceCount.ReferenceController =
       (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  pSVar10 = (SWidget *)local_28.SharedReferenceCount.ReferenceController;
  if ((SWidget *)local_28.SharedReferenceCount.ReferenceController == (SWidget *)0x0) {
LAB_14242ed45:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar10;
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)
             &((SWidget *)local_28.SharedReferenceCount.ReferenceController)->_padding_;
    do {
      pSVar10 = pSVar12;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14242ed45;
      LOCK();
      aVar9 = *(atomic<int> *)
               &((SWidget *)local_28.SharedReferenceCount.ReferenceController)->_padding_;
      bVar13 = aVar3 == aVar9;
      if (bVar13) {
        *(atomic<int> *)&((SWidget *)local_28.SharedReferenceCount.ReferenceController)->_padding_ =
             (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar13);
    pSVar12 = (SWidget *)(this->ActiveTimerHandle).Object;
    pSVar10 = (SWidget *)local_28.SharedReferenceCount.ReferenceController;
    if (pSVar12 == (SWidget *)0x0) goto LAB_14242ed45;
  }
  local_28.Object = (FActiveTimerHandle *)pSVar12;
  if ((pSVar12 == (SWidget *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::UnRegisterActiveTimer(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
LAB_14242edd5:
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar5 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar5->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  pFVar6 = (this->Curves).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->OwnerWidget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014242eea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return;
    }
  }
  return;
}

// AddCurve @ 1424329c0

FCurveHandle * __thiscall
FCurveSequence::AddCurve
          (FCurveSequence *this,FCurveHandle *__return_storage_ptr__,float param_1,float param_2,
          ECurveEaseFunction param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCurveHandle *pFVar6;
  double dVar7;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  
  local_10 = CONCAT31(local_10._1_3_,param_3);
  dVar7 = (double)(param_1 + param_2);
  if ((double)(param_1 + param_2) <= this->TotalDuration) {
    dVar7 = this->TotalDuration;
  }
  this->TotalDuration = dVar7;
  this->StartTime = dVar7;
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  local_18 = param_2;
  fStack_14 = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->Curves).ArrayMax * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FCurveHandle *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->Curves).ArrayNum;
  piVar1 = &(this->Curves).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Curves).AllocatorInstance,piVar1);
  }
  (this->Curves).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  __return_storage_ptr__->OwnerSequence = this;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(fStack_14,local_18);
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_10;
  __return_storage_ptr__->CurveIndex = (this->Curves).ArrayNum + -1;
  return __return_storage_ptr__;
}

// AddCurveRelative @ 142432ae0

FCurveHandle * __thiscall
FCurveSequence::AddCurveRelative
          (FCurveSequence *this,FCurveHandle *__return_storage_ptr__,float param_1,float param_2,
          ECurveEaseFunction param_3)

{
  AddCurve(this,__return_storage_ptr__,(float)this->TotalDuration + param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// EnsureSlateTickDuringAnimation @ 14243b800

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EActiveTimerReturnType __thiscall
FCurveSequence::EnsureSlateTickDuringAnimation(FCurveSequence *this,double param_1,float param_2)

{
  FSlateApplicationBase *pFVar1;
  double dVar2;
  
  if (this->bIsPaused != '\0') {
    return Stop;
  }
  if (this->bIsLooping == '\0') {
    pFVar1 = FSlateApplicationBase::Get();
    dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
    dVar2 = dVar2 - this->StartTime;
    if (this->TotalDuration <= dVar2 && dVar2 != this->TotalDuration) {
      return Stop;
    }
  }
  return Continue;
}

// GetCurve @ 14243ea90

FSlateCurve * __thiscall FCurveSequence::GetCurve(FCurveSequence *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlateCurve *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Curves).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateCurve *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSlateCurve *)((this->Curves).AllocatorInstance.Data + (longlong)param_1 * 0xc);
}

// GetLerp @ 14243f230

float __thiscall FCurveSequence::GetLerp(FCurveSequence *this)

{
  float fVar1;
  FCurveHandle local_18;
  
  local_18.CurveIndex = 0;
  local_18.OwnerSequence = this;
  fVar1 = FCurveHandle::GetLerp(&local_18);
  return fVar1;
}

// GetSequenceTime @ 14243fad0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __thiscall FCurveSequence::GetSequenceTime(FCurveSequence *this)

{
  FSlateApplicationBase *pFVar1;
  float fVar2;
  double dVar3;
  
  if (this->bIsPaused == '\0') {
    pFVar1 = FSlateApplicationBase::Get();
    dVar3 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  }
  else {
    dVar3 = this->PauseTime;
  }
  dVar3 = dVar3 - this->StartTime;
  if (this->bInReverse != 0) {
    dVar3 = this->TotalDuration - dVar3;
  }
  if (this->bIsLooping == '\0') {
    return (float)dVar3;
  }
  fVar2 = FGenericPlatformMath::Fmod((float)dVar3,(float)this->TotalDuration);
  return fVar2;
}

// IsAtEnd @ 142445750

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FCurveSequence::IsAtEnd(FCurveSequence *this)

{
  undefined1 *puVar1;
  FSlateApplicationBase *pFVar2;
  double dVar3;
  
  if ((~this->bInReverse & 1) == 0) {
    return false;
  }
  if (this->bIsPaused == '\0') {
    if (this->bIsLooping != '\0') {
      return false;
    }
    pFVar2 = FSlateApplicationBase::Get();
    dVar3 = (double)(**(code **)(*(longlong *)pFVar2 + 0x60))(pFVar2);
    dVar3 = dVar3 - this->StartTime;
    if (dVar3 < this->TotalDuration || dVar3 == this->TotalDuration) {
      return false;
    }
  }
  if (this->bIsLooping != '\0') {
    return false;
  }
  return true;
}

// IsAtStart @ 1424457b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FCurveSequence::IsAtStart(FCurveSequence *this)

{
  undefined1 *puVar1;
  FSlateApplicationBase *pFVar2;
  double dVar3;
  
  if (this->bInReverse == 0) {
    return false;
  }
  if (this->bIsPaused == '\0') {
    if (this->bIsLooping != '\0') {
      return false;
    }
    pFVar2 = FSlateApplicationBase::Get();
    dVar3 = (double)(**(code **)(*(longlong *)pFVar2 + 0x60))(pFVar2);
    dVar3 = dVar3 - this->StartTime;
    if (dVar3 < this->TotalDuration || dVar3 == this->TotalDuration) {
      return false;
    }
  }
  if (this->bIsLooping != '\0') {
    return false;
  }
  return true;
}

// IsForward @ 142445860

bool __thiscall FCurveSequence::IsForward(FCurveSequence *this)

{
  return (bool)(~this->bInReverse & 1);
}

// IsInReverse @ 142445870

bool __thiscall FCurveSequence::IsInReverse(FCurveSequence *this)

{
  return this->bInReverse;
}

// IsLooping @ 142445880

bool __thiscall FCurveSequence::IsLooping(FCurveSequence *this)

{
  return this->bIsLooping;
}

// IsPlaying @ 1424458a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FCurveSequence::IsPlaying(FCurveSequence *this)

{
  FSlateApplicationBase *pFVar1;
  double dVar2;
  
  if (this->bIsPaused != '\0') {
    return false;
  }
  if (this->bIsLooping == '\0') {
    pFVar1 = FSlateApplicationBase::Get();
    dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
    dVar2 = dVar2 - this->StartTime;
    if (this->TotalDuration <= dVar2 && dVar2 != this->TotalDuration) {
      return false;
    }
  }
  return true;
}

// JumpToEnd @ 142445cd0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FCurveSequence::JumpToEnd(FCurveSequence *this)

{
  undefined1 *puVar1;
  FSlateApplicationBase *pFVar2;
  double dVar3;
  
  this->bInReverse = '\0';
  this->bIsPaused = '\0';
  this->bIsLooping = '\0';
  pFVar2 = FSlateApplicationBase::Get();
  dVar3 = (double)(**(code **)(*(longlong *)pFVar2 + 0x60))(pFVar2);
  this->StartTime = dVar3 - this->TotalDuration;
  return;
}

// JumpToStart @ 142445d10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FCurveSequence::JumpToStart(FCurveSequence *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FSlateApplicationBase *pFVar3;
  double dVar4;
  
  puVar2 = &this->field_0x68;
  this->bInReverse = '\x01';
  this->bIsPaused = '\0';
  this->bIsLooping = '\0';
  pFVar3 = FSlateApplicationBase::Get();
  dVar4 = (double)(**(code **)(*(longlong *)pFVar3 + 0x60))(pFVar3);
  this->StartTime = dVar4 - this->TotalDuration;
  return;
}

// Pause @ 14244a940

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FCurveSequence::Pause(FCurveSequence *this)

{
  FSlateApplicationBase *pFVar1;
  double dVar2;
  
  if (this->bIsPaused == '\0') {
    if (this->bIsLooping == '\0') {
      pFVar1 = FSlateApplicationBase::Get();
      dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
      dVar2 = dVar2 - this->StartTime;
      if (this->TotalDuration <= dVar2 && dVar2 != this->TotalDuration) {
        return;
      }
    }
    this->bIsPaused = '\x01';
    pFVar1 = FSlateApplicationBase::Get();
    dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
    this->PauseTime = dVar2;
  }
  return;
}

// Play @ 14244a9a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FCurveSequence::Play
          (FCurveSequence *this,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *param_1,
          bool param_2,float param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplicationBase *pFVar4;
  FTSTicker *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  TWeakPtr<FTSTicker::FElement,1> *pTVar7;
  double dVar8;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this->field_0x68 = this->field_0x68 & 0xf8 | param_2 * '\x02';
  pFVar4 = FSlateApplicationBase::Get();
  dVar8 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
  this->StartTime = dVar8 - (double)param_3;
  this_00 = FTSTicker::GetCoreTicker();
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar5 + 1),param_1);
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[4] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar5[6] = TickPlay;
    puVar5[5] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar7 = FTSTicker::AddTicker
                     (this_00,&local_78,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
  if (&this->TickerHandle != pTVar7) {
    (this->TickerHandle).Object = pTVar7->Object;
    pTVar7->Object = (FElement *)0x0;
    pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar7->WeakReferenceCount).ReferenceController;
    (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// Play @ 14244ab90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FCurveSequence::Play
          (FCurveSequence *this,TSharedRef<SWidget,1> *param_1,bool param_2,float param_3,
          bool param_4)

{
  FSlateApplicationBase *pFVar1;
  double dVar2;
  TSharedRef<SWidget,1> local_28 [2];
  
  if (param_4) {
    local_28[0].Object = param_1->Object;
    local_28[0].SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    RegisterActiveTimerIfNeeded(this,local_28);
  }
  this->field_0x68 = this->field_0x68 & 0xf8 | param_2 * '\x02';
  pFVar1 = FSlateApplicationBase::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->StartTime = dVar2 - (double)param_3;
  return;
}

// PlayRelative @ 14244ac20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FCurveSequence::PlayRelative(FCurveSequence *this,TSharedRef<SWidget,1> *param_1,bool param_2)

{
  undefined1 *puVar1;
  double dVar2;
  byte bVar3;
  FSlateApplicationBase *pFVar4;
  undefined1 *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  TSharedRef<SWidget,1> local_48 [3];
  
  if (this->bIsPaused != '\0') {
LAB_14244ad17:
    puVar1 = &this->field_0x68;
    if (param_2) {
      if ((param_2 & *puVar1) == 0) {
        return;
      }
      if (this->bIsPaused == '\0') {
        if (this->bIsLooping != '\0') {
          return;
        }
        pFVar4 = FSlateApplicationBase::Get();
        dVar7 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
        dVar7 = dVar7 - this->StartTime;
        if (dVar7 < this->TotalDuration || dVar7 == this->TotalDuration) {
          return;
        }
      }
      puVar5 = &this->field_0x68;
      if (this->bIsLooping != '\0') {
        return;
      }
      local_48[0].Object = param_1->Object;
      local_48[0].SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_48[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        (local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
        ;
        UNLOCK();
      }
      RegisterActiveTimerIfNeeded(this,local_48);
      this->bIsLooping = '\0';
      bVar3 = *puVar5 & 0xfa;
    }
    else {
      if ((~this->bInReverse & 1) == 0) {
        return;
      }
      if (this->bIsPaused == '\0') {
        if (this->bIsLooping != '\0') {
          return;
        }
        pFVar4 = FSlateApplicationBase::Get();
        dVar7 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
        dVar7 = dVar7 - this->StartTime;
        if (dVar7 < this->TotalDuration || dVar7 == this->TotalDuration) {
          return;
        }
      }
      puVar5 = &this->field_0x68;
      if (this->bIsLooping != '\0') {
        return;
      }
      local_48[0].Object = param_1->Object;
      local_48[0].SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_48[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        (local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
        ;
        UNLOCK();
      }
      RegisterActiveTimerIfNeeded(this,local_48);
      this->bIsLooping = '\0';
      bVar3 = *puVar5 & 0xfb | 1;
    }
    this->field_0x68 = bVar3;
    pFVar4 = FSlateApplicationBase::Get();
    dVar7 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
    this->StartTime = dVar7;
    return;
  }
  if (this->bIsLooping == '\0') {
    pFVar4 = FSlateApplicationBase::Get();
    dVar7 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
    dVar7 = dVar7 - this->StartTime;
    if (this->TotalDuration <= dVar7 && dVar7 != this->TotalDuration) goto LAB_14244ad17;
  }
  if ((bool)(~this->bInReverse & 1) == param_2) {
    return;
  }
  fVar6 = GetSequenceTime(this);
  dVar2 = __real_3ff0000000000000;
  this->field_0x68 = this->field_0x68 ^ 1;
  dVar7 = (double)fVar6 / this->TotalDuration;
  if (dVar2 <= dVar7) {
    dVar7 = dVar2;
  }
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  pFVar4 = FSlateApplicationBase::Get();
  dVar8 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
  if (this->bInReverse != 0) {
    dVar7 = dVar2 - dVar7;
  }
  this->StartTime = dVar8 - dVar7 * this->TotalDuration;
  return;
}

// PlayReverse @ 14244ae60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FCurveSequence::PlayReverse
          (FCurveSequence *this,TSharedRef<SWidget,1> *param_1,bool param_2,float param_3,
          bool param_4)

{
  FSlateApplicationBase *pFVar1;
  double dVar2;
  TSharedRef<SWidget,1> local_28 [2];
  
  if (param_4) {
    local_28[0].Object = param_1->Object;
    local_28[0].SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    RegisterActiveTimerIfNeeded(this,local_28);
  }
  this->bIsLooping = '\0';
  this->field_0x68 = param_2 * '\x02' | this->field_0x68 & 0xfb | 1;
  pFVar1 = FSlateApplicationBase::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->StartTime = dVar2 - (double)param_3;
  return;
}

// RegisterActiveTimerIfNeeded @ 14244db10

void __thiscall
FCurveSequence::RegisterActiveTimerIfNeeded(FCurveSequence *this,TSharedRef<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TSharedRef<FActiveTimerHandle,1> *pTVar9;
  TSharedRef<FActiveTimerHandle,1> local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if ((((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar3 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    this_00 = param_1->Object;
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[4] = EnsureSlateTickDuringAnimation;
      puVar7[3] = this;
      if ((this == (FCurveSequence *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    pTVar9 = SWidget::RegisterActiveTimer
                       (this_00,&local_58,0.0,
                        (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                         *)local_48);
    (this->ActiveTimerHandle).Object = pTVar9->Object;
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    (this->OwnerWidget).Object = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->OwnerWidget).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->OwnerWidget).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->OwnerWidget).WeakReferenceCount.ReferenceController = pTVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Resume @ 142450b30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FCurveSequence::Resume(FCurveSequence *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSlateApplicationBase *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  double dVar6;
  TSharedRef<SWidget,1> local_18;
  
  if (this->bIsPaused != '\0') {
    pTVar4 = (this->OwnerWidget).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar4->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142450b64;
        }
        LOCK();
        aVar2 = pTVar4->SharedReferenceCount;
        bVar5 = aVar1 == aVar2;
        if (bVar5) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar2 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar2;
      } while (!bVar5);
      local_18.Object = (this->OwnerWidget).Object;
      if (local_18.Object != (SWidget *)0x0) {
        this->bIsPaused = '\0';
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        local_18.SharedReferenceCount.ReferenceController = pTVar4;
        RegisterActiveTimerIfNeeded(this,&local_18);
        pFVar3 = FSlateApplicationBase::Get();
        dVar6 = (double)(**(code **)(*(longlong *)pFVar3 + 0x60))(pFVar3);
        this->StartTime = dVar6 - (this->PauseTime - this->StartTime);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        return;
      }
    }
LAB_142450b64:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// Reverse @ 142450d80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FCurveSequence::Reverse(FCurveSequence *this)

{
  double dVar1;
  double dVar2;
  FSlateApplicationBase *pFVar3;
  float fVar4;
  double dVar5;
  
  fVar4 = GetSequenceTime(this);
  dVar2 = __real_3ff0000000000000;
  this->field_0x68 = this->field_0x68 ^ 1;
  dVar1 = (double)fVar4 / this->TotalDuration;
  if (dVar2 <= dVar1) {
    dVar1 = dVar2;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  pFVar3 = FSlateApplicationBase::Get();
  dVar5 = (double)(**(code **)(*(longlong *)pFVar3 + 0x60))(pFVar3);
  if (this->bInReverse != 0) {
    dVar1 = dVar2 - dVar1;
  }
  this->StartTime = dVar5 - dVar1 * this->TotalDuration;
  return;
}

// SetStartTime @ 1424524b0

void __thiscall FCurveSequence::SetStartTime(FCurveSequence *this,double param_1)

{
  this->StartTime = param_1;
  return;
}

// TickPlay @ 1424530c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FCurveSequence::TickPlay
          (FCurveSequence *this,float param_1,
          TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_bool___cdecl_FCurveSequence::TickPlay(float,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>)_::_2_::FStat_STAT_FCurveSequence_TickPlay>
  FVar8;
  FSlateApplicationBase *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  longlong *plVar14;
  bool bVar15;
  double dVar16;
  LARGE_INTEGER local_res18;
  FName local_res20;
  undefined1 local_68 [12];
  uint local_5c;
  
  plVar14 = (longlong *)0x0;
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCurveSequence_TickPlay ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_FCurveSequence::TickPlay(float,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>)_::_2_::FStat_STAT_FCurveSequence_TickPlay>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res18.s,"STAT_FCurveSequence_TickPlay");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurveSequence_TickPlay,*pFVar7,
                 L"STAT_FCurveSequence_TickPlay","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_FCurveSequence_TickPlay;
  if (StatPtr_STAT_FCurveSequence_TickPlay ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FCurveSequence::TickPlay(float,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>)_::_2_::FStat_STAT_FCurveSequence_TickPlay>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_FCurveSequence_TickPlay");
    FVar8 = (FThreadSafeStaticStat<_private:_bool___cdecl_FCurveSequence::TickPlay(float,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>)_::_2_::FStat_STAT_FCurveSequence_TickPlay>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurveSequence_TickPlay,*pFVar7,
                         L"STAT_FCurveSequence_TickPlay","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_142453256:
    bVar4 = false;
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar11.Value;
        local_res18.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Animation\\CurveSequence.cpp"
                   ,0x11a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142453256;
    local_res18.s.LowPart = FVar11.Value;
    local_res18.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
    FVar13.Value = FVar11.Value;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)local_68);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar6 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar6 == '\0')) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_68);
  if (bVar15) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)local_68);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar14 = *(longlong **)&param_2->field_0x8;
    }
    cVar6 = (**(code **)(*plVar14 + 0x60))(plVar14,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_68);
    if ((cVar6 != '\0') && (this->bIsPaused == '\0')) {
      if (this->bIsLooping == '\0') {
        pFVar9 = FSlateApplicationBase::Get();
        dVar16 = (double)(**(code **)(*(longlong *)pFVar9 + 0x60))(pFVar9);
        dVar16 = dVar16 - this->StartTime;
        if (this->TotalDuration <= dVar16 && dVar16 != this->TotalDuration) goto LAB_14245330e;
      }
      bVar15 = true;
      goto LAB_142453311;
    }
  }
LAB_14245330e:
  bVar15 = false;
LAB_142453311:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_5c = FVar12.Number & 0xffff6fff | 0x6000;
      local_68._8_4_ = FVar13.Value;
      QueryPerformanceCounter(&local_res18);
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[0] = local_res18.s.LowPart._0_1_;
      local_68[1] = local_res18.s.LowPart._1_1_;
      local_68[2] = local_res18.s.LowPart._2_1_;
      local_68[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return bVar15;
}

// operator= @ 1425c2c00

FCurveSequence * __thiscall FCurveSequence::operator=(FCurveSequence *this,FCurveSequence *param_1)

{
  atomic<int> *paVar1;
  TArray<FCurveSequence::FSlateCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  FActiveTimerHandle *pFVar8;
  FElement *pFVar9;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar10;
  byte bVar11;
  
  pTVar6 = (param_1->OwnerWidget).WeakReferenceCount.ReferenceController;
  pSVar7 = (param_1->OwnerWidget).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this->OwnerWidget).WeakReferenceCount.ReferenceController;
  (this->OwnerWidget).Object = pSVar7;
  (this->OwnerWidget).WeakReferenceCount.ReferenceController = pTVar6;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  pTVar6 = (param_1->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  pFVar8 = (param_1->ActiveTimerHandle).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  (this->ActiveTimerHandle).Object = pFVar8;
  (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController = pTVar6;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  pTVar6 = (param_1->TickerHandle).WeakReferenceCount.ReferenceController;
  pFVar9 = (param_1->TickerHandle).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  (this->TickerHandle).Object = pFVar9;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = pTVar6;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  pTVar2 = &this->Curves;
  if (pTVar2 != &param_1->Curves) {
    iVar5 = (param_1->Curves).ArrayNum;
    piVar3 = &(this->Curves).ArrayMax;
    _Src = (param_1->Curves).AllocatorInstance.Data;
    (this->Curves).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,*piVar3,&pTVar2->AllocatorInstance,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0xc);
      }
    }
  }
  this->StartTime = param_1->StartTime;
  this->PauseTime = param_1->PauseTime;
  this->TotalDuration = param_1->TotalDuration;
  bVar11 = (this->bInReverse ^ param_1->bInReverse) & 1 ^ this->field_0x68;
  this->field_0x68 = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x68) & 2 ^ bVar11;
  this->field_0x68 = bVar11;
  this->field_0x68 = (bVar11 ^ param_1->field_0x68) & 4 ^ bVar11;
  return this;
}

