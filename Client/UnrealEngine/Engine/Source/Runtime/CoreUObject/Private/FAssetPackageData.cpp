// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// GetPackageSavedHash @ 141ea1e50

FIoHash * __thiscall
FAssetPackageData::GetPackageSavedHash(FAssetPackageData *this,FIoHash *__return_storage_ptr__)

{
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  return __return_storage_ptr__;
}

// NetworkWrite @ 141eae140

void __thiscall FAssetPackageData::NetworkWrite(FAssetPackageData *this,FCbWriter *param_1)

{
  FName *pFVar1;
  FGuid *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FCbWriter *this_00;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<TTuple<FIoChunkId,FIoHash>,TSizedDefaultAllocator<32>_> local_48;
  FPackageCustomVersion *local_38;
  undefined8 uStack_30;
  
  FCbWriter::BeginArray(param_1);
  bVar4 = (this->CookedHash).bIsValid;
  FCbWriter::AddBool(param_1,bVar4);
  if (bVar4 != false) {
    FMD5Hash::WriteCompactBinary(&this->CookedHash,param_1);
  }
  FCbWriter::AddBool(param_1,false);
  TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
  ::Array((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
           *)&this->ChunkHashes,&local_48);
  FCbWriter::BeginArray(param_1);
  iVar5 = local_48.ArrayNum;
  pFVar10 = local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  FVar8.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FIoChunkId,FIoHash>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar10) break;
    FCbWriter::BeginArray(param_1);
    this_00 = ::operator<<(param_1,(FIoChunkId *)FVar8.Data);
    FCbWriter::AddHash(this_00,(FIoHash *)(FVar8.Data + 0xc));
    FCbWriter::EndArray(param_1);
    FVar8.Data = FVar8.Data + 0x20;
  }
  FCbWriter::EndArray(param_1);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  FCbWriter::BeginArray(param_1);
  pFVar9 = (FName *)(this->ImportedClasses).AllocatorInstance.Data;
  iVar5 = (this->ImportedClasses).ArrayNum;
  pFVar1 = pFVar9 + iVar5;
  while( true ) {
    if ((this->ImportedClasses).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar1) break;
    FCbWriter::operator<<(param_1,*pFVar9);
    pFVar9 = pFVar9 + 1;
  }
  FCbWriter::EndArray(param_1);
  FCbWriter::AddInteger(param_1,this->DiskSize);
  FPackageFileVersion::Write(&this->FileVersionUE,param_1);
  FCbWriter::AddInteger(param_1,this->FileVersionLicenseeUE);
  local_38 = (this->CustomVersions).Ptr.DataPtr;
  uStack_30 = *(undefined8 *)&(this->CustomVersions).Ptr.ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar5 = (int)*(undefined8 *)&(this->CustomVersions).Ptr.ArrayNum;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9a9,L"Invalid range size: %lld"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar5 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,iVar5,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
    memcpy(local_58.Data + (longlong)iVar6 * 0x14,local_38,(longlong)iVar5 * 0x14);
  }
  FCbWriter::BeginArray(param_1);
  iVar5 = (int)local_50;
  uVar7 = (ulonglong)(int)local_50;
  pFVar2 = (FGuid *)(local_58.Data + uVar7 * 0x14);
  FVar8.Data = local_58.Data;
  while( true ) {
    if ((int)uVar7 != iVar5) {
      `TCheckedPointerIterator<UE::AssetRegistry::FPackageCustomVersion_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if ((FGuid *)FVar8.Data == pFVar2) break;
    FCbWriter::BeginArray(param_1);
    FCbWriter::AddUuid(param_1,(FGuid *)FVar8.Data);
    FCbWriter::AddInteger(param_1,((FGuid *)((longlong)FVar8.Data + 0x10))->A);
    FCbWriter::EndArray(param_1);
    uVar7 = local_50 & 0xffffffff;
    FVar8.Data = (FScriptContainerElement *)&((FGuid *)((longlong)FVar8.Data + 0x10))->B;
  }
  FCbWriter::EndArray(param_1);
  FCbWriter::AddInteger(param_1,this->Flags);
  FCbWriter::AddInteger(param_1,(uint)this->Extension);
  FCbWriter::EndArray(param_1);
  if ((FGuid *)local_58.Data != (FGuid *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// SerializeForCache @ 141ebaf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAssetPackageData::SerializeForCache(FAssetPackageData *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  long64 *plVar3;
  int *piVar4;
  uint *puVar5;
  FName *pFVar6;
  EPackageExtension EVar7;
  int iVar8;
  wchar_t *pwVar9;
  int iVar10;
  FName *pFVar11;
  undefined1 auStack_88 [32];
  FIdentityFunctor local_68;
  FString local_60;
  TStringView<wchar_t> local_48;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  plVar3 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->DiskSize,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&this->DiskSize);
    }
  }
  else {
    this->DiskSize = *plVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  local_48.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_38 = 0;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_48,0x14);
  ::operator<<(param_1,&this->CookedHash);
  TSetPrivateFriend::
  Serialize<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
                      *)&this->ChunkHashes);
  ::operator<<(param_1,&this->FileVersionUE);
  piVar2 = &this->FileVersionLicenseeUE;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->Flags;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::AssetRegistry::operator<<(param_1,&this->CustomVersions);
  if ((param_1->field_0x28 & 4) != 0) {
    pFVar11 = (FName *)(this->ImportedClasses).AllocatorInstance.Data;
    iVar10 = (this->ImportedClasses).ArrayNum;
    pFVar6 = pFVar11;
    if (iVar10 != 0) {
      while (iVar10 = iVar10 + -1, iVar10 != 0) {
        iVar8 = ::FName::Compare(pFVar6 + 1,pFVar11);
        if (iVar8 < 0) {
          AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
                    ((FName *)(this->ImportedClasses).AllocatorInstance.Data,
                     (this->ImportedClasses).ArrayNum,local_68,(FNameLexicalLess)local_68);
          break;
        }
        pFVar11 = pFVar11 + 1;
        pFVar6 = pFVar6 + 1;
      }
    }
  }
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->ImportedClasses);
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    pwVar9 = ::LexToString(this->Extension);
    ::FString::operator=(&local_60,pwVar9);
    ::operator<<(param_1,&local_60);
  }
  else {
    ::operator<<(param_1,&local_60);
    iVar10 = local_60.Data.ArrayNum + -1;
    if (local_60.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    local_48.Size = iVar10;
    local_48.DataPtr = (wchar_t *)local_60.Data.AllocatorInstance.Data;
    EVar7 = FPackagePath::ParseExtension(&local_48,(int *)0x0);
    this->Extension = EVar7;
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// SerializeForCacheOldVersion @ 141ebb230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetPackageData::SerializeForCacheOldVersion
          (FAssetPackageData *this,FArchive *param_1,Type param_2)

{
  uint *puVar1;
  int *piVar2;
  long64 *plVar3;
  longlong *plVar4;
  int *piVar5;
  uint *puVar6;
  FName *pFVar7;
  byte bVar8;
  EPackageExtension EVar9;
  int iVar10;
  FPackageFileVersion FVar11;
  wchar_t *pwVar12;
  int iVar13;
  FName *pFVar14;
  undefined1 auStack_a8 [32];
  FIdentityFunctor local_88;
  uint local_84;
  FGuid local_80;
  TStringView<wchar_t> local_68;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  plVar3 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->DiskSize,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&this->DiskSize);
    }
  }
  else {
    this->DiskSize = *plVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if ((int)param_2 < 0x14) {
    local_80._0_8_ = (FScriptContainerElement *)0x0;
    local_80.C = 0;
    local_80.D = 0;
    ::operator<<(param_1,&local_80);
    if (5 < (int)param_2) goto LAB_141ebb2e3;
  }
  else {
    local_58 = 0;
    local_68.DataPtr = (wchar_t *)0x0;
    local_68.Size = 0;
    local_68._12_4_ = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,0x14);
LAB_141ebb2e3:
    ::operator<<(param_1,&this->CookedHash);
  }
  if ((int)param_2 < 0xd) {
    if ((int)param_2 < 9) goto LAB_141ebb42a;
    if (10 < (int)param_2) goto LAB_141ebb31f;
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_84,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_84);
      }
    }
    else {
      local_84 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    FVar11 = FPackageFileVersion::CreateUE4Version((int)&local_80);
    this->FileVersionUE = *(FPackageFileVersion *)FVar11;
  }
  else {
    TSetPrivateFriend::
    Serialize<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
                        *)&this->ChunkHashes);
LAB_141ebb31f:
    ::operator<<(param_1,&this->FileVersionUE);
  }
  piVar2 = &this->FileVersionLicenseeUE;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->Flags;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::AssetRegistry::operator<<(param_1,&this->CustomVersions);
LAB_141ebb42a:
  if ((int)param_2 < 10) {
    bVar8 = param_1->field_0x28 & 1;
  }
  else {
    if ((param_1->field_0x28 & 4) != 0) {
      pFVar14 = (FName *)(this->ImportedClasses).AllocatorInstance.Data;
      iVar13 = (this->ImportedClasses).ArrayNum;
      pFVar7 = pFVar14;
      if (iVar13 != 0) {
        while (iVar13 = iVar13 + -1, iVar13 != 0) {
          iVar10 = ::FName::Compare(pFVar7 + 1,pFVar14);
          if (iVar10 < 0) {
            AlgoImpl::IntroSortInternal<FName,int,FIdentityFunctor,FNameLexicalLess>
                      ((FName *)(this->ImportedClasses).AllocatorInstance.Data,
                       (this->ImportedClasses).ArrayNum,local_88,(FNameLexicalLess)local_88);
            break;
          }
          pFVar14 = pFVar14 + 1;
          pFVar7 = pFVar7 + 1;
        }
      }
    }
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
              (param_1,&this->ImportedClasses);
    bVar8 = param_1->field_0x28 & 1;
    if (0x10 < (int)param_2) {
      local_80._0_8_ = (FScriptContainerElement *)0x0;
      local_80.C = 0;
      local_80.D = 0;
      if (bVar8 == 0) {
        pwVar12 = ::LexToString(this->Extension);
        ::FString::operator=((FString *)&local_80,pwVar12);
        ::operator<<(param_1,(FString *)&local_80);
      }
      else {
        ::operator<<(param_1,(FString *)&local_80);
        iVar13 = local_80.C - 1;
        if (local_80.C == 0) {
          iVar13 = 0;
        }
        local_68.Size = iVar13;
        local_68.DataPtr = (wchar_t *)local_80._0_8_;
        EVar9 = FPackagePath::ParseExtension(&local_68,(int *)0x0);
        this->Extension = EVar9;
      }
      if ((FScriptContainerElement *)local_80._0_8_ == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free((void *)local_80._0_8_);
      return;
    }
  }
  if (bVar8 != 0) {
    this->Extension = Unspecified;
  }
  return;
}

// SetPackageSavedHash @ 141ebc3d0

void __thiscall FAssetPackageData::SetPackageSavedHash(FAssetPackageData *this,FIoHash *param_1)

{
  return;
}

// TryNetworkRead @ 141ec2350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FAssetPackageData::TryNetworkRead(FAssetPackageData *this,FCbFieldView *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  FCbArrayView *this_00;
  ulong64 uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 auStackY_338 [32];
  undefined1 local_2f8 [8];
  TCbFieldIterator<FCbFieldView> local_2f0;
  undefined8 local_2d8;
  void *pvStack_2d0;
  TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> local_2c8;
  TArray<TTuple<FIoChunkId,FIoHash>,TSizedDefaultAllocator<32>_> local_2b8;
  FPackageCustomVersion *local_2a8;
  void *pvStack_2a0;
  TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> local_298;
  undefined1 local_288 [16];
  TPairInitializer<FIoChunkId_const_&,FIoHash_const_&> local_278;
  undefined8 local_268;
  void *pvStack_260;
  TCbFieldIterator<FCbFieldView> local_258;
  undefined8 local_238;
  void *pvStack_230;
  undefined8 local_228;
  void *pvStack_220;
  undefined8 local_218;
  void *pvStack_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  undefined8 local_1f8;
  void *pvStack_1f0;
  undefined8 local_1e8;
  void *pvStack_1e0;
  undefined8 local_1d8;
  void *pvStack_1d0;
  undefined1 local_1c8;
  uint7 uStack_1c7;
  undefined8 uStack_1c0;
  uchar local_1b8;
  FPackageCustomVersion *local_1a8;
  void *pvStack_1a0;
  FCbFieldView local_198;
  FPackageCustomVersion *local_188;
  void *pvStack_180;
  void *local_178;
  FPackageCustomVersion *local_170;
  void *pvStack_168;
  void *local_160;
  FPackageCustomVersion *local_158;
  void *pvStack_150;
  void *local_148;
  FPackageCustomVersion *local_140;
  void *pvStack_138;
  void *local_130;
  FPackageCustomVersion *local_128;
  void *pvStack_120;
  void *local_118;
  FPackageCustomVersion *local_110;
  void *pvStack_108;
  void *local_100;
  FPackageCustomVersion *local_f8;
  void *pvStack_f0;
  void *local_e8;
  FPackageCustomVersion *local_e0;
  void *pvStack_d8;
  void *local_d0;
  FPackageCustomVersion *local_c8;
  void *pvStack_c0;
  void *local_b8;
  FPackageCustomVersion *local_b0;
  void *pvStack_a8;
  void *local_a0;
  FCbArrayView local_98 [2];
  FIoHash local_70;
  FIoHash local_5c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)&local_2f0);
  local_2d8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_2d0 = (void *)local_2f0._padding_;
  local_140 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_138 = (void *)local_2f0._padding_;
  local_130 = local_2f0.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_238 = local_2d8;
  pvStack_230 = pvStack_2d0;
  bVar4 = FCbFieldView::AsBool((FCbFieldView *)&local_238,false);
  bVar13 = local_238._1_1_ == None;
  if (bVar4) {
    local_188 = (FPackageCustomVersion *)local_2f0._padding_;
    pvStack_180 = (void *)local_2f0._padding_;
    local_178 = local_2f0.FieldsEnd;
    TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
    bVar4 = FMD5Hash::LoadFromCompactBinary(&this->CookedHash,(FCbFieldView *)&local_188);
    bVar13 = bVar13 && bVar4;
  }
  else {
    local_1c8 = 0;
    lVar3 = (ulonglong)uStack_1c7 << 8;
    (this->CookedHash).bIsValid = (bool)(char)lVar3;
    (this->CookedHash).Bytes[0] = (char)((ulonglong)lVar3 >> 8);
    (this->CookedHash).Bytes[1] = (char)((ulonglong)lVar3 >> 0x10);
    (this->CookedHash).Bytes[2] = (char)((ulonglong)lVar3 >> 0x18);
    (this->CookedHash).Bytes[3] = (char)((ulonglong)lVar3 >> 0x20);
    (this->CookedHash).Bytes[4] = (char)((ulonglong)lVar3 >> 0x28);
    (this->CookedHash).Bytes[5] = (char)((ulonglong)lVar3 >> 0x30);
    (this->CookedHash).Bytes[6] = (char)((ulonglong)lVar3 >> 0x38);
    *(undefined8 *)((this->CookedHash).Bytes + 7) = uStack_1c0;
    (this->CookedHash).Bytes[0xf] = local_1b8;
  }
  local_2d8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_2d0 = (void *)local_2f0._padding_;
  local_128 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_120 = (void *)local_2f0._padding_;
  local_118 = local_2f0.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_228 = local_2d8;
  pvStack_220 = pvStack_2d0;
  bVar5 = FCbFieldView::AsBool((FCbFieldView *)&local_228,false);
  bVar4 = false;
  if (local_228._1_1_ == None) {
    bVar4 = bVar13;
  }
  if (bVar5) {
    local_70.Hash[0] = '\0';
    local_70.Hash[1] = '\0';
    local_70.Hash[2] = '\0';
    local_70.Hash[3] = '\0';
    local_70.Hash[4] = '\0';
    local_70.Hash[5] = '\0';
    local_70.Hash[6] = '\0';
    local_70.Hash[7] = '\0';
    local_70.Hash[8] = '\0';
    local_70.Hash[9] = '\0';
    local_70.Hash[10] = '\0';
    local_70.Hash[0xb] = '\0';
    local_70.Hash[0xc] = '\0';
    local_70.Hash[0xd] = '\0';
    local_70.Hash[0xe] = '\0';
    local_70.Hash[0xf] = '\0';
    local_70.Hash[0x10] = '\0';
    local_70.Hash[0x11] = '\0';
    local_70.Hash[0x12] = '\0';
    local_70.Hash[0x13] = '\0';
    local_2d8 = (FPackageCustomVersion *)local_2f0._padding_;
    pvStack_2d0 = (void *)local_2f0._padding_;
    local_110 = (FPackageCustomVersion *)local_2f0._padding_;
    pvStack_108 = (void *)local_2f0._padding_;
    local_100 = local_2f0.FieldsEnd;
    TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
    local_218 = local_2d8;
    pvStack_210 = pvStack_2d0;
    FCbFieldView::AsHash((FCbFieldView *)&local_218,&local_5c,&local_70);
    bVar4 = (bool)(bVar4 & local_218._1_1_ == None);
  }
  local_2d8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_2d0 = (void *)local_2f0._padding_;
  local_f8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_f0 = (void *)local_2f0._padding_;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = local_2f0.FieldsEnd;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_1a8 = local_2d8;
  pvStack_1a0 = pvStack_2d0;
  bVar13 = LoadFromCompactBinary<TTuple<FIoChunkId,FIoHash>,TSizedDefaultAllocator<32>_>
                     ((FCbFieldView *)&local_1a8,&local_2b8);
  if (bVar13) {
    TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
             *)&this->ChunkHashes,local_2b8.ArrayNum);
    iVar8 = local_2b8.ArrayNum;
    uVar9 = (ulonglong)local_2b8.ArrayNum;
    pFVar12 = local_2b8.AllocatorInstance.Data + uVar9 * 0x20;
    FVar11.Data = local_2b8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar8) {
        local_2f8[0] = 0;
        `TCheckedPointerIterator<TTuple<FIoChunkId,FIoHash>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2f8);
      }
      if (FVar11.Data == pFVar12) break;
      local_200 = FVar11.Data + 0xc;
      local_208 = FVar11.Data;
      TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoChunkId_const_&,FIoHash_const_&>_>
                ((TSet<TTuple<FIoChunkId,FIoHash>,TDefaultMapHashableKeyFuncs<FIoChunkId,FIoHash,0>,FDefaultSetAllocator>
                  *)&this->ChunkHashes,&local_278,(bool *)&local_208);
      uVar9 = local_2b8._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 0x20;
    }
  }
  else {
    bVar4 = false;
  }
  local_2d8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_2d0 = (void *)local_2f0._padding_;
  local_e0 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_d8 = (void *)local_2f0._padding_;
  local_d0 = local_2f0.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_268 = local_2d8;
  pvStack_260 = pvStack_2d0;
  this_00 = FCbFieldView::AsArrayView((FCbFieldView *)&local_268,local_98);
  uVar10 = FCbArrayView::Num(this_00);
  if (uVar10 < 0x80000000) {
    iVar8 = (int)uVar10;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10 & 0xffffffff);
    }
    piVar1 = &(this->ImportedClasses).ArrayMax;
    (this->ImportedClasses).ArrayNum = 0;
    if ((this->ImportedClasses).ArrayMax < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar8,&(this->ImportedClasses).AllocatorInstance,0,piVar1);
    }
    bVar13 = local_268._1_1_ == None;
    FCbFieldView::CreateViewIterator((FCbFieldView *)&local_268,(FCbFieldViewIterator *)&local_258);
    while (((byte)local_258._padding_ & 0x1f) != 0) {
      iVar8 = (this->ImportedClasses).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->ImportedClasses).AllocatorInstance,piVar1);
      }
      (this->ImportedClasses).ArrayNum = iVar8 + 1;
      pFVar12 = (this->ImportedClasses).AllocatorInstance.Data;
      *(undefined8 *)(pFVar12 + (longlong)iVar8 * 8) = 0;
      local_198.Value = (void *)local_258._padding_;
      bVar5 = ::LoadFromCompactBinary(&local_198,(FName *)(pFVar12 + (longlong)iVar8 * 8));
      bVar13 = (bool)(bVar13 & bVar5);
      TCbFieldIterator<FCbFieldView>::operator++(&local_258);
    }
  }
  else {
    UE::Serialization::Private::LogFieldTooLargeForArrayWarning(uVar10);
    bVar13 = false;
  }
  local_2a8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_2a0 = (void *)local_2f0._padding_;
  local_c8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_c0 = (void *)local_2f0._padding_;
  local_b8 = local_2f0.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_1e8 = local_2a8;
  pvStack_1e0 = pvStack_2a0;
  uVar10 = FCbFieldView::AsInteger((FCbFieldView *)&local_1e8,0,(FIntegerParams)0x7f);
  this->DiskSize = uVar10;
  local_170 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_168 = (void *)local_2f0._padding_;
  local_160 = local_2f0.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  bVar6 = FPackageFileVersion::TryRead(&this->FileVersionUE,(FCbFieldView *)&local_170);
  local_2a8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_2a0 = (void *)local_2f0._padding_;
  local_b0 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_a8 = (void *)local_2f0._padding_;
  local_a0 = local_2f0.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_1f8 = local_2a8;
  pvStack_1f0 = pvStack_2a0;
  uVar10 = FCbFieldView::AsInteger((FCbFieldView *)&local_1f8,0,(FIntegerParams)0x3f);
  this->FileVersionLicenseeUE = (int)uVar10;
  bVar5 = false;
  if (local_1f8._1_1_ == None) {
    bVar5 = bVar6;
  }
  local_2a8 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_2a0 = (void *)local_2f0._padding_;
  bVar6 = false;
  if (local_1e8._1_1_ == None) {
    bVar6 = bVar13;
  }
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  local_158 = (FPackageCustomVersion *)local_2f0._padding_;
  pvStack_150 = (void *)local_2f0._padding_;
  local_148 = local_2f0.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  bVar13 = LoadFromCompactBinary<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>
                     ((FCbFieldView *)&local_2a8,&local_298);
  FVar11.Data = local_298.AllocatorInstance.Data;
  if (bVar13) {
    iVar8 = local_298.ArrayNum;
    if ((local_298.ArrayNum < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_2c8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar8,0,&local_2c8.AllocatorInstance,iVar8,&local_2c8.ArrayMax);
      memcpy(local_2c8.AllocatorInstance.Data,FVar11.Data,(longlong)iVar8 * 0x14);
    }
    UE::AssetRegistry::FPackageCustomVersionRegistry::FindOrAdd
              (&UE::AssetRegistry::GFPackageCustomVersionRegistry,
               (FPackageCustomVersionsHandle *)local_288,&local_2c8);
    if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.AllocatorInstance.Data);
    }
    (this->CustomVersions).Ptr.DataPtr = (FPackageCustomVersion *)local_288._0_8_;
    *(undefined8 *)&(this->CustomVersions).Ptr.ArrayNum = local_288._8_8_;
  }
  local_288._0_8_ = local_2f0._padding_;
  local_288._8_8_ = local_2f0._padding_;
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_1d8 = (FPackageCustomVersion *)local_288._0_8_;
  pvStack_1d0 = (void *)local_288._8_8_;
  uVar10 = FCbFieldView::AsInteger((FCbFieldView *)&local_1d8,0,(FIntegerParams)0x40);
  this->Flags = (uint)uVar10;
  local_288._0_8_ = local_2f0._padding_;
  local_288._8_8_ = local_2f0._padding_;
  bVar13 = false;
  if (local_1d8._1_1_ == None) {
    bVar13 = (bool)(bVar5 & bVar6 & bVar4);
  }
  TCbFieldIterator<FCbFieldView>::operator++(&local_2f0);
  local_2d8 = (FPackageCustomVersion *)local_288._0_8_;
  pvStack_2d0 = (void *)local_288._8_8_;
  uVar10 = FCbFieldView::AsInteger((FCbFieldView *)&local_2d8,0,(FIntegerParams)0x10);
  if ((local_2d8._1_1_ == None) && ((EPackageExtension)uVar10 < Count)) {
    this->Extension = (EPackageExtension)uVar10;
  }
  else {
    bVar13 = false;
  }
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return bVar13;
}

