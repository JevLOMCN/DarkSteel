// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ApplyPatches @ 1419e1b20

bool __thiscall
FMemoryImageResult::ApplyPatches(FMemoryImageResult *this,void *param_1,ulong64 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  FTypeLayoutDesc *pFVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [4];
  FMemoryImageName local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  iVar1 = (this->VTables).ArrayNum;
  pFVar13 = (this->VTables).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->VTables).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMemoryImageVTablePointer_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar14) {
      iVar1 = (this->ScriptNames).ArrayNum;
      pFVar14 = (this->ScriptNames).AllocatorInstance.Data;
      pFVar13 = pFVar14 + (longlong)iVar1 * 0xc;
      while( true ) {
        if ((this->ScriptNames).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FMemoryImageNamePointer_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar14 == pFVar13) break;
        uVar4 = *(ulonglong *)pFVar14;
        uVar12 = (ulonglong)*(uint *)(pFVar14 + 8);
        local_4c = (undefined4)uVar4;
        uStack_48 = 0;
        if (param_2 - 0xc < uVar12) {
          return false;
        }
        pFVar14 = pFVar14 + 0xc;
        *(ulonglong *)(uVar12 + (longlong)param_1) = uVar4 & 0xffffffff;
        *(int *)(uVar12 + 8 + (longlong)param_1) = (int)(uVar4 >> 0x20);
      }
      iVar1 = (this->MemoryImageNames).ArrayNum;
      pFVar14 = (this->MemoryImageNames).AllocatorInstance.Data;
      pFVar13 = pFVar14 + (longlong)iVar1 * 0xc;
      while( true ) {
        if ((this->MemoryImageNames).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FMemoryImageNamePointer_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_58);
        }
        if (pFVar14 == pFVar13) break;
        local_54.ComparisonIndex.Value = *(uint *)pFVar14;
        local_54.Number = *(uint *)(pFVar14 + 4);
        uVar6 = *(undefined8 *)pFVar14;
        if (param_2 - 8 < (ulonglong)*(uint *)(pFVar14 + 8)) {
          return false;
        }
        puVar11 = (undefined8 *)((ulonglong)*(uint *)(pFVar14 + 8) + (longlong)param_1);
        if (((this->TargetLayoutParameters).Flags == 5) &&
           ((this->TargetLayoutParameters).MaxFieldAlignment == 8)) {
          pFVar14 = pFVar14 + 0xc;
          *puVar11 = uVar6;
        }
        else {
          Freeze::ApplyMemoryImageNamePatch(puVar11,&local_54,&this->TargetLayoutParameters);
          pFVar14 = pFVar14 + 0xc;
        }
      }
      return true;
    }
    pFVar9 = FTypeLayoutDesc::Find(*(ulong64 *)pFVar13);
    if ((pFVar9 == (FTypeLayoutDesc *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DerivedType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                           ,0x686,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar2 = *(uint *)(pFVar13 + 0xc);
    if ((param_2 - 8 < (ulonglong)uVar2) ||
       (uVar3 = *(uint *)(pFVar13 + 8), (ulonglong)pFVar9->Size - 8 < (ulonglong)uVar3)) break;
    pvVar10 = (*pFVar9->GetDefaultObjectFunc)();
    pFVar13 = pFVar13 + 0x10;
    *(undefined8 *)((ulonglong)uVar2 + (longlong)param_1) =
         *(undefined8 *)((longlong)pvVar10 + (ulonglong)uVar3);
  }
  return false;
}

// LoadFromArchive @ 141a09080

/* WARNING: Enum "Type": Some values do not have unique names */

TMemoryImageObject<void> * __cdecl
FMemoryImageResult::LoadFromArchive
          (TMemoryImageObject<void> *__return_storage_ptr__,FArchive *param_1,
          FTypeLayoutDesc *param_2,FPointerTableBase *param_3,FPlatformTypeLayoutParameters *param_4
          )

{
  FMemoryImageName *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  TMemoryImageObject<void> *pTVar10;
  FTypeLayoutDesc *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar16;
  uint local_res20 [2];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  void *local_90;
  uint local_88;
  ulong64 local_80;
  ulonglong local_78;
  byte *local_70;
  FMemoryImageName local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  FMemoryImageName local_54 [2];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar7 = false;
    bVar4 = false;
  }
  else {
    bVar7 = true;
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1698,"FMemoryImageResult_LoadFromArchive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
               ,0x6a2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1698);
  }
  ::operator<<(param_1,param_4);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  pbVar16 = &param_1->field_0x2a;
  local_70 = pbVar16;
  pvVar9 = FMemory::Malloc((ulonglong)local_res20[0],0);
  local_90 = pvVar9;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvVar9,local_res20[0]);
  cVar5 = (**(code **)((longlong)*param_3 + 0x20))(param_3,param_1,param_4,pvVar9);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*pbVar16 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_b4);
    }
  }
  else {
    local_b4 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*pbVar16 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ac,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_ac);
    }
  }
  else {
    local_ac = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*pbVar16 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_a4);
    }
  }
  else {
    local_a4 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((0xffffff < local_b4) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4725416357288478394>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                         ,0x6ba,"NumVTables < kReasonableMemoryImageElementCount"), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TMemoryImageObject<void> *)(*pcVar3)();
    return pTVar10;
  }
  local_88 = 0;
  uVar15 = 0x1000000;
  if (local_b4 < 0x1000000) {
    uVar15 = local_b4;
  }
  local_b4 = uVar15;
  if (uVar15 != 0) {
    do {
      uVar15 = 0;
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_80 = 0;
      local_b8 = 0;
      if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
        if ((*pbVar16 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_80,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_80);
        }
      }
      else {
        local_80 = *(ulong64 *)*plVar2;
        *plVar2 = *plVar2 + 8;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((*pbVar16 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_b8);
        }
      }
      else {
        local_b8 = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if (cVar5 == '\0') {
        pFVar11 = (FTypeLayoutDesc *)0x0;
      }
      else {
        pFVar11 = FTypeLayoutDesc::Find(local_80);
        if ((pFVar11 == (FTypeLayoutDesc *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("DerivedType || !bFrozenObjectValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x6c5,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TMemoryImageObject<void> *)(*pcVar3)();
          return pTVar10;
        }
      }
      if ((0xffffff < local_b8) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4725416357288478407>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                             ,0x6c7,"NumPatches < kReasonableMemoryImageElementCount"), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMemoryImageObject<void> *)(*pcVar3)();
        return pTVar10;
      }
      pbVar16 = local_70;
      uVar13 = 0x1000000;
      if (local_b8 < 0x1000000) {
        uVar13 = local_b8;
      }
      local_b8 = uVar13;
      if (uVar13 != 0) {
        do {
          plVar2 = *(longlong **)&param_1->field_0x8;
          local_9c = 0;
          local_a0 = 0;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            if ((*pbVar16 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_9c,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_9c);
            }
          }
          else {
            local_9c = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          plVar2 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            if ((*pbVar16 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a0,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_a0);
            }
          }
          else {
            local_a0 = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          if (cVar5 != '\0') {
            uVar12 = (ulonglong)local_a0;
            if (((ulonglong)local_res20[0] - 8 < uVar12) ||
               (uVar14 = (ulonglong)local_9c, (ulonglong)pFVar11->Size - 8 < uVar14)) {
              cVar5 = '\0';
            }
            else {
              pvVar9 = (*pFVar11->GetDefaultObjectFunc)();
              *(undefined8 *)(uVar12 + (longlong)local_90) =
                   *(undefined8 *)((longlong)pvVar9 + uVar14);
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < local_b8);
      }
      local_88 = local_88 + 1;
      pbVar16 = local_70;
      bVar7 = bVar4;
    } while (local_88 < local_b4);
  }
  uVar15 = 0;
  if ((0xffffff < local_ac) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4725416357288478423>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                         ,0x6d7,"NumScriptNames < kReasonableMemoryImageElementCount"), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TMemoryImageObject<void> *)(*pcVar3)();
    return pTVar10;
  }
  pvVar9 = local_90;
  uVar13 = 0x1000000;
  if (local_ac < 0x1000000) {
    uVar13 = local_ac;
  }
  local_ac = uVar13;
  if (uVar13 != 0) {
    do {
      uVar13 = 0;
      local_78 = 0;
      local_b0 = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_78);
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((*pbVar16 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b0,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_b0);
        }
      }
      else {
        local_b0 = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if ((0xffffff < local_b0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4725416357288478433>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                             ,0x6e1,"NumPatches < kReasonableMemoryImageElementCount"), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMemoryImageObject<void> *)(*pcVar3)();
        return pTVar10;
      }
      uVar8 = 0x1000000;
      if (local_b0 < 0x1000000) {
        uVar8 = local_b0;
      }
      local_b0 = uVar8;
      if (uVar8 != 0) {
        do {
          plVar2 = *(longlong **)&param_1->field_0x8;
          local_98 = 0;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            if ((*pbVar16 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_98);
            }
          }
          else {
            local_98 = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          if (cVar5 != '\0') {
            uVar12 = (ulonglong)local_98;
            local_60 = (undefined4)local_78;
            uStack_5c = 0;
            local_58 = (undefined4)(local_78 >> 0x20);
            if ((ulonglong)local_res20[0] - 0xc < uVar12) {
              cVar5 = '\0';
            }
            else {
              *(ulonglong *)(uVar12 + (longlong)pvVar9) = local_78 & 0xffffffff;
              *(undefined4 *)(uVar12 + 8 + (longlong)pvVar9) = local_58;
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_b0);
      }
      uVar15 = uVar15 + 1;
      bVar7 = bVar4;
    } while (uVar15 < local_ac);
  }
  uVar15 = 0;
  if ((0xffffff < local_a4) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4725416357288478447>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                         ,0x6ef,"NumMemoryImageNames < kReasonableMemoryImageElementCount"), bVar6))
  {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TMemoryImageObject<void> *)(*pcVar3)();
    return pTVar10;
  }
  pvVar9 = local_90;
  uVar13 = 0x1000000;
  if (local_a4 < 0x1000000) {
    uVar13 = local_a4;
  }
  local_a4 = uVar13;
  if (uVar13 != 0) {
    do {
      uVar13 = 0;
      local_68.ComparisonIndex.Value = 0;
      local_68.Number = 0;
      local_a8 = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_68);
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((*pbVar16 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
        }
      }
      else {
        local_a8 = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if ((0xffffff < local_a8) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4725416357288478457>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                             ,0x6f9,"NumPatches < kReasonableMemoryImageElementCount"), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMemoryImageObject<void> *)(*pcVar3)();
        return pTVar10;
      }
      uVar8 = 0x1000000;
      if (local_a8 < 0x1000000) {
        uVar8 = local_a8;
      }
      local_a8 = uVar8;
      if (uVar8 != 0) {
        do {
          plVar2 = *(longlong **)&param_1->field_0x8;
          local_94 = 0;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            if ((*pbVar16 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_94);
            }
          }
          else {
            local_94 = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          if (cVar5 != '\0') {
            local_54[0] = local_68;
            if ((ulonglong)local_res20[0] - 8 < (ulonglong)local_94) {
              cVar5 = '\0';
            }
            else {
              pFVar1 = (FMemoryImageName *)((ulonglong)local_94 + (longlong)pvVar9);
              if ((param_4->Flags == 5) && (param_4->MaxFieldAlignment == 8)) {
                *pFVar1 = local_68;
              }
              else {
                Freeze::ApplyMemoryImageNamePatch(pFVar1,local_54,param_4);
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_a8);
      }
      uVar15 = uVar15 + 1;
      bVar7 = bVar4;
    } while (uVar15 < local_a4);
  }
  if (cVar5 == '\0') {
    FMemory::Free(local_90);
    __return_storage_ptr__->TypeDesc = (FTypeLayoutDesc *)0x0;
  }
  else {
    if ((param_4->Flags == 5) && (param_4->MaxFieldAlignment == 8)) {
      __return_storage_ptr__->TypeDesc = param_2;
      __return_storage_ptr__->Object = local_90;
      __return_storage_ptr__->FrozenSize = local_res20[0];
      goto LAB_141a098f3;
    }
    if (1 < (byte)LogMemoryImage._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMemoryImage);
    }
    FMemory::Free(local_90);
    __return_storage_ptr__->TypeDesc = param_2;
  }
  __return_storage_ptr__->FrozenSize = 0;
  __return_storage_ptr__->Object = (void *)0x0;
