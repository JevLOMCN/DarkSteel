// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 11

// FDefaultUserAgentBuilder @ 14314cd50

FDefaultUserAgentBuilder * __thiscall
FDefaultUserAgentBuilder::FDefaultUserAgentBuilder(FDefaultUserAgentBuilder *this)

{
  wchar_t *pwVar1;
  
  ::FString::FString(&this->ProjectName,GInternalProjectName);
  pwVar1 = FApp::GetBuildVersion();
  ::FString::FString(&this->ProjectVersion,pwVar1);
  (this->ProjectComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectComments).ArrayNum = 0;
  (this->ProjectComments).ArrayMax = 0;
  ::FString::FString(&this->PlatformName,"Windows");
  FWindowsPlatformMisc::GetOSVersion(&this->PlatformVersion);
  (this->PlatformComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformComments).ArrayNum = 0;
  (this->PlatformComments).ArrayMax = 0;
  this->AgentVersion = 1;
  return this;
}

// ~FDefaultUserAgentBuilder @ 1431502f0

void __thiscall FDefaultUserAgentBuilder::~FDefaultUserAgentBuilder(FDefaultUserAgentBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->PlatformComments).AllocatorInstance.Data,
             (this->PlatformComments).ArrayNum);
  pFVar1 = (this->PlatformComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ProjectComments).AllocatorInstance.Data,
             (this->ProjectComments).ArrayNum);
  pFVar1 = (this->ProjectComments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProjectVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProjectName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddPlatformComment @ 1431548c0

void __thiscall
FDefaultUserAgentBuilder::AddPlatformComment(FDefaultUserAgentBuilder *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&this->PlatformComments,param_1);
  this->AgentVersion = this->AgentVersion + 1;
  return;
}

// AddProjectComment @ 1431548f0

void __thiscall
FDefaultUserAgentBuilder::AddProjectComment(FDefaultUserAgentBuilder *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&this->ProjectComments,param_1);
  this->AgentVersion = this->AgentVersion + 1;
  return;
}

// BuildCommentString @ 1431566e0

FString * __cdecl
FDefaultUserAgentBuilder::BuildCommentString
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined4 local_res8 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FVar6.Data = (FScriptContainerElement *)0x0;
  local_res8[0] = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  Algo::
  TransformIf<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_FDefaultUserAgentBuilder::BuildCommentString_::__l2::<lambda_1>,_FDefaultUserAgentBuilder::BuildCommentString_::__l2::<lambda_2>_>
            (param_1,&local_68,(<lambda_1>)param_2,(<lambda_2>)0x0);
  iVar1 = local_68.ArrayNum;
  if (local_68.ArrayNum == 0) {
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar5 = &local_48;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    pFVar7 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar2 = true;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FVar6.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if (local_68.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar7) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L"; ",2);
      }
      iVar8 = *(int *)(FVar6.Data + 8) + -1;
      if (*(int *)(FVar6.Data + 8) == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_58,*(wchar_t **)FVar6.Data,iVar8);
      FVar6.Data = FVar6.Data + 0x10;
    }
    ::FString::PrintfImpl(&local_38,L" (%s)");
    pFVar5 = &local_38;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar6.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  iVar1 = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildUserAgentString @ 143156890

FString * __thiscall
FDefaultUserAgentBuilder::BuildUserAgentString
          (FDefaultUserAgentBuilder *this,FString *__return_storage_ptr__,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  BuildCommentString(&local_38,&this->PlatformComments,param_2);
  FGenericPlatformHttp::EscapeUserAgentString(&local_48,&this->PlatformVersion);
  FGenericPlatformHttp::EscapeUserAgentString(&local_58,&this->PlatformName);
  BuildCommentString(&local_68,&this->ProjectComments,param_1);
  FGenericPlatformHttp::EscapeUserAgentString(&local_78,&this->ProjectVersion);
  FGenericPlatformHttp::EscapeUserAgentString(&local_88,&this->ProjectName);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%s%s %s/%s%s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAgentVersion @ 143160d60

uint __thiscall FDefaultUserAgentBuilder::GetAgentVersion(FDefaultUserAgentBuilder *this)

{
  return this->AgentVersion;
}

// SetPlatformName @ 14317edf0

void __thiscall
FDefaultUserAgentBuilder::SetPlatformName(FDefaultUserAgentBuilder *this,FString *param_1)

{
  ::FString::operator=(&this->PlatformName,param_1);
  this->AgentVersion = this->AgentVersion + 1;
  return;
}

// SetPlatformVersion @ 14317ee20

void __thiscall
FDefaultUserAgentBuilder::SetPlatformVersion(FDefaultUserAgentBuilder *this,FString *param_1)

{
  ::FString::operator=(&this->PlatformVersion,param_1);
  this->AgentVersion = this->AgentVersion + 1;
  return;
}

// SetProjectName @ 14317ef10

void __thiscall
FDefaultUserAgentBuilder::SetProjectName(FDefaultUserAgentBuilder *this,FString *param_1)

{
  ::FString::operator=(&this->ProjectName,param_1);
  this->AgentVersion = this->AgentVersion + 1;
  return;
}

// SetProjectVersion @ 14317ef30

void __thiscall
FDefaultUserAgentBuilder::SetProjectVersion(FDefaultUserAgentBuilder *this,FString *param_1)

{
  ::FString::operator=(&this->ProjectVersion,param_1);
  this->AgentVersion = this->AgentVersion + 1;
  return;
}

