// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 95

// operator() @ 141a9ddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FWindowsPlatformProcess::CreateProcInternal'::__l2::<lambda_1>::operator()(void *this)

{
  DWORD DVar1;
  DWORD dwMessageId;
  wchar_t *pwVar2;
  undefined1 auStackY_4e8 [32];
  FPlatformMemoryStats local_4a8;
  WCHAR local_418 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  DVar1 = GetLastError();
  local_418[0] = L'\0';
  dwMessageId = DVar1;
  if (DVar1 == 0) {
    dwMessageId = GetLastError();
  }
  FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0x400,local_418,0x200,(va_list *)0x0);
  pwVar2 = wcschr(local_418,L'\r');
  if (pwVar2 != (wchar_t *)0x0) {
    *pwVar2 = L'\0';
  }
  pwVar2 = wcschr(local_418,L'\n');
  if (pwVar2 != (wchar_t *)0x0) {
    *pwVar2 = L'\0';
  }
  if (2 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  if ((DVar1 == 8) || (DVar1 == 0xe)) {
    FWindowsPlatformMemory::GetStats(&local_4a8);
    if ((byte)LogWindows._0_1_ < 3) goto LAB_141a9df77;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  if (2 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
LAB_141a9df77:
  if ((undefined4 *)**(undefined8 **)((longlong)this + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)**(undefined8 **)((longlong)this + 0x10) = 0;
  }
  return;
}

// operator() @ 141a9e380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FWindowsPlatformProcess::ResolveImport'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  FString *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  FString local_298;
  FString local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [260];
  wchar_t local_50 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  uVar15 = (ulonglong)param_1;
  if (param_1 < param_2) {
    lVar16 = uVar15 << 4;
    do {
      plVar2 = *(longlong **)((longlong)this + 0x10);
      local_278.Base = local_258;
      puVar3 = *(undefined8 **)((longlong)this + 0x18);
      local_278.CurPos = local_258;
      uVar14 = (uint)uVar15;
      local_278.End = local_50;
      local_278.bIsDynamic = false;
      local_278.bIsExternal = false;
      iVar1 = (int)plVar2[1];
      uVar11 = 0;
      uVar12 = uVar11;
      if ((int)uVar14 < iVar1) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_2a8 = (longlong)(int)uVar14;
        local_2a0 = (longlong)iVar1;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      lVar4 = *plVar2;
      if ((((int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1) != 0) &&
          (local_278.CurPos[-1] != L'/')) && (local_278.CurPos[-1] != L'\\')) {
        if (local_278.End < local_278.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_278,1);
        }
        *local_278.CurPos = L'/';
        local_278.CurPos = local_278.CurPos + 1;
      }
      iVar1 = *(int *)(lVar4 + 8 + lVar16);
      uVar12 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar12 = uVar11;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (&local_278,*(wchar_t **)(lVar4 + lVar16),uVar12);
      if ((((int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1) != 0) &&
          (local_278.CurPos[-1] != L'/')) && (local_278.CurPos[-1] != L'\\')) {
        if (local_278.End < local_278.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_278,1);
        }
        *local_278.CurPos = L'/';
        local_278.CurPos = local_278.CurPos + 1;
      }
      iVar1 = *(int *)(puVar3 + 1);
      uVar12 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar12 = uVar11;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_278,(wchar_t *)*puVar3,uVar12);
      plVar2 = *(longlong **)this;
      pcVar7 = *(code **)(*plVar2 + 0x78);
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      *local_278.CurPos = L'\0';
      cVar10 = (*pcVar7)(plVar2,local_278.Base);
      if (cVar10 != '\0') {
        if (local_278.End < local_278.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_278,1);
        }
        *local_278.CurPos = L'\0';
        ::FString::FString(&local_298,local_278.Base);
        pFVar13 = FPaths::ConvertRelativePathToFull(&local_288,&local_298);
        pFVar5 = *(FString **)((longlong)this + 8);
        if (pFVar5 != pFVar13) {
          pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pFVar5->Data).AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar5->Data).ArrayNum = (pFVar13->Data).ArrayNum;
          (pFVar5->Data).ArrayMax = (pFVar13->Data).ArrayMax;
          (pFVar13->Data).ArrayNum = 0;
          (pFVar13->Data).ArrayMax = 0;
        }
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
        return true;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar16 = lVar16 + 0x10;
    } while ((int)(uVar14 + 1) < param_2);
  }
  return false;
}

// operator() @ 141a9e7f0

void __thiscall `FWindowsPlatformProcess::ExecProcess'::__l121::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  if (((void *)**(undefined8 **)this != (void *)0x0) && (**(longlong **)((longlong)this + 8) != 0))
  {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FWindowsPlatformProcess::ReadPipeToArray((void *)**(undefined8 **)this,&local_18);
    pTVar6 = *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
    if (pTVar6 == &local_18) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    sVar5 = (size_t)local_18.ArrayNum;
    if (local_18.ArrayNum != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_18.ArrayNum,&pTVar6->AllocatorInstance,&pTVar6->ArrayNum,
                         &pTVar6->ArrayMax);
      memcpy((pTVar6->AllocatorInstance).Data + iVar4,local_18.AllocatorInstance.Data,sVar5);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if ((*(void **)(*(longlong *)this + 8) != (void *)0x0) &&
     (*(longlong *)(*(longlong *)((longlong)this + 8) + 8) != 0)) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FWindowsPlatformProcess::ReadPipeToArray(*(void **)(*(longlong *)this + 8),&local_18);
    lVar1 = *(longlong *)((longlong)this + 0x10);
    pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
    if (pTVar6 == &local_18) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    sVar5 = (size_t)local_18.ArrayNum;
    if (local_18.ArrayNum != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_18.ArrayNum,(ForAnyElementType *)pTVar6,(int *)(lVar1 + 0x18),
                         (int *)(lVar1 + 0x1c));
      memcpy((pTVar6->AllocatorInstance).Data + iVar4,local_18.AllocatorInstance.Data,sVar5);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 141a9e990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HINSTANCE__ * __thiscall
`FWindowsPlatformProcess::LoadLibraryWithSearchPaths'::__l15::<lambda_1>::operator()(void *this)

{
  wchar_t wVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  HMODULE pHVar6;
  ulong64 uVar7;
  FWriteBuffer *pFVar8;
  wchar_t *pwVar9;
  wchar_t *lpLibFileName;
  int iVar10;
  undefined1 auStack_58 [40];
  TLogScope<1> local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  lpLibFileName = L"";
  bVar3 = false;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuWindows_LoadLibraryFields>(&local_30);
    if (*(int *)(*(undefined8 **)this + 1) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)**(undefined8 **)this;
    }
    iVar10 = 0;
    wVar1 = *pwVar9;
    pwVar4 = pwVar9;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar10 = iVar10 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar9,iVar10);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar5;
    if (lVar2 != local_30._8_8_) {
      *(longlong *)(lVar2 + 0x28) = lVar5;
    }
    bVar3 = true;
    *(undefined8 *)(local_30._8_8_ + 0x28) = *(undefined8 *)(local_30._8_8_ + 0x20);
  }
  if (*(int *)(*(undefined8 **)this + 1) != 0) {
    lpLibFileName = (wchar_t *)**(undefined8 **)this;
  }
  pHVar6 = LoadLibraryW(lpLibFileName);
  if (bVar3) {
    uVar7 = UE::Trace::Private::TimeGetTimestamp();
    lVar5 = uVar7 - UE::Trace::Private::GStartCycle;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar8 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar8 - *(int *)&pFVar8->Cursor < 8) {
      pFVar8 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar8->Cursor = lVar5 * 0x100 + 0x12;
    pFVar8->Cursor = pFVar8->Cursor + 8;
    pFVar8->Committed = pFVar8->Cursor;
  }
  return (HINSTANCE__ *)pHVar6;
}

