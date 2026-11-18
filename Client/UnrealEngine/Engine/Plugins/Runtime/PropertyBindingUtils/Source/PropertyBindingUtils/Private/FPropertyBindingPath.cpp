// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 18

// StaticStruct @ 14d377f40

UScriptStruct * __cdecl FPropertyBindingPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingPath.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingPath,(UObject *)pUVar1,
                         L"PropertyBindingPath");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingPath.OuterSingleton;
}

// ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_> @ 14d37a980

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FPropertyBindingPath::ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>
          (FPropertyBindingPath *this,FPropertyBindingDataView *param_1,
          TArray<FPropertyBindingPathIndirection,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3,bool param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  FProperty *pFVar10;
  UScriptStruct *pUVar11;
  longlong lVar12;
  void *pvVar13;
  FString *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong *puVar17;
  FName *pFVar18;
  uint uVar19;
  int iVar20;
  uchar *puVar21;
  int iVar22;
  FProperty *pFVar23;
  FName *pFVar24;
  char cVar25;
  FString *local_res20;
  int local_218;
  FName local_210;
  UObject *local_208;
  undefined1 local_200;
  char local_1ff;
  TStringBuilderBase<wchar_t> local_1f8;
  TStringBuilderBase<wchar_t> local_1d8;
  TStringBuilderBase<wchar_t> local_1b8;
  FName *local_198;
  FString local_190;
  FString local_180;
  uint local_170;
  FName *local_168;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FConstStructView local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FPropertyBindingPath *local_b0;
  UObject **local_a8;
  FName *local_a0;
  FScriptContainerElement *local_98;
  FString **local_90;
  TArray<FPropertyBindingPathIndirection,TSizedDefaultAllocator<32>_> *local_88;
  FString local_80;
  void *local_70 [2];
  FString local_60;
  FString local_50;
  
  param_2->ArrayNum = 0;
  local_res20 = param_3;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (local_res20 != (FString *)0x0) {
    ::FString::Reset(local_res20,0);
  }
  local_170 = (this->Segments).ArrayNum;
  uVar15 = (ulonglong)(int)local_170;
  if (local_170 == 0) {
    return true;
  }
  local_208 = param_1->Memory;
  local_210 = (FName)param_1->Struct;
  pFVar18 = (FName *)(this->Segments).AllocatorInstance.Data;
  local_168 = pFVar18 + uVar15 * 4;
  local_218 = 0;
  while( true ) {
    pFVar24 = local_168;
    local_198 = pFVar18;
    if ((this->Segments).ArrayNum != (int)uVar15) {
      local_200 = 0;
      `TCheckedPointerIterator<FPropertyBindingPathSegment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_200);
    }
    if (pFVar18 == pFVar24) {
      return true;
    }
    if (local_210 == (FName)0x0) {
      iVar8 = 0;
      if (local_res20 != (FString *)0x0) {
        pFVar16 = (this->Segments).AllocatorInstance.Data;
        iVar9 = (this->Segments).ArrayNum;
        local_1b8.End = (wchar_t *)0x0;
        local_1b8.bIsDynamic = false;
        local_1b8.bIsExternal = false;
        local_1b8.Base = (wchar_t *)0x0;
        local_1b8.CurPos = (wchar_t *)0x0;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar22 = 0;
        if (iVar9 < 0) {
          iVar22 = iVar9;
        }
        pFVar18 = (FName *)(pFVar16 + (longlong)iVar22 * 0x20);
        iVar20 = 0;
        if (0 < iVar9 - iVar22) {
          iVar20 = iVar9 - iVar22;
        }
        if ((iVar20 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar24 = pFVar18 + (longlong)iVar20 * 4;
        for (; pFVar18 != pFVar24; pFVar18 = pFVar18 + 4) {
          if (0 < iVar8) {
            if (local_1b8.End < local_1b8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
            }
            *local_1b8.CurPos = L'.';
            local_1b8.CurPos = local_1b8.CurPos + 1;
          }
          if (iVar8 == local_218) {
            if (local_1b8.End < local_1b8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
            }
            pvVar13 = FGenericPlatformString::Memcpy(local_1b8.CurPos,L"<",2);
            local_1b8.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
          }
          local_138 = *pFVar18;
          ::FName::AppendString(&local_138,&local_1b8);
          if (-1 < (int)pFVar18[1].ComparisonIndex.Value) {
            if (local_1b8.End < local_1b8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
            }
            *local_1b8.CurPos = L'[';
            local_1b8.CurPos = local_1b8.CurPos + 1;
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_1b8,L"%d");
            if (local_1b8.End < local_1b8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
            }
            *local_1b8.CurPos = L']';
            local_1b8.CurPos = local_1b8.CurPos + 1;
          }
          if (iVar8 == local_218) {
            if (local_1b8.End < local_1b8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
            }
            pvVar13 = FGenericPlatformString::Memcpy(local_1b8.CurPos,L">",2);
            local_1b8.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
          }
          iVar8 = iVar8 + 1;
        }
        if (local_1b8.End < local_1b8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
        }
        *local_1b8.CurPos = L'\0';
        ::FString::FString(&local_100,local_1b8.Base);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b8);
        ::FString::PrintfImpl(&local_180,L"Malformed path \'%s\'.");
        pFVar14 = local_res20;
        if (local_res20 != &local_180) {
          pFVar16 = (local_res20->Data).AllocatorInstance.Data;
          if (pFVar16 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar16);
          }
          (pFVar14->Data).AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
          local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->Data).ArrayNum = local_180.Data.ArrayNum;
          (pFVar14->Data).ArrayMax = local_180.Data.ArrayMax;
          local_180.Data.ArrayNum = 0;
          local_180.Data.ArrayMax = 0;
        }
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      iVar8 = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      goto joined_r0x00014d37bb03;
    }
    pFVar10 = UStruct::FindPropertyByName((UStruct *)local_210,*pFVar18);
    cVar25 = local_208 != (UObject *)0x0;
    local_1ff = cVar25;
    if (pFVar10 == (FProperty *)0x0) {
      if (local_res20 != (FString *)0x0) {
        local_150 = *pFVar18;
        pFVar14 = ::FName::ToString(&local_150,&local_50);
        if ((pFVar14->Data).ArrayNum == 0) {
          local_198 = (FName *)0x15060d16c;
        }
        else {
          local_198 = (FName *)(pFVar14->Data).AllocatorInstance.Data;
        }
        local_148 = *(FName *)((longlong)local_210 + 0x18);
        ::FName::ToString(&local_148,&local_110);
        local_168 = (FName *)(**(code **)(*(longlong *)local_210 + 0x318))();
        iVar9 = 0;
        local_1d8.End = (wchar_t *)0x0;
        local_1d8.Base = (wchar_t *)0x0;
        local_1d8.CurPos = (wchar_t *)0x0;
        iVar8 = (this->Segments).ArrayNum;
        pFVar16 = (this->Segments).AllocatorInstance.Data;
        local_1d8.bIsDynamic = false;
        local_1d8.bIsExternal = false;
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar22 = 0;
        if (iVar8 < 0) {
          iVar22 = iVar8;
        }
        pFVar18 = (FName *)(pFVar16 + (longlong)iVar22 * 0x20);
        iVar20 = 0;
        if (0 < iVar8 - iVar22) {
          iVar20 = iVar8 - iVar22;
        }
        if ((iVar20 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar24 = pFVar18 + (longlong)iVar20 * 4;
        for (; pFVar18 != pFVar24; pFVar18 = pFVar18 + 4) {
          if (0 < iVar9) {
            if (local_1d8.End < local_1d8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
            }
            *local_1d8.CurPos = L'.';
            local_1d8.CurPos = local_1d8.CurPos + 1;
          }
          if (iVar9 == local_218) {
            if (local_1d8.End < local_1d8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
            }
            pvVar13 = FGenericPlatformString::Memcpy(local_1d8.CurPos,L"<",2);
            local_1d8.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
          }
          local_140 = *pFVar18;
          ::FName::AppendString(&local_140,&local_1d8);
          if (-1 < (int)pFVar18[1].ComparisonIndex.Value) {
            if (local_1d8.End < local_1d8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
            }
            *local_1d8.CurPos = L'[';
            local_1d8.CurPos = local_1d8.CurPos + 1;
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_1d8,L"%d");
            if (local_1d8.End < local_1d8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
            }
            *local_1d8.CurPos = L']';
            local_1d8.CurPos = local_1d8.CurPos + 1;
          }
          if (iVar9 == local_218) {
            if (local_1d8.End < local_1d8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
            }
            pvVar13 = FGenericPlatformString::Memcpy(local_1d8.CurPos,L">",2);
            local_1d8.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
          }
          iVar9 = iVar9 + 1;
        }
        if (local_1d8.End < local_1d8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
        }
        *local_1d8.CurPos = L'\0';
        ::FString::FString(&local_120,local_1d8.Base);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1d8);
        ::FString::PrintfImpl
                  (&local_190,L"Malformed path \'%s\', could not find property \'%s%s::%s\'.");
        pFVar14 = local_res20;
        if (local_res20 != &local_190) {
          pFVar16 = (local_res20->Data).AllocatorInstance.Data;
          if (pFVar16 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar16);
          }
          (pFVar14->Data).AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
          local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->Data).ArrayNum = local_190.Data.ArrayNum;
          (pFVar14->Data).ArrayMax = local_190.Data.ArrayMax;
          local_190.Data.ArrayNum = 0;
          local_190.Data.ArrayMax = 0;
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      iVar8 = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      goto joined_r0x00014d37bb03;
    }
    pFVar23 = (FProperty *)0x0;
    if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar23 = pFVar10;
    }
    if (((int)pFVar18[1].ComparisonIndex.Value < -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Segment->GetArrayIndex() >= INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingPath.cpp"
                           ,0x177,L"Segment Array Index is malformed."), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if ((pFVar23 != (FProperty *)0x0) && (pFVar18[1].ComparisonIndex.Value != 0xffffffff)) break;
    if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x14 & 1) == 0) {
LAB_14d37ac7f:
      uVar19 = pFVar18[1].ComparisonIndex.Value;
      if (pFVar10->ArrayDim <= (int)uVar19) {
        if (local_res20 != (FString *)0x0) {
          local_1f8.End = (wchar_t *)0x0;
          local_1f8.bIsDynamic = false;
          local_1f8.bIsExternal = false;
          local_1f8.Base = (wchar_t *)0x0;
          local_1f8.CurPos = (wchar_t *)0x0;
          iVar8 = (this->Segments).ArrayNum;
          pFVar16 = (this->Segments).AllocatorInstance.Data;
          if ((iVar8 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          iVar9 = 0;
          if (iVar8 < 0) {
            iVar9 = iVar8;
          }
          pFVar18 = (FName *)(pFVar16 + (longlong)iVar9 * 0x20);
          iVar22 = 0;
          if (0 < iVar8 - iVar9) {
            iVar22 = iVar8 - iVar9;
          }
          if ((iVar22 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          iVar8 = 0;
          pFVar24 = pFVar18 + (longlong)iVar22 * 4;
          for (; pFVar18 != pFVar24; pFVar18 = pFVar18 + 4) {
            if (0 < iVar8) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              *local_1f8.CurPos = L'.';
              local_1f8.CurPos = local_1f8.CurPos + 1;
            }
            if (iVar8 == local_218) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              pvVar13 = FGenericPlatformString::Memcpy(local_1f8.CurPos,L"<",2);
              local_1f8.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
            }
            local_158 = *pFVar18;
            ::FName::AppendString(&local_158,&local_1f8);
            if (-1 < (int)pFVar18[1].ComparisonIndex.Value) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              *local_1f8.CurPos = L'[';
              local_1f8.CurPos = local_1f8.CurPos + 1;
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_1f8,L"%d");
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              *local_1f8.CurPos = L']';
              local_1f8.CurPos = local_1f8.CurPos + 1;
            }
            if (iVar8 == local_218) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              pvVar13 = FGenericPlatformString::Memcpy(local_1f8.CurPos,L">",2);
              local_1f8.CurPos = (wchar_t *)((longlong)pvVar13 + 2);
            }
            iVar8 = iVar8 + 1;
          }
          if (local_1f8.End < local_1f8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
          }
          *local_1f8.CurPos = L'\0';
          ::FString::FString(&local_130,local_1f8.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1f8);
          ::FString::PrintfImpl
                    (&local_c0,L"Index %d out of range %d trying to access static array \'%s\'.");
          ::FString::operator=(local_res20,&local_c0);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        iVar8 = param_2->ArrayMax;
        param_2->ArrayNum = 0;
joined_r0x00014d37bb03:
        if (iVar8 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
        }
        return false;
      }
      if ((int)uVar19 < 0) {
        uVar19 = 0;
      }
      iVar8 = uVar19 * pFVar10->ElementSize + pFVar10->Offset_Internal;
    }
    else {
      pUVar11 = FInstancedStructContainer::StaticStruct();
      if ((UScriptStruct *)pFVar10[1]._padding_ == (UScriptStruct *)0x0) {
        bVar6 = pUVar11 == (UScriptStruct *)0x0;
      }
      else {
        bVar6 = (UScriptStruct *)pFVar10[1]._padding_ == pUVar11;
      }
      if (!bVar6) goto LAB_14d37ac7f;
      iVar8 = pFVar10->Offset_Internal;
    }
    uVar19 = pFVar18[1].ComparisonIndex.Value;
LAB_14d37ac9e:
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    pFVar16 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
    DefaultConstructItems<FPropertyBindingPathIndirection,int>(pFVar16,1);
    *(FProperty **)pFVar16 = pFVar10;
    *(UObject **)(pFVar16 + 8) = local_208;
    *(FName *)(pFVar16 + 0x10) = local_210;
    *(uint *)(pFVar16 + 0x20) = uVar19;
    *(int *)(pFVar16 + 0x24) = iVar8;
    *(int *)(pFVar16 + 0x28) = local_218;
    pFVar16[0x2c] = (FScriptContainerElement)0x0;
    if (local_218 != (this->Segments).ArrayNum + -1) {
      if (pFVar10 == (FProperty *)0x0) {
LAB_14d37b10c:
        if (local_res20 != (FString *)0x0) {
          ToString(this,&local_60,local_218,L"<",L">",false,0);
          (**(code **)(pFVar10->_padding_ + 0x68))(pFVar10,local_70,0,0);
          ::FString::PrintfImpl
                    (&local_d0,L"Unsupported property indirection type %s in path \'%s\'.");
          ::FString::operator=(local_res20,&local_d0);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_70[0] != (void *)0x0) {
            FMemory::Free(local_70[0]);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14d37b0e1;
      }
      uVar1 = *(uint *)(pFVar10->_padding_ + 0x18);
      if ((uVar1 >> 0x14 & 1) == 0) {
        if ((uVar1 >> 0x10 & 1) == 0) {
          if ((uVar1 >> 0x1b & 1) == 0) {
            if ((uVar1 >> 0x1d & 1) == 0) goto LAB_14d37b10c;
            if (cVar25 == '\0') {
              local_210 = (FName)pFVar10[1]._padding_;
            }
            else {
              local_208 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                    ((TPersistentObjectPtr<FSoftObjectPath> *)
                                     (&local_208->field_0x0 + iVar8));
              if (local_208 != (UObject *)0x0) {
                local_210.ComparisonIndex.Value = *(uint *)&local_208->field_0x10;
                local_210.Number = *(uint *)&local_208->field_0x14;
                *(FName *)(pFVar16 + 0x18) = local_210;
              }
            }
            pFVar16[0x2c] = (FScriptContainerElement)0x3;
          }
          else {
            if (cVar25 == '\0') {
              local_210 = (FName)pFVar10[1]._padding_;
            }
            else {
              local_208 = FWeakObjectPtr::Get((FWeakObjectPtr *)(&local_208->field_0x0 + iVar8));
              if (local_208 != (UObject *)0x0) {
                local_210.ComparisonIndex.Value = *(uint *)&local_208->field_0x10;
                local_210.Number = *(uint *)&local_208->field_0x14;
                *(FName *)(pFVar16 + 0x18) = local_210;
                pFVar16[0x2c] = (FScriptContainerElement)0x2;
                goto LAB_14d37b010;
              }
            }
            pFVar16[0x2c] = (FScriptContainerElement)0x2;
          }
        }
        else if (cVar25 == '\0') {
          local_210 = pFVar18[2];
          if (local_210 == (FName)0x0) goto LAB_14d37af75;
          *(FName *)(pFVar16 + 0x18) = local_210;
          pFVar16[0x2c] = (FScriptContainerElement)0x4;
        }
        else {
          local_208 = *(UObject **)(&local_208->field_0x0 + iVar8);
          if (local_208 == (UObject *)0x0) {
LAB_14d37af75:
            local_210 = (FName)pFVar10[1]._padding_;
            pFVar16[0x2c] = (FScriptContainerElement)0x1;
          }
          else {
            local_210.ComparisonIndex.Value = *(uint *)&local_208->field_0x10;
            local_210.Number = *(uint *)&local_208->field_0x14;
            *(FName *)(pFVar16 + 0x18) = local_210;
            pFVar16[0x2c] = (FScriptContainerElement)0x4;
          }
        }
      }
      else if (cVar25 == '\0') {
        local_210 = pFVar18[2];
        if (local_210 == (FName)0x0) {
LAB_14d37aeec:
          local_210 = (FName)pFVar10[1]._padding_;
          pFVar16[0x2c] = (FScriptContainerElement)0x0;
        }
        else {
          *(FName *)(pFVar16 + 0x18) = local_210;
          pFVar16[0x2c] = *(FScriptContainerElement *)&pFVar18[3].ComparisonIndex.Value;
        }
      }
      else {
        local_a8 = &local_208;
        local_a0 = &local_210;
        local_90 = &local_res20;
        local_b0 = this;
        local_98 = pFVar16;
        local_88 = param_2;
        pUVar11 = FInstancedStruct::StaticStruct();
        if ((UScriptStruct *)pFVar10[1]._padding_ == (UScriptStruct *)0x0) {
          bVar6 = pUVar11 == (UScriptStruct *)0x0;
        }
        else {
          bVar6 = (UScriptStruct *)pFVar10[1]._padding_ == pUVar11;
        }
        if (bVar6) {
          bVar6 = `FPropertyBindingPath::ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>'
                  ::__l67::<lambda_1>::operator()
                            (&local_b0,*(UScriptStruct **)(&local_208->field_0x0 + iVar8),
                             *(uchar **)((longlong)(&local_208->field_0x0 + iVar8) + 8),local_218,
                             (UStruct *)pFVar18[2]);
          if (!bVar6) {
            return false;
          }
          pFVar16[0x2c] = (FScriptContainerElement)0x5;
        }
        else {
          pUVar11 = FSharedStruct::StaticStruct();
          if ((UScriptStruct *)pFVar10[1]._padding_ == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = (UScriptStruct *)pFVar10[1]._padding_ == pUVar11;
          }
          if (bVar6) {
            plVar2 = *(longlong **)(&local_208->field_0x0 + iVar8);
            if (plVar2 == (longlong *)0x0) {
              puVar21 = (uchar *)0x0;
              pUVar11 = (UScriptStruct *)0x0;
            }
            else {
              pUVar11 = (UScriptStruct *)*plVar2;
              lVar12 = (longlong)*(short *)((longlong)&pUVar11->_padding_ + 4);
              puVar21 = (uchar *)((longlong)plVar2 + lVar12 + 7 & -lVar12);
            }
            bVar6 = `FPropertyBindingPath::
                    ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>'::__l67::<lambda_1>::
                    operator()(&local_b0,pUVar11,puVar21,local_218,(UStruct *)pFVar18[2]);
            if (!bVar6) {
              return false;
            }
            pFVar16[0x2c] = (FScriptContainerElement)0x7;
          }
          else {
            pUVar11 = FInstancedStructContainer::StaticStruct();
            if ((UScriptStruct *)pFVar10[1]._padding_ == (UScriptStruct *)0x0) {
              bVar6 = pUVar11 == (UScriptStruct *)0x0;
            }
            else {
              bVar6 = (UScriptStruct *)pFVar10[1]._padding_ == pUVar11;
            }
            if (!bVar6) {
              local_208 = (UObject *)(&local_208->field_0x0 + iVar8);
              goto LAB_14d37aeec;
            }
            puVar4 = &local_208->field_0x0;
            if ((((FInstancedStructContainer *)(puVar4 + iVar8))->NumItems <= (int)uVar19) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InstancedStructContainer.Num() > ArrayIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingPath.cpp"
                                   ,0x1f8,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            FInstancedStructContainer::operator[]
                      ((FInstancedStructContainer *)(puVar4 + iVar8),&local_f0,uVar19);
            bVar6 = `FPropertyBindingPath::
                    ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>'::__l67::<lambda_1>::
                    operator()(&local_b0,local_f0.ScriptStruct,local_f0.StructMemory,local_218,
                               (UStruct *)pFVar18[2]);
            if (!bVar6) {
              return false;
            }
            pFVar16[0x2c] = (FScriptContainerElement)0x8;
            *(uint *)(pFVar16 + 0x20) = uVar19;
          }
        }
      }
    }
