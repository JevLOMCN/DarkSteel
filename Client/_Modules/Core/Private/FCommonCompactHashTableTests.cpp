// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// TestAddRemove<16,TStaticCompactHashTable<16,16>_> @ 141afe850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestAddRemove<16,TStaticCompactHashTable<16,16>_>
          (TStaticCompactHashTable<16,16> *param_1)

{
  uchar *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStackY_e8 [32];
  int local_a8;
  uint local_a4;
  uint local_a0;
  FString local_98;
  FString local_88;
  uint local_78 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  param_1->NextIndexData[0] = param_1->HashData[9];
  uVar10 = 0x10;
  param_1->NextIndexData[1] = '\0';
  param_1->NextIndexData[2] = '\x01';
  param_1->NextIndexData[3] = '\x02';
  param_1->NextIndexData[4] = '\x03';
  param_1->NextIndexData[5] = '\x04';
  param_1->NextIndexData[6] = '\x05';
  param_1->NextIndexData[7] = '\x06';
  param_1->NextIndexData[8] = '\a';
  param_1->NextIndexData[9] = '\b';
  param_1->NextIndexData[10] = '\t';
  param_1->NextIndexData[0xb] = '\n';
  param_1->NextIndexData[0xc] = '\v';
  param_1->NextIndexData[0xd] = '\f';
  param_1->NextIndexData[0xe] = '\r';
  param_1->NextIndexData[0xf] = '\x0e';
  local_a0 = 0;
  local_78[0] = 9;
  local_78[1] = 0x19;
  local_78[2] = 0x29;
  local_78[3] = 0x39;
  local_78[4] = 0x49;
  local_78[5] = 0x59;
  local_78[6] = 0x69;
  local_78[7] = 0x79;
  local_78[8] = 0x89;
  local_78[9] = 0x99;
  local_78[10] = 0xa9;
  local_78[0xb] = 0xb9;
  local_78[0xc] = 0xc9;
  local_78[0xd] = 0xd9;
  local_78[0xe] = 0xe9;
  local_78[0xf] = 0xf9;
  param_1->HashData[9] = '\x0f';
  local_a4 = 0x10;
  local_a8 = 0;
  do {
    uVar10 = (ulonglong)local_78[(ulonglong)local_a0 % uVar10] % uVar10;
    uVar5 = local_78[uVar10];
    iVar9 = 0;
    uVar6 = (ulonglong)param_1->HashData[uVar5 & 0xf];
    if (param_1->HashData[uVar5 & 0xf] == 0xff) {
      uVar6 = 0xffffffff;
    }
    uVar8 = (uint)uVar10;
    uVar4 = (uint)uVar6;
    while (uVar4 != uVar8) {
      if ((int)uVar6 == -1) {
        if (uVar8 != 0xffffffff) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_88,L"Condition failed");
          (*pcVar3)(pFVar2,&local_88,0);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_1->NextIndexData + uVar6;
      iVar9 = iVar9 + 1;
      uVar6 = 0xffffffff;
      if (*puVar1 != 0xff) {
        uVar6 = (ulonglong)*puVar1;
      }
      uVar4 = (uint)uVar6;
    }
    local_a8 = local_a8 + iVar9;
    local_a4 = local_a4 - 1;
    uVar4 = local_78[local_a4];
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar8,uVar5,local_a4,uVar4,param_1->HashData,0x10,param_1->NextIndexData,0x10);
    if (uVar8 != local_a4) {
      local_78[uVar10] = uVar4;
      iVar9 = 0;
      uVar5 = (uint)param_1->HashData[uVar4 & 0xf];
      if (param_1->HashData[uVar4 & 0xf] == 0xff) {
        uVar5 = 0xffffffff;
      }
      if (uVar5 == uVar8) {
LAB_141afeac1:
        local_a8 = local_a8 + iVar9;
      }
      else {
        do {
          if (uVar5 == 0xffffffff) {
            if (uVar8 != 0xffffffff) {
              pFVar7 = FAutomationTestFramework::Get();
              pFVar2 = pFVar7->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_98,L"Condition failed");
              (*pcVar3)(pFVar2,&local_98,0);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_141afeac1;
          }
          uVar10 = (ulonglong)uVar5;
          iVar9 = iVar9 + 1;
          uVar5 = (uint)param_1->NextIndexData[uVar10];
          if (param_1->NextIndexData[uVar10] == 0xff) {
            uVar5 = 0xffffffff;
          }
        } while (uVar5 != uVar8);
        local_a8 = local_a8 + iVar9;
      }
    }
    uVar10 = (ulonglong)local_a4;
    local_a0 = local_a0 + 1;
    if (0xf < local_a0) {
      if (local_a8 == 0) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Condition failed");
        (*pcVar3)(pFVar2,&local_98,0);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

// TestAddRemove<16,TStaticCompactHashTable<16,32>_> @ 141afeb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestAddRemove<16,TStaticCompactHashTable<16,32>_>
          (TStaticCompactHashTable<16,32> *param_1)

{
  uchar *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStackY_e8 [32];
  int local_a8;
  uint local_a4;
  uint local_a0;
  FString local_98;
  FString local_88;
  uint local_78 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  param_1->NextIndexData[0] = param_1->HashData[9];
  uVar10 = 0x10;
  param_1->NextIndexData[1] = param_1->HashData[0x19];
  param_1->NextIndexData[2] = '\0';
  param_1->NextIndexData[3] = '\x01';
  param_1->NextIndexData[4] = '\x02';
  param_1->NextIndexData[5] = '\x03';
  param_1->NextIndexData[6] = '\x04';
  param_1->NextIndexData[7] = '\x05';
  param_1->NextIndexData[8] = '\x06';
  param_1->NextIndexData[9] = '\a';
  param_1->NextIndexData[10] = '\b';
  param_1->NextIndexData[0xb] = '\t';
  param_1->NextIndexData[0xc] = '\n';
  param_1->NextIndexData[0xd] = '\v';
  param_1->NextIndexData[0xe] = '\f';
  param_1->NextIndexData[0xf] = '\r';
  param_1->HashData[9] = '\x0e';
  local_a0 = 0;
  local_78[0] = 9;
  local_78[1] = 0x19;
  local_78[2] = 0x29;
  local_78[3] = 0x39;
  local_78[4] = 0x49;
  local_78[5] = 0x59;
  local_78[6] = 0x69;
  local_78[7] = 0x79;
  local_78[8] = 0x89;
  local_78[9] = 0x99;
  local_78[10] = 0xa9;
  local_78[0xb] = 0xb9;
  local_78[0xc] = 0xc9;
  local_78[0xd] = 0xd9;
  local_78[0xe] = 0xe9;
  local_78[0xf] = 0xf9;
  param_1->HashData[0x19] = '\x0f';
  local_a4 = 0x10;
  local_a8 = 0;
  do {
    uVar10 = (ulonglong)local_78[(ulonglong)local_a0 % uVar10] % uVar10;
    uVar5 = local_78[uVar10];
    iVar9 = 0;
    uVar6 = (ulonglong)param_1->HashData[uVar5 & 0x1f];
    if (param_1->HashData[uVar5 & 0x1f] == 0xff) {
      uVar6 = 0xffffffff;
    }
    uVar8 = (uint)uVar10;
    uVar4 = (uint)uVar6;
    while (uVar4 != uVar8) {
      if ((int)uVar6 == -1) {
        if (uVar8 != 0xffffffff) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_88,L"Condition failed");
          (*pcVar3)(pFVar2,&local_88,0);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_1->NextIndexData + uVar6;
      iVar9 = iVar9 + 1;
      uVar6 = 0xffffffff;
      if (*puVar1 != 0xff) {
        uVar6 = (ulonglong)*puVar1;
      }
      uVar4 = (uint)uVar6;
    }
    local_a8 = local_a8 + iVar9;
    local_a4 = local_a4 - 1;
    uVar4 = local_78[local_a4];
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar8,uVar5,local_a4,uVar4,param_1->HashData,0x20,param_1->NextIndexData,0x10);
    if (uVar8 != local_a4) {
      local_78[uVar10] = uVar4;
      iVar9 = 0;
      uVar5 = (uint)param_1->HashData[uVar4 & 0x1f];
      if (param_1->HashData[uVar4 & 0x1f] == 0xff) {
        uVar5 = 0xffffffff;
      }
      if (uVar5 == uVar8) {
LAB_141afedd1:
        local_a8 = local_a8 + iVar9;
      }
      else {
        do {
          if (uVar5 == 0xffffffff) {
            if (uVar8 != 0xffffffff) {
              pFVar7 = FAutomationTestFramework::Get();
              pFVar2 = pFVar7->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_98,L"Condition failed");
              (*pcVar3)(pFVar2,&local_98,0);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_141afedd1;
          }
          uVar10 = (ulonglong)uVar5;
          iVar9 = iVar9 + 1;
          uVar5 = (uint)param_1->NextIndexData[uVar10];
          if (param_1->NextIndexData[uVar10] == 0xff) {
            uVar5 = 0xffffffff;
          }
        } while (uVar5 != uVar8);
        local_a8 = local_a8 + iVar9;
      }
    }
    uVar10 = (ulonglong)local_a4;
    local_a0 = local_a0 + 1;
    if (0xf < local_a0) {
      if (local_a8 == 0) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_98,L"Condition failed");
        (*pcVar3)(pFVar2,&local_98,0);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

// TestAddRemove<16,FCompactHashTableView> @ 141afee70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestAddRemove<16,FCompactHashTableView>
          (FCompactHashTableView *param_1)

{
  uint *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  uint uVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStackY_f8 [32];
  int local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  uint local_78 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar12 = 0;
  lVar14 = 0;
  do {
    uVar15 = uVar12 * 0x10 + 9;
    uVar18 = *(uint *)&param_1->field_0x10;
    local_78[lVar14] = uVar15;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_1->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar18) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar11 = (undefined1 *)
                ((ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) +
                *(longlong *)&param_1->field_0x8);
      *(undefined1 *)(lVar14 + *(longlong *)param_1) = *puVar11;
      *puVar11 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar2 = (undefined2 *)
               (*(longlong *)&param_1->field_0x8 +
               (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) * 2);
      *(undefined2 *)(*(longlong *)param_1 + lVar14 * 2) = *puVar2;
      *puVar2 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar1 = (uint *)(*(longlong *)&param_1->field_0x8 +
                       (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) * 4);
      *(uint *)(*(longlong *)param_1 + lVar14 * 4) = *puVar1;
      *puVar1 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 1;
  } while (uVar12 < 0x10);
  uVar17 = 0x10;
  local_b8 = 0;
  uVar12 = 0;
  do {
    iVar13 = 0;
    uVar18 = local_78[(ulonglong)uVar12 % uVar17];
    puVar1 = local_78 + (ulonglong)uVar18 % uVar17;
    uVar15 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,*puVar1);
    uVar18 = (uint)((ulonglong)uVar18 % uVar17);
    while (uVar15 != uVar18) {
      if (uVar15 == 0xffffffff) {
        if (uVar18 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar5 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
          ::FString::FString(&local_b0,L"Condition failed");
          (*pcVar6)(pFVar5,&local_b0,0);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar13 = iVar13 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_1->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar10 = (uint)*(byte *)((ulonglong)uVar15 + *(longlong *)param_1);
        bVar7 = *(byte *)((ulonglong)uVar15 + *(longlong *)param_1) == 0xff;
LAB_141aff0ae:
        uVar15 = uVar10;
        if (bVar7) {
LAB_141aff0b0:
          uVar15 = 0xffffffff;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar3 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar15 * 2);
          uVar10 = (uint)uVar3;
          bVar7 = uVar3 == 0xffff;
          goto LAB_141aff0ae;
        }
        if (cVar9 != '\x04') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_141aff0b0;
        }
        uVar15 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar15 * 4);
        if (uVar15 == 0xffffffff) {
          uVar15 = 0xffffffff;
        }
      }
    }
    uVar15 = *(uint *)&param_1->field_0x10;
    uVar10 = *puVar1;
    local_b8 = local_b8 + iVar13;
    uVar16 = (int)uVar17 - 1;
    uVar17 = (ulonglong)uVar16;
    uVar4 = local_78[uVar17];
    cVar9 = '\0';
    if (0xffff < uVar15) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar15) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar18,uVar10,uVar16,uVar4,*(uchar **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uchar **)param_1,uVar15);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar18,uVar10,uVar16,uVar4,*(ushort **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(ushort **)param_1,uVar15);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar18,uVar10,uVar16,uVar4,*(uint **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uint **)param_1,uVar15);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar18 != uVar16) {
      *puVar1 = uVar4;
      iVar13 = 0;
      uVar15 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,uVar4);
      if (uVar15 == uVar18) {
LAB_141aff33a:
        local_b8 = local_b8 + iVar13;
      }
      else {
        do {
          if (uVar15 == 0xffffffff) {
            if (uVar18 != 0xffffffff) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar5 = pFVar8->CurrentTest;
              pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
              ::FString::FString(&local_a0,L"Condition failed");
              (*pcVar6)(pFVar5);
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_141aff33a;
          }
          iVar13 = iVar13 + 1;
          cVar9 = '\0';
          if (0xffff < *(uint *)&param_1->field_0x10) {
            cVar9 = '\x02';
          }
          cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
          if (cVar9 == '\x01') {
            uVar10 = (uint)*(byte *)((ulonglong)uVar15 + *(longlong *)param_1);
            bVar7 = *(byte *)((ulonglong)uVar15 + *(longlong *)param_1) == 0xff;
LAB_141aff2da:
            uVar15 = 0xffffffff;
            if (!bVar7) {
              uVar15 = uVar10;
            }
          }
          else {
            if (cVar9 == '\x02') {
              uVar3 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar15 * 2);
              uVar10 = (uint)uVar3;
              bVar7 = uVar3 == 0xffff;
              goto LAB_141aff2da;
            }
            if (cVar9 == '\x04') {
              uVar15 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar15 * 4);
              if (uVar15 == 0xffffffff) {
                uVar15 = 0xffffffff;
              }
            }
            else {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                                 ,0x146,L"");
              uVar15 = 0xffffffff;
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
        } while (uVar15 != uVar18);
        local_b8 = local_b8 + iVar13;
      }
    }
    uVar12 = uVar12 + 1;
    if (0xf < uVar12) {
      if (local_b8 == 0) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar5 = pFVar8->CurrentTest;
        pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
        ::FString::FString(&local_90,L"Condition failed");
        (*pcVar6)(pFVar5,&local_90,0);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

// TestAddRemove<256,TStaticCompactHashTable<256,256>_> @ 141aff3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestAddRemove<256,TStaticCompactHashTable<256,256>_>
          (TStaticCompactHashTable<256,256> *param_1)

{
  ushort *puVar1;
  uint uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  TStaticCompactHashTable<256,256> *pTVar13;
  uint *puVar14;
  int iVar15;
  undefined1 auStackY_4a8 [32];
  uint local_468;
  FString local_458;
  FString local_448;
  uint local_438 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  uVar9 = 0;
  pTVar13 = param_1;
  puVar14 = local_438;
  do {
    uVar5 = uVar9 * 0x100 + 0xf9;
    *puVar14 = uVar5;
    uVar5 = uVar5 & 0xff;
    pTVar13->NextIndexData[0] = param_1->HashData[uVar5];
    param_1->HashData[uVar5] = (ushort)uVar9;
    uVar9 = uVar9 + 1;
    pTVar13 = (TStaticCompactHashTable<256,256> *)(pTVar13->NextIndexData + 1);
    puVar14 = puVar14 + 1;
  } while (uVar9 < 0x100);
  uVar11 = 0x100;
  iVar15 = 0;
  local_468 = 0x100;
  uVar9 = 0;
  do {
    uVar5 = local_438[(ulonglong)uVar9 % uVar11];
    iVar10 = 0;
    uVar2 = local_438[(ulonglong)uVar5 % uVar11];
    uVar7 = (ulonglong)param_1->HashData[uVar2 & 0xff];
    if (param_1->HashData[uVar2 & 0xff] == 0xffff) {
      uVar7 = 0xffffffff;
    }
    uVar12 = (uint)((ulonglong)uVar5 % uVar11);
    uVar6 = (uint)uVar7;
    while (uVar6 != uVar12) {
      if ((int)uVar7 == -1) {
        if (uVar12 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar3 = pFVar8->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_448,L"Condition failed");
          (*pcVar4)(pFVar3,&local_448,0);
          if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_448.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_1->NextIndexData + uVar7;
      iVar10 = iVar10 + 1;
      uVar7 = 0xffffffff;
      if (*puVar1 != 0xffff) {
        uVar7 = (ulonglong)*puVar1;
      }
      uVar6 = (uint)uVar7;
    }
    iVar15 = iVar15 + iVar10;
    local_468 = local_468 - 1;
    uVar6 = local_438[local_468];
    UE::Core::CompactHashTable::Remove<unsigned_short>
              (uVar12,uVar2,local_468,uVar6,param_1->HashData,0x100,param_1->NextIndexData,0x100);
    if (uVar12 != local_468) {
      iVar10 = 0;
      local_438[(ulonglong)uVar5 % uVar11] = uVar6;
      uVar5 = 0xffffffff;
      if (param_1->HashData[uVar6 & 0xff] != 0xffff) {
        uVar5 = (uint)param_1->HashData[uVar6 & 0xff];
      }
      while (uVar5 != uVar12) {
        if (uVar5 == 0xffffffff) {
          if (uVar12 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar3 = pFVar8->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::FString(&local_458,L"Condition failed");
            (*pcVar4)(pFVar3,&local_458,0);
            if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        uVar11 = (ulonglong)uVar5;
        iVar10 = iVar10 + 1;
        uVar5 = (uint)param_1->NextIndexData[uVar11];
        if (param_1->NextIndexData[uVar11] == 0xffff) {
          uVar5 = 0xffffffff;
        }
      }
      iVar15 = iVar15 + iVar10;
    }
    uVar11 = (ulonglong)local_468;
    uVar9 = uVar9 + 1;
    if (0xff < uVar9) {
      if (iVar15 == 0) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar3 = pFVar8->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_458,L"Condition failed");
        (*pcVar4)(pFVar3,&local_458,0);
        if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_458.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

// TestAddRemove<256,FCompactHashTableView> @ 141aff6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestAddRemove<256,FCompactHashTableView>
          (FCompactHashTableView *param_1)

{
  uint *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  uint uVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStackY_4b8 [32];
  int local_478;
  FString local_470;
  FString local_460;
  FString local_450;
  uint local_438 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  uVar12 = 0;
  lVar14 = 0;
  do {
    uVar15 = uVar12 * 0x100 + 0xf9;
    uVar18 = *(uint *)&param_1->field_0x10;
    local_438[lVar14] = uVar15;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_1->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar18) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar11 = (undefined1 *)
                ((ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) +
                *(longlong *)&param_1->field_0x8);
      *(undefined1 *)(lVar14 + *(longlong *)param_1) = *puVar11;
      *puVar11 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar2 = (undefined2 *)
               (*(longlong *)&param_1->field_0x8 +
               (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) * 2);
      *(undefined2 *)(*(longlong *)param_1 + lVar14 * 2) = *puVar2;
      *puVar2 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar1 = (uint *)(*(longlong *)&param_1->field_0x8 +
                       (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) * 4);
      *(uint *)(*(longlong *)param_1 + lVar14 * 4) = *puVar1;
      *puVar1 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 1;
  } while (uVar12 < 0x100);
  uVar17 = 0x100;
  local_478 = 0;
  uVar12 = 0;
  do {
    iVar13 = 0;
    uVar18 = local_438[(ulonglong)uVar12 % uVar17];
    puVar1 = local_438 + (ulonglong)uVar18 % uVar17;
    uVar15 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,*puVar1);
    uVar18 = (uint)((ulonglong)uVar18 % uVar17);
    while (uVar15 != uVar18) {
      if (uVar15 == 0xffffffff) {
        if (uVar18 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar5 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
          ::FString::FString(&local_470,L"Condition failed");
          (*pcVar6)(pFVar5,&local_470,0);
          if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_470.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar13 = iVar13 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_1->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar10 = (uint)*(byte *)((ulonglong)uVar15 + *(longlong *)param_1);
        bVar7 = *(byte *)((ulonglong)uVar15 + *(longlong *)param_1) == 0xff;
LAB_141aff8fe:
        uVar15 = uVar10;
        if (bVar7) {
LAB_141aff900:
          uVar15 = 0xffffffff;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar3 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar15 * 2);
          uVar10 = (uint)uVar3;
          bVar7 = uVar3 == 0xffff;
          goto LAB_141aff8fe;
        }
        if (cVar9 != '\x04') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_141aff900;
        }
        uVar15 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar15 * 4);
        if (uVar15 == 0xffffffff) {
          uVar15 = 0xffffffff;
        }
      }
    }
    uVar15 = *(uint *)&param_1->field_0x10;
    uVar10 = *puVar1;
    local_478 = local_478 + iVar13;
    uVar16 = (int)uVar17 - 1;
    uVar17 = (ulonglong)uVar16;
    uVar4 = local_438[uVar17];
    cVar9 = '\0';
    if (0xffff < uVar15) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar15) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar18,uVar10,uVar16,uVar4,*(uchar **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uchar **)param_1,uVar15);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar18,uVar10,uVar16,uVar4,*(ushort **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(ushort **)param_1,uVar15);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar18,uVar10,uVar16,uVar4,*(uint **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uint **)param_1,uVar15);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar18 != uVar16) {
      *puVar1 = uVar4;
      iVar13 = 0;
      uVar15 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,uVar4);
      if (uVar15 == uVar18) {
LAB_141affb8a:
        local_478 = local_478 + iVar13;
      }
      else {
        do {
          if (uVar15 == 0xffffffff) {
            if (uVar18 != 0xffffffff) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar5 = pFVar8->CurrentTest;
              pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
              ::FString::FString(&local_460,L"Condition failed");
              (*pcVar6)(pFVar5);
              if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_460.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_141affb8a;
          }
          iVar13 = iVar13 + 1;
          cVar9 = '\0';
          if (0xffff < *(uint *)&param_1->field_0x10) {
            cVar9 = '\x02';
          }
          cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
          if (cVar9 == '\x01') {
            uVar10 = (uint)*(byte *)((ulonglong)uVar15 + *(longlong *)param_1);
            bVar7 = *(byte *)((ulonglong)uVar15 + *(longlong *)param_1) == 0xff;
LAB_141affb2a:
            uVar15 = 0xffffffff;
            if (!bVar7) {
              uVar15 = uVar10;
            }
          }
          else {
            if (cVar9 == '\x02') {
              uVar3 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar15 * 2);
              uVar10 = (uint)uVar3;
              bVar7 = uVar3 == 0xffff;
              goto LAB_141affb2a;
            }
            if (cVar9 == '\x04') {
              uVar15 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar15 * 4);
              if (uVar15 == 0xffffffff) {
                uVar15 = 0xffffffff;
              }
            }
            else {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                                 ,0x146,L"");
              uVar15 = 0xffffffff;
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
        } while (uVar15 != uVar18);
        local_478 = local_478 + iVar13;
      }
    }
    uVar12 = uVar12 + 1;
    if (0xff < uVar12) {
      if (local_478 == 0) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar5 = pFVar8->CurrentTest;
        pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
        ::FString::FString(&local_450,L"Condition failed");
        (*pcVar6)(pFVar5,&local_450,0);
        if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

// TestAddRemove<255,TStaticCompactHashTable<255,128>_> @ 141affc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestAddRemove<255,TStaticCompactHashTable<255,128>_>
          (TStaticCompactHashTable<255,128> *param_1)

{
  uchar *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  FAutomationTestFramework *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TStaticCompactHashTable<255,128> *pTVar12;
  uint *puVar13;
  undefined1 auStackY_4a8 [32];
  int local_468;
  uint local_464;
  FString local_460;
  FString local_450;
  uint local_438 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  uVar8 = 0;
  pTVar12 = param_1;
  puVar13 = local_438;
  do {
    uVar7 = uVar8 * 0xff + 0xf8;
    *puVar13 = uVar7;
    uVar7 = uVar7 & 0x7f;
    pTVar12->NextIndexData[0] = param_1->HashData[uVar7];
    param_1->HashData[uVar7] = (uchar)uVar8;
    uVar8 = uVar8 + 1;
    pTVar12 = (TStaticCompactHashTable<255,128> *)(pTVar12->NextIndexData + 1);
    puVar13 = puVar13 + 1;
  } while (uVar8 < 0xff);
  uVar10 = 0xff;
  local_464 = 0xff;
  uVar8 = 0;
  local_468 = 0;
  do {
    uVar10 = (ulonglong)local_438[(ulonglong)uVar8 % uVar10] % uVar10;
    uVar7 = local_438[uVar10];
    iVar9 = 0;
    uVar5 = (ulonglong)param_1->HashData[uVar7 & 0x7f];
    if (param_1->HashData[uVar7 & 0x7f] == 0xff) {
      uVar5 = 0xffffffff;
    }
    uVar11 = (uint)uVar10;
    uVar4 = (uint)uVar5;
    while (uVar4 != uVar11) {
      if ((int)uVar5 == -1) {
        if (uVar11 != 0xffffffff) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar2 = pFVar6->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_450,L"Condition failed");
          (*pcVar3)(pFVar2,&local_450,0);
          if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_1->NextIndexData + uVar5;
      iVar9 = iVar9 + 1;
      uVar5 = 0xffffffff;
      if (*puVar1 != 0xff) {
        uVar5 = (ulonglong)*puVar1;
      }
      uVar4 = (uint)uVar5;
    }
    local_468 = local_468 + iVar9;
    local_464 = local_464 - 1;
    uVar4 = local_438[local_464];
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar11,uVar7,local_464,uVar4,param_1->HashData,0x80,param_1->NextIndexData,0xff);
    if (uVar11 != local_464) {
      local_438[uVar10] = uVar4;
      iVar9 = 0;
      uVar7 = (uint)param_1->HashData[uVar4 & 0x7f];
      if (param_1->HashData[uVar4 & 0x7f] == 0xff) {
        uVar7 = 0xffffffff;
      }
      if (uVar7 == uVar11) {
LAB_141affe53:
        local_468 = local_468 + iVar9;
      }
      else {
        do {
          if (uVar7 == 0xffffffff) {
            if (uVar11 != 0xffffffff) {
              pFVar6 = FAutomationTestFramework::Get();
              pFVar2 = pFVar6->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_460,L"Condition failed");
              (*pcVar3)(pFVar2,&local_460,0);
              if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_460.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_141affe53;
          }
          uVar10 = (ulonglong)uVar7;
          iVar9 = iVar9 + 1;
          uVar7 = (uint)param_1->NextIndexData[uVar10];
          if (param_1->NextIndexData[uVar10] == 0xff) {
            uVar7 = 0xffffffff;
          }
        } while (uVar7 != uVar11);
        local_468 = local_468 + iVar9;
      }
    }
    uVar10 = (ulonglong)local_464;
    uVar8 = uVar8 + 1;
    if (0xfe < uVar8) {
      if (local_468 == 0) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar2 = pFVar6->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_460,L"Condition failed");
        (*pcVar3)(pFVar2,&local_460,0);
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

// TestAddRemove<255,FCompactHashTableView> @ 141afff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestAddRemove<255,FCompactHashTableView>
          (FCompactHashTableView *param_1)

{
  uint *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  uint uVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStackY_4b8 [32];
  int local_478;
  FString local_470;
  FString local_460;
  FString local_450;
  uint local_438 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  uVar12 = 0;
  lVar14 = 0;
  do {
    uVar15 = uVar12 * 0xff + 0xf8;
    uVar18 = *(uint *)&param_1->field_0x10;
    local_438[lVar14] = uVar15;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_1->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar18) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar11 = (undefined1 *)
                ((ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) +
                *(longlong *)&param_1->field_0x8);
      *(undefined1 *)(lVar14 + *(longlong *)param_1) = *puVar11;
      *puVar11 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar2 = (undefined2 *)
               (*(longlong *)&param_1->field_0x8 +
               (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) * 2);
      *(undefined2 *)(*(longlong *)param_1 + lVar14 * 2) = *puVar2;
      *puVar2 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar1 = (uint *)(*(longlong *)&param_1->field_0x8 +
                       (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar15) * 4);
      *(uint *)(*(longlong *)param_1 + lVar14 * 4) = *puVar1;
      *puVar1 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 1;
  } while (uVar12 < 0xff);
  uVar17 = 0xff;
  local_478 = 0;
  uVar12 = 0;
  do {
    iVar13 = 0;
    uVar18 = local_438[(ulonglong)uVar12 % uVar17];
    puVar1 = local_438 + (ulonglong)uVar18 % uVar17;
    uVar15 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,*puVar1);
    uVar18 = (uint)((ulonglong)uVar18 % uVar17);
    while (uVar15 != uVar18) {
      if (uVar15 == 0xffffffff) {
        if (uVar18 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar5 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
          ::FString::FString(&local_470,L"Condition failed");
          (*pcVar6)(pFVar5,&local_470,0);
          if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_470.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar13 = iVar13 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_1->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar10 = (uint)*(byte *)((ulonglong)uVar15 + *(longlong *)param_1);
        bVar7 = *(byte *)((ulonglong)uVar15 + *(longlong *)param_1) == 0xff;
LAB_141b0014e:
        uVar15 = uVar10;
        if (bVar7) {
LAB_141b00150:
          uVar15 = 0xffffffff;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar3 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar15 * 2);
          uVar10 = (uint)uVar3;
          bVar7 = uVar3 == 0xffff;
          goto LAB_141b0014e;
        }
        if (cVar9 != '\x04') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_141b00150;
        }
        uVar15 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar15 * 4);
        if (uVar15 == 0xffffffff) {
          uVar15 = 0xffffffff;
        }
      }
    }
    uVar15 = *(uint *)&param_1->field_0x10;
    uVar10 = *puVar1;
    local_478 = local_478 + iVar13;
    uVar16 = (int)uVar17 - 1;
    uVar17 = (ulonglong)uVar16;
    uVar4 = local_438[uVar17];
    cVar9 = '\0';
    if (0xffff < uVar15) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar15) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar18,uVar10,uVar16,uVar4,*(uchar **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uchar **)param_1,uVar15);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar18,uVar10,uVar16,uVar4,*(ushort **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(ushort **)param_1,uVar15);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar18,uVar10,uVar16,uVar4,*(uint **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uint **)param_1,uVar15);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar18 != uVar16) {
      *puVar1 = uVar4;
      iVar13 = 0;
      uVar15 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,uVar4);
      if (uVar15 == uVar18) {
LAB_141b003da:
        local_478 = local_478 + iVar13;
      }
      else {
        do {
          if (uVar15 == 0xffffffff) {
            if (uVar18 != 0xffffffff) {
              pFVar8 = FAutomationTestFramework::Get();
              pFVar5 = pFVar8->CurrentTest;
              pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
              ::FString::FString(&local_460,L"Condition failed");
              (*pcVar6)(pFVar5);
              if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_460.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_141b003da;
          }
          iVar13 = iVar13 + 1;
          cVar9 = '\0';
          if (0xffff < *(uint *)&param_1->field_0x10) {
            cVar9 = '\x02';
          }
          cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
          if (cVar9 == '\x01') {
            uVar10 = (uint)*(byte *)((ulonglong)uVar15 + *(longlong *)param_1);
            bVar7 = *(byte *)((ulonglong)uVar15 + *(longlong *)param_1) == 0xff;
LAB_141b0037a:
            uVar15 = 0xffffffff;
            if (!bVar7) {
              uVar15 = uVar10;
            }
          }
          else {
            if (cVar9 == '\x02') {
              uVar3 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar15 * 2);
              uVar10 = (uint)uVar3;
              bVar7 = uVar3 == 0xffff;
              goto LAB_141b0037a;
            }
            if (cVar9 == '\x04') {
              uVar15 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar15 * 4);
              if (uVar15 == 0xffffffff) {
                uVar15 = 0xffffffff;
              }
            }
            else {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                                 ,0x146,L"");
              uVar15 = 0xffffffff;
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
        } while (uVar15 != uVar18);
        local_478 = local_478 + iVar13;
      }
    }
    uVar12 = uVar12 + 1;
    if (0xfe < uVar12) {
      if (local_478 == 0) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar5 = pFVar8->CurrentTest;
        pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
        ::FString::FString(&local_450,L"Condition failed");
        (*pcVar6)(pFVar5,&local_450,0);
        if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
  } while( true );
}

