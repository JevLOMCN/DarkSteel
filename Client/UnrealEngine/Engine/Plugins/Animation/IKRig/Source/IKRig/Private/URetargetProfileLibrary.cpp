// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14def8ac0

UClass * __cdecl URetargetProfileLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetProfileLibrary",
               &Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton,
               StaticRegisterNativesURetargetProfileLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URetargetProfileLibrary>,
               InternalVTableHelperCtorCaller<URetargetProfileLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton;
}

// URetargetProfileLibrary @ 14df1aec0

URetargetProfileLibrary * __thiscall
URetargetProfileLibrary::URetargetProfileLibrary
          (URetargetProfileLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7URetargetProfileLibrary__6B_;
  return this;
}

// URetargetProfileLibrary @ 14df1aef0

URetargetProfileLibrary * __thiscall
URetargetProfileLibrary::URetargetProfileLibrary
          (URetargetProfileLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7URetargetProfileLibrary__6B_;
  return this;
}

// ~URetargetProfileLibrary @ 14df1ca40

void __thiscall URetargetProfileLibrary::~URetargetProfileLibrary(URetargetProfileLibrary *this)

{
  *(undefined ***)this = &___7URetargetProfileLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CopyRetargetProfileFromRetargetAsset @ 14df2d190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRetargetProfile * __cdecl
URetargetProfileLibrary::CopyRetargetProfileFromRetargetAsset
          (FRetargetProfile *__return_storage_ptr__,UIKRetargeter *param_1)

{
  undefined1 auStack_168 [32];
  undefined1 local_148 [112];
  void *local_d8;
  undefined4 local_d0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_148);
  FRetargetProfile::FillProfileWithAssetSettings((FRetargetProfile *)local_148,param_1);
  FRetargetProfile::FRetargetProfile(__return_storage_ptr__,(FRetargetProfile *)local_148);
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_148 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_148._0_8_,local_148._8_4_);
  if ((FRetargetOpProfile *)local_148._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  return __return_storage_ptr__;
}

// GetOpControllerFromRetargetProfile @ 14df3afc0

UIKRetargetOpControllerBase * __cdecl
URetargetProfileLibrary::GetOpControllerFromRetargetProfile(FRetargetProfile *param_1,FName param_2)

{
  int iVar1;
  UPackage *pUVar2;
  UIKRetargetOpControllerBase *pUVar3;
  FRetargetOpProfile *pFVar4;
  FRetargetOpProfile *this;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->RetargetOpProfiles).ArrayNum;
  this = (FRetargetOpProfile *)(param_1->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar4 = this + iVar1;
  while( true ) {
    if ((param_1->RetargetOpProfiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar4) break;
    if (this->OpToApplySettingsTo == param_2) {
      pUVar2 = GetTransientPackage();
      pUVar3 = FRetargetOpProfile::CreateControllerIfNeeded(this,(UObject *)pUVar2);
      return pUVar3;
    }
    this = this + 1;
  }
  return (UIKRetargetOpControllerBase *)0x0;
}

// GetPrivateStaticClass @ 14df3e1a0

UClass * __cdecl URetargetProfileLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetProfileLibrary",
               &Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton,
               StaticRegisterNativesURetargetProfileLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URetargetProfileLibrary>,
               InternalVTableHelperCtorCaller<URetargetProfileLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetProfileLibrary.InnerSingleton;
}

// StaticRegisterNativesURetargetProfileLibrary @ 14df5a3a0

