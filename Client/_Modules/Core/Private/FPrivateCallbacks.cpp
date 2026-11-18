// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AddInitialisedCallback @ 14167f1c0

void __cdecl
UE::LLMPrivate::FPrivateCallbacks::AddInitialisedCallback
          (_func___cdecl_void_ulong64 *param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLowLevelMemTracker *this;
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> FVar6;
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> FVar7;
  _func___cdecl_void_ulong64 *local_18;
  ulong64 uStack_10;
  
  this = FLowLevelMemTracker::Get();
  FLowLevelMemTracker::BootstrapInitialise(this);
  FVar6 = (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)
          GetInitialisedCallbacks();
  FVar2 = *(ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> *)
           ((longlong)FVar6 + 0x10);
  FVar7 = FVar6;
  if (FVar2 != (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0) {
    FVar7 = FVar2;
  }
  local_18 = param_1;
  uStack_10 = param_2;
  if ((ulonglong)FVar7 <= &local_18) {
    FVar7 = FVar6;
    if (FVar2 != (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0) {
      FVar7 = FVar2;
    }
    if ((&local_18 <
         (_func___cdecl_void_ulong64 **)
         ((longlong)*(int *)((longlong)FVar6 + 0x1c) * 0x10 + (longlong)FVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)FVar6 + 0x18);
  if (iVar5 == *(int *)((longlong)FVar6 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>_>
                      (0x810,(ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>
                              *)FVar6,(int *)((longlong)FVar6 + 0x1c));
  }
  *(int *)((longlong)FVar6 + 0x18) = iVar5 + 1;
  if (*(ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> *)
       ((longlong)FVar6 + 0x10) !=
      (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0) {
    FVar6 = *(ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> *)
             ((longlong)FVar6 + 0x10);
  }
  puVar1 = (undefined8 *)((longlong)FVar6 + (longlong)iVar5 * 0x10);
  *puVar1 = local_18;
  puVar1[1] = uStack_10;
  return;
}

// AddTagCreationCallback @ 14167f8e0

void __cdecl
UE::LLMPrivate::FPrivateCallbacks::AddTagCreationCallback
          (_func___cdecl_void_FTagData_ptr_ulong64 *param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLowLevelMemTracker *this;
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar6;
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar7;
  _func___cdecl_void_FTagData_ptr_ulong64 *local_18;
  ulong64 uStack_10;
  
  this = FLowLevelMemTracker::Get();
  FLowLevelMemTracker::BootstrapInitialise(this);
  FVar6 = (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
           )GetTagCreationCallbacks();
  FVar2 = *(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
            *)((longlong)FVar6 + 0x10);
  FVar7 = FVar6;
  if (FVar2 != (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                )0x0) {
    FVar7 = FVar2;
  }
  local_18 = param_1;
  uStack_10 = param_2;
  if ((ulonglong)FVar7 <= &local_18) {
    FVar7 = FVar6;
    if (FVar2 != (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                  )0x0) {
      FVar7 = FVar2;
    }
    if ((&local_18 <
         (_func___cdecl_void_FTagData_ptr_ulong64 **)
         ((longlong)*(int *)((longlong)FVar6 + 0x1c) * 0x10 + (longlong)FVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)((longlong)FVar6 + 0x18);
  if (iVar5 == *(int *)((longlong)FVar6 + 0x1c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>_>
                      (0x810,(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                              *)FVar6,(int *)((longlong)FVar6 + 0x1c));
  }
  *(int *)((longlong)FVar6 + 0x18) = iVar5 + 1;
  if (*(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
        *)((longlong)FVar6 + 0x10) !=
      (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
       )0x0) {
    FVar6 = *(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
              *)((longlong)FVar6 + 0x10);
  }
  puVar1 = (undefined8 *)((longlong)FVar6 + (longlong)iVar5 * 0x10);
  *puVar1 = local_18;
  puVar1[1] = uStack_10;
  return;
}

// RemoveTagCreationCallback @ 1416bdb80

void __cdecl
UE::LLMPrivate::FPrivateCallbacks::RemoveTagCreationCallback
          (_func___cdecl_void_FTagData_ptr_ulong64 *param_1)

{
  FLowLevelMemTracker *this;
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar7;
  int iVar8;
  bool bVar9;
  
  this = FLowLevelMemTracker::Get();
  FLowLevelMemTracker::BootstrapInitialise(this);
  FVar1 = (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
           )GetTagCreationCallbacks();
  iVar5 = *(int *)((longlong)FVar1 + 0x18);
  lVar2 = (longlong)iVar5;
  if (iVar5 != 0) {
    FVar7 = FVar1;
    if (*(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
          *)((longlong)FVar1 + 0x10) !=
        (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
         )0x0) {
      FVar7 = *(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                *)((longlong)FVar1 + 0x10);
    }
    iVar8 = 0;
    bVar9 = *(_func___cdecl_void_FTagData_ptr_ulong64 **)FVar7 != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(lVar4 * 0x10 + (longlong)FVar7);
        do {
          if (bVar9 != ((_func___cdecl_void_FTagData_ptr_ulong64 *)*plVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 2;
        } while (lVar4 < lVar2);
      }
      if (bVar9 != false) {
        if (iVar8 != iVar5) {
          memmove((longlong *)((longlong)iVar8 * 0x10 + (longlong)FVar7),
                  (longlong *)((longlong)iVar5 * 0x10 + (longlong)FVar7),
                  (longlong)(iVar6 - iVar5) << 4);
        }
        iVar8 = iVar8 + (iVar6 - iVar5);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)((longlong)FVar1 + 0x18) = iVar8;
  }
  return;
}