// TestSynchedTables<16,TStaticCompactHashTable<16,16>_> @ 141b0dd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestSynchedTables<16,TStaticCompactHashTable<16,16>_>
          (TStaticCompactHashTable<16,16> *param_1,TStaticCompactHashTable<16,16> *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  FAutomationTestFramework *pFVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uchar uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uchar *puVar14;
  int iVar15;
  undefined1 auStackY_188 [32];
  uint local_148;
  uint local_144;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar11 = 0;
  lVar13 = (longlong)param_1 - (longlong)param_2;
  puVar8 = local_c8 + 3;
  puVar14 = param_2->NextIndexData + 1;
  do {
    iVar12 = uVar11 * 0x10;
    puVar8[-3] = iVar12 + 9U;
    uVar6 = iVar12 + 9U & 0xf;
    puVar8[-2] = iVar12 + 10U;
    uVar7 = iVar12 + 10U & 0xf;
    puVar14[lVar13 + -1] = param_1->HashData[uVar6];
    uVar10 = (uchar)uVar11;
    param_1->HashData[uVar6] = uVar10;
    ((TStaticCompactHashTable<16,16> *)(puVar14 + -1))->NextIndexData[0] = param_2->HashData[uVar7];
    param_2->HashData[uVar7] = uVar10;
    puVar8[-1] = iVar12 + 0x19U;
    *puVar8 = iVar12 + 0x1aU;
    uVar6 = iVar12 + 0x1aU & 0xf;
    puVar14[lVar13] = param_1->HashData[iVar12 + 0x19U & 0xf];
    param_1->HashData[iVar12 + 0x19U & 0xf] = uVar10 + '\x01';
    *puVar14 = param_2->HashData[uVar6];
    param_2->HashData[uVar6] = uVar10 + '\x01';
    puVar8[1] = iVar12 + 0x29U;
    puVar8[2] = iVar12 + 0x2aU;
    uVar6 = iVar12 + 0x2aU & 0xf;
    puVar14[lVar13 + 1] = param_1->HashData[iVar12 + 0x29U & 0xf];
    param_1->HashData[iVar12 + 0x29U & 0xf] = uVar10 + '\x02';
    puVar14[1] = param_2->HashData[uVar6];
    param_2->HashData[uVar6] = uVar10 + '\x02';
    puVar8[3] = iVar12 + 0x39U;
    puVar8[4] = iVar12 + 0x3aU;
    uVar6 = iVar12 + 0x3aU & 0xf;
    puVar14[lVar13 + 2] = param_1->HashData[iVar12 + 0x39U & 0xf];
    param_1->HashData[iVar12 + 0x39U & 0xf] = uVar10 + '\x03';
    puVar14[2] = param_2->HashData[uVar6];
    param_2->HashData[uVar6] = uVar10 + '\x03';
    puVar8[5] = iVar12 + 0x49U;
    puVar8[6] = iVar12 + 0x4aU;
    uVar6 = iVar12 + 0x4aU & 0xf;
    puVar14[lVar13 + 3] = param_1->HashData[iVar12 + 0x49U & 0xf];
    param_1->HashData[iVar12 + 0x49U & 0xf] = uVar10 + '\x04';
    puVar14[3] = param_2->HashData[uVar6];
    param_2->HashData[uVar6] = uVar10 + '\x04';
    puVar8[7] = iVar12 + 0x59U;
    puVar8[8] = iVar12 + 0x5aU;
    uVar6 = iVar12 + 0x5aU & 0xf;
    puVar14[lVar13 + 4] = param_1->HashData[iVar12 + 0x59U & 0xf];
    param_1->HashData[iVar12 + 0x59U & 0xf] = uVar10 + '\x05';
    puVar14[4] = param_2->HashData[uVar6];
    param_2->HashData[uVar6] = uVar10 + '\x05';
    puVar8[9] = iVar12 + 0x69U;
    puVar8[10] = iVar12 + 0x6aU;
    uVar6 = iVar12 + 0x6aU & 0xf;
    puVar14[lVar13 + 5] = param_1->HashData[iVar12 + 0x69U & 0xf];
    param_1->HashData[iVar12 + 0x69U & 0xf] = uVar10 + '\x06';
    puVar14[5] = param_2->HashData[uVar6];
    param_2->HashData[uVar6] = uVar10 + '\x06';
    puVar8[0xb] = iVar12 + 0x79U;
    puVar8[0xc] = iVar12 + 0x7aU;
    uVar6 = iVar12 + 0x7aU & 0xf;
    uVar11 = uVar11 + 8;
    puVar14[lVar13 + 6] = param_1->HashData[iVar12 + 0x79U & 0xf];
    param_1->HashData[iVar12 + 0x79U & 0xf] = uVar10 + '\a';
    puVar14[6] = param_2->HashData[uVar6];
    param_2->HashData[uVar6] = uVar10 + '\a';
    puVar8 = puVar8 + 0x10;
    puVar14 = puVar14 + 8;
  } while (uVar11 < 0x10);
  uVar9 = 0x10;
  local_148 = 0x10;
  local_144 = 0;
  do {
    iVar12 = 0;
    uVar9 = (ulonglong)local_c8[((ulonglong)local_144 % uVar9) * 2] % uVar9;
    uVar11 = local_c8[uVar9 * 2];
    uVar4 = (ulonglong)param_1->HashData[uVar11 & 0xf];
    if (param_1->HashData[uVar11 & 0xf] == 0xff) {
      uVar4 = 0xffffffff;
    }
    uVar7 = (uint)uVar9;
    uVar6 = (uint)uVar4;
    while (uVar6 != uVar7) {
      if ((int)uVar4 == -1) {
        if (uVar7 != 0xffffffff) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar1 = pFVar5->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_128,L"Condition failed");
          (*pcVar2)(pFVar1,&local_128,0);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar14 = param_1->NextIndexData + uVar4;
      iVar12 = iVar12 + 1;
      uVar4 = 0xffffffff;
      if (*puVar14 != 0xff) {
        uVar4 = (ulonglong)*puVar14;
      }
      uVar6 = (uint)uVar4;
    }
    iVar15 = 0;
    puVar8 = local_c8 + uVar9 * 2 + 1;
    uVar4 = (ulonglong)param_2->HashData[*puVar8 & 0xf];
    if (param_2->HashData[*puVar8 & 0xf] == 0xff) {
      uVar4 = 0xffffffff;
    }
    uVar6 = (uint)uVar4;
    while (uVar6 != uVar7) {
      if ((int)uVar4 == -1) {
        if (uVar7 != 0xffffffff) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar1 = pFVar5->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_118,L"Condition failed");
          (*pcVar2)(pFVar1,&local_118,0);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar14 = param_2->NextIndexData + uVar4;
      iVar15 = iVar15 + 1;
      uVar4 = 0xffffffff;
      if (*puVar14 != 0xff) {
        uVar4 = (ulonglong)*puVar14;
      }
      uVar6 = (uint)uVar4;
    }
    if (iVar12 != iVar15) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_108,L"Condition failed");
      (*pcVar2)(pFVar1,&local_108,0);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    local_148 = local_148 - 1;
    uVar4 = (ulonglong)local_148;
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar7,uVar11,local_148,local_c8[uVar4 * 2],param_1->HashData,0x10,
               param_1->NextIndexData,0x10);
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar7,*puVar8,local_148,local_c8[uVar4 * 2 + 1],param_2->HashData,0x10,
               param_2->NextIndexData,0x10);
    if (uVar7 != local_148) {
      uVar3 = *(undefined8 *)(local_c8 + uVar4 * 2);
      iVar12 = 0;
      *(undefined8 *)(local_c8 + uVar9 * 2) = uVar3;
      uVar9 = (ulonglong)param_1->HashData[(uint)uVar3 & 0xf];
      if (param_1->HashData[(uint)uVar3 & 0xf] == 0xff) {
        uVar9 = 0xffffffff;
      }
      uVar11 = (uint)uVar9;
      while (uVar11 != uVar7) {
        if ((int)uVar9 == -1) {
          if (uVar7 != 0xffffffff) {
            pFVar5 = FAutomationTestFramework::Get();
            pFVar1 = pFVar5->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_f8,L"Condition failed");
            (*pcVar2)(pFVar1);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        puVar14 = param_1->NextIndexData + uVar9;
        iVar12 = iVar12 + 1;
        uVar9 = 0xffffffff;
        if (*puVar14 != 0xff) {
          uVar9 = (ulonglong)*puVar14;
        }
        uVar11 = (uint)uVar9;
      }
      iVar15 = 0;
      uVar9 = (ulonglong)param_2->HashData[*puVar8 & 0xf];
      if (param_2->HashData[*puVar8 & 0xf] == 0xff) {
        uVar9 = 0xffffffff;
      }
      uVar11 = (uint)uVar9;
      while (uVar11 != uVar7) {
        if ((int)uVar9 == -1) {
          if (uVar7 != 0xffffffff) {
            pFVar5 = FAutomationTestFramework::Get();
            pFVar1 = pFVar5->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_e8,L"Condition failed");
            (*pcVar2)(pFVar1);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        puVar14 = param_2->NextIndexData + uVar9;
        iVar15 = iVar15 + 1;
        uVar9 = 0xffffffff;
        if (*puVar14 != 0xff) {
          uVar9 = (ulonglong)*puVar14;
        }
        uVar11 = (uint)uVar9;
      }
      if (iVar12 != iVar15) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar1 = pFVar5->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_d8,L"Condition failed");
        (*pcVar2)(pFVar1);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar9 = (ulonglong)local_148;
    local_144 = local_144 + 1;
    if (0xf < local_144) {
      return;
    }
  } while( true );
}

