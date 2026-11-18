// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FIoDirectoryIndexWriter @ 141734b20

FIoDirectoryIndexWriter * __thiscall
FIoDirectoryIndexWriter::FIoDirectoryIndexWriter(FIoDirectoryIndexWriter *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &(this->DirectoryEntries).ArrayMax;
  (this->MountPoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountPoint).Data.ArrayNum = 0;
  (this->MountPoint).Data.ArrayMax = 0;
  (this->DirectoryEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectoryEntries).ArrayNum = 0;
  *piVar1 = 0;
  (this->FileEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileEntries).ArrayNum = 0;
  (this->FileEntries).ArrayMax = 0;
  *(undefined8 *)&this->StringToIndex = 0;
  *(undefined8 *)&(this->StringToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->StringToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->StringToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->StringToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->StringToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->StringToIndex).field_0x48 = 0;
  (this->Strings).Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->Strings).Chunks.Array.ArrayMax = 0;
  (this->Strings).Chunks.Array.ArrayNum = 0;
  iVar2 = (this->DirectoryEntries).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->DirectoryEntries).AllocatorInstance,piVar1);
  }
  (this->DirectoryEntries).ArrayNum = iVar2 + 1;
  DefaultConstructItems<FIoDirectoryIndexEntry,int>
            ((this->DirectoryEntries).AllocatorInstance.Data + (longlong)iVar2 * 0x10,1);
  return this;
}

// AddFile @ 141742520

uint __thiscall
FIoDirectoryIndexWriter::AddFile
          (FIoDirectoryIndexWriter *this,TStringView<wchar_t> *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (this->FileEntries).ArrayNum;
  piVar1 = &(this->FileEntries).ArrayMax;
  uVar6 = uVar7;
  if (uVar7 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->FileEntries).AllocatorInstance,piVar1);
    (this->FileEntries).ArrayNum = uVar6;
  }
  (this->FileEntries).ArrayNum = uVar6 + 1;
  pFVar2 = (this->FileEntries).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc;
  DefaultConstructItems<FIoFileIndexEntry,int>(pFVar2,1);
  uVar6 = GetNameIndex(this,param_1);
  *(uint *)pFVar2 = uVar6;
  uVar6 = 0;
  if ((int)param_2 < (this->DirectoryEntries).ArrayNum) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
  }
  pFVar3 = (this->DirectoryEntries).AllocatorInstance.Data;
  *(uint *)(pFVar2 + 4) = *(uint *)(pFVar3 + (longlong)(int)param_2 * 0x10 + 0xc);
  *(uint *)(pFVar3 + (longlong)(int)param_2 * 0x10 + 0xc) = uVar7;
  return uVar7;
}

// AddFile @ 141742610