void __cdecl URetargetProfileLibrary::StaticRegisterNativesURetargetProfileLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_URetargetProfileLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyRetargetProfileFromRetargetAsset @ 14df63350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
URetargetProfileLibrary::execCopyRetargetProfileFromRetargetAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  FInstancedStruct *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  UPackage *pUVar10;
  uchar *puVar11;
  UScriptStruct *pUVar12;
  longlong lVar13;
  FRetargetProfile *pFVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStackY_318 [32];
  ForAnyElementType local_2d8;
  int local_2d0;
  int local_2cc;
  longlong local_2c8;
  undefined8 *local_2c0;
  longlong local_2b8;
  undefined1 local_2a8 [48];
  TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
  local_278;
  bool local_228;
  FTargetRootSettings local_220;
  bool local_1b8;
  FRetargetGlobalSettings local_1b4;
  undefined1 local_178 [112];
  void *local_108;
  undefined4 local_100;
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar16 = 0;
  local_2c8 = 0;
  local_2c0 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  lVar13 = local_2c8;
  local_2b8 = local_2c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_178);
  if (lVar13 != 0) {
    local_178._20_8_ = *(FName *)(lVar13 + 0x150);
    local_178._32_8_ = *(FName *)(lVar13 + 0x148);
    local_178[0x10] = true;
    local_178[0x1c] = true;
    if ((int)local_178._12_4_ < 0) {
      DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_178._0_8_,local_178._8_4_);
      local_178._8_4_ = 0;
      if (local_178._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
      }
    }
    else {
      DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_178._0_8_,local_178._8_4_);
      local_178._8_4_ = 0;
    }
    iVar2 = *(int *)(lVar13 + 0x48);
    pFVar4 = *(FInstancedStruct **)(lVar13 + 0x40);
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = iVar2;
    if (iVar2 == 0) {
      local_2cc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&local_2d8,iVar2,&local_2cc);
      ConstructItems<FInstancedStruct,FInstancedStruct,int>(local_2d8.Data,pFVar4,iVar2);
    }
    uVar18 = uVar16;
    if (0 < local_2d0) {
      do {
        uVar17 = (uint)uVar18;
        uVar9 = 0;
        if ((int)uVar17 < local_2d0) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar15 = *(longlong **)(local_2d8.Data + uVar16 + 8);
        lVar13 = *(longlong *)(local_2d8.Data + uVar16);
        if ((plVar15 == (longlong *)0x0) || (lVar13 == 0)) {
LAB_14df635cc:
          plVar15 = (longlong *)0x0;
        }
        else {
          if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar10 = Z_Construct_UPackage__Script_IKRig();
            Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar10,
                                 L"IKRetargetOpBase");
            if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
                (UScriptStruct *)0x0) goto LAB_14df635cc;
          }
          iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->
                       _padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar2 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_14df635cc;
        }
        puVar11 = (uchar *)(**(code **)(*plVar15 + 0x48))(plVar15);
        pUVar12 = (UScriptStruct *)(**(code **)(*plVar15 + 0x58))(plVar15);
        uVar5 = *(undefined8 *)((longlong)plVar15 + 0xc);
        if (local_178._8_4_ == local_178._12_4_) {
          local_178._8_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)local_178,(int *)(local_178 + 0xc));
        }
        uVar7 = local_178._0_8_;
        lVar13 = (longlong)(int)local_178._8_4_ * 0x20;
        *(undefined8 *)&((FScriptContainerElement *)(local_178._0_8_ + lVar13))->field_0x0 = 0;
        pFVar1 = (FScriptContainerElement *)(local_178._0_8_ + lVar13);
        local_178._8_4_ = local_178._8_4_ + 1;
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)(local_178._0_8_ + lVar13 + 8));
        *(undefined8 *)(pFVar1 + 0x18) = 0;
        *(undefined8 *)&pFVar1->field_0x0 = uVar5;
        FInstancedStruct::InitializeAs((FInstancedStruct *)(uVar7 + lVar13 + 8),pUVar12,puVar11);
        uVar16 = uVar16 + 0x10;
        lVar13 = local_2b8;
        param_3 = local_2c0;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while ((int)(uVar17 + 1) < local_2d0);
    }
    pFVar14 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
              ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                      *)(lVar13 + 0x50),*(FName *)(lVar13 + 0xa0));
    if (pFVar14 != (FRetargetProfile *)0x0) {
      FRetargetProfile::MergeWithOtherProfile((FRetargetProfile *)local_178,pFVar14);
    }
    DestructItems<FInstancedStruct,int>((FInstancedStruct *)local_2d8.Data,local_2d0);
    if ((FInstancedStruct *)local_2d8.Data != (FInstancedStruct *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
  }
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_2a8,(FRetargetProfile *)local_178);
  local_100 = 0;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_178 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_178._0_8_,local_178._8_4_);
  if ((FRetargetOpProfile *)local_178._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  if (param_3 != local_2a8) {
    DestructItems<FRetargetOpProfile,int>
              (*(FRetargetOpProfile **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = local_2a8._0_8_;
    *(undefined4 *)((longlong)param_3 + 8) = local_2a8._8_4_;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2a8._12_4_;
    local_2a8._8_4_ = 0;
    local_2a8._12_4_ = 0;
    local_2a8._0_8_ = (FRetargetOpProfile *)0x0;
  }
  *(bool *)((longlong)param_3 + 0x10) = local_2a8[0x10];
  ((FName *)((longlong)param_3 + 0x14))->ComparisonIndex = (FNameEntryId)local_2a8._20_4_;
  ((FName *)((longlong)param_3 + 0x14))->Number = local_2a8._24_4_;
  *(bool *)((longlong)param_3 + 0x1c) = local_2a8[0x1c];
  ((FName *)((longlong)param_3 + 0x20))->ComparisonIndex = (FNameEntryId)local_2a8._32_4_;
  ((FName *)((longlong)param_3 + 0x20))->Number = local_2a8._36_4_;
  *(bool *)((longlong)param_3 + 0x28) = local_2a8[0x28];
  *(bool *)((longlong)param_3 + 0x29) = local_2a8[0x29];
  if ((TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
       *)((longlong)param_3 + 0x30) !=
      (TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
       *)(local_2a8 + 0x30)) {
    TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
                *)((longlong)param_3 + 0x30),
               (TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
                *)(local_2a8 + 0x30));
  }
  *(bool *)((longlong)param_3 + 0x80) = local_228;
  *(bool *)((longlong)param_3 + 0xf0) = local_1b8;
  local_278.HashSize = 0;
  *(undefined8 *)((longlong)param_3 + 0x88) = local_220._0_8_;
  *(undefined8 *)((longlong)param_3 + 0x90) = local_220._8_8_;
  *(double *)((longlong)param_3 + 0x98) = local_220.BlendToSourceWeights.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0xa0) = local_220.BlendToSourceWeights.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xa8) = local_220.BlendToSourceWeights.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0xb0) = local_220._40_8_;
  *(double *)((longlong)param_3 + 0xb8) = local_220.TranslationOffset.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0xc0) = local_220.TranslationOffset.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 200) = local_220.TranslationOffset.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0xd0) = local_220.RotationOffset.Pitch;
  *(double *)((longlong)param_3 + 0xd8) = local_220.RotationOffset.Yaw;
  *(double *)((longlong)param_3 + 0xe0) = local_220.RotationOffset.Roll;
  *(undefined8 *)((longlong)param_3 + 0xe8) = local_220._96_8_;
  *(undefined8 *)((longlong)param_3 + 0xf4) = local_1b4._0_8_;
  *(FName *)((longlong)param_3 + 0xfc) = local_1b4.CopyBasePoseRoot;
  *(undefined8 *)((longlong)param_3 + 0x104) = local_1b4._16_8_;
  *(undefined8 *)((longlong)param_3 + 0x10c) = local_1b4._24_8_;
  *(FName *)((longlong)param_3 + 0x114) = local_1b4.DirectionChain;
  *(undefined8 *)((longlong)param_3 + 0x11c) = local_1b4._40_8_;
  *(float *)((longlong)param_3 + 0x124) = local_1b4.WarpSplay;
  if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_278.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2a8 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_2a8._0_8_,local_2a8._8_4_);
  if ((FRetargetOpProfile *)local_2a8._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_2a8._0_8_);
  }
  return;
}

