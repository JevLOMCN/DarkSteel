// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 15

// StaticClass @ 146348ca0

UClass * __cdecl UGeometryCollectionCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionCache",
               &Z_Registration_Info_UClass_UGeometryCollectionCache.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionCache,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCollectionCache>,
               InternalVTableHelperCtorCaller<UGeometryCollectionCache>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionCache.InnerSingleton;
}

// UGeometryCollectionCache @ 14635d650

UGeometryCollectionCache * __thiscall
UGeometryCollectionCache::UGeometryCollectionCache
          (UGeometryCollectionCache *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCollectionCache__6B_;
  (this->RecordedData).Records.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordedData).Records.ArrayNum = 0;
  (this->RecordedData).Records.ArrayMax = 0;
  (this->SupportedCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  (this->CompatibleCollectionState).A = 0;
  (this->CompatibleCollectionState).B = 0;
  (this->CompatibleCollectionState).C = 0;
  (this->CompatibleCollectionState).D = 0;
  return this;
}

// UGeometryCollectionCache @ 14635d690

UGeometryCollectionCache * __thiscall
UGeometryCollectionCache::UGeometryCollectionCache
          (UGeometryCollectionCache *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCollectionCache__6B_;
  (this->RecordedData).Records.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordedData).Records.ArrayNum = 0;
  (this->RecordedData).Records.ArrayMax = 0;
  (this->SupportedCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  (this->CompatibleCollectionState).A = 0;
  (this->CompatibleCollectionState).B = 0;
  (this->CompatibleCollectionState).C = 0;
  (this->CompatibleCollectionState).D = 0;
  return this;
}

// ~UGeometryCollectionCache @ 14635ef40

void __thiscall UGeometryCollectionCache::~UGeometryCollectionCache(UGeometryCollectionCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGeometryCollectionCache__6B_;
  DestructItems<FRecordedFrame,int>
            ((FRecordedFrame *)(this->RecordedData).Records.AllocatorInstance.Data,
             (this->RecordedData).Records.ArrayNum);
  pFVar1 = (this->RecordedData).Records.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CompatibleWithForPlayback @ 14636bfc0

bool __thiscall
UGeometryCollectionCache::CompatibleWithForPlayback
          (UGeometryCollectionCache *this,UGeometryCollection *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  UGeometryCollection *pUVar5;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  FGuid *pFVar14;
  FGuid local_18;
  
  if (param_1 == (UGeometryCollection *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCollection",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionCache.cpp"
                        ,0x59,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
  }
  uVar1 = (this->CompatibleCollectionState).A;
  uVar6 = (this->CompatibleCollectionState).B;
  uVar2 = (this->CompatibleCollectionState).C;
  uVar7 = (this->CompatibleCollectionState).D;
  pUVar5 = (this->SupportedCollection).field0_0x0.DebugPtr;
  if (pUVar5 == (UGeometryCollection *)0x0) {
    bVar12 = param_1 == (UGeometryCollection *)0x0;
  }
  else {
    bVar12 = pUVar5 == param_1;
  }
  if (((uVar6 != 0 || uVar7 != 0) || uVar2 != 0) || uVar1 != 0) {
    pFVar14 = UGeometryCollection::GetStateGuid(param_1,&local_18);
    uVar3 = (this->CompatibleCollectionState).A;
    uVar8 = (this->CompatibleCollectionState).B;
    uVar4 = (this->CompatibleCollectionState).C;
    uVar9 = (this->CompatibleCollectionState).D;
    if (((uVar8 == pFVar14->B && uVar9 == pFVar14->D) && uVar4 == pFVar14->C) && uVar3 == pFVar14->A
       ) {
      bVar11 = true;
      goto LAB_14636c07a;
    }
  }
  bVar11 = false;
LAB_14636c07a:
  if ((bVar12) && (bVar11)) {
    return true;
  }
  return false;
}

// CompatibleWithForRecord @ 14636c0b0

bool __thiscall
UGeometryCollectionCache::CompatibleWithForRecord
          (UGeometryCollectionCache *this,UGeometryCollection *param_1)

{
  UGeometryCollection *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1 == (UGeometryCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionCache.cpp"
                       ,0x52,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = (this->SupportedCollection).field0_0x0.DebugPtr;
  if (pUVar1 == (UGeometryCollection *)0x0) {
    return param_1 == (UGeometryCollection *)0x0;
  }
  return pUVar1 == param_1;
}

// CreateCacheForCollection @ 14636dd00

UGeometryCollectionCache * __cdecl
UGeometryCollectionCache::CreateCacheForCollection(UGeometryCollection *param_1)

{
  int *piVar1;
  UGeometryCollection *pUVar2;
  FRecordedFrame *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  UGeometryCollectionCache *pUVar9;
  undefined8 *puVar10;
  FName local_res8;
  FName local_res10;
  
  if (param_1 == (UGeometryCollection *)0x0) {
    return (UGeometryCollectionCache *)0x0;
  }
  pIVar7 = IModularFeatures::Get();
  ::FName::FName(&local_res8,"GeometryCollectionTargetCacheProvider");
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,local_res8);
  if (iVar6 < 1) {
    return (UGeometryCollectionCache *)0x0;
  }
  ::FName::FName(&local_res10,"GeometryCollectionTargetCacheProvider");
  lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,local_res10);
  puVar10 = (undefined8 *)(lVar8 + -8);
  if (lVar8 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if ((puVar10 == (undefined8 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Provider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionCache.cpp"
                         ,0x42,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UGeometryCollectionCache *)(*pcVar4)();
    return pUVar9;
  }
  pUVar9 = (UGeometryCollectionCache *)(**(code **)*puVar10)(puVar10,param_1);
  if ((pUVar9 != (UGeometryCollectionCache *)0x0) &&
     ((pUVar2 = (pUVar9->SupportedCollection).field0_0x0.DebugPtr,
      pUVar2 == (UGeometryCollection *)0x0 || (pUVar2 != param_1)))) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (pUVar9->SupportedCollection).field0_0x0.DebugPtr = param_1;
    piVar1 = &(pUVar9->RecordedData).Records.ArrayMax;
    pFVar3 = (FRecordedFrame *)(pUVar9->RecordedData).Records.AllocatorInstance.Data;
    iVar6 = (pUVar9->RecordedData).Records.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FRecordedFrame,int>(pFVar3,iVar6);
      (pUVar9->RecordedData).Records.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,0,(ForAnyElementType *)&pUVar9->RecordedData,0,piVar1);
      }
    }
    else {
      DestructItems<FRecordedFrame,int>(pFVar3,iVar6);
      (pUVar9->RecordedData).Records.ArrayNum = 0;
    }
  }
  return pUVar9;
}

