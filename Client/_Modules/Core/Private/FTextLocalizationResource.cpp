// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// AddEntry @ 1417420c0

void __thiscall
FTextLocalizationResource::AddEntry
          (FTextLocalizationResource *this,FTextKey *param_1,FTextKey *param_2,FString *param_3,
          FString *param_4,int param_5,FTextKey *param_6)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  if ((param_3->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(pwVar2,0);
  AddEntry(this,param_1,param_2,uVar1,param_4,param_5,param_6);
  return;
}

// AddEntry @ 141742120

void __thiscall
FTextLocalizationResource::AddEntry
          (FTextLocalizationResource *this,FTextKey *param_1,FTextKey *param_2,FString *param_3,
          TDisplayStringRef<FString_const_> *param_4,int param_5,FTextKey *param_6)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  if ((param_3->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(pwVar2,0);
  AddEntry(this,param_1,param_2,uVar1,param_4,param_5,param_6);
  return;
}

// AddEntry @ 141742180

void __thiscall
FTextLocalizationResource::AddEntry
          (FTextLocalizationResource *this,FTextKey *param_1,FTextKey *param_2,uint param_3,
          TDisplayStringRef<FString_const_> *param_4,int param_5,FTextKey *param_6)

{
  int *piVar1;
  int iVar2;
  TDisplayStringRef<FString_const_> TVar3;
  TDisplayStringPtr<FString_const_> TVar4;
  TDisplayStringPtr<FString_const_> TVar5;
  bool bVar6;
  FEntry *this_00;
  FTextKey **local_48;
  FEntry *local_40;
  FEntry local_38;
  
  local_38.LocalizedString = (TDisplayStringPtr<FString_const_>)0x0;
  local_38.LocResID = (FTextKey)param_6->Index;
  local_38.LocalizationTargetPathId =
       TextLocalizationResourceUtil::GetLocalizationTargetPathIdFromLocResId(param_6);
  TVar4 = local_38.LocalizedString;
  TVar3 = *param_4;
  TVar5 = local_38.LocalizedString;
  local_38.SourceStringHash = param_3;
  if (local_38.LocalizedString != (TDisplayStringPtr<FString_const_>)TVar3) {
    if (TVar3 != (TDisplayStringRef<FString_const_>)0x0) {
      LOCK();
      *(int *)TVar3 = *(int *)TVar3 + 1;
      UNLOCK();
    }
    TVar5 = (TDisplayStringPtr<FString_const_>)TVar3;
    if (local_38.LocalizedString != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar2 = *(int *)local_38.LocalizedString;
      *(int *)local_38.LocalizedString = *(int *)local_38.LocalizedString + -1;
      UNLOCK();
      if (iVar2 == 1) {
        piVar1 = (int *)((longlong)local_38.LocalizedString + 8);
        local_38.LocalizedString = (TDisplayStringPtr<FString_const_>)TVar3;
        if (*(void **)piVar1 != (void *)0x0) {
          FMemory::Free(*(void **)piVar1);
        }
        ::operator_delete((void *)TVar4,0x18);
        TVar5 = local_38.LocalizedString;
      }
    }
  }
  local_38.LocalizedString = TVar5;
  local_38.Priority = param_5;
  param_6._0_4_ = param_1->Index;
  param_6._4_4_ = param_2->Index;
  this_00 = TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
            ::Find((TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
                    *)this,(FTextId *)&param_6);
  if (this_00 == (FEntry *)0x0) {
    param_6._0_4_ = param_1->Index;
    param_6._4_4_ = param_2->Index;
    local_48 = &param_6;
    local_40 = &local_38;
    TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTextId_&&,FTextLocalizationResource::FEntry_&&>_>
              ((TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FTextId_&&,FTextLocalizationResource::FEntry_&&> *)&param_5
               ,(bool *)&local_48);
  }
  else {
    bVar6 = ShouldReplaceEntry(param_1,param_2,this_00,&local_38);
    if (bVar6) {
      TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
                ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)this_00,
                 (TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)&local_38);
      (this_00->LocResID).Index = local_38.LocResID.Index;
      this_00->LocalizationTargetPathId = local_38.LocalizationTargetPathId;
      this_00->SourceStringHash = local_38.SourceStringHash;
      this_00->Priority = local_38.Priority;
    }
  }
  TVar4 = local_38.LocalizedString;
  if (local_38.LocalizedString != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar2 = *(int *)local_38.LocalizedString;
    *(int *)local_38.LocalizedString = *(int *)local_38.LocalizedString + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (*(void **)((longlong)local_38.LocalizedString + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_38.LocalizedString + 8));
      }
      ::operator_delete((void *)TVar4,0x18);
    }
  }
  return;
}

// AddEntry @ 1417422f0

void __thiscall
FTextLocalizationResource::AddEntry
          (FTextLocalizationResource *this,FTextKey *param_1,FTextKey *param_2,uint param_3,
          FString *param_4,int param_5,FTextKey *param_6)

{
  int iVar1;
  FScriptContainerElement *_Src;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  FTextKey *pFVar5;
  bool bVar6;
  FString *pFVar7;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar5 = param_6;
  iVar4 = param_5;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_4->Data).ArrayNum;
  _Src = (param_4->Data).AllocatorInstance.Data;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
  }
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 == (FString *)0x0) {
    pFVar7 = (FString *)0x0;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                       ,0xb0,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_141742487:
    if (pFVar7 == (FString *)0x0) {
      param_4 = pFVar7;
      AddEntry(this,param_1,param_2,param_3,(TDisplayStringRef<FString_const_> *)&param_4,iVar4,
               pFVar5);
      goto LAB_14174245a;
    }
  }
  else {
    *(undefined4 *)&(pFVar7->Data).AllocatorInstance.Data = 0;
    *(FScriptContainerElement **)&(pFVar7->Data).ArrayNum = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar7[1].Data.AllocatorInstance.Data = (undefined4)local_30;
    *(undefined4 *)((longlong)&pFVar7[1].Data.AllocatorInstance.Data + 4) = local_30._4_4_;
    local_30 = 0;
    LOCK();
    *(int *)&(pFVar7->Data).AllocatorInstance.Data =
         *(int *)&(pFVar7->Data).AllocatorInstance.Data + 1;
    UNLOCK();
    LOCK();
    *(int *)&(pFVar7->Data).AllocatorInstance.Data =
         *(int *)&(pFVar7->Data).AllocatorInstance.Data + 1;
    UNLOCK();
    LOCK();
    iVar1 = *(int *)&(pFVar7->Data).AllocatorInstance.Data;
    *(int *)&(pFVar7->Data).AllocatorInstance.Data =
         *(int *)&(pFVar7->Data).AllocatorInstance.Data + -1;
    UNLOCK();
    if (iVar1 != 1) goto LAB_141742487;
    pvVar2 = *(void **)&(pFVar7->Data).ArrayNum;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    ::operator_delete(pFVar7,0x18);
  }
  LOCK();
  *(int *)&(pFVar7->Data).AllocatorInstance.Data =
       *(int *)&(pFVar7->Data).AllocatorInstance.Data + 1;
  UNLOCK();
  param_4 = pFVar7;
  AddEntry(this,param_1,param_2,param_3,(TDisplayStringRef<FString_const_> *)&param_4,iVar4,pFVar5);
  LOCK();
  iVar1 = *(int *)&(pFVar7->Data).AllocatorInstance.Data;
  *(int *)&(pFVar7->Data).AllocatorInstance.Data =
       *(int *)&(pFVar7->Data).AllocatorInstance.Data + -1;
  UNLOCK();
  if (iVar1 == 1) {
    pvVar2 = *(void **)&(pFVar7->Data).ArrayNum;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    ::operator_delete(pFVar7,0x18);
  }
  LOCK();
  iVar1 = *(int *)&(pFVar7->Data).AllocatorInstance.Data;
  *(int *)&(pFVar7->Data).AllocatorInstance.Data =
       *(int *)&(pFVar7->Data).AllocatorInstance.Data + -1;
  UNLOCK();
  if (iVar1 == 1) {
    pvVar2 = *(void **)&(pFVar7->Data).ArrayNum;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    ::operator_delete(pFVar7,0x18);
  }
