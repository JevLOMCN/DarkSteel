// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FLoadAssetActionBase @ 147d788e0

FLoadAssetActionBase * __thiscall
FLoadAssetActionBase::FLoadAssetActionBase
          (FLoadAssetActionBase *this,FSoftObjectPath *param_1,FLatentActionInfo *param_2)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  UObject *pUVar2;
  TSharedPtr<FStreamableHandle,1> *pTVar3;
  UObject *local_res8;
  FString local_88;
  TSharedPtr<FStreamableHandle,1> local_78;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  ulonglong local_58;
  undefined1 local_48 [32];
  
  this->_padding_ = (longlong)&___7FLoadAssetActionBase__6B_;
  FSoftObjectPath::FSoftObjectPath(&this->SoftObjectPath,param_1);
  FStreamableManager::FStreamableManager(&this->StreamableManager);
  pTVar1 = &this->Handle;
  pTVar1->Object = (FStreamableHandle *)0x0;
  (this->Handle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ExecutionFunction = param_2->ExecutionFunction;
  this->OutputLink = param_2->Linkage;
  pUVar2 = (param_2->CallbackTarget).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  (this->CallbackTarget).ObjectIndex = 0;
  (this->CallbackTarget).ObjectSerialNumber = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&this->CallbackTarget,(FObjectPtr)&local_res8);
  local_48._0_4_ = 0xc0f;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetSystemLibrary.cpp"
  ;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_48._16_8_ =
       "__cdecl FLoadAssetActionBase::FLoadAssetActionBase(const struct FSoftObjectPath &,const struct FLatentActionInfo &)"
  ;
  local_58 = 0;
  local_68 = (undefined1  [8])0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_48._4_4_ = 0x1e;
  pTVar3 = FStreamableManager::
           RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>,void>
                     (&this->StreamableManager,&local_78,&this->SoftObjectPath,
                      (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                       *)local_68,0,false,false,&local_88,(FSourceLocation *)local_48);
  if (pTVar1 != pTVar3) {
    pTVar1->Object = pTVar3->Object;
    pTVar3->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Handle).SharedReferenceCount,&pTVar3->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)local_48);
  if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (local_48[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_48._8_8_,(FDestructionSentinel *)local_48);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return this;
}

// ~FLoadAssetActionBase @ 147d7b540

void __thiscall FLoadAssetActionBase::~FLoadAssetActionBase(FLoadAssetActionBase *this)

{
  FStreamableHandle *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLoadAssetActionBase__6B_;
  this_00 = (this->Handle).Object;
  if (this_00 != (FStreamableHandle *)0x0) {
    FStreamableHandle::ReleaseHandle(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Handle).SharedReferenceCount.ReferenceController);
  FStreamableManager::~FStreamableManager(&this->StreamableManager);
  pFVar1 = (this->SoftObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  return;
}

// OnLoaded @ 147db8600

void __thiscall FLoadAssetActionBase::OnLoaded(FLoadAssetActionBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetSystemLibrary.cpp"
             ,0xc07,L"Pure virtual not implemented (%s)");
  return;
}

// UpdateOperation @ 147dc7920

void __thiscall
FLoadAssetActionBase::UpdateOperation(FLoadAssetActionBase *this,FLatentResponse *param_1)

{
  FStreamableHandle *pFVar1;
  bool bVar2;
  
  pFVar1 = (this->Handle).Object;
  if (((pFVar1 == (FStreamableHandle *)0x0) || (pFVar1->bLoadCompleted != false)) ||
     (pFVar1->bCanceled != false)) {
    bVar2 = true;
    (**(code **)(this->_padding_ + 0x20))();
  }
  else {
    bVar2 = false;
  }
  FLatentResponse::FinishAndTriggerIf
            (param_1,bVar2,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