uint __thiscall
FIoDirectoryIndexWriter::AddFile(FIoDirectoryIndexWriter *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  wchar_t *local_c8;
  ulonglong uStack_c0;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38 [2];
  
  iVar11 = param_1->Size;
  uVar14 = 0;
  iVar4 = (this->MountPoint).Data.ArrayNum;
  local_a8.DataPtr = (wchar_t *)0x0;
  uVar13 = 0;
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  uVar12 = 0;
  uVar10 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar10 = uVar12;
  }
  uVar17 = 0;
  if ((int)uVar10 < 0) {
    uVar17 = uVar10;
  }
  iVar4 = uVar10 - uVar17;
  if (iVar11 < (int)(uVar10 - uVar17)) {
    iVar4 = iVar11;
  }
  uVar10 = iVar11 - iVar4;
  if ((int)(uVar17 + 0x7fffffff) < iVar11 - iVar4) {
    uVar10 = uVar17 + 0x7fffffff;
  }
  uVar17 = 0;
  if (0 < (int)uVar10) {
    uVar17 = uVar10;
  }
  pwVar2 = param_1->DataPtr + iVar4;
  uStack_6c = uStack_c0._4_4_;
  uVar10 = 0;
  uStack_70 = uVar17;
  local_c8 = pwVar2;
  local_78 = pwVar2;
  if (uVar17 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDirectoryIndex.cpp"
                       ,0x58,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return uVar10;
    }
  }
  else {
    if (uVar17 == 1) {
      if (*pwVar2 == L'/') {
        uStack_80 = 0;
        local_88 = 0;
        local_a8.DataPtr = (wchar_t *)0x0;
        local_a8._8_8_ = 0;
        goto LAB_1417427fd;
      }
    }
    else {
      uVar16 = uVar17 - 1;
      if (((int)uVar16 < 0) || ((int)uVar17 <= (int)uVar16)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return uVar10;
        }
      }
      if (pwVar2[(longlong)(int)uVar17 + -1] == L'/') {
        uVar15 = uVar17;
        if ((int)uVar16 < (int)uVar17) {
          uVar15 = uVar16;
        }
        uVar17 = uVar12;
        if (0 < (int)uVar15) {
          uVar17 = uVar15;
        }
        uStack_6c = uStack_c0._4_4_;
        uStack_70 = uVar17;
        local_78 = pwVar2;
      }
      local_58.Size = uVar17;
      local_58._12_4_ = uStack_c0._4_4_;
      local_58.DataPtr = pwVar2;
      iVar11 = UE::String::FindLastChar(&local_58,L'/',CaseSensitive);
      if (iVar11 != -1) {
        uVar17 = iVar11 + 1;
        uVar15 = uVar17;
        uVar16 = 0x7fffffff;
        if ((int)uVar17 < 0) {
          uVar15 = uVar12;
          uVar16 = iVar11 + 0x80000000;
        }
        if ((int)uStack_70 < (int)uVar15) {
          uVar15 = uStack_70;
        }
        uVar7 = uStack_70 - uVar15;
        if ((int)uVar16 < (int)(uStack_70 - uVar15)) {
          uVar7 = uVar16;
        }
        local_a8.DataPtr = local_78 + (int)uVar15;
        if (0 < (int)uVar7) {
          uVar12 = uVar7;
        }
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar12);
        uVar12 = uStack_70;
        if ((int)uVar17 < (int)uStack_70) {
          uVar12 = uVar17;
        }
        local_a8._8_8_ = uStack_c0;
        uVar17 = uVar10;
        local_c8 = local_78;
        if (0 < (int)uVar12) {
          uVar17 = uVar12;
        }
        goto LAB_1417427fd;
      }
    }
    local_a8._12_4_ = uStack_c0._4_4_;
    local_a8.Size = uVar17;
    local_c8 = L"/";
    uVar17 = 1;
    local_a8.DataPtr = pwVar2;
  }