LAB_14174245a:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// IsEmpty @ 141766c70

bool __thiscall FTextLocalizationResource::IsEmpty(FTextLocalizationResource *this)

{
  return *(int *)&(this->Entries).field_0x8 == *(int *)&(this->Entries).field_0x34;
}

// LoadFromArchive @ 1417692d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTextLocalizationResource::LoadFromArchive
          (FTextLocalizationResource *this,FArchive *param_1,FTextKey *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FTextKey FVar5;
  TDisplayStringPtr<FString_const_> TVar6;
  TDisplayStringPtr<FString_const_> TVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  FTextKeyState *pFVar16;
  FKeyData *pFVar17;
  FGuid *pFVar18;
  TDisplayStringPtr<FString_const_> TVar19;
  undefined1 *puVar20;
  FTextKey FVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  FEntry *this_00;
  byte local_res10 [8];
  FTextKey *local_res18;
  int local_res20;
  FTextKey local_158;
  FTextKey local_154;
  undefined1 local_150 [4];
  uint local_14c;
  uint local_148 [2];
  TArray<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_> local_140;
  uint local_130;
  FEntry local_128;
  int local_110;
  uint local_10c;
  uint local_108 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_100;
  FString local_f0;
  long64 local_e0;
  FGuid local_d8;
  uint local_c8;
  FTextKey local_c4;
  FTextKey local_c0 [2];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined1 local_68 [16];
  FEntry *local_58;
  FEntry *local_50;
  
  local_d8.A = 0;
  local_d8.B = 0;
  local_d8.C = 0;
  local_d8.D = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  uVar14 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  if (0xf < uVar14) {
    ::operator<<(param_1,&local_d8);
  }
  local_res10[0] = 0;
  if (((local_d8.C == 0x9d90154a && local_d8.A == 0x7574140e) && local_d8.B == 0xfc034a67) &&
      local_d8.D == 0x1b7f37c3) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,0);
    if (2 < (byte)LogTextLocalizationResource._0_1_) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      FTextKey::AppendString(param_2,&local_98);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_res10[0] < 4) {
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    if (local_res10[0] != 0) {
      local_e0 = -1;
      ::operator<<(param_1,&local_e0);
      if (local_e0 != -1) {
        uVar15 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_e0);
        (**(code **)(*(longlong *)param_1 + 0x1f0))(param_1,local_e0,0);
        if (local_res10[0] < 2) {
          local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.ArrayNum = 0;
          local_100.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_100);
          uVar14 = local_100._8_8_ & 0xffffffff;
          if (local_100.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar14);
          }
          if (local_140.ArrayMax < local_100.ArrayNum) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_100.ArrayNum,&local_140.AllocatorInstance,local_140.ArrayNum,
                       &local_140.ArrayMax);
            uVar14 = local_100._8_8_ & 0xffffffff;
          }
          iVar11 = (int)uVar14;
          pFVar28 = local_100.AllocatorInstance.Data + (longlong)iVar11 * 0x10;
          FVar24.Data = local_100.AllocatorInstance.Data;
          while( true ) {
            iVar10 = (int)uVar14;
            if ((int)uVar14 != iVar11) {
              local_150[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_150);
              iVar10 = local_100.ArrayNum;
            }
            if (FVar24.Data == pFVar28) break;
            iVar10 = local_140.ArrayNum;
            if (local_140.ArrayNum == local_140.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_140.AllocatorInstance,&local_140.ArrayMax);
            }
            local_140.ArrayNum = iVar10 + 1;
            pFVar22 = local_140.AllocatorInstance.Data + (longlong)iVar10 * 0x10;
            MakeTextDisplayString((FString *)pFVar22);
            *(int *)(pFVar22 + 8) = -1;
            FVar24.Data = FVar24.Data + 0x10;
            uVar14 = local_100._8_8_ & 0xffffffff;
          }
          DestructItems<FString,int>((FString *)local_100.AllocatorInstance.Data,iVar10);
          param_2 = local_res18;
          if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.AllocatorInstance.Data);
            param_2 = local_res18;
          }
        }
        else {
          TArrayPrivateFriend::
          Serialize<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_>(param_1,&local_140)
          ;
        }
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar15);
        (**(code **)(*(longlong *)param_1 + 0x1f0))(param_1,uVar15,0);
      }
    }
    if (1 < local_res10[0]) {
      ::operator<<(param_1,&local_c8);
      if ((int)local_c8 < 0) {
        local_c8 = 0;
      }
      TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
                 *)this,(local_c8 - *(int *)&(this->Entries).field_0x34) +
                        *(int *)&(this->Entries).field_0x8);
    }
    ::operator<<(param_1,local_108);
    iVar11 = TextLocalizationResourceUtil::GetLocalizationTargetPathIdFromLocResId(param_2);
    local_10c = 0;
    local_110 = iVar11;
    if (local_108[0] != 0) {
      do {
        local_154.Index = -1;
        if (local_res10[0] < 3) {
          if (local_res10[0] == 2) {
            FTextKey::SerializeDiscardHash(&local_154,param_1);
          }
          else {
            FTextKey::SerializeAsString(&local_154,param_1);
          }
        }
        else {
          FTextKey::SerializeWithHash(&local_154,param_1);
        }
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_148,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_148);
          }
        }
        else {
          local_148[0] = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        FVar5.Index = local_154.Index;
        local_130 = 0;
        if (local_148[0] != 0) {
          do {
            uVar26 = local_130;
            local_158.Index = -1;
            if (local_res10[0] < 3) {
              if (local_res10[0] == 2) {
                FTextKey::SerializeDiscardHash(&local_158,param_1);
              }
              else {
                FTextKey::SerializeAsString(&local_158,param_1);
              }
            }
            else {
              FTextKey::SerializeWithHash(&local_158,param_1);
            }
            plVar2 = *(longlong **)&param_1->field_0x8;
            local_128.LocalizedString = (TDisplayStringPtr<FString_const_>)0x0;
            local_128.SourceStringHash = 0;
            local_128.LocResID.Index = param_2->Index;
            local_128.Priority = local_res20;
            local_128.LocalizationTargetPathId = iVar11;
            if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_128.SourceStringHash,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_128.SourceStringHash);
              }
            }
            else {
              local_128.SourceStringHash = *(uint *)*plVar2;
              *plVar2 = *plVar2 + 4;
            }
            if (local_res10[0] == 0) {
              local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_f0.Data.ArrayNum = 0;
              local_f0.Data.ArrayMax = 0;
              ::operator<<(param_1,&local_f0);
              TVar19 = (TDisplayStringPtr<FString_const_>)::operator_new(0x18);
              if (TVar19 == (TDisplayStringPtr<FString_const_>)0x0) {
                TVar19 = (TDisplayStringPtr<FString_const_>)0x0;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("this->IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                                   ,0xb0,L"");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
              }
              else {
                *(int *)TVar19 = 0;
                *(FScriptContainerElement **)((longlong)TVar19 + 8) =
                     local_f0.Data.AllocatorInstance.Data;
                local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)((longlong)TVar19 + 0x10) = local_f0.Data.ArrayNum;
                *(int *)((longlong)TVar19 + 0x14) = local_f0.Data.ArrayMax;
                local_f0.Data.ArrayNum = 0;
                local_f0.Data.ArrayMax = 0;
                LOCK();
                *(int *)TVar19 = *(int *)TVar19 + 1;
                UNLOCK();
                LOCK();
                *(int *)TVar19 = *(int *)TVar19 + 1;
                UNLOCK();
                LOCK();
                iVar11 = *(int *)TVar19;
                *(int *)TVar19 = *(int *)TVar19 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  if (*(void **)((longlong)TVar19 + 8) != (void *)0x0) {
                    FMemory::Free(*(void **)((longlong)TVar19 + 8));
                  }
                  ::operator_delete((void *)TVar19,0x18);
                }
              }
              TVar6 = local_128.LocalizedString;
              TVar7 = local_128.LocalizedString;
              if (local_128.LocalizedString != TVar19) {
                if (TVar19 != (TDisplayStringPtr<FString_const_>)0x0) {
                  LOCK();
                  *(int *)TVar19 = *(int *)TVar19 + 1;
                  UNLOCK();
                }
                TVar7 = TVar19;
                if (local_128.LocalizedString != (TDisplayStringPtr<FString_const_>)0x0) {
                  LOCK();
                  iVar11 = *(int *)local_128.LocalizedString;
                  *(int *)local_128.LocalizedString = *(int *)local_128.LocalizedString + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    piVar1 = (int *)((longlong)local_128.LocalizedString + 8);
                    local_128.LocalizedString = TVar19;
                    if (*(void **)piVar1 != (void *)0x0) {
                      FMemory::Free(*(void **)piVar1);
                    }
                    ::operator_delete((void *)TVar6,0x18);
                    TVar7 = local_128.LocalizedString;
                  }
                }
              }
              local_128.LocalizedString = TVar7;
              if (TVar19 != (TDisplayStringPtr<FString_const_>)0x0) {
                LOCK();
                iVar11 = *(int *)TVar19;
                *(int *)TVar19 = *(int *)TVar19 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  if (*(void **)((longlong)TVar19 + 8) != (void *)0x0) {
                    FMemory::Free(*(void **)((longlong)TVar19 + 8));
                  }
                  ::operator_delete((void *)TVar19,0x18);
                }
              }
              FVar21.Index = local_158.Index;
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                FVar21.Index = local_158.Index;
              }
            }
            else {
              plVar2 = *(longlong **)&param_1->field_0x8;
              local_14c = 0xffffffff;
              if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_14c,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,&local_14c);
                }
              }
              else {
                local_14c = *(uint *)*plVar2;
                *plVar2 = *plVar2 + 4;
              }
              FVar21.Index = local_158.Index;
              lVar23 = (longlong)(int)local_14c;
              if (((int)local_14c < 0) || (local_140.ArrayNum <= (int)local_14c)) {
                if (2 < (byte)LogTextLocalizationResource._0_1_) {
                  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_a8.Data.ArrayNum = 0;
                  local_a8.Data.ArrayMax = 0;
                  if (local_158.Index != -1) {
                    pFVar16 = FTextKeyState::GetState();
                    if ((pFVar16 == (FTextKeyState *)0x0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Mutex",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                           ,0x1c,L""), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      uVar9 = (*pcVar4)();
                      return (bool)uVar9;
                    }
                    AcquireSRWLockShared((PSRWLOCK)pFVar16);
                    pFVar17 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                                        (&(pFVar16->KeyDataAllocations).Elements,FVar21.Index);
                    if (pFVar17->StrLen < 0) {
                      pFVar18 = FTextKeyState::FKeyData::AsGuid(pFVar17);
                      FGuid::AppendString(pFVar18,&local_a8,Digits);
                    }
                    else {
                      ::FString::AppendChars(&local_a8,pFVar17->DataPtr,pFVar17->StrLen);
                    }
                    if (pFVar16 != (FTextKeyState *)0x0) {
                      ReleaseSRWLockShared((PSRWLOCK)pFVar16);
                    }
                  }
                  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_b8.Data.ArrayNum = 0;
                  local_b8.Data.ArrayMax = 0;
                  if (FVar5.Index != -1) {
                    pFVar16 = FTextKeyState::GetState();
                    if ((pFVar16 == (FTextKeyState *)0x0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Mutex",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                                           ,0x1c,L""), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      uVar9 = (*pcVar4)();
                      return (bool)uVar9;
                    }
                    AcquireSRWLockShared((PSRWLOCK)pFVar16);
                    pFVar17 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                                        (&(pFVar16->KeyDataAllocations).Elements,FVar5.Index);
                    if (pFVar17->StrLen < 0) {
                      pFVar18 = FTextKeyState::FKeyData::AsGuid(pFVar17);
                      FGuid::AppendString(pFVar18,&local_b8,Digits);
                    }
                    else {
                      ::FString::AppendChars(&local_b8,pFVar17->DataPtr,pFVar17->StrLen);
                    }
                    if (pFVar16 != (FTextKeyState *)0x0) {
                      ReleaseSRWLockShared((PSRWLOCK)pFVar16);
                    }
                  }
                  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_78.Data.ArrayNum = 0;
                  local_78.Data.ArrayMax = 0;
                  FTextKey::AppendString(local_res18,&local_78);
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                  }
                  uVar26 = local_130;
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                    uVar26 = local_130;
                  }
                }
              }
              else {
                uVar12 = 0;
                if ((int)local_14c < local_140.ArrayNum) {
                  uVar12 = ~local_14c >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                TVar6 = local_128.LocalizedString;
                pFVar28 = local_140.AllocatorInstance.Data + lVar23 * 0x10;
                TVar19 = *(TDisplayStringPtr<FString_const_> *)&pFVar28->field_0x0;
                TVar7 = local_128.LocalizedString;
                if (local_128.LocalizedString != TVar19) {
                  if (TVar19 != (TDisplayStringPtr<FString_const_>)0x0) {
                    LOCK();
                    *(int *)TVar19 = *(int *)TVar19 + 1;
                    UNLOCK();
                  }
                  TVar7 = TVar19;
                  if (local_128.LocalizedString != (TDisplayStringPtr<FString_const_>)0x0) {
                    LOCK();
                    iVar11 = *(int *)local_128.LocalizedString;
                    *(int *)local_128.LocalizedString = *(int *)local_128.LocalizedString + -1;
                    UNLOCK();
                    if (iVar11 == 1) {
                      piVar1 = (int *)((longlong)local_128.LocalizedString + 8);
                      local_128.LocalizedString = TVar19;
                      if (*(void **)piVar1 != (void *)0x0) {
                        FMemory::Free(*(void **)piVar1);
                      }
                      ::operator_delete((void *)TVar6,0x18);
                      TVar7 = local_128.LocalizedString;
                    }
                  }
                }
                local_128.LocalizedString = TVar7;
                FVar21.Index = local_158.Index;
                if (*(int *)(pFVar28 + 8) != -1) {
                  *(int *)(pFVar28 + 8) = *(int *)(pFVar28 + 8) + -1;
                }
              }
            }
            local_c4.Index = FVar5.Index;
            local_c0[0].Index = FVar21.Index;
            uVar12 = ::GetTypeHash(local_c0);
            uVar13 = ::GetTypeHash(&local_c4);
            uVar25 = uVar13 - uVar12 ^ uVar12 >> 0xd;
            uVar13 = (-0x61c88647 - uVar12) - uVar25 ^ uVar25 << 8;
            uVar27 = (uVar12 - uVar13) - uVar25 ^ uVar13 >> 0xd;
            uVar25 = (uVar25 - uVar27) - uVar13 ^ uVar27 >> 0xc;
            uVar12 = (uVar13 - uVar25) - uVar27 ^ uVar25 << 0x10;
            uVar27 = (uVar27 - uVar12) - uVar25 ^ uVar12 >> 5;
            uVar13 = (uVar25 - uVar27) - uVar12 ^ uVar27 >> 3;
            uVar12 = (uVar12 - uVar13) - uVar27 ^ uVar13 << 10;
            if (*(int *)&(this->Entries).field_0x8 != *(int *)&(this->Entries).field_0x34) {
              puVar3 = *(undefined1 **)&(this->Entries).field_0x40;
              puVar20 = &(this->Entries).field_0x38;
              if (puVar3 != (undefined1 *)0x0) {
                puVar20 = puVar3;
              }
              iVar11 = *(int *)(puVar20 +
                               (ulonglong)
                               (*(int *)&(this->Entries).field_0x48 - 1U &
                               ((uVar27 - uVar12) - uVar13 ^ uVar12 >> 0xf)) * 4);
              if (iVar11 != -1) {
                do {
                  lVar23 = *(longlong *)&this->Entries + (longlong)iVar11 * 0x28;
                  if ((*(int *)(*(longlong *)&this->Entries + (longlong)iVar11 * 0x28) ==
                       FVar5.Index) && (*(int *)(lVar23 + 4) == FVar21.Index)) {
                    if (iVar11 != -1) {
                      this_00 = (FEntry *)(lVar23 + 8);
                      if (lVar23 == 0) {
                        this_00 = (FEntry *)0x0;
                      }
                      if (this_00 != (FEntry *)0x0) {
                        bVar8 = ShouldReplaceEntry(&local_154,&local_158,this_00,&local_128);
                        if (bVar8) {
                          TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
                                    ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)
                                     this_00,(TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>
                                              *)&local_128);
                          (this_00->LocResID).Index = local_128.LocResID.Index;
                          this_00->LocalizationTargetPathId = local_128.LocalizationTargetPathId;
                          this_00->SourceStringHash = local_128.SourceStringHash;
                          this_00->Priority = local_128.Priority;
                        }
                        goto LAB_141769bad;
                      }
                    }
                    break;
                  }
                  iVar11 = *(int *)(lVar23 + 0x20);
                } while (iVar11 != -1);
              }
            }
            local_58 = (FEntry *)local_68;
            local_68._0_4_ = FVar5.Index;
            local_50 = &local_128;
            local_68._4_4_ = FVar21.Index;
            TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FTextId_&&,FTextLocalizationResource::FEntry_&&>_>
                      ((TSet<TTuple<FTextId,FTextLocalizationResource::FEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>,FDefaultSetAllocator>
                        *)this,(TPairInitializer<FTextId_&&,FTextLocalizationResource::FEntry_&&> *)
                               (local_68 + 8),(bool *)&local_58);
