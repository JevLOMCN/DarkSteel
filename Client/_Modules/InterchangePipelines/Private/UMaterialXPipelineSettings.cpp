// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 12

// StaticClass @ 14e72e970

UClass * __cdecl UMaterialXPipelineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"MaterialXPipelineSettings",
               &Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton,
               StaticRegisterNativesUMaterialXPipelineSettings,0x178,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Interchange",InternalConstructor<UMaterialXPipelineSettings>,
               InternalVTableHelperCtorCaller<UMaterialXPipelineSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton;
}

// operator()<TMap<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>_> @ 14e72fea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
operator()<TMap<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>_>
          (void *this,
          TMap<EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TMap<EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  UObject *pUVar12;
  FString *pFVar13;
  undefined1 *puVar14;
  FStaticBasicLogRecord *pFVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_d8;
  FString local_c8;
  TMap<EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FName local_88;
  TMap<EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  bVar7 = false;
  bVar6 = false;
  puVar1 = &param_1->field_0x10;
  local_res18[0] = 0;
  iStack_b0 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  local_98 = 0;
  bVar20 = true;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_b0) goto LAB_14e72ff4e;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_ac = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_res20;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14e72ff4e:
  uVar16 = *(uint *)&param_1->field_0x28;
  iStack_90 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uStack_a0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = param_1;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar16 != uVar4) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17) goto LAB_14e730050;
      uVar16 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14e730050:
  do {
    pTVar8 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXBSDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    {
      return bVar20;
    }
    lVar11 = *(longlong *)pTVar8 + (longlong)TStack_78.CurrentBitIndex * 0x30;
    pUVar12 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar11 + 8));
    if (pUVar12 == (UObject *)0x0) {
      local_88 = *(FName *)(lVar11 + 8);
      if (*(FName *)(lVar11 + 8) == (FName)0x0) {
        bVar7 = true;
        pFVar13 = &local_c8;
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
      }
      else {
        bVar6 = true;
        pFVar13 = ::FName::ToString(&local_88,&local_50);
      }
      local_d8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_d8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if ((bVar6) &&
         (bVar6 = false, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         (bVar7 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      bVar9 = FPackageName::DoesPackageExist(&local_d8,(FString *)0x0,true);
      if (bVar9) {
        pUVar12 = FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)(lVar11 + 8),(FUObjectSerializeContext *)0x0);
        if (pUVar12 == (UObject *)0x0) {
          if (2 < (byte)LogInterchangePipeline._0_1_) {
            pFVar15 = &::LOG_Static;
            goto LAB_14e730167;
          }
          goto LAB_14e730183;
        }
      }
      else {
        if (2 < (byte)LogInterchangePipeline._0_1_) {
          pFVar15 = &::LOG_Static;
LAB_14e730167:
          UE::Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogInterchangePipeline);
        }
LAB_14e730183:
        bVar20 = false;
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// operator()<TMap<enum_EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXEDF,FSoftObjectPath,0>_>_> @ 14e7301d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
operator()<TMap<enum_EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXEDF,FSoftObjectPath,0>_>_>
          (void *this,
          TMap<EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TMap<EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  UObject *pUVar12;
  FString *pFVar13;
  undefined1 *puVar14;
  FStaticBasicLogRecord *pFVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_d8;
  FString local_c8;
  TMap<EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FName local_88;
  TMap<EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  bVar7 = false;
  bVar6 = false;
  puVar1 = &param_1->field_0x10;
  local_res18[0] = 0;
  iStack_b0 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  local_98 = 0;
  bVar20 = true;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_b0) goto LAB_14e73027e;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_ac = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_res20;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14e73027e:
  uVar16 = *(uint *)&param_1->field_0x28;
  iStack_90 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uStack_a0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = param_1;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar16 != uVar4) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17) goto LAB_14e730380;
      uVar16 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14e730380:
  do {
    pTVar8 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXEDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    {
      return bVar20;
    }
    lVar11 = *(longlong *)pTVar8 + (longlong)TStack_78.CurrentBitIndex * 0x30;
    pUVar12 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar11 + 8));
    if (pUVar12 == (UObject *)0x0) {
      local_88 = *(FName *)(lVar11 + 8);
      if (*(FName *)(lVar11 + 8) == (FName)0x0) {
        bVar7 = true;
        pFVar13 = &local_c8;
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
      }
      else {
        bVar6 = true;
        pFVar13 = ::FName::ToString(&local_88,&local_50);
      }
      local_d8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_d8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if ((bVar6) &&
         (bVar6 = false, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         (bVar7 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      bVar9 = FPackageName::DoesPackageExist(&local_d8,(FString *)0x0,true);
      if (bVar9) {
        pUVar12 = FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)(lVar11 + 8),(FUObjectSerializeContext *)0x0);
        if (pUVar12 == (UObject *)0x0) {
          if (2 < (byte)LogInterchangePipeline._0_1_) {
            pFVar15 = &::LOG_Static;
            goto LAB_14e730497;
          }
          goto LAB_14e7304b3;
        }
      }
      else {
        if (2 < (byte)LogInterchangePipeline._0_1_) {
          pFVar15 = &::LOG_Static;
LAB_14e730497:
          UE::Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogInterchangePipeline);
        }
LAB_14e7304b3:
        bVar20 = false;
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// operator()<TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>_> @ 14e730500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
operator()<TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>_>
          (void *this,
          TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  UObject *pUVar12;
  FString *pFVar13;
  undefined1 *puVar14;
  FStaticBasicLogRecord *pFVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_d8;
  FString local_c8;
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FName local_88;
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  bVar7 = false;
  bVar6 = false;
  puVar1 = &param_1->field_0x10;
  local_res18[0] = 0;
  iStack_b0 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  local_98 = 0;
  bVar20 = true;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_b0) goto LAB_14e7305ae;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_ac = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_res20;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14e7305ae:
  uVar16 = *(uint *)&param_1->field_0x28;
  iStack_90 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uStack_a0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = param_1;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar16 != uVar4) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17) goto LAB_14e7306b0;
      uVar16 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14e7306b0:
  do {
    pTVar8 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    {
      return bVar20;
    }
    lVar11 = *(longlong *)pTVar8 + (longlong)TStack_78.CurrentBitIndex * 0x30;
    pUVar12 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar11 + 8));
    if (pUVar12 == (UObject *)0x0) {
      local_88 = *(FName *)(lVar11 + 8);
      if (*(FName *)(lVar11 + 8) == (FName)0x0) {
        bVar7 = true;
        pFVar13 = &local_c8;
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
      }
      else {
        bVar6 = true;
        pFVar13 = ::FName::ToString(&local_88,&local_50);
      }
      local_d8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_d8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if ((bVar6) &&
         (bVar6 = false, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         (bVar7 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      bVar9 = FPackageName::DoesPackageExist(&local_d8,(FString *)0x0,true);
      if (bVar9) {
        pUVar12 = FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)(lVar11 + 8),(FUObjectSerializeContext *)0x0);
        if (pUVar12 == (UObject *)0x0) {
          if (2 < (byte)LogInterchangePipeline._0_1_) {
            pFVar15 = &::LOG_Static;
            goto LAB_14e7307c7;
          }
          goto LAB_14e7307e3;
        }
      }
      else {
        if (2 < (byte)LogInterchangePipeline._0_1_) {
          pFVar15 = &::LOG_Static;
LAB_14e7307c7:
          UE::Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogInterchangePipeline);
        }
LAB_14e7307e3:
        bVar20 = false;
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// operator()<TMap<enum_EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXVDF,FSoftObjectPath,0>_>_> @ 14e730830

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
operator()<TMap<enum_EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXVDF,FSoftObjectPath,0>_>_>
          (void *this,
          TMap<EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TMap<EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  UObject *pUVar12;
  FString *pFVar13;
  undefined1 *puVar14;
  FStaticBasicLogRecord *pFVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_d8;
  FString local_c8;
  TMap<EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FName local_88;
  TMap<EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  bVar7 = false;
  bVar6 = false;
  puVar1 = &param_1->field_0x10;
  local_res18[0] = 0;
  iStack_b0 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  local_98 = 0;
  bVar20 = true;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_b0) goto LAB_14e7308de;
      uVar16 = puVar18[lVar11 + 1];
    }
    uStack_ac = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_res20;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14e7308de:
  uVar16 = *(uint *)&param_1->field_0x28;
  iStack_90 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar19 = uVar16 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uStack_a0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = param_1;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar16 != uVar4) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17) goto LAB_14e7309e0;
      uVar16 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14e7309e0:
  do {
    pTVar8 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXVDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    {
      return bVar20;
    }
    lVar11 = *(longlong *)pTVar8 + (longlong)TStack_78.CurrentBitIndex * 0x30;
    pUVar12 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar11 + 8));
    if (pUVar12 == (UObject *)0x0) {
      local_88 = *(FName *)(lVar11 + 8);
      if (*(FName *)(lVar11 + 8) == (FName)0x0) {
        bVar7 = true;
        pFVar13 = &local_c8;
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
      }
      else {
        bVar6 = true;
        pFVar13 = ::FName::ToString(&local_88,&local_50);
      }
      local_d8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_d8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if ((bVar6) &&
         (bVar6 = false, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         (bVar7 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      bVar9 = FPackageName::DoesPackageExist(&local_d8,(FString *)0x0,true);
      if (bVar9) {
        pUVar12 = FSoftObjectPath::TryLoad
                            ((FSoftObjectPath *)(lVar11 + 8),(FUObjectSerializeContext *)0x0);
        if (pUVar12 == (UObject *)0x0) {
          if (2 < (byte)LogInterchangePipeline._0_1_) {
            pFVar15 = &::LOG_Static;
            goto LAB_14e730af7;
          }
          goto LAB_14e730b13;
        }
      }
      else {
        if (2 < (byte)LogInterchangePipeline._0_1_) {
          pFVar15 = &::LOG_Static;
LAB_14e730af7:
          UE::Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogInterchangePipeline);
        }
LAB_14e730b13:
        bVar20 = false;
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// UMaterialXPipelineSettings @ 14e768b50

UMaterialXPipelineSettings * __thiscall
UMaterialXPipelineSettings::UMaterialXPipelineSettings
          (UMaterialXPipelineSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialXPipelineSettings__6B_;
  *(undefined8 *)&this->PredefinedSurfaceShaders = 0;
  *(undefined8 *)&(this->PredefinedSurfaceShaders).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedSurfaceShaders).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedSurfaceShaders).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x48 = 0;
  *(undefined8 *)&this->PredefinedBSDF = 0;
  *(undefined8 *)&(this->PredefinedBSDF).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedBSDF).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedBSDF).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x48 = 0;
  *(undefined8 *)&this->PredefinedEDF = 0;
  *(undefined8 *)&(this->PredefinedEDF).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedEDF).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedEDF).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedEDF).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x48 = 0;
  *(undefined8 *)&this->PredefinedVDF = 0;
  *(undefined8 *)&(this->PredefinedVDF).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedVDF).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedVDF).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedVDF).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x48 = 0;
  return this;
}