// TestSynchedTables<16,TStaticCompactHashTable<16,32>_> @ 141b0e2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestSynchedTables<16,TStaticCompactHashTable<16,32>_>
          (TStaticCompactHashTable<16,32> *param_1,TStaticCompactHashTable<16,32> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  uchar uVar6;
  ulonglong uVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  uchar *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStackY_198 [32];
  uint local_158;
  uint local_148;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar16 = 0;
  lVar10 = (longlong)param_1 - (longlong)param_2;
  puVar11 = local_c8 + 3;
  puVar13 = param_2->NextIndexData + 1;
  do {
    uVar6 = (uchar)uVar16;
    iVar15 = uVar16 * 0x10;
    puVar11[-3] = iVar15 + 9U;
    puVar11[-2] = iVar15 + 10U;
    puVar1 = param_1->HashData + (iVar15 + 9U & 0x1f);
    puVar2 = param_2->HashData + (iVar15 + 10U & 0x1f);
    puVar13[lVar10 + -1] = *puVar1;
    *puVar1 = uVar6;
    ((TStaticCompactHashTable<16,32> *)(puVar13 + -1))->NextIndexData[0] = *puVar2;
    *puVar2 = uVar6;
    puVar11[-1] = iVar15 + 0x19U;
    *puVar11 = iVar15 + 0x1aU;
    uVar14 = iVar15 + 0x1aU & 0x1f;
    puVar13[lVar10] = param_1->HashData[iVar15 + 0x19U & 0x1f];
    param_1->HashData[iVar15 + 0x19U & 0x1f] = uVar6 + '\x01';
    *puVar13 = param_2->HashData[uVar14];
    param_2->HashData[uVar14] = uVar6 + '\x01';
    puVar11[1] = iVar15 + 0x29;
    puVar11[2] = iVar15 + 0x2a;
    puVar13[lVar10 + 1] = *puVar1;
    *puVar1 = uVar6 + '\x02';
    puVar13[1] = *puVar2;
    *puVar2 = uVar6 + '\x02';
    puVar11[3] = iVar15 + 0x39U;
    puVar11[4] = iVar15 + 0x3aU;
    uVar14 = iVar15 + 0x3aU & 0x1f;
    puVar13[lVar10 + 2] = param_1->HashData[iVar15 + 0x39U & 0x1f];
    param_1->HashData[iVar15 + 0x39U & 0x1f] = uVar6 + '\x03';
    puVar13[2] = param_2->HashData[uVar14];
    param_2->HashData[uVar14] = uVar6 + '\x03';
    puVar11[5] = iVar15 + 0x49;
    puVar11[6] = iVar15 + 0x4a;
    puVar13[lVar10 + 3] = *puVar1;
    *puVar1 = uVar6 + '\x04';
    puVar13[3] = *puVar2;
    *puVar2 = uVar6 + '\x04';
    puVar11[7] = iVar15 + 0x59U;
    puVar11[8] = iVar15 + 0x5aU;
    uVar14 = iVar15 + 0x5aU & 0x1f;
    puVar13[lVar10 + 4] = param_1->HashData[iVar15 + 0x59U & 0x1f];
    param_1->HashData[iVar15 + 0x59U & 0x1f] = uVar6 + '\x05';
    puVar13[4] = param_2->HashData[uVar14];
    param_2->HashData[uVar14] = uVar6 + '\x05';
    puVar11[9] = iVar15 + 0x69;
    puVar11[10] = iVar15 + 0x6a;
    puVar13[lVar10 + 5] = *puVar1;
    uVar16 = uVar16 + 8;
    *puVar1 = uVar6 + '\x06';
    puVar13[5] = *puVar2;
    *puVar2 = uVar6 + '\x06';
    puVar11[0xb] = iVar15 + 0x79U;
    puVar11[0xc] = iVar15 + 0x7aU;
    uVar14 = iVar15 + 0x7aU & 0x1f;
    puVar13[lVar10 + 6] = param_1->HashData[iVar15 + 0x79U & 0x1f];
    param_1->HashData[iVar15 + 0x79U & 0x1f] = uVar6 + '\a';
    puVar13[6] = param_2->HashData[uVar14];
    param_2->HashData[uVar14] = uVar6 + '\a';
    puVar11 = puVar11 + 0x10;
    puVar13 = puVar13 + 8;
  } while (uVar16 < 0x10);
  uVar12 = 0x10;
  local_158 = 0x10;
  local_148 = 0;
  do {
    iVar15 = 0;
    uVar12 = (ulonglong)local_c8[((ulonglong)local_148 % uVar12) * 2] % uVar12;
    uVar16 = local_c8[uVar12 * 2];
    uVar7 = (ulonglong)param_1->HashData[uVar16 & 0x1f];
    if (param_1->HashData[uVar16 & 0x1f] == 0xff) {
      uVar7 = 0xffffffff;
    }
    uVar9 = (uint)uVar12;
    uVar14 = (uint)uVar7;
    while (uVar14 != uVar9) {
      if ((int)uVar7 == -1) {
        if (uVar9 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar3 = pFVar8->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_130,L"Condition failed");
          (*pcVar4)(pFVar3,&local_130,0);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar13 = param_1->NextIndexData + uVar7;
      iVar15 = iVar15 + 1;
      uVar7 = 0xffffffff;
      if (*puVar13 != 0xff) {
        uVar7 = (ulonglong)*puVar13;
      }
      uVar14 = (uint)uVar7;
    }
    iVar17 = 0;
    puVar11 = local_c8 + uVar12 * 2 + 1;
    uVar7 = (ulonglong)param_2->HashData[*puVar11 & 0x1f];
    if (param_2->HashData[*puVar11 & 0x1f] == 0xff) {
      uVar7 = 0xffffffff;
    }
    uVar14 = (uint)uVar7;
    while (uVar14 != uVar9) {
      if ((int)uVar7 == -1) {
        if (uVar9 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar3 = pFVar8->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::FString(&local_120,L"Condition failed");
          (*pcVar4)(pFVar3,&local_120,0);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar13 = param_2->NextIndexData + uVar7;
      iVar17 = iVar17 + 1;
      uVar7 = 0xffffffff;
      if (*puVar13 != 0xff) {
        uVar7 = (ulonglong)*puVar13;
      }
      uVar14 = (uint)uVar7;
    }
    if (iVar15 != iVar17) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar3 = pFVar8->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_110,L"Condition failed");
      (*pcVar4)(pFVar3,&local_110,0);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    local_158 = local_158 - 1;
    uVar7 = (ulonglong)local_158;
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar9,uVar16,local_158,local_c8[uVar7 * 2],param_1->HashData,0x20,
               param_1->NextIndexData,0x10);
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar9,*puVar11,local_158,local_c8[uVar7 * 2 + 1],param_2->HashData,0x20,
               param_2->NextIndexData,0x10);
    if (uVar9 != local_158) {
      uVar5 = *(undefined8 *)(local_c8 + uVar7 * 2);
      iVar15 = 0;
      *(undefined8 *)(local_c8 + uVar12 * 2) = uVar5;
      uVar12 = (ulonglong)param_1->HashData[(uint)uVar5 & 0x1f];
      if (param_1->HashData[(uint)uVar5 & 0x1f] == 0xff) {
        uVar12 = 0xffffffff;
      }
      uVar16 = (uint)uVar12;
      while (uVar16 != uVar9) {
        if ((int)uVar12 == -1) {
          if (uVar9 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar3 = pFVar8->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::FString(&local_100,L"Condition failed");
            (*pcVar4)(pFVar3);
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        puVar13 = param_1->NextIndexData + uVar12;
        iVar15 = iVar15 + 1;
        uVar12 = 0xffffffff;
        if (*puVar13 != 0xff) {
          uVar12 = (ulonglong)*puVar13;
        }
        uVar16 = (uint)uVar12;
      }
      iVar17 = 0;
      uVar12 = (ulonglong)param_2->HashData[*puVar11 & 0x1f];
      if (param_2->HashData[*puVar11 & 0x1f] == 0xff) {
        uVar12 = 0xffffffff;
      }
      uVar16 = (uint)uVar12;
      while (uVar16 != uVar9) {
        if ((int)uVar12 == -1) {
          if (uVar9 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar3 = pFVar8->CurrentTest;
            pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
            ::FString::FString(&local_f0,L"Condition failed");
            (*pcVar4)(pFVar3);
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        puVar13 = param_2->NextIndexData + uVar12;
        iVar17 = iVar17 + 1;
        uVar12 = 0xffffffff;
        if (*puVar13 != 0xff) {
          uVar12 = (ulonglong)*puVar13;
        }
        uVar16 = (uint)uVar12;
      }
      if (iVar15 != iVar17) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar3 = pFVar8->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        ::FString::FString(&local_e0,L"Condition failed");
        (*pcVar4)(pFVar3);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar12 = (ulonglong)local_158;
    local_148 = local_148 + 1;
    if (0xf < local_148) {
      return;
    }
  } while( true );
}

// TestSynchedTables<16,FCompactHashTableView> @ 141b0e870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestSynchedTables<16,FCompactHashTableView>
          (FCompactHashTableView *param_1,FCompactHashTableView *param_2)

{
  undefined2 *puVar1;
  ushort uVar2;
  uint uVar3;
  FAutomationTestBase *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  char cVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint *puVar21;
  undefined1 auStackY_188 [32];
  uint local_144;
  uint local_140;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar12 = 0;
  puVar15 = local_c8 + 1;
  lVar17 = 0;
  do {
    uVar18 = uVar12 * 0x10 + 9;
    uVar13 = *(uint *)&param_1->field_0x10;
    puVar15[-1] = uVar18;
    *puVar15 = uVar12 * 0x10 + 10;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_1->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar13) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar10 = (undefined1 *)
                ((ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) +
                *(longlong *)&param_1->field_0x8);
      *(undefined1 *)(lVar17 + *(longlong *)param_1) = *puVar10;
      *puVar10 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar1 = (undefined2 *)
               (*(longlong *)&param_1->field_0x8 +
               (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) * 2);
      *(undefined2 *)(*(longlong *)param_1 + lVar17 * 2) = *puVar1;
      *puVar1 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar21 = (uint *)(*(longlong *)&param_1->field_0x8 +
                        (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) * 4);
      *(uint *)(*(longlong *)param_1 + lVar17 * 4) = *puVar21;
      *puVar21 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar13 = *puVar15;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_2->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar10 = (undefined1 *)
                ((ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) +
                *(longlong *)&param_2->field_0x8);
      *(undefined1 *)(lVar17 + *(longlong *)param_2) = *puVar10;
      *puVar10 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar1 = (undefined2 *)
               (*(longlong *)&param_2->field_0x8 +
               (ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) * 2);
      *(undefined2 *)(*(longlong *)param_2 + lVar17 * 2) = *puVar1;
      *puVar1 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar21 = (uint *)(*(longlong *)&param_2->field_0x8 +
                        (ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) * 4);
      *(uint *)(*(longlong *)param_2 + lVar17 * 4) = *puVar21;
      *puVar21 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = uVar12 + 1;
    lVar17 = lVar17 + 1;
    puVar15 = puVar15 + 2;
  } while (uVar12 < 0x10);
  uVar16 = 0x10;
  local_144 = 0x10;
  local_140 = 0;
  do {
    iVar20 = 0;
    uVar16 = (ulonglong)local_c8[((ulonglong)local_140 % uVar16) * 2] % uVar16;
    uVar13 = (uint)uVar16;
    puVar15 = local_c8 + uVar16 * 2;
    uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,*puVar15);
    uVar19 = (ulonglong)uVar12;
    while (uVar12 != uVar13) {
      if ((int)uVar19 == -1) {
        if (uVar13 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_128,L"Condition failed");
          (*pcVar6)(pFVar4,&local_128,0);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar20 = iVar20 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_1->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar11 = (ulonglong)*(byte *)(uVar19 + *(longlong *)param_1);
        bVar7 = *(byte *)(uVar19 + *(longlong *)param_1) == 0xff;
LAB_141b0eb3f:
        uVar19 = 0xffffffff;
        if (!bVar7) {
          uVar19 = uVar11;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar2 = *(ushort *)(*(longlong *)param_1 + uVar19 * 2);
          uVar11 = (ulonglong)uVar2;
          bVar7 = uVar2 == 0xffff;
          goto LAB_141b0eb3f;
        }
        if (cVar9 == '\x04') {
          uVar12 = *(uint *)(*(longlong *)param_1 + uVar19 * 4);
          if (uVar12 == 0xffffffff) {
            uVar12 = 0xffffffff;
          }
          uVar19 = (ulonglong)uVar12;
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = 0xffffffff;
        }
      }
      uVar12 = (uint)uVar19;
    }
    puVar21 = local_c8 + uVar16 * 2 + 1;
    iVar14 = 0;
    uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_2,*puVar21);
    while (uVar12 != uVar13) {
      if (uVar12 == 0xffffffff) {
        if (uVar13 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_118,L"Condition failed");
          (*pcVar6)(pFVar4,&local_118,0);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar14 = iVar14 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_2->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_2);
        bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_2) == 0xff;
LAB_141b0ec58:
        uVar12 = uVar18;
        if (bVar7) {
LAB_141b0ec5a:
          uVar12 = 0xffffffff;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar2 = *(ushort *)(*(longlong *)param_2 + (ulonglong)uVar12 * 2);
          uVar18 = (uint)uVar2;
          bVar7 = uVar2 == 0xffff;
          goto LAB_141b0ec58;
        }
        if (cVar9 != '\x04') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_141b0ec5a;
        }
        uVar12 = *(uint *)(*(longlong *)param_2 + (ulonglong)uVar12 * 4);
        if (uVar12 == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
      }
    }
    if (iVar20 != iVar14) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_108,L"Condition failed");
      (*pcVar6)(pFVar4,&local_108,0);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = *(uint *)&param_1->field_0x10;
    local_144 = local_144 - 1;
    uVar16 = (ulonglong)local_144;
    uVar18 = local_c8[uVar16 * 2];
    uVar3 = *puVar15;
    cVar9 = '\0';
    if (0xffff < uVar12) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar12) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar13,uVar3,local_144,uVar18,*(uchar **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uchar **)param_1,uVar12);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar13,uVar3,local_144,uVar18,*(ushort **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(ushort **)param_1,uVar12);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar13,uVar3,local_144,uVar18,*(uint **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uint **)param_1,uVar12);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = *(uint *)&param_2->field_0x10;
    uVar18 = local_c8[uVar16 * 2 + 1];
    uVar3 = *puVar21;
    cVar9 = '\0';
    if (0xffff < uVar12) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar12) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar13,uVar3,local_144,uVar18,*(uchar **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(uchar **)param_2,uVar12);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar13,uVar3,local_144,uVar18,*(ushort **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(ushort **)param_2,uVar12);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar13,uVar3,local_144,uVar18,*(uint **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(uint **)param_2,uVar12);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar13 != local_144) {
      uVar5 = *(undefined8 *)(local_c8 + uVar16 * 2);
      *(undefined8 *)puVar15 = uVar5;
      iVar20 = 0;
      uVar12 = FConstCompactHashTableView::GetFirst
                         ((FConstCompactHashTableView *)param_1,(uint)uVar5);
      while (uVar12 != uVar13) {
        if (uVar12 == 0xffffffff) {
          if (uVar13 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::FString(&local_f8,L"Condition failed");
            (*pcVar6)(pFVar4,&local_f8,0);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        iVar20 = iVar20 + 1;
        cVar9 = '\0';
        if (0xffff < *(uint *)&param_1->field_0x10) {
          cVar9 = '\x02';
        }
        cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
        if (cVar9 == '\x01') {
          uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_1);
          bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_1) == 0xff;
LAB_141b0efec:
          uVar12 = uVar18;
          if (bVar7) {
LAB_141b0efee:
            uVar12 = 0xffffffff;
          }
        }
        else {
          if (cVar9 == '\x02') {
            uVar2 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar12 * 2);
            uVar18 = (uint)uVar2;
            bVar7 = uVar2 == 0xffff;
            goto LAB_141b0efec;
          }
          if (cVar9 != '\x04') {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x146,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_141b0efee;
          }
          uVar12 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar12 * 4);
          if (uVar12 == 0xffffffff) {
            uVar12 = 0xffffffff;
          }
        }
      }
      iVar14 = 0;
      uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_2,*puVar21);
