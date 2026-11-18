// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// StaticClass @ 1420e25b0

UClass * __cdecl UDEPRECATED_MetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MetaData",
               &Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_MetaData,200,8,CLASS_Intrinsic|CLASS_Deprecated,
               CASTCLASS_None,L"Engine",InternalConstructor<UDEPRECATED_MetaData>,
               InternalVTableHelperCtorCaller<UDEPRECATED_MetaData>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton;
}

// UDEPRECATED_MetaData @ 1420eaa00

UDEPRECATED_MetaData * __thiscall
UDEPRECATED_MetaData::UDEPRECATED_MetaData(UDEPRECATED_MetaData *this,FVTableHelper *param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  EnsureRetrievingVTablePtrDuringCtor(L"UObject(FVTableHelper& Helper)");
  this->_padding_ = (longlong)&___7UDEPRECATED_MetaData__6B_;
  *(undefined8 *)&this->ObjectMetaDataMap = 0;
  *(undefined8 *)&(this->ObjectMetaDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectMetaDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectMetaDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x48 = 0;
  *(undefined8 *)&this->RootMetaDataMap = 0;
  *(undefined8 *)&(this->RootMetaDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->RootMetaDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RootMetaDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x48 = 0;
  return this;
}

// UDEPRECATED_MetaData @ 1420eaaa0

UDEPRECATED_MetaData * __thiscall
UDEPRECATED_MetaData::UDEPRECATED_MetaData(UDEPRECATED_MetaData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_MetaData__6B_;
  *(undefined8 *)&this->ObjectMetaDataMap = 0;
  *(undefined8 *)&(this->ObjectMetaDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectMetaDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectMetaDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x48 = 0;
  *(undefined8 *)&this->RootMetaDataMap = 0;
  *(undefined8 *)&(this->RootMetaDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->RootMetaDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RootMetaDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x48 = 0;
  return this;
}

// ~UDEPRECATED_MetaData @ 1420ec620

void __thiscall UDEPRECATED_MetaData::~UDEPRECATED_MetaData(UDEPRECATED_MetaData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_MetaData__6B_;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RootMetaDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RootMetaDataMap);
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectMetaDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectMetaDataMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1420fcb70

UClass * __cdecl UDEPRECATED_MetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MetaData",
               &Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_MetaData,200,8,CLASS_Intrinsic|CLASS_Deprecated,
               CASTCLASS_None,L"Engine",InternalConstructor<UDEPRECATED_MetaData>,
               InternalVTableHelperCtorCaller<UDEPRECATED_MetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton;
}

// InitializeRedirectMap @ 1420fec10

void __cdecl UDEPRECATED_MetaData::InitializeRedirectMap(void)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  FName *pFVar4;
  FName FVar5;
  FConfigSection *pFVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  TPairInitializer<FName_const_&,FName_const_&> local_res10;
  FName local_res20;
  FName local_c8;
  FConfigSection *local_c0;
  int iStack_b8;
  uint uStack_b4;
  longlong *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  FConfigSection *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  FName **local_68;
  FName *local_60;
  FString local_58;
  FString local_48;
  
  if ((!bKeyRedirectMapInitialized) && (GConfig != (FConfigCacheIni *)0x0)) {
    ::FName::FName(&local_c8,L"MetadataRedirects");
    local_c0 = FConfigCacheIni::GetSection(GConfig,L"CoreUObject.Metadata",false,&GEngineIni);
    if (local_c0 != (FConfigSection *)0x0) {
      local_b0 = &local_c0->_padding_;
      iVar2 = (int)local_c0->_padding_;
      uStack_b4 = 1;
      iStack_b8 = 0;
      local_a0 = 0;
      iStack_a4 = 0;
      if (iVar2 != 0) {
        plVar12 = (longlong *)local_c0->_padding_;
        if ((longlong *)local_c0->_padding_ == (longlong *)0x0) {
          plVar12 = local_b0;
        }
        uVar8 = (uint)*plVar12;
        local_a0 = 0;
        iStack_b8 = 0;
        while (uVar8 == 0) {
          lVar10 = (longlong)iStack_b8;
          local_a0 = local_a0 + 0x20;
          iStack_b8 = iStack_b8 + 1;
          iStack_a4 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_1420fed1e;
          uVar8 = *(uint *)((longlong)plVar12 + lVar10 * 4 + 4);
        }
        uStack_b4 = -uVar8 & uVar8;
        uVar1 = (ulonglong)uStack_b4 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iStack_a4 = local_a0 + -1 + (int)lVar10;
        if (iVar2 < iStack_a4) {
          iStack_a4 = iVar2;
        }
      }
LAB_1420fed1e:
      uStack_a8 = 0xffffffff;
      TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
      TStack_88.UnvisitedBitMask = 0xffffffff;
      TStack_88._28_4_ = iStack_a4;
      TStack_88.BaseBitIndex = local_a0;
      iStack_9c = iStack_a4;
      local_90 = local_c0;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
      TStack_88.CurrentBitIndex = iStack_a4;
      if (iStack_a4 < iVar2) {
        do {
          pFVar6 = local_90;
          lVar10 = (longlong)TStack_88.CurrentBitIndex;
          if (*(FName *)(local_90->_padding_ + (longlong)TStack_88.CurrentBitIndex * 0x28) ==
              local_c8) {
            local_res10.Value = (FName *)0x0;
            local_res20.ComparisonIndex.Value = 0;
            local_res20.Number = 0;
            pFVar9 = FConfigValue::GetValue
                               ((FConfigValue *)(local_90->_padding_ + 8 + lVar10 * 0x28),&local_58)
            ;
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar11,L"OldKey=",(FName *)&local_res10.Value);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            pFVar9 = FConfigValue::GetValue
                               ((FConfigValue *)(pFVar6->_padding_ + 8 + lVar10 * 0x28),&local_48);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar11,L"NewKey=",&local_res20);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (((FName)local_res10.Value == local_res20) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OldKey != NewKey",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\MetaData.cpp"
                                   ,0x121,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((FName)local_res10.Value == (FName)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OldKey != NAME_None",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\MetaData.cpp"
                                   ,0x122,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_res20 == (FName)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewKey != NAME_None",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\MetaData.cpp"
                                   ,0x123,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar4 = local_res10.Value;
            uVar8 = ::GetTypeHash((FNameEntryId)(uint)local_res10.Value);
            if (KeyRedirectMap._8_4_ != KeyRedirectMap._52_4_) {
              lVar10 = 0x154b8ef48;
              if (KeyRedirectMap._64_8_ != 0) {
                lVar10 = KeyRedirectMap._64_8_;
              }
              for (iVar2 = *(int *)(lVar10 + (ulonglong)
                                             (KeyRedirectMap._72_4_ - 1 &
                                             (uint)((ulonglong)pFVar4 >> 0x20) + uVar8) * 4);
                  iVar2 != -1;
                  iVar2 = *(int *)(KeyRedirectMap._0_8_ + 0x10 + (longlong)iVar2 * 0x18)) {
                if (*(FName *)(KeyRedirectMap._0_8_ + (longlong)iVar2 * 0x18) == (FName)pFVar4) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!KeyRedirectMap.Contains(OldKey)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\MetaData.cpp"
                                     ,0x124,L"");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  break;
                }
              }
            }
            FVar5 = local_res20;
            uVar8 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
            if (KeyRedirectMap._8_4_ != KeyRedirectMap._52_4_) {
              lVar10 = 0x154b8ef48;
              if (KeyRedirectMap._64_8_ != 0) {
                lVar10 = KeyRedirectMap._64_8_;
              }
              for (iVar2 = *(int *)(lVar10 + (ulonglong)
                                             (KeyRedirectMap._72_4_ - 1 & FVar5.Number + uVar8) * 4)
                  ; iVar2 != -1;
                  iVar2 = *(int *)(KeyRedirectMap._0_8_ + 0x10 + (longlong)iVar2 * 0x18)) {
                if (*(FName *)(KeyRedirectMap._0_8_ + (longlong)iVar2 * 0x18) == FVar5) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!KeyRedirectMap.Contains(NewKey)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\MetaData.cpp"
                                     ,0x125,L"");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  break;
                }
              }
            }
            local_68 = &local_res10.Value;
            local_60 = &local_res20;
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                      ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)&KeyRedirectMap,&local_res10,(bool *)&local_68);
          }
          TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
        } while (TStack_88.CurrentBitIndex < (int)*(longlong *)&(TStack_88.Array)->NumBits);
      }
    }
    bKeyRedirectMapInitialized = true;
  }
  return;
}

