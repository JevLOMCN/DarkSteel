// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 43

// StaticClass @ 14d0d1170

UClass * __cdecl UNamingTokensEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"NamingTokensEngineSubsystem",
               &Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUNamingTokensEngineSubsystem,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNamingTokensEngineSubsystem>,
               InternalVTableHelperCtorCaller<UNamingTokensEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton;
}

// UNamingTokensEngineSubsystem @ 14d0d4e40

UNamingTokensEngineSubsystem * __thiscall
UNamingTokensEngineSubsystem::UNamingTokensEngineSubsystem
          (UNamingTokensEngineSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UNamingTokensEngineSubsystem__6B_;
  *(undefined8 *)&this->CachedNamingTokens = 0;
  *(undefined8 *)&(this->CachedNamingTokens).field_0x8 = 0;
  *(undefined8 *)&(this->CachedNamingTokens).field_0x20 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x28 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x34 = 0;
  *(undefined8 *)&(this->CachedNamingTokens).field_0x40 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedNamingTokensMutex,4000);
  *(undefined8 *)&(this->GlobalNamespaces).Elements = 0;
  *(undefined8 *)&(this->GlobalNamespaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GlobalNamespaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x34 = 0;
  (this->GlobalNamespaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GlobalNamespaces).HashSize = 0;
  *(undefined8 *)&this->FilterNamespaceDelegates = 0;
  *(undefined8 *)&(this->FilterNamespaceDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->FilterNamespaceDelegates).field_0x20 = 0;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x28 = 0;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x34 = 0;
  *(undefined8 *)&(this->FilterNamespaceDelegates).field_0x40 = 0;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x48 = 0;
  return this;
}

// UNamingTokensEngineSubsystem @ 14d0d4f30

UNamingTokensEngineSubsystem * __thiscall
UNamingTokensEngineSubsystem::UNamingTokensEngineSubsystem(UNamingTokensEngineSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UNamingTokensEngineSubsystem__6B_;
  *(undefined8 *)&this->CachedNamingTokens = 0;
  *(undefined8 *)&(this->CachedNamingTokens).field_0x8 = 0;
  *(undefined8 *)&(this->CachedNamingTokens).field_0x20 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x28 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x34 = 0;
  *(undefined8 *)&(this->CachedNamingTokens).field_0x40 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedNamingTokensMutex,4000);
  *(undefined8 *)&(this->GlobalNamespaces).Elements = 0;
  *(undefined8 *)&(this->GlobalNamespaces).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GlobalNamespaces).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlobalNamespaces).Elements.field_0x34 = 0;
  (this->GlobalNamespaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GlobalNamespaces).HashSize = 0;
  *(undefined8 *)&this->FilterNamespaceDelegates = 0;
  *(undefined8 *)&(this->FilterNamespaceDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->FilterNamespaceDelegates).field_0x20 = 0;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x28 = 0;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x34 = 0;
  *(undefined8 *)&(this->FilterNamespaceDelegates).field_0x40 = 0;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x48 = 0;
  this->bIsCacheEnabled = true;
  return this;
}

// ~UNamingTokensEngineSubsystem @ 14d0d53e0

void __thiscall
UNamingTokensEngineSubsystem::~UNamingTokensEngineSubsystem(UNamingTokensEngineSubsystem *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UNamingTokensEngineSubsystem__6B_;
  *(undefined4 *)&(this->FilterNamespaceDelegates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FilterNamespaceDelegates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilterNamespaceDelegates);
  (this->GlobalNamespaces).HashSize = 0;
  FVar2 = (this->GlobalNamespaces).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GlobalNamespaces).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedNamingTokensMutex);
  *(undefined4 *)&(this->CachedNamingTokens).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedNamingTokens).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedNamingTokens);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 14d0d5ef0

FString * __thiscall
`UNamingTokensEngineSubsystem::EvaluateTokenList'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,FString *param_1)

{
  FText *pFVar1;
  FDestructionSentinel local_78;
  FString local_60;
  FText local_50;
  FText local_40;
  undefined8 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  FText::FText(&local_50);
  FText::FText(&local_40);
  local_30 = 0;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  ::FString::operator=(&local_60,param_1);
  pFVar1 = FText::FromString((FText *)&local_78,param_1);
  FText::operator=(&local_50,pFVar1);
  if ((longlong *)local_78._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_78._0_8_ + 0x10))();
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"{%s}");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_78);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14d0d6050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UNamingTokensEngineSubsystem::GetNamingTokens'::__l19::<lambda_1>::operator()
          (void *this,FTopLevelAssetPath *param_1,UNamingTokens *param_2)

{
  longlong *plVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  FUObjectItem *pFVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_138;
  undefined4 local_130;
  int local_12c;
  FName local_128;
  FString local_120;
  FTopLevelAssetPath local_110;
  FString local_100;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TBitArray<FDefaultBitArrayAllocator> local_d8;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_2 == (UNamingTokens *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParentTokens",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokens\\Private\\NamingTokensEngineSubsystem.cpp"
                         ,0x6d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(param_2->_padding_ + 0xc));
  if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0) {
    local_d8.MaxBits = 0x80;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = 0;
    local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_d8.NumBits = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    plVar1 = *(longlong **)this;
    local_88.AllocatorInstance.InlineData[0] = '\0';
    local_88.AllocatorInstance.InlineData[1] = '\0';
    local_88.AllocatorInstance.InlineData[2] = '\0';
    local_88.AllocatorInstance.InlineData[3] = '\0';
    local_88.AllocatorInstance.InlineData[4] = '\0';
    local_88.AllocatorInstance.InlineData[5] = '\0';
    local_88.AllocatorInstance.InlineData[6] = '\0';
    local_88.AllocatorInstance.InlineData[7] = '\0';
    local_88.AllocatorInstance.InlineData[8] = '\0';
    local_88.AllocatorInstance.InlineData[9] = '\0';
    local_88.AllocatorInstance.InlineData[10] = '\0';
    local_88.AllocatorInstance.InlineData[0xb] = '\0';
    local_88.AllocatorInstance.InlineData[0xc] = '\0';
    local_88.AllocatorInstance.InlineData[0xd] = '\0';
    local_88.AllocatorInstance.InlineData[0xe] = '\0';
    local_88.AllocatorInstance.InlineData[0xf] = '\0';
    local_60 = 0;
    local_50 = 0;
    pcVar4 = *(code **)(*plVar1 + 0x140);
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    local_88.MaxBits = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    UStruct::GetStructPathName((UStruct *)param_2->_padding_,&local_110);
    local_138.Data = (FScriptContainerElement *)0x0;
    local_130 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,1,0,&local_138,1,&local_12c);
    *(uint *)local_138.Data = local_110.PackageName.ComparisonIndex.Value;
    *(uint *)(local_138.Data + 4) = local_110.PackageName.Number;
    *(uint *)(local_138.Data + 8) = local_110.AssetName.ComparisonIndex.Value;
    *(uint *)(local_138.Data + 0xc) = local_110.AssetName.Number;
    (*pcVar4)(plVar1,&local_138,&local_98,&local_e8);
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
    local_50 = local_50 & 0xffffffff00000000;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    uVar5 = local_90 >> 0x20;
    local_90 = local_90 & 0xffffffff00000000;
    if ((int)uVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_88.NumBits = 0;
    if (0x80 < (uint)local_88.MaxBits) {
      local_88.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    FVar2 = param_1->AssetName;
    uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    FVar3 = param_1->PackageName;
    uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    uVar9 = uVar9 + FVar3.Number;
    if ((int)local_e0 != local_b4) {
      puVar12 = local_b0;
      if (local_a8 != (undefined1 *)0x0) {
        puVar12 = local_a8;
      }
      iVar13 = *(int *)(puVar12 +
                       (ulonglong)
                       (local_a0 - 1U &
                       (uVar9 * 0x40 + uVar8 + FVar2.Number + -0x61c88647 + (uVar9 >> 2) ^ uVar9)) *
                       4);
      if (iVar13 != -1) {
        do {
          lVar11 = (longlong)iVar13;
          if ((*(FName *)(local_e8.Data + lVar11 * 0x18) == param_1->PackageName) &&
             (*(FName *)(local_e8.Data + lVar11 * 0x18 + 8) == param_1->AssetName)) {
            if (iVar13 != -1) {
              if (4 < (byte)LogNamingTokens._0_1_) {
                local_128 = *(FName *)(param_2->_padding_ + 0x18);
                ::FName::ToString(&local_128,&local_120);
                FTopLevelAssetPath::ToString(param_1,&local_100);
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
              }
              local_a0 = 0;
              if (local_a8 != (undefined1 *)0x0) {
                FMemory::Free(local_a8);
              }
              uVar5 = local_e0 >> 0x20;
              local_e0 = local_e0 & 0xffffffff00000000;
              if ((int)uVar5 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,4,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
              }
              local_b8 = 0xffffffff;
              local_b4 = 0;
              local_d8.NumBits = 0;
              if (0x80 < (uint)local_d8.MaxBits) {
                local_d8.MaxBits = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
              }
              if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
              }
              if (local_e8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data);
              }
              return true;
            }
            break;
          }
          iVar13 = *(int *)(local_e8.Data + lVar11 * 0x18 + 0x10);
        } while (iVar13 != -1);
      }
    }
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FMemory::Free(local_a8);
    }
    uVar5 = local_e0 >> 0x20;
    local_e0 = local_e0 & 0xffffffff00000000;
    if ((int)uVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
    }
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_d8.NumBits = 0;
    if (0x80 < (uint)local_d8.MaxBits) {
      local_d8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d8,0);
    }
    if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
    }
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
  }
  return false;
}

// ClearCachedNamingTokens @ 14d0d7680

void __thiscall
UNamingTokensEngineSubsystem::ClearCachedNamingTokens(UNamingTokensEngineSubsystem *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  bool bVar3;
  TMap<FString,TObjectPtr<UNamingTokens>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>_>
  *this_00;
  
  lpCriticalSection = &this->CachedNamingTokensMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->CachedNamingTokens;
  bVar3 = 1 < *(int *)&(this->CachedNamingTokens).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CachedNamingTokens).field_0x8);
  puVar1 = &(this->CachedNamingTokens).field_0xc;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedNamingTokens).field_0x34 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->CachedNamingTokens).field_0x2c;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CachedNamingTokens).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedNamingTokens).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CachedNamingTokens).field_0x48 = 1;
    TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
              *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0d775b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// EvaluateTokenList @ 14d0d9bc0

TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokensEngineSubsystem::EvaluateTokenList
          (UNamingTokensEngineSubsystem *this,
          TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FNamingTokenFilterArgs *param_2)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  EvaluateTokenList(this,__return_storage_ptr__,param_1,param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EvaluateTokenList @ 14d0d9c10

TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokensEngineSubsystem::EvaluateTokenList
          (UNamingTokensEngineSubsystem *this,
          TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FNamingTokenFilterArgs *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  FText *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res18 [16];
  FString local_88;
  FText local_78;
  FNamingTokenResultData local_68;
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  bVar2 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(&local_88,L", ",2);
    }
    `UNamingTokensEngineSubsystem::EvaluateTokenList'::__l2::<lambda_1>::operator()
              (local_res18,(FString *)&local_78,(FString *)pFVar5);
    iVar7 = local_78.Flags - 1;
    if (local_78.Flags == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_88,(wchar_t *)local_78.TextData.Reference,iVar7);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_78.TextData.Reference);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar4 = FText::FromString(&local_78,&local_88);
  EvaluateTokenText(this,&local_68,pFVar4,param_2,param_3);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  iVar1 = local_68.TokenValues.ArrayNum;
  FVar3.Data = local_68.TokenValues.AllocatorInstance.Data;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_68.TokenValues.ArrayNum;
  if (local_68.TokenValues.ArrayNum == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,local_68.TokenValues.ArrayNum,0,&__return_storage_ptr__->AllocatorInstance,
               local_68.TokenValues.ArrayNum,&__return_storage_ptr__->ArrayMax);
    ConstructItems<FNamingTokenValueData,FNamingTokenValueData,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,(FNamingTokenValueData *)FVar3.Data,
               iVar1);
  }
  DestructItems<FNamingTokenValueData,int>
            ((FNamingTokenValueData *)local_68.TokenValues.AllocatorInstance.Data,
             local_68.TokenValues.ArrayNum);
  if ((FNamingTokenValueData *)local_68.TokenValues.AllocatorInstance.Data !=
      (FNamingTokenValueData *)0x0) {
    FMemory::Free(local_68.TokenValues.AllocatorInstance.Data);
  }
  if (local_68.EvaluatedText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.EvaluatedText.TextData.Reference + 0x10))();
  }
  if (local_68.OriginalText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.OriginalText.TextData.Reference + 0x10))();
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EvaluateTokenString @ 14d0d9e00

FNamingTokenResultData * __thiscall
UNamingTokensEngineSubsystem::EvaluateTokenString
          (UNamingTokensEngineSubsystem *this,FNamingTokenResultData *__return_storage_ptr__,
          FString *param_1,FNamingTokenFilterArgs *param_2)

