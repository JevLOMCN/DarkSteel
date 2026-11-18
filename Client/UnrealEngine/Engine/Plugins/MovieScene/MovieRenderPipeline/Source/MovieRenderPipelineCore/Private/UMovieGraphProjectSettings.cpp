// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc99b90

UClass * __cdecl UMovieGraphProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphProjectSettings",
               &Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton,
               StaticRegisterNativesUMovieGraphProjectSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"MovieRenderPipeline",InternalConstructor<UMovieGraphProjectSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton;
}

// UMovieGraphProjectSettings @ 14dcb09a0

UMovieGraphProjectSettings * __thiscall
UMovieGraphProjectSettings::UMovieGraphProjectSettings
          (UMovieGraphProjectSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphProjectSettings__6B_;
  (this->DefaultNamedResolutions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultNamedResolutions).ArrayNum = 0;
  (this->DefaultNamedResolutions).ArrayMax = 0;
  return this;
}

// UMovieGraphProjectSettings @ 14dcb09e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieGraphProjectSettings * __thiscall
UMovieGraphProjectSettings::UMovieGraphProjectSettings(UMovieGraphProjectSettings *this)

{
  TArray<FMovieGraphNamedResolution,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  FObjectInitializer *pFVar4;
  undefined1 auStackY_158 [32];
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FMovieGraphNamedResolution local_b8;
  FName local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ForAnyElementType local_88;
  int local_7c;
  FName local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ForAnyElementType local_68;
  int local_5c;
  FName local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ForAnyElementType local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar4 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar4);
  pTVar1 = &this->DefaultNamedResolutions;
  this->_padding_ = (longlong)&___7UMovieGraphProjectSettings__6B_;
  piVar2 = &(this->DefaultNamedResolutions).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DefaultNamedResolutions).ArrayNum = 0;
  *piVar2 = 0;
  ::FName::FName(&local_118,"720p (HD)");
  ::FString::FString(&local_c8,"High definition");
  FVar3.Data = local_c8.Data.AllocatorInstance.Data;
  local_b8.ProfileName = local_118;
  local_b8.Resolution.field0_0x0._s_0.X = 0x500;
  local_b8.Resolution.field0_0x0._s_0.Y = 0x2d0;
  local_b8.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.ArrayNum == 0) {
    local_b8.Description.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8.Description,
               local_c8.Data.ArrayNum,&local_b8.Description.Data.ArrayMax);
    memcpy(local_b8.Description.Data.AllocatorInstance.Data,FVar3.Data,
           (longlong)local_c8.Data.ArrayNum * 2);
  }
  ::FName::FName(&local_110,"1080p (FHD)");
  ::FString::FString(&local_d8,"Full high definition");
  FVar3.Data = local_d8.Data.AllocatorInstance.Data;
  local_98 = local_110;
  local_90 = 0x780;
  local_8c = 0x438;
  local_88.Data = (FScriptContainerElement *)0x0;
  if (local_d8.Data.ArrayNum == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,&local_88,local_d8.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)local_d8.Data.ArrayNum * 2);
  }
  ::FName::FName(&local_108,"1440p (QHD)");
  ::FString::FString(&local_e8,"Quad high definition");
  FVar3.Data = local_e8.Data.AllocatorInstance.Data;
  local_78 = local_108;
  local_70 = 0xa00;
  local_6c = 0x5a0;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (local_e8.Data.ArrayNum == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e8.Data.ArrayNum,0,&local_68,local_e8.Data.ArrayNum,&local_5c);
    memcpy(local_68.Data,FVar3.Data,(longlong)local_e8.Data.ArrayNum * 2);
  }
  ::FName::FName(&local_100,"2160p (4K UHD)");
  ::FString::FString(&local_f8,"Ultra high definition (4k)");
  FVar3.Data = local_f8.Data.AllocatorInstance.Data;
  local_58 = local_100;
  local_50 = 0xf00;
  local_4c = 0x870;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_f8.Data.ArrayNum == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,&local_48,local_f8.Data.ArrayNum,&local_3c);
    memcpy(local_48.Data,FVar3.Data,(longlong)local_f8.Data.ArrayNum * 2);
  }
  DestructItems<FMovieGraphNamedResolution,int>
            ((FMovieGraphNamedResolution *)(pTVar1->AllocatorInstance).Data,
             (this->DefaultNamedResolutions).ArrayNum);
  (this->DefaultNamedResolutions).ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,4,*piVar2,&pTVar1->AllocatorInstance,4,piVar2);
  ConstructItems<FMovieGraphNamedResolution,FMovieGraphNamedResolution,int>
            ((pTVar1->AllocatorInstance).Data,&local_b8,4);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_b8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Description.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UMovieGraphProjectSettings @ 14dcb31a0

