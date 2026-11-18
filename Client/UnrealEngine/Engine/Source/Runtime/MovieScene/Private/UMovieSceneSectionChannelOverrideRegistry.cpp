// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// StaticClass @ 14605f390

UClass * __cdecl UMovieSceneSectionChannelOverrideRegistry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionChannelOverrideRegistry",
               &Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionChannelOverrideRegistry,0x78,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionChannelOverrideRegistry>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionChannelOverrideRegistry>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton;
}

// UMovieSceneSectionChannelOverrideRegistry @ 146095c60

UMovieSceneSectionChannelOverrideRegistry * __thiscall
UMovieSceneSectionChannelOverrideRegistry::UMovieSceneSectionChannelOverrideRegistry
          (UMovieSceneSectionChannelOverrideRegistry *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSectionChannelOverrideRegistry__6B_;
  *(undefined8 *)&this->Overrides = 0;
  *(undefined8 *)&(this->Overrides).field_0x8 = 0;
  *(undefined8 *)&(this->Overrides).field_0x20 = 0;
  *(undefined4 *)&(this->Overrides).field_0x28 = 0;
  *(undefined4 *)&(this->Overrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->Overrides).field_0x34 = 0;
  *(undefined4 *)&(this->Overrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Overrides).field_0x40 = 0;
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  return this;
}

// UMovieSceneSectionChannelOverrideRegistry @ 146095cb0

UMovieSceneSectionChannelOverrideRegistry * __thiscall
UMovieSceneSectionChannelOverrideRegistry::UMovieSceneSectionChannelOverrideRegistry
          (UMovieSceneSectionChannelOverrideRegistry *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieSceneSectionChannelOverrideRegistry__6B_;
  *(undefined8 *)&this->Overrides = 0;
  *(undefined8 *)&(this->Overrides).field_0x8 = 0;
  *(undefined8 *)&(this->Overrides).field_0x20 = 0;
  *(undefined4 *)&(this->Overrides).field_0x28 = 0;
  *(undefined4 *)&(this->Overrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->Overrides).field_0x34 = 0;
  *(undefined4 *)&(this->Overrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Overrides).field_0x40 = 0;
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  return this;
}

// ~UMovieSceneSectionChannelOverrideRegistry @ 146098730

void __thiscall
UMovieSceneSectionChannelOverrideRegistry::~UMovieSceneSectionChannelOverrideRegistry
          (UMovieSceneSectionChannelOverrideRegistry *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSectionChannelOverrideRegistry__6B_;
  *(undefined4 *)&(this->Overrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Overrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Overrides);
  UObject::~UObject((UObject *)this);
  return;
}

// AddChannel @ 1460a63d0

void __thiscall
UMovieSceneSectionChannelOverrideRegistry::AddChannel
          (UMovieSceneSectionChannelOverrideRegistry *this,FName param_1,
          UMovieSceneChannelOverrideContainer *param_2)

{
  TPairInitializer<FName_&,UMovieSceneChannelOverrideContainer_*_&> local_res8;
  UMovieSceneChannelOverrideContainer *local_res18 [2];
  UMovieSceneChannelOverrideContainer ***local_18;
  UMovieSceneChannelOverrideContainer **local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value = (UMovieSceneChannelOverrideContainer **)param_1;
  local_res18[0] = param_2;
  TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UMovieSceneChannelOverrideContainer_*_&>_>
            ((TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
              *)&this->Overrides,&local_res8,(bool *)&local_18);
  return;
}

// ContainsChannel @ 1460b7ae0

bool __thiscall
UMovieSceneSectionChannelOverrideRegistry::ContainsChannel
          (UMovieSceneSectionChannelOverrideRegistry *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Overrides).field_0x8 != *(int *)&(this->Overrides).field_0x34) {
    puVar3 = *(undefined1 **)&(this->Overrides).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Overrides).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->Overrides).field_0x48 - 1U & param_1.Number + uVar1)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->Overrides + (longlong)iVar2 * 0x18) == param_1)
        goto LAB_1460b7b4c;
        iVar2 = *(int *)(*(longlong *)&this->Overrides + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1460b7b4c:
  return iVar2 != -1;
}