{
  FText *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  FText local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pFVar1 = FText::FromString(&local_18,param_1);
  EvaluateTokenText(this,__return_storage_ptr__,pFVar1,param_2,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EvaluateTokenString @ 14d0d9e90

FNamingTokenResultData * __thiscall
UNamingTokensEngineSubsystem::EvaluateTokenString
          (UNamingTokensEngineSubsystem *this,FNamingTokenResultData *__return_storage_ptr__,
          FString *param_1,FNamingTokenFilterArgs *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::FromString(&local_18,param_1);
  EvaluateTokenText(this,__return_storage_ptr__,pFVar1,param_2,param_3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// EvaluateTokenText @ 14d0db380

FNamingTokenResultData * __thiscall
UNamingTokensEngineSubsystem::EvaluateTokenText
          (UNamingTokensEngineSubsystem *this,FNamingTokenResultData *__return_storage_ptr__,
          FText *param_1,FNamingTokenFilterArgs *param_2)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  EvaluateTokenText(this,__return_storage_ptr__,param_1,param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EvaluateTokenText @ 14d0db3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FNamingTokenResultData * __thiscall
UNamingTokensEngineSubsystem::EvaluateTokenText
          (UNamingTokensEngineSubsystem *this,FNamingTokenResultData *__return_storage_ptr__,
          FText *param_1,FNamingTokenFilterArgs *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FText *pFVar1;
  int *piVar2;
  bool *pbVar3;
  undefined1 *puVar4;
  TMap<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar5;
  uint *puVar6;
  ITextData *pIVar7;
  ITextData *pIVar8;
  longlong lVar9;
  code *pcVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  undefined8 uVar12;
  TRefCountPtr<ITextData> TVar13;
  int iVar14;
  TMap<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FString *pFVar19;
  ulonglong uVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar21;
  FNamingTokenResultData *pFVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  UNamingTokens *this_00;
  byte bVar26;
  longlong *plVar27;
  ForElementType<unsigned_int> FVar28;
  FMRSWRecursiveAccessDetector *this_01;
  ForElementType<TAlignedBytes<16,16>_> FVar29;
  uint uVar30;
  ulonglong uVar31;
  wchar_t *pwVar32;
  FDestructionSentinel *pFVar33;
  int iVar34;
  ForAnyElementType *_Src;
  FScriptContainerElement *pFVar35;
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *pTVar36;
  ForAnyElementType FVar37;
  FNamingTokenFilterArgs *pFVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *pTVar41;
  ulonglong uVar42;
  int iVar43;
  FNamingTokenValueData *pFVar44;
  undefined4 uVar45;
  FNamingTokenValueData *pFVar47;
  FNamingTokenValueData *pFVar48;
  UNamingTokensEngineSubsystem *pUVar49;
  undefined1 auStackY_458 [32];
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405 [5];
  ForAnyElementType local_400;
  undefined8 local_3f8;
  ulonglong local_3f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e8;
  FDelegateAllocation local_3e0;
  uint local_3d0;
  FNamingTokenFilterArgs *local_3c8;
  ITextData *local_3c0;
  UNamingTokensEngineSubsystem *local_3b8;
  FNamingTokenResultData *local_3b0;
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *local_3a8;
  FText local_3a0;
  FText *local_390;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_388;
  FNamingTokensEvaluationData local_380;
  TMap<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>_>
  *local_360;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_358;
  undefined8 local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_330;
  int local_310;
  undefined1 local_30c [4];
  undefined1 local_308 [4];
  undefined1 local_304 [4];
  UNamingTokensEngineSubsystem *local_300;
  UNamingTokensEngineSubsystem *local_2f8;
  FText *local_2f0;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  undefined1 local_2c0 [4];
  undefined1 local_2bc [4];
  FString local_2b8;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0 [8];
  undefined1 local_298 [12];
  uint local_28c;
  longlong local_288;
  uint local_280;
  int local_27c;
  longlong *local_270;
  int iStack_268;
  undefined4 uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  undefined4 uStack_258;
  uint uStack_254;
  int local_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  int local_240;
  TMap<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>_>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  FNamingTokenResultData local_208;
  FSparseArrayAllocationInfo local_1d8;
  FRegexMatcher local_1c8;
  FRegexPattern local_1a8;
  FString local_198;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  FDestructionSentinel local_150;
  FDelegateAllocation *local_138;
  FString local_128;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  ulonglong uVar46;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_388 = param_3;
  local_3c8 = param_2;
  local_3b8 = this;
  local_3b0 = __return_storage_ptr__;
  local_2f0 = param_1;
  FText::FText(&__return_storage_ptr__->OriginalText);
  pFVar1 = &__return_storage_ptr__->EvaluatedText;
  local_390 = pFVar1;
  FText::FText(pFVar1);
  local_3a8 = &__return_storage_ptr__->TokenValues;
  (local_3a8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TokenValues).ArrayNum = 0;
  (__return_storage_ptr__->TokenValues).ArrayMax = 0;
  pIVar7 = (param_1->TextData).Reference;
  local_3c0 = pIVar7;
  local_3a0.TextData.Reference = pIVar7;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_2c0);
  }
  pIVar8 = (pFVar1->TextData).Reference;
  uVar17 = param_1->Flags;
  local_3a0.Flags = uVar17;
  if (pIVar8 != pIVar7) {
    (pFVar1->TextData).Reference = pIVar7;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_2bc);
    }
    if (pIVar8 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
    }
  }
  (__return_storage_ptr__->EvaluatedText).Flags = uVar17;
  pFVar19 = FText::ToString(param_1);
  local_7c = 0x80;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_78 = -1;
  UE::NamingTokens::Utils::GetNamespaceDelimiter(&local_128);
  ::FString::PrintfImpl(&local_198,L"\\{\\s*([a-zA-Z0-9_]+)%s[a-zA-Z0-9_]+\\s*\\}");
  FRegexPattern::FRegexPattern(&local_1a8,&local_198,None);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  FRegexMatcher::FRegexMatcher(&local_1c8,&local_1a8,pFVar19);
  bVar16 = FRegexMatcher::FindNext(&local_1c8);
  uVar46 = 1;
  uVar45 = 1;
  local_3f0 = 1;
  if (bVar16) {
    do {
      iVar34 = (int)uVar46;
      FRegexMatcher::GetCaptureGroup(&local_1c8,&local_2b8,iVar34);
      if (local_74 == 0) {
        iVar43 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x18,8,iVar34,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
                            (int *)(local_a8 + 0xc));
        iVar18 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),iVar34);
        FVar28 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
        if (local_88 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_88;
        }
        bVar26 = (byte)iVar18 & 0x1f;
        if (iVar18 < 0) {
          iVar18 = iVar18 + 0x1f;
          bVar26 = bVar26 - 0x20;
        }
        puVar6 = (uint *)((longlong)FVar28 + (longlong)(iVar18 >> 5) * 4);
        *puVar6 = *puVar6 & ~(iVar34 << (bVar26 & 0x1f));
        iVar34 = local_78;
      }
      else {
        local_74 = local_74 + -1;
        iVar34 = *(int *)(local_a8._0_8_ + (longlong)local_78 * 0x18 + 4);
        iVar43 = local_78;
        if (local_74 != 0) {
          *(undefined4 *)(local_a8._0_8_ + (longlong)iVar34 * 0x18) = 0xffffffff;
        }
      }
      local_78 = iVar34;
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8,&local_1d8,iVar43);
      _Src = local_1d8.Pointer;
      FVar37.Data = local_2b8.Data.AllocatorInstance.Data;
      if (local_1d8.Pointer == (ForAnyElementType *)0x0) {
        _Src = (ForAnyElementType *)0x0;
      }
      else {
        *(FScriptContainerElement **)local_1d8.Pointer = (FScriptContainerElement *)0x0;
        piVar2 = (int *)((longlong)&((ForAnyElementType *)((longlong)local_1d8.Pointer + 8))->Data +
                        4);
        iVar34 = local_2b8.Data.ArrayNum;
        *(int *)&((ForAnyElementType *)((longlong)local_1d8.Pointer + 8))->Data = iVar34;
        if (iVar34 == 0) {
          *piVar2 = 0;
          *(undefined4 *)&((ForAnyElementType *)((longlong)local_1d8.Pointer + 0x10))->Data =
               0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar34,0,local_1d8.Pointer,iVar34,piVar2);
          memcpy(*&_Src->Data,FVar37.Data,(longlong)iVar34 * 2);
          *(undefined4 *)&((void *)_Src)[2].Data = 0xffffffff;
        }
      }
      iVar43 = local_1d8.Index;
      iVar34 = *(int *)&_Src[1].Data + -1;
      if (*(int *)&_Src[1].Data == 0) {
        pwVar32 = L"";
        iVar34 = 0;
      }
      else {
        pwVar32 = (wchar_t *)_Src->Data;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar34,pwVar32);
      if ((local_a8._8_4_ - local_74 != 1) && (local_a8._8_4_ != local_74)) {
        FVar37.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar37.Data = local_68.Data;
        }
        iVar34 = *(int *)(FVar37.Data + (ulonglong)(local_60 - 1 & uVar17) * 4);
        pFVar35 = (FScriptContainerElement *)local_a8._0_8_;
        while (iVar34 != -1) {
          lVar23 = (longlong)iVar34 * 0x18;
          iVar18 = *(int *)(pFVar35 + lVar23 + 8);
          if (iVar18 == *(int *)&_Src[1].Data) {
            if (1 < iVar18) {
              iVar18 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(pFVar35 + lVar23),(wchar_t *)_Src->Data);
              bVar16 = iVar18 == 0;
              pFVar35 = (FScriptContainerElement *)local_a8._0_8_;
              goto LAB_14d0db7ae;
            }
LAB_14d0db7c0:
            if (iVar34 != -1) {
              if (*(void **)(pFVar35 + (longlong)iVar34 * 0x18) != (void *)0x0) {
                FMemory::Free(*(void **)(pFVar35 + (longlong)iVar34 * 0x18));
              }
              memmove(pFVar35 + (longlong)iVar34 * 0x18,_Src,0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_a8,iVar43,(int)local_3f0);
              iVar43 = iVar34;
            }
            uVar46 = local_3f0;
            if (iVar34 != -1) goto LAB_14d0dba0e;
            break;
          }
          bVar16 = iVar18 + *(int *)&_Src[1].Data == 1;
LAB_14d0db7ae:
          if (bVar16) goto LAB_14d0db7c0;
          iVar34 = *(int *)(pFVar35 + lVar23 + 0x10);
        }
      }
      uVar31 = 0;
      uVar39 = (uint)uVar46;
      uVar30 = local_a8._8_4_ - local_74;
      if (3 < uVar30) {
        uVar42 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_2a8 = (undefined4)lVar23;
        uVar39 = uVar39 << ((byte)lVar23 & 0x1f);
      }
      if (((int)uVar30 < 1) || ((int)uVar39 <= (int)local_60)) {
        uVar17 = local_60 - 1 & uVar17;
        *(uint *)((longlong)&_Src[2].Data + 4) = uVar17;
        FVar37.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar37.Data = local_68.Data;
        }
        uVar31 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)&_Src[2].Data = *(undefined4 *)(FVar37.Data + uVar31 * 4);
        *(int *)(FVar37.Data + uVar31 * 4) = iVar43;
      }
      else {
        local_60 = uVar39;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
        }
        if (uVar39 != 0) {
          uVar17 = uVar39;
          if (uVar39 < 2) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar17 = 0;
              goto LAB_14d0db89f;
            }
          }
          else {
LAB_14d0db89f:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar17,4);
          }
          if (0 < (int)uVar39) {
            uVar42 = (ulonglong)uVar39;
            do {
              FVar37.Data = local_70;
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                FVar37.Data = local_68.Data;
              }
              uVar20 = uVar31 & (longlong)(int)uVar39 - 1U;
              uVar31 = uVar31 + 1;
              *(undefined4 *)(FVar37.Data + uVar20 * 4) = 0xffffffff;
              uVar42 = uVar42 - 1;
            } while (uVar42 != 0);
          }
        }
        if ((local_60 != 0) &&
           (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TConstIterator::TConstIterator
                      ((TConstIterator *)&local_2e8,
                       (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_a8), local_2e0.CurrentBitIndex < (local_2e0.Array)->NumBits)) {
          do {
            iVar18 = local_2e0.CurrentBitIndex;
            iVar43 = *(int *)(*local_2e8 + 8 + (longlong)local_2e0.CurrentBitIndex * 0x18);
            puVar24 = (undefined8 *)(*local_2e8 + (longlong)local_2e0.CurrentBitIndex * 0x18);
            iVar34 = iVar43 + -1;
            if (iVar43 == 0) {
              pwVar32 = L"";
              iVar34 = 0;
            }
            else {
              pwVar32 = (wchar_t *)*puVar24;
            }
            uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar34,pwVar32);
            uVar17 = local_60 - 1 & uVar17;
            *(uint *)((longlong)puVar24 + 0x14) = uVar17;
            FVar37.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar37.Data = local_68.Data;
            }
            uVar31 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(FVar37.Data + uVar31 * 4);
            *(int *)(FVar37.Data + uVar31 * 4) = iVar18;
            local_2e0.UnvisitedBitMask = local_2e0.UnvisitedBitMask & ~local_2e0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
          } while (local_2e0.CurrentBitIndex < (local_2e0.Array)->NumBits);
        }
      }
