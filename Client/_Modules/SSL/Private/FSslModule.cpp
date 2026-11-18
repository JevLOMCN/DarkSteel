// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 4

// FSslModule @ 143146250

FSslModule * __thiscall FSslModule::FSslModule(FSslModule *this)

{
  this->_padding_ = (longlong)&___7FSslModule__6B_;
  this->CertificateManagerPtr = (ISslCertificateManager *)0x0;
  this->SslManagerPtr = (ISslManager *)0x0;
  return this;
}

// Get @ 143147790

FSslModule * __cdecl FSslModule::Get(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FSslModule *pFVar4;
  FName *pFVar5;
  FModuleManager *this;
  FName local_res8 [4];
  
  if (Singleton == (FSslModule *)0x0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslModule.cpp"
                           ,0x49,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSslModule *)(*pcVar2)();
      return pFVar4;
    }
    pFVar5 = ::FName::FName(local_res8,"SSL");
    FVar1 = *pFVar5;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar1);
    if ((Singleton == (FSslModule *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslModule.cpp"
                           ,0x4c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSslModule *)(*pcVar2)();
      return pFVar4;
    }
  }
  return Singleton;
}

// ShutdownModule @ 143148200

void __thiscall FSslModule::ShutdownModule(FSslModule *this)

{
  ISslCertificateManager *pIVar1;
  ISslManager *pIVar2;
  
  (**(code **)((longlong)*this->CertificateManagerPtr + 0x50))();
  pIVar1 = this->CertificateManagerPtr;
  if (pIVar1 != (ISslCertificateManager *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = this->SslManagerPtr;
  if (pIVar2 != (ISslManager *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Singleton = (FSslModule *)0x0;
  return;
}

// StartupModule @ 1431482c0

void __thiscall FSslModule::StartupModule(FSslModule *this)

{
  int iVar1;
  ISslManager *pIVar2;
  ISslManager *pIVar3;
  ISslManager *pIVar4;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FScopedBootTiming local_38;
  
  Singleton = this;
  pIVar2 = ::operator_new(0x10);
  pIVar4 = (ISslManager *)0x0;
  pIVar3 = pIVar4;
  if (pIVar2 != (ISslManager *)0x0) {
    *(undefined4 *)(pIVar2 + 1) = 0;
    *pIVar2 = (ISslManager)&___7FSslManager__6B_;
    pIVar3 = pIVar2;
  }
  this->SslManagerPtr = pIVar3;
  pIVar3 = ::operator_new(0x28);
  if (pIVar3 != (ISslManager *)0x0) {
    pIVar3[1] = (ISslManager)0x0;
    *pIVar3 = (ISslManager)&___7FWindowsPlatformSslCertificateManager__6B_;
    pIVar3[2] = (ISslManager)0x0;
    pIVar3[3] = (ISslManager)0x0;
    pIVar3[4] = (ISslManager)0x0;
    pIVar4 = pIVar3;
  }
  this->CertificateManagerPtr = (ISslCertificateManager *)pIVar4;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId33,"BuildRootCertificateArray",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslModule.cpp"
               ,0x21);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId33);
  }
  FScopedBootTiming::FScopedBootTiming(&local_38,"BuildRootCertificateArray");
  (**(code **)((longlong)*this->CertificateManagerPtr + 0x48))();
  FScopedBootTiming::~FScopedBootTiming(&local_38);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  iVar1 = FConfigCacheIni::GetArray(GConfig,L"SSL",L"PinnedPublicKeys",&local_48,&GEngineIni);
  if (iVar1 != 0) {
    iVar1 = local_48.ArrayNum;
    pFVar5 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
    this_00.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00.Data == pFVar5) break;
      local_38.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Message.Data.ArrayNum = 0;
      local_38.Message.Data.ArrayMax = 0;
      ::FString::ParseIntoArray
                ((FString *)this_00.Data,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_38,
                 L":",true);
      if (local_38.Message.Data.ArrayNum == 2) {
        (**(code **)((longlong)*this->CertificateManagerPtr + 0x30))
                  (this->CertificateManagerPtr,local_38.Message.Data.AllocatorInstance.Data,
                   local_38.Message.Data.AllocatorInstance.Data + 0x10);
      }
      DestructItems<FString,int>
                ((FString *)local_38.Message.Data.AllocatorInstance.Data,
                 local_38.Message.Data.ArrayNum);
      if (local_38.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Message.Data.AllocatorInstance.Data);
      }
      this_00.Data = this_00.Data + 0x10;
    }
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

