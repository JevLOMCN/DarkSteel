// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 15

// StaticClass @ 14dada140

UClass * __cdecl UChaosCacheCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosCacheCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCacheCollection",
               &Z_Registration_Info_UClass_UChaosCacheCollection.InnerSingleton,
               StaticRegisterNativesUChaosCacheCollection,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosCacheCollection>,
               InternalVTableHelperCtorCaller<UChaosCacheCollection>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosCacheCollection.InnerSingleton;
}

// UChaosCacheCollection @ 14dae7cf0

UChaosCacheCollection * __thiscall
UChaosCacheCollection::UChaosCacheCollection(UChaosCacheCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosCacheCollection__6B_;
  (this->Caches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Caches).ArrayNum = 0;
  (this->Caches).ArrayMax = 0;
  return this;
}

// UChaosCacheCollection @ 14dae7d30

UChaosCacheCollection * __thiscall
UChaosCacheCollection::UChaosCacheCollection
          (UChaosCacheCollection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosCacheCollection__6B_;
  (this->Caches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Caches).ArrayNum = 0;
  (this->Caches).ArrayMax = 0;
  return this;
}

// ~UChaosCacheCollection @ 14dae8e00

void __thiscall UChaosCacheCollection::~UChaosCacheCollection(UChaosCacheCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UChaosCacheCollection__6B_;
  pFVar1 = (this->Caches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dae9b70

void __thiscall
`UChaosCacheCollection::FlushAllCacheWrites'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x30)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(*(longlong *)(lVar1 + 0x28) + (longlong)param_1 * 8) != 0) {
    lVar1 = *(longlong *)this;
    uVar4 = 0;
    if (param_1 < *(int *)(lVar1 + 0x30)) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UChaosCache::FlushPendingFrames
              (*(UChaosCache **)(*(longlong *)(lVar1 + 0x28) + (longlong)param_1 * 8));
  }
  return;
}

// FindCache @ 14daf5430

UChaosCache * __thiscall
UChaosCacheCollection::FindCache(UChaosCacheCollection *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UChaosCache *pUVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Caches).AllocatorInstance.Data;
  iVar2 = (this->Caches).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Caches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UChaosCache>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar3 = *(UChaosCache **)pFVar5;
    if ((pUVar3 != (UChaosCache *)0x0) &&
       (FVar4.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18,
       FVar4.Number = *(uint *)&pUVar3->field_0x1c, FVar4 == *param_1)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      return pUVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UChaosCache *)0x0;
}

// FindOrAddCache @ 14daf55f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UChaosCache * __thiscall
UChaosCacheCollection::FindOrAddCache(UChaosCacheCollection *this,FName *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  FString *pFVar7;
  size_t sVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FName *pFVar11;
  FName FVar12;
  UChaosCache *pUVar13;
  longlong *plVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  FName local_110;
  UChaosCache *local_108 [2];
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FName local_e8;
  undefined1 local_e0 [8];
  TStringView<wchar_t> local_d8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  FVar6 = *param_1;
  local_110 = FVar6;
  if (FVar6 != (FName)0x0) {
    pFVar16 = (this->Caches).AllocatorInstance.Data;
    iVar5 = (this->Caches).ArrayNum;
    pFVar2 = pFVar16 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->Caches).ArrayNum != iVar5) {
        local_118[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UChaosCache>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
        FVar6 = local_110;
      }
      if (pFVar16 == pFVar2) break;
      pUVar13 = *(UChaosCache **)pFVar16;
      if ((pUVar13 != (UChaosCache *)0x0) &&
         (FVar12.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18,
         FVar12.Number = *(uint *)&pUVar13->field_0x1c, FVar12 == FVar6)) {
        return pUVar13;
      }
      pFVar16 = pFVar16 + 8;
    }
  }
  pFVar7 = ::FName::ToString(&local_110,&local_c8);
  pwVar17 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    local_f8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_f8 = (pFVar7->Data).AllocatorInstance.Data;
    iStack_f0 = 0;
    if (local_f8 == (FScriptContainerElement *)0x0) goto LAB_14daf56ac;
  }
  sVar8 = wcslen((wchar_t *)local_f8);
  iStack_f0 = (int)sVar8;
LAB_14daf56ac:
  pUVar9 = UChaosCache::StaticClass();
  local_d8._12_4_ = uStack_ec;
  local_d8.Size = iStack_f0;
  local_d8.DataPtr = (wchar_t *)local_f8;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)this,&local_d8,None);
  if ((pUVar10 == (UObject *)0x0) && (local_110 != (FName)0x0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = ::FName::GetPlainNameString(&local_110,&local_b8);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar17 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar11 = ::FName::FName(&local_e8,pwVar17);
    FVar6 = *pFVar11;
    FVar12 = (FName)UChaosCache::StaticClass();
    local_148 = (UChaosCache **)((ulonglong)local_148._4_4_ << 0x20);
    local_110 = MakeUniqueObjectName
                          ((UObject *)local_e0,(UClass *)this,FVar12,
                           FVar6.ComparisonIndex.Value.Value);
    local_110 = *(FName *)local_110;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  FVar6 = local_110;
  if (local_110 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = UChaosCache::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar9);
  FVar12 = local_110;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_110.ComparisonIndex = FVar6.ComparisonIndex.Value;
  local_110.Number = FVar6.Number;
  local_a8._16_4_ = local_110.ComparisonIndex.Value;
  local_a8._20_4_ = local_110.Number;
  local_a8._24_4_ = RF_Transactional;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_110 = FVar12;
  local_a8._8_8_ = this;
  pUVar13 = (UChaosCache *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar14 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  local_108[0] = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UChaosCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pFVar2 = (this->Caches).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_108) &&
     (lVar15 = (longlong)(this->Caches).ArrayMax,
     (FScriptContainerElement *)local_108 < pFVar2 + lVar15 * 8)) {
    local_130 = (longlong)(this->Caches).ArrayNum;
    local_128 = 8;
    local_148 = local_108;
    local_140 = pFVar2;
    local_138 = lVar15;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar13 = (UChaosCache *)(*pcVar3)();
      return pUVar13;
    }
  }
  iVar5 = (this->Caches).ArrayNum;
  piVar1 = &(this->Caches).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Caches).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Caches).AllocatorInstance.Data;
  (this->Caches).ArrayNum = iVar5 + 1;
  *(UChaosCache **)(pFVar2 + (longlong)iVar5 * 8) = local_108[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108[0] != (UChaosCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_108[0]);
  }
  return pUVar13;
}

// FlushAllCacheWrites @ 14daf5a30

void __thiscall UChaosCacheCollection::FlushAllCacheWrites(UChaosCacheCollection *this)

{
  <lambda_1> <Var1;
  UChaosCacheCollection *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  UChaosCacheCollection **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UChaosCacheCollection::FlushAllCacheWrites'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_28.ArrayNum = 0;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Caches).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,None,&local_28);
  return;
}

// GetAssetRegistryTags @ 14daf77c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UChaosCacheCollection::GetAssetRegistryTags
          (UChaosCacheCollection *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UChaosCacheCollection *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UChaosCacheCollection **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UChaosCacheCollection **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UChaosCacheCollection **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 14daf77d0

void __thiscall
UChaosCacheCollection::GetAssetRegistryTags
          (UChaosCacheCollection *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetMaxDuration @ 14daf8190

float __thiscall UChaosCacheCollection::GetMaxDuration(UChaosCacheCollection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Caches).AllocatorInstance.Data;
  iVar2 = (this->Caches).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  fVar4 = 0.0;
  while( true ) {
    fVar6 = fVar4;
    if ((this->Caches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UChaosCache>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    pFVar5 = pFVar5 + 8;
    fVar4 = *(float *)(lVar3 + 0x28);
    if (*(float *)(lVar3 + 0x28) <= fVar6) {
      fVar4 = fVar6;
    }
  }
  return fVar6;
}

// GetMaxNumFrames @ 14daf8210

uint __thiscall UChaosCacheCollection::GetMaxNumFrames(UChaosCacheCollection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Caches).AllocatorInstance.Data;
  iVar2 = (this->Caches).ArrayNum;
  uVar4 = 0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  fVar6 = 0.0;
  while( true ) {
    if ((this->Caches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UChaosCache>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    fVar5 = *(float *)(*(longlong *)pFVar3 + 0x28);
    if (fVar6 <= fVar5) {
      uVar4 = *(uint *)(*(longlong *)pFVar3 + 0x2c);
    }
    if (fVar5 <= fVar6) {
      fVar5 = fVar6;
    }
    pFVar3 = pFVar3 + 8;
    fVar6 = fVar5;
  }
  return uVar4;
}

// GetPrivateStaticClass @ 14daf8530

UClass * __cdecl UChaosCacheCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosCacheCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCacheCollection",
               &Z_Registration_Info_UClass_UChaosCacheCollection.InnerSingleton,
               StaticRegisterNativesUChaosCacheCollection,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosCacheCollection>,
               InternalVTableHelperCtorCaller<UChaosCacheCollection>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosCacheCollection.InnerSingleton;
}

// SetInterpolationMode @ 14db04250

void __thiscall
UChaosCacheCollection::SetInterpolationMode
          (UChaosCacheCollection *this,EChaosCacheInterpolationMode param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  this->InterpolationMode = param_1;
  pFVar3 = (this->Caches).AllocatorInstance.Data;
  iVar2 = (this->Caches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Caches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UChaosCache>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 != 0) {
      *(EChaosCacheInterpolationMode *)(*(longlong *)pFVar3 + 0x30) = param_1;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// StaticRegisterNativesUChaosCacheCollection @ 14db05390

void __cdecl UChaosCacheCollection::StaticRegisterNativesUChaosCacheCollection(void)

{
  return;
}

