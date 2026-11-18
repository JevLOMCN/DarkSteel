// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateCrashReporterScope @ 14242d2a0

FSlateCrashReporterScope * __thiscall
UE::Slate::FSlateCrashReporterScope::FSlateCrashReporterScope
          (FSlateCrashReporterScope *this,SWidget *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  FSlateCrashReporterHandler *lpCriticalSection;
  uint uVar5;
  
  this->ThreadId = '\0';
  bVar3 = Slate::Private::GSlateEnableCrashHandler;
  this->bWasEnabled = false;
  this->bWasEnabled = Slate::Private::GSlateEnableCrashHandler != false;
  if (bVar3 == false) {
    return this;
  }
  lpCriticalSection = Slate::Private::FSlateCrashReporterHandler::Get();
  bVar3 = IsInGameThread();
  if (bVar3) {
    uVar5 = 1;
  }
  else {
    bVar3 = IsInSlateThread();
    uVar5 = (bVar3 ^ 1) * 2;
    if ((bVar3 ^ 1) == 1) {
      if (lpCriticalSection == (FSlateCrashReporterHandler *)0x0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar4 = lpCriticalSection->Contexts[2].ArrayNum;
      piVar1 = &lpCriticalSection->Contexts[2].ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x420,&lpCriticalSection->Contexts[2].AllocatorInstance,piVar1);
      }
      pFVar2 = lpCriticalSection->Contexts[2].AllocatorInstance.Data;
      lpCriticalSection->Contexts[2].ArrayNum = iVar4 + 1;
      SWidget::GetType(param_1);
      (**(code **)(param_1->_padding_ + 0x1f0))(param_1,pFVar2 + (longlong)iVar4 * 0x20 + 8);
      SWidget::GetCreatedInLocation(param_1);
      *(FName *)(pFVar2 + (longlong)iVar4 * 0x20 + 0x18) = param_2;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14242d358;
    }
  }
  iVar4 = lpCriticalSection->Contexts[uVar5].ArrayNum;
  piVar1 = &lpCriticalSection->Contexts[uVar5].ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x420,&lpCriticalSection->Contexts[uVar5].AllocatorInstance,piVar1);
  }
  lpCriticalSection->Contexts[uVar5].ArrayNum = iVar4 + 1;
  pFVar2 = lpCriticalSection->Contexts[uVar5].AllocatorInstance.Data;
  SWidget::GetType(param_1);
  (**(code **)(param_1->_padding_ + 0x1f0))(param_1,pFVar2 + (longlong)iVar4 * 0x20 + 8);
  SWidget::GetCreatedInLocation(param_1);
  *(FName *)(pFVar2 + (longlong)iVar4 * 0x20 + 0x18) = param_2;
LAB_14242d358:
  this->ThreadId = (uchar)uVar5;
  return this;
}

// ~FSlateCrashReporterScope @ 14242f290

void __thiscall
UE::Slate::FSlateCrashReporterScope::~FSlateCrashReporterScope(FSlateCrashReporterScope *this)

{
  FSlateCrashReporterHandler *this_00;
  
  if (this->bWasEnabled != false) {
    this_00 = Slate::Private::FSlateCrashReporterHandler::Get();
    Slate::Private::FSlateCrashReporterHandler::PopInfo(this_00,(uint)this->ThreadId);
    return;
  }
  return;
}

