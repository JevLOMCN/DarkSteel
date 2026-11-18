// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// operator<< @ 141f69f60

FArchive * __thiscall
FArchiveScriptReferenceCollector::operator<<
          (FArchiveScriptReferenceCollector *this,FField **param_1)

{
  FField *pFVar1;
  FReferenceCollector local_28;
  UObject *local_18;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_10;
  
  pFVar1 = *param_1;
  if (pFVar1 != (FField *)0x0) {
    local_28.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
    local_28._padding_ = (longlong)&___7FPropertyReferenceCollector__6B_;
    local_18 = this->ExcludeOwner;
    local_10 = this->ObjectArray;
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,&local_28);
    FReferenceCollector::~FReferenceCollector(&local_28);
  }
  return (FArchive *)this;
}

// operator<< @ 141f69fd0

FArchive * __thiscall
FArchiveScriptReferenceCollector::operator<<
          (FArchiveScriptReferenceCollector *this,UObject **param_1)

{
  UObjectBase *this_00;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArchive *pFVar6;
  FScriptContainerElement *pFVar7;
  
  this_00 = (UObjectBase *)*param_1;
  if ((this_00 != (UObjectBase *)0x0) && (this_00 != (UObjectBase *)this->ExcludeOwner)) {
    pFVar7 = (this->ObjectArray->AllocatorInstance).Data;
    pFVar2 = pFVar7 + (longlong)this->ObjectArray->ArrayNum * 8;
    for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
      if (*(UObjectBase **)pFVar7 == this_00) {
        return (FArchive *)this;
      }
    }
    bVar4 = UObjectBase::IsValidLowLevel(this_00);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object->IsValidLowLevel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\ArchiveScriptReferenceCollector.h"
                           ,0x4a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar3)();
      return pFVar6;
    }
    pTVar1 = this->ObjectArray;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)pTVar1->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar3)();
      return pFVar6;
    }
    iVar5 = pTVar1->ArrayNum;
    if (iVar5 == pTVar1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar5 + 1;
    *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = *param_1;
  }
  return (FArchive *)this;
}

// operator<< @ 141f6a100

FArchive * __thiscall
FArchiveScriptReferenceCollector::operator<<
          (FArchiveScriptReferenceCollector *this,FObjectPtr *param_1)

{
  FArchive *pFVar1;
  FObjectPtr_u_0 local_res18 [2];
  
  local_res18[0] = param_1->field0_0x0;
  pFVar1 = (FArchive *)(**(code **)(this->_padding_ + 0x168))(this,local_res18);
  return pFVar1;
}

