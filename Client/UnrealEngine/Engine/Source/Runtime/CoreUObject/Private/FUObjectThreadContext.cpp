// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// TopInitializer @ 142117190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FObjectInitializer * __thiscall FUObjectThreadContext::TopInitializer(FUObjectThreadContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FObjectInitializer *pFVar4;
  uint uVar5;
  
  iVar1 = (this->InitializerStack).ArrayNum;
  if (iVar1 == 0) {
    return (FObjectInitializer *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FObjectInitializer *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FObjectInitializer **)
          ((this->InitializerStack).AllocatorInstance.Data +
          (longlong)(this->InitializerStack).ArrayNum * 8 + -8);
}

// FUObjectThreadContext @ 142294b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FUObjectThreadContext * __thiscall
FUObjectThreadContext::FUObjectThreadContext(FUObjectThreadContext *this)

{
  DWORD DVar1;
  FUObjectSerializeContext *pFVar2;
  
  this->_padding_ = (longlong)&___7__TThreadSingleton_VFUObjectThreadContext____6B_;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)&this->_padding_ = DVar1;
  (this->InitializerStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializerStack).ArrayNum = 0;
  (this->InitializerStack).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FUObjectThreadContext__6B_;
  this->IsRoutingPostLoad = false;
  this->IsDeletingLinkers = false;
  this->SyncLoadUsingAsyncLoaderCount = 0;
  this->IsInConstructor = 0;
  this->ConstructedObject = (UObject *)0x0;
  this->CurrentlyPostLoadedObjectByALT = (UObject *)0x0;
  this->AsyncPackage = (void *)0x0;
  this->AsyncPackageLoader = (IAsyncPackageLoader *)0x0;
  this->AsyncVisibilityFilter = Borrowed;
  (this->PostInitPropertiesCheck).AllocatorInstance.SecondaryData = (ForElementType<UObject_*>)0x0;
  (this->PostInitPropertiesCheck).ArrayNum = 0;
  (this->PostInitPropertiesCheck).ArrayMax = 0x10;
  (this->DebugPostLoad).AllocatorInstance.SecondaryData = (ForElementType<UObject_*>)0x0;
  (this->DebugPostLoad).ArrayNum = 0;
  (this->DebugPostLoad).ArrayMax = 0x10;
  pFVar2 = ::operator_new(0x60);
  if (pFVar2 != (FUObjectSerializeContext *)0x0) {
    pFVar2->RefCount = 0;
    pFVar2->ImportCount = 0;
    pFVar2->ForcedExportCount = 0;
    pFVar2->ObjBeginLoadCount = 0;
    (pFVar2->ObjectsLoaded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->ObjectsLoaded).ArrayNum = 0;
    (pFVar2->ObjectsLoaded).ArrayMax = 0;
    (pFVar2->DelayedLinkerClosePackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DelayedLinkerClosePackages).ArrayNum = 0;
    (pFVar2->DelayedLinkerClosePackages).ArrayMax = 0;
    pFVar2->SerializedObject = (UObject *)0x0;
    pFVar2->SerializedPackageLinker = (FLinkerLoad *)0x0;
    pFVar2->SerializedImportIndex = 0;
    pFVar2->SerializedImportLinker = (FLinkerLoad *)0x0;
    pFVar2->SerializedExportIndex = 0;
    pFVar2->SerializedExportLinker = (FLinkerLoad *)0x0;
    (this->SerializeContext).Reference = pFVar2;
    pFVar2->RefCount = pFVar2->RefCount + 1;
    return this;
  }
  (this->SerializeContext).Reference = (FUObjectSerializeContext *)0x0;
  return this;
}

// ~FUObjectThreadContext @ 142295dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FUObjectThreadContext::~FUObjectThreadContext(FUObjectThreadContext *this)

{
  ForElementType<UObject_*> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FUObjectThreadContext__6B_;
  TRefCountPtr<FUObjectSerializeContext>::~TRefCountPtr<FUObjectSerializeContext>
            (&this->SerializeContext);
  FVar1 = (this->DebugPostLoad).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UObject_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->PostInitPropertiesCheck).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UObject_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->InitializerStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TThreadSingleton<FUObjectThreadContext>::~TThreadSingleton<FUObjectThreadContext>
            ((TThreadSingleton<FUObjectThreadContext> *)this);
  return;
}

// ReportNull @ 1422a5e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FObjectInitializer * __thiscall FUObjectThreadContext::ReportNull(FUObjectThreadContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FObjectInitializer *pFVar4;
  uint uVar5;
  
  iVar1 = (this->InitializerStack).ArrayNum;
  if (iVar1 != 0) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FObjectInitializer *)(*pcVar2)();
      return pFVar4;
    }
    pFVar4 = *(FObjectInitializer **)
              ((this->InitializerStack).AllocatorInstance.Data +
              (longlong)(this->InitializerStack).ArrayNum * 8 + -8);
    if (pFVar4 != (FObjectInitializer *)0x0) {
      return pFVar4;
    }
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectThreadContext);
  return (FObjectInitializer *)0x0;
}