// IsAsset @ 1420ff3e0

bool __thiscall UDEPRECATED_MetaData::IsAsset(UDEPRECATED_MetaData *this)

{
  return false;
}

// NeedsLoadForEditorGame @ 142102a50

bool __thiscall UDEPRECATED_MetaData::NeedsLoadForEditorGame(UDEPRECATED_MetaData *this)

{
  return true;
}

// Serialize @ 14210e400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014210ecf7) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDEPRECATED_MetaData::Serialize(UDEPRECATED_MetaData *this,FArchive *param_1)

{
  TMap<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTVar1;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this_00;
  TTuple<FName,FString> *pTVar2;
  ForElementType<TTuple<FName,FString>_> FVar3;
  uchar *puVar4;
  void *pvVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ForElementType<FSetElementId> FVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  int iVar21;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar22;
  longlong lVar23;
  TTuple<FName,FName> *pTVar24;
  UObject *this_02;
  longlong lVar25;
  ulonglong uVar26;
  ForElementType<TTuple<FName,FString>_> FVar27;
  uint uVar28;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_03;
  int iVar29;
  undefined1 auStackY_8c8 [32];
  undefined1 local_878 [8];
  FName local_870;
  FName local_868;
  undefined8 local_860;
  undefined8 local_858;
  FName local_850;
  ForAnyElementType local_848;
  int local_840;
  int local_83c;
  longlong *local_838;
  undefined1 auStack_830 [16];
  uint uStack_820;
  uint uStack_81c;
  longlong local_818;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTStack_810;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *local_808;
  undefined2 local_800;
  longlong *local_7f8;
  undefined1 auStack_7f0 [16];
  uint uStack_7e0;
  uint uStack_7dc;
  longlong local_7d8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTStack_7d0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *local_7c8;
  undefined2 local_7c0;
  longlong *local_7b8;
  undefined1 auStack_7b0 [16];
  uint uStack_7a0;
  uint uStack_79c;
  longlong local_798;
  TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  *pTStack_790;
  TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  *local_788;
  undefined2 local_780;
  longlong *local_778;
  undefined1 auStack_770 [16];
  uint uStack_760;
  uint uStack_75c;
  longlong local_758;
  TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  *pTStack_750;
  TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  *local_748;
  undefined2 local_740;
  undefined4 local_738;
  undefined4 local_734;
  undefined1 local_730 [8];
  FName local_728;
  FName local_720;
  FName *local_718;
  ForAnyElementType *local_710;
  ForElementType<TTuple<FName,FString>_> local_708;
  uchar *local_700;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  undefined1 local_660 [32];
  longlong local_640;
  TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  *pTStack_638;
  undefined1 local_630 [32];
  longlong local_610;
  TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  *pTStack_608;
  undefined1 local_600 [32];
  longlong local_5e0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTStack_5d8;
  undefined1 local_5d0 [32];
  longlong local_5b0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTStack_5a8;
  undefined1 local_598 [32];
  void *local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  ForElementType<FSetElementId> FStack_560;
  undefined8 uStack_550;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_548;
  ForElementType<TTuple<FName,FString>_> local_4f8;
  int local_1f0;
  int local_1ec;
  FStructuredArchiveFromArchive local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1e8,param_1);
  FVar22 = FStructuredArchiveFromArchive::GetSlot(this_01);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar22);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1e8);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  iVar29 = 1;
  if ((param_1->field_0x28 & 4) != 0) {
    pTVar1 = &this->ObjectMetaDataMap;
    TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_660,
               (TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_780 = 0;
    stack0xfffffffffffff858 = local_660._16_16_;
    local_7b8 = (longlong *)local_660._0_8_;
    auStack_7b0._0_8_ = local_660._8_8_;
    local_798 = local_640;
    pTStack_790 = pTStack_638;
    uVar26 = local_660._24_8_ >> 0x20;
    local_788 = (TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if (local_660._28_4_ < *(int *)(local_660._16_8_ + 0x18)) {
      do {
        bVar20 = FWeakObjectPtr::IsValid
                           ((FWeakObjectPtr *)((longlong)(int)uVar26 * 0x60 + *local_7b8));
        if (!bVar20) {
          TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_790,(int)uVar26);
          local_780 = CONCAT11(local_780._1_1_,1);
        }
        uStack_7a0 = uStack_7a0 & ~auStack_7b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_7b0);
        uVar26 = (ulonglong)uStack_79c;
      } while ((int)uStack_79c < *(int *)(auStack_7b0._8_8_ + 0x18));
      if (((char)local_780 != '\0') && (local_780._1_1_ != '\0')) {
        uVar28 = *(int *)&(local_788->Elements).field_0x8 -
                 *(int *)&(local_788->Elements).field_0x34;
        if (uVar28 < 4) {
          iVar21 = 1;
        }
        else {
          uVar26 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
          lVar23 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_738 = (undefined4)lVar23;
          iVar21 = 1 << ((byte)lVar23 & 0x1f);
        }
        if (((0 < (int)uVar28) && (local_788->HashSize < iVar21)) || (iVar21 < local_788->HashSize))
        {
          local_788->HashSize = iVar21;
          TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_788);
        }
      }
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    TSetPrivateFriend::
    Serialize<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                        *)&this->ObjectMetaDataMap);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                        *)&this->RootMetaDataMap);
    return;
  }
  local_598._0_8_ = (FScriptContainerElement *)0x0;
  local_598._8_8_ = 0;
  local_578 = (void *)0x0;
  FStack_560.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_550 = (ulonglong)uStack_550._4_4_ << 0x20;
  uStack_570 = 0x8000000000;
  local_568 = 0xffffffff;
  TSetPrivateFriend::
  Serialize<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                      *)local_598);
  lVar23 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
  if (lVar23 == 0) {
LAB_14210e6ee:
    pFVar7 = *(FScriptContainerElement **)&this->ObjectMetaDataMap;
    uVar26 = *(ulonglong *)&(this->ObjectMetaDataMap).field_0x8;
    uVar8 = *(undefined8 *)&(this->ObjectMetaDataMap).field_0x10;
    uVar9 = *(undefined8 *)&(this->ObjectMetaDataMap).field_0x18;
    pvVar5 = *(void **)&(this->ObjectMetaDataMap).field_0x20;
    uVar10 = *(undefined8 *)&(this->ObjectMetaDataMap).field_0x28;
    uVar11 = *(undefined8 *)&(this->ObjectMetaDataMap).field_0x30;
    uVar14._0_1_ = (this->ObjectMetaDataMap).field_0x38;
    uVar14._1_1_ = (this->ObjectMetaDataMap).field_0x39;
    uVar14._2_1_ = (this->ObjectMetaDataMap).field_0x3a;
    uVar14._3_1_ = (this->ObjectMetaDataMap).field_0x3b;
    uVar14._4_4_ = *(int *)&(this->ObjectMetaDataMap).field_0x3c;
    FVar12 = *(ForElementType<FSetElementId> *)&(this->ObjectMetaDataMap).field_0x40;
    uVar13 = *(ulonglong *)&(this->ObjectMetaDataMap).field_0x48;
    *(undefined8 *)&this->ObjectMetaDataMap = local_598._0_8_;
    *(undefined8 *)&(this->ObjectMetaDataMap).field_0x8 = local_598._8_8_;
    *(undefined8 *)&(this->ObjectMetaDataMap).field_0x10 = local_598._16_8_;
    *(undefined8 *)&(this->ObjectMetaDataMap).field_0x18 = local_598._24_8_;
    *(void **)&(this->ObjectMetaDataMap).field_0x20 = local_578;
    *(longlong *)&(this->ObjectMetaDataMap).field_0x28 = uStack_570;
    *(undefined8 *)&(this->ObjectMetaDataMap).field_0x30 = local_568;
    (this->ObjectMetaDataMap).field_0x38 = FStack_560.InlineData[0];
    (this->ObjectMetaDataMap).field_0x39 = FStack_560.InlineData[1];
    (this->ObjectMetaDataMap).field_0x3a = FStack_560.InlineData[2];
    (this->ObjectMetaDataMap).field_0x3b = FStack_560.InlineData[3];
    *(int *)&(this->ObjectMetaDataMap).field_0x3c = FStack_560._padding_;
    *(ForElementType<FSetElementId> *)&(this->ObjectMetaDataMap).field_0x40 =
         FStack_560.SecondaryData;
    *(ulonglong *)&(this->ObjectMetaDataMap).field_0x48 = uStack_550;
    local_598._0_8_ = pFVar7;
    local_598._8_8_ = uVar26;
    local_598._16_8_ = uVar8;
    local_598._24_8_ = uVar9;
    local_578 = pvVar5;
    uStack_570 = uVar10;
    local_568 = uVar11;
    FStack_560._0_8_ = uVar14;
    FStack_560.SecondaryData = FVar12;
    uStack_550 = uVar13;
  }
  else {
    if (((uint)this->_padding_ >> 0x15 & 1) == 0) {
      if ((*(int *)&(this->ObjectMetaDataMap).field_0x8 !=
           *(int *)&(this->ObjectMetaDataMap).field_0x34) && (5 < (byte)LogMetaData._0_1_)) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_690,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaData);
        if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_690.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14210e6ee;
    }
    if (5 < (byte)LogMetaData._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_6a0,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaData);
      if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
      }
    }
  }
  uStack_550 = uStack_550 & 0xffffffff00000000;
  if (FStack_560.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_560.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_598,0,local_598._8_4_);
  iVar21 = SUB84(local_598._8_8_,4);
  local_598._8_8_ = local_598._8_8_ & 0xffffffff00000000;
  if (iVar21 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_598,0,(int *)(local_598 + 0xc));
  }
  uVar28 = uStack_570._4_4_;
  local_568 = 0xffffffff;
  uStack_570 = (ulonglong)uStack_570._4_4_ << 0x20;
  if (0x80 < uVar28) {
    uStack_570 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_598 + 0x10),0);
  }
  if (local_578 != (void *)0x0) {
    FMemory::Free(local_578);
  }
  if ((FScriptContainerElement *)local_598._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_598._0_8_);
  }
  iVar21 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (iVar21 < 3) goto LAB_14210ea2c;
  local_548.Elements._0_8_ = 0;
  local_548.Elements._8_8_ = 0;
  local_548.Elements._32_8_ = 0;
  local_548.Elements._40_8_ = 0x8000000000;
  local_548.Elements._48_8_ = 0xffffffff;
  local_548.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_548._72_8_ = local_548._72_8_ & 0xffffffff00000000;
  TSetPrivateFriend::
  Serialize<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            (param_1,&local_548);
  lVar23 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
  if (lVar23 == 0) {
LAB_14210e978:
    uVar8 = *(undefined8 *)&this->RootMetaDataMap;
    uVar9 = *(undefined8 *)&(this->RootMetaDataMap).field_0x8;
    uVar10 = *(undefined8 *)&(this->RootMetaDataMap).field_0x10;
    uVar11 = *(undefined8 *)&(this->RootMetaDataMap).field_0x18;
    uVar14 = *(undefined8 *)&(this->RootMetaDataMap).field_0x20;
    uVar15 = *(undefined8 *)&(this->RootMetaDataMap).field_0x28;
    uVar16 = *(undefined8 *)&(this->RootMetaDataMap).field_0x30;
    uVar17._0_1_ = (this->RootMetaDataMap).field_0x38;
    uVar17._1_1_ = (this->RootMetaDataMap).field_0x39;
    uVar17._2_1_ = (this->RootMetaDataMap).field_0x3a;
    uVar17._3_1_ = (this->RootMetaDataMap).field_0x3b;
    uVar17._4_4_ = *(int *)&(this->RootMetaDataMap).field_0x3c;
    FVar12 = *(ForElementType<FSetElementId> *)&(this->RootMetaDataMap).field_0x40;
    uVar26 = *(ulonglong *)&(this->RootMetaDataMap).field_0x48;
    *(undefined8 *)&this->RootMetaDataMap = local_548.Elements._0_8_;
    *(undefined8 *)&(this->RootMetaDataMap).field_0x8 = local_548.Elements._8_8_;
    *(undefined8 *)&(this->RootMetaDataMap).field_0x10 = local_548.Elements._16_8_;
    *(undefined8 *)&(this->RootMetaDataMap).field_0x18 = local_548.Elements._24_8_;
    *(undefined8 *)&(this->RootMetaDataMap).field_0x20 = local_548.Elements._32_8_;
    *(undefined8 *)&(this->RootMetaDataMap).field_0x28 = local_548.Elements._40_8_;
    *(undefined8 *)&(this->RootMetaDataMap).field_0x30 = local_548.Elements._48_8_;
    (this->RootMetaDataMap).field_0x38 = local_548.Hash.InlineData[0];
    (this->RootMetaDataMap).field_0x39 = local_548.Hash.InlineData[1];
    (this->RootMetaDataMap).field_0x3a = local_548.Hash.InlineData[2];
    (this->RootMetaDataMap).field_0x3b = local_548.Hash.InlineData[3];
    *(int *)&(this->RootMetaDataMap).field_0x3c = local_548.Hash._padding_;
    *(ForElementType<FSetElementId> *)&(this->RootMetaDataMap).field_0x40 =
         local_548.Hash.SecondaryData;
    *(int *)&(this->RootMetaDataMap).field_0x48 = local_548.HashSize;
    *(undefined4 *)&(this->RootMetaDataMap).field_0x4c = local_548._76_4_;
    local_548.Elements._0_8_ = uVar8;
    local_548.Elements._8_8_ = uVar9;
    local_548.Elements._16_8_ = uVar10;
    local_548.Elements._24_8_ = uVar11;
    local_548.Elements._32_8_ = uVar14;
    local_548.Elements._40_8_ = uVar15;
    local_548.Elements._48_8_ = uVar16;
    local_548.Hash._0_8_ = uVar17;
    local_548.Hash.SecondaryData = FVar12;
    local_548._72_8_ = uVar26;
  }
  else {
    if (((uint)this->_padding_ >> 0x15 & 1) == 0) {
      if ((*(int *)&(this->RootMetaDataMap).field_0x8 != *(int *)&(this->RootMetaDataMap).field_0x34
          ) && (5 < (byte)LogMetaData._0_1_)) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_670,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaData);
        if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_670.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14210e978;
    }
    if (5 < (byte)LogMetaData._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_680,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaData);
      if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_680.Data.AllocatorInstance.Data);
      }
    }
  }
  local_548._72_8_ = local_548._72_8_ & 0xffffffff00000000;
  if (local_548.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_548.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_548.Elements);
