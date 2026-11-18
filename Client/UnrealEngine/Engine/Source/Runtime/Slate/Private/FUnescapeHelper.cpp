// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FUnescapeHelper @ 142846670

/* WARNING: Removing unreachable block (ram,0x000142846c6e) */
/* WARNING: Removing unreachable block (ram,0x000142846ac5) */
/* WARNING: Removing unreachable block (ram,0x00014284691c) */
/* WARNING: Removing unreachable block (ram,0x000142846773) */
/* WARNING: Removing unreachable block (ram,0x000142846849) */
/* WARNING: Removing unreachable block (ram,0x0001428469f2) */
/* WARNING: Removing unreachable block (ram,0x000142846b9b) */
/* WARNING: Removing unreachable block (ram,0x000142846d44) */

FUnescapeHelper * __thiscall FUnescapeHelper::FUnescapeHelper(FUnescapeHelper *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FUnescapeHelper *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (this->EscapeSequences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EscapeSequences).ArrayNum = 0;
  (this->EscapeSequences).ArrayMax = 0;
  (this->UnescapedCharacters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnescapedCharacters).ArrayNum = 0;
  (this->UnescapedCharacters).ArrayMax = 0;
  ::FString::FString(&local_98,L"quot");
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar5 + (longlong)(this->EscapeSequences).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->EscapeSequences).ArrayNum;
  if (iVar3 == (this->EscapeSequences).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->EscapeSequences).ArrayMax);
  }
  (this->EscapeSequences).ArrayNum = iVar3 + 1;
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_98.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_98.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_88,L"\"");
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 <
       pFVar5 + (longlong)(this->UnescapedCharacters).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->UnescapedCharacters).ArrayNum;
  if (iVar3 == (this->UnescapedCharacters).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->UnescapedCharacters).AllocatorInstance,
                       &(this->UnescapedCharacters).ArrayMax);
  }
  (this->UnescapedCharacters).ArrayNum = iVar3 + 1;
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_88.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_88.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_78,L"lt");
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 <
       pFVar5 + (longlong)(this->EscapeSequences).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->EscapeSequences).ArrayNum;
  if (iVar3 == (this->EscapeSequences).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->EscapeSequences).ArrayMax);
  }
  (this->EscapeSequences).ArrayNum = iVar3 + 1;
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_78.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_78.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_68,L"<");
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar5 + (longlong)(this->UnescapedCharacters).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->UnescapedCharacters).ArrayNum;
  if (iVar3 == (this->UnescapedCharacters).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->UnescapedCharacters).AllocatorInstance,
                       &(this->UnescapedCharacters).ArrayMax);
  }
  (this->UnescapedCharacters).ArrayNum = iVar3 + 1;
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_58,L"gt");
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar5 + (longlong)(this->EscapeSequences).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->EscapeSequences).ArrayNum;
  if (iVar3 == (this->EscapeSequences).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->EscapeSequences).ArrayMax);
  }
  (this->EscapeSequences).ArrayNum = iVar3 + 1;
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_48,L">");
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar5 + (longlong)(this->UnescapedCharacters).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->UnescapedCharacters).ArrayNum;
  if (iVar3 == (this->UnescapedCharacters).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->UnescapedCharacters).AllocatorInstance,
                       &(this->UnescapedCharacters).ArrayMax);
  }
  (this->UnescapedCharacters).ArrayNum = iVar3 + 1;
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_48.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_48.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_38,L"amp");
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar5 + (longlong)(this->EscapeSequences).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->EscapeSequences).ArrayNum;
  if (iVar3 == (this->EscapeSequences).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->EscapeSequences).ArrayMax);
  }
  (this->EscapeSequences).ArrayNum = iVar3 + 1;
  pFVar5 = (this->EscapeSequences).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_28,L"&");
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar5 + (longlong)(this->UnescapedCharacters).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FUnescapeHelper *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->UnescapedCharacters).ArrayNum;
  if (iVar3 == (this->UnescapedCharacters).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->UnescapedCharacters).AllocatorInstance,
                       &(this->UnescapedCharacters).ArrayMax);
  }
  (this->UnescapedCharacters).ArrayNum = iVar3 + 1;
  pFVar5 = (this->UnescapedCharacters).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_28.Data.ArrayMax;
  return this;
}

