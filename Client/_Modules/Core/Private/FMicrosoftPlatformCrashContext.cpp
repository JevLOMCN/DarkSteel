// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// AddPortableThreadCallStack @ 141818fb0

void __thiscall
FMicrosoftPlatformCrashContext::AddPortableThreadCallStack
          (FMicrosoftPlatformCrashContext *this,uint param_1,wchar_t *param_2,ulong64 *param_3,
          int param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong64 **local_38;
  undefined4 uStack_30;
  ulong64 *local_28;
  int local_20;
  wchar_t *local_18;
  uint local_10;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  local_20 = param_4;
  local_28 = param_3;
  if (param_4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38 = &local_28;
  uStack_30 = 1;
  local_18 = param_2;
  local_10 = param_1;
  (*pcVar1)(this,&local_38);
  return;
}

// AddPortableThreadCallStacks @ 141819060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMicrosoftPlatformCrashContext::AddPortableThreadCallStacks
          (FMicrosoftPlatformCrashContext *this,TArrayView<FThreadCallStack_const_,int> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  FThreadCallStack *pFVar14;
  uint uVar15;
  FProcHandle *pFVar16;
  undefined1 auStackY_4e8 [32];
  FString local_498;
  uint local_488;
  TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> local_480;
  FThreadCallStack *local_470;
  FProcHandle *local_468;
  FString local_460;
  TArray<void_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> local_450;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  pFVar16 = (FProcHandle *)&this->field_0x8;
  local_450.ArrayMax = 0x80;
  local_450.AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  local_450.ArrayNum = 0;
  local_468 = pFVar16;
  GetProcModuleHandles(pFVar16,&local_450);
  puVar1 = &this->field_0x38;
  iVar9 = param_1->ArrayNum;
  uVar15 = *(int *)&this->field_0x40 + iVar9;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  puVar2 = &this->field_0x44;
  if (*(int *)&this->field_0x44 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar15,(ForAnyElementType *)puVar1,*(int *)&this->field_0x40,(int *)puVar2);
  }
  pFVar14 = param_1->DataPtr;
  local_470 = pFVar14 + iVar9;
  if (pFVar14 != local_470) {
    do {
      local_488 = pFVar14->ThreadId;
      local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_498.Data.ArrayNum = 0;
      local_498.Data.ArrayMax = 0;
      local_480.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_480.ArrayNum = 0;
      local_480.ArrayMax = 0;
      pFVar10 = ::FString::FString(&local_460,pFVar14->ThreadName);
      if (&local_498 != pFVar10) {
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
        local_498.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_498.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_498.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      ConvertProgramCountersToStackFrames
                (pFVar16,&local_450,(pFVar14->StackFrames).DataPtr,(pFVar14->StackFrames).ArrayNum,
                 &local_480);
      if ((*(FString **)puVar1 <= &local_498) &&
         (&local_498 < (FString *)((longlong)*(FString **)puVar1 + (longlong)*(int *)puVar2 * 0x28))
         ) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = *(int *)&this->field_0x40;
      if (iVar9 == *(int *)puVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)puVar1,(int *)puVar2);
      }
      FVar7.Data = local_498.Data.AllocatorInstance.Data;
      lVar11 = (longlong)iVar9;
      *(int *)&this->field_0x40 = iVar9 + 1;
      lVar5 = *(longlong *)puVar1;
      *(undefined8 *)(lVar5 + lVar11 * 0x28) = 0;
      lVar13 = (longlong)local_498.Data.ArrayNum;
      *(int *)(lVar5 + lVar11 * 0x28 + 8) = local_498.Data.ArrayNum;
      pFVar4 = (ForAnyElementType *)(lVar5 + lVar11 * 0x28);
      piVar12 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (local_498.Data.ArrayNum == 0) {
        *piVar12 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_498.Data.ArrayNum,0,pFVar4,local_498.Data.ArrayNum,piVar12);
        memcpy(pFVar4->Data,FVar7.Data,lVar13 * 2);
      }
      FVar7.Data = local_480.AllocatorInstance.Data;
      pFVar3 = pFVar4 + 3;
      *(uint *)&pFVar4[2].Data = local_488;
      piVar12 = (int *)((longlong)&pFVar4[4].Data + 4);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      iVar9 = local_480.ArrayNum;
      *(int *)&pFVar4[4].Data = local_480.ArrayNum;
      if (local_480.ArrayNum == 0) {
        *piVar12 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,local_480.ArrayNum,0,pFVar3,local_480.ArrayNum,piVar12);
        ConstructItems<FCrashStackFrame,FCrashStackFrame,int>
                  (pFVar3->Data,(FCrashStackFrame *)FVar7.Data,iVar9);
      }
      DestructItems<FCrashStackFrame,int>
                ((FCrashStackFrame *)local_480.AllocatorInstance.Data,local_480.ArrayNum);
      if ((FCrashStackFrame *)local_480.AllocatorInstance.Data != (FCrashStackFrame *)0x0) {
        FMemory::Free(local_480.AllocatorInstance.Data);
      }
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      pFVar14 = pFVar14 + 1;
      pFVar16 = local_468;
    } while (pFVar14 != local_470);
  }
  if (local_450.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)local_450.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddThreadContextString @ 141819960

