// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRecordScope @ 145dedad0

FRecordScope * __thiscall
FRenderCommandList::FRecordScope::FRecordScope
          (FRecordScope *this,FRenderCommandList *param_1,EStopRecordingAction param_2)

{
  longlong lVar1;
  FRenderCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRecordScope *pFVar5;
  
  this->CommandList = param_1;
  this->StopAction = param_2;
  if (param_1 != (FRenderCommandList *)0x0) {
    param_1->NumRecordScopeRefs = param_1->NumRecordScopeRefs + '\x01';
    if (this->CommandList->NumRecordScopeRefs == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandList->NumRecordScopeRefs != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                         ,0x620,
                         L"FRecordScope is either being nested recursively on the same command list or is recording from multiple threads."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRecordScope *)(*pcVar3)();
        return pFVar5;
      }
    }
    if (this->CommandList->bRecording == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandList->bRecording",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                         ,0x621,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRecordScope *)(*pcVar3)();
        return pFVar5;
      }
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar2 = *(FRenderCommandList **)(lVar1 + 0xed0);
  *(FRenderCommandList **)(lVar1 + 0xed0) = param_1;
  this->PreviousCommandList = pFVar2;
  return this;
}

// ~FRecordScope @ 145df1430

void __thiscall FRenderCommandList::FRecordScope::~FRecordScope(FRecordScope *this)

{
  uchar *puVar1;
  
  *(FRenderCommandList **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0) =
       this->PreviousCommandList;
  if (this->CommandList != (FRenderCommandList *)0x0) {
    puVar1 = &this->CommandList->NumRecordScopeRefs;
    *puVar1 = *puVar1 + 0xff;
    if (this->StopAction == Close) {
      FRenderCommandList::Close(this->CommandList);
      return;
    }
    if (this->StopAction == Submit) {
      FRenderCommandList::Close(this->CommandList);
      FRenderCommandList::Submit(this->CommandList,(FRenderCommandList *)0x0);
      return;
    }
  }
  return;
}