LAB_14210ea2c:
  InitializeRedirectMap();
  pTVar1 = &this->ObjectMetaDataMap;
  TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_630,
             (TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_740 = 0;
  local_778 = (longlong *)local_630._0_8_;
  auStack_770._0_8_ = local_630._8_8_;
  stack0xfffffffffffff898 = local_630._16_16_;
  local_758 = local_610;
  pTStack_750 = pTStack_608;
  uVar26 = local_630._24_8_ >> 0x20;
  local_748 = (TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_630._28_4_ < *(int *)(local_630._16_8_ + 0x18)) {
    do {
      plVar19 = local_778;
      local_1ec = 0x20;
      local_4f8.SecondaryData = (ForElementType<TTuple<FName,FString>_>)0x0;
      this_03 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                 *)(*local_778 + 8 + (longlong)(int)uVar26 * 0x60);
      local_1f0 = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_600,this_03);
      local_800 = 0;
      stack0xfffffffffffff7d8 = local_600._16_16_;
      local_838 = (longlong *)local_600._0_8_;
      auStack_830._0_8_ = local_600._8_8_;
      local_818 = local_5e0;
      pTStack_810 = pTStack_5d8;
      uVar26 = local_600._24_8_ >> 0x20;
      uVar28 = local_600._28_4_;
      local_808 = this_03;
      if ((int)uVar28 < *(int *)(local_600._16_8_ + 0x18)) {
        do {
          plVar18 = local_838;
          local_728 = *(FName *)((longlong)(int)uVar28 * 0x20 + *local_838);
          pTVar24 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                            *)&KeyRedirectMap,local_728);
          if (pTVar24 == (TTuple<FName,FName> *)0x0) {
            local_850.ComparisonIndex.Value = 0;
            local_850.Number = 0;
          }
          else {
            local_850.ComparisonIndex.Value = *(uint *)&pTVar24->field_0x8;
            local_850.Number = *(uint *)&pTVar24->field_0xc;
            uVar28 = (uint)uVar26;
          }
          if (local_850 != (FName)0x0) {
            lVar23 = *plVar18;
            lVar25 = (longlong)(int)uVar28 * 0x20;
            local_860 = *(undefined8 *)(lVar25 + 8 + lVar23);
            *(undefined8 *)(lVar25 + 8 + lVar23) = 0;
            local_858._4_4_ = *(undefined4 *)(lVar25 + 0x14 + lVar23);
            local_858._0_4_ = *(undefined4 *)(lVar25 + 0x10 + lVar23);
            *(undefined8 *)(lVar25 + 0x10 + lVar23) = 0;
            FVar27 = (ForElementType<TTuple<FName,FString>_>)&local_4f8;
            if (local_4f8.SecondaryData != (ForElementType<TTuple<FName,FString>_>)0x0) {
              FVar27 = local_4f8.SecondaryData;
            }
            local_868 = local_850;
            if ((ulonglong)FVar27 <= &local_868) {
              FVar27 = (ForElementType<TTuple<FName,FString>_>)&local_4f8;
              if (local_4f8.SecondaryData != (ForElementType<TTuple<FName,FString>_>)0x0) {
                FVar27 = local_4f8.SecondaryData;
              }
              if (((TTuple<FName,FString> *)&local_868 <
                   (TTuple<FName,FString> *)((longlong)FVar27 + (longlong)local_1ec * 0x18)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (local_1f0 == local_1ec) {
              local_1f0 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FName,FString>_>_>
                                    (0x818,&local_4f8,&local_1ec);
            }
            uVar8 = local_858;
            FVar27 = (ForElementType<TTuple<FName,FString>_>)&local_4f8;
            if (local_4f8.SecondaryData != (ForElementType<TTuple<FName,FString>_>)0x0) {
              FVar27 = local_4f8.SecondaryData;
            }
            lVar23 = (longlong)local_1f0;
            pTVar2 = (TTuple<FName,FString> *)((longlong)FVar27 + lVar23 * 0x18);
            local_1f0 = local_1f0 + 1;
            *(uint *)&pTVar2->field_0x0 = local_868.ComparisonIndex.Value;
            *(uint *)&pTVar2->field_0x4 = local_868.Number;
            puVar4 = (uchar *)((longlong)FVar27 + 8) + lVar23 * 0x18;
            puVar4[0] = '\0';
            puVar4[1] = '\0';
            puVar4[2] = '\0';
            puVar4[3] = '\0';
            puVar4[4] = '\0';
            puVar4[5] = '\0';
            puVar4[6] = '\0';
            puVar4[7] = '\0';
            puVar4 = (uchar *)((longlong)FVar27 + 8) + lVar23 * 0x18;
            puVar4[0] = (undefined1)local_860;
            puVar4[1] = local_860._1_1_;
            puVar4[2] = local_860._2_1_;
            puVar4[3] = local_860._3_1_;
            puVar4[4] = local_860._4_1_;
            puVar4[5] = local_860._5_1_;
            puVar4[6] = local_860._6_1_;
            puVar4[7] = local_860._7_1_;
            puVar4 = (uchar *)((longlong)FVar27 + 0x10) + lVar23 * 0x18;
            puVar4[0] = (undefined1)local_858;
            puVar4[1] = local_858._1_1_;
            puVar4[2] = local_858._2_1_;
            puVar4[3] = local_858._3_1_;
            local_858._4_4_ = SUB84(uVar8,4);
            puVar4 = (uchar *)((longlong)FVar27 + 0x14) + lVar23 * 0x18;
            puVar4[0] = local_858._4_1_;
            puVar4[1] = local_858._5_1_;
            puVar4[2] = local_858._6_1_;
            puVar4[3] = local_858._7_1_;
            local_858 = 0;
            local_860 = 0;
            TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_810,uStack_81c);
            local_800 = CONCAT11(local_800._1_1_,1);
            if (5 < (byte)LogMetaData._0_1_) {
              this_02 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((longlong)(int)uStack_75c * 0x60 + *plVar19));
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)this_02,&local_6d8,(UObject *)0x0);
              ::FName::ToString(&local_850,&local_6e8);
              ::FName::ToString(&local_728,&local_6f8);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaData);
              if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
              }
              if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
              }
              if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
              }
            }
          }
          uStack_820 = uStack_820 & ~auStack_830._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_830);
          uVar26 = (ulonglong)uStack_81c;
          uVar28 = uStack_81c;
        } while ((int)uStack_81c < *(int *)(auStack_830._8_8_ + 0x18));
        if (((char)local_800 != '\0') && (local_800._1_1_ != '\0')) {
          uVar28 = *(int *)&(local_808->Elements).field_0x8 -
                   *(int *)&(local_808->Elements).field_0x34;
          if (uVar28 < 4) {
            iVar21 = 1;
          }
          else {
            uVar26 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
            lVar23 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_734 = (undefined4)lVar23;
            iVar21 = 1 << ((byte)lVar23 & 0x1f);
          }
          if (((0 < (int)uVar28) && (local_808->HashSize < iVar21)) ||
             (iVar21 < local_808->HashSize)) {
            local_808->HashSize = iVar21;
            TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ::Rehash(local_808);
          }
        }
      }
      iVar21 = local_1f0;
      FVar27 = (ForElementType<TTuple<FName,FString>_>)&local_4f8;
      if (local_4f8.SecondaryData != (ForElementType<TTuple<FName,FString>_>)0x0) {
        FVar27 = local_4f8.SecondaryData;
      }
      FVar3 = (ForElementType<TTuple<FName,FString>_>)
              ((longlong)FVar27 + (longlong)local_1f0 * 0x18);
      while( true ) {
        if (local_1f0 != iVar21) {
          local_878[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_878);
        }
        if (FVar27 == FVar3) break;
        local_700 = (uchar *)((longlong)FVar27 + 8);
        local_708 = FVar27;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
                  (this_03,(TPairInitializer<FName_const_&,FString_const_&> *)local_730,
                   (bool *)&local_708);
        FVar27 = (ForElementType<TTuple<FName,FString>_>)((longlong)FVar27 + 0x18);
      }
      FVar27 = (ForElementType<TTuple<FName,FString>_>)&local_4f8;
      if (local_4f8.SecondaryData != (ForElementType<TTuple<FName,FString>_>)0x0) {
        FVar27 = local_4f8.SecondaryData;
      }
      DestructItems<TTuple<FName,FString>,int>((TTuple<FName,FString> *)FVar27,local_1f0);
      if (local_4f8.SecondaryData != (ForElementType<TTuple<FName,FString>_>)0x0) {
        FMemory::Free((void *)local_4f8.SecondaryData);
      }
      uStack_760 = uStack_760 & ~auStack_770._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_770);
      uVar26 = (ulonglong)uStack_75c;
    } while ((int)uStack_75c < *(int *)(auStack_770._8_8_ + 0x18));
    if (((char)local_740 != '\0') && (local_740._1_1_ != '\0')) {
      uVar28 = *(int *)&(local_748->Elements).field_0x8 - *(int *)&(local_748->Elements).field_0x34;
      if (uVar28 < 4) {
        iVar21 = 1;
      }
      else {
        uVar26 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((0 < (int)uVar28) && (local_748->HashSize < iVar21)) || (iVar21 < local_748->HashSize)) {
        local_748->HashSize = iVar21;
        TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_748);
      }
    }
  }
  this_00 = &this->RootMetaDataMap;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_5d0,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)this_00);
  local_7c0 = 0;
  stack0xfffffffffffff818 = local_5d0._16_16_;
  local_7f8 = (longlong *)local_5d0._0_8_;
  auStack_7f0._0_8_ = local_5d0._8_8_;
  local_7d8 = local_5b0;
  pTStack_7d0 = pTStack_5a8;
  uVar26 = local_5d0._24_8_ >> 0x20;
  uVar28 = local_5d0._28_4_;
  local_7c8 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)this_00;
  if ((int)uVar28 < *(int *)(local_5d0._16_8_ + 0x18)) {
    do {
      plVar19 = local_7f8;
      local_720 = *(FName *)((longlong)(int)uVar26 * 0x20 + *local_7f8);
      pTVar24 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)&KeyRedirectMap,local_720);
      if (pTVar24 == (TTuple<FName,FName> *)0x0) {
        local_870.ComparisonIndex.Value = 0;
        local_870.Number = 0;
      }
      else {
        local_870.ComparisonIndex.Value = *(uint *)&pTVar24->field_0x8;
        local_870.Number = *(uint *)&pTVar24->field_0xc;
      }
      if (local_870 != (FName)0x0) {
        local_848.Data = (FScriptContainerElement *)0x0;
        local_840 = *(int *)((longlong)(int)uVar28 * 0x20 + 0x10 + *plVar19);
        lVar23 = (longlong)local_840;
        pvVar5 = *(void **)((longlong)(int)uVar28 * 0x20 + 8 + *plVar19);
        if (local_840 == 0) {
          local_83c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_840,0,&local_848,local_840,&local_83c);
          memcpy(local_848.Data,pvVar5,lVar23 * 2);
        }
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_7d0,uVar28);
        local_718 = &local_870;
        local_7c0 = CONCAT11(local_7c0._1_1_,1);
        local_710 = &local_848;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
                  ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                    *)this_00,(TPairInitializer<FName_const_&,FString_const_&> *)(local_730 + 4),
                   (bool *)&local_718);
        if (5 < (byte)LogMetaData._0_1_) {
          ::FName::ToString(&local_870,&local_6b8);
          ::FName::ToString(&local_720,&local_6c8);
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Remapping_old_m_1508512d0,
                     (FLogCategoryBase *)&LogMetaData);
          if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
          }
          if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
          }
        }
        if (local_848.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_848.Data);
        }
      }
      uStack_7e0 = uStack_7e0 & ~auStack_7f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_7f0);
      uVar26 = (ulonglong)uStack_7dc;
      uVar28 = uStack_7dc;
    } while ((int)uStack_7dc < *(int *)(auStack_7f0._8_8_ + 0x18));
    if (((char)local_7c0 != '\0') && (local_7c0._1_1_ != '\0')) {
      uVar28 = *(int *)&(local_7c8->Elements).field_0x8 - *(int *)&(local_7c8->Elements).field_0x34;
      if (3 < uVar28) {
        uVar26 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar29 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((0 < (int)uVar28) && (local_7c8->HashSize < iVar29)) || (iVar29 < local_7c8->HashSize)) {
        local_7c8->HashSize = iVar29;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::Rehash(local_7c8);
      }
    }
  }
  return;
}

// Serialize @ 14210f240

void __thiscall
UDEPRECATED_MetaData::Serialize(UDEPRECATED_MetaData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUDEPRECATED_MetaData @ 142116500

void __cdecl UDEPRECATED_MetaData::StaticRegisterNativesUDEPRECATED_MetaData(void)

{
  return;
}