// operator() @ 141a9eb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HINSTANCE__ * __thiscall
`FWindowsPlatformProcess::LoadLibraryWithSearchPaths'::__l2::<lambda_2>::operator()(void *this)

{
  wchar_t wVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  HMODULE pHVar6;
  ulong64 uVar7;
  FWriteBuffer *pFVar8;
  wchar_t *pwVar9;
  wchar_t *lpLibFileName;
  int iVar10;
  undefined1 auStack_58 [40];
  TLogScope<1> local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  lpLibFileName = L"";
  bVar3 = false;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuWindows_LoadLibraryFields>(&local_30);
    if (*(int *)(*(undefined8 **)this + 1) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)**(undefined8 **)this;
    }
    iVar10 = 0;
    wVar1 = *pwVar9;
    pwVar4 = pwVar9;
    while (wVar1 != L'\0') {
      pwVar4 = pwVar4 + 1;
      iVar10 = iVar10 + 1;
      wVar1 = *pwVar4;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar9,iVar10);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar5;
    if (lVar2 != local_30._8_8_) {
      *(longlong *)(lVar2 + 0x28) = lVar5;
    }
    bVar3 = true;
    *(undefined8 *)(local_30._8_8_ + 0x28) = *(undefined8 *)(local_30._8_8_ + 0x20);
  }
  if (*(int *)(*(undefined8 **)this + 1) != 0) {
    lpLibFileName = (wchar_t *)**(undefined8 **)this;
  }
  pHVar6 = LoadLibraryW(lpLibFileName);
  if (bVar3) {
    uVar7 = UE::Trace::Private::TimeGetTimestamp();
    lVar5 = uVar7 - UE::Trace::Private::GStartCycle;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar8 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar8 - *(int *)&pFVar8->Cursor < 8) {
      pFVar8 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar8->Cursor = lVar5 * 0x100 + 0x12;
    pFVar8->Cursor = pFVar8->Cursor + 8;
    pFVar8->Committed = pFVar8->Cursor;
  }
  return (HINSTANCE__ *)pHVar6;
}

// AddDllDirectory @ 141a9f740

void __cdecl FWindowsPlatformProcess::AddDllDirectory(wchar_t *param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  IPlatformFile *pIVar8;
  TStringView<wchar_t> *pTVar9;
  FName *pFVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FString local_88;
  FScriptContainerElement *local_78;
  undefined8 local_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  ::FString::FString(&local_68,param_1);
  FPaths::ConvertRelativePathToFull(&local_88,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(&local_88);
  FPaths::MakePlatformFilename(&local_88);
  FVar4 = DllDirectories.AllocatorInstance;
  pFVar14 = DllDirectories.AllocatorInstance.Data + (longlong)DllDirectories.ArrayNum * 0x10;
  FVar12 = DllDirectories.AllocatorInstance;
  iVar5 = local_88.Data.ArrayNum;
  do {
    if (FVar12.Data == pFVar14) {
LAB_141a9f80c:
      if (((DllDirectories.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           DllDirectories.AllocatorInstance.Data + (longlong)DllDirectories.ArrayMax * 0x10)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (DllDirectories.ArrayNum == DllDirectories.ArrayMax) {
        DllDirectories.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&DllDirectories.AllocatorInstance,&DllDirectories.ArrayMax);
      }
      iVar5 = local_88.Data.ArrayNum;
      FVar12.Data = local_88.Data.AllocatorInstance.Data;
      lVar13 = (longlong)DllDirectories.ArrayNum;
      DllDirectories.ArrayNum = DllDirectories.ArrayNum + 1;
      pFVar14 = DllDirectories.AllocatorInstance.Data + lVar13 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(int *)(pFVar14 + 8) = local_88.Data.ArrayNum;
      if (local_88.Data.ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,local_88.Data.ArrayNum,
                   (int *)(pFVar14 + 0xc));
        memcpy(*(void **)pFVar14,FVar12.Data,(longlong)iVar5 * 2);
      }
      local_78 = (FScriptContainerElement *)0x0;
      local_70 = 0;
      pIVar8 = IPlatformFile::GetPlatformPhysical();
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar12.Data = local_88.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar8 + 0x1e8))(pIVar8,&local_78,FVar12.Data,L".dll");
      iVar5 = (int)local_70;
      pFVar15 = local_78 + (longlong)(int)local_70 * 0x10;
      pFVar14 = local_78;
      while( true ) {
        if ((int)local_70 != iVar5) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar14 == pFVar15) break;
        local_58.DataPtr = *(wchar_t **)&pFVar14->field_0x0;
        local_58.Size = *(int *)(pFVar14 + 8) + -1;
        if (*(int *)(pFVar14 + 8) == 0) {
          local_58.Size = 0;
        }
        pTVar9 = FPathViews::GetCleanFilename(&local_48,&local_58);
        local_38 = pTVar9->DataPtr;
        uStack_30 = *(undefined8 *)&pTVar9->Size;
        pFVar10 = ::FName::FName(&local_res20,(int)*(undefined8 *)&pTVar9->Size,local_38,FNAME_Add);
        FVar1 = *pFVar10;
        local_res18 = FVar1;
        uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
        pTVar11 = TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)&SearchPathDllCache,uVar6 + FVar1.Number,&local_res18);
        FPaths::NormalizeDirectoryName((FString *)pFVar14);
        pFVar2 = (pTVar11->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + (longlong)pTVar11->ArrayMax * 0x10)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = pTVar11->ArrayNum;
        if (iVar7 == pTVar11->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pTVar11->ArrayNum = iVar7 + 1;
        ::FString::FString((FString *)((pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x10),
                           (FString *)pFVar14);
        pFVar14 = pFVar14 + 0x10;
      }
      DestructItems<FString,int>((FString *)local_78,(int)local_70);
      if (local_78 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78);
      }
LAB_141a9fac4:
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      return;
    }
    iVar7 = *(int *)(FVar12.Data + 8);
    if (iVar7 == iVar5) {
      if (1 < iVar7) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar12.Data,(wchar_t *)local_88.Data.AllocatorInstance.Data)
        ;
        bVar16 = iVar5 == 0;
        iVar5 = local_88.Data.ArrayNum;
        goto LAB_141a9f7dd;
      }
LAB_141a9f7ef:
      if ((int)((longlong)FVar12.Data - (longlong)FVar4.Data >> 4) != -1) goto LAB_141a9fac4;
      goto LAB_141a9f80c;
    }
    bVar16 = iVar7 + iVar5 == 1;
LAB_141a9f7dd:
    if (bVar16) goto LAB_141a9f7ef;
    FVar12.Data = FVar12.Data + 0x10;
  } while( true );
}

// ApplicationSettingsDir @ 141aa0380

wchar_t * __cdecl FWindowsPlatformProcess::ApplicationSettingsDir(void)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FWindowsPlatformProcess::ApplicationSettingsDir'::__l2::
           _dynamic_atexit_destructor_for__WindowsApplicationSettingsDir__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar1 = WindowsApplicationSettingsDir.Data.ArrayNum + -1;
  if (WindowsApplicationSettingsDir.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if ((iVar1 == 0) &&
     (iVar1 = SHGetKnownFolderPath(&FOLDERID_ProgramData,0,0,local_res8), -1 < iVar1)) {
    pFVar2 = ::FString::FString(&local_18,local_res8[0]);
    pFVar2 = ::FString::Replace(pFVar2,&local_28,L"\\",L"/",IgnoreCase);
    ::FString::ConcatFC(&local_38,pFVar2,L"/Epic/");
    if (WindowsApplicationSettingsDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(WindowsApplicationSettingsDir.Data.AllocatorInstance.Data);
    }
    WindowsApplicationSettingsDir.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data
    ;
    WindowsApplicationSettingsDir.Data.ArrayNum = local_38.Data.ArrayNum;
    WindowsApplicationSettingsDir.Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    CoTaskMemFree(local_res8[0]);
  }
  pwVar3 = L"";
  if (WindowsApplicationSettingsDir.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)WindowsApplicationSettingsDir.Data.AllocatorInstance.Data;
  }
  return pwVar3;
}

// BaseDir @ 141aa0ac0

wchar_t * __cdecl FWindowsPlatformProcess::BaseDir(void)

{
  WCHAR WVar1;
  bool bVar2;
  int iVar3;
  BOOL BVar4;
  LPWSTR pWVar5;
  FString *pFVar6;
  size_t sVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  ForAnyElementType _Source;
  short *psVar10;
  wchar_t *pwVar11;
  HMODULE local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (::Result[0] == L'\0') {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pWVar5 = GetCommandLineW();
    FParse::Value(pWVar5,L"-basedir=",&local_58,true,(wchar_t **)0x0);
    iVar3 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      pWVar5 = GetCommandLineW();
      if (pWVar5 != (LPWSTR)0x0) {
        WVar1 = *pWVar5;
        while (WVar1 != L'\0') {
          pwVar11 = pWVar5 + 1;
          if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
             (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar11,L"BaseFromWorkingDir",0x12),
             iVar3 == 0)) {
            if (pWVar5 != (LPWSTR)0x0) {
              GetCurrentDirectoryW(0x200,::Result);
              ::FString::FString(&local_48,::Result);
              pFVar6 = ::FString::Replace(&local_48,&local_28,L"\\",L"/",IgnoreCase);
              if (&local_48 != pFVar6) {
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
                local_48.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
                (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_48.Data.ArrayNum = (pFVar6->Data).ArrayNum;
                local_48.Data.ArrayMax = (pFVar6->Data).ArrayMax;
                (pFVar6->Data).ArrayNum = 0;
                (pFVar6->Data).ArrayMax = 0;
              }
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
              bVar2 = ::FString::EndsWith(&local_48,L"/",1,IgnoreCase);
              if (!bVar2) {
                ::FString::AppendChar(&local_48,L'/');
              }
              FVar9.Data = local_48.Data.AllocatorInstance.Data;
              _Source.Data = (FScriptContainerElement *)L"";
              if (local_48.Data.ArrayNum != 0) {
                _Source.Data = local_48.Data.AllocatorInstance.Data;
              }
              wcscpy(::Result,(wchar_t *)_Source.Data);
              if (FVar9.Data == (FScriptContainerElement *)0x0) goto LAB_141aa0e8a;
              goto LAB_141aa0e85;
            }
            break;
          }
          pWVar5 = pwVar11;
          WVar1 = *pwVar11;
        }
      }
      BVar4 = GetModuleHandleExW(6,(LPCWSTR)BaseDir,&local_res8);
      if (BVar4 == 0) {
        local_res8 = (HMODULE)hInstance;
      }
      GetModuleFileNameW(local_res8,::Result,0x200);
      ::FString::FString(&local_38,::Result);
      pFVar6 = ::FString::Replace(&local_38,&local_18,L"\\",L"/",IgnoreCase);
      if (&local_38 != pFVar6) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      wcscpy(::Result,(wchar_t *)FVar9.Data);
      sVar7 = wcslen(::Result);
      iVar3 = (int)sVar7;
      if (0 < iVar3) {
        iVar3 = iVar3 + -1;
        lVar8 = (longlong)iVar3;
        if (0 < iVar3) {
          psVar10 = (short *)(&DAT_154f72f3e + lVar8 * 2);
          do {
            if ((*psVar10 == 0x2f) || (*psVar10 == 0x5c)) break;
            iVar3 = iVar3 + -1;
            lVar8 = lVar8 + -1;
            psVar10 = psVar10 + -1;
          } while (0 < lVar8);
        }
      }
      if (0x3ff < (ulonglong)((longlong)iVar3 * 2)) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      ::Result[iVar3] = L'\0';
      ::FString::FString(&local_28,::Result);
      FPaths::CollapseRelativeDirectories(&local_28,false);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar9.Data = local_28.Data.AllocatorInstance.Data;
      }
      wcscpy(::Result,(wchar_t *)FVar9.Data);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
LAB_141aa0e85:
        FMemory::Free(FVar9.Data);
      }
    }
    else {
      pFVar6 = ::FString::Replace(&local_58,&local_28,L"\\",L"/",IgnoreCase);
      if (&local_58 != pFVar6) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      bVar2 = ::FString::EndsWith(&local_58,L"/",1,IgnoreCase);
      if (!bVar2) {
        ::FString::AppendChar(&local_58,L'/');
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      wcscpy(::Result,(wchar_t *)FVar9.Data);
    }
LAB_141aa0e8a:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return ::Result;
}

// CanLaunchURL @ 141aa1400

bool __cdecl FWindowsPlatformProcess::CanLaunchURL(wchar_t *param_1)

{
  return param_1 != (wchar_t *)0x0;
}

// CeaseBeingFirstInstance @ 141aa1a90

void __cdecl FWindowsPlatformProcess::CeaseBeingFirstInstance(void)

{
  if (WindowsPlatformProcess::GNamedMutex != (void *)0x0) {
    ReleaseMutex(WindowsPlatformProcess::GNamedMutex);
    WindowsPlatformProcess::GNamedMutex = (void *)0x0;
  }
  return;
}

// ClosePipe @ 141aa1c90

void __cdecl FWindowsPlatformProcess::ClosePipe(void *param_1,void *param_2)

{
  if ((longlong)param_1 - 1U < 0xfffffffffffffffe) {
    CloseHandle(param_1);
  }
  if ((longlong)param_2 - 1U < 0xfffffffffffffffe) {
                    /* WARNING: Could not recover jumptable at 0x000141aa1cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(param_2);
    return;
  }
  return;
}

// CloseProc @ 141aa1cd0

void __cdecl FWindowsPlatformProcess::CloseProc(FProcHandle *param_1)

{
  if (*param_1 != (FProcHandle)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = (FProcHandle)0x0;
  }
  return;
}

// ComputerName @ 141aa1eb0

wchar_t * __cdecl FWindowsPlatformProcess::ComputerName(void)

{
  DWORD local_res8 [8];
  
  if (::Result[0] == L'\0') {
    local_res8[0] = 0x100;
    GetComputerNameW(::Result,local_res8);
    return ::Result;
  }
  return ::Result;
}

// CreateElevatedProcess @ 141aa2b20

FProcHandle __cdecl
FWindowsPlatformProcess::CreateElevatedProcess(wchar_t *param_1,wchar_t *param_2)

{
  BOOL BVar1;
  SHELLEXECUTEINFOW local_78;
  
  local_78.hwnd = (HWND)0x0;
  local_78.cbSize = 0x70;
  local_78.fMask = 0x4040;
  local_78.lpDirectory = (LPCWSTR)0x0;
  local_78.hInstApp = (HINSTANCE)0x0;
  local_78.lpIDList = (void *)0x0;
  local_78.lpClass = (LPCWSTR)0x0;
  local_78.hkeyClass = (HKEY)0x0;
  local_78.dwHotKey = 0;
  local_78._92_4_ = 0;
  local_78.u.hIcon = (HANDLE)0x0;
  local_78.hProcess = (HANDLE)0x0;
  local_78.nShow = 5;
  local_78._52_4_ = 0;
  local_78.lpVerb = L"runas";
  local_78.lpFile = param_2;
  BVar1 = ShellExecuteExW(&local_78);
  if (BVar1 != 0) {
    *(HANDLE *)param_1 = local_78.hProcess;
    return (FProcHandle)param_1;
  }
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FProcHandle)param_1;
}

// CreatePipe @ 141aa31c0

bool __cdecl FWindowsPlatformProcess::CreatePipe(void **param_1,void **param_2,bool param_3)

{
  BOOL BVar1;
  _SECURITY_ATTRIBUTES local_28;
  
  local_28.nLength = 0x18;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  local_28.bInheritHandle = 1;
  BVar1 = ::CreatePipe(param_1,param_2,&local_28,0);
  if (BVar1 != 0) {
    if (!param_3) {
      param_2 = param_1;
    }
    BVar1 = SetHandleInformation(*param_2,1,0);
    return BVar1 != 0;
  }
  return false;
}

// CreateProc @ 141aa3250

TTuple<FProcHandle,UE::HAL::EProcessId> * __cdecl
FWindowsPlatformProcess::CreateProc
          (TTuple<FProcHandle,UE::HAL::EProcessId> *__return_storage_ptr__,
          FProcessStartInfo *param_1)

{
  undefined4 local_res8 [2];
  undefined8 local_res10 [3];
  undefined7 in_stack_ffffffffffffffb1;
  undefined4 in_stack_ffffffffffffffc4;
  
  CreateProcInternal((wchar_t *)local_res10,param_1->Uri,SUB81(param_1->Arguments,0),
                     param_1->bDetached,false,
                     (uint *)CONCAT71(in_stack_ffffffffffffffb1,param_1->bHidden),(int)local_res8,
                     (wchar_t *)CONCAT44(in_stack_ffffffffffffffc4,param_1->PriorityModifier),
                     param_1->WorkingDirectory,(param_1->StdOut).Value,(param_1->StdIn).Value,
                     SUB81((param_1->StdErr).Value,0));
  *(undefined8 *)__return_storage_ptr__ = local_res10[0];
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = local_res8[0];
  return __return_storage_ptr__;
}

// CreateProc @ 141aa32e0

/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __cdecl
FWindowsPlatformProcess::CreateProc
          (wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,bool param_5,uint *param_6,
          int param_7,wchar_t *param_8,void *param_9,void *param_10,void *param_11)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  FProcHandle FVar4;
  void *pvVar5;
  void *pvVar6;
  byte local_res8 [8];
  HANDLE in_stack_00000060;
  undefined7 in_stack_ffffffffffffff81;
  undefined4 in_stack_ffffffffffffff94;
  byte local_38 [16];
  
  pvVar5 = param_10;
  if (param_10 != (void *)0x0) {
    BVar3 = GetHandleInformation(param_10,(LPDWORD)&param_10);
    if (BVar3 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3811653612568838641>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x1f1,"GetHandleInformation(HANDLE(PipeWriteChild), &Flags)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FProcHandle)(*pcVar1)();
        return FVar4;
      }
    }
    if (((byte)param_10 & 1) == 0) {
      if (1 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      pvVar5 = (void *)0x0;
    }
  }
  pvVar6 = param_11;
  if (param_11 != (void *)0x0) {
    BVar3 = GetHandleInformation(param_11,(LPDWORD)local_res8);
    if (BVar3 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3811653612568838651>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x1fb,"GetHandleInformation(HANDLE(PipeReadChild), &Flags)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FProcHandle)(*pcVar1)();
        return FVar4;
      }
    }
    if ((local_res8[0] & 1) == 0) {
      if (1 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      pvVar6 = (void *)0x0;
    }
  }
  if (in_stack_00000060 != (HANDLE)0x0) {
    BVar3 = GetHandleInformation(in_stack_00000060,(LPDWORD)local_38);
    if (BVar3 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3811653612568838661>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x205,"GetHandleInformation(HANDLE(PipeStdErrChild), &Flags)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FProcHandle)(*pcVar1)();
        return FVar4;
      }
    }
    if ((local_38[0] & 1) == 0) {
      if (1 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      in_stack_00000060 = (HANDLE)0x0;
    }
  }
  CreateProcInternal(param_1,param_2,param_3,param_4,param_5,
                     (uint *)CONCAT71(in_stack_ffffffffffffff81,param_6._0_1_),param_7,
                     (wchar_t *)CONCAT44(in_stack_ffffffffffffff94,param_8._0_4_),param_9,pvVar5,
                     pvVar6,SUB81(in_stack_00000060,0));
  return (FProcHandle)param_1;
}

// CreateProc @ 141aa34f0

/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __cdecl
FWindowsPlatformProcess::CreateProc
          (wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,bool param_5,uint *param_6,
          int param_7,wchar_t *param_8,void *param_9,void *param_10)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  FProcHandle FVar4;
  void *pvVar5;
  byte local_res8 [8];
  void *in_stack_00000058;
  undefined7 in_stack_ffffffffffffffa1;
  undefined4 in_stack_ffffffffffffffb4;
  
  pvVar5 = param_10;
  if (param_10 != (void *)0x0) {
    BVar3 = GetHandleInformation(param_10,(LPDWORD)&param_10);
    if (BVar3 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3811653612568838614>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x1d6,"GetHandleInformation(HANDLE(PipeWriteChild), &Flags)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FProcHandle)(*pcVar1)();
        return FVar4;
      }
    }
    if (((byte)param_10 & 1) == 0) {
      if (1 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      pvVar5 = (void *)0x0;
    }
  }
  if (in_stack_00000058 != (HANDLE)0x0) {
    BVar3 = GetHandleInformation(in_stack_00000058,(LPDWORD)local_res8);
    if (BVar3 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3811653612568838624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x1e0,"GetHandleInformation(HANDLE(PipeReadChild), &Flags)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar4 = (FProcHandle)(*pcVar1)();
        return FVar4;
      }
    }
    if ((local_res8[0] & 1) == 0) {
      if (1 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      in_stack_00000058 = (void *)0x0;
    }
  }
  CreateProcInternal(param_1,param_2,param_3,param_4,param_5,
                     (uint *)CONCAT71(in_stack_ffffffffffffffa1,param_6._0_1_),param_7,
                     (wchar_t *)CONCAT44(in_stack_ffffffffffffffb4,param_8._0_4_),param_9,pvVar5,
                     in_stack_00000058,SUB81(pvVar5,0));
  return (FProcHandle)param_1;
}

// CreateProcInternal @ 141aa3690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FProcHandle __cdecl
FWindowsPlatformProcess::CreateProcInternal
          (wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,bool param_5,uint *param_6,
          int param_7,wchar_t *param_8,void *param_9,void *param_10,void *param_11,bool param_12)

{
  code *pcVar1;
  longlong lVar2;
  ForAnyElementType lpCommandLine;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  FProcHandle FVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
  undefined1 *puVar9;
  uint uVar10;
  undefined7 in_register_00000081;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 in_stack_0000003c;
  undefined7 in_stack_00000061;
  char in_stack_00000068;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [32];
  SIZE_T aSStack_188 [6];
  undefined4 local_158;
  ULONG_PTR local_150;
  void *local_148;
  longlong local_140;
  wchar_t *local_138;
  void *local_130;
  undefined4 *local_128;
  void *local_120;
  FString local_118;
  wchar_t **local_108;
  longlong *local_100;
  undefined4 **local_f8;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  LPPROC_THREAD_ATTRIBUTE_LIST local_80;
  undefined8 local_78;
  HANDLE local_70;
  undefined4 local_68;
  void *local_58 [3];
  ulonglong local_40;
  
  local_140 = CONCAT71(in_register_00000081,param_3);
  local_40 = __security_cookie.value ^ (ulonglong)&local_158;
  local_128 = (undefined4 *)CONCAT44(in_stack_0000003c,param_7);
  pvVar13 = (void *)CONCAT71(in_stack_00000061,param_12);
  local_120 = param_9;
  local_130 = param_11;
  local_148 = pvVar13;
  local_138 = param_2;
  if (param_2 == (wchar_t *)0x0) {
    uStack_1b0 = 0x141aa3727;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("URL",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x219,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FProcHandle)(*pcVar1)();
      return FVar6;
    }
  }
  if (*local_138 == L'\"') {
    uStack_1b0 = 0x141aa3757;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("URL[0] != \'\\\"\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x21a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FProcHandle)(*pcVar1)();
      return FVar6;
    }
  }
  if (local_140 == 0) {
    uStack_1b0 = 0x141aa3784;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parms",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x21b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar6 = (FProcHandle)(*pcVar1)();
      return FVar6;
    }
  }
  local_108 = &local_138;
  local_100 = &local_140;
  local_f8 = &local_128;
  if ((int)param_8 < 0) {
    uVar10 = 0x240;
    if ((int)param_8 == -1) {
      uVar10 = 0x4200;
    }
  }
  else if ((int)param_8 < 1) {
    uVar10 = 0x220;
  }
  else {
    uVar10 = 0x280;
    if ((int)param_8 == 1) {
      uVar10 = 0x8200;
    }
  }
  if (param_4) {
    uVar11 = 8;
    if ((char)param_6 != '\0') {
      uVar11 = 0x8000000;
    }
    uVar10 = uVar10 | uVar11;
  }
  uVar11 = 0;
  if ((char)param_6 == '\0') {
    if (!param_5) goto LAB_141aa381d;
    uVar11 = 1;
    local_158 = 7;
  }
  else {
    uVar11 = 1;
LAB_141aa381d:
    local_158 = (uint)local_158._2_2_ << 0x10;
  }
  lpAttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
  puVar9 = auStack_1a8;
  if (in_stack_00000068 == '\0') {
    if (param_10 != (void *)0x0) {
      local_58[0] = param_10;
    }
    uVar7 = (ulonglong)(param_10 != (void *)0x0);
    uVar8 = uVar7;
    if ((local_130 != (void *)0x0) && (local_130 != param_10)) {
      uVar8 = (ulonglong)((param_10 != (void *)0x0) + 1);
      local_58[uVar7] = local_130;
    }
    uVar12 = (uint)uVar8;
    if (((local_148 != (void *)0x0) && (local_148 != param_10)) && (local_148 != local_130)) {
      uVar12 = uVar12 + 1;
      local_58[uVar8] = local_148;
    }
    lpAttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
    puVar9 = auStack_1a8;
    pvVar13 = local_148;
    if (uVar12 == 0) goto LAB_141aa3a08;
    local_150 = 0;
    uStack_1b0 = 0x141aa38a3;
    BVar4 = InitializeProcThreadAttributeList((LPPROC_THREAD_ATTRIBUTE_LIST)0x0,1,0,&local_150);
    if (BVar4 != 0) {
      uStack_1b0 = 0x141aa38c7;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InitializeProcThreadAttributeList(nullptr, 1, 0, &Size)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x27b,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        FVar6 = (FProcHandle)(*pcVar1)();
        return FVar6;
      }
    }
    uStack_1b0 = 0x141aa38d3;
    DVar5 = GetLastError();
    if (DVar5 != 0x7a) {
      uStack_1b0 = 0x141aa38f8;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLastError() == 122L",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x27c,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        FVar6 = (FProcHandle)(*pcVar1)();
        return FVar6;
      }
    }
    if (local_150 == 0) {
      uStack_1b0 = 0x141aa3924;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x27d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        FVar6 = (FProcHandle)(*pcVar1)();
        return FVar6;
      }
    }
    if (0x3ff < local_150) {
      uStack_1b0 = 0x141aa3954;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size < 1024",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x27e,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        FVar6 = (FProcHandle)(*pcVar1)();
        return FVar6;
      }
    }
    uVar8 = local_150 + 0xf;
    if (uVar8 <= local_150) {
      uVar8 = 0xffffffffffffff0;
    }
    uStack_1b0 = 0x141aa397d;
    lVar2 = -(uVar8 & 0xfffffffffffffff0);
    puVar9 = auStack_1a8 + lVar2;
    lpAttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)((longlong)&local_158 + lVar2);
    *(undefined8 *)(auStack_1a8 + lVar2 + -8) = 0x141aa3998;
    BVar4 = InitializeProcThreadAttributeList(lpAttributeList,1,0,&local_150);
    if (BVar4 == 0) {
      *(undefined8 *)(auStack_1a8 + lVar2 + -8) = 0x141aa39a5;
      `FWindowsPlatformProcess::CreateProcInternal'::__l2::<lambda_1>::operator()(&local_108);
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      param_1[2] = L'\0';
      param_1[3] = L'\0';
      puVar9 = auStack_1a8 + lVar2;
      goto LAB_141aa3b37;
    }
    *(undefined8 *)((longlong)aSStack_188 + lVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)aSStack_188 + lVar2 + 8) = 0;
    *(ulonglong *)((longlong)aSStack_188 + lVar2) = (ulonglong)uVar12 << 3;
    *(undefined8 *)(auStack_1a8 + lVar2 + -8) = 0x141aa39e1;
    BVar4 = UpdateProcThreadAttribute
                      (lpAttributeList,0,0x20002,local_58,*(SIZE_T *)((longlong)aSStack_188 + lVar2)
                       ,*(PVOID *)((longlong)aSStack_188 + lVar2 + 8),
                       *(PSIZE_T *)((longlong)aSStack_188 + lVar2 + 0x10));
    if (BVar4 != 0) {
      uVar10 = uVar10 | 0x80000;
      uVar11 = uVar11 | 0x100;
      puVar9 = auStack_1a8 + lVar2;
      pvVar13 = local_148;
      goto LAB_141aa3a08;
    }
    *(undefined8 *)(auStack_1a8 + lVar2 + -8) = 0x141aa39ee;
    `FWindowsPlatformProcess::CreateProcInternal'::__l2::<lambda_1>::operator()(&local_108);
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
  }
  else {
LAB_141aa3a08:
    *(undefined8 *)(puVar9 + -8) = 0x141aa3a20;
    ::FString::PrintfImpl(&local_118,L"\"%s\" %s");
    lpCommandLine.Data = local_118.Data.AllocatorInstance.Data;
    local_a8 = (short)local_158;
    local_98 = local_130;
    local_e8[0] = 0x70;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = uVar11;
    local_a6 = 0;
    local_a0 = 0;
    local_90 = param_10;
    local_88 = pvVar13;
    local_80 = lpAttributeList;
    uVar14 = 1;
    if ((in_stack_00000068 == '\0') && (lpAttributeList == (LPPROC_THREAD_ATTRIBUTE_LIST)0x0)) {
      uVar14 = 0;
    }
    *(undefined8 **)(puVar9 + 0x48) = &local_78;
    *(undefined4 **)(puVar9 + 0x40) = local_e8;
    *(void **)(puVar9 + 0x38) = local_120;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(uint *)(puVar9 + 0x28) = uVar10;
    *(undefined4 *)(puVar9 + 0x20) = uVar14;
    *(undefined8 *)(puVar9 + -8) = 0x141aa3ade;
    BVar4 = CreateProcessW((LPCWSTR)0x0,(LPWSTR)lpCommandLine.Data,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,*(BOOL *)(puVar9 + 0x20),
                           *(DWORD *)(puVar9 + 0x28),*(LPVOID *)(puVar9 + 0x30),
                           *(LPCWSTR *)(puVar9 + 0x38),*(LPSTARTUPINFOW *)(puVar9 + 0x40),
                           *(LPPROCESS_INFORMATION *)(puVar9 + 0x48));
    if (BVar4 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x141aa3aeb;
      `FWindowsPlatformProcess::CreateProcInternal'::__l2::<lambda_1>::operator()(&local_108);
      param_1[0] = L'\0';
      param_1[1] = L'\0';
      param_1[2] = L'\0';
      param_1[3] = L'\0';
    }
    else {
      *(undefined8 *)(puVar9 + -8) = 0x141aa3b00;
      CloseHandle(local_70);
      if (local_128 != (undefined4 *)0x0) {
        *local_128 = local_68;
      }
      *(undefined8 *)param_1 = local_78;
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      *(undefined8 *)(puVar9 + -8) = 0x141aa3b29;
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (lpAttributeList != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
    *(undefined8 *)(puVar9 + -8) = 0x141aa3b37;
    DeleteProcThreadAttributeList(lpAttributeList);
  }
LAB_141aa3b37:
  *(undefined8 *)(puVar9 + -8) = 0x141aa3b49;
  return (FProcHandle)param_1;
}

