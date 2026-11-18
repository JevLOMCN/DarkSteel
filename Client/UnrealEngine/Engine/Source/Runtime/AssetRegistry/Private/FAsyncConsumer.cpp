// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// ~FAsyncConsumer @ 142b7d760

void __thiscall UE::AssetRegistry::Premade::FAsyncConsumer::~FAsyncConsumer(FAsyncConsumer *this)

{
  if (this->Consumed != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->Consumed);
    this->Consumed = (FEvent *)0x0;
  }
  return;
}

// Consume @ 142b89d80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::AssetRegistry::Premade::FAsyncConsumer::Consume
          (FAsyncConsumer *this,UAssetRegistryImpl *param_1,FEventContext *param_2,
          ELoadResult param_3,FAssetRegistryState *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  FAssetRegistryImpl::LoadPremadeAssetRegistry(&param_1->GuardedData,param_2,param_3,param_4);
  if (this->ReferenceCount < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferenceCount >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x2e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Consumed == (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Consumed != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x2e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(this->Consumed->_padding_ + 0x10))();
  this->ReferenceCount = this->ReferenceCount + -1;
  if (this->ReferenceCount == 0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->Consumed);
    this->Consumed = (FEvent *)0x0;
  }
  return;
}

// PrepareForConsume @ 142ba10f0

void __thiscall UE::AssetRegistry::Premade::FAsyncConsumer::PrepareForConsume(FAsyncConsumer *this)

{
  code *pcVar1;
  bool bVar2;
  FEvent *pFVar3;
  
  if (this->Consumed != (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Consumed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                       ,0x2c0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->ReferenceCount = this->ReferenceCount + 1;
  this->Consumed = pFVar3;
  return;
}

// Wait @ 142bb6d60

void __thiscall
UE::AssetRegistry::Premade::FAsyncConsumer::Wait
          (FAsyncConsumer *this,
          TRWScopeLockWithPriority<UE::TWriteScopeLock<UE::AssetRegistry::Private::FRWLockWithPriority>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ReferenceCount != 0) {
    this->ReferenceCount = this->ReferenceCount + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)param_1->Lock);
    if (this->Consumed == (FEvent *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Consumed != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x2d2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(this->Consumed->_padding_ + 0x20))(this->Consumed,0xffffffff,0);
    AcquireSRWLockExclusive((PSRWLOCK)param_1->Lock);
    this->ReferenceCount = this->ReferenceCount + -1;
    if (this->ReferenceCount == 0) {
      if (this->Consumed == (FEvent *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Consumed != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                           ,0x2da,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FGenericPlatformProcess::ReturnSynchEventToPool(this->Consumed);
      this->Consumed = (FEvent *)0x0;
    }
  }
  return;
}