// GetAssetRegistryTags @ 146372ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UGeometryCollectionCache::GetAssetRegistryTags
          (UGeometryCollectionCache *this,
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
  UGeometryCollectionCache *pUStack_180;
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
    if (*(UGeometryCollectionCache **)pFVar11->InlineData == this) {
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
  *(UGeometryCollectionCache **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
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
    if (*(UGeometryCollectionCache **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this
       ) goto LAB_1420f919b;
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

// GetAssetRegistryTags @ 146372af0

void __thiscall
UGeometryCollectionCache::GetAssetRegistryTags
          (UGeometryCollectionCache *this,FAssetRegistryTagsContext param_1)

{
  UGeometryCollection *pUVar1;
  FAssetRegistryTagsContext FVar2;
  FGuid *this_00;
  FString *pFVar3;
  bool bVar4;
  FName local_res8;
  FString local_78;
  FString local_68;
  FAssetRegistryTag local_58;
  FAssetRegistryTag local_38;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FVar2.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar2);
  pUVar1 = (this->SupportedCollection).field0_0x0.DebugPtr;
  bVar4 = pUVar1 == (UGeometryCollection *)0x0;
  if (bVar4) {
    pFVar3 = ::FString::FString(&local_68,L"None");
  }
  else {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_78);
    pFVar3 = &local_78;
  }
  local_58.Name = TagName_Name;
  local_58.Value.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Value.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_58.Value.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  local_58.Type = TT_Alphabetical;
  local_58.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_58);
  if (bVar4) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pUVar1 = (this->SupportedCollection).field0_0x0.DebugPtr;
  bVar4 = pUVar1 == (UGeometryCollection *)0x0;
  if (bVar4) {
    pFVar3 = ::FString::FString(&local_68,L"INVALID");
  }
  else {
    this_00 = UGeometryCollection::GetIdGuid(pUVar1,(FGuid *)&local_58);
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_78,Digits);
    pFVar3 = &local_78;
  }
  local_38.Name = TagName_IdGuid;
  local_38.Value.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Value.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_38.Value.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  local_38.Type = TT_Hidden;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_38);
  if (bVar4) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar4 = (this->SupportedCollection).field0_0x0.DebugPtr == (UGeometryCollection *)0x0;
  if (bVar4) {
    pFVar3 = ::FString::FString(&local_68,L"INVALID");
  }
  else {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    FGuid::AppendString(&this->CompatibleCollectionState,&local_78,Digits);
    pFVar3 = &local_78;
  }
  local_38.Name = TagName_StateGuid;
  local_38.Value.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Value.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_38.Value.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  local_38.Type = TT_Hidden;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_38);
  if (bVar4) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 146379b00