// UMaterialXPipelineSettings @ 14e768c70

UMaterialXPipelineSettings * __thiscall
UMaterialXPipelineSettings::UMaterialXPipelineSettings(UMaterialXPipelineSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UMaterialXPipelineSettings__6B_;
  *(undefined8 *)&this->PredefinedSurfaceShaders = 0;
  *(undefined8 *)&(this->PredefinedSurfaceShaders).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedSurfaceShaders).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedSurfaceShaders).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x48 = 0;
  *(undefined8 *)&this->PredefinedBSDF = 0;
  *(undefined8 *)&(this->PredefinedBSDF).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedBSDF).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedBSDF).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedBSDF).field_0x48 = 0;
  *(undefined8 *)&this->PredefinedEDF = 0;
  *(undefined8 *)&(this->PredefinedEDF).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedEDF).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedEDF).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedEDF).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedEDF).field_0x48 = 0;
  *(undefined8 *)&this->PredefinedVDF = 0;
  *(undefined8 *)&(this->PredefinedVDF).field_0x8 = 0;
  *(undefined8 *)&(this->PredefinedVDF).field_0x20 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x28 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredefinedVDF).field_0x34 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredefinedVDF).field_0x40 = 0;
  *(undefined4 *)&(this->PredefinedVDF).field_0x48 = 0;
  return this;
}

