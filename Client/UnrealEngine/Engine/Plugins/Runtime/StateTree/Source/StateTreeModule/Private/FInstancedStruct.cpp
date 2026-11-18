// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// Get<FStateTreeDataHandle> @ 14d4deb20

FStateTreeDataHandle * __thiscall
FInstancedStruct::Get<FStateTreeDataHandle>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *this_00;
  code *pcVar2;
  bool bVar3;
  FStateTreeDataHandle *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  pFVar4 = (FStateTreeDataHandle *)this->StructMemory;
  this_00 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar4 == (FStateTreeDataHandle *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  if ((this_00 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FStateTreeDataHandle::StaticStruct();
  if (this_00 != pUVar5) {
    pUVar5 = FStateTreeDataHandle::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)this_00->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return pFVar4;
      }
    }
    pUVar5 = FStateTreeDataHandle::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreeDataHandle *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

