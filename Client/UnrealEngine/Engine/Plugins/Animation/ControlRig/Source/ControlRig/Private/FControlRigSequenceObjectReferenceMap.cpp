// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a382d80

UScriptStruct * __cdecl FControlRigSequenceObjectReferenceMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigSequenceObjectReferenceMap.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigSequenceObjectReferenceMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSequenceObjectReferenceMap,
                         (UObject *)pUVar1,L"ControlRigSequenceObjectReferenceMap");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigSequenceObjectReferenceMap.OuterSingleton;
}

// CreateBinding @ 14a400170

void __thiscall
FControlRigSequenceObjectReferenceMap::CreateBinding
          (FControlRigSequenceObjectReferenceMap *this,FGuid *param_1,
          FControlRigSequenceObjectReference *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FGuid *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar7 = TArray<FGuid,TSizedDefaultAllocator<32>_>::IndexOfByKey<FGuid>(&this->BindingIds,param_1);
  if (uVar7 == 0xffffffff) {
    pFVar3 = (FGuid *)(this->BindingIds).AllocatorInstance.Data;
    uVar7 = (this->BindingIds).ArrayNum;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->BindingIds).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->BindingIds).ArrayNum;
    piVar1 = &(this->BindingIds).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)this,piVar1);
    }
    (this->BindingIds).ArrayNum = iVar8 + 1;
    uVar5 = *(undefined8 *)&param_1->C;
    pFVar2 = (this->BindingIds).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
    iVar8 = (this->References).ArrayNum;
    piVar1 = &(this->References).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->References).AllocatorInstance,piVar1);
    }
    (this->References).ArrayNum = iVar8 + 1;
    DefaultConstructItems<FControlRigSequenceObjectReferences,int>
              ((this->References).AllocatorInstance.Data + (longlong)iVar8 * 0x10,1);
  }
  uVar9 = 0;
  if ((int)uVar7 < (this->References).ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TArray<FControlRigSequenceObjectReference,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FControlRigSequenceObjectReference_const_&>
            ((TArray<FControlRigSequenceObjectReference,TSizedDefaultAllocator<32>_> *)
             ((this->References).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10),param_2);
  return;
}

// HasBinding @ 14a41c9c0

bool __thiscall
FControlRigSequenceObjectReferenceMap::HasBinding
          (FControlRigSequenceObjectReferenceMap *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->BindingIds).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->BindingIds).ArrayNum * 0x10;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)(pFVar1 + 0xc) && param_1->C == *(uint *)(pFVar1 + 8)) &&
          param_1->B == *(uint *)(pFVar1 + 4)) && param_1->A == *(uint *)pFVar1) {
        return true;
      }
      pFVar1 = pFVar1 + 0x10;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// RemoveBinding @ 14a441d40

void __thiscall
FControlRigSequenceObjectReferenceMap::RemoveBinding
          (FControlRigSequenceObjectReferenceMap *this,FGuid *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar6 = TArray<FGuid,TSizedDefaultAllocator<32>_>::IndexOfByKey<FGuid>(&this->BindingIds,param_1);
  if (uVar6 != 0xffffffff) {
    uVar9 = ~uVar6 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar6 < (this->BindingIds).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->BindingIds).ArrayNum;
    pFVar3 = (this->BindingIds).AllocatorInstance.Data;
    iVar8 = iVar2 + ~uVar6;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar6 * 0x10,pFVar3 + (longlong)(iVar2 - iVar8) * 0x10,
              (longlong)iVar8 << 4);
    }
    piVar1 = &(this->BindingIds).ArrayNum;
    *piVar1 = *piVar1 + -1;
    uVar7 = 0;
    if ((int)uVar6 < (this->References).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TArray<FControlRigSequenceObjectReferences,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this->References,uVar6);
  }
  return;
}