LAB_141769bad:
            TVar19 = local_128.LocalizedString;
            if (local_128.LocalizedString != (TDisplayStringPtr<FString_const_>)0x0) {
              LOCK();
              iVar11 = *(int *)local_128.LocalizedString;
              *(int *)local_128.LocalizedString = *(int *)local_128.LocalizedString + -1;
              UNLOCK();
              if (iVar11 == 1) {
                if (*(void **)((longlong)local_128.LocalizedString + 8) != (void *)0x0) {
                  FMemory::Free(*(void **)((longlong)local_128.LocalizedString + 8));
                }
                ::operator_delete((void *)TVar19,0x18);
              }
            }
            local_130 = uVar26 + 1;
            param_2 = local_res18;
            iVar11 = local_110;
          } while (local_130 < local_148[0]);
        }
        local_10c = local_10c + 1;
      } while (local_10c < local_108[0]);
    }
    DestructItems<FTextLocalizationResourceString,int>
              ((FTextLocalizationResourceString *)local_140.AllocatorInstance.Data,
               local_140.ArrayNum);
    if ((FTextLocalizationResourceString *)local_140.AllocatorInstance.Data !=
        (FTextLocalizationResourceString *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    bVar8 = true;
  }
  else {
    if (1 < (byte)LogTextLocalizationResource._0_1_) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      FTextKey::AppendString(param_2,&local_88);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    bVar8 = false;
  }
  return bVar8;
}