LAB_14d37b010:
    pFVar18 = pFVar18 + 4;
    local_218 = local_218 + 1;
    uVar15 = (ulonglong)local_170;
  }
  iVar8 = param_2->ArrayNum;
  if (iVar8 == param_2->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar8 + 1;
  pFVar16 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x30;
  DefaultConstructItems<FPropertyBindingPathIndirection,int>(pFVar16,1);
  *(FProperty **)pFVar16 = pFVar10;
  uVar19 = 0xffffffff;
  *(UObject **)(pFVar16 + 8) = local_208;
  *(FName *)(pFVar16 + 0x10) = local_210;
  *(undefined8 *)(pFVar16 + 0x18) = 0;
  *(uint *)(pFVar16 + 0x20) = pFVar18[1].ComparisonIndex.Value;
  iVar8 = pFVar23->Offset_Internal;
  *(int *)(pFVar16 + 0x28) = local_218;
  *(int *)(pFVar16 + 0x24) = iVar8;
  pFVar16[0x2c] = (FScriptContainerElement)0x6;
  pFVar10 = (FProperty *)pFVar23[1]._padding_;
  iVar8 = 0;
  if (!(bool)cVar25) goto LAB_14d37ac9e;
  puVar17 = (ulonglong *)(&local_208->field_0x0 + pFVar23->Offset_Internal);
  lVar5 = pFVar23[1]._padding_;
  (**(code **)(pFVar10->_padding_ + 0x168))();
  lVar12 = pFVar23[1]._padding_;
  iVar9 = *(int *)(lVar12 + 0x34);
  if ((iVar9 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((lVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  uVar1 = local_198[1].ComparisonIndex.Value;
  if (-1 < (int)uVar1) {
    if ((int)uVar1 < (int)puVar17[1]) {
      pFVar18 = local_198;
      cVar25 = local_1ff;
      iVar8 = 0;
      if ((int)puVar17[1] == 0) {
        local_208 = (UObject *)0x0;
      }
      else {
        uVar15 = *puVar17;
        if (((lVar5 & 1) != 0) && ((uVar15 & 1) != 0)) {
          uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)puVar17;
        }
        local_208 = (UObject *)((longlong)(int)uVar1 * (longlong)iVar9 + uVar15);
      }
      goto LAB_14d37ac9e;
    }
  }
  if (local_res20 != (FString *)0x0) {
    ToString(this,&local_80,local_218,L"<",L">",false,0);
    ::FString::PrintfImpl
              (&local_e0,
               L"Index %d out of range (num elements %d) trying to access dynamic array \'%s\'.");
    ::FString::operator=(local_res20,&local_e0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
LAB_14d37b0e1:
  iVar8 = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  goto joined_r0x00014d37bb03;
}

// ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 14d37bb60

bool __thiscall
FPropertyBindingPath::
ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (FPropertyBindingPath *this,FPropertyBindingDataView *param_1,
          TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2,FString *param_3,bool param_4)

{
  uint uVar1;
  ForElementType<FPropertyBindingPathIndirection> FVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  EPropertyBindingPropertyAccessType EVar9;
  int iVar10;
  FProperty *pFVar11;
  FPropertyBindingPathIndirection *pFVar12;
  UScriptStruct *pUVar13;
  longlong lVar14;
  void *pvVar15;
  FString *pFVar16;
  ulonglong uVar17;
  ForElementType<FPropertyBindingPathIndirection> FVar18;
  undefined8 *puVar19;
  ulonglong *puVar20;
  FName *pFVar21;
  int iVar22;
  int iVar23;
  FInstancedStructContainer *this_00;
  uchar *puVar24;
  int iVar25;
  FProperty *pFVar26;
  FName *pFVar27;
  uint uVar28;
  char cVar29;
  FString *local_res20;
  int local_218;
  FName local_210;
  UObject *local_208;
  undefined1 local_200;
  char local_1ff;
  TStringBuilderBase<wchar_t> local_1f8;
  TStringBuilderBase<wchar_t> local_1d8;
  TStringBuilderBase<wchar_t> local_1b8;
  FName *local_198;
  FScriptContainerElement *local_190;
  FString local_188;
  FString local_178;
  FName *local_168;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FConstStructView local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FPropertyBindingPath *local_b0;
  UObject **local_a8;
  FName *local_a0;
  FPropertyBindingPathIndirection *local_98;
  FString **local_90;
  TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_88;
  FString local_80;
  void *local_70 [2];
  FString local_60;
  FString local_50;
  
  param_2->ArrayNum = 0;
  local_res20 = param_3;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
              (0x30,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (local_res20 != (FString *)0x0) {
    ::FString::Reset(local_res20,0);
  }
  iVar10 = (this->Segments).ArrayNum;
  uVar17 = (ulonglong)iVar10;
  local_190 = (FScriptContainerElement *)CONCAT44(local_190._4_4_,iVar10);
  if (iVar10 == 0) {
LAB_14d37cd08:
    bVar7 = true;
  }
  else {
    local_208 = param_1->Memory;
    local_210 = (FName)param_1->Struct;
    pFVar21 = (FName *)(this->Segments).AllocatorInstance.Data;
    local_168 = pFVar21 + uVar17 * 4;
    local_218 = 0;
    while( true ) {
      pFVar27 = local_168;
      local_198 = pFVar21;
      if ((this->Segments).ArrayNum != (int)uVar17) {
        local_200 = 0;
        `TCheckedPointerIterator<FPropertyBindingPathSegment_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_200);
      }
      if (pFVar21 == pFVar27) goto LAB_14d37cd08;
      if (local_210 == (FName)0x0) break;
      pFVar11 = UStruct::FindPropertyByName((UStruct *)local_210,*pFVar21);
      cVar29 = local_208 != (UObject *)0x0;
      local_1ff = cVar29;
      if (pFVar11 == (FProperty *)0x0) {
        if (local_res20 != (FString *)0x0) {
          local_150 = *pFVar21;
          pFVar16 = ::FName::ToString(&local_150,&local_50);
          if ((pFVar16->Data).ArrayNum == 0) {
            local_190 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_190 = (pFVar16->Data).AllocatorInstance.Data;
          }
          local_148 = *(FName *)((longlong)local_210 + 0x18);
          ::FName::ToString(&local_148,&local_110);
          local_168 = (FName *)(**(code **)(*(longlong *)local_210 + 0x318))();
          iVar23 = 0;
          local_1d8.End = (wchar_t *)0x0;
          local_1d8.Base = (wchar_t *)0x0;
          local_1d8.CurPos = (wchar_t *)0x0;
          iVar10 = (this->Segments).ArrayNum;
          pFVar4 = (this->Segments).AllocatorInstance.Data;
          local_1d8.bIsDynamic = false;
          local_1d8.bIsExternal = false;
          if ((iVar10 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar25 = 0;
          if (iVar10 < 0) {
            iVar25 = iVar10;
          }
          pFVar21 = (FName *)(pFVar4 + (longlong)iVar25 * 0x20);
          iVar22 = 0;
          if (0 < iVar10 - iVar25) {
            iVar22 = iVar10 - iVar25;
          }
          if ((iVar22 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar27 = pFVar21 + (longlong)iVar22 * 4;
          for (; pFVar21 != pFVar27; pFVar21 = pFVar21 + 4) {
            if (0 < iVar23) {
              if (local_1d8.End < local_1d8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
              }
              *local_1d8.CurPos = L'.';
              local_1d8.CurPos = local_1d8.CurPos + 1;
            }
            if (iVar23 == local_218) {
              if (local_1d8.End < local_1d8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
              }
              pvVar15 = FGenericPlatformString::Memcpy(local_1d8.CurPos,L"<",2);
              local_1d8.CurPos = (wchar_t *)((longlong)pvVar15 + 2);
            }
            local_140 = *pFVar21;
            ::FName::AppendString(&local_140,&local_1d8);
            if (-1 < (int)pFVar21[1].ComparisonIndex.Value) {
              if (local_1d8.End < local_1d8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
              }
              *local_1d8.CurPos = L'[';
              local_1d8.CurPos = local_1d8.CurPos + 1;
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_1d8,L"%d");
              if (local_1d8.End < local_1d8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
              }
              *local_1d8.CurPos = L']';
              local_1d8.CurPos = local_1d8.CurPos + 1;
            }
            if (iVar23 == local_218) {
              if (local_1d8.End < local_1d8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
              }
              pvVar15 = FGenericPlatformString::Memcpy(local_1d8.CurPos,L">",2);
              local_1d8.CurPos = (wchar_t *)((longlong)pvVar15 + 2);
            }
            iVar23 = iVar23 + 1;
          }
          if (local_1d8.End < local_1d8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
          }
          *local_1d8.CurPos = L'\0';
          ::FString::FString(&local_120,local_1d8.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1d8);
          ::FString::PrintfImpl
                    (&local_188,L"Malformed path \'%s\', could not find property \'%s%s::%s\'.");
          pFVar16 = local_res20;
          if (local_res20 != &local_188) {
            pFVar4 = (local_res20->Data).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (pFVar16->Data).AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
            local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar16->Data).ArrayNum = local_188.Data.ArrayNum;
            (pFVar16->Data).ArrayMax = local_188.Data.ArrayMax;
            local_188.Data.ArrayNum = 0;
            local_188.Data.ArrayMax = 0;
          }
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14d37cccc;
      }
      pFVar26 = (FProperty *)0x0;
      if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x15 & 1) != 0) {
        pFVar26 = pFVar11;
      }
      if (((int)pFVar21[1].ComparisonIndex.Value < -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Segment->GetArrayIndex() >= INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingPath.cpp"
                             ,0x177,L"Segment Array Index is malformed."), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if ((pFVar26 == (FProperty *)0x0) || (pFVar21[1].ComparisonIndex.Value == 0xffffffff)) {
        if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) != 0) {
          pUVar13 = FInstancedStructContainer::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar7 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar7 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar7) goto LAB_14d37be81;
          iVar10 = pFVar11->Offset_Internal;
LAB_14d37be9a:
          uVar28 = pFVar21[1].ComparisonIndex.Value;
          goto LAB_14d37be9e;
        }
LAB_14d37be81:
        uVar28 = pFVar21[1].ComparisonIndex.Value;
        if ((int)uVar28 < pFVar11->ArrayDim) {
          if ((int)uVar28 < 0) {
            uVar28 = 0;
          }
          iVar10 = uVar28 * pFVar11->ElementSize + pFVar11->Offset_Internal;
          goto LAB_14d37be9a;
        }
        if (local_res20 != (FString *)0x0) {
          local_1f8.End = (wchar_t *)0x0;
          local_1f8.bIsDynamic = false;
          local_1f8.bIsExternal = false;
          local_1f8.Base = (wchar_t *)0x0;
          local_1f8.CurPos = (wchar_t *)0x0;
          iVar10 = (this->Segments).ArrayNum;
          pFVar4 = (this->Segments).AllocatorInstance.Data;
          if ((iVar10 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar23 = 0;
          if (iVar10 < 0) {
            iVar23 = iVar10;
          }
          pFVar21 = (FName *)(pFVar4 + (longlong)iVar23 * 0x20);
          iVar25 = 0;
          if (0 < iVar10 - iVar23) {
            iVar25 = iVar10 - iVar23;
          }
          if ((iVar25 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar10 = 0;
          pFVar27 = pFVar21 + (longlong)iVar25 * 4;
          for (; pFVar21 != pFVar27; pFVar21 = pFVar21 + 4) {
            if (0 < iVar10) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              *local_1f8.CurPos = L'.';
              local_1f8.CurPos = local_1f8.CurPos + 1;
            }
            if (iVar10 == local_218) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              pvVar15 = FGenericPlatformString::Memcpy(local_1f8.CurPos,L"<",2);
              local_1f8.CurPos = (wchar_t *)((longlong)pvVar15 + 2);
            }
            local_158 = *pFVar21;
            ::FName::AppendString(&local_158,&local_1f8);
            if (-1 < (int)pFVar21[1].ComparisonIndex.Value) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              *local_1f8.CurPos = L'[';
              local_1f8.CurPos = local_1f8.CurPos + 1;
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_1f8,L"%d");
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              *local_1f8.CurPos = L']';
              local_1f8.CurPos = local_1f8.CurPos + 1;
            }
            if (iVar10 == local_218) {
              if (local_1f8.End < local_1f8.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
              }
              pvVar15 = FGenericPlatformString::Memcpy(local_1f8.CurPos,L">",2);
              local_1f8.CurPos = (wchar_t *)((longlong)pvVar15 + 2);
            }
            iVar10 = iVar10 + 1;
          }
          if (local_1f8.End < local_1f8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
          }
          *local_1f8.CurPos = L'\0';
          ::FString::FString(&local_130,local_1f8.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1f8);
          ::FString::PrintfImpl
                    (&local_c0,L"Index %d out of range %d trying to access static array \'%s\'.");
          ::FString::operator=(local_res20,&local_c0);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        iVar10 = param_2->ArrayMax;
        param_2->ArrayNum = 0;
        goto joined_r0x00014d37ccdc;
      }
      iVar10 = param_2->ArrayNum;
      if (iVar10 == param_2->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
                           (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar10 + 1;
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      FVar18 = (ForElementType<FPropertyBindingPathIndirection>)param_2;
      if (FVar2 != (ForElementType<FPropertyBindingPathIndirection>)0x0) {
        FVar18 = FVar2;
      }
      puVar19 = (undefined8 *)((longlong)iVar10 * 0x30 + (longlong)FVar18);
      DefaultConstructItems<FPropertyBindingPathIndirection,int>(puVar19,1);
      *puVar19 = pFVar11;
      puVar19[1] = local_208;
      *(FName *)(puVar19 + 2) = local_210;
      puVar19[3] = 0;
      *(uint *)(puVar19 + 4) = pFVar21[1].ComparisonIndex.Value;
      iVar10 = pFVar26->Offset_Internal;
      *(int *)(puVar19 + 5) = local_218;
      *(int *)((longlong)puVar19 + 0x24) = iVar10;
      *(undefined1 *)((longlong)puVar19 + 0x2c) = 6;
      pFVar11 = (FProperty *)pFVar26[1]._padding_;
      local_198 = (FName *)CONCAT44(local_198._4_4_,0xffffffff);
      uVar28 = 0xffffffff;
      iVar10 = 0;
      if ((bool)cVar29) {
        puVar20 = (ulonglong *)
                  ((longlong)&local_208->field_0x0 + (longlong)pFVar26->Offset_Internal);
        lVar6 = pFVar26[1]._padding_;
        (**(code **)(pFVar11->_padding_ + 0x168))(pFVar11);
        lVar14 = pFVar26[1]._padding_;
        iVar23 = *(int *)(lVar14 + 0x34);
        if ((iVar23 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if ((lVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar1 = pFVar21[1].ComparisonIndex.Value;
        if (((int)uVar1 < 0) || ((int)puVar20[1] <= (int)uVar1)) {
          if (local_res20 != (FString *)0x0) {
            ToString(this,&local_80,local_218,L"<",L">",false,0);
            ::FString::PrintfImpl
                      (&local_e0,
                       L"Index %d out of range (num elements %d) trying to access dynamic array \'%s\'."
                      );
            ::FString::operator=(local_res20,&local_e0);
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          iVar10 = param_2->ArrayMax;
          param_2->ArrayNum = 0;
          goto joined_r0x00014d37ccdc;
        }
        uVar28 = (uint)local_198;
        cVar29 = local_1ff;
        iVar10 = 0;
        if ((int)puVar20[1] == 0) {
          local_208 = (UObject *)0x0;
        }
        else {
          uVar17 = *puVar20;
          if (((lVar6 & 1) != 0) && ((uVar17 & 1) != 0)) {
            uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)puVar20;
          }
          local_208 = (UObject *)((longlong)(int)uVar1 * (longlong)iVar23 + uVar17);
        }
      }
LAB_14d37be9e:
      pFVar12 = TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                ::AddDefaulted_GetRef(param_2);
      pFVar12->Property = pFVar11;
      pFVar12->ContainerAddress = local_208;
      pFVar12->ContainerStruct = (UStruct *)local_210;
      pFVar12->ArrayIndex = uVar28;
      pFVar12->PropertyOffset = iVar10;
      pFVar12->PathSegmentIndex = local_218;
      pFVar12->AccessType = Offset;
      if (local_218 != (this->Segments).ArrayNum + -1) {
        if (pFVar11 == (FProperty *)0x0) {
LAB_14d37c2e7:
          if (local_res20 != (FString *)0x0) {
            ToString(this,&local_60,local_218,L"<",L">",false,0);
            (**(code **)(pFVar11->_padding_ + 0x68))(pFVar11,local_70,0,0);
            ::FString::PrintfImpl
                      (&local_d0,L"Unsupported property indirection type %s in path \'%s\'.");
            ::FString::operator=(local_res20,&local_d0);
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
            if (local_70[0] != (void *)0x0) {
              FMemory::Free(local_70[0]);
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          ::Reset(param_2,0);
          return false;
        }
        if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) == 0) {
          if (pFVar11 == (FProperty *)0x0) goto LAB_14d37c2e7;
          uVar28 = *(uint *)(pFVar11->_padding_ + 0x18);
          if ((uVar28 >> 0x10 & 1) == 0) {
            if ((uVar28 >> 0x1b & 1) == 0) {
              if ((uVar28 >> 0x1d & 1) == 0) goto LAB_14d37c2e7;
              if (cVar29 == '\0') {
                local_210 = (FName)pFVar11[1]._padding_;
              }
              else {
                local_208 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)
                                       ((longlong)&local_208->field_0x0 + (longlong)iVar10));
                if (local_208 != (UObject *)0x0) {
                  local_210.ComparisonIndex.Value = *(uint *)&local_208->field_0x10;
                  local_210.Number = *(uint *)&local_208->field_0x14;
                  pFVar12->InstanceStruct = (UStruct *)local_210;
                  pFVar12->AccessType = SoftObject;
                  goto LAB_14d37c1ee;
                }
              }
              pFVar12->AccessType = SoftObject;
            }
            else {
              if (cVar29 == '\0') {
                local_210 = (FName)pFVar11[1]._padding_;
              }
              else {
                local_208 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                                ((longlong)&local_208->field_0x0 + (longlong)iVar10)
                                               );
                if (local_208 != (UObject *)0x0) {
                  local_210.ComparisonIndex.Value = *(uint *)&local_208->field_0x10;
                  local_210.Number = *(uint *)&local_208->field_0x14;
                  pFVar12->InstanceStruct = (UStruct *)local_210;
                  pFVar12->AccessType = WeakObject;
                  goto LAB_14d37c1ee;
                }
              }
              pFVar12->AccessType = WeakObject;
            }
          }
          else {
            if (cVar29 == '\0') {
              local_210 = pFVar21[2];
              if (local_210 == (FName)0x0) goto LAB_14d37c1db;
              pFVar12->InstanceStruct = (UStruct *)local_210;
              EVar9 = ObjectInstance;
            }
            else {
              local_208 = *(UObject **)((longlong)&local_208->field_0x0 + (longlong)iVar10);
              if (local_208 == (UObject *)0x0) {
LAB_14d37c1db:
                local_210 = (FName)pFVar11[1]._padding_;
                EVar9 = Object;
              }
              else {
                local_210.ComparisonIndex.Value = *(uint *)&local_208->field_0x10;
                local_210.Number = *(uint *)&local_208->field_0x14;
                pFVar12->InstanceStruct = (UStruct *)local_210;
                EVar9 = ObjectInstance;
              }
            }
            pFVar12->AccessType = EVar9;
          }
        }
        else if (cVar29 == '\0') {
          local_210 = pFVar21[2];
          if (local_210 == (FName)0x0) {
LAB_14d37c0b9:
            local_210 = (FName)pFVar11[1]._padding_;
            pFVar12->AccessType = Offset;
          }
          else {
            pFVar12->InstanceStruct = (UStruct *)local_210;
            pFVar12->AccessType =
                 (EPropertyBindingPropertyAccessType)pFVar21[3].ComparisonIndex.Value;
          }
        }
        else {
          local_a8 = &local_208;
          local_a0 = &local_210;
          local_90 = &local_res20;
          local_b0 = this;
          local_98 = pFVar12;
          local_88 = param_2;
          pUVar13 = FInstancedStruct::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar7 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar7 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar7) {
            puVar19 = (undefined8 *)((longlong)&local_208->field_0x0 + (longlong)iVar10);
            bVar7 = `FPropertyBindingPath::
                    ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'
                    ::__l67::<lambda_1>::operator()
                              (&local_b0,(UScriptStruct *)*puVar19,(uchar *)puVar19[1],local_218,
                               (UStruct *)pFVar21[2]);
            if (!bVar7) goto LAB_14d37cd04;
            pFVar12->AccessType = StructInstance;
          }
          else {
            pUVar13 = FSharedStruct::StaticStruct();
            if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
              bVar7 = pUVar13 == (UScriptStruct *)0x0;
            }
            else {
              bVar7 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
            }
            if (bVar7) {
              plVar3 = *(longlong **)((longlong)&local_208->field_0x0 + (longlong)iVar10);
              if (plVar3 == (longlong *)0x0) {
                puVar24 = (uchar *)0x0;
                pUVar13 = (UScriptStruct *)0x0;
              }
              else {
                pUVar13 = (UScriptStruct *)*plVar3;
                lVar14 = (longlong)*(short *)((longlong)&pUVar13->_padding_ + 4);
                puVar24 = (uchar *)((longlong)plVar3 + lVar14 + 7 & -lVar14);
              }
              bVar7 = `FPropertyBindingPath::
                      ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'
                      ::__l67::<lambda_1>::operator()
                                (&local_b0,pUVar13,puVar24,local_218,(UStruct *)pFVar21[2]);
              if (!bVar7) goto LAB_14d37cd04;
              pFVar12->AccessType = SharedStruct;
            }
            else {
              pUVar13 = FInstancedStructContainer::StaticStruct();
              if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
                bVar7 = pUVar13 == (UScriptStruct *)0x0;
              }
              else {
                bVar7 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
              }
              if (!bVar7) {
                local_208 = (UObject *)((longlong)&local_208->field_0x0 + (longlong)iVar10);
                goto LAB_14d37c0b9;
              }
              this_00 = (FInstancedStructContainer *)
                        ((longlong)&local_208->field_0x0 + (longlong)iVar10);
              if ((this_00->NumItems <= (int)uVar28) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InstancedStructContainer.Num() > ArrayIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingPath.cpp"
                                     ,0x1f8,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              FInstancedStructContainer::operator[](this_00,&local_f0,uVar28);
              bVar7 = `FPropertyBindingPath::
                      ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'
                      ::__l67::<lambda_1>::operator()
                                (&local_b0,local_f0.ScriptStruct,local_f0.StructMemory,local_218,
                                 (UStruct *)pFVar21[2]);
              if (!bVar7) goto LAB_14d37cd04;
              pFVar12->AccessType = StructInstanceContainer;
              pFVar12->ArrayIndex = uVar28;
            }
          }
        }
      }
LAB_14d37c1ee:
      pFVar21 = pFVar21 + 4;
      local_218 = local_218 + 1;
      uVar17 = (ulonglong)local_190 & 0xffffffff;
    }
    if (local_res20 != (FString *)0x0) {
      pFVar4 = (this->Segments).AllocatorInstance.Data;
      iVar10 = (this->Segments).ArrayNum;
      iVar23 = 0;
      local_1b8.End = (wchar_t *)0x0;
      local_1b8.bIsDynamic = false;
      local_1b8.bIsExternal = false;
      local_1b8.Base = (wchar_t *)0x0;
      local_1b8.CurPos = (wchar_t *)0x0;
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar25 = 0;
      if (iVar10 < 0) {
        iVar25 = iVar10;
      }
      pFVar21 = (FName *)(pFVar4 + (longlong)iVar25 * 0x20);
      iVar22 = 0;
      if (0 < iVar10 - iVar25) {
        iVar22 = iVar10 - iVar25;
      }
      if ((iVar22 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar27 = pFVar21 + (longlong)iVar22 * 4;
      for (; pFVar21 != pFVar27; pFVar21 = pFVar21 + 4) {
        if (0 < iVar23) {
          if (local_1b8.End < local_1b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
          }
          *local_1b8.CurPos = L'.';
          local_1b8.CurPos = local_1b8.CurPos + 1;
        }
        if (iVar23 == local_218) {
          if (local_1b8.End < local_1b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
          }
          pvVar15 = FGenericPlatformString::Memcpy(local_1b8.CurPos,L"<",2);
          local_1b8.CurPos = (wchar_t *)((longlong)pvVar15 + 2);
        }
        local_138 = *pFVar21;
        ::FName::AppendString(&local_138,&local_1b8);
        if (-1 < (int)pFVar21[1].ComparisonIndex.Value) {
          if (local_1b8.End < local_1b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
          }
          *local_1b8.CurPos = L'[';
          local_1b8.CurPos = local_1b8.CurPos + 1;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_1b8,L"%d");
          if (local_1b8.End < local_1b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
          }
          *local_1b8.CurPos = L']';
          local_1b8.CurPos = local_1b8.CurPos + 1;
        }
        if (iVar23 == local_218) {
          if (local_1b8.End < local_1b8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
          }
          pvVar15 = FGenericPlatformString::Memcpy(local_1b8.CurPos,L">",2);
          local_1b8.CurPos = (wchar_t *)((longlong)pvVar15 + 2);
        }
        iVar23 = iVar23 + 1;
      }
      if (local_1b8.End < local_1b8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
      }
      *local_1b8.CurPos = L'\0';
      ::FString::FString(&local_100,local_1b8.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b8);
      ::FString::PrintfImpl(&local_178,L"Malformed path \'%s\'.");
      pFVar16 = local_res20;
      if (local_res20 != &local_178) {
        pFVar4 = (local_res20->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar16->Data).AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = local_178.Data.ArrayNum;
        (pFVar16->Data).ArrayMax = local_178.Data.ArrayMax;
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
LAB_14d37cccc:
    iVar10 = param_2->ArrayMax;
    param_2->ArrayNum = 0;
joined_r0x00014d37ccdc:
    if (iVar10 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
                (0x30,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
LAB_14d37cd04:
    bVar7 = false;
  }
  return bVar7;
}

// operator= @ 14d37cfe0

FPropertyBindingPath * __thiscall
FPropertyBindingPath::operator=(FPropertyBindingPath *this,FPropertyBindingPath *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FPropertyBindingPathSegment *pFVar4;
  
  if (this != param_1) {
    iVar2 = (this->Segments).ArrayMax;
    piVar1 = &(this->Segments).ArrayMax;
    pFVar4 = (FPropertyBindingPathSegment *)(param_1->Segments).AllocatorInstance.Data;
    iVar3 = (param_1->Segments).ArrayNum;
    (this->Segments).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FPropertyBindingPathSegment,FPropertyBindingPathSegment,int>
              ((this->Segments).AllocatorInstance.Data,pFVar4,iVar3);
  }
  return this;
}

// operator== @ 14d37d070

bool __thiscall
FPropertyBindingPath::operator==(FPropertyBindingPath *this,FPropertyBindingPath *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Segments).ArrayNum;
  if (iVar1 == (param_1->Segments).ArrayNum) {
    pFVar7 = (this->Segments).AllocatorInstance.Data;
    uVar8 = 0;
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->Segments).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPropertyBindingPathSegment_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar9) {
        return true;
      }
      uVar5 = 0;
      if ((int)uVar8 < (param_1->Segments).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar6 = (param_1->Segments).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
      if (((*(longlong *)pFVar7 != *(longlong *)pFVar6) ||
          (*(longlong *)(pFVar7 + 0x10) != *(longlong *)(pFVar6 + 0x10))) ||
         (*(int *)(pFVar7 + 8) != *(int *)(pFVar6 + 8))) break;
      pFVar7 = pFVar7 + 0x20;
      uVar8 = uVar8 + 1;
    }
  }
  return false;
}

// operator() @ 14d37d2d0

bool __thiscall
`FPropertyBindingPath::FromString'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  FPropertyBindingPath *this_00;
  ForAnyElementType *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  longlong lVar11;
  int iVar12;
  FName local_res10;
  TStringView<wchar_t> local_28;
  
  iVar9 = param_1->Size;
  if (iVar9 == 0) {
LAB_14d37d417:
    bVar6 = false;
  }
  else {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar7 = UE::String::FindFirstChar(&local_28,L'[',CaseSensitive);
    if (iVar7 != -1) {
      local_28.DataPtr = param_1->DataPtr;
      local_28.Size = param_1->Size;
      local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar8 = UE::String::FindLastChar(&local_28,L']',CaseSensitive);
      if (iVar8 != -1) {
        if ((0 < iVar7) && (0 < (iVar8 - iVar7) + -1)) {
          pwVar2 = param_1->DataPtr;
          iVar8 = iVar9;
          if (iVar7 < iVar9) {
            iVar8 = iVar7;
          }
          iVar12 = 0;
          if (0 < iVar8) {
            iVar12 = iVar8;
          }
          iVar7 = iVar7 + 1;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          if (iVar9 < iVar7) {
            iVar7 = iVar9;
          }
          iVar9 = _wtoi(pwVar2 + iVar7);
          if (-1 < iVar9) {
            this_00 = *(FPropertyBindingPath **)this;
            pFVar10 = ::FName::FName(&local_res10,iVar12,pwVar2,FNAME_Add);
            FPropertyBindingPath::AddPathSegment
                      (this_00,*pFVar10,iVar9,(UStruct *)0x0,StructInstance);
            return true;
          }
        }
        goto LAB_14d37d417;
      }
    }
    pFVar3 = *(ForAnyElementType **)this;
    pFVar10 = ::FName::FName(&local_res10,(int)*(undefined8 *)&param_1->Size,param_1->DataPtr,
                             FNAME_Add);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    FVar4 = *pFVar10;
    iVar9 = *(int *)&pFVar3[1].Data;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar9 + 1;
    pFVar5 = pFVar3->Data;
    lVar11 = (longlong)iVar9 * 0x20;
    *(FName *)(pFVar5 + lVar11) = FVar4;
    *(undefined8 *)(pFVar5 + lVar11 + 0x10) = 0;
    pFVar5[lVar11 + 0x18] = (FScriptContainerElement)0x5;
    *(undefined4 *)(pFVar5 + lVar11 + 8) = 0xffffffff;
    bVar6 = true;
  }
  return bVar6;
}

// operator() @ 14d37e170

bool __thiscall
`FPropertyBindingPath::ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>'::__l67::<lambda_1>
::operator()(void *this,UScriptStruct *param_1,uchar *param_2,int param_3,UStruct *param_4)

{
  int iVar1;
  longlong lVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FName *pFVar14;
  FName local_res10;
  FString local_78;
  FString local_68;
  TStringBuilderBase<wchar_t> local_58;
  
  if ((param_1 != (UScriptStruct *)0x0) && (param_2 != (uchar *)0x0)) {
    **(undefined8 **)((longlong)this + 8) = param_2;
    **(undefined8 **)((longlong)this + 0x10) = param_1;
    *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x18) =
         **(undefined8 **)((longlong)this + 0x10);
    *(undefined4 *)(*(longlong *)((longlong)this + 0x18) + 0x20) = 0xffffffff;
    return true;
  }
  iVar11 = 0;
  if (**(longlong **)((longlong)this + 0x20) != 0) {
    iVar1 = (int)(*(longlong **)this)[1];
    lVar2 = **(longlong **)this;
    local_58.End = (wchar_t *)0x0;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    local_58.Base = (wchar_t *)0x0;
    local_58.CurPos = (wchar_t *)0x0;
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar9 = 0;
    if (iVar1 < 0) {
      iVar9 = iVar1;
    }
    pFVar14 = (FName *)(lVar2 + (longlong)iVar9 * 0x20);
    iVar12 = 0;
    if (0 < iVar1 - iVar9) {
      iVar12 = iVar1 - iVar9;
    }
    if ((iVar12 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar13 = pFVar14 + (longlong)iVar12 * 4;
    for (; pFVar14 != pFVar13; pFVar14 = pFVar14 + 4) {
      if (0 < iVar11) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        *local_58.CurPos = L'.';
        local_58.CurPos = local_58.CurPos + 1;
      }
      if (iVar11 == param_3) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_58.CurPos,L"<",2);
        local_58.CurPos = (wchar_t *)((longlong)pvVar10 + 2);
      }
      local_res10 = *pFVar14;
      ::FName::AppendString(&local_res10,&local_58);
      if (-1 < (int)pFVar14[1].ComparisonIndex.Value) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        *local_58.CurPos = L'[';
        local_58.CurPos = local_58.CurPos + 1;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_58,L"%d");
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        *local_58.CurPos = L']';
        local_58.CurPos = local_58.CurPos + 1;
      }
      if (iVar11 == param_3) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_58.CurPos,L">",2);
        local_58.CurPos = (wchar_t *)((longlong)pvVar10 + 2);
      }
      iVar11 = iVar11 + 1;
    }
    if (local_58.End < local_58.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,1);
    }
    *local_58.CurPos = L'\0';
    ::FString::FString(&local_68,local_58.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
    ::FString::PrintfImpl(&local_78,L"Expecting valid instanced struct value at path \'%s\'.");
    pFVar3 = (FString *)**(longlong **)((longlong)this + 0x20);
    if (pFVar3 != &local_78) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = local_78.Data.ArrayNum;
      (pFVar3->Data).ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = *(ForAnyElementType **)((longlong)this + 0x28);
  iVar11 = *(int *)((longlong)&pFVar5[1].Data + 4);
  *(undefined4 *)&pFVar5[1].Data = 0;
  if (iVar11 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,pFVar5,0,(int *)((longlong)&pFVar5[1].Data + 4));
  }
  return false;
}

