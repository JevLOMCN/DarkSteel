// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 10

// StaticClass @ 14e2ec6d0

UClass * __cdecl UDatasmithAssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAssetUserData",
               &Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton,
               StaticRegisterNativesUDatasmithAssetUserData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithAssetUserData>,
               InternalVTableHelperCtorCaller<UDatasmithAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton;
}

// UDatasmithAssetUserData @ 14e2f4600

UDatasmithAssetUserData * __thiscall
UDatasmithAssetUserData::UDatasmithAssetUserData
          (UDatasmithAssetUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithAssetUserData__6B_;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  return this;
}

// UDatasmithAssetUserData @ 14e2f4650

UDatasmithAssetUserData * __thiscall
UDatasmithAssetUserData::UDatasmithAssetUserData
          (UDatasmithAssetUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithAssetUserData__6B_;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  return this;
}

// ~UDatasmithAssetUserData @ 14e2f5e30

void __thiscall UDatasmithAssetUserData::~UDatasmithAssetUserData(UDatasmithAssetUserData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithAssetUserData__6B_;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetaData);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetDatasmithUserData @ 14e2fa9b0

UDatasmithAssetUserData * __cdecl UDatasmithAssetUserData::GetDatasmithUserData(UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UDatasmithAssetUserData *pUVar5;
  UClass *local_res8;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14e2fa9f1;
    param_1 = *(UObject **)(param_1 + 0xb);
  }
  if (param_1 == (UObject *)0x0) {
    return (UDatasmithAssetUserData *)0x0;
  }
LAB_14e2fa9f1:
  pUVar3 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
  plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
  if (plVar4 == (longlong *)0x0) {
    return (UDatasmithAssetUserData *)0x0;
  }
  pcVar2 = *(code **)(*plVar4 + 0x18);
  local_res8 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar5 = (UDatasmithAssetUserData *)(*pcVar2)(plVar4,&local_res8);
  if (pUVar5 != (UDatasmithAssetUserData *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar5;
    }
  }
  return (UDatasmithAssetUserData *)0x0;
}

// GetDatasmithUserDataValueForKey @ 14e2faf20

FString * __cdecl
UDatasmithAssetUserData::GetDatasmithUserDataValueForKey
          (FString *__return_storage_ptr__,UObject *param_1,FName param_2,bool param_3)

{
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar5;
  bool bVar6;
  UDatasmithAssetUserData *pUVar7;
  FString *pFVar8;
  size_t sVar9;
  longlong lVar10;
  FName *pFVar11;
  int iVar12;
  wchar_t *_Str;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FString local_f0;
  FName local_e0;
  FString local_d8;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  FString local_90;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  if ((param_1 == (UObject *)0x0) ||
     (local_res18[0] = param_2, pUVar7 = GetDatasmithUserData(param_1),
     pUVar7 == (UDatasmithAssetUserData *)0x0)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar14 = 0;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = &pUVar7->MetaData;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  iVar15 = 0;
  if (param_3) {
    ::FName::ToString(local_res18,&local_90);
    iVar16 = *(int *)&(pUVar7->MetaData).field_0x28;
    local_b8 = &(pUVar7->MetaData).field_0x10;
    uStack_bc = 1;
    iStack_ac = iVar15;
    local_a8 = iVar14;
    if (iVar16 != 0) {
      puVar18 = *(uint **)&(pUVar7->MetaData).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_b8;
      }
      uVar13 = *puVar18;
      iVar15 = iVar14;
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar15;
        local_a8 = local_a8 + 0x20;
        iVar15 = iVar15 + 1;
        iStack_ac = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14e2fb01f;
        uVar13 = puVar18[lVar10 + 1];
      }
      uStack_bc = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_98 = (int)lVar10;
      iStack_ac = local_a8 + -1 + local_98;
      if (iVar16 < iStack_ac) {
        iStack_ac = iVar16;
      }
    }
LAB_14e2fb01f:
    puVar1 = &(pUVar7->MetaData).field_0x10;
    uVar13 = *(uint *)&(pUVar7->MetaData).field_0x28;
    uVar19 = uVar13 & 0xffffffe0;
    iStack_a0 = *(int *)&(pUVar7->MetaData).field_0x8 - *(int *)&(pUVar7->MetaData).field_0x34;
    uStack_b0 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_ac;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_bc,iVar15);
    iVar12 = (int)uVar13 >> 5;
    TStack_78._28_4_ = iStack_ac;
    TStack_78.BaseBitIndex = local_a8;
    uStack_58 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = this;
    iStack_c0 = iVar15;
    iStack_a4 = iStack_ac;
    local_80 = this;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if ((((int)uVar13 < 0) || (iVar16 < (int)uVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar4)();
      return pFVar8;
    }
    uVar3 = *(uint *)&(pUVar7->MetaData).field_0x28;
    if (uVar13 != uVar3) {
      puVar17 = *(undefined1 **)&(pUVar7->MetaData).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar12;
        uVar19 = uVar19 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14e2fb130;
        uVar13 = *(uint *)(puVar17 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar19;
      if ((int)uVar3 < (int)uVar13) {
        uVar13 = uVar3;
      }
    }
LAB_14e2fb130:
    do {
      pTVar5 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_78.CurrentBitIndex == uVar13) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == this))
      goto LAB_14e2fb241;
      pFVar11 = (FName *)((longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
      local_e0 = *pFVar11;
      ::FString::FString(&local_d8,(FString *)(pFVar11 + 1));
      pFVar8 = ::FName::ToString(&local_e0,&local_50);
      if (local_90.Data.ArrayNum == 0) {
        _Str = L"";
LAB_14e2fb1b1:
        sVar9 = wcslen(_Str);
        iVar15 = ::FString::Find(pFVar8,_Str,(int)sVar9,IgnoreCase,FromStart,-1);
      }
      else {
        _Str = (wchar_t *)local_90.Data.AllocatorInstance.Data;
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14e2fb1b1;
        iVar15 = -1;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (iVar15 != -1) goto LAB_14e2fb217;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    } while( true );
  }
  pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *)this,local_res18[0]);
  if (pFVar8 != (FString *)0x0) {
    iVar15 = (pFVar8->Data).ArrayNum;
    iVar16 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar16 = iVar14;
    }
    ::FString::AssignRange(&local_f0,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar16);
  }
