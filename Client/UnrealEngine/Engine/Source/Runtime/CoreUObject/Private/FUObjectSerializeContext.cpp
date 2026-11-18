// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// Release @ 142280d60

int __thiscall FUObjectSerializeContext::Release(FUObjectSerializeContext *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = this->RefCount + -1;
  this->RefCount = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentRefCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectThreadContext.h"
                       ,0x130,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else if (iVar3 == 0) {
    ~FUObjectSerializeContext(this);
    ::operator_delete(this,0x60);
  }
  return iVar3;
}

// FUObjectSerializeContext @ 142294b20

FUObjectSerializeContext * __thiscall
FUObjectSerializeContext::FUObjectSerializeContext(FUObjectSerializeContext *this)

{
  this->RefCount = 0;
  this->ImportCount = 0;
  this->ForcedExportCount = 0;
  this->ObjBeginLoadCount = 0;
  (this->ObjectsLoaded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsLoaded).ArrayNum = 0;
  (this->ObjectsLoaded).ArrayMax = 0;
  (this->DelayedLinkerClosePackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedLinkerClosePackages).ArrayNum = 0;
  (this->DelayedLinkerClosePackages).ArrayMax = 0;
  this->SerializedObject = (UObject *)0x0;
  this->SerializedPackageLinker = (FLinkerLoad *)0x0;
  this->SerializedImportIndex = 0;
  this->SerializedImportLinker = (FLinkerLoad *)0x0;
  this->SerializedExportIndex = 0;
  this->SerializedExportLinker = (FLinkerLoad *)0x0;
  return this;
}

// ~FUObjectSerializeContext @ 142295d60

void __thiscall FUObjectSerializeContext::~FUObjectSerializeContext(FUObjectSerializeContext *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ObjectsLoaded).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLoadedObjects()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectThreadContext.cpp"
                       ,0x4b,
                       L"FUObjectSerializeContext is being destroyed but it still has pending loaded objects in its ObjectsLoaded list."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->DelayedLinkerClosePackages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsLoaded).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddLoadedObject @ 1422977a0

void __thiscall
FUObjectSerializeContext::AddLoadedObject(FUObjectSerializeContext *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10 [3];
  
  pFVar2 = (this->ObjectsLoaded).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->ObjectsLoaded).ArrayMax * 8
     )) {
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
  iVar5 = (this->ObjectsLoaded).ArrayNum;
  piVar1 = &(this->ObjectsLoaded).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ObjectsLoaded).AllocatorInstance,piVar1);
  }
  (this->ObjectsLoaded).ArrayNum = iVar5 + 1;
  *(UObject **)((this->ObjectsLoaded).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0]
  ;
  return;
}

// AddUniqueLoadedObjects @ 142297890

void __thiscall
FUObjectSerializeContext::AddUniqueLoadedObjects
          (FUObjectSerializeContext *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *local_res10;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar3 == pFVar1) break;
    local_res10 = *(UObject **)pFVar3;
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
              (&this->ObjectsLoaded,&local_res10);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// AttachLinker @ 142298200

void __thiscall
FUObjectSerializeContext::AttachLinker(FUObjectSerializeContext *this,FLinkerLoad *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GEventDrivenLoaderEnabled) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GEventDrivenLoaderEnabled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectThreadContext.cpp"
                       ,0x75,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DecrementBeginLoadCount @ 142299800

int __thiscall FUObjectSerializeContext::DecrementBeginLoadCount(FUObjectSerializeContext *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->ObjBeginLoadCount < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasStartedLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectThreadContext.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this->ObjBeginLoadCount = this->ObjBeginLoadCount + -1;
  return this->ObjBeginLoadCount;
}

// DetachFromLinkers @ 142299df0

void __thiscall FUObjectSerializeContext::DetachFromLinkers(FUObjectSerializeContext *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (GEventDrivenLoaderEnabled) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GEventDrivenLoaderEnabled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectThreadContext.cpp"
                       ,0x7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DetachLinker @ 142299e30

void __thiscall
FUObjectSerializeContext::DetachLinker(FUObjectSerializeContext *this,FLinkerLoad *param_1)

{
  return;
}

// IncrementBeginLoadCount @ 1422a06a0

int __thiscall FUObjectSerializeContext::IncrementBeginLoadCount(FUObjectSerializeContext *this)

{
  this->ObjBeginLoadCount = this->ObjBeginLoadCount + 1;
  return this->ObjBeginLoadCount;
}

// PRIVATE_PatchNewObjectIntoExport @ 1422a3e00

bool __thiscall
FUObjectSerializeContext::PRIVATE_PatchNewObjectIntoExport
          (FUObjectSerializeContext *this,UObject *param_1,UObject *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->ObjectsLoaded).AllocatorInstance.Data;
  iVar1 = (this->ObjectsLoaded).ArrayNum;
  pFVar8 = pFVar2;
  while( true ) {
    if (pFVar8 == pFVar2 + (longlong)iVar1 * 8) {
      return false;
    }
    if (*(UObject **)pFVar8 == param_1) break;
    pFVar8 = pFVar8 + 8;
  }
  uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
  if (uVar7 == 0xffffffff) {
    return false;
  }
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  *(UObject **)((this->ObjectsLoaded).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = param_2;
  return true;
}