void __thiscall
UMovieGraphProjectSettings::~UMovieGraphProjectSettings(UMovieGraphProjectSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphProjectSettings__6B_;
  DestructItems<FMovieGraphNamedResolution,int>
            ((FMovieGraphNamedResolution *)(this->DefaultNamedResolutions).AllocatorInstance.Data,
             (this->DefaultNamedResolutions).ArrayNum);
  pFVar1 = (this->DefaultNamedResolutions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// EnsureUniqueNamesInDefaultNamedResolutions @ 14dcc30c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieGraphProjectSettings::EnsureUniqueNamesInDefaultNamedResolutions
          (UMovieGraphProjectSettings *this)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_107 [3];
  undefined4 local_104;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TPairInitializer<FName_const_&,int_&&> local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FScriptContainerElement *local_98;
  undefined4 *local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  int *piVar16;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  iVar12 = (this->DefaultNamedResolutions).ArrayNum;
  pFVar14 = (this->DefaultNamedResolutions).AllocatorInstance.Data;
  piVar16 = (int *)0x0;
  local_88._0_8_ = 0;
  uVar7 = 1;
  pFVar13 = pFVar14 + (longlong)iVar12 * 0x20;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar15 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
LAB_14dcc3140:
  if ((this->DefaultNamedResolutions).ArrayNum != iVar12) {
    local_108 = 0;
    `TCheckedPointerIterator<FMovieGraphNamedResolution,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_108);
  }
  uVar6 = local_60;
  if (pFVar14 != pFVar13) {
    lVar10 = *(longlong *)pFVar14;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
    if (local_88._8_4_ != local_54) {
      FVar11 = (ForElementType<FSetElementId>)local_50;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = local_48;
      }
      iVar3 = *(int *)((longlong)FVar11 +
                      (ulonglong)(local_40 - 1U & (int)((ulonglong)lVar10 >> 0x20) + uVar6) * 4);
      while (iVar3 != -1) {
        lVar1 = local_88._0_8_ + (longlong)iVar3 * 0x14;
        if (*(longlong *)(local_88._0_8_ + (longlong)iVar3 * 0x14) == lVar10) {
          piVar9 = (int *)(lVar1 + 8);
          if (lVar1 == 0) {
            piVar9 = piVar16;
          }
          if (piVar9 != (int *)0x0) {
            *piVar9 = *piVar9 + 1;
            pFVar14 = pFVar14 + 0x20;
            goto LAB_14dcc3140;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      }
    }
    local_90 = &local_104;
    local_104 = 1;
    local_98 = pFVar14;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_&&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)local_88,&local_d0,(bool *)&local_98);
    pFVar14 = pFVar14 + 0x20;
    goto LAB_14dcc3140;
  }
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_60 != 0) {
    puVar17 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar17 = local_68;
    }
    uVar18 = *puVar17;
    piVar9 = piVar16;
    local_e0 = 0;
    uVar15 = 0;
    while (uVar18 == 0) {
      iVar12 = (int)piVar16;
      local_e0 = (int)piVar9 + 0x20;
      piVar9 = (int *)(ulonglong)local_e0;
      uVar15 = iVar12 + 1;
      piVar16 = (int *)(ulonglong)uVar15;
      uStack_e4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14dcc3291;
      uVar18 = puVar17[(longlong)iVar12 + 1];
    }
    uVar7 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d0.Key._4_4_ = (int)lVar10;
    uStack_e4 = (local_e0 - 1) + local_d0.Key._4_4_;
    if ((int)local_60 < (int)uStack_e4) {
      uStack_e4 = local_60;
    }
  }
LAB_14dcc3291:
  local_100 = (longlong *)local_88;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_d8 = local_88._8_4_ - local_54;
  uVar18 = local_60 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uVar7,uVar15);
  iVar12 = (int)local_60 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar8 = (byte)local_60;
  uStack_f8 = uVar15;
  uStack_f4 = uVar7;
  uStack_dc = uStack_e4;
  local_d0.Value = (int *)local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar6 != local_60) {
    puVar17 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar17 = local_68;
    }
    uVar15 = -1 << (bVar8 & 0x1f) & puVar17[iVar12];
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar18 = uVar18 + 0x20;
      iVar12 = iVar12 + 1;
      uVar6 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14dcc33a0;
      uVar15 = puVar17[lVar10 + 1];
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar6 = (int)lVar10 + -1 + uVar18;
    if ((int)local_60 < (int)uVar6) {
      uVar6 = local_60;
    }
  }
LAB_14dcc33a0:
  while( true ) {
    piVar16 = local_d0.Value;
    if ((int)*(longlong *)((longlong)local_d0.Value + 8) - *(int *)((longlong)local_d0.Value + 0x34)
        != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_107);
    }
    if (((TStack_c0.CurrentBitIndex == uVar6) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (piVar16 == (int *)local_88)) break;
    RenameSimilarlyNamedResolutionsLoop
              ((TTuple<FName,int> *)
               (*(longlong *)piVar16 + (longlong)TStack_c0.CurrentBitIndex * 0x14),
               &this->DefaultNamedResolutions);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// FindNamedResolutionForOption @ 14dcc8740

FMovieGraphNamedResolution * __thiscall
UMovieGraphProjectSettings::FindNamedResolutionForOption
          (UMovieGraphProjectSettings *this,FName *param_1)

{
  int iVar1;
  FMovieGraphNamedResolution *pFVar2;
  FMovieGraphNamedResolution *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DefaultNamedResolutions).ArrayNum;
  pFVar2 = (FMovieGraphNamedResolution *)(this->DefaultNamedResolutions).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->DefaultNamedResolutions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieGraphNamedResolution_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->ProfileName == *param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FMovieGraphNamedResolution *)0x0;
}

// GetCategoryName @ 14dccbb20

FName __thiscall UMovieGraphProjectSettings::GetCategoryName(UMovieGraphProjectSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Plugins");
  return in_RDX;
}

// GetContainerName @ 14dccc340

FName __thiscall UMovieGraphProjectSettings::GetContainerName(UMovieGraphProjectSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Project");
  return in_RDX;
}

// GetPrivateStaticClass @ 14dcd2df0

UClass * __cdecl UMovieGraphProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphProjectSettings",
               &Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton,
               StaticRegisterNativesUMovieGraphProjectSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"MovieRenderPipeline",InternalConstructor<UMovieGraphProjectSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphProjectSettings.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphProjectSettings @ 14dce66e0

void __cdecl UMovieGraphProjectSettings::StaticRegisterNativesUMovieGraphProjectSettings(void)

{
  return;
}