// operator() @ 14d37e510

bool __thiscall
`FPropertyBindingPath::
ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l67::
<lambda_1>::operator()
          (void *this,UScriptStruct *param_1,uchar *param_2,int param_3,UStruct *param_4)

{
  int iVar1;
  longlong lVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FPropertyBindingPathIndirection> *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FName *pFVar14;
  FName local_res10;
  FString local_78;
  FString local_68;
  TStringBuilderBase<wchar_t> local_58;
  
  if ((param_1 != (UScriptStruct *)0x0) && (param_2 != (uchar *)0x0)) {
    **(undefined8 **)((longlong)this + 8) = param_2;
    **(undefined8 **)((longlong)this + 0x10) = param_1;
    *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x18) =
         **(undefined8 **)((longlong)this + 0x10);
    *(undefined4 *)(*(longlong *)((longlong)this + 0x18) + 0x20) = 0xffffffff;
    return true;
  }
  iVar11 = 0;
  if (**(longlong **)((longlong)this + 0x20) != 0) {
    iVar1 = (int)(*(longlong **)this)[1];
    lVar2 = **(longlong **)this;
    local_58.End = (wchar_t *)0x0;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    local_58.Base = (wchar_t *)0x0;
    local_58.CurPos = (wchar_t *)0x0;
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar9 = 0;
    if (iVar1 < 0) {
      iVar9 = iVar1;
    }
    pFVar14 = (FName *)(lVar2 + (longlong)iVar9 * 0x20);
    iVar12 = 0;
    if (0 < iVar1 - iVar9) {
      iVar12 = iVar1 - iVar9;
    }
    if ((iVar12 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar13 = pFVar14 + (longlong)iVar12 * 4;
    for (; pFVar14 != pFVar13; pFVar14 = pFVar14 + 4) {
      if (0 < iVar11) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        *local_58.CurPos = L'.';
        local_58.CurPos = local_58.CurPos + 1;
      }
      if (iVar11 == param_3) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_58.CurPos,L"<",2);
        local_58.CurPos = (wchar_t *)((longlong)pvVar10 + 2);
      }
      local_res10 = *pFVar14;
      ::FName::AppendString(&local_res10,&local_58);
      if (-1 < (int)pFVar14[1].ComparisonIndex.Value) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        *local_58.CurPos = L'[';
        local_58.CurPos = local_58.CurPos + 1;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_58,L"%d");
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        *local_58.CurPos = L']';
        local_58.CurPos = local_58.CurPos + 1;
      }
      if (iVar11 == param_3) {
        if (local_58.End < local_58.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,1);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_58.CurPos,L">",2);
        local_58.CurPos = (wchar_t *)((longlong)pvVar10 + 2);
      }
      iVar11 = iVar11 + 1;
    }
    if (local_58.End < local_58.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,1);
    }
    *local_58.CurPos = L'\0';
    ::FString::FString(&local_68,local_58.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
    ::FString::PrintfImpl(&local_78,L"Expecting valid instanced struct value at path \'%s\'.");
    pFVar3 = (FString *)**(longlong **)((longlong)this + 0x20);
    if (pFVar3 != &local_78) {
      pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = local_78.Data.ArrayNum;
      (pFVar3->Data).ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = *(ForElementType<FPropertyBindingPathIndirection> **)((longlong)this + 0x28);
  iVar11 = *(int *)(pFVar5[1].InlineData + 4);
  pFVar5[1].InlineData[0] = '\0';
  pFVar5[1].InlineData[1] = '\0';
  pFVar5[1].InlineData[2] = '\0';
  pFVar5[1].InlineData[3] = '\0';
  if (iVar11 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
              (0x30,8,0,pFVar5,0,(int *)(pFVar5[1].InlineData + 4));
  }
  return false;
}

// AddPathSegment @ 14d37ee80

void __thiscall
FPropertyBindingPath::AddPathSegment
          (FPropertyBindingPath *this,FName param_1,int param_2,UStruct *param_3,
          EPropertyBindingPropertyAccessType param_4)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  
  iVar2 = (this->Segments).ArrayNum;
  piVar1 = &(this->Segments).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Segments).ArrayNum = iVar2 + 1;
  pFVar3 = (FName *)((this->Segments).AllocatorInstance.Data + (longlong)iVar2 * 0x20);
  *pFVar3 = param_1;
  pFVar3[2] = (FName)param_3;
  pFVar3[1].ComparisonIndex.Value = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  *(EPropertyBindingPropertyAccessType *)&pFVar3[3].ComparisonIndex.Value = param_4;
  return;
}

// FromString @ 14d37fe60

bool __thiscall
FPropertyBindingPath::FromString(FPropertyBindingPath *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  longlong lVar15;
  int iVar16;
  FPropertyBindingPath *local_res10;
  FName local_res18;
  FName local_res20;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68 [2];
  
  piVar1 = &(this->Segments).ArrayMax;
  (this->Segments).ArrayNum = 0;
  if ((this->Segments).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (param_1->Size == 0) {
    return true;
  }
  pwVar7 = param_1->DataPtr;
  pwVar6 = param_1->DataPtr;
  local_88.DataPtr = param_1->DataPtr;
  iVar13 = param_1->Size;
  uVar4 = *(undefined4 *)&param_1->field_0xc;
  local_88.Size = param_1->Size;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res10 = this;
  iVar9 = UE::String::FindFirstChar(&local_88,L'.',CaseSensitive);
  do {
    if (iVar9 == -1) {
      local_68[0].DataPtr = pwVar7;
      local_68[0].Size = iVar13;
      local_68[0]._12_4_ = uVar4;
      bVar8 = `FPropertyBindingPath::FromString'::__l2::<lambda_1>::operator()
                        (&local_res10,local_68);
      if (!bVar8) {
LAB_14d380108:
        (this->Segments).ArrayNum = 0;
        if (*piVar1 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
        }
      }
      return bVar8;
    }
    iVar12 = 0;
    if (iVar13 < 0) {
      iVar12 = iVar13;
    }
    iVar10 = iVar13 - iVar12;
    if (iVar9 < iVar13 - iVar12) {
      iVar10 = iVar9;
    }
    pwVar7 = pwVar6 + iVar12;
    iVar12 = 0;
    if (0 < iVar10) {
      iVar12 = iVar10;
    }
    local_78 = pwVar7;
    iStack_70 = iVar12;
    if (iVar12 == 0) {
LAB_14d38016a:
      bVar8 = false;
      goto LAB_14d380108;
    }
    uVar5._4_4_ = uStack_6c;
    uVar5._0_4_ = iVar12;
    local_88.DataPtr = pwVar7;
    local_88._8_8_ = uVar5;
    iVar10 = UE::String::FindFirstChar(&local_88,L'[',CaseSensitive);
    if ((iVar10 != -1) &&
       (local_88.DataPtr = pwVar7, local_88._8_8_ = uVar5,
       iVar11 = UE::String::FindLastChar(&local_88,L']',CaseSensitive), iVar11 != -1)) {
      if ((0 < iVar10) && (0 < (iVar11 - iVar10) + -1)) {
        iVar11 = iVar12;
        if (iVar10 < iVar12) {
          iVar11 = iVar10;
        }
        iVar16 = 0;
        if (0 < iVar11) {
          iVar16 = iVar11;
        }
        iVar10 = iVar10 + 1;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        if (iVar12 < iVar10) {
          iVar10 = iVar12;
        }
        iVar12 = _wtoi(pwVar7 + iVar10);
        if (-1 < iVar12) {
          pFVar14 = ::FName::FName(&local_res18,iVar16,pwVar7,FNAME_Add);
          AddPathSegment(this,*pFVar14,iVar12,(UStruct *)0x0,StructInstance);
          goto LAB_14d38007b;
        }
      }
      goto LAB_14d38016a;
    }
    pFVar14 = ::FName::FName(&local_res20,iVar12,pwVar7,FNAME_Add);
    FVar2 = *pFVar14;
    iVar12 = (this->Segments).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)this,piVar1);
    }
    (this->Segments).ArrayNum = iVar12 + 1;
    pFVar3 = (this->Segments).AllocatorInstance.Data;
    lVar15 = (longlong)iVar12 * 0x20;
    *(FName *)(pFVar3 + lVar15) = FVar2;
    *(undefined8 *)(pFVar3 + lVar15 + 0x10) = 0;
    pFVar3[lVar15 + 0x18] = (FScriptContainerElement)0x5;
    *(undefined4 *)(pFVar3 + lVar15 + 8) = 0xffffffff;
