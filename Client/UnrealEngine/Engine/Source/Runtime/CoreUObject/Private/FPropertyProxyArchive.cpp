// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator<< @ 141f6a250

FArchive * __thiscall
FPropertyProxyArchive::operator<<(FPropertyProxyArchive *this,FField **param_1)

{
  TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *pTVar1;
  TFieldPath<FField> *this_00;
  UStruct *pUVar2;
  FFieldClass *pFVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FFieldClass *pFVar9;
  FField *pFVar10;
  FArchive *pFVar11;
  FFieldPath local_68;
  undefined1 local_48 [32];
  int local_28;
  
  if (((this->_padding_ & 0x100) == 0) || ((this->_padding_ & 0x1000000) != 0)) {
    (**(code **)(*(longlong *)this->_padding_ + 0x160))();
  }
  pFVar10 = *param_1;
  if ((pFVar10 == (FField *)0x0) ||
     ((pFVar10->ClassPrivate->CastFlags & CASTCLASS_UField) == CASTCLASS_None)) {
    pFVar10 = (FField *)0x0;
  }
  local_68.ResolvedField = (FField *)0x0;
  local_68.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_68.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_68.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Path.ArrayNum = 0;
  local_68.Path.ArrayMax = 0;
  FFieldPath::Generate(&local_68,pFVar10);
  ::operator<<((FArchive *)this,&local_68);
  if ((this->_padding_ & 1) == 0) goto LAB_141f6a4b3;
  pUVar2 = this->Container;
  pFVar9 = FField::StaticClass();
  if (((local_68.ResolvedField == (FField *)0x0) ||
      (bVar7 = FWeakObjectPtr::IsValid(&local_68.ResolvedOwner.WeakPtr),
      pFVar10 = local_68.ResolvedField, !bVar7)) &&
     (pFVar10 = local_68.ResolvedField, local_68.Path.ArrayNum != 0)) {
    pFVar10 = FFieldPath::TryToResolvePath(&local_68,pUVar2,UseStructIfOuterNotFound);
    if (pFVar10 != (FField *)0x0) {
      if ((pFVar9 == (FFieldClass *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar6)();
        return pFVar11;
      }
      pFVar3 = pFVar10->ClassPrivate;
      if (pFVar9->Id == CASTCLASS_None) {
        for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
          if (pFVar3 == pFVar9) {
            bVar7 = true;
            goto LAB_141f6a395;
          }
        }
        bVar7 = false;
      }
      else {
        bVar7 = (pFVar3->CastFlags & pFVar9->Id) != CASTCLASS_None;
      }
LAB_141f6a395:
      if (bVar7) goto LAB_141f6a3ad;
    }
    pFVar10 = local_68.ResolvedField;
    if (local_68.ResolvedField != (FField *)0x0) {
      local_68.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_68.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      pFVar10 = (FField *)0x0;
    }
  }
LAB_141f6a3ad:
  local_68.ResolvedField = pFVar10;
  *param_1 = local_68.ResolvedField;
  if ((local_68.ResolvedField == (FField *)0x0) && (local_68.Path.ArrayNum != 0)) {
    piVar4 = this->BytecodeIndex;
    pTVar1 = &this->UnresolvedProperties;
    TFieldPath<FField>::TFieldPath<FField>
              ((TFieldPath<FField> *)local_48,(TFieldPath<FField> *)&local_68);
    local_28 = *piVar4;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_48) &&
       (((FScriptContainerElement *)local_48 <
         pFVar5 + (longlong)(this->UnresolvedProperties).ArrayMax * 0x28 &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)))) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FArchive *)(*pcVar6)();
      return pFVar11;
    }
    iVar8 = (this->UnresolvedProperties).ArrayNum;
    piVar4 = &(this->UnresolvedProperties).ArrayMax;
    if (iVar8 == *piVar4) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar1->AllocatorInstance,piVar4);
    }
    (this->UnresolvedProperties).ArrayNum = iVar8 + 1;
    this_00 = (TFieldPath<FField> *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x28);
    TFieldPath<FField>::TFieldPath<FField>(this_00,(TFieldPath<FField> *)local_48);
    *(int *)(this_00 + 1) = local_28;
    if ((void *)local_48._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._16_8_);
    }
  }
LAB_141f6a4b3:
  if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Path.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

