// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 9

// GetDefaultImportSettings @ 14e4f5fc0

FInterchangeImportSettings * __cdecl
FInterchangeProjectSettingsUtils::GetDefaultImportSettings(bool param_1)

{
  UClass *this;
  longlong lVar1;
  
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  lVar1 = 0x160;
  if (!param_1) {
    lVar1 = 0x38;
  }
  return (FInterchangeImportSettings *)
         (&((this->ClassDefaultObject).field0_0x0.DebugPtr)->field_0x0 + lVar1);
}

// GetDefaultPipelineStackName @ 14e4f6010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __cdecl
FInterchangeProjectSettingsUtils::GetDefaultPipelineStackName
          (bool param_1,UInterchangeSourceData *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  UObject *pUVar4;
  byte bVar5;
  UClass *this;
  FInterchangeGroup *pFVar6;
  FName *pFVar7;
  UInterchangeManager *this_00;
  UInterchangeTranslatorBase *this_01;
  UInterchangeProjectSettings *pUVar8;
  undefined7 in_register_00000009;
  FName FVar9;
  longlong lVar10;
  UInterchangeSourceData *in_R8;
  TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
  *pTVar11;
  uint *puVar12;
  EUsedGroupStatus local_res10 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  FVar9._1_7_ = in_register_00000009;
  FVar9.ComparisonIndex.Value._0_1_ = param_1;
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar4 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar6 = GetUsedGroup(local_res10);
  if (local_res10[0] == SetAndValid) {
    pFVar7 = &pFVar6->DefaultPipelineStack;
  }
  else {
    lVar10 = 0x1b0;
    if ((char)param_2 == '\0') {
      lVar10 = 0x88;
    }
    pFVar7 = (FName *)(&pUVar4->field_0x0 + lVar10);
  }
  *(FName *)FVar9 = *pFVar7;
  if ((char)param_2 == '\0') {
    this_00 = UInterchangeManager::GetInterchangeManager();
    this_01 = UInterchangeManager::GetTranslatorForSourceData(this_00,in_R8);
    if (this_01 != (UInterchangeTranslatorBase *)0x0) {
      UObjectBase::AddRef((UObjectBase *)this_01);
      bVar5 = (**(code **)(this_01->_padding_ + 0x2c8))(this_01);
      if (local_res10[0] == SetAndValid) {
        pTVar11 = &pFVar6->DefaultPipelineStackOverride;
      }
      else {
        pUVar8 = GetDefault<UInterchangeProjectSettings>();
        pTVar11 = &(pUVar8->ContentImportSettings).DefaultPipelineStackOverride;
      }
      iVar2 = *(int *)&pTVar11->field_0x28;
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar11->field_0x10;
      uStack_54 = 1;
      iStack_58 = 0;
      local_40 = iStack_58;
      iStack_44 = 0;
      if (iVar2 != 0) {
        puVar12 = *(uint **)&pTVar11->field_0x20;
        if (*(uint **)&pTVar11->field_0x20 == (uint *)0x0) {
          puVar12 = (uint *)TStack_80.Array;
        }
        uVar3 = *puVar12;
        local_40 = 0;
        iStack_58 = 0;
        while (uVar3 == 0) {
          lVar10 = (longlong)iStack_58;
          local_40 = local_40 + 0x20;
          iStack_58 = iStack_58 + 1;
          iStack_44 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_14e4f616e;
          uVar3 = puVar12[lVar10 + 1];
        }
        uStack_54 = -uVar3 & uVar3;
        uVar1 = (ulonglong)uStack_54 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iStack_44 = local_40 + -1 + (int)lVar10;
        if (iVar2 < iStack_44) {
          iStack_44 = iVar2;
        }
      }
LAB_14e4f616e:
      uStack_48 = 0xffffffff;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iStack_3c = TStack_80.CurrentBitIndex;
      TStack_80._28_4_ = TStack_80.CurrentBitIndex;
      TStack_80.BaseBitIndex = local_40;
      local_60 = pTVar11;
      local_50 = (undefined1 *)TStack_80.Array;
      TStack_80._padding_._0_4_ = iStack_58;
      TStack_80._padding_._4_4_ = uStack_54;
      TStack_80.CurrentBitIndex = iStack_44;
      if (iStack_44 < *(int *)&pTVar11->field_0x28) {
        do {
          lVar10 = *(longlong *)pTVar11;
          if ((*(byte *)(lVar10 + (longlong)TStack_80.CurrentBitIndex * 0x14) ^ bVar5) <
              *(byte *)(lVar10 + (longlong)TStack_80.CurrentBitIndex * 0x14)) {
            *(FName *)FVar9 = *(FName *)(lVar10 + 4 + (longlong)TStack_80.CurrentBitIndex * 0x14);
            break;
          }
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
      }
      (**(code **)(this_01->_padding_ + 0x2e0))(this_01);
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_01);
    }
  }
  return FVar9;
}