// LoadFromDirectory @ 141769ec0

void __thiscall
FTextLocalizationResource::LoadFromDirectory
          (FTextLocalizationResource *this,FString *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  FString *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  FString *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  int local_res18;
  FString local_68;
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  
  local_58 = (FString *)0x0;
  local_50 = 0;
  local_res18 = param_2;
  pIVar6 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6,pwVar9);
  if (cVar4 != '\0') {
    pIVar6 = IFileManager::Get();
    local_68.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar10 = (longlong)local_68.Data.ArrayNum;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x80);
    if (local_68.Data.ArrayNum == 0) {
      pFVar11 = &local_68;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,10,0,(ForAnyElementType *)pFVar11,0,&local_68.Data.ArrayMax);
    }
    else {
      pFVar15 = (param_1->Data).AllocatorInstance.Data;
      uVar8 = local_68.Data.ArrayNum + 9;
      if ((int)uVar8 < local_68.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      pFVar11 = &local_68;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,0,(ForAnyElementType *)pFVar11,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar15,lVar10 * 2);
    }
    ::FString::PathAppend(&local_68,L"*.locres",8);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar13.Data = local_68.Data.AllocatorInstance.Data;
    }
    (*pcVar2)(pIVar6,&local_58,FVar13.Data,1,(ulonglong)pFVar11 & 0xffffffffffffff00);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = (int)local_50;
  pFVar14 = local_58 + (int)local_50;
  pFVar11 = local_58;
  do {
    if ((int)local_50 != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar14) {
      DestructItems<FString,int>(local_58,(int)local_50);
      if (local_58 != (FString *)0x0) {
        FMemory::Free(local_58);
      }
      return;
    }
    iVar5 = (pFVar11->Data).ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    iVar12 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar12 = 0;
    }
    local_68.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (iVar12 != -1)) {
      iVar5 = iVar12 + 2;
      pFVar15 = (param_1->Data).AllocatorInstance.Data;
LAB_14176a073:
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar5 != 0) goto LAB_14176a080;
      local_68.Data.ArrayMax = 0;
    }
    else {
      iVar5 = iVar12 + 1;
      pFVar15 = (param_1->Data).AllocatorInstance.Data;
      if (iVar1 == 0) goto LAB_14176a073;
LAB_14176a080:
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar8 = iVar1 + iVar5;
      if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,0,(ForAnyElementType *)&local_68,iVar1,&local_68.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_68.Data.AllocatorInstance.Data,pFVar15,(longlong)iVar1 * 2);
      }
    }
    ::FString::PathAppend(&local_68,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar12);
    pFVar7 = FPaths::ConvertRelativePathToFull(&local_48,&local_68);
    LoadFromFile(this,pFVar7,local_res18);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// LoadFromFile @ 14176a310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTextLocalizationResource::LoadFromFile
          (FTextLocalizationResource *this,FString *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  FTextKeyState *this_00;
  size_t sVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *_Str;
  int iVar9;
  int iVar10;
  FTextKey local_res10 [2];
  TStringView<wchar_t> local_38;
  
  pIVar4 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,pwVar8,0);
  if (pFVar5 == (FArchive *)0x0) {
    if (4 < (byte)LogTextLocalizationResource._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
    }
    return false;
  }
  iVar1 = (param_1->Data).ArrayNum;
  _Str = (param_1->Data).AllocatorInstance.Data;
  local_res10[0].Index = -1;
  iVar10 = 0;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  local_38.Size = iVar9;
  local_38.DataPtr = (wchar_t *)_Str;
  if (iVar9 != 0) {
    this_00 = FTextKeyState::GetState();
    if (_Str == (FScriptContainerElement *)0x0) {
      _Str = (FScriptContainerElement *)0x0;
    }
    else {
      iVar10 = iVar9;
      if ((0 < iVar9) && (*(short *)(_Str + ((longlong)iVar9 + -1) * 2) == 0)) {
        iVar10 = iVar9 + -1;
      }
      if (iVar10 == -1) {
        sVar6 = wcslen((wchar_t *)_Str);
        iVar10 = (int)sVar6;
      }
    }
    uVar7 = CityHash64((char *)_Str,iVar10 * 2);
    FTextKeyState::FindOrAddImpl
              (this_00,&local_38,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,local_res10);
  }
  bVar2 = LoadFromArchive(this,pFVar5,local_res10,param_2);
  bVar3 = (**(code **)(*(longlong *)pFVar5 + 0x210))(pFVar5);
  (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  return (bool)(bVar3 & bVar2);
}

