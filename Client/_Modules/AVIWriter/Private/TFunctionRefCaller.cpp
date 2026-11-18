// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 2

// Call @ 14464faf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  void *_Src;
  FCapturedFrames *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  LPCRITICAL_SECTION p_Var8;
  ForAnyElementType *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FStack_78;
  uint uStack_70;
  int iStack_6c;
  TOptional<FCapturedFrame> TStack_68;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x10));
  FStack_78.Data = (FScriptContainerElement *)0x0;
  uStack_70 = *(uint *)(*(longlong *)param_1 + 0x40);
  lVar7 = (longlong)(int)uStack_70;
  _Src = *(void **)(*(longlong *)param_1 + 0x38);
  if (uStack_70 == 0) {
    iStack_6c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uStack_70,0,&FStack_78,uStack_70,&iStack_6c);
    memcpy(FStack_78.Data,_Src,lVar7 << 2);
  }
  uVar10 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x10));
  uVar11 = *(uint *)(*(longlong *)param_1 + 0x90);
  if ((int)uStack_70 < (int)*(uint *)(*(longlong *)param_1 + 0x90)) {
    uVar11 = uStack_70;
  }
  if ((int)uVar11 < 1) {
    if (uVar11 == 0) goto LAB_14464f235;
  }
  else {
    uVar13 = uVar10;
    do {
      this = *(FCapturedFrames **)param_1;
      uVar12 = (uint)uVar13;
      uVar4 = 0;
      if ((int)uVar12 < (int)uStack_70) {
        uVar4 = ~uVar12 >> 0x1f;
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
      FCapturedFrames::UnArchiveFrame(this,&TStack_68,*(uint *)(FStack_78.Data + uVar10 * 4));
      if (TStack_68.bIsSet != false) {
        p_Var8 = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x58);
        if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          ReportNotNullPtr();
        }
        EnterCriticalSection(p_Var8);
        lVar7 = *(longlong *)param_1;
        pFVar9 = (ForAnyElementType *)(lVar7 + 0x80);
        if ((TStack_68.bIsSet == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((((TOptional<FCapturedFrame> *)pFVar9->Data <= &TStack_68) &&
            (&TStack_68 <
             (TOptional<FCapturedFrame> *)
             (&((TOptional<FCapturedFrame> *)pFVar9->Data)->TypedValue + *(int *)(lVar7 + 0x8c))))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)(lVar7 + 0x88);
        if (iVar5 == *(int *)(lVar7 + 0x8c)) {
          iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,pFVar9,(int *)(lVar7 + 0x8c));
        }
        lVar6 = (longlong)iVar5;
        *(int *)(lVar7 + 0x88) = iVar5 + 1;
        pFVar1 = pFVar9->Data;
        *(double *)(pFVar1 + lVar6 * 0x30) = TStack_68.TypedValue.StartTimeSeconds;
        *(double *)(pFVar1 + lVar6 * 0x30 + 8) = TStack_68.TypedValue.EndTimeSeconds;
        *(uint *)(pFVar1 + lVar6 * 0x30 + 0x10) = TStack_68.TypedValue.FrameIndex;
        *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x18) = 0;
        *(FScriptContainerElement **)(pFVar1 + lVar6 * 0x30 + 0x18) =
             TStack_68.TypedValue.FrameData.AllocatorInstance.Data;
        TStack_68.TypedValue.FrameData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar1 + lVar6 * 0x30 + 0x20) = TStack_68.TypedValue.FrameData.ArrayNum;
        *(int *)(pFVar1 + lVar6 * 0x30 + 0x24) = TStack_68.TypedValue.FrameData.ArrayMax;
        TStack_68.TypedValue.FrameData.ArrayNum = 0;
        TStack_68.TypedValue.FrameData.ArrayMax = 0;
        *(FEvent **)(pFVar1 + lVar6 * 0x30 + 0x28) = TStack_68.TypedValue.FrameProcessedEvent;
        LeaveCriticalSection(p_Var8);
        if ((TStack_68.bIsSet != false) &&
           (TStack_68.TypedValue.FrameData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(TStack_68.TypedValue.FrameData.AllocatorInstance.Data);
        }
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)(int)uVar11);
  }
  p_Var8 = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x10);
  if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var8);
  lVar7 = *(longlong *)param_1;
  uVar4 = 0;
  if ((int)uVar11 <= *(int *)(lVar7 + 0x40)) {
    uVar4 = ~uVar11 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)(lVar7 + 0x40) - uVar11;
  if (iVar5 != 0) {
    memmove(*(void **)(lVar7 + 0x38),
            (void *)((longlong)*(void **)(lVar7 + 0x38) + (longlong)(int)uVar11 * 4),
            (longlong)iVar5 << 2);
  }
  *(int *)(lVar7 + 0x40) = *(int *)(lVar7 + 0x40) - uVar11;
  LeaveCriticalSection(p_Var8);
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x50) + 0x10))();
LAB_14464f235:
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  return;
}

// Call @ 14464fb00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

