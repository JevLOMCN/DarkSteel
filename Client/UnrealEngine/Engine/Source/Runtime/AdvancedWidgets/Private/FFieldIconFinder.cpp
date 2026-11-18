// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 5

// GetFunctionIcon @ 14d867fe0

TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
* __cdecl UE::PropertyViewer::FFieldIconFinder::GetFunctionIcon
                    (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,UFunction *param_1)

{
  GetFunctionIcon(__return_storage_ptr__,param_1,
                  &AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings);
  return __return_storage_ptr__;
}

// GetFunctionIcon @ 14d868010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
* __cdecl UE::PropertyViewer::FFieldIconFinder::GetFunctionIcon
                    (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,UFunction *param_1,FFieldColorSettings *param_2)

{
  int *piVar1;
  int *piVar2;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> *pFVar3;
  uchar *puVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  FName *pFVar10;
  ISlateStyle *pIVar11;
  FProperty *pFVar12;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar13;
  wchar_t *pwVar14;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar15;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  uchar auStack_b8 [8];
  uint uStack_b0;
  uchar auStack_ac [4];
  FName local_a8;
  FName local_a0 [3];
  uint local_88;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1 == (UFunction *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Function",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\FieldIconFinder.cpp"
                       ,0x72,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar6)();
      return pTVar9;
    }
  }
  if (param_1->_padding_ == 0) {
    pwVar14 = L"GraphEditor.Function_16x";
    if ((param_1->FunctionFlags & FUNC_BlueprintPure) != FUNC_None) {
      pwVar14 = L"GraphEditor.PureFunction_16x";
    }
    pFVar10 = local_a0;
  }
  else {
    pwVar14 = L"GraphEditor.OverrideFunction_16x";
    if ((*(uint *)(param_1->_padding_ + 0xb0) >> 0x1c & 1) != 0) {
      pwVar14 = L"GraphEditor.OverridePureFunction_16x";
    }
    pFVar10 = &local_a8;
  }
  pFVar10 = ::FName::FName(pFVar10,pwVar14);
  FVar5 = *pFVar10;
  pIVar11 = FAppStyle::Get();
  local_c8._0_8_ = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,FVar5,0,0);
  local_88 = local_88 & 0xffffff00;
  stack0xffffffffffffff40 = FLinearColor::White.field0_0x0;
  uStack_b0 = local_88;
  pFVar12 = UFunction::GetReturnProperty(param_1);
  if (pFVar12 != (FProperty *)0x0) {
    GetPropertyIcon(&local_80,pFVar12,param_2);
    if (0 < local_80.ArrayNum) {
      FVar13 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)&local_80;
      if (local_80.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
        FVar13 = local_80.AllocatorInstance.SecondaryData;
      }
                    /* WARNING: Load size is inaccurate */
      unique0x10000208 = *(FLinearColor_u_0 *)((FLinearColor_u_0 *)((longlong)FVar13 + 8))->RGBA;
      uStack_b0 = *(uint *)((longlong)FVar13 + 0x18);
    }
    if (local_80.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
  }
  piVar1 = &__return_storage_ptr__->ArrayMax;
  piVar2 = &__return_storage_ptr__->ArrayNum;
  pFVar3 = &(__return_storage_ptr__->AllocatorInstance).SecondaryData;
  *pFVar3 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0;
  *piVar2 = 0;
  *piVar1 = 2;
  if ((__return_storage_ptr__ <=
       (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        *)local_c8) && (local_c8 < &(__return_storage_ptr__->AllocatorInstance).SecondaryData)) {
    local_d8 = 0x20;
    local_f8 = local_c8;
    local_e0 = 0;
    local_e8 = 2;
    local_f0 = __return_storage_ptr__;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar6)();
      return pTVar9;
    }
  }
  iVar8 = *piVar2;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
                      (0x820,&__return_storage_ptr__->AllocatorInstance,piVar1);
    *piVar2 = iVar8;
  }
  *piVar2 = iVar8 + 1;
  FVar13 = *pFVar3;
  FVar15 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)__return_storage_ptr__;
  if (FVar13 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    FVar15 = FVar13;
  }
  puVar4 = (uchar *)((longlong)iVar8 * 0x20 + (longlong)FVar15);
  *(undefined8 *)puVar4 = local_c8._0_8_;
  *(undefined8 *)(puVar4 + 8) = local_c8._8_8_;
  puVar4 = (uchar *)((longlong)iVar8 * 0x20 + 0x10 + (longlong)FVar15);
  *(uchar (*) [8])puVar4 = auStack_b8;
  *(ulonglong *)(puVar4 + 8) = CONCAT44(auStack_ac,uStack_b0);
  return __return_storage_ptr__;
}

