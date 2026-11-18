// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetItemValueData @ 14baac970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EquipmentItemValueData * __cdecl
FDS_EquipmentItemValueData::GetItemValueData
          (FDS_EquipmentItemValueData *__return_storage_ptr__,FDS_ItemBaseTableRow *param_1)

{
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *this;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_ItemAbilityTableRow *pFVar5;
  FDS_EquipmentItemValueData *pFVar6;
  FDS_StatusTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_228 [32];
  float local_1f8 [2];
  undefined1 local_1f0 [8];
  FDS_EquipmentItemValueData *local_1e8;
  FScriptContainerElement *local_1e0;
  float *local_1d8;
  FScriptContainerElement *local_1d0;
  float *local_1c8;
  undefined1 local_1b8 [72];
  int local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar13 = 0;
  __return_storage_ptr__->CombatPowerEnhanceValue = 0;
  this = &__return_storage_ptr__->EnhanceValueList;
  *(undefined8 *)this = 0;
  this_00 = &__return_storage_ptr__->StatusValueList;
  *(undefined8 *)&(__return_storage_ptr__->EnhanceValueList).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EnhanceValueList).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EnhanceValueList).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(__return_storage_ptr__->StatusValueList).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->StatusValueList).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->StatusValueList).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x48 = 0;
  local_1f8[0] = 0.0;
  local_1e8 = __return_storage_ptr__;
  pFVar5 = FDS_ItemAbilityTableRow::Get((longlong)param_1->ID_Ability,true);
  if (pFVar5 != (FDS_ItemAbilityTableRow *)0x0) {
    DS_ItemDataUtil::GetStatusDefault
              ((TMap<EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,__int64,0>_>
                *)local_1b8,param_1->ID);
    uVar14 = uVar13;
    if (0 < (pFVar5->StatusType).ArrayNum) {
LAB_14baaca60:
      uVar12 = (uint)uVar13;
      uVar11 = ~uVar12 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar12 < (pFVar5->StatusType).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FDS_EquipmentItemValueData *)(*pcVar2)();
        return pFVar6;
      }
      pFVar7 = FDS_StatusTableRow::Get
                         ((longlong)
                          *(int *)((pFVar5->StatusType).AllocatorInstance.Data + uVar14 * 4),true);
      if (pFVar7 == (FDS_StatusTableRow *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"FDS_EquipmentItemValueData::GetItemValueData",0x2c,Yes);
          UDS_LogManager::PrintLog(pUVar8,1,Warning,local_168.Ptr,0xc9,L"statusRow is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar12 < (pFVar5->StatusType).ArrayNum) {
          uVar4 = uVar11;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FDS_EquipmentItemValueData *)(*pcVar2)();
          return pFVar6;
        }
        uVar4 = *(uint *)((pFVar5->StatusType).AllocatorInstance.Data + uVar14 * 4);
        if (local_1b8._8_4_ != local_1b8._52_4_) {
          puVar9 = local_1b8 + 0x38;
          if ((undefined1 *)local_1b8._64_8_ != (undefined1 *)0x0) {
            puVar9 = (undefined1 *)local_1b8._64_8_;
          }
          uVar13 = (ulonglong)(local_170 - 1U & uVar4);
          for (iVar1 = *(int *)(puVar9 + uVar13 * 4); iVar1 != -1;
              iVar1 = *(int *)(local_1b8._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
            if (*(uint *)(local_1b8._0_8_ + (longlong)iVar1 * 0x18) == uVar4) {
              puVar9 = local_1b8 + 0x38;
              if ((undefined1 *)local_1b8._64_8_ != (undefined1 *)0x0) {
                puVar9 = (undefined1 *)local_1b8._64_8_;
              }
              iVar1 = *(int *)(puVar9 + uVar13 * 4);
              goto joined_r0x00014baacbfc;
            }
          }
        }
      }
      goto LAB_14baacd3f;
    }
LAB_14baacd6a:
    __return_storage_ptr__->CombatPowerEnhanceValue = 0;
    local_170 = 0;
    if ((undefined1 *)local_1b8._64_8_ != (undefined1 *)0x0) {
      FMemory::Free((void *)local_1b8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_1b8);
  }
  return __return_storage_ptr__;