LAB_14d0dba0e:
      uVar45 = (undefined4)uVar46;
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      bVar16 = FRegexMatcher::FindNext(&local_1c8);
      param_3 = local_388;
    } while (bVar16);
  }
  pUVar49 = local_3b8;
  if (local_3c8->bIncludeGlobal != false) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_a8,
               &local_3b8->GlobalNamespaces);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.Implementation.SharedReferenceCount.ReferenceController);
  local_400.Data = (FScriptContainerElement *)0x0;
  puVar4 = &(pUVar49->FilterNamespaceDelegates).field_0x10;
  local_3f8 = 0;
  pTVar5 = &pUVar49->FilterNamespaceDelegates;
  local_330._padding_._0_4_ = 0;
  local_330.UnvisitedBitMask = 0xffffffff;
  local_330.CurrentBitIndex = 0;
  local_330.BaseBitIndex = 0;
  local_330._padding_._4_4_ = uVar45;
  local_330.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if (*(int *)&(pUVar49->FilterNamespaceDelegates).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_330);
  }
  TStack_358._padding_ = CONCAT44(local_330._padding_._4_4_,(undefined4)local_330._padding_);
  TStack_358.CurrentBitIndex = local_330.CurrentBitIndex;
  TStack_358.UnvisitedBitMask = local_330.UnvisitedBitMask;
  TStack_358._28_4_ = local_330._28_4_;
  TStack_358.BaseBitIndex = local_330.BaseBitIndex;
  TStack_358.Array = local_330.Array;
  local_338 = CONCAT44(local_338._4_4_,
                       *(int *)&(pUVar49->FilterNamespaceDelegates).field_0x8 -
                       *(int *)&(pUVar49->FilterNamespaceDelegates).field_0x34);
  TStack_230.Array = local_330.Array;
  uStack_210 = local_338;
  local_360 = pTVar5;
  local_238 = pTVar5;
  TStack_230._padding_ = TStack_358._padding_;
  TStack_230._16_8_ = TStack_358._16_8_;
  TStack_230._24_8_ = TStack_358._24_8_;
  pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_e8,(TBitArray<FDefaultBitArrayAllocator> *)puVar4,
                       *(int *)&(pUVar49->FilterNamespaceDelegates).field_0x28);
  local_208.OriginalText._8_8_ = pTVar21->_padding_;
  pTVar11 = pTVar21->Array;
  uVar12._0_4_ = pTVar21->UnvisitedBitMask;
  uVar12._4_4_ = pTVar21->CurrentBitIndex;
  local_208.TokenValues.AllocatorInstance.Data = *(FScriptContainerElement **)&pTVar21->BaseBitIndex
  ;
  local_208.EvaluatedText.TextData.Reference = (ITextData *)pTVar11;
  local_208.EvaluatedText._8_8_ = uVar12;
  while( true ) {
    pTVar15 = local_238;
    if (*(int *)&local_238->field_0x8 - *(int *)&local_238->field_0x34 != (int)uStack_210) {
      local_408 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_408);
    }
    pFVar38 = local_3c8;
    if (((TStack_230.CurrentBitIndex == uVar12._4_4_) && (TStack_230.Array == pTVar11)) &&
       (pTVar15 == pTVar5)) break;
    lVar23 = *(longlong *)pTVar15 + (longlong)TStack_230.CurrentBitIndex * 0x28;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar23 + 8),&local_118);
    if (*(int *)(lVar23 + 0x18) == 0) {
      plVar27 = (longlong *)0x0;
    }
    else {
      plVar27 = *(longlong **)(lVar23 + 0x10);
    }
    (**(code **)(*plVar27 + 0x60))(plVar27,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  iVar34 = (local_3c8->AdditionalNamespacesToInclude).ArrayNum;
  pFVar35 = (local_3c8->AdditionalNamespacesToInclude).AllocatorInstance.Data;
  if ((iVar34 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    pFVar22 = (FNamingTokenResultData *)(*pcVar10)();
    return pFVar22;
  }
  uVar17 = iVar34 + (local_a8._8_4_ - local_74);
  if (uVar17 <= (uint)(local_a8._8_4_ - local_74)) goto LAB_14d0dbe2e;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar17);
  uVar30 = (uint)local_3f0;
  if (3 < uVar17) {
    uVar46 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar46 != 0) {
      for (; uVar46 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_2a4 = (undefined4)lVar23;
    uVar30 = (uint)local_3f0 << ((byte)lVar23 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar30 <= (int)local_60)) goto LAB_14d0dbe2e;
  local_60 = uVar30;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar30 != 0) {
    uVar17 = uVar30;
    if (uVar30 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_14d0dbcda;
      }
    }
    else {
LAB_14d0dbcda:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar17,4);
    }
    if (0 < (int)uVar30) {
      uVar31 = (ulonglong)uVar30;
      uVar46 = 0;
      do {
        FVar37.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar37.Data = local_68.Data;
        }
        uVar42 = uVar46 & (longlong)(int)uVar30 - 1U;
        uVar46 = uVar46 + 1;
        *(undefined4 *)(FVar37.Data + uVar42 * 4) = 0xffffffff;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  if ((local_60 != 0) &&
     (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)local_298,
                 (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8), pFVar38 = local_3c8, local_27c < *(int *)(local_288 + 0x18))) {
    do {
      iVar14 = local_27c;
      iVar18 = *(int *)(*(longlong *)local_298._0_8_ + 8 + (longlong)local_27c * 0x18);
      puVar24 = (undefined8 *)(*(longlong *)local_298._0_8_ + (longlong)local_27c * 0x18);
      iVar43 = iVar18 + -1;
      if (iVar18 == 0) {
        pwVar32 = L"";
        iVar43 = 0;
      }
      else {
        pwVar32 = (wchar_t *)*puVar24;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar43,pwVar32);
      uVar17 = local_60 - 1 & uVar17;
      *(uint *)((longlong)puVar24 + 0x14) = uVar17;
      FVar37.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar37.Data = local_68.Data;
      }
      uVar46 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar17;
      *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(FVar37.Data + uVar46 * 4);
      *(int *)(FVar37.Data + uVar46 * 4) = iVar14;
      local_280 = local_280 & ~local_28c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_298 + 8));
      pFVar38 = local_3c8;
      pUVar49 = local_3b8;
    } while (local_27c < *(int *)(local_288 + 0x18));
  }
LAB_14d0dbe2e:
  pFVar40 = pFVar35 + (longlong)iVar34 * 0x10;
  for (; pFVar35 != pFVar40; pFVar35 = pFVar35 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_a8,
               (FString *)local_2a0,(bool *)pFVar35);
  }
  local_380.Contexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar43 = 0;
  local_380.Contexts.ArrayMax = 0;
  local_380.bForceCaseSensitive = false;
  local_380.CurrentDateTime = FDateTime::Now();
  iVar34 = param_3->ArrayNum;
  pFVar35 = (param_3->AllocatorInstance).Data;
                    /* WARNING: Load size is inaccurate */
  local_380.CurrentDateTime.Ticks = *local_380.CurrentDateTime.Ticks;
  local_380.Contexts.ArrayNum = iVar34;
  if ((iVar34 != 0) || (local_380.Contexts.ArrayMax != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar34,local_380.Contexts.ArrayMax,&local_380.Contexts.AllocatorInstance,iVar34,
               &local_380.Contexts.ArrayMax);
    ConstructItems<TObjectPtr<UObject>,UObject_*,int>
              (local_380.Contexts.AllocatorInstance.Data,(UObject **)pFVar35,iVar34);
  }
  uVar17 = local_80;
  local_380.bForceCaseSensitive = pFVar38->bForceCaseSensitive;
  uStack_254 = 0;
  iStack_268 = 0;
  if (local_80 != 0) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_88;
    }
    uVar30 = *(uint *)FVar28;
    iVar43 = 0;
    while (uVar30 == 0) {
      lVar23 = (longlong)iStack_268;
      iVar43 = iVar43 + 0x20;
      iStack_268 = iStack_268 + 1;
      uStack_254 = local_80;
      if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iStack_268)
      goto LAB_14d0dbf66;
      uVar30 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    local_3f0 = (ulonglong)(-uVar30 & uVar30);
    uVar46 = local_3f0 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar46 != 0) {
      for (; uVar46 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_240 = (int)lVar23;
    uStack_254 = iVar43 + -1 + local_240;
    if ((int)local_80 < (int)uStack_254) {
      uStack_254 = local_80;
    }
  }
LAB_14d0dbf66:
  local_360 = (TMap<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>_>
               *)local_a8;
  uVar30 = local_80 & 0xffffffe0;
  uStack_264 = (undefined4)local_3f0;
  uStack_24c = local_ac;
  TStack_358.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  iStack_248 = local_a8._8_4_ - local_74;
  uStack_258 = 0xffffffff;
  TStack_358.CurrentBitIndex = uStack_254;
  TStack_358.UnvisitedBitMask = 0xffffffff;
  TStack_358._padding_ = CONCAT44(uStack_264,iStack_268);
  iVar34 = (int)local_80 >> 5;
  TStack_358._28_4_ = local_ac;
  TStack_358.BaseBitIndex = iVar43;
  local_338 = CONCAT44(uStack_244,iStack_248);
  bVar26 = (byte)local_80;
  local_3f0._0_4_ = local_80;
  local_270 = (longlong *)local_360;
  local_260 = TStack_358.Array;
  local_250 = iVar43;
  if (((int)local_80 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    pFVar22 = (FNamingTokenResultData *)(*pcVar10)();
    return pFVar22;
  }
  pFVar22 = local_3b0;
  if (uVar17 != local_80) {
    FVar28 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar28 = local_88;
    }
    uVar17 = -1 << (bVar26 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar34 * 4);
    while (uVar17 == 0) {
      lVar23 = (longlong)iVar34;
      uVar30 = uVar30 + 0x20;
      iVar34 = iVar34 + 1;
      if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iVar34) {
        local_3f0._0_4_ = local_80;
        uVar17 = local_80;
        goto LAB_14d0dc0bc;
      }
      uVar17 = ((uint *)((longlong)FVar28 + 4))[lVar23];
    }
    uVar46 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar46 != 0) {
      for (; uVar46 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_310 = (int)lVar23;
    uVar17 = local_310 + -1 + uVar30;
    local_3f0._0_4_ = uVar17;
    if ((int)local_80 < (int)uVar17) {
      uVar17 = local_80;
      local_3f0._0_4_ = local_80;
    }
  }
LAB_14d0dc0bc:
  do {
    pTVar5 = local_360;
    if ((int)*(longlong *)((longlong)local_360 + 8) - *(int *)((longlong)local_360 + 0x34) !=
        (int)local_338) {
      local_407 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_407);
    }
    pFVar1 = local_2f0;
    lVar23 = (longlong)TStack_358.CurrentBitIndex;
    if (((TStack_358.CurrentBitIndex == uVar17) &&
        (TStack_358.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (pTVar5 == (TMap<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>_>
                   *)local_a8)) {
      pIVar7 = (pFVar22->OriginalText).TextData.Reference;
      pIVar8 = (local_2f0->TextData).Reference;
      if (pIVar7 != pIVar8) {
        (pFVar22->OriginalText).TextData.Reference = pIVar8;
        if (pIVar8 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar8 + 8))(pIVar8,&local_388);
        }
        if (pIVar7 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
        }
      }
      pTVar41 = local_3a8;
      (pFVar22->OriginalText).Flags = pFVar1->Flags;
      if (local_3a8 != (TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *)&local_400) {
        DestructItems<FNamingTokenValueData,int>
                  ((FNamingTokenValueData *)(local_3a8->AllocatorInstance).Data,local_3a8->ArrayNum)
        ;
        pFVar35 = (pTVar41->AllocatorInstance).Data;
        if (pFVar35 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar35);
        }
        (pTVar41->AllocatorInstance).Data = local_400.Data;
        pTVar41->ArrayNum = (int)local_3f8;
        pTVar41->ArrayMax = local_3f8._4_4_;
        local_3f8 = 0;
        local_400.Data = (FScriptContainerElement *)0x0;
      }
      if (local_380.Contexts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Contexts.AllocatorInstance.Data);
      }
      DestructItems<FNamingTokenValueData,int>
                ((FNamingTokenValueData *)local_400.Data,(int)local_3f8);
      if ((FNamingTokenValueData *)local_400.Data != (FNamingTokenValueData *)0x0) {
        FMemory::Free(local_400.Data);
      }
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      if (local_3c0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3c0 + 0x10))(local_3c0);
      }
      return pFVar22;
    }
    lVar9 = *(longlong *)pTVar5;
    local_3e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_3e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_3e0.DelegateSize = 0;
    if (local_3c8->bNativeOnly == false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3e8,(FWriteAccessScope *)&local_150);
      local_138 = &local_3e0;
      puVar24 = UE::Core::Private::DelegateAllocate(0x28,&local_3e0);
      if (puVar24 != (undefined8 *)0x0) {
        *puVar24 = &
                   ___7__TCommonDelegateInstanceState___A6APEAVUNamingTokens__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar24[2] = uVar25;
        *puVar24 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNamingTokensEngineSubsystem____A6APEAVUNamingTokens__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar49 != (UNamingTokensEngineSubsystem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar49);
        }
        puVar24[3] = 0;
        local_2f8 = pUVar49;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar49 != (UNamingTokensEngineSubsystem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar49);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar24 + 3),(FObjectPtr)&local_2f8);
        puVar24[4] = GetNamingTokens;
      }
      if (local_150.bDestroyed == false) {
        pFVar33 = &local_150;
        this_01 = local_150.Accessor;
        goto LAB_14d0dc29c;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3e8,(FWriteAccessScope *)&local_170);
      local_158 = &local_3e0;
      puVar24 = UE::Core::Private::DelegateAllocate(0x28,&local_3e0);
      if (puVar24 != (undefined8 *)0x0) {
        *puVar24 = &
                   ___7__TCommonDelegateInstanceState___A6APEAVUNamingTokens__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar24[2] = uVar25;
        *puVar24 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNamingTokensEngineSubsystem____A6APEAVUNamingTokens__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar49 != (UNamingTokensEngineSubsystem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar49);
        }
        puVar24[3] = 0;
        local_300 = pUVar49;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar49 != (UNamingTokensEngineSubsystem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar49);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar24 + 3),(FObjectPtr)&local_300);
        puVar24[4] = GetNamingTokensNative;
      }
      if (local_170.bDestroyed == false) {
        pFVar33 = &local_170;
        this_01 = local_170.Accessor;
LAB_14d0dc29c:
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(this_01,pFVar33);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_3e8,&local_100);
    FVar29 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_3e0.DelegateSize != 0) {
      FVar29 = local_3e0.DelegateAllocator;
    }
    this_00 = (UNamingTokens *)
              (**(code **)(*(longlong *)FVar29 + 0x60))(FVar29,lVar9 + lVar23 * 0x18);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    if (this_00 != (UNamingTokens *)0x0) {
      pFVar22 = UNamingTokens::EvaluateTokenText(this_00,&local_208,&local_3a0,&local_380);
      FText::operator=(&local_3b0->OriginalText,&pFVar22->OriginalText);
      FText::operator=(local_390,&pFVar22->EvaluatedText);
      pTVar41 = local_3a8;
      pTVar36 = &pFVar22->TokenValues;
      if (local_3a8 != pTVar36) {
        DestructItems<FNamingTokenValueData,int>
                  ((FNamingTokenValueData *)(local_3a8->AllocatorInstance).Data,local_3a8->ArrayNum)
        ;
        pFVar35 = (pTVar41->AllocatorInstance).Data;
        if (pFVar35 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar35);
        }
        (pTVar41->AllocatorInstance).Data = (pTVar36->AllocatorInstance).Data;
        (pTVar36->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar41->ArrayNum = (pFVar22->TokenValues).ArrayNum;
        pTVar41->ArrayMax = (pFVar22->TokenValues).ArrayMax;
        (pFVar22->TokenValues).ArrayNum = 0;
        (pFVar22->TokenValues).ArrayMax = 0;
      }
      DestructItems<FNamingTokenValueData,int>
                ((FNamingTokenValueData *)local_208.TokenValues.AllocatorInstance.Data,
                 local_208.TokenValues.ArrayNum);
      if ((FNamingTokenValueData *)local_208.TokenValues.AllocatorInstance.Data !=
          (FNamingTokenValueData *)0x0) {
        FMemory::Free(local_208.TokenValues.AllocatorInstance.Data);
      }
      if ((TBitArray<FDefaultBitArrayAllocator> *)local_208.EvaluatedText.TextData.Reference !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        (**(code **)((longlong)*local_208.EvaluatedText.TextData.Reference + 0x10))();
      }
      if (local_208.OriginalText.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_208.OriginalText.TextData.Reference + 0x10))();
      }
      local_3d0 = pTVar41->ArrayNum;
      uVar46 = (ulonglong)(int)local_3d0;
      pFVar47 = (FNamingTokenValueData *)(pTVar41->AllocatorInstance).Data;
      pFVar19 = &pFVar47->TokenNamespace;
      pFVar44 = pFVar47 + uVar46;