// GetIcon @ 14d868c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSlateBrush * __cdecl UE::PropertyViewer::FFieldIconFinder::GetIcon(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar3;
  FSlateIcon *pFVar4;
  FSlateBrush *pFVar5;
  UFunction *pUVar6;
  FName *pFVar7;
  undefined1 auStack_e8 [48];
  FName local_b8;
  FName local_b0;
  FSlateIcon local_a8;
  FSlateIcon local_88;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 == (UObject *)0x0) {
LAB_14d868c5f:
    pUVar6 = (UFunction *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UFunction_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       (pUVar6 = (UFunction *)param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar2->_padding_)) goto LAB_14d868c5f;
  }
  if (pUVar6 != (UFunction *)0x0) {
    GetFunctionIcon(&local_68,pUVar6,&AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings);
    if (0 < local_68.ArrayNum) {
      FVar3 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
        FVar3 = local_68.AllocatorInstance.SecondaryData;
      }
      pFVar5 = *(FSlateBrush **)FVar3;
      if (local_68.AllocatorInstance.SecondaryData ==
          (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
        return pFVar5;
      }
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      return pFVar5;
    }
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      pFVar7 = &local_b8;
      pFVar4 = &local_a8;
      goto LAB_14d868d06;
    }
  }
  param_1 = *(UObject **)&param_1->field_0x10;
  pFVar7 = &local_b0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  pFVar4 = &local_88;
LAB_14d868d06:
  pFVar4 = FSlateIconFinder::FindIconForClass(pFVar4,(UStruct *)param_1,pFVar7);
  pFVar5 = FSlateIcon::GetIcon(pFVar4);
  return pFVar5;
}

// GetPropertyIcon @ 14d86ae30

TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
* __cdecl UE::PropertyViewer::FFieldIconFinder::GetPropertyIcon
                    (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,FProperty *param_1)

{
  GetPropertyIcon(__return_storage_ptr__,param_1,
                  &AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings);
  return __return_storage_ptr__;
}