// GetGroupNames @ 14e4f6610

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FInterchangeProjectSettingsUtils::GetGroupNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *this;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res10;
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar6 = *(int *)&pUVar1[0xf].field_0x20;
  pFVar9 = *(FScriptContainerElement **)&pUVar1[0xf].field_0x18;
  pFVar10 = pFVar9 + (longlong)iVar6 * 200;
  while( true ) {
    if (*(int *)&pUVar1[0xf].field_0x20 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInterchangeGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    uVar3 = *(undefined8 *)pFVar9;
    pFVar9 = pFVar9 + 200;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = uVar3;
  }
  return __return_storage_ptr__;
}

// GetImportSettings @ 14e4f6770

FInterchangeImportSettings * __cdecl
FInterchangeProjectSettingsUtils::GetImportSettings
          (UInterchangeProjectSettings *param_1,bool param_2)

{
  FInterchangeImportSettings *pFVar1;
  
  pFVar1 = (FInterchangeImportSettings *)&param_1->ContentImportSettings;
  if (param_2) {
    pFVar1 = (FInterchangeImportSettings *)&param_1->SceneImportSettings;
  }
  return pFVar1;
}

// GetMutableDefaultImportSettings @ 14e4f6dd0

FInterchangeImportSettings * __cdecl
FInterchangeProjectSettingsUtils::GetMutableDefaultImportSettings(bool param_1)

{
  UClass *this;
  longlong lVar1;
  
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  lVar1 = 0x160;
  if (!param_1) {
    lVar1 = 0x38;
  }
  return (FInterchangeImportSettings *)
         (&((this->ClassDefaultObject).field0_0x0.DebugPtr)->field_0x0 + lVar1);
}

// GetMutableImportSettings @ 14e4f6e20

FInterchangeImportSettings * __cdecl
FInterchangeProjectSettingsUtils::GetMutableImportSettings
          (UInterchangeProjectSettings *param_1,bool param_2)

{
  FInterchangeImportSettings *pFVar1;
  
  pFVar1 = (FInterchangeImportSettings *)&param_1->ContentImportSettings;
  if (param_2) {
    pFVar1 = (FInterchangeImportSettings *)&param_1->SceneImportSettings;
  }
  return pFVar1;
}

// GetUsedGroup @ 14e4f9fc0