UClass * __cdecl UGeometryCollectionCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionCache",
               &Z_Registration_Info_UClass_UGeometryCollectionCache.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionCache,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCollectionCache>,
               InternalVTableHelperCtorCaller<UGeometryCollectionCache>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionCache.InnerSingleton;
}

// ProcessRawRecordedDataInternal @ 146384730

void __thiscall
UGeometryCollectionCache::ProcessRawRecordedDataInternal
          (UGeometryCollectionCache *this,FRecordedTransformTrack *param_1)

{
  FScriptContainerElement *pFVar1;
  FRecordedTransformTrack *pFVar2;
  FRecordedTransformTrack *pFVar3;
  FRecordedTransformTrack local_18;
  
  pFVar2 = FRecordedTransformTrack::ProcessRawRecordedData(&local_18,param_1);
  pFVar3 = &this->RecordedData;
  if (pFVar3 != pFVar2) {
    DestructItems<FRecordedFrame,int>
              ((FRecordedFrame *)(pFVar3->Records).AllocatorInstance.Data,
               (this->RecordedData).Records.ArrayNum);
    pFVar1 = (pFVar3->Records).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Records).AllocatorInstance.Data = (pFVar2->Records).AllocatorInstance.Data;
    (pFVar2->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RecordedData).Records.ArrayNum = (pFVar2->Records).ArrayNum;
    (this->RecordedData).Records.ArrayMax = (pFVar2->Records).ArrayMax;
    (pFVar2->Records).ArrayNum = 0;
    (pFVar2->Records).ArrayMax = 0;
  }
  DestructItems<FRecordedFrame,int>
            ((FRecordedFrame *)local_18.Records.AllocatorInstance.Data,local_18.Records.ArrayNum);
  if ((FRecordedFrame *)local_18.Records.AllocatorInstance.Data != (FRecordedFrame *)0x0) {
    FMemory::Free(local_18.Records.AllocatorInstance.Data);
  }
  return;
}

// SetFromRawTrack @ 14638c810

void __thiscall
UGeometryCollectionCache::SetFromRawTrack
          (UGeometryCollectionCache *this,FRecordedTransformTrack *param_1)

{
  FRecordedTransformTrack *pFVar1;
  FScriptContainerElement *pFVar2;
  UGeometryCollection *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FRecordedTransformTrack *pFVar6;
  FGuid *pFVar7;
  ForAnyElementType local_18;
  undefined8 uStack_10;
  
  pFVar6 = FRecordedTransformTrack::ProcessRawRecordedData
                     ((FRecordedTransformTrack *)&local_18,param_1);
  pFVar1 = &this->RecordedData;
  if (pFVar1 != pFVar6) {
    DestructItems<FRecordedFrame,int>
              ((FRecordedFrame *)(pFVar1->Records).AllocatorInstance.Data,
               (this->RecordedData).Records.ArrayNum);
    pFVar2 = (pFVar1->Records).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Records).AllocatorInstance.Data = (pFVar6->Records).AllocatorInstance.Data;
    (pFVar6->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RecordedData).Records.ArrayNum = (pFVar6->Records).ArrayNum;
    (this->RecordedData).Records.ArrayMax = (pFVar6->Records).ArrayMax;
    (pFVar6->Records).ArrayNum = 0;
    (pFVar6->Records).ArrayMax = 0;
  }
  DestructItems<FRecordedFrame,int>((FRecordedFrame *)local_18.Data,(uint)uStack_10);
  if ((FRecordedFrame *)local_18.Data != (FRecordedFrame *)0x0) {
    FMemory::Free(local_18.Data);
  }
  this_00 = (this->SupportedCollection).field0_0x0.DebugPtr;
  if (this_00 == (UGeometryCollection *)0x0) {
    local_18.Data = (FScriptContainerElement *)0x0;
    pFVar7 = (FGuid *)&local_18;
    uStack_10._0_4_ = 0;
    uStack_10._4_4_ = 0;
  }
  else {
    pFVar7 = UGeometryCollection::GetStateGuid(this_00,(FGuid *)&local_18);
  }
  uVar3 = pFVar7->B;
  uVar4 = pFVar7->C;
  uVar5 = pFVar7->D;
  (this->CompatibleCollectionState).A = pFVar7->A;
  (this->CompatibleCollectionState).B = uVar3;
  (this->CompatibleCollectionState).C = uVar4;
  (this->CompatibleCollectionState).D = uVar5;
  return;
}

