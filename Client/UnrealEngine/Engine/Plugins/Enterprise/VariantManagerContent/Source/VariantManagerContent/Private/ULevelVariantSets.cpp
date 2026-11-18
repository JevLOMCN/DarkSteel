// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 24

// StaticClass @ 14e2cf4a0

UClass * __cdecl ULevelVariantSets::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSets",
               &Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton,
               StaticRegisterNativesULevelVariantSets,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelVariantSets>,
               InternalVTableHelperCtorCaller<ULevelVariantSets>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton;
}

// ULevelVariantSets @ 14e2d4580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelVariantSets * __thiscall
ULevelVariantSets::ULevelVariantSets(ULevelVariantSets *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelVariantSets__6B_;
  (this->DirectorClass).field0_0x0.DebugPtr = (UBlueprintGeneratedClass *)0x0;
  (this->VariantSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariantSets).ArrayNum = 0;
  (this->VariantSets).ArrayMax = 0;
  *(undefined8 *)&this->WorldToDirectorInstance = 0;
  *(undefined8 *)&(this->WorldToDirectorInstance).field_0x8 = 0;
  *(undefined8 *)&(this->WorldToDirectorInstance).field_0x20 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x28 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x34 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldToDirectorInstance).field_0x40 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x48 = 0;
  return this;
}

// ULevelVariantSets @ 14e2d45f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelVariantSets * __thiscall
ULevelVariantSets::ULevelVariantSets(ULevelVariantSets *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelVariantSets__6B_;
  (this->DirectorClass).field0_0x0.DebugPtr = (UBlueprintGeneratedClass *)0x0;
  (this->VariantSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariantSets).ArrayNum = 0;
  (this->VariantSets).ArrayMax = 0;
  *(undefined8 *)&this->WorldToDirectorInstance = 0;
  *(undefined8 *)&(this->WorldToDirectorInstance).field_0x8 = 0;
  *(undefined8 *)&(this->WorldToDirectorInstance).field_0x20 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x28 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x34 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WorldToDirectorInstance).field_0x40 = 0;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x48 = 0;
  return this;
}