LAB_1417427fd:
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar17);
  local_48.Size = uVar17;
  local_48._12_4_ = uStack_c0._4_4_;
  local_48.DataPtr = local_c8;
  uVar12 = UE::String::FindFirstChar(&local_48,L'/',CaseSensitive);
  if (uVar12 == 0xffffffff) {
    local_b8.Size = 0;
    local_b8._12_4_ = 0;
    local_b8.DataPtr = (wchar_t *)0x0;
  }
  else {
    if ((int)uVar12 < (int)uVar17) {
      uVar17 = uVar12;
    }
    uVar12 = uVar14;
    if (0 < (int)uVar17) {
      uVar12 = uVar17;
    }
    local_b8.Size = uVar12;
    uVar13 = 0;
    local_b8.DataPtr = local_c8;
    uVar8 = local_b8._8_8_;
    if (uVar12 != 0) {
      while( true ) {
        local_b8._8_8_ = uVar8;
        uVar13 = CreateDirectory(this,&local_b8,uVar14);
        uVar14 = ((uint)uStack_c0 - uVar12) - 1;
        uVar12 = (uint)uStack_c0;
        if ((int)uVar14 < (int)(uint)uStack_c0) {
          uVar12 = uVar14;
        }
        uVar14 = uVar10;
        if (0 < (int)uVar12) {
          uVar14 = uVar12;
        }
        local_c8 = local_c8 + ((longlong)(int)(uint)uStack_c0 - (longlong)(int)uVar14);
        uStack_c0._4_4_ = uStack_5c;
        uStack_c0._0_4_ = uVar14;
        local_68 = local_c8;
        uStack_60 = uVar14;
        local_38[0].DataPtr = local_c8;
        local_38[0]._8_8_ = uStack_c0;
        uVar12 = UE::String::FindFirstChar(local_38,L'/',CaseSensitive);
        if (uVar12 == 0xffffffff) {
          uStack_90._0_4_ = 0;
          uStack_90._4_4_ = 0;
          local_98 = (wchar_t *)0x0;
          uVar12 = uVar10;
        }
        else {
          if ((int)uVar12 < (int)uVar14) {
            uVar14 = uVar12;
          }
          uVar12 = 0;
          if (0 < (int)uVar14) {
            uVar12 = uVar14;
          }
          uStack_90._0_4_ = uVar12;
          local_98 = local_c8;
        }
        uVar8._0_4_ = (int)uStack_90;
        uVar8._4_4_ = uStack_90._4_4_;
        local_b8.DataPtr = local_98;
        local_b8.Size = (int)uStack_90;
        local_b8._12_4_ = uStack_90._4_4_;
        if (uVar12 == 0) break;
        local_b8.Size = (int)uStack_90;
        uVar12 = local_b8.Size;
        uVar14 = uVar13;
      }
      if (uVar13 == 0xffffffff) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Directory != ~uint32(0)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDirectoryIndex.cpp"
                           ,0xcb,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return uVar10;
        }
      }
    }
  }
  uVar12 = (this->FileEntries).ArrayNum;
  piVar1 = &(this->FileEntries).ArrayMax;
  uVar14 = uVar12;
  if (uVar12 == *piVar1) {
    uVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&(this->FileEntries).AllocatorInstance,piVar1);
    (this->FileEntries).ArrayNum = uVar14;
  }
  (this->FileEntries).ArrayNum = uVar14 + 1;
  pFVar3 = (this->FileEntries).AllocatorInstance.Data + (longlong)(int)uVar14 * 0xc;
  DefaultConstructItems<FIoFileIndexEntry,int>(pFVar3,1);
  uVar14 = GetNameIndex(this,&local_a8);
  *(uint *)pFVar3 = uVar14;
  if ((int)uVar13 < (this->DirectoryEntries).ArrayNum) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return uVar10;
    }
  }
  pFVar5 = (this->DirectoryEntries).AllocatorInstance.Data;
  *(uint *)(pFVar3 + 4) = *(uint *)(pFVar5 + (longlong)(int)uVar13 * 0x10 + 0xc);
  *(uint *)(pFVar5 + (longlong)(int)uVar13 * 0x10 + 0xc) = uVar12;
  return uVar12;
}

// CreateDirectory @ 14174ec40

uint __thiscall
FIoDirectoryIndexWriter::CreateDirectory
          (FIoDirectoryIndexWriter *this,TStringView<wchar_t> *param_1,uint param_2)