FInterchangeGroup * __cdecl
FInterchangeProjectSettingsUtils::GetUsedGroup(EUsedGroupStatus *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FInterchangeGroup *pFVar5;
  FInterchangeGroup *pFVar6;
  undefined1 local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInterchangeGroup::FInterchangeGroup(&InterchangeGroupNone);
      atexit(`FInterchangeProjectSettingsUtils::GetUsedGroup'::__l2::
             _dynamic_atexit_destructor_for__InterchangeGroupNone__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *param_1 = NotSet;
  pUVar4 = UInterchangeEditorSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar2 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar2 == (UObject *)0x0) ||
     (((*(int *)(pUVar2 + 2) == 0 && *(int *)&pUVar2[1].field_0x20 == 0) &&
      *(int *)&pUVar2[1].field_0x1c == 0) && *(int *)&pUVar2[1].field_0x24 == 0)) {
LAB_14e4fa0ce:
    pFVar5 = &InterchangeGroupNone;
  }
  else {
    pUVar4 = UInterchangeProjectSettings::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    pUVar3 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar1 = *(int *)&pUVar3[0xf].field_0x20;
    pFVar5 = *(FInterchangeGroup **)&pUVar3[0xf].field_0x18;
    pFVar6 = pFVar5 + iVar1;
    while( true ) {
      if (*(int *)&pUVar3[0xf].field_0x20 != iVar1) {
        `TCheckedPointerIterator<FInterchangeGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) {
        *param_1 = SetAndInvalid;
        goto LAB_14e4fa0ce;
      }
      if ((((pFVar5->UniqueID).C == *(uint *)&pUVar2[1].field_0x24 &&
           (pFVar5->UniqueID).D == *(uint *)(pUVar2 + 2)) &&
          (pFVar5->UniqueID).B == *(uint *)&pUVar2[1].field_0x20) &&
          (pFVar5->UniqueID).A == *(uint *)&pUVar2[1].field_0x1c) break;
      pFVar5 = pFVar5 + 1;
    }
    *param_1 = SetAndValid;
  }
  return pFVar5;
}

// SetDefaultPipelineStackName @ 14e5073d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FInterchangeProjectSettingsUtils::SetDefaultPipelineStackName
          (bool param_1,UInterchangeSourceData *param_2,FName param_3)

