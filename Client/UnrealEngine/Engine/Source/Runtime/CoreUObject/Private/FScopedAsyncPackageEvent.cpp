// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FScopedAsyncPackageEvent @ 141ed3be0

FScopedAsyncPackageEvent * __thiscall
FScopedAsyncPackageEvent::FScopedAsyncPackageEvent
          (FScopedAsyncPackageEvent *this,FAsyncPackage *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FScopedAsyncPackageEvent *pFVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar7;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  this->Package = param_1;
  if (param_1 == (FAsyncPackage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x6c6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedAsyncPackageEvent *)(*pcVar2)();
      return pFVar4;
    }
  }
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  this->PreviousPackage = (FAsyncPackage *)pFVar6[8];
  pFVar6[8] = (FTlsAutoCleanup)this->Package;
  this->PreviousAsyncPackageLoader = (IAsyncPackageLoader *)pFVar6[9];
  FVar7 = (FTlsAutoCleanup)&param_1->AsyncLoadingThread->_padding_;
  if (param_1->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar7 = (FTlsAutoCleanup)0x0;
  }
  pFVar6[9] = FVar7;
  FAsyncPackage::BeginAsyncLoad(this->Package);
  FVar1 = (this->Package->Desc).PackagePath.PackageName;
  this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    this_00 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar1);
  return this;
}

// ~FScopedAsyncPackageEvent @ 141ed5c70

void __thiscall FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(FScopedAsyncPackageEvent *this)

{
  FLinkerLoad *pFVar1;
  FExclusiveLoadPackageTimeTracker *this_00;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  UPackage *pUVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  pFVar1 = this->Package->Linker;
  if (pFVar1 == (FLinkerLoad *)0x0) {
    pUVar4 = (UPackage *)0x0;
  }
  else {
    pUVar4 = (UPackage *)pFVar1->_padding_;
  }
  this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    this_00 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPopLoadPackage(this_00,pUVar4,(UObject *)0x0);
  FAsyncPackage::EndAsyncLoad(this->Package);
  this->Package->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  this->Package->LastTypeOfWorkPerformed = (wchar_t *)0x0;
  puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
  pFVar3[8] = (FTlsAutoCleanup)this->PreviousPackage;
  pFVar3[9] = (FTlsAutoCleanup)this->PreviousAsyncPackageLoader;
  return;
}