// SaveToArchive @ 1417780a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTextLocalizationResource::SaveToArchive
          (FTextLocalizationResource *this,FArchive *param_1,FTextKey *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  byte *pbVar5;
  FTextLocalizationResource *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  byte bVar10;
  int *piVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  FString *pFVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  uint uVar23;
  undefined1 auStackY_378 [32];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336;
  undefined1 local_335;
  FTextKey local_334;
  uint local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  uint local_320 [2];
  TArray<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_> local_318;
  uint local_308 [2];
  ulong64 local_300;
  int local_2f8;
  uint uStack_2f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f0;
  uint local_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  int local_2d8;
  undefined4 local_2d4;
  FTextKey local_2d0;
  FTextKey local_2cc;
  uint local_2c8;
  longlong *local_2c0;
  uint uStack_2b8;
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *local_2b0;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  uint local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  ulong64 local_290;
  byte *local_288;
  ForAnyElementType local_280;
  int local_278;
  int local_274;
  uint local_270;
  uint uStack_26c;
  undefined1 *puStack_268;
  undefined4 local_260;
  int iStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  TBitArray<FDefaultBitArrayAllocator> *local_250;
  FTextLocalizationResource *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  longlong *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  undefined8 local_1d0;
  int local_1c8;
  undefined1 local_1c4 [12];
  FTextKey *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  TPairInitializer<FString_const_&,int_const_&> local_198;
  FTextLocalizationResource *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  undefined4 *local_158;
  longlong *local_150;
  FString *local_148;
  uint *local_140;
  FGuid local_138 [2];
  undefined4 local_10c;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<FString,int>,FLocKeyMapFuncs<int>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_138[0] = FTextLocalizationResourceVersion::LocResMagic;
  ::operator<<(param_1,local_138);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_338 = 3;
  if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_338,1);
  }
  else {
    local_338 = *(undefined1 *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  local_1a0 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_290 = 0xffffffffffffffff;
  if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_290,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_290);
    }
  }
  else {
    local_290 = *(ulong64 *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  uVar23 = 0;
  local_98.Elements._44_4_ = 0x80;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10;
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.ArrayNum = 0;
  local_318.ArrayMax = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  iVar15 = *(int *)&(this->Entries).field_0x28;
  local_270 = 0;
  uStack_26c = 1;
  iStack_25c = 0;
  uStack_258 = 0;
  if (iVar15 != 0) {
    puVar17 = *(uint **)&(this->Entries).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar20;
    }
    uVar19 = *puVar17;
    uStack_258 = uVar23;
    local_270 = uVar23;
    while (uVar19 == 0) {
      uStack_258 = uStack_258 + 0x20;
      lVar13 = (longlong)(int)local_270;
      local_270 = local_270 + 1;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_270)
      goto LAB_1417782be;
      uVar19 = puVar17[lVar13 + 1];
    }
    uStack_26c = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_26c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1c8 = (int)lVar13;
    iStack_25c = local_1c8 + -1 + uStack_258;
    if (iVar15 < iStack_25c) {
LAB_1417782be:
      iStack_25c = iVar15;
    }
  }
  local_260 = 0xffffffff;
  uVar19 = *(uint *)&(this->Entries).field_0x28;
  TStack_240._padding_ = CONCAT44(uStack_26c,local_270);
  bVar10 = (byte)uVar19 & 0x1f;
  TStack_240.CurrentBitIndex = iStack_25c;
  TStack_240.UnvisitedBitMask = 0xffffffff;
  TStack_240._28_4_ = uStack_254;
  TStack_240.BaseBitIndex = uStack_258;
  local_220 = CONCAT44(local_220._4_4_,
                       *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34);
  local_218._padding_._0_4_ = (int)uVar19 >> 5;
  local_218._padding_._4_4_ = 1 << bVar10;
  local_218.UnvisitedBitMask = -1 << bVar10;
  local_218.BaseBitIndex = uVar19 & 0xffffffe0;
  uStack_160 = local_220;
  puStack_268 = (undefined1 *)pTVar20;
  local_248 = this;
  TStack_240.Array = pTVar20;
  local_218.Array = pTVar20;
  local_218.CurrentBitIndex = uVar19;
  local_188 = this;
  TStack_180._padding_ = TStack_240._padding_;
  TStack_180.Array = pTVar20;
  TStack_180._16_8_ = TStack_240._16_8_;
  TStack_180._24_8_ = TStack_240._24_8_;
  if ((((int)uVar19 < 0) || (iVar15 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if (uVar19 != *(uint *)&(this->Entries).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_218);
    pTVar20 = local_218.Array;
    uVar19 = local_218.CurrentBitIndex;
  }
  while( true ) {
    pFVar6 = local_188;
    if (*(int *)&(local_188->Entries).field_0x8 - *(int *)&(local_188->Entries).field_0x34 !=
        (int)uStack_160) {
      local_337 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_337);
    }
    if (((TStack_180.CurrentBitIndex == uVar19) && (TStack_180.Array == pTVar20)) &&
       (pFVar6 == this)) break;
    lVar16 = *(longlong *)&pFVar6->Entries;
    lVar13 = lVar16 + (longlong)TStack_180.CurrentBitIndex * 0x28;
    local_334.Index = *(int *)(lVar16 + (longlong)TStack_180.CurrentBitIndex * 0x28);
    uVar9 = ::GetTypeHash(&local_334);
    if (local_e8._8_4_ != local_b4) {
      FVar14 = (ForElementType<FSetElementId>)local_b0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FVar14 = local_a8;
      }
      iVar15 = *(int *)((longlong)FVar14 + (ulonglong)(local_a0 - 1U & uVar9) * 4);
      while (iVar15 != -1) {
        piVar11 = (int *)((longlong)iVar15 * 0x60 + local_e8._0_8_);
        if (*piVar11 == local_334.Index) {
          if (piVar11 != (int *)0x0) goto LAB_1417784a1;
          break;
        }
        iVar15 = piVar11[0x16];
      }
    }
    local_1b8 = &local_334;
    TSet<TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FTextKey_&&>_>
              ((TSet<TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>,0>,FDefaultSetAllocator>
                *)local_e8,(uint)&local_2d8,(TKeyInitializer<FTextKey_&&> *)(ulonglong)uVar9,
               (bool *)&local_1b8);
    piVar11 = (int *)((longlong)local_2d8 * 0x60 + local_e8._0_8_);
LAB_1417784a1:
    local_1b0 = lVar13 + 8;
    local_2d4 = *(undefined4 *)(lVar13 + 4);
    local_158 = &local_2d4;
    local_150 = &local_1b0;
    TSet<TTuple<FTextKey,FTextLocalizationResource::FEntry_const_*>,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTextKey_&&,FTextLocalizationResource::FEntry_const_*_&&>_>
              ((TSet<TTuple<FTextKey,FTextLocalizationResource::FEntry_const_*>,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>,FDefaultSetAllocator>
                *)(piVar11 + 2),
               (TPairInitializer<FTextKey_&&,FTextLocalizationResource::FEntry_const_*_&&> *)
               local_1c4,(bool *)&local_158);
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  local_330 = *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_330,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_330);
    }
  }
  else {
    local_330 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  local_288 = &param_1->field_0x2a;
  local_32c = local_e8._8_4_ - local_b4;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*local_288 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_32c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_32c);
    }
  }
  else {
    local_32c = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar19 = local_c0;
  uStack_2b8 = 0;
  uStack_2b4 = 1;
  uStack_2a4 = uStack_2b8;
  local_2a0 = uStack_2b8;
  if (local_c0 != 0) {
    puVar17 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar17 = local_c8;
    }
    uVar9 = *puVar17;
    local_2a0 = uVar23;
    uStack_2b8 = uVar23;
    while (uVar9 == 0) {
      lVar13 = (longlong)(int)uStack_2b8;
      local_2a0 = local_2a0 + 0x20;
      uStack_2b8 = uStack_2b8 + 1;
      uStack_2a4 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2b8)
      goto LAB_141778643;
      uVar9 = puVar17[lVar13 + 1];
    }
    uStack_2b4 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_2b4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_198.Value._0_4_ = (int)lVar13;
    uStack_2a4 = (int)local_198.Value + -1 + local_2a0;
    if ((int)local_c0 < (int)uStack_2a4) {
      uStack_2a4 = local_c0;
    }
  }
