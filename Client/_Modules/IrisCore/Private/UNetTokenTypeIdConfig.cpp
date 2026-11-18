// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// StaticClass @ 14425ddf0

UClass * __cdecl UNetTokenTypeIdConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetTokenTypeIdConfig",
               &Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton,
               StaticRegisterNativesUNetTokenTypeIdConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetTokenTypeIdConfig>,
               InternalVTableHelperCtorCaller<UNetTokenTypeIdConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton;
}

// UNetTokenTypeIdConfig @ 144267c00

UNetTokenTypeIdConfig * __thiscall
UNetTokenTypeIdConfig::UNetTokenTypeIdConfig(UNetTokenTypeIdConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetTokenTypeIdConfig__6B_;
  (this->ReservedTypeIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReservedTypeIds).ArrayNum = 0;
  (this->ReservedTypeIds).ArrayMax = 0;
  return this;
}

// UNetTokenTypeIdConfig @ 144267c40

UNetTokenTypeIdConfig * __thiscall
UNetTokenTypeIdConfig::UNetTokenTypeIdConfig
          (UNetTokenTypeIdConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetTokenTypeIdConfig__6B_;
  (this->ReservedTypeIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReservedTypeIds).ArrayNum = 0;
  (this->ReservedTypeIds).ArrayMax = 0;
  return this;
}

// ~UNetTokenTypeIdConfig @ 144269480

