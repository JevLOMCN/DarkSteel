// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// AddChildBack @ 1460a6420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::IEntitySystemScheduler::AddChildBack
          (IEntitySystemScheduler *this,FTaskID param_1,FTaskID param_2)

{
  int *piVar1;
  short *psVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FTaskID FVar7;
  longlong lVar8;
  uint uVar9;
  
  if (param_1.Index == -1) {
    return;
  }
  if (param_2.Index == -1) {
    return;
  }
  if (param_2.Index <= param_1.Index) {
LAB_14618cff2:
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7429933679914254702>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                       ,0x16e,
                       "Child.Index > Parent.Index && Child.Index == Parent.Index + Tasks[Parent.Index].NumChildren + 1"
                      );
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = (uint)~param_1.Index >> 0x1f;
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)param_1.Index * 0x88;
  if (param_2.Index != *(ushort *)(*(longlong *)this + 0x80 + lVar8) + 1 + param_1.Index)
  goto LAB_14618cff2;
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                      *)(*(longlong *)this + lVar8),param_2.Index);
  if (!bVar4) {
    uVar5 = 0;
    if (param_2.Index < *(int *)(this + 8)) {
      uVar5 = (uint)~param_2.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)((longlong)param_2.Index * 0x88 + *(longlong *)this),param_1.Index);
    if (!bVar4) goto LAB_14618ce96;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Tasks[Parent.Index].ComputedSubsequents.IsBitSet(Child.Index) && !Tasks[Child.Index].ComputedSubsequents.IsBitSet(Parent.Index)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                     ,0x171,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14618ce96:
  FVar7.Index = param_1.Index + 1;
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (uint)*(ushort *)(*(longlong *)this + 0x80 + lVar8) + FVar7.Index;
  for (; FVar7.Index < iVar6; FVar7.Index = FVar7.Index + 1) {
    FEntitySystemScheduler::AddPrerequisite((FEntitySystemScheduler *)this,FVar7,param_2);
  }
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  psVar2 = (short *)(*(longlong *)this + 0x80 + lVar8);
  *psVar2 = *psVar2 + 1;
  uVar5 = 0;
  if (param_2.Index < *(int *)(this + 8)) {
    uVar5 = (uint)~param_2.Index >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)param_2.Index * 0x88;
  piVar1 = (int *)(*(longlong *)this + 0x70 + lVar8);
  *piVar1 = *piVar1 + 1;
  uVar5 = 0;
  if (param_2.Index < *(int *)(this + 8)) {
    uVar5 = (uint)~param_2.Index >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)(*(longlong *)this + 0x7c + lVar8) = param_1.Index;
  return;
}

// AddChildFront @ 1460a6430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::IEntitySystemScheduler::AddChildFront
          (IEntitySystemScheduler *this,FTaskID param_1,FTaskID param_2)

{
  int *piVar1;
  short *psVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FTaskID FVar7;
  longlong lVar8;
  uint uVar9;
  
  if (param_1.Index == -1) {
    return;
  }
  if (param_2.Index == -1) {
    return;
  }
  if (param_2.Index <= param_1.Index) {
LAB_14618d332:
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7429933679914254678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                       ,0x156,
                       "Child.Index > Parent.Index && Child.Index == Parent.Index + Tasks[Parent.Index].NumChildren + 1"
                      );
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = (uint)~param_1.Index >> 0x1f;
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)param_1.Index * 0x88;
  if (param_2.Index != *(ushort *)(*(longlong *)this + 0x80 + lVar8) + 1 + param_1.Index)
  goto LAB_14618d332;
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
          ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                      *)(*(longlong *)this + lVar8),param_2.Index);
  if (!bVar4) {
    uVar5 = 0;
    if (param_2.Index < *(int *)(this + 8)) {
      uVar5 = (uint)~param_2.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)((longlong)param_2.Index * 0x88 + *(longlong *)this),param_1.Index);
    if (!bVar4) goto LAB_14618d1d6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Tasks[Parent.Index].ComputedSubsequents.IsBitSet(Child.Index) && !Tasks[Child.Index].ComputedSubsequents.IsBitSet(Parent.Index)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneTaskScheduler.cpp"
                     ,0x159,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14618d1d6:
  FVar7.Index = param_1.Index + 1;
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (uint)*(ushort *)(*(longlong *)this + 0x80 + lVar8) + FVar7.Index;
  for (; FVar7.Index < iVar6; FVar7.Index = FVar7.Index + 1) {
    FEntitySystemScheduler::AddPrerequisite((FEntitySystemScheduler *)this,param_2,FVar7);
  }
  uVar5 = 0;
  if (param_1.Index < *(int *)(this + 8)) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  psVar2 = (short *)(*(longlong *)this + 0x80 + lVar8);
  *psVar2 = *psVar2 + 1;
  uVar5 = 0;
  if (param_2.Index < *(int *)(this + 8)) {
    uVar5 = (uint)~param_2.Index >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)param_2.Index * 0x88;
  piVar1 = (int *)(*(longlong *)this + 0x70 + lVar8);
  *piVar1 = *piVar1 + 1;
  uVar5 = 0;
  if (param_2.Index < *(int *)(this + 8)) {
    uVar5 = (uint)~param_2.Index >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)(*(longlong *)this + 0x7c + lVar8) = param_1.Index;
  return;
}