LAB_14e2fb28c:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_f0.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_f0.Data.ArrayMax;
  return __return_storage_ptr__;
LAB_14e2fb217:
  iVar15 = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    iVar15 = iVar14;
  }
  ::FString::AssignRange(&local_f0,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar15);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
LAB_14e2fb241:
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  goto LAB_14e2fb28c;
}

// GetDatasmithUserDataValuesForKey @ 14e2fb2f0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UDatasmithAssetUserData::GetDatasmithUserDataValuesForKey
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1,
          FName param_2,bool param_3)

{
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this;
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  ForElementType<unsigned_int> FVar4;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar5;
  bool bVar6;
  int iVar7;
  UDatasmithAssetUserData *pUVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *this_00;
  size_t sVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FName *pFVar13;
  int iVar14;
  wchar_t *_Str;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  FName local_res18;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForElementType<unsigned_int> local_e8;
  FName local_e0;
  FString local_d8;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  FString local_90;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  if ((param_1 == (UObject *)0x0) ||
     (local_res18 = param_2, pUVar8 = GetDatasmithUserData(param_1),
     pUVar8 == (UDatasmithAssetUserData *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_f8.Data = (FScriptContainerElement *)0x0;
    this = &pUVar8->MetaData;
    local_f0 = 0;
    if (param_3) {
      ::FName::ToString(&local_res18,&local_90);
      iVar7 = *(int *)&(pUVar8->MetaData).field_0x28;
      local_b8 = &(pUVar8->MetaData).field_0x10;
      iStack_c0 = 0;
      uStack_bc = 1;
      iStack_ac = iStack_c0;
      local_a8 = iStack_c0;
      if (iVar7 != 0) {
        puVar17 = *(uint **)&(pUVar8->MetaData).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)local_b8;
        }
        uVar15 = *puVar17;
        local_a8 = 0;
        iStack_c0 = 0;
        while (uVar15 == 0) {
          lVar12 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14e2fb3ef;
          uVar15 = puVar17[lVar12 + 1];
        }
        uStack_bc = -uVar15 & uVar15;
        uVar1 = (ulonglong)uStack_bc * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_98 = (int)lVar12;
        iStack_ac = local_a8 + -1 + local_98;
        if (iVar7 < iStack_ac) {
          iStack_ac = iVar7;
        }
      }
LAB_14e2fb3ef:
      uVar15 = *(uint *)&(pUVar8->MetaData).field_0x28;
      iStack_a0 = *(int *)&(pUVar8->MetaData).field_0x8 - *(int *)&(pUVar8->MetaData).field_0x34;
      local_e8 = (ForElementType<unsigned_int>)&(pUVar8->MetaData).field_0x10;
      uStack_b0 = 0xffffffff;
      TStack_78.CurrentBitIndex = iStack_ac;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      uVar18 = uVar15 & 0xffffffe0;
      TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
      iVar14 = (int)uVar15 >> 5;
      TStack_78._28_4_ = iStack_ac;
      TStack_78.BaseBitIndex = local_a8;
      uStack_58 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = this;
      iStack_a4 = iStack_ac;
      local_80 = this;
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
      if ((((int)uVar15 < 0) || (iVar7 < (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      FVar4 = local_e8;
      uVar2 = *(int *)((longlong)local_e8 + 0x18);
      if (uVar15 != uVar2) {
        FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_e8 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_e8 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_e8;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar14 * 4);
        while (uVar15 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar15 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14e2fb510;
          uVar15 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar12 * 4);
        }
        uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_94 = (int)lVar12;
        uVar15 = local_94 + -1 + uVar18;
        if ((int)uVar2 < (int)uVar15) {
          uVar15 = uVar2;
        }
      }
LAB_14e2fb510:
      do {
        pTVar5 = local_80;
        if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_78.CurrentBitIndex == uVar15) &&
            ((ForElementType<unsigned_int>)TStack_78.Array == FVar4)) && (pTVar5 == this)) {
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          goto LAB_14e2fb799;
        }
        pFVar13 = (FName *)((longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
        local_e0 = *pFVar13;
        ::FString::FString(&local_d8,(FString *)(pFVar13 + 1));
        this_00 = ::FName::ToString(&local_e0,&local_50);
        if (local_90.Data.ArrayNum == 0) {
          _Str = L"";
LAB_14e2fb591:
          sVar10 = wcslen(_Str);
          iVar7 = ::FString::Find(this_00,_Str,(int)sVar10,IgnoreCase,FromStart,-1);
        }
        else {
          _Str = (wchar_t *)local_90.Data.AllocatorInstance.Data;
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14e2fb591;
          iVar7 = -1;
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (iVar7 != -1) {
          if (((local_f8.Data <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               local_f8.Data + (longlong)local_f0._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          iVar7 = (int)local_f0;
          if ((int)local_f0 == local_f0._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
          }
          local_f0 = CONCAT44(local_f0._4_4_,iVar7 + 1);
          ::FString::FString((FString *)(local_f8.Data + (longlong)iVar7 * 0x10),&local_d8);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      } while( true );
    }
    pFVar11 = (FScriptContainerElement *)
              TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)this,local_res18);
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      if (((local_f8.Data <= pFVar11) && (pFVar11 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      iVar7 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar7 + 1);
      ::FString::FString((FString *)(local_f8.Data + (longlong)iVar7 * 0x10),(FString *)pFVar11);
    }
LAB_14e2fb799:
    (__return_storage_ptr__->AllocatorInstance).Data = local_f8.Data;
    __return_storage_ptr__->ArrayNum = (int)local_f0;
    __return_storage_ptr__->ArrayMax = local_f0._4_4_;
    local_f0 = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    DestructItems<FString,int>((FString *)0x0,0);
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2fbf40

UClass * __cdecl UDatasmithAssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAssetUserData",
               &Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton,
               StaticRegisterNativesUDatasmithAssetUserData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithAssetUserData>,
               InternalVTableHelperCtorCaller<UDatasmithAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetUserData.InnerSingleton;
}

// SetDatasmithUserDataValueForKey @ 14e2fea60

bool __cdecl
UDatasmithAssetUserData::SetDatasmithUserDataValueForKey
          (UObject *param_1,FName param_2,FString *param_3)

{
  int iVar1;
  UClass *pUVar2;
  IInterface_AssetUserData *this;
  UDatasmithAssetUserData *pUVar3;
  TPairInitializer<FName_const_&,FString_const_&> local_res8;
  FKeyComparisonClass<FNameLexicalLess> local_res20;
  FString **local_28;
  FString *local_20;
  
  local_res8.Value = (FString *)param_2;
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) goto LAB_14e2feaaa;
    param_1 = *(UObject **)(param_1 + 0xb);
  }
  if (param_1 == (UObject *)0x0) {
    return false;
  }
LAB_14e2feaaa:
  pUVar2 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
  this = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
  if (this == (IInterface_AssetUserData *)0x0) {
    return false;
  }
  pUVar3 = IInterface_AssetUserData::GetAssetUserData<UDatasmithAssetUserData>(this);
  if (pUVar3 == (UDatasmithAssetUserData *)0x0) {
    local_res8.Key = (FName *)pUVar3;
    pUVar3 = NewObject<UDatasmithAssetUserData>
                       (param_1,(FName)0x0,RF_Transactional|RF_Public,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (**(code **)((longlong)*this + 0x10))(this,pUVar3);
  }
  local_28 = &local_res8.Value;
  local_20 = param_3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&pUVar3->MetaData,&local_res8,(bool *)&local_28);
  local_res20.Predicate.Predicate = (TDereferenceWrapper<FName,FNameLexicalLess>)&local_res8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Sort<TSortableMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::FKeyComparisonClass<FNameLexicalLess>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&pUVar3->MetaData,&local_res20);
  return true;
}

// StaticRegisterNativesUDatasmithAssetUserData @ 14e2fec70

void __cdecl UDatasmithAssetUserData::StaticRegisterNativesUDatasmithAssetUserData(void)

{
  return;
}

