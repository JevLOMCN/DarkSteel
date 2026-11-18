// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 28

// StaticClass @ 14dfe4180

UClass * __cdecl UGroomCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCache",
               &Z_Registration_Info_UClass_UGroomCache.InnerSingleton,
               StaticRegisterNativesUGroomCache,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroomCache>,InternalVTableHelperCtorCaller<UGroomCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCache.InnerSingleton;
}

// UGroomCache @ 14dff0640

UGroomCache * __thiscall UGroomCache::UGroomCache(UGroomCache *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->ArchiveVersion).bIsSet = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IChaosCacheData__;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->GroomCacheInfo).Version = 0;
  (this->GroomCacheInfo).Type = None;
  (this->GroomCacheInfo).AnimationInfo.NumFrames = 0;
  (this->GroomCacheInfo).AnimationInfo.SecondsPerFrame = 0.0;
  (this->GroomCacheInfo).AnimationInfo.Duration = 0.0;
  (this->GroomCacheInfo).AnimationInfo.Attributes = None;
  (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).ArrayNum = 0;
  (this->Chunks).ArrayMax = 0;
  (this->GroomCacheInfo).AnimationInfo.StartTime = 3.4028235e+38;
  (this->GroomCacheInfo).AnimationInfo.EndTime = 1.1754944e-38;
  (this->GroomCacheInfo).AnimationInfo.StartFrame = 0x7fffffff;
  (this->GroomCacheInfo).AnimationInfo.EndFrame = -0x80000000;
  return this;
}

// UGroomCache @ 14dff06d0

UGroomCache * __thiscall UGroomCache::UGroomCache(UGroomCache *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->ArchiveVersion).bIsSet = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IChaosCacheData__;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  (this->GroomCacheInfo).Version = 0;
  (this->GroomCacheInfo).Type = None;
  (this->GroomCacheInfo).AnimationInfo.NumFrames = 0;
  (this->GroomCacheInfo).AnimationInfo.SecondsPerFrame = 0.0;
  (this->GroomCacheInfo).AnimationInfo.Duration = 0.0;
  (this->GroomCacheInfo).AnimationInfo.Attributes = None;
  (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).ArrayNum = 0;
  (this->Chunks).ArrayMax = 0;
  (this->GroomCacheInfo).AnimationInfo.StartTime = 3.4028235e+38;
  (this->GroomCacheInfo).AnimationInfo.EndTime = 1.1754944e-38;
  (this->GroomCacheInfo).AnimationInfo.StartFrame = 0x7fffffff;
  (this->GroomCacheInfo).AnimationInfo.EndFrame = -0x80000000;
  return this;
}

// ~UGroomCache @ 14dff2d30

