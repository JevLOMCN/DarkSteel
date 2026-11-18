// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Overlay
// Functions: 9

// FOverlaysImporter @ 148bbabf0

FOverlaysImporter * __thiscall FOverlaysImporter::FOverlaysImporter(FOverlaysImporter *this)

{
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->FileContents).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileContents).Data.ArrayNum = 0;
  (this->FileContents).Data.ArrayMax = 0;
  this->FileType = Unknown;
  return this;
}

// ~FOverlaysImporter @ 148bbae50

void __thiscall FOverlaysImporter::~FOverlaysImporter(FOverlaysImporter *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FileContents).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ImportBasic @ 148bbbad0

bool __thiscall
FOverlaysImporter::ImportBasic
          (FOverlaysImporter *this,TArray<FOverlayItem,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  DestructItems<FOverlayItem,int>
            ((FOverlayItem *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if ((this->FileType != Unknown) && (this->FileType == SubRipSubtitles)) {
    bVar1 = ParseSubRipSubtitles(this,param_1);
    return bVar1;
  }
  return false;
}

// OpenFile @ 148bbbb80

bool __thiscall FOverlaysImporter::OpenFile(FOverlaysImporter *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  FString local_38;
  FString local_28;
  
  ::FString::Empty(&this->Filename);
  ::FString::Empty(&this->FileContents);
  this->FileType = Unknown;
  bVar8 = false;
  ::FString::operator=(&this->Filename,param_1);
  pFVar2 = FPaths::GetExtension(&local_28,&this->Filename,false);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,L"srt");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (iVar1 == 0) {
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    FFileHelper::LoadFileToString(&this->FileContents,pwVar4,None,0);
    ::FString::TrimStartInline(&this->FileContents);
    pwVar4 = (wchar_t *)(this->FileContents).Data.AllocatorInstance.Data;
    iVar1 = (this->FileContents).Data.ArrayNum;
    for (pFVar6 = (FScriptContainerElement *)pwVar4;
        pFVar6 != (FScriptContainerElement *)((longlong)pwVar4 + (longlong)iVar1 * 2);
        pFVar6 = pFVar6 + 2) {
      if (*(short *)pFVar6 == 10) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pwVar4 >> 1);
        goto LAB_148bbbc5d;
      }
    }
    iVar5 = -1;
LAB_148bbbc5d:
    uVar3 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    if ((int)(uint)(iVar5 != -1) < (int)uVar3) {
      uVar3 = (uint)(iVar5 != -1);
    }
    uVar9 = 0;
    if (0 < (int)uVar3) {
      uVar9 = uVar3;
    }
    if (iVar1 == 0) {
      pwVar4 = L"";
    }
    ::FString::ConstructFromPtrSize(&local_28,pwVar4,uVar9);
    ::FString::TrimStartAndEnd(&local_28,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (iVar5 != -1) {
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"1");
      if (iVar1 == 0) {
        bVar8 = true;
        this->FileType = SubRipSubtitles;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar8 != false) {
      return bVar8;
    }
  }
  ::FString::Empty(&this->Filename);
  ::FString::Empty(&this->FileContents);
  this->FileType = Unknown;
  return false;
}

// ParseSubRipSubtitles @ 148bbbd40

bool __thiscall
FOverlaysImporter::ParseSubRipSubtitles
          (FOverlaysImporter *this,TArray<FOverlayItem,TSizedDefaultAllocator<32>_> *param_1)

