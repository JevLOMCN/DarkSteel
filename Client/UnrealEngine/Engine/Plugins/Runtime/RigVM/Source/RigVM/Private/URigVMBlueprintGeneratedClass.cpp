// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 16

// StaticClass @ 14a06efc0

UClass * __cdecl URigVMBlueprintGeneratedClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesURigVMBlueprintGeneratedClass,0x3c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<URigVMBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton;
}

// URigVMBlueprintGeneratedClass @ 14a07ae90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URigVMBlueprintGeneratedClass * __thiscall
URigVMBlueprintGeneratedClass::URigVMBlueprintGeneratedClass
          (URigVMBlueprintGeneratedClass *this,FVTableHelper *param_1)

{
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7URigVMBlueprintGeneratedClass__6B_;
  (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->GraphFunctionStore).PublicFunctions.ArrayNum = 0;
  (this->GraphFunctionStore).PublicFunctions.ArrayMax = 0;
  (this->GraphFunctionStore).PrivateFunctions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GraphFunctionStore).PrivateFunctions.ArrayNum = 0;
  (this->GraphFunctionStore).PrivateFunctions.ArrayMax = 0;
  (this->SupportedEventNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedEventNames).ArrayNum = 0;
  (this->SupportedEventNames).ArrayMax = 0;
  (this->AssetVariant).Guid.A = 0;
  (this->AssetVariant).Guid.B = 0;
  (this->AssetVariant).Guid.C = 0;
  (this->AssetVariant).Guid.D = 0;
  (this->AssetVariant).Tags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetVariant).Tags.ArrayNum = 0;
  (this->AssetVariant).Tags.ArrayMax = 0;
  return this;
}

// URigVMBlueprintGeneratedClass @ 14a07af20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URigVMBlueprintGeneratedClass * __thiscall
URigVMBlueprintGeneratedClass::URigVMBlueprintGeneratedClass
          (URigVMBlueprintGeneratedClass *this,FObjectInitializer *param_1)

{
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7URigVMBlueprintGeneratedClass__6B_;
  (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->GraphFunctionStore).PublicFunctions.ArrayNum = 0;
  (this->GraphFunctionStore).PublicFunctions.ArrayMax = 0;
  (this->GraphFunctionStore).PrivateFunctions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GraphFunctionStore).PrivateFunctions.ArrayNum = 0;
  (this->GraphFunctionStore).PrivateFunctions.ArrayMax = 0;
  (this->SupportedEventNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedEventNames).ArrayNum = 0;
  (this->SupportedEventNames).ArrayMax = 0;
  (this->AssetVariant).Guid.A = 0;
  (this->AssetVariant).Guid.B = 0;
  (this->AssetVariant).Guid.C = 0;
  (this->AssetVariant).Guid.D = 0;
  (this->AssetVariant).Tags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetVariant).Tags.ArrayNum = 0;
  (this->AssetVariant).Tags.ArrayMax = 0;
  return this;
}

