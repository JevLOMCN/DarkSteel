// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 6

// TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1> @ 14b339f20

/* WARNING: Removing unreachable block (ram,0x00014b33a0b1) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> * __thiscall
Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(void *this,FName param_1)

{
  TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *pTVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FName *this_00;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode>_const_,int>
  local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 1;
  local_res10 = param_1;
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::EInterpolationMode>::GetAllEntries(&local_68)
  ;
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EInterpolationMode *)this = (local_68.DataPtr)->Value;
      return this;
    }
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    pTVar7 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar7->AllocatorInstance).Data;
    iVar3 = pTVar7->ArrayNum;
    pFVar2 = this_00 + iVar3;
    while( true ) {
      if (pTVar7->ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar2) break;
      ::FName::ToString(this_00,&local_88);
      if (((local_98.Data <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < local_98.Data + (longlong)local_90._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = (int)local_90;
      if ((int)local_90 == local_90._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_98,(int *)((longlong)&local_90 + 4));
      }
      local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
      pFVar10 = local_98.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(FScriptContainerElement **)pFVar10 = local_88.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar10 + 8) = local_88.Data.ArrayNum;
      *(int *)(pFVar10 + 0xc) = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar3 = (int)local_90;
      uVar9 = (ulonglong)(int)local_90;
      bVar5 = true;
      pFVar10 = local_98.Data + uVar9 * 0x10;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      FVar11.Data = local_98.Data;
      while( true ) {
        if ((int)uVar9 != iVar3) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar11.Data == pFVar10) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_78,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar11.Data + 8) + -1;
        if (*(int *)(FVar11.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_78,*(wchar_t **)FVar11.Data,iVar6);
        uVar9 = local_90 & 0xffffffff;
        FVar11.Data = FVar11.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_98.Data,(int)local_90);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  return this;
}

// TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1> @ 14b33a220

/* WARNING: Removing unreachable block (ram,0x00014b33a3b0) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> * __thiscall
Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>
          (void *this,EInterpolationMode param_1)

{
  TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *pTVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FName *this_00;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode>_const_,int>
  local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 1;
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::EInterpolationMode>::GetAllEntries(&local_58)
  ;
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b33a272:
      if (bHasWarnedNameToEnumConversionFailure == false) {
        local_98.Data = (FScriptContainerElement *)0x0;
        local_90 = 0;
        pTVar7 = GetAllNames(&local_48);
        this_00 = (FName *)(pTVar7->AllocatorInstance).Data;
        iVar3 = pTVar7->ArrayNum;
        pFVar2 = this_00 + iVar3;
        while( true ) {
          if (pTVar7->ArrayNum != iVar3) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (this_00 == pFVar2) break;
          ::FName::ToString(this_00,&local_88);
          if (((local_98.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               local_98.Data + (longlong)local_90._4_4_ * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *)(*pcVar4)();
            return pTVar8;
          }
          iVar6 = (int)local_90;
          if ((int)local_90 == local_90._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_98,(int *)((longlong)&local_90 + 4));
          }
          local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
          pFVar10 = local_98.Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar10 = 0;
          *(FScriptContainerElement **)pFVar10 = local_88.Data.AllocatorInstance.Data;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar10 + 8) = local_88.Data.ArrayNum;
          *(int *)(pFVar10 + 0xc) = local_88.Data.ArrayMax;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          this_00 = this_00 + 1;
        }
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (2 < (byte)LogMetaSound._0_1_) {
          iVar3 = (int)local_90;
          uVar9 = (ulonglong)(int)local_90;
          bVar5 = true;
          pFVar10 = local_98.Data + uVar9 * 0x10;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          FVar11.Data = local_98.Data;
          while( true ) {
            if ((int)uVar9 != iVar3) {
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (FVar11.Data == pFVar10) break;
            if (bVar5) {
              bVar5 = false;
            }
            else {
              ::FString::AppendChars(&local_78,L"\n, ",3);
            }
            iVar6 = *(int *)(FVar11.Data + 8) + -1;
            if (*(int *)(FVar11.Data + 8) == 0) {
              iVar6 = 0;
            }
            ::FString::AppendChars(&local_78,*(wchar_t **)FVar11.Data,iVar6);
            uVar9 = local_90 & 0xffffffff;
            FVar11.Data = FVar11.Data + 0x10;
          }
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_68,param_1);
          UE::Logging::Private::BasicLog<3>
                    (&`public:___cdecl_Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>(WaveTable::FWaveTableSampler::EInterpolationMode)___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        bHasWarnedNameToEnumConversionFailure = true;
        DestructItems<FString,int>((FString *)local_98.Data,(int)local_90);
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
      }
      return this;
    }
    if ((local_58.DataPtr)->Value == param_1) {
      if (((local_58.DataPtr)->Name).ComparisonIndex.Value != 0xffffffff) {
        *(EInterpolationMode *)this = param_1;
        return this;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b33a272;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0> @ 14b33a560

/* WARNING: Removing unreachable block (ram,0x00014b33a6e7) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> * __thiscall
Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(void *this,FName param_1)

{
  TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *pTVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FName *this_00;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode>_const_,int>
  local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::ESingleSampleMode>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(ESingleSampleMode *)this = (local_68.DataPtr)->Value;
      return this;
    }
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    pTVar7 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar7->AllocatorInstance).Data;
    iVar3 = pTVar7->ArrayNum;
    pFVar2 = this_00 + iVar3;
    while( true ) {
      if (pTVar7->ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar2) break;
      ::FName::ToString(this_00,&local_88);
      if (((local_98.Data <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < local_98.Data + (longlong)local_90._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = (int)local_90;
      if ((int)local_90 == local_90._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_98,(int *)((longlong)&local_90 + 4));
      }
      local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
      pFVar10 = local_98.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(FScriptContainerElement **)pFVar10 = local_88.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar10 + 8) = local_88.Data.ArrayNum;
      *(int *)(pFVar10 + 0xc) = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar3 = (int)local_90;
      uVar9 = (ulonglong)(int)local_90;
      bVar5 = true;
      pFVar10 = local_98.Data + uVar9 * 0x10;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      FVar11.Data = local_98.Data;
      while( true ) {
        if ((int)uVar9 != iVar3) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar11.Data == pFVar10) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_78,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar11.Data + 8) + -1;
        if (*(int *)(FVar11.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_78,*(wchar_t **)FVar11.Data,iVar6);
        uVar9 = local_90 & 0xffffffff;
        FVar11.Data = FVar11.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_98.Data,(int)local_90);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  return this;
}

// TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0> @ 14b33a850

/* WARNING: Removing unreachable block (ram,0x00014b33a9d5) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> * __thiscall
Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(void *this,ESingleSampleMode param_1)

{
  TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *pTVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FName *this_00;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode>_const_,int>
  local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::ESingleSampleMode>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b33a8a2:
      if (bHasWarnedNameToEnumConversionFailure == false) {
        local_98.Data = (FScriptContainerElement *)0x0;
        local_90 = 0;
        pTVar7 = GetAllNames(&local_48);
        this_00 = (FName *)(pTVar7->AllocatorInstance).Data;
        iVar3 = pTVar7->ArrayNum;
        pFVar2 = this_00 + iVar3;
        while( true ) {
          if (pTVar7->ArrayNum != iVar3) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (this_00 == pFVar2) break;
          ::FName::ToString(this_00,&local_88);
          if (((local_98.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               local_98.Data + (longlong)local_90._4_4_ * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *)(*pcVar4)();
            return pTVar8;
          }
          iVar6 = (int)local_90;
          if ((int)local_90 == local_90._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_98,(int *)((longlong)&local_90 + 4));
          }
          local_90 = CONCAT44(local_90._4_4_,iVar6 + 1);
          pFVar10 = local_98.Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar10 = 0;
          *(FScriptContainerElement **)pFVar10 = local_88.Data.AllocatorInstance.Data;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar10 + 8) = local_88.Data.ArrayNum;
          *(int *)(pFVar10 + 0xc) = local_88.Data.ArrayMax;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          this_00 = this_00 + 1;
        }
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (2 < (byte)LogMetaSound._0_1_) {
          iVar3 = (int)local_90;
          uVar9 = (ulonglong)(int)local_90;
          bVar5 = true;
          pFVar10 = local_98.Data + uVar9 * 0x10;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          FVar11.Data = local_98.Data;
          while( true ) {
            if ((int)uVar9 != iVar3) {
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (FVar11.Data == pFVar10) break;
            if (bVar5) {
              bVar5 = false;
            }
            else {
              ::FString::AppendChars(&local_78,L"\n, ",3);
            }
            iVar6 = *(int *)(FVar11.Data + 8) + -1;
            if (*(int *)(FVar11.Data + 8) == 0) {
              iVar6 = 0;
            }
            ::FString::AppendChars(&local_78,*(wchar_t **)FVar11.Data,iVar6);
            uVar9 = local_90 & 0xffffffff;
            FVar11.Data = FVar11.Data + 0x10;
          }
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_68,param_1);
          UE::Logging::Private::BasicLog<3>
                    (&`public:___cdecl_Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>(WaveTable::FWaveTableSampler::ESingleSampleMode)___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        bHasWarnedNameToEnumConversionFailure = true;
        DestructItems<FString,int>((FString *)local_98.Data,(int)local_90);
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
      }
      return this;
    }
    if ((local_58.DataPtr)->Value == param_1) {
      if (((local_58.DataPtr)->Name).ComparisonIndex.Value != 0xffffffff) {
        *(ESingleSampleMode *)this = param_1;
        return this;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b33a8a2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// GetAllNames @ 14b3ac390

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode> *pTVar2;
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::EInterpolationMode>_const_,int>
  local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::EInterpolationMode>::GetAllEntries(&local_18)
  ;
  for (pTVar2 = local_18.DataPtr; pTVar2 != local_18.DataPtr + local_18.ArrayNum;
      pTVar2 = pTVar2 + 1) {
    iVar1 = __return_storage_ptr__->ArrayNum;
    if (iVar1 == __return_storage_ptr__->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar1 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 8) =
         pTVar2->Name;
  }
  return __return_storage_ptr__;
}

// GetAllNames @ 14b3ac430

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode> *pTVar2;
  TArrayView<Metasound::TEnumEntry<WaveTable::FWaveTableSampler::ESingleSampleMode>_const_,int>
  local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_WaveTable::FWaveTableSampler::ESingleSampleMode>::GetAllEntries(&local_18);
  for (pTVar2 = local_18.DataPtr; pTVar2 != local_18.DataPtr + local_18.ArrayNum;
      pTVar2 = pTVar2 + 1) {
    iVar1 = __return_storage_ptr__->ArrayNum;
    if (iVar1 == __return_storage_ptr__->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar1 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 8) =
         pTVar2->Name;
  }
  return __return_storage_ptr__;
}

