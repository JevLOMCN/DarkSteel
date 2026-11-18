// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Get @ 14a307420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
* __thiscall
THierarchyCache<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
::Get(THierarchyCache<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
      *this)

{
  TOptional<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
  *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
  *pTVar4;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this_00 = &this->Value;
  if (*(int *)((longlong)&(this->Value).field0_0x0 + 0xc) == -1) {
    local_3c = 0x80;
    local_30 = 0;
    local_28 = (void *)0x0;
    local_68._16_8_ = 0;
    uStack_50 = 0;
    local_20 = 0;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_38 = 0xffffffff;
    local_34 = 0;
    if ((TOptional<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
         *)local_68 != this_00) {
      TOptional<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
      ::
      Emplace<TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>_>
                (this_00,(TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                          *)local_68);
    }
    local_20 = local_20 & 0xffffffff00000000;
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    iVar2 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_34 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    if (*(int *)((longlong)&(this->Value).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return (TMap<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
          *)this_00;
}

