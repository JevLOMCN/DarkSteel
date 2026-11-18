// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Exec_Runtime @ 147aa6200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPlatformCVarExec::Exec_Runtime
          (FPlatformCVarExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  FName FVar6;
  code *pcVar7;
  longlong lVar8;
  FOutputDevice *this_00;
  ForAnyElementType FVar9;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  FString *this_01;
  UDeviceProfileManager *pUVar15;
  UDeviceProfile *pUVar16;
  FName *pFVar17;
  UClass *pUVar18;
  ulonglong *puVar19;
  IConsoleManager *pIVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  FProperty *pFVar24;
  uint uVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  FProperty *pFVar29;
  int iVar30;
  FProperty *pFVar31;
  uint uVar32;
  FProperty *pFVar33;
  undefined1 *puVar34;
  uint *puVar35;
  uint uVar36;
  byte bVar37;
  wchar_t *local_res18;
  FOutputDevice *local_res20;
  ulonglong in_stack_fffffffffffffd98;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [6];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  FDelegateAllocation local_248;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  TFieldIterator<FArrayProperty> local_208;
  FName local_1f0;
  FString local_1e8;
  FString local_1d8;
  void *local_1c8;
  undefined8 local_1c0;
  FString local_1b8;
  FString local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  int local_170;
  int local_16c;
  int local_168;
  UDeviceProfile *local_160;
  undefined8 local_158;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  FString local_78;
  FName local_68 [4];
  undefined4 local_44;
  
  local_res18 = param_2;
  local_res20 = param_3;
  bVar11 = FParse::Command(&local_res18,L"dpcvar",true);
  if (bVar11) {
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Data.ArrayNum = 0;
    local_1d8.Data.ArrayMax = 0;
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Data.ArrayNum = 0;
    local_1e8.Data.ArrayMax = 0;
    this_01 = ::FString::FString(&local_78,local_res18);
    ::FString::FString(&local_f0,L"@");
    bVar11 = ::FString::Split(this_01,&local_f0,&local_1d8,&local_1e8);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    FVar9.Data = local_1e8.Data.AllocatorInstance.Data;
    bVar12 = false;
    if (bVar11) {
      lVar26 = (longlong)local_1e8.Data.ArrayNum;
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Data.ArrayNum = local_1e8.Data.ArrayNum;
      if (local_1e8.Data.ArrayNum == 0) {
        local_1b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)&local_1b8,
                   local_1e8.Data.ArrayNum,&local_1b8.Data.ArrayMax);
        memcpy(local_1b8.Data.AllocatorInstance.Data,FVar9.Data,lVar26 * 2);
      }
      FVar9.Data = local_1d8.Data.AllocatorInstance.Data;
      lVar26 = (longlong)local_1d8.Data.ArrayNum;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = local_1d8.Data.ArrayNum;
      if (local_1d8.Data.ArrayNum == 0) {
        local_1a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                   local_1d8.Data.ArrayNum,&local_1a8.Data.ArrayMax);
        memcpy(local_1a8.Data.AllocatorInstance.Data,FVar9.Data,lVar26 * 2);
      }
      bVar12 = GetCVarForDeviceProfile(param_3,&local_1a8,&local_1b8);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    return bVar12;
  }
  bVar11 = FParse::Command(&local_res18,L"dpdump",true);
  if (bVar11) {
    pUVar15 = UDeviceProfileManager::Get(false);
    pFVar31 = (FProperty *)0x0;
    local_198 = 0;
    ::FString::FString(&local_e0,local_res18);
    uVar32 = 0;
    pUVar16 = UDeviceProfileManager::FindProfile(pUVar15,&local_e0,false,(FName)0x0);
    local_160 = pUVar16;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (pUVar16 != (UDeviceProfile *)0x0) {
      FOutputDevice::LogfImpl(param_3,L"All cvars found for deviceprofile %s");
      pTVar1 = &pUVar16->AllExpandedCVars;
      if (*(int *)&(pUVar16->AllExpandedCVars).field_0x8 ==
          *(int *)&(pUVar16->AllExpandedCVars).field_0x34) {
        UDeviceProfile::ExpandDeviceProfileCVars(pUVar16);
      }
      uVar25 = *(uint *)&(pUVar16->AllExpandedCVars).field_0x28;
      puVar3 = &(pUVar16->AllExpandedCVars).field_0x10;
      local_158 = 1;
      local_218 = 0;
      uStack_22c = 1;
      uStack_21c = uVar32;
      if (uVar25 != 0) {
        puVar35 = *(uint **)&(pUVar16->AllExpandedCVars).field_0x20;
        if (puVar35 == (uint *)0x0) {
          puVar35 = (uint *)puVar3;
        }
        uStack_22c = *puVar35;
        pFVar29 = pFVar31;
        pFVar24 = pFVar31;
        uVar32 = 0;
        local_218 = 0;
        while (uStack_22c == 0) {
          uVar32 = (int)pFVar29 + 1;
          pFVar29 = (FProperty *)(ulonglong)uVar32;
          local_218 = (int)pFVar24 + 0x20;
          pFVar24 = (FProperty *)(ulonglong)local_218;
          uStack_22c = 1;
          uStack_21c = uVar25;
          if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
          goto LAB_147aa64ee;
          uStack_22c = puVar35[(int)uVar32];
        }
        uStack_22c = ~(uStack_22c - 1) & uStack_22c;
        uVar23 = (ulonglong)uStack_22c * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_170 = (int)lVar26;
        uStack_21c = (local_218 - 1) + local_170;
        if ((int)uVar25 < (int)uStack_21c) {
          uStack_21c = uVar25;
        }
      }
LAB_147aa64ee:
      uVar14 = *(uint *)&(pUVar16->AllExpandedCVars).field_0x28;
      iStack_214 = local_44;
      uVar36 = uVar14 & 0xffffffe0;
      iStack_210 = *(int *)&(pUVar16->AllExpandedCVars).field_0x8 -
                   *(int *)&(pUVar16->AllExpandedCVars).field_0x34;
      uStack_220 = 0xffffffff;
      TStack_148._padding_ = CONCAT44(uStack_22c,uVar32);
      TStack_148.CurrentBitIndex = uStack_21c;
      TStack_148.UnvisitedBitMask = 0xffffffff;
      iVar28 = (int)uVar14 >> 5;
      TStack_148._28_4_ = local_44;
      TStack_148.BaseBitIndex = local_218;
      uStack_128 = CONCAT44(uStack_20c,iStack_210);
      local_238 = pTVar1;
      uStack_230 = uVar32;
      local_228 = puVar3;
      local_150 = pTVar1;
      TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
      if ((((int)uVar14 < 0) || ((int)uVar25 < (int)uVar14)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      this_00 = local_res20;
      uVar32 = *(uint *)&(pUVar16->AllExpandedCVars).field_0x28;
      if (uVar14 != uVar32) {
        puVar5 = *(undefined1 **)&(pUVar16->AllExpandedCVars).field_0x20;
        puVar34 = puVar3;
        if (puVar5 != (undefined1 *)0x0) {
          puVar34 = puVar5;
        }
        uVar25 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar28 * 4);
        while (uVar25 == 0) {
          iVar28 = iVar28 + 1;
          uVar36 = uVar36 + 0x20;
          uVar14 = uVar32;
          if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < iVar28)
          goto LAB_147aa6610;
          uVar25 = *(uint *)(puVar34 + (longlong)iVar28 * 4);
        }
        uVar23 = (ulonglong)(~(uVar25 - 1) & uVar25) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_16c = (int)lVar26;
        uVar14 = (uVar36 - 1) + local_16c;
        if ((int)uVar32 < (int)uVar14) {
          uVar14 = uVar32;
        }
      }
LAB_147aa6610:
      while( true ) {
        pTVar10 = local_150;
        if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
          local_258 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
        }
        if (((TStack_148.CurrentBitIndex == uVar14) &&
            (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
           (pTVar10 == pTVar1)) break;
        FOutputDevice::LogfImpl(this_00,L"%s = %s");
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
      pFVar17 = ::FName::FName(local_68,0x10,L"TextureLODGroups",(EFindName)local_158);
      FVar6 = *pFVar17;
      pUVar18 = UDeviceProfile::StaticClass();
      pFVar29 = pFVar31;
      if (FVar6 != (FName)0x0) {
        if (pUVar18 == (UClass *)0x0) {
          local_208.Field = (FField *)0x0;
        }
        else {
          local_208.Field = (FField *)pUVar18->_padding_;
        }
        local_208.InterfaceIndex = -1;
        local_208.bIncludeSuper = true;
        local_208.bIncludeDeprecated = true;
        local_208.bIncludeInterface = false;
        local_208.Struct = (UStruct *)pUVar18;
        TFieldIterator<FArrayProperty>::IterateToNext(&local_208);
        pFVar24 = (FProperty *)local_208.Field;
        while (pFVar29 = pFVar31, local_208.Field = (FField *)pFVar24, pFVar24 != (FProperty *)0x0)
        {
          bVar11 = IsThisNotNull(pFVar24,"FField::GetFName");
          if (bVar11) {
            local_1f0 = (FName)pFVar24->_padding_;
          }
          else {
            local_1f0.ComparisonIndex.Value = 0;
            local_1f0.Number = 0;
          }
          pFVar29 = pFVar24;
          if (local_1f0 == FVar6) break;
          local_208.Field = (FField *)pFVar24->_padding_;
          TFieldIterator<FArrayProperty>::IterateToNext(&local_208);
          pFVar24 = (FProperty *)local_208.Field;
        }
      }
      pUVar16 = local_160;
      puVar19 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar29,(UObject *)local_160,0);
      lVar8 = pFVar29[1]._padding_;
      (**(code **)(*(longlong *)pFVar29[1]._padding_ + 0x168))();
      lVar26 = pFVar29[1]._padding_;
      iVar28 = *(int *)(lVar26 + 0x34);
      if ((iVar28 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      if ((lVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      bVar37 = (byte)lVar8 & 1;
      pFVar24 = pFVar31;
      while( true ) {
        iVar4 = (int)puVar19[1];
        iVar30 = (int)pFVar24;
        if (iVar4 <= iVar30) break;
        local_1c8 = (void *)0x0;
        local_1c0 = 0;
        pFVar24 = pFVar31;
        if (iVar4 != 0) {
          uVar23 = *puVar19;
          if ((bVar37 != 0) && ((uVar23 & 1) != 0)) {
            uVar23 = ((longlong)uVar23 >> 0x18) + (longlong)puVar19;
          }
          pFVar24 = (FProperty *)((longlong)iVar28 * (longlong)iVar30 + uVar23);
        }
        pFVar33 = pFVar31;
        if (iVar4 != 0) {
          uVar23 = *puVar19;
          if ((bVar37 != 0) && ((uVar23 & 1) != 0)) {
            uVar23 = ((longlong)uVar23 >> 0x18) + (longlong)puVar19;
          }
          pFVar33 = (FProperty *)((longlong)iVar28 * (longlong)iVar30 + uVar23);
        }
        in_stack_fffffffffffffd98 = in_stack_fffffffffffffd98 & 0xffffffff00000000;
        (**(code **)(*(longlong *)pFVar29[1]._padding_ + 0xe0))
                  ((longlong *)pFVar29[1]._padding_,&local_1c8,pFVar33,0,pFVar24,pUVar16,
                   in_stack_fffffffffffffd98,0);
        FOutputDevice::LogfImpl(local_res20,L"LODGroup[%d]=%s");
        if (local_1c8 != (void *)0x0) {
          FMemory::Free(local_1c8);
        }
        pFVar24 = (FProperty *)(ulonglong)(iVar30 + 1);
      }
    }
  }
  else {
    bVar11 = FParse::Command(&local_res18,L"dpdumppreview",true);
    if (bVar11) {
      pUVar15 = UDeviceProfileManager::Get(false);
      local_190 = 0;
      ::FString::FString(&local_d0,local_res18);
      iVar28 = 0;
      pUVar16 = UDeviceProfileManager::FindProfile(pUVar15,&local_d0,false,(FName)0x0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (pUVar16 != (UDeviceProfile *)0x0) {
        FOutputDevice::LogfImpl(param_3,L"All preview cvars found for deviceprofile %s");
        pTVar1 = &pUVar16->AllPreviewCVars;
        if (*(int *)&(pUVar16->AllPreviewCVars).field_0x8 ==
            *(int *)&(pUVar16->AllPreviewCVars).field_0x34) {
          UDeviceProfile::ExpandDeviceProfileCVars(pUVar16);
        }
        iVar4 = *(int *)&(pUVar16->AllPreviewCVars).field_0x28;
        puVar3 = &(pUVar16->AllPreviewCVars).field_0x10;
        uStack_22c = 1;
        local_218 = 0;
        uStack_21c = iVar28;
        if (iVar4 != 0) {
          puVar35 = *(uint **)&(pUVar16->AllPreviewCVars).field_0x20;
          if (puVar35 == (uint *)0x0) {
            puVar35 = (uint *)puVar3;
          }
          uVar32 = *puVar35;
          iVar28 = 0;
          local_218 = 0;
          while (uVar32 == 0) {
            iVar28 = iVar28 + 1;
            local_218 = local_218 + 0x20;
            uStack_21c = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_147aa69bc;
            uVar32 = puVar35[iVar28];
          }
          uStack_22c = -uVar32 & uVar32;
          uVar23 = (ulonglong)uStack_22c * 2 + 1;
          lVar26 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          local_168 = (int)lVar26;
          uStack_21c = local_168 + -1 + local_218;
          if (iVar4 < (int)uStack_21c) {
            uStack_21c = iVar4;
          }
        }
LAB_147aa69bc:
        uVar32 = *(uint *)&(pUVar16->AllPreviewCVars).field_0x28;
        uVar25 = uVar32 & 0xffffffe0;
        iStack_210 = *(int *)&(pUVar16->AllPreviewCVars).field_0x8 -
                     *(int *)&(pUVar16->AllPreviewCVars).field_0x34;
        uStack_220 = 0xffffffff;
        TStack_118._padding_ = CONCAT44(uStack_22c,iVar28);
        TStack_118.CurrentBitIndex = uStack_21c;
        TStack_118.UnvisitedBitMask = 0xffffffff;
        iVar30 = (int)uVar32 >> 5;
        TStack_118._28_4_ = uStack_21c;
        TStack_118.BaseBitIndex = local_218;
        uStack_f8 = CONCAT44(uStack_20c,iStack_210);
        local_238 = pTVar1;
        uStack_230 = iVar28;
        local_228 = puVar3;
        iStack_214 = uStack_21c;
        local_120 = pTVar1;
        TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
        if ((((int)uVar32 < 0) || (iVar4 < (int)uVar32)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          uVar13 = (*pcVar7)();
          return (bool)uVar13;
        }
        uVar14 = *(uint *)&(pUVar16->AllPreviewCVars).field_0x28;
        if (uVar32 != uVar14) {
          puVar5 = *(undefined1 **)&(pUVar16->AllPreviewCVars).field_0x20;
          puVar34 = puVar3;
          if (puVar5 != (undefined1 *)0x0) {
            puVar34 = puVar5;
          }
          uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar30 * 4);
          while (uVar32 == 0) {
            iVar30 = iVar30 + 1;
            uVar25 = uVar25 + 0x20;
            uVar32 = uVar14;
            if ((int)(((int)(uVar14 - 1) >> 0x1f & 0x1fU) + (uVar14 - 1)) >> 5 < iVar30)
            goto LAB_147aa6ac0;
            uVar32 = *(uint *)(puVar34 + (longlong)iVar30 * 4);
          }
          uVar23 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
          lVar26 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar32 = (uVar25 - 1) + (int)lVar26;
          if ((int)uVar14 < (int)uVar32) {
            uVar32 = uVar14;
          }
        }
LAB_147aa6ac0:
        while( true ) {
          pTVar10 = local_120;
          if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
            `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_257);
          }
          if (((TStack_118.CurrentBitIndex == uVar32) &&
              (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
             (pTVar10 == pTVar1)) break;
          FOutputDevice::LogfImpl(param_3,L"%s = %s");
          TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
        }
      }
    }
    else {
      bVar11 = FParse::Command(&local_res18,L"dppreview",true);
      if (bVar11) {
        pUVar15 = UDeviceProfileManager::Get(false);
        local_188 = 0;
        ::FString::FString(&local_c0,local_res18);
        pUVar16 = UDeviceProfileManager::FindProfile(pUVar15,&local_c0,false,(FName)0x0);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (pUVar16 != (UDeviceProfile *)0x0) {
          pUVar15 = UDeviceProfileManager::Get(false);
          local_180 = 0;
          UDeviceProfileManager::SetPreviewDeviceProfile(pUVar15,pUVar16,(FName)0x0);
        }
      }
      else {
        bVar11 = FParse::Command(&local_res18,L"dprestore",true);
        if (bVar11) {
          pUVar15 = UDeviceProfileManager::Get(false);
          local_178 = 0;
          UDeviceProfileManager::RestorePreviewDeviceProfile(pUVar15,(FName)0x0);
        }
        else {
          bVar11 = FParse::Command(&local_res18,L"dpreload",true);
          if (bVar11) {
            pIVar20 = IConsoleManager::Get();
            local_250.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_248.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_248.DelegateSize = 0;
            pcVar7 = *(code **)((longlong)*pIVar20 + 0xd8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_250,(FWriteAccessScope *)&local_98);
            local_80 = &local_248;
            puVar21 = UE::Core::Private::DelegateAllocate(0x20,&local_248);
            if (puVar21 != (undefined8 *)0x0) {
              *puVar21 = &
                         ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar22 = FDelegateHandle::GenerateNewID();
              puVar21[2] = uVar22;
              *puVar21 = &
                         ___7__TBaseFunctorDelegateInstance___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__CP___Exec_Runtime_FPlatformCVarExec__MEAA_NPEAVUWorld__0AEAVFOutputDevice___Z___V__6B_
              ;
            }
            if (local_98.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
            }
            (*pcVar7)(pIVar20,&local_250);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_250,(FWriteAccessScope *)&local_b0);
            if ((local_248.DelegateSize != 0) &&
               (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_248.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_248,0,0,0x10);
              local_248.DelegateSize = 0;
            }
            if (local_b0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
            }
            if (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_248.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
            pUVar15 = UDeviceProfileManager::Get(false);
            pFVar27 = (pUVar15->Profiles).AllocatorInstance.Data;
            iVar28 = (pUVar15->Profiles).ArrayNum;
            pFVar2 = pFVar27 + (longlong)iVar28 * 8;
            while( true ) {
              if ((pUVar15->Profiles).ArrayNum != iVar28) {
                `TCheckedPointerIterator<TObjectPtr<UDeviceProfile>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_256);
              }
              if (pFVar27 == pFVar2) break;
              UDeviceProfile::ClearAllExpandedCVars(*(UDeviceProfile **)pFVar27);
              pFVar27 = pFVar27 + 8;
            }
            FConfigCacheIni::ClearOtherPlatformConfigs();
          }
          else {
            bVar11 = FParse::Command(&local_res18,L"dpreapply",true);
            if (bVar11) {
              pUVar15 = UDeviceProfileManager::Get(false);
              UDeviceProfileManager::ReapplyDeviceProfile
                        (pUVar15,false,
                         (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
            }
          }
        }
      }
    }
  }
  return false;
}