joined_r0x000141b0f056:
      if (uVar12 != uVar13) {
        if (uVar12 == 0xffffffff) {
          if (uVar13 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::FString(&local_e8,L"Condition failed");
            (*pcVar6)(pFVar4,&local_e8,0);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141b0f14b;
        }
        iVar14 = iVar14 + 1;
        cVar9 = '\0';
        if (0xffff < *(uint *)&param_2->field_0x10) {
          cVar9 = '\x02';
        }
        cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
        if (cVar9 == '\x01') {
          uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_2);
          bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_2) == 0xff;
        }
        else {
          if (cVar9 != '\x02') {
            if (cVar9 == '\x04') {
              uVar12 = *(uint *)(*(longlong *)param_2 + (ulonglong)uVar12 * 4);
              if (uVar12 == 0xffffffff) {
                uVar12 = 0xffffffff;
              }
            }
            else {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                                 ,0x146,L"");
              uVar12 = 0xffffffff;
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            goto joined_r0x000141b0f056;
          }
          uVar2 = *(ushort *)(*(longlong *)param_2 + (ulonglong)uVar12 * 2);
          uVar18 = (uint)uVar2;
          bVar7 = uVar2 == 0xffff;
        }
        uVar12 = 0xffffffff;
        if (!bVar7) {
          uVar12 = uVar18;
        }
        goto joined_r0x000141b0f056;
      }