joined_r0x00014baacbfc:
  if (iVar1 == -1) goto LAB_14baacc1d;
  lVar10 = local_1b8._0_8_ + (longlong)iVar1 * 0x18;
  if (*(uint *)(local_1b8._0_8_ + (longlong)iVar1 * 0x18) == uVar4) {
    if (lVar10 != 0) goto LAB_14baacc45;
    goto LAB_14baacc1f;
  }
  iVar1 = *(int *)(lVar10 + 0x10);
  goto joined_r0x00014baacbfc;
LAB_14baacc1d:
  lVar10 = 0;
LAB_14baacc1f:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FDS_EquipmentItemValueData *)(*pcVar2)();
    return pFVar6;
  }
LAB_14baacc45:
  local_1f8[1] = 0.0;
  local_1f8[0] = (float)*(longlong *)(lVar10 + 8);
  uVar4 = 0;
  if ((int)uVar12 < (pFVar5->StatusType).ArrayNum) {
    uVar4 = uVar11;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FDS_EquipmentItemValueData *)(*pcVar2)();
    return pFVar6;
  }
  local_1e0 = (pFVar5->StatusType).AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
  local_1d8 = local_1f8 + 1;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,int_&&>_>
            (this,(TPairInitializer<EDS_StatusType_const_&,int_&&> *)local_1f0,(bool *)&local_1e0);
  uVar4 = 0;
  if ((int)uVar12 < (pFVar5->StatusType).ArrayNum) {
    uVar4 = uVar11;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FDS_EquipmentItemValueData *)(*pcVar2)();
    return pFVar6;
  }
  local_1d0 = (pFVar5->StatusType).AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
  local_1c8 = local_1f8;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,float_&>_>
            (this_00,(TPairInitializer<EDS_StatusType_const_&,float_&> *)(local_1f0 + 4),
             (bool *)&local_1d0);
LAB_14baacd3f:
  uVar13 = (ulonglong)(uVar12 + 1);
  __return_storage_ptr__ = local_1e8;
  uVar14 = uVar14 + 1;
  if ((pFVar5->StatusType).ArrayNum <= (int)(uVar12 + 1)) goto LAB_14baacd6a;
  goto LAB_14baaca60;
}