// ~ULevelVariantSets @ 14e2d5300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelVariantSets::~ULevelVariantSets(ULevelVariantSets *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ULevelVariantSets__6B_;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldToDirectorInstance).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldToDirectorInstance);
  pFVar2 = (this->VariantSets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e2d56d0

void __thiscall
`ULevelVariantSets::GetDirectorInstance'::__l2::<lambda_1>::operator()
          (void *this,ULevelVariantSetsFunctionDirector *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  FUObjectItem *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  bVar4 = UObjectBase::IsValidLowLevel(*(UObjectBase **)this);
  if (bVar4) {
    lVar1 = *(longlong *)this;
    if ((lVar1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)this + 0xc)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
        (lVar1 = *(longlong *)this, param_1 != (ULevelVariantSetsFunctionDirector *)0x0)) &&
       (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
      TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_78,
                 (TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x40));
      local_10 = '\0';
      cStack_f = '\0';
      stack0xffffffffffffffc8 = local_78._16_16_;
      local_48 = (longlong *)local_78._0_8_;
      auStack_40._0_8_ = local_78._8_8_;
      local_28 = local_58;
      pTStack_20 = pTStack_50;
      uVar7 = local_78._24_8_ >> 0x20;
      local_18 = (TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x40);
      if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
        do {
          plVar3 = local_48;
          lVar1 = (longlong)(int)uVar7 * 0x18;
          bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_48 + 8 + lVar1));
          if ((bVar4) &&
             (bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::
                      UEOpEquals<ULevelVariantSetsFunctionDirector,bool>
                                ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(*plVar3 + 8 + lVar1),
                                 param_1), bVar4)) {
            TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_20,(int)uVar7);
            local_10 = '\x01';
          }
          uStack_30 = uStack_30 & ~auStack_40._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
          uVar7 = (ulonglong)uStack_2c;
        } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
        if ((local_10 != '\0') && (cStack_f != '\0')) {
          uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34
          ;
          if (uVar8 < 4) {
            iVar5 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
            lVar1 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            iVar5 = 1 << ((byte)lVar1 & 0x1f);
          }
          if (((0 < (int)uVar8) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
            local_18->HashSize = iVar5;
            TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Rehash(local_18);
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14e2d5a00

bool __thiscall
`ULevelVariantSets::GetVariantSetByName'::__l2::<lambda_1>::operator()
          (void *this,UVariantSet *param_1)

{
  int iVar1;
  FString *pFVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = (param_1->DisplayText).TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (param_1->DisplayText).Flags;
  pFVar2 = FText::ToString(&local_18);
  iVar1 = (pFVar2->Data).ArrayNum;
  if (iVar1 == *(int *)((longlong)this + 8)) {
    if (iVar1 < 2) {
      bVar3 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,*(wchar_t **)this);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = *(int *)((longlong)this + 8) + iVar1 == 1;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// AddVariantSets @ 14e2d7320

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

void __thiscall
ULevelVariantSets::AddVariantSets
          (ULevelVariantSets *this,TArray<UVariantSet_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<TObjectPtr<UVariantSet>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  code *pcVar7;
  ULevelVariantSets *pUVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FString *pFVar14;
  UClass *pUVar15;
  FText *pFVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  ULevelVariantSets *this_00;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ForElementType<FSetElementId> FVar27;
  ulonglong uVar28;
  ForElementType<unsigned_int> FVar29;
  ulonglong *puVar30;
  UVariantSet *pUVar31;
  bool bVar32;
  undefined1 auStackY_268 [32];
  undefined1 local_227;
  undefined1 local_226 [6];
  FString local_220;
  int local_210;
  UVariantSet *local_208;
  FScriptContainerElement *local_200;
  int local_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined4 local_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  TArray<TObjectPtr<UVariantSet>,TSizedDefaultAllocator<32>_> *local_1d8;
  ULevelVariantSets *local_1d0;
  TArray<UVariantSet_*,TSizedDefaultAllocator<32>_> local_1c8;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  undefined1 local_190 [4];
  undefined1 local_18c [20];
  FText local_178;
  FText local_168;
  FText local_158;
  FString local_148;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  FScriptContainerElement local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_e8;
  TSparseArray<TSparseSetElement<ULevelVariantSets_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (param_2 == -1) {
    param_2 = (this->VariantSets).ArrayNum;
  }
  pFVar22 = (this->VariantSets).AllocatorInstance.Data;
  pTVar1 = &this->VariantSets;
  iVar13 = (this->VariantSets).ArrayNum;
  piVar2 = &(this->VariantSets).ArrayNum;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  pFVar19 = pFVar22 + (longlong)iVar13 * 8;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_210 = param_2;
  local_208 = (UVariantSet *)param_1;
  local_1d8 = pTVar1;
  local_1d0 = this;
  while( true ) {
    if (*piVar2 != iVar13) {
      local_227 = 0;
      `TCheckedPointerIterator<TObjectPtr<UVariantSet>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_227);
    }
    pUVar31 = local_208;
    if (pFVar22 == pFVar19) break;
    lVar24 = *(longlong *)pFVar22;
    local_178.TextData.Reference = *(ITextData **)(lVar24 + 0x38);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 8))
                (local_178.TextData.Reference,local_190);
    }
    local_178.Flags = *(uint *)(lVar24 + 0x40);
    pFVar14 = FText::ToString(&local_178);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_e8,(FString *)local_18c,(bool *)pFVar14);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    pFVar22 = pFVar22 + 8;
  }
  iVar13 = (int)local_208->_padding_;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar13,&pTVar1->AllocatorInstance,piVar2,&(this->VariantSets).ArrayMax);
  pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8;
  memmove(pFVar19 + (longlong)iVar13 * 8,pFVar19,(longlong)(iVar10 - param_2) << 3);
  ConstructItems<TObjectPtr<UVariantSet>,UVariantSet_*,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8,
             (UVariantSet **)((ForAnyElementType *)&pUVar31->_padding_)->Data,iVar13);
  pUVar8 = local_1d0;
  pFVar22 = ((ForAnyElementType *)&pUVar31->_padding_)->Data;
  iVar13 = (int)pUVar31->_padding_;
  bVar9 = false;
  local_98._0_8_ = 0;
  pFVar19 = pFVar22 + (longlong)iVar13 * 8;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_200 = pFVar19;
  while( true ) {
    if ((int)pUVar31->_padding_ != iVar13) {
      local_226[0] = 0;
      `TCheckedPointerIterator<UVariantSet_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_226);
    }
    pTVar1 = local_1d8;
    if (pFVar22 == pFVar19) break;
    plVar4 = *(longlong **)pFVar22;
    if (plVar4 != (longlong *)0x0) {
      this_00 = (ULevelVariantSets *)plVar4[4];
      if (this_00 == (ULevelVariantSets *)0x0) {
LAB_14e2d75be:
        this_00 = (ULevelVariantSets *)0x0;
      }
      else {
        pUVar15 = StaticClass();
        iVar10 = (int)pUVar15->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar15->_padding_)) goto LAB_14e2d75be;
        if (this_00 == pUVar8) {
          bVar9 = true;
        }
        else {
          local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.ArrayNum = 1;
          local_18c._12_8_ = plVar4;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_1c8.AllocatorInstance,1,&local_1c8.ArrayMax);
          *(undefined8 *)local_1c8.AllocatorInstance.Data = local_18c._12_8_;
          RemoveVariantSets(this_00,&local_1c8);
        }
      }
      (**(code **)(*plVar4 + 0x170))(plVar4,0);
      local_168.TextData.Reference = (ITextData *)plVar4[7];
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 8))();
      }
      local_168.Flags = *(uint *)(plVar4 + 8);
      pFVar14 = FText::ToString(&local_168);
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = (pFVar14->Data).ArrayNum;
      lVar24 = (longlong)local_220.Data.ArrayNum;
      pFVar19 = (pFVar14->Data).AllocatorInstance.Data;
      if (local_220.Data.ArrayNum == 0) {
        local_220.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_220.Data.ArrayNum,0,(ForAnyElementType *)&local_220,
                   local_220.Data.ArrayNum,&local_220.Data.ArrayMax);
        memcpy(local_220.Data.AllocatorInstance.Data,pFVar19,lVar24 * 2);
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (this_00 != pUVar8) {
        pwVar20 = L"";
        if (local_220.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = local_220.Data.ArrayNum + -1;
          pwVar20 = (wchar_t *)local_220.Data.AllocatorInstance.Data;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar20);
        if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
          FVar27 = (ForElementType<FSetElementId>)&local_e8.Hash;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar27 = local_e8.Hash.SecondaryData;
          }
          iVar10 = *(int *)((longlong)FVar27 + (ulonglong)(local_e8.HashSize - 1U & uVar11) * 4);
          iVar12 = local_220.Data.ArrayNum;
          lVar24 = local_e8.Elements._0_8_;
          while (iVar10 != -1) {
            lVar25 = (longlong)iVar10 * 0x18;
            iVar3 = *(int *)(lVar25 + 8 + lVar24);
            if (iVar3 == iVar12) {
              if (1 < iVar3) {
                iVar12 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar25 + lVar24),
                                    (wchar_t *)local_220.Data.AllocatorInstance.Data);
                bVar32 = iVar12 == 0;
                lVar24 = local_e8.Elements._0_8_;
                iVar12 = local_220.Data.ArrayNum;
                goto LAB_14e2d7724;
              }