void __thiscall UNetTokenTypeIdConfig::~UNetTokenTypeIdConfig(UNetTokenTypeIdConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetTokenTypeIdConfig__6B_;
  DestructItems<FNetTokenStoreTypeIdPair,int>
            ((FNetTokenStoreTypeIdPair *)(this->ReservedTypeIds).AllocatorInstance.Data,
             (this->ReservedTypeIds).ArrayNum);
  pFVar1 = (this->ReservedTypeIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14427c290

UClass * __cdecl UNetTokenTypeIdConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetTokenTypeIdConfig",
               &Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton,
               StaticRegisterNativesUNetTokenTypeIdConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetTokenTypeIdConfig>,
               InternalVTableHelperCtorCaller<UNetTokenTypeIdConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetTokenTypeIdConfig.InnerSingleton;
}

// GetTypeID @ 14427cf20

/* WARNING: Type propagation algorithm not settling */

uint __thiscall UNetTokenTypeIdConfig::GetTypeID(UNetTokenTypeIdConfig *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar5 = ReservedTypeIdsAppearValid(this);
  if ((!bVar5) &&
     (local_res18[0] = bVar5,
     bVar5 = `UNetTokenTypeIdConfig::GetTypeID'::__l3::<lambda_1>::operator()(local_res18), !bVar5))
  {
    return 0xffffffff;
  }
  iVar2 = (this->ReservedTypeIds).ArrayNum;
  pFVar8 = (this->ReservedTypeIds).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
  do {
    if ((this->ReservedTypeIds).ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNetTokenStoreTypeIdPair_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar8 == pFVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenStore.cpp"
                         ,0x247,
                         L"Unknown Token Store Type %s. StoreType MUST be declared in Engine.ini.");
      if (!bVar5) {
        return 0xffffffff;
      }
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    iVar6 = *(int *)(pFVar8 + 8);
    iVar3 = (param_1->Data).ArrayNum;
    if (iVar6 == iVar3) {
      if (iVar6 < 2) {
LAB_14427cfb9:
        return *(uint *)(pFVar8 + 0x10);
      }
      iVar6 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar8,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
    }
    else {
      bVar5 = iVar6 + iVar3 == 1;
    }
    if (bVar5) goto LAB_14427cfb9;
    pFVar8 = pFVar8 + 0x18;
  } while( true );
}

// ReservedTypeIdsAppearValid @ 1442903a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UNetTokenTypeIdConfig::ReservedTypeIdsAppearValid(UNetTokenTypeIdConfig *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  ForElementType<FSetElementId> FVar9;
  FScriptContainerElement *pFVar10;
  uint *puVar11;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [12];
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar2 = (this->ReservedTypeIds).ArrayNum;
  if (iVar2 == 0) {
    if (1 < (byte)LogNetToken._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
    }
    return false;
  }
  pFVar10 = (this->ReservedTypeIds).AllocatorInstance.Data;
  local_78.Elements._0_8_ = 0;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
  local_78.Elements._8_8_ = 0;
  local_78.Elements._32_8_ = 0;
  local_78.Elements._40_4_ = 0;
  local_78.Elements._44_4_ = 0x80;
  local_78.Elements._48_4_ = 0xffffffff;
  local_78.Elements._52_4_ = 0;
  local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_78.HashSize = 0;
  while( true ) {
    if ((this->ReservedTypeIds).ArrayNum != iVar2) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FNetTokenStoreTypeIdPair_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_a8);
    }
    if (pFVar10 == pFVar1) {
      bVar7 = true;
      goto LAB_14429060f;
    }
    if ((7 < *(uint *)(pFVar10 + 0x10)) &&
       (local_a4._4_8_ = pFVar10,
       bVar7 = `UNetTokenTypeIdConfig::ReservedTypeIdsAppearValid'::__l28::<lambda_1>::operator()
                         (local_a4 + 4), !bVar7)) break;
    if (local_78.Elements._8_4_ != local_78.Elements._52_4_) {
      FVar9 = (ForElementType<FSetElementId>)&local_78.Hash;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_78.Hash.SecondaryData;
      }
      for (iVar3 = *(int *)((longlong)FVar9 +
                           (ulonglong)(local_78.HashSize - 1U & *(uint *)(pFVar10 + 0x10)) * 4);
          iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + local_78.Elements._0_8_)) {
        if (*(uint *)((longlong)iVar3 * 0x20 + local_78.Elements._0_8_) == *(uint *)(pFVar10 + 0x10)
           ) {
          local_98 = &local_78;
          local_90 = pFVar10;
          bVar7 = `UNetTokenTypeIdConfig::ReservedTypeIdsAppearValid'::__l49::<lambda_2>::operator()
                            (&local_98);
          if (!bVar7) {
            if ((byte)LogNetToken._0_1_ < 2) goto LAB_144290602;
            uVar4 = *(uint *)(pFVar10 + 0x10);
            if (local_78.Elements._8_4_ == local_78.Elements._52_4_) goto LAB_1442905b9;
            FVar9 = (ForElementType<FSetElementId>)&local_78.Hash;
            if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar9 = local_78.Hash.SecondaryData;
            }
            uVar5 = *(uint *)((longlong)FVar9 + (ulonglong)(local_78.HashSize - 1U & uVar4) * 4);
            goto joined_r0x000144290591;
          }
          break;
        }
      }
    }
    local_88 = pFVar10 + 0x10;
    local_80 = pFVar10;
    TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FString_const_&>_>
              (&local_78,(TPairInitializer<unsigned_int_const_&,FString_const_&> *)local_a4,
               (bool *)&local_88);
    pFVar10 = pFVar10 + 0x18;
  }
  if ((byte)LogNetToken._0_1_ < 2) goto LAB_144290602;
  local_b8 = 8;
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
  bVar7 = false;
  goto LAB_14429060f;
joined_r0x000144290591:
  if (uVar5 == 0xffffffff) goto LAB_1442905b9;
  puVar11 = (uint *)((longlong)(int)uVar5 * 0x20 + local_78.Elements._0_8_);
  if (*puVar11 == uVar4) {
    if (puVar11 != (uint *)0x0) goto LAB_1442905db;
    goto LAB_1442905b9;
  }
  uVar5 = puVar11[6];
  goto joined_r0x000144290591;
LAB_1442905b9:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
LAB_1442905db:
  local_b8 = uVar4;
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
LAB_144290602:
  bVar7 = false;
LAB_14429060f:
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  return bVar7;
}

// StaticRegisterNativesUNetTokenTypeIdConfig @ 144297ab0

void __cdecl UNetTokenTypeIdConfig::StaticRegisterNativesUNetTokenTypeIdConfig(void)

{
  return;
}

// operator() @ 1504b4e50

bool __thiscall `UNetTokenTypeIdConfig::GetTypeID'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1928611023674147388>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1928611023674147388>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b5fe0

bool __thiscall
`UNetTokenTypeIdConfig::ReservedTypeIdsAppearValid'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1928611023674147413>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<1928611023674147413>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 1504b7110

bool __thiscall
`UNetTokenTypeIdConfig::ReservedTypeIdsAppearValid'::__l49::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1928611023674147418>);
  if (bVar2) {
    TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
    ::FindChecked(*(TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
                    **)this,*(uint *)(*(longlong *)((longlong)this + 8) + 0x10));
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1928611023674147418>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

