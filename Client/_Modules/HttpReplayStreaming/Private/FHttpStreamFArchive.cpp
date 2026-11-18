// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 6

// AtEnd @ 146cb8560

bool __thiscall FHttpStreamFArchive::AtEnd(FHttpStreamFArchive *this)

{
  if (((this->Buffer).ArrayNum <= this->Pos) && (this->bAtEndOfReplay != false)) {
    return true;
  }
  return false;
}

// Seek @ 146cc7030

void __thiscall FHttpStreamFArchive::Seek(FHttpStreamFArchive *this,long64 param_1)

{
  int iVar1;
  int iVar2;
  long64 local_res10 [3];
  long64 *local_18;
  FHttpStreamFArchive *local_10;
  
  if ((param_1 < 0) || ((this->Buffer).ArrayNum < param_1)) {
    local_18 = local_res10;
    local_res10[0] = param_1;
    local_10 = this;
    `FHttpStreamFArchive::Seek'::__l2::<lambda_1>::operator()(&local_18);
    param_1 = local_res10[0];
  }
  iVar2 = (this->Buffer).ArrayNum;
  if ((int)param_1 < iVar2) {
    iVar2 = (int)param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->Pos = iVar1;
  return;
}

// Serialize @ 146cc70a0

void __thiscall
FHttpStreamFArchive::Serialize(FHttpStreamFArchive *this,void *param_1,long64 param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = &(this->Buffer).ArrayNum;
  piVar2 = &this->Pos;
  iVar8 = *piVar2;
  iVar7 = (int)param_2;
  if ((this->_padding_ & 1) == 0) {
    if (*piVar1 < iVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pos <= Buffer.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0xae,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_2 != iVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar3 = &this->Buffer;
    iVar8 = (*piVar2 - *piVar1) + iVar7;
    if (0 < iVar8) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar8,&pTVar3->AllocatorInstance,piVar1,&(this->Buffer).ArrayMax);
      memset((pTVar3->AllocatorInstance).Data + iVar6,0,(longlong)iVar8);
    }
    memcpy((pTVar3->AllocatorInstance).Data + *piVar2,param_1,(longlong)iVar7);
    *piVar2 = this->Pos + iVar7;
    return;
  }
  if ((longlong)*piVar1 < iVar8 + param_2) {
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  memcpy(param_1,(this->Buffer).AllocatorInstance.Data + iVar8,param_2);
  if (param_2 != iVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *piVar2 = *piVar2 + iVar7;
  return;
}

// Tell @ 146cc8f20

long64 __thiscall FHttpStreamFArchive::Tell(FHttpStreamFArchive *this)

{
  return (longlong)this->Pos;
}

// TotalSize @ 146cc92d0

long64 __thiscall FHttpStreamFArchive::TotalSize(FHttpStreamFArchive *this)

{
  return (longlong)(this->Buffer).ArrayNum;
}

// operator() @ 1504fb490

bool __thiscall `FHttpStreamFArchive::Seek'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7599545937047847114>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7599545937047847114>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