{
  TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
  *pTVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  UClass *pUVar5;
  UInterchangeManager *this;
  UInterchangeTranslatorBase *this_00;
  UInterchangeProjectSettings *pUVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
  *local_28;
  undefined2 local_20;
  
  pUVar5 = UInterchangeProjectSettings::StaticClass();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  lVar9 = 0x160;
  if (!param_1) {
    lVar9 = 0x38;
  }
  plVar10 = (longlong *)(&((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr)->field_0x0 + lVar9);
  uVar3 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  if ((int)plVar10[1] == *(int *)((longlong)plVar10 + 0x34)) {
    return;
  }
  plVar7 = (longlong *)plVar10[8];
  if ((longlong *)plVar10[8] == (longlong *)0x0) {
    plVar7 = plVar10 + 7;
  }
  iVar4 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar10[9] - 1U & param_3.Number + uVar3) * 4
                  );
  if (iVar4 == -1) {
    return;
  }
  do {
    if (*(FName *)(*plVar10 + (longlong)iVar4 * 0x30) == param_3) {
      if (!param_1) {
        this = UInterchangeManager::GetInterchangeManager();
        this_00 = UInterchangeManager::GetTranslatorForSourceData(this,param_2);
        if (this_00 != (UInterchangeTranslatorBase *)0x0) {
          UObjectBase::AddRef((UObjectBase *)this_00);
          bVar2 = (**(code **)(this_00->_padding_ + 0x2c8))(this_00);
          pUVar6 = GetMutableDefault<UInterchangeProjectSettings>();
          pTVar1 = &(pUVar6->ContentImportSettings).DefaultPipelineStackOverride;
          TSet<TTuple<enum_EInterchangeTranslatorAssetType,FName>,TDefaultMapHashableKeyFuncs<enum_EInterchangeTranslatorAssetType,FName,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    (&local_88,
                     (TSet<TTuple<EInterchangeTranslatorAssetType,FName>,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>,FDefaultSetAllocator>
                      *)pTVar1);
          local_20 = 0;
          stack0xffffffffffffffb8 = local_78;
          local_58 = local_88;
          auStack_50._0_8_ = lStack_80;
          local_38 = local_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          uVar8 = local_78._8_8_ >> 0x20;
          uVar3 = local_78._12_4_;
          local_28 = pTVar1;
          if ((int)uVar3 < *(int *)(local_78._0_8_ + 0x18)) {
            do {
              lVar9 = *local_58;
              if ((*(byte *)(lVar9 + (longlong)(int)uVar8 * 0x14) ^ bVar2) <
                  *(byte *)(lVar9 + (longlong)(int)uVar8 * 0x14)) {
                *(FName *)(lVar9 + 4 + (longlong)(int)uVar3 * 0x14) = param_3;
                pUVar5 = UInterchangeProjectSettings::StaticClass();
                if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                  UClass::InternalCreateDefaultObjectWrapper(pUVar5);
                }
                UObject::SaveConfig((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,
                                    (wchar_t *)0x0,GConfig,true);
                if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
                  uVar3 = *(int *)(&local_28->field_0x0 + 8) - *(int *)(&local_28->field_0x0 + 0x34)
                  ;
                  if (uVar3 < 4) {
                    iVar4 = 1;
                  }
                  else {
                    uVar8 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
                    lVar9 = 0x3f;
                    if (uVar8 != 0) {
                      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                      }
                    }
                    iVar4 = 1 << ((byte)lVar9 & 0x1f);
                  }
                  if (((0 < (int)uVar3) && (*(int *)&local_28->field_0x48 < iVar4)) ||
                     (iVar4 < *(int *)&local_28->field_0x48)) {
                    *(int *)&local_28->field_0x48 = iVar4;
                    TSet<TTuple<enum_EInterchangeTranslatorAssetType,FName>,TDefaultMapHashableKeyFuncs<enum_EInterchangeTranslatorAssetType,FName,0>,FDefaultSetAllocator>
                    ::Rehash(local_28);
                  }
                }
                (**(code **)(this_00->_padding_ + 0x2e0))(this_00);
                UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
                return;
              }
              uStack_40 = uStack_40 & ~auStack_50._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
              uVar8 = (ulonglong)uStack_3c;
              uVar3 = uStack_3c;
            } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
            if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
              uVar3 = *(int *)(&local_28->field_0x0 + 8) - *(int *)(&local_28->field_0x0 + 0x34);
              if (uVar3 < 4) {
                iVar4 = 1;
              }
              else {
                uVar8 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
                lVar9 = 0x3f;
                if (uVar8 != 0) {
                  for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                iVar4 = 1 << ((byte)lVar9 & 0x1f);
              }
              if (((0 < (int)uVar3) && (*(int *)&local_28->field_0x48 < iVar4)) ||
                 (iVar4 < *(int *)&local_28->field_0x48)) {
                *(int *)&local_28->field_0x48 = iVar4;
                TSet<TTuple<enum_EInterchangeTranslatorAssetType,FName>,TDefaultMapHashableKeyFuncs<enum_EInterchangeTranslatorAssetType,FName,0>,FDefaultSetAllocator>
                ::Rehash(local_28);
              }
            }
          }
          (**(code **)(this_00->_padding_ + 0x2e0))(this_00);
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
        }
      }
      *(FName *)(plVar10 + 10) = param_3;
      pUVar5 = UInterchangeProjectSettings::StaticClass();
      if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar5);
      }
      UObject::SaveConfig((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,
                          GConfig,true);
      return;
    }
    iVar4 = *(int *)(*plVar10 + 0x28 + (longlong)iVar4 * 0x30);
  } while (iVar4 != -1);
  return;
}