LAB_14d38007b:
    uVar4 = local_68[0]._12_4_;
    iVar12 = iVar9 + 1;
    iVar10 = 0x7fffffff;
    if (iVar12 < 0) {
      iVar12 = 0;
      iVar10 = iVar9 + -0x80000000;
    }
    if (iVar13 < iVar12) {
      iVar12 = iVar13;
    }
    iVar9 = iVar13 - iVar12;
    if (iVar10 < iVar13 - iVar12) {
      iVar9 = iVar10;
    }
    pwVar6 = pwVar6 + iVar12;
    iVar13 = 0;
    if (0 < iVar9) {
      iVar13 = iVar9;
    }
    local_88._12_4_ = local_68[0]._12_4_;
    local_88.Size = iVar13;
    local_88.DataPtr = pwVar6;
    local_68[0].DataPtr = pwVar6;
    local_68[0].Size = iVar13;
    iVar9 = UE::String::FindFirstChar(&local_88,L'.',CaseSensitive);
    pwVar7 = pwVar6;
  } while( true );
}

// Includes @ 14d380dc0

bool __thiscall
FPropertyBindingPath::Includes(FPropertyBindingPath *this,FPropertyBindingPath *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Segments).ArrayNum;
  if (iVar1 <= (this->Segments).ArrayNum) {
    pFVar7 = (param_1->Segments).AllocatorInstance.Data;
    uVar8 = 0;
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((param_1->Segments).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPropertyBindingPathSegment_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar9) {
        return true;
      }
      uVar5 = 0;
      if ((int)uVar8 < (this->Segments).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar6 = (this->Segments).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
      if (((*(longlong *)pFVar7 != *(longlong *)pFVar6) ||
          (*(longlong *)(pFVar7 + 0x10) != *(longlong *)(pFVar6 + 0x10))) ||
         (*(int *)(pFVar7 + 8) != *(int *)(pFVar6 + 8))) break;
      pFVar7 = pFVar7 + 0x20;
      uVar8 = uVar8 + 1;
    }
    if (((uVar8 == (param_1->Segments).ArrayNum - 1U) && (*(int *)(pFVar6 + 8) != -1)) &&
       ((*(longlong *)pFVar6 == *(longlong *)pFVar7 && (*(int *)(pFVar7 + 8) == -1)))) {
      return true;
    }
  }
  return false;
}