LAB_14d0dc3b2:
      if (pTVar41->ArrayNum != (int)uVar46) {
        local_406 = 0;
        `TCheckedPointerIterator<FNamingTokenValueData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_406);
      }
      TVar13.Reference = local_3a0.TextData.Reference;
      if (pFVar47 != pFVar44) {
        iVar34 = (int)local_3f8;
        uVar46 = (ulonglong)(int)local_3f8;
        pFVar48 = (FNamingTokenValueData *)(local_400.Data + uVar46 * 0x38);
        FVar37.Data = local_400.Data;
        do {
          if ((int)uVar46 != iVar34) {
            local_405[0] = 0;
            `TCheckedPointerIterator<FNamingTokenValueData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_405);
            uVar46 = local_3f8 & 0xffffffff;
          }
          if ((FNamingTokenValueData *)FVar37.Data == pFVar48) {
            iVar34 = (int)uVar46;
            if ((local_400.Data <= pFVar47) &&
               (pFVar47 < (FNamingTokenValueData *)
                          (local_400.Data + (longlong)local_3f8._4_4_ * 0x38))) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                pFVar22 = (FNamingTokenResultData *)(*pcVar10)();
                return pFVar22;
              }
              iVar34 = (int)local_3f8;
            }
            if (iVar34 == local_3f8._4_4_) {
              iVar34 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&local_400,(int *)((longlong)&local_3f8 + 4));
            }
            local_3f8 = CONCAT44(local_3f8._4_4_,iVar34 + 1);
            FVar37.Data = local_400.Data + (longlong)iVar34 * 0x38;
            ::FString::FString((FString *)FVar37.Data,&pFVar47->TokenKey);
            ::FString::FString(&((FNamingTokenValueData *)FVar37.Data)->TokenNamespace,pFVar19);
            (((FNamingTokenValueData *)FVar37.Data)->TokenValue).TextData.Reference =
                 (ITextData *)0x0;
            pIVar7 = (ITextData *)
                     (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                      &((FText *)(pFVar19 + 1))->TextData)->AllocatorInstance).Data;
            (((FNamingTokenValueData *)FVar37.Data)->TokenValue).TextData.Reference = pIVar7;
            if (pIVar7 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_308);
            }
            goto LAB_14d0dc556;
          }
          iVar43 = (((FNamingTokenValueData *)FVar37.Data)->TokenKey).Data.ArrayNum;
          iVar18 = (((FNamingTokenValueData *)(pFVar19 + -1))->TokenKey).Data.ArrayNum;
          if (iVar43 == iVar18) {
            if (iVar43 < 2) goto LAB_14d0dc434;
            iVar43 = wcscmp((wchar_t *)
                            (((FNamingTokenValueData *)FVar37.Data)->TokenKey).Data.
                            AllocatorInstance.Data,
                            (wchar_t *)(pFVar47->TokenKey).Data.AllocatorInstance.Data);
            bVar16 = iVar43 == 0;
          }
          else {
            bVar16 = iVar43 + iVar18 == 1;
          }
          if (bVar16) goto LAB_14d0dc434;
          FVar37.Data = FVar37.Data + 0x38;
        } while( true );
      }
      local_3c0 = local_3a0.TextData.Reference;
      pIVar7 = (local_390->TextData).Reference;
      if (local_3a0.TextData.Reference != pIVar7) {
        local_3c0 = pIVar7;
        local_3a0.TextData.Reference = pIVar7;
        if (pIVar7 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_304);
        }
        if (TVar13.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar13.Reference + 0x10))(TVar13.Reference);
        }
      }
      local_3a0.Flags = (local_3b0->EvaluatedText).Flags;
      pFVar22 = local_3b0;
      pUVar49 = local_3b8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_3e8,(FWriteAccessScope *)&local_188);
    if ((local_3e0.DelegateSize != 0) &&
       (local_3e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_3e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_3e0,0,0,0x10);
      local_3e0.DelegateSize = 0;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_3e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_3e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e8.AccessDetector);
    TStack_358.UnvisitedBitMask = TStack_358.UnvisitedBitMask & ~TStack_358._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_358);
    uVar17 = (uint)local_3f0;
  } while( true );
LAB_14d0dc434:
  ::FString::operator=((FString *)FVar37.Data,&pFVar47->TokenKey);
  ::FString::operator=(&((FNamingTokenValueData *)FVar37.Data)->TokenNamespace,pFVar19);
  pIVar7 = (ITextData *)
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&((FText *)(pFVar19 + 1))->TextData)->
           AllocatorInstance).Data;
  pIVar8 = (((FNamingTokenValueData *)FVar37.Data)->TokenValue).TextData.Reference;
  if (pIVar8 != pIVar7) {
    (((FNamingTokenValueData *)FVar37.Data)->TokenValue).TextData.Reference = pIVar7;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_30c);
    }
    if (pIVar8 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
    }
  }
LAB_14d0dc556:
  pFVar47 = pFVar47 + 1;
  uVar46 = (ulonglong)local_3d0;
  (((FNamingTokenValueData *)FVar37.Data)->TokenValue).Flags = ((FText *)(pFVar19 + 1))->Flags;
  pbVar3 = (bool *)(pFVar19 + 2);
  pFVar19 = (FString *)&pFVar19[3].Data.ArrayNum;
  ((FNamingTokenValueData *)FVar37.Data)->bWasEvaluated = *pbVar3;
  pTVar41 = local_3a8;
  goto LAB_14d0dc3b2;
}

// GetAllNamespaces @ 14d0dd340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokensEngineSubsystem::GetAllNamespaces
          (UNamingTokensEngineSubsystem *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  UObject *pUVar4;
  void *_Src;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  longlong *plVar10;
  FString *pFVar11;
  UClass *pUVar12;
  FUObjectItem *pFVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  FAssetData *pFVar16;
  longlong lVar17;
  FAssetData *pFVar18;
  ForAnyElementType FVar19;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198;
  undefined1 local_197 [7];
  FAssetData *local_190;
  ulonglong local_188;
  FString local_180;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_160;
  FAssetTagValueRef_u_0 local_150;
  undefined1 local_148 [8];
  TObjectPtr<UObject_const_>_u_0 local_140;
  TPairInitializer<FName_const_&,FString_const_&> local_138;
  TPairInitializer<FName_const_&,FString_const_&> local_128;
  FName local_118;
  FName local_110;
  initializer_list<TPairInitializer<FName_const_&,FString_const_&>_> local_108;
  FString local_f8;
  FString local_e8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_d8;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar8 = ::FName::FName(&local_118,"AssetRegistry");
  FVar3 = *pFVar8;
  this_00 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
  local_190 = (FAssetData *)0x0;
  local_188 = 0;
  local_140.DebugPtr = (UObject *)UNamingTokens::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_140.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_140.DebugPtr);
  }
  local_138.Value =
       FObjectPropertyBase::GetExportPath
                 (&local_f8,(TObjectPtr<UObject_const_> *)&local_140.ObjectPtr,(UObject *)0x0,
                  (UObject *)0x0,0);
  local_128.Key = (FName *)&local_138;
  local_138.Key = &FBlueprintTags::NativeParentClassPath;
  local_128.Value = (FString *)&local_128;
  local_108._First = (TPairInitializer<FName_const_&,FString_const_&> *)local_128.Key;
  local_108._Last = (TPairInitializer<FName_const_&,FString_const_&> *)local_128.Value;
  TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>::
  TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
            ((TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
              *)local_88,&local_108);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  (**(code **)(*plVar10 + 0x40))(plVar10,local_88,&local_190);
  iVar6 = (int)local_188;
  uVar15 = (ulonglong)(int)local_188;
  local_d8.Elements._0_8_ = 0;
  pFVar18 = local_190 + uVar15;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  pFVar16 = local_190;
  while( true ) {
    if ((int)uVar15 != iVar6) {
      local_198 = 0;
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_198);
    }
    if (pFVar16 == pFVar18) break;
    local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Data.ArrayNum = 0;
    local_180.Data.ArrayMax = 0;
    ::FName::FName(&local_110,9,L"Namespace",FNAME_Add);
    FAssetDataTagMapSharedView::FindTag(&pFVar16->TagsAndValues,(FName)&local_150);
    if (local_150.Loose != (FString *)0x0) {
      pFVar11 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_150.Fixed,&local_e8);
      if (&local_180 != pFVar11) {
        local_180.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_180.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_180.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_d8,(FString *)local_148,(bool *)&local_180);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    uVar15 = local_188 & 0xffffffff;
    pFVar16 = pFVar16 + 1;
  }
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  pUVar12 = UNamingTokens::StaticClass();
  GetDerivedClasses(pUVar12,&local_160,true);
  iVar6 = local_160.ArrayNum;
  uVar15 = (ulonglong)local_160.ArrayNum;
  pFVar1 = local_160.AllocatorInstance.Data + uVar15 * 8;
  FVar19.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar15 != iVar6) {
      local_197[0] = 0;
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_197)
      ;
    }
    if (FVar19.Data == pFVar1) break;
    pUVar12 = *(UClass **)FVar19.Data;
    pFVar13 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar12->_padding_ + 4));
    if ((((ulonglong)((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) &&
       ((pUVar12->ClassFlags & (CLASS_NewerVersionExists|CLASS_Deprecated|CLASS_Abstract)) ==
        CLASS_None)) {
      if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar12);
      }
      pUVar4 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar12 = UNamingTokens::StaticClass();
      iVar2 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar14 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar14;
        }
      }
      local_170.Data = (FScriptContainerElement *)0x0;
      local_168 = *(int *)&pUVar4[6].field_0x10;
      lVar17 = (longlong)local_168;
      _Src = *(void **)&pUVar4[6].field_0x8;
      if (local_168 == 0) {
        local_164 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_168,0,&local_170,local_168,&local_164);
        memcpy(local_170.Data,_Src,lVar17 * 2);
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_d8,(FString *)(local_148 + 4),(bool *)&local_170);
      if (local_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data);
      }
    }
    uVar15 = local_160._8_8_ & 0xffffffff;
    FVar19.Data = FVar19.Data + 8;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
            (&local_d8,__return_storage_ptr__);
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  DestructItems<FAssetData,int>(local_190,(int)local_188);
  if (local_190 != (FAssetData *)0x0) {
    FMemory::Free(local_190);
  }
  return __return_storage_ptr__;
}