void __thiscall UGroomCache::~UGroomCache(UGroomCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IChaosCacheData__;
  DestructItems<FGroomCacheChunk,int>
            ((FGroomCacheChunk *)(this->Chunks).AllocatorInstance.Data,(this->Chunks).ArrayNum);
  pFVar1 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IChaosCacheData__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 14dff7270

void __thiscall UGroomCache::AddAssetUserData(UGroomCache *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar6 = (UObject *)(*pcVar2)(this,local_res18);
    if (pUVar6 != (UObject *)0x0) {
      local_48 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      if ((((UObject **)this->_padding_ <= &local_48) &&
          (&local_48 < (UObject **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (int)this->_padding_;
      if (iVar5 != 0) {
        iVar10 = 0;
        plVar3 = (longlong *)this->_padding_;
        bVar4 = (UObject *)*plVar3 != local_48;
        lVar7 = 0;
        pUVar6 = local_48;
        iVar8 = 0;
        do {
          iVar9 = iVar8;
          do {
            lVar7 = lVar7 + 1;
            iVar9 = iVar9 + 1;
            if (iVar5 <= lVar7) break;
          } while (bVar4 == ((UObject *)plVar3[lVar7] != pUVar6));
          if (bVar4 != false) {
            if (iVar10 != iVar8) {
              memmove(plVar3 + iVar10,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
              pUVar6 = local_48;
            }
            iVar10 = iVar10 + (iVar9 - iVar8);
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar8 = iVar9;
        } while (lVar7 < iVar5);
        *(int *)&this->_padding_ = iVar10;
      }
    }
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((((UAssetUserData **)this->_padding_ <= &local_40) &&
        (&local_40 < (UAssetUserData **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    *(UAssetUserData **)(this->_padding_ + (longlong)iVar5 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// GetAssetRegistryTags @ 14e0133a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UGroomCache::GetAssetRegistryTags
          (UGroomCache *this,TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1
          )

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
  UGroomCache *pUStack_180;
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
    if (*(UGroomCache **)pFVar11->InlineData == this) {
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
  *(UGroomCache **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
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
    if (*(UGroomCache **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
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

// GetAssetRegistryTags @ 14e0133b0

void __thiscall
UGroomCache::GetAssetRegistryTags(UGroomCache *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetAssetUserDataArray @ 14e013410

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UGroomCache::GetAssetUserDataArray(UGroomCache *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetAssetUserDataOfClass @ 14e013420

UAssetUserData * __thiscall
UGroomCache::GetAssetUserDataOfClass(UGroomCache *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (int)this->_padding_) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + this->_padding_);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14e0134c6;
LAB_14e0134f4:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14e0134f4;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14e0134c6:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14e0134f4;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14e0134f4;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (int)this->_padding_);
  }
  return (UAssetUserData *)0x0;
}

// GetDuration @ 14e014760

float __thiscall UGroomCache::GetDuration(UGroomCache *this)

{
  return (float)(this->ArchiveVersion).TypedValue.FileVersionUE4;
}

// GetEndFrame @ 14e015d50

int __thiscall UGroomCache::GetEndFrame(UGroomCache *this)

{
  return (this->GroomCacheInfo).AnimationInfo.EndFrame;
}

// GetFrameIndexAtTime @ 14e015db0

int __thiscall UGroomCache::GetFrameIndexAtTime(UGroomCache *this,float param_1,bool param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar5;
  
  fVar2 = (this->GroomCacheInfo).AnimationInfo.SecondsPerFrame;
  if (fVar2 == 0.0) {
    return 0;
  }
  fVar5 = (this->GroomCacheInfo).AnimationInfo.Duration - __real_38d1b717;
  if (param_2) {
    auVar4 = roundps(in_XMM2,ZEXT416((uint)(param_1 / fVar5)),1);
    fVar5 = param_1 - auVar4._0_4_ * fVar5;
  }
  else {
    fVar5 = (this->GroomCacheInfo).AnimationInfo.EndTime -
            (this->GroomCacheInfo).AnimationInfo.StartTime;
    if (param_1 <= fVar5) {
      fVar5 = param_1;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  iVar1 = (this->GroomCacheInfo).AnimationInfo.NumFrames - 1;
  iVar3 = (int)ROUND((fVar5 + fVar5) / fVar2 - __real_3f000000) >> 1;
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// GetFrameIndicesAtTime @ 14e015e40

void __thiscall
UGroomCache::GetFrameIndicesAtTime
          (UGroomCache *this,float param_1,bool param_2,bool param_3,int *param_4,int *param_5,
          float *param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  
  uVar2 = (this->GroomCacheInfo).AnimationInfo.NumFrames;
  if (uVar2 != 0) {
    fVar6 = 0.0;
    fVar7 = (this->GroomCacheInfo).AnimationInfo.Duration - __real_38d1b717;
    if (fVar7 != 0.0) {
      iVar3 = GetFrameIndexAtTime(this,param_1,param_2);
      iVar4 = uVar2 - 1;
      *param_4 = iVar3;
      if (iVar3 + 1 < iVar4) {
        iVar4 = iVar3 + 1;
      }
      *param_5 = iVar4;
      fVar1 = (this->GroomCacheInfo).AnimationInfo.SecondsPerFrame;
      if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if (param_2) {
          auVar5 = roundps(in_XMM2,ZEXT416((uint)(param_1 / fVar7)),1);
          fVar6 = param_1 - auVar5._0_4_ * fVar7;
        }
        else {
          fVar6 = (this->GroomCacheInfo).AnimationInfo.EndTime -
                  (this->GroomCacheInfo).AnimationInfo.StartTime;
          if (param_1 <= fVar6) {
            fVar6 = param_1;
          }
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
        }
        fVar6 = (fVar6 - (float)*param_4 * fVar1) / fVar1;
      }
      *param_6 = fVar6;
      fVar6 = __real_3f800000;
      if (!param_3) {
        return;
      }
      iVar4 = *param_4;
      *param_4 = *param_5;
      *param_5 = iVar4;
      *param_6 = fVar6 - *param_6;
      return;
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0.0;
  return;
}

// GetFrameIndicesForTimeRange @ 14e015fa0

void __thiscall
UGroomCache::GetFrameIndicesForTimeRange
          (UGroomCache *this,float param_1,float param_2,bool param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [9];
  
  fVar8 = param_1;
  if (param_1 <= param_2) {
    fVar8 = param_2;
  }
  fVar2 = (this->GroomCacheInfo).AnimationInfo.SecondsPerFrame;
  if (fVar8 - param_1 < fVar2) {
    fVar8 = fVar2 + param_1;
  }
  iVar6 = GetFrameIndexAtTime(this,param_1,param_3);
  iVar7 = GetFrameIndexAtTime(this,fVar8,param_3);
  local_3c[0] = iVar6;
  if (param_3) {
    if (((this->GroomCacheInfo).AnimationInfo.Duration <= fVar8 - param_1) || (iVar6 == iVar7)) {
      local_40 = 0;
      if ((this->Chunks).ArrayNum < 1) {
        return;
      }
      do {
        pFVar3 = (param_4->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_40;
        local_40 = local_40 + 1;
      } while (local_40 < (this->Chunks).ArrayNum);
      return;
    }
    if (iVar7 < iVar6) {
      piVar1 = &param_4->ArrayMax;
      local_48 = iVar6;
      if (iVar6 < (int)(this->GroomCacheInfo).AnimationInfo.NumFrames) {
        do {
          pFVar3 = (param_4->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = param_4->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_4->AllocatorInstance,piVar1);
          }
          param_4->ArrayNum = iVar6 + 1;
          *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_48;
          local_48 = local_48 + 1;
        } while (local_48 < (int)(this->GroomCacheInfo).AnimationInfo.NumFrames);
      }
      local_44 = 0;
      if (iVar7 < 0) {
        return;
      }
      do {
        pFVar3 = (param_4->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_44) &&
            ((FScriptContainerElement *)&local_44 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_4->AllocatorInstance,piVar1);
        }
        param_4->ArrayNum = iVar6 + 1;
        *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_44;
        local_44 = local_44 + 1;
      } while (local_44 <= iVar7);
      return;
    }
  }
  while( true ) {
    if (iVar7 < local_3c[0]) {
      return;
    }
    pFVar3 = (param_4->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_3c) &&
        ((FScriptContainerElement *)local_3c < pFVar3 + (longlong)param_4->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_4->ArrayNum;
    if (iVar6 == param_4->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar6 + 1;
    *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_3c[0];
    local_3c[0] = local_3c[0] + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetFrameNumberAtTime @ 14e016360

int __thiscall UGroomCache::GetFrameNumberAtTime(UGroomCache *this,float param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = GetFrameIndexAtTime(this,param_1,param_2);
  return iVar1 + (this->GroomCacheInfo).AnimationInfo.StartFrame;
}

// GetGroomDataAtFrameIndex @ 14e0163b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UGroomCache::GetGroomDataAtFrameIndex
          (UGroomCache *this,int param_1,FGroomCacheAnimationData *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined7 uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  FScriptContainerElement *local_res8;
  undefined1 local_res10 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId219,"UGroomCache::GetGroomDataAtFrameIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCache.cpp"
               ,0xdb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId219);
  }
  if ((param_1 < 0) || ((this->Chunks).ArrayNum <= param_1)) {
    bVar6 = false;
  }
  else {
    uVar8 = 0;
    if (param_1 < (this->Chunks).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    pFVar11 = (this->Chunks).AllocatorInstance.Data + (longlong)param_1 * 0x30;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_f8,*(int *)pFVar11,Default);
    local_res8 = local_f8.AllocatorInstance.Data;
    if (CpuChannel->Enabled < 0) {
      pcVar9 = (char *)&local_res8;
      FBulkData::GetCopy((FBulkData *)(pFVar11 + 8),(void **)pcVar9,true);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId235,"UGroomCache::GetGroomDataAtFrameIndex_BulkData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCache.cpp"
                 ,0xeb);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId235);
      pcVar9 = (char *)&local_res8;
      FBulkData::GetCopy((FBulkData *)(pFVar11 + 8),(void **)pcVar9,true);
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      pcVar9 = "UGroomCache::GetGroomDataAtFrameIndex_Serialize";
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId241,"UGroomCache::GetGroomDataAtFrameIndex_Serialize",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCache.cpp"
                 ,0xf1);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId241);
    }
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_50 = &local_f8;
    uVar10 = (undefined7)((ulonglong)pcVar9 >> 8);
    local_48 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar10,1));
    if ((this->ArchiveVersion).bIsSet != false) {
      (**(code **)(local_e8._padding_ + 0x110))(&local_e8,(this->ArchiveVersion).TypedValue);
    }
    FGroomCacheAnimationData::Serialize(param_2,(FArchive *)&local_e8);
    iVar3 = (param_2->GroupsData).ArrayNum;
    pFVar11 = (param_2->GroupsData).AllocatorInstance.Data;
    pFVar12 = pFVar11 + (longlong)iVar3 * 0xa0;
    while( true ) {
      if ((param_2->GroupsData).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGroomCacheGroupData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar11 == pFVar12) break;
      puVar4 = *(undefined8 **)(pFVar11 + 0x40);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar11 + 0x40) = 0;
        piVar1 = (int *)(puVar4 + 1);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      puVar4 = *(undefined8 **)(pFVar11 + 0x48);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(pFVar11 + 0x48) = 0;
        piVar1 = (int *)(puVar4 + 1);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      pFVar11 = pFVar11 + 0xa0;
    }
    FArchive::~FArchive((FArchive *)&local_e8);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar6 = true;
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// GetGroomDataAtTime @ 14e016710

bool __thiscall
UGroomCache::GetGroomDataAtTime
          (UGroomCache *this,float param_1,bool param_2,FGroomCacheAnimationData *param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetFrameIndexAtTime(this,param_1,param_2);
  bVar1 = GetGroomDataAtFrameIndex(this,iVar2,param_3);
  return bVar1;
}

// GetPrivateStaticClass @ 14e018bd0

UClass * __cdecl UGroomCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCache",
               &Z_Registration_Info_UClass_UGroomCache.InnerSingleton,
               StaticRegisterNativesUGroomCache,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroomCache>,InternalVTableHelperCtorCaller<UGroomCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCache.InnerSingleton;
}

// GetStartFrame @ 14e019430

int __thiscall UGroomCache::GetStartFrame(UGroomCache *this)

{
  return (this->GroomCacheInfo).AnimationInfo.StartFrame;
}

// GetType @ 14e0199b0

EGroomCacheType __thiscall UGroomCache::GetType(UGroomCache *this)

{
  return (this->GroomCacheInfo).Type;
}

// Initialize @ 14e01d850

void __thiscall UGroomCache::Initialize(UGroomCache *this,EGroomCacheType param_1)

{
  (this->GroomCacheInfo).Type = param_1;
  return;
}

// RemoveUserDataOfClass @ 14e025dc0

void __thiscall
UGroomCache::RemoveUserDataOfClass(UGroomCache *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < (int)this->_padding_) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(&pUVar9->field_0x0 + this->_padding_);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14e025e78;
LAB_14e025ea6:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14e025ea6;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14e025e78:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14e025ea6;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14e025ea6;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(this->_padding_ + (longlong)(int)uVar8 * 8);
          iVar5 = ((int)this->_padding_ - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
          }
          iVar5 = (int)this->_padding_ + -1;
          *(int *)&this->_padding_ = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&this->_padding_,iVar5,
                     (int *)((longlong)&this->_padding_ + 4));
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < (int)this->_padding_);
  }
  return;
}

// Serialize @ 14e027f40

void __thiscall UGroomCache::Serialize(UGroomCache *this,FArchive *param_1)

{
  TOptional<FPackageFileVersion> *pTVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  TArray<FGroomCacheChunk,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar4;
  undefined4 *puVar5;
  uint *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint local_res8 [2];
  undefined8 local_28 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    uVar8 = *(undefined4 *)&param_1->field_0x44;
    pTVar1 = &this->ArchiveVersion;
    if ((TOptional<FPackageFileVersion> *)local_28 != pTVar1) {
      (pTVar1->TypedValue).FileVersionUE4 = *(undefined4 *)&param_1->field_0x40;
      (pTVar1->TypedValue).FileVersionUE5 = uVar8;
      (this->ArchiveVersion).bIsSet = true;
    }
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  piVar3 = &(this->Chunks).ArrayNum;
  local_res8[0] = *piVar3;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar14 = local_res8[0];
  if ((param_1->field_0x28 & 1) != 0) {
    this_00 = &this->Chunks;
    iVar11 = (this->Chunks).ArrayNum;
    if (iVar11 < (int)local_res8[0]) {
      iVar11 = local_res8[0] - iVar11;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,8,iVar11,&this_00->AllocatorInstance,piVar3,&(this->Chunks).ArrayMax)
      ;
      DefaultConstructItems<FGroomCacheChunk,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x30,iVar11);
    }
    else {
      if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
      }
      if ((int)local_res8[0] < iVar11) {
        uVar13 = iVar11 - local_res8[0];
        if (((int)(uVar13 | local_res8[0]) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar13 != 0) {
          TArray<FGroomCacheChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar14,uVar13);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,&this_00->AllocatorInstance,(this->Chunks).ArrayNum,
                     &(this->Chunks).ArrayMax);
        }
      }
    }
  }
  uVar14 = 0;
  if (0 < (int)local_res8[0]) {
    lVar15 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar14 < (this->Chunks).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = (this->Chunks).AllocatorInstance.Data + lVar15;
      puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar12,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar12);
        }
      }
      else {
        *(undefined4 *)pFVar12 = *puVar5;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      pFVar2 = pFVar12 + 4;
      puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar2);
        }
      }
      else {
        *(uint *)pFVar2 = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      FBulkData::SetBulkDataFlags((FBulkData *)(pFVar12 + 8),0x400);
      FBulkData::Serialize((FBulkData *)(pFVar12 + 8),param_1,(UObject *)this,false,1,None);
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x30;
    } while ((int)uVar14 < (int)local_res8[0]);
  }
  return;
}

// Serialize @ 14e028220

void __thiscall UGroomCache::Serialize(UGroomCache *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetGroomAnimationInfo @ 14e0286c0

void __thiscall UGroomCache::SetGroomAnimationInfo(UGroomCache *this,FGroomAnimationInfo *param_1)

{
  EGroomCacheAttributes *pEVar1;
  EGroomCacheType EVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  EGroomCacheAttributes EVar8;
  undefined3 uVar9;
  
  EVar2 = (this->GroomCacheInfo).Type;
  fVar3 = param_1->SecondsPerFrame;
  fVar4 = param_1->Duration;
  fVar5 = param_1->StartTime;
  (this->GroomCacheInfo).AnimationInfo.NumFrames = param_1->NumFrames;
  (this->GroomCacheInfo).AnimationInfo.SecondsPerFrame = fVar3;
  (this->GroomCacheInfo).AnimationInfo.Duration = fVar4;
  (this->GroomCacheInfo).AnimationInfo.StartTime = fVar5;
  iVar6 = param_1->StartFrame;
  iVar7 = param_1->EndFrame;
  EVar8 = param_1->Attributes;
  uVar9 = *(undefined3 *)&param_1->field_0x1d;
  (this->GroomCacheInfo).AnimationInfo.EndTime = param_1->EndTime;
  (this->GroomCacheInfo).AnimationInfo.StartFrame = iVar6;
  (this->GroomCacheInfo).AnimationInfo.EndFrame = iVar7;
  (this->GroomCacheInfo).AnimationInfo.Attributes = EVar8;
  *(undefined3 *)&(this->GroomCacheInfo).AnimationInfo.field_0x1d = uVar9;
  if (EVar2 == Guides) {
    pEVar1 = &(this->GroomCacheInfo).AnimationInfo.Attributes;
    *pEVar1 = *pEVar1 & Position;
  }
  return;
}

// StaticRegisterNativesUGroomCache @ 14e029a40

void __cdecl UGroomCache::StaticRegisterNativesUGroomCache(void)

{
  return;
}

// _getUObject @ 14e0300e0

UObject * __thiscall UGroomCache::_getUObject(UGroomCache *this)

{
  return (UObject *)&this[-1].GroomCacheInfo.AnimationInfo.Duration;
}

// _getUObject`adjustor{8}' @ 14e0300ec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UGroomCache::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UGroomCache::_getUObject_adjustor_8__(UGroomCache *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomCache *)&this[-1].Chunks.ArrayNum);
  return (UObject *)pUVar1;
}