// CreateProcessSentinelObject @ 141aa3b70

TSharedPtr<IProcessSentinel,1> * __cdecl
FWindowsPlatformProcess::CreateProcessSentinelObject
          (TSharedPtr<IProcessSentinel,1> *__return_storage_ptr__)

{
  IProcessSentinel *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 == (IProcessSentinel *)0x0) {
    pIVar1 = (IProcessSentinel *)0x0;
  }
  else {
    pIVar1[1] = (IProcessSentinel)0x0;
    *pIVar1 = (IProcessSentinel)&___7FWindowsProcessSentinel__6B_;
  }
  __return_storage_ptr__->Object = pIVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWindowsProcessSentinel__U__DefaultDeleter_VFWindowsProcessSentinel___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pIVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateRunnableThread @ 141aa3c10

FRunnableThread * __cdecl FWindowsPlatformProcess::CreateRunnableThread(void)

{
  FRunnableThread *this;
  
  this = ::operator_new(0x40);
  if (this != (FRunnableThread *)0x0) {
    this->_padding_ = 0;
    (this->ThreadName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ThreadName).Data.ArrayNum = 0;
    (this->ThreadName).Data.ArrayMax = 0;
    this->Runnable = (FRunnable *)0x0;
    this->ThreadInitSyncEvent = (FEvent *)0x0;
    this->ThreadAffinityMask = 0;
    this->ThreadPriority = TPri_Normal;
    this->ThreadID = 0;
    this[1]._padding_ = 0;
    FRunnableThread::FRunnableThread(this);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7FRunnableThreadWin__6B_;
    return this;
  }
  return (FRunnableThread *)0x0;
}

// CreateSynchEvent @ 141aa3e90

FEvent * __cdecl FWindowsPlatformProcess::CreateSynchEvent(bool param_1)

{
  bool bVar1;
  char cVar2;
  FEvent *pFVar3;
  
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar1) {
LAB_141aa3edb:
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FEvent *)0x0) {
      pFVar3->EventId = 0;
      pFVar3->EventStartCycles = (TAtomic<unsigned_int>)0x0;
      pFVar3[1]._padding_ = 0;
      pFVar3->_padding_ = (longlong)&___7FEventWin__6B_;
      goto LAB_141aa3f0b;
    }
  }
  else {
    bVar1 = FForkProcessHelper::SupportsMultithreadingPostFork();
    if (bVar1) goto LAB_141aa3edb;
    pFVar3 = ::operator_new(0x18);
    if (pFVar3 != (FEvent *)0x0) {
      pFVar3->EventId = 0;
      pFVar3->EventStartCycles = (TAtomic<unsigned_int>)0x0;
      *(undefined2 *)&pFVar3[1]._padding_ = 0;
      pFVar3->_padding_ = (longlong)&___7FSingleThreadEvent__6B_;
      goto LAB_141aa3f0b;
    }
  }
  pFVar3 = (FEvent *)0x0;
LAB_141aa3f0b:
  cVar2 = (**(code **)pFVar3->_padding_)(pFVar3,param_1);
  if (cVar2 == '\0') {
    (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,1);
    return (FEvent *)0x0;
  }
  return pFVar3;
}

// Daemonize @ 141aa3f60

bool __cdecl FWindowsPlatformProcess::Daemonize(void)

{
  return true;
}

// DeleteInterprocessSynchObject @ 141aa42e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWindowsPlatformProcess::DeleteInterprocessSynchObject(FSemaphore *param_1)

