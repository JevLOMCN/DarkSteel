// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 63

// TEnum<enum_Metasound::EBandSplitterFilterOrder,1> @ 14aff2c70

/* WARNING: Removing unreachable block (ram,0x00014aff2e01) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EBandSplitterFilterOrder,1> * __thiscall
Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(void *this,FName param_1)

{
  TEnumEntry<Metasound::EBandSplitterFilterOrder> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EBandSplitterFilterOrder,1> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 1;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::EBandSplitterFilterOrder>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EBandSplitterFilterOrder *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::EBandSplitterFilterOrder,1> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>::TEnum<Metasound::EBandSplitterFilterOrder,1>(FName)___ptr64'
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

// TEnum<enum_Metasound::EBandSplitterFilterOrder,1> @ 14aff2f70

/* WARNING: Removing unreachable block (ram,0x00014aff3100) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EBandSplitterFilterOrder,1> * __thiscall
Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(void *this,EBandSplitterFilterOrder param_1)

{
  TEnumEntry<Metasound::EBandSplitterFilterOrder> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EBandSplitterFilterOrder,1> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 1;
  TEnumStringHelper<enum_Metasound::EBandSplitterFilterOrder>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14aff2fc2:
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
            pTVar8 = (TEnum<Metasound::EBandSplitterFilterOrder,1> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>::TEnum<Metasound::EBandSplitterFilterOrder,1>(Metasound::EBandSplitterFilterOrder)___ptr64'
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
        *(EBandSplitterFilterOrder *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::EBandSplitterFilterOrder,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14aff2fc2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_Audio::EBiquadFilter::Type,0> @ 14aff32b0

/* WARNING: Removing unreachable block (ram,0x00014aff3437) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EBiquadFilter::Type,0> * __thiscall
Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
          (void *this,FName param_1)

{
  TEnumEntry<Audio::EBiquadFilter::Type> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EBiquadFilter::Type,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Audio::EBiquadFilter::Type>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(Type *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Audio::EBiquadFilter::Type,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Audio::EBiquadFilter::Type,0>::TEnum<Audio::EBiquadFilter::Type,0>(FName)___ptr64'
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

// TEnum<enum_Audio::EBiquadFilter::Type,0> @ 14aff35a0

/* WARNING: Removing unreachable block (ram,0x00014aff3725) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EBiquadFilter::Type,0> * __thiscall
Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
          (void *this,Type param_1)

{
  TEnumEntry<Audio::EBiquadFilter::Type> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EBiquadFilter::Type,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Audio::EBiquadFilter::Type>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14aff35f2:
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
            pTVar8 = (TEnum<Audio::EBiquadFilter::Type,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Audio::EBiquadFilter::Type,0>::TEnum<Audio::EBiquadFilter::Type,0>(Audio::EBiquadFilter::Type)___ptr64'
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
        *(Type *)this = param_1;
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
        pTVar8 = (TEnum<Audio::EBiquadFilter::Type,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14aff35f2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// GetAllNames @ 14b021cb0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::EBandSplitterFilterOrder> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::EBandSplitterFilterOrder>::GetAllEntries(&local_18);
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

// GetAllNames @ 14b021d50

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Audio::EBiquadFilter::Type> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Audio::EBiquadFilter::Type>::GetAllEntries(&local_18);
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

// TEnum<enum_Audio::EDynamicFilterType,0> @ 14b04f780

/* WARNING: Removing unreachable block (ram,0x00014b04f907) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EDynamicFilterType,0> * __thiscall
Metasound::TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
          (void *this,FName param_1)

{
  TEnumEntry<Audio::EDynamicFilterType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EDynamicFilterType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Audio::EDynamicFilterType>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EDynamicFilterType *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Audio::EDynamicFilterType,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Audio::EDynamicFilterType,0>::TEnum<Audio::EDynamicFilterType,0>(FName)___ptr64'
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

// TEnum<enum_Audio::EDynamicFilterType,0> @ 14b04fa70

/* WARNING: Removing unreachable block (ram,0x00014b04fbf5) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EDynamicFilterType,0> * __thiscall
Metasound::TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
          (void *this,EDynamicFilterType param_1)

{
  TEnumEntry<Audio::EDynamicFilterType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EDynamicFilterType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Audio::EDynamicFilterType>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b04fac2:
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
            pTVar8 = (TEnum<Audio::EDynamicFilterType,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Audio::EDynamicFilterType,0>::TEnum<Audio::EDynamicFilterType,0>(Audio::EDynamicFilterType)___ptr64'
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
        *(EDynamicFilterType *)this = param_1;
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
        pTVar8 = (TEnum<Audio::EDynamicFilterType,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b04fac2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_Metasound::EEnvelopePeakMode,0> @ 14b04fd90

/* WARNING: Removing unreachable block (ram,0x00014b04ff17) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EEnvelopePeakMode,0> * __thiscall
Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
          (void *this,FName param_1)

{
  TEnumEntry<Metasound::EEnvelopePeakMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EEnvelopePeakMode,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::EEnvelopePeakMode>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EEnvelopePeakMode *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::EEnvelopePeakMode,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::EEnvelopePeakMode,0>::TEnum<Metasound::EEnvelopePeakMode,0>(FName)___ptr64'
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

// TEnum<enum_Metasound::EEnvelopePeakMode,0> @ 14b050080

/* WARNING: Removing unreachable block (ram,0x00014b050205) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EEnvelopePeakMode,0> * __thiscall
Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
          (void *this,EEnvelopePeakMode param_1)

{
  TEnumEntry<Metasound::EEnvelopePeakMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EEnvelopePeakMode,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Metasound::EEnvelopePeakMode>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b0500d2:
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
            pTVar8 = (TEnum<Metasound::EEnvelopePeakMode,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::EEnvelopePeakMode,0>::TEnum<Metasound::EEnvelopePeakMode,0>(Metasound::EEnvelopePeakMode)___ptr64'
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
        *(EEnvelopePeakMode *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::EEnvelopePeakMode,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b0500d2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// GetAllNames @ 14b06d060

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Audio::EDynamicFilterType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Audio::EDynamicFilterType> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Audio::EDynamicFilterType>::GetAllEntries(&local_18);
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

// GetAllNames @ 14b06d100

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::EEnvelopePeakMode> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::EEnvelopePeakMode>::GetAllEntries(&local_18);
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

// TEnum<enum_Audio::Grain::EEnvelope,0> @ 14b0ac9e0

/* WARNING: Removing unreachable block (ram,0x00014b0acb67) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::Grain::EEnvelope,0> * __thiscall
Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
          (void *this,FName param_1)

{
  TEnumEntry<Audio::Grain::EEnvelope> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::Grain::EEnvelope,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Audio::Grain::EEnvelope>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EEnvelope *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Audio::Grain::EEnvelope,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Audio::Grain::EEnvelope,0>::TEnum<Audio::Grain::EEnvelope,0>(FName)___ptr64'
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

// TEnum<enum_Audio::Grain::EEnvelope,0> @ 14b0accd0

/* WARNING: Removing unreachable block (ram,0x00014b0ace55) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::Grain::EEnvelope,0> * __thiscall
Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
          (void *this,EEnvelope param_1)

{
  TEnumEntry<Audio::Grain::EEnvelope> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::Grain::EEnvelope,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Audio::Grain::EEnvelope>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b0acd22:
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
            pTVar8 = (TEnum<Audio::Grain::EEnvelope,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Audio::Grain::EEnvelope,0>::TEnum<Audio::Grain::EEnvelope,0>(Audio::Grain::EEnvelope)___ptr64'
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
        *(EEnvelope *)this = param_1;
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
        pTVar8 = (TEnum<Audio::Grain::EEnvelope,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b0acd22;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_Metasound::EKneeMode,0> @ 14b0acff0

/* WARNING: Removing unreachable block (ram,0x00014b0ad196) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EKneeMode,0> * __thiscall
Metasound::TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>
          (void *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TEnumEntry<Metasound::EKneeMode> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TEnum<Metasound::EKneeMode,0> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Entries[0].Value = Hard;
    ::FName::FName(&::Entries[0].Name,L"EKneeMode::Hard");
    ::Entries[1].Value = Soft;
    ::FName::FName(&::Entries[1].Name,L"EKneeMode::Soft");
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = ::Entries;
  do {
    if (pTVar7->Name == param_1) {
      *(EKneeMode *)this = pTVar7->Value;
      return this;
    }
    pTVar7 = pTVar7 + 1;
  } while (pTVar7 != (TEnumEntry<Metasound::EKneeMode> *)&::_TSS0);
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar8 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TEnum<Metasound::EKneeMode,0> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar11 = local_88.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar10 = (ulonglong)(int)local_80;
      bVar5 = true;
      pFVar11 = local_88.Data + uVar10 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar12.Data = local_88.Data;
      while( true ) {
        if ((int)uVar10 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar12.Data == pFVar11) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar12.Data,iVar6);
        uVar10 = local_80 & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::EKneeMode,0>::TEnum<Metasound::EKneeMode,0>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
      return this;
    }
  }
  return this;
}

// TEnum<enum_Metasound::EKneeMode,0> @ 14b0ad360

/* WARNING: Removing unreachable block (ram,0x00014b0ad4df) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EKneeMode,0> * __thiscall
Metasound::TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>
          (void *this,EKneeMode param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  TEnum<Metasound::EKneeMode,0> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  ToName((EKneeMode)local_res20);
  if (local_res20[0] != -1) {
    *(EKneeMode *)this = param_1;
    return this;
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar6 = GetAllNames(&local_48);
    this_00 = (FName *)(pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TEnum<Metasound::EKneeMode,0> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      pFVar9 = local_88.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar8 = (ulonglong)(int)local_80;
      bVar4 = true;
      pFVar9 = local_88.Data + uVar8 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar10.Data = local_88.Data;
      while( true ) {
        if ((int)uVar8 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar10.Data == pFVar9) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar5 = *(int *)(FVar10.Data + 8) + -1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar10.Data,iVar5);
        uVar8 = local_80 & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_58,param_1);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::EKneeMode,0>::TEnum<Metasound::EKneeMode,0>(Metasound::EKneeMode)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bHasWarnedNameToEnumConversionFailure = true;
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return this;
}

// TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2> @ 14b0ad640

/* WARNING: Removing unreachable block (ram,0x00014b0ad7d1) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ELowFrequencyNoiseInterpType,2> * __thiscall
Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(void *this,FName param_1)

{
  TEnumEntry<Metasound::ELowFrequencyNoiseInterpType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 2;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::ELowFrequencyNoiseInterpType>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(ELowFrequencyNoiseInterpType *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>(FName)___ptr64'
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

// TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2> @ 14b0ad940

/* WARNING: Removing unreachable block (ram,0x00014b0adad0) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ELowFrequencyNoiseInterpType,2> * __thiscall
Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>
          (void *this,ELowFrequencyNoiseInterpType param_1)

{
  TEnumEntry<Metasound::ELowFrequencyNoiseInterpType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 2;
  TEnumStringHelper<enum_Metasound::ELowFrequencyNoiseInterpType>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b0ad992:
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
            pTVar8 = (TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>(Metasound::ELowFrequencyNoiseInterpType)___ptr64'
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
        *(ELowFrequencyNoiseInterpType *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b0ad992;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// GetAllNames @ 14b0d5e50

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Audio::Grain::EEnvelope> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Audio::Grain::EEnvelope>::GetAllEntries(&local_18);
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

// GetAllNames @ 14b0d5ef0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::EKneeMode,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  TEnumEntry<Metasound::EKneeMode> *pTVar5;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = Hard;
      ::FName::FName(&::Entries[0].Name,L"EKneeMode::Hard");
      ::Entries[1].Value = Soft;
      ::FName::FName(&::Entries[1].Name,L"EKneeMode::Soft");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = ::Entries;
  do {
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar1 = &pTVar5->Name;
    pTVar5 = pTVar5 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = *pFVar1;
  } while (pTVar5 != (TEnumEntry<Metasound::EKneeMode> *)&::_TSS0);
  return __return_storage_ptr__;
}

// GetAllNames @ 14b0d6000

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::ELowFrequencyNoiseInterpType> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::ELowFrequencyNoiseInterpType>::GetAllEntries(&local_18);
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

// ToName @ 14b0e78d0

TOptional<FName> __cdecl Metasound::TEnum<enum_Metasound::EKneeMode,0>::ToName(EKneeMode param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TEnumEntry<Metasound::EKneeMode> *pTVar4;
  TOptional<FName> TVar5;
  undefined4 in_register_0000000c;
  TOptional<FName>_u_0 TVar6;
  EKneeMode in_EDX;
  
  TVar6.TypedValue.Number = in_register_0000000c;
  TVar6.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = Hard;
      ::FName::FName(&::Entries[0].Name,L"EKneeMode::Hard");
      ::Entries[1].Value = Soft;
      ::FName::FName(&::Entries[1].Name,L"EKneeMode::Soft");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar4 = ::Entries;
  do {
    if (pTVar4->Value == in_EDX) {
      FVar1 = pTVar4->Name;
      *(FName *)TVar6 = FVar1;
      if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar5.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
          return (TOptional<FName>)TVar5.field0_0x0;
        }
      }
      return (TOptional<FName>)TVar6.TypedValue;
    }
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != (TEnumEntry<Metasound::EKneeMode> *)&::_TSS0);
  *(undefined4 *)TVar6 = 0xffffffff;
  *(uint *)((longlong)TVar6 + 4) = 0;
  return (TOptional<FName>)TVar6;
}

// TEnum<enum_Metasound::ELfoWaveshapeType,0> @ 14b131cf0

/* WARNING: Removing unreachable block (ram,0x00014b131e77) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ELfoWaveshapeType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
          (void *this,FName param_1)

{
  TEnumEntry<Metasound::ELfoWaveshapeType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ELfoWaveshapeType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::ELfoWaveshapeType>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(ELfoWaveshapeType *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::ELfoWaveshapeType,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::ELfoWaveshapeType,0>::TEnum<Metasound::ELfoWaveshapeType,0>(FName)___ptr64'
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

// TEnum<enum_Metasound::ELfoWaveshapeType,0> @ 14b131fe0

/* WARNING: Removing unreachable block (ram,0x00014b132165) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ELfoWaveshapeType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>::TEnum<enum_Metasound::ELfoWaveshapeType,0>
          (void *this,ELfoWaveshapeType param_1)

{
  TEnumEntry<Metasound::ELfoWaveshapeType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ELfoWaveshapeType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Metasound::ELfoWaveshapeType>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b132032:
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
            pTVar8 = (TEnum<Metasound::ELfoWaveshapeType,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::ELfoWaveshapeType,0>::TEnum<Metasound::ELfoWaveshapeType,0>(Metasound::ELfoWaveshapeType)___ptr64'
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
        *(ELfoWaveshapeType *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::ELfoWaveshapeType,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b132032;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_Metasound::ENoiseType,0> @ 14b132300

/* WARNING: Removing unreachable block (ram,0x00014b1324a6) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ENoiseType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>
          (void *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TEnumEntry<Metasound::ENoiseType> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TEnum<Metasound::ENoiseType,0> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Entries[0].Value = Pink;
    ::FName::FName(&::Entries[0].Name,L"ENoiseType::Pink");
    ::Entries[1].Value = White;
    ::FName::FName(&::Entries[1].Name,L"ENoiseType::White");
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = ::Entries;
  do {
    if (pTVar7->Name == param_1) {
      *(ENoiseType *)this = pTVar7->Value;
      return this;
    }
    pTVar7 = pTVar7 + 1;
  } while (pTVar7 != (TEnumEntry<Metasound::ENoiseType> *)&::_TSS0);
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar8 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TEnum<Metasound::ENoiseType,0> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar11 = local_88.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar10 = (ulonglong)(int)local_80;
      bVar5 = true;
      pFVar11 = local_88.Data + uVar10 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar12.Data = local_88.Data;
      while( true ) {
        if ((int)uVar10 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar12.Data == pFVar11) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar12.Data,iVar6);
        uVar10 = local_80 & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ENoiseType,0>::TEnum<Metasound::ENoiseType,0>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
      return this;
    }
  }
  return this;
}

// TEnum<enum_Metasound::ENoiseType,0> @ 14b132670

/* WARNING: Removing unreachable block (ram,0x00014b1327ef) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ENoiseType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>
          (void *this,ENoiseType param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  TEnum<Metasound::ENoiseType,0> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  ToName((ENoiseType)local_res20);
  if (local_res20[0] != -1) {
    *(ENoiseType *)this = param_1;
    return this;
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar6 = GetAllNames(&local_48);
    this_00 = (FName *)(pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TEnum<Metasound::ENoiseType,0> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      pFVar9 = local_88.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar8 = (ulonglong)(int)local_80;
      bVar4 = true;
      pFVar9 = local_88.Data + uVar8 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar10.Data = local_88.Data;
      while( true ) {
        if ((int)uVar8 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar10.Data == pFVar9) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar5 = *(int *)(FVar10.Data + 8) + -1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar10.Data,iVar5);
        uVar8 = local_80 & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_58,param_1);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ENoiseType,0>::TEnum<Metasound::ENoiseType,0>(Metasound::ENoiseType)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bHasWarnedNameToEnumConversionFailure = true;
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return this;
}

// TEnum<enum_Metasound::ESawGenerationType,0> @ 14b132950

/* WARNING: Removing unreachable block (ram,0x00014b132af6) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ESawGenerationType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
          (void *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TEnumEntry<Metasound::ESawGenerationType> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TEnum<Metasound::ESawGenerationType,0> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Entries[0].Value = PolySmooth;
    ::FName::FName(&::Entries[0].Name,L"ESawGenerationType::PolySmooth");
    ::Entries[1].Value = Trivial;
    ::FName::FName(&::Entries[1].Name,L"ESawGenerationType::Trivial");
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = ::Entries;
  do {
    if (pTVar7->Name == param_1) {
      *(ESawGenerationType *)this = pTVar7->Value;
      return this;
    }
    pTVar7 = pTVar7 + 1;
  } while (pTVar7 != (TEnumEntry<Metasound::ESawGenerationType> *)&::_TSS0);
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar8 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TEnum<Metasound::ESawGenerationType,0> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar11 = local_88.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar10 = (ulonglong)(int)local_80;
      bVar5 = true;
      pFVar11 = local_88.Data + uVar10 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar12.Data = local_88.Data;
      while( true ) {
        if ((int)uVar10 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar12.Data == pFVar11) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar12.Data,iVar6);
        uVar10 = local_80 & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ESawGenerationType,0>::TEnum<Metasound::ESawGenerationType,0>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
      return this;
    }
  }
  return this;
}

// TEnum<enum_Metasound::ESawGenerationType,0> @ 14b132cc0

/* WARNING: Removing unreachable block (ram,0x00014b132e3f) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ESawGenerationType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
          (void *this,ESawGenerationType param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  TEnum<Metasound::ESawGenerationType,0> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  ToName((ESawGenerationType)local_res20);
  if (local_res20[0] != -1) {
    *(ESawGenerationType *)this = param_1;
    return this;
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar6 = GetAllNames(&local_48);
    this_00 = (FName *)(pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TEnum<Metasound::ESawGenerationType,0> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      pFVar9 = local_88.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar8 = (ulonglong)(int)local_80;
      bVar4 = true;
      pFVar9 = local_88.Data + uVar8 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar10.Data = local_88.Data;
      while( true ) {
        if ((int)uVar8 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar10.Data == pFVar9) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar5 = *(int *)(FVar10.Data + 8) + -1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar10.Data,iVar5);
        uVar8 = local_80 & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_58,param_1);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ESawGenerationType,0>::TEnum<Metasound::ESawGenerationType,0>(Metasound::ESawGenerationType)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bHasWarnedNameToEnumConversionFailure = true;
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return this;
}

// TEnum<enum_Metasound::ESineGenerationType,3> @ 14b132fa0

/* WARNING: Removing unreachable block (ram,0x00014b133131) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ESineGenerationType,3> * __thiscall
Metasound::TEnum<enum_Metasound::ESineGenerationType,3>::
TEnum<enum_Metasound::ESineGenerationType,3>(void *this,FName param_1)

{
  TEnumEntry<Metasound::ESineGenerationType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ESineGenerationType,3> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 3;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::ESineGenerationType>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(ESineGenerationType *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::ESineGenerationType,3> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::ESineGenerationType,3>::TEnum<Metasound::ESineGenerationType,3>(FName)___ptr64'
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

// TEnum<enum_Metasound::ESineGenerationType,3> @ 14b1332a0

/* WARNING: Removing unreachable block (ram,0x00014b133430) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ESineGenerationType,3> * __thiscall
Metasound::TEnum<enum_Metasound::ESineGenerationType,3>::
TEnum<enum_Metasound::ESineGenerationType,3>(void *this,ESineGenerationType param_1)

{
  TEnumEntry<Metasound::ESineGenerationType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ESineGenerationType,3> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 3;
  TEnumStringHelper<enum_Metasound::ESineGenerationType>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b1332f2:
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
            pTVar8 = (TEnum<Metasound::ESineGenerationType,3> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::ESineGenerationType,3>::TEnum<Metasound::ESineGenerationType,3>(Metasound::ESineGenerationType)___ptr64'
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
        *(ESineGenerationType *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::ESineGenerationType,3> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b1332f2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_Metasound::ESquareGenerationType,0> @ 14b1335e0

/* WARNING: Removing unreachable block (ram,0x00014b133786) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ESquareGenerationType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>::
TEnum<enum_Metasound::ESquareGenerationType,0>(void *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TEnumEntry<Metasound::ESquareGenerationType> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TEnum<Metasound::ESquareGenerationType,0> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Entries[0].Value = PolySmooth;
    ::FName::FName(&::Entries[0].Name,L"ESquareGenerationType::PolySmooth");
    ::Entries[1].Value = Trivial;
    ::FName::FName(&::Entries[1].Name,L"ESquareGenerationType::Trivial");
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = ::Entries;
  do {
    if (pTVar7->Name == param_1) {
      *(ESquareGenerationType *)this = pTVar7->Value;
      return this;
    }
    pTVar7 = pTVar7 + 1;
  } while (pTVar7 != (TEnumEntry<Metasound::ESquareGenerationType> *)&::_TSS0);
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar8 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TEnum<Metasound::ESquareGenerationType,0> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar11 = local_88.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar10 = (ulonglong)(int)local_80;
      bVar5 = true;
      pFVar11 = local_88.Data + uVar10 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar12.Data = local_88.Data;
      while( true ) {
        if ((int)uVar10 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar12.Data == pFVar11) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar12.Data,iVar6);
        uVar10 = local_80 & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ESquareGenerationType,0>::TEnum<Metasound::ESquareGenerationType,0>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
      return this;
    }
  }
  return this;
}

// TEnum<enum_Metasound::ESquareGenerationType,0> @ 14b133950

/* WARNING: Removing unreachable block (ram,0x00014b133acf) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ESquareGenerationType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>::
TEnum<enum_Metasound::ESquareGenerationType,0>(void *this,ESquareGenerationType param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  TEnum<Metasound::ESquareGenerationType,0> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  ToName((ESquareGenerationType)local_res20);
  if (local_res20[0] != -1) {
    *(ESquareGenerationType *)this = param_1;
    return this;
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar6 = GetAllNames(&local_48);
    this_00 = (FName *)(pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TEnum<Metasound::ESquareGenerationType,0> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      pFVar9 = local_88.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar8 = (ulonglong)(int)local_80;
      bVar4 = true;
      pFVar9 = local_88.Data + uVar8 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar10.Data = local_88.Data;
      while( true ) {
        if ((int)uVar8 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar10.Data == pFVar9) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar5 = *(int *)(FVar10.Data + 8) + -1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar10.Data,iVar5);
        uVar8 = local_80 & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_58,param_1);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ESquareGenerationType,0>::TEnum<Metasound::ESquareGenerationType,0>(Metasound::ESquareGenerationType)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bHasWarnedNameToEnumConversionFailure = true;
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return this;
}

// TEnum<enum_Metasound::ETriangleGenerationType,0> @ 14b133c30

/* WARNING: Removing unreachable block (ram,0x00014b133dd6) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ETriangleGenerationType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>::
TEnum<enum_Metasound::ETriangleGenerationType,0>(void *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TEnumEntry<Metasound::ETriangleGenerationType> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TEnum<Metasound::ETriangleGenerationType,0> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Entries[0].Value = PolySmooth;
    ::FName::FName(&::Entries[0].Name,L"ETriangleGenerationType::PolySmooth");
    ::Entries[1].Value = Trivial;
    ::FName::FName(&::Entries[1].Name,L"ETriangleGenerationType::Trivial");
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = ::Entries;
  do {
    if (pTVar7->Name == param_1) {
      *(ETriangleGenerationType *)this = pTVar7->Value;
      return this;
    }
    pTVar7 = pTVar7 + 1;
  } while (pTVar7 != (TEnumEntry<Metasound::ETriangleGenerationType> *)&::_TSS0);
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar8 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TEnum<Metasound::ETriangleGenerationType,0> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar11 = local_88.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar10 = (ulonglong)(int)local_80;
      bVar5 = true;
      pFVar11 = local_88.Data + uVar10 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar12.Data = local_88.Data;
      while( true ) {
        if ((int)uVar10 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar12.Data == pFVar11) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar12.Data,iVar6);
        uVar10 = local_80 & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ETriangleGenerationType,0>::TEnum<Metasound::ETriangleGenerationType,0>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
      return this;
    }
  }
  return this;
}

// TEnum<enum_Metasound::ETriangleGenerationType,0> @ 14b133fa0

/* WARNING: Removing unreachable block (ram,0x00014b13411f) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ETriangleGenerationType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>::
TEnum<enum_Metasound::ETriangleGenerationType,0>(void *this,ETriangleGenerationType param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  TEnum<Metasound::ETriangleGenerationType,0> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  ToName((ETriangleGenerationType)local_res20);
  if (local_res20[0] != -1) {
    *(ETriangleGenerationType *)this = param_1;
    return this;
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar6 = GetAllNames(&local_48);
    this_00 = (FName *)(pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TEnum<Metasound::ETriangleGenerationType,0> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      pFVar9 = local_88.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar8 = (ulonglong)(int)local_80;
      bVar4 = true;
      pFVar9 = local_88.Data + uVar8 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar10.Data = local_88.Data;
      while( true ) {
        if ((int)uVar8 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar10.Data == pFVar9) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar5 = *(int *)(FVar10.Data + 8) + -1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar10.Data,iVar5);
        uVar8 = local_80 & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_58,param_1);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::ETriangleGenerationType,0>::TEnum<Metasound::ETriangleGenerationType,0>(Metasound::ETriangleGenerationType)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bHasWarnedNameToEnumConversionFailure = true;
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return this;
}

// TEnum<enum_Audio::EMusicalScale::Scale,0> @ 14b134280

/* WARNING: Removing unreachable block (ram,0x00014b134407) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EMusicalScale::Scale,0> * __thiscall
Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
          (void *this,FName param_1)

{
  TEnumEntry<Audio::EMusicalScale::Scale> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EMusicalScale::Scale,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Audio::EMusicalScale::Scale>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(Scale *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Audio::EMusicalScale::Scale,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Audio::EMusicalScale::Scale,0>::TEnum<Audio::EMusicalScale::Scale,0>(FName)___ptr64'
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

// TEnum<enum_Audio::EMusicalScale::Scale,0> @ 14b134570

/* WARNING: Removing unreachable block (ram,0x00014b1346f5) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EMusicalScale::Scale,0> * __thiscall
Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
          (void *this,Scale param_1)

{
  TEnumEntry<Audio::EMusicalScale::Scale> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EMusicalScale::Scale,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Audio::EMusicalScale::Scale>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b1345c2:
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
            pTVar8 = (TEnum<Audio::EMusicalScale::Scale,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Audio::EMusicalScale::Scale,0>::TEnum<Audio::EMusicalScale::Scale,0>(Audio::EMusicalScale::Scale)___ptr64'
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
        *(Scale *)this = param_1;
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
        pTVar8 = (TEnum<Audio::EMusicalScale::Scale,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b1345c2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// GetAllNames @ 14b18f460

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::ELfoWaveshapeType> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::ELfoWaveshapeType>::GetAllEntries(&local_18);
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

// GetAllNames @ 14b18f500

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ENoiseType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  TEnumEntry<Metasound::ENoiseType> *pTVar5;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = Pink;
      ::FName::FName(&::Entries[0].Name,L"ENoiseType::Pink");
      ::Entries[1].Value = White;
      ::FName::FName(&::Entries[1].Name,L"ENoiseType::White");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = ::Entries;
  do {
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar1 = &pTVar5->Name;
    pTVar5 = pTVar5 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = *pFVar1;
  } while (pTVar5 != (TEnumEntry<Metasound::ENoiseType> *)&::_TSS0);
  return __return_storage_ptr__;
}

// GetAllNames @ 14b18f610

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ESawGenerationType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  TEnumEntry<Metasound::ESawGenerationType> *pTVar5;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESawGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESawGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = ::Entries;
  do {
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar1 = &pTVar5->Name;
    pTVar5 = pTVar5 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = *pFVar1;
  } while (pTVar5 != (TEnumEntry<Metasound::ESawGenerationType> *)&::_TSS0);
  return __return_storage_ptr__;
}

// GetAllNames @ 14b18f720

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ESineGenerationType,3>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::ESineGenerationType> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::ESineGenerationType>::GetAllEntries(&local_18);
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

// GetAllNames @ 14b18f7c0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  TEnumEntry<Metasound::ESquareGenerationType> *pTVar5;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESquareGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESquareGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = ::Entries;
  do {
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar1 = &pTVar5->Name;
    pTVar5 = pTVar5 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = *pFVar1;
  } while (pTVar5 != (TEnumEntry<Metasound::ESquareGenerationType> *)&::_TSS0);
  return __return_storage_ptr__;
}

// GetAllNames @ 14b18f8d0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  TEnumEntry<Metasound::ETriangleGenerationType> *pTVar5;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ETriangleGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ETriangleGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = ::Entries;
  do {
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar1 = &pTVar5->Name;
    pTVar5 = pTVar5 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = *pFVar1;
  } while (pTVar5 != (TEnumEntry<Metasound::ETriangleGenerationType> *)&::_TSS0);
  return __return_storage_ptr__;
}

// GetAllNames @ 14b18f9e0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Audio::EMusicalScale::Scale> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Audio::EMusicalScale::Scale>::GetAllEntries(&local_18);
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

// ToName @ 14b1ab5c0

TOptional<FName> __cdecl Metasound::TEnum<enum_Metasound::ENoiseType,0>::ToName(ENoiseType param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TEnumEntry<Metasound::ENoiseType> *pTVar4;
  TOptional<FName> TVar5;
  undefined4 in_register_0000000c;
  TOptional<FName>_u_0 TVar6;
  ENoiseType in_EDX;
  
  TVar6.TypedValue.Number = in_register_0000000c;
  TVar6.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = Pink;
      ::FName::FName(&::Entries[0].Name,L"ENoiseType::Pink");
      ::Entries[1].Value = White;
      ::FName::FName(&::Entries[1].Name,L"ENoiseType::White");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar4 = ::Entries;
  do {
    if (pTVar4->Value == in_EDX) {
      FVar1 = pTVar4->Name;
      *(FName *)TVar6 = FVar1;
      if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar5.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
          return (TOptional<FName>)TVar5.field0_0x0;
        }
      }
      return (TOptional<FName>)TVar6.TypedValue;
    }
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != (TEnumEntry<Metasound::ENoiseType> *)&::_TSS0);
  *(undefined4 *)TVar6 = 0xffffffff;
  *(uint *)((longlong)TVar6 + 4) = 0;
  return (TOptional<FName>)TVar6;
}

// ToName @ 14b1ab6e0

TOptional<FName> __cdecl
Metasound::TEnum<enum_Metasound::ESawGenerationType,0>::ToName(ESawGenerationType param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TEnumEntry<Metasound::ESawGenerationType> *pTVar4;
  TOptional<FName> TVar5;
  undefined4 in_register_0000000c;
  TOptional<FName>_u_0 TVar6;
  ESawGenerationType in_EDX;
  
  TVar6.TypedValue.Number = in_register_0000000c;
  TVar6.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESawGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESawGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar4 = ::Entries;
  do {
    if (pTVar4->Value == in_EDX) {
      FVar1 = pTVar4->Name;
      *(FName *)TVar6 = FVar1;
      if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar5.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
          return (TOptional<FName>)TVar5.field0_0x0;
        }
      }
      return (TOptional<FName>)TVar6.TypedValue;
    }
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != (TEnumEntry<Metasound::ESawGenerationType> *)&::_TSS0);
  *(undefined4 *)TVar6 = 0xffffffff;
  *(uint *)((longlong)TVar6 + 4) = 0;
  return (TOptional<FName>)TVar6;
}

// ToName @ 14b1ab800

TOptional<FName> __cdecl
Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>::ToName(ESquareGenerationType param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TEnumEntry<Metasound::ESquareGenerationType> *pTVar4;
  TOptional<FName> TVar5;
  undefined4 in_register_0000000c;
  TOptional<FName>_u_0 TVar6;
  ESquareGenerationType in_EDX;
  
  TVar6.TypedValue.Number = in_register_0000000c;
  TVar6.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ESquareGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESquareGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar4 = ::Entries;
  do {
    if (pTVar4->Value == in_EDX) {
      FVar1 = pTVar4->Name;
      *(FName *)TVar6 = FVar1;
      if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar5.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
          return (TOptional<FName>)TVar5.field0_0x0;
        }
      }
      return (TOptional<FName>)TVar6.TypedValue;
    }
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != (TEnumEntry<Metasound::ESquareGenerationType> *)&::_TSS0);
  *(undefined4 *)TVar6 = 0xffffffff;
  *(uint *)((longlong)TVar6 + 4) = 0;
  return (TOptional<FName>)TVar6;
}

// ToName @ 14b1ab920

TOptional<FName> __cdecl
Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>::ToName(ETriangleGenerationType param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TEnumEntry<Metasound::ETriangleGenerationType> *pTVar4;
  TOptional<FName> TVar5;
  undefined4 in_register_0000000c;
  TOptional<FName>_u_0 TVar6;
  ETriangleGenerationType in_EDX;
  
  TVar6.TypedValue.Number = in_register_0000000c;
  TVar6.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = PolySmooth;
      ::FName::FName(&::Entries[0].Name,L"ETriangleGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ETriangleGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar4 = ::Entries;
  do {
    if (pTVar4->Value == in_EDX) {
      FVar1 = pTVar4->Name;
      *(FName *)TVar6 = FVar1;
      if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar5.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
          return (TOptional<FName>)TVar5.field0_0x0;
        }
      }
      return (TOptional<FName>)TVar6.TypedValue;
    }
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != (TEnumEntry<Metasound::ETriangleGenerationType> *)&::_TSS0);
  *(undefined4 *)TVar6 = 0xffffffff;
  *(uint *)((longlong)TVar6 + 4) = 0;
  return (TOptional<FName>)TVar6;
}

// TEnum<enum_Metasound::EPanningLaw,0> @ 14b1c9fc0

/* WARNING: Removing unreachable block (ram,0x00014b1ca166) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EPanningLaw,0> * __thiscall
Metasound::TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>
          (void *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  TEnumEntry<Metasound::EPanningLaw> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  TEnum<Metasound::EPanningLaw,0> *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Entries[0].Value = EqualPower;
    ::FName::FName(&::Entries[0].Name,L"EPanningLaw::EqualPower");
    ::Entries[1].Value = Linear;
    ::FName::FName(&::Entries[1].Name,L"EPanningLaw::Linear");
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = ::Entries;
  do {
    if (pTVar7->Name == param_1) {
      *(EPanningLaw *)this = pTVar7->Value;
      return this;
    }
    pTVar7 = pTVar7 + 1;
  } while (pTVar7 != (TEnumEntry<Metasound::EPanningLaw> *)&::_TSS0);
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar8 = GetAllNames(&local_58);
    this_00 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TEnum<Metasound::EPanningLaw,0> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6 + 1);
      pFVar11 = local_88.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar10 = (ulonglong)(int)local_80;
      bVar5 = true;
      pFVar11 = local_88.Data + uVar10 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar12.Data = local_88.Data;
      while( true ) {
        if ((int)uVar10 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar12.Data == pFVar11) break;
        if (bVar5) {
          bVar5 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar6 = *(int *)(FVar12.Data + 8) + -1;
        if (*(int *)(FVar12.Data + 8) == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar12.Data,iVar6);
        uVar10 = local_80 & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      ::FName::ToString(&local_res10,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::EPanningLaw,0>::TEnum<Metasound::EPanningLaw,0>(FName)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
      return this;
    }
  }
  return this;
}

// TEnum<enum_Metasound::EPanningLaw,0> @ 14b1ca330

/* WARNING: Removing unreachable block (ram,0x00014b1ca4af) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EPanningLaw,0> * __thiscall
Metasound::TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>
          (void *this,EPanningLaw param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  TEnum<Metasound::EPanningLaw,0> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *this_00;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  ToName((EPanningLaw)local_res20);
  if (local_res20[0] != -1) {
    *(EPanningLaw *)this = param_1;
    return this;
  }
  if (bHasWarnedNameToEnumConversionFailure == false) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    pTVar6 = GetAllNames(&local_48);
    this_00 = (FName *)(pTVar6->AllocatorInstance).Data;
    iVar2 = pTVar6->ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar1) break;
      ::FName::ToString(this_00,&local_78);
      if (((local_88.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TEnum<Metasound::EPanningLaw,0> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      pFVar9 = local_88.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      this_00 = this_00 + 1;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      iVar2 = (int)local_80;
      uVar8 = (ulonglong)(int)local_80;
      bVar4 = true;
      pFVar9 = local_88.Data + uVar8 * 0x10;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar10.Data = local_88.Data;
      while( true ) {
        if ((int)uVar8 != iVar2) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar10.Data == pFVar9) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_68,L"\n, ",3);
        }
        iVar5 = *(int *)(FVar10.Data + 8) + -1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(&local_68,*(wchar_t **)FVar10.Data,iVar5);
        uVar8 = local_80 & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_58,param_1);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_Metasound::TEnum<Metasound::EPanningLaw,0>::TEnum<Metasound::EPanningLaw,0>(Metasound::EPanningLaw)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bHasWarnedNameToEnumConversionFailure = true;
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return this;
}

// TEnum<enum_Metasound::EStereoDelayMode,0> @ 14b1ca610

/* WARNING: Removing unreachable block (ram,0x00014b1ca797) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EStereoDelayMode,0> * __thiscall
Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
          (void *this,FName param_1)

{
  TEnumEntry<Metasound::EStereoDelayMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EStereoDelayMode,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::EStereoDelayMode>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EStereoDelayMode *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::EStereoDelayMode,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::EStereoDelayMode,0>::TEnum<Metasound::EStereoDelayMode,0>(FName)___ptr64'
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

// TEnum<enum_Metasound::EStereoDelayMode,0> @ 14b1ca900

/* WARNING: Removing unreachable block (ram,0x00014b1caa85) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EStereoDelayMode,0> * __thiscall
Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
          (void *this,EStereoDelayMode param_1)

{
  TEnumEntry<Metasound::EStereoDelayMode> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EStereoDelayMode,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Metasound::EStereoDelayMode>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b1ca952:
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
            pTVar8 = (TEnum<Metasound::EStereoDelayMode,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::EStereoDelayMode,0>::TEnum<Metasound::EStereoDelayMode,0>(Metasound::EStereoDelayMode)___ptr64'
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
        *(EStereoDelayMode *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::EStereoDelayMode,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b1ca952;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// GetAllNames @ 14b1e1230

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::EPanningLaw,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  TEnumEntry<Metasound::EPanningLaw> *pTVar5;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = EqualPower;
      ::FName::FName(&::Entries[0].Name,L"EPanningLaw::EqualPower");
      ::Entries[1].Value = Linear;
      ::FName::FName(&::Entries[1].Name,L"EPanningLaw::Linear");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = ::Entries;
  do {
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar1 = &pTVar5->Name;
    pTVar5 = pTVar5 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = *pFVar1;
  } while (pTVar5 != (TEnumEntry<Metasound::EPanningLaw> *)&::_TSS0);
  return __return_storage_ptr__;
}

// GetAllNames @ 14b1e1340

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::EStereoDelayMode> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::EStereoDelayMode>::GetAllEntries(&local_18);
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

// ToName @ 14b1eb880

TOptional<FName> __cdecl
Metasound::TEnum<enum_Metasound::EPanningLaw,0>::ToName(EPanningLaw param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TEnumEntry<Metasound::EPanningLaw> *pTVar4;
  TOptional<FName> TVar5;
  undefined4 in_register_0000000c;
  TOptional<FName>_u_0 TVar6;
  EPanningLaw in_EDX;
  
  TVar6.TypedValue.Number = in_register_0000000c;
  TVar6.TypedValue.ComparisonIndex.Value = (FNameEntryId)(FNameEntryId)param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Entries[0].Value = EqualPower;
      ::FName::FName(&::Entries[0].Name,L"EPanningLaw::EqualPower");
      ::Entries[1].Value = Linear;
      ::FName::FName(&::Entries[1].Name,L"EPanningLaw::Linear");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar4 = ::Entries;
  do {
    if (pTVar4->Value == in_EDX) {
      FVar1 = pTVar4->Name;
      *(FName *)TVar6 = FVar1;
      if (FVar1.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar5.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
          return (TOptional<FName>)TVar5.field0_0x0;
        }
      }
      return (TOptional<FName>)TVar6.TypedValue;
    }
    pTVar4 = pTVar4 + 1;
  } while (pTVar4 != (TEnumEntry<Metasound::EPanningLaw> *)&::_TSS0);
  *(undefined4 *)TVar6 = 0xffffffff;
  *(uint *)((longlong)TVar6 + 4) = 0;
  return (TOptional<FName>)TVar6;
}

// TEnum<enum_Metasound::EBufferTriggerType,0> @ 14b22b850

/* WARNING: Removing unreachable block (ram,0x00014b22b9d7) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EBufferTriggerType,0> * __thiscall
Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
          (void *this,FName param_1)

{
  TEnumEntry<Metasound::EBufferTriggerType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EBufferTriggerType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::EBufferTriggerType>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EBufferTriggerType *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::EBufferTriggerType,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::EBufferTriggerType,0>::TEnum<Metasound::EBufferTriggerType,0>(FName)___ptr64'
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

// TEnum<enum_Metasound::EBufferTriggerType,0> @ 14b22bb40

/* WARNING: Removing unreachable block (ram,0x00014b22bcc5) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::EBufferTriggerType,0> * __thiscall
Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>::TEnum<enum_Metasound::EBufferTriggerType,0>
          (void *this,EBufferTriggerType param_1)

{
  TEnumEntry<Metasound::EBufferTriggerType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::EBufferTriggerType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Metasound::EBufferTriggerType>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b22bb92:
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
            pTVar8 = (TEnum<Metasound::EBufferTriggerType,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::EBufferTriggerType,0>::TEnum<Metasound::EBufferTriggerType,0>(Metasound::EBufferTriggerType)___ptr64'
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
        *(EBufferTriggerType *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::EBufferTriggerType,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b22bb92;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_Metasound::ETriggerComparisonType,0> @ 14b22be60

/* WARNING: Removing unreachable block (ram,0x00014b22bfe7) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ETriggerComparisonType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>::
TEnum<enum_Metasound::ETriggerComparisonType,0>(void *this,FName param_1)

{
  TEnumEntry<Metasound::ETriggerComparisonType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ETriggerComparisonType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 0;
  local_res10 = param_1;
  TEnumStringHelper<enum_Metasound::ETriggerComparisonType>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(ETriggerComparisonType *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Metasound::ETriggerComparisonType,0> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Metasound::ETriggerComparisonType,0>::TEnum<Metasound::ETriggerComparisonType,0>(FName)___ptr64'
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

// TEnum<enum_Metasound::ETriggerComparisonType,0> @ 14b22c150

/* WARNING: Removing unreachable block (ram,0x00014b22c2d5) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Metasound::ETriggerComparisonType,0> * __thiscall
Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>::
TEnum<enum_Metasound::ETriggerComparisonType,0>(void *this,ETriggerComparisonType param_1)

{
  TEnumEntry<Metasound::ETriggerComparisonType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Metasound::ETriggerComparisonType,0> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 0;
  TEnumStringHelper<enum_Metasound::ETriggerComparisonType>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b22c1a2:
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
            pTVar8 = (TEnum<Metasound::ETriggerComparisonType,0> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Metasound::ETriggerComparisonType,0>::TEnum<Metasound::ETriggerComparisonType,0>(Metasound::ETriggerComparisonType)___ptr64'
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
        *(ETriggerComparisonType *)this = param_1;
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
        pTVar8 = (TEnum<Metasound::ETriggerComparisonType,0> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b22c1a2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// TEnum<enum_Audio::EWaveShaperType,1> @ 14b22c470

/* WARNING: Removing unreachable block (ram,0x00014b22c601) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EWaveShaperType,1> * __thiscall
Metasound::TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>
          (void *this,FName param_1)

{
  TEnumEntry<Audio::EWaveShaperType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EWaveShaperType,1> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  *(undefined4 *)this = 1;
  local_res10 = param_1;
  TEnumStringHelper<enum_Audio::EWaveShaperType>::GetAllEntries(&local_68);
  pTVar1 = local_68.DataPtr + local_68.ArrayNum;
  for (; local_68.DataPtr != pTVar1; local_68.DataPtr = local_68.DataPtr + 1) {
    if ((local_68.DataPtr)->Name == param_1) {
      *(EWaveShaperType *)this = (local_68.DataPtr)->Value;
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
        pTVar8 = (TEnum<Audio::EWaveShaperType,1> *)(*pcVar4)();
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
                (&`public:___cdecl_Metasound::TEnum<Audio::EWaveShaperType,1>::TEnum<Audio::EWaveShaperType,1>(FName)___ptr64'
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

// TEnum<enum_Audio::EWaveShaperType,1> @ 14b22c770

/* WARNING: Removing unreachable block (ram,0x00014b22c900) */
/* WARNING: Enum "Type": Some values do not have unique names */

