// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 14

// StaticClass @ 14e257de0

UClass * __cdecl UOptimusGroomCollisionComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomCollisionComponentSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomCollisionComponentSource",
               &Z_Registration_Info_UClass_UOptimusGroomCollisionComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusGroomCollisionComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomCollisionComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusGroomCollisionComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomCollisionComponentSource.InnerSingleton;
}

// UOptimusGroomCollisionComponentSource @ 14e26aa80

UOptimusGroomCollisionComponentSource * __thiscall
UOptimusGroomCollisionComponentSource::UOptimusGroomCollisionComponentSource
          (UOptimusGroomCollisionComponentSource *this,FVTableHelper *param_1)

{
  UOptimusComponentSource::UOptimusComponentSource((UOptimusComponentSource *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomCollisionComponentSource__6B_;
  return this;
}

// UOptimusGroomCollisionComponentSource @ 14e26aab0

UOptimusGroomCollisionComponentSource * __thiscall
UOptimusGroomCollisionComponentSource::UOptimusGroomCollisionComponentSource
          (UOptimusGroomCollisionComponentSource *this,FObjectInitializer *param_1)

{
  UOptimusComponentSource::UOptimusComponentSource((UOptimusComponentSource *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomCollisionComponentSource__6B_;
  return this;
}

// ~UOptimusGroomCollisionComponentSource @ 14e26b330

void __thiscall
UOptimusGroomCollisionComponentSource::~UOptimusGroomCollisionComponentSource
          (UOptimusGroomCollisionComponentSource *this)

{
  *(undefined ***)this = &___7UOptimusGroomCollisionComponentSource__6B_;
  UOptimusComponentSource::~UOptimusComponentSource((UOptimusComponentSource *)this);
  return;
}

// GetBindingName @ 14e273fc0

FName __thiscall
UOptimusGroomCollisionComponentSource::GetBindingName(UOptimusGroomCollisionComponentSource *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Groom Collision");
  return in_RDX;
}

// GetComponentClass @ 14e274c20

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomCollisionComponentSource::GetComponentClass
          (UOptimusGroomCollisionComponentSource *this)

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

// GetComponentElementCountsForExecutionDomain @ 14e275120

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
UOptimusGroomCollisionComponentSource::GetComponentElementCountsForExecutionDomain
          (UOptimusGroomCollisionComponentSource *this,FName param_1,UActorComponent *param_2,
          int param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  FPhysScene_Chaos **ppFVar4;
  int iVar5;
  uint uVar6;
  UObject *pUVar7;
  longlong lVar8;
  code *pcVar9;
  int *piVar10;
  bool bVar11;
  undefined1 uVar12;
  UClass *pUVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  UWorld *pUVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  TArray<TTuple<TObjectPtr<UMeshComponent>,int>,TSizedDefaultAllocator<32>_> local_a8;
  int *local_98;
  int iStack_90;
  uint uStack_8c;
  FPhysScene_Chaos **local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  int *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  if (param_2 != (UActorComponent *)0x0) {
    pUVar13 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar5 = (int)pUVar13->_padding_;
    if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar13->_padding_)) {
      iStack_90 = 0;
      piVar1 = &param_2[10].UCSSerializationIndex;
      ppFVar4 = &param_2[10].PhysicsStateAsyncCreationScene;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      uStack_8c = 1;
      iVar5 = *(int *)&param_2[10].field_0xb8;
      local_78 = 0;
      iStack_7c = local_78;
      if (iVar5 != 0) {
        pUVar17 = param_2[10].WorldPrivate;
        if (param_2[10].WorldPrivate == (UWorld *)0x0) {
          pUVar17 = (UWorld *)ppFVar4;
        }
        uVar14 = *(uint *)&pUVar17->_padding_;
        local_78 = 0;
        while (uVar14 == 0) {
          iStack_90 = iStack_90 + 1;
          local_78 = local_78 + 0x20;
          iStack_7c = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14e27521d;
          uVar14 = *(uint *)((longlong)&pUVar17->_padding_ + (longlong)iStack_90 * 4);
        }
        uStack_8c = -uVar14 & uVar14;
        uVar3 = (ulonglong)uStack_8c * 2 + 1;
        lVar8 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_68 = (int)lVar8;
        iStack_7c = local_68 + -1 + local_78;
        if (iVar5 < iStack_7c) {
          iStack_7c = iVar5;
        }
      }
LAB_14e27521d:
      uVar14 = *(uint *)&param_2[10].field_0xb8;
      uVar18 = uVar14 & 0xffffffe0;
      iStack_70 = *(int *)&param_2[10].field_0x98 - *(int *)((longlong)&param_2[0xb]._padding_ + 4);
      uStack_80 = 0xffffffff;
      TStack_58._padding_ = CONCAT44(uStack_8c,iStack_90);
      TStack_58.CurrentBitIndex = iStack_7c;
      TStack_58.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar14 >> 5;
      TStack_58._28_4_ = iStack_7c;
      TStack_58.BaseBitIndex = local_78;
      uStack_38 = CONCAT44(uStack_6c,iStack_70);
      local_98 = piVar1;
      local_88 = ppFVar4;
      iStack_74 = iStack_7c;
      local_60 = piVar1;
      TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)ppFVar4;
      if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      uVar6 = *(uint *)&param_2[10].field_0xb8;
      if (uVar14 != uVar6) {
        pUVar17 = (UWorld *)ppFVar4;
        if (param_2[10].WorldPrivate != (UWorld *)0x0) {
          pUVar17 = param_2[10].WorldPrivate;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) &
                 *(uint *)((longlong)&pUVar17->_padding_ + (longlong)iVar16 * 4);
        while (uVar14 == 0) {
          iVar16 = iVar16 + 1;
          uVar18 = uVar18 + 0x20;
          uVar14 = uVar6;
          if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16)
          goto LAB_14e275330;
          uVar14 = *(uint *)((longlong)&pUVar17->_padding_ + (longlong)iVar16 * 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_64 = (int)lVar8;
        uVar14 = local_64 + -1 + uVar18;
        if ((int)uVar6 < (int)uVar14) {
          uVar14 = uVar6;
        }
      }
LAB_14e275330:
      while( true ) {
        piVar10 = local_60;
        if ((int)*(longlong *)(local_60 + 2) - local_60[0xd] != (int)uStack_38) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_58.CurrentBitIndex == uVar14) &&
            (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)ppFVar4)) &&
           (piVar10 == piVar1)) break;
        pFVar2 = (FScriptContainerElement *)
                 (*(longlong *)piVar10 + (longlong)TStack_58.CurrentBitIndex * 0x18);
        if (((local_a8.AllocatorInstance.Data <= pFVar2) &&
            (pFVar2 < local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (local_a8.ArrayNum == local_a8.ArrayMax) {
          local_a8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
        }
        pFVar15 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 0x10;
        local_a8.ArrayNum = local_a8.ArrayNum + 1;
        pUVar7 = *(UObject **)pFVar2;
        *(UObject **)pFVar15 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        *(undefined4 *)(pFVar15 + 8) = *(undefined4 *)(pFVar2 + 8);
        TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
      }
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
      UE::Groom::Private::GetCollisionInvocationElementCounts(&local_a8,param_1,param_4);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// GetDefaultNumInvocations @ 14e276000

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
UOptimusGroomCollisionComponentSource::GetDefaultNumInvocations
          (UOptimusGroomCollisionComponentSource *this,UActorComponent *param_1,int param_2)

{
  FPhysScene_Chaos **ppFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  UObject *pUVar7;
  longlong lVar8;
  code *pcVar9;
  int *piVar10;
  bool bVar11;
  uint uVar12;
  UClass *pUVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  UWorld *pUVar17;
  undefined1 local_res10 [8];
  TArray<TTuple<TObjectPtr<UMeshComponent>,int>,TSizedDefaultAllocator<32>_> local_a0;
  int *local_90;
  int iStack_88;
  uint uStack_84;
  FPhysScene_Chaos **local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  undefined8 uStack_38;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar13 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar5 = (int)pUVar13->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar13->_padding_)) {
      iStack_88 = 0;
      uStack_84 = 1;
      piVar2 = &param_1[10].UCSSerializationIndex;
      ppFVar1 = &param_1[10].PhysicsStateAsyncCreationScene;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      iVar5 = *(int *)&param_1[10].field_0xb8;
      iStack_74 = 0;
      local_70 = iStack_88;
      if (iVar5 != 0) {
        pUVar17 = param_1[10].WorldPrivate;
        if (param_1[10].WorldPrivate == (UWorld *)0x0) {
          pUVar17 = (UWorld *)ppFVar1;
        }
        uVar12 = *(uint *)&pUVar17->_padding_;
        iStack_88 = 0;
        local_70 = 0;
        while (uVar12 == 0) {
          iStack_88 = iStack_88 + 1;
          local_70 = local_70 + 0x20;
          iStack_74 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14e2760fb;
          uVar12 = *(uint *)((longlong)&pUVar17->_padding_ + (longlong)iStack_88 * 4);
        }
        uStack_84 = -uVar12 & uVar12;
        uVar4 = (ulonglong)uStack_84 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iStack_74 = (int)lVar8 + -1 + local_70;
        if (iVar5 < iStack_74) {
          iStack_74 = iVar5;
        }
      }
LAB_14e2760fb:
      uVar12 = *(uint *)&param_1[10].field_0xb8;
      uVar15 = uVar12 & 0xffffffe0;
      iStack_68 = *(int *)&param_1[10].field_0x98 - *(int *)((longlong)&param_1[0xb]._padding_ + 4);
      uStack_78 = 0xffffffff;
      TStack_58._padding_ = CONCAT44(uStack_84,iStack_88);
      TStack_58.CurrentBitIndex = iStack_74;
      TStack_58.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar12 >> 5;
      TStack_58._28_4_ = iStack_74;
      TStack_58.BaseBitIndex = local_70;
      uStack_38 = CONCAT44(uStack_64,iStack_68);
      local_90 = piVar2;
      local_80 = ppFVar1;
      iStack_6c = iStack_74;
      local_60 = piVar2;
      TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)ppFVar1;
      if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return uVar12;
      }
      uVar6 = *(uint *)&param_1[10].field_0xb8;
      if (uVar12 != uVar6) {
        pUVar17 = (UWorld *)ppFVar1;
        if (param_1[10].WorldPrivate != (UWorld *)0x0) {
          pUVar17 = param_1[10].WorldPrivate;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                 *(uint *)((longlong)&pUVar17->_padding_ + (longlong)iVar14 * 4);
        while (uVar12 == 0) {
          iVar14 = iVar14 + 1;
          uVar15 = uVar15 + 0x20;
          uVar12 = uVar6;
          if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar14)
          goto LAB_14e276200;
          uVar12 = *(uint *)((longlong)&pUVar17->_padding_ + (longlong)iVar14 * 4);
        }
        uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar12 = (int)lVar8 + -1 + uVar15;
        if ((int)uVar6 < (int)uVar12) {
          uVar12 = uVar6;
        }
      }
LAB_14e276200:
      while( true ) {
        piVar10 = local_60;
        if ((int)*(longlong *)(local_60 + 2) - local_60[0xd] != (int)uStack_38) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_58.CurrentBitIndex == uVar12) &&
            (TStack_58.Array == (TBitArray<FDefaultBitArrayAllocator> *)ppFVar1)) &&
           (piVar10 == piVar2)) break;
        pFVar3 = (FScriptContainerElement *)
                 (*(longlong *)piVar10 + (longlong)TStack_58.CurrentBitIndex * 0x18);
        if (((local_a0.AllocatorInstance.Data <= pFVar3) &&
            (pFVar3 < local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return uVar12;
        }
        if (local_a0.ArrayNum == local_a0.ArrayMax) {
          local_a0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
        }
        pFVar16 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x10;
        local_a0.ArrayNum = local_a0.ArrayNum + 1;
        pUVar7 = *(UObject **)pFVar3;
        *(UObject **)pFVar16 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        *(undefined4 *)(pFVar16 + 8) = *(undefined4 *)(pFVar3 + 8);
        TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
      }
      uVar12 = UE::Groom::Private::GetCollisionNumInvocations(&local_a0);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      return uVar12;
    }
  }
  return 0;
}

