// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// GetComparisonData @ 14baa5270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_EquipmentItemComparisonData * __cdecl
FDS_EquipmentItemComparisonData::GetComparisonData
          (FDS_EquipmentItemComparisonData *__return_storage_ptr__,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  FDS_ItemBaseTableRow *pFVar8;
  FDS_ItemBaseTableRow *pFVar9;
  FDS_ItemAbilityTableRow *pFVar10;
  FDS_EquipmentItemComparisonData *pFVar11;
  FDS_StatusTableRow *pFVar12;
  UDS_LogManager *pUVar13;
  long64 *plVar14;
  FScriptContainerElement *pFVar15;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *pTVar16;
  int iVar17;
  undefined1 *puVar18;
  TPairInitializer<EDS_StatusType_&,int_&> *pTVar19;
  uint uVar20;
  EDS_StatusType **ppEVar21;
  longlong lVar22;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_2b8 [32];
  EDS_StatusType local_278 [2];
  ForAnyElementType local_270;
  undefined8 local_268;
  int local_260;
  int local_25c;
  int local_258;
  undefined1 local_254 [8];
  undefined1 local_24c [20];
  EDS_StatusType *local_238;
  int *local_230;
  EDS_StatusType *local_228;
  int *local_220;
  int *local_218;
  FScriptContainerElement *local_210;
  undefined1 local_208 [72];
  int local_1c0;
  undefined1 local_1b8 [72];
  undefined4 local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  __return_storage_ptr__->ComparisonCombatPower = 0;
  *(undefined8 *)&__return_storage_ptr__->ComparisonValue = 0;
  *(undefined8 *)&(__return_storage_ptr__->ComparisonValue).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ComparisonValue).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ComparisonValue).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ComparisonValue).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->ComparisonValue).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->ComparisonValue).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ComparisonValue).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ComparisonValue).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->AddStatus = 0;
  *(undefined8 *)&(__return_storage_ptr__->AddStatus).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AddStatus).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AddStatus).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AddStatus).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->AddStatus).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->AddStatus).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AddStatus).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AddStatus).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DeleteStatus = 0;
  *(undefined8 *)&(__return_storage_ptr__->DeleteStatus).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DeleteStatus).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DeleteStatus).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DeleteStatus).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DeleteStatus).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DeleteStatus).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DeleteStatus).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DeleteStatus).field_0x48 = 0;
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  local_24c._12_8_ = __return_storage_ptr__;
  bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if ((!bVar4) &&
     (bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res18,(void *)0x0),
     !bVar4)) {
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    __return_storage_ptr__->ComparisonCombatPower =
         *(int *)&pUVar6[0x10].field_0x20 - *(int *)&pUVar7[0x10].field_0x20;
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    pFVar8 = FDS_ItemBaseTableRow::Get((longlong)*(int *)&pUVar6[8].field_0x10,true);
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    pFVar9 = FDS_ItemBaseTableRow::Get((longlong)*(int *)&pUVar6[8].field_0x10,true);
    if ((pFVar8 != (FDS_ItemBaseTableRow *)0x0) && (pFVar9 != (FDS_ItemBaseTableRow *)0x0)) {
      pFVar10 = FDS_ItemAbilityTableRow::Get((longlong)pFVar8->ID_Ability,true);
      local_24c._4_8_ = FDS_ItemAbilityTableRow::Get((longlong)pFVar9->ID_Ability,true);
      local_270.Data = (FScriptContainerElement *)0x0;
      local_268 = 0;
      if (((FDS_ItemAbilityTableRow *)local_24c._4_8_ != (FDS_ItemAbilityTableRow *)0x0) &&
         ((TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *)&local_270 !=
          &((FDS_ItemAbilityTableRow *)local_24c._4_8_)->StatusType)) {
        uVar20 = (((FDS_ItemAbilityTableRow *)local_24c._4_8_)->StatusType).ArrayNum;
        pFVar1 = (((FDS_ItemAbilityTableRow *)local_24c._4_8_)->StatusType).AllocatorInstance.Data;
        local_268 = (ulonglong)uVar20;
        if (uVar20 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar20,0,&local_270,uVar20,(int *)((longlong)&local_268 + 4));
          memcpy(local_270.Data,pFVar1,(longlong)(int)uVar20 << 2);
        }
      }
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      DS_ItemDataUtil::GetStatusDefault
                ((TMap<EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,__int64,0>_>
                  *)local_1b8,*(int *)&pUVar6[8].field_0x10);
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      DS_ItemDataUtil::GetStatusDefault
                ((TMap<EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,__int64,0>_>
                  *)local_208,*(int *)&pUVar6[8].field_0x10);
      if ((pFVar10 != (FDS_ItemAbilityTableRow *)0x0) &&
         (uVar20 = 0, 0 < (pFVar10->StatusType).ArrayNum)) {
        lVar22 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar20 < (pFVar10->StatusType).ArrayNum) {
            uVar5 = ~uVar20 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar11 = (FDS_EquipmentItemComparisonData *)(*pcVar2)();
            return pFVar11;
          }
          local_278[0] = *(EDS_StatusType *)((pFVar10->StatusType).AllocatorInstance.Data + lVar22);
          uVar5 = 0;
          if ((int)uVar20 < (pFVar10->StatusType).ArrayNum) {
            uVar5 = ~uVar20 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar11 = (FDS_EquipmentItemComparisonData *)(*pcVar2)();
            return pFVar11;
          }
          pFVar12 = FDS_StatusTableRow::Get((longlong)(int)local_278[0],true);
          if (pFVar12 == (FDS_StatusTableRow *)0x0) {
            pUVar13 = UDS_LogManager::GetInst();
            if (pUVar13 != (UDS_LogManager *)0x0) {
              pUVar13 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"FDS_EquipmentItemComparisonData::GetComparisonData",0x32,Yes);
              UDS_LogManager::PrintLog
                        (pUVar13,1,Warning,local_168.Ptr,0x55,L"statusRow is nullptr.");
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
            }
          }
          else {
            plVar14 = TMapBase<enum_EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,__int64,0>_>
                      ::FindChecked((TMap<EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,__int64,0>_>
                                     *)local_1b8,local_278[0]);
            local_260 = (int)*plVar14;
            if (local_208._8_4_ != local_208._52_4_) {
              puVar18 = local_208 + 0x38;
              if ((undefined1 *)local_208._64_8_ != (undefined1 *)0x0) {
                puVar18 = (undefined1 *)local_208._64_8_;
              }
              for (iVar17 = *(int *)(puVar18 + (ulonglong)(local_1c0 - Hp & local_278[0]) * 4);
                  iVar17 != -1; iVar17 = *(int *)(local_208._0_8_ + 0x10 + (longlong)iVar17 * 0x18))
              {
                if (*(EDS_StatusType *)(local_208._0_8_ + (longlong)iVar17 * 0x18) == local_278[0])
                {
                  plVar14 = TMapBase<enum_EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,__int64,0>_>
                            ::FindChecked(local_208,local_278[0]);
                  local_258 = local_260 - (int)*plVar14;
                  if (local_258 == 0) goto LAB_14baa56a0;
                  local_238 = local_278;
                  ppEVar21 = &local_238;
                  local_230 = &local_258;
                  pTVar19 = (TPairInitializer<EDS_StatusType_&,int_&> *)local_254;
                  pTVar16 = &__return_storage_ptr__->ComparisonValue;
                  goto LAB_14baa5698;
                }
              }
            }
            local_228 = local_278;
            ppEVar21 = &local_228;
            local_220 = &local_260;
            pTVar19 = (TPairInitializer<EDS_StatusType_&,int_&> *)(local_254 + 4);
            pTVar16 = &__return_storage_ptr__->AddStatus;
LAB_14baa5698:
            TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<enum_EDS_StatusType_&,int_&>_>
                      (pTVar16,pTVar19,(bool *)ppEVar21);
          }