// SetFromTrack @ 14638c8e0

void __thiscall
UGeometryCollectionCache::SetFromTrack
          (UGeometryCollectionCache *this,FRecordedTransformTrack *param_1)

{
  FRecordedTransformTrack *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FRecordedFrame *pFVar5;
  UGeometryCollection *this_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FGuid *pFVar9;
  FGuid local_18;
  
  pFVar1 = &this->RecordedData;
  if (pFVar1 != param_1) {
    DestructItems<FRecordedFrame,int>
              ((FRecordedFrame *)(pFVar1->Records).AllocatorInstance.Data,
               (this->RecordedData).Records.ArrayNum);
    iVar3 = (param_1->Records).ArrayNum;
    piVar2 = &(this->RecordedData).Records.ArrayMax;
    pFVar5 = (FRecordedFrame *)(param_1->Records).AllocatorInstance.Data;
    iVar4 = *piVar2;
    (this->RecordedData).Records.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
      ConstructItems<FRecordedFrame,FRecordedFrame,int>
                ((pFVar1->Records).AllocatorInstance.Data,pFVar5,iVar3);
    }
  }
  this_00 = (this->SupportedCollection).field0_0x0.DebugPtr;
  if (this_00 == (UGeometryCollection *)0x0) {
    (this->CompatibleCollectionState).A = 0;
    (this->CompatibleCollectionState).B = 0;
    (this->CompatibleCollectionState).C = 0;
    (this->CompatibleCollectionState).D = 0;
    return;
  }
  pFVar9 = UGeometryCollection::GetStateGuid(this_00,&local_18);
  uVar6 = pFVar9->B;
  uVar7 = pFVar9->C;
  uVar8 = pFVar9->D;
  (this->CompatibleCollectionState).A = pFVar9->A;
  (this->CompatibleCollectionState).B = uVar6;
  (this->CompatibleCollectionState).C = uVar7;
  (this->CompatibleCollectionState).D = uVar8;
  return;
}

// SetSupportedCollection @ 14638efa0

void __thiscall
UGeometryCollectionCache::SetSupportedCollection
          (UGeometryCollectionCache *this,UGeometryCollection *param_1)

{
  int *piVar1;
  int iVar2;
  UGeometryCollection *pUVar3;
  FRecordedFrame *pFVar4;
  bool bVar5;
  
  pUVar3 = (this->SupportedCollection).field0_0x0.DebugPtr;
  if (pUVar3 == (UGeometryCollection *)0x0) {
    bVar5 = param_1 == (UGeometryCollection *)0x0;
  }
  else {
    bVar5 = pUVar3 == param_1;
  }
  if (!bVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGeometryCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SupportedCollection).field0_0x0.DebugPtr = param_1;
    piVar1 = &(this->RecordedData).Records.ArrayMax;
    pFVar4 = (FRecordedFrame *)(this->RecordedData).Records.AllocatorInstance.Data;
    iVar2 = (this->RecordedData).Records.ArrayNum;
    if (-1 < (this->RecordedData).Records.ArrayMax) {
      DestructItems<FRecordedFrame,int>(pFVar4,iVar2);
      (this->RecordedData).Records.ArrayNum = 0;
      return;
    }
    DestructItems<FRecordedFrame,int>(pFVar4,iVar2);
    (this->RecordedData).Records.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,0,(ForAnyElementType *)&this->RecordedData,0,piVar1);
    }
  }
  return;
}

// StaticRegisterNativesUGeometryCollectionCache @ 14638f550

void __cdecl UGeometryCollectionCache::StaticRegisterNativesUGeometryCollectionCache(void)

{
  return;
}