// ResolveIndirections @ 14d382af0

bool __thiscall
FPropertyBindingPath::ResolveIndirections
          (FPropertyBindingPath *this,UStruct *param_1,
          TArray<FPropertyBindingPathIndirection,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3,bool param_4)

{
  bool bVar1;
  FPropertyBindingDataView local_18;
  
  local_18.Memory = (void *)0x0;
  local_18.Struct = param_1;
  bVar1 = ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>
                    (this,&local_18,param_2,param_3,param_4);
  return bVar1;
}

// ResolveIndirections @ 14d382b20

bool __thiscall
FPropertyBindingPath::ResolveIndirections
          (FPropertyBindingPath *this,UStruct *param_1,
          TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2,FString *param_3,bool param_4)

{
  bool bVar1;
  FPropertyBindingDataView local_18;
  
  local_18.Memory = (void *)0x0;
  local_18.Struct = param_1;
  bVar1 = ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                    (this,&local_18,param_2,param_3,param_4);
  return bVar1;
}

// ResolveIndirectionsWithValue @ 14d382b50

bool __thiscall
FPropertyBindingPath::ResolveIndirectionsWithValue
          (FPropertyBindingPath *this,FPropertyBindingDataView *param_1,
          TArray<FPropertyBindingPathIndirection,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3,bool param_4)