// GetFormattedTokensStringForDisplay @ 14d0ddf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UNamingTokensEngineSubsystem::GetFormattedTokensStringForDisplay
          (UNamingTokensEngineSubsystem *this,FString *__return_storage_ptr__,
          FNamingTokenFilterArgs *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  UNamingTokensEngineSubsystem *this_00;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  FString *pFVar7;
  ulonglong uVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  UNamingTokens *this_01;
  FString *pFVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  UNamingTokensEngineSubsystem *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [12];
  int local_1a8;
  FNamingTokenFilterArgs *local_1a0;
  FString *local_198;
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  longlong *local_130;
  uint uStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar15 = (param_1->AdditionalNamespacesToInclude).ArrayNum;
  pFVar17 = (param_1->AdditionalNamespacesToInclude).AllocatorInstance.Data;
  local_1c0 = this;
  local_1a0 = param_1;
  local_198 = __return_storage_ptr__;
  if (((int)uVar15 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  uVar21 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar15 != 0) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar15);
    uVar18 = 1;
    if (3 < uVar15) {
      uVar22 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1b8 = (undefined4)lVar13;
      uVar18 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar18)) {
      local_50 = uVar18;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar18 != 0) {
        uVar20 = uVar18;
        if (uVar18 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar20 = 0;
            goto LAB_14d0de0be;
          }
        }
        else {
LAB_14d0de0be:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar20,4)
          ;
        }
        if (0 < (int)uVar18) {
          uVar22 = (ulonglong)uVar18;
          do {
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            uVar8 = uVar21 & (longlong)(int)uVar18 - 1U;
            uVar21 = uVar21 + 1;
            *(undefined4 *)(FVar12.Data + uVar8 * 4) = 0xffffffff;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
      if ((local_50 != 0) &&
         (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TConstIterator::TConstIterator
                    ((TConstIterator *)&local_180,
                     (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98), local_178.CurrentBitIndex < (local_178.Array)->NumBits)) {
        do {
          iVar4 = local_178.CurrentBitIndex;
          iVar2 = *(int *)(*local_180 + 8 + (longlong)local_178.CurrentBitIndex * 0x18);
          puVar1 = (undefined8 *)(*local_180 + (longlong)local_178.CurrentBitIndex * 0x18);
          iVar16 = iVar2 + -1;
          if (iVar2 == 0) {
            pwVar14 = L"";
            iVar16 = 0;
          }
          else {
            pwVar14 = (wchar_t *)*puVar1;
          }
          uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar14);
          uVar18 = local_50 - 1 & uVar18;
          *(uint *)((longlong)puVar1 + 0x14) = uVar18;
          FVar12.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_58.Data;
          }
          uVar21 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar12.Data + uVar21 * 4);
          *(int *)(FVar12.Data + uVar21 * 4) = iVar4;
          local_178.UnvisitedBitMask = local_178.UnvisitedBitMask & ~local_178._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_178);
          param_1 = local_1a0;
        } while (local_178.CurrentBitIndex < (local_178.Array)->NumBits);
      }
    }
  }
  pFVar19 = pFVar17 + (longlong)(int)uVar15 * 0x10;
  this_00 = local_1c0;
  for (; local_1c0 = this_00, pFVar17 != pFVar19; pFVar17 = pFVar17 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
               (FString *)local_1b4,(bool *)pFVar17);
    this_00 = local_1c0;
  }
  if (param_1->bIncludeGlobal == false) goto LAB_14d0de4d8;
  pTVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                     (&this_00->GlobalNamespaces,&local_190);
  uVar15 = pTVar9->ArrayNum + (local_98._8_4_ - local_64);
  if ((uint)(local_98._8_4_ - local_64) < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar15);
    if (uVar15 < 4) {
      uVar15 = 1;
    }
    else {
      uVar21 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1b4._4_4_ = (undefined4)lVar13;
      uVar15 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar15)) {
      local_50 = uVar15;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar15 != 0) {
        uVar18 = uVar15;
        if (uVar15 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar18 = 0;
            goto LAB_14d0de2ff;
          }
        }
        else {
LAB_14d0de2ff:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar22 = (ulonglong)uVar15;
          uVar21 = 0;
          do {
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            uVar8 = uVar21 & (longlong)(int)uVar15 - 1U;
            uVar21 = uVar21 + 1;
            *(undefined4 *)(FVar12.Data + uVar8 * 4) = 0xffffffff;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
      if ((local_50 != 0) &&
         (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TConstIterator::TConstIterator
                    ((TConstIterator *)&local_158,
                     (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98), local_150.CurrentBitIndex < (local_150.Array)->NumBits)) {
        do {
          iVar4 = local_150.CurrentBitIndex;
          iVar2 = *(int *)(*local_158 + 8 + (longlong)local_150.CurrentBitIndex * 0x18);
          puVar1 = (undefined8 *)(*local_158 + (longlong)local_150.CurrentBitIndex * 0x18);
          iVar16 = iVar2 + -1;
          if (iVar2 == 0) {
            pwVar14 = L"";
            iVar16 = 0;
          }
          else {
            pwVar14 = (wchar_t *)*puVar1;
          }
          uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar14);
          uVar15 = local_50 - 1 & uVar15;
          *(uint *)((longlong)puVar1 + 0x14) = uVar15;
          FVar12.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_58.Data;
          }
          uVar21 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar12.Data + uVar21 * 4);
          *(int *)(FVar12.Data + uVar21 * 4) = iVar4;
          local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
      }
    }
  }
  iVar16 = pTVar9->ArrayNum;
  pFVar17 = (pTVar9->AllocatorInstance).Data;
  pFVar19 = pFVar17 + (longlong)iVar16 * 0x10;
  while( true ) {
    if (pTVar9->ArrayNum != iVar16) {
      local_1c8 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1c8)
      ;
    }
    if (pFVar17 == pFVar19) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
               (FString *)(local_1b4 + 8),(bool *)pFVar17);
    pFVar17 = pFVar17 + 0x10;
  }
  pFVar17 = (pTVar9->AllocatorInstance).Data;
  if (pTVar9->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar17,pTVar9->ArrayNum);
    pTVar9->ArrayNum = 0;
    if (pTVar9->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar17,pTVar9->ArrayNum);
    pTVar9->ArrayNum = 0;
  }
  DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
LAB_14d0de4d8:
  uVar15 = local_70;
  pFVar7 = local_198;
  uStack_128 = 0;
  local_110 = 0;
  (local_198->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_198->Data).ArrayNum = 0;
  (local_198->Data).ArrayMax = 0;
  uStack_114 = uStack_128;
  uStack_124 = 1;
  if (local_70 != 0) {
    FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_78;
    }
    uVar18 = *(uint *)FVar23;
    local_110 = 0;
    uStack_128 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)(int)uStack_128;
      local_110 = local_110 + 0x20;
      uStack_128 = uStack_128 + 1;
      uStack_114 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_128)
      goto LAB_14d0de562;
      uVar18 = ((uint *)((longlong)FVar23 + 4))[lVar13];
    }
    uStack_124 = -uVar18 & uVar18;
    uVar21 = (ulonglong)uStack_124 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1a8 = (int)lVar13;
    uStack_114 = (local_110 - 1) + local_1a8;
    if ((int)local_70 < (int)uStack_114) {
      uStack_114 = local_70;
    }
  }
LAB_14d0de562:
  local_130 = (longlong *)local_98;
  uStack_10c = local_a4;
  local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar18 = local_70 & 0xffffffe0;
  iStack_108 = local_98._8_4_ - local_64;
  uStack_118 = 0xffffffff;
  TStack_f8.CurrentBitIndex = uStack_114;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_124,uStack_128);
  iVar16 = (int)local_70 >> 5;
  TStack_f8._28_4_ = local_a4;
  TStack_f8.BaseBitIndex = local_110;
  uStack_d8 = CONCAT44(uStack_104,iStack_108);
  bVar11 = (byte)local_70;
  local_100 = local_130;
  TStack_f8.Array = local_120;
  if (((int)local_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  if (uVar15 != local_70) {
    FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_78;
    }
    uVar15 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14d0de670;
      uVar15 = ((uint *)((longlong)FVar23 + 4))[lVar13];
    }
    uVar21 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar18;
    if ((int)local_70 < (int)uVar15) {
      uVar15 = local_70;
    }
  }
LAB_14d0de670:
  while( true ) {
    plVar5 = local_100;
    if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c7);
    }
    if (((TStack_f8.CurrentBitIndex == uVar15) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar5 == (longlong *)local_98)) break;
    this_01 = GetNamingTokens(this_00,(FString *)
                                      (*plVar5 + (longlong)TStack_f8.CurrentBitIndex * 0x18));
    if (this_01 != (UNamingTokens *)0x0) {
      pFVar10 = UNamingTokens::GetFormattedTokensStringForDisplay(this_01,local_d0);
      iVar2 = (pFVar10->Data).ArrayNum;
      iVar16 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar16 = 0;
      }
      ::FString::AppendChars(pFVar7,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar16);
      if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
      }
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return pFVar7;
}

// GetGlobalNamespaces @ 14d0de780

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokensEngineSubsystem::GetGlobalNamespaces
          (UNamingTokensEngineSubsystem *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
            (&this->GlobalNamespaces,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMultipleNamingTokens @ 14d0de7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> * __thiscall
UNamingTokensEngineSubsystem::GetMultipleNamingTokens
          (UNamingTokensEngineSubsystem *this,
          TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 this_00;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  int *piVar20;
  uint uVar21;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [8];
  UNamingTokens *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c [20];
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar18 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar21 = param_1->ArrayNum;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_15c._12_8_ = this;
  if (((int)uVar21 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar8;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  uVar15 = 1;
  local_168 = 1;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar21 == 0) goto LAB_14d0dea14;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar21);
  if (3 < uVar21) {
    uVar15 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_160 = (undefined4)lVar11;
    uVar15 = (ulonglong)(uint)(1 << ((byte)lVar11 & 0x1f));
  }
  uVar7 = (uint)uVar15;
  if ((local_50 != 0) && ((int)uVar7 <= (int)local_50)) goto LAB_14d0dea14;
  local_50 = uVar7;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar7 != 0) {
    uVar17 = uVar7;
    if (uVar7 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_14d0de90d;
      }
    }
    else {
LAB_14d0de90d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4);
    }
    if (0 < (int)uVar7) {
      do {
        FVar10.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar9 = (longlong)(int)uVar7 - 1U & uVar18;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar10.Data + uVar9 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if ((local_50 != 0) &&
     (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_148,
                 (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98), local_140.CurrentBitIndex < (local_140.Array)->NumBits)) {
    do {
      iVar4 = local_140.CurrentBitIndex;
      iVar2 = *(int *)(*local_148 + 8 + (longlong)local_140.CurrentBitIndex * 0x18);
      puVar1 = (undefined8 *)(*local_148 + (longlong)local_140.CurrentBitIndex * 0x18);
      iVar13 = iVar2 + -1;
      if (iVar2 == 0) {
        pwVar12 = L"";
        iVar13 = 0;
      }
      else {
        pwVar12 = (wchar_t *)*puVar1;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar12);
      uVar7 = local_50 - 1 & uVar7;
      *(uint *)((longlong)puVar1 + 0x14) = uVar7;
      FVar10.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar7;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar10.Data + uVar18 * 4);
      *(int *)(FVar10.Data + uVar18 * 4) = iVar4;
      local_140.UnvisitedBitMask = local_140.UnvisitedBitMask & ~local_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_140);
    } while (local_140.CurrentBitIndex < (local_140.Array)->NumBits);
  }
LAB_14d0dea14:
  piVar20 = &__return_storage_ptr__->ArrayMax;
  pFVar16 = pFVar14 + (longlong)(int)uVar21 * 0x10;
  uVar21 = local_70;
  for (; local_70 = uVar21, pFVar14 != pFVar16; pFVar14 = pFVar14 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
               (FString *)local_15c,(bool *)pFVar14);
    uVar21 = local_70;
  }
  iStack_118 = 0;
  local_100 = 0;
  uStack_104 = 0;
  if (uVar21 == 0) {
LAB_14d0dead2:
    uStack_114 = (uint)local_168;
  }
  else {
    FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_78;
    }
    uStack_114 = *(uint *)FVar19;
    while (uStack_114 == 0) {
      lVar11 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      uStack_104 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
      goto LAB_14d0dead2;
      uStack_114 = ((uint *)((longlong)FVar19 + 4))[lVar11];
    }
    uStack_114 = -uStack_114 & uStack_114;
    uVar18 = (ulonglong)uStack_114 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_15c._4_4_ = (undefined4)lVar11;
    uStack_104 = local_100 + -1 + local_15c._4_4_;
    if ((int)uVar21 < (int)uStack_104) {
      uStack_104 = uVar21;
    }
  }
  local_120 = (longlong *)local_98;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar7 = uVar21 & 0xffffffe0;
  iStack_f8 = local_98._8_4_ - local_64;
  uStack_108 = 0xffffffff;
  TStack_e8.CurrentBitIndex = uStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
  iVar13 = (int)uVar21 >> 5;
  TStack_e8._28_4_ = local_a4;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  local_f0 = local_120;
  TStack_e8.Array = local_110;
  if (((int)uVar21 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar8;
  }
  this_00 = local_15c._12_8_;
  if (uVar21 != local_70) {
    FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_78;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar13 * 4);
    while (uVar21 == 0) {
      lVar11 = (longlong)iVar13;
      uVar7 = uVar7 + 0x20;
      iVar13 = iVar13 + 1;
      uVar21 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14d0debd4;
      uVar21 = ((uint *)((longlong)FVar19 + 4))[lVar11];
    }
    uVar18 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_15c._8_4_ = (undefined4)lVar11;
    uVar21 = local_15c._8_4_ + -1 + uVar7;
    if ((int)local_70 < (int)uVar21) {
      uVar21 = local_70;
    }
  }
