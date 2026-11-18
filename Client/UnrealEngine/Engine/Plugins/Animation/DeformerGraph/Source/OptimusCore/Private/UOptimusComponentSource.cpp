// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 17

// StaticClass @ 14e10f7e0

UClass * __cdecl UOptimusComponentSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentSource",
               &Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusComponentSource,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusComponentSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton;
}

// UOptimusComponentSource @ 14e158710

UOptimusComponentSource * __thiscall
UOptimusComponentSource::UOptimusComponentSource
          (UOptimusComponentSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusComponentSource__6B_;
  return this;
}

// UOptimusComponentSource @ 14e158740

UOptimusComponentSource * __thiscall
UOptimusComponentSource::UOptimusComponentSource
          (UOptimusComponentSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOptimusComponentSource__6B_;
  return this;
}

// ~UOptimusComponentSource @ 14e162320

void __thiscall UOptimusComponentSource::~UOptimusComponentSource(UOptimusComponentSource *this)

{
  *(undefined ***)this = &___7UOptimusComponentSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAllExecutionDomains @ 14e1b8600

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
UOptimusComponentSource::GetAllExecutionDomains
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  ulonglong uVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  ForAnyElementType FVar19;
  undefined1 local_res8 [8];
  uint local_res10;
  FName local_res18;
  FScriptContainerElement *local_res20;
  TArray<UOptimusComponentSource_const_*,TSizedDefaultAllocator<32>_> local_b0;
  void *local_a0 [2];
  uint local_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  undefined4 local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  GetAllSources(&local_b0);
  local_res10 = local_b0.ArrayNum;
  uVar13 = (ulonglong)(int)local_res10;
  pFVar1 = local_b0.AllocatorInstance.Data + uVar13 * 8;
  FVar19.Data = local_b0.AllocatorInstance.Data;
  do {
    uVar11 = 0;
    local_res20 = FVar19.Data;
    if (local_b0.ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<UOptimusComponentSource_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar19.Data == pFVar1) {
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pFVar7 = (ForAnyElementType *)
             (**(code **)(**(longlong **)FVar19.Data + 0x2c8))(*(longlong **)FVar19.Data,local_a0);
    uVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
             *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    uVar14 = *(int *)&pFVar7[1].Data + uVar12;
    if (uVar12 < uVar14) {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)__return_storage_ptr__,uVar14);
      if (uVar14 < 4) {
        uVar12 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        uVar12 = 1 << ((byte)lVar6 & 0x1f);
      }
      if ((__return_storage_ptr__->HashSize == 0) ||
         (__return_storage_ptr__->HashSize < (int)uVar12)) {
        __return_storage_ptr__->HashSize = uVar12;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar12 != 0) {
          uVar14 = uVar12;
          if (uVar12 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar14 = 0;
              goto LAB_14e1b871f;
            }
          }
          else {
LAB_14e1b871f:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar14,4
                      );
          }
          if (0 < (int)uVar12) {
            uVar17 = (ulonglong)uVar12;
            uVar13 = uVar11;
            do {
              FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar10 = FVar3;
              }
              uVar8 = uVar13 & (longlong)(int)uVar12 - 1U;
              uVar13 = uVar13 + 1;
              *(undefined4 *)((longlong)FVar10 + uVar8 * 4) = 0xffffffff;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize != 0) {
          uVar12 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
          puStack_88 = &(__return_storage_ptr__->Elements).field_0x10;
          uStack_8c = 1;
          local_90 = 0;
          uStack_7c = 0;
          uStack_78 = 0;
          FVar19.Data = local_res20;
          local_70 = __return_storage_ptr__;
          local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_88;
          if (uVar12 != 0) {
            puVar4 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar18 = (uint *)puStack_88;
            if (puVar4 != (uint *)0x0) {
              puVar18 = puVar4;
            }
            uVar14 = *puVar18;
            uVar13 = uVar11;
            while (uVar14 == 0) {
              uStack_78 = (int)uVar13 + 0x20;
              uVar13 = (ulonglong)uStack_78;
              iVar9 = (int)uVar11;
              local_90 = iVar9 + 1;
              uVar11 = (ulonglong)local_90;
              if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_90)
              goto LAB_14e1b8819;
              uVar14 = puVar18[(longlong)iVar9 + 1];
            }
            uStack_8c = -uVar14 & uVar14;
            uVar11 = (ulonglong)uStack_8c * 2 + 1;
            lVar6 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            uStack_7c = (int)lVar6 + -1 + (int)uVar13;
            uVar11 = (ulonglong)uStack_7c;
            if ((int)uVar12 < (int)uStack_7c) {
LAB_14e1b8819:
              local_80 = 0xffffffff;
              local_68._padding_ = CONCAT44(uStack_8c,local_90);
              local_68.CurrentBitIndex = uVar12;
              local_68.UnvisitedBitMask = 0xffffffff;
              local_68._28_4_ = uStack_74;
              local_68.BaseBitIndex = uStack_78;
              uStack_7c = uVar12;
              goto LAB_14e1b8835;
            }
          }
          local_80 = 0xffffffff;
          local_68._padding_ = CONCAT44(uStack_8c,local_90);
          local_68.CurrentBitIndex = uStack_7c;
          local_68.UnvisitedBitMask = 0xffffffff;
          local_68._28_4_ = uStack_74;
          local_68.BaseBitIndex = uStack_78;
          if ((int)uVar11 < (int)uVar12) {
            do {
              puVar16 = (undefined8 *)
                        ((longlong)(int)uVar11 * 0x10 + *(longlong *)&local_70->Elements);
              uVar5 = *puVar16;
              uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
              uVar12 = __return_storage_ptr__->HashSize - 1U &
                       uVar12 + (int)((ulonglong)uVar5 >> 0x20);
              *(uint *)((longlong)puVar16 + 0xc) = uVar12;
              FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar10 = FVar3;
              }
              uVar13 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar12;
              *(undefined4 *)(puVar16 + 1) = *(undefined4 *)((longlong)FVar10 + uVar13 * 4);
              *(int *)((longlong)FVar10 + uVar13 * 4) = (int)uVar11;
              local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
              uVar11 = (ulonglong)(uint)local_68.CurrentBitIndex;
              FVar19.Data = local_res20;
            } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
          }
        }
      }
    }
