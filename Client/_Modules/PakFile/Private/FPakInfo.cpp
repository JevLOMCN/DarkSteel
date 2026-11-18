// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Serialize @ 142a9e7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakInfo::Serialize(FPakInfo *this,FArchive *param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  uchar *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  FName *pFVar6;
  code *pcVar7;
  char *pcVar8;
  bool bVar9;
  FNameEntryId FVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName *pFVar14;
  FString *pFVar15;
  size_t sVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  uint uVar22;
  wchar_t *_Str;
  FScriptContainerElement *pFVar23;
  undefined1 auStack_228 [32];
  FName *local_208;
  FName *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  uint local_1d8;
  FName local_1d4;
  FName local_1cc;
  FName local_1c4;
  FName local_1bc;
  char *local_1b0;
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [4];
  FString local_1a0;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  int local_f8;
  char local_e8 [31];
  undefined1 local_c9;
  char local_c8 [31];
  undefined1 local_a9;
  char local_a8 [31];
  undefined1 local_89;
  char local_88 [31];
  undefined1 local_69;
  char local_68 [31];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  if ((param_1->field_0x28 & 1) != 0) {
    lVar12 = 0x3d;
    if (param_2 < 7) {
      lVar12 = 0x2d;
    }
    lVar17 = lVar12 + 0xa0;
    if (param_2 < 8) {
      lVar17 = lVar12;
    }
    if ((8 < param_2) && (param_2 < 10)) {
      lVar17 = lVar17 + 1;
    }
    lVar12 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    lVar13 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    if (lVar13 < lVar17 + lVar12) goto LAB_142a9e8f0;
  }
  if (((param_1->field_0x28 & 4) != 0) || (6 < param_2)) {
    ::operator<<(param_1,&this->EncryptionKeyGuid);
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->bEncryptedIndex,1);
  }
  else {
    this->bEncryptedIndex = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->Magic);
    }
  }
  else {
    this->Magic = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (this->Magic != 0x5a6f12e1) {
LAB_142a9e8f0:
    this->Magic = 0;
    return;
  }
  ::operator<<(param_1,&this->Version);
  ::operator<<(param_1,&this->IndexOffset);
  ::operator<<(param_1,&this->IndexSize);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->IndexHash,0x14);
  pFVar23 = (FScriptContainerElement *)0x0;
  if ((param_1->field_0x28 & 1) != 0) {
    if (this->Version < 4) {
      this->bEncryptedIndex = '\0';
    }
    else if (6 < this->Version) goto LAB_142a9e959;
    (this->EncryptionKeyGuid).C = 0;
    (this->EncryptionKeyGuid).D = 0;
    (this->EncryptionKeyGuid).A = 0;
    (this->EncryptionKeyGuid).B = 0;
  }
LAB_142a9e959:
  if (this->Version == 9) {
    puVar5 = *(ulonglong **)&param_1->field_0x8;
    puVar4 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar4) {
      local_1d8 = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1d8,4);
      if (1 < local_1d8) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar21 = local_1d8;
      if ((param_1->field_0x28 & 1) == 0) goto LAB_142a9e9cb;
    }
    else {
      uVar21 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar4;
    }
    if (uVar21 != 0) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FPakInfo::Serialize(FArchive&___ptr64,int)___ptr64'::__l27::
                  LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
  }
