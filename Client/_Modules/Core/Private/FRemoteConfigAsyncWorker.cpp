// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FRemoteConfigAsyncWorker @ 141917950

FRemoteConfigAsyncWorker * __thiscall
FRemoteConfigAsyncWorker::FRemoteConfigAsyncWorker
          (FRemoteConfigAsyncWorker *this,wchar_t *param_1,FRemoteConfigAsyncIOInfo *param_2,
          FString *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  FRemoteConfigAsyncWorker *pFVar5;
  int iVar6;
  
  (this->IOInfo).Buffer.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IOInfo).Buffer.Data.ArrayNum = 0;
  (this->IOInfo).Buffer.Data.ArrayMax = 0;
  (this->IOInfo).TimeStamp.Ticks = 0;
  (this->Contents).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contents).Data.ArrayNum = 0;
  (this->Contents).Data.ArrayMax = 0;
  sVar4 = wcslen(param_1);
  if (0x3ff < (int)sVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCString::Strlen(InFilename) < 1024",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                       ,0x2d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRemoteConfigAsyncWorker *)(*pcVar2)();
      return pFVar5;
    }
  }
  wcscpy(this->Filename,param_1);
  this->bIsRead = param_4;
  FRemoteConfigAsyncIOInfo::operator=(&this->IOInfo,param_2);
  if (param_3 != (FString *)0x0) {
    iVar1 = (param_3->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&this->Contents,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar6);
  }
  return this;
}

// Abandon @ 1419242e0

void __thiscall FRemoteConfigAsyncWorker::Abandon(FRemoteConfigAsyncWorker *this)

{
  return;
}

// CanAbandon @ 14192c810

bool __thiscall FRemoteConfigAsyncWorker::CanAbandon(FRemoteConfigAsyncWorker *this)

{
  return false;
}

// DoWork @ 141935030

void __thiscall FRemoteConfigAsyncWorker::DoWork(FRemoteConfigAsyncWorker *this)

{
  int iVar1;
  bool bVar2;
  IFileManager *pIVar3;
  long64 *plVar4;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  if (this->bIsRead != false) {
    pIVar3 = IFileManager::Get();
    plVar4 = (long64 *)(**(code **)((longlong)*pIVar3 + 0xd8))(pIVar3,local_res8);
    (this->IOInfo).TimeStamp.Ticks = *plVar4;
    bVar2 = FFileHelper::LoadFileToString(&(this->IOInfo).Buffer,this->Filename,None,0);
    (this->IOInfo).bReadIOFailed = !bVar2;
    return;
  }
  if (1 < (this->Contents).Data.ArrayNum) {
    pIVar3 = IFileManager::Get();
    local_18.DataPtr = (wchar_t *)(this->Contents).Data.AllocatorInstance.Data;
    iVar1 = (this->Contents).Data.ArrayNum;
    local_18.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_18.Size = 0;
    }
    FFileHelper::SaveStringToFile(&local_18,this->Filename,AutoDetect,pIVar3,0);
  }
  return;
}

// GetIOInfo @ 141948090

FRemoteConfigAsyncIOInfo * __thiscall
FRemoteConfigAsyncWorker::GetIOInfo(FRemoteConfigAsyncWorker *this)

{
  return &this->IOInfo;
}

// IsReadSuccess @ 141952360

bool __thiscall FRemoteConfigAsyncWorker::IsReadSuccess(FRemoteConfigAsyncWorker *this)

{
  return (this->IOInfo).bReadIOFailed == false;
}

