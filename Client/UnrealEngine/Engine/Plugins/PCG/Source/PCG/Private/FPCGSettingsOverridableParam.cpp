// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149f1bc20

UScriptStruct * __cdecl FPCGSettingsOverridableParam::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSettingsOverridableParam.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSettingsOverridableParam.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam,(UObject *)pUVar1,
                         L"PCGSettingsOverridableParam");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSettingsOverridableParam.OuterSingleton;
}

// GenerateAllPossibleAliases @ 149f467d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FPCGSettingsOverridableParam::GenerateAllPossibleAliases
          (FPCGSettingsOverridableParam *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FName *pFVar10;
  FName *pFVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 *puVar17;
  ForAnyElementType this_00;
  ForAnyElementType FVar18;
  FNameEntryId FVar19;
  FName FVar20;
  FName FVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_168;
  uint local_160;
  uint uStack_15c;
  ForAnyElementType local_158;
  undefined8 local_150;
  undefined1 local_148 [8];
  FName local_140;
  uint local_138;
  longlong local_130;
  FName local_128;
  FName local_120;
  uint local_118;
  FName local_114;
  undefined8 local_10c;
  FName *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  iVar16 = (this->Properties).ArrayNum;
  if ((iVar16 == 0) ||
     (*(int *)&(this->MapOfAliases).field_0x8 == *(int *)&(this->MapOfAliases).field_0x34)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FVar21.ComparisonIndex.Value = 0;
  FVar21.Number = 0;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  uStack_15c = 0;
  local_138 = 0;
  if (0 < iVar16) {
    local_130 = 0;
    FVar20 = FVar21;
    do {
      lVar13 = local_130;
      FVar19 = FVar20.ComparisonIndex.Value;
      if (*(int *)&(this->MapOfAliases).field_0x8 != *(int *)&(this->MapOfAliases).field_0x34) {
        puVar1 = *(undefined1 **)&(this->MapOfAliases).field_0x40;
        puVar17 = &(this->MapOfAliases).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar17 = puVar1;
        }
        uVar5 = *(uint *)(puVar17 +
                         ((ulonglong)(*(int *)&(this->MapOfAliases).field_0x48 - 1) &
                         (ulonglong)FVar20) * 4);
        if (uVar5 != 0xffffffff) {
          do {
            puVar12 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&this->MapOfAliases);
            if (*puVar12 == FVar19.Value) {
              FVar20 = (FName)(puVar12 + 2);
              if (puVar12 == (uint *)0x0) {
                FVar20 = FVar21;
              }
              if (FVar20 != (FName)0x0) goto LAB_149f468ac;
              break;
            }
            uVar5 = puVar12[6];
          } while (uVar5 != 0xffffffff);
        }
      }
      FVar20 = FVar21;
LAB_149f468ac:
      uVar5 = 0;
      if ((int)FVar19.Value < (this->Properties).ArrayNum) {
        uVar5 = ~FVar19.Value >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      pvVar2 = *(void **)((this->Properties).AllocatorInstance.Data + lVar13 * 8);
      if (pvVar2 == (void *)0x0) {
        local_10c = 0;
        local_140.ComparisonIndex.Value = 0;
        local_140.Number = 0;
      }
      else {
        bVar4 = IsThisNotNull(pvVar2,"FField::GetFName");
        if (bVar4) {
          local_114 = *(FName *)((longlong)pvVar2 + 0x20);
          local_140 = local_114;
        }
        else {
          local_114.ComparisonIndex.Value = 0;
          local_114.Number = 0;
          local_140 = FVar21;
        }
      }
      uVar5 = local_160;
      iVar16 = 0;
      if (FVar20 == (FName)0x0) {
LAB_149f46e67:
        if (local_160 == 0) {
          if (((local_168.Data <= &local_140) &&
              (&local_140 < (FName *)(local_168.Data + (longlong)(int)uStack_15c * 8))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if (local_160 == uStack_15c) {
            local_160 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_168,(int *)&uStack_15c);
          }
          lVar15 = (longlong)(int)local_160;
          local_160 = local_160 + 1;
          *(FName *)(local_168.Data + lVar15 * 8) = local_140;
          local_130 = lVar13;
        }
        else {
          pFVar11 = (FName *)(local_168.Data + (longlong)(int)local_160 * 8);
          FVar18.Data = local_168.Data;
          while( true ) {
            if (local_160 != uVar5) {
              local_148[0] = 0;
              `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_148);
            }
            if ((FName *)FVar18.Data == pFVar11) break;
            ::FName::ToString(&local_140,local_60);
            ::FName::ToString((FName *)FVar18.Data,&local_70);
            ::FString::PrintfImpl(&local_d8,L"%s/%s");
            iVar8 = local_d8.Data.ArrayNum + -1;
            if (local_d8.Data.ArrayNum == 0) {
              iVar8 = iVar16;
            }
            pFVar10 = ::FName::FName(&local_b8,iVar8,(wchar_t *)local_d8.Data.AllocatorInstance.Data
                                     ,FNAME_Add);
            FVar20 = *pFVar10;
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
            *(FName *)FVar18.Data = FVar20;
            FVar18.Data = FVar18.Data + 8;
          }
        }
      }
      else {
        uVar6 = *(uint *)&((ForAnyElementType *)((longlong)FVar20 + 8))->Data;
        lVar13 = local_130;
        if (uVar6 == 0) goto LAB_149f46e67;
        if (local_160 == 0) {
          if ((FName)&local_168 != FVar20) {
            FVar18.Data = *(FScriptContainerElement **)FVar20;
            local_160 = uVar6;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar6,uStack_15c,&local_168,uVar6,(int *)&uStack_15c);
            memcpy(local_168.Data,FVar18.Data,(longlong)(int)uVar6 << 3);
          }
          if (((local_168.Data <= &local_140) &&
              (&local_140 < (FName *)(local_168.Data + (longlong)(int)uStack_15c * 8))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          if (local_160 == uStack_15c) {
            local_160 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_168,(int *)&uStack_15c);
          }
          lVar13 = (longlong)(int)local_160;
          local_160 = local_160 + 1;
          *(FName *)(local_168.Data + lVar13 * 8) = local_140;
        }
        else {
          uVar6 = local_160 * uVar6;
          local_158.Data = (FScriptContainerElement *)0x0;
          local_150 = 0;
          if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
          }
          if (0 < (int)uVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar6,&local_158,0,(int *)((longlong)&local_150 + 4));
          }
          uVar14 = (ulonglong)(int)local_160;
          local_118 = local_160;
          local_100 = (FName *)(local_168.Data + uVar14 * 8);
          FVar18.Data = local_168.Data;
          while( true ) {
            pFVar11 = local_100;
            if (local_160 != (uint)uVar14) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            if ((FName *)FVar18.Data == pFVar11) break;
            this_00.Data = *(FScriptContainerElement **)FVar20;
            iVar8 = *(int *)&((ForAnyElementType *)((longlong)FVar20 + 8))->Data;
            pFVar11 = (FName *)(this_00.Data + (longlong)iVar8 * 8);
            while( true ) {
              if (*(int *)&((ForAnyElementType *)((longlong)FVar20 + 8))->Data != iVar8) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if ((FName *)this_00.Data == pFVar11) break;
              ::FName::ToString((FName *)this_00.Data,&local_a0);
              ::FName::ToString((FName *)FVar18.Data,&local_b0);
              ::FString::PrintfImpl(&local_f8,L"%s/%s");
              iVar7 = local_f8.Data.ArrayNum + -1;
              if (local_f8.Data.ArrayNum == 0) {
                iVar7 = iVar16;
              }
              pFVar10 = ::FName::FName(&local_c8,iVar7,
                                       (wchar_t *)local_f8.Data.AllocatorInstance.Data,FNAME_Add);
              local_128 = *pFVar10;
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              if (((local_158.Data <= &local_128) &&
                  (&local_128 < (FName *)(local_158.Data + (longlong)(int)local_150._4_4_ * 8))) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar9;
              }
              iVar7 = (int)local_150;
              if ((int)local_150 == local_150._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&local_158,(int *)((longlong)&local_150 + 4));
              }
              this_00.Data = this_00.Data + 8;
              local_150 = CONCAT44(local_150._4_4_,iVar7 + 1);
              *(FName *)(local_158.Data + (longlong)iVar7 * 8) = local_128;
            }
            ::FName::ToString(&local_140,&local_80);
            ::FName::ToString((FName *)FVar18.Data,&local_90);
            ::FString::PrintfImpl(&local_e8,L"%s/%s");
            iVar8 = local_e8.Data.ArrayNum + -1;
            if (local_e8.Data.ArrayNum == 0) {
              iVar8 = iVar16;
            }
            pFVar11 = ::FName::FName(&local_c0,iVar8,(wchar_t *)local_e8.Data.AllocatorInstance.Data
                                     ,FNAME_Add);
            local_120 = *pFVar11;
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (((local_158.Data <= &local_120) &&
                (&local_120 < (FName *)(local_158.Data + (longlong)(int)local_150._4_4_ * 8))) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            iVar8 = (int)local_150;
            if ((int)local_150 == local_150._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_158,(int *)((longlong)&local_150 + 4));
            }
            local_150 = CONCAT44(local_150._4_4_,iVar8 + 1);
            FVar18.Data = FVar18.Data + 8;
            *(FName *)(local_158.Data + (longlong)iVar8 * 8) = local_120;
            uVar14 = (ulonglong)local_118;
          }
          if ((FName *)local_168.Data != (FName *)0x0) {
            FMemory::Free(local_168.Data);
          }
          local_168.Data = local_158.Data;
          local_160 = (uint)local_150;
          uStack_15c = local_150._4_4_;
          local_150 = 0;
          local_158.Data = (FScriptContainerElement *)0x0;
        }
      }
      local_130 = local_130 + 1;
      FVar20.ComparisonIndex.Value = local_138 + 1;
      FVar20.Number = 0;
      local_138 = FVar20.ComparisonIndex.Value;
    } while ((int)FVar20.ComparisonIndex.Value < (this->Properties).ArrayNum);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_168.Data;
  __return_storage_ptr__->ArrayNum = local_160;
  __return_storage_ptr__->ArrayMax = uStack_15c;
  return __return_storage_ptr__;
}

// GetPropertyPath @ 149f4e490

FString * __thiscall
FPCGSettingsOverridableParam::GetPropertyPath
          (FPCGSettingsOverridableParam *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined4 local_res8 [2];
  FScriptContainerElement *local_res10;
  FString local_58;
  FString local_48;
  
  bVar5 = false;
  bVar4 = false;
  local_res8[0] = 0;
  bVar3 = true;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  iVar1 = (this->Properties).ArrayNum;
  local_res10 = pFVar9 + (longlong)iVar1 * 8;
  while( true ) {
    pFVar6 = local_res10;
    pFVar8 = (FScriptContainerElement *)0x0;
    if ((this->Properties).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L"/",1);
    }
    if (*(FField **)pFVar9 == (FField *)0x0) {
      bVar4 = true;
      local_58.Data.ArrayNum = 0;
      pFVar7 = &local_58;
    }
    else {
      bVar5 = true;
      pFVar7 = FField::GetAuthoredName(*(FField **)pFVar9,&local_48);
      pFVar8 = (pFVar7->Data).AllocatorInstance.Data;
    }
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    if (bVar4) {
      bVar4 = false;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (bVar5) {
      bVar5 = false;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)pFVar8,iVar10);
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    pFVar9 = pFVar9 + 8;
  }
  return __return_storage_ptr__;
}

// IsHardReferenceOverride @ 149f524b0

bool __thiscall
FPCGSettingsOverridableParam::IsHardReferenceOverride(FPCGSettingsOverridableParam *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar1 = (this->Properties).ArrayNum;
  if (iVar1 != 0) {
    uVar6 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar6 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    lVar2 = *(longlong *)
             ((this->Properties).AllocatorInstance.Data +
             (longlong)(this->Properties).ArrayNum * 8 + -8);
    if ((lVar2 != 0) && ((*(uint *)(*(longlong *)(lVar2 + 8) + 0x18) >> 0x10 & 1) != 0)) {
      return true;
    }
  }
  return false;
}