LAB_142a9e9cb:
  if (this->Version < 8) {
    FVar10 = FNameEntryId::FromValidEName((EName)local_1a8);
    local_1d4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
    local_1d4.Number = 0;
    if ((pFVar6 <= &local_1d4) &&
       (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, &local_1d4 < pFVar6 + lVar12)) {
      local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
      local_1e8 = 8;
      local_208 = &local_1d4;
      local_200 = pFVar6;
      local_1f8 = lVar12;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar11 = (this->CompressionMethods).ArrayNum;
    if (iVar11 == (this->CompressionMethods).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&(this->CompressionMethods).AllocatorInstance,
                          &(this->CompressionMethods).ArrayMax);
    }
    (this->CompressionMethods).ArrayNum = iVar11 + 1;
    *(ulonglong *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) =
         CONCAT44(local_1d4.Number,local_1d4.ComparisonIndex.Value);
    FVar10 = FNameEntryId::FromValidEName((EName)local_1a4);
    pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
    local_1cc.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
    local_1cc.Number = 0;
    if ((pFVar6 <= &local_1cc) &&
       (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, &local_1cc < pFVar6 + lVar12)) {
      local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
      local_1e8 = 8;
      local_208 = &local_1cc;
      local_200 = pFVar6;
      local_1f8 = lVar12;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar11 = (this->CompressionMethods).ArrayNum;
    if (iVar11 == (this->CompressionMethods).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&(this->CompressionMethods).AllocatorInstance,
                          &(this->CompressionMethods).ArrayMax);
    }
    (this->CompressionMethods).ArrayNum = iVar11 + 1;
    *(ulonglong *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) =
         CONCAT44(local_1cc.Number,local_1cc.ComparisonIndex.Value);
    ::FName::FName(&local_1c4,L"Oodle");
    pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
    if ((pFVar6 <= &local_1c4) &&
       (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, &local_1c4 < pFVar6 + lVar12)) {
      local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
      local_1e8 = 8;
      local_208 = &local_1c4;
      local_200 = pFVar6;
      local_1f8 = lVar12;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar11 = (this->CompressionMethods).ArrayNum;
    if (iVar11 == (this->CompressionMethods).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&(this->CompressionMethods).AllocatorInstance,
                          &(this->CompressionMethods).ArrayMax);
    }
    (this->CompressionMethods).ArrayNum = iVar11 + 1;
    *(FName *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_1c4
    ;
    return;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_e8);
    if (local_e8[0] != '\0') {
      local_c9 = 0;
      pFVar14 = ::FName::FName(&local_1bc,local_e8);
      pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
      if ((pFVar6 <= pFVar14) &&
         (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, pFVar14 < pFVar6 + lVar12)) {
        local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
        local_1e8 = 8;
        local_208 = pFVar14;
        local_200 = pFVar6;
        local_1f8 = lVar12;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = (this->CompressionMethods).ArrayNum;
      piVar1 = &(this->CompressionMethods).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->CompressionMethods).AllocatorInstance,piVar1);
      }
      (this->CompressionMethods).ArrayNum = iVar11 + 1;
      *(FName *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           *pFVar14;
    }
    if (local_c8[0] != '\0') {
      local_a9 = 0;
      pFVar14 = ::FName::FName(&local_1bc,local_c8);
      pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
      if ((pFVar6 <= pFVar14) &&
         (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, pFVar14 < pFVar6 + lVar12)) {
        local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
        local_1e8 = 8;
        local_208 = pFVar14;
        local_200 = pFVar6;
        local_1f8 = lVar12;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = (this->CompressionMethods).ArrayNum;
      piVar1 = &(this->CompressionMethods).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->CompressionMethods).AllocatorInstance,piVar1);
      }
      (this->CompressionMethods).ArrayNum = iVar11 + 1;
      *(FName *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           *pFVar14;
    }
    if (local_a8[0] != '\0') {
      local_89 = 0;
      pFVar14 = ::FName::FName(&local_1bc,local_a8);
      pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
      if ((pFVar6 <= pFVar14) &&
         (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, pFVar14 < pFVar6 + lVar12)) {
        local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
        local_1e8 = 8;
        local_208 = pFVar14;
        local_200 = pFVar6;
        local_1f8 = lVar12;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = (this->CompressionMethods).ArrayNum;
      piVar1 = &(this->CompressionMethods).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->CompressionMethods).AllocatorInstance,piVar1);
      }
      (this->CompressionMethods).ArrayNum = iVar11 + 1;
      *(FName *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           *pFVar14;
    }
    if (local_88[0] != '\0') {
      local_69 = 0;
      pFVar14 = ::FName::FName(&local_1bc,local_88);
      pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
      if ((pFVar6 <= pFVar14) &&
         (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, pFVar14 < pFVar6 + lVar12)) {
        local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
        local_1e8 = 8;
        local_208 = pFVar14;
        local_200 = pFVar6;
        local_1f8 = lVar12;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = (this->CompressionMethods).ArrayNum;
      piVar1 = &(this->CompressionMethods).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->CompressionMethods).AllocatorInstance,piVar1);
      }
      (this->CompressionMethods).ArrayNum = iVar11 + 1;
      *(FName *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           *pFVar14;
    }
    if (local_68[0] == '\0') {
      return;
    }
    local_49 = 0;
    pFVar14 = ::FName::FName(&local_1bc,local_68);
    pFVar6 = (FName *)(this->CompressionMethods).AllocatorInstance.Data;
    if ((pFVar6 <= pFVar14) &&
       (lVar12 = (longlong)(this->CompressionMethods).ArrayMax, pFVar14 < pFVar6 + lVar12)) {
      local_1f0 = (longlong)(this->CompressionMethods).ArrayNum;
      local_1e8 = 8;
      local_208 = pFVar14;
      local_200 = pFVar6;
      local_1f8 = lVar12;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar11 = (this->CompressionMethods).ArrayNum;
    piVar1 = &(this->CompressionMethods).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&(this->CompressionMethods).AllocatorInstance,piVar1);
    }
    (this->CompressionMethods).ArrayNum = iVar11 + 1;
    *(FName *)((this->CompressionMethods).AllocatorInstance.Data + (longlong)iVar11 * 8) = *pFVar14;
    return;
  }
  memset(local_e8,0,0xa0);
  uVar21 = 1;
  if (1 < (this->CompressionMethods).ArrayNum) {
    local_1b0 = local_e8;
    do {
      iVar11 = (this->CompressionMethods).ArrayNum;
      uVar22 = 0;
      if ((int)uVar21 < iVar11) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_208 = (FName *)(longlong)(int)uVar21;
        local_200 = (FName *)(longlong)iVar11;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar15 = ::FName::ToString((FName *)((this->CompressionMethods).AllocatorInstance.Data +
                                           (longlong)(int)uVar21 * 8),&local_1a0);
      if ((pFVar15->Data).ArrayNum == 0) {
        _Str = L"";
LAB_142a9f053:
        local_108.Data = (FScriptContainerElement *)0x0;
        sVar16 = wcslen(_Str);
        local_f8 = (int)sVar16;
        uVar22 = local_f8 + 1;
        FVar19.Data = pFVar23;
        if (0x80 < uVar22) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_108,0,uVar22,1);
          FVar19.Data = local_108.Data;
        }
        pFVar20 = local_188;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          pFVar20 = FVar19.Data;
        }
        bVar9 = false;
        pFVar18 = pFVar23;
        local_100 = pFVar20;
        if (0 < (int)uVar22) {
          do {
            uVar2 = *(ushort *)((longlong)_Str + (longlong)pFVar18 * 2);
            pFVar18[(longlong)pFVar20] = SUB21(uVar2,0);
            pFVar18 = pFVar18 + 1;
            bVar9 = (bool)(bVar9 | 0x7f < uVar2);
          } while ((longlong)pFVar18 < (longlong)(int)uVar22);
          pFVar18 = pFVar23;
          if (bVar9) {
            do {
              if (0x7f < *(ushort *)((longlong)_Str + (longlong)pFVar18 * 2)) {
                pFVar18[(longlong)pFVar20] = (FScriptContainerElement)0x3f;
              }
              pFVar18 = pFVar18 + 1;
            } while ((longlong)pFVar18 < (longlong)(int)uVar22);
          }
        }
        if ((pFVar20 + (int)uVar22 == (FScriptContainerElement *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x25,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        _Str = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        local_108.Data = (FScriptContainerElement *)0x0;
        if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_142a9f053;
        local_100 = (FScriptContainerElement *)0x0;
        local_f8 = 0;
      }
      pcVar8 = local_1b0;
      strncpy(local_1b0,(char *)local_100,0x20);
      pcVar8[0x1f] = '\0';
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      local_1b0 = pcVar8 + 0x20;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (this->CompressionMethods).ArrayNum);
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_e8,0xa0);
  return;
}