{
  TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(int)param_2;
  uVar5 = GetNameIndex(this,param_1);
  pTVar1 = &this->DirectoryEntries;
  uVar6 = ~param_2 >> 0x1f;
  uVar7 = 0;
  if ((int)param_2 < (this->DirectoryEntries).ArrayNum) {
    uVar7 = uVar6;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar7 = *(uint *)((pTVar1->AllocatorInstance).Data + lVar10 * 0x10 + 4);
  do {
    if (uVar7 == 0xffffffff) {
LAB_14174ed41:
      uVar7 = (this->DirectoryEntries).ArrayNum;
      piVar2 = &(this->DirectoryEntries).ArrayMax;
      uVar8 = uVar7;
      if (uVar7 == *piVar2) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
      (this->DirectoryEntries).ArrayNum = uVar8 + 1;
      DefaultConstructItems<FIoDirectoryIndexEntry,int>(pFVar9,1);
      *(uint *)pFVar9 = uVar5;
      uVar5 = 0;
      if ((int)param_2 < (this->DirectoryEntries).ArrayNum) {
        uVar5 = uVar6;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      *(uint *)(pFVar9 + 8) = *(uint *)((pTVar1->AllocatorInstance).Data + lVar10 * 0x10 + 4);
      uVar5 = 0;
      if ((int)param_2 < (this->DirectoryEntries).ArrayNum) {
        uVar5 = uVar6;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      *(uint *)((this->DirectoryEntries).AllocatorInstance.Data + lVar10 * 0x10 + 4) = uVar7;
      return uVar7;
    }
    uVar8 = 0;
    if ((int)uVar7 < (this->DirectoryEntries).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    if (*(uint *)(pFVar9 + (longlong)(int)uVar7 * 0x10) == uVar5) {
      if (uVar7 != 0xffffffff) {
        return uVar7;
      }
      goto LAB_14174ed41;
    }
    uVar7 = *(uint *)(pFVar9 + (longlong)(int)uVar7 * 0x10 + 8);
  } while( true );
}

// Flush @ 141758b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIoDirectoryIndexWriter::Flush
          (FIoDirectoryIndexWriter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          FAESKey *param_2)

{
  TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  TArray<FIoFileIndexEntry,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_158;
  undefined8 local_150;
  FAESKey *local_148;
  undefined1 local_138 [48];
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FArchiveState local_f8;
  undefined8 local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar16 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  uVar7 = (this->Strings).NumElements;
  local_150 = 0;
  local_148 = param_2;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  uVar9 = uVar16;
  if (0 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_158,0,(int *)((longlong)&local_150 + 4));
    uVar9 = local_150 & 0xffffffff;
  }
  uVar7 = (this->Strings).NumElements;
  if (uVar7 != 0) {
    uVar19 = (ulonglong)uVar7;
    pFVar11 = (this->Strings).Chunks.Array.AllocatorInstance.Data;
    while( true ) {
      puVar15 = (undefined8 *)(uVar16 * 0x10 + *(longlong *)pFVar11);
      iVar6 = (int)uVar9;
      if (iVar6 == local_150._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_158,(int *)((longlong)&local_150 + 4));
      }
      local_150 = CONCAT44(local_150._4_4_,iVar6 + 1U);
      pFVar13 = local_158.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar13 = 0;
      *(undefined8 *)pFVar13 = *puVar15;
      *puVar15 = 0;
      *(undefined4 *)(pFVar13 + 8) = *(undefined4 *)(puVar15 + 1);
      *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((longlong)puVar15 + 0xc);
      uVar7 = (int)uVar16 + 1;
      puVar15[1] = 0;
      uVar16 = 0;
      pFVar13 = pFVar11 + 8;
      if (uVar7 < 0x400) {
        uVar16 = (ulonglong)uVar7;
        pFVar13 = pFVar11;
      }
      uVar19 = uVar19 - 1;
      param_2 = local_148;
      if (uVar19 == 0) break;
      uVar9 = (ulonglong)(iVar6 + 1U);
      pFVar11 = pFVar13;
    }
  }
  lVar10 = 0;
  TIndirectArray<TChunkedArray<FString,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->Strings).Chunks,0);
  (this->Strings).NumElements = 0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_4_ = 0;
  local_138._12_4_ = 0;
  local_138._16_8_ = (FScriptContainerElement *)0x0;
  local_138._24_4_ = 0;
  local_138._28_4_ = 0;
  local_138._32_8_ = (FScriptContainerElement *)0x0;
  local_138._40_4_ = 0;
  local_138._44_4_ = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  if ((FIoDirectoryIndexWriter *)local_138 != this) {
    local_138._0_8_ = (this->MountPoint).Data.AllocatorInstance.Data;
    (this->MountPoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138._8_4_ = (this->MountPoint).Data.ArrayNum;
    local_138._12_4_ = (this->MountPoint).Data.ArrayMax;
    (this->MountPoint).Data.ArrayNum = 0;
    (this->MountPoint).Data.ArrayMax = 0;
  }
  pTVar1 = &this->DirectoryEntries;
  if ((TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_> *)(local_138 + 0x10) != pTVar1) {
    local_138._16_8_ = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_138._24_4_ = (this->DirectoryEntries).ArrayNum;
    local_138._28_4_ = (this->DirectoryEntries).ArrayMax;
    (this->DirectoryEntries).ArrayNum = 0;
    (this->DirectoryEntries).ArrayMax = 0;
  }
  pTVar17 = &this->FileEntries;
  if ((TArray<FIoFileIndexEntry,TSizedDefaultAllocator<32>_> *)(local_138 + 0x20) != pTVar17) {
    local_138._32_8_ = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_138._40_4_ = (this->FileEntries).ArrayNum;
    local_138._44_4_ = (this->FileEntries).ArrayMax;
    (this->FileEntries).ArrayNum = 0;
    (this->FileEntries).ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  local_108.AllocatorInstance.Data = local_158.Data;
  local_108._8_8_ = local_150;
  local_150 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_148 = (FAESKey *)0x0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8._72_8_ = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_58 = local_148;
  local_60 = param_1;
  FArchiveState::SetIsSaving(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_f8,(FString *)local_138);
  TArrayPrivateFriend::Serialize<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_f8,
             (TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_> *)(local_138 + 0x10));
  TArrayPrivateFriend::Serialize<FIoFileIndexEntry,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_f8,
             (TArray<FIoFileIndexEntry,TSizedDefaultAllocator<32>_> *)(local_138 + 0x20));
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_f8,&local_108);
  while (*(int *)(param_2->Key + lVar10 * 4) == 0) {
    lVar10 = lVar10 + 1;
    if (7 < lVar10) goto LAB_141758f49;
  }
  uVar7 = param_1->ArrayNum;
  uVar16 = (ulonglong)(int)uVar7;
  piVar2 = &param_1->ArrayNum;
  uVar18 = uVar7;
  if (((uVar16 & 0xf) != 0) && ((-uVar7 & 0xf) != 0)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,-uVar7 & 0xf,&param_1->AllocatorInstance,piVar2,&param_1->ArrayMax);
    uVar18 = *piVar2;
    uVar14 = uVar7;
    if ((int)uVar7 < (int)uVar18) {
      do {
        uVar12 = (uVar14 - uVar7) % uVar7;
        uVar8 = 0;
        if ((int)uVar12 < (int)uVar18) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (param_1->AllocatorInstance).Data[(int)uVar12];
        uVar18 = 0;
        if ((int)uVar14 < *piVar2) {
          uVar18 = ~uVar14 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar14 = uVar14 + 1;
        (param_1->AllocatorInstance).Data[uVar16] = FVar3;
        uVar16 = uVar16 + 1;
        uVar18 = *piVar2;
      } while ((int)uVar14 < (int)uVar18);
    }
  }
  FAES::EncryptData((uchar *)(param_1->AllocatorInstance).Data,(longlong)(int)uVar18,param_2);
