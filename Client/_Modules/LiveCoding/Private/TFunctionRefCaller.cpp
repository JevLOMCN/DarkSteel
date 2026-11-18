// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveCoding
// Functions: 3

// Call @ 146cd38b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveCodingModule::WaitForStartup'::__l5::<lambda_1>,bool>::Call(void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x24) != 1;
}

// Call @ 146cd38d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveCodingModule::OnDllLoaded'::__l8::<lambda_1>,void>::Call(void *param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  undefined1 *puVar3;
  FScriptContainerElement *_Src;
  FName *pFVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ReservePagesGlobalData *lpCriticalSection;
  FString *pFVar11;
  HMODULE pHVar12;
  wchar_t *lpModuleName;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType this;
  longlong lVar15;
  undefined1 auStackX_8 [8];
  HMODULE pHStack_78;
  longlong lStack_70;
  ForAnyElementType FStack_68;
  undefined8 uStack_60;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> TStack_58;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> TStack_48;
  FString FStack_38;
  
  lpCriticalSection = FLiveCodingModule::GetReservePagesGlobalData();
  while( true ) {
    if (lpCriticalSection == (ReservePagesGlobalData *)0x0) {
      uStack_60 = 0;
      FStack_68.Data = (FScriptContainerElement *)0x0;
                    /* WARNING: Subroutine does not return */
      ReportNotNullPtr();
    }
    uStack_60 = 0;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar14 = (lpCriticalSection->ModuleChanges).ArrayNum -
             lpCriticalSection->LastReservePagesModuleCount;
    if (uVar14 < 0x80) {
      pTVar2 = &lpCriticalSection->ReservePagesTaskRef;
      if (pTVar2 != (TRefCountPtr<FBaseGraphTask> *)&lStack_70) {
        pFVar5 = pTVar2->Reference;
        pTVar2->Reference = (FBaseGraphTask *)0x0;
        if (pFVar5 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar3 = &pFVar5->field_0x30;
          iVar9 = *(int *)puVar3;
          *(int *)puVar3 = *(int *)puVar3 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((FName *)FStack_68.Data != (FName *)0x0) {
        FMemory::Free(FStack_68.Data);
      }
      return;
    }
    _Src = (lpCriticalSection->ModuleChanges).AllocatorInstance.Data +
           (longlong)lpCriticalSection->LastReservePagesModuleCount * 0xc;
    if (((_Src == (FScriptContainerElement *)0x0) && (uVar14 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,uVar14,&FStack_68,(int *)&uStack_60,(int *)((longlong)&uStack_60 + 4));
    if (uVar14 != 0) {
      memcpy(FStack_68.Data + (longlong)iVar9 * 0xc,_Src,(longlong)(int)uVar14 * 0xc);
    }
    lpCriticalSection->LastReservePagesModuleCount = (lpCriticalSection->ModuleChanges).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1425,"LiveCodingReservePages",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingModule.cpp"
                 ,0x591);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1425);
    }
    uVar13 = uStack_60 & 0xffffffff;
    TStack_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_58.ArrayNum = 0;
    TStack_58.ArrayMax = 0;
    if ((int)uStack_60 < 0) break;
    if (0 < (int)uStack_60) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)uStack_60,&TStack_58.AllocatorInstance,0,&TStack_58.ArrayMax);
      uVar13 = uStack_60 & 0xffffffff;
    }
    iVar9 = (int)uVar13;
    pFVar4 = (FName *)(FStack_68.Data + (longlong)iVar9 * 0xc);
    this.Data = FStack_68.Data;
    while( true ) {
      if ((int)uVar13 != iVar9) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<FLiveCodingModule::ModuleChange,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
        uVar13 = uStack_60 & 0xffffffff;
      }
      if ((FName *)this.Data == pFVar4) break;
      if ((char)(((FName *)((longlong)this.Data + 8))->ComparisonIndex).Value != '\0') {
        pFVar11 = ::FName::ToString((FName *)this.Data,&FStack_38);
        if ((pFVar11->Data).ArrayNum == 0) {
          lpModuleName = L"";
        }
        else {
          lpModuleName = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pHVar12 = GetModuleHandleW(lpModuleName);
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
        pHStack_78 = pHVar12;
        if (((TStack_58.AllocatorInstance.Data <= (FScriptContainerElement *)&pHStack_78) &&
            ((FScriptContainerElement *)&pHStack_78 <
             TStack_58.AllocatorInstance.Data + (longlong)TStack_58.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = TStack_58.ArrayNum;
        if (TStack_58.ArrayNum == TStack_58.ArrayMax) {
          iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&TStack_58.AllocatorInstance,&TStack_58.ArrayMax);
        }
        TStack_58.ArrayNum = iVar10 + 1;
        *(HMODULE *)(TStack_58.AllocatorInstance.Data + (longlong)iVar10 * 8) = pHStack_78;
        uVar13 = uStack_60 & 0xffffffff;
      }
      this.Data = (FScriptContainerElement *)&((FName *)((longlong)this.Data + 8))->Number;
    }
    TStack_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_48.ArrayNum = 0;
    TStack_48.ArrayMax = 0;
    ::`anonymous_namespace'::ReservePages(&TStack_48,&TStack_58,0x8000000,0x10000);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &lpCriticalSection->ReservedPages;
    if ((pTVar1 == &TStack_48) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar15 = (longlong)TStack_48.ArrayNum;
    if (TStack_48.ArrayNum != 0) {
      iVar9 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,TStack_48.ArrayNum,&pTVar1->AllocatorInstance,
                         &(lpCriticalSection->ReservedPages).ArrayNum,
                         &(lpCriticalSection->ReservedPages).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8,TStack_48.AllocatorInstance.Data
             ,lVar15 << 3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (TStack_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_48.AllocatorInstance.Data);
    }
    if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_58.AllocatorInstance.Data);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((FName *)FStack_68.Data != (FName *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    lpCriticalSection = FLiveCodingModule::GetReservePagesGlobalData();
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum(uVar13);
}

// Call @ 146cd38e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveCodingModule::StartLiveCodingAsync'::__l10::<lambda_1>,void>::Call
          (void *param_1)

{
  FLiveCodingModule::StartLiveCoding
            (*(FLiveCodingModule **)param_1,*(ELiveCodingStartupMode *)((longlong)param_1 + 8));
  return;
}