LAB_14e1b8835:
    pFVar15 = pFVar7->Data;
    iVar9 = *(int *)&pFVar7[1].Data;
    pFVar2 = pFVar15 + (longlong)iVar9 * 8;
    while( true ) {
      if (*(int *)&pFVar7[1].Data != iVar9) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (pFVar15 == pFVar2) break;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                (__return_storage_ptr__,&local_res18,(bool *)pFVar15);
      pFVar15 = pFVar15 + 8;
    }
    iVar9 = *(int *)((longlong)&pFVar7[1].Data + 4);
    *(undefined4 *)&pFVar7[1].Data = 0;
    if (iVar9 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,pFVar7,0,(int *)((longlong)&pFVar7[1].Data + 4));
    }
    if (local_a0[0] != (void *)0x0) {
      FMemory::Free(local_a0[0]);
    }
    FVar19.Data = FVar19.Data + 8;
    uVar13 = (ulonglong)local_res10;
  } while( true );
}

// GetAllSources @ 14e1b9370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UOptimusComponentSource_const_*,TSizedDefaultAllocator<32>_> * __cdecl
UOptimusComponentSource::GetAllSources
          (TArray<UOptimusComponentSource_const_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  TObjectPtr<UObject>_u_0 TVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UOptimusComponentSource_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UPackage *pUVar10;
  UPackage *pUVar11;
  longlong lVar12;
  FUObjectCppClassStaticFunctions local_res8;
  TObjectPtr<UObject>_u_0 local_48;
  TObjectIterator<UClass> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  local_40.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_40);
  do {
    while( true ) {
      lVar12 = (longlong)local_40.Index;
      if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) {
        if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      uVar6 = 0;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<UOptimusComponentSource_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      pUVar8 = *(UClass **)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
      if ((pUVar8->ClassFlags & (CLASS_Deprecated|CLASS_Hidden|CLASS_Abstract)) == CLASS_None)
      break;
LAB_14e1b965f:
      TObjectIterator<UClass>::Advance(&local_40);
    }
    if (Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton == (UClass *)0x0) {
      local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/OptimusCore",L"OptimusComponentSource",
                 &Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton,
                 StaticRegisterNativesUOptimusComponentSource,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
                 CASTCLASS_None,L"Engine",InternalConstructor<UOptimusComponentSource>,
                 InternalVTableHelperCtorCaller<UOptimusComponentSource>,&local_res8,
                 UObject::StaticClass,UObject::StaticClass);
      if (Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton == (UClass *)0x0)
      goto LAB_14e1b965f;
    }
    iVar7 = (int)(Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton)->_padding_;
    if (((int)pUVar8->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
        &(Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14e1b965f;
    pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar8);
    pUVar11 = GetTransientPackage();
    if (pUVar10 == pUVar11) goto LAB_14e1b965f;
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar8);
    }
    TVar1 = (TObjectPtr<UObject>_u_0)(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
    if (TVar1.DebugPtr == (UObject *)0x0) {
LAB_14e1b965a:
      local_48.DebugPtr = (UObject *)0x0;
      goto LAB_14e1b965f;
    }
    pUVar8 = StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&(TVar1.DebugPtr)->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar1.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) goto LAB_14e1b965a;
    pTVar2 = (TObjectPtr<UObject>_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
    local_48 = TVar1;
    if ((pTVar2 <= &local_48) &&
       ((&local_48 < pTVar2 + __return_storage_ptr__->ArrayMax &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<UOptimusComponentSource_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    ((TObjectPtr<UObject>_u_0 *)
    ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8))->DebugPtr =
         (UObject *)local_48;
    TObjectIterator<UClass>::Advance(&local_40);
  } while( true );
}

// GetBindingName @ 14e1bbb60

FName __thiscall UOptimusComponentSource::GetBindingName(UOptimusComponentSource *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
             ,0x1f,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetComponentClass @ 14e1be580

TSubclassOf<UActorComponent> __thiscall
UOptimusComponentSource::GetComponentClass(UOptimusComponentSource *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetComponentElementCountsForExecutionDomain @ 14e1be680

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
UOptimusComponentSource::GetComponentElementCountsForExecutionDomain
          (UOptimusComponentSource *this,FName param_1,UActorComponent *param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  return false;
}

// GetDefaultNumInvocations @ 14e1c31e0

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
UOptimusComponentSource::GetDefaultNumInvocations
          (UOptimusComponentSource *this,UActorComponent *param_1,int param_2)

{
  return 0;
}

// GetDisplayName @ 14e1c4010

FText * __thiscall
UOptimusComponentSource::GetDisplayName(UOptimusComponentSource *this,FText *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetExecutionDomains @ 14e1c4ed0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusComponentSource::GetExecutionDomains
          (UOptimusComponentSource *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComponentSource.h"
             ,0x28,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLodIndex @ 14e1c9140

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
UOptimusComponentSource::GetLodIndex(UOptimusComponentSource *this,UActorComponent *param_1)

{
  return 0;
}

// GetPrivateStaticClass @ 14e1d4ae0

UClass * __cdecl UOptimusComponentSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentSource",
               &Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton,
               StaticRegisterNativesUOptimusComponentSource,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusComponentSource>,
               InternalVTableHelperCtorCaller<UOptimusComponentSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentSource.InnerSingleton;
}

// GetSourceFromDataInterface @ 14e1e3db0

UOptimusComponentSource * __cdecl
UOptimusComponentSource::GetSourceFromDataInterface(UOptimusComputeDataInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UOptimusComponentSource *pUVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  UClass *pUVar7;
  longlong lVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UOptimusComponentSource_const_*,TSizedDefaultAllocator<32>_> local_58;
  
  GetAllSources(&local_58);
  iVar9 = local_58.ArrayNum;
  pFVar1 = local_58.AllocatorInstance.Data + (longlong)iVar9 * 8;
  FVar10.Data = local_58.AllocatorInstance.Data;
  do {
    if (local_58.ArrayNum != iVar9) {
      `TCheckedPointerIterator<UOptimusComponentSource_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar10.Data == pFVar1) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return (UOptimusComponentSource *)0x0;
    }
    pUVar3 = *(UOptimusComponentSource **)FVar10.Data;
    pcVar4 = *(code **)(*(longlong *)pUVar3 + 0x2c0);
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x388))(param_1,local_res18);
    lVar11 = *plVar6;
    if ((lVar11 == 0) ||
       (pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14e1e3e6b:
      lVar11 = 0;
    }
    else {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar11 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14e1e3e6b;
      lVar11 = *plVar6;
    }
    plVar6 = (longlong *)(*pcVar4)(pUVar3,local_res20);
    lVar8 = *plVar6;
    if ((lVar8 == 0) ||
       (pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14e1e3eb8:
      lVar8 = 0;
    }
    else {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14e1e3eb8;
      lVar8 = *plVar6;
    }
    if (lVar8 == lVar11) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return pUVar3;
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// IsUsableAsPrimarySource @ 14e1f02e0

bool __thiscall UOptimusComponentSource::IsUsableAsPrimarySource(UOptimusComponentSource *this)

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
        goto LAB_14e1f0335;
      }
    }
  }
  lVar5 = 0;
LAB_14e1f0335:
  pUVar4 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
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

// StaticRegisterNativesUOptimusComponentSource @ 14e2257e0

void __cdecl UOptimusComponentSource::StaticRegisterNativesUOptimusComponentSource(void)

{
  return;
}