{
  void *_Src;
  code *pcVar1;
  ForAnyElementType _Src_00;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FOverlaysImporter *local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FString local_98;
  FTimespan local_88;
  FTimespan FStack_80;
  FString local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FOverlaysImporter *local_58;
  FString *local_50;
  FOverlaysImporter *local_48;
  FString *local_40;
  
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  ::FString::ParseIntoArrayLines(&this->FileContents,&local_c8,false);
  uVar9 = 0;
  uVar8 = 0;
  uVar14 = uVar9;
  if (0 < local_c8.ArrayNum) {
    do {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_98,param_1->ArrayNum + 1);
      uVar7 = (uint)uVar9;
      uVar13 = 0;
      uVar8 = uVar13;
      if ((int)uVar7 < local_c8.ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      lVar10 = uVar14 * 0x10;
      ::FString::TrimStartAndEndInline((FString *)(local_c8.AllocatorInstance.Data + lVar10));
      uVar8 = uVar13;
      if ((int)uVar7 < local_c8.ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar8 = uVar7 + 1;
      lVar15 = (longlong)(int)uVar8;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = *(int *)(local_c8.AllocatorInstance.Data + lVar10 + 8);
      lVar12 = (longlong)local_a0;
      _Src = *(void **)(local_c8.AllocatorInstance.Data + lVar10);
      if (local_a0 == 0) {
        local_9c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
        memcpy(local_a8.Data,_Src,lVar12 * 2);
      }
      if (local_98.Data.ArrayNum != local_a0) {
        bVar2 = local_98.Data.ArrayNum + local_a0 == 1;
LAB_148bbbf0c:
        if (bVar2) goto LAB_148bbbf17;
        local_res18 = this;
        `FOverlaysImporter::ParseSubRipSubtitles'::__l7::<lambda_1>::operator()(&local_res18);
LAB_148bbc4cc:
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        break;
      }
      if (1 < local_98.Data.ArrayNum) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_98.Data.AllocatorInstance.Data,(wchar_t *)local_a8.Data)
        ;
        bVar2 = iVar4 == 0;
        goto LAB_148bbbf0c;
      }
LAB_148bbbf17:
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Ticks = 0;
      FStack_80.Ticks = 0;
      uVar11 = uVar13;
      if ((int)uVar8 < local_c8.ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      local_68 = 0;
      uStack_60 = 0;
      if ((uVar11 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar8 = uVar7 + 2;
      uVar9 = (ulonglong)uVar8;
      uVar14 = uVar14 + 2;
      ::FString::ParseIntoArray
                ((FString *)(local_c8.AllocatorInstance.Data + lVar15 * 0x10),&local_b8,L"-->",true)
      ;
      if (local_b8.ArrayNum != 2) {
        local_40 = &local_98;
        local_48 = this;
        `FOverlaysImporter::ParseSubRipSubtitles'::__l10::<lambda_2>::operator()(&local_48);
LAB_148bbc4a1:
        DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
        if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        goto LAB_148bbc4cc;
      }
      ::FString::TrimStartAndEndInline((FString *)local_b8.AllocatorInstance.Data);
      if ((local_b8.ArrayNum < 2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      ::FString::TrimStartAndEndInline((FString *)(local_b8.AllocatorInstance.Data + 0x10));
      if ((local_b8.ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = FTimespan::Parse((FString *)local_b8.AllocatorInstance.Data,&local_88);
      if (!bVar2) {
LAB_148bbc46d:
        local_50 = &local_98;
        local_58 = this;
        `FOverlaysImporter::ParseSubRipSubtitles'::__l13::<lambda_3>::operator()(&local_58);
        goto LAB_148bbc4a1;
      }
      if ((local_b8.ArrayNum < 2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = FTimespan::Parse((FString *)(local_b8.AllocatorInstance.Data + 0x10),&FStack_80);
      if (!bVar2) goto LAB_148bbc46d;
      if ((int)uVar8 < local_c8.ArrayNum) {
        lVar10 = uVar14 * 0x10;
        do {
          uVar7 = (uint)uVar9;
          uVar11 = ~uVar7 >> 0x1f;
          uVar8 = uVar13;
          if ((int)uVar7 < local_c8.ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          ::FString::TrimStartInline
                    ((FString *)(local_c8.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10));
          uVar8 = uVar13;
          if ((int)uVar7 < local_c8.ArrayNum) {
            uVar8 = uVar11;
          }
          if (uVar8 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          if (*(int *)(local_c8.AllocatorInstance.Data + lVar10 + 8) < 2) break;
          iVar4 = local_c8.ArrayNum;
          if (1 < local_78.Data.ArrayNum) {
            ::FString::AppendChars(&local_78,L"\n",1);
            iVar4 = local_c8.ArrayNum;
          }
          uVar8 = uVar13;
          if ((int)uVar7 < iVar4) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar6 = local_c8.AllocatorInstance.Data + lVar10;
          uVar9 = (ulonglong)(uVar7 + 1);
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + 0x10;
          iVar4 = *(int *)(pFVar6 + 8);
          uVar8 = iVar4 - 1;
          if (iVar4 == 0) {
            uVar8 = uVar13;
          }
          ::FString::AppendChars(&local_78,*(wchar_t **)pFVar6,uVar8);
        } while ((int)(uVar7 + 1) < local_c8.ArrayNum);
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar6 + (longlong)param_1->ArrayMax * 0x30)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      _Src_00.Data = local_78.Data.AllocatorInstance.Data;
      pFVar6 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar4 + 1;
      lVar12 = (longlong)iVar4 * 0x30;
      pFVar16 = pFVar6 + lVar12 + 0x10;
      *(long64 *)(pFVar6 + lVar12) = local_88.Ticks;
      *(long64 *)(pFVar6 + lVar12 + 8) = FStack_80.Ticks;
      *(undefined8 *)&pFVar16->field_0x0 = 0;
      lVar10 = (longlong)local_78.Data.ArrayNum;
      *(int *)&pFVar16[8].field_0x0 = local_78.Data.ArrayNum;
      if (local_78.Data.ArrayNum == 0) {
        *(int *)(pFVar6 + lVar12 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)pFVar16,local_78.Data.ArrayNum,
                   (int *)(pFVar6 + lVar12 + 0x1c));
        memcpy(*(void **)&pFVar16->field_0x0,_Src_00.Data,lVar10 * 2);
      }
      *(undefined8 *)(pFVar6 + lVar12 + 0x20) = local_68;
      *(undefined8 *)(pFVar6 + lVar12 + 0x20 + 8) = uStack_60;
      uVar5 = local_c8._8_8_ & 0xffffffff;
      if ((int)uVar9 < local_c8.ArrayNum) {
        lVar10 = uVar14 << 4;
        do {
          uVar7 = (uint)uVar9;
          uVar8 = 0;
          if ((int)uVar7 < (int)uVar5) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          ::FString::TrimStartInline
                    ((FString *)(local_c8.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10));
          uVar5 = (ulonglong)local_c8.ArrayNum;
          uVar8 = 0;
          if ((int)uVar7 < local_c8.ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            uVar5 = local_c8._8_8_ & 0xffffffff;
          }
          if (1 < *(int *)(local_c8.AllocatorInstance.Data + lVar10 + 8)) break;
          uVar9 = (ulonglong)(uVar7 + 1);
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((int)(uVar7 + 1) < (int)uVar5);
      }
      uVar8 = (uint)uVar9;
      DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    } while ((int)uVar8 < local_c8.ArrayNum);
  }
  bVar2 = uVar8 == local_c8.ArrayNum;
  DestructItems<FString,int>((FString *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return bVar2;
}

// Reset @ 148bbc570

void __thiscall FOverlaysImporter::Reset(FOverlaysImporter *this)

{
  ::FString::Empty(&this->Filename);
  ::FString::Empty(&this->FileContents);
  this->FileType = Unknown;
  return;
}

// operator() @ 1505370c0

bool __thiscall `FOverlaysImporter::ParseSubRipSubtitles'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3795992658569068442>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_3795992658569068442>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537120

bool __thiscall `FOverlaysImporter::ParseSubRipSubtitles'::__l10::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3795992658569068429>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_3795992658569068429>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537190

bool __thiscall `FOverlaysImporter::ParseSubRipSubtitles'::__l13::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3795992658569068419>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_3795992658569068419>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