LAB_141778643:
  local_2c0 = (longlong *)local_e8;
  uStack_29c = local_10c;
  uVar9 = local_c0 & 0xffffffe0;
  iStack_298 = local_e8._8_4_ - local_b4;
  local_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  bVar10 = (byte)local_c0 & 0x1f;
  uStack_2f4 = 1 << bVar10;
  iVar15 = (int)local_c0 >> 5;
  uVar23 = -1 << bVar10;
  uStack_2a8 = 0xffffffff;
  pTStack_2f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uStack_2e4 = local_c0;
  TStack_240._padding_ = CONCAT44(uStack_2b4,uStack_2b8);
  TStack_240.CurrentBitIndex = uStack_2a4;
  TStack_240.UnvisitedBitMask = 0xffffffff;
  TStack_240._28_4_ = local_10c;
  TStack_240.BaseBitIndex = local_2a0;
  local_220 = CONCAT44(uStack_294,iStack_298);
  local_2f8 = iVar15;
  local_2e8 = uVar23;
  uStack_2e0 = uVar9;
  local_248 = (FTextLocalizationResource *)local_2c0;
  TStack_240.Array = local_2b0;
  if (((int)local_c0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if (uVar19 != local_c0) {
    puVar17 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar17 = local_c8;
    }
    uVar23 = uVar23 & puVar17[iVar15];
    while (uVar23 == 0) {
      uStack_2e0 = uVar9 + 0x20;
      local_2f8 = iVar15 + 1;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2f8) {
        uStack_2e4 = local_c0;
        goto LAB_1417787a4;
      }
      uVar23 = puVar17[(longlong)iVar15 + 1];
      local_2e8 = 0xffffffff;
      uVar9 = uStack_2e0;
      iVar15 = local_2f8;
    }
    uStack_2f4 = -uVar23 & uVar23;
    uVar1 = (ulonglong)uStack_2f4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1c4._4_4_ = (undefined4)lVar13;
    uStack_2e4 = (uVar9 - 1) + local_1c4._4_4_;
    if ((int)local_c0 < (int)uStack_2e4) {
      uStack_2e4 = local_c0;
    }
  }
