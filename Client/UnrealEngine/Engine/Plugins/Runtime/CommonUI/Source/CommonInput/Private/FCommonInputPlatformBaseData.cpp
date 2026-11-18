// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 6

// StaticStruct @ 14a76d990

UScriptStruct * __cdecl FCommonInputPlatformBaseData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputPlatformBaseData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UScriptStruct_FCommonInputPlatformBaseData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData,(UObject *)pUVar1,
                         L"CommonInputPlatformBaseData");
  }
  return Z_Registration_Info_UScriptStruct_FCommonInputPlatformBaseData.OuterSingleton;
}

// TryGetInputBrush @ 14a76d9d0

bool __thiscall
FCommonInputPlatformBaseData::TryGetInputBrush
          (FCommonInputPlatformBaseData *this,FSlateBrush *param_1,FKey *param_2,
          ECommonInputType param_3,FName *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FSlateBrush *local_res10;
  
  local_res10 = param_1;
  if (0 < (this->ControllerDataClasses).ArrayNum) {
    pFVar10 = (this->ControllerDataClasses).AllocatorInstance.Data;
    iVar2 = (this->ControllerDataClasses).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ControllerDataClasses).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSubclassOf<UCommonInputBaseControllerData>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      pUVar9 = *(UClass **)pFVar10;
      if (pUVar9 != (UClass *)0x0) {
        if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar9);
        }
        pUVar4 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar4 == (UObject *)0x0) {
LAB_14a76da7b:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                             ,0x93,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (pUVar4 == (UObject *)0x0) goto LAB_14a76dabd;
        }
        else {
          pUVar9 = UCommonInputBaseControllerData::StaticClass();
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar9->_padding_)) goto LAB_14a76da7b;
        }
        if ((*(ECommonInputType *)(pUVar4 + 1) == param_3) &&
           ((*(ECommonInputType *)(pUVar4 + 1) != Gamepad ||
            (FVar5.ComparisonIndex.Value = *(uint *)&pUVar4[1].field_0x4,
            FVar5.Number = *(uint *)&pUVar4[1].field_0x8, FVar5 == *param_4)))) {
          uVar8 = (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4,local_res10,param_2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
          return (bool)uVar8;
        }
      }
LAB_14a76dabd:
      pFVar10 = pFVar10 + 8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// TryGetInputBrush @ 14a76db20

bool __thiscall
FCommonInputPlatformBaseData::TryGetInputBrush
          (FCommonInputPlatformBaseData *this,FSlateBrush *param_1,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_2,ECommonInputType param_3,FName *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FSlateBrush *local_res10;
  
  if (0 < (this->ControllerDataClasses).ArrayNum) {
    pFVar10 = (this->ControllerDataClasses).AllocatorInstance.Data;
    iVar2 = (this->ControllerDataClasses).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    local_res10 = param_1;
    while( true ) {
      if ((this->ControllerDataClasses).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSubclassOf<UCommonInputBaseControllerData>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      pUVar9 = *(UClass **)pFVar10;
      if (pUVar9 != (UClass *)0x0) {
        if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar9);
        }
        pUVar4 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar4 == (UObject *)0x0) {
LAB_14a76dbcb:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                             ,0x93,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (pUVar4 == (UObject *)0x0) goto LAB_14a76dc0d;
        }
        else {
          pUVar9 = UCommonInputBaseControllerData::StaticClass();
          iVar3 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar9->_padding_)) goto LAB_14a76dbcb;
        }
        if ((*(ECommonInputType *)(pUVar4 + 1) == param_3) &&
           ((*(ECommonInputType *)(pUVar4 + 1) != Gamepad ||
            (FVar5.ComparisonIndex.Value = *(uint *)&pUVar4[1].field_0x4,
            FVar5.Number = *(uint *)&pUVar4[1].field_0x8, FVar5 == *param_4)))) {
          uVar8 = (**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,local_res10,param_2);
          return (bool)uVar8;
        }
      }
LAB_14a76dc0d:
      pFVar10 = pFVar10 + 8;
    }
  }
  return false;
}

// ~FCommonInputPlatformBaseData @ 14a7723a0

void __thiscall
FCommonInputPlatformBaseData::~FCommonInputPlatformBaseData(FCommonInputPlatformBaseData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ControllerDataClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int>
            ((TSoftClassPtr<UCommonInputBaseControllerData> *)
             (this->ControllerData).AllocatorInstance.Data,(this->ControllerData).ArrayNum);
  pFVar1 = (this->ControllerData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14a772b40

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
`FCommonInputPlatformBaseData::GetRegisteredPlatforms'::__l2::<lambda_1>::operator()
          (void *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_a8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_a0;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
       FCommonInputDefaults::PlatformPC;
  pTVar9 = FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos();
  iVar8 = *(int *)&pTVar9->field_0x28;
  uStack_8c = 1;
  iStack_90 = 0;
  local_78 = 0;
  puVar1 = &pTVar9->field_0x10;
  iStack_7c = iStack_90;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&pTVar9->field_0x20;
    if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    local_78 = 0;
    iStack_90 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14a772c10;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar8 < iStack_7c) {
      iStack_7c = iVar8;
    }
  }
LAB_14a772c10:
  uVar13 = *(uint *)&pTVar9->field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  iStack_70 = *(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34;
  uStack_80 = 0xffffffff;
  uVar17 = uVar13 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_a0 = pTVar9;
  local_98 = pTVar9;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar9;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  pTVar6 = local_a0;
  uVar3 = *(uint *)&pTVar9->field_0x28;
  if (uVar13 != uVar3) {
    puVar15 = *(undefined1 **)&pTVar9->field_0x20;
    if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a772d20;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar13 = local_res20 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14a772d20:
  while( true ) {
    pTVar9 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar6))
    break;
    puVar12 = (undefined8 *)((longlong)TStack_60.CurrentBitIndex * 0xa0 + *(longlong *)pTVar9);
    local_a8 = *puVar12;
    if ((*(char *)((longlong)puVar12 + 0x21) == '\0') && (*(char *)(puVar12 + 0xc) == '\0')) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
         (((FScriptContainerElement *)&local_a8 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_a8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// GetRegisteredPlatforms @ 14a7761c0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FCommonInputPlatformBaseData::GetRegisteredPlatforms(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FCommonInputPlatformBaseData::GetRegisteredPlatforms'::__l2::<lambda_1>::operator()
                (local_res8,&RegisteredPlatforms);
      atexit(`FCommonInputPlatformBaseData::GetRegisteredPlatforms'::__l2::
             _dynamic_atexit_destructor_for__RegisteredPlatforms__);
      _Init_thread_footer(&::_TSS0);
      return &RegisteredPlatforms;
    }
  }
  return &RegisteredPlatforms;
}