LAB_141758f49:
  FArchive::~FArchive((FArchive *)&local_f8);
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_138._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._32_8_);
  }
  if ((FScriptContainerElement *)local_138._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._16_8_);
  }
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  DestructItems<FString,int>((FString *)local_158.Data,(int)local_150);
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return;
}

// GetDirectory @ 14175c430

uint __thiscall
FIoDirectoryIndexWriter::GetDirectory(FIoDirectoryIndexWriter *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if ((int)param_2 < (this->DirectoryEntries).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = *(uint *)((this->DirectoryEntries).AllocatorInstance.Data +
                   (longlong)(int)param_2 * 0x10 + 4);
  while( true ) {
    if (uVar4 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar5 = 0;
    if ((int)uVar4 < (this->DirectoryEntries).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pFVar1 = (this->DirectoryEntries).AllocatorInstance.Data;
    if (*(uint *)(pFVar1 + (longlong)(int)uVar4 * 0x10) == param_1) {
      return uVar4;
    }
    uVar4 = *(uint *)(pFVar1 + (longlong)(int)uVar4 * 0x10 + 8);
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

// GetNameIndex @ 14175f8b0

uint __thiscall
FIoDirectoryIndexWriter::GetNameIndex(FIoDirectoryIndexWriter *this,TStringView<wchar_t> *param_1)

{
  TMap<TStringView<wchar_t>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned_int,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  TChunkedArray<FString,16384,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint local_res8 [4];
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  uint local_98;
  FScriptContainerElement **local_90;
  uint *local_88;
  FString local_80;
  FString local_70;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  local_58 = param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
  this_00 = &this->StringToIndex;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_58);
  iVar4 = TSet<TTuple<TStringView<wchar_t>,unsigned_int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TStringView<wchar_t>_>
                    ((TSet<TTuple<TStringView<wchar_t>,unsigned_int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned_int,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,param_1);
  pFVar14 = (FScriptContainerElement *)0x0;
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0x20 + *(longlong *)&this_00->field_0x0;
    pFVar8 = (FScriptContainerElement *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      pFVar8 = pFVar14;
    }
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      return *(uint *)pFVar8;
    }
  }
  pTVar13 = &this->Strings;
  uVar3 = (this->Strings).NumElements;
  (this->Strings).NumElements = uVar3 + 1;
  iVar4 = (this->Strings).Chunks.Array.ArrayNum;
  iVar5 = (int)(uVar3 + 0x400 + ((int)(uVar3 + 0x400) >> 0x1f & 0x3ffU)) >> 10;
  if (iVar4 < iVar5) {
    uVar12 = (ulonglong)(uint)(iVar5 - iVar4);
    do {
      pFVar8 = ::operator_new(0x4000);
      local_a8 = pFVar14;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        lVar7 = 0x400;
        pFVar10 = pFVar8 + 0xc;
        do {
          *(undefined8 *)(pFVar10 + -0xc) = 0;
          *(undefined8 *)(pFVar10 + -4) = 0;
          pFVar10 = pFVar10 + 0x10;
          lVar7 = lVar7 + -1;
          local_a8 = pFVar8;
        } while (lVar7 != 0);
      }
      pFVar8 = (pTVar13->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar8 + (longlong)(this->Strings).Chunks.Array.ArrayMax * 8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      iVar4 = (this->Strings).Chunks.Array.ArrayNum;
      if (iVar4 == (this->Strings).Chunks.Array.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pTVar13,&(this->Strings).Chunks.Array.ArrayMax
                          );
      }
      (this->Strings).Chunks.Array.ArrayNum = iVar4 + 1;
      *(FScriptContainerElement **)
       ((pTVar13->Chunks).Array.AllocatorInstance.Data + (longlong)iVar4 * 8) = local_a8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_48 = param_1->DataPtr;
  uStack_40 = *(undefined8 *)&param_1->Size;
  iVar4 = 0;
  local_res8[0] = uVar3;
  pFVar9 = ::FString::ConstructFromPtrSize
                     (&local_80,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  pFVar8 = pFVar14;
  iVar5 = iVar4;
  if (&local_70 != pFVar9) {
    pFVar8 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar9->Data).ArrayNum;
    iVar5 = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  uVar3 = (int)(local_res8[0] + ((int)local_res8[0] >> 0x1f & 0x3ffU)) >> 10;
  uVar11 = local_res8[0] & 0x800003ff;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffc00) + 1;
  }
  uVar6 = 0;
  if ((int)uVar3 < (this->Strings).Chunks.Array.ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  pFVar9 = (FString *)
           (*(longlong *)((pTVar13->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar3 * 8)
           + (ulonglong)uVar11 * 0x10);
  if (pFVar9 != &local_70) {
    pFVar10 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pFVar9->Data).AllocatorInstance.Data = pFVar8;
    (pFVar9->Data).ArrayNum = iVar4;
    (pFVar9->Data).ArrayMax = iVar5;
    pFVar8 = pFVar14;
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  local_a0 = (pFVar9->Data).AllocatorInstance.Data;
  iVar4 = (pFVar9->Data).ArrayNum;
  local_98 = iVar4 - 1;
  if (iVar4 == 0) {
    local_98 = 0;
  }
  local_90 = &local_a0;
  local_88 = local_res8;
  TSet<TTuple<TStringView<wchar_t>,unsigned_int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TStringView<wchar_t>_&&,unsigned_int_const_&>_>
            ((TSet<TTuple<TStringView<wchar_t>,unsigned_int>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned_int,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<TStringView<wchar_t>_&&,unsigned_int_const_&> *)(local_res8 + 2),
             (bool *)&local_90);
  return local_res8[0];
}

// SetFileUserData @ 14177d0e0

void __thiscall
FIoDirectoryIndexWriter::SetFileUserData(FIoDirectoryIndexWriter *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFileEntryIndex != ~uint32(0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDirectoryIndex.cpp"
                       ,0xd2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->FileEntries).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)((this->FileEntries).AllocatorInstance.Data + (longlong)(int)param_1 * 0xc + 8) = param_2
  ;
  return;
}

// SetMountPoint @ 14177d2e0

void __thiscall
FIoDirectoryIndexWriter::SetMountPoint(FIoDirectoryIndexWriter *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != (FIoDirectoryIndexWriter *)param_1) {
    pFVar1 = (this->MountPoint).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->MountPoint).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MountPoint).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->MountPoint).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