// ~UMaterialXPipelineSettings @ 14e76c450

void __thiscall
UMaterialXPipelineSettings::~UMaterialXPipelineSettings(UMaterialXPipelineSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMaterialXPipelineSettings__6B_;
  *(undefined4 *)&(this->PredefinedVDF).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedVDF).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXVDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXVDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedVDF);
  *(undefined4 *)&(this->PredefinedEDF).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedEDF).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXEDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXEDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedEDF);
  *(undefined4 *)&(this->PredefinedBSDF).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedBSDF).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXBSDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXBSDF,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedBSDF);
  *(undefined4 *)&(this->PredefinedSurfaceShaders).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredefinedSurfaceShaders).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->PredefinedSurfaceShaders);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// AreRequiredPackagesLoaded @ 14e7811e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMaterialXPipelineSettings::AreRequiredPackagesLoaded(UMaterialXPipelineSettings *this)

{
  bool bVar1;
  TMap<EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
  *pTVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  EInterchangeMaterialXShaders local_b7 [15];
  TPairInitializer<EInterchangeMaterialXShaders_const_&,FSoftObjectPath_const_&> local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined1 local_68 [64];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_a8.Value = (FSoftObjectPath *)CONCAT44(local_a8.Value._4_4_,0x48);
    local_a8.Key = (EInterchangeMaterialXShaders *)0x152f5ad50;
    local_98._0_8_ = L"/InterchangeAssets/Substrate/MX_VolumetricFogCloud.MX_VolumetricFogCloud";
    local_98._8_8_ = local_a8.Value;
    local_b7[0] = Volume;
    local_98._16_8_ = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    FSoftObjectPath::SetPath((FSoftObjectPath *)(local_98 + 0x10),(TStringView<wchar_t> *)local_98);
    local_a8.Key = local_b7;
    local_a8.Value = (FSoftObjectPath *)(local_98 + 0x10);
    local_98._0_8_ = &local_a8;
    local_98._8_8_ = local_98;
    pTVar2 = TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
             ::
             TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
                       (local_68,(initializer_list<TPairInitializer<EInterchangeMaterialXShaders_const_&,FSoftObjectPath_const_&>_>
                                  *)local_98);
    bFOGCloudVolumetricAsset =
         `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
         operator()<TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>_>
                   (&local_b8,pTVar2);
    local_20 = 0;
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeMaterialXShaders,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_68);
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    _Init_thread_footer(&::_TSS0);
  }
  bVar1 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
          operator()<TMap<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>_>
                    (&local_b8,&this->PredefinedSurfaceShaders);
  if ((((bVar1) &&
       (bVar1 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
                operator()<TMap<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>_>
                          (&local_b8,&this->PredefinedBSDF), bVar1)) &&
      (bVar1 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
               operator()<TMap<enum_EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXEDF,FSoftObjectPath,0>_>_>
                         (&local_b8,&this->PredefinedEDF), bVar1)) &&
     ((bVar1 = `UMaterialXPipelineSettings::AreRequiredPackagesLoaded'::__l2::<lambda_1>::
               operator()<TMap<enum_EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXVDF,FSoftObjectPath,0>_>_>
                         (&local_b8,&this->PredefinedVDF), bVar1 &&
      (bFOGCloudVolumetricAsset != false)))) {
    return true;
  }
  return false;
}