// ShouldShowPipelineStacksConfigurationDialog @ 14e508e80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
FInterchangeProjectSettingsUtils::ShouldShowPipelineStacksConfigurationDialog
          (bool param_1,bool param_2,UInterchangeSourceData *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,0>_>
  *pTVar6;
  TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,0>_>
  *pTVar7;
  TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,0>_>
  *pTVar8;
  TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,0>_>
  *pTVar9;
  byte bVar10;
  bool bVar11;
  undefined1 uVar12;
  FInterchangeGroup *pFVar13;
  longlong lVar14;
  int *piVar15;
  UClass *pUVar16;
  UInterchangeManager *pUVar17;
  UInterchangeTranslatorBase *pUVar18;
  UClass *pUVar19;
  UInterchangeProjectSettings *pUVar20;
  byte bVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  TSoftClassPtr<UInterchangeTranslatorBase> *pTVar26;
  int iVar27;
  TSoftClassPtr<UInterchangeTranslatorBase> *pTVar28;
  ForElementType<unsigned_int> FVar29;
  uint uVar30;
  uint *puVar31;
  byte bVar32;
  uint uVar33;
  EUsedGroupStatus local_e8;
  undefined1 local_e7 [3];
  uint local_e4;
  undefined1 *local_e0;
  ForElementType<unsigned_int> local_d8;
  ulonglong local_d0;
  TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,0>_>
  *local_c8;
  UInterchangeTranslatorBase *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,0>_>
  *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  TMap<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FInterchangeDialogOverride,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pFVar13 = GetUsedGroup(&local_e8);
  if (local_e8 == SetAndValid) {
    bVar10 = (&pFVar13->bShowImportDialog)[param_2];
  }
  else {
    pUVar16 = UInterchangeProjectSettings::StaticClass();
    if (param_2) {
      if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar16);
      }
      lVar23 = 0x1e1;
      lVar14 = 0xb9;
    }
    else {
      if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar16);
      }
      lVar23 = 0x1e0;
      lVar14 = 0xb8;
    }
    if (!param_1) {
      lVar23 = lVar14;
    }
    bVar10 = (&((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr)->field_0x0)[lVar23];
  }
  local_e4 = (uint)bVar10;
  if (param_1) {
    if (local_e8 == SetAndValid) {
      if (*(int *)&(pFVar13->ShowImportDialogOverride).field_0x8 ==
          *(int *)&(pFVar13->ShowImportDialogOverride).field_0x34) {
        return (bool)bVar10;
      }
      piVar15 = *(int **)&(pFVar13->ShowImportDialogOverride).field_0x40;
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)&(pFVar13->ShowImportDialogOverride).field_0x38;
      }
      iVar22 = *piVar15;
      if (iVar22 == -1) {
        return (bool)bVar10;
      }
      while (lVar23 = *(longlong *)&pFVar13->ShowImportDialogOverride + (longlong)iVar22 * 0x28,
            *(char *)(*(longlong *)&pFVar13->ShowImportDialogOverride + (longlong)iVar22 * 0x28) !=
            '\0') {
        iVar22 = *(int *)(lVar23 + 0x20);
        if (iVar22 == -1) {
          return (bool)bVar10;
        }
      }
      lVar14 = lVar23 + 8;
      if (lVar23 == 0) {
        lVar14 = 0;
      }
      if (lVar14 == 0) {
        return (bool)bVar10;
      }
      plVar25 = (longlong *)(lVar14 + 8);
    }
    else {
      pUVar16 = UInterchangeProjectSettings::StaticClass();
      if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar16);
      }
      plVar25 = (longlong *)&(pUVar16->ClassDefaultObject).field0_0x0.DebugPtr[0xc].field_0x8;
    }
    if (plVar25 == (longlong *)0x0) {
      return (bool)bVar10;
    }
    pUVar17 = UInterchangeManager::GetInterchangeManager();
    pUVar18 = UInterchangeManager::GetTranslatorForSourceData(pUVar17,param_3);
    if (pUVar18 == (UInterchangeTranslatorBase *)0x0) {
      return (bool)bVar10;
    }
    UObjectBase::AddRef((UObjectBase *)pUVar18);
    (**(code **)(pUVar18->_padding_ + 0x2c8))(pUVar18);
    pTVar28 = (TSoftClassPtr<UInterchangeTranslatorBase> *)*plVar25;
    pUVar16 = (UClass *)pUVar18->_padding_;
    pTVar26 = (TSoftClassPtr<UInterchangeTranslatorBase> *)
              ((longlong)(int)plVar25[1] * 0x30 + (longlong)pTVar28);
    if (pTVar28 == pTVar26) {
LAB_14e509059:
      (**(code **)(pUVar18->_padding_ + 0x2e0))(pUVar18);
    }
    else {
      do {
        pUVar19 = TSoftClassPtr<UInterchangeTranslatorBase>::Get(pTVar28);
        if (pUVar19 == pUVar16) {
          if (pTVar28 != (TSoftClassPtr<UInterchangeTranslatorBase> *)0x0) {
            bVar10 = (&pTVar28[1].SoftObjectPtr.field_0x0)[param_2];
          }
          goto LAB_14e509059;
        }
        pTVar28 = (TSoftClassPtr<UInterchangeTranslatorBase> *)&pTVar28[1].SoftObjectPtr.field_0x8;
      } while (pTVar28 != pTVar26);
      (**(code **)(pUVar18->_padding_ + 0x2e0))(pUVar18);
    }
  }
  else {
    pUVar17 = UInterchangeManager::GetInterchangeManager();
    pUVar18 = UInterchangeManager::GetTranslatorForSourceData(pUVar17,param_3);
    if (pUVar18 == (UInterchangeTranslatorBase *)0x0) {
      return (bool)bVar10;
    }
    UObjectBase::AddRef((UObjectBase *)pUVar18);
    bVar10 = (**(code **)(pUVar18->_padding_ + 0x2c8))(pUVar18);
    pUVar16 = (UClass *)pUVar18->_padding_;
    bVar32 = 0;
    bVar5 = false;
    if (local_e8 == SetAndValid) {
      pTVar6 = &pFVar13->ShowImportDialogOverride;
      local_c8 = &pFVar13->ShowImportDialogOverride;
      pTVar7 = &pFVar13->ShowImportDialogOverride;
      pTVar8 = &pFVar13->ShowImportDialogOverride;
      pTVar9 = &pFVar13->ShowImportDialogOverride;
    }
    else {
      pUVar20 = GetDefault<UInterchangeProjectSettings>();
      local_c8 = &(pUVar20->ContentImportSettings).ShowImportDialogOverride;
      pTVar9 = &(pUVar20->ContentImportSettings).ShowImportDialogOverride;
      pTVar6 = &(pUVar20->ContentImportSettings).ShowImportDialogOverride;
      pTVar7 = &(pUVar20->ContentImportSettings).ShowImportDialogOverride;
      pTVar8 = &(pUVar20->ContentImportSettings).ShowImportDialogOverride;
    }
    local_b0 = &pTVar7->field_0x28;
    local_b8 = &pTVar8->field_0x34;
    local_e0 = &pTVar6->field_0x8;
    local_d8 = (ForElementType<unsigned_int>)&pTVar9->field_0x10;
    iVar22 = *(int *)&pTVar9->field_0x28;
    iStack_a0 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_88 = 0;
    iStack_8c = 0;
    if (iVar22 != 0) {
      puVar31 = *(uint **)&pTVar9->field_0x20;
      if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
        puVar31 = (uint *)local_d8;
      }
      uVar24 = *puVar31;
      while (uVar24 == 0) {
        lVar23 = (longlong)iStack_a0;
        local_88 = local_88 + 0x20;
        iStack_a0 = iStack_a0 + 1;
        iStack_8c = iVar22;
        if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14e5091b1;
        uVar24 = puVar31[lVar23 + 1];
      }
      local_d0 = (ulonglong)(-uVar24 & uVar24);
      uVar2 = local_d0 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_78 = (int)lVar23;
      iStack_8c = local_78 + -1 + local_88;
      if (iVar22 < iStack_8c) {
        iStack_8c = iVar22;
      }
    }
