// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~ITextFormatArgumentModifier @ 1417398e0

void __thiscall
ITextFormatArgumentModifier::~ITextFormatArgumentModifier(ITextFormatArgumentModifier *this)

{
  *this = (ITextFormatArgumentModifier)&___7ITextFormatArgumentModifier__6B_;
  return;
}

// ParseKeyValueArgs @ 14176e400

bool __cdecl
ITextFormatArgumentModifier::ParseKeyValueArgs
          (FTextFormatString *param_1,
          TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
          *param_2,wchar_t param_3,wchar_t param_4)

{
  FScriptContainerElement *pFVar1;
  wchar_t _C;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int local_res8 [2];
  TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  *local_res10;
  FString local_88;
  FTextFormatString local_78;
  FTextFormatString local_58;
  
  pFVar5 = (FScriptContainerElement *)param_1->StringPtr;
  pFVar1 = pFVar5 + (longlong)param_1->StringLen * 2;
  local_res10 = param_2;
  if (pFVar5 < pFVar1) {
    do {
      iVar4 = iswspace(*(wchar_t *)pFVar5);
      param_2 = local_res10;
      if (iVar4 == 0) goto joined_r0x00014176e476;
      pFVar5 = pFVar5 + 2;
    } while (pFVar5 < pFVar1);
  }
  else {
joined_r0x00014176e476:
    local_res10 = param_2;
    if (pFVar5 < pFVar1) {
      while ((pFVar6 = pFVar5, pFVar5 < pFVar1 && (iVar4 = iswspace(*(wchar_t *)pFVar5), iVar4 != 0)
             )) {
        pFVar5 = pFVar5 + 2;
      }
      for (; pFVar6 < pFVar1; pFVar6 = pFVar6 + 2) {
        _C = *(wchar_t *)pFVar6;
        iVar4 = iswalnum(_C);
        if (((iVar4 == 0) && (_C != L'_')) || (*(wchar_t *)pFVar6 == param_3)) break;
      }
      local_58.StringLen = (int)((longlong)pFVar6 - (longlong)pFVar5 >> 1);
      local_58.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.InternalString.Data.ArrayNum = 0;
      local_58.InternalString.Data.ArrayMax = 0;
      local_58.StringPtr = (wchar_t *)pFVar5;
      if (local_58.StringLen == 0) goto LAB_14176e6b9;
      if (pFVar6 < pFVar1) {
        do {
          iVar4 = iswspace(*(wchar_t *)pFVar6);
          if (iVar4 == 0) break;
          pFVar6 = pFVar6 + 2;
        } while (pFVar6 < pFVar1);
        if (pFVar6 < pFVar1) {
          if (*(wchar_t *)pFVar6 != param_3) goto LAB_14176e6b9;
          do {
            pFVar6 = pFVar6 + 2;
            if (pFVar1 <= pFVar6) break;
            iVar4 = iswspace(*(wchar_t *)pFVar6);
          } while (iVar4 != 0);
        }
      }
      pFVar5 = pFVar6;
      if (*(wchar_t *)pFVar6 == L'\"') {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_res8[0] = 0;
        bVar3 = FParse::QuotedString((wchar_t *)pFVar6,&local_88,local_res8);
        FVar2.Data = local_88.Data.AllocatorInstance.Data;
        if (!bVar3) {
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          goto joined_r0x00014176e5f9;
        }
        bVar3 = local_88.Data.ArrayNum == 0;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.InternalString.Data.AllocatorInstance.Data = FVar2.Data;
        pFVar5 = pFVar6 + (longlong)local_res8[0] * 2;
        local_78.StringLen = local_88.Data.ArrayNum + -1;
        if (bVar3) {
          local_78.StringLen = 0;
        }
        local_78.InternalString.Data.ArrayNum = local_88.Data.ArrayNum;
        local_78.InternalString.Data.ArrayMax = local_88.Data.ArrayMax;
        local_78.StringPtr = L"";
        if (!bVar3) {
          local_78.StringPtr = (wchar_t *)FVar2.Data;
        }
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
      }
      else {
joined_r0x00014176e5f9:
        for (; (pFVar5 < pFVar1 && (*(wchar_t *)pFVar5 != param_4)); pFVar5 = pFVar5 + 2) {
        }
        local_78.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.InternalString.Data.ArrayNum = 0;
        local_78.InternalString.Data.ArrayMax = 0;
        local_78.StringLen = (int)((longlong)pFVar5 - (longlong)pFVar6 >> 1);
        local_78.StringPtr = (wchar_t *)pFVar6;
      }
      if (local_78.StringLen == 0) {
LAB_14176e6ac:
        if (local_78.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.InternalString.Data.AllocatorInstance.Data);
        }
LAB_14176e6b9:
        if (local_58.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.InternalString.Data.AllocatorInstance.Data);
        }
        return false;
      }
      do {
        pFVar6 = pFVar5;
        pFVar5 = pFVar6;
        if (pFVar1 <= pFVar6) goto LAB_14176e66d;
        pFVar5 = pFVar6 + 2;
        iVar4 = iswspace(*(wchar_t *)pFVar6);
      } while (iVar4 != 0);
      if (*(wchar_t *)pFVar6 != param_4) goto LAB_14176e6ac;
LAB_14176e66d:
      TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
      ::Emplace<FTextFormatString,FTextFormatString>(local_res10,&local_58,&local_78);
      if (local_78.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.InternalString.Data.AllocatorInstance.Data);
      }
      param_2 = local_res10;
      if (local_58.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.InternalString.Data.AllocatorInstance.Data);
        param_2 = local_res10;
      }
      goto joined_r0x00014176e476;
    }
  }
  return true;
}