LAB_14e2d7736:
              if (iVar10 != -1) {
                pFVar14 = GetUniqueVariantSetName(pUVar8,&local_148,&local_220);
                pFVar16 = FText::FromString(&local_158,pFVar14);
                pIVar5 = (ITextData *)plVar4[7];
                pIVar6 = (pFVar16->TextData).Reference;
                if (pIVar5 != pIVar6) {
                  plVar4[7] = (longlong)pIVar6;
                  if (pIVar6 != (ITextData *)0x0) {
                    (**(code **)((longlong)*pIVar6 + 8))();
                  }
                  if (pIVar5 != (ITextData *)0x0) {
                    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
                  }
                }
                *(uint *)(plVar4 + 8) = pFVar16->Flags;
                if (local_158.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
                }
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
              }
              break;
            }
            bVar32 = iVar3 + iVar12 == 1;
LAB_14e2d7724:
            if (bVar32) goto LAB_14e2d7736;
            iVar10 = *(int *)(lVar25 + 0x10 + lVar24);
          }
        }
      }
      pFVar19 = local_200;
      pUVar31 = local_208;
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
        pFVar19 = local_200;
        pUVar31 = local_208;
      }
    }
    pFVar22 = pFVar22 + 8;
  }
  if (!bVar9) goto LAB_14e2d7e3b;
  uVar11 = (uint)pUVar31->_padding_;
  pFVar19 = ((ForAnyElementType *)&pUVar31->_padding_)->Data;
  if (((int)uVar11 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = -1;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if (uVar11 != 0) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_138,uVar11);
    uVar23 = 1;
    if (3 < uVar11) {
      uVar21 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_1d8 = (TArray<TObjectPtr<UVariantSet>,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_1d8._4_4_,(int)lVar24);
      uVar23 = 1 << ((byte)lVar24 & 0x1f);
    }
    if ((local_f0 == 0) || ((int)local_f0 < (int)uVar23)) {
      local_f0 = uVar23;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
      }
      if (uVar23 != 0) {
        uVar26 = uVar23;
        if (uVar23 < 2) {
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            uVar26 = 0;
            goto LAB_14e2d78bd;
          }
        }
        else {
LAB_14e2d78bd:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar26,4)
          ;
        }
        if (0 < (int)uVar23) {
          uVar28 = (ulonglong)uVar23;
          uVar21 = 0;
          do {
            FVar18.Data = local_100;
            if (local_f8.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_f8.Data;
            }
            uVar17 = uVar21 & (longlong)(int)uVar23 - 1U;
            uVar21 = uVar21 + 1;
            *(undefined4 *)(FVar18.Data + uVar17 * 4) = 0xffffffff;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
      }
      if (local_f0 != 0) {
        pTStack_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
        uStack_1f4 = 1;
        uVar23 = 0;
        local_1f8 = 0;
        uStack_1e4 = 0;
        if (local_110 != 0) {
          FVar29 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
          if (local_118 != (ForElementType<unsigned_int>)0x0) {
            FVar29 = local_118;
          }
          uVar26 = *(uint *)FVar29;
          local_1f8 = 0;
          while (uVar26 == 0) {
            uVar23 = uVar23 + 0x20;
            lVar24 = (longlong)local_1f8;
            local_1f8 = local_1f8 + 1;
            uStack_1e4 = (ulonglong)uVar23 << 0x20;
            if ((int)(local_110 + -1 + (local_110 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1f8) {
              uStack_1e4 = CONCAT44(uVar23,local_110);
              goto LAB_14e2d79b3;
            }
            uVar26 = ((uint *)((longlong)FVar29 + 4))[lVar24];
          }
          uStack_1f4 = -uVar26 & uVar26;
          uVar21 = (ulonglong)uStack_1f4 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar13 = (uVar23 - 1) + (int)lVar24;
          local_200 = (FScriptContainerElement *)CONCAT44(local_200._4_4_,(int)lVar24);
          if (local_110 < iVar13) {
            iVar13 = local_110;
          }
          uStack_1e4._4_4_ = (int)((ulonglong)uStack_1e4 >> 0x20);
          uStack_1e4 = CONCAT44(uStack_1e4._4_4_,iVar13);
        }
LAB_14e2d79b3:
        local_1e8 = 0xffffffff;
        local_1b8 = (longlong *)local_138;
        local_1b0._padding_ = CONCAT44(uStack_1f4,local_1f8);
        local_1b0.UnvisitedBitMask = 0xffffffff;
        local_1b0.CurrentBitIndex = (int)uStack_1e4;
        local_1b0.BaseBitIndex = uStack_1e4._4_4_;
        local_1b0._28_4_ = uStack_1dc;
        local_1b0.Array = pTStack_1f0;
        if ((int)uStack_1e4 < local_110) {
          do {
            puVar30 = (ulonglong *)((longlong)local_1b0.CurrentBitIndex * 0x10 + *local_1b8);
            uVar23 = ((uint)(*puVar30 >> 0x14) & 0xffff ^ (uint)(*puVar30 >> 4)) * -0x7a143595;
            uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
            uVar23 = (uVar23 >> 0x10 ^ uVar23) & local_f0 - 1;
            *(uint *)((longlong)puVar30 + 0xc) = uVar23;
            FVar18.Data = local_100;
            if (local_f8.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_f8.Data;
            }
            lVar24 = (longlong)(int)(local_f0 - 1 & uVar23);
            *(undefined4 *)(puVar30 + 1) = *(undefined4 *)(FVar18.Data + lVar24 * 4);
            *(int *)(FVar18.Data + lVar24 * 4) = local_1b0.CurrentBitIndex;
            local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
          } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
        }
      }
    }
  }
  pFVar22 = pFVar19 + (longlong)(int)uVar11 * 8;
  iVar13 = local_210;
  for (; local_210 = iVar13, pFVar19 != pFVar22; pFVar19 = pFVar19 + 8) {
    TSet<UVariantSet_*,DefaultKeyFuncs<UVariantSet_*,0>,FDefaultSetAllocator>::
    Emplace<UVariantSet_*_const_&>
              ((TSet<UVariantSet_*,DefaultKeyFuncs<UVariantSet_*,0>,FDefaultSetAllocator> *)
               local_138,&local_208,(bool *)pFVar19);
    iVar13 = local_210;
  }
  iVar10 = iVar13 + -1;
  if (-1 < iVar10) {
    lVar24 = (longlong)iVar10 * 8;
    do {
      if ((pTVar1->ArrayNum <= iVar10) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = *(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar24);
      uVar11 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      if (local_138._8_4_ != local_104) {
        FVar18.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_f8.Data;
        }
        for (iVar12 = *(int *)(FVar18.Data +
                              (ulonglong)(local_f0 - 1 & (uVar11 >> 0x10 ^ uVar11)) * 4);
            iVar12 != -1; iVar12 = *(int *)(local_138._0_8_ + (longlong)iVar12 * 0x10 + 8)) {
          if (*(ulonglong *)(local_138._0_8_ + (longlong)iVar12 * 0x10) == uVar21) {
            if ((pTVar1->ArrayNum <= iVar10) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar24) = 0;
            break;
          }
        }
      }
      lVar24 = lVar24 + -8;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  pUVar8 = local_1d0;
  uVar11 = (int)pUVar31->_padding_ + iVar13;
  iVar13 = (local_1d0->VariantSets).ArrayNum;
  if ((int)uVar11 < iVar13) {
    lVar24 = (longlong)(int)uVar11 * 8;
    do {
      uVar23 = 0;
      if ((int)uVar11 < pTVar1->ArrayNum) {
        uVar23 = ~uVar11 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = *(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar24);
      uVar23 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
      uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
      if (local_138._8_4_ != local_104) {
        FVar18.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_f8.Data;
        }
        for (iVar13 = *(int *)(FVar18.Data +
                              (ulonglong)(local_f0 - 1 & (uVar23 >> 0x10 ^ uVar23)) * 4);
            iVar13 != -1; iVar13 = *(int *)(local_138._0_8_ + (longlong)iVar13 * 0x10 + 8)) {
          if (*(ulonglong *)(local_138._0_8_ + (longlong)iVar13 * 0x10) == uVar21) {
            uVar23 = 0;
            if ((int)uVar11 < pTVar1->ArrayNum) {
              uVar23 = ~uVar11 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar24) = 0;
            break;
          }
        }
      }
      iVar13 = (pUVar8->VariantSets).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar24 = lVar24 + 8;
    } while ((int)uVar11 < iVar13);
  }
  iVar13 = iVar13 + -1;
  if (-1 < iVar13) {
    lVar25 = (longlong)iVar13;
    lVar24 = lVar25 * 8;
    do {
      if ((pTVar1->ArrayNum <= iVar13) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar24) == 0) {
        if ((pTVar1->ArrayNum <= iVar13) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = (pTVar1->AllocatorInstance).Data + lVar25 * 8;
        iVar10 = (pTVar1->ArrayNum - iVar13) + -1;
        if (iVar10 != 0) {
          memmove(pFVar19,pFVar19 + 8,(longlong)iVar10 << 3);
        }
        pTVar1->ArrayNum = pTVar1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,pTVar1->ArrayNum,&pTVar1->ArrayMax);
      }
      lVar25 = lVar25 + -1;
      lVar24 = lVar24 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  local_f0 = 0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<UVariantSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UVariantSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UVariantSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
LAB_14e2d7e3b:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<ULevelVariantSets_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULevelVariantSets_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  return;
}

// BeginDestroy @ 14e2da870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelVariantSets::BeginDestroy(ULevelVariantSets *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(ULevelVariantSets **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetDirectorInstance @ 14e2dd2b0

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

UObject * __thiscall
ULevelVariantSets::GetDirectorInstance(ULevelVariantSets *this,UObject *param_1)

{
  TObjectPtr<UBlueprintGeneratedClass> *pTVar1;
  FSoftObjectPath *this_00;
  longlong lVar2;
  int iVar3;
  UBlueprintGeneratedClass *pUVar4;
  TObjectPtr<UBlueprintGeneratedClass>_u_0 this_01;
  bool bVar5;
  int iVar6;
  FUObjectItem *pFVar7;
  TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *pTVar8;
  TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 TVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 TVar12;
  FString *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 *pTVar18;
  wchar_t *pwVar19;
  TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 TVar20;
  ForAnyElementType FVar21;
  undefined1 auStackY_1e8 [32];
  TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 local_1b8;
  TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 local_1b0 [2];
  undefined1 local_1a0 [8];
  FWeakObjectPtr local_198;
  TObjectPtr<UBlueprintGeneratedClass>_u_0 local_190;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_188;
  undefined1 local_178 [16];
  TRotator<double> local_168;
  TVector<double>_u_0 local_150;
  undefined1 local_138 [128];
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  TVar9.DebugPtr = (UBlueprintGeneratedClass *)0x0;
  if (((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) ||
     (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc),
     ((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0)) {
    TVar9.DebugPtr = (UBlueprintGeneratedClass *)0x0;
  }
  else {
    local_190.DebugPtr =
         (UBlueprintGeneratedClass *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    pTVar8 = TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                     *)&this->WorldToDirectorInstance,(UWorld *)local_190.DebugPtr);
    if (pTVar8 == (TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)0x0) {
      local_198.ObjectIndex = 0;
      local_198.ObjectSerialNumber = 0;
    }
    else {
      local_198.ObjectIndex = *(int *)&pTVar8->field_0x8;
      local_198.ObjectSerialNumber = *(int *)&pTVar8->field_0xc;
    }
    bVar5 = FWeakObjectPtr::IsValid(&local_198);
    if (bVar5) {
      TVar9.DebugPtr = (UBlueprintGeneratedClass *)FWeakObjectPtr::Get(&local_198);
    }
    else {
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
      local_1b0[0].DebugPtr = (UBlueprintGeneratedClass *)ALevelVariantSetsActor::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1b0[0].DebugPtr != (UBlueprintGeneratedClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1b0[0].DebugPtr);
      }
      UGameplayStatics::GetAllActorsOfClass
                ((UObject *)local_190.DebugPtr,(TSubclassOf<AActor>)local_1b0,&local_188);
      iVar6 = local_188.ArrayNum;
      uVar15 = (ulonglong)local_188.ArrayNum;
      local_1b0[0].DebugPtr =
           (UBlueprintGeneratedClass *)(local_188.AllocatorInstance.Data + uVar15 * 8);
      FVar21.Data = local_188.AllocatorInstance.Data;
      while( true ) {
        TVar20 = local_1b0[0];
        if ((int)uVar15 != iVar6) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a0);
        }
        if ((UBlueprintGeneratedClass *)FVar21.Data == TVar20.DebugPtr) break;
        TVar20 = (TObjectPtr<UBlueprintGeneratedClass_const_>_u_0)
                 *(TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 *)FVar21.Data;
        pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
        pUVar11 = (UWorld *)
                  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)TVar20.DebugPtr,pUVar10);
        if ((pUVar11 == (UWorld *)local_190.DebugPtr) &&
           (TVar20.DebugPtr != (UBlueprintGeneratedClass *)0x0)) {
          pUVar10 = ALevelVariantSetsActor::StaticClass();
          iVar3 = (int)pUVar10->_padding_;
          if ((iVar3 <= *(int *)((TVar20.DebugPtr)->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((TVar20.DebugPtr)->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar10->_padding_)) {
            this_00 = (FSoftObjectPath *)&((TVar20.DebugPtr)->CookedPropertyGuids).field_0x28;
            if (((this_00->AssetPath).PackageName == (FName)0x0) ||
               (TVar12.DebugPtr =
                     (UBlueprintGeneratedClass *)FSoftObjectPath::ResolveObject(this_00),
               TVar12.DebugPtr == (UBlueprintGeneratedClass *)0x0)) {
LAB_14e2dd479:
              TVar12.DebugPtr = TVar9.DebugPtr;
            }
            else {
              pUVar10 = StaticClass();
              iVar3 = (int)pUVar10->_padding_;
              if ((*(int *)((TVar12.DebugPtr)->_padding_ + 0x38) < iVar3) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
                  &pUVar10->_padding_)) goto LAB_14e2dd479;
            }
            if (TVar12.DebugPtr == (UBlueprintGeneratedClass *)this) goto LAB_14e2dd56b;
          }
        }
        uVar15 = local_188._8_8_ & 0xffffffff;
        FVar21.Data = FVar21.Data + 8;
      }
      local_150._s_0.Z = 0.0;
      local_168.Roll = 0.0;
      local_150._s_0.X = 0.0;
      local_150._s_0.Y = 0.0;
      local_168.Pitch = 0.0;
      local_168.Yaw = 0.0;
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
      this_01 = local_190;
      local_b8._32_8_ = ((TObjectPtr<ULevel> *)&(local_190.DebugPtr)->_padding_)->field0_0x0;
      pUVar10 = ALevelVariantSetsActor::StaticClass();
      TVar12.DebugPtr =
           (UBlueprintGeneratedClass *)
           UWorld::SpawnActor(this_01.DebugPtr,pUVar10,(TVector<double> *)&local_150._s_0,&local_168
                              ,(FActorSpawnParameters *)local_b8);
      TVar20.DebugPtr = TVar9.DebugPtr;
      if (TVar12.DebugPtr != (UBlueprintGeneratedClass *)0x0) {
        pUVar10 = ALevelVariantSetsActor::StaticClass();
        iVar6 = (int)pUVar10->_padding_;
        if ((*(int *)((TVar12.DebugPtr)->_padding_ + 0x38) < iVar6) ||
           (TVar20.DebugPtr = TVar12.DebugPtr,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
           &pUVar10->_padding_)) {
          pFVar13 = GetTypeName<ALevelVariantSetsActor>((FString *)local_178);
          pwVar17 = L"";
          if ((pFVar13->Data).ArrayNum == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
          pFVar13 = GetFullNameForCastLogError<AActor>
                              ((FString *)&local_1b0[0].ObjectPtr,(AActor *)TVar12.DebugPtr);
          if ((pFVar13->Data).ArrayNum != 0) {
            pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar17,pwVar19);
        }
      }
      ALevelVariantSetsActor::SetLevelVariantSets((ALevelVariantSetsActor *)TVar20.DebugPtr,this);
      if (local_b8._64_8_ != 0) {
        plVar16 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (TVar20.DebugPtr == (UBlueprintGeneratedClass *)0x0) goto LAB_14e2dd779;
LAB_14e2dd56b:
      pTVar1 = &this->DirectorClass;
      TVar9 = (TObjectPtr<UBlueprintGeneratedClass_const_>_u_0)(pTVar1->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar9.DebugPtr != (UBlueprintGeneratedClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
      }
      local_1b0[0] = TVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar9.DebugPtr != (UBlueprintGeneratedClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar9.DebugPtr != (UBlueprintGeneratedClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
        }
      }
      uVar14 = ((uint)((ulonglong)TVar9.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar9.DebugPtr >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      iVar6 = TSet<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UBlueprintGeneratedClass_const_>_>
                        ((TSet<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>,0>,FDefaultSetAllocator>
                          *)&((TVar20.DebugPtr)->CookedPropertyGuids).field_0x48,
                         uVar14 >> 0x10 ^ uVar14,
                         (TObjectPtr<UBlueprintGeneratedClass_const_> *)&local_1b0[0].ObjectPtr);
      if ((((iVar6 == -1) ||
           (lVar2 = *(longlong *)&((TVar20.DebugPtr)->CookedPropertyGuids).field_0x48 +
                    (longlong)iVar6 * 0x18, lVar2 == 0)) ||
          (pTVar18 = (TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 *)(lVar2 + 8),
          pTVar18 == (TObjectPtr<UBlueprintGeneratedClass_const_>_u_0 *)0x0)) ||
         (TVar9 = (TObjectPtr<UBlueprintGeneratedClass_const_>_u_0)pTVar18->DebugPtr,
         TVar9.DebugPtr == (UBlueprintGeneratedClass *)0x0)) {
        pUVar4 = (pTVar1->field0_0x0).DebugPtr;
        local_1b0[0].DebugPtr = (UBlueprintGeneratedClass *)0x0;
        local_1b8.DebugPtr = (UBlueprintGeneratedClass *)0x0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)TVar20.DebugPtr,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar10 = ULevelVariantSetsFunctionDirector::StaticClass();
        CheckIsClassChildOf_Internal(pUVar10,(UClass *)pUVar4);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_138,(UClass *)pUVar4);
        local_138._48_8_ = (FObjectInstancingGraph *)0x0;
        local_138._56_8_ = (UPackage *)0x0;
        local_138._16_4_ = 0;
        local_138._20_4_ = 0;
        local_138._24_4_ = RF_Transient;
        local_138._40_8_ = (UObject *)0x0;
        local_138[0x20] = false;
        local_138._8_8_ = TVar20;
        TVar9.DebugPtr =
             (UBlueprintGeneratedClass *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
        if (local_138._64_8_ != 0) {
          plVar16 = (longlong *)(local_138 + 0x50);
          if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_138._104_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        local_1b0[0].DebugPtr = TVar9.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar9.DebugPtr != (UBlueprintGeneratedClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
        }
        local_178._8_8_ = local_1b0;
        local_178._0_8_ = pTVar1;
        TSet<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TObjectPtr<UBlueprintGeneratedClass>_const_&,TObjectPtr<ULevelVariantSetsFunctionDirector>_&&>_>
                  ((TSet<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>,0>,FDefaultSetAllocator>
                    *)&((TVar20.DebugPtr)->CookedPropertyGuids).field_0x48,
                   (TPairInitializer<TObjectPtr<UBlueprintGeneratedClass>_const_&,TObjectPtr<ULevelVariantSetsFunctionDirector>_&&>
                    *)&local_1b8.ObjectPtr,(bool *)local_178);
      }
      local_1b0[0] = (TObjectPtr<UBlueprintGeneratedClass_const_>_u_0)this;
      TMulticastDelegateRegistration<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
      ::AddLambda<_ULevelVariantSets::GetDirectorInstance_::__l2::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
                  *)&(TVar9.DebugPtr)->_padding_,(<lambda_1> *)&local_1b8.ObjectPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar9.DebugPtr != (UBlueprintGeneratedClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
      }
      local_1b0[0].DebugPtr = (UBlueprintGeneratedClass *)0x0;
      local_1b8 = TVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar9.DebugPtr != (UBlueprintGeneratedClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1b0[0].ObjectPtr,(FObjectPtr)&local_1b8);
      local_178._0_8_ = &local_190;
      local_178._8_8_ = local_1b0;
      TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UWorld_*_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>_>
                ((TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->WorldToDirectorInstance,
                 (TPairInitializer<UWorld_*_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&> *)
                 &local_1b8.ObjectPtr,(bool *)local_178);
LAB_14e2dd779:
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
    }
  }
  return (UObject *)TVar9.DebugPtr;
}

// GetNumVariantSets @ 14e2ddd20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall ULevelVariantSets::GetNumVariantSets(ULevelVariantSets *this)

{
  return (this->VariantSets).ArrayNum;
}

// GetPrivateStaticClass @ 14e2de2c0

UClass * __cdecl ULevelVariantSets::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSets",
               &Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton,
               StaticRegisterNativesULevelVariantSets,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelVariantSets>,
               InternalVTableHelperCtorCaller<ULevelVariantSets>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton;
}

// GetUniqueVariantSetName @ 14e2dfa20

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
ULevelVariantSets::GetUniqueVariantSetName
          (ULevelVariantSets *this,FString *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  undefined1 auStackY_128 [32];
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [8];
  FText local_c0;
  FString local_b0;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar13 = (this->VariantSets).AllocatorInstance.Data;
  iVar6 = (this->VariantSets).ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  pFVar2 = pFVar13 + (longlong)iVar6 * 8;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  while( true ) {
    if ((this->VariantSets).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<UVariantSet>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_c8);
    }
    if (pFVar13 == pFVar2) break;
    lVar12 = *(longlong *)pFVar13;
    local_c0.TextData.Reference = *(ITextData **)(lVar12 + 0x38);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 8))
                (local_c0.TextData.Reference,local_a0);
    }
    local_c0.Flags = *(uint *)(lVar12 + 0x40);
    pFVar8 = FText::ToString(&local_c0);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(local_9c + 4),
               (FString *)local_9c,(bool *)pFVar8);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    pFVar13 = pFVar13 + 8;
  }
  iVar9 = (param_1->Data).ArrayNum;
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    pwVar11 = L"";
    iVar6 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
  iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(local_9c + 4)
                     ,uVar5,param_1);
  if (iVar6 == -1) {
    ::FString::FString(__return_storage_ptr__,param_1);
    goto LAB_14e2dff21;
  }
  iVar6 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = iVar6;
  if (iVar6 == 0) {
    local_e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,(ForAnyElementType *)&local_e8,iVar6,&local_e8.Data.ArrayMax);
    memcpy(local_e8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar6 * 2);
  }
  iVar6 = local_e8.Data.ArrayNum + -1;
  FVar3.Data = local_e8.Data.AllocatorInstance.Data;
  if (local_e8.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  iVar9 = iVar6;
  if (1 < iVar6) {
    iVar9 = 1;
  }
  iVar7 = 0;
  if (0 < iVar9) {
    iVar7 = iVar9;
  }
  ::FString::FString(&local_b0,(wchar_t *)(FVar3.Data + ((longlong)iVar6 - (longlong)iVar7) * 2));
  bVar4 = ::FString::IsNumeric(&local_b0);
  if (bVar4) {
    do {
      iVar6 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      if (iVar6 + -1 < iVar6) {
        iVar6 = iVar6 + -1;
      }
      iVar9 = 0;
      if (0 < iVar6) {
        iVar9 = iVar6;
      }
      ::FString::RemoveAt(&local_e8,iVar9,1,No);
      iVar6 = local_e8.Data.ArrayNum + -1;
      FVar3.Data = local_e8.Data.AllocatorInstance.Data;
      if (local_e8.Data.ArrayNum == 0) {
        iVar6 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      iVar9 = iVar6;
      if (1 < iVar6) {
        iVar9 = 1;
      }
      iVar7 = 0;
      if (0 < iVar9) {
        iVar7 = iVar9;
      }
      ::FString::FString(&local_d8,(wchar_t *)(FVar3.Data + ((longlong)iVar6 - (longlong)iVar7) * 2)
                        );
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      local_b0.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      local_b0.Data.ArrayNum = local_d8.Data.ArrayNum;
      local_b0.Data.ArrayMax = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar4 = ::FString::IsNumeric(&local_b0);
    } while (bVar4);
  }
  if (local_e8.Data.ArrayNum == 0) {
    pwVar11 = L"";
    iVar6 = 0;
  }
  else {
    iVar6 = local_e8.Data.ArrayNum + -1;
    pwVar11 = (wchar_t *)local_e8.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
  iVar6 = local_e8.Data.ArrayNum;
  if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
    FVar10 = (ForElementType<FSetElementId>)&local_98.Hash;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar10 = local_98.Hash.SecondaryData;
    }
    iVar9 = *(int *)((longlong)FVar10 + (ulonglong)(local_98.HashSize - 1U & uVar5) * 4);
    lVar12 = local_98.Elements._0_8_;
    while (iVar9 != -1) {
      lVar1 = (longlong)iVar9 * 0x18;
      iVar7 = *(int *)(lVar1 + 8 + lVar12);
      if (iVar7 == iVar6) {
        if (1 < iVar7) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar1 + lVar12),
                             (wchar_t *)local_e8.Data.AllocatorInstance.Data);
          bVar4 = iVar6 == 0;
          lVar12 = local_98.Elements._0_8_;
          iVar6 = local_e8.Data.ArrayNum;
          goto LAB_14e2dfd4f;
        }
LAB_14e2dfd62:
        if (iVar9 != -1) goto LAB_14e2dfd76;
        break;
      }
      bVar4 = iVar7 + iVar6 == 1;