LAB_14d0debd4:
  while( true ) {
    plVar5 = local_f0;
    if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
      local_178[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (((TStack_e8.CurrentBitIndex == uVar21) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar5 == (longlong *)local_98)) break;
    local_170 = GetNamingTokens((UNamingTokensEngineSubsystem *)this_00,
                                (FString *)(*plVar5 + (longlong)TStack_e8.CurrentBitIndex * 0x18));
    if (local_170 != (UNamingTokens *)0x0) {
      pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_170) &&
          ((FScriptContainerElement *)&local_170 < pFVar14 + (longlong)*piVar20 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar13 = __return_storage_ptr__->ArrayNum;
      if (iVar13 == *piVar20) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar20);
      }
      __return_storage_ptr__->ArrayNum = iVar13 + 1;
      *(UNamingTokens **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 8) =
           local_170;
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar13 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// GetNamingTokenFromCache @ 14d0def50

UNamingTokens * __thiscall
UNamingTokensEngineSubsystem::GetNamingTokenFromCache
          (UNamingTokensEngineSubsystem *this,FString *param_1,bool param_2)

{
  TMap<FString,TObjectPtr<UNamingTokens>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>_>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  FUObjectItem *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  UNamingTokens *pUVar7;
  longlong lVar9;
  UNamingTokens *pUVar10;
  wchar_t *pwVar11;
  UNamingTokens *pUVar8;
  
  lpCriticalSection = &this->CachedNamingTokensMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pUVar8 = (UNamingTokens *)0x0;
    pUVar7 = (UNamingTokens *)0x0;
    if (this->bIsCacheEnabled != false) {
      iVar2 = (param_1->Data).ArrayNum;
      this_00 = &this->CachedNamingTokens;
      pwVar11 = L"";
      if (iVar2 == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar6 = 0;
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = iVar6;
      }
      uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
      iVar2 = TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
                          *)this_00,uVar1,param_1);
      if (iVar2 != -1) {
        lVar9 = (longlong)iVar2 * 0x20 + *(longlong *)&this_00->field_0x0;
        pUVar10 = (UNamingTokens *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          pUVar10 = pUVar8;
        }
        if (pUVar10 != (UNamingTokens *)0x0) {
          pUVar8 = (UNamingTokens *)pUVar10->_padding_;
          if (pUVar8 == (UNamingTokens *)0x0) {
            pUVar8 = pUVar7;
            if (*(int *)&(this->CachedNamingTokens).field_0x8 !=
                *(int *)&(this->CachedNamingTokens).field_0x34) {
              iVar2 = (param_1->Data).ArrayNum;
              if (iVar2 != 0) {
                pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                iVar6 = iVar2 + -1;
              }
              uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
              TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FString>
                        ((TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
                          *)this_00,uVar1,param_1);
            }
          }
          else if ((param_2) &&
                  (pFVar3 = FUObjectArray::IndexToObject
                                      (&GUObjectArray,*(int *)(pUVar8->_padding_ + 0xc)),
                  pUVar8 = pUVar7,
                  ((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0)) {
            pUVar8 = (UNamingTokens *)pUVar10->_padding_;
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pUVar8;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNamingTokenNamespacesFromString @ 14d0df090

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
UNamingTokensEngineSubsystem::GetNamingTokenNamespacesFromString
          (UNamingTokensEngineSubsystem *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          FString *param_1,FNamingTokenFilterArgs *param_2)

{
  bool bVar1;
  FString local_58;
  FRegexPattern local_48;
  FString local_38;
  FRegexMatcher local_28;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  UE::NamingTokens::Utils::GetNamespaceDelimiter(&local_38);
  ::FString::PrintfImpl(&local_58,L"\\{\\s*([a-zA-Z0-9_]+)%s[a-zA-Z0-9_]+\\s*\\}");
  FRegexPattern::FRegexPattern(&local_48,&local_58,None);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FRegexMatcher::FRegexMatcher(&local_28,&local_48,param_1);
  bVar1 = FRegexMatcher::FindNext(&local_28);
  if (bVar1) {
    do {
      FRegexMatcher::GetCaptureGroup(&local_28,&local_58,1);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (__return_storage_ptr__,(FString *)&stack0x00000010,(bool *)&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      bVar1 = FRegexMatcher::FindNext(&local_28);
    } while (bVar1);
  }
  if (param_2->bIncludeGlobal != false) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (__return_storage_ptr__,&this->GlobalNamespaces);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Implementation.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetNamingTokens @ 14d0df200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UNamingTokens * __thiscall
UNamingTokensEngineSubsystem::GetNamingTokens(UNamingTokensEngineSubsystem *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  FMapHandle FVar4;
  code *pcVar5;
  FKeyForward FVar6;
  FName FVar7;
  FAssetData *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  UNamingTokens *pUVar13;
  UClass *this_00;
  FName *pFVar14;
  FModuleManager *this_01;
  IModuleInterface *pIVar15;
  longlong *plVar16;
  UClass *this_02;
  FValueId *pFVar17;
  FString *pFVar18;
  ulonglong uVar19;
  FAssetTagValueRef_u_0 FVar20;
  ForAnyElementType FVar21;
  undefined1 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  FMapHandle *this_03;
  size_t _Size;
  FAssetTagValueRef_u_0 FVar25;
  undefined1 auStackY_458 [32];
  FKeyForward local_408 [8];
  FTopLevelAssetPath local_400;
  UNamingTokens *local_3f0;
  FAssetData *local_3e8;
  ulonglong local_3e0;
  uint local_3d8;
  FAssetTagValueRef_u_0 local_3d0;
  ForAnyElementType local_3c8;
  undefined4 local_3c0;
  int local_3bc;
  FAssetTagValueRef_u_0 local_3b8;
  FString *local_3b0;
  FSoftObjectPath local_3a8;
  FTopLevelAssetPath local_388;
  undefined1 local_378 [16];
  FName FStack_368;
  ForAnyElementType local_360;
  int local_358;
  int local_354;
  FName local_350;
  longlong *local_348;
  FName local_340;
  UNamingTokensEngineSubsystem *local_338;
  FAssetData *local_330;
  FString local_328;
  FString local_318;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  longlong *local_2f8;
  FString *local_2f0;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FName local_2d8;
  FTopLevelAssetPath local_2d0;
  TStringView<wchar_t> local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  TStringView<wchar_t> local_278;
  FString local_268;
  FName local_258;
  FName local_250;
  FString local_248;
  ForAnyElementType local_238;
  undefined8 local_230;
  TBitArray<FDefaultBitArrayAllocator> local_228;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  void *local_1f8;
  ulonglong local_1f0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1e8;
  undefined1 local_1b0 [8];
  undefined1 *local_1a8;
  int local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  FSoftObjectPath *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_148;
  void *local_108;
  undefined4 local_100;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_3b0 = param_1;
  local_338 = this;
  pUVar13 = GetNamingTokenFromCache(this,param_1,false);
  if (pUVar13 != (UNamingTokens *)0x0) {
    return pUVar13;
  }
  local_3f0 = GetNamingTokensNative(this,param_1);
  this_00 = UNamingTokens::StaticClass();
  pFVar14 = ::FName::FName(&local_2d8,"AssetRegistry");
  FVar3 = *pFVar14;
  this_01 = FModuleManager::Get();
  pIVar15 = FModuleManager::LoadModuleChecked(this_01,FVar3);
  plVar16 = (longlong *)(**(code **)((longlong)*pIVar15 + 0x40))(pIVar15);
  local_198 = (void *)0x0;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = (FSoftObjectPath *)0x0;
  local_170 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_148._32_8_ = 0;
  local_148._40_4_ = 0;
  local_148._52_4_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_4_ = 0;
  local_f8._52_4_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_148._44_4_ = 0x80;
  local_148._48_4_ = 0xffffffff;
  local_f8._44_4_ = 0x80;
  local_f8._48_4_ = 0xffffffff;
  local_a8._44_4_ = 0x80;
  local_a8._48_4_ = 0xffffffff;
  local_348 = plVar16;
  this_02 = Z_Construct_UClass_UBlueprint_NoRegister();
  UStruct::GetStructPathName((UStruct *)this_02,&local_388);
  if (((local_158.Data <= &local_388) &&
      (&local_388 < (FTopLevelAssetPath *)(local_158.Data + (longlong)local_150._4_4_ * 0x10))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    pUVar13 = (UNamingTokens *)(*pcVar5)();
    return pUVar13;
  }
  iVar10 = (int)local_150;
  if ((int)local_150 == local_150._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_158,(int *)((longlong)&local_150 + 4));
  }
  local_150 = CONCAT44(local_150._4_4_,iVar10 + 1);
  pFVar1 = local_158.Data + (longlong)iVar10 * 0x10;
  *(uint *)pFVar1 = local_388.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 4) = local_388.PackageName.Number;
  *(uint *)(pFVar1 + 8) = local_388.AssetName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 0xc) = local_388.AssetName.Number;
  local_58 = 0x101;
  local_3e8 = (FAssetData *)0x0;
  local_3e0 = 0;
  (**(code **)(*plVar16 + 0x50))(plVar16,&local_198,&local_3e8);
  local_1e8._0_8_ = 0;
  local_1e8._8_8_ = 0;
  local_1e8._32_8_ = 0;
  local_1e8._40_4_ = 0;
  local_1e8._44_4_ = 0x80;
  local_1e8._48_4_ = 0xffffffff;
  local_1e8._52_4_ = 0;
  local_1a8 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_228.AllocatorInstance.InlineData[0] = '\0';
  local_228.AllocatorInstance.InlineData[1] = '\0';
  local_228.AllocatorInstance.InlineData[2] = '\0';
  local_228.AllocatorInstance.InlineData[3] = '\0';
  local_228.AllocatorInstance.InlineData[4] = '\0';
  local_228.AllocatorInstance.InlineData[5] = '\0';
  local_228.AllocatorInstance.InlineData[6] = '\0';
  local_228.AllocatorInstance.InlineData[7] = '\0';
  local_228.AllocatorInstance.InlineData[8] = '\0';
  local_228.AllocatorInstance.InlineData[9] = '\0';
  local_228.AllocatorInstance.InlineData[10] = '\0';
  local_228.AllocatorInstance.InlineData[0xb] = '\0';
  local_228.AllocatorInstance.InlineData[0xc] = '\0';
  local_228.AllocatorInstance.InlineData[0xd] = '\0';
  local_228.AllocatorInstance.InlineData[0xe] = '\0';
  local_228.AllocatorInstance.InlineData[0xf] = '\0';
  local_200 = 0;
  local_1f0 = 0;
  pcVar5 = *(code **)(*plVar16 + 0x140);
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  local_228.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_228.NumBits = 0;
  local_228.MaxBits = 0x80;
  local_208 = 0xffffffff;
  local_204 = 0;
  local_1f8 = (void *)0x0;
  UStruct::GetStructPathName((UStruct *)this_00,&local_2d0);
  local_3c8.Data = (FScriptContainerElement *)0x0;
  local_3c0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_3c8,1,&local_3bc);
  *(uint *)local_3c8.Data = local_2d0.PackageName.ComparisonIndex.Value;
  *(uint *)(local_3c8.Data + 4) = local_2d0.PackageName.Number;
  *(uint *)(local_3c8.Data + 8) = local_2d0.AssetName.ComparisonIndex.Value;
  *(uint *)(local_3c8.Data + 0xc) = local_2d0.AssetName.Number;
  (*pcVar5)(plVar16,&local_3c8,&local_238,&local_1e8);
  if (local_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data);
  }
  local_1f0 = local_1f0 & 0xffffffff00000000;
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  uVar24 = local_230 >> 0x20;
  local_230 = local_230 & 0xffffffff00000000;
  if ((int)uVar24 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_238,0,(int *)((longlong)&local_230 + 4));
  }
  local_208 = 0xffffffff;
  local_204 = 0;
  local_228.NumBits = 0;
  if (0x80 < (uint)local_228.MaxBits) {
    local_228.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_228,0);
  }
  if (local_228.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_228.AllocatorInstance.SecondaryData);
  }
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data);
  }
  FVar6 = local_408[0];
  uVar19 = (ulonglong)(int)(uint)local_3e0;
  local_3d8 = (uint)local_3e0;
  this_03 = (FMapHandle *)&local_3e8->TagsAndValues;
  local_330 = local_3e8 + uVar19;
  uVar24 = uVar19;
  do {
    while( true ) {
      pFVar8 = local_330;
      FVar25.Loose = (FString *)0x0;
      if ((int)uVar19 != (int)uVar24) {
        local_408[0] = (FKeyForward)0x0;
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_408);
      }
      if ((FAssetData *)(this_03 + -7) == pFVar8) {
        local_1a0 = 0;
        if (local_1a8 != (undefined1 *)0x0) {
          FMemory::Free(local_1a8);
        }
        TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1e8);
        DestructItems<FAssetData,int>(local_3e8,(uint)local_3e0);
        if (local_3e8 != (FAssetData *)0x0) {
          FMemory::Free(local_3e8);
        }
        local_60 = 0;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_a8);
        local_b0 = 0;
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_f8);
        local_100 = 0;
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_148);
        if ((FTopLevelAssetPath *)local_158.Data != (FTopLevelAssetPath *)0x0) {
          FMemory::Free(local_158.Data);
        }
        if (local_168 != (void *)0x0) {
          FMemory::Free(local_168);
        }
        DestructItems<FSoftObjectPath,int>(local_178,(int)local_170);
        if (local_178 != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_178);
        }
        if (local_188 != (void *)0x0) {
          FMemory::Free(local_188);
        }
        if (local_198 == (void *)0x0) {
          return local_3f0;
        }
        FMemory::Free(local_198);
        return local_3f0;
      }
      pFVar14 = ::FName::FName(&local_250,L"GeneratedClass");
      FVar20.Loose = FVar25.Loose;
      if (this_03->IsValid != 0) break;
      FVar4 = *this_03;
      if (FVar4 != (FMapHandle)0x0) {
        local_350 = *pFVar14;
        uVar11 = Algo::
                 BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                           ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)FVar4,
                            &local_350,FVar6,(FNameFastLess)FVar6);
        if (uVar11 != 0xffffffff) {
          uVar12 = 0;
          if ((int)uVar11 < *(int *)((longlong)FVar4 + 8)) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            pUVar13 = (UNamingTokens *)(*pcVar5)();
            return pUVar13;
          }
          FVar20.Loose = (FString *)(*(longlong *)FVar4 + ((longlong)(int)uVar11 * 3 + 1) * 8);
        }
        goto LAB_14d0df7e7;
      }
      local_3d0.Loose = (FString *)0x0;
LAB_14d0dfbe9:
      uVar19 = local_3e0 & 0xffffffff;
      this_03 = this_03 + 0xd;
      uVar24 = (ulonglong)local_3d8;
    }
    pFVar17 = FixedTagPrivate::FMapHandle::FindValue(this_03,*pFVar14);
    if (pFVar17 != (FValueId *)0x0) {
      FVar20.Bits = ((ulonglong)*(ushort *)this_03 & 0xfffffffffffffffc | 0xfffffffe00000000) <<
                    0x1e | (ulonglong)(uint)*pFVar17;
    }
