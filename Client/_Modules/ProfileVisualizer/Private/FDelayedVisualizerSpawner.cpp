// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 5

// ~FDelayedVisualizerSpawner @ 148d58630

void __thiscall
FDelayedVisualizerSpawner::~FDelayedVisualizerSpawner(FDelayedVisualizerSpawner *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDelayedVisualizerSpawner__6B_;
  DestructItems<TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1>,int>
            ((TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1> *)
             (this->VisualizerDataToSpawn).AllocatorInstance.Data,
             (this->VisualizerDataToSpawn).ArrayNum);
  pFVar1 = (this->VisualizerDataToSpawn).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  return;
}

// GetStatId @ 148d7d1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FDelayedVisualizerSpawner::GetStatId(FDelayedVisualizerSpawner *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FDelayedVisualizerSpawner::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FDelayedVisualizerSpawner::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FDelayedVisualizerSpawner::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FDelayedVisualizerSpawner = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FDelayedVisualizerSpawner");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FDelayedVisualizerSpawner::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FDelayedVisualizerSpawner,*pFVar1,L"FDelayedVisualizerSpawner",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FDelayedVisualizerSpawner::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FDelayedVisualizerSpawner;
  if (_StatPtr_FDelayedVisualizerSpawner == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FDelayedVisualizerSpawner");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FDelayedVisualizerSpawner::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FDelayedVisualizerSpawner,*pFVar1,
                       L"FDelayedVisualizerSpawner","STATGROUP_Tickables","STATCAT_Advanced",
                       L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 148d7d3a0

ETickableTickType __thiscall
FDelayedVisualizerSpawner::GetTickableTickType(FDelayedVisualizerSpawner *this)

{
  return Always;
}

// IsTickableWhenPaused @ 148d801b0

bool __thiscall FDelayedVisualizerSpawner::IsTickableWhenPaused(FDelayedVisualizerSpawner *this)

{
  return true;
}

// Tick @ 148d92560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDelayedVisualizerSpawner::Tick(FDelayedVisualizerSpawner *this,float param_1)

{
  TArray<TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FText *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  longlong lVar9;
  uint uVar10;
  TSharedPtr<FVisualizerEvent,1> local_48;
  TSharedRef<SDockTab,1> local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  uVar10 = 0;
  pTVar1 = &this->VisualizerDataToSpawn;
  if (0 < (this->VisualizerDataToSpawn).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->VisualizerDataToSpawn).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 + 8);
      pFVar4 = *(FText **)(pFVar2 + lVar9);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8 = FText::GetEmpty();
      if ((pFVar4 == (FText *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pFVar4 == (FText *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_48.Object = (FVisualizerEvent *)pFVar4[2].TextData.Reference;
      local_48.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&pFVar4[2].Flags;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      MakeProfileVisualizerWindow
                (&local_38,&local_48,pFVar4,pFVar4 + 1,pFVar8,&FLinearColor::White,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar10 < (this->VisualizerDataToSpawn).ArrayNum);
  }
  DestructItems<TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1>,int>
            ((TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1> *)
             (pTVar1->AllocatorInstance).Data,(this->VisualizerDataToSpawn).ArrayNum);
  (this->VisualizerDataToSpawn).ArrayNum = 0;
  if ((this->VisualizerDataToSpawn).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,&(this->VisualizerDataToSpawn).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x000148d9278d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  return;
}

