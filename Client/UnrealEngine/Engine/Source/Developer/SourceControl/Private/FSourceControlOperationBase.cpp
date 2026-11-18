// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 8

// ~FSourceControlOperationBase @ 146b01210

void __thiscall
FSourceControlOperationBase::~FSourceControlOperationBase(FSourceControlOperationBase *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FSourceControlResultInfo::~FSourceControlResultInfo(&this->ResultInfo);
  this->_padding_ = (longlong)&___7ISourceControlOperation__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146b01251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddErrorMessge @ 146b04750

void __thiscall
FSourceControlOperationBase::AddErrorMessge(FSourceControlOperationBase *this,FText *param_1)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FText *pFVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pTVar1 = &(this->ResultInfo).ErrorMessages;
  pFVar3 = (FText *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ResultInfo).ErrorMessages.ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->ResultInfo).ErrorMessages.ArrayNum;
  piVar2 = &(this->ResultInfo).ErrorMessages.ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ResultInfo).ErrorMessages.ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(longlong *)pFVar8 = 0;
  pIVar4 = (param_1->TextData).Reference;
  *(ITextData **)pFVar8 = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  *(uint *)(pFVar8 + 8) = param_1->Flags;
  return;
}

// AddInfoMessge @ 146b04840

void __thiscall
FSourceControlOperationBase::AddInfoMessge(FSourceControlOperationBase *this,FText *param_1)

{
  FSourceControlResultInfo *pFVar1;
  int *piVar2;
  FText *pFVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar1 = &this->ResultInfo;
  pFVar3 = (FText *)(pFVar1->InfoMessages).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ResultInfo).InfoMessages.ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->ResultInfo).InfoMessages.ArrayNum;
  piVar2 = &(this->ResultInfo).InfoMessages.ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFVar1,piVar2);
  }
  (this->ResultInfo).InfoMessages.ArrayNum = iVar7 + 1;
  pFVar8 = (pFVar1->InfoMessages).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(longlong *)pFVar8 = 0;
  pIVar4 = (param_1->TextData).Reference;
  *(ITextData **)pFVar8 = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  *(uint *)(pFVar8 + 8) = param_1->Flags;
  return;
}

// AddTag @ 146b04a70

void __thiscall
FSourceControlOperationBase::AddTag(FSourceControlOperationBase *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &(this->ResultInfo).Tags;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->ResultInfo).Tags.ArrayMax * 0x10))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ResultInfo).Tags.ArrayNum;
  piVar2 = &(this->ResultInfo).Tags.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ResultInfo).Tags.ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  return;
}

// AppendResultInfo @ 146b04f80

void __thiscall
FSourceControlOperationBase::AppendResultInfo
          (FSourceControlOperationBase *this,FSourceControlResultInfo *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  EAdditionalErrorContext *pEVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  TArray<FText,TSizedDefaultAllocator<32>_>::Append<FText,TSizedDefaultAllocator<32>_>
            (&(this->ResultInfo).InfoMessages,&param_1->InfoMessages);
  TArray<FText,TSizedDefaultAllocator<32>_>::Append<FText,TSizedDefaultAllocator<32>_>
            (&(this->ResultInfo).ErrorMessages,&param_1->ErrorMessages);
  pTVar1 = &(this->ResultInfo).Tags;
  if (pTVar1 == &param_1->Tags) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->Tags).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar3,&pTVar1->AllocatorInstance,&(this->ResultInfo).Tags.ArrayNum,
                       &(this->ResultInfo).Tags.ArrayMax);
    ConstructItems<FString,FString,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10,
               (FString *)(param_1->Tags).AllocatorInstance.Data,iVar3);
  }
  pEVar2 = &(this->ResultInfo).AdditionalErrorContext;
  *pEVar2 = *pEVar2 | param_1->AdditionalErrorContext;
  return;
}

// GetResultInfo @ 146b19730

FSourceControlResultInfo * __thiscall
FSourceControlOperationBase::GetResultInfo(FSourceControlOperationBase *this)

{
  return &this->ResultInfo;
}

// ShouldLogErrors @ 146b259a0

bool __thiscall FSourceControlOperationBase::ShouldLogErrors(FSourceControlOperationBase *this)

{
  return (bool)(~(char)this->Flags & 1);
}

// ShouldLogInfos @ 146b259c0

bool __thiscall FSourceControlOperationBase::ShouldLogInfos(FSourceControlOperationBase *this)

{
  return (bool)(~(byte)(this->Flags >> 1) & 1);
}

