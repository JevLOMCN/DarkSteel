// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 2

// Call @ 142bd68f0

FSlateBrush * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,FSlateBrush_const_*>
::Call(void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  char cVar5;
  FSlateBrush *pFVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  char *pcVar9;
  code *pcVar10;
  FName FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar10 = (code *)swi(3);
      pFVar6 = (FSlateBrush *)(*pcVar10)();
      return pFVar6;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x40);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar10 = (code *)swi(3);
      pFVar6 = (FSlateBrush *)(*pcVar10)();
      return pFVar6;
    }
  }
  cVar5 = (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(*(longlong *)param_1 + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pIVar7 = FAppStyle::Get();
  if (cVar5 == '\0') {
    pcVar10 = *(code **)((longlong)*pIVar7 + 0x50);
    pcVar9 = "MessageLog.Fix";
    pFVar8 = aFStackX_18;
  }
  else {
    pcVar10 = *(code **)((longlong)*pIVar7 + 0x50);
    if (cVar5 == '\x01') {
      pcVar9 = "Icons.Check";
      pFVar8 = &FStackX_10;
    }
    else {
      pcVar9 = "Icons.BulletPoint16";
      pFVar8 = &FStackX_8;
    }
  }
  pFVar8 = ::FName::FName(pFVar8,pcVar9);
  pFVar6 = (FSlateBrush *)(*pcVar10)(pIVar7,*pFVar8,0,0);
  return pFVar6;
}

// Call @ 142bd6900

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x40);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  cVar7 = (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(*(longlong *)param_1 + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return cVar7 == '\0';
}

