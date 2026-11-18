// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~FMemoryImageAllocatorBase @ 141589d20

void __thiscall
FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(FMemoryImageAllocatorBase *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = (void *)(this->Data).field0_0x0.Packed;
  if ((((ulonglong)pvVar1 & 1) == 0) && (pvVar1 != (void *)0x0)) {
    if (pvVar1 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
    }
    return;
  }
  return;
}

// CopyUnfrozen @ 1415b96b0

void __thiscall
FMemoryImageAllocatorBase::CopyUnfrozen
          (FMemoryImageAllocatorBase *this,FMemoryUnfreezeContent *param_1,FTypeLayoutDesc *param_2,
          int param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  _func___cdecl_uint_FMemoryUnfreezeContent_ptr_void_ptr_FTypeLayoutDesc_ptr_void_ptr *p_Var3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  if (0 < param_3) {
    pFVar6 = (this->Data).field0_0x0.UnfrozenPtr;
    uVar7 = (ulonglong)(uint)param_3;
    if (((ulonglong)pFVar6 & 1) != 0) {
      pFVar6 = (FScriptContainerElement *)
               ((longlong)&(this->Data).field0_0x0 + ((longlong)pFVar6 >> 0x18));
    }
    p_Var3 = param_2->UnfrozenCopyFunc;
    uVar1 = param_2->Alignment;
    uVar2 = param_2->Size;
    uVar4 = Freeze::GetTargetAlignment(param_2,&param_1->FrozenLayoutParameters);
    uVar8 = 0;
    uVar9 = 0;
    do {
      uVar5 = (*p_Var3)(param_1,pFVar6 + uVar8,param_2,
                        (void *)((ulonglong)uVar9 + (longlong)param_4));
      uVar8 = uVar8 + uVar4 + (uVar5 - 1) & -uVar4;
      uVar9 = (uVar2 - 1) + uVar1 + uVar9 & -uVar1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// MoveToEmpty @ 1415d5c90

void __thiscall
FMemoryImageAllocatorBase::MoveToEmpty
          (FMemoryImageAllocatorBase *this,FMemoryImageAllocatorBase *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  pvVar1 = (void *)(this->Data).field0_0x0.Packed;
  if ((((ulonglong)pvVar1 & 1) == 0) && (pvVar1 != (void *)0x0)) {
    FMemory::Free(pvVar1);
  }
  uVar4 = (param_1->Data).field0_0x0.Packed;
  if ((uVar4 & 1) != 0) {
    uVar4 = (longlong)&(param_1->Data).field0_0x0 + ((longlong)uVar4 >> 0x18);
  }
  (this->Data).field0_0x0.Packed = uVar4;
  if ((uVar4 & 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Frozen.IsFrozen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x188,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (param_1->Data).field0_0x0.Packed = 0;
  return;
}

// ResizeAllocation @ 1415eb790

void __thiscall
FMemoryImageAllocatorBase::ResizeAllocation
          (FMemoryImageAllocatorBase *this,int param_1,int param_2,ulong64 param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(this->Data).field0_0x0.Packed;
  if (((ulonglong)pvVar3 & 1) == 0) {
    if ((pvVar3 != (void *)0x0) || (0 < param_2)) {
      if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) goto LAB_1415eb80b;
      pvVar3 = FMemory::Realloc(pvVar3,(longlong)param_2 * param_3,param_4);
      (this->Data).field0_0x0.Packed = (ulong64)pvVar3;
      if (((ulonglong)pvVar3 & 1) != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Frozen.IsFrozen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                           ,0x187,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  else if ((uint)param_1 < (uint)param_2) {
LAB_1415eb80b:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidMemoryImageAllocatorNum(param_2,param_3);
  }
  return;
}

// ToString @ 141602750

void __thiscall
FMemoryImageAllocatorBase::ToString
          (FMemoryImageAllocatorBase *this,FTypeLayoutDesc *param_1,int param_2,int param_3,
          FPlatformTypeLayoutParameters *param_4,FMemoryToStringContext *param_5)

{
  uint uVar1;
  _func___cdecl_void_void_ptr_FTypeLayoutDesc_ptr_FPlatformTypeLayoutParameters_ptr_FMemoryToStringContext_ptr
  *p_Var2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  TStringBuilderBase<wchar_t>::AppendfImpl(param_5->String,L"TArray<%s>, Num: %d, Max: %d\n");
  param_5->Indent = param_5->Indent + 1;
  pFVar4 = (this->Data).field0_0x0.UnfrozenPtr;
  if (((ulonglong)pFVar4 & 1) != 0) {
    pFVar4 = (FScriptContainerElement *)
             ((longlong)&(this->Data).field0_0x0 + ((longlong)pFVar4 >> 0x18));
  }
  p_Var2 = param_1->ToStringFunc;
  iVar3 = 0;
  uVar1 = param_1->Size;
  if (0 < param_2) {
    do {
      FMemoryToStringContext::AppendIndent(param_5);
      TStringBuilderBase<wchar_t>::AppendfImpl(param_5->String,L"[%d]: ");
      (*p_Var2)(pFVar4 + iVar3 * uVar1,param_1,param_4,param_5);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  param_5->Indent = param_5->Indent + -1;
  return;
}

// WriteMemoryImage @ 141609e50

void __thiscall
FMemoryImageAllocatorBase::WriteMemoryImage
          (FMemoryImageAllocatorBase *this,FMemoryImageWriter *param_1,FTypeLayoutDesc *param_2,
          int param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (param_3 < 1) {
    FMemoryImageWriter::WriteNullPointer(param_1);
    return;
  }
  pvVar3 = (void *)(this->Data).field0_0x0.Packed;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)((longlong)&(this->Data).field0_0x0 + ((longlong)pvVar3 >> 0x18));
  }
  if (pvVar3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\MemoryImageAllocator.cpp"
                       ,0x4f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemoryImageWriter::WritePointer(param_1,(FTypeLayoutDesc *)&stack0xffffffffffffffe8);
  FMemoryImageWriter::WriteAlignment((FMemoryImageWriter *)&stack0xffffffffffffffe8,param_4);
  FMemoryImageWriter::WriteObjectArray
            ((FMemoryImageWriter *)&stack0xffffffffffffffe8,pvVar3,param_2,param_3);
  FMemoryImageWriter::~FMemoryImageWriter((FMemoryImageWriter *)&stack0xffffffffffffffe8);
  return;
}

