// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// HexDumpLines @ 14149ae80

/* WARNING: Removing unreachable block (ram,0x00014149b182) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FCompressionUtil::HexDumpLines
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uchar *param_1,
          long64 param_2,long64 param_3,long64 param_4,int param_5)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar2 = param_3;
  do {
    if (param_4 <= param_3) {
      return __return_storage_ptr__;
    }
    lVar6 = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    ::FString::Reserve(&local_88,0x80);
    lVar8 = lVar2;
    if (0 < param_5) {
      do {
        if (param_4 <= param_3) break;
        if ((param_3 < 0) || (param_2 <= param_3)) {
          ::FString::AppendChars(&local_88,L"-- ",3);
        }
        else {
          ::FString::PrintfImpl(&local_58,L"%02X ");
          iVar7 = local_58.Data.ArrayNum + -1;
          if (local_58.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          ::FString::AppendChars(&local_88,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if (((byte)lVar6 & 7) == 7) {
          ::FString::AppendChars(&local_88,L" ",1);
        }
        param_3 = param_3 + 1;
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar6 < param_5);
    }
    piVar9 = &__return_storage_ptr__->ArrayMax;
    if (lVar2 < 0) {
      ::FString::PrintfImpl(&local_68,L" -%014llX: %s");
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar9 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar4;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar9) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar9);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar5 = 0;
      *(FScriptContainerElement **)pFVar5 = local_68.Data.AllocatorInstance.Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar5 + 8) = local_68.Data.ArrayNum;
      *(int *)(pFVar5 + 0xc) = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
    }
    else {
      ::FString::PrintfImpl(&local_78,L"%016llX: %s");
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)*piVar9 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar4;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar9) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar9);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar5 = 0;
      *(FScriptContainerElement **)pFVar5 = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar5 + 8) = local_78.Data.ArrayNum;
      *(int *)(pFVar5 + 0xc) = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    lVar2 = lVar8;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  } while( true );
}

// LogHexDump @ 1414a33c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FCompressionUtil::LogHexDump
          (uchar *param_1,long64 param_2,long64 param_3,long64 param_4,int param_5)

{
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_28 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_20;
  
  if (3 < (byte)LogCore._0_1_) {
    HexDumpLines(&local_20,param_1,param_2,param_3,param_4,param_5);
    iVar1 = local_20.ArrayNum;
    pFVar3 = local_20.AllocatorInstance.Data + (longlong)local_20.ArrayNum * 0x10;
    FVar2.Data = local_20.AllocatorInstance.Data;
    while( true ) {
      if (local_20.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_28)
        ;
      }
      if (FVar2.Data == pFVar3) break;
      if (3 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      FVar2.Data = FVar2.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
  }
  return;
}

// SerializeCompressorName @ 1414b0510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FCompressionUtil::SerializeCompressorName(FArchive *param_1,FName *param_2)

{
  longlong *plVar1;
  FName FVar2;
  undefined7 uVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FName local_res18 [2];
  FString local_28;
  
  uVar3 = local_res8._1_7_;
  if ((param_1->field_0x28 & 1) == 0) {
    FVar2 = *param_2;
    local_res8 = (FName)((ulonglong)(uint7)local_res8._1_7_ << 8);
    if (FVar2 == (FName)0x0) {
      local_res8.ComparisonIndex.Value._0_1_ = 1;
      local_res8 = (FName)CONCAT71(uVar3,(char)local_res8.ComparisonIndex.Value);
    }
    else {
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      FVar6.Number = 0;
      FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar4.Value);
      if (FVar2 == FVar6) {
        local_res8.ComparisonIndex.Value._0_1_ = 2;
      }
      else {
        FVar2 = *param_2;
        FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
        FVar7.Number = 0;
        FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar4.Value);
        if (FVar2 == FVar7) {
          local_res8.ComparisonIndex.Value._0_1_ = 3;
        }
        else {
          FVar2 = *param_2;
          FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
          FVar8.Number = 0;
          FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_05,FVar4.Value);
          if (FVar2 == FVar8) {
            local_res8.ComparisonIndex.Value._0_1_ = 4;
          }
          else {
            FVar2 = *param_2;
            FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
            FVar9.Number = 0;
            FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_06,FVar4.Value);
            if (FVar2 == FVar9) {
              local_res8.ComparisonIndex.Value._0_1_ = 5;
            }
          }
        }
      }
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,1);
    }
    else {
      local_res8.ComparisonIndex.Value._0_1_ = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    if ((char)local_res8.ComparisonIndex.Value != '\0') {
      return;
    }
    ::FName::ToString(param_2,&local_28);
    ::operator<<(param_1,&local_28);
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,1);
    }
    else {
      local_res8.ComparisonIndex.Value._0_1_ = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    switch((ulonglong)local_res8 & 0xff) {
    case 0:
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_28);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar10.Data = local_28.Data.AllocatorInstance.Data;
      }
      pFVar5 = ::FName::FName(local_res18,(wchar_t *)FVar10.Data);
      *param_2 = *pFVar5;
      break;
    case 2:
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      local_res8.Number = 0;
      local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
      *param_2 = local_res8;
      return;
    case 3:
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      local_res8.Number = 0;
      local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
      *param_2 = local_res8;
      return;
    case 4:
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      local_res8.Number = 0;
      local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar4.Value);
      *param_2 = local_res8;
      return;
    case 5:
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      local_res8.Number = 0;
      local_res8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar4.Value);
      *param_2 = local_res8;
      return;
    default:
      if (1 < (byte)LogSerialization._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      }
    case 1:
      param_2->ComparisonIndex = 0;
      param_2->Number = 0;
      return;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