LAB_14baa56a0:
          uVar20 = uVar20 + 1;
          lVar22 = lVar22 + 4;
        } while ((int)uVar20 < (pFVar10->StatusType).ArrayNum);
      }
      uVar3 = local_24c._4_8_;
      pTVar16 = &__return_storage_ptr__->DeleteStatus;
      uVar20 = 0;
      if (0 < (int)local_268) {
        lVar22 = 0;
        iVar17 = (int)local_268;
        do {
          uVar5 = 0;
          if ((int)uVar20 < iVar17) {
            uVar5 = ~uVar20 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar11 = (FDS_EquipmentItemComparisonData *)(*pcVar2)();
              return pFVar11;
            }
            iVar17 = (int)local_268;
          }
          local_25c = *(int *)(local_270.Data + lVar22);
          if (pFVar10 != (FDS_ItemAbilityTableRow *)0x0) {
            pFVar15 = (pFVar10->StatusType).AllocatorInstance.Data;
            pFVar1 = pFVar15 + (longlong)(pFVar10->StatusType).ArrayNum * 4;
            for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 4) {
              if (*(int *)pFVar15 == local_25c) goto LAB_14baa57ca;
            }
          }
          uVar5 = 0;
          if ((int)uVar20 < ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar3 + 0x20))->ArrayNum) {
            uVar5 = ~uVar20 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar11 = (FDS_EquipmentItemComparisonData *)(*pcVar2)();
            return pFVar11;
          }
          local_218 = &local_25c;
          local_210 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar3 + 0x20))->
                      AllocatorInstance).Data + (longlong)(int)uVar20 * 4;
          TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_StatusType_&,int_const_&>_>
                    (pTVar16,(TPairInitializer<EDS_StatusType_&,int_const_&> *)local_24c,
                     (bool *)&local_218);
          iVar17 = (int)local_268;
LAB_14baa57ca:
          uVar20 = uVar20 + 1;
          lVar22 = lVar22 + 4;
          __return_storage_ptr__ = (FDS_EquipmentItemComparisonData *)local_24c._12_8_;
        } while ((int)uVar20 < iVar17);
      }
      local_1c0 = 0;
      if ((undefined1 *)local_208._64_8_ != (undefined1 *)0x0) {
        FMemory::Free((void *)local_208._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_208);
      local_170 = 0;
      if ((void *)local_1b8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1b8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TMap<EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,__int64,0>_>
                  *)local_1b8);
      if (local_270.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// ~FDS_EquipmentItemComparisonData @ 14bd43b10

void __thiscall
FDS_EquipmentItemComparisonData::~FDS_EquipmentItemComparisonData
          (FDS_EquipmentItemComparisonData *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->DeleteStatus).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeleteStatus).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DeleteStatus);
  *(undefined4 *)&(this->AddStatus).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AddStatus).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AddStatus);
  *(undefined4 *)&(this->ComparisonValue).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ComparisonValue).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ComparisonValue);
  return;
}

