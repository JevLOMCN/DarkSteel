// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FindSlotByName @ 145e9b740

uchar __thiscall
FUniformBufferStaticSlotRegistry::FindSlotByName
          (FUniformBufferStaticSlotRegistry *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = (this->SlotNames).ArrayNum;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
      if (*(FName *)((this->SlotNames).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) == param_1
         ) {
        return (uchar)uVar6;
      }
      iVar5 = (this->SlotNames).ArrayNum;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
  }
  return 0xff;
}

// Get @ 145e9cbf0

FUniformBufferStaticSlotRegistry * __cdecl FUniformBufferStaticSlotRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FUniformBufferStaticSlotRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Registry;
}

// RegisterSlot @ 145eace70

void __thiscall
FUniformBufferStaticSlotRegistry::RegisterSlot(FUniformBufferStaticSlotRegistry *this,FName param_1)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  
  uVar2 = FindSlotByName(this,param_1);
  if (uVar2 == 0xff) {
    iVar3 = (this->SlotNames).ArrayNum;
    piVar1 = &(this->SlotNames).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this,piVar1);
    }
    (this->SlotNames).ArrayNum = iVar3 + 1;
    *(FName *)((this->SlotNames).AllocatorInstance.Data + (longlong)iVar3 * 8) = param_1;
  }
  return;
}

