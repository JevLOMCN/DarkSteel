// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 14

// StaticClass @ 14e259300

UClass * __cdecl UOptimusGroomSolverComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomSolverComponentSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomSolverComponentSource",
               &Z_Registration_Info_UClass_UOptimusGroomSolverComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusGroomSolverComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomSolverComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusGroomSolverComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomSolverComponentSource.InnerSingleton;
}

// UOptimusGroomSolverComponentSource @ 14e26af00

UOptimusGroomSolverComponentSource * __thiscall
UOptimusGroomSolverComponentSource::UOptimusGroomSolverComponentSource
          (UOptimusGroomSolverComponentSource *this,FVTableHelper *param_1)

{
  UOptimusComponentSource::UOptimusComponentSource((UOptimusComponentSource *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomSolverComponentSource__6B_;
  return this;
}

// UOptimusGroomSolverComponentSource @ 14e26af30

UOptimusGroomSolverComponentSource * __thiscall
UOptimusGroomSolverComponentSource::UOptimusGroomSolverComponentSource
          (UOptimusGroomSolverComponentSource *this,FObjectInitializer *param_1)

{
  UOptimusComponentSource::UOptimusComponentSource((UOptimusComponentSource *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomSolverComponentSource__6B_;
  return this;
}

// ~UOptimusGroomSolverComponentSource @ 14e26b490

void __thiscall
UOptimusGroomSolverComponentSource::~UOptimusGroomSolverComponentSource
          (UOptimusGroomSolverComponentSource *this)

{
  *(undefined ***)this = &___7UOptimusGroomSolverComponentSource__6B_;
  UOptimusComponentSource::~UOptimusComponentSource((UOptimusComponentSource *)this);
  return;
}

// GetBindingName @ 14e273ff0

FName __thiscall
UOptimusGroomSolverComponentSource::GetBindingName(UOptimusGroomSolverComponentSource *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Groom Solver");
  return in_RDX;
}

// GetComponentClass @ 14e274c60

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomSolverComponentSource::GetComponentClass(UOptimusGroomSolverComponentSource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetComponentElementCountsForExecutionDomain @ 14e2754d0

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
UOptimusGroomSolverComponentSource::GetComponentElementCountsForExecutionDomain
          (UOptimusGroomSolverComponentSource *this,FName param_1,UActorComponent *param_2,
          int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  ForElementType<unsigned_int> FVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UClass *pUVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  UActorComponent **ppUVar17;
  uint uVar18;
  undefined1 local_res18 [16];
  uint local_e8 [2];
  TArray<UGroomComponent_const_*,TSizedDefaultAllocator<32>_> local_e0;
  undefined8 local_d0;
  longlong *local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  ForElementType<unsigned_int> local_b0;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  UActorComponent **local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_2 != (UActorComponent *)0x0) {
    pUVar12 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar12->_padding_)) {
      local_c8 = &param_2[8].PrimaryComponentTick._padding_;
      local_b0 = (ForElementType<unsigned_int>)&param_2[8].PrimaryComponentTick.Target;
      uStack_9c = 1;
      local_88 = 0;
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iStack_a0 = 0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      iVar11 = *(int *)&param_2[8].AssetUserData.AllocatorInstance.Data;
      iStack_8c = iStack_a0;
      if (iVar11 != 0) {
        ppUVar17 = *(UActorComponent ***)&param_2[8].ComponentTags.ArrayNum;
        if (ppUVar17 == (UActorComponent **)0x0) {
          ppUVar17 = (UActorComponent **)local_b0;
        }
        uVar14 = *(uint *)ppUVar17;
        iStack_a0 = 0;
        while (uVar14 == 0) {
          iStack_a0 = iStack_a0 + 1;
          local_88 = local_88 + 0x20;
          iStack_8c = iVar11;
          if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_a0)
          goto LAB_14e2755e5;
          uVar14 = *(uint *)((longlong)ppUVar17 + (longlong)iStack_a0 * 4);
        }
        uStack_9c = -uVar14 & uVar14;
        uVar2 = (ulonglong)uStack_9c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_78 = (int)lVar13;
        iStack_8c = local_78 + -1 + local_88;
        if (iVar11 < iStack_8c) {
          iStack_8c = iVar11;
        }
      }
LAB_14e2755e5:
      iStack_80 = (int)param_2[8].PrimaryComponentTick._padding_ - param_2[8].AssetUserData.ArrayMax
      ;
      uVar14 = *(uint *)&param_2[8].AssetUserData.AllocatorInstance.Data;
      uStack_90 = 0xffffffff;
      TStack_68.CurrentBitIndex = iStack_8c;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
      uVar18 = uVar14 & 0xffffffe0;
      iVar15 = (int)uVar14 >> 5;
      TStack_68._28_4_ = iStack_8c;
      TStack_68.BaseBitIndex = local_88;
      uStack_48 = CONCAT44(uStack_7c,iStack_80);
      local_a8 = local_c8;
      local_98 = (UActorComponent **)local_b0;
      iStack_84 = iStack_8c;
      local_70 = local_c8;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
      if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      FVar7 = local_b0;
      plVar6 = local_c8;
      uVar3 = *(int *)((longlong)local_b0 + 0x18);
      if (uVar14 != uVar3) {
        FVar16 = local_b0;
        if (*(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10);
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar15 * 4);
        while (uVar14 == 0) {
          iVar15 = iVar15 + 1;
          uVar18 = uVar18 + 0x20;
          uVar14 = uVar3;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar15)
          goto LAB_14e2756f0;
          uVar14 = *(uint *)((longlong)FVar16 + (longlong)iVar15 * 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_74 = (int)lVar13;
        uVar14 = local_74 + -1 + uVar18;
        if ((int)uVar3 < (int)uVar14) {
          uVar14 = uVar3;
        }
      }
LAB_14e2756f0:
      while( true ) {
        plVar8 = local_70;
        if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_68.CurrentBitIndex == uVar14) &&
            ((ForElementType<unsigned_int>)TStack_68.Array == FVar7)) && (plVar8 == plVar6)) break;
        local_d0 = *(undefined8 *)(*plVar8 + (longlong)TStack_68.CurrentBitIndex * 0x10);
        if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
            ((FScriptContainerElement *)&local_d0 <
             local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        if (local_e0.ArrayNum == local_e0.ArrayMax) {
          local_e0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
        }
        lVar13 = (longlong)local_e0.ArrayNum;
        local_e0.ArrayNum = local_e0.ArrayNum + 1;
        *(undefined8 *)(local_e0.AllocatorInstance.Data + lVar13 * 8) = local_d0;
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      }
      uVar14 = 0;
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      if (param_1 == FSolverExecutionDomains::Objects) {
        uVar14 = UE::Groom::Private::GetGroomInvocationElementCounts
                           (&local_e0,
                            UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Objects,
                            &local_c0,false);
      }
      else if (param_1 == FSolverExecutionDomains::Curves) {
        uVar14 = UE::Groom::Private::GetGroomInvocationElementCounts
                           (&local_e0,
                            UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Curves,
                            &local_c0,false);
      }
      else if (param_1 == FSolverExecutionDomains::Edges) {
        uVar14 = UE::Groom::Private::GetGroomInvocationElementCounts
                           (&local_e0,
                            UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Edges,
                            &local_c0,false);
      }
      else if (param_1 == FSolverExecutionDomains::Points) {
        uVar14 = UE::Groom::Private::GetGroomInvocationElementCounts
                           (&local_e0,
                            UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Points,
                            &local_c0,false);
      }
      else if (param_1 == FDynamicExecutionDomains::Curves) {
        uVar14 = param_2[7].ComponentTags.ArrayNum;
      }
      else if (param_1 == FDynamicExecutionDomains::Points) {
        uVar14 = param_2[7].UCSSerializationIndex;
      }
      else if (param_1 == FDynamicExecutionDomains::Edges) {
        uVar14 = param_2[7].UCSSerializationIndex - param_2[7].ComponentTags.ArrayNum;
      }
      else if (param_1 == FKinematicExecutionDomains::Curves) {
        uVar14 = param_2[7].AssetUserData.ArrayNum;
      }
      else if (param_1 == FKinematicExecutionDomains::Points) {
        uVar14 = *(uint *)&param_2[7].PhysicsStateAsyncCreationScene;
      }
      else if (param_1 == FKinematicExecutionDomains::Edges) {
        uVar14 = *(int *)&param_2[7].PhysicsStateAsyncCreationScene -
                 param_2[7].AssetUserData.ArrayNum;
      }
      piVar1 = &param_4->ArrayMax;
      uVar18 = 1;
      if (1 < uVar14) {
        uVar18 = uVar14;
      }
      param_4->ArrayNum = 0;
      iVar11 = 1;
      local_e8[0] = uVar18;
      if (*piVar1 != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,&param_4->AllocatorInstance,0,piVar1);
        iVar11 = *piVar1;
      }
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar4 + (longlong)iVar11 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      iVar11 = param_4->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar11 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_e8[0];
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      return uVar18 != 0;
    }
  }
  return false;
}