LAB_14e2dfd4f:
      if (bVar4) goto LAB_14e2dfd62;
      iVar9 = *(int *)(lVar12 + 0x10 + lVar1);
    }
  }
  if (iVar6 < 2) {
LAB_14e2dfd76:
    iVar6 = 0;
    do {
      local_c0.TextData.Reference = (ITextData *)0x0;
      local_c0.Flags = 0;
      local_c0._12_4_ = 0;
      ::FString::AppendInt((FString *)&local_c0,iVar6);
      ::FString::ConcatFF(&local_d8,&local_e8,(FString *)&local_c0);
      if (local_d8.Data.ArrayNum == 0) {
        pwVar11 = L"";
        iVar9 = 0;
      }
      else {
        iVar9 = local_d8.Data.ArrayNum + -1;
        pwVar11 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar10 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar10 = local_98.Hash.SecondaryData;
        }
        iVar9 = *(int *)((longlong)FVar10 + (ulonglong)(local_98.HashSize - 1U & uVar5) * 4);
        uVar14 = local_d8.Data._8_8_;
        lVar12 = local_98.Elements._0_8_;
        while (iVar9 != -1) {
          lVar1 = (longlong)iVar9 * 0x18;
          iVar7 = *(int *)(lVar1 + 8 + lVar12);
          if (iVar7 == (int)uVar14) {
            if (iVar7 < 2) goto LAB_14e2dfe54;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar1 + lVar12),
                               (wchar_t *)local_d8.Data.AllocatorInstance.Data);
            bVar4 = iVar7 == 0;
            lVar12 = local_98.Elements._0_8_;
            uVar14 = local_d8.Data._8_8_;
          }
          else {
            bVar4 = iVar7 + (int)uVar14 == 1;
          }
          if (bVar4) goto LAB_14e2dfe54;
          iVar9 = *(int *)(lVar12 + 0x10 + lVar1);
        }
      }
      iVar9 = -1;