{
  bool bVar1;
  FPropertyBindingDataView local_18;
  
  local_18.Struct = param_1->Struct;
  local_18.Memory = param_1->Memory;
  bVar1 = ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>
                    (this,&local_18,param_2,param_3,param_4);
  return bVar1;
}

// ResolveIndirectionsWithValue @ 14d382b80

bool __thiscall
FPropertyBindingPath::ResolveIndirectionsWithValue
          (FPropertyBindingPath *this,FPropertyBindingDataView *param_1,
          TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2,FString *param_3,bool param_4)

{
  bool bVar1;
  FPropertyBindingDataView local_18;
  
  local_18.Struct = param_1->Struct;
  local_18.Memory = param_1->Memory;
  bVar1 = ResolveIndirectionsWithValue<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                    (this,&local_18,param_2,param_3,param_4);
  return bVar1;
}

// ToString @ 14d3845a0

FString * __thiscall
FPropertyBindingPath::ToString
          (FPropertyBindingPath *this,FString *__return_storage_ptr__,int param_1,wchar_t *param_2,
          wchar_t *param_3,bool param_4,int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  size_t sVar8;
  void *pvVar9;
  ulong64 uVar10;
  wchar_t *pwVar11;
  FName *pFVar12;
  int iVar13;
  FName *pFVar14;
  int iVar15;
  int iVar16;
  FName local_res8;
  FString *local_res10;
  int local_res18;
  wchar_t *local_res20;
  FName local_78;
  TStringBuilderBase<wchar_t> local_70;
  
  iVar1 = (this->Segments).ArrayNum;
  iVar16 = 0;
  pFVar2 = (this->Segments).AllocatorInstance.Data;
  local_70.End = (wchar_t *)0x0;
  local_70.bIsDynamic = false;
  local_70.bIsExternal = false;
  local_70.Base = (wchar_t *)0x0;
  local_70.CurPos = (wchar_t *)0x0;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  local_res20 = param_2;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  iVar15 = 0;
  iVar13 = iVar15;
  if (0 < param_5) {
    iVar13 = param_5;
  }
  iVar6 = iVar15;
  if (iVar13 < 0) {
    iVar6 = iVar13;
  }
  iVar4 = iVar13 - iVar6;
  if (iVar1 < iVar13 - iVar6) {
    iVar4 = iVar1;
  }
  iVar13 = iVar1 - iVar4;
  if (iVar6 + 0x7fffffff < iVar1 - iVar4) {
    iVar13 = iVar6 + 0x7fffffff;
  }
  pFVar12 = (FName *)(pFVar2 + (longlong)iVar4 * 0x20);
  if (0 < iVar13) {
    iVar15 = iVar13;
  }
  if ((iVar15 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  pFVar14 = pFVar12 + (longlong)iVar15 * 4;
  pwVar11 = local_70.CurPos;
  for (; pFVar12 != pFVar14; pFVar12 = pFVar12 + 4) {
    if (0 < iVar16) {
      if (local_70.End < pwVar11 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
        pwVar11 = local_70.CurPos;
      }
      *pwVar11 = L'.';
      pwVar11 = local_70.CurPos + 1;
      local_70.CurPos = pwVar11;
    }
    if ((iVar16 == local_res18) && (param_2 != (wchar_t *)0x0)) {
      sVar8 = wcslen(param_2);
      uVar10 = (ulong64)(int)sVar8;
      if (local_70.End < pwVar11 + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,uVar10);
        pwVar11 = local_70.CurPos;
      }
      if ((int)sVar8 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy(pwVar11,local_res20,uVar10 * 2);
        pwVar11 = (wchar_t *)((longlong)pvVar9 + uVar10 * 2);
        local_70.CurPos = pwVar11;
      }
    }
    iVar1 = local_res18;
    if ((param_4) && (pFVar12[2] != (FName)0x0)) {
      if (local_70.End < pwVar11 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
        pwVar11 = local_70.CurPos;
      }
      *pwVar11 = L'(';
      local_70.CurPos = local_70.CurPos + 1;
      local_res8 = *(FName *)((longlong)pFVar12[2] + 0x18);
      ::FName::AppendString(&local_res8,&local_70);
      if (local_70.End < local_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
      }
      *local_70.CurPos = L')';
      local_70.CurPos = local_70.CurPos + 1;
    }
    local_78 = *pFVar12;
    ::FName::AppendString(&local_78,&local_70);
    if (-1 < (int)pFVar12[1].ComparisonIndex.Value) {
      if (local_70.End < local_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
      }
      *local_70.CurPos = L'[';
      local_70.CurPos = local_70.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_70,L"%d");
      if (local_70.End < local_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
      }
      *local_70.CurPos = L']';
      local_70.CurPos = local_70.CurPos + 1;
    }
    pwVar11 = local_70.CurPos;
    if ((iVar16 == iVar1) && (param_3 != (wchar_t *)0x0)) {
      sVar8 = wcslen(param_3);
      uVar10 = (ulong64)(int)sVar8;
      if (local_70.End < pwVar11 + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,uVar10);
        pwVar11 = local_70.CurPos;
      }
      if ((int)sVar8 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy(pwVar11,param_3,uVar10 * 2);
        pwVar11 = (wchar_t *)((longlong)pvVar9 + uVar10 * 2);
        local_70.CurPos = pwVar11;
      }
    }
    iVar16 = iVar16 + 1;
    __return_storage_ptr__ = local_res10;
    param_2 = local_res20;
  }
  if (local_70.End < pwVar11 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_70,1);
    pwVar11 = local_70.CurPos;
  }
  *pwVar11 = L'\0';
  ::FString::FString(__return_storage_ptr__,local_70.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_70);
  return __return_storage_ptr__;
}