{
  BOOL BVar1;
  bool bVar2;
  
  if (param_1 == (FSemaphore *)0x0) {
    return false;
  }
  bVar2 = false;
  if ((HANDLE)param_1[1]._padding_ != (HANDLE)0x0) {
    BVar1 = CloseHandle((HANDLE)param_1[1]._padding_);
    bVar2 = BVar1 == 1;
    if (!bVar2) {
      GetLastError();
      if (2 < (byte)LogHAL._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
    }
  }
  (**(code **)(param_1->_padding_ + 0x18))(param_1,1);
  return bVar2;
}

// ExecElevatedProcess @ 141aa5390

bool __cdecl
FWindowsPlatformProcess::ExecElevatedProcess(wchar_t *param_1,wchar_t *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  SHELLEXECUTEINFOW local_78;
  
  local_78.hwnd = (HWND)0x0;
  local_78.cbSize = 0x70;
  local_78.fMask = 0x4040;
  local_78.lpDirectory = (LPCWSTR)0x0;
  local_78.hInstApp = (HINSTANCE)0x0;
  local_78.lpIDList = (void *)0x0;
  local_78.lpClass = (LPCWSTR)0x0;
  local_78.hkeyClass = (HKEY)0x0;
  local_78.dwHotKey = 0;
  local_78._92_4_ = 0;
  local_78.u.hIcon = (HANDLE)0x0;
  local_78.hProcess = (HANDLE)0x0;
  local_78.nShow = 5;
  local_78._52_4_ = 0;
  local_78.lpVerb = L"runas";
  local_78.lpFile = param_1;
  local_78.lpParameters = param_2;
  BVar4 = ShellExecuteExW(&local_78);
  if (BVar4 == 0) {
    return false;
  }
  WaitForSingleObject(local_78.hProcess,0xffffffff);
  if (param_3 != (int *)0x0) {
    BVar4 = GetExitCodeProcess(local_78.hProcess,(LPDWORD)param_3);
    if (BVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("::GetExitCodeProcess(ShellExecuteInfo.hProcess, (::DWORD*)OutReturnCode)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x503,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  BVar4 = CloseHandle(local_78.hProcess);
  if (BVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("::CloseHandle(ShellExecuteInfo.hProcess)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x505,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ExecProcess @ 141aa54b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FWindowsPlatformProcess::ExecProcess
          (wchar_t *param_1,wchar_t *param_2,int *param_3,FString *param_4,FString *param_5,
          wchar_t *param_6,bool param_7)

{
  uint uVar1;
  ULONG_PTR *pUVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  HANDLE hHandle;
  bool bVar5;
  undefined1 uVar6;
  BOOL BVar7;
  DWORD DVar8;
  int iVar9;
  DWORD dwMessageId;
  wchar_t *pwVar10;
  FStaticBasicLogRecord *pFVar11;
  longlong lVar12;
  ULONG_PTR *pUVar13;
  uint uVar14;
  size_t sVar15;
  undefined1 auStackY_878 [32];
  FScriptContainerElement local_828 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_820;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_810;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_800;
  ULONG_PTR local_7f0;
  HANDLE local_7e8;
  HANDLE local_7e0;
  FString *local_7d8;
  FString *local_7d0;
  HANDLE *local_7c8;
  FString **local_7c0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_7b8;
  DWORD *local_7b0;
  FScriptContainerElement *local_7a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_7a0;
  FString local_790;
  FString local_780;
  _PROCESS_INFORMATION local_770;
  wchar_t *local_758;
  _SECURITY_ATTRIBUTES local_750;
  _STARTUPINFOW local_738;
  LPPROC_THREAD_ATTRIBUTE_LIST p_Stack_6d0;
  HANDLE local_6c8;
  HANDLE local_6c0;
  HANDLE local_6b8;
  HANDLE local_6b0;
  FPlatformMemoryStats local_6a8;
  FScriptContainerElement local_618 [256];
  ForAnyElementType local_518;
  FScriptContainerElement *local_510;
  int local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  WCHAR local_468 [512];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_878;
  local_758 = param_6;
  local_7b0 = (DWORD *)param_3;
  if ((param_7) && (!IsJobObjectSet)) {
    GhJob = CreateJobObjectW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0);
    if (GhJob == (HANDLE)0x0) {
      if (2 < (byte)LogWindows._0_1_) {
        pFVar11 = &::LOG_Static;
LAB_141aa55ce:
        UE::Logging::Private::BasicLog<3>(pFVar11,(FLogCategoryBase *)&LogWindows);
      }
    }
    else {
      uStack_4e0 = 0;
      local_4e8 = 0x2000;
      local_4f8 = 0;
      uStack_4f0 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4c8 = 0;
      uStack_4c0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_478 = 0;
      uStack_470 = 0;
      BVar7 = SetInformationJobObject(GhJob,JobObjectExtendedLimitInformation,&local_4f8,0x90);
      if ((BVar7 == 0) && (2 < (byte)LogWindows._0_1_)) {
        pFVar11 = &::LOG_Static;
        goto LAB_141aa55ce;
      }
    }
    IsJobObjectSet = true;
  }
  local_738.lpReserved = (LPWSTR)0x0;
  local_738.cb = 0x70;
  local_738._4_4_ = 0;
  local_738.dwXCountChars = 0;
  local_738.dwYCountChars = 0;
  local_738.dwX = 0x80000000;
  local_738.dwY = 0x80000000;
  local_738.lpReserved2 = (LPBYTE)0x0;
  local_738.dwXSize = 0x80000000;
  local_738.dwYSize = 0x80000000;
  local_738.dwFillAttribute = 0;
  local_738.dwFlags = 1;
  local_738.wShowWindow = 7;
  local_738.cbReserved2 = 0;
  local_738._68_4_ = 0;
  local_738.lpDesktop = (LPWSTR)0x0;
  local_738.lpTitle = (LPWSTR)0x0;
  local_738.hStdInput = (HANDLE)0x0;
  local_738.hStdOutput = (HANDLE)0x0;
  local_738.hStdError = (HANDLE)0x0;
  p_Stack_6d0 = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
  local_738.hStdInput = GetStdHandle(0xfffffff6);
  local_7e8 = (HANDLE)0x0;
  local_7e0 = (HANDLE)0x0;
  local_7a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7a0.ArrayNum = 0;
  local_7a0.ArrayMax = 0;
  if ((param_4 != (FString *)0x0) || (param_5 != (FString *)0x0)) {
    local_738.dwFlags = local_738.dwFlags | 0x100;
    local_750.lpSecurityDescriptor = (LPVOID)0x0;
    local_750.nLength = 0x18;
    local_750._4_4_ = 0;
    local_750.bInheritHandle = 1;
    local_750._20_4_ = 0;
    BVar7 = ::CreatePipe(&local_7e8,&local_738.hStdOutput,&local_750,0);
    if ((BVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("::CreatePipe(&hStdOutRead, &StartupInfoEx.StartupInfo.hStdOutput, &Attr, 0)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                           ,0x45d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    BVar7 = ::CreatePipe(&local_7e0,&local_738.hStdError,&local_750,0);
    if ((BVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("::CreatePipe(&hStdErrRead, &StartupInfoEx.StartupInfo.hStdError, &Attr, 0)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                           ,0x45e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_7f0 = 0;
    BVar7 = InitializeProcThreadAttributeList((LPPROC_THREAD_ATTRIBUTE_LIST)0x0,1,0,&local_7f0);
    if ((BVar7 == 0) && (DVar8 = GetLastError(), DVar8 == 0x7a)) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_7a0,(int)local_7f0,Default);
      p_Stack_6d0 = (LPPROC_THREAD_ATTRIBUTE_LIST)local_7a0.AllocatorInstance.Data;
      BVar7 = InitializeProcThreadAttributeList
                        ((LPPROC_THREAD_ATTRIBUTE_LIST)local_7a0.AllocatorInstance.Data,1,0,
                         &local_7f0);
      if ((BVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InitializeProcThreadAttributeList(StartupInfoEx.lpAttributeList, 1, 0, &BufferSize)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                             ,0x465,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    local_6c8 = local_738.hStdOutput;
    local_6c0 = local_738.hStdError;
    BVar7 = UpdateProcThreadAttribute(p_Stack_6d0,0,0x20002,&local_6c8,0x10,(PVOID)0x0,(PSIZE_T)0x0)
    ;
    if ((BVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("UpdateProcThreadAttribute(StartupInfoEx.lpAttributeList, 0, (((ProcThreadAttributeHandleList) & 0x0000FFFF) | ((0 != 0) ? 0x00010000 : 0) | ((1 != 0) ? 0x00020000 : 0) | ((0 != 0) ? 0x00040000 : 0)), InheritHandles, sizeof(InheritHandles), 0, 0)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                           ,0x46a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  bVar5 = false;
  if (*param_1 == L'\"') {
    ::FString::PrintfImpl(&local_780,L"%s %s");
    local_7a8 = local_780.Data.AllocatorInstance.Data;
    local_780.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_780.Data.ArrayNum = 0;
    local_780.Data.ArrayMax = 0;
  }
  else {
    ::FString::PrintfImpl(&local_790,L"\"%s\" %s");
    local_7a8 = local_790.Data.AllocatorInstance.Data;
    local_790.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_790.Data.ArrayNum = 0;
    local_790.Data.ArrayMax = 0;
  }
  DVar8 = 0x8000220;
  if (p_Stack_6d0 != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
    DVar8 = 0x8080220;
  }
  BVar7 = CreateProcessW((LPCWSTR)0x0,(LPWSTR)local_7a8,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,1,DVar8,(LPVOID)0x0,local_758,&local_738,
                         &local_770);
  if (BVar7 == 0) {
    DVar8 = GetLastError();
    if (local_7b0 != (DWORD *)0x0) {
      *local_7b0 = DVar8;
    }
    local_468[0] = L'\0';
    dwMessageId = DVar8;
    if (DVar8 == 0) {
      dwMessageId = GetLastError();
    }
    FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0x400,local_468,0x200,(va_list *)0x0);
    pwVar10 = wcschr(local_468,L'\r');
    if (pwVar10 != (wchar_t *)0x0) {
      *pwVar10 = L'\0';
    }
    pwVar10 = wcschr(local_468,L'\n');
    if (pwVar10 != (wchar_t *)0x0) {
      *pwVar10 = L'\0';
    }
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    if ((DVar8 == 8) || (DVar8 == 0xe)) {
      FWindowsPlatformMemory::GetStats(&local_6a8);
      if ((byte)LogWindows._0_1_ < 3) goto LAB_141aa6006;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    goto LAB_141aa6006;
  }
  if ((((param_7) && (GhJob != (void *)0x0)) &&
      (BVar7 = AssignProcessToJobObject(GhJob,local_770.hProcess), BVar7 == 0)) &&
     (2 < (byte)LogWindows._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  hHandle = local_770.hProcess;
  if (local_7e8 == (HANDLE)0x0) {
    WaitForSingleObject(local_770.hProcess,0xffffffff);
  }
  else {
    local_7c8 = &local_6b8;
    local_6b8 = local_7e8;
    local_7d0 = param_5;
    local_7c0 = &local_7d8;
    local_6b0 = local_7e0;
    local_810.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_810.ArrayNum = 0;
    local_810.ArrayMax = 0;
    local_800.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_800.ArrayNum = 0;
    local_800.ArrayMax = 0;
    local_7d8 = param_4;
    local_7b8 = &local_810;
    do {
      if ((local_6b8 != (void *)0x0) && (local_7d8 != (FString *)0x0)) {
        local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_820.ArrayNum = 0;
        local_820.ArrayMax = 0;
        ReadPipeToArray(local_6b8,&local_820);
        if ((&local_810 == &local_820) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        sVar15 = (size_t)local_820.ArrayNum;
        if (local_820.ArrayNum != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_820.ArrayNum,&local_810.AllocatorInstance,&local_810.ArrayNum
                             ,&local_810.ArrayMax);
          memcpy(local_810.AllocatorInstance.Data + iVar9,local_820.AllocatorInstance.Data,sVar15);
        }
        if (local_820.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.AllocatorInstance.Data);
        }
      }
      if ((local_6b0 != (void *)0x0) && (local_7d0 != (FString *)0x0)) {
        local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_820.ArrayNum = 0;
        local_820.ArrayMax = 0;
        ReadPipeToArray(local_6b0,&local_820);
        if ((&local_800 == &local_820) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        sVar15 = (size_t)local_820.ArrayNum;
        if (local_820.ArrayNum != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_820.ArrayNum,&local_800.AllocatorInstance,&local_800.ArrayNum
                             ,&local_800.ArrayMax);
          memcpy(local_800.AllocatorInstance.Data + iVar9,local_820.AllocatorInstance.Data,sVar15);
        }
        if (local_820.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.AllocatorInstance.Data);
        }
      }
      Sleep(0.0);
      DVar8 = WaitForSingleObject(hHandle,0);
    } while (DVar8 == 0x102);
    `FWindowsPlatformProcess::ExecProcess'::__l121::<lambda_1>::operator()(&local_7c8);
    lVar12 = 2;
    if ((local_7d8 != (FString *)0x0) && (0 < local_810.ArrayNum)) {
      local_828[0] = (FScriptContainerElement)0x0;
      iVar9 = local_810.ArrayNum;
      if ((local_810.AllocatorInstance.Data <= local_828) &&
         (local_828 < local_810.AllocatorInstance.Data + local_810.ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = local_810.ArrayNum;
      }
      if (iVar9 == local_810.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_810.AllocatorInstance,&local_810.ArrayMax);
      }
      FVar4.Data = local_810.AllocatorInstance.Data;
      local_810.ArrayNum = iVar9 + 1;
      local_518.Data = (FScriptContainerElement *)0x0;
      local_810.AllocatorInstance.Data[iVar9] = local_828[0];
      if (local_810.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        local_508 = 0;
        local_510 = (FScriptContainerElement *)0x0;
      }
      else {
        sVar15 = strlen((char *)local_810.AllocatorInstance.Data);
        local_508 = UE::Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,(uchar *)FVar4.Data,(int)sVar15);
        uVar1 = local_508 + 1;
        uVar14 = uVar1;
        if (uVar1 < 0x81) {
          if (local_518.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_141aa5c0c;
          }
        }
        else {
LAB_141aa5c0c:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_518,0,uVar14,2);
        }
        local_510 = local_618;
        if (local_518.Data != (FScriptContainerElement *)0x0) {
          local_510 = local_518.Data;
        }
        UE::Core::Private::Convert((wchar_t *)local_510,uVar1,(uchar *)FVar4.Data,(int)sVar15 + 1);
      }
      ::FString::operator=(local_7d8,(wchar_t *)local_510);
      if (local_518.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data);
      }
    }
    if ((local_7d0 != (FString *)0x0) && (0 < local_800.ArrayNum)) {
      local_828[0] = (FScriptContainerElement)0x0;
      iVar9 = local_800.ArrayNum;
      if ((local_800.AllocatorInstance.Data <= local_828) &&
         (local_828 < local_800.AllocatorInstance.Data + local_800.ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = local_800.ArrayNum;
      }
      if (iVar9 == local_800.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_800.AllocatorInstance,&local_800.ArrayMax);
      }
      FVar4.Data = local_800.AllocatorInstance.Data;
      local_800.ArrayNum = iVar9 + 1;
      local_518.Data = (FScriptContainerElement *)0x0;
      local_800.AllocatorInstance.Data[iVar9] = local_828[0];
      if (local_800.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        local_510 = (FScriptContainerElement *)0x0;
        local_508 = 0;
      }
      else {
        sVar15 = strlen((char *)local_800.AllocatorInstance.Data);
        local_508 = UE::Core::Private::GetConvertedLength
                              ((wchar_t *)0x0,(uchar *)FVar4.Data,(int)sVar15);
        uVar1 = local_508 + 1;
        uVar14 = uVar1;
        if (uVar1 < 0x81) {
          if (local_518.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_141aa5d84;
          }
        }
        else {
LAB_141aa5d84:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_518,0,uVar14,2);
        }
        local_510 = local_618;
        if (local_518.Data != (FScriptContainerElement *)0x0) {
          local_510 = local_518.Data;
        }
        UE::Core::Private::Convert((wchar_t *)local_510,uVar1,(uchar *)FVar4.Data,(int)sVar15 + 1);
      }
      ::FString::operator=(local_7d0,(wchar_t *)local_510);
      if (local_518.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data);
      }
    }
    pUVar13 = &local_7f0;
    do {
      pUVar2 = pUVar13 + -2;
      pUVar13 = pUVar13 + -2;
      lVar12 = lVar12 + -1;
      if ((void *)*pUVar2 != (void *)0x0) {
        FMemory::Free((void *)*pUVar2);
      }
    } while (lVar12 != 0);
  }
  if (((local_7b0 != (LPDWORD)0x0) &&
      (BVar7 = GetExitCodeProcess(local_770.hProcess,local_7b0), BVar7 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("::GetExitCodeProcess(ProcInfo.hProcess, (::DWORD*)OutReturnCode)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0x4bb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  CloseHandle(local_770.hProcess);
  CloseHandle(local_770.hThread);
  bVar5 = true;
LAB_141aa6006:
  if (local_738.hStdOutput != (HANDLE)0x0) {
    CloseHandle(local_738.hStdOutput);
  }
  if (local_738.hStdError != (HANDLE)0x0) {
    CloseHandle(local_738.hStdError);
  }
  if (local_7e8 != (HANDLE)0x0) {
    CloseHandle(local_7e8);
  }
  if (local_7e0 != (HANDLE)0x0) {
    CloseHandle(local_7e0);
  }
  if (p_Stack_6d0 != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
    DeleteProcThreadAttributeList(p_Stack_6d0);
  }
  if (local_7a8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8);
  }
  if (local_7a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.AllocatorInstance.Data);
  }
  return bVar5;
}

// ExecutableName @ 141aa60d0

wchar_t * __cdecl FWindowsPlatformProcess::ExecutableName(bool param_1)

{
  DWORD DVar1;
  FString *pFVar2;
  wchar_t *_Source;
  wchar_t *pwVar3;
  wchar_t *_Source_00;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar3 = ResultWithExt;
  if (::Result[0] == L'\0') {
    DVar1 = GetModuleFileNameW((HMODULE)hInstance,::Result,0x200);
    if (DVar1 == 0) {
      memset(::Result,0,0x400);
      memset(ResultWithExt,0,0x400);
    }
    else {
      ::FString::FString(&local_28,::Result);
      ::FString::FString(&local_38,::Result);
      pFVar2 = FPaths::GetBaseFilename(&local_18,&local_28,true);
      _Source_00 = L"";
      if ((pFVar2->Data).ArrayNum == 0) {
        _Source = L"";
      }
      else {
        _Source = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      wcsncpy(::Result,_Source,0x1ff);
      ::Result[0x1ff] = L'\0';
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      pFVar2 = FPaths::GetCleanFilename(&local_18,&local_38);
      if ((pFVar2->Data).ArrayNum != 0) {
        _Source_00 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      wcsncpy(ResultWithExt,_Source_00,0x1ff);
      ResultWithExt[0x1ff] = L'\0';
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (param_1) {
    pwVar3 = ::Result;
  }
  return pwVar3;
}

// ExecutablePath @ 141aa6240

wchar_t * __cdecl FWindowsPlatformProcess::ExecutablePath(void)

{
  DWORD DVar1;
  
  if (::Result[0] == L'\0') {
    DVar1 = GetModuleFileNameW((HMODULE)hInstance,::Result,0x200);
    if (DVar1 == 0) {
      ::Result[0] = L'\0';
    }
    return ::Result;
  }
  return ::Result;
}

// ExploreFolder @ 141aa6320

void __cdecl FWindowsPlatformProcess::ExploreFolder(wchar_t *param_1)

{
  char cVar1;
  IPlatformFile *pIVar2;
  FString *this;
  ForAnyElementType lpParameters;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pIVar2 = IPlatformFile::GetPlatformPhysical();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x118))(pIVar2,param_1);
  if (cVar1 != '\0') {
    ShellExecuteW((HWND)0x0,L"explore",param_1,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    return;
  }
  this = ::FString::FString(&local_18,param_1);
  ::FString::Replace(this,&local_28,L"/",L"\\",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"/select,%s");
  lpParameters.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    lpParameters.Data = local_38.Data.AllocatorInstance.Data;
  }
  ShellExecuteW((HWND)0x0,L"open",L"explorer.exe",(LPCWSTR)lpParameters.Data,(LPCWSTR)0x0,1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FreeDllHandle @ 141aa6fb0

BOOL __stdcall FWindowsPlatformProcess::FreeDllHandle(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141aa6fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}

// GenerateApplicationPath @ 141aa71e0

FString * __cdecl
FWindowsPlatformProcess::GenerateApplicationPath
          (FString *__return_storage_ptr__,FString *param_1,EBuildConfiguration param_2)

{
  int iVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,L"Win64");
  ::FString::PrintfImpl(&local_28,L"Binaries/%s/%s");
  pTVar2 = &FPaths::EngineDir(&local_18)->Data;
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  if ((pTVar2->ArrayNum != 0) || (iVar1 = 2, iVar3 == -1)) {
    iVar1 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar2,iVar3 + iVar1);
  ::FString::PathAppend
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename(__return_storage_ptr__);
  if (param_2 != Development) {
    ::LexToString(param_2);
    ::FString::PrintfImpl(&local_28,L"-%s-%s");
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(__return_storage_ptr__,L".exe",4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetApplicationMemoryUsage @ 141aa7510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformProcess::GetApplicationMemoryUsage(uint param_1,ulong64 *param_2)

{
  int iVar1;
  HANDLE hObject;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  ulong64 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = false;
  hObject = ::OpenProcess(0x410,0,param_1);
  if (hObject != (HANDLE)0x0) {
    iVar1 = K32GetProcessMemoryInfo(hObject,local_68,0x50);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *param_2 = local_20;
    }
    CloseHandle(hObject);
  }
  return bVar2;
}

// GetApplicationName @ 141aa75b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FWindowsPlatformProcess::GetApplicationName(FString *__return_storage_ptr__,uint param_1)

{
  BOOL BVar1;
  HANDLE hProcess;
  undefined1 auStack_2048 [32];
  DWORD local_2028 [4];
  WCHAR local_2018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x141aa75c0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2048;
  ::FString::FString(__return_storage_ptr__,L"");
  hProcess = ::OpenProcess(0x400,0,param_1);
  if (hProcess != (HANDLE)0x0) {
    local_2028[0] = 0x1000;
    BVar1 = QueryFullProcessImageNameW(hProcess,0,local_2018,local_2028);
    if (BVar1 != 0) {
      ::FString::operator=(__return_storage_ptr__,local_2018);
    }
    CloseHandle(hProcess);
  }
  return __return_storage_ptr__;
}

// GetApplicationSettingsDir @ 141aa7660

FString * __cdecl
FWindowsPlatformProcess::GetApplicationSettingsDir
          (FString *__return_storage_ptr__,ApplicationSettingsContext *param_1)

{
  Context CVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  _GUID *p_Var6;
  wchar_t *local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  CVar1 = param_1->Location;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (CVar1 == LocalUser) {
    bVar3 = ShouldExpectLowIntegrityLevel();
    p_Var6 = &FOLDERID_LocalAppData;
    if (bVar3) {
      p_Var6 = &FOLDERID_LocalAppDataLow;
    }
    iVar4 = SHGetKnownFolderPath(p_Var6,0,0,&local_res10);
    if (-1 < iVar4) {
      pFVar5 = ::FString::FString(&local_38,local_res10);
      if (&local_78 != pFVar5) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
LAB_141aa783d:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar5 = ::FString::Replace(&local_78,&local_28,L"\\",L"/",IgnoreCase);
      ::FString::ConcatFC(&local_68,pFVar5,L"/");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      local_78.Data.ArrayNum = local_68.Data.ArrayNum;
      local_78.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      CoTaskMemFree(local_res10);
      if (param_1->bIsEpic != false) {
        ::FString::AppendChars(&local_78,L"Epic/",5);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  else if (CVar1 == RoamingUser) {
    iVar4 = SHGetKnownFolderPath(&FOLDERID_RoamingAppData,0,0,&local_res10);
    if (-1 < iVar4) {
      pFVar5 = ::FString::FString(&local_48,local_res10);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      if (&local_78 != pFVar5) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      }
      goto LAB_141aa783d;
    }
  }
  else if (CVar1 == ApplicationSpecific) {
    iVar4 = SHGetKnownFolderPath(&FOLDERID_ProgramData,0,0,&local_res10);
    if (-1 < iVar4) {
      pFVar5 = ::FString::FString(&local_58,local_res10);
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      if (&local_78 != pFVar5) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      }
      goto LAB_141aa783d;
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x61d,
                       L"Attempting to call `ApplicationSettingsDir` with an invalid context!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  ::FString::FString(__return_storage_ptr__,"");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetArchitectureSuffix @ 141aa7900

wchar_t * __cdecl FWindowsPlatformProcess::GetArchitectureSuffix(void)

{
  return (wchar_t *)0x0;
}

// GetBinariesSubdirectory @ 141aa7970

wchar_t * __cdecl FWindowsPlatformProcess::GetBinariesSubdirectory(void)

{
  return L"Win64";
}

// GetCurrentCoreNumber @ 141aa8070

DWORD __stdcall FWindowsPlatformProcess::GetCurrentCoreNumber(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141aa8070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessorNumber();
  return DVar1;
}

// GetCurrentProcessId @ 141aa8080

DWORD __stdcall FWindowsPlatformProcess::GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141aa8080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ::GetCurrentProcessId();
  return DVar1;
}

// GetCurrentWorkingDirectory @ 141aa8090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FWindowsPlatformProcess::GetCurrentWorkingDirectory(FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  FString *pFVar7;
  uint uVar8;
  
  uVar8 = 0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  DVar6 = 0x80;
  do {
    if ((int)uVar8 < (int)DVar6) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,DVar6 - uVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    }
    else {
      if ((int)DVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)DVar6);
      }
      if ((int)DVar6 < (int)uVar8) {
        uVar8 = uVar8 - DVar6;
        if (((int)(uVar8 | DVar6) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
        if (uVar8 != 0) {
          _Dst = (__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)(int)DVar6 * 2;
          iVar5 = (*piVar1 - uVar8) - DVar6;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 2,(longlong)iVar5 * 2);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
        }
      }
    }
    DVar6 = GetCurrentDirectoryW
                      (*piVar1,(LPWSTR)(__return_storage_ptr__->Data).AllocatorInstance.Data);
    if (DVar6 == 0) {
      ::FString::Reset(__return_storage_ptr__,0);
      return __return_storage_ptr__;
    }
    uVar8 = *piVar1;
  } while (uVar8 <= DVar6);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNum
            (&__return_storage_ptr__->Data,DVar6 + 1,Default);
  return __return_storage_ptr__;
}

// GetDllDirectories @ 141aa84a0

void __cdecl
FWindowsPlatformProcess::GetDllDirectories(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  
  if (param_1 != &DllDirectories) {
    DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar3 = DllDirectories.ArrayNum;
    FVar2 = DllDirectories.AllocatorInstance;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = DllDirectories.ArrayNum;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,*piVar1,&param_1->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FString,FString,int>
              ((param_1->AllocatorInstance).Data,(FString *)FVar2.Data,iVar3);
  }
  return;
}

// GetDllExport @ 141aa8540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl FWindowsPlatformProcess::GetDllExport(void *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar4;
  FARPROC pFVar5;
  undefined1 auStack_d8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DllHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x11f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (param_2 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProcName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x120,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pTVar4 = StringCast<char,128,wchar_t>(&local_b8,param_2);
  pFVar5 = GetProcAddress(param_1,pTVar4->Ptr);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return pFVar5;
}

// GetDllHandle @ 141aa8620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl FWindowsPlatformProcess::GetDllHandle(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  void *pvVar4;
  ForElementType<FString> FVar5;
  ForElementType<FString> FVar6;
  LPWSTR pWVar7;
  longlong lVar8;
  int *piVar9;
  DWORD DVar10;
  uint uVar11;
  DWORD dwNewMode;
  undefined1 auStackY_1d8 [32];
  DWORD local_188 [4];
  ForElementType<FString> local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FString local_168;
  FString local_158;
  TArrayView<FString_const_,int> local_148;
  ForElementType<FString> local_138;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                         ,0xce,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  dwNewMode = 0;
  local_138.SecondaryData = (ForElementType<FString>)0x0;
  local_30 = 0;
  local_2c = 0x10;
  uVar11 = DllDirectories.ArrayNum + 1 + (uint)(0 < DllDirectoryStack.ArrayNum);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0x10 < (int)uVar11) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
              (0x10,8,uVar11,&local_138,0,&local_2c);
  }
  FVar5 = (ForElementType<FString>)GetModulesDirectory(&local_158);
  FVar6 = (ForElementType<FString>)&local_138;
  if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
    FVar6 = local_138.SecondaryData;
  }
  if ((ulonglong)FVar6 <= (ulonglong)FVar5) {
    FVar6 = (ForElementType<FString>)&local_138;
    if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
      FVar6 = local_138.SecondaryData;
    }
    if (((ulonglong)FVar5 < (ulonglong)((longlong)local_2c * 0x10 + (longlong)FVar6)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  if (local_30 == local_2c) {
    local_30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                         (0x810,&local_138,&local_2c);
  }
  FVar6 = (ForElementType<FString>)&local_138;
  if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
    FVar6 = local_138.SecondaryData;
  }
  lVar8 = (longlong)local_30;
  local_30 = local_30 + 1;
  ::FString::FString((FString *)(lVar8 * 0x10 + (longlong)FVar6),(FString *)FVar5);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (0 < DllDirectoryStack.ArrayNum) {
    uVar11 = 0;
    if ((int)(DllDirectoryStack.ArrayNum - 1U) < DllDirectoryStack.ArrayNum) {
      uVar11 = ~(DllDirectoryStack.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
    FVar5 = (ForElementType<FString>)
            ((longlong)(DllDirectoryStack.ArrayNum + -1) * 0x10 +
            (longlong)DllDirectoryStack.AllocatorInstance.Data);
    FVar6 = (ForElementType<FString>)&local_138;
    if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
      FVar6 = local_138.SecondaryData;
    }
    if ((ulonglong)FVar6 <= (ulonglong)FVar5) {
      FVar6 = (ForElementType<FString>)&local_138;
      if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
        FVar6 = local_138.SecondaryData;
      }
      if (((ulonglong)FVar5 < (ulonglong)((longlong)local_2c * 0x10 + (longlong)FVar6)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar1)();
        return pvVar4;
      }
    }
    if (local_30 == local_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                           (0x810,&local_138,&local_2c);
    }
    FVar6 = (ForElementType<FString>)&local_138;
    if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
      FVar6 = local_138.SecondaryData;
    }
    lVar8 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(lVar8 * 0x10 + (longlong)FVar6),(FString *)FVar5);
  }
  DVar10 = dwNewMode;
  if (0 < DllDirectories.ArrayNum) {
    do {
      uVar11 = 0;
      if ((int)DVar10 < DllDirectories.ArrayNum) {
        uVar11 = ~DVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar1)();
        return pvVar4;
      }
      FVar5 = (ForElementType<FString>)
              ((longlong)(int)DVar10 * 0x10 + (longlong)DllDirectories.AllocatorInstance.Data);
      FVar6 = (ForElementType<FString>)&local_138;
      if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
        FVar6 = local_138.SecondaryData;
      }
      if ((ulonglong)FVar6 <= (ulonglong)FVar5) {
        FVar6 = (ForElementType<FString>)&local_138;
        if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
          FVar6 = local_138.SecondaryData;
        }
        if (((ulonglong)FVar5 < (ulonglong)((longlong)local_2c * 0x10 + (longlong)FVar6)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pvVar4 = (void *)(*pcVar1)();
          return pvVar4;
        }
      }
      if (local_30 == local_2c) {
        local_30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                             (0x810,&local_138,&local_2c);
      }
      FVar6 = (ForElementType<FString>)&local_138;
      if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
        FVar6 = local_138.SecondaryData;
      }
      lVar8 = (longlong)local_30;
      local_30 = local_30 + 1;
      ::FString::FString((FString *)(lVar8 * 0x10 + (longlong)FVar6),(FString *)FVar5);
      DVar10 = DVar10 + 1;
    } while ((int)DVar10 < DllDirectories.ArrayNum);
  }
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pWVar7 = GetCommandLineW();
    CMDLINE_dllerrors = FParse::Param(pWVar7,L"dllerrors");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar9 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pWVar7 = GetCommandLineW();
    CMDLINE_unattended = FParse::Param(pWVar7,L"unattended");
    _Init_thread_footer(&::_TSS1);
  }
  if ((CMDLINE_dllerrors == false) && (dwNewMode = 0x8000, CMDLINE_unattended != false)) {
    dwNewMode = 0x8003;
  }
  local_188[0] = 0;
  BVar3 = SetThreadErrorMode(dwNewMode,local_188);
  iStack_170 = local_30;
  local_178 = (ForElementType<FString>)&local_138;
  if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
    local_178 = local_138.SecondaryData;
  }
  if ((local_30 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  ::FString::FString(&local_168,param_1);
  local_148._12_4_ = uStack_16c;
  local_148.ArrayNum = iStack_170;
  local_148.DataPtr = (FString *)local_178;
  pvVar4 = LoadLibraryWithSearchPaths(&local_168,&local_148);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (BVar3 != 0) {
    SetThreadErrorMode(local_188[0],(LPDWORD)0x0);
  }
  FVar6 = (ForElementType<FString>)&local_138;
  if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
    FVar6 = local_138.SecondaryData;
  }
  DestructItems<FString,int>((FString *)FVar6,local_30);
  if (local_138.SecondaryData != (ForElementType<FString>)0x0) {
    FMemory::Free((void *)local_138.SecondaryData);
  }
  return pvVar4;
}

// GetModuleExtension @ 141aab310

wchar_t * __cdecl FWindowsPlatformProcess::GetModuleExtension(void)

{
  return L"dll";
}

// GetModulesDirectory @ 141aab320

FString * __cdecl FWindowsPlatformProcess::GetModulesDirectory(FString *__return_storage_ptr__)

{
  BOOL BVar1;
  wchar_t *pwVar2;
  ForAnyElementType _Source;
  HINSTANCE__ *local_res8 [4];
  FString local_18;
  
  if (::Result[0] == L'\0') {
    BVar1 = GetModuleHandleExW(6,(LPCWSTR)GetModulesDirectory,(HMODULE *)local_res8);
    if (BVar1 == 0) {
      local_res8[0] = hInstance;
    }
    GetModuleFileNameW((HMODULE)local_res8[0],::Result,0x104);
    pwVar2 = wcsrchr(::Result,L'\\');
    *pwVar2 = L'\0';
    ::FString::FString(&local_18,::Result);
    FPaths::MakeStandardFilename(&local_18);
    _Source.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Source.Data = local_18.Data.AllocatorInstance.Data;
    }
    wcscpy(::Result,(wchar_t *)_Source.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,::Result);
  return __return_storage_ptr__;
}

// GetPerFrameProcessorUsage @ 141aac780

bool __cdecl
FWindowsPlatformProcess::GetPerFrameProcessorUsage(uint param_1,float *param_2,float *param_3)

{
  longlong *plVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  BOOL BVar5;
  HANDLE ProcessHandle;
  ulong64 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  PULONG64 ProcessorIdleCycleTime;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 uVar12;
  double dVar13;
  double dVar14;
  LARGE_INTEGER local_res20;
  uint local_58 [12];
  
  uVar12 = '\x01';
  if (LastFrameNumber != GFrameNumber) {
    LastFrameNumber = GFrameNumber;
    ProcessHandle = ::OpenProcess(0x410,0,param_1);
    if (ProcessHandle != (HANDLE)0x0) {
      uVar4 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      uVar9 = LastFrameNumber & 1;
      uVar10 = (ulonglong)(int)uVar4;
      if (DeltaCyclesPerSecond == 0.0) {
        QueryPerformanceFrequency(&local_res20);
        if ((int)uVar4 < 0) {
          dVar14 = (double)(uVar10 >> 1 | (ulonglong)(uVar4 & 1));
          dVar14 = dVar14 + dVar14;
        }
        else {
          dVar14 = (double)(longlong)uVar10;
        }
        DeltaCyclesPerSecond =
             (double)CONCAT71(local_res20.QuadPart._1_7_,local_res20.s.LowPart._0_1_) *
             __real_408f400000000000 * dVar14;
      }
      QueryPerformanceCounter(&local_res20);
      dVar13 = (double)CONCAT71(local_res20.QuadPart._1_7_,local_res20.s.LowPart._0_1_) *
               FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
      dVar14 = (dVar13 - PrevTotalSeconds) * DeltaCyclesPerSecond;
      PrevTotalSeconds = dVar13;
      BVar5 = QueryProcessCycleTime(ProcessHandle,ProcessCycleTimeBuffers + uVar9);
      local_res20.s.LowPart._0_1_ = BVar5 != 0;
      dVar14 = __real_3ff0000000000000 / dVar14;
      local_58[0] = uVar4 * 8;
      LastProcessTime =
           (double)(ProcessCycleTimeBuffers[uVar9] - ProcessCycleTimeBuffers[1 - uVar9]) * dVar14;
      if (IdleCycleTimeBuffers[0] == (ulong64 *)0x0) {
        uVar6 = SUB168(ZEXT816(8) * ZEXT416(local_58[0]),0);
        if (SUB168(ZEXT816(8) * ZEXT416(local_58[0]),8) != 0) {
          uVar6 = 0xffffffffffffffff;
        }
        IdleCycleTimeBuffers[0] = operator_new__(uVar6);
        uVar6 = SUB168(ZEXT816(8) * ZEXT416(local_58[0]),0);
        if (SUB168(ZEXT816(8) * ZEXT416(local_58[0]),8) != 0) {
          uVar6 = 0xffffffffffffffff;
        }
        IdleCycleTimeBuffers[1] = operator_new__(uVar6);
      }
      ProcessorIdleCycleTime = IdleCycleTimeBuffers[uVar9];
      puVar2 = IdleCycleTimeBuffers[1 - uVar9];
      BVar5 = QueryIdleProcessorCycleTime(local_58,ProcessorIdleCycleTime);
      uVar12 = '\0';
      if (BVar5 != 0) {
        uVar12 = local_res20.s.LowPart._0_1_;
      }
      uVar7 = 0;
      iVar8 = 0;
      if (uVar10 != 0) {
        lVar11 = (longlong)puVar2 - (longlong)ProcessorIdleCycleTime;
        do {
          uVar3 = *ProcessorIdleCycleTime;
          iVar8 = iVar8 + 1;
          plVar1 = (longlong *)((longlong)ProcessorIdleCycleTime + lVar11);
          ProcessorIdleCycleTime = ProcessorIdleCycleTime + 1;
          uVar7 = uVar7 + (uVar3 - *plVar1);
        } while ((ulonglong)(longlong)iVar8 < uVar10);
      }
      LastIdleTime = (double)uVar7 * dVar14;
      CloseHandle(ProcessHandle);
      if (uVar12 != '\0') goto LAB_141aaca43;
    }
    *param_3 = 0.0;
    *param_2 = 0.0;
    return false;
  }
LAB_141aaca43:
  dVar14 = LastIdleTime * __real_4059000000000000;
  *param_2 = (float)(LastProcessTime * __real_4059000000000000);
  *param_3 = (float)dVar14;
  return (bool)uVar12;
}

// GetProcReturnCode @ 141aad170

bool __cdecl FWindowsPlatformProcess::GetProcReturnCode(FProcHandle *param_1,int *param_2)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = GetExitCodeProcess((HANDLE)*param_1,local_res8);
  if ((BVar1 != 0) && (local_res8[0] != 0x103)) {
    if (param_2 != (int *)0x0) {
      *param_2 = local_res8[0];
    }
    return true;
  }
  return false;
}

// IsApplicationRunning @ 141ab28f0

bool __cdecl FWindowsPlatformProcess::IsApplicationRunning(uint param_1)

{
  DWORD DVar1;
  HANDLE hHandle;
  
  hHandle = ::OpenProcess(0x100000,0,param_1);
  if (hHandle == (HANDLE)0x0) {
    return false;
  }
  DVar1 = WaitForSingleObject(hHandle,0);
  CloseHandle(hHandle);
  return DVar1 == 0x102;
}

// IsApplicationRunning @ 141ab2950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformProcess::IsApplicationRunning(wchar_t *param_1)

{
  int iVar1;
  HANDLE hObject;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  undefined1 auStackY_298 [32];
  FString local_268;
  undefined4 local_258 [11];
  wchar_t local_22c [266];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  ::FString::FString(&local_268,param_1);
  iVar1 = ::FString::Find(&local_268,L".exe",4,IgnoreCase,FromEnd,-1);
  if (iVar1 == -1) {
    ::FString::AppendChars(&local_268,L".exe",4);
  }
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (hObject != (HANDLE)0xffffffffffffffff) {
    local_258[0] = 0x238;
    iVar1 = Process32FirstW(hObject,local_258);
    while (iVar1 != 0) {
      pFVar2 = (FScriptContainerElement *)L"";
      if (local_268.Data.ArrayNum != 0) {
        pFVar2 = local_268.Data.AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar2,local_22c);
      if (iVar1 == 0) {
        CloseHandle(hObject);
        bVar3 = true;
        goto LAB_141ab2a2c;
      }
      iVar1 = Process32NextW(hObject,local_258);
    }
  }
  CloseHandle(hObject);
  bVar3 = false;
LAB_141ab2a2c:
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsFirstInstance @ 141ab2db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformProcess::IsFirstInstance(void)

{
  bool bVar1;
  DWORD DVar2;
  wchar_t *pwVar3;
  undefined1 auStack_838 [32];
  wchar_t local_818;
  undefined1 local_816 [2044];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return bIsFirstInstance;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return bIsFirstInstance;
  }
  pwVar3 = FCommandLine::Get();
  local_818 = L'\0';
  memset(local_816,0,0x7fe);
  wcsncpy(&local_818,L"UnrealEngine4",0x3ff);
  local_1a = 0;
  WindowsPlatformProcess::GNamedMutex = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,&local_818);
  if (WindowsPlatformProcess::GNamedMutex != (HANDLE)0x0) {
    DVar2 = GetLastError();
    if ((DVar2 != 0xb7) && (bVar1 = FParse::Param(pwVar3,L"NEVERFIRST"), !bVar1)) {
      bIsFirstInstance = true;
      goto LAB_141ab2ed1;
    }
    if (WindowsPlatformProcess::GNamedMutex != (void *)0x0) {
      ReleaseMutex(WindowsPlatformProcess::GNamedMutex);
      WindowsPlatformProcess::GNamedMutex = (void *)0x0;
    }
  }
  bIsFirstInstance = false;
LAB_141ab2ed1:
  _Init_thread_footer(&::_TSS0);
  return bIsFirstInstance;
}

// IsProcRunning @ 141ab2f40

bool __cdecl FWindowsPlatformProcess::IsProcRunning(FProcHandle *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0);
  return DVar1 == 0x102;
}

// IsProcessAffinitySet @ 141ab2f70

bool __cdecl FWindowsPlatformProcess::IsProcessAffinitySet(void)

{
  return bCustomProcessAffinity;
}

// LaunchFileInDefaultExternalApplication @ 141ab3a80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FWindowsPlatformProcess::LaunchFileInDefaultExternalApplication
          (wchar_t *param_1,wchar_t *param_2,Type param_3,bool param_4)

{
  HINSTANCE pHVar1;
  wchar_t *lpParameters;
  wchar_t *lpOperation;
  ForAnyElementType lpParameters_00;
  FString local_28;
  
  lpOperation = L"open";
  if (param_3 == Edit) {
    lpOperation = L"edit";
  }
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  lpParameters = L"";
  if (param_2 != (wchar_t *)0x0) {
    lpParameters = param_2;
  }
  pHVar1 = ShellExecuteW((HWND)0x0,lpOperation,param_1,lpParameters,L"",1);
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  if (((ulonglong)((longlong)&pHVar1[-7].unused + 1U) & 0xfffffffffffffffb) == 0) {
    pHVar1 = ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,param_1,(LPCWSTR)0x0,(LPCWSTR)0x0,5);
  }
  if ((param_4) && (((ulonglong)((longlong)&pHVar1[-7].unused + 1U) & 0xfffffffffffffffb) == 0)) {
    ::FString::PrintfImpl(&local_28,L"shell32.dll,OpenAs_RunDLL %s");
    lpParameters_00.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      lpParameters_00.Data = local_28.Data.AllocatorInstance.Data;
    }
    pHVar1 = ShellExecuteW((HWND)0x0,lpOperation,L"RUNDLL32.EXE",(LPCWSTR)lpParameters_00.Data,L"",1
                          );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return 0x20 < (longlong)pHVar1;
}

// LaunchURL @ 141ab3c00

void __cdecl FWindowsPlatformProcess::LaunchURL(wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("URL",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x1a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&LaunchURLOverrideDelegate,
             &local_38);
  if ((LaunchURLOverrideDelegate._16_4_ != 0) && (LaunchURLOverrideDelegate._8_8_ != 0)) {
    cVar3 = (**(code **)(*(longlong *)LaunchURLOverrideDelegate._8_8_ + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_141ab3c7e;
    }
  }
  bVar2 = false;
LAB_141ab3c7e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&LaunchURLOverrideDelegate,
               &local_20);
    plVar4 = (longlong *)0x0;
    if (LaunchURLOverrideDelegate._16_4_ != 0) {
      plVar4 = (longlong *)LaunchURLOverrideDelegate._8_8_;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  else {
    LaunchURLInternal(param_1,param_2,param_3);
  }
  return;
}

// LaunchURLInternal @ 141ab3cf0

void __cdecl
FWindowsPlatformProcess::LaunchURLInternal(wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  HINSTANCE pHVar7;
  FText *this;
  FString *pFVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::ShouldLaunchUrl,&local_38);
  if (((FCoreDelegates::ShouldLaunchUrl._16_4_ == 0) || (FCoreDelegates::ShouldLaunchUrl._8_8_ == 0)
      ) || (cVar4 = (**(code **)(*(longlong *)FCoreDelegates::ShouldLaunchUrl._8_8_ + 0x38))(),
           cVar4 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::ShouldLaunchUrl,&local_38);
    plVar9 = (longlong *)0x0;
    if (FCoreDelegates::ShouldLaunchUrl._16_4_ != 0) {
      plVar9 = (longlong *)FCoreDelegates::ShouldLaunchUrl._8_8_;
    }
    cVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (cVar4 == '\0') {
      if (param_3 == (FString *)0x0) {
        return;
      }
      ::FString::operator=(param_3,L"LaunchURL cancelled by delegate");
      return;
    }
  }
  if (param_3 != (FString *)0x0) {
    ::FString::operator=(param_3,L"");
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::LaunchCustomHandlerForURL,&local_38);
  if (((FCoreDelegates::LaunchCustomHandlerForURL._16_4_ == 0) ||
      (FCoreDelegates::LaunchCustomHandlerForURL._8_8_ == 0)) ||
     (cVar4 = (**(code **)(*(longlong *)FCoreDelegates::LaunchCustomHandlerForURL._8_8_ + 0x38))(),
     cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    bVar5 = FParse::SchemeNameFromURI(param_1,&local_68);
    if (bVar5) {
      iVar6 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      if (1 < iVar6) {
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar10.Data = local_68.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"http");
        if (iVar6 != 0) {
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar10.Data = local_68.Data.AllocatorInstance.Data;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"https");
          if (iVar6 != 0) {
            pHVar7 = ShellExecuteW((HWND)0x0,L"open",param_1,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
            FVar10.Data = local_68.Data.AllocatorInstance.Data;
            if (param_3 != (FString *)0x0) {
              if ((longlong)pHVar7 < 0x21) {
                this = FText::AsLocalizable_Advanced_LocText
                                 ((FText *)&local_38,L"Core",L"UrlFailed",L"Failed launching URL");
                pFVar8 = FText::ToString(this);
                local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar6 = (pFVar8->Data).ArrayNum;
                _Src = (pFVar8->Data).AllocatorInstance.Data;
                local_58.Data.ArrayNum = iVar6;
                if (iVar6 == 0) {
                  local_58.Data.ArrayMax = 0;
                  pFVar8 = &local_58;
                  bVar3 = true;
                  bVar2 = true;
                  bVar5 = false;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar6,0,(ForAnyElementType *)&local_58,iVar6,
                             &local_58.Data.ArrayMax);
                  memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
                  pFVar8 = &local_58;
                  bVar3 = true;
                  bVar2 = true;
                  bVar5 = false;
                }
              }
              else {
                pFVar8 = ::FString::FString(&local_48,L"");
                bVar3 = false;
                bVar2 = false;
                bVar5 = true;
              }
              iVar1 = (pFVar8->Data).ArrayNum;
              iVar6 = iVar1 + -1;
              if (iVar1 == 0) {
                iVar6 = 0;
              }
              ::FString::AssignRange(param_3,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar6)
              ;
              if ((bVar5) &&
                 (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              if ((bVar2) &&
                 (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              FVar10.Data = local_68.Data.AllocatorInstance.Data;
              if ((bVar3) && ((ITextData *)local_38.DestructionSentinel._0_8_ != (ITextData *)0x0))
              {
                (**(code **)((longlong)*(ITextData *)local_38.DestructionSentinel._0_8_ + 0x10))();
                FVar10.Data = local_68.Data.AllocatorInstance.Data;
              }
            }
            goto LAB_141ab4047;
          }
        }
      }
    }
    ::FString::PrintfImpl(&local_58,L"%s %s");
    ::FString::TrimEnd(&local_58,&local_48);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    LaunchWebURL(&local_48,param_3);
    FVar10.Data = local_68.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    ::FString::FString(&local_58,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::LaunchCustomHandlerForURL,&local_38);
    plVar9 = (longlong *)0x0;
    if (FCoreDelegates::LaunchCustomHandlerForURL._16_4_ != 0) {
      plVar9 = (longlong *)FCoreDelegates::LaunchCustomHandlerForURL._8_8_;
    }
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_58,param_3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    FVar10.Data = local_58.Data.AllocatorInstance.Data;
  }
LAB_141ab4047:
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return;
}

// LoadLibraryWithSearchPaths @ 141ab4ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141ab4ed4) */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __cdecl
FWindowsPlatformProcess::LoadLibraryWithSearchPaths
          (FString *param_1,TArrayView<FString_const_,int> *param_2)

{
  TTuple<FString,unsigned_long> *pTVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  FTrackedActivity *pFVar8;
  IPlatformFile *pIVar9;
  FString *pFVar10;
  ForElementType<FSetElementId> FVar11;
  ulonglong uVar12;
  HMODULE pHVar13;
  HINSTANCE__ *pHVar14;
  void *pvVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  int iVar19;
  ForElementType<FSetElementId> FVar20;
  undefined1 auStackY_3d8 [32];
  undefined1 local_388 [8];
  FString local_380;
  ForAnyElementType local_370;
  undefined8 local_368;
  undefined1 local_360 [8];
  undefined1 local_358 [16];
  TTuple<FString,unsigned_long> local_348;
  ForElementType<FSetElementId> local_330;
  FString *local_328;
  IPlatformFile *local_320;
  FString *local_318;
  FTrackedActivityScope local_310;
  FString local_308;
  FString local_2f8;
  TArrayView<FString_const_,int> local_2e8;
  TArrayView<FString_const_,int> local_2d8;
  TArrayView<FString_const_,int> local_2c8;
  ForElementType<FSetElementId> local_2b8;
  ForElementType<FSetElementId> local_2b0;
  ForElementType<FSetElementId> local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  ForElementType<FSetElementId> local_278;
  int local_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_328 = param_1;
  local_268.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_248,0xc,"Loading Dll ",0xc)
  ;
  iVar7 = (param_1->Data).ArrayNum;
  iVar19 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar19 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_268,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar19);
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pwVar17 = local_268.Base;
  *local_268.CurPos = L'\0';
  pFVar8 = FTrackedActivity::GetIOActivity();
  FTrackedActivityScope::FTrackedActivityScope(&local_310,pFVar8,pwVar17,false,Inherit);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  local_380.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar18 = (longlong)local_380.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_380.Data.ArrayNum == 0) {
    local_380.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_380.Data.ArrayNum,0,(ForAnyElementType *)&local_380,local_380.Data.ArrayNum
               ,&local_380.Data.ArrayMax);
    memcpy(local_380.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
  }
  pIVar9 = IPlatformFile::GetPlatformPhysical();
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_380.Data.ArrayNum != 0) {
    FVar16.Data = local_380.Data.AllocatorInstance.Data;
  }
  local_320 = pIVar9;
  cVar4 = (**(code **)((longlong)*pIVar9 + 0x78))(pIVar9,FVar16.Data);
  if (cVar4 != '\0') {
    pFVar10 = FPaths::ConvertRelativePathToFull(&local_2f8,&local_380);
    if (&local_380 != pFVar10) {
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
      local_380.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_380.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_380.Data.ArrayNum != 0) {
      FVar16.Data = local_380.Data.AllocatorInstance.Data;
    }
    FVar11 = (ForElementType<FSetElementId>)GetModuleHandleW((LPCWSTR)FVar16.Data);
    if (FVar11 != (ForElementType<FSetElementId>)0x0) goto LAB_141ab50b5;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_380.Data.ArrayNum != 0) {
      FVar16.Data = local_380.Data.AllocatorInstance.Data;
    }
    local_290 = 0;
    local_28c = 0x80;
    local_288 = 0xffffffff;
    local_284 = 0;
    local_270 = 0;
    local_358._0_8_ = FVar11;
    local_358._8_8_ = FVar11;
    local_2b8 = FVar11;
    local_2b0 = FVar11;
    local_298 = FVar11;
    local_278 = FVar11;
    ::FString::FString(&local_308,(wchar_t *)FVar16.Data);
    local_2e8.DataPtr = param_2->DataPtr;
    local_2e8.ArrayNum = param_2->ArrayNum;
    local_2e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    ResolveMissingImportsRecursive
              (&local_308,&local_2e8,(TArray<FString,TSizedDefaultAllocator<32>_> *)local_358,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&local_2b8);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    uVar3 = local_358._8_4_;
    uVar12 = (ulonglong)(int)local_358._8_4_;
    FVar20 = (ForElementType<FSetElementId>)(uVar12 * 0x10 + local_358._0_8_);
    local_370.Data = (FScriptContainerElement *)0x0;
    local_368 = 0;
    FVar11 = (ForElementType<FSetElementId>)local_358._0_8_;
    while( true ) {
      if ((int)uVar12 != uVar3) {
        local_388[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_388);
      }
      param_1 = local_328;
      if (FVar11 == FVar20) break;
      if (*(int *)((longlong)FVar11 + 8) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)FVar11;
      }
      pHVar13 = GetModuleHandleW(pwVar17);
      if (pHVar13 == (HMODULE)0x0) {
        local_330 = FVar11;
        pHVar14 = `FWindowsPlatformProcess::LoadLibraryWithSearchPaths'::__l15::<lambda_1>::
                  operator()(&local_330);
        if (pHVar14 == (HINSTANCE__ *)0x0) {
          DVar6 = GetLastError();
          ::FString::FString((FString *)&local_348,(FString *)FVar11);
          local_348._16_4_ = DVar6;
          if (((local_370.Data <= &local_348) &&
              (&local_348 <
               (TTuple<FString,unsigned_long> *)(local_370.Data + (longlong)local_368._4_4_ * 0x18))
              ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pvVar15 = (void *)(*pcVar2)();
            return pvVar15;
          }
          iVar7 = (int)local_368;
          if ((int)local_368 == local_368._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_370,(int *)((longlong)&local_368 + 4));
          }
          lVar18 = (longlong)iVar7;
          local_368 = CONCAT44(local_368._4_4_,iVar7 + 1);
          *(undefined8 *)(local_370.Data + lVar18 * 0x18) = 0;
          *(undefined8 *)(local_370.Data + lVar18 * 0x18) = local_348._0_8_;
          local_348._0_8_ = 0;
          *(undefined4 *)(local_370.Data + lVar18 * 0x18 + 8) = local_348._8_4_;
          *(undefined4 *)(local_370.Data + lVar18 * 0x18 + 0xc) = local_348._12_4_;
          local_348._8_8_ = 0;
          *(undefined4 *)(local_370.Data + lVar18 * 0x18 + 0x10) = local_348._16_4_;
          goto LAB_141ab4ed9;
        }
        if ((byte)LogWindows._0_1_ < 6) goto LAB_141ab4ed9;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
        uVar12 = local_358._8_8_ & 0xffffffff;
        FVar11 = (ForElementType<FSetElementId>)((longlong)FVar11 + 0x10);
      }
      else {
LAB_141ab4ed9:
        uVar12 = local_358._8_8_ & 0xffffffff;
        FVar11 = (ForElementType<FSetElementId>)((longlong)FVar11 + 0x10);
      }
    }
    iVar7 = (int)local_368;
    pTVar1 = (TTuple<FString,unsigned_long> *)(local_370.Data + (longlong)(int)local_368 * 0x18);
    FVar16.Data = local_370.Data;
    while( true ) {
      if ((int)local_368 != iVar7) {
        `TCheckedPointerIterator<TTuple<FString,unsigned_long>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_360);
      }
      if ((TTuple<FString,unsigned_long> *)FVar16.Data == pTVar1) break;
      if (*(int *)&((TTuple<FString,unsigned_long> *)FVar16.Data)->field_0x8 == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)FVar16.Data;
      }
      pHVar13 = GetModuleHandleW(pwVar17);
      if (pHVar13 == (HMODULE)0x0) {
        if (4 < (byte)LogWindows._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
        }
        local_2d8.DataPtr = param_2->DataPtr;
        local_2d8.ArrayNum = param_2->ArrayNum;
        local_2d8._12_4_ = *(undefined4 *)&param_2->field_0xc;
        LogImportDiagnostics((FString *)FVar16.Data,&local_2d8);
      }
      FVar16.Data = FVar16.Data + 0x18;
    }
    DestructItems<TTuple<FString,unsigned_long>,int>
              ((TTuple<FString,unsigned_long> *)local_370.Data,(int)local_368);
    if ((TTuple<FString,unsigned_long> *)local_370.Data != (TTuple<FString,unsigned_long> *)0x0) {
      FMemory::Free(local_370.Data);
    }
    DestructItems<FString,int>((FString *)local_358._0_8_,local_358._8_4_);
    if ((ForElementType<FSetElementId>)local_358._0_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_358._0_8_);
    }
    local_270 = 0;
    if (local_278 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_278);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_2b8);
    pIVar9 = local_320;
  }
  local_318 = &local_380;
  FVar11 = (ForElementType<FSetElementId>)
           `FWindowsPlatformProcess::LoadLibraryWithSearchPaths'::__l2::<lambda_2>::operator()
                     (&local_318);
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    if (4 < (byte)LogWindows._0_1_) {
      GetLastError();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar9 + 0x78))(pIVar9,pwVar17);
    if (cVar4 == '\0') {
      if (4 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
    }
    else {
      local_2c8.DataPtr = param_2->DataPtr;
      local_2c8.ArrayNum = param_2->ArrayNum;
      local_2c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      LogImportDiagnostics(param_1,&local_2c8);
    }
  }
  else if (5 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
LAB_141ab50b5:
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  FTrackedActivityScope::~FTrackedActivityScope(&local_310);
  return (void *)FVar11;
}

// NewInterprocessSynchObject @ 141ab70f0

/* WARNING: Enum "Type": Some values do not have unique names */

FSemaphore * __cdecl
FWindowsPlatformProcess::NewInterprocessSynchObject(FString *param_1,bool param_2,uint param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  FSemaphore *this;
  wchar_t *lpName;
  
  if ((param_1->Data).ArrayNum == 0) {
    lpName = L"";
  }
  else {
    lpName = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (param_2) {
    pvVar2 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,param_3,param_3,lpName);
    if (pvVar2 == (HANDLE)0x0) {
      GetLastError();
      if ((byte)LogHAL._0_1_ < 3) {
        return (FSemaphore *)0x0;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      return (FSemaphore *)0x0;
    }
  }
  else {
    pvVar2 = OpenSemaphoreW(0x100002,0,lpName);
    if (pvVar2 == (HANDLE)0x0) {
      DVar1 = GetLastError();
      if (DVar1 != 2) {
        if ((byte)LogHAL._0_1_ < 3) {
          return (FSemaphore *)0x0;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
        return (FSemaphore *)0x0;
      }
      if ((byte)LogHAL._0_1_ < 6) {
        return (FSemaphore *)0x0;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      return (FSemaphore *)0x0;
    }
  }
  this = ::operator_new(0x110);
  if (this == (FSemaphore *)0x0) {
    return (FSemaphore *)0x0;
  }
  FGenericPlatformProcess::FSemaphore::FSemaphore(this,lpName);
  this->_padding_ = (longlong)&___7FWindowsSemaphore_FWindowsPlatformProcess__6B_;
  this[1]._padding_ = (longlong)pvVar2;
  return this;
}

// NewInterprocessSynchObject @ 141ab7260

/* WARNING: Enum "Type": Some values do not have unique names */

FSemaphore * __cdecl
FWindowsPlatformProcess::NewInterprocessSynchObject(wchar_t *param_1,bool param_2,uint param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  FSemaphore *this;
  
  if (param_2) {
    pvVar2 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,param_3,param_3,param_1);
    if (pvVar2 != (HANDLE)0x0) {
LAB_141ab7376:
      this = ::operator_new(0x110);
      if (this != (FSemaphore *)0x0) {
        FGenericPlatformProcess::FSemaphore::FSemaphore(this,param_1);
        this[1]._padding_ = (longlong)pvVar2;
        this->_padding_ = (longlong)&___7FWindowsSemaphore_FWindowsPlatformProcess__6B_;
        return this;
      }
      return (FSemaphore *)0x0;
    }
    GetLastError();
    if (2 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      return (FSemaphore *)0x0;
    }
  }
  else {
    pvVar2 = OpenSemaphoreW(0x100002,0,param_1);
    if (pvVar2 != (HANDLE)0x0) goto LAB_141ab7376;
    DVar1 = GetLastError();
    if (DVar1 == 2) {
      if (5 < (byte)LogHAL._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
        return (FSemaphore *)0x0;
      }
    }
    else if (2 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
  }
  return (FSemaphore *)0x0;
}

// OpenProcess @ 141ab8750

FProcHandle __cdecl FWindowsPlatformProcess::OpenProcess(uint param_1)

{
  HANDLE pvVar1;
  undefined4 in_register_0000000c;
  FProcHandle FVar2;
  DWORD in_EDX;
  
  FVar2._4_4_ = in_register_0000000c;
  FVar2._0_4_ = param_1;
  pvVar1 = ::OpenProcess(0x1fffff,0,in_EDX);
  *(HANDLE *)FVar2 = pvVar1;
  return FVar2;
}

// PopDllDirectory @ 141ab9db0

void __cdecl FWindowsPlatformProcess::PopDllDirectory(wchar_t *param_1)

{
  void *pvVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *lpPathName;
  FScriptContainerElement *_Dst;
  undefined1 local_res8 [8];
  
  if (DllDirectoryStack.ArrayNum < 1) {
    local_res8[0] = 0;
    `FWindowsPlatformProcess::PopDllDirectory'::__l2::<lambda_1>::operator()(local_res8);
  }
  uVar6 = 0;
  if ((int)(DllDirectoryStack.ArrayNum - 1U) < DllDirectoryStack.ArrayNum) {
    uVar6 = ~(DllDirectoryStack.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lpPathName = L"";
  if (*(int *)(DllDirectoryStack.AllocatorInstance.Data +
              (longlong)DllDirectoryStack.ArrayNum * 0x10 + -8) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)
              (DllDirectoryStack.AllocatorInstance.Data +
              (longlong)DllDirectoryStack.ArrayNum * 0x10 + -0x10);
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar7,param_1);
  if (iVar5 != 0) {
    uVar6 = 0;
    if ((int)(DllDirectoryStack.ArrayNum - 1U) < DllDirectoryStack.ArrayNum) {
      uVar6 = ~(DllDirectoryStack.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DllDirectoryStack.Top() == Directory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x131,
                       L"There was a PushDllDirectory/PopDllDirectory mismatch (Popped %s, which didn\'t match %s)"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((DllDirectoryStack.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar3.Data = DllDirectoryStack.AllocatorInstance.Data;
  lVar8 = (longlong)DllDirectoryStack.ArrayNum;
  pvVar1 = *(void **)(DllDirectoryStack.AllocatorInstance.Data + lVar8 * 0x10 + -0x10);
  *(undefined8 *)(DllDirectoryStack.AllocatorInstance.Data + lVar8 * 0x10 + -0x10) = 0;
  *(undefined8 *)(FVar3.Data + lVar8 * 0x10 + -8) = 0;
  iVar5 = DllDirectoryStack.ArrayNum + -1;
  _Dst = DllDirectoryStack.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar5 = (DllDirectoryStack.ArrayNum - iVar5) + -1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
  }
  DllDirectoryStack.ArrayNum = DllDirectoryStack.ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&DllDirectoryStack.AllocatorInstance,DllDirectoryStack.ArrayNum,
             &DllDirectoryStack.ArrayMax);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (0 < DllDirectoryStack.ArrayNum) {
    uVar6 = 0;
    if ((int)(DllDirectoryStack.ArrayNum - 1U) < DllDirectoryStack.ArrayNum) {
      uVar6 = ~(DllDirectoryStack.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(DllDirectoryStack.AllocatorInstance.Data +
                (longlong)DllDirectoryStack.ArrayNum * 0x10 + -8) != 0) {
      lpPathName = *(wchar_t **)
                    (DllDirectoryStack.AllocatorInstance.Data +
                    (longlong)DllDirectoryStack.ArrayNum * 0x10 + -0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141aba084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetDllDirectoryW(lpPathName);
  return;
}

// PushDllDirectory @ 141aba6e0

/* WARNING: Removing unreachable block (ram,0x000141aba7ed) */

void __cdecl FWindowsPlatformProcess::PushDllDirectory(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FString local_18;
  
  SetDllDirectoryW(param_1);
  ::FString::FString(&local_18,param_1);
  if (((DllDirectoryStack.AllocatorInstance.Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       DllDirectoryStack.AllocatorInstance.Data + (longlong)DllDirectoryStack.ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DllDirectoryStack.ArrayNum == DllDirectoryStack.ArrayMax) {
    DllDirectoryStack.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&DllDirectoryStack.AllocatorInstance,&DllDirectoryStack.ArrayMax);
  }
  pFVar3 = DllDirectoryStack.AllocatorInstance.Data + (longlong)DllDirectoryStack.ArrayNum * 0x10;
  DllDirectoryStack.ArrayNum = DllDirectoryStack.ArrayNum + 1;
  *(undefined8 *)pFVar3 = 0;
  *(FScriptContainerElement **)pFVar3 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar3 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// ReadFromPipes @ 141abb850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FWindowsPlatformProcess::ReadFromPipes(FString **param_1,void **param_2,int param_3)

{
  HANDLE hNamedPipe;
  wchar_t *_Str;
  BOOL BVar1;
  char *lpBuffer;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  size_t sVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStackY_1a8 [32];
  DWORD local_178;
  DWORD local_174;
  FString local_170;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_158;
  ulonglong local_38;
  
  if (0 < param_3) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
    lVar6 = (longlong)param_2 - (longlong)param_1;
    uVar4 = (ulonglong)(uint)param_3;
    do {
      hNamedPipe = *(HANDLE *)((longlong)param_1 + lVar6);
      if ((hNamedPipe != (HANDLE)0x0) && (*param_1 != (FString *)0x0)) {
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
        local_178 = 0;
        BVar1 = PeekNamedPipe(hNamedPipe,(LPVOID)0x0,0,(LPDWORD)0x0,&local_178,(LPDWORD)0x0);
        if ((BVar1 != 0) && (local_178 != 0)) {
          lpBuffer = operator_new__((ulonglong)(local_178 + 1));
          local_174 = 0;
          BVar1 = ReadFile(hNamedPipe,lpBuffer,local_178,&local_174,(LPOVERLAPPED)0x0);
          if ((BVar1 != 0) && (local_174 != 0)) {
            lpBuffer[local_174] = '\0';
            pTVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                     TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_158,lpBuffer);
            _Str = pTVar2->Ptr;
            sVar3 = wcslen(_Str);
            ::FString::AppendChars(&local_170,_Str,(int)sVar3);
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          operator_delete__(lpBuffer);
        }
        iVar5 = local_170.Data.ArrayNum + -1;
        if (local_170.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(*param_1,(wchar_t *)local_170.Data.AllocatorInstance.Data,iVar5);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      param_1 = param_1 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// ReadPipe @ 141abbce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FWindowsPlatformProcess::ReadPipe(FString *__return_storage_ptr__,void *param_1)

{
  wchar_t *_Str;
  BOOL BVar1;
  char *lpBuffer;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  size_t sVar3;
  undefined1 auStackY_188 [32];
  DWORD local_158;
  DWORD local_154 [3];
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_158 = 0;
  BVar1 = PeekNamedPipe(param_1,(LPVOID)0x0,0,(LPDWORD)0x0,&local_158,(LPDWORD)0x0);
  if ((BVar1 != 0) && (local_158 != 0)) {
    lpBuffer = operator_new__((ulonglong)(local_158 + 1));
    local_154[0] = 0;
    BVar1 = ReadFile(param_1,lpBuffer,local_158,local_154,(LPOVERLAPPED)0x0);
    if ((BVar1 != 0) && (local_154[0] != 0)) {
      lpBuffer[local_154[0]] = '\0';
      pTVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
               TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_148,lpBuffer);
      _Str = pTVar2->Ptr;
      sVar3 = wcslen(_Str);
      ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar3);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    operator_delete__(lpBuffer);
  }
  return __return_storage_ptr__;
}

// ReadPipeToArray @ 141abbe00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FWindowsPlatformProcess::ReadPipeToArray
          (void *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  bool bVar4;
  undefined1 uVar5;
  BOOL BVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  uint uVar9;
  DWORD local_res18 [2];
  DWORD local_res20 [2];
  
  local_res18[0] = 0;
  BVar6 = PeekNamedPipe(param_1,(LPVOID)0x0,0,(LPDWORD)0x0,local_res18,(LPDWORD)0x0);
  DVar3 = local_res18[0];
  if ((BVar6 != 0) && (lVar8 = (longlong)(int)local_res18[0], local_res18[0] != 0)) {
    iVar7 = param_2->ArrayNum;
    piVar1 = &param_2->ArrayNum;
    if (iVar7 < (int)local_res18[0]) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res18[0] - iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    }
    else {
      if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
      }
      if ((int)local_res18[0] < iVar7) {
        uVar9 = iVar7 - local_res18[0];
        if (((int)(local_res18[0] | uVar9) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (uVar9 != 0) {
          _Dst = (param_2->AllocatorInstance).Data + lVar8;
          iVar7 = (*piVar1 - uVar9) - DVar3;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (int)uVar9,(longlong)iVar7);
          }
          *piVar1 = *piVar1 - uVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
    local_res20[0] = 0;
    BVar6 = ReadFile(param_1,(param_2->AllocatorInstance).Data,local_res18[0],local_res20,
                     (LPOVERLAPPED)0x0);
    if (BVar6 != 0) {
      if (local_res20[0] < local_res18[0]) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,local_res20[0],Default);
      }
      return true;
    }
    *piVar1 = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  return false;
}

// ResolveImport @ 141abea80

bool __cdecl
FWindowsPlatformProcess::ResolveImport
          (FString *param_1,TArrayView<FString_const_,int> *param_2,FString *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  IPlatformFile *pIVar9;
  FName *pFVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FName *pFVar13;
  FName local_res8;
  FName local_res10;
  IPlatformFile *local_48;
  FString *local_40;
  TArrayView<FString_const_,int> *local_38;
  FString *local_30;
  
  pIVar9 = IPlatformFile::GetPlatformPhysical();
  bVar6 = 0 < DllDirectoryStack.ArrayNum;
  local_48 = pIVar9;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  bVar3 = `FWindowsPlatformProcess::ResolveImport'::__l2::<lambda_1>::operator()
                    (&local_48,0,bVar6 + 1);
  if (bVar3) {
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar12,FNAME_Find);
  FVar1 = local_res8;
  if (local_res8 != (FName)0x0) {
    uVar7 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
    if (SearchPathDllCache._8_4_ != SearchPathDllCache._52_4_) {
      lVar11 = 0x154b84de8;
      if (SearchPathDllCache._64_8_ != 0) {
        lVar11 = SearchPathDllCache._64_8_;
      }
      uVar7 = *(uint *)(lVar11 + (ulonglong)(SearchPathDllCache._72_4_ - 1 & FVar1.Number + uVar7) *
                                 4);
      while (uVar7 != 0xffffffff) {
        pFVar10 = (FName *)((longlong)(int)uVar7 * 0x20 + SearchPathDllCache._0_8_);
        if (*pFVar10 == FVar1) {
          pFVar13 = pFVar10 + 1;
          if (pFVar10 == (FName *)0x0) {
            pFVar13 = (FName *)0x0;
          }
          if (pFVar13 != (FName *)0x0) {
            while (iVar8 = pFVar13[1].ComparisonIndex.Value, 0 < iVar8) {
              FVar1 = *pFVar13;
              if (*(int *)((longlong)FVar1 + 8) == 0) {
                pwVar12 = L"";
              }
              else {
                pwVar12 = *(wchar_t **)FVar1;
              }
              cVar4 = (**(code **)((longlong)*pIVar9 + 0x78))(pIVar9,pwVar12);
              if (cVar4 != '\0') {
                ::FString::operator=(param_3,(FString *)FVar1);
                return true;
              }
              if (((int)pFVar13[1].ComparisonIndex.Value < 1) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              FVar1 = *pFVar13;
              if (*(void **)FVar1 != (void *)0x0) {
                FMemory::Free(*(void **)FVar1);
              }
              iVar8 = pFVar13[1].ComparisonIndex.Value + -1;
              if (iVar8 != 0) {
                memmove((void *)FVar1,(FScriptContainerElement *)((longlong)FVar1 + 0x10),
                        (longlong)iVar8 << 4);
              }
              pFVar13[1].ComparisonIndex.Value = pFVar13[1].ComparisonIndex.Value + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)pFVar13,pFVar13[1].ComparisonIndex.Value,
                         (int *)&pFVar13[1].Number);
            }
            if ((iVar8 == 0) &&
               (local_res10 = local_res8, SearchPathDllCache._8_4_ != SearchPathDllCache._52_4_)) {
              uVar7 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
              TSet<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                   *)&SearchPathDllCache,local_res8.Number + uVar7,&local_res10);
            }
          }
          break;
        }
        uVar7 = pFVar10[3].ComparisonIndex.Value;
      }
    }
  }
  bVar6 = `FWindowsPlatformProcess::ResolveImport'::__l2::<lambda_1>::operator()
                    (&local_48,bVar6 + 1,param_2->ArrayNum);
  return bVar6;
}

// ResolveMissingImportsRecursive @ 141abed00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWindowsPlatformProcess::ResolveMissingImportsRecursive
          (FString *param_1,TArrayView<FString_const_,int> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 _Src;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  HMODULE pHVar10;
  ulong64 uVar11;
  FWriteBuffer *pFVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStackY_128 [32];
  undefined1 local_d0 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [16];
  FString local_a0;
  TArrayView<FString_const_,int> local_88;
  TArrayView<FString_const_,int> local_78;
  TLogScope<1> local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar14 = (ulonglong)_tls_index;
  bVar6 = false;
  uVar17 = 0;
  bVar3 = false;
  iVar16 = 0;
  local_b0._0_8_ = param_2;
  local_b0._8_8_ = param_4;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuResolveMissingImportsFields>(&local_68);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    sVar1 = *pwVar13;
    pFVar15 = (FScriptContainerElement *)pwVar13;
    while (sVar1 != 0) {
      pFVar15 = pFVar15 + 2;
      iVar16 = iVar16 + 1;
      sVar1 = *(short *)pFVar15;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar13,iVar16);
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8);
    if (*(char *)(lVar18 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = *(longlong *)(lVar18 + 0x20);
    **(undefined1 **)(lVar18 + 0x20) = 6;
    lVar9 = *(longlong *)(lVar18 + 0x20) + 1;
    *(longlong *)(lVar18 + 0x20) = lVar9;
    if (lVar18 != local_68._8_8_) {
      *(longlong *)(lVar18 + 0x28) = lVar9;
    }
    bVar6 = true;
    bVar3 = true;
    *(undefined8 *)(local_68._8_8_ + 0x28) = *(undefined8 *)(local_68._8_8_ + 0x20);
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar5 = ReadLibraryImports(pwVar13,&local_c0);
  uVar4 = local_b0._0_8_;
  if ((bVar5) && (0 < local_c0.ArrayNum)) {
    lVar18 = 0;
    do {
      uVar7 = 0;
      uVar8 = uVar7;
      if ((int)uVar17 < local_c0.ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = local_c0.AllocatorInstance.Data + lVar18;
      if (*(int *)(pFVar15 + 8) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)pFVar15;
        uVar7 = *(int *)(pFVar15 + 8) - 1;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar7,pwVar13);
      iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(param_4,uVar8,(FString *)pFVar15);
      if (iVar16 == -1) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (param_4,(FString *)local_b0,(bool *)pFVar15);
        if (*(int *)(pFVar15 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)pFVar15;
        }
        pHVar10 = GetModuleHandleW(pwVar13);
        if (pHVar10 == (HMODULE)0x0) {
          local_d0._0_8_ = (FScriptContainerElement *)0x0;
          if (*(int *)(pFVar15 + 8) == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)pFVar15;
          }
          local_d0._8_8_ = pHVar10;
          ::FString::FString(&local_a0,pwVar13);
          local_88.DataPtr = *(FString **)uVar4;
          local_88._8_8_ = *(undefined8 *)(uVar4 + 8);
          bVar6 = ResolveImport(&local_a0,&local_88,(FString *)local_d0);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            local_78.DataPtr = *(FString **)uVar4;
            local_78._8_8_ = *(undefined8 *)(uVar4 + 8);
            ResolveMissingImportsRecursive((FString *)local_d0,&local_78,param_3,param_4);
            pFVar15 = (param_3->AllocatorInstance).Data;
            if (((pFVar15 <= (FScriptContainerElement *)local_d0) &&
                ((FScriptContainerElement *)local_d0 < pFVar15 + (longlong)param_3->ArrayMax * 0x10)
                ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar16 = param_3->ArrayNum;
            if (iVar16 == param_3->ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            _Src = local_d0._0_8_;
            pFVar15 = (param_3->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
            param_3->ArrayNum = iVar16 + 1;
            *(FScriptContainerElement **)&pFVar15->field_0x0 = (FScriptContainerElement *)0x0;
            lVar9 = (longlong)(int)local_d0._8_4_;
            *(undefined4 *)&pFVar15[8].field_0x0 = local_d0._8_4_;
            if (local_d0._8_4_ == 0) {
              *(int *)(pFVar15 + 0xc) = 0;
              param_4 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                        local_b0._8_8_;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_d0._8_4_,0,(ForAnyElementType *)pFVar15,local_d0._8_4_,
                         (int *)(pFVar15 + 0xc));
              memcpy(*(FScriptContainerElement **)&pFVar15->field_0x0,(void *)_Src,lVar9 * 2);
              param_4 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                        local_b0._8_8_;
            }
          }
          if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_d0._0_8_);
          }
        }
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x10;
    } while ((int)uVar17 < local_c0.ArrayNum);
    uVar14 = (ulonglong)_tls_index;
    bVar6 = bVar3;
  }
  DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (bVar6) {
    uVar11 = UE::Trace::Private::TimeGetTimestamp();
    lVar9 = uVar11 - UE::Trace::Private::GStartCycle;
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8);
    if (*(char *)(lVar18 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar18 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 8) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar12->Cursor = lVar9 * 0x100 + 0x12;
    pFVar12->Cursor = pFVar12->Cursor + 8;
    pFVar12->Committed = pFVar12->Cursor;
  }
  return;
}

// ResolveNetworkPath @ 141abf120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformProcess::ResolveNetworkPath(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  size_t sVar6;
  FString *pFVar7;
  int iVar8;
  undefined1 auStackY_d8 [32];
  ushort cbBuffer;
  int iVar9;
  undefined4 in_stack_ffffffffffffff54;
  FString local_a8;
  DWORD local_98 [2];
  longlong local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  wchar_t local_58 [2];
  WCHAR local_54 [18];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98[0] = 0xf;
  local_54[9] = L'\0';
  local_54[10] = L'\0';
  local_54[0xb] = L'\0';
  local_54[0xc] = L'\0';
  local_54[0xd] = L'\0';
  local_54[0xe] = L'\0';
  local_54[0xf] = 0;
  local_58[0] = L'\\';
  local_58[1] = L'\\';
  local_54[0] = L'\0';
  local_54[1] = L'\0';
  local_54[2] = L'\0';
  local_54[3] = L'\0';
  local_54[4] = L'\0';
  local_54[5] = L'\0';
  local_54[6] = L'\0';
  local_54[7] = L'\0';
  local_54[8] = L'\0';
  BVar3 = GetComputerNameW(local_54,local_98);
  if (BVar3 != 0) {
    sVar6 = wcslen(local_58);
    bVar2 = ::FString::StartsWith(param_1,local_58,(int)sVar6,IgnoreCase);
    if (bVar2) {
      sVar6 = wcslen(local_58);
      iVar8 = (int)sVar6 + 1;
      cbBuffer = 0;
      iVar9 = iVar8;
      iVar4 = ::FString::Find(param_1,L"\\",1,CaseSensitive,FromStart,iVar8);
      ::FString::Mid(param_1,&local_88,iVar8,(iVar4 - (int)sVar6) + -1);
      local_90 = 0;
      DVar5 = NetShareGetInfo((char *)0x0,(char *)local_88.Data.AllocatorInstance.Data,2,
                              (char *)&local_90,cbBuffer,
                              (ushort *)CONCAT44(in_stack_ffffffffffffff54,iVar9));
      if (DVar5 == 0) {
        ::FString::RightChop(param_1,&local_78,iVar4);
        pFVar7 = ::FString::FString(&local_68,*(wchar_t **)(local_90 + 0x28));
        ::FString::ConcatFF(&local_a8,pFVar7,&local_78);
        if (param_2 != &local_a8) {
          pFVar1 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_2->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
          (param_2->Data).ArrayNum = local_a8.Data.ArrayNum;
          (param_2->Data).ArrayMax = local_a8.Data.ArrayMax;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        NetApiBufferFree(local_90);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return true;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// SetCurrentWorkingDirectoryToBaseDir @ 141ac0440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir(void)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  DWORD dwMessageId;
  wchar_t *pwVar4;
  undefined1 auStackY_858 [32];
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  FGenericPlatformMisc::CacheLaunchDir();
  pwVar4 = BaseDir();
  BVar3 = SetCurrentDirectoryW(pwVar4);
  if (BVar3 == 0) {
    local_818[0] = L'\0';
    dwMessageId = GetLastError();
    FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0x400,local_818,0x400,(va_list *)0x0);
    pwVar4 = wcschr(local_818,L'\r');
    if (pwVar4 != (wchar_t *)0x0) {
      *pwVar4 = L'\0';
    }
    pwVar4 = wcschr(local_818,L'\n');
    if (pwVar4 != (wchar_t *)0x0) {
      *pwVar4 = L'\0';
    }
    BaseDir();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("::SetCurrentDirectoryW(BaseDir())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x672,L"Failed to set the working directory to \'%s\' (%s)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetProcPriority @ 141ac0b70

bool __cdecl FWindowsPlatformProcess::SetProcPriority(FProcHandle *param_1,int param_2)

{
  BOOL BVar1;
  DWORD dwPriorityClass;
  DWORD DVar2;
  bool bVar3;
  
  dwPriorityClass = 0x20;
  if (param_2 < 0) {
    dwPriorityClass = 0x40;
    DVar2 = 0x4000;
    bVar3 = param_2 == -1;
  }
  else {
    if (param_2 < 1) goto LAB_141ac0ba3;
    dwPriorityClass = 0x80;
    DVar2 = 0x8000;
    bVar3 = param_2 == 1;
  }
  if (bVar3) {
    dwPriorityClass = DVar2;
  }
LAB_141ac0ba3:
  if (*param_1 != (FProcHandle)0x0) {
    BVar1 = SetPriorityClass((HANDLE)*param_1,dwPriorityClass);
    return BVar1 != 0;
  }
  return false;
}

// SetProcessAffinity @ 141ac0bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWindowsPlatformProcess::SetProcessAffinity(uint param_1,bool param_2)

{
  undefined1 uVar1;
  BOOL BVar2;
  DWORD dwMessageId;
  HANDLE hProcess;
  wchar_t *pwVar3;
  DWORD_PTR dwProcessAffinityMask;
  undefined1 auStackY_858 [32];
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2) {
      if (param_1 < 0x21) {
        if (param_1 == 0x20) {
          dwProcessAffinityMask = 0x5555555555555555;
        }
        else {
          dwProcessAffinityMask = (1L << ((byte)param_1 * '\x02' & 0x3f)) - 1U & 0x5555555555555555;
        }
      }
      else {
        if (2 < (byte)LogWindows._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
        }
        dwProcessAffinityMask = 0x5555555555555555;
      }
    }
    else if (param_1 < 0x41) {
      if (param_1 == 0x40) {
        dwProcessAffinityMask = 0xffffffffffffffff;
      }
      else {
        dwProcessAffinityMask = (1L << ((byte)param_1 & 0x3f)) - 1;
      }
    }
    else {
      if (2 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      dwProcessAffinityMask = 0xffffffffffffffff;
    }
    hProcess = GetCurrentProcess();
    BVar2 = SetProcessAffinityMask(hProcess,dwProcessAffinityMask);
    if (BVar2 == 0) {
      dwMessageId = GetLastError();
      local_818[0] = L'\0';
      if (dwMessageId == 0) {
        dwMessageId = GetLastError();
      }
      FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0x400,local_818,0x400,(va_list *)0x0);
      pwVar3 = wcschr(local_818,L'\r');
      if (pwVar3 != (wchar_t *)0x0) {
        *pwVar3 = L'\0';
      }
      pwVar3 = wcschr(local_818,L'\n');
      if (pwVar3 != (wchar_t *)0x0) {
        *pwVar3 = L'\0';
      }
      uVar1 = bCustomProcessAffinity;
      if (1 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
        uVar1 = bCustomProcessAffinity;
      }
    }
    else {
      if (4 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      bCustomProcessAffinity = true;
      uVar1 = bCustomProcessAffinity;
    }
  }
  return (bool)uVar1;
}

// SetThreadAffinityMask @ 141ac1230

void __cdecl FWindowsPlatformProcess::SetThreadAffinityMask(ulong64 param_1)

{
  HANDLE hThread;
  
  if ((!bCustomProcessAffinity) && (param_1 != 0xffffffffffffffff)) {
    hThread = GetCurrentThread();
                    /* WARNING: Could not recover jumptable at 0x000141ac1259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ::SetThreadAffinityMask(hThread,param_1);
    return;
  }
  return;
}

// SetThreadName @ 141ac1270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FWindowsPlatformProcess::SetThreadName(wchar_t *param_1)

{
  _func___cdecl_T_HRESULT_void_ptr_wchar_t_ptr *p_Var1;
  HANDLE pvVar2;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  HMODULE hModule;
  undefined1 auStack_d8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      hModule = GetModuleHandleW(L"kernel32.dll");
      RealSetThreadDescription =
           (_func___cdecl_T_HRESULT_void_ptr_wchar_t_ptr *)
           GetProcAddress(hModule,"SetThreadDescription");
      _Init_thread_footer(&::_TSS0);
    }
  }
  p_Var1 = RealSetThreadDescription;
  if (RealSetThreadDescription != (_func___cdecl_T_HRESULT_void_ptr_wchar_t_ptr *)0x0) {
    pvVar2 = GetCurrentThread();
    (*p_Var1)(pvVar2,param_1);
  }
  pTVar3 = StringCast<char,128,wchar_t>(&local_b8,param_1);
  WindowsPlatformProcessImpl::SetThreadName(pTVar3->Ptr);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return;
}

// SetThreadPriority @ 141ac13f0

void __cdecl FWindowsPlatformProcess::SetThreadPriority(EThreadPriority param_1)

{
  int nPriority;
  HANDLE hThread;
  
  nPriority = FRunnableThreadWin::TranslateThreadPriority(param_1);
  hThread = GetCurrentThread();
                    /* WARNING: Could not recover jumptable at 0x000141ac140d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::SetThreadPriority(hThread,nPriority);
  return;
}

// SetupAudioThread @ 141ac1790

void __cdecl FWindowsPlatformProcess::SetupAudioThread(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = CoInitializeEx((LPVOID)0x0,2);
  if (1 < uVar3) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3811653612568840379>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                       ,0x8bb,"FPlatformMisc::CoInitialize()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetupGameThread @ 141ac17e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FWindowsPlatformProcess::SetupGameThread(void)

{
  wchar_t wVar1;
  bool bVar2;
  _func___cdecl_T_HRESULT_void_ptr_wchar_t_ptr *p_Var3;
  HANDLE pvVar4;
  HMODULE hModule;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  char local_b8 [128];
  void *local_38;
  char *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      hModule = GetModuleHandleW(L"kernel32.dll");
      RealSetThreadDescription =
           (_func___cdecl_T_HRESULT_void_ptr_wchar_t_ptr *)
           GetProcAddress(hModule,"SetThreadDescription");
      _Init_thread_footer(&::_TSS0);
    }
  }
  p_Var3 = RealSetThreadDescription;
  if (RealSetThreadDescription != (_func___cdecl_T_HRESULT_void_ptr_wchar_t_ptr *)0x0) {
    pvVar4 = GetCurrentThread();
    (*p_Var3)(pvVar4,L"GameThread");
  }
  lVar5 = 0;
  local_28 = 10;
  local_30 = local_b8;
  local_38 = (void *)0x0;
  bVar2 = false;
  lVar6 = lVar5;
  do {
    wVar1 = L"GameThread"[lVar6];
    local_b8[lVar6] = (char)wVar1;
    lVar6 = lVar6 + 1;
    bVar2 = (bool)(bVar2 | 0x7f < (ushort)wVar1);
  } while (lVar6 < 0xb);
  if (bVar2) {
    do {
      if (0x7f < (ushort)L"GameThread"[lVar5]) {
        local_b8[lVar5] = '?';
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < 0xb);
  }
  WindowsPlatformProcessImpl::SetThreadName(local_30);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// ShaderWorkingDir @ 141ac1940

FString * __cdecl FWindowsPlatformProcess::ShaderWorkingDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  FString local_18;
  
  pwVar1 = UserTempDir();
  pTVar2 = &::FString::FString(&local_18,pwVar1)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar2,0x19 - (uint)(pTVar2->ArrayNum != 0));
  ::FString::PathAppend(__return_storage_ptr__,L"UnrealShaderWorkingDir/",0x17);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ShouldExpectLowIntegrityLevel @ 141ac19c0

bool __cdecl FWindowsPlatformProcess::ShouldExpectLowIntegrityLevel(void)

{
  bool bVar1;
  LPWSTR pWVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pWVar2 = GetCommandLineW();
      bVar1 = FParse::Param(pWVar2,L"ExpectLowIntegrityLevel");
      if (bVar1) {
        bExpectLowIntegrityLevel = true;
      }
      else {
        pWVar2 = GetCommandLineW();
        bVar1 = FParse::Param(pWVar2,L"ExpectMediumIntegrityLevel");
        bExpectLowIntegrityLevel = false;
        if (bVar1) {
          bExpectLowIntegrityLevel = false;
        }
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bExpectLowIntegrityLevel;
}

// Sleep @ 141ac2240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformProcess::Sleep(float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Sleep> FVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  DWORD dwMilliseconds;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FScopeIdle local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48 [2];
  
  FVar6 = StatPtr_STAT_Sleep;
  if (StatPtr_STAT_Sleep == (FThreadSafeStaticStat<FStat_STAT_Sleep>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_Sleep");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Sleep>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Sleep,*pFVar5,L"CPU Stall - Sleep"
                       ,"STATGROUP_CPUStalls","STATCAT_Advanced",L"CPU Stalls",true,true,ST_int64,
                       true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar10.Value;
        local_res18.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformProcess.cpp"
                   ,0x741);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_141ac2397;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_141ac2397:
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_res10,false);
  dwMilliseconds = (DWORD)(longlong)(param_1 * __real_447a0000);
  if (dwMilliseconds == 0) {
    SwitchToThread();
  }
  else {
    ::Sleep(dwMilliseconds);
  }
  if (local_res10.bIgnore == false) {
    puVar7 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_48[0].NameAndInfo = (FStatNameAndInfo)local_res8;
    local_48[0].StatData.Pad =
         (uchar  [8])
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_48,puVar7);
    QueryPerformanceCounter(&local_res18);
    *(DWORD *)(pFVar8 + 2) = *(int *)(pFVar8 + 2) + (local_res18.s.LowPart - local_res10.Start);
    if (0 < *(int *)(pFVar8 + 3)) {
      *(DWORD *)&pFVar8[2].field_0x4 =
           *(int *)&pFVar8[2].field_0x4 + (local_res18.s.LowPart - local_res10.Start);
    }
    pFVar8[3].field_0x4 = 0;
  }
  if (local_res10.TraceEventScope.bEnabled != false) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48[0].NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar11 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res18);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// SleepInfinite @ 141ac2530

void __cdecl FWindowsPlatformProcess::SleepInfinite(void)

{
  do {
    ::Sleep(0xffffffff);
  } while( true );
}

// SleepNoStats @ 141ac2550

void __cdecl FWindowsPlatformProcess::SleepNoStats(float param_1)

{
  DWORD dwMilliseconds;
  
  dwMilliseconds = (DWORD)(longlong)(param_1 * __real_447a0000);
  if (dwMilliseconds == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141ac2561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SwitchToThread();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141ac2568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::Sleep(dwMilliseconds);
  return;
}

// TeardownAudioThread @ 141ac29f0

void __stdcall FWindowsPlatformProcess::TeardownAudioThread(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141ac29f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}

// TerminateProc @ 141ac2ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FWindowsPlatformProcess::TerminateProc(FProcHandle *param_1,bool param_2)

{
  int iVar1;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  code *local_80;
  undefined1 *local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (param_2) {
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`FWindowsPlatformProcess::TerminateProc'::__l5::<lambda_1>,bool,unsigned_int,wchar_t_const_*>
               ::Call;
    local_78 = local_88;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_3c = 0x80;
    local_38 = 0xffffffff;
    local_34 = 0;
    local_28 = (ForElementType<FSetElementId>)0x0;
    local_20 = 0;
    TerminateProcTreeWithPredicateInternal
              ((void *)*param_1,
               (TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*)> *)&local_80,
               (TSet<unsigned_long,DefaultKeyFuncs<unsigned_long,0>,FDefaultSetAllocator> *)local_68
              );
    local_20 = 0;
    if (local_28 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_28);
    }
    iVar1 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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
  }
  else {
    TerminateProcess((HANDLE)*param_1,0);
  }
  return;
}

// TerminateProcTreeWithPredicate @ 141ac2bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWindowsPlatformProcess::TerminateProcTreeWithPredicate
          (FProcHandle *param_1,TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*)> *param_2)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*)> local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._0_8_ = *(undefined8 *)param_2;
  local_78._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  TerminateProcTreeWithPredicateInternal
            ((void *)*param_1,&local_78,
             (TSet<unsigned_long,DefaultKeyFuncs<unsigned_long,0>,FDefaultSetAllocator> *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
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
  return;
}

// TryGetMemoryUsage @ 141ac3210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FWindowsPlatformProcess::TryGetMemoryUsage
          (FProcHandle *param_1,FPlatformProcessMemoryStats *param_2)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulong64 uStack_60;
  ulong64 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulong64 uStack_30;
  ulong64 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_28 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar2 = K32GetProcessMemoryInfo(*param_1,&local_68,0x48);
  if (iVar2 == 0) {
    bVar1 = FWindowsPlatformMisc::IsWine();
    if (((!bVar1) || (DVar3 = GetLastError(), DVar3 != 5)) && (2 < (byte)LogWindows._0_1_)) {
      GetLastError();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    return false;
  }
  param_2->UsedPhysical = local_58;
  param_2->PeakUsedPhysical = uStack_60;
  param_2->UsedVirtual = uStack_30;
  param_2->PeakUsedVirtual = local_28;
  return true;
}

// UserDir @ 141ac4260

wchar_t * __cdecl FWindowsPlatformProcess::UserDir(void)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FWindowsPlatformProcess::UserDir'::__l2::
           _dynamic_atexit_destructor_for__WindowsUserDir__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar1 = WindowsUserDir.Data.ArrayNum + -1;
  if (WindowsUserDir.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if ((iVar1 == 0) && (iVar1 = SHGetKnownFolderPath(&FOLDERID_Documents,0,0,local_res8), -1 < iVar1)
     ) {
    pFVar2 = ::FString::FString(&local_18,local_res8[0]);
    pFVar2 = ::FString::Replace(pFVar2,&local_28,L"\\",L"/",IgnoreCase);
    ::FString::ConcatFC(&local_38,pFVar2,L"/");
    if (WindowsUserDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(WindowsUserDir.Data.AllocatorInstance.Data);
    }
    WindowsUserDir.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    WindowsUserDir.Data.ArrayNum = local_38.Data.ArrayNum;
    WindowsUserDir.Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    CoTaskMemFree(local_res8[0]);
  }
  pwVar3 = L"";
  if (WindowsUserDir.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)WindowsUserDir.Data.AllocatorInstance.Data;
  }
  return pwVar3;
}

// UserHomeDir @ 141ac43d0

wchar_t * __cdecl FWindowsPlatformProcess::UserHomeDir(void)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *local_res8 [4];
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      iVar1 = SHGetKnownFolderPath(&FOLDERID_Profile,0,0,local_res8);
      if (iVar1 < 0) {
        WindowsUserHomeDir.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        WindowsUserHomeDir.Data.ArrayNum = 0;
        WindowsUserHomeDir.Data.ArrayMax = 0;
      }
      else {
        ::FString::FString(&local_18,local_res8[0]);
        ::FString::ReplaceInline(&local_18,L"\\",L"/",IgnoreCase);
        ::FString::AppendChars(&local_18,L"/",1);
        ::FString::Shrink(&local_18);
        CoTaskMemFree(local_res8[0]);
        WindowsUserHomeDir.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
        WindowsUserHomeDir.Data.ArrayMax = local_18.Data.ArrayMax;
        WindowsUserHomeDir.Data.ArrayNum = local_18.Data.ArrayNum;
      }
      atexit(`FWindowsPlatformProcess::UserHomeDir'::__l2::
             _dynamic_atexit_destructor_for__WindowsUserHomeDir__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pwVar2 = L"";
  if (WindowsUserHomeDir.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)WindowsUserHomeDir.Data.AllocatorInstance.Data;
  }
  return pwVar2;
}

// UserName @ 141ac4500

wchar_t * __cdecl FWindowsPlatformProcess::UserName(bool param_1)

{
  wchar_t *pwVar1;
  wchar_t _C;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  DWORD local_res8 [2];
  
  if (!param_1) {
    if (::Result[0] == L'\0') {
      local_res8[0] = 0x100;
      GetUserNameW(::Result,local_res8);
    }
    return ::Result;
  }
  if (ResultAlpha[0] == L'\0') {
    local_res8[0] = 0x100;
    GetUserNameW(ResultAlpha,local_res8);
    pwVar3 = ResultAlpha;
    pwVar4 = ResultAlpha;
    _C = ResultAlpha[0];
    while (_C != L'\0') {
      iVar2 = iswalnum(_C);
      if (iVar2 != 0) {
        *pwVar4 = *pwVar3;
        pwVar4 = pwVar4 + 1;
      }
      pwVar1 = pwVar3 + 1;
      pwVar3 = pwVar3 + 1;
      _C = *pwVar1;
    }
    *pwVar4 = L'\0';
  }
  return ResultAlpha;
}

// UserSettingsDir @ 141ac45d0

wchar_t * __cdecl FWindowsPlatformProcess::UserSettingsDir(void)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  _GUID *p_Var5;
  wchar_t *local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FWindowsPlatformProcess::UserSettingsDir'::__l2::
           _dynamic_atexit_destructor_for__WindowsUserSettingsDir__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar2 = WindowsUserSettingsDir.Data.ArrayNum + -1;
  if (WindowsUserSettingsDir.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    bVar1 = ShouldExpectLowIntegrityLevel();
    p_Var5 = &FOLDERID_LocalAppData;
    if (bVar1) {
      p_Var5 = &FOLDERID_LocalAppDataLow;
    }
    iVar2 = SHGetKnownFolderPath(p_Var5,0,0,local_res8);
    if (-1 < iVar2) {
      pFVar3 = ::FString::FString(&local_18,local_res8[0]);
      pFVar3 = ::FString::Replace(pFVar3,&local_28,L"\\",L"/",IgnoreCase);
      ::FString::ConcatFC(&local_38,pFVar3,L"/");
      if (WindowsUserSettingsDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(WindowsUserSettingsDir.Data.AllocatorInstance.Data);
      }
      WindowsUserSettingsDir.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      WindowsUserSettingsDir.Data.ArrayNum = local_38.Data.ArrayNum;
      WindowsUserSettingsDir.Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      CoTaskMemFree(local_res8[0]);
    }
  }
  pwVar4 = L"";
  if (WindowsUserSettingsDir.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)WindowsUserSettingsDir.Data.AllocatorInstance.Data;
  }
  return pwVar4;
}

// UserSettingsDirMediumIntegrity @ 141ac4750

wchar_t * __cdecl FWindowsPlatformProcess::UserSettingsDirMediumIntegrity(void)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FWindowsPlatformProcess::UserSettingsDirMediumIntegrity'::__l2::
           _dynamic_atexit_destructor_for__WindowsUserSettingsDir__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar1 = WindowsUserSettingsDir.Data.ArrayNum + -1;
  if (WindowsUserSettingsDir.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if ((iVar1 == 0) &&
     (iVar1 = SHGetKnownFolderPath(&FOLDERID_LocalAppData,0,0,local_res8), -1 < iVar1)) {
    pFVar2 = ::FString::FString(&local_18,local_res8[0]);
    pFVar2 = ::FString::Replace(pFVar2,&local_28,L"\\",L"/",IgnoreCase);
    ::FString::ConcatFC(&local_38,pFVar2,L"/");
    if (WindowsUserSettingsDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(WindowsUserSettingsDir.Data.AllocatorInstance.Data);
    }
    WindowsUserSettingsDir.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    WindowsUserSettingsDir.Data.ArrayNum = local_38.Data.ArrayNum;
    WindowsUserSettingsDir.Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    CoTaskMemFree(local_res8[0]);
  }
  pwVar3 = L"";
  if (WindowsUserSettingsDir.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)WindowsUserSettingsDir.Data.AllocatorInstance.Data;
  }
  return pwVar3;
}

// UserTempDir @ 141ac48c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __cdecl FWindowsPlatformProcess::UserTempDir(void)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_4a8 [32];
  FString local_478;
  wchar_t *local_468;
  FString local_460;
  FString local_450;
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FWindowsPlatformProcess::UserTempDir'::__l2::
             _dynamic_atexit_destructor_for__WindowsUserTempDir__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = WindowsUserTempDir.Data.ArrayNum + -1;
  if (WindowsUserTempDir.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    bVar1 = ShouldExpectLowIntegrityLevel();
    if (bVar1) {
      iVar2 = SHGetKnownFolderPath(&FOLDERID_LocalAppDataLow,0,0,&local_468);
      if (-1 < iVar2) {
        pFVar3 = ::FString::FString(&local_450,local_468);
        pFVar3 = ::FString::Replace(pFVar3,&local_460,L"\\",L"/",IgnoreCase);
        ::FString::ConcatFC(&local_478,pFVar3,L"/Temp/");
        if (WindowsUserTempDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(WindowsUserTempDir.Data.AllocatorInstance.Data);
        }
        WindowsUserTempDir.Data.AllocatorInstance.Data = local_478.Data.AllocatorInstance.Data;
        WindowsUserTempDir.Data.ArrayNum = local_478.Data.ArrayNum;
        WindowsUserTempDir.Data.ArrayMax = local_478.Data.ArrayMax;
        local_478.Data.ArrayNum = 0;
        local_478.Data.ArrayMax = 0;
        local_478.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
        if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.Data.AllocatorInstance.Data);
        }
        CoTaskMemFree(local_468);
      }
    }
    else {
      memset(local_438,0,0x208);
      GetTempPathW(0x104,local_438);
      memset(local_228,0,0x208);
      GetLongPathNameW(local_438,local_228,0x104);
      pFVar3 = ::FString::FString(&local_460,local_228);
      pFVar3 = ::FString::Replace(pFVar3,&local_450,L"\\",L"/",IgnoreCase);
      if (pFVar3 != &WindowsUserTempDir) {
        if (WindowsUserTempDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(WindowsUserTempDir.Data.AllocatorInstance.Data);
        }
        WindowsUserTempDir.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        WindowsUserTempDir.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        WindowsUserTempDir.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
    }
  }
  pwVar4 = L"";
  if (WindowsUserTempDir.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)WindowsUserTempDir.Data.AllocatorInstance.Data;
  }
  return pwVar4;
}

// WaitForProc @ 141ac5270

void __cdecl FWindowsPlatformProcess::WaitForProc(FProcHandle *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141ac5278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  return;
}

// WindowsSystemDir @ 141ac5330

wchar_t * __cdecl FWindowsPlatformProcess::WindowsSystemDir(void)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *local_res8;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FWindowsPlatformProcess::WindowsSystemDir'::__l2::
           _dynamic_atexit_destructor_for__WindowsSystemDir__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar1 = ::WindowsSystemDir.Data.ArrayNum + -1;
  if (::WindowsSystemDir.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if ((iVar1 == 0) && (iVar1 = SHGetKnownFolderPath(&FOLDERID_System,0,0,&local_res8), -1 < iVar1))
  {
    pFVar2 = ::FString::FString(&local_18,local_res8);
    pFVar2 = ::FString::Replace(pFVar2,&local_28,L"\\",L"/",IgnoreCase);
    if (pFVar2 != &::WindowsSystemDir) {
      if (::WindowsSystemDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(::WindowsSystemDir.Data.AllocatorInstance.Data);
      }
      ::WindowsSystemDir.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::WindowsSystemDir.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      ::WindowsSystemDir.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    CoTaskMemFree(local_res8);
  }
  pwVar3 = L"";
  if (::WindowsSystemDir.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)::WindowsSystemDir.Data.AllocatorInstance.Data;
  }
  return pwVar3;
}

// WritePipe @ 141ac5d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformProcess::WritePipe(void *param_1,FString *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  BOOL BVar5;
  uchar *lpBuffer;
  uchar *puVar6;
  wchar_t *pwVar7;
  DWORD DVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStackY_1a8 [32];
  DWORD local_178 [4];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar4 = (param_2->Data).ArrayNum;
  iVar11 = 0;
  iVar9 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar9 = iVar11;
  }
  if ((iVar9 == 0) || (param_1 == (void *)0x0)) {
    return false;
  }
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar4 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar7,iVar9);
  lpBuffer = operator_new__((longlong)iVar4 + 2);
  puVar6 = UE::Core::Private::Convert(lpBuffer,iVar4,pwVar7,iVar9);
  *puVar6 = '\n';
  local_178[0] = 0;
  BVar5 = WriteFile(param_1,lpBuffer,iVar4 + 1,local_178,(LPOVERLAPPED)0x0);
  if (param_3 == (FString *)0x0) goto LAB_141ac5ed7;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (lpBuffer == (uchar *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
  }
  else {
    DVar8 = local_178[0];
    if ((0 < (int)local_178[0]) && (lpBuffer[(longlong)(int)local_178[0] + -1] == '\0')) {
      iVar11 = 1;
      DVar8 = local_178[0] - 1;
    }
    local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,lpBuffer,DVar8);
    uVar10 = local_58 + iVar11;
    uVar12 = uVar10;
    if (uVar10 < 0x81) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_141ac5e3a;
      }
    }
    else {
LAB_141ac5e3a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,2);
    }
    local_60 = local_168;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      local_60 = local_68.Data;
    }
    pwVar7 = UE::Core::Private::Convert((wchar_t *)local_60,uVar10,lpBuffer,iVar11 + DVar8);
    if ((pwVar7 == (wchar_t *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  ::FString::operator=(param_3,(wchar_t *)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_141ac5ed7:
  operator_delete__(lpBuffer);
  return BVar5 != 0;
}

// WritePipe @ 141ac5f30

bool __cdecl
FWindowsPlatformProcess::WritePipe(void *param_1,uchar *param_2,int param_3,int *param_4)

{
  BOOL BVar1;
  bool bVar2;
  DWORD local_res18 [4];
  
  if ((param_3 == 0) || (param_1 == (void *)0x0)) {
    bVar2 = false;
  }
  else {
    local_res18[0] = 0;
    BVar1 = WriteFile(param_1,param_2,param_3,local_res18,(LPOVERLAPPED)0x0);
    bVar2 = BVar1 != 0;
    if (param_4 != (int *)0x0) {
      *param_4 = local_res18[0];
      return bVar2;
    }
  }
  return bVar2;
}

// YieldThread @ 141ac5f80

BOOL __stdcall FWindowsPlatformProcess::YieldThread(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141ac5f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SwitchToThread();
  return BVar1;
}

// operator() @ 1504801e0

bool __thiscall `FWindowsPlatformProcess::PopDllDirectory'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3811653612568838447>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3811653612568838447>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

