// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 12

// FGLTFLogBuilder @ 14e5d22e0

FGLTFLogBuilder * __thiscall
FGLTFLogBuilder::FGLTFLogBuilder(FGLTFLogBuilder *this,FString *param_1,UGLTFExportOptions *param_2)

{
  FGLTFBuilder::FGLTFBuilder((FGLTFBuilder *)this,param_1,param_2);
  (this->Suggestions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Suggestions).ArrayNum = 0;
  (this->Suggestions).ArrayMax = 0;
  (this->Warnings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Warnings).ArrayNum = 0;
  (this->Warnings).ArrayMax = 0;
  (this->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Errors).ArrayNum = 0;
  (this->Errors).ArrayMax = 0;
  return this;
}

// ~FGLTFLogBuilder @ 14e5d7e20

void __thiscall FGLTFLogBuilder::~FGLTFLogBuilder(FGLTFLogBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar1 = (this->Errors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  pFVar1 = (this->Warnings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Suggestions).AllocatorInstance.Data,(this->Suggestions).ArrayNum);
  pFVar1 = (this->Suggestions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ClearLog @ 14e5e3890

void __thiscall FGLTFLogBuilder::ClearLog(FGLTFLogBuilder *this)

{
  int *piVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->Suggestions).AllocatorInstance.Data,(this->Suggestions).ArrayNum);
  piVar1 = &(this->Suggestions).ArrayMax;
  (this->Suggestions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Suggestions).AllocatorInstance,0,piVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  piVar1 = &(this->Warnings).ArrayMax;
  (this->Warnings).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Warnings).AllocatorInstance,0,piVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  piVar1 = &(this->Errors).ArrayMax;
  (this->Errors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Errors).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetLoggedErrors @ 14e5f7350

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FGLTFLogBuilder::GetLoggedErrors(FGLTFLogBuilder *this)

{
  return &this->Errors;
}

// GetLoggedSuggestions @ 14e5f7360

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FGLTFLogBuilder::GetLoggedSuggestions(FGLTFLogBuilder *this)

{
  return &this->Suggestions;
}

// GetLoggedWarnings @ 14e5f7370

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FGLTFLogBuilder::GetLoggedWarnings(FGLTFLogBuilder *this)

{
  return &this->Warnings;
}

// HasLoggedMessages @ 14e600fb0

bool __thiscall FGLTFLogBuilder::HasLoggedMessages(FGLTFLogBuilder *this)

{
  return 0 < (this->Errors).ArrayNum + (this->Warnings).ArrayNum + (this->Suggestions).ArrayNum;
}

// LogError @ 14e601e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGLTFLogBuilder::LogError(FGLTFLogBuilder *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->Errors;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Errors).ArrayMax * 0x10)) {
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
  iVar6 = (this->Errors).ArrayNum;
  piVar2 = &(this->Errors).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Errors).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  FOutputDevice::Log((FOutputDevice *)GWarn,(FName *)&LogGLTFExporter.field_0x4,Error,param_1);
  return;
}

// LogSuggestion @ 14e601ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGLTFLogBuilder::LogSuggestion(FGLTFLogBuilder *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->Suggestions;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Suggestions).ArrayMax * 0x10)) {
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
  iVar6 = (this->Suggestions).ArrayNum;
  piVar2 = &(this->Suggestions).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Suggestions).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  FOutputDevice::Log((FOutputDevice *)GWarn,(FName *)&LogGLTFExporter.field_0x4,Display,param_1);
  return;
}

// LogWarning @ 14e601fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGLTFLogBuilder::LogWarning(FGLTFLogBuilder *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->Warnings;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Warnings).ArrayMax * 0x10)) {
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
  iVar6 = (this->Warnings).ArrayNum;
  piVar2 = &(this->Warnings).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Warnings).ArrayNum = iVar6 + 1;
  ::FString::FString((FString *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),param_1)
  ;
  FOutputDevice::Log((FOutputDevice *)GWarn,(FName *)&LogGLTFExporter.field_0x4,Warning,param_1);
  return;
}

// OpenLog @ 14e6023c0

void __thiscall FGLTFLogBuilder::OpenLog(FGLTFLogBuilder *this)

{
  return;
}

// PrintToLog @ 14e6023d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGLTFLogBuilder::PrintToLog(FGLTFLogBuilder *this,ELogLevel param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (param_1 == Suggestion) {
    TVar3 = Display;
  }
  else if (param_1 == Warning) {
    TVar3 = Warning;
  }
  else {
    if (param_1 != Error) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Builders\\GLTFLogBuilder.cpp"
                         ,0x65,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    TVar3 = Error;
  }
  FOutputDevice::Log((FOutputDevice *)GWarn,(FName *)&LogGLTFExporter.field_0x4,TVar3,param_2);
  return;
}