LAB_14e5091b1:
    local_a8 = local_c8;
    uStack_9c = (undefined4)local_d0;
    uVar24 = *(uint *)local_b0;
    uVar33 = uVar24 & 0xffffffe0;
    uStack_90 = 0xffffffff;
    TStack_68.CurrentBitIndex = iStack_8c;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iStack_80 = *(int *)local_e0 - *(int *)local_b8;
    TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
    local_70 = local_c8;
    iVar27 = (int)uVar24 >> 5;
    TStack_68._28_4_ = iStack_8c;
    TStack_68.BaseBitIndex = local_88;
    uStack_48 = CONCAT44(uStack_7c,iStack_80);
    local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,uVar24);
    local_c0 = pUVar18;
    local_98 = (undefined1 *)local_d8;
    iStack_84 = iStack_8c;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
    if (((int)uVar24 < 0) || (uVar30 = uVar24, iVar22 < (int)uVar24)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      uVar30 = (uint)local_e0;
    }
    uVar3 = *(int *)((longlong)local_d8 + 0x18);
    if (uVar30 != uVar3) {
      local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,uVar3);
      FVar29 = local_d8;
      if (*(ForElementType<unsigned_int> *)((longlong)local_d8 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar29 = *(ForElementType<unsigned_int> *)((longlong)local_d8 + 0x10);
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar27 * 4);
      while (uVar24 == 0) {
        lVar23 = (longlong)iVar27;
        uVar33 = uVar33 + 0x20;
        iVar27 = iVar27 + 1;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
        goto LAB_14e5092d0;
        uVar24 = *(uint *)((undefined1 *)((longlong)FVar29 + 4) + lVar23 * 4);
      }
      uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_d0 = CONCAT44(local_d0._4_4_,(int)lVar23);
      uVar33 = (int)lVar23 + -1 + uVar33;
      if ((int)uVar3 < (int)uVar33) {
        uVar33 = uVar3;
      }
      local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,uVar33);
    }
