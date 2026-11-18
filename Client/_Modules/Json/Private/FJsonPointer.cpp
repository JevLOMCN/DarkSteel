// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 13

// FJsonPointer @ 141dc44c0

FJsonPointer * __thiscall
UE::Json::FJsonPointer::FJsonPointer(FJsonPointer *this,FJsonPointer *param_1)

{
  (this->PathParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathParts).AllocatorInstance.Data = (param_1->PathParts).AllocatorInstance.Data;
  (param_1->PathParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathParts).ArrayNum = (param_1->PathParts).ArrayNum;
  (this->PathParts).ArrayMax = (param_1->PathParts).ArrayMax;
  (param_1->PathParts).ArrayNum = 0;
  (param_1->PathParts).ArrayMax = 0;
  return this;
}

// FJsonPointer @ 141dc44f0

FJsonPointer * __thiscall
UE::Json::FJsonPointer::FJsonPointer(FJsonPointer *this,FJsonPointer *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->PathParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PathParts).ArrayMax;
  iVar2 = (param_1->PathParts).ArrayNum;
  pFVar3 = (param_1->PathParts).AllocatorInstance.Data;
  (this->PathParts).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<FString,FString,int>
            ((this->PathParts).AllocatorInstance.Data,(FString *)pFVar3,iVar2);
  return this;
}

// FJsonPointer @ 141dc4580

/* WARNING: Enum "Type": Some values do not have unique names */