LAB_1417787a4:
  local_1f0._padding_ = CONCAT44(uStack_2f4,local_2f8);
  local_1f0.CurrentBitIndex = uStack_2e4;
  local_1f0.UnvisitedBitMask = local_2e8;
  local_1f0._28_4_ = uStack_2dc;
  local_1f0.BaseBitIndex = uStack_2e0;
  local_1f0.Array = pTStack_2f0;
  local_250 = pTStack_2f0;
  local_2c8 = uStack_2e4;
LAB_1417787ce:
  pFVar6 = local_248;
  uVar23 = local_2c8;
  if ((int)*(longlong *)((longlong)local_248 + 8) - *(int *)((longlong)local_248 + 0x34) !=
      (int)local_220) {
    local_336 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_336);
  }
  if (((TStack_240.CurrentBitIndex == uVar23) && (TStack_240.Array == local_250)) &&
     (pFVar6 == (FTextLocalizationResource *)local_e8)) {
    local_300 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_1a0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
      if ((*local_288 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_300,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_300);
      }
    }
    else {
      local_300 = *(ulong64 *)*plVar2;
      *plVar2 = *plVar2 + 8;
    }
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_300);
    TArrayPrivateFriend::Serialize<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_>
              (param_1,&local_318);
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    DestructItems<FTextLocalizationResourceString,int>
              ((FTextLocalizationResourceString *)local_318.AllocatorInstance.Data,
               local_318.ArrayNum);
    if ((FTextLocalizationResourceString *)local_318.AllocatorInstance.Data !=
        (FTextLocalizationResourceString *)0x0) {
      FMemory::Free(local_318.AllocatorInstance.Data);
    }
    return true;
  }
  piVar11 = (int *)(*(longlong *)pFVar6 + (longlong)TStack_240.CurrentBitIndex * 0x60);
  local_2d0.Index = *piVar11;
  plVar2 = (longlong *)(piVar11 + 2);
  local_1a8 = plVar2;
  FTextKey::SerializeWithHash(&local_2d0,param_1);
  pbVar5 = local_288;
  local_328 = piVar11[4] - piVar11[0xf];
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*local_288 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_328,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_328);
    }
  }
  else {
    local_328 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  uVar23 = piVar11[0xc];
  uStack_2b8 = 0;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar11 + 6);
  local_2a0 = 0;
  uStack_2b4 = 1;
  uStack_2a4 = 0;
  if (uVar23 != 0) {
    pTVar22 = pTVar20;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar11 + 10) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar11 + 10);
    }
    uVar19 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    uStack_2b8 = 0;
    while (uVar19 == 0) {
      lVar13 = (longlong)(int)uStack_2b8;
      local_2a0 = local_2a0 + 0x20;
      uStack_2b8 = uStack_2b8 + 1;
      uStack_2a4 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2b8)
      goto LAB_141778922;
      uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uStack_2b4 = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_2b4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1c4._8_4_ = (undefined4)lVar13;
    uStack_2a4 = (local_2a0 - 1) + local_1c4._8_4_;
    if ((int)uVar23 < (int)uStack_2a4) {
      uStack_2a4 = uVar23;
    }
  }
LAB_141778922:
  uStack_29c = local_ec;
  iStack_298 = piVar11[4] - piVar11[0xf];
  uVar19 = piVar11[0xc];
  local_1f0._padding_ = CONCAT44(uStack_2b4,uStack_2b8);
  uVar9 = uVar19 & 0xffffffe0;
  uStack_2a8 = 0xffffffff;
  local_1f0.CurrentBitIndex = uStack_2a4;
  local_1f0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  local_1f0._28_4_ = local_ec;
  local_1f0.BaseBitIndex = local_2a0;
  local_1d0 = CONCAT44(uStack_294,iStack_298);
  local_2c0 = plVar2;
  local_2b0 = pTVar20;
  local_1f8 = plVar2;
  local_1f0.Array = pTVar20;
  if ((((int)uVar19 < 0) || ((int)uVar23 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar23 = piVar11[0xc];
  if (uVar19 != uVar23) {
    pTVar22 = pTVar20;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar11 + 10) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar11 + 10);
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) &
             *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar15;
      uVar9 = uVar9 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_141778a32;
      uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_198.Key._4_4_ = (int)lVar13;
    uVar19 = (uVar9 - 1) + local_198.Key._4_4_;
    if ((int)uVar23 < (int)uVar19) {
      uVar19 = uVar23;
    }
  }