LAB_141b0f14b:
      if (iVar20 != iVar14) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar4 = pFVar8->CurrentTest;
        pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_d8,L"Condition failed");
        (*pcVar6)(pFVar4,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar16 = (ulonglong)local_144;
    local_140 = local_140 + 1;
    if (0xf < local_140) {
      return;
    }
  } while( true );
}

// TestSynchedTables<256,TStaticCompactHashTable<256,256>_> @ 141b0f1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestSynchedTables<256,TStaticCompactHashTable<256,256>_>
          (TStaticCompactHashTable<256,256> *param_1,TStaticCompactHashTable<256,256> *param_2)

{
  ushort *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  TStaticCompactHashTable<256,256> *pTVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStackY_918 [32];
  uint local_8d8;
  uint local_8c8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  undefined8 local_848;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_918;
  uVar9 = 0;
  pTVar10 = param_2;
  puVar11 = (uint *)((longlong)&local_848 + 4);
  do {
    uVar4 = uVar9 * 0x100 + 0xf9;
    puVar11[-1] = uVar4;
    uVar5 = uVar9 * 0x100 + 0xfa;
    *puVar11 = uVar5;
    *(ushort *)
     ((longlong)param_1 + (-2 - (longlong)param_2) + (longlong)(pTVar10->NextIndexData + 1)) =
         param_1->HashData[uVar4 & 0xff];
    param_1->HashData[uVar4 & 0xff] = (ushort)uVar9;
    uVar13 = (ulonglong)uVar5 & 0xff;
    pTVar10->NextIndexData[0] = param_2->HashData[uVar13];
    param_2->HashData[uVar13] = (ushort)uVar9;
    uVar9 = uVar9 + 1;
    pTVar10 = (TStaticCompactHashTable<256,256> *)(pTVar10->NextIndexData + 1);
    puVar11 = puVar11 + 2;
  } while (uVar9 < 0x100);
  uVar13 = 0x100;
  local_8d8 = 0x100;
  local_8c8 = 0;
  do {
    iVar14 = 0;
    uVar13 = (ulonglong)*(uint *)(&local_848 + (ulonglong)local_8c8 % uVar13) % uVar13;
    uVar9 = (uint)(&local_848)[uVar13];
    uVar7 = (ulonglong)param_1->HashData[(byte)uVar9];
    if (param_1->HashData[(byte)uVar9] == 0xffff) {
      uVar7 = 0xffffffff;
    }
    uVar4 = (uint)uVar13;
    uVar5 = (uint)uVar7;
    while (uVar5 != uVar4) {
      if ((int)uVar7 == -1) {
        if (uVar4 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar2 = pFVar8->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_8a8,L"Condition failed");
          (*pcVar3)(pFVar2,&local_8a8,0);
          if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_1->NextIndexData + uVar7;
      iVar14 = iVar14 + 1;
      uVar7 = 0xffffffff;
      if (*puVar1 != 0xffff) {
        uVar7 = (ulonglong)*puVar1;
      }
      uVar5 = (uint)uVar7;
    }
    iVar12 = 0;
    puVar11 = (uint *)((longlong)&local_848 + uVar13 * 8 + 4);
    uVar5 = *puVar11;
    uVar7 = (ulonglong)param_2->HashData[uVar5 & 0xff];
    if (param_2->HashData[uVar5 & 0xff] == 0xffff) {
      uVar7 = 0xffffffff;
    }
    uVar6 = (uint)uVar7;
    while (uVar6 != uVar4) {
      if ((int)uVar7 == -1) {
        if (uVar4 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar2 = pFVar8->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_898,L"Condition failed");
          (*pcVar3)(pFVar2,&local_898,0);
          if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_898.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_2->NextIndexData + uVar7;
      iVar12 = iVar12 + 1;
      uVar7 = 0xffffffff;
      if (*puVar1 != 0xffff) {
        uVar7 = (ulonglong)*puVar1;
      }
      uVar6 = (uint)uVar7;
    }
    if (iVar14 != iVar12) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar2 = pFVar8->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_888,L"Condition failed");
      (*pcVar3)(pFVar2,&local_888,0);
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
    }
    local_8d8 = local_8d8 - 1;
    uVar7 = (ulonglong)local_8d8;
    UE::Core::CompactHashTable::Remove<unsigned_short>
              (uVar4,uVar9,local_8d8,*(uint *)(&local_848 + uVar7),param_1->HashData,0x100,
               param_1->NextIndexData,0x100);
    UE::Core::CompactHashTable::Remove<unsigned_short>
              (uVar4,uVar5,local_8d8,*(uint *)((longlong)&local_848 + uVar7 * 8 + 4),
               param_2->HashData,0x100,param_2->NextIndexData,0x100);
    if (uVar4 != local_8d8) {
      iVar14 = 0;
      uVar7 = (&local_848)[uVar7];
      (&local_848)[uVar13] = uVar7;
      uVar13 = (ulonglong)param_1->HashData[uVar7 & 0xff];
      if (param_1->HashData[uVar7 & 0xff] == 0xffff) {
        uVar13 = 0xffffffff;
      }
      uVar9 = (uint)uVar13;
      while (uVar9 != uVar4) {
        if ((int)uVar13 == -1) {
          if (uVar4 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar2 = pFVar8->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_878,L"Condition failed");
            (*pcVar3)(pFVar2,&local_878,0);
            if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_878.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        puVar1 = param_1->NextIndexData + uVar13;
        iVar14 = iVar14 + 1;
        uVar13 = 0xffffffff;
        if (*puVar1 != 0xffff) {
          uVar13 = (ulonglong)*puVar1;
        }
        uVar9 = (uint)uVar13;
      }
      iVar12 = 0;
      uVar9 = 0xffffffff;
      if (param_2->HashData[(byte)*puVar11] != 0xffff) {
        uVar9 = (uint)param_2->HashData[(byte)*puVar11];
      }
      while (uVar9 != uVar4) {
        if (uVar9 == 0xffffffff) {
          if (uVar4 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar2 = pFVar8->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_868,L"Condition failed");
            (*pcVar3)(pFVar2,&local_868,0);
            if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_868.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        uVar13 = (ulonglong)uVar9;
        iVar12 = iVar12 + 1;
        uVar9 = (uint)param_2->NextIndexData[uVar13];
        if (param_2->NextIndexData[uVar13] == 0xffff) {
          uVar9 = 0xffffffff;
        }
      }
      if (iVar14 != iVar12) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar2 = pFVar8->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_858,L"Condition failed");
        (*pcVar3)(pFVar2,&local_858,0);
        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_858.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar13 = (ulonglong)local_8d8;
    local_8c8 = local_8c8 + 1;
    if (0xff < local_8c8) {
      return;
    }
  } while( true );
}

// TestSynchedTables<256,FCompactHashTableView> @ 141b0f690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestSynchedTables<256,FCompactHashTableView>
          (FCompactHashTableView *param_1,FCompactHashTableView *param_2)

{
  undefined2 *puVar1;
  ushort uVar2;
  uint uVar3;
  FAutomationTestBase *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  char cVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint *puVar21;
  undefined1 auStackY_908 [32];
  uint local_8c4;
  uint local_8c0;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  uint local_848 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_908;
  uVar12 = 0;
  puVar15 = local_848 + 1;
  lVar17 = 0;
  do {
    uVar18 = uVar12 * 0x100 + 0xf9;
    uVar13 = *(uint *)&param_1->field_0x10;
    puVar15[-1] = uVar18;
    *puVar15 = uVar12 * 0x100 + 0xfa;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_1->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar13) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar10 = (undefined1 *)
                ((ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) +
                *(longlong *)&param_1->field_0x8);
      *(undefined1 *)(lVar17 + *(longlong *)param_1) = *puVar10;
      *puVar10 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar1 = (undefined2 *)
               (*(longlong *)&param_1->field_0x8 +
               (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) * 2);
      *(undefined2 *)(*(longlong *)param_1 + lVar17 * 2) = *puVar1;
      *puVar1 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar21 = (uint *)(*(longlong *)&param_1->field_0x8 +
                        (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) * 4);
      *(uint *)(*(longlong *)param_1 + lVar17 * 4) = *puVar21;
      *puVar21 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar13 = *puVar15;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_2->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar10 = (undefined1 *)
                ((ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) +
                *(longlong *)&param_2->field_0x8);
      *(undefined1 *)(lVar17 + *(longlong *)param_2) = *puVar10;
      *puVar10 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar1 = (undefined2 *)
               (*(longlong *)&param_2->field_0x8 +
               (ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) * 2);
      *(undefined2 *)(*(longlong *)param_2 + lVar17 * 2) = *puVar1;
      *puVar1 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar21 = (uint *)(*(longlong *)&param_2->field_0x8 +
                        (ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) * 4);
      *(uint *)(*(longlong *)param_2 + lVar17 * 4) = *puVar21;
      *puVar21 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = uVar12 + 1;
    lVar17 = lVar17 + 1;
    puVar15 = puVar15 + 2;
  } while (uVar12 < 0x100);
  uVar16 = 0x100;
  local_8c4 = 0x100;
  local_8c0 = 0;
  do {
    iVar20 = 0;
    uVar16 = (ulonglong)local_848[((ulonglong)local_8c0 % uVar16) * 2] % uVar16;
    uVar13 = (uint)uVar16;
    puVar15 = local_848 + uVar16 * 2;
    uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,*puVar15);
    uVar19 = (ulonglong)uVar12;
    while (uVar12 != uVar13) {
      if ((int)uVar19 == -1) {
        if (uVar13 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_8a8,L"Condition failed");
          (*pcVar6)(pFVar4,&local_8a8,0);
          if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar20 = iVar20 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_1->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar11 = (ulonglong)*(byte *)(uVar19 + *(longlong *)param_1);
        bVar7 = *(byte *)(uVar19 + *(longlong *)param_1) == 0xff;
LAB_141b0f96f:
        uVar19 = 0xffffffff;
        if (!bVar7) {
          uVar19 = uVar11;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar2 = *(ushort *)(*(longlong *)param_1 + uVar19 * 2);
          uVar11 = (ulonglong)uVar2;
          bVar7 = uVar2 == 0xffff;
          goto LAB_141b0f96f;
        }
        if (cVar9 == '\x04') {
          uVar12 = *(uint *)(*(longlong *)param_1 + uVar19 * 4);
          if (uVar12 == 0xffffffff) {
            uVar12 = 0xffffffff;
          }
          uVar19 = (ulonglong)uVar12;
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = 0xffffffff;
        }
      }
      uVar12 = (uint)uVar19;
    }
    puVar21 = local_848 + uVar16 * 2 + 1;
    iVar14 = 0;
    uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_2,*puVar21);
    while (uVar12 != uVar13) {
      if (uVar12 == 0xffffffff) {
        if (uVar13 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_898,L"Condition failed");
          (*pcVar6)(pFVar4,&local_898,0);
          if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_898.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar14 = iVar14 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_2->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_2);
        bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_2) == 0xff;
LAB_141b0fa88:
        uVar12 = uVar18;
        if (bVar7) {
LAB_141b0fa8a:
          uVar12 = 0xffffffff;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar2 = *(ushort *)(*(longlong *)param_2 + (ulonglong)uVar12 * 2);
          uVar18 = (uint)uVar2;
          bVar7 = uVar2 == 0xffff;
          goto LAB_141b0fa88;
        }
        if (cVar9 != '\x04') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_141b0fa8a;
        }
        uVar12 = *(uint *)(*(longlong *)param_2 + (ulonglong)uVar12 * 4);
        if (uVar12 == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
      }
    }
    if (iVar20 != iVar14) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_888,L"Condition failed");
      (*pcVar6)(pFVar4,&local_888,0);
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = *(uint *)&param_1->field_0x10;
    local_8c4 = local_8c4 - 1;
    uVar16 = (ulonglong)local_8c4;
    uVar18 = local_848[uVar16 * 2];
    uVar3 = *puVar15;
    cVar9 = '\0';
    if (0xffff < uVar12) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar12) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar13,uVar3,local_8c4,uVar18,*(uchar **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uchar **)param_1,uVar12);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar13,uVar3,local_8c4,uVar18,*(ushort **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(ushort **)param_1,uVar12);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar13,uVar3,local_8c4,uVar18,*(uint **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uint **)param_1,uVar12);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = *(uint *)&param_2->field_0x10;
    uVar18 = local_848[uVar16 * 2 + 1];
    uVar3 = *puVar21;
    cVar9 = '\0';
    if (0xffff < uVar12) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar12) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar13,uVar3,local_8c4,uVar18,*(uchar **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(uchar **)param_2,uVar12);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar13,uVar3,local_8c4,uVar18,*(ushort **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(ushort **)param_2,uVar12);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar13,uVar3,local_8c4,uVar18,*(uint **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(uint **)param_2,uVar12);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar13 != local_8c4) {
      uVar5 = *(undefined8 *)(local_848 + uVar16 * 2);
      *(undefined8 *)puVar15 = uVar5;
      iVar20 = 0;
      uVar12 = FConstCompactHashTableView::GetFirst
                         ((FConstCompactHashTableView *)param_1,(uint)uVar5);
      while (uVar12 != uVar13) {
        if (uVar12 == 0xffffffff) {
          if (uVar13 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::FString(&local_878,L"Condition failed");
            (*pcVar6)(pFVar4,&local_878,0);
            if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_878.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        iVar20 = iVar20 + 1;
        cVar9 = '\0';
        if (0xffff < *(uint *)&param_1->field_0x10) {
          cVar9 = '\x02';
        }
        cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
        if (cVar9 == '\x01') {
          uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_1);
          bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_1) == 0xff;
LAB_141b0fe1c:
          uVar12 = uVar18;
          if (bVar7) {
LAB_141b0fe1e:
            uVar12 = 0xffffffff;
          }
        }
        else {
          if (cVar9 == '\x02') {
            uVar2 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar12 * 2);
            uVar18 = (uint)uVar2;
            bVar7 = uVar2 == 0xffff;
            goto LAB_141b0fe1c;
          }
          if (cVar9 != '\x04') {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x146,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_141b0fe1e;
          }
          uVar12 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar12 * 4);
          if (uVar12 == 0xffffffff) {
            uVar12 = 0xffffffff;
          }
        }
      }
      iVar14 = 0;
      uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_2,*puVar21);