// AddNullTask @ 1460a7e50

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall UE::MovieScene::IEntitySystemScheduler::AddNullTask(IEntitySystemScheduler *this)

{
  int in_EDX;
  
  FEntitySystemScheduler::AddNullTask((FEntitySystemScheduler *)this);
  return (FTaskID)in_EDX;
}

// AddPrerequisite @ 1460a7f50

void __thiscall
UE::MovieScene::IEntitySystemScheduler::AddPrerequisite
          (IEntitySystemScheduler *this,FTaskID param_1,FTaskID param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (((param_1.Index != -1) && (param_2.Index != -1)) && (param_1.Index != param_2.Index)) {
    uVar4 = 0;
    if (param_1.Index < *(int *)(this + 8)) {
      uVar4 = (uint)~param_1.Index >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
            ::IsBitSet((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                        *)(*(longlong *)this + (longlong)param_1.Index * 0x88),param_2.Index);
    if (!bVar3) {
      uVar4 = 0;
      if (param_1.Index < *(int *)(this + 8)) {
        uVar4 = (uint)~param_1.Index >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
      ::SetBit((TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
                *)(*(longlong *)this + (longlong)param_1.Index * 0x88),param_2.Index);
      uVar4 = 0;
      if (param_2.Index < *(int *)(this + 8)) {
        uVar4 = (uint)~param_2.Index >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar1 = (int *)((longlong)param_2.Index * 0x88 + 0x70 + *(longlong *)this);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

// AddTask @ 1460a9e50

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::IEntitySystemScheduler::AddTask
          (IEntitySystemScheduler *this,FTaskParams *param_1,
          TSharedPtr<UE::MovieScene::ITaskContext,1> *param_2,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_3)

{
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000028;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_48;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_38;
  
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  ::
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            (&local_38,in_stack_00000028);
  local_48._8_8_ = *(undefined8 *)&param_3->TypeIndex;
  local_48._padding_ = param_3->_padding_;
  if (local_48._8_8_ != 0) {
    LOCK();
    *(int *)(local_48._8_8_ + 8) = *(int *)(local_48._8_8_ + 8) + 1;
    UNLOCK();
  }
  FEntitySystemScheduler::AddTask((FEntitySystemScheduler *)this,param_1,param_2,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_3->TypeIndex);
  return (FTaskID)(int)param_1;
}

// CreateForkedAllocationTask @ 1460b9880

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::IEntitySystemScheduler::CreateForkedAllocationTask
          (IEntitySystemScheduler *this,FTaskParams *param_1,
          TSharedPtr<UE::MovieScene::ITaskContext,1> *param_2,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_3,TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                   *param_4,FEntityComponentFilter *param_5,FComponentMask *param_6,
          FComponentMask *param_7)

{
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar1;
  undefined1 local_68 [24];
  longlong local_50;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_48;
  
  local_68._0_8_ = *(undefined8 *)(param_5->AllMask).Bits.AllocatorInstance.InlineData;
  local_68._8_8_ = *(undefined8 *)((param_5->AllMask).Bits.AllocatorInstance.InlineData + 2);
  pTVar1 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
           ::
           TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                     (&local_48,
                      (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                       *)param_4);
  local_68._16_8_ = param_3->_padding_;
  local_50 = *(longlong *)&param_3->TypeIndex;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FEntitySystemScheduler::CreateForkedAllocationTask
            ((FEntitySystemScheduler *)this,param_1,param_2,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)(local_68 + 0x10),
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar1,(FEntityComponentFilter *)local_68,param_6,param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_3->TypeIndex);
  return (FTaskID)(int)param_1;
}