// ParseValueArgs @ 14176e7f0

/* WARNING: Removing unreachable block (ram,0x00014176ea6d) */

bool __cdecl
ITextFormatArgumentModifier::ParseValueArgs
          (FTextFormatString *param_1,TArray<FTextFormatString,TSizedDefaultAllocator<32>_> *param_2
          ,wchar_t param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int local_res8 [2];
  FString local_58;
  FScriptContainerElement *local_48;
  int local_40;
  FScriptContainerElement *local_38;
  undefined8 uStack_30;
  
  pFVar9 = (FScriptContainerElement *)param_1->StringPtr;
  pFVar1 = pFVar9 + (longlong)param_1->StringLen * 2;
  if (pFVar9 < pFVar1) {
    do {
      iVar7 = iswspace(*(wchar_t *)pFVar9);
      if (iVar7 == 0) goto LAB_14176e86c;
      pFVar9 = pFVar9 + 2;
    } while (pFVar9 < pFVar1);
  }
  else {
LAB_14176e86c:
    if (pFVar9 < pFVar1) {
      do {
        while ((pFVar9 < pFVar1 && (iVar7 = iswspace(*(wchar_t *)pFVar9), iVar7 != 0))) {
          pFVar9 = pFVar9 + 2;
        }
        pFVar8 = pFVar9;
        if (*(wchar_t *)pFVar9 == L'\"') {
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          local_res8[0] = 0;
          bVar5 = FParse::QuotedString((wchar_t *)pFVar9,&local_58,local_res8);
          FVar4.Data = local_58.Data.AllocatorInstance.Data;
          if (!bVar5) {
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            goto joined_r0x00014176e917;
          }
          bVar5 = local_58.Data.ArrayNum == 0;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38 = FVar4.Data;
          pFVar8 = pFVar9 + (longlong)local_res8[0] * 2;
          local_40 = local_58.Data.ArrayNum + -1;
          if (bVar5) {
            local_40 = 0;
          }
          uStack_30._0_4_ = local_58.Data.ArrayNum;
          uStack_30._4_4_ = local_58.Data.ArrayMax;
          local_48 = (FScriptContainerElement *)L"";
          if (!bVar5) {
            local_48 = FVar4.Data;
          }
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
        }
        else {
joined_r0x00014176e917:
          for (; (pFVar8 < pFVar1 && (*(wchar_t *)pFVar8 != param_3)); pFVar8 = pFVar8 + 2) {
          }
          local_38 = (FScriptContainerElement *)0x0;
          uStack_30._0_4_ = 0;
          uStack_30._4_4_ = 0;
          local_40 = (int)((longlong)pFVar8 - (longlong)pFVar9 >> 1);
          local_48 = pFVar9;
        }
        if (local_40 == 0) {
LAB_14176ea84:
          if (local_38 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38);
          }
          return false;
        }
        do {
          pFVar3 = pFVar8;
          pFVar9 = pFVar3;
          if (pFVar1 <= pFVar3) goto LAB_14176e99e;
          pFVar9 = pFVar3 + 2;
          iVar7 = iswspace(*(wchar_t *)pFVar3);
          pFVar8 = pFVar9;
        } while (iVar7 != 0);
        if (*(wchar_t *)pFVar3 != param_3) goto LAB_14176ea84;
LAB_14176e99e:
        pFVar8 = (param_2->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar8 + (longlong)param_2->ArrayMax * 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
        *(FScriptContainerElement **)pFVar8 = local_48;
        *(int *)(pFVar8 + 8) = local_40;
        *(undefined8 *)(pFVar8 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar8 + 0x10) = local_38;
        local_38 = (FScriptContainerElement *)0x0;
        *(int *)(pFVar8 + 0x18) = (int)uStack_30;
        *(int *)(pFVar8 + 0x1c) = uStack_30._4_4_;
        uStack_30 = 0;
      } while (pFVar9 < pFVar1);
    }
  }
  return true;
}

