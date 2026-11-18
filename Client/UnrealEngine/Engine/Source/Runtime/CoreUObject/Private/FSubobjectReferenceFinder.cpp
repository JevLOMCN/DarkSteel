// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// HandleObjectReference @ 1420fdfe0

void __thiscall
FSubobjectReferenceFinder::HandleObjectReference
          (FSubobjectReferenceFinder *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  UObjectBase *this_00;
  UObjectBase *pUVar1;
  UObjectBase *pUVar2;
  UClass *pUVar3;
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  if ((*param_1 != (UObject *)0x0) && ((*(uint *)&(*param_1)->field_0x8 >> 0x12 & 1) != 0)) {
    pFVar9 = (this->ObjectArray->AllocatorInstance).Data;
    pFVar5 = pFVar9 + (longlong)this->ObjectArray->ArrayNum * 8;
    if (pFVar9 != pFVar5) {
      do {
        if (*(UObject **)pFVar9 == *param_1) {
          return;
        }
        pFVar9 = pFVar9 + 8;
      } while (pFVar9 != pFVar5);
    }
    bVar7 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)*param_1,this->ReferencingObject);
    if (!bVar7) {
      this_00 = (UObjectBase *)*param_1;
      pUVar1 = (UObjectBase *)(this_00->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr;
      pUVar2 = (UObjectBase *)((UClass *)this->ReferencingObject)->_padding_;
      if (((pUVar2 != pUVar1) && (this_00 != pUVar2)) &&
         ((param_2 == (UObject *)0x0 ||
          ((pUVar3 = (pUVar1->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr,
           (UClass *)param_2 != pUVar3 && ((UClass *)this->ReferencingObject != pUVar3)))))) {
        bVar7 = UObjectBase::IsValidLowLevel(this_00);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject->IsValidLowLevel()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                               ,0x876,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = this->ObjectArray;
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)pTVar4->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = pTVar4->ArrayNum;
        if (iVar8 == pTVar4->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
        }
        pTVar4->ArrayNum = iVar8 + 1;
        *(UObject **)((pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 8) = *param_1;
      }
    }
  }
  return;
}

// IsIgnoringArchetypeRef @ 1420ff8d0

bool __thiscall FSubobjectReferenceFinder::IsIgnoringArchetypeRef(FSubobjectReferenceFinder *this)

{
  return true;
}

// IsIgnoringTransient @ 1420ff8e0

bool __thiscall FSubobjectReferenceFinder::IsIgnoringTransient(FSubobjectReferenceFinder *this)

{
  return true;
}

