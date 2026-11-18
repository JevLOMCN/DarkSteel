// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 14

// StaticClass @ 14e259240

UClass * __cdecl UOptimusGroomAssetComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomAssetComponentSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomAssetComponentSource",
               &Z_Registration_Info_UClass_UOptimusGroomAssetComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusGroomAssetComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomAssetComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusGroomAssetComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomAssetComponentSource.InnerSingleton;
}

// UOptimusGroomAssetComponentSource @ 14e26a920

UOptimusGroomAssetComponentSource * __thiscall
UOptimusGroomAssetComponentSource::UOptimusGroomAssetComponentSource
          (UOptimusGroomAssetComponentSource *this,FVTableHelper *param_1)

{
  UOptimusComponentSource::UOptimusComponentSource((UOptimusComponentSource *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomAssetComponentSource__6B_;
  return this;
}

// UOptimusGroomAssetComponentSource @ 14e26a950

UOptimusGroomAssetComponentSource * __thiscall
UOptimusGroomAssetComponentSource::UOptimusGroomAssetComponentSource
          (UOptimusGroomAssetComponentSource *this,FObjectInitializer *param_1)

{
  UOptimusComponentSource::UOptimusComponentSource((UOptimusComponentSource *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomAssetComponentSource__6B_;
  return this;
}

// ~UOptimusGroomAssetComponentSource @ 14e26b2c0

void __thiscall
UOptimusGroomAssetComponentSource::~UOptimusGroomAssetComponentSource
          (UOptimusGroomAssetComponentSource *this)

{
  *(undefined ***)this = &___7UOptimusGroomAssetComponentSource__6B_;
  UOptimusComponentSource::~UOptimusComponentSource((UOptimusComponentSource *)this);
  return;
}

// GetBindingName @ 14e273f90

FName __thiscall
UOptimusGroomAssetComponentSource::GetBindingName(UOptimusGroomAssetComponentSource *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Groom Asset");
  return in_RDX;
}

// GetComponentClass @ 14e274be0

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomAssetComponentSource::GetComponentClass(UOptimusGroomAssetComponentSource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UMeshComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetComponentElementCountsForExecutionDomain @ 14e274ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UOptimusGroomAssetComponentSource::GetComponentElementCountsForExecutionDomain
          (UOptimusGroomAssetComponentSource *this,FName param_1,UActorComponent *param_2,
          int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  UActorComponent **ppUVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  UClass *pUVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  UActorComponent **ppUVar14;
  UActorComponent *pUVar15;
  UActorComponent **ppUVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  TArray<UGroomComponent_const_*,TSizedDefaultAllocator<32>_> local_b8;
  UActorComponent *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  UActorComponent **local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  longlong *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  UActorComponent *pUVar13;
  
  pUVar13 = (UActorComponent *)0x0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  if (param_2 != (UActorComponent *)0x0) {
    pUVar9 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if ((iVar11 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar9->_padding_)) {
      local_a8 = param_2;
      if ((local_b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
         (((FScriptContainerElement *)&local_a8 <
           local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 8 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (local_b8.ArrayNum == local_b8.ArrayMax) {
        local_b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
      }
      *(UActorComponent **)(local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 8) =
           local_a8;
      local_b8.ArrayNum = local_b8.ArrayNum + 1;
      goto LAB_14e275096;
    }
  }
  local_a8 = (UActorComponent *)0x0;
  if (param_2 == (UActorComponent *)0x0) {
LAB_14e274dd5:
    param_2 = pUVar13;
  }
  else {
    pUVar9 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar9->_padding_)) goto LAB_14e274dd5;
  }
  if (param_2 != (UActorComponent *)0x0) {
    plVar1 = &param_2[8].PrimaryComponentTick._padding_;
    iVar11 = *(int *)&param_2[8].AssetUserData.AllocatorInstance.Data;
    local_88 = &param_2[8].PrimaryComponentTick.Target;
    uStack_8c = 1;
    pUVar15 = pUVar13;
    iStack_7c = 0;
    if (iVar11 != 0) {
      ppUVar16 = *(UActorComponent ***)&param_2[8].ComponentTags.ArrayNum;
      if (ppUVar16 == (UActorComponent **)0x0) {
        ppUVar16 = local_88;
      }
      for (uVar12 = *(uint *)ppUVar16; uVar12 == 0;
          uVar12 = *(uint *)((longlong)ppUVar16 + (longlong)(int)uVar12 * 4)) {
        uVar12 = (int)pUVar13 + 1;
        pUVar13 = (UActorComponent *)(ulonglong)uVar12;
        pUVar15 = (UActorComponent *)(ulonglong)((int)pUVar15 + 0x20);
        iStack_7c = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_14e274e7e;
      }
      uStack_8c = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_8c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_68 = (int)lVar10;
      iStack_7c = local_68 + -1 + (int)pUVar15;
      if (iVar11 < iStack_7c) {
        iStack_7c = iVar11;
      }
    }
LAB_14e274e7e:
    uVar12 = *(uint *)&param_2[8].AssetUserData.AllocatorInstance.Data;
    ppUVar16 = &param_2[8].PrimaryComponentTick.Target;
    uVar17 = uVar12 & 0xffffffe0;
    iStack_70 = (int)param_2[8].PrimaryComponentTick._padding_ - param_2[8].AssetUserData.ArrayMax;
    uStack_80 = 0xffffffff;
    TStack_58.CurrentBitIndex = iStack_7c;
    TStack_58.UnvisitedBitMask = 0xffffffff;
    uStack_90 = SUB84(pUVar13,0);
    TStack_58._padding_ = CONCAT44(uStack_8c,uStack_90);
    local_78 = (int)pUVar15;
    iVar11 = (int)uVar12 >> 5;
    TStack_58._28_4_ = iStack_7c;
    TStack_58.BaseBitIndex = local_78;
    uStack_38 = CONCAT44(uStack_6c,iStack_70);
    local_98 = plVar1;
    iStack_74 = iStack_7c;
    local_60 = plVar1;
    TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
    if ((((int)uVar12 < 0) ||
        (*(int *)&param_2[8].AssetUserData.AllocatorInstance.Data < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar3 = *(uint *)&param_2[8].AssetUserData.AllocatorInstance.Data;
    if (uVar12 != uVar3) {
      ppUVar4 = *(UActorComponent ***)&param_2[8].ComponentTags.ArrayNum;
      ppUVar14 = ppUVar16;
      if (ppUVar4 != (UActorComponent **)0x0) {
        ppUVar14 = ppUVar4;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)ppUVar14 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        iVar11 = iVar11 + 1;
        uVar17 = uVar17 + 0x20;
        uVar12 = uVar3;
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar11)
        goto LAB_14e274f81;
        uVar12 = *(uint *)((longlong)ppUVar14 + (longlong)iVar11 * 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_64 = (int)lVar10;
      uVar12 = local_64 + -1 + uVar17;
      if ((int)uVar3 < (int)uVar12) {
        uVar12 = uVar3;
      }
    }
LAB_14e274f81:
    while( true ) {
      plVar6 = local_60;
      if ((int)local_60[1] - *(int *)((longlong)local_60 + 0x34) != (int)uStack_38) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_58.CurrentBitIndex == uVar12) &&
          (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)ppUVar16)) &&
         (plVar6 == plVar1)) break;
      local_a0 = *(undefined8 *)(*plVar6 + (longlong)TStack_58.CurrentBitIndex * 0x10);
      if (((local_b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 <
           local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (local_b8.ArrayNum == local_b8.ArrayMax) {
        local_b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
      }
      lVar10 = (longlong)local_b8.ArrayNum;
      local_b8.ArrayNum = local_b8.ArrayNum + 1;
      *(undefined8 *)(local_b8.AllocatorInstance.Data + lVar10 * 8) = local_a0;
      TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
    }
  }
LAB_14e275096:
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  UE::Groom::Private::GetGroomInvocationElementCounts(&local_b8,param_1,param_4,false);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return true;
}

// GetDefaultNumInvocations @ 14e275a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
UOptimusGroomAssetComponentSource::GetDefaultNumInvocations
          (UOptimusGroomAssetComponentSource *this,UActorComponent *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  UActorComponent **ppUVar3;
  UGroomComponent *this_00;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar15;
  UActorComponent *pUVar16;
  UActorComponent **ppUVar17;
  UActorComponent *pUVar18;
  UActorComponent **ppUVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  undefined8 *puVar22;
  FScriptContainerElement *pFVar23;
  uint local_res10 [4];
  undefined1 local_res20 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  uint uStack_dc;
  UActorComponent *local_d8;
  undefined8 local_d0;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  FScriptContainerElement *local_b8;
  longlong *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  UActorComponent **local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  undefined8 *local_78;
  FScriptContainerElement *local_70;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  UActorComponent *pUVar14;
  
  pUVar14 = (UActorComponent *)0x0;
  uVar7 = 0;
  local_res10[0] = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  uStack_dc = 0;
  if (param_1 != (UActorComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar11 = (int)pUVar8->_padding_;
    if ((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar8->_padding_)) {
      local_d8 = param_1;
      if ((local_e8.Data <= (FScriptContainerElement *)&local_d8) &&
         (((FScriptContainerElement *)&local_d8 < local_e8.Data + (longlong)(int)uStack_dc * 8 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      if (local_e0 == uStack_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_e8,(int *)&uStack_dc);
      }
      *(UActorComponent **)(local_e8.Data + (longlong)(int)local_e0 * 8) = local_d8;
      local_e0 = local_e0 + 1;
      goto LAB_14e275e45;
    }
  }
  local_d8 = (UActorComponent *)0x0;
  if (param_1 == (UActorComponent *)0x0) {
LAB_14e275b9f:
    param_1 = pUVar14;
  }
  else {
    pUVar8 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar11 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar8->_padding_)) goto LAB_14e275b9f;
  }
  if (param_1 != (UActorComponent *)0x0) {
    plVar2 = &param_1[8].PrimaryComponentTick._padding_;
    uVar20 = *(uint *)&param_1[8].AssetUserData.AllocatorInstance.Data;
    local_a0 = &param_1[8].PrimaryComponentTick.Target;
    uStack_a4 = 1;
    local_90 = 0;
    uStack_94 = local_90;
    if (uVar20 != 0) {
      ppUVar19 = *(UActorComponent ***)&param_1[8].ComponentTags.ArrayNum;
      if (ppUVar19 == (UActorComponent **)0x0) {
        ppUVar19 = local_a0;
      }
      uVar13 = *(uint *)ppUVar19;
      pUVar16 = pUVar14;
      pUVar18 = pUVar14;
      uVar7 = 0;
      local_90 = 0;
      while (uVar13 == 0) {
        uVar7 = (int)pUVar16 + 1;
        pUVar16 = (UActorComponent *)(ulonglong)uVar7;
        local_90 = (int)pUVar18 + 0x20;
        pUVar18 = (UActorComponent *)(ulonglong)local_90;
        uStack_94 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
        goto LAB_14e275c2f;
        uVar13 = *(uint *)((longlong)ppUVar19 + (longlong)(int)uVar7 * 4);
      }
      uStack_a4 = ~(uVar13 - 1) & uVar13;
      uVar10 = (ulonglong)uStack_a4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_80 = (int)lVar9;
      uStack_94 = local_80 + -1 + local_90;
      if ((int)uVar20 < (int)uStack_94) {
        uStack_94 = uVar20;
      }
    }
LAB_14e275c2f:
    uVar20 = *(uint *)&param_1[8].AssetUserData.AllocatorInstance.Data;
    ppUVar19 = &param_1[8].PrimaryComponentTick.Target;
    uVar13 = uVar20 & 0xffffffe0;
    iStack_88 = (int)param_1[8].PrimaryComponentTick._padding_ - param_1[8].AssetUserData.ArrayMax;
    uStack_98 = 0xffffffff;
    TStack_60.CurrentBitIndex = uStack_94;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_a4,uVar7);
    iVar11 = (int)uVar20 >> 5;
    TStack_60._28_4_ = uStack_94;
    TStack_60.BaseBitIndex = local_90;
    uStack_40 = CONCAT44(uStack_84,iStack_88);
    local_b0 = plVar2;
    uStack_a8 = uVar7;
    uStack_8c = uStack_94;
    local_68 = plVar2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
    if ((((int)uVar20 < 0) ||
        (*(int *)&param_1[8].AssetUserData.AllocatorInstance.Data < (int)uVar20)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar7 = *(uint *)&param_1[8].AssetUserData.AllocatorInstance.Data;
    if (uVar20 != uVar7) {
      ppUVar3 = *(UActorComponent ***)&param_1[8].ComponentTags.ArrayNum;
      ppUVar17 = ppUVar19;
      if (ppUVar3 != (UActorComponent **)0x0) {
        ppUVar17 = ppUVar3;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)ppUVar17 + (longlong)iVar11 * 4);
      while (uVar20 == 0) {
        iVar11 = iVar11 + 1;
        uVar13 = uVar13 + 0x20;
        uVar20 = uVar7;
        if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar11)
        goto LAB_14e275d40;
        uVar20 = *(uint *)((longlong)ppUVar17 + (longlong)iVar11 * 4);
      }
      uVar10 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_7c = (int)lVar9;
      uVar20 = local_7c + -1 + uVar13;
      if ((int)uVar7 < (int)uVar20) {
        uVar20 = uVar7;
      }
    }
LAB_14e275d40:
    while( true ) {
      plVar5 = local_68;
      if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar20) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)ppUVar19)) &&
         (plVar5 == plVar2)) break;
      local_d0 = *(undefined8 *)(*plVar5 + (longlong)TStack_60.CurrentBitIndex * 0x10);
      if (((local_e8.Data <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < local_e8.Data + (longlong)(int)uStack_dc * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      if (local_e0 == uStack_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_e8,(int *)&uStack_dc);
      }
      lVar9 = (longlong)(int)local_e0;
      local_e0 = local_e0 + 1;
      *(undefined8 *)(local_e8.Data + lVar9 * 8) = local_d0;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
LAB_14e275e45:
  uVar7 = 0;
  uVar10 = (ulonglong)(int)local_e0;
  local_c4 = local_e0;
  pFVar23 = local_e8.Data + uVar10 * 8;
  puVar12 = local_78;
  puVar15 = local_c0;
  FVar21.Data = local_e8.Data;
  local_70 = pFVar23;
  while( true ) {
    local_b8 = FVar21.Data;
    if (local_e0 != (uint)uVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar21.Data == pFVar23) break;
    this_00 = *(UGroomComponent **)FVar21.Data;
    uVar20 = 0;
    local_c8 = (this_00->HairGroupInstances).ArrayNum;
    if (local_c8 != 0) {
      do {
        bVar6 = UGroomComponent::IsDeformationEnable(this_00,uVar20);
        if (bVar6) {
          if (((int)uVar20 < 0) || ((this_00->HairGroupInstances).ArrayNum <= (int)uVar20)) {
            puVar15 = (undefined8 *)0x0;
            uVar13 = (uint)pUVar14 | 2;
            local_c0 = (undefined8 *)0x0;
            puVar22 = (undefined8 *)0x0;
          }
          else {
            uVar13 = (uint)pUVar14 | 1;
            if (((this_00->HairGroupInstances).ArrayNum <= (int)uVar20) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return uVar7;
            }
            puVar12 = *(undefined8 **)
                       ((this_00->HairGroupInstances).AllocatorInstance.Data +
                       (longlong)(int)uVar20 * 8);
            puVar22 = puVar12;
            local_78 = puVar12;
            if (puVar12 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
              UNLOCK();
            }
          }
          pUVar14 = (UActorComponent *)(ulonglong)uVar13;
          if (((uVar13 & 2) != 0) &&
             (pUVar14 = (UActorComponent *)(ulonglong)(uVar13 & 0xfffffffd),
             puVar15 != (undefined8 *)0x0)) {
            piVar1 = (int *)(puVar15 + 1);
            LOCK();
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar11 == 1) && ((piVar1 != (int *)0x0 && (puVar15 != (undefined8 *)0x0)))) {
              (**(code **)*puVar15)(puVar15,1);
            }
          }
          if ((((ulonglong)pUVar14 & 1) != 0) &&
             (pUVar14 = (UActorComponent *)(ulonglong)((uint)pUVar14 & 0xfffffffe),
             puVar12 != (undefined8 *)0x0)) {
            piVar1 = (int *)(puVar12 + 1);
            LOCK();
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar11 == 1) && ((piVar1 != (int *)0x0 && (puVar12 != (undefined8 *)0x0)))) {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
          if (puVar22 != (undefined8 *)0x0) {
            uVar7 = uVar7 + 1;
          }
        }
        uVar20 = uVar20 + 1;
        pFVar23 = local_70;
      } while (uVar20 < local_c8);
    }
    uVar10 = (ulonglong)local_c4;
    FVar21.Data = local_b8 + 8;
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return uVar7;
}

// GetDisplayName @ 14e276520

FText * __thiscall
UOptimusGroomAssetComponentSource::GetDisplayName
          (UOptimusGroomAssetComponentSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"DeformersGroomDomainsSource",L"GroomAssetComponent",
             L"Groom Asset Component");
  return __return_storage_ptr__;
}

// GetExecutionDomains @ 14e276840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomAssetComponentSource::GetExecutionDomains
          (UOptimusGroomAssetComponentSource *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  
  FVar11 = FMeshesExecutionDomains::Vertices;
  FVar10 = FMeshesExecutionDomains::Bones;
  FVar9 = FGuidesExecutionDomains::Points;
  FVar8 = FGuidesExecutionDomains::Objects;
  FVar7 = FGuidesExecutionDomains::Curves;
  FVar6 = FGuidesExecutionDomains::Edges;
  FVar5 = FStrandsExecutionDomains::Points;
  FVar4 = FStrandsExecutionDomains::Objects;
  FVar3 = FStrandsExecutionDomains::Curves;
  FVar2 = FStrandsExecutionDomains::Edges;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 10;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,10,0,&__return_storage_ptr__->AllocatorInstance,10,
             &__return_storage_ptr__->ArrayMax);
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  *pFVar1 = FVar2;
  pFVar1[1] = FVar4;
  pFVar1[2] = FVar3;
  pFVar1[3] = FVar5;
  pFVar1[4] = FVar6;
  pFVar1[5] = FVar8;
  pFVar1[6] = FVar7;
  pFVar1[7] = FVar9;
  pFVar1[8] = FVar10;
  pFVar1[9] = FVar11;
  return __return_storage_ptr__;
}

// GetLodIndex @ 14e278110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UOptimusGroomAssetComponentSource::GetLodIndex
          (UOptimusGroomAssetComponentSource *this,UActorComponent *param_1)

{
  return 0;
}

// GetPrivateStaticClass @ 14e282590

UClass * __cdecl UOptimusGroomAssetComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomAssetComponentSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomAssetComponentSource",
               &Z_Registration_Info_UClass_UOptimusGroomAssetComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusGroomAssetComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomAssetComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusGroomAssetComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomAssetComponentSource.InnerSingleton;
}

// IsUsableAsPrimarySource @ 14e2888b0

bool __thiscall
UOptimusGroomAssetComponentSource::IsUsableAsPrimarySource(UOptimusGroomAssetComponentSource *this)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  UClass *pUVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(*(longlong *)this + 0x2c0))(this,local_res8);
  lVar5 = *plVar3;
  if (lVar5 != 0) {
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = *plVar3;
        goto LAB_14e288905;
      }
    }
  }
  lVar5 = 0;
LAB_14e288905:
  pUVar4 = Z_Construct_UClass_UMeshComponent_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar5 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUOptimusGroomAssetComponentSource @ 14e289720

void __cdecl
UOptimusGroomAssetComponentSource::StaticRegisterNativesUOptimusGroomAssetComponentSource(void)

{
  return;
}