LAB_141778a32:
  do {
    plVar2 = local_1f8;
    if ((int)local_1f8[1] - *(int *)((longlong)local_1f8 + 0x34) != (int)local_1d0) {
      local_335 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextKey,FTextLocalizationResource::FEntry_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_335);
    }
    if (((local_1f0.CurrentBitIndex == uVar19) && (local_1f0.Array == pTVar20)) &&
       (plVar2 == local_1a8)) break;
    lVar13 = *plVar2;
    plVar2 = *(longlong **)(lVar13 + 8 + (longlong)local_1f0.CurrentBitIndex * 0x18);
    iVar15 = *(int *)(lVar13 + (longlong)local_1f0.CurrentBitIndex * 0x18);
    if ((plVar2 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationResource.cpp"
                           ,0x1fe,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    local_2cc.Index = iVar15;
    FTextKey::SerializeWithHash(&local_2cc,param_1);
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_324 = *(uint *)(plVar2 + 2);
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((*pbVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_324,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_324);
      }
    }
    else {
      local_324 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    if ((*plVar2 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0x9d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    lVar13 = *plVar2;
    pFVar21 = (FString *)(lVar13 + 8);
    if (*(int *)(lVar13 + 0x10) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
    }
    uVar23 = FCrc::StrCrc32<wchar_t>(pwVar12,0);
    iVar15 = TSet<TTuple<FString,int>,FLocKeyMapFuncs<int>,FDefaultSetAllocator>::
             FindIndexByHash<FString>(&local_98,uVar23,pFVar21);
    if (iVar15 == -1) {
LAB_141778bf6:
      local_278 = *(int *)(lVar13 + 0x10);
      lVar13 = (longlong)local_278;
      pFVar18 = (pFVar21->Data).AllocatorInstance.Data;
      local_308[0] = local_318.ArrayNum;
      local_280.Data = (FScriptContainerElement *)0x0;
      if (local_278 == 0) {
        local_274 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_278,0,&local_280,local_278,&local_274);
        memcpy(local_280.Data,pFVar18,lVar13 * 2);
      }
      uVar23 = local_318.ArrayNum;
      if (local_318.ArrayNum == local_318.ArrayMax) {
        uVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_318.AllocatorInstance,&local_318.ArrayMax);
      }
      local_318.ArrayNum = uVar23 + 1;
      pFVar18 = local_318.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
      MakeTextDisplayString((FString *)pFVar18);
      *(int *)(pFVar18 + 8) = 1;
      if (local_280.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data);
      }
      local_140 = local_308;
      local_148 = pFVar21;
      TSet<TTuple<FString,int>,FLocKeyMapFuncs<int>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                (&local_98,&local_198,(bool *)&local_148);
      local_320[0] = local_308[0];
    }
    else {
      lVar16 = (longlong)iVar15 * 0x20 + local_98.Elements._0_8_;
      puVar17 = (uint *)(lVar16 + 0x10);
      if (lVar16 == 0) {
        puVar17 = (uint *)0x0;
      }
      if (puVar17 == (uint *)0x0) goto LAB_141778bf6;
      uVar23 = *puVar17;
      uVar9 = 0;
      if ((int)uVar23 < local_318.ArrayNum) {
        uVar9 = ~uVar23 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      *(int *)(local_318.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10 + 8) =
           *(int *)(local_318.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10 + 8) + 1;
      local_320[0] = *puVar17;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*pbVar5 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_320,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_320);
      }
    }
    else {
      local_320[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_1f0.UnvisitedBitMask = local_1f0.UnvisitedBitMask & ~local_1f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f0);
  } while( true );
  TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
  goto LAB_1417787ce;
}

// SaveToFile @ 141778fc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTextLocalizationResource::SaveToFile(FTextLocalizationResource *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  FTextKeyState *this_00;
  size_t sVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *_Str;
  int iVar9;
  int iVar10;
  FTextKey local_res10 [2];
  TStringView<wchar_t> local_28;
  
  pIVar4 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,pwVar8,0);
  if (pFVar5 == (FArchive *)0x0) {
    if (4 < (byte)LogTextLocalizationResource._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
    }
    return false;
  }
  iVar1 = (param_1->Data).ArrayNum;
  _Str = (param_1->Data).AllocatorInstance.Data;
  local_res10[0].Index = -1;
  iVar10 = 0;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  local_28.Size = iVar9;
  local_28.DataPtr = (wchar_t *)_Str;
  if (iVar9 != 0) {
    this_00 = FTextKeyState::GetState();
    if (_Str == (FScriptContainerElement *)0x0) {
      _Str = (FScriptContainerElement *)0x0;
    }
    else {
      iVar10 = iVar9;
      if ((0 < iVar9) && (*(short *)(_Str + ((longlong)iVar9 + -1) * 2) == 0)) {
        iVar10 = iVar9 + -1;
      }
      if (iVar10 == -1) {
        sVar6 = wcslen((wchar_t *)_Str);
        iVar10 = (int)sVar6;
      }
    }
    uVar7 = CityHash64((char *)_Str,iVar10 * 2);
    FTextKeyState::FindOrAddImpl
              (this_00,&local_28,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,local_res10);
  }
  bVar2 = SaveToArchive(this,pFVar5,local_res10);
  bVar3 = (**(code **)(*(longlong *)pFVar5 + 0x210))(pFVar5);
  (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  return (bool)(bVar3 & bVar2);
}

// ShouldReplaceEntry @ 14177e200

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FTextLocalizationResource::ShouldReplaceEntry
          (FTextKey *param_1,FTextKey *param_2,FEntry *param_3,FEntry *param_4)

{
  int iVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_4->Priority < param_3->Priority) {
    return true;
  }
  if (param_3->Priority < param_4->Priority) {
    return false;
  }
  if (param_3->SourceStringHash == param_4->SourceStringHash) {
    if ((param_3->LocalizedString == (TDisplayStringPtr<FString_const_>)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                           ,0x9d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    TVar2 = param_3->LocalizedString;
    pFVar7 = UE::Text::Private::TDisplayStringPtrBase<FString_const_>::operator*
                       ((TDisplayStringPtrBase<FString_const_> *)param_4);
    iVar6 = *(int *)((longlong)TVar2 + 0x10);
    iVar1 = (pFVar7->Data).ArrayNum;
    if (iVar6 == iVar1) {
      if (iVar6 < 2) {
        return false;
      }
      iVar6 = wcscmp(*(wchar_t **)((longlong)TVar2 + 8),
                     (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
      bVar4 = iVar6 == 0;
    }
    else {
      bVar4 = iVar1 + iVar6 == 1;
    }
    if (bVar4) {
      return false;
    }
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  FTextKey::AppendString(param_2,&local_b8);
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  FTextKey::AppendString(param_1,&local_c8);
  ::FString::PrintfImpl(&local_78,L"Text translation conflict for namespace \"%s\" and key \"%s\".")
  ;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FTextKey::AppendString(&param_4->LocResID,&local_98);
  UE::Text::Private::TDisplayStringPtrBase<FString_const_>::operator*
            ((TDisplayStringPtrBase<FString_const_> *)param_4);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  FTextKey::AppendString(&param_3->LocResID,&local_a8);
  UE::Text::Private::TDisplayStringPtrBase<FString_const_>::operator*
            ((TDisplayStringPtrBase<FString_const_> *)param_3);
  ::FString::PrintfImpl
            (&local_88,
             L"The current translation is \"%s\" (from \"%s\" and source hash 0x%08x) and the conflicting translation of \"%s\" (from \"%s\" and source hash 0x%08x) will be ignored."
            );
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar8 = FCommandLine::Get();
    bLoggingConflictsRequested = FParse::Param(pwVar8,L"LogLocalizationConflicts");
    _Init_thread_footer(&::_TSS0);
  }
  if (bLoggingConflictsRequested == false) {
    if (GIsBuildMachine == false) {
      if (2 < (byte)LogTextLocalizationResource._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
      }
      if (4 < (byte)LogTextLocalizationResource._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
      }
      goto LAB_14177e56e;
    }
    if ((byte)LogTextLocalizationResource._0_1_ < 5) goto LAB_14177e56e;
    ::FString::ConcatFC(&local_38,&local_78,L" ");
    ::FString::ConcatFF(&local_58,&local_38,&local_88);
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((byte)LogTextLocalizationResource._0_1_ < 3) goto LAB_14177e56e;
    ::FString::ConcatFC(&local_48,&local_78,L" ");
    ::FString::ConcatFF(&local_68,&local_48,&local_88);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14177e56e:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return false;
}