LAB_14e5092d0:
    iVar22 = (uint)local_e0;
    while( true ) {
      pTVar6 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        local_e7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_e7);
      }
      pUVar18 = local_c0;
      if (((TStack_68.CurrentBitIndex == iVar22) &&
          ((ForElementType<unsigned_int>)TStack_68.Array == local_d8)) && (pTVar6 == local_c8))
      break;
      pbVar1 = (byte *)(*(longlong *)pTVar6 + (longlong)TStack_68.CurrentBitIndex * 0x28);
      if (((*pbVar1 == 0) && (bVar10 == 0)) || ((bVar10 & *pbVar1) != 0)) {
        pTVar28 = *(TSoftClassPtr<UInterchangeTranslatorBase> **)(pbVar1 + 0x10);
        pTVar26 = (TSoftClassPtr<UInterchangeTranslatorBase> *)
                  ((longlong)*(int *)(pbVar1 + 0x18) * 0x30 + (longlong)pTVar28);
        for (; pTVar28 != pTVar26;
            pTVar28 = (TSoftClassPtr<UInterchangeTranslatorBase> *)
                      &pTVar28[1].SoftObjectPtr.field_0x8) {
          pUVar19 = TSoftClassPtr<UInterchangeTranslatorBase>::Get(pTVar28);
          if (pUVar19 == pUVar16) {
            if (pTVar28 != (TSoftClassPtr<UInterchangeTranslatorBase> *)0x0) {
              bVar21 = (&pTVar28[1].SoftObjectPtr.field_0x0)[param_2];
              goto LAB_14e509385;
            }
            break;
          }
        }
        if (param_2) {
          bVar21 = pbVar1[9];
        }
        else {
          bVar21 = pbVar1[8];
        }
LAB_14e509385:
        bVar5 = true;
        bVar32 = bVar32 | bVar21;
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
    local_e4 = local_e4 & 0xff;
    uVar24 = local_e4;
    if (bVar5) {
      uVar24 = (uint)bVar32;
    }
    bVar10 = (byte)uVar24;
    (**(code **)(local_c0->_padding_ + 0x2e0))(local_c0);
  }
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar18);
  return (bool)bVar10;
}