joined_r0x000141b0fe86:
      if (uVar12 != uVar13) {
        if (uVar12 == 0xffffffff) {
          if (uVar13 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::FString(&local_868,L"Condition failed");
            (*pcVar6)(pFVar4,&local_868,0);
            if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_868.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141b0ff7b;
        }
        iVar14 = iVar14 + 1;
        cVar9 = '\0';
        if (0xffff < *(uint *)&param_2->field_0x10) {
          cVar9 = '\x02';
        }
        cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
        if (cVar9 == '\x01') {
          uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_2);
          bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_2) == 0xff;
        }
        else {
          if (cVar9 != '\x02') {
            if (cVar9 == '\x04') {
              uVar12 = *(uint *)(*(longlong *)param_2 + (ulonglong)uVar12 * 4);
              if (uVar12 == 0xffffffff) {
                uVar12 = 0xffffffff;
              }
            }
            else {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                                 ,0x146,L"");
              uVar12 = 0xffffffff;
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            goto joined_r0x000141b0fe86;
          }
          uVar2 = *(ushort *)(*(longlong *)param_2 + (ulonglong)uVar12 * 2);
          uVar18 = (uint)uVar2;
          bVar7 = uVar2 == 0xffff;
        }
        uVar12 = 0xffffffff;
        if (!bVar7) {
          uVar12 = uVar18;
        }
        goto joined_r0x000141b0fe86;
      }