LAB_14d0df7e7:
    local_3d0 = FVar20;
    if ((FScriptContainerElement *)FVar20.Loose == (FScriptContainerElement *)0x0)
    goto LAB_14d0dfbe9;
    FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_3d0.Fixed,&local_328);
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_328.Data.ArrayNum != 0) {
      FVar21.Data = local_328.Data.AllocatorInstance.Data;
    }
    pFVar18 = FPackageName::ExportTextPathToObjectPath(&local_2a8,(wchar_t *)FVar21.Data);
    local_400.PackageName.ComparisonIndex.Value = 0;
    local_400.PackageName.Number = 0;
    local_400.AssetName.ComparisonIndex.Value = 0;
    local_400.AssetName.Number = 0;
    local_308 = (pFVar18->Data).AllocatorInstance.Data;
    iVar10 = (pFVar18->Data).ArrayNum;
    iStack_300 = iVar10 + -1;
    if (iVar10 == 0) {
      iStack_300 = 0;
    }
    local_2b8._12_4_ = uStack_2fc;
    local_2b8.Size = iStack_300;
    local_2b8.DataPtr = (wchar_t *)local_308;
    FTopLevelAssetPath::TrySetPath(&local_400,&local_2b8);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    FVar7 = local_400.AssetName;
    uVar11 = ::GetTypeHash(local_400.AssetName.ComparisonIndex);
    FVar3 = local_400.PackageName;
    uVar12 = ::GetTypeHash(local_400.PackageName.ComparisonIndex);
    uVar12 = uVar12 + FVar3.Number;
    if (local_1e8._8_4_ != local_1e8._52_4_) {
      puVar22 = local_1b0;
      if (local_1a8 != (undefined1 *)0x0) {
        puVar22 = local_1a8;
      }
      iVar10 = *(int *)(puVar22 +
                       (ulonglong)
                       (local_1a0 - 1U &
                       (uVar12 * 0x40 + FVar7.Number + uVar11 + -0x61c88647 + (uVar12 >> 2) ^ uVar12
                       )) * 4);
      while (iVar10 != -1) {
        lVar23 = (longlong)iVar10;
        if ((*(FName *)(local_1e8._0_8_ + lVar23 * 0x18) == local_400.PackageName) &&
           (*(FName *)(local_1e8._0_8_ + 8 + lVar23 * 0x18) == local_400.AssetName)) {
          if (iVar10 != -1) {
            ::FName::FName(&local_258,9,L"Namespace",FNAME_Add);
            FAssetDataTagMapSharedView::FindTag
                      ((FAssetDataTagMapSharedView *)this_03,(FName)&local_3b8);
            if (local_3b8.Loose != (FString *)0x0) {
              pFVar18 = FAssetTagValueRef::AsString
                                  ((FAssetTagValueRef *)&local_3b8.Fixed,&local_298);
              iVar10 = 0;
              if (&local_248 != pFVar18) {
                FVar25.Fixed.Bits = (FFixedTagValue)(pFVar18->Data).AllocatorInstance.Data;
                (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar10 = (pFVar18->Data).ArrayNum;
                (pFVar18->Data).ArrayNum = 0;
                (pFVar18->Data).ArrayMax = 0;
              }
              if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data.AllocatorInstance.Data);
              }
              pFVar18 = local_3b0;
              iVar2 = (local_3b0->Data).ArrayNum;
              if (iVar10 == iVar2) {
                if (1 < iVar10) {
                  iVar10 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)FVar25.Loose,
                                      (wchar_t *)(local_3b0->Data).AllocatorInstance.Data);
                  bVar9 = iVar10 == 0;
                  goto LAB_14d0df9d9;
                }
              }
              else {
                bVar9 = iVar2 + iVar10 == 1;
LAB_14d0df9d9:
                if (!bVar9) goto LAB_14d0dfbb3;
              }
              local_2f8 = local_348;
              local_2f0 = pFVar18;
              if ((local_3f0 == (UNamingTokens *)0x0) ||
                 (bVar9 = `UNamingTokensEngineSubsystem::GetNamingTokens'::__l19::<lambda_1>::
                          operator()(&local_2f8,&local_400,local_3f0), bVar9)) {
                pFVar18 = FTopLevelAssetPath::ToString(&local_400,&local_268);
                local_3a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
                local_3a8.AssetPath.PackageName.Number = 0;
                local_3a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
                local_3a8.AssetPath.AssetName.Number = 0;
                local_3a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                local_3a8.SubPathString.Data.ArrayNum = 0;
                local_3a8.SubPathString.Data.ArrayMax = 0;
                local_2e8 = (pFVar18->Data).AllocatorInstance.Data;
                iVar10 = (pFVar18->Data).ArrayNum;
                iStack_2e0 = iVar10 + -1;
                if (iVar10 == 0) {
                  iStack_2e0 = 0;
                }
                local_278._12_4_ = uStack_2dc;
                local_278.Size = iStack_2e0;
                local_278.DataPtr = (wchar_t *)local_2e8;
                FSoftObjectPath::SetPath(&local_3a8,&local_278);
                FVar21.Data = local_3a8.SubPathString.Data.AllocatorInstance.Data;
                _Size = (size_t)local_3a8.SubPathString.Data.ArrayNum;
                local_378._0_8_ = 0;
                local_360.Data = (FScriptContainerElement *)0x0;
                local_358 = local_3a8.SubPathString.Data.ArrayNum;
                local_378._8_4_ = local_3a8.AssetPath.PackageName.ComparisonIndex.Value;
                local_378._12_4_ = local_3a8.AssetPath.PackageName.Number;
                FStack_368 = local_3a8.AssetPath.AssetName;
                if (local_3a8.SubPathString.Data.ArrayNum == 0) {
                  local_354 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_3a8.SubPathString.Data.ArrayNum,0,&local_360,
                             local_3a8.SubPathString.Data.ArrayNum,&local_354);
                  memcpy(local_360.Data,FVar21.Data,_Size);
                }
                if (local_3a8.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3a8.SubPathString.Data.AllocatorInstance.Data);
                }
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                }
                local_3f0 = LoadNamingToken(local_338,(TSoftClassPtr<UNamingTokens> *)local_378,
                                            local_3b0);
                FVar21.Data = local_360.Data;
              }
              else {
                if ((byte)LogNamingTokens._0_1_ < 3) goto LAB_14d0dfbb3;
                ::FName::ToString((FName *)(this_03 + -7),&local_288);
                local_340 = *(FName *)(local_3f0->_padding_ + 0x18);
                ::FName::ToString(&local_340,&local_318);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
                FVar21.Data = local_288.Data.AllocatorInstance.Data;
                if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_318.Data.AllocatorInstance.Data);
                  FVar21.Data = local_288.Data.AllocatorInstance.Data;
                }
              }
              if (FVar21.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar21.Data);
              }
            }
LAB_14d0dfbb3:
            if ((FScriptContainerElement *)FVar25.Loose != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar25.Loose);
            }
          }
          break;
        }
        iVar10 = *(int *)(local_1e8._0_8_ + 0x10 + lVar23 * 0x18);
      }
    }
    if (local_328.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d0dfbe9;
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
    uVar19 = local_3e0 & 0xffffffff;
    this_03 = this_03 + 0xd;
    uVar24 = (ulonglong)local_3d8;
  } while( true );
}

// GetNamingTokensNative @ 14d0dfd60

/* WARNING: Enum "Type": Some values do not have unique names */

UNamingTokens * __thiscall
UNamingTokensEngineSubsystem::GetNamingTokensNative
          (UNamingTokensEngineSubsystem *this,FString *param_1)

{
  int iVar1;
  FName this_00;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  bool bVar5;
  int iVar6;
  UNamingTokens *pUVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UNamingTokens *pUVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FName local_res18;
  uint local_res20;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  FUtf8String local_98;
  FName *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar3 = false;
  bVar2 = false;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  pUVar7 = GetNamingTokenFromCache(this,param_1,true);
  if (pUVar7 == (UNamingTokens *)0x0) {
    pUVar8 = UNamingTokens::StaticClass();
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    GetDerivedClasses(pUVar8,&local_c8,true);
    uVar12 = (ulonglong)local_c8.ArrayNum;
    local_res20 = local_c8.ArrayNum;
    local_88 = (FName *)(local_c8.AllocatorInstance.Data + uVar12 * 8);
    uVar13 = uVar12;
    FVar14.Data = local_c8.AllocatorInstance.Data;
    while( true ) {
      pFVar4 = local_88;
      if ((int)uVar13 != (int)uVar12) {
        `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if ((FName *)FVar14.Data == pFVar4) break;
      this_00 = *(FName *)FVar14.Data;
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this_00 + 0xc));
      if ((((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) ||
         (pUVar8 == (UClass *)0x0)) {
LAB_14d0dff0e:
        bVar5 = false;
      }
      else {
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)((longlong)this_00 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)this_00 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((!bVar5) ||
           ((*(EClassFlags *)((longlong)this_00 + 0xd4) &
            (CLASS_NewerVersionExists|CLASS_Deprecated|CLASS_Abstract)) != CLASS_None))
        goto LAB_14d0dff0e;
        local_res18 = *(FName *)((longlong)this_00 + 0x18);
        bVar3 = true;
        ::FName::ToString(&local_res18,&local_50);
        bVar5 = ::FString::StartsWith(&local_50,L"SKEL_",5,IgnoreCase);
        if (bVar5) goto LAB_14d0dff0e;
        local_res18 = *(FName *)((longlong)this_00 + 0x18);
        bVar3 = true;
        bVar2 = true;
        ::FName::ToString(&local_res18,&local_60);
        bVar5 = ::FString::StartsWith(&local_60,L"REINST_",7,IgnoreCase);
        if (bVar5) goto LAB_14d0dff0e;
        pUVar10 = UClass::GetDefaultObject<UNamingTokens>((UClass *)this_00);
        iVar6 = (param_1->Data).ArrayNum;
        iVar1 = (pUVar10->Namespace).Data.ArrayNum;
        if (iVar1 == iVar6) {
          if (1 < iVar1) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pUVar10->Namespace).Data.AllocatorInstance.Data,
                               (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar5 = iVar6 == 0;
            goto LAB_14d0dff02;
          }
        }
        else {
          bVar5 = iVar6 + iVar1 == 1;
LAB_14d0dff02:
          if (!bVar5) goto LAB_14d0dff0e;
        }
        bVar5 = true;
      }
      if ((bVar2) &&
         (bVar2 = false, local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if ((bVar3) &&
         (bVar3 = false, local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        if (pUVar7 == (UNamingTokens *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0._16_8_ = 0;
          local_b0._8_8_ = 0;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          local_b0._0_8_ = 0;
          local_b8 = 0;
          FUtf8String::Reset(&local_98,0);
          local_res18 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_b0,(FObjectPtr)&local_res18);
          pUVar7 = LoadNamingToken(this,(TSoftClassPtr<UNamingTokens> *)local_b0,param_1);
          FVar11.Data = local_98.Data.AllocatorInstance.Data;
        }
        else {
          if ((byte)LogNamingTokens._0_1_ < 3) goto LAB_14d0e0065;
          local_res18 = *(FName *)((longlong)this_00 + 0x18);
          ::FName::ToString(&local_res18,&local_70);
          local_res18 = *(FName *)(pUVar7->_padding_ + 0x18);
          ::FName::ToString(&local_res18,&local_80);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
          FVar11.Data = local_70.Data.AllocatorInstance.Data;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
            FVar11.Data = local_70.Data.AllocatorInstance.Data;
          }
        }
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
      }
LAB_14d0e0065:
      uVar13 = local_c8._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
      uVar12 = (ulonglong)local_res20;
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  return pUVar7;
}

// GetPrivateStaticClass @ 14d0e0380

UClass * __cdecl UNamingTokensEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NamingTokens",L"NamingTokensEngineSubsystem",
               &Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUNamingTokensEngineSubsystem,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNamingTokensEngineSubsystem>,
               InternalVTableHelperCtorCaller<UNamingTokensEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamingTokensEngineSubsystem.InnerSingleton;
}

// IsCacheEnabled @ 14d0e0b90

bool __thiscall UNamingTokensEngineSubsystem::IsCacheEnabled(UNamingTokensEngineSubsystem *this)

{
  return this->bIsCacheEnabled;
}

// IsGlobalNamespaceRegistered @ 14d0e0bc0

bool __thiscall
UNamingTokensEngineSubsystem::IsGlobalNamespaceRegistered
          (UNamingTokensEngineSubsystem *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this->GlobalNamespaces,uVar2,param_1);
  return iVar3 != -1;
}

// LoadNamingToken @ 14d0e1070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UNamingTokens * __thiscall
UNamingTokensEngineSubsystem::LoadNamingToken
          (UNamingTokensEngineSubsystem *this,TSoftClassPtr<UNamingTokens> *param_1,FString *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UNamingTokens *pUVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  FNamingTokenData *pFVar11;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> local_130;
  undefined8 local_120;
  undefined8 local_118;
  TPairInitializer<FString_const_&,TObjectPtr<UNamingTokens>_&&> local_110;
  FText local_100;
  FText local_f0;
  FString *local_e0;
  TObjectPtr<UNamingTokens> **local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar5 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar5 == (UClass *)0x0) {
    if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
      return (UNamingTokens *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar5 = (UClass *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  if (pUVar5 != (UClass *)0x0) {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if (*(int *)(pUVar5->_padding_ + 0x38) < iVar4) {
      return (UNamingTokens *)0x0;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar6->_padding_) {
      return (UNamingTokens *)0x0;
    }
    pUVar6 = UNamingTokens::StaticClass();
    if (pUVar6 == (UClass *)0x0) {
      return (UNamingTokens *)0x0;
    }
    iVar4 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar4 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return (UNamingTokens *)0x0;
    }
    local_120 = 0;
    pUVar7 = GetTransientPackage();
    local_118 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = UNamingTokens::StaticClass();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar5);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar7;
    pUVar8 = (UNamingTokens *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    FText::FText(&local_100);
    bVar3 = UE::NamingTokens::Utils::ValidateName(&pUVar8->Namespace,&local_100);
    if ((!bVar3) && (1 < (byte)LogNamingTokens._0_1_)) {
      FText::ToString(&local_100);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    UNamingTokens::GetAllTokens(pUVar8,&local_130);
    iVar4 = local_130.ArrayNum;
    pFVar11 = (FNamingTokenData *)
              (local_130.AllocatorInstance.Data + (longlong)local_130.ArrayNum * 0x50);
    FVar10.Data = local_130.AllocatorInstance.Data;
    while( true ) {
      if (local_130.ArrayNum != iVar4) {
        local_138[0] = 0;
        `TCheckedPointerIterator<FNamingTokenData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_138);
      }
      if ((FNamingTokenData *)FVar10.Data == pFVar11) break;
      FText::FText(&local_f0);
      bVar3 = UE::NamingTokens::Utils::ValidateName((FString *)FVar10.Data,&local_f0);
      if ((!bVar3) && (1 < (byte)LogNamingTokens._0_1_)) {
        FText::ToString(&local_f0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      FVar10.Data = FVar10.Data + 0x50;
    }
    DestructItems<FNamingTokenData,int>
              ((FNamingTokenData *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
    if ((FNamingTokenData *)local_130.AllocatorInstance.Data != (FNamingTokenData *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
    iVar4 = (pUVar8->Namespace).Data.ArrayNum;
    iVar1 = (param_2->Data).ArrayNum;
    if (iVar4 == iVar1) {
      if (iVar4 < 2) goto LAB_14d0e13cb;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pUVar8->Namespace).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = iVar4 + iVar1 == 1;
    }
    if (bVar3) {
LAB_14d0e13cb:
      lpCriticalSection = &this->CachedNamingTokensMutex;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (this->bIsCacheEnabled != false) {
        local_110.Value = (TObjectPtr<UNamingTokens> *)pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UNamingTokens *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        local_d8 = &local_110.Value;
        local_e0 = param_2;
        TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UNamingTokens>_&&>_>
                  ((TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
                    *)&this->CachedNamingTokens,&local_110,(bool *)&local_e0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return pUVar8;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4537331338440605269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokens\\Private\\NamingTokensEngineSubsystem.cpp"
                       ,0x1ab,"NamingTokens->GetNamespace() == InNamespace");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UNamingTokens *)(*pcVar2)();
      return pUVar8;
    }
  }
  return (UNamingTokens *)0x0;
}

// RegisterGlobalNamespace @ 14d0e5360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNamingTokensEngineSubsystem::RegisterGlobalNamespace
          (UNamingTokensEngineSubsystem *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [16];
  FString local_28;
  FText local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this->GlobalNamespaces,uVar3,param_1);
  if (iVar4 == -1) {
    FText::FText(&local_18);
    bVar2 = UE::NamingTokens::Utils::ValidateName(param_1,&local_18);
    if (bVar2) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&this->GlobalNamespaces,(FString *)local_res8,(bool *)param_1);
    }
    else if (1 < (byte)LogNamingTokens._0_1_) {
      FText::ToString(&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar5 = ::FName::FName((FName *)(local_res8 + 8),0x19,L"UnregisterGlobalNamespace",FNAME_Add);
    local_res8._0_8_ = *pFVar5;
    ::FName::ToString((FName *)local_res8,&local_28);
    if (1 < (byte)LogNamingTokens._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNamingTokens);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// RegisterNamespaceFilter @ 14d0e54e0

void __thiscall
UNamingTokensEngineSubsystem::RegisterNamespaceFilter
          (UNamingTokensEngineSubsystem *this,FName param_1,
          TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  TPairInitializer<FName_const_&,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_&&>
  local_res8 [2];
  TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>
  **local_18;
  TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>
  *local_10;
  
  local_18 = &local_res8[0].Value;
  local_res8[0].Value =
       (TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>
        *)param_1;
  local_10 = param_2;
  TSet<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_&&>_>
            ((TSet<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->FilterNamespaceDelegates,local_res8,(bool *)&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// SetCacheEnabled @ 14d0e5c90

void __thiscall
UNamingTokensEngineSubsystem::SetCacheEnabled(UNamingTokensEngineSubsystem *this,bool param_1)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  bool bVar3;
  TMap<FString,TObjectPtr<UNamingTokens>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>_>
  *this_00;
  
  this->bIsCacheEnabled = param_1;
  if (param_1) {
    return;
  }
  lpCriticalSection = &this->CachedNamingTokensMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->CachedNamingTokens;
  bVar3 = 1 < *(int *)&(this->CachedNamingTokens).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UNamingTokens>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CachedNamingTokens).field_0x8);
  puVar1 = &(this->CachedNamingTokens).field_0xc;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedNamingTokens).field_0x34 = 0;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->CachedNamingTokens).field_0x2c;
  *(undefined4 *)&(this->CachedNamingTokens).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CachedNamingTokens).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedNamingTokens).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CachedNamingTokens).field_0x48 = 1;
    TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TObjectPtr<UNamingTokens>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UNamingTokens>,0>,FDefaultSetAllocator>
              *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0d775b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// StaticRegisterNativesUNamingTokensEngineSubsystem @ 14d0e5d00

void __cdecl UNamingTokensEngineSubsystem::StaticRegisterNativesUNamingTokensEngineSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UNamingTokensEngineSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterGlobalNamespace @ 14d0e6370

void __thiscall
UNamingTokensEngineSubsystem::UnregisterGlobalNamespace
          (UNamingTokensEngineSubsystem *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->GlobalNamespaces).Elements.field_0x8 !=
      *(int *)&(this->GlobalNamespaces).Elements.field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
              (&this->GlobalNamespaces,uVar2,param_1);
  }
  return;
}

// UnregisterNamespaceFilter @ 14d0e63d0

void __thiscall
UNamingTokensEngineSubsystem::UnregisterNamespaceFilter
          (UNamingTokensEngineSubsystem *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->FilterNamespaceDelegates).field_0x8 !=
      *(int *)&(this->FilterNamespaceDelegates).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                         *)&this->FilterNamespaceDelegates,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// execClearCachedNamingTokens @ 14d0e7220

void __cdecl
UNamingTokensEngineSubsystem::execClearCachedNamingTokens
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearCachedNamingTokens((UNamingTokensEngineSubsystem *)param_1);
  return;
}

// execEvaluateTokenList @ 14d0e7240

void __cdecl
UNamingTokensEngineSubsystem::execEvaluateTokenList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FNamingTokenFilterArgs *pFVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> local_48;
  FNamingTokenFilterArgs local_38;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_38.AdditionalNamespacesToInclude.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AdditionalNamespacesToInclude.ArrayNum = 0;
  local_38.AdditionalNamespacesToInclude.ArrayMax = 0;
  pTVar5 = &local_68;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_38.bIncludeGlobal = true;
  local_38.bForceCaseSensitive = false;
  local_38.bNativeOnly = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pFVar4 = &local_38;
  if ((FNamingTokenFilterArgs *)param_2->MostRecentPropertyAddress != (FNamingTokenFilterArgs *)0x0)
  {
    pFVar4 = (FNamingTokenFilterArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = &local_58;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = EvaluateTokenList((UNamingTokensEngineSubsystem *)param_1,&local_48,pTVar5,pFVar4,pTVar3)
  ;
  if (param_3 != pTVar2) {
    DestructItems<FNamingTokenValueData,int>
              (*(FNamingTokenValueData **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FNamingTokenValueData,int>
            ((FNamingTokenValueData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FNamingTokenValueData *)local_48.AllocatorInstance.Data != (FNamingTokenValueData *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_38.AdditionalNamespacesToInclude.AllocatorInstance.Data,
             local_38.AdditionalNamespacesToInclude.ArrayNum);
  if (local_38.AdditionalNamespacesToInclude.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AdditionalNamespacesToInclude.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execEvaluateTokenString @ 14d0e7460

void __cdecl
UNamingTokensEngineSubsystem::execEvaluateTokenString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  FText *pFVar3;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FNamingTokenFilterArgs *pFVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FText local_78;
  FNamingTokenFilterArgs local_68;
  FNamingTokenResultData local_50;
  
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AdditionalNamespacesToInclude.ArrayNum = 0;
  local_68.AdditionalNamespacesToInclude.ArrayMax = 0;
  local_68.bIncludeGlobal = true;
  local_68.bForceCaseSensitive = false;
  local_68.bNativeOnly = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pFVar5 = &local_68;
  if ((FNamingTokenFilterArgs *)param_2->MostRecentPropertyAddress != (FNamingTokenFilterArgs *)0x0)
  {
    pFVar5 = (FNamingTokenFilterArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar4 = &local_98;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FText::FromString(&local_78,&local_88);
  EvaluateTokenText((UNamingTokensEngineSubsystem *)param_1,&local_50,pFVar3,pFVar5,pTVar4);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FText::operator=(param_3,&local_50.OriginalText);
  FText::operator=((FText *)((longlong)param_3 + 0x10),&local_50.EvaluatedText);
  puVar1 = (undefined8 *)((longlong)param_3 + 0x20);
  if ((TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *)puVar1 != &local_50.TokenValues)
  {
    DestructItems<FNamingTokenValueData,int>
              ((FNamingTokenValueData *)*puVar1,*(int *)((longlong)param_3 + 0x28));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_50.TokenValues.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x28) = local_50.TokenValues.ArrayNum;
    *(int *)((longlong)param_3 + 0x2c) = local_50.TokenValues.ArrayMax;
    local_50.TokenValues.ArrayMax = 0;
    local_50.TokenValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.TokenValues.ArrayNum = 0;
  }
  DestructItems<FNamingTokenValueData,int>
            ((FNamingTokenValueData *)local_50.TokenValues.AllocatorInstance.Data,
             local_50.TokenValues.ArrayNum);
  if ((FNamingTokenValueData *)local_50.TokenValues.AllocatorInstance.Data !=
      (FNamingTokenValueData *)0x0) {
    FMemory::Free(local_50.TokenValues.AllocatorInstance.Data);
  }
  if (local_50.EvaluatedText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.EvaluatedText.TextData.Reference + 0x10))();
  }
  if (local_50.OriginalText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.OriginalText.TextData.Reference + 0x10))();
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data,
             local_68.AdditionalNamespacesToInclude.ArrayNum);
  if (local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// execEvaluateTokenText @ 14d0e76c0

void __cdecl
UNamingTokensEngineSubsystem::execEvaluateTokenText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FNamingTokenResultData *pFVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FNamingTokenFilterArgs *pFVar4;
  FText *pFVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_88;
  FText local_78;
  FNamingTokenFilterArgs local_68;
  FNamingTokenResultData local_50;
  
  FText::FText(&local_78);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AdditionalNamespacesToInclude.ArrayNum = 0;
  local_68.AdditionalNamespacesToInclude.ArrayMax = 0;
  pFVar5 = &local_78;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar5 = (FText *)param_2->MostRecentPropertyAddress;
  }
  local_68.bIncludeGlobal = true;
  local_68.bForceCaseSensitive = false;
  local_68.bNativeOnly = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pFVar4 = &local_68;
  if ((FNamingTokenFilterArgs *)param_2->MostRecentPropertyAddress != (FNamingTokenFilterArgs *)0x0)
  {
    pFVar4 = (FNamingTokenFilterArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar3 = &local_88;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = EvaluateTokenText((UNamingTokensEngineSubsystem *)param_1,&local_50,pFVar5,pFVar4,pTVar3)
  ;
  FNamingTokenResultData::operator=(param_3,pFVar2);
  DestructItems<FNamingTokenValueData,int>
            ((FNamingTokenValueData *)local_50.TokenValues.AllocatorInstance.Data,
             local_50.TokenValues.ArrayNum);
  if ((FNamingTokenValueData *)local_50.TokenValues.AllocatorInstance.Data !=
      (FNamingTokenValueData *)0x0) {
    FMemory::Free(local_50.TokenValues.AllocatorInstance.Data);
  }
  if (local_50.EvaluatedText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.EvaluatedText.TextData.Reference + 0x10))();
  }
  if (local_50.OriginalText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.OriginalText.TextData.Reference + 0x10))();
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data,
             local_68.AdditionalNamespacesToInclude.ArrayNum);
  if (local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AdditionalNamespacesToInclude.AllocatorInstance.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return;
}

// execGetAllNamespaces @ 14d0e78c0

void __cdecl
UNamingTokensEngineSubsystem::execGetAllNamespaces(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetAllNamespaces((UNamingTokensEngineSubsystem *)param_1,&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetGlobalNamespaces @ 14d0e79a0

void __cdecl
UNamingTokensEngineSubsystem::execGetGlobalNamespaces
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&param_1[4].field_0x8,
             &local_18);
  if (param_3 != &local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetMultipleNamingTokens @ 14d0e7a50

void __cdecl
UNamingTokensEngineSubsystem::execGetMultipleNamingTokens
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  TArray<UNamingTokens_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetMultipleNamingTokens((UNamingTokensEngineSubsystem *)param_1,&local_18,pTVar3);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetNamingTokens @ 14d0e7b60

void __cdecl
UNamingTokensEngineSubsystem::execGetNamingTokens(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNamingTokens *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetNamingTokens((UNamingTokensEngineSubsystem *)param_1,&local_18);
  *(UNamingTokens **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNamingTokensNative @ 14d0e7c10

void __cdecl
UNamingTokensEngineSubsystem::execGetNamingTokensNative
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNamingTokens *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetNamingTokensNative((UNamingTokensEngineSubsystem *)param_1,&local_18);
  *(UNamingTokens **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsGlobalNamespaceRegistered @ 14d0e7cc0

void __cdecl
UNamingTokensEngineSubsystem::execIsGlobalNamespaceRegistered
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = local_18.Data.ArrayNum + -1;
  FVar2.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &param_1[4].field_0x8,uVar3,&local_18);
  *(bool *)param_3 = iVar4 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRegisterGlobalNamespace @ 14d0e7f10

void __cdecl
UNamingTokensEngineSubsystem::execRegisterGlobalNamespace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RegisterGlobalNamespace((UNamingTokensEngineSubsystem *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execUnregisterGlobalNamespace @ 14d0e7fb0

void __cdecl
UNamingTokensEngineSubsystem::execUnregisterGlobalNamespace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[4].field_0x10 != *(int *)&param_1[5].field_0x14) {
    iVar4 = local_18.Data.ArrayNum + -1;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               &param_1[4].field_0x8,uVar3,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