// GetPropertyIcon @ 14d86ae60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
* __cdecl UE::PropertyViewer::FFieldIconFinder::GetPropertyIcon
                    (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,FProperty *param_1,FFieldColorSettings *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  FName FVar3;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar9;
  FName *pFVar10;
  ISlateStyle *pIVar11;
  FSlateColor *pFVar12;
  longlong lVar13;
  FSlateIcon *this;
  ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon> FVar14;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  undefined4 uStack_11c;
  FSlateBrush *local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FSlateColor local_c0;
  FSlateColor local_ac;
  FSlateColor local_98;
  FSlateColor local_84;
  FSlateColor local_70;
  FSlateColor local_5c;
  FSlateIcon local_48;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Framework\\PropertyViewer\\FieldIconFinder.cpp"
                         ,0x98,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              *)(*pcVar5)();
    return pTVar8;
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 2;
  FVar14 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)__return_storage_ptr__;
  if (param_1 != (FProperty *)0x0) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      uStack_140 = uStack_140 & 0xffffff00;
      uStack_150 = ___xmm_3f8000003f800000000000003f800000;
      uStack_148 = _UNK_15090c6d8;
      pFVar10 = ::FName::FName(&local_res10,L"Kismet.VariableList.ArrayTypeIcon");
      FVar3 = *pFVar10;
      pIVar11 = FAppStyle::Get();
      local_158 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,FVar3,0,0);
      pFVar12 = PropertyViewer::Private::GetColor
                          (&local_c0,param_2,(FProperty *)param_1[1]._padding_);
      FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      uStack_150 = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
      uStack_148 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
      uStack_140._0_1_ = pFVar12->ColorUseRule;
      uStack_140._1_1_ = pFVar12->ColorTableId;
      uStack_140._2_2_ = *(undefined2 *)&pFVar12->field_0x12;
      FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
              __return_storage_ptr__;
      if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
        FVar9 = FVar4;
      }
      if ((ulonglong)FVar9 <= &local_158) {
        FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                __return_storage_ptr__;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar9 = FVar4;
        }
        if ((&local_158 <
             (undefined8 *)((longlong)__return_storage_ptr__->ArrayMax * 0x20 + (longlong)FVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar5)();
          return pTVar8;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
                          (0x820,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
        FVar14 = FVar4;
      }
      lVar13 = (longlong)iVar7 * 0x20;
      *(undefined8 *)(lVar13 + (longlong)FVar14) = local_158;
      ((undefined8 *)(lVar13 + (longlong)FVar14))[1] = uStack_150;
      goto LAB_14d86b658;
    }
    if (param_1 != (FProperty *)0x0) {
      lVar13 = param_1->_padding_;
      if ((*(ulonglong *)(lVar13 + 0x18) & 0x400000000000) != 0) {
        uStack_160 = uStack_160 & 0xffffff00;
        uStack_170 = ___xmm_3f8000003f800000000000003f800000;
        uStack_168 = _UNK_15090c6d8;
        pFVar10 = ::FName::FName(&local_res20,L"Kismet.VariableList.MapKeyTypeIcon");
        FVar3 = *pFVar10;
        pIVar11 = FAppStyle::Get();
        local_178 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,FVar3,0,0);
        pFVar12 = PropertyViewer::Private::GetColor
                            (&local_ac,param_2,(FProperty *)param_1[1]._padding_);
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        uStack_170 = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
        uStack_168 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
        uStack_160._0_1_ = pFVar12->ColorUseRule;
        uStack_160._1_1_ = pFVar12->ColorTableId;
        uStack_160._2_2_ = *(undefined2 *)&pFVar12->field_0x12;
        FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                __return_storage_ptr__;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar9 = FVar4;
        }
        if ((ulonglong)FVar9 <= &local_178) {
          FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                  __return_storage_ptr__;
          if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
            FVar9 = FVar4;
          }
          if ((&local_178 <
               (undefined8 *)((longlong)__return_storage_ptr__->ArrayMax * 0x20 + (longlong)FVar9))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                __return_storage_ptr__;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar9 = FVar4;
        }
        puVar1 = (undefined8 *)((longlong)iVar7 * 0x20 + (longlong)FVar9);
        *puVar1 = local_178;
        puVar1[1] = uStack_170;
        puVar1 = (undefined8 *)((longlong)iVar7 * 0x20 + 0x10 + (longlong)FVar9);
        *puVar1 = uStack_168;
        puVar1[1] = CONCAT44(uStack_15c,uStack_160);
        pFVar10 = ::FName::FName(&local_d8,L"Kismet.VariableList.MapValueTypeIcon");
        FVar3 = *pFVar10;
        pIVar11 = FAppStyle::Get();
        local_178 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,FVar3,0,0);
        pFVar12 = PropertyViewer::Private::GetColor
                            (&local_98,param_2,(FProperty *)param_1[1]._padding_);
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        uStack_170 = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
        uStack_168 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
        uStack_160._0_1_ = pFVar12->ColorUseRule;
        uStack_160._1_1_ = pFVar12->ColorTableId;
        uStack_160._2_2_ = *(undefined2 *)&pFVar12->field_0x12;
        FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                __return_storage_ptr__;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar9 = FVar4;
        }
        if ((ulonglong)FVar9 <= &local_178) {
          FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                  __return_storage_ptr__;
          if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
            FVar9 = FVar4;
          }
          if ((&local_178 <
               (undefined8 *)((longlong)__return_storage_ptr__->ArrayMax * 0x20 + (longlong)FVar9))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar14 = FVar4;
        }
        lVar13 = (longlong)iVar7 * 0x20;
        *(undefined8 *)(lVar13 + (longlong)FVar14) = local_178;
        ((undefined8 *)(lVar13 + (longlong)FVar14))[1] = uStack_170;
        uStack_148._0_4_ = (undefined4)uStack_168;
        uStack_148._4_4_ = uStack_168._4_4_;
        uStack_140 = uStack_160;
        uStack_13c = uStack_15c;
        goto LAB_14d86b658;
      }
      if ((*(ulonglong *)(lVar13 + 0x18) & 0x800000000000) != 0) {
        uStack_120 = uStack_120 & 0xffffff00;
        uStack_130 = ___xmm_3f8000003f800000000000003f800000;
        uStack_128 = _UNK_15090c6d8;
        pFVar10 = ::FName::FName(&local_d0,L"Kismet.VariableList.SetTypeIcon");
        FVar3 = *pFVar10;
        pIVar11 = FAppStyle::Get();
        local_138 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,FVar3,0,0);
        pFVar12 = PropertyViewer::Private::GetColor
                            (&local_84,param_2,(FProperty *)param_1[1]._padding_);
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        uStack_130 = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
        uStack_128 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
        uStack_120._0_1_ = pFVar12->ColorUseRule;
        uStack_120._1_1_ = pFVar12->ColorTableId;
        uStack_120._2_2_ = *(undefined2 *)&pFVar12->field_0x12;
        FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                __return_storage_ptr__;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar9 = FVar4;
        }
        if ((ulonglong)FVar9 <= &local_138) {
          FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                  __return_storage_ptr__;
          if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
            FVar9 = FVar4;
          }
          if ((&local_138 <
               (undefined8 *)((longlong)__return_storage_ptr__->ArrayMax * 0x20 + (longlong)FVar9))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar14 = FVar4;
        }
        lVar13 = (longlong)iVar7 * 0x20;
        *(undefined8 *)(lVar13 + (longlong)FVar14) = local_138;
        ((undefined8 *)(lVar13 + (longlong)FVar14))[1] = uStack_130;
        uStack_148._0_4_ = (undefined4)uStack_128;
        uStack_148._4_4_ = uStack_128._4_4_;
        uStack_140 = uStack_120;
        uStack_13c = uStack_11c;
        goto LAB_14d86b658;
      }
      if ((*(uint *)(lVar13 + 0x18) >> 0x1a & 1) != 0) {
        uStack_110 = ___xmm_3f8000003f800000000000003f800000;
        uStack_108 = _UNK_15090c6d8;
        uStack_100 = uStack_100 & 0xffffff00;
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        this = FSlateIconFinder::FindIconForClass
                         (&local_48,(UStruct *)param_1[1]._padding_,&local_res8);
        local_118 = FSlateIcon::GetIcon(this);
        pFVar12 = PropertyViewer::Private::GetColor(&local_70,param_2,param_1);
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        uStack_110 = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
        uStack_108 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
        uStack_100._0_1_ = pFVar12->ColorUseRule;
        uStack_100._1_1_ = pFVar12->ColorTableId;
        uStack_100._2_2_ = *(undefined2 *)&pFVar12->field_0x12;
        FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                __return_storage_ptr__;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar9 = FVar4;
        }
        if ((ulonglong)FVar9 <= &local_118) {
          FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)
                  __return_storage_ptr__;
          if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
            FVar9 = FVar4;
          }
          if ((&local_118 <
               (FSlateBrush **)((longlong)__return_storage_ptr__->ArrayMax * 0x20 + (longlong)FVar9)
              ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
        if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
          FVar14 = FVar4;
        }
        lVar13 = (longlong)iVar7 * 0x20;
        *(undefined8 *)(lVar13 + (longlong)FVar14) = local_118;
        ((undefined8 *)(lVar13 + (longlong)FVar14))[1] = uStack_110;
        uStack_148._0_4_ = (undefined4)uStack_108;
        uStack_148._4_4_ = uStack_108._4_4_;
        uStack_140 = uStack_100;
        uStack_13c = uStack_fc;
        goto LAB_14d86b658;
      }
    }
  }
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_f0 = ___xmm_3f8000003f800000000000003f800000;
  uStack_e8 = _UNK_15090c6d8;
  pFVar10 = ::FName::FName(&local_c8,L"Kismet.VariableList.TypeIcon");
  FVar3 = *pFVar10;
  pIVar11 = FAppStyle::Get();
  local_f8 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11,FVar3,0,0);
  pFVar12 = PropertyViewer::Private::GetColor(&local_5c,param_2,param_1);
  FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  uStack_f0 = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
  uStack_e8 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
  uStack_e0._0_1_ = pFVar12->ColorUseRule;
  uStack_e0._1_1_ = pFVar12->ColorTableId;
  uStack_e0._2_2_ = *(undefined2 *)&pFVar12->field_0x12;
  FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)__return_storage_ptr__;
  if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    FVar9 = FVar4;
  }
  if ((ulonglong)FVar9 <= &local_f8) {
    FVar9 = (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)__return_storage_ptr__
    ;
    if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
      FVar9 = FVar4;
    }
    if ((&local_f8 <
         (undefined8 *)((longlong)__return_storage_ptr__->ArrayMax * 0x20 + (longlong)FVar9)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<UE::PropertyViewer::FFieldIconFinder::FFieldIcon,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == __return_storage_ptr__->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>_>
                      (0x820,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  FVar4 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  if (FVar4 != (ForElementType<UE::PropertyViewer::FFieldIconFinder::FFieldIcon>)0x0) {
    FVar14 = FVar4;
  }
  lVar13 = (longlong)iVar7 * 0x20;
  *(undefined8 *)(lVar13 + (longlong)FVar14) = local_f8;
  ((undefined8 *)(lVar13 + (longlong)FVar14))[1] = uStack_f0;
  uStack_148._0_4_ = (undefined4)uStack_e8;
  uStack_148._4_4_ = uStack_e8._4_4_;
  uStack_140 = uStack_e0;
  uStack_13c = uStack_dc;
LAB_14d86b658:
  puVar2 = (undefined4 *)(lVar13 + 0x10 + (longlong)FVar14);
  *puVar2 = (undefined4)uStack_148;
  puVar2[1] = uStack_148._4_4_;
  puVar2[2] = uStack_140;
  puVar2[3] = uStack_13c;
  return __return_storage_ptr__;
}

