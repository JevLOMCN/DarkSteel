// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// HandleObjectReference @ 141f8b270

void __thiscall
FPropertyReferenceCollector::HandleObjectReference
          (FPropertyReferenceCollector *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  UObject *pUVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUObjectItem *pFVar7;
  FScriptContainerElement *pFVar8;
  
  pUVar1 = *param_1;
  if ((((pUVar1 != (UObject *)0x0) && (pUVar1 != this->ExcludeOwner)) &&
      (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar1->field_0xc),
      ((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) &&
     (GUObjectArray.ObjLastNonGCIndex < *(int *)&(*param_1)->field_0xc)) {
    pTVar2 = this->UniqueReferences;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    for (pFVar8 = pFVar3; pFVar8 != pFVar3 + (longlong)pTVar2->ArrayNum * 8; pFVar8 = pFVar8 + 8) {
      if (*(UObject **)pFVar8 == *param_1) {
        return;
      }
    }
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)pTVar2->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = pTVar2->ArrayNum;
    if (iVar6 == pTVar2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar6 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = *param_1;
  }
  return;
}

// IsIgnoringArchetypeRef @ 141f900d0

bool __thiscall
FPropertyReferenceCollector::IsIgnoringArchetypeRef(FPropertyReferenceCollector *this)

{
  return false;
}

// IsIgnoringTransient @ 141f900e0

bool __thiscall FPropertyReferenceCollector::IsIgnoringTransient(FPropertyReferenceCollector *this)

{
  return false;
}