// ~URigVMBlueprintGeneratedClass @ 14a07c340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URigVMBlueprintGeneratedClass::~URigVMBlueprintGeneratedClass(URigVMBlueprintGeneratedClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7URigVMBlueprintGeneratedClass__6B_;
  DestructItems<FRigVMTag,int>
            ((FRigVMTag *)(this->AssetVariant).Tags.AllocatorInstance.Data,
             (this->AssetVariant).Tags.ArrayNum);
  pFVar1 = (this->AssetVariant).Tags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SupportedEventNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMGraphFunctionData,int>
            ((FRigVMGraphFunctionData *)
             (this->GraphFunctionStore).PrivateFunctions.AllocatorInstance.Data,
             (this->GraphFunctionStore).PrivateFunctions.ArrayNum);
  pFVar1 = (this->GraphFunctionStore).PrivateFunctions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMGraphFunctionData,int>
            ((FRigVMGraphFunctionData *)
             (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data,
             (this->GraphFunctionStore).PublicFunctions.ArrayNum);
  pFVar1 = (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IRigVMGraphFunctionHost__6B_;
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  return;
}

// GetAssetRegistryTags @ 14a0941d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
URigVMBlueprintGeneratedClass::GetAssetRegistryTags
          (URigVMBlueprintGeneratedClass *this,
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
  URigVMBlueprintGeneratedClass *pUStack_180;
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
    if (*(URigVMBlueprintGeneratedClass **)pFVar11->InlineData == this) {
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
  *(URigVMBlueprintGeneratedClass **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
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
    if (*(URigVMBlueprintGeneratedClass **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) ==
        this) goto LAB_1420f919b;
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

// GetAssetRegistryTags @ 14a0941e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
URigVMBlueprintGeneratedClass::GetAssetRegistryTags
          (URigVMBlueprintGeneratedClass *this,FAssetRegistryTagsContext param_1)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  FAssetRegistryTagsContext FVar5;
  UScriptStruct *this_00;
  FName *pFVar6;
  FProperty *this_01;
  FProperty *pFVar7;
  FRigVMGraphFunctionHeader *pFVar8;
  longlong lVar9;
  FRigVMGraphFunctionHeader *pFVar10;
  undefined1 local_res8 [8];
  FAssetRegistryTagsContext local_res18;
  FName local_res20;
  FName local_88;
  ForAnyElementType local_80;
  uint local_78;
  uint local_74;
  FString local_70;
  FAssetRegistryTag local_60;
  
  FVar5.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_res18,param_1.Data);
  UBlueprintGeneratedClass::GetAssetRegistryTags((UBlueprintGeneratedClass *)this,FVar5);
  this_00 = FRigVMGraphFunctionHeaderArray::StaticStruct();
  pFVar6 = ::FName::FName(&local_res20,L"Headers");
  this_01 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar6);
  pFVar7 = (FProperty *)0x0;
  if ((this_01 == (FProperty *)0x0) || ((*(uint *)(this_01->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    this_01 = pFVar7;
  }
  iVar1 = (this->GraphFunctionStore).PublicFunctions.ArrayNum;
  pFVar8 = (FRigVMGraphFunctionHeader *)
           (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data;
  local_80.Data = (FScriptContainerElement *)0x0;
  pFVar10 = (FRigVMGraphFunctionHeader *)((longlong)pFVar8 + (longlong)iVar1 * 0x460);
  local_78 = 0;
  local_74 = 0;
  while( true ) {
    if ((this->GraphFunctionStore).PublicFunctions.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigVMGraphFunctionData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
      pFVar7 = (FProperty *)(ulonglong)local_78;
    }
    if (pFVar8 == pFVar10) break;
    if (*(int *)&pFVar8[1].Layout.DisplayNames.field_0x38 != 0) {
      uVar4 = (uint)pFVar7;
      if (((local_80.Data <= pFVar8) &&
          (pFVar8 < (FRigVMGraphFunctionHeader *)(local_80.Data + (longlong)(int)local_74 * 0x1f8)))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar4 = local_78, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar4 == local_74) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1f8,8,&local_80,(int *)&local_74);
      }
      local_78 = uVar4 + 1;
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader
                ((FRigVMGraphFunctionHeader *)(local_80.Data + (longlong)(int)uVar4 * 0x1f8),pFVar8)
      ;
      pFVar7 = (FProperty *)(ulonglong)local_78;
    }
    pFVar8 = (FRigVMGraphFunctionHeader *)&pFVar8[2].Name;
  }
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  FProperty::ExportText_Direct
            (this_01,&local_70,&local_80,&local_80,(UObject *)0x0,0,(UObject *)0x0);
  pFVar6 = ::FName::FName(&local_88,L"PublicGraphFunctions");
  _Src.Data = local_70.Data.AllocatorInstance.Data;
  lVar9 = (longlong)local_70.Data.ArrayNum;
  local_60.Name = *pFVar6;
  local_60.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Value.Data.ArrayNum = local_70.Data.ArrayNum;
  if (local_70.Data.ArrayNum == 0) {
    local_60.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_60.Value,
               local_70.Data.ArrayNum,&local_60.Value.Data.ArrayMax);
    memcpy(local_60.Value.Data.AllocatorInstance.Data,_Src.Data,lVar9 * 2);
  }
  local_60.Type = TT_Hidden;
  local_60.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_60);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  DestructItems<FRigVMGraphFunctionHeader,int>((FRigVMGraphFunctionHeader *)local_80.Data,local_78);
  if ((FRigVMGraphFunctionHeader *)local_80.Data != (FRigVMGraphFunctionHeader *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return;
}

// GetPersistentUberGraphFrame @ 14a097ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uchar * __thiscall
URigVMBlueprintGeneratedClass::GetPersistentUberGraphFrame
          (URigVMBlueprintGeneratedClass *this,UObject *param_1,UFunction *param_2)

{
  bool bVar1;
  uchar *puVar2;
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    return (uchar *)0x0;
  }
  puVar2 = UBlueprintGeneratedClass::GetPersistentUberGraphFrame
                     ((UBlueprintGeneratedClass *)this,param_1,param_2);
  return puVar2;
}

// GetPrivateStaticClass @ 14a098160

UClass * __cdecl URigVMBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesURigVMBlueprintGeneratedClass,0x3c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URigVMBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<URigVMBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.InnerSingleton;
}

// GetRigVMGraphFunctionStore @ 14a098330

FRigVMGraphFunctionStore * __thiscall
URigVMBlueprintGeneratedClass::GetRigVMGraphFunctionStore(URigVMBlueprintGeneratedClass *this)

{
  return (FRigVMGraphFunctionStore *)&this->_padding_;
}

// GetRigVMGraphFunctionStore @ 14a098340

FRigVMGraphFunctionStore * __thiscall
URigVMBlueprintGeneratedClass::GetRigVMGraphFunctionStore(URigVMBlueprintGeneratedClass *this)

{
  return (FRigVMGraphFunctionStore *)&this->_padding_;
}

// PostInitInstance @ 14a0a02d0

void __thiscall
URigVMBlueprintGeneratedClass::PostInitInstance
          (URigVMBlueprintGeneratedClass *this,UObject *param_1,FObjectInstancingGraph *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  lVar7 = 0;
  bVar3 = false;
  local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res10.Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(&local_res10,&local_28);
  bVar5 = ::FString::StartsWith(&local_28,L"SKEL_",5,IgnoreCase);
  if (bVar5) {
LAB_14a0a036e:
    bVar5 = true;
    bVar4 = true;
    if (!bVar3) goto LAB_14a0a0386;
  }
  else {
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    bVar3 = true;
    ::FName::ToString(&local_res10,&local_38);
    bVar5 = ::FString::StartsWith(&local_38,L"Default__SKEL_",0xe,IgnoreCase);
    if (bVar5) goto LAB_14a0a036e;
    bVar4 = false;
  }
  bVar5 = bVar4;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14a0a0386:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    pUVar6 = Z_Construct_UClass_URigVMHost_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar6->_padding_)) && (param_1 != (UObject *)0x0)) {
      if ((*(uint *)&param_1->field_0x8 >> 4 & 1) == 0) {
        if (this->_padding_ == 0) {
          UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
        }
        lVar2 = this->_padding_;
        if (lVar2 != 0) {
          pUVar6 = Z_Construct_UClass_URigVMHost_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar6->_padding_)) {
            lVar7 = lVar2;
          }
        }
      }
      (**(code **)(*(longlong *)param_1 + 0x370))(param_1,lVar7);
    }
  }
  return;
}