// GetItemValueData @ 14baacdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EquipmentItemValueData * __cdecl
FDS_EquipmentItemValueData::GetItemValueData
          (FDS_EquipmentItemValueData *__return_storage_ptr__,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UObject *pUVar5;
  FDS_ItemBaseTableRow *pFVar6;
  FDS_ItemAbilityTableRow *pFVar7;
  FDS_EquipmentItemValueData *pFVar8;
  UDS_LogManager *pUVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_2a8 [32];
  float local_278;
  float local_274;
  FDS_EquipmentItemValueData *local_270;
  undefined1 local_268 [8];
  FDS_StatusTableRow *local_260;
  FScriptContainerElement *local_258;
  float *local_250;
  FScriptContainerElement *local_248;
  float *local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  int local_204;
  undefined1 local_200 [8];
  undefined1 *local_1f8;
  int local_1f0;
  undefined1 local_1e8 [72];
  int local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar13 = 0;
  __return_storage_ptr__->CombatPowerEnhanceValue = 0;
  this = &__return_storage_ptr__->StatusValueList;
  *(undefined8 *)&__return_storage_ptr__->EnhanceValueList = 0;
  *(undefined8 *)&(__return_storage_ptr__->EnhanceValueList).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EnhanceValueList).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EnhanceValueList).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EnhanceValueList).field_0x48 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&(__return_storage_ptr__->StatusValueList).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->StatusValueList).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->StatusValueList).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->StatusValueList).field_0x48 = 0;
  local_res10 = param_1.WeakPtr;
  local_270 = __return_storage_ptr__;
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    pFVar6 = FDS_ItemBaseTableRow::Get((longlong)*(int *)&pUVar5[8].field_0x10,true);
    if (pFVar6 != (FDS_ItemBaseTableRow *)0x0) {
      local_278 = 0.0;
      fVar18 = 0.0;
      fVar17 = 0.0;
      pFVar7 = FDS_ItemAbilityTableRow::Get((longlong)pFVar6->ID_Ability,true);
      if (pFVar7 != (FDS_ItemAbilityTableRow *)0x0) {
        pUVar5 = FWeakObjectPtr::Get(&local_res10);
        DS_ItemDataUtil::GetStatusDefault
                  ((TMap<EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,__int64,0>_>
                    *)local_1e8,*(int *)&pUVar5[8].field_0x10);
        local_238 = 0;
        local_1f8 = (undefined1 *)0x0;
        local_230 = 0;
        local_218 = 0;
        local_210 = 0;
        local_20c = 0x80;
        local_208 = 0xffffffff;
        local_204 = 0;
        local_1f0 = 0;
        uVar14 = uVar13;
        if (0 < (pFVar7->StatusType).ArrayNum) {
LAB_14baacf40:
          uVar12 = (uint)uVar13;
          uVar15 = ~uVar12 >> 0x1f;
          uVar3 = 0;
          if ((int)uVar12 < (pFVar7->StatusType).ArrayNum) {
            uVar3 = uVar15;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar8 = (FDS_EquipmentItemValueData *)(*pcVar1)();
            return pFVar8;
          }
          local_260 = FDS_StatusTableRow::Get
                                ((longlong)
                                 *(int *)((pFVar7->StatusType).AllocatorInstance.Data + uVar14 * 4),
                                 true);
          if (local_260 == (FDS_StatusTableRow *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            if (pUVar9 != (UDS_LogManager *)0x0) {
              pUVar9 = UDS_LogManager::GetInst();
              local_198._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_198,"FDS_EquipmentItemValueData::GetItemValueData",0x2c,Yes);
              UDS_LogManager::PrintLog(pUVar9,1,Warning,local_198.Ptr,0x99,L"statusRow is nullptr.")
              ;
              if ((void *)local_198._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_198._padding_);
              }
            }
          }
          else {
            uVar3 = 0;
            if ((int)uVar12 < (pFVar7->StatusType).ArrayNum) {
              uVar3 = uVar15;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              pFVar8 = (FDS_EquipmentItemValueData *)(*pcVar1)();
              return pFVar8;
            }
            uVar3 = *(uint *)((pFVar7->StatusType).AllocatorInstance.Data + uVar14 * 4);
            if (local_1e8._8_4_ != local_1e8._52_4_) {
              puVar11 = local_1e8 + 0x38;
              if ((undefined1 *)local_1e8._64_8_ != (undefined1 *)0x0) {
                puVar11 = (undefined1 *)local_1e8._64_8_;
              }
              for (iVar4 = *(int *)(puVar11 + (ulonglong)(local_1a0 - 1U & uVar3) * 4); iVar4 != -1;
                  iVar4 = *(int *)(local_1e8._0_8_ + 0x10 + (longlong)iVar4 * 0x18)) {
                if (*(uint *)(local_1e8._0_8_ + (longlong)iVar4 * 0x18) == uVar3) {
                  if ((int)local_230 == local_204) goto LAB_14baad1c8;
                  puVar11 = local_200;
                  if (local_1f8 != (undefined1 *)0x0) {
                    puVar11 = local_1f8;
                  }
                  uVar13 = (ulonglong)(local_1f0 - 1U & uVar3);
                  iVar4 = *(int *)(puVar11 + uVar13 * 4);
                  if (iVar4 == -1) goto LAB_14baad1c8;
                  goto LAB_14baad1b0;
                }
              }
            }
          }
          goto LAB_14baad0cc;
        }
LAB_14baad0fc:
        local_1f0 = 0;
        __return_storage_ptr__->CombatPowerEnhanceValue = (int)(fVar17 - fVar18);
        if (local_1f8 != (undefined1 *)0x0) {
          FMemory::Free(local_1f8);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_238);
        local_1a0 = 0;
        if ((undefined1 *)local_1e8._64_8_ != (undefined1 *)0x0) {
          FMemory::Free((void *)local_1e8._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (local_1e8);
      }
    }
  }
  return __return_storage_ptr__;
  while (iVar4 = *(int *)(local_238 + 0x10 + (longlong)iVar4 * 0x18), iVar4 != -1) {
LAB_14baad1b0:
    if (*(uint *)(local_238 + (longlong)iVar4 * 0x18) == uVar3) {
      puVar11 = local_200;
      if (local_1f8 != (undefined1 *)0x0) {
        puVar11 = local_1f8;
      }
      iVar4 = *(int *)(puVar11 + uVar13 * 4);
      goto joined_r0x00014baad387;
    }
  }
