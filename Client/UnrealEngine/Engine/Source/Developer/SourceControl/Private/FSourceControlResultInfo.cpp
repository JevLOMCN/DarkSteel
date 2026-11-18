// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 4

// ~FSourceControlResultInfo @ 146b01270

void __thiscall FSourceControlResultInfo::~FSourceControlResultInfo(FSourceControlResultInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>((FString *)(this->Tags).AllocatorInstance.Data,(this->Tags).ArrayNum);
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->ErrorMessages).AllocatorInstance.Data,(this->ErrorMessages).ArrayNum);
  pFVar1 = (this->ErrorMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->InfoMessages).AllocatorInstance.Data,(this->InfoMessages).ArrayNum);
  pFVar1 = (this->InfoMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// DidConnectionFail @ 146b137c0

bool __thiscall FSourceControlResultInfo::DidConnectionFail(FSourceControlResultInfo *this)

{
  return (this->AdditionalErrorContext & (ConnectionDropped|ConnectionFailed)) != None;
}

// OnConnectionDroped @ 146b1f500

void __thiscall FSourceControlResultInfo::OnConnectionDroped(FSourceControlResultInfo *this)

{
  int *piVar1;
  FText *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FText local_18;
  
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"SourceControlResultInfo",L"SC_ConnectionDropped",
                      L"Connection to the server dropped");
  pFVar2 = (FText *)(this->ErrorMessages).AllocatorInstance.Data;
  if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + (this->ErrorMessages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ErrorMessages).ArrayNum;
  piVar1 = &(this->ErrorMessages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ErrorMessages).AllocatorInstance,piVar1);
  }
  (this->ErrorMessages).ArrayNum = iVar5 + 1;
  FText::FText((FText *)((this->ErrorMessages).AllocatorInstance.Data + (longlong)iVar5 * 0x10),
               pFVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  this->AdditionalErrorContext = this->AdditionalErrorContext | ConnectionDropped;
  return;
}

// OnConnectionFailed @ 146b1f600

void __thiscall FSourceControlResultInfo::OnConnectionFailed(FSourceControlResultInfo *this)

{
  int *piVar1;
  FText *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FText local_18;
  
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"SourceControlResultInfo",L"SC_ConnectionFailed",
                      L"Failed to connect to the server");
  pFVar2 = (FText *)(this->ErrorMessages).AllocatorInstance.Data;
  if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + (this->ErrorMessages).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ErrorMessages).ArrayNum;
  piVar1 = &(this->ErrorMessages).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ErrorMessages).AllocatorInstance,piVar1);
  }
  (this->ErrorMessages).ArrayNum = iVar5 + 1;
  FText::FText((FText *)((this->ErrorMessages).AllocatorInstance.Data + (longlong)iVar5 * 0x10),
               pFVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  this->AdditionalErrorContext = this->AdditionalErrorContext | ConnectionFailed;
  return;
}