// PostLoad @ 14a0a05f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URigVMBlueprintGeneratedClass::PostLoad(URigVMBlueprintGeneratedClass *this)

{
  int iVar1;
  FRigVMGraphFunctionData *this_00;
  FRigVMGraphFunctionData *pFVar2;
  undefined1 local_res8 [8];
  
  UBlueprintGeneratedClass::PostLoad((UBlueprintGeneratedClass *)this);
  iVar1 = (this->GraphFunctionStore).PublicFunctions.ArrayNum;
  this_00 = (FRigVMGraphFunctionData *)
            (this->GraphFunctionStore).PublicFunctions.AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->GraphFunctionStore).PublicFunctions.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMGraphFunctionData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FRigVMGraphFunctionData::PatchSharedArgumentOperandsIfRequired(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// Serialize @ 14a0a6c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
URigVMBlueprintGeneratedClass::Serialize(URigVMBlueprintGeneratedClass *this,FArchive *param_1)

{
  longlong lVar1;
  int iVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  URigVM *this_00;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UBlueprintGeneratedClass::Serialize((UBlueprintGeneratedClass *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (0x67 < iVar2) {
    pUVar3 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = URigVM::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    local_a8._8_8_ = pUVar3;
    this_00 = (URigVM *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8)
    ;
    if (local_a8._64_8_ != 0) {
      plVar5 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (this->_padding_ == 0) {
      UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
    }
    lVar1 = this->_padding_;
    if (lVar1 != 0) {
      pUVar4 = Z_Construct_UClass_URigVMHost_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((((iVar2 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) && ((param_1->field_0x28 & 4) != 0)) &&
         (((param_1->field_0x29 & 1) != 0 && (*(longlong *)(lVar1 + 0x58) != 0)))) {
        URigVM::CreateLocalizedRegistryIfRequired(this_00,false);
        URigVM::CopyDataForSerialization(this_00,*(URigVM **)(lVar1 + 0x58));
      }
    }
    (**(code **)(this_00->_padding_ + 200))(this_00,param_1);
    lVar1 = this->_padding_;
    if (lVar1 != 0) {
      pUVar4 = Z_Construct_UClass_URigVMHost_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if (((iVar2 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar2 * 8)
           == &pUVar4->_padding_)) && ((param_1->field_0x28 & 1) != 0)) {
        URigVM::CopyDataForSerialization(*(URigVM **)(lVar1 + 0x58),this_00);
      }
    }
    TArrayPrivateFriend::Serialize<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>
              (param_1,&(this->GraphFunctionStore).PublicFunctions);
    if ((param_1->field_0x2b & 1) != 0) {
      TArrayPrivateFriend::Serialize<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>
                (param_1,&(this->GraphFunctionStore).PrivateFunctions);
    }
  }
  return;
}

// Serialize @ 14a0a6e60

void __thiscall
URigVMBlueprintGeneratedClass::Serialize
          (URigVMBlueprintGeneratedClass *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesURigVMBlueprintGeneratedClass @ 14a0a7540

void __cdecl URigVMBlueprintGeneratedClass::StaticRegisterNativesURigVMBlueprintGeneratedClass(void)

{
  return;
}

// _getUObject @ 14a0a9f50

UObject * __thiscall URigVMBlueprintGeneratedClass::_getUObject(URigVMBlueprintGeneratedClass *this)

{
  return (UObject *)&this[-1]._padding_;
}