LAB_14e2dfe54:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_c0.TextData.Reference);
      }
      if (iVar9 == -1) goto LAB_14e2dfe7c;
      iVar6 = iVar6 + 1;
    } while( true );
  }
LAB_14e2dfee0:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_e8.Data.ArrayMax;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = iVar6;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
LAB_14e2dff21:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_9c + 4));
  return __return_storage_ptr__;
LAB_14e2dfe7c:
  local_c0.TextData.Reference = (ITextData *)0x0;
  local_c0.Flags = 0;
  local_c0._12_4_ = 0;
  ::FString::AppendInt((FString *)&local_c0,iVar6);
  ::FString::ConcatFF(&local_d8,&local_e8,(FString *)&local_c0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  local_e8.Data.ArrayNum = local_d8.Data.ArrayNum;
  local_e8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
  local_e8.Data.ArrayMax = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = local_e8.Data.ArrayNum;
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_c0.TextData.Reference);
    iVar6 = local_e8.Data.ArrayNum;
  }
  goto LAB_14e2dfee0;
}

// GetVariantSet @ 14e2e0280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVariantSet * __thiscall ULevelVariantSets::GetVariantSet(ULevelVariantSets *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UVariantSet *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->VariantSets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->VariantSets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UVariantSet *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UVariantSet **)((this->VariantSets).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UVariantSet *)0x0;
}

