// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Get @ 1419fc180

FStatGroupGameThreadNotifier * __cdecl FStatGroupGameThreadNotifier::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FStatGroupGameThreadNotifier::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// NewData @ 141a0be80

void __thiscall
FStatGroupGameThreadNotifier::NewData(FStatGroupGameThreadNotifier *this,FStatNameAndInfo param_1)

{
  int *piVar1;
  FStatNameAndInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  FStatNameAndInfo local_res10;
  FName local_res18;
  ulonglong local_res20;
  
  pFVar2 = (FStatNameAndInfo *)(this->NameAndInfos).AllocatorInstance.Data;
  local_res10 = param_1;
  if ((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->NameAndInfos).ArrayMax)) {
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
  iVar5 = (this->NameAndInfos).ArrayNum;
  piVar1 = &(this->NameAndInfos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->NameAndInfos).AllocatorInstance,piVar1);
  }
  (this->NameAndInfos).ArrayNum = iVar5 + 1;
  *(FStatNameAndInfo *)((this->NameAndInfos).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10;
  FStatNameAndInfo::GetGroupName(&local_res10);
  if (local_res20 != 0) {
    FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
    if (local_res20 != *(uint *)CONCAT44(extraout_var,FVar6.Value)) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&this->StatGroupNames,&local_res18,(bool *)&local_res20);
    }
  }
  return;
}