FJsonPointer * __thiscall
UE::Json::FJsonPointer::FJsonPointer(FJsonPointer *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FString *pFVar8;
  FJsonPointer *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong uVar15;
  
  local_38 = param_1->DataPtr;
  uStack_30 = *(undefined8 *)&param_1->Size;
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar10 = param_1->DataPtr;
  uVar13 = 0;
  piVar1 = &(this->PathParts).ArrayMax;
  (this->PathParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathParts).ArrayNum = 0;
  *piVar1 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize(&local_48,pwVar10,(int)uVar2);
  if (&local_58 != pFVar8) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_58,&local_78,L"/",false);
  if (local_58.Data.ArrayNum < 2) {
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_78.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FJsonPointer *)(*pcVar3)();
      return pFVar9;
    }
    if (*(int *)(local_78.AllocatorInstance.Data + 8) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)local_78.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,L"#");
    if (iVar6 == 0) {
      if (local_78.ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FJsonPointer *)(*pcVar3)();
          return pFVar9;
        }
      }
      FVar4.Data = local_78.AllocatorInstance.Data;
      iVar6 = local_78.ArrayNum;
      if (*(void **)local_78.AllocatorInstance.Data != (void *)0x0) {
        FMemory::Free(*(void **)local_78.AllocatorInstance.Data);
        iVar6 = local_78.ArrayNum;
      }
      if (iVar6 + -1 != 0) {
        memmove(FVar4.Data,FVar4.Data + 0x10,(longlong)(iVar6 + -1) << 4);
        iVar6 = local_78.ArrayNum;
      }
      local_78.ArrayNum = iVar6 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&local_78.AllocatorInstance,iVar6 + -1,&local_78.ArrayMax);
    }
    uVar15 = uVar13;
    if (0 < local_78.ArrayNum) {
      do {
        uVar14 = (uint)uVar15;
        uVar7 = 0;
        if ((int)uVar14 < local_78.ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FJsonPointer *)(*pcVar3)();
          return pFVar9;
        }
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = *(int *)(local_78.AllocatorInstance.Data + uVar13 + 8);
        lVar11 = (longlong)local_68.Data.ArrayNum;
        _Src = *(void **)(local_78.AllocatorInstance.Data + uVar13);
        if (local_68.Data.ArrayNum == 0) {
          local_68.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                     local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
          memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
        }
        pFVar12 = (this->PathParts).AllocatorInstance.Data;
        if (local_68.Data.ArrayNum < 2) {
          DestructItems<FString,int>((FString *)pFVar12,(this->PathParts).ArrayNum);
          (this->PathParts).ArrayNum = 0;
          if (*piVar1 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
          }
          if (2 < (byte)LogJson._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          break;
        }
        if (((pFVar12 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FJsonPointer *)(*pcVar3)();
          return pFVar9;
        }
        iVar6 = (this->PathParts).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        FVar4.Data = local_68.Data.AllocatorInstance.Data;
        pFVar12 = (this->PathParts).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        (this->PathParts).ArrayNum = iVar6 + 1;
        *(undefined8 *)&pFVar12->field_0x0 = 0;
        lVar11 = (longlong)local_68.Data.ArrayNum;
        *(int *)&pFVar12[8].field_0x0 = local_68.Data.ArrayNum;
        if (local_68.Data.ArrayNum == 0) {
          *(int *)(pFVar12 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,
                     local_68.Data.ArrayNum,(int *)(pFVar12 + 0xc));
          memcpy(*(void **)&pFVar12->field_0x0,FVar4.Data,lVar11 * 2);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        uVar13 = uVar13 + 0x10;
        uVar15 = (ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < local_78.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

// Append @ 141dcd6b0

/* WARNING: Removing unreachable block (ram,0x000141dcd7f9) */

void __thiscall UE::Json::FJsonPointer::Append(FJsonPointer *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FString local_38;
  FString local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_38 != pFVar5) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar6 = (this->PathParts).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)(this->PathParts).ArrayMax * 0x10))
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
  iVar4 = (this->PathParts).ArrayNum;
  piVar1 = &(this->PathParts).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->PathParts).ArrayNum = iVar4 + 1;
  pFVar6 = (this->PathParts).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// EscapePart @ 141dd4240

FString * __cdecl
UE::Json::FJsonPointer::EscapePart(FString *__return_storage_ptr__,FString *param_1)

{
  FString *this;
  FString local_18;
  
  this = ::FString::Replace(param_1,&local_18,L"~",L"~0",IgnoreCase);
  ::FString::Replace(this,__return_storage_ptr__,L"/",L"~1",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSubPath @ 141dd7040

FJsonPointer * __thiscall
UE::Json::FJsonPointer::GetSubPath
          (FJsonPointer *this,FJsonPointer *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FJsonPointer *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar11 = (FScriptContainerElement *)0x0;
  if ((this->PathParts).ArrayNum <= param_1) {
    (__return_storage_ptr__->PathParts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    piVar1 = &(__return_storage_ptr__->PathParts).ArrayMax;
    iVar2 = (this->PathParts).ArrayNum;
    pFVar11 = (this->PathParts).AllocatorInstance.Data;
    (__return_storage_ptr__->PathParts).ArrayNum = iVar2;
    if (iVar2 != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
      ConstructItems<FString,FString,int>
                ((__return_storage_ptr__->PathParts).AllocatorInstance.Data,(FString *)pFVar11,iVar2
                );
      return __return_storage_ptr__;
    }
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  FVar7.Data = pFVar11;
  uVar5 = 0;
  uVar9 = 0;
  if (0 < param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&local_38,0,(int *)((longlong)&local_30 + 4));
    pFVar10 = pFVar11;
    do {
      uVar12 = (uint)pFVar10;
      uVar5 = 0;
      if ((int)uVar12 < (this->PathParts).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FJsonPointer *)(*pcVar3)();
        return pFVar6;
      }
      pFVar10 = pFVar11 + (longlong)(this->PathParts).AllocatorInstance.Data;
      if (((local_38.Data <= pFVar10) &&
          (pFVar10 < local_38.Data + (longlong)(int)local_30._4_4_ * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FJsonPointer *)(*pcVar3)();
        return pFVar6;
      }
      if ((uint)local_30 == local_30._4_4_) {
        local_30._0_4_ =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_38,(int *)((longlong)&local_30 + 4));
      }
      lVar8 = (longlong)(int)(uint)local_30;
      local_30._0_4_ = (uint)local_30 + 1;
      ::FString::FString((FString *)(local_38.Data + lVar8 * 0x10),(FString *)pFVar10);
      pFVar10 = (FScriptContainerElement *)(ulonglong)(uVar12 + 1);
      pFVar11 = pFVar11 + 0x10;
      FVar7.Data = local_38.Data;
      uVar5 = (uint)local_30;
      uVar9 = local_30._4_4_;
    } while ((int)(uVar12 + 1) < param_1);
  }
  (__return_storage_ptr__->PathParts).AllocatorInstance.Data = FVar7.Data;
  (__return_storage_ptr__->PathParts).ArrayNum = uVar5;
  (__return_storage_ptr__->PathParts).ArrayMax = uVar9;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// ParsePath @ 141dda7b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::Json::FJsonPointer::ParsePath(FJsonPointer *this,FString *param_1)

{
  int *piVar1;
  int *piVar2;
  void *_Src;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  ulonglong uVar14;
  
  uVar12 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_48,L"/",false);
  if ((param_1->Data).ArrayNum < 2) {
    bVar5 = false;
    iVar7 = local_48.ArrayNum;
  }
  else {
    if ((local_48.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (*(int *)(local_48.AllocatorInstance.Data + 8) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)local_48.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,L"#");
    if (iVar7 == 0) {
      if (local_48.ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      FVar4.Data = local_48.AllocatorInstance.Data;
      iVar7 = local_48.ArrayNum;
      if (*(void **)local_48.AllocatorInstance.Data != (void *)0x0) {
        FMemory::Free(*(void **)local_48.AllocatorInstance.Data);
        iVar7 = local_48.ArrayNum;
      }
      if (iVar7 + -1 != 0) {
        memmove(FVar4.Data,FVar4.Data + 0x10,(longlong)(iVar7 + -1) << 4);
        iVar7 = local_48.ArrayNum;
      }
      local_48.ArrayNum = iVar7 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&local_48.AllocatorInstance,iVar7 + -1,&local_48.ArrayMax);
    }
    uVar14 = uVar12;
    if (0 < local_48.ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar8 = 0;
        if ((int)uVar13 < local_48.ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = *(int *)(local_48.AllocatorInstance.Data + uVar12 + 8);
        lVar10 = (longlong)local_38.Data.ArrayNum;
        _Src = *(void **)(local_48.AllocatorInstance.Data + uVar12);
        if (local_38.Data.ArrayNum == 0) {
          local_38.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                     local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
          memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
        }
        piVar1 = &(this->PathParts).ArrayNum;
        pFVar11 = (this->PathParts).AllocatorInstance.Data;
        piVar2 = &(this->PathParts).ArrayMax;
        if (local_38.Data.ArrayNum < 2) {
          DestructItems<FString,int>((FString *)pFVar11,*piVar1);
          *piVar1 = 0;
          if (*piVar2 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)this,0,piVar2);
          }
          if (2 < (byte)LogJson._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
          iVar7 = local_48.ArrayNum;
          goto LAB_141ddab23;
        }
        if (((pFVar11 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar11 + (longlong)(this->PathParts).ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = (this->PathParts).ArrayNum;
        piVar1 = &(this->PathParts).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        FVar4.Data = local_38.Data.AllocatorInstance.Data;
        pFVar11 = (this->PathParts).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        (this->PathParts).ArrayNum = iVar7 + 1;
        *(undefined8 *)&pFVar11->field_0x0 = 0;
        lVar10 = (longlong)local_38.Data.ArrayNum;
        *(int *)&pFVar11[8].field_0x0 = local_38.Data.ArrayNum;
        if (local_38.Data.ArrayNum == 0) {
          *(int *)(pFVar11 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,
                     local_38.Data.ArrayNum,(int *)(pFVar11 + 0xc));
          memcpy(*(void **)&pFVar11->field_0x0,FVar4.Data,lVar10 * 2);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        uVar12 = uVar12 + 0x10;
        uVar14 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < local_48.ArrayNum);
    }
    bVar5 = true;
    iVar7 = local_48.ArrayNum;
  }
LAB_141ddab23:
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,iVar7);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar5;
}

// SetArrayIndex @ 141dea6e0

void __thiscall UE::Json::FJsonPointer::SetArrayIndex(FJsonPointer *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FString local_18;
  
  if ((this->PathParts).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PathParts.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\JsonUtils\\JsonPointer.cpp"
                       ,0xa6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FString::PrintfImpl(&local_18,L"%d");
  iVar1 = (this->PathParts).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = (this->PathParts).AllocatorInstance.Data +
           (longlong)(this->PathParts).ArrayNum * 0x10 + -0x10;
  if (pFVar6 != (FScriptContainerElement *)&local_18) {
    if (*(void **)&pFVar6->field_0x0 != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar6->field_0x0);
    }
    *(FScriptContainerElement **)&pFVar6->field_0x0 = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_18.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ToString @ 141df9570

FString * __thiscall
UE::Json::FJsonPointer::ToString(FJsonPointer *this,FString *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = (this->PathParts).ArrayNum;
  pFVar5 = (this->PathParts).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar2 = true;
  while( true ) {
    if ((this->PathParts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      sVar3 = wcslen(L"/");
      ::FString::AppendChars(&local_58,L"/",(int)sVar3);
    }
    iVar7 = *(int *)(pFVar5 + 8) + -1;
    if (*(int *)(pFVar5 + 8) == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_58,*(wchar_t **)pFVar5,iVar7);
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar4 = ::FString::FString(&local_38,L"#");
  ::FString::ConcatFC(&local_48,pFVar4,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_48,&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryGet @ 141df96a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Json::FJsonPointer::TryGet
          (FJsonPointer *this,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FJsonValue,1> *param_2)

{
  FScriptContainerElement *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  wchar_t *_Str;
  
  if (0 < (this->PathParts).ArrayNum) {
    this_00 = (this->PathParts).AllocatorInstance.Data;
    bVar2 = ::FString::IsNumeric((FString *)this_00);
    if (bVar2) {
      if (*(int *)&this_00[8].field_0x0 == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00->field_0x0)->
               AllocatorInstance).Data;
      }
      iVar4 = _wtoi(_Str);
      if ((-1 < iVar4) && (iVar4 < param_1->ArrayNum)) {
        if ((iVar4 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        bVar2 = TryGet(this,(TSharedPtr<FJsonValue,1> *)
                            ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),param_2);
        return bVar2;
      }
      if (2 < (byte)LogJson._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
      }
    }
    else if (2 < (byte)LogJson._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
  }
  return false;
}

// TryGet @ 141df97e0

bool __thiscall
UE::Json::FJsonPointer::TryGet
          (FJsonPointer *this,TSharedPtr<FJsonObject,1> *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  bool bVar1;
  TSharedRef<FJsonValueObject,1> *pTVar2;
  TSharedPtr<FJsonValue,1> local_28;
  TSharedRef<FJsonValueObject,1> local_18;
  
  pTVar2 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>(&local_18,param_1);
  local_28.Object = (FJsonValue *)pTVar2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = TryGet(this,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// TryGet @ 141df9850

bool __thiscall
UE::Json::FJsonPointer::TryGet
          (FJsonPointer *this,TSharedPtr<FJsonValue,1> *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  FJsonValue *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (this->PathParts).ArrayNum;
  if (iVar8 < 1) {
LAB_141df9919:
    bVar5 = false;
  }
  else {
    uVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      param_1 = FindPartInJsonValue(param_1,(FString *)
                                            ((this->PathParts).AllocatorInstance.Data +
                                            (longlong)(int)uVar9 * 0x10));
      if (param_1 == (TSharedPtr<FJsonValue,1> *)0x0) goto LAB_141df9919;
      iVar8 = (this->PathParts).ArrayNum;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar8);
    pFVar1 = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    param_2->Object = pFVar1;
    (param_2->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    bVar5 = true;
  }
  return bVar5;
}

// UnescapePart @ 141dfce90

FString * __cdecl
UE::Json::FJsonPointer::UnescapePart(FString *__return_storage_ptr__,FString *param_1)

{
  FString *this;
  FString local_18;
  
  this = ::FString::Replace(param_1,&local_18,L"~1",L"/",IgnoreCase);
  ::FString::Replace(this,__return_storage_ptr__,L"~0",L"~",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