LAB_14baad1c8:
  lVar10 = 0;
  goto LAB_14baad1ca;
joined_r0x00014baad387:
  if (iVar4 == -1) goto LAB_14baad3a8;
  lVar10 = local_238 + (longlong)iVar4 * 0x18;
  if (*(uint *)(local_238 + (longlong)iVar4 * 0x18) == uVar3) {
    if (lVar10 != 0) goto LAB_14baad3d8;
    goto LAB_14baad3aa;
  }
  iVar4 = *(int *)(lVar10 + 0x10);
  goto joined_r0x00014baad387;
LAB_14baad3a8:
  lVar10 = 0;
LAB_14baad3aa:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FDS_EquipmentItemValueData *)(*pcVar1)();
    return pFVar8;
  }
LAB_14baad3d8:
  lVar10 = *(longlong *)(lVar10 + 8);
LAB_14baad1ca:
  local_278 = (float)lVar10;
  if (local_1e8._8_4_ != local_1e8._52_4_) {
    puVar11 = local_1e8 + 0x38;
    if ((undefined1 *)local_1e8._64_8_ != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)local_1e8._64_8_;
    }
    iVar4 = *(int *)(puVar11 + (ulonglong)(local_1a0 - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar10 = local_1e8._0_8_ + (longlong)iVar4 * 0x18;
      if (*(uint *)(local_1e8._0_8_ + (longlong)iVar4 * 0x18) == uVar3) {
        if (lVar10 != 0) goto LAB_14baad244;
        goto LAB_14baad21e;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
    }
  }
  lVar10 = 0;
LAB_14baad21e:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FDS_EquipmentItemValueData *)(*pcVar1)();
    return pFVar8;
  }
LAB_14baad244:
  fVar16 = (float)*(longlong *)(lVar10 + 8);
  uVar3 = 0;
  if ((int)uVar12 < (pFVar7->StatusType).ArrayNum) {
    uVar3 = uVar15;
  }
  fVar18 = fVar18 + local_260->CombatPointCalculate * fVar16;
  fVar17 = fVar17 + (fVar16 + local_278) * local_260->CombatPointCalculate;
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FDS_EquipmentItemValueData *)(*pcVar1)();
    return pFVar8;
  }
  local_258 = (pFVar7->StatusType).AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
  local_250 = &local_278;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,float_&>_>
            (&local_270->EnhanceValueList,
             (TPairInitializer<EDS_StatusType_const_&,float_&> *)local_268,(bool *)&local_258);
  local_274 = local_278 + fVar16;
  uVar3 = 0;
  if ((int)uVar12 < (pFVar7->StatusType).ArrayNum) {
    uVar3 = uVar15;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FDS_EquipmentItemValueData *)(*pcVar1)();
    return pFVar8;
  }
  local_248 = (pFVar7->StatusType).AllocatorInstance.Data + (longlong)(int)uVar12 * 4;
  local_240 = &local_274;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_StatusType_const_&,float_&&>_>
            (this,(TPairInitializer<EDS_StatusType_const_&,float_&&> *)(local_268 + 4),
             (bool *)&local_248);
LAB_14baad0cc:
  uVar13 = (ulonglong)(uVar12 + 1);
  __return_storage_ptr__ = local_270;
  uVar14 = uVar14 + 1;
  if ((pFVar7->StatusType).ArrayNum <= (int)(uVar12 + 1)) goto LAB_14baad0fc;
  goto LAB_14baacf40;
}

// ~FDS_EquipmentItemValueData @ 14bd43ba0

void __thiscall
FDS_EquipmentItemValueData::~FDS_EquipmentItemValueData(FDS_EquipmentItemValueData *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->StatusValueList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StatusValueList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StatusValueList);
  *(undefined4 *)&(this->EnhanceValueList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EnhanceValueList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EnhanceValueList);
  return;
}

// operator= @ 14bd441c0

FDS_EquipmentItemValueData * __thiscall
FDS_EquipmentItemValueData::operator=
          (FDS_EquipmentItemValueData *this,FDS_EquipmentItemValueData *param_1)

{
  this->CombatPowerEnhanceValue = param_1->CombatPowerEnhanceValue;
  TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
  ::operator=(&this->EnhanceValueList,&param_1->EnhanceValueList);
  TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
  ::operator=(&this->StatusValueList,&param_1->StatusValueList);
  return this;
}