LAB_141a098f3:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// SaveToArchive @ 141a1bce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMemoryImageResult::SaveToArchive(FMemoryImageResult *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FMemoryImageResult *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  undefined1 auStack_148 [32];
  uint *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  uint local_f8;
  undefined1 local_f4;
  undefined1 local_f3 [3];
  ForAnyElementType local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6 [2];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  FScriptContainerElement *local_c0;
  ulong64 local_b8;
  uint local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_98;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  undefined4 local_70;
  FScriptContainerElement *local_68;
  undefined8 local_60;
  FMemoryImageResult *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_dc = (this->Bytes).ArrayNum;
  pFVar13 = (this->Bytes).AllocatorInstance.Data;
  local_58 = this;
  ::operator<<(param_1,&this->TargetLayoutParameters);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_dc,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_dc);
    }
  }
  else {
    local_dc = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  local_a0 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,local_dc);
  (**(code **)((longlong)*this->PointerTable + 0x18))
            (this->PointerTable,param_1,&this->TargetLayoutParameters,pFVar13);
  iVar2 = (this->VTables).ArrayNum;
  uVar9 = 0;
  pFVar13 = (this->VTables).AllocatorInstance.Data;
  pFVar11 = pFVar13 + (longlong)iVar2 * 0x10;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_e4 = 0;
  local_f8 = 0;
  uVar10 = uVar9;
  while( true ) {
    if ((this->VTables).ArrayNum != iVar2) {
      local_f4 = 0;
      `TCheckedPointerIterator<FMemoryImageVTablePointer_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_f4);
      uVar9 = (ulonglong)local_e8;
    }
    uVar7 = (uint)uVar9;
    if (pFVar13 == pFVar11) break;
    if (*(ulonglong *)pFVar13 != uVar10) {
      if (local_f8 != 0) {
        if ((local_f0.Data <= (FScriptContainerElement *)&local_f8) &&
           ((FScriptContainerElement *)&local_f8 < local_f0.Data + (longlong)(int)local_e4 * 4)) {
          local_110 = (longlong)(int)uVar7;
          local_108 = 4;
          local_128 = &local_f8;
          local_120 = local_f0.Data;
          local_118 = (longlong)(int)local_e4;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          uVar7 = local_e8;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar7 == local_e4) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_f0,(int *)&local_e4);
        }
        local_e8 = uVar7 + 1;
        *(uint *)(local_f0.Data + (longlong)(int)uVar7 * 4) = local_f8;
        uVar9 = (ulonglong)local_e8;
      }
      uVar10 = *(ulonglong *)pFVar13;
      local_f8 = 0;
    }
    local_f8 = local_f8 + 1;
    pFVar13 = pFVar13 + 0x10;
  }
  if (local_f8 != 0) {
    if ((local_f0.Data <= (FScriptContainerElement *)&local_f8) &&
       ((FScriptContainerElement *)&local_f8 < local_f0.Data + (longlong)(int)local_e4 * 4)) {
      local_110 = (longlong)(int)uVar7;
      local_108 = 4;
      local_128 = &local_f8;
      local_120 = local_f0.Data;
      local_118 = (longlong)(int)local_e4;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      uVar7 = local_e8;
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar7 == local_e4) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_f0,(int *)&local_e4);
    }
    local_e8 = uVar7 + 1;
    *(uint *)(local_f0.Data + (longlong)(int)uVar7 * 4) = local_f8;
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  CountNumNames(&this->ScriptNames,&local_88);
  CountNumNames(&this->MemoryImageNames,&local_98);
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_d4 = local_e8;
  local_d0 = local_88.ArrayNum;
  local_cc = local_98.ArrayNum;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_d4);
    }
  }
  else {
    local_d4 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x2a;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_d0);
    }
  }
  else {
    local_d0 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_cc,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_cc);
    }
  }
  else {
    local_cc = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar9 = (ulonglong)(int)local_e8;
  uVar7 = 0;
  lVar12 = 0;
  local_b0 = local_e8;
  local_a8 = 0;
  local_68 = local_f0.Data + uVar9 * 4;
  uVar10 = uVar9;
  FVar16.Data = local_f0.Data;
  do {
    pFVar13 = local_68;
    local_c0 = FVar16.Data;
    if ((int)uVar9 != (int)uVar10) {
      local_f3[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f3);
    }
    if (FVar16.Data == pFVar13) {
      if ((uVar7 != (this->VTables).ArrayNum) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("VTableIndex == VTables.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                             ,0x623,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SerializeNames(&this->ScriptNames,&local_88,param_1);
      SerializeNames(&this->MemoryImageNames,&local_98,param_1);
      local_c0 = (FScriptContainerElement *)(**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      lVar12 = local_a0;
      iVar2 = (this->VTables).ArrayNum;
      pFVar13 = (this->VTables).AllocatorInstance.Data;
      pFVar11 = pFVar13 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((this->VTables).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMemoryImageVTablePointer_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_d8);
        }
        if (pFVar13 == pFVar11) break;
        (**(code **)(*(longlong *)param_1 + 0x1b8))
                  (param_1,(ulonglong)*(uint *)(pFVar13 + 0xc) + lVar12);
        if (((this->TargetLayoutParameters).Flags & 2) == 0) {
          local_60 = 0;
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_60,8);
          pFVar13 = pFVar13 + 0x10;
        }
        else {
          local_ac = 0;
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ac,4);
          pFVar13 = pFVar13 + 0x10;
        }
      }
      iVar2 = (this->ScriptNames).ArrayNum;
      pFVar11 = (this->ScriptNames).AllocatorInstance.Data;
      pFVar13 = pFVar11 + (longlong)iVar2 * 0xc;
      while( true ) {
        if ((this->ScriptNames).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMemoryImageNamePointer_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_d7);
        }
        pFVar5 = local_58;
        if (pFVar11 == pFVar13) break;
        (**(code **)(*(longlong *)param_1 + 0x1b8))
                  (param_1,(ulonglong)*(uint *)(pFVar11 + 8) + lVar12);
        local_78 = 0;
        local_70 = 0;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_78,0xc);
        pFVar11 = pFVar11 + 0xc;
      }
      iVar2 = (local_58->MemoryImageNames).ArrayNum;
      pFVar11 = (local_58->MemoryImageNames).AllocatorInstance.Data;
      pFVar13 = pFVar11 + (longlong)iVar2 * 0xc;
      while( true ) {
        if ((pFVar5->MemoryImageNames).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMemoryImageNamePointer_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d6);
        }
        if (pFVar11 == pFVar13) break;
        (**(code **)(*(longlong *)param_1 + 0x1b8))
                  (param_1,(ulonglong)*(uint *)(pFVar11 + 8) + lVar12);
        local_50 = 0;
        uVar14 = 0xc;
        local_48 = 0;
        if (((pFVar5->TargetLayoutParameters).Flags & 8) == 0) {
          uVar14 = 8;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50,uVar14);
        pFVar11 = pFVar11 + 0xc;
      }
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_c0);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      return;
    }
    local_e0 = *(uint *)FVar16.Data;
    iVar2 = (this->VTables).ArrayNum;
    uVar15 = 0;
    if ((int)uVar7 < iVar2) {
      uVar15 = ~uVar7 >> 0x1f;
    }
    if (uVar15 == 0) {
      local_128 = (uint *)(longlong)(int)uVar7;
      local_120 = (FScriptContainerElement *)(longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar17 = lVar12 * 0x10;
    local_b8 = *(ulong64 *)((this->VTables).AllocatorInstance.Data + lVar17);
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_b8);
      }
    }
    else {
      local_b8 = *(ulong64 *)*plVar3;
      *plVar3 = *plVar3 + 8;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_e0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_e0);
      }
    }
    else {
      local_e0 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    uVar15 = 0;
    if (local_e0 != 0) {
      do {
        iVar2 = (this->VTables).ArrayNum;
        uVar8 = 0;
        if ((int)uVar7 < iVar2) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_128 = (uint *)(longlong)(int)uVar7;
          local_120 = (FScriptContainerElement *)(longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar7 = uVar7 + 1;
        local_a8 = local_a8 + 1;
        pFVar13 = (this->VTables).AllocatorInstance.Data + lVar17;
        lVar17 = lVar17 + 0x10;
        if ((*(ulong64 *)pFVar13 != local_b8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Patch.TypeNameHash == TypeNameHash",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                               ,0x61b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_c8 = *(uint *)(pFVar13 + 8);
        plVar3 = *(longlong **)&param_1->field_0x8;
        local_c4 = *(uint *)(pFVar13 + 0xc);
        if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
          if ((*puVar1 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_c8);
          }
        }
        else {
          local_c8 = *(uint *)*plVar3;
          *plVar3 = *plVar3 + 4;
        }
        plVar3 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
          if ((*puVar1 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_c4);
          }
        }
        else {
          local_c4 = *(uint *)*plVar3;
          *plVar3 = *plVar3 + 4;
        }
        uVar15 = uVar15 + 1;
        lVar12 = local_a8;
      } while (uVar15 < local_e0);
    }
    uVar9 = (ulonglong)local_e8;
    FVar16.Data = local_c0 + 4;
    uVar10 = (ulonglong)local_b0;
  } while( true );
}