// GetVariantSetByName @ 14e2e0310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVariantSet * __thiscall
ULevelVariantSets::GetVariantSetByName(ULevelVariantSets *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UVariantSet *pUVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  pFVar4 = (this->VariantSets).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->VariantSets).ArrayNum * 8;
  do {
    if (pFVar4 == pFVar1) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
LAB_14e2e0369:
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return (UVariantSet *)0x0;
    }
    bVar3 = `ULevelVariantSets::GetVariantSetByName'::__l2::<lambda_1>::operator()
                      (&local_18,*(UVariantSet **)pFVar4);
    if (bVar3) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        pUVar2 = *(UVariantSet **)pFVar4;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return pUVar2;
      }
      goto LAB_14e2e0369;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// GetVariantSetIndex @ 14e2e03d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall ULevelVariantSets::GetVariantSetIndex(ULevelVariantSets *this,UVariantSet *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (UVariantSet *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar1 = (this->VariantSets).AllocatorInstance.Data;
    for (pFVar2 = pFVar1; pFVar2 != pFVar1 + (longlong)(this->VariantSets).ArrayNum * 8;
        pFVar2 = pFVar2 + 8) {
      if (*(UVariantSet **)pFVar2 == param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetVariantSets @ 14e2e0450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UVariantSet_*,TSizedDefaultAllocator<32>_> * __thiscall
ULevelVariantSets::GetVariantSets(ULevelVariantSets *this)

{
  return (TArray<UVariantSet_*,TSizedDefaultAllocator<32>_> *)&this->VariantSets;
}

// HandleDirectorDestroyed @ 14e2e04a0

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
ULevelVariantSets::HandleDirectorDestroyed
          (ULevelVariantSets *this,ULevelVariantSetsFunctionDirector *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if ((param_1 != (ULevelVariantSetsFunctionDirector *)0x0) &&
     (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->WorldToDirectorInstance);
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar5 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->WorldToDirectorInstance;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        plVar2 = local_48;
        lVar1 = (longlong)(int)uVar5 * 0x18;
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_48 + 8 + lVar1));
        if ((bVar3) &&
           (bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::
                    UEOpEquals<ULevelVariantSetsFunctionDirector,bool>
                              ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(*plVar2 + 8 + lVar1),
                               param_1), bVar3)) {
          TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,(int)uVar5);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar5 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar6 < 4) {
          iVar4 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar6) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
          local_18->HashSize = iVar4;
          TSet<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

// RemoveVariantSets @ 14e2e22b0

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
ULevelVariantSets::RemoveVariantSets
          (ULevelVariantSets *this,TArray<UVariantSet_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UVariantSet *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UVariantSet *pUVar6;
  UPackage *pUVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  UVariantSet *local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  
  local_res20 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar13 + uVar8 * 8;
  local_58 = pFVar10;
  do {
    local_60 = pFVar13;
    if (param_1->ArrayNum != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UVariantSet_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar13 == pFVar10) {
      pFVar10 = (param_1->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      return;
    }
    pUVar2 = *(UVariantSet **)pFVar13;
    local_68 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UVariantSet *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar3 = (this->VariantSets).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)(this->VariantSets).ArrayMax * 8)
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (this->VariantSets).ArrayNum;
    if (iVar1 != 0) {
      pFVar10 = (this->VariantSets).AllocatorInstance.Data;
      iVar14 = 0;
      lVar9 = 0;
      bVar5 = *(UVariantSet **)pFVar10 != local_68;
      pUVar6 = local_68;
      iVar11 = 0;
      do {
        iVar12 = iVar11;
        do {
          lVar9 = lVar9 + 1;
          iVar12 = iVar12 + 1;
          if (iVar1 <= lVar9) break;
        } while (bVar5 == (*(UVariantSet **)(pFVar10 + lVar9 * 8) != pUVar6));
        if (bVar5 != false) {
          if (iVar14 != iVar11) {
            memmove(pFVar10 + (longlong)iVar14 * 8,pFVar10 + (longlong)iVar11 * 8,
                    (longlong)(iVar12 - iVar11) << 3);
            pUVar6 = local_68;
          }
          iVar14 = iVar14 + (iVar12 - iVar11);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar11 = iVar12;
      } while (lVar9 < iVar1);
      (this->VariantSets).ArrayNum = iVar14;
      pFVar10 = local_58;
      pFVar13 = local_60;
    }
    UE::LevelVariantSets::Private::ResetVariantSetDependents(pUVar2);
    pcVar4 = *(code **)(pUVar2->_padding_ + 0x170);
    pUVar7 = GetTransientPackage();
    (*pcVar4)(pUVar2,0,pUVar7,0);
    pFVar13 = pFVar13 + 8;
    uVar8 = (ulonglong)local_res20;
  } while( true );
}

// Serialize @ 14e2e4bb0

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

void __thiscall ULevelVariantSets::Serialize(ULevelVariantSets *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14e2e4bc0

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
ULevelVariantSets::Serialize(ULevelVariantSets *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesULevelVariantSets @ 14e2e6ff0

void __cdecl ULevelVariantSets::StaticRegisterNativesULevelVariantSets(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULevelVariantSets_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNumVariantSets @ 14e2e8760

void __cdecl
ULevelVariantSets::execGetNumVariantSets(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x10;
  return;
}

// execGetVariantSet @ 14e2e8cd0

void __cdecl ULevelVariantSets::execGetVariantSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[1].field_0x10 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[1].field_0x10) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
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
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[1].field_0x8 + lVar4 * 8);
  }
  return;
}

// execGetVariantSetByName @ 14e2e8dc0

void __cdecl
ULevelVariantSets::execGetVariantSetByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  void *_Src;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  uVar6 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_20;
  local_38.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_38,(int)local_20,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  ::FString::FString(&local_18,&local_38);
  puVar5 = *(undefined8 **)&param_1[1].field_0x8;
  puVar1 = puVar5 + *(int *)&param_1[1].field_0x10;
  do {
    if (puVar5 == puVar1) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
LAB_14e2e8ee9:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      *(undefined8 *)param_3 = uVar6;
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      return;
    }
    bVar3 = `ULevelVariantSets::GetVariantSetByName'::__l2::<lambda_1>::operator()
                      (&local_18,(UVariantSet *)*puVar5);
    if (bVar3) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar6 = *puVar5;
      goto LAB_14e2e8ee9;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