// GetAssetPathString @ 14e7b4ae0

FString * __thiscall
UMaterialXPipelineSettings::GetAssetPathString
          (UMaterialXPipelineSettings *this,FString *__return_storage_ptr__,
          TVariant<EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>
          param_1)

{
  EInterchangeMaterialXVDF EVar1;
  EInterchangeMaterialXVDF EVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FSoftObjectPath *this_00;
  undefined6 in_register_00000082;
  EInterchangeMaterialXVDF *pEVar6;
  
  pEVar6 = (EInterchangeMaterialXVDF *)CONCAT62(in_register_00000082,param_1);
  EVar1 = pEVar6[1];
  if ((3 < (ulonglong)EVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  EVar2 = pEVar6[1];
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<EInterchangeMaterialXBSDF,EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)EVar1 + 4) == '\0') {
    if ((3 < (ulonglong)EVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    EVar1 = pEVar6[1];
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<EInterchangeMaterialXBSDF,EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)EVar2) == '\0') {
      if ((3 < (ulonglong)EVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
      EVar2 = pEVar6[1];
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<EInterchangeMaterialXVDF,EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)EVar1 + 4) == '\0') {
        if ((3 < (ulonglong)EVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar3)();
          return pFVar5;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<EInterchangeMaterialXVDF,EInterchangeMaterialXShaders,EInterchangeMaterialXBSDF,EInterchangeMaterialXEDF,EInterchangeMaterialXVDF>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + (ulonglong)EVar2) == '\0') goto LAB_14e7b4d07;
        if ((pEVar6[1] != (MaxVDFCount|Anisotropic)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar3)();
          return pFVar5;
        }
        this_00 = TMapBase<enum_EInterchangeMaterialXVDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXVDF,FSoftObjectPath,0>_>
                  ::Find(&this->PredefinedVDF,*pEVar6);
      }
      else {
        if ((EVar2 != MaxVDFCount) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar3)();
          return pFVar5;
        }
        this_00 = TMapBase<enum_EInterchangeMaterialXEDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXEDF,FSoftObjectPath,0>_>
                  ::Find(&this->PredefinedEDF,*pEVar6);
      }
    }
    else {
      if ((EVar1 != Anisotropic) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
      this_00 = TMapBase<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXBSDF,FSoftObjectPath,0>_>
                ::Find(&this->PredefinedBSDF,*pEVar6);
    }
  }
  else {
    if ((EVar2 != Absorption) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    this_00 = TMapBase<enum_EInterchangeMaterialXShaders,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeMaterialXShaders,FSoftObjectPath,0>_>
              ::Find(&this->PredefinedSurfaceShaders,*pEVar6);
  }
  if ((this_00 != (FSoftObjectPath *)0x0) && ((this_00->AssetPath).PackageName != (FName)0x0)) {
    FTopLevelAssetPath::ToString(&this_00->AssetPath,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
LAB_14e7b4d07:
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9eb0

UClass * __cdecl UMaterialXPipelineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"MaterialXPipelineSettings",
               &Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton,
               StaticRegisterNativesUMaterialXPipelineSettings,0x178,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Interchange",InternalConstructor<UMaterialXPipelineSettings>,
               InternalVTableHelperCtorCaller<UMaterialXPipelineSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialXPipelineSettings.InnerSingleton;
}

// StaticRegisterNativesUMaterialXPipelineSettings @ 14e7e4710

void __cdecl UMaterialXPipelineSettings::StaticRegisterNativesUMaterialXPipelineSettings(void)

{
  return;
}