// UpdateSegments @ 14d3848e0

bool __thiscall
FPropertyBindingPath::UpdateSegments(FPropertyBindingPath *this,UStruct *param_1,FString *param_2)

{
  bool bVar1;
  FPropertyBindingDataView local_18;
  
  local_18.Memory = (void *)0x0;
  local_18.Struct = param_1;
  bVar1 = UpdateSegmentsFromValue(this,&local_18,param_2);
  return bVar1;
}

// UpdateSegmentsFromValue @ 14d384910

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPropertyBindingPath::UpdateSegmentsFromValue
          (FPropertyBindingPath *this,FPropertyBindingDataView *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FName *pFVar10;
  FName FVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  int iVar15;
  FName *pFVar16;
  FName *pFVar17;
  undefined1 local_res10 [8];
  TStringBuilderBase<wchar_t> local_148;
  TStringBuilderBase<wchar_t> local_128;
  TArray<FPropertyBindingPathIndirection,TSizedDefaultAllocator<32>_> local_108;
  FString local_f0;
  FName local_e0;
  FName local_d8;
  FName local_d0 [3];
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FPropertyBindingDataView local_68;
  FString local_58;
  FString local_48;
  
  local_68.Struct = param_1->Struct;
  local_68.Memory = param_1->Memory;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  bVar5 = ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>
                    (this,&local_68,&local_108,param_2,true);
  uVar4 = local_108._8_8_;
  if (bVar5) {
    uVar8 = (ulonglong)local_108.ArrayNum;
    pFVar17 = (FName *)(local_108.AllocatorInstance.Data + 0x18);
    local_a0 = (FName *)(local_108.AllocatorInstance.Data + uVar8 * 0x30);
    uVar9 = uVar8;
    while( true ) {
      pFVar16 = local_a0;
      iVar15 = 0;
      if ((int)uVar8 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPropertyBindingPathIndirection,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar17 + -3 == pFVar16) break;
      uVar1 = pFVar17[2].ComparisonIndex.Value;
      uVar7 = 0;
      if ((int)uVar1 < (this->Segments).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (this->Segments).AllocatorInstance.Data;
      FVar11 = *pFVar17;
      pFVar16 = (FName *)(pFVar2 + (longlong)(int)uVar1 * 0x20);
      if (FVar11 == (FName)0x0) {
        if ((5 < (byte)LogPropertyBindingUtils._0_1_) && (pFVar16[2] != (FName)0x0)) {
          uVar1 = (this->Segments).ArrayNum;
          local_128.End = (wchar_t *)0x0;
          local_128.bIsDynamic = false;
          local_128.bIsExternal = false;
          local_128.Base = (wchar_t *)0x0;
          local_128.CurPos = (wchar_t *)0x0;
          if (((int)uVar1 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          uVar7 = 0;
          if ((int)uVar1 < 0) {
            uVar7 = uVar1;
          }
          pFVar10 = (FName *)(pFVar2 + (longlong)(int)uVar7 * 0x20);
          iVar13 = 0;
          if (0 < (int)(uVar1 - uVar7)) {
            iVar13 = uVar1 - uVar7;
          }
          if ((iVar13 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar14 = pFVar10 + (longlong)iVar13 * 4;
          for (; pFVar10 != pFVar14; pFVar10 = pFVar10 + 4) {
            if (0 < iVar15) {
              if (local_128.End < local_128.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_128,1);
              }
              *local_128.CurPos = L'.';
              local_128.CurPos = local_128.CurPos + 1;
            }
            local_b0 = *pFVar10;
            ::FName::AppendString(&local_b0,&local_128);
            if (-1 < (int)pFVar10[1].ComparisonIndex.Value) {
              if (local_128.End < local_128.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_128,1);
              }
              *local_128.CurPos = L'[';
              local_128.CurPos = local_128.CurPos + 1;
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"%d");
              if (local_128.End < local_128.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_128,1);
              }
              *local_128.CurPos = L']';
              local_128.CurPos = local_128.CurPos + 1;
            }
            iVar15 = iVar15 + 1;
          }
          if (local_128.End < local_128.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_128,1);
          }
          *local_128.CurPos = L'\0';
          ::FString::FString(&local_78,local_128.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_128);
          local_a8 = *pFVar16;
          ::FName::ToString(&local_a8,&local_48);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        uVar6 = 9;
        FVar11.ComparisonIndex.Value = 0;
        FVar11.Number = 0;
      }
      else {
        if ((5 < (byte)LogPropertyBindingUtils._0_1_) && (FVar11 != pFVar16[2])) {
          local_e0 = *(FName *)((longlong)FVar11 + 0x18);
          ::FName::ToString(&local_e0,&local_88);
          if (pFVar16[2] == (FName)0x0) {
            ::FString::FString(&local_f0,L"None");
          }
          else {
            local_d8 = *(FName *)((longlong)pFVar16[2] + 0x18);
            ::FName::ToString(&local_d8,&local_f0);
          }
          pFVar2 = (this->Segments).AllocatorInstance.Data;
          iVar15 = (this->Segments).ArrayNum;
          local_148.End = (wchar_t *)0x0;
          local_148.bIsDynamic = false;
          local_148.bIsExternal = false;
          local_148.Base = (wchar_t *)0x0;
          local_148.CurPos = (wchar_t *)0x0;
          if ((iVar15 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar13 = 0;
          if (iVar15 < 0) {
            iVar13 = iVar15;
          }
          pFVar10 = (FName *)(pFVar2 + (longlong)iVar13 * 0x20);
          iVar12 = 0;
          if (0 < iVar15 - iVar13) {
            iVar12 = iVar15 - iVar13;
          }
          if ((iVar12 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar15 = 0;
          pFVar14 = pFVar10 + (longlong)iVar12 * 4;
          for (; pFVar10 != pFVar14; pFVar10 = pFVar10 + 4) {
            if (0 < iVar15) {
              if (local_148.End < local_148.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_148,1);
              }
              *local_148.CurPos = L'.';
              local_148.CurPos = local_148.CurPos + 1;
            }
            local_d0[0] = *pFVar10;
            ::FName::AppendString(local_d0,&local_148);
            if (-1 < (int)pFVar10[1].ComparisonIndex.Value) {
              if (local_148.End < local_148.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_148,1);
              }
              *local_148.CurPos = L'[';
              local_148.CurPos = local_148.CurPos + 1;
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_148,L"%d");
              if (local_148.End < local_148.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_148,1);
              }
              *local_148.CurPos = L']';
              local_148.CurPos = local_148.CurPos + 1;
            }
            iVar15 = iVar15 + 1;
          }
          if (local_148.End < local_148.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_148,1);
          }
          *local_148.CurPos = L'\0';
          ::FString::FString(&local_98,local_148.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
          local_b8 = *pFVar16;
          ::FName::ToString(&local_b8,&local_58);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        uVar6 = (undefined1)pFVar17[2].Number;
        FVar11 = *pFVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar11 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar11);
        }
      }
      uVar9 = uVar4 & 0xffffffff;
      pFVar17 = pFVar17 + 6;
      pFVar16[2] = FVar11;
      *(undefined1 *)&pFVar16[3].ComparisonIndex.Value = uVar6;
      uVar8 = local_108._8_8_ & 0xffffffff;
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return bVar5;
}