void __cdecl
FMicrosoftPlatformCrashContext::AddThreadContextString
          (uint param_1,uint param_2,FString *param_3,
          TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> *param_4,FString *param_5)

{
  size_t sVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res20 [8];
  FString local_68;
  TStringView<wchar_t> local_58;
  
  ::FString::AppendChars(param_5,L"<Thread>",8);
  ::FString::AppendChars(param_5,L"<CallStack>",0xb);
  iVar6 = param_4->ArrayNum;
  pFVar3 = (param_4->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar6 * 0x20;
  iVar5 = 0;
  while( true ) {
    if (param_4->ArrayNum != iVar6) {
      `TCheckedPointerIterator<FCrashStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = *(int *)(pFVar3 + 8) + -1;
    if (*(int *)(pFVar3 + 8) == 0) {
      iVar2 = 0;
    }
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    pFVar3 = pFVar3 + 0x20;
    iVar5 = iVar2;
  }
  iVar6 = param_4->ArrayNum;
  pFVar3 = (param_4->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar6 * 0x20;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  while( true ) {
    if (param_4->ArrayNum != iVar6) {
      `TCheckedPointerIterator<FCrashStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar3 == pFVar4) break;
    ::FString::PrintfImpl((FString *)&local_58,L"%-*s 0x%016llx + %-16llx");
    iVar5 = local_58.Size + -1;
    if (local_58.Size == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,local_58.DataPtr,iVar5);
    if (local_58.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    ::FString::AppendChars(&local_68,L"\r\n",2);
    pFVar3 = pFVar3 + 0x20;
  }
  if (local_68.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    iVar6 = 0;
    local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_141819ad5;
  }
  sVar1 = wcslen(local_58.DataPtr);
  iVar6 = (int)sVar1;
LAB_141819ad5:
  local_58.Size = iVar6;
  FGenericCrashContext::AppendEscapedXMLString(param_5,&local_58);
  ::FString::AppendChars(param_5,L"</CallStack>",0xc);
  ::FString::AppendChars(param_5,L"\r\n",2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl((FString *)&local_58,L"<IsCrashed>%s</IsCrashed>");
  iVar6 = local_58.Size + -1;
  if (local_58.Size == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(param_5,local_58.DataPtr,iVar6);
  if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  ::FString::AppendChars(param_5,L"\r\n",2);
  ::FString::AppendChars(param_5,L"<Registers></Registers>",0x17);
  ::FString::AppendChars(param_5,L"\r\n",2);
  ::FString::PrintfImpl((FString *)&local_58,L"<ThreadID>%d</ThreadID>");
  iVar6 = local_58.Size + -1;
  if (local_58.Size == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(param_5,local_58.DataPtr,iVar6);
  if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  ::FString::AppendChars(param_5,L"\r\n",2);
  ::FString::PrintfImpl((FString *)&local_58,L"<ThreadName>%s</ThreadName>");
  iVar6 = local_58.Size + -1;
  if (local_58.Size == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(param_5,local_58.DataPtr,iVar6);
  if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  ::FString::AppendChars(param_5,L"\r\n",2);
  ::FString::AppendChars(param_5,L"</Thread>",9);
  ::FString::AppendChars(param_5,L"\r\n",2);
  return;
}

// CaptureAllThreadContexts @ 14181dd70

void __thiscall
FMicrosoftPlatformCrashContext::CaptureAllThreadContexts(FMicrosoftPlatformCrashContext *this)

{
  FThreadManager *this_00;
  FMicrosoftPlatformCrashContext *local_res8 [4];
  code *local_18;
  FMicrosoftPlatformCrashContext **local_10;
  
  this_00 = FThreadManager::Get();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMicrosoftPlatformCrashContext::CaptureAllThreadContexts'::__l2::<lambda_1>,bool,unsigned_int,wchar_t_const_*,TArrayView<unsigned___int64_const_,int>_const_&>
             ::Call;
  local_res8[0] = this;
  FThreadManager::ForEachThreadStackBackTrace
            (this_00,(TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*,TArrayView<unsigned___int64_const_,int>_const_&)>
                      *)&local_18);
  return;
}

// ConvertProgramCountersToStackFrames @ 14181f730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014181fd50) */
/* WARNING: Removing unreachable block (ram,0x00014181fb8b) */

void __cdecl
FMicrosoftPlatformCrashContext::ConvertProgramCountersToStackFrames
          (FProcHandle *param_1,
          TArray<void_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *param_2,
          ulong64 *param_3,int param_4,TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> *param_5
          )

{
  FCrashStackFrame *pFVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  size_t sVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<void_*> FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  ForAnyElementType _Src;
  uint uVar19;
  undefined1 auStackY_3d8 [32];
  ForAnyElementType local_388;
  undefined8 local_380;
  ForElementType<void_*> local_378;
  FScriptContainerElement *local_370;
  undefined8 local_368;
  FScriptContainerElement *local_360;
  longlong local_358;
  FScriptContainerElement *local_350;
  undefined8 local_348;
  undefined8 local_340;
  ulonglong local_338;
  ulong64 *local_330;
  longlong local_328;
  FScriptContainerElement *local_318;
  uint uStack_310;
  undefined4 uStack_30c;
  FProcHandle local_308;
  FString local_300;
  longlong local_2f0;
  FScriptContainerElement *local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  FScriptContainerElement *local_2c8;
  uint uStack_2c0;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  FString local_298;
  FString local_288;
  FScriptContainerElement local_278 [528];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_378 = (ForElementType<void_*>)param_2;
  local_330 = param_3;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_4);
  }
  pFVar1 = (FCrashStackFrame *)(param_5->AllocatorInstance).Data;
  if (param_5->ArrayMax < param_4) {
    DestructItems<FCrashStackFrame,int>(pFVar1,param_5->ArrayNum);
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax != param_4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_4,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  else {
    DestructItems<FCrashStackFrame,int>(pFVar1,param_5->ArrayNum);
    param_5->ArrayNum = 0;
  }
  pFVar14 = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_300,L"Unknown");
  local_308 = *param_1;
  if (local_308 == (FProcHandle)0x0) {
    local_308 = (FProcHandle)GetCurrentProcess();
  }
  local_2f0 = (longlong)param_4;
  if (param_4 != 0) {
    local_328 = 0;
    do {
      _Src.Data = local_300.Data.AllocatorInstance.Data;
      piVar18 = &param_5->ArrayMax;
      uVar19 = *(int *)((longlong)param_2 + 0x408);
      uVar2 = param_3[local_328];
      uVar17 = 0;
      if (*(ForElementType<void_*> *)((longlong)param_2 + 0x400) != (ForElementType<void_*>)0x0) {
        param_2 = (TArray<void_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
                  *(ForElementType<void_*> *)((longlong)param_2 + 0x400);
      }
      pFVar13 = pFVar14;
      uVar15 = uVar17;
      uVar6 = uVar19;
      if (0 < (int)uVar19) {
        do {
          uVar16 = uVar6 >> 1;
          iVar10 = uVar16 + (int)pFVar13;
          if (*(ulonglong *)((longlong)param_2 + (longlong)iVar10 * 8) <= uVar2) {
            pFVar13 = (FScriptContainerElement *)(ulonglong)(iVar10 + (uVar6 & 1));
          }
          uVar15 = (uint)pFVar13;
          uVar6 = uVar16;
        } while (uVar16 != 0);
      }
      uVar15 = uVar15 - 1;
      iVar10 = local_300.Data.ArrayNum;
      if (((int)uVar15 < 0) || ((int)uVar19 <= (int)uVar15)) {
        local_388.Data = (FScriptContainerElement *)0x0;
        FVar9.Data = pFVar14;
        if (iVar10 != 0) {
          local_380._0_4_ = iVar10;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar10,0,&local_388,iVar10,(int *)((longlong)&local_380 + 4));
          memcpy(local_388.Data,_Src.Data,(longlong)iVar10 * 2);
          FVar9.Data = local_388.Data;
          uVar17 = local_380._4_4_;
          iVar10 = (int)local_380;
        }
        pFVar13 = (param_5->AllocatorInstance).Data;
        local_388.Data = (FScriptContainerElement *)0x0;
        local_348 = CONCAT44(uVar17,iVar10);
        local_380 = 0;
        local_340 = 0;
        local_350 = FVar9.Data;
        local_338 = uVar2;
        if ((pFVar13 <= (FScriptContainerElement *)&local_350) &&
           ((FScriptContainerElement *)&local_350 < pFVar13 + (longlong)*piVar18 * 0x20)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar10 = param_5->ArrayNum;
        if (iVar10 == *piVar18) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&param_5->AllocatorInstance,piVar18);
        }
        param_5->ArrayNum = iVar10 + 1;
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar10 * 0x20;
        *(undefined8 *)pFVar13 = 0;
        *(FScriptContainerElement **)pFVar13 = local_350;
        local_350 = (FScriptContainerElement *)0x0;
        *(undefined4 *)(pFVar13 + 8) = (undefined4)local_348;
        *(undefined4 *)(pFVar13 + 0xc) = local_348._4_4_;
        local_348 = 0;
        *(undefined8 *)(pFVar13 + 0x10) = local_340;
        *(ulonglong *)(pFVar13 + 0x18) = local_338;
      }
      else {
        pFVar13 = (FScriptContainerElement *)(ulonglong)(iVar10 - 1);
        if (iVar10 == 0) {
          pFVar13 = pFVar14;
        }
        if ((int)uVar15 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar12 = local_378;
        if (*(ForElementType<void_*> *)((longlong)local_378 + 0x400) != (ForElementType<void_*>)0x0)
        {
          FVar12 = *(ForElementType<void_*> *)((longlong)local_378 + 0x400);
        }
        iVar10 = K32GetModuleFileNameExW
                           (local_308,*(undefined8 *)((longlong)FVar12 + (longlong)(int)uVar15 * 8),
                            local_278,0x104);
        uVar19 = (uint)pFVar13;
        if (iVar10 != 0) {
          local_2e8 = local_278;
          sVar7 = wcslen((wchar_t *)local_278);
          pFVar13 = local_2e8;
          uVar19 = (uint)sVar7;
          local_318 = local_2e8;
          uStack_30c = uStack_2dc;
          local_2b8._12_4_ = uStack_2dc;
          uStack_310 = uVar19;
          uStack_2e0 = uVar19;
          local_2b8.Size = uVar19;
          local_2b8.DataPtr = (wchar_t *)local_2e8;
          iVar10 = UE::String::FindLastChar(&local_2b8,L'\\',CaseSensitive);
          local_2a8.DataPtr = (wchar_t *)pFVar13;
          if (iVar10 != -1) {
            uVar16 = (uVar19 - iVar10) - 1;
            uVar6 = uVar19;
            if ((int)uVar16 < (int)uVar19) {
              uVar6 = uVar16;
            }
            lVar11 = (longlong)(int)uVar19;
            uVar19 = uVar17;
            if (0 < (int)uVar6) {
              uVar19 = uVar6;
            }
            local_318 = local_278 + (lVar11 - (int)uVar19) * 2;
            uStack_30c = uStack_2cc;
            uStack_310 = uVar19;
            local_2d8 = local_318;
            uStack_2d0 = uVar19;
            local_2a8.DataPtr = (wchar_t *)local_318;
          }
          local_2a8.Size = uVar19;
          uVar6 = UE::String::FindLastChar(&local_2a8,L'.',CaseSensitive);
          _Src.Data = local_318;
          uVar19 = uStack_310;
          if (uVar6 != 0xffffffff) {
            uVar16 = uStack_310;
            if ((int)uVar6 < (int)uStack_310) {
              uVar16 = uVar6;
            }
            local_2c8 = local_318;
            uVar19 = uVar17;
            uStack_2c0 = uVar17;
            if (0 < (int)uVar16) {
              uVar19 = uVar16;
              uStack_2c0 = uVar16;
            }
          }
        }
        uVar6 = uVar17;
        if ((int)uVar15 < *(int *)((longlong)local_378 + 0x408)) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar12 = local_378;
        if (*(ForElementType<void_*> *)((longlong)local_378 + 0x400) != (ForElementType<void_*>)0x0)
        {
          FVar12 = *(ForElementType<void_*> *)((longlong)local_378 + 0x400);
        }
        local_318 = *(FScriptContainerElement **)((longlong)FVar12 + (longlong)(int)uVar15 * 8);
        lVar11 = local_330[local_328] - (longlong)local_318;
        pFVar8 = ::FString::ConstructFromPtrSize(&local_298,(wchar_t *)_Src.Data,uVar19);
        pFVar13 = pFVar14;
        uVar19 = uVar17;
        if (&local_288 != pFVar8) {
          pFVar13 = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar17 = (pFVar8->Data).ArrayNum;
          uVar19 = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        pFVar3 = (param_5->AllocatorInstance).Data;
        local_360 = local_318;
        piVar18 = &param_5->ArrayMax;
        local_368 = CONCAT44(uVar19,uVar17);
        local_370 = pFVar13;
        local_358 = lVar11;
        if ((pFVar3 <= (FScriptContainerElement *)&local_370) &&
           ((FScriptContainerElement *)&local_370 < pFVar3 + (longlong)*piVar18 * 0x20)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar10 = param_5->ArrayNum;
        if (iVar10 == *piVar18) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&param_5->AllocatorInstance,piVar18);
        }
        param_5->ArrayNum = iVar10 + 1;
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar10 * 0x20;
        *(undefined8 *)pFVar13 = 0;
        *(FScriptContainerElement **)pFVar13 = local_370;
        *(undefined4 *)(pFVar13 + 8) = (undefined4)local_368;
        *(undefined4 *)(pFVar13 + 0xc) = local_368._4_4_;
        *(FScriptContainerElement **)(pFVar13 + 0x10) = local_360;
        *(longlong *)(pFVar13 + 0x18) = local_358;
        local_368 = 0;
        local_370 = (FScriptContainerElement *)0x0;
        param_3 = local_330;
      }
      local_328 = local_328 + 1;
      param_2 = (TArray<void_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
                local_378;
    } while (local_328 < local_2f0);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPlatformAllThreadContextsString @ 141826970

bool __thiscall
FMicrosoftPlatformCrashContext::GetPlatformAllThreadContextsString
          (FMicrosoftPlatformCrashContext *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)&this->field_0x40;
  piVar3 = *(int **)&this->field_0x38;
  piVar1 = piVar3 + (longlong)iVar2 * 10;
  while( true ) {
    if (*(int *)&this->field_0x40 != iVar2) {
      `TCheckedPointerIterator<FThreadStackFrames_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (piVar3 == piVar1) break;
    AddThreadContextString
              (*(uint *)&this->field_0x14,
               *(uint *)&(((FString *)(piVar3 + 4))->Data).AllocatorInstance.Data,(FString *)piVar3,
               (TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> *)(piVar3 + 6),param_1);
    piVar3 = piVar3 + 10;
  }
  return 1 < (param_1->Data).ArrayNum;
}

// GetProcModuleHandles @ 141826ca0

void __cdecl
FMicrosoftPlatformCrashContext::GetProcModuleHandles
          (FProcHandle *param_1,
          TArray<void_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<void_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FProcHandle FVar7;
  ForElementType<void_*> FVar8;
  uint uVar9;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayNum;
LAB_141826cd0:
  do {
    while( true ) {
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      iVar6 = *piVar1;
      local_res8[0] = 0;
      FVar8 = (ForElementType<void_*>)param_2;
      if (FVar2 != (ForElementType<void_*>)0x0) {
        FVar8 = FVar2;
      }
      FVar7 = *param_1;
      if (FVar7 == (FProcHandle)0x0) {
        FVar7 = (FProcHandle)GetCurrentProcess();
      }
      iVar5 = K32EnumProcessModulesEx(FVar7,FVar8,iVar6 << 3,local_res8,3);
      if (iVar5 == 0) {
        *piVar1 = 0;
        if (param_2->ArrayMax == 0) {
          return;
        }
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                  (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
        return;
      }
      iVar5 = *piVar1;
      if (local_res8[0] <= (uint)(iVar6 << 3)) {
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        if (FVar2 != (ForElementType<void_*>)0x0) {
          param_2 = (TArray<void_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
                    FVar2;
        }
        AlgoImpl::IntroSortInternal<void_*,int,FIdentityFunctor,TLess<void>_>
                  ((void **)param_2,iVar5,local_res8[0]._0_1_,(TLess<void>)local_res8[0]._0_1_);
        return;
      }
      uVar9 = local_res8[0] >> 3;
      if ((int)uVar9 <= iVar5) break;
      iVar6 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                        (8,8,uVar9 - iVar5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<void_*>)param_2;
      if (FVar2 != (ForElementType<void_*>)0x0) {
        FVar8 = FVar2;
      }
      memset((void *)((longlong)FVar8 + (longlong)iVar6 * 8),0,(longlong)(int)(uVar9 - iVar5) << 3);
    }
  } while (iVar5 <= (int)uVar9);
  iVar5 = iVar5 - uVar9;
  if (-1 < iVar5) goto LAB_141826dcc;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x458,
                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                    );
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  goto LAB_141826dd4;
LAB_141826dcc:
  if (iVar5 != 0) {
LAB_141826dd4:
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<void_*>)param_2;
    if (FVar2 != (ForElementType<void_*>)0x0) {
      FVar8 = FVar2;
    }
    _Dst = (void *)((longlong)FVar8 + (ulonglong)uVar9 * 8);
    iVar6 = (*piVar1 - uVar9) - iVar5;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar5 * 8),(longlong)iVar6 << 3);
    }
    *piVar1 = *piVar1 - iVar5;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
              (8,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
  }
  goto LAB_141826cd0;
}

// SetPortableCallStack @ 141832ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMicrosoftPlatformCrashContext::SetPortableCallStack
          (FMicrosoftPlatformCrashContext *this,ulong64 *param_1,int param_2)

{
  undefined1 auStackY_468 [32];
  TArray<void_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> local_438;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_438.ArrayMax = 0x80;
  local_438.AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  local_438.ArrayNum = 0;
  GetProcModuleHandles((FProcHandle *)&this->field_0x8,&local_438);
  ConvertProgramCountersToStackFrames
            ((FProcHandle *)&this->field_0x8,&local_438,param_1,param_2,
             (TArray<FCrashStackFrame,TSizedDefaultAllocator<32>_> *)&this->field_0x28);
  if (local_438.AllocatorInstance.SecondaryData != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)local_438.AllocatorInstance.SecondaryData);
  }
  return;
}