// execGetOpControllerFromRetargetProfile @ 14df651e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
URetargetProfileLibrary::execGetOpControllerFromRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FName FVar3;
  UPackage *pUVar4;
  UIKRetargetOpControllerBase *pUVar5;
  FRetargetOpProfile *this;
  FRetargetOpProfile *pFVar6;
  longlong *plVar7;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  FName local_170;
  undefined1 local_168 [112];
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_168);
  pUVar5 = (UIKRetargetOpControllerBase *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  plVar7 = (longlong *)local_168;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  FVar3 = local_170;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = plVar7[1];
  this = (FRetargetOpProfile *)*plVar7;
  pFVar6 = this + (int)lVar2;
  while( true ) {
    if ((int)plVar7[1] != (int)lVar2) {
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_178);
    }
    if (this == pFVar6) goto LAB_14df65308;
    if (this->OpToApplySettingsTo == FVar3) break;
    this = this + 1;
  }
  pUVar4 = GetTransientPackage();
  pUVar5 = FRetargetOpProfile::CreateControllerIfNeeded(this,(UObject *)pUVar4);
LAB_14df65308:
  *(UIKRetargetOpControllerBase **)param_3 = pUVar5;
  local_f0 = 0;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_168 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_168._0_8_,local_168._8_4_);
  if ((FRetargetOpProfile *)local_168._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  return;
}