TEnum<Audio::EWaveShaperType,1> * __thiscall
Metasound::TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>
          (void *this,EWaveShaperType param_1)

{
  TEnumEntry<Audio::EWaveShaperType> *pTVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TEnum<Audio::EWaveShaperType,1> *pTVar8;
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
  TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  *(undefined4 *)this = 1;
  TEnumStringHelper<enum_Audio::EWaveShaperType>::GetAllEntries(&local_58);
  pTVar1 = local_58.DataPtr + local_58.ArrayNum;
  do {
    if (local_58.DataPtr == pTVar1) {
LAB_14b22c7c2:
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
            pTVar8 = (TEnum<Audio::EWaveShaperType,1> *)(*pcVar4)();
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
                    (&`public:___cdecl_Metasound::TEnum<Audio::EWaveShaperType,1>::TEnum<Audio::EWaveShaperType,1>(Audio::EWaveShaperType)___ptr64'
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
        *(EWaveShaperType *)this = param_1;
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
        pTVar8 = (TEnum<Audio::EWaveShaperType,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_14b22c7c2;
    }
    local_58.DataPtr = local_58.DataPtr + 1;
  } while( true );
}

// GetAllNames @ 14b277710

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::EBufferTriggerType> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::EBufferTriggerType>::GetAllEntries(&local_18);
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

// GetAllNames @ 14b2777b0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Metasound::ETriggerComparisonType> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Metasound::ETriggerComparisonType>::GetAllEntries(&local_18);
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

// GetAllNames @ 14b277850

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TEnum<enum_Audio::EWaveShaperType,1>::GetAllNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TEnumEntry<Audio::EWaveShaperType> *pTVar2;
  TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TEnumStringHelper<enum_Audio::EWaveShaperType>::GetAllEntries(&local_18);
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