// GetDisplayName @ 14e276590

FText * __thiscall
UOptimusGroomCollisionComponentSource::GetDisplayName
          (UOptimusGroomCollisionComponentSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"DeformersGroomDomainsSource",L"GroomCollisionComponent",
             L"Groom Collision Component");
  return __return_storage_ptr__;
}

// GetExecutionDomains @ 14e276960

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomCollisionComponentSource::GetExecutionDomains
          (UOptimusGroomCollisionComponentSource *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3 = FCollisionExecutionDomains::Triangles;
  FVar2 = FCollisionExecutionDomains::Vertices;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&__return_storage_ptr__->AllocatorInstance,2,&__return_storage_ptr__->ArrayMax)
  ;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  *pFVar1 = FVar2;
  pFVar1[1] = FVar3;
  return __return_storage_ptr__;
}

// GetLodIndex @ 14e278120

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
UOptimusGroomCollisionComponentSource::GetLodIndex
          (UOptimusGroomCollisionComponentSource *this,UActorComponent *param_1)

{
  FPhysScene_Chaos **ppFVar1;
  int *piVar2;
  FObjectPtr_u_0 *this_00;
  ulonglong uVar3;
  FObjectPtr this_01;
  longlong lVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  UWorld *pUVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int *local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  iVar10 = iVar11;
  if (param_1 != (UActorComponent *)0x0) {
    pUVar12 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar14 = (int)pUVar12->_padding_;
    iVar10 = 0;
    if ((iVar14 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
        &pUVar12->_padding_)) {
      piVar2 = &param_1[10].UCSSerializationIndex;
      iVar10 = *(int *)&param_1[10].field_0xb8;
      iVar16 = 0;
      iVar9 = 0;
      ppFVar1 = &param_1[10].PhysicsStateAsyncCreationScene;
      iVar18 = 1;
      uVar8 = 1;
      iVar17 = 0;
      iVar14 = 0;
      if (iVar10 != 0) {
        pUVar13 = param_1[10].WorldPrivate;
        if (param_1[10].WorldPrivate == (UWorld *)0x0) {
          pUVar13 = (UWorld *)ppFVar1;
        }
        uVar15 = *(uint *)&pUVar13->_padding_;
        iVar17 = 0;
        while (uVar15 == 0) {
          iVar16 = iVar16 + 1;
          iVar17 = iVar17 + 0x20;
          iVar9 = iVar10;
          if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 < iVar16) goto LAB_14e27821b;
          uVar15 = *(uint *)((longlong)&pUVar13->_padding_ + (longlong)iVar16 * 4);
        }
        uVar8 = -uVar15 & uVar15;
        uVar3 = (ulonglong)uVar8 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_res18 = (int)lVar4;
        iVar9 = local_res18 + -1 + iVar17;
        if (iVar10 < iVar9) {
          iVar9 = iVar10;
        }
LAB_14e27821b:
        iVar14 = *(int *)&param_1[10].field_0xb8;
      }
      uVar15 = *(uint *)&param_1[10].field_0xb8;
      uVar19 = uVar15 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar8,iVar16);
      TStack_60.CurrentBitIndex = iVar9;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar15 >> 5;
      TStack_60._28_4_ = iVar9;
      TStack_60.BaseBitIndex = iVar17;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&param_1[10].field_0x98 -
                           *(int *)((longlong)&param_1[0xb]._padding_ + 4));
      local_res20 = piVar2;
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)ppFVar1;
      if ((((int)uVar15 < 0) || (iVar14 < (int)uVar15)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      piVar6 = local_res20;
      uVar8 = *(uint *)&param_1[10].field_0xb8;
      iVar10 = iVar11;
      if (uVar15 != uVar8) {
        pUVar13 = (UWorld *)ppFVar1;
        if (param_1[10].WorldPrivate != (UWorld *)0x0) {
          pUVar13 = param_1[10].WorldPrivate;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                 *(uint *)((longlong)&pUVar13->_padding_ + (longlong)iVar16 * 4);
        while (uVar15 == 0) {
          iVar16 = iVar16 + 1;
          uVar19 = uVar19 + 0x20;
          uVar15 = uVar8;
          if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar16)
          goto LAB_14e278330;
          uVar15 = *(uint *)((longlong)&pUVar13->_padding_ + (longlong)iVar16 * 4);
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar15 = (int)lVar4 + -1 + uVar19;
        if ((int)uVar8 < (int)uVar15) {
          uVar15 = uVar8;
        }
      }
LAB_14e278330:
      while( true ) {
        if (*(int *)&param_1[10].field_0x98 - *(int *)((longlong)&param_1[0xb]._padding_ + 4) !=
            (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_60.CurrentBitIndex == uVar15) &&
            (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)ppFVar1)) &&
           (piVar2 == piVar6)) break;
        this_00 = (FObjectPtr_u_0 *)
                  (*(longlong *)piVar2 + (longlong)TStack_60.CurrentBitIndex * 0x18);
        if (*(longlong *)(*(longlong *)piVar2 + (longlong)TStack_60.CurrentBitIndex * 0x18) != 0) {
          pUVar12 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
          if ((bVar7) &&
             (this_01.field0_0x0 = (FObjectPtr_u_0)this_00->Handle,
             this_01.field0_0x0 != (UObject *)0x0)) {
            iVar10 = iVar10 + iVar18 * *(int *)((longlong)this_01.field0_0x0 + 0x7b4);
            iVar11 = USkinnedMeshComponent::GetNumLODs((USkinnedMeshComponent *)this_01.field0_0x0);
            iVar18 = iVar18 * iVar11;
          }
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return iVar10;
}

// GetPrivateStaticClass @ 14e2827d0

UClass * __cdecl UOptimusGroomCollisionComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomCollisionComponentSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomCollisionComponentSource",
               &Z_Registration_Info_UClass_UOptimusGroomCollisionComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusGroomCollisionComponentSource,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomCollisionComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusGroomCollisionComponentSource>,local_res8,
               UOptimusComponentSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomCollisionComponentSource.InnerSingleton;
}

// IsUsableAsPrimarySource @ 14e288950

bool __thiscall
UOptimusGroomCollisionComponentSource::IsUsableAsPrimarySource
          (UOptimusGroomCollisionComponentSource *this)

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
        goto LAB_14e2889a5;
      }
    }
  }
  lVar5 = 0;
LAB_14e2889a5:
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

// StaticRegisterNativesUOptimusGroomCollisionComponentSource @ 14e289750

void __cdecl
UOptimusGroomCollisionComponentSource::StaticRegisterNativesUOptimusGroomCollisionComponentSource
          (void)

{
  return;
}