// GetChannel @ 1460c9450

UMovieSceneChannelOverrideContainer * __thiscall
UMovieSceneSectionChannelOverrideRegistry::GetChannel
          (UMovieSceneSectionChannelOverrideRegistry *this,FName param_1)

{
  UMovieSceneChannelOverrideContainer *pUVar1;
  TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
                   *)&this->Overrides,param_1);
  if (pTVar2 != (TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_> *)0x0) {
    pUVar1 = *(UMovieSceneChannelOverrideContainer **)&pTVar2->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMovieSceneChannelOverrideContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UMovieSceneChannelOverrideContainer *)0x0;
}

// GetPrivateStaticClass @ 1460cfd40

UClass * __cdecl UMovieSceneSectionChannelOverrideRegistry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionChannelOverrideRegistry",
               &Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionChannelOverrideRegistry,0x78,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSectionChannelOverrideRegistry>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionChannelOverrideRegistry>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionChannelOverrideRegistry.InnerSingleton;
}

// ImportEntityImpl @ 1460d1dd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSectionChannelOverrideRegistry::ImportEntityImpl
          (UMovieSceneSectionChannelOverrideRegistry *this,
          FChannelOverrideEntityImportParams *param_1,FEntityImportParams *param_2,
          FImportedEntity *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_> *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
                   *)&this->Overrides,param_1->ChannelName);
  puVar4 = (undefined8 *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1623471593206317009>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneSectionChannelOverrideRegistry.cpp"
                       ,0x2f,"ContainerPtr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)*puVar4 + 0x2c0))((longlong *)*puVar4,param_1,param_2,param_3);
  }
  return;
}

// NumChannels @ 1460da6d0

int __thiscall
UMovieSceneSectionChannelOverrideRegistry::NumChannels
          (UMovieSceneSectionChannelOverrideRegistry *this)

{
  return *(int *)&(this->Overrides).field_0x8 - *(int *)&(this->Overrides).field_0x34;
}

// PopulateEvaluationFieldImpl @ 1460de840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UMovieSceneSectionChannelOverrideRegistry::PopulateEvaluationFieldImpl
          (UMovieSceneSectionChannelOverrideRegistry *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3,UMovieSceneSection *param_4)