LAB_141b0ff7b:
      if (iVar20 != iVar14) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar4 = pFVar8->CurrentTest;
        pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_858,L"Condition failed");
        (*pcVar6)(pFVar4,&local_858,0);
        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_858.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar16 = (ulonglong)local_8c4;
    local_8c0 = local_8c0 + 1;
    if (0xff < local_8c0) {
      return;
    }
  } while( true );
}

// TestSynchedTables<255,TStaticCompactHashTable<255,128>_> @ 141b10010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestSynchedTables<255,TStaticCompactHashTable<255,128>_>
          (TStaticCompactHashTable<255,128> *param_1,TStaticCompactHashTable<255,128> *param_2)

{
  uchar *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  FAutomationTestFramework *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TStaticCompactHashTable<255,128> *pTVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStackY_918 [32];
  uint local_8d8;
  uint local_8d4;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  FString local_880;
  FString local_870;
  FString local_860;
  uint local_848 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_918;
  uVar10 = 0;
  pTVar11 = param_2;
  puVar12 = local_848 + 1;
  do {
    uVar8 = uVar10 * 0xff + 0xf8;
    puVar12[-1] = uVar8;
    uVar9 = uVar10 * 0xff + 0xf9;
    uVar8 = uVar8 & 0x7f;
    *puVar12 = uVar9;
    uVar9 = uVar9 & 0x7f;
    *(uchar *)((longlong)param_1 + (-1 - (longlong)param_2) + (longlong)(pTVar11->NextIndexData + 1)
              ) = param_1->HashData[uVar8];
    param_1->HashData[uVar8] = (uchar)uVar10;
    pTVar11->NextIndexData[0] = param_2->HashData[uVar9];
    param_2->HashData[uVar9] = (uchar)uVar10;
    uVar10 = uVar10 + 1;
    pTVar11 = (TStaticCompactHashTable<255,128> *)(pTVar11->NextIndexData + 1);
    puVar12 = puVar12 + 2;
  } while (uVar10 < 0xff);
  uVar14 = 0xff;
  local_8d8 = 0xff;
  local_8d4 = 0;
  do {
    iVar15 = 0;
    uVar14 = (ulonglong)local_848[((ulonglong)local_8d4 % uVar14) * 2] % uVar14;
    uVar10 = local_848[uVar14 * 2];
    uVar6 = (ulonglong)param_1->HashData[uVar10 & 0x7f];
    if (param_1->HashData[uVar10 & 0x7f] == 0xff) {
      uVar6 = 0xffffffff;
    }
    uVar8 = (uint)uVar14;
    uVar9 = (uint)uVar6;
    while (uVar9 != uVar8) {
      if ((int)uVar6 == -1) {
        if (uVar8 != 0xffffffff) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_8b0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_8b0,0);
          if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_1->NextIndexData + uVar6;
      iVar15 = iVar15 + 1;
      uVar6 = 0xffffffff;
      if (*puVar1 != 0xff) {
        uVar6 = (ulonglong)*puVar1;
      }
      uVar9 = (uint)uVar6;
    }
    iVar13 = 0;
    uVar9 = local_848[uVar14 * 2 + 1];
    uVar6 = (ulonglong)param_2->HashData[uVar9 & 0x7f];
    if (param_2->HashData[uVar9 & 0x7f] == 0xff) {
      uVar6 = 0xffffffff;
    }
    uVar5 = (uint)uVar6;
    while (uVar5 != uVar8) {
      if ((int)uVar6 == -1) {
        if (uVar8 != 0xffffffff) {
          pFVar7 = FAutomationTestFramework::Get();
          pFVar2 = pFVar7->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_8a0,L"Condition failed");
          (*pcVar3)(pFVar2,&local_8a0,0);
          if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      puVar1 = param_2->NextIndexData + uVar6;
      iVar13 = iVar13 + 1;
      uVar6 = 0xffffffff;
      if (*puVar1 != 0xff) {
        uVar6 = (ulonglong)*puVar1;
      }
      uVar5 = (uint)uVar6;
    }
    if (iVar15 != iVar13) {
      pFVar7 = FAutomationTestFramework::Get();
      pFVar2 = pFVar7->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_890,L"Condition failed");
      (*pcVar3)(pFVar2,&local_890,0);
      if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_890.Data.AllocatorInstance.Data);
      }
    }
    local_8d8 = local_8d8 - 1;
    uVar6 = (ulonglong)local_8d8;
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar8,uVar10,local_8d8,local_848[uVar6 * 2],param_1->HashData,0x80,
               param_1->NextIndexData,0xff);
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (uVar8,uVar9,local_8d8,local_848[uVar6 * 2 + 1],param_2->HashData,0x80,
               param_2->NextIndexData,0xff);
    if (uVar8 != local_8d8) {
      uVar4 = *(undefined8 *)(local_848 + uVar6 * 2);
      iVar15 = 0;
      *(undefined8 *)(local_848 + uVar14 * 2) = uVar4;
      uVar6 = (ulonglong)param_1->HashData[(uint)uVar4 & 0x7f];
      if (param_1->HashData[(uint)uVar4 & 0x7f] == 0xff) {
        uVar6 = 0xffffffff;
      }
      uVar10 = (uint)uVar6;
      while (uVar10 != uVar8) {
        if ((int)uVar6 == -1) {
          if (uVar8 != 0xffffffff) {
            pFVar7 = FAutomationTestFramework::Get();
            pFVar2 = pFVar7->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_880,L"Condition failed");
            (*pcVar3)(pFVar2);
            if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_880.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        puVar1 = param_1->NextIndexData + uVar6;
        iVar15 = iVar15 + 1;
        uVar6 = 0xffffffff;
        if (*puVar1 != 0xff) {
          uVar6 = (ulonglong)*puVar1;
        }
        uVar10 = (uint)uVar6;
      }
      iVar13 = 0;
      uVar10 = 0xffffffff;
      if (param_2->HashData[local_848[uVar14 * 2 + 1] & 0x7f] != 0xff) {
        uVar10 = (uint)param_2->HashData[local_848[uVar14 * 2 + 1] & 0x7f];
      }
      while (uVar10 != uVar8) {
        if (uVar10 == 0xffffffff) {
          if (uVar8 != 0xffffffff) {
            pFVar7 = FAutomationTestFramework::Get();
            pFVar2 = pFVar7->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_870,L"Condition failed");
            (*pcVar3)(pFVar2);
            if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_870.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        uVar14 = (ulonglong)uVar10;
        iVar13 = iVar13 + 1;
        uVar10 = (uint)param_2->NextIndexData[uVar14];
        if (param_2->NextIndexData[uVar14] == 0xff) {
          uVar10 = 0xffffffff;
        }
      }
      if (iVar15 != iVar13) {
        pFVar7 = FAutomationTestFramework::Get();
        pFVar2 = pFVar7->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_860,L"Condition failed");
        (*pcVar3)(pFVar2);
        if (local_860.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_860.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar14 = (ulonglong)local_8d8;
    local_8d4 = local_8d4 + 1;
    if (0xfe < local_8d4) {
      return;
    }
  } while( true );
}

// TestSynchedTables<255,FCompactHashTableView> @ 141b104a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FCommonCompactHashTableTests::TestSynchedTables<255,FCompactHashTableView>
          (FCompactHashTableView *param_1,FCompactHashTableView *param_2)

{
  undefined2 *puVar1;
  ushort uVar2;
  uint uVar3;
  FAutomationTestBase *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  char cVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint *puVar21;
  undefined1 auStackY_908 [32];
  uint local_8c4;
  uint local_8c0;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  uint local_848 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_908;
  uVar12 = 0;
  puVar15 = local_848 + 1;
  lVar17 = 0;
  do {
    uVar18 = uVar12 * 0xff + 0xf8;
    uVar13 = *(uint *)&param_1->field_0x10;
    puVar15[-1] = uVar18;
    *puVar15 = uVar12 * 0xff + 0xf9;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_1->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar13) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar10 = (undefined1 *)
                ((ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) +
                *(longlong *)&param_1->field_0x8);
      *(undefined1 *)(lVar17 + *(longlong *)param_1) = *puVar10;
      *puVar10 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar1 = (undefined2 *)
               (*(longlong *)&param_1->field_0x8 +
               (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) * 2);
      *(undefined2 *)(*(longlong *)param_1 + lVar17 * 2) = *puVar1;
      *puVar1 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar21 = (uint *)(*(longlong *)&param_1->field_0x8 +
                        (ulonglong)(*(int *)&param_1->field_0x14 - 1U & uVar18) * 4);
      *(uint *)(*(longlong *)param_1 + lVar17 * 4) = *puVar21;
      *puVar21 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar13 = *puVar15;
    cVar9 = '\0';
    if (0xffff < *(uint *)&param_2->field_0x10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      puVar10 = (undefined1 *)
                ((ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) +
                *(longlong *)&param_2->field_0x8);
      *(undefined1 *)(lVar17 + *(longlong *)param_2) = *puVar10;
      *puVar10 = (char)uVar12;
    }
    else if (cVar9 == '\x02') {
      puVar1 = (undefined2 *)
               (*(longlong *)&param_2->field_0x8 +
               (ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) * 2);
      *(undefined2 *)(*(longlong *)param_2 + lVar17 * 2) = *puVar1;
      *puVar1 = (short)uVar12;
    }
    else if (cVar9 == '\x04') {
      puVar21 = (uint *)(*(longlong *)&param_2->field_0x8 +
                        (ulonglong)(*(int *)&param_2->field_0x14 - 1U & uVar13) * 4);
      *(uint *)(*(longlong *)param_2 + lVar17 * 4) = *puVar21;
      *puVar21 = uVar12;
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x171,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = uVar12 + 1;
    lVar17 = lVar17 + 1;
    puVar15 = puVar15 + 2;
  } while (uVar12 < 0xff);
  uVar16 = 0xff;
  local_8c4 = 0xff;
  local_8c0 = 0;
  do {
    iVar20 = 0;
    uVar16 = (ulonglong)local_848[((ulonglong)local_8c0 % uVar16) * 2] % uVar16;
    uVar13 = (uint)uVar16;
    puVar15 = local_848 + uVar16 * 2;
    uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_1,*puVar15);
    uVar19 = (ulonglong)uVar12;
    while (uVar12 != uVar13) {
      if ((int)uVar19 == -1) {
        if (uVar13 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_8a8,L"Condition failed");
          (*pcVar6)(pFVar4,&local_8a8,0);
          if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar20 = iVar20 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_1->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar11 = (ulonglong)*(byte *)(uVar19 + *(longlong *)param_1);
        bVar7 = *(byte *)(uVar19 + *(longlong *)param_1) == 0xff;
LAB_141b1077f:
        uVar19 = 0xffffffff;
        if (!bVar7) {
          uVar19 = uVar11;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar2 = *(ushort *)(*(longlong *)param_1 + uVar19 * 2);
          uVar11 = (ulonglong)uVar2;
          bVar7 = uVar2 == 0xffff;
          goto LAB_141b1077f;
        }
        if (cVar9 == '\x04') {
          uVar12 = *(uint *)(*(longlong *)param_1 + uVar19 * 4);
          if (uVar12 == 0xffffffff) {
            uVar12 = 0xffffffff;
          }
          uVar19 = (ulonglong)uVar12;
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = 0xffffffff;
        }
      }
      uVar12 = (uint)uVar19;
    }
    puVar21 = local_848 + uVar16 * 2 + 1;
    iVar14 = 0;
    uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_2,*puVar21);
    while (uVar12 != uVar13) {
      if (uVar12 == 0xffffffff) {
        if (uVar13 != 0xffffffff) {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::FString(&local_898,L"Condition failed");
          (*pcVar6)(pFVar4,&local_898,0);
          if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_898.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar14 = iVar14 + 1;
      cVar9 = '\0';
      if (0xffff < *(uint *)&param_2->field_0x10) {
        cVar9 = '\x02';
      }
      cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
      if (cVar9 == '\x01') {
        uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_2);
        bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_2) == 0xff;
LAB_141b10898:
        uVar12 = uVar18;
        if (bVar7) {
LAB_141b1089a:
          uVar12 = 0xffffffff;
        }
      }
      else {
        if (cVar9 == '\x02') {
          uVar2 = *(ushort *)(*(longlong *)param_2 + (ulonglong)uVar12 * 2);
          uVar18 = (uint)uVar2;
          bVar7 = uVar2 == 0xffff;
          goto LAB_141b10898;
        }
        if (cVar9 != '\x04') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x146,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_141b1089a;
        }
        uVar12 = *(uint *)(*(longlong *)param_2 + (ulonglong)uVar12 * 4);
        if (uVar12 == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
      }
    }
    if (iVar20 != iVar14) {
      pFVar8 = FAutomationTestFramework::Get();
      pFVar4 = pFVar8->CurrentTest;
      pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::FString(&local_888,L"Condition failed");
      (*pcVar6)(pFVar4,&local_888,0);
      if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.Data.AllocatorInstance.Data);
      }
    }
    uVar12 = *(uint *)&param_1->field_0x10;
    local_8c4 = local_8c4 - 1;
    uVar16 = (ulonglong)local_8c4;
    uVar18 = local_848[uVar16 * 2];
    uVar3 = *puVar15;
    cVar9 = '\0';
    if (0xffff < uVar12) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar12) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar13,uVar3,local_8c4,uVar18,*(uchar **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uchar **)param_1,uVar12);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar13,uVar3,local_8c4,uVar18,*(ushort **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(ushort **)param_1,uVar12);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar13,uVar3,local_8c4,uVar18,*(uint **)&param_1->field_0x8,
                 *(uint *)&param_1->field_0x14,*(uint **)param_1,uVar12);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar12 = *(uint *)&param_2->field_0x10;
    uVar18 = local_848[uVar16 * 2 + 1];
    uVar3 = *puVar21;
    cVar9 = '\0';
    if (0xffff < uVar12) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar12) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (uVar13,uVar3,local_8c4,uVar18,*(uchar **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(uchar **)param_2,uVar12);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (uVar13,uVar3,local_8c4,uVar18,*(ushort **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(ushort **)param_2,uVar12);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (uVar13,uVar3,local_8c4,uVar18,*(uint **)&param_2->field_0x8,
                 *(uint *)&param_2->field_0x14,*(uint **)param_2,uVar12);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar13 != local_8c4) {
      uVar5 = *(undefined8 *)(local_848 + uVar16 * 2);
      *(undefined8 *)puVar15 = uVar5;
      iVar20 = 0;
      uVar12 = FConstCompactHashTableView::GetFirst
                         ((FConstCompactHashTableView *)param_1,(uint)uVar5);
      while (uVar12 != uVar13) {
        if (uVar12 == 0xffffffff) {
          if (uVar13 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::FString(&local_878,L"Condition failed");
            (*pcVar6)(pFVar4,&local_878,0);
            if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_878.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        iVar20 = iVar20 + 1;
        cVar9 = '\0';
        if (0xffff < *(uint *)&param_1->field_0x10) {
          cVar9 = '\x02';
        }
        cVar9 = (0xff < *(uint *)&param_1->field_0x10) + '\x01' + cVar9;
        if (cVar9 == '\x01') {
          uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_1);
          bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_1) == 0xff;
LAB_141b10c2c:
          uVar12 = uVar18;
          if (bVar7) {
LAB_141b10c2e:
            uVar12 = 0xffffffff;
          }
        }
        else {
          if (cVar9 == '\x02') {
            uVar2 = *(ushort *)(*(longlong *)param_1 + (ulonglong)uVar12 * 2);
            uVar18 = (uint)uVar2;
            bVar7 = uVar2 == 0xffff;
            goto LAB_141b10c2c;
          }
          if (cVar9 != '\x04') {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x146,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_141b10c2e;
          }
          uVar12 = *(uint *)(*(longlong *)param_1 + (ulonglong)uVar12 * 4);
          if (uVar12 == 0xffffffff) {
            uVar12 = 0xffffffff;
          }
        }
      }
      iVar14 = 0;
      uVar12 = FConstCompactHashTableView::GetFirst((FConstCompactHashTableView *)param_2,*puVar21);
joined_r0x000141b10c96:
      if (uVar12 != uVar13) {
        if (uVar12 == 0xffffffff) {
          if (uVar13 != 0xffffffff) {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::FString(&local_868,L"Condition failed");
            (*pcVar6)(pFVar4,&local_868,0);
            if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_868.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141b10d8b;
        }
        iVar14 = iVar14 + 1;
        cVar9 = '\0';
        if (0xffff < *(uint *)&param_2->field_0x10) {
          cVar9 = '\x02';
        }
        cVar9 = (0xff < *(uint *)&param_2->field_0x10) + '\x01' + cVar9;
        if (cVar9 == '\x01') {
          uVar18 = (uint)*(byte *)((ulonglong)uVar12 + *(longlong *)param_2);
          bVar7 = *(byte *)((ulonglong)uVar12 + *(longlong *)param_2) == 0xff;
        }
        else {
          if (cVar9 != '\x02') {
            if (cVar9 == '\x04') {
              uVar12 = *(uint *)(*(longlong *)param_2 + (ulonglong)uVar12 * 4);
              if (uVar12 == 0xffffffff) {
                uVar12 = 0xffffffff;
              }
            }
            else {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                                 ,0x146,L"");
              uVar12 = 0xffffffff;
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            goto joined_r0x000141b10c96;
          }
          uVar2 = *(ushort *)(*(longlong *)param_2 + (ulonglong)uVar12 * 2);
          uVar18 = (uint)uVar2;
          bVar7 = uVar2 == 0xffff;
        }
        uVar12 = 0xffffffff;
        if (!bVar7) {
          uVar12 = uVar18;
        }
        goto joined_r0x000141b10c96;
      }
LAB_141b10d8b:
      if (iVar20 != iVar14) {
        pFVar8 = FAutomationTestFramework::Get();
        pFVar4 = pFVar8->CurrentTest;
        pcVar6 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_858,L"Condition failed");
        (*pcVar6)(pFVar4,&local_858,0);
        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_858.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar16 = (ulonglong)local_8c4;
    local_8c0 = local_8c0 + 1;
    if (0xfe < local_8c0) {
      return;
    }
  } while( true );
}