// GetDefaultNumInvocations @ 14e276360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UOptimusGroomSolverComponentSource::GetDefaultNumInvocations
          (UOptimusGroomSolverComponentSource *this,UActorComponent *param_1,int param_2)

{
  return 1;
}

// GetDisplayName @ 14e2766c0

FText * __thiscall
UOptimusGroomSolverComponentSource::GetDisplayName
          (UOptimusGroomSolverComponentSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"DeformersGroomDomainsSource",L"GroomSolverComponent",
             L"Groom Solver Component");
  return __return_storage_ptr__;
}

// GetExecutionDomains @ 14e2769e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomSolverComponentSource::GetExecutionDomains
          (UOptimusGroomSolverComponentSource *this,
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
  
  FVar11 = FKinematicExecutionDomains::Edges;
  FVar10 = FKinematicExecutionDomains::Curves;
  FVar9 = FKinematicExecutionDomains::Points;
  FVar8 = FDynamicExecutionDomains::Edges;
  FVar7 = FDynamicExecutionDomains::Curves;
  FVar6 = FDynamicExecutionDomains::Points;
  FVar5 = FSolverExecutionDomains::Points;
  FVar4 = FSolverExecutionDomains::Objects;
  FVar3 = FSolverExecutionDomains::Curves;
  FVar2 = FSolverExecutionDomains::Edges;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 10;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,10,0,&__return_storage_ptr__->AllocatorInstance,10,
             &__return_storage_ptr__->ArrayMax);
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  *pFVar1 = FVar5;
  pFVar1[1] = FVar2;
  pFVar1[2] = FVar3;
  pFVar1[3] = FVar4;
  pFVar1[4] = FVar6;
  pFVar1[5] = FVar7;
  pFVar1[6] = FVar9;
  pFVar1[7] = FVar10;
  pFVar1[8] = FVar8;
  pFVar1[9] = FVar11;
  return __return_storage_ptr__;
}

// GetLodIndex @ 14e2783f0

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
UOptimusGroomSolverComponentSource::GetLodIndex
          (UOptimusGroomSolverComponentSource *this,UActorComponent *param_1)

{
  return 0;
}

// GetPrivateStaticClass @ 14e283010

UClass * __cdecl UOptimusGroomSolverComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomSolverComponentSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomSolverComponentSource",
               &Z_Registration_Info_UClass_UOptimusGroomSolverComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusGroomSolverComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomSolverComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusGroomSolverComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomSolverComponentSource.InnerSingleton;
}

// IsUsableAsPrimarySource @ 14e2889f0

bool __thiscall
UOptimusGroomSolverComponentSource::IsUsableAsPrimarySource
          (UOptimusGroomSolverComponentSource *this)

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
        goto LAB_14e288a45;
      }
    }
  }
  lVar5 = 0;
LAB_14e288a45:
  pUVar4 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
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

// StaticRegisterNativesUOptimusGroomSolverComponentSource @ 14e289800

void __cdecl
UOptimusGroomSolverComponentSource::StaticRegisterNativesUOptimusGroomSolverComponentSource(void)

{
  return;
}