{
  undefined1 *puVar1;
  TMap<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>_>
  *pTVar2;
  ForElementType<FMovieSceneChannelEntry> FVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  longlong lVar5;
  code *pcVar6;
  UMovieSceneSection *pUVar7;
  TRange<FFrameNumber> *pTVar8;
  FMovieSceneEntityComponentFieldBuilder *this_01;
  TMap<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  longlong *plVar13;
  FMovieSceneChannelProxy *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *******ppppppplVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  uint uVar20;
  bool *pbVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  ForElementType<FMovieSceneChannelEntry> FVar25;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [4];
  undefined8 local_1a4;
  int local_19c;
  UMovieSceneSectionChannelOverrideRegistry *local_198;
  UMovieSceneSection *local_190;
  TRange<FFrameNumber> *local_188;
  FMovieSceneEntityComponentFieldBuilder *local_180;
  FMovieSceneEvaluationFieldEntityMetaData *local_178;
  TMap<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  TMap<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  undefined4 local_f4;
  TSet<FMovieSceneChannel_*,DefaultKeyFuncs<FMovieSceneChannel_*,0>,FDefaultSetAllocator> local_e8;
  longlong *******local_98 [8];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = (UObjectBaseUtility *)this->_padding_;
  local_190 = param_4;
  local_198 = this;
  local_188 = param_1;
  local_180 = param_3;
  local_178 = param_2;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar12 = Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister();
    plVar13 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar12);
    if (plVar13 != (longlong *)0x0) {
      local_e8.Elements._0_8_ = 0;
      local_e8.Elements._8_8_ = 0;
      local_e8.Elements._32_8_ = 0;
      local_e8.Elements._40_4_ = 0;
      local_e8.Elements._52_4_ = 0;
      local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_e8.HashSize = 0;
      local_e8.Elements._44_4_ = 0x80;
      local_e8.Elements._48_4_ = 0xffffffff;
      pFVar14 = UMovieSceneSection::GetChannelProxy(param_4);
      iVar11 = (pFVar14->Entries).ArrayNum;
      FVar25 = (pFVar14->Entries).AllocatorInstance.SecondaryData;
      if (FVar25 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
        FVar25 = (ForElementType<FMovieSceneChannelEntry>)&pFVar14->Entries;
      }
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar3 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar25 + (longlong)iVar11 * 0x18);
      for (; FVar25 != FVar3;
          FVar25 = (ForElementType<FMovieSceneChannelEntry>)((longlong)FVar25 + 0x18)) {
        iVar11 = *(int *)((longlong)FVar25 + 0x10);
        pbVar21 = *(bool **)((longlong)FVar25 + 8);
        if ((iVar11 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar19 = 0;
        if (0 < iVar11) {
          do {
            if ((iVar19 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TSet<FMovieSceneChannel_*,DefaultKeyFuncs<FMovieSceneChannel_*,0>,FDefaultSetAllocator>
            ::Emplace<FMovieSceneChannel_*_const_&>
                      (&local_e8,(FMovieSceneChannel **)&local_1a4,pbVar21);
            iVar19 = iVar19 + 1;
            pbVar21 = pbVar21 + 8;
          } while (iVar19 < iVar11);
        }
        this = local_198;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,local_98);
      if (((local_58 & 1) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ChannelOverrideTraits.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneSectionChannelOverrideRegistry.cpp"
                              ,0x5f,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)&(this->Overrides).field_0x28;
      puVar1 = &(this->Overrides).field_0x10;
      pTVar2 = &this->Overrides;
      iStack_168 = 0;
      uStack_164 = 1;
      local_150 = 0;
      iStack_154 = 0;
      if (iVar11 != 0) {
        puVar24 = *(uint **)&(this->Overrides).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puVar1;
        }
        uVar22 = *puVar24;
        local_150 = 0;
        iStack_168 = 0;
        while (uVar22 == 0) {
          lVar16 = (longlong)iStack_168;
          local_150 = local_150 + 0x20;
          iStack_168 = iStack_168 + 1;
          iStack_154 = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168)
          goto LAB_1460deabe;
          uVar22 = puVar24[lVar16 + 1];
        }
        uStack_164 = -uVar22 & uVar22;
        uVar15 = (ulonglong)uStack_164 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1a4._4_4_ = (int)lVar16;
        iStack_154 = local_150 + -1 + local_1a4._4_4_;
        if (iVar11 < iStack_154) {
          iStack_154 = iVar11;
        }
      }
LAB_1460deabe:
      uVar22 = *(uint *)&(this->Overrides).field_0x28;
      uStack_14c = local_f4;
      iStack_148 = *(int *)&(this->Overrides).field_0x8 - *(int *)&(this->Overrides).field_0x34;
      uVar20 = uVar22 & 0xffffffe0;
      uStack_158 = 0xffffffff;
      TStack_138._padding_ = CONCAT44(uStack_164,iStack_168);
      TStack_138.CurrentBitIndex = iStack_154;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar22 >> 5;
      TStack_138._28_4_ = local_f4;
      TStack_138.BaseBitIndex = local_150;
      uStack_118 = CONCAT44(uStack_144,iStack_148);
      local_170 = pTVar2;
      local_160 = puVar1;
      local_140 = pTVar2;
      TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar22 < 0) || (iVar11 < (int)uVar22)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar8 = local_188;
      pUVar7 = local_190;
      uVar4 = *(uint *)&(this->Overrides).field_0x28;
      if (uVar22 != uVar4) {
        puVar23 = *(undefined1 **)&(this->Overrides).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = puVar1;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar19 * 4);
        while (uVar22 == 0) {
          lVar16 = (longlong)iVar19;
          uVar20 = uVar20 + 0x20;
          iVar19 = iVar19 + 1;
          uVar22 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_1460debd0;
          uVar22 = *(uint *)(puVar23 + lVar16 * 4 + 4);
        }
        uVar15 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_19c = (int)lVar16;
        uVar22 = local_19c + -1 + uVar20;
        if ((int)uVar4 < (int)uVar22) {
          uVar22 = uVar4;
        }
      }
LAB_1460debd0:
      do {
        pTVar9 = local_140;
        if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
          local_1a8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
        }
        lVar16 = (longlong)TStack_138.CurrentBitIndex;
        if (((TStack_138.CurrentBitIndex == uVar22) &&
            (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == pTVar2)) {
          if ((local_58 & 1) != 0) {
            ppppppplVar17 = (longlong *******)local_98;
            if ((local_58 & 2) == 0) {
              ppppppplVar17 = local_98[0];
            }
            local_58 = local_58 & 0xfe;
            (*(code *)**ppppppplVar17)(ppppppplVar17,0);
            if ((local_58 & 2) == 0) {
              FMemory::Free(local_98[0]);
            }
          }
          local_e8.HashSize = 0;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FMovieSceneChannel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FMovieSceneChannel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e8.Elements);
          return;
        }
        lVar5 = *(longlong *)pTVar9;
        uVar15 = (**(code **)(**(longlong **)(lVar5 + 8 + lVar16 * 0x18) + 0x2c8))();
        uVar20 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
        if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_e8.Hash;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_e8.Hash.SecondaryData;
          }
          for (iVar11 = *(int *)((longlong)FVar18 +
                                (ulonglong)(local_e8.HashSize - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4)
              ; iVar11 != -1;
              iVar11 = *(int *)(local_e8.Elements._0_8_ + 8 + (longlong)iVar11 * 0x10)) {
            if (*(ulonglong *)(local_e8.Elements._0_8_ + (longlong)iVar11 * 0x10) == uVar15) {
              if (((local_58 & 1) == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("bIsValid",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                      ,0x97,
                                      L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                     ), bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              ppppppplVar17 = (longlong *******)local_98;
              if ((local_58 & 2) == 0) {
                ppppppplVar17 = local_98[0];
              }
              uVar20 = (*(code *)(*ppppppplVar17)[2])
                                 (ppppppplVar17,*(undefined8 *)(lVar5 + lVar16 * 0x18));
              this_01 = local_180;
              iVar11 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                                 (local_180,(UObject *)pUVar7,uVar20);
              iVar19 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(this_01,local_178);
              FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                        (this_01,pTVar8,iVar11,iVar19);
              break;
            }
          }
        }
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      } while( true );
    }
  }
  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_1623471593206316998>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneSectionChannelOverrideRegistry.cpp"
                      ,0x3a,"OverrideProvider");
  if (!bVar10) {
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// RemoveChannel @ 1460e83e0

void __thiscall
UMovieSceneSectionChannelOverrideRegistry::RemoveChannel
          (UMovieSceneSectionChannelOverrideRegistry *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Overrides).field_0x8 != *(int *)&(this->Overrides).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieSceneChannelOverrideContainer>,0>,FDefaultSetAllocator>
                         *)&this->Overrides,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// StaticRegisterNativesUMovieSceneSectionChannelOverrideRegistry @ 1460fa2e0

void __cdecl
UMovieSceneSectionChannelOverrideRegistry::
StaticRegisterNativesUMovieSceneSectionChannelOverrideRegistry(void)

{
  return;
}

