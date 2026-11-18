// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 26

// StaticClass @ 14a90da20

UClass * __cdecl UPoseSearchLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchLibrary",
               &Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton;
}

// UPoseSearchLibrary @ 14a91a330

UPoseSearchLibrary * __thiscall
UPoseSearchLibrary::UPoseSearchLibrary(UPoseSearchLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchLibrary__6B_;
  return this;
}

// UPoseSearchLibrary @ 14a91a360

UPoseSearchLibrary * __thiscall
UPoseSearchLibrary::UPoseSearchLibrary(UPoseSearchLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchLibrary__6B_;
  return this;
}

// ~UPoseSearchLibrary @ 14a91afe0

void __thiscall UPoseSearchLibrary::~UPoseSearchLibrary(UPoseSearchLibrary *this)

{
  *(undefined ***)this = &___7UPoseSearchLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14a91f0c0

bool __thiscall
`UPoseSearchLibrary::TraceMotionMatching'::__l48::<lambda_2>::operator()
          (void *this,FPoseCandidate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int local_18;
  EPoseCandidateFlags EStack_14;
  float local_10;
  
  local_18 = param_1->PoseIdx;
  lVar1 = *(longlong *)this;
  local_10 = (param_1->Cost).TotalCost;
  EStack_14 = param_1->PoseCandidateFlags;
  if ((*(int **)(lVar1 + 0x18) <= &local_18) &&
     (&local_18 < *(int **)(lVar1 + 0x18) + (longlong)*(int *)(lVar1 + 0x24) * 3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x20);
  if (iVar5 == *(int *)(lVar1 + 0x24)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)(lVar1 + 0x18),(int *)(lVar1 + 0x24));
  }
  *(int *)(lVar1 + 0x20) = iVar5 + 1;
  lVar1 = *(longlong *)(lVar1 + 0x18);
  *(ulonglong *)(lVar1 + (longlong)iVar5 * 0xc) = CONCAT44(EStack_14,local_18);
  *(float *)(lVar1 + 8 + (longlong)iVar5 * 0xc) = local_10;
  return false;
}

// FindPoseHistoryNode @ 14a928e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAnimNode_PoseSearchHistoryCollector_Base * __cdecl
UPoseSearchLibrary::FindPoseHistoryNode(FName param_1,UAnimInstance *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UAnimInstance *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FAnimNode_PoseSearchHistoryCollector_Base *pFVar7;
  IAnimClassInterface *pIVar8;
  UScriptStruct *pUVar9;
  FAnimSubsystem_Tag *this_00;
  USkeletalMeshComponent *pUVar10;
  ForElementType<UAnimInstance_const_*> FVar11;
  void *_Dst;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_df8 [32];
  undefined1 local_da7 [7];
  undefined1 local_da0 [8];
  UAnimInstance *local_d98;
  undefined1 local_d90 [8];
  ForElementType<UAnimInstance_const_*> local_d88;
  int local_980;
  int local_97c;
  undefined1 local_978 [2048];
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> local_178;
  undefined4 local_170;
  int local_16c;
  TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_168;
  undefined8 uStack_148;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_df8;
  if (param_2 != (UAnimInstance *)0x0) {
    local_16c = 0x80;
    local_178 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0;
    local_170 = 0;
    local_980 = 0;
    local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    local_d88.SecondaryData = (ForElementType<UAnimInstance_const_*>)0x0;
    local_97c = 0x80;
    local_168._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_148 = _UNK_150631d98;
    iVar5 = 0;
    local_da0 = (undefined1  [8])param_2;
    if ((&local_d88 <= (ForElementType<UAnimInstance_const_*> *)local_da0) &&
       (local_da0 < &local_d88.SecondaryData)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FAnimNode_PoseSearchHistoryCollector_Base *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = local_980;
      if (local_980 == local_97c) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>_>
                          (0x808,&local_d88,&local_97c);
      }
    }
    local_980 = iVar5 + 1;
    FVar11 = (ForElementType<UAnimInstance_const_*>)&local_d88;
    if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
      FVar11 = local_d88.SecondaryData;
    }
    *(undefined1 (*) [8])((longlong)FVar11 + (longlong)iVar5 * 8) = local_da0;
    TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::Emplace<UAnimInstance_const_*_const_&>
              ((TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)local_978,(UAnimInstance **)local_d90,(bool *)local_da0);
    while (local_980 != 0) {
      if ((local_980 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FAnimNode_PoseSearchHistoryCollector_Base *)(*pcVar3)();
        return pFVar7;
      }
      FVar11 = (ForElementType<UAnimInstance_const_*>)&local_d88;
      if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
        FVar11 = local_d88.SecondaryData;
      }
      lVar2 = (longlong)(local_980 + -1) * 8;
      this = *(UAnimInstance **)(lVar2 + (longlong)FVar11);
      FVar11 = (ForElementType<UAnimInstance_const_*>)&local_d88;
      if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
        FVar11 = local_d88.SecondaryData;
      }
      _Dst = (void *)(lVar2 + (longlong)FVar11);
      iVar5 = (local_980 - (local_980 + -1)) + -1;
      if (iVar5 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
      }
      local_980 = local_980 + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>_>
                (8,8,&local_d88,local_980,&local_97c);
      pIVar8 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
      if (pIVar8 != (IAnimClassInterface *)0x0) {
        pcVar3 = *(code **)((longlong)*pIVar8 + 0xc0);
        pUVar9 = FAnimSubsystem_Tag::StaticStruct();
        this_00 = (FAnimSubsystem_Tag *)(*pcVar3)(pIVar8,pUVar9);
        if (this_00 != (FAnimSubsystem_Tag *)0x0) {
          pUVar9 = FAnimNode_PoseSearchHistoryCollector_Base::StaticStruct();
          pFVar7 = (FAnimNode_PoseSearchHistoryCollector_Base *)
                   FAnimSubsystem_Tag::FindNodeByTag_Internal(this_00,param_1,this,pUVar9);
          if (pFVar7 != (FAnimNode_PoseSearchHistoryCollector_Base *)0x0) {
            if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
              FMemory::Free((void *)local_d88.SecondaryData);
            }
            local_38 = 0;
            if (local_40 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_40);
            }
            local_170 = 0;
            if (local_16c != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                        (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
                                   *)local_978,0,&local_16c);
            }
            iVar5 = local_168.MaxBits;
            uStack_148 = 0xffffffff;
            local_168._24_8_ = (ulonglong)(uint)local_168.MaxBits << 0x20;
            if (0x80 < (uint)iVar5) {
              local_168.NumBits = 0;
              local_168.MaxBits = 0x80;
              TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Realloc
                        (&local_168,0);
            }
            if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
            }
            if (local_178 ==
                (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
              return pFVar7;
            }
            FMemory::Free((void *)local_178);
            return pFVar7;
          }
        }
      }
      pUVar10 = UAnimInstance::GetSkelMeshComponentChecked(this);
      pFVar12 = (pUVar10->LinkedInstances).AllocatorInstance.Data;
      iVar5 = (pUVar10->LinkedInstances).ArrayNum;
      pFVar1 = pFVar12 + (longlong)iVar5 * 8;
      while( true ) {
        if ((pUVar10->LinkedInstances).ArrayNum != iVar5) {
          local_da7[0] = 0;
          `TCheckedPointerIterator<UAnimInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_da7);
        }
        if (pFVar12 == pFVar1) break;
        local_d98 = *(UAnimInstance **)pFVar12;
        TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        ::Emplace<UAnimInstance_const_*_const_&>
                  ((TSet<UAnimInstance_const_*,DefaultKeyFuncs<UAnimInstance_const_*,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)local_978,(UAnimInstance **)(local_d90 + 4),(bool *)&local_d98);
        FVar11 = (ForElementType<UAnimInstance_const_*>)&local_d88;
        if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
          FVar11 = local_d88.SecondaryData;
        }
        if ((ulonglong)FVar11 <= &local_d98) {
          FVar11 = (ForElementType<UAnimInstance_const_*>)&local_d88;
          if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
            FVar11 = local_d88.SecondaryData;
          }
          if ((&local_d98 < (UAnimInstance **)((longlong)FVar11 + (longlong)local_97c * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FAnimNode_PoseSearchHistoryCollector_Base *)(*pcVar3)();
            return pFVar7;
          }
        }
        iVar6 = local_980;
        if (local_980 == local_97c) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>_>
                            (0x808,&local_d88,&local_97c);
        }
        local_980 = iVar6 + 1;
        FVar11 = (ForElementType<UAnimInstance_const_*>)&local_d88;
        if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
          FVar11 = local_d88.SecondaryData;
        }
        *(UAnimInstance **)((longlong)FVar11 + (longlong)iVar6 * 8) = local_d98;
        pFVar12 = pFVar12 + 8;
      }
    }
    if (local_d88.SecondaryData != (ForElementType<UAnimInstance_const_*>)0x0) {
      FMemory::Free((void *)local_d88.SecondaryData);
    }
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    TSparseArray<TSparseSetElement<UAnimInstance_const_*>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<UAnimInstance_const_*>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ((TSparseArray<TSparseSetElement<UAnimInstance_const_*>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *)local_978);
  }
  return (FAnimNode_PoseSearchHistoryCollector_Base *)0x0;
}

// GetDatabaseTags @ 14a92b890

void __cdecl
UPoseSearchLibrary::GetDatabaseTags
          (UPoseSearchDatabase *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  if (param_1 != (UPoseSearchDatabase *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2,&param_1->Tags);
    return;
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  return;
}

// GetPrivateStaticClass @ 14a92c050

UClass * __cdecl UPoseSearchLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchLibrary",
               &Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchLibrary.InnerSingleton;
}

// IsAnimationAssetLooping @ 14a92f600

void __cdecl UPoseSearchLibrary::IsAnimationAssetLooping(UObject *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      *param_2 = (bool)param_1[4].field_0xc;
      return;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UBlendSpace_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      *param_2 = (bool)param_1[4].field_0x22;
      return;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        bVar3 = (bool)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
        *param_2 = bVar3;
        return;
      }
    }
  }
  *param_2 = false;
  return;
}

// MotionMatch @ 14a9304d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSearchResult * __cdecl
UPoseSearchLibrary::MotionMatch
          (FSearchResult *__return_storage_ptr__,TArrayView<UObject_const_*,int> *param_1,
          TArrayView<FName_const_,int> *param_2,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *param_3,
          TArrayView<UObject_const_*,int> *param_4,FPoseSearchContinuingProperties *param_5,
          FPoseSearchFutureProperties *param_6,FPoseSearchEvent *param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStackY_1f8 [32];
  TArrayView<UObject_const_*,int> local_1b8;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> local_1a8;
  TArrayView<FName_const_,int> local_198;
  TArrayView<UObject_const_*,int> local_188;
  FSearchResults_Single local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_178);
  local_1b8.DataPtr = param_4->DataPtr;
  local_1b8.ArrayNum = param_4->ArrayNum;
  local_1b8._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_1a8.DataPtr = param_3->DataPtr;
  local_1a8.ArrayNum = param_3->ArrayNum;
  local_1a8._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_198.DataPtr = param_2->DataPtr;
  local_198.ArrayNum = param_2->ArrayNum;
  local_198._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_188.DataPtr = param_1->DataPtr;
  local_188.ArrayNum = param_1->ArrayNum;
  local_188._12_4_ = *(undefined4 *)&param_1->field_0xc;
  MotionMatch(&local_188,&local_198,&local_1a8,&local_1b8,param_5,param_6,param_7,
              (FSearchResults *)&local_178);
  UE::Core::Private::Function::CheckCallable((void *)local_178._padding_);
  plVar2 = &local_178._padding_;
  if ((longlong *)local_178._padding_ != (longlong *)0x0) {
    plVar2 = (longlong *)local_178._padding_;
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
  (*(code *)local_178._padding_)(__return_storage_ptr__,uVar1);
  UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_178);
  return __return_storage_ptr__;
}

// MotionMatch @ 14a930600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPoseSearchLibrary::MotionMatch
          (FSearchContext *param_1,TArrayView<UObject_const_*,int> *param_2,
          FPoseSearchContinuingProperties *param_3,FSearchResults *param_4)

{
  int *piVar1;
  TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject **ppUVar3;
  float fVar4;
  EPoseSearchInterruptMode EVar5;
  FScriptContainerElement *_Src;
  TObjectPtr<UPoseSearchSchema_const_>_u_0 TVar6;
  longlong *plVar7;
  FSearchContext *pFVar8;
  code *pcVar9;
  FWeakObjectPtr FVar10;
  float fVar11;
  bool bVar12;
  ForAnyElementType _Src_00;
  FSearchResults *pFVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  UClass *pUVar18;
  longlong lVar19;
  UPoseSearchDatabase *pUVar20;
  UObject *pUVar21;
  TArrayView<float_const_,int> *pTVar22;
  uint uVar23;
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *pTVar24;
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *pTVar25;
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *pTVar26;
  undefined1 *puVar27;
  longlong *plVar28;
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *pTVar29;
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *pTVar30;
  FSearchResult *pFVar31;
  UObject **ppUVar32;
  FSearchResult *pFVar33;
  FSearchResults *pFVar34;
  FSearchContext *pFVar35;
  FDatabasePoseIdx *pFVar36;
  longlong lVar37;
  FSearchContext *pFVar38;
  undefined1 auStackY_13f8 [32];
  undefined1 local_13b8;
  undefined1 local_13b7 [7];
  FSearchContext *local_13b0;
  ForAnyElementType local_13a8;
  int local_13a0;
  int local_139c;
  undefined1 local_1398 [8];
  undefined4 uStack_1390;
  FPoseSearchCost FStack_138c;
  int local_1388;
  float fStack_1384;
  uint local_1380;
  UPoseSearchDatabase *local_1378;
  undefined1 local_1370 [8];
  TObjectPtr<UPoseSearchSchema_const_>_u_0 local_1368;
  FSearchResults *local_1360;
  int iStack_1358;
  undefined4 uStack_1354;
  UPoseSearchDatabase *local_1350;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *local_1348;
  TObjectPtr<UPoseSearchSchema_const_>_u_0 local_1340;
  TObjectPtr<UPoseSearchSchema_const_>_u_0 *local_1338;
  TObjectPtr<UPoseSearchSchema_const_>_u_0 local_1330;
  UPoseSearchDatabase *local_1328;
  FPoseSearchContinuingProperties *local_1320;
  UPoseSearchDatabase *local_1318;
  UPoseSearchDatabase **local_1310;
  int local_1308;
  FWeakObjectPtr local_1304 [3];
  FSearchContext *local_12e8;
  int iStack_12e0;
  undefined4 uStack_12dc;
  TArrayView<UObject_const_*,int> local_12d8;
  TArrayView<UObject_const_*,int> local_12c8;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int> local_12b8;
  TArrayView<FChooserEvaluationContext_*_const,int> local_12a8;
  TArrayView<float_const_,int> local_1298;
  UObject **local_1288;
  undefined8 uStack_1280;
  ForAnyElementType local_1278 [2];
  TArrayView<float_const_,int> local_1268;
  undefined1 local_1258 [168];
  void *local_11b0;
  undefined4 local_11a8;
  ForAnyElementType local_1198;
  undefined1 local_1178 [768];
  undefined1 *local_e78;
  undefined4 local_e70;
  undefined4 local_e6c;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  ForElementType<FSetElementId> local_e28;
  int local_e20;
  undefined1 local_e18 [1728];
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *local_758;
  int local_750;
  undefined4 local_74c;
  undefined1 local_748 [1728];
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_13f8;
  local_1348 = (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                *)0x0;
  if ((param_1->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
    local_1348 = param_1->AssetsToConsider;
  }
  ppUVar32 = param_2->DataPtr;
  uStack_1280 = *(undefined8 *)&param_2->ArrayNum;
  param_1->bIsContinuingInteraction = param_3->bIsContinuingInteraction;
  ppUVar3 = ppUVar32 + param_2->ArrayNum;
  local_13b0 = param_1;
  local_1320 = param_3;
  local_1360 = param_4;
  local_1288 = ppUVar32;
  for (; ppUVar32 != ppUVar3; ppUVar32 = ppUVar32 + 1) {
    pUVar21 = *ppUVar32;
    if (pUVar21 == (UObject *)0x0) {
LAB_14a93088b:
      bVar14 = true;
      goto LAB_14a9306f6;
    }
    pUVar18 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
    lVar37 = *(longlong *)&pUVar21->field_0x10;
    iVar17 = (int)pUVar18->_padding_;
    if ((*(int *)(lVar37 + 0x38) < iVar17) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar37 + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a93088b;
  }
  bVar14 = false;
LAB_14a9306f6:
  local_12d8.DataPtr = param_2->DataPtr;
  local_12d8.ArrayNum = param_2->ArrayNum;
  local_12d8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_74c = 8;
  local_758 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
               *)0x0;
  local_750 = 0;
  local_88 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
              *)0x0;
  local_80 = 0;
  local_7c = 8;
  UE::PoseSearch::PopulateSearches
            (&local_12d8,param_1,(FAssetsToSearchPerDatabase *)local_e18,bVar14);
  local_12c8.DataPtr = param_2->DataPtr;
  local_12c8.ArrayNum = param_2->ArrayNum;
  local_12c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UE::PoseSearch::PopulateContinuingPoseSearches
            (param_3,&local_12c8,param_1,(FAssetsToSearchPerDatabase *)local_748,bVar14);
  iVar17 = local_80;
  fVar11 = __real_7f7fffff;
  lVar37 = (longlong)local_80;
  pTVar29 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
             *)local_748;
  if (local_88 !=
      (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
       *)0x0) {
    pTVar29 = local_88;
  }
  local_e78 = (undefined1 *)0x0;
  pTVar24 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
             *)local_748;
  if (local_88 !=
      (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
       *)0x0) {
    pTVar24 = local_88;
  }
  local_e70 = 0;
  local_e58 = ___xmm_00000000ffffffff0000002000000000;
  uStack_e50 = _UNK_150631d78;
  local_e6c = 0x10;
  local_e60 = 0;
  local_e28.Data = (FSetElementId *)0x0;
  local_e20 = 0;
  while( true ) {
    if (local_80 != iVar17) {
      local_13b8 = 0;
      `TCheckedPointerIterator<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_13b8);
    }
    iVar16 = local_750;
    if (pTVar29 == pTVar24 + lVar37) break;
    pUVar20 = *(UPoseSearchDatabase **)pTVar29;
    if ((pUVar20 == (UPoseSearchDatabase *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Database",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                            ,0x5b2,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    EVar5 = param_3->InterruptMode;
    if ((EVar5 == DoNotInterrupt) || (EVar5 == InterruptOnDatabaseChange)) {
LAB_14a9308dd:
      fVar4 = param_3->PlayingAssetAccumulatedTime;
      local_1398._0_4_ = 0xffffffff;
      local_1398._4_4_ = 0;
      uStack_1390 = 0;
      FStack_138c.TotalCost = 3.4028235e+38;
      local_1388 = -1;
      fStack_1384 = 3.4028235e+38;
      local_1380 = local_1380 & 0xffffff00;
      if ((fVar4 == fVar11) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsAssetTimeValid(InAssetTime)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                              ,0x4b,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fStack_1384 = fVar4;
      local_1398._0_4_ =
           UPoseSearchDatabase::GetPoseIndex
                     (pUVar20,(param_3->PlayingAsset).field0_0x0.DebugPtr,
                      param_3->PlayingAssetAccumulatedTime,param_3->bIsPlayingAssetMirrored,
                      &param_3->PlayingAssetBlendParameters);
      local_1350 = pUVar20;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar20 == (UPoseSearchDatabase *)0x0)) {
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_1398 + 4),(FObjectPtr)&local_1350);
        local_1378 = pUVar20;
        if ((pUVar20 == (UPoseSearchDatabase *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                                ,0x41,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar20);
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_1398 + 4),(FObjectPtr)&local_1350);
        local_1378 = pUVar20;
      }
      uVar23 = ((uint)((ulonglong)local_1378 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1378 >> 4))
               * -0x7a143595;
      uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
      local_1318 = local_1378;
      iVar16 = TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               ::FindIndexByHash<UObject_const_*>
                         ((TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)local_1178,uVar23 >> 0x10 ^ uVar23,(UObject **)&local_1318);
      if (iVar16 != -1) {
        puVar27 = local_1178;
        if (local_e78 != (undefined1 *)0x0) {
          puVar27 = local_e78;
        }
        if (((puVar27 + (longlong)iVar16 * 0x30 != (undefined1 *)0x0) &&
            (puVar27 + (longlong)iVar16 * 0x30 != &DAT_fffffffffffffff8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Find(Object)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                                ,0x42,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      local_1310 = &local_1378;
      TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::Emplace<TKeyInitializer<UObject_const_*_const_&>_>
                ((TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                  *)local_1178,(TKeyInitializer<UObject_const_*_const_&> *)local_1370,
                 (bool *)&local_1310);
      puVar27 = local_1178;
      if (local_e78 != (undefined1 *)0x0) {
        puVar27 = local_e78;
      }
      lVar19 = (longlong)(int)local_1370._0_4_;
      *(ulonglong *)(puVar27 + lVar19 * 0x30 + 8) = CONCAT44(local_1398._4_4_,local_1398._0_4_);
      *(ulonglong *)((longlong)(puVar27 + lVar19 * 0x30 + 8) + 8) =
           CONCAT44(FStack_138c.TotalCost,uStack_1390);
      *(ulonglong *)(puVar27 + lVar19 * 0x30 + 0x18) = CONCAT44(fStack_1384,local_1388);
      *(uint *)(puVar27 + lVar19 * 0x30 + 0x20) = local_1380;
      local_1368 = (TObjectPtr<UPoseSearchSchema_const_>_u_0)(pUVar20->Schema).field0_0x0.DebugPtr;
      if ((local_1368.DebugPtr == (UPoseSearchSchema *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                              ,0x4b,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar23 = ((uint)((ulonglong)local_1368.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_1368.DebugPtr >> 4)) * -0x7a143595;
      uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
      local_1340 = local_1368;
      iVar16 = TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
               ::FindIndexByHash<UObject_const_*>
                         ((TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)local_1178,uVar23 >> 0x10 ^ uVar23,(UObject **)&local_1340.DebugPtr);
      if (iVar16 == -1) {
LAB_14a930b6c:
        local_1338 = &local_1368;
        TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
        ::Emplace<TKeyInitializer<UObject_const_*_const_&>_>
                  ((TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                    *)local_1178,(TKeyInitializer<UObject_const_*_const_&> *)(local_1370 + 4),
                   (bool *)&local_1338);
        puVar27 = local_1178;
        if (local_e78 != (undefined1 *)0x0) {
          puVar27 = local_e78;
        }
        pFVar36 = (FDatabasePoseIdx *)(puVar27 + (longlong)(int)local_1370._4_4_ * 0x30 + 8);
        pFVar36->PoseIdx = local_1398._0_4_;
        (pFVar36->Database).WeakPtr.ObjectIndex = local_1398._4_4_;
        *(ulonglong *)&(pFVar36->Database).WeakPtr.ObjectSerialNumber =
             CONCAT44(FStack_138c.TotalCost,uStack_1390);
        FVar10.ObjectSerialNumber = (int)fStack_1384;
        FVar10.ObjectIndex = local_1388;
        pFVar36[1].Database.WeakPtr = FVar10;
        pFVar36[2].PoseIdx = local_1380;
      }
      else {
        puVar27 = local_1178;
        if (local_e78 != (undefined1 *)0x0) {
          puVar27 = local_e78;
        }
        if ((puVar27 + (longlong)iVar16 * 0x30 == (undefined1 *)0x0) ||
           (pFVar36 = (FDatabasePoseIdx *)(puVar27 + (longlong)iVar16 * 0x30 + 8),
           pFVar36 == (FDatabasePoseIdx *)0x0)) goto LAB_14a930b6c;
      }
      EVar5 = param_3->InterruptMode;
      if (EVar5 == DoNotInterrupt) {
LAB_14a930c11:
        bVar14 = false;
      }
      else if ((EVar5 == InterruptOnDatabaseChange) ||
              (EVar5 == InterruptOnDatabaseChangeAndInvalidateContinuingPose)) {
        pTVar26 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                   *)local_e18;
        if (local_758 !=
            (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
             *)0x0) {
          pTVar26 = local_758;
        }
        pTVar30 = pTVar26 + local_750;
        for (; pTVar26 != pTVar30; pTVar26 = pTVar26 + 1) {
          if (*(UPoseSearchDatabase **)pTVar26 == pUVar20) goto LAB_14a930c93;
        }
        pTVar26 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                   *)0x0;
LAB_14a930c93:
        bVar14 = pTVar26 ==
                 (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                  *)0x0;
      }
      else {
        if ((EVar5 != ForceInterrupt) && (EVar5 != ForceInterruptAndInvalidateContinuingPose)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                              ,0x188,L"");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          goto LAB_14a930c11;
        }
        bVar14 = true;
      }
      if ((local_1398._0_4_ != -1) && (!bVar14)) {
        UE::PoseSearch::FSearchContext::UpdateContinuingPoseSearchResult
                  (param_1,(FSearchResult *)local_1398,pFVar36);
        UPoseSearchDatabase::SearchContinuingPose(pUVar20,param_1,local_1360);
      }
    }
    else {
      if (EVar5 != InterruptOnDatabaseChangeAndInvalidateContinuingPose) {
        if (EVar5 != ForceInterrupt) {
          if (EVar5 == ForceInterruptAndInvalidateContinuingPose) goto LAB_14a930c3f;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                              ,0x19e,L"");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        goto LAB_14a9308dd;
      }
      pTVar26 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                 *)local_e18;
      if (local_758 !=
          (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
           *)0x0) {
        pTVar26 = local_758;
      }
      pTVar30 = pTVar26 + local_750;
      for (; (pTVar25 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                         *)0x0, pTVar26 != pTVar30 &&
             (pTVar25 = pTVar26, *(UPoseSearchDatabase **)pTVar26 != pUVar20));
          pTVar26 = pTVar26 + 1) {
      }
      if (pTVar25 !=
          (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
           *)0x0) goto LAB_14a9308dd;
    }
LAB_14a930c3f:
    pTVar29 = pTVar29 + 1;
  }
  pTVar2 = &param_1->AssetsToConsider_DEPRECATED;
  pTVar29 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
             *)local_e18;
  if (local_758 !=
      (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
       *)0x0) {
    pTVar29 = local_758;
  }
  pTVar24 = pTVar29 + local_750;
  pFVar38 = param_1;
  do {
    if (local_750 != iVar16) {
      local_13b7[0] = 0;
      `TCheckedPointerIterator<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_13b7);
    }
    pFVar13 = local_1360;
    if (pTVar29 == pTVar24) {
      UE::Core::Private::Function::CheckCallable(*(void **)&local_1360->GetBestResult);
      pcVar9 = *(code **)&pFVar13->GetBestResult;
      plVar7 = *(longlong **)&(pFVar13->GetBestResult).field_0x28;
      plVar28 = (longlong *)&(pFVar13->GetBestResult).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar28 = plVar7;
      }
      (**(code **)(*plVar28 + 8))();
      (*pcVar9)(&local_1308);
      if (((local_1308 != -1) &&
          (bVar15 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                               local_1304,(void *)0x0), bVar12 = GVarAnimMotionMatchDrawMatchEnable,
          bVar14 = GVarAnimMotionMatchDrawQueryEnable, !bVar15)) &&
         ((GVarAnimMotionMatchDrawMatchEnable != false ||
          (GVarAnimMotionMatchDrawQueryEnable != false)))) {
        pUVar20 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(local_1304);
        pFVar34 = (FSearchResults *)(pFVar38->PoseHistories).AllocatorInstance.SecondaryData.Data;
        iStack_1358 = (pFVar38->PoseHistories).ArrayNum;
        if (pFVar34 == (FSearchResults *)0x0) {
          pFVar34 = (FSearchResults *)&pFVar38->PoseHistories;
        }
        if ((iStack_1358 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uStack_1354 = uStack_1280._4_4_;
        pFVar8 = (FSearchContext *)(local_13b0->AnimContexts).AllocatorInstance.SecondaryData.Data;
        iVar17 = (local_13b0->AnimContexts).ArrayNum;
        pFVar35 = local_13b0;
        if (pFVar8 != (FSearchContext *)0x0) {
          pFVar35 = pFVar8;
        }
        local_1360 = pFVar34;
        if ((iVar17 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_12b8._12_4_ = uStack_1354;
        local_12b8.ArrayNum = iStack_1358;
        local_12a8._12_4_ = uStack_12dc;
        local_12a8.ArrayNum = iVar17;
        local_12b8.DataPtr = (IPoseHistory **)local_1360;
        local_12e8 = pFVar35;
        iStack_12e0 = iVar17;
        local_12a8.DataPtr = (FChooserEvaluationContext **)pFVar35;
        UE::PoseSearch::FDebugDrawParams::FDebugDrawParams
                  ((FDebugDrawParams *)local_1258,&local_12a8,&local_12b8,&pFVar38->RoleToIndex,
                   pUVar20);
        if (bVar12 != false) {
          UE::PoseSearch::FDebugDrawParams::DrawFeatureVector
                    ((FDebugDrawParams *)local_1258,local_1308);
        }
        pFVar38 = local_13b0;
        if (bVar14 != false) {
          pUVar21 = FWeakObjectPtr::Get(local_1304);
          pFVar38 = local_13b0;
          pTVar22 = UE::PoseSearch::FSearchContext::GetOrBuildQuery
                              (local_13b0,&local_1268,*(UPoseSearchSchema **)&pUVar21[1].field_0x8);
          local_1298.DataPtr = pTVar22->DataPtr;
          local_1298.ArrayNum = pTVar22->ArrayNum;
          local_1298._12_4_ = *(undefined4 *)&pTVar22->field_0xc;
          UE::PoseSearch::FDebugDrawParams::DrawFeatureVector
                    ((FDebugDrawParams *)local_1258,&local_1298);
        }
        if (local_1198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1198.Data);
        }
        local_11a8 = 0;
        if (local_11b0 != (void *)0x0) {
          FMemory::Free(local_11b0);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                    *)(local_1258 + 0x20));
      }
      TraceMotionMatching(pFVar38,pFVar13,0.0,__real_3f800000,local_1320->InterruptMode);
      if ((pFVar38->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
        pFVar38->AssetsToConsider = local_1348;
      }
      local_e20 = 0;
      TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                  *)local_1178);
      pTVar29 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                 *)local_748;
      if (local_88 !=
          (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
           *)0x0) {
        pTVar29 = local_88;
      }
      DestructItems<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int>
                (pTVar29,local_80);
      pTVar29 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
                 *)local_e18;
      if (local_758 !=
          (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
           *)0x0) {
        pTVar29 = local_758;
      }
      DestructItems<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int>
                (pTVar29,local_750);
      return;
    }
    pUVar20 = *(UPoseSearchDatabase **)pTVar29;
    if ((pUVar20 == (UPoseSearchDatabase *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Database",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                            ,0x5d0,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_13a0 = (param_1->AssetsToConsider_DEPRECATED).ArrayNum;
    lVar37 = (longlong)local_13a0;
    _Src = (pTVar2->AllocatorInstance).Data;
    local_13a8.Data = (FScriptContainerElement *)0x0;
    if (local_13a0 == 0) {
      local_139c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_13a0,0,&local_13a8,local_13a0,&local_139c);
      memcpy(local_13a8.Data,_Src,lVar37 << 3);
    }
    if (pTVar2 != (TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *)local_1278) {
      iVar17 = (param_1->AssetsToConsider_DEPRECATED).ArrayMax;
      piVar1 = &(param_1->AssetsToConsider_DEPRECATED).ArrayMax;
      (param_1->AssetsToConsider_DEPRECATED).ArrayNum = 0;
      if (iVar17 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,iVar17,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    TVar6 = (TObjectPtr<UPoseSearchSchema_const_>_u_0)(pUVar20->Schema).field0_0x0.DebugPtr;
    if ((TVar6.DebugPtr == (UPoseSearchSchema *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                            ,0x58,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar23 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
    uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
    local_1330 = TVar6;
    iVar17 = TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
             ::FindIndexByHash<UObject_const_*>
                       ((TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                         *)local_1178,uVar23 >> 0x10 ^ uVar23,(UObject **)&local_1330.DebugPtr);
    if (iVar17 == -1) {
LAB_14a930e6a:
      pFVar33 = &`public:_struct_UE::PoseSearch::FSearchResult_const&___ptr64___cdecl_UE::PoseSearch::FCachedContinuingPoseSearchResults::FindOrDefault(UObject_const*___ptr64)const___ptr64'
                 ::__l2::DefaultSearchResult;
    }
    else {
      puVar27 = local_1178;
      if (local_e78 != (undefined1 *)0x0) {
        puVar27 = local_e78;
      }
      if ((puVar27 + (longlong)iVar17 * 0x30 == (undefined1 *)0x0) ||
         (pFVar33 = (FSearchResult *)(puVar27 + (longlong)iVar17 * 0x30 + 8),
         pFVar33 == (FSearchResult *)0x0)) goto LAB_14a930e6a;
    }
    uVar23 = ((uint)((ulonglong)pUVar20 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar20 >> 4)) *
             -0x7a143595;
    uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
    local_1328 = pUVar20;
    iVar17 = TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
             ::FindIndexByHash<UObject_const_*>
                       ((TSet<TTuple<UObject_const_*,UE::PoseSearch::FSearchResult>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::PoseSearch::FSearchResult,0>,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                         *)local_1178,uVar23 >> 0x10 ^ uVar23,(UObject **)&local_1328);
    pFVar38 = local_13b0;
    if (iVar17 == -1) {
LAB_14a930edc:
      pFVar31 = &`public:_struct_UE::PoseSearch::FSearchResult_const&___ptr64___cdecl_UE::PoseSearch::FCachedContinuingPoseSearchResults::FindOrDefault(UObject_const*___ptr64)const___ptr64'
                 ::__l2::DefaultSearchResult;
    }
    else {
      puVar27 = local_1178;
      if (local_e78 != (undefined1 *)0x0) {
        puVar27 = local_e78;
      }
      if ((puVar27 + (longlong)iVar17 * 0x30 == (undefined1 *)0x0) ||
         (pFVar31 = (FSearchResult *)(puVar27 + (longlong)iVar17 * 0x30 + 8),
         pFVar31 == (FSearchResult *)0x0)) goto LAB_14a930edc;
    }
    UE::PoseSearch::FSearchContext::UpdateContinuingPoseSearchResult
              (local_13b0,pFVar31,(FDatabasePoseIdx *)pFVar33);
    if (((pFVar38->AssetsToConsider_DEPRECATED).ArrayNum != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("AssetsToConsider_DEPRECATED.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchContext.h"
                            ,0x14c,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar38->AssetsToConsider =
         (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          *)&pTVar29->field_0x8;
    UPoseSearchDatabase::Search(pUVar20,pFVar38,local_1360);
    iVar17 = local_13a0;
    _Src_00.Data = local_13a8.Data;
    if (pTVar2 != (TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *)&local_13a8) {
      lVar37 = (longlong)local_13a0;
      piVar1 = &(param_1->AssetsToConsider_DEPRECATED).ArrayMax;
      (param_1->AssetsToConsider_DEPRECATED).ArrayNum = local_13a0;
      if ((local_13a0 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_13a0,*piVar1,&pTVar2->AllocatorInstance,local_13a0,piVar1);
        if (iVar17 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src_00.Data,lVar37 << 3);
        }
      }
    }
    if (local_13a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13a8.Data);
    }
    pTVar29 = pTVar29 + 1;
  } while( true );
}

// MotionMatch @ 14a931260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchLibrary::MotionMatch
          (UAnimInstance *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          FName param_3,FPoseSearchContinuingProperties *param_4,
          FPoseSearchFutureProperties *param_5,FPoseSearchBlueprintResult *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  ForElementType<UAnimInstance_*> FVar8;
  ForElementType<FName> FVar9;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  FMemMark local_148;
  code *local_120;
  undefined1 *local_118;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  ForElementType<FName> *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  ForElementType<UAnimInstance_*> *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<UObject_const_*,int> local_d8;
  TArrayView<FName_const_,int> local_c8;
  TArrayView<UAnimInstance_*,int> local_b8;
  ForElementType<FName> local_a8;
  int local_80;
  int local_7c;
  ForElementType<UAnimInstance_*> local_78;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_150 = (undefined1  [8])param_1;
  puVar6 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_118 = local_158;
  local_120 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_120,puVar6);
  local_148.Mem = (FMemStackBase *)(pFVar7 + 2);
  local_148.Top = (local_148.Mem)->Top;
  local_148.SavedChunk = *(FTaggedMemory **)(pFVar7 + 4);
  local_148.bPopped = false;
  local_148.NextTopmostMark = *(FMemMark **)(pFVar7 + 5);
  pFVar7[5] = (FTlsAutoCleanup)&local_148;
  *(int *)(pFVar7 + 6) = *(int *)(pFVar7 + 6) + 1;
  local_78.SecondaryData.Data = (UAnimInstance **)0x0;
  local_50 = 0;
  local_4c = 4;
  iVar5 = 0;
  if ((&local_78 <= (ForElementType<UAnimInstance_*> *)local_150) &&
     (local_150 < &local_78.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = local_50;
    if (local_50 == local_4c) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UAnimInstance_*>_>
                        (0x808,&local_78,&local_4c);
    }
  }
  local_50 = iVar5 + 1;
  FVar8.Data = (UAnimInstance **)&local_78;
  if ((ForElementType<UAnimInstance_*> *)local_78.SecondaryData.Data !=
      (ForElementType<UAnimInstance_*> *)0x0) {
    FVar8.Data = local_78.SecondaryData.Data;
  }
  *(undefined1 (*) [8])
   (((ForElementType<UAnimInstance_*> *)FVar8.Data)->InlineData + (longlong)iVar5 * 8) = local_150;
  local_a8.SecondaryData.Data = (FName *)0x0;
  local_80 = 0;
  local_7c = 4;
  iVar5 = 0;
  if ((&local_a8 <
       (ForElementType<FName> *)((longlong)&UE::PoseSearch::DefaultRole.ComparisonIndex.Value + 1))
     && (&UE::PoseSearch::DefaultRole < &local_a8.SecondaryData)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = local_80;
    if (local_80 == local_7c) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FName>_>
                        (0x408,&local_a8,&local_7c);
    }
  }
  local_80 = iVar5 + 1;
  FVar9.Data = (FName *)&local_a8;
  if ((ForElementType<FName> *)local_a8.SecondaryData.Data != (ForElementType<FName> *)0x0) {
    FVar9.Data = local_a8.SecondaryData.Data;
  }
  *(FName *)(((ForElementType<FName> *)FVar9.Data)->InlineData + (longlong)iVar5 * 8) =
       UE::PoseSearch::DefaultRole;
  local_108 = (param_2->AllocatorInstance).Data;
  iStack_100 = param_2->ArrayNum;
  if ((iStack_100 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_80;
  local_f8 = &local_a8;
  if ((ForElementType<FName> *)local_a8.SecondaryData.Data != (ForElementType<FName> *)0x0) {
    local_f8 = (ForElementType<FName> *)local_a8.SecondaryData.Data;
  }
  if ((local_80 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = local_50;
  iStack_f0 = iVar5;
  local_e8 = &local_78;
  if ((ForElementType<UAnimInstance_*> *)local_78.SecondaryData.Data !=
      (ForElementType<UAnimInstance_*> *)0x0) {
    local_e8 = (ForElementType<UAnimInstance_*> *)local_78.SecondaryData.Data;
  }
  if ((local_50 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_d8._12_4_ = uStack_fc;
  local_d8.ArrayNum = iStack_100;
  local_c8._12_4_ = uStack_ec;
  local_c8.ArrayNum = iStack_f0;
  local_d8.DataPtr = (UObject **)local_108;
  iStack_e0 = iVar3;
  local_b8._12_4_ = uStack_dc;
  local_b8.ArrayNum = iVar3;
  local_b8.DataPtr = (UAnimInstance **)local_e8;
  local_c8.DataPtr = (FName *)local_f8;
  MotionMatch(&local_b8,&local_c8,&local_d8,param_3,param_4,param_5,param_6);
  if (local_148.bPopped == false) {
    if (((local_148.Mem)->TopMark != &local_148) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_148.bPopped = true;
    (local_148.Mem)->NumMarks = (local_148.Mem)->NumMarks + -1;
    if (local_148.SavedChunk != (local_148.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_148.Mem,local_148.SavedChunk);
    }
    (local_148.Mem)->Top = local_148.Top;
    (local_148.Mem)->TopMark = local_148.NextTopmostMark;
    local_148.Top = (uchar *)0x0;
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// MotionMatch @ 14a931630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPoseSearchLibrary::MotionMatch
          (TArrayView<UAnimInstance_*,int> *param_1,TArrayView<FName_const_,int> *param_2,
          TArrayView<UObject_const_*,int> *param_3,FName param_4,
          FPoseSearchContinuingProperties *param_5,FPoseSearchFutureProperties *param_6,
          FPoseSearchBlueprintResult *param_7)

{
  UAnimInstance **ppUVar1;
  int iVar2;
  UAnimInstance *pUVar3;
  code *pcVar4;
  UObject **ppUVar5;
  undefined8 uVar6;
  FName *pFVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  FAnimNode_PoseSearchHistoryCollector_Base *pFVar13;
  ForElementType<UE::PoseSearch::IPoseHistory_const_*> FVar14;
  ForElementType<UObject_const_*> FVar15;
  UPoseSearchDatabase *this;
  UPoseSearchFeatureChannel_PermutationTime *this_00;
  FSearchIndex *pFVar16;
  UAnimInstance **ppUVar17;
  longlong lVar18;
  FStaticBasicLogRecord *pFVar19;
  longlong *plVar20;
  UAnimInstance **ppUVar21;
  float fVar22;
  FName local_res20;
  undefined1 auStackY_418 [32];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  FMemMark local_3b0;
  FPoseSearchEvent local_388;
  TArrayView<UObject_const_*,int> *local_370;
  FPoseSearchContinuingProperties *local_368;
  FPoseSearchBlueprintResult *local_360;
  TObjectPtr<UObject>_u_0 local_358;
  undefined4 local_350;
  undefined1 local_34c;
  undefined2 local_34b;
  undefined1 local_349;
  undefined8 local_348;
  double local_340;
  double dStack_338;
  double local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined1 local_31c;
  undefined2 local_31b;
  undefined1 local_319;
  FName local_318;
  void *local_310;
  undefined8 local_308;
  void *local_300;
  undefined8 local_2f8;
  void *local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [32];
  code *local_2c0;
  undefined1 *local_2b8;
  ForElementType<UE::PoseSearch::IPoseHistory_const_*> *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  ForElementType<UObject_const_*> *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  FString local_288;
  TArrayView<UObject_const_*,int> local_278;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> local_268;
  TArrayView<FName_const_,int> local_258;
  TArrayView<UObject_const_*,int> local_248;
  TArrayView<float_const_,int> local_238;
  TArrayView<float_const_,int> local_228;
  ForElementType<UE::PoseSearch::IPoseHistory_const_*> local_218;
  int local_1f0;
  int local_1ec;
  ForElementType<UObject_const_*> local_1e8;
  int local_1c0;
  int local_1bc;
  FSearchResults_Single local_1b8;
  ulonglong local_98;
  
  fVar22 = __real_3f800000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_368 = param_5;
  local_34b = 0;
  local_349 = 0;
  local_31b = 0;
  local_319 = 0;
  local_350 = 0;
  local_34c = 0;
  local_31c = 0;
  local_340 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_338 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_318 = UE::PoseSearch::DefaultRole;
  local_360 = param_7;
  local_348 = 0x3f800000;
  local_358.DebugPtr = (UObject *)0x0;
  local_330 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_328 = 0;
  local_320 = 0x7f7fffff;
  local_310 = (void *)0x0;
  local_308 = 0;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  local_2f0 = (void *)0x0;
  local_2e8 = 0;
  local_res20 = param_4;
  local_370 = param_3;
  FPoseSearchBlueprintResult::operator=(param_7,(FPoseSearchBlueprintResult *)&local_358.ObjectPtr);
  if (local_2f0 != (void *)0x0) {
    FMemory::Free(local_2f0);
  }
  if (local_300 != (void *)0x0) {
    FMemory::Free(local_300);
  }
  if (local_310 != (void *)0x0) {
    FMemory::Free(local_310);
  }
  iVar2 = param_1->ArrayNum;
  if ((iVar2 == 0) || (iVar2 != param_2->ArrayNum)) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    ppUVar21 = param_1->DataPtr;
    ppUVar1 = ppUVar21 + iVar2;
    for (ppUVar17 = ppUVar21; ppUVar17 != ppUVar1; ppUVar17 = ppUVar17 + 1) {
      if (*ppUVar17 == (UAnimInstance *)0x0) {
        if ((byte)LogPoseSearch._0_1_ < 2) {
          return;
        }
        pFVar19 = &::LOG_Static;
LAB_14a931afd:
        UE::Logging::Private::BasicLog<2>(pFVar19,(FLogCategoryBase *)&LogPoseSearch);
        return;
      }
      if (((*ppUVar17)->CurrentSkeleton).field0_0x0.DebugPtr == (USkeleton *)0x0) {
        if ((byte)LogPoseSearch._0_1_ < 2) {
          return;
        }
        pFVar19 = &::LOG_Static;
        goto LAB_14a931afd;
      }
    }
    puVar11 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_2b8 = local_3c8;
    local_2c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar12 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2c0,puVar11);
    local_3b0.Mem = (FMemStackBase *)(pFVar12 + 2);
    local_3b0.Top = (local_3b0.Mem)->Top;
    local_3b0.SavedChunk = *(FTaggedMemory **)(pFVar12 + 4);
    local_3b0.bPopped = false;
    local_3b0.NextTopmostMark = *(FMemMark **)(pFVar12 + 5);
    pFVar12[5] = (FTlsAutoCleanup)&local_3b0;
    *(int *)(pFVar12 + 6) = *(int *)(pFVar12 + 6) + 1;
    local_218.SecondaryData.Data = (IPoseHistory **)0x0;
    local_1f0 = 0;
    local_1ec = 4;
    local_1e8.SecondaryData.Data = (UObject **)0x0;
    local_1c0 = 0;
    local_1bc = 4;
    iVar2 = local_1f0;
    for (; local_1f0 = iVar2, ppUVar21 != ppUVar1; ppUVar21 = ppUVar21 + 1) {
      pUVar3 = *ppUVar21;
      pFVar13 = FindPoseHistoryNode(local_res20,pUVar3);
      if (pFVar13 != (FAnimNode_PoseSearchHistoryCollector_Base *)0x0) {
        if (((pFVar13->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("PoseHistoryPtr.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                                ,0x74,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_3c0 = (undefined1  [8])(pFVar13->PoseHistoryPtr).Object;
        FVar14.Data = (IPoseHistory **)&local_218;
        if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_218.SecondaryData.Data !=
            (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
          FVar14.Data = local_218.SecondaryData.Data;
        }
        if (FVar14.Data <= (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_3c0) {
          FVar14.Data = (IPoseHistory **)&local_218;
          if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_218.SecondaryData.Data
              != (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
            FVar14.Data = local_218.SecondaryData.Data;
          }
          if ((local_3c0 <
               ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)FVar14.Data)->InlineData +
               (longlong)local_1ec * 8) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_1f0 == local_1ec) {
          local_1f0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_>
                                (0x808,&local_218,&local_1ec);
        }
        lVar18 = (longlong)local_1f0;
        FVar14.Data = (IPoseHistory **)&local_218;
        if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_218.SecondaryData.Data !=
            (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
          FVar14.Data = local_218.SecondaryData.Data;
        }
        local_1f0 = local_1f0 + 1;
        *(undefined1 (*) [8])
         (((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)FVar14.Data)->InlineData +
         lVar18 * 8) = local_3c0;
      }
      FVar15.Data = (UObject **)&local_1e8;
      if ((ForElementType<UObject_const_*> *)local_1e8.SecondaryData.Data !=
          (ForElementType<UObject_const_*> *)0x0) {
        FVar15.Data = local_1e8.SecondaryData.Data;
      }
      local_3b8 = (undefined1  [8])pUVar3;
      if (FVar15.Data <= (ForElementType<UObject_const_*> *)local_3b8) {
        FVar15.Data = (UObject **)&local_1e8;
        if ((ForElementType<UObject_const_*> *)local_1e8.SecondaryData.Data !=
            (ForElementType<UObject_const_*> *)0x0) {
          FVar15.Data = local_1e8.SecondaryData.Data;
        }
        if ((local_3b8 <
             ((ForElementType<UObject_const_*> *)FVar15.Data)->InlineData + (longlong)local_1bc * 8)
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_1c0 == local_1bc) {
        local_1c0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UObject_const_*>_>
                              (0x808,&local_1e8,&local_1bc);
      }
      FVar15.Data = (UObject **)&local_1e8;
      if ((ForElementType<UObject_const_*> *)local_1e8.SecondaryData.Data !=
          (ForElementType<UObject_const_*> *)0x0) {
        FVar15.Data = local_1e8.SecondaryData.Data;
      }
      lVar18 = (longlong)local_1c0;
      local_1c0 = local_1c0 + 1;
      *(undefined1 (*) [8])
       (((ForElementType<UObject_const_*> *)FVar15.Data)->InlineData + lVar18 * 8) = local_3b8;
      param_3 = local_370;
      iVar2 = local_1f0;
    }
    if (iVar2 == param_1->ArrayNum) {
      ppUVar5 = param_3->DataPtr;
      uVar6._0_4_ = param_3->ArrayNum;
      uVar6._4_4_ = *(undefined4 *)&param_3->field_0xc;
      local_2a8 = &local_218;
      if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_218.SecondaryData.Data !=
          (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
        local_2a8 = (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)
                    local_218.SecondaryData.Data;
      }
      local_388.bEnablePoseFilters = false;
      local_388.bUsePlayRateRangeOverride = true;
      local_388._padding_ = 0;
      local_388.EventTag.TagName.ComparisonIndex.Value = 0;
      local_388.EventTag.TagName.Number = 0;
      local_388.TimeToEvent = 0.0;
      local_388.PlayRateRangeOverride._0_4_ = 0x3f800000;
      local_388.PlayRateRangeOverride._4_4_ = 0x3f800000;
      if ((iVar2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = local_1c0;
      pFVar7 = param_2->DataPtr;
      uVar8._0_4_ = param_2->ArrayNum;
      uVar8._4_4_ = *(undefined4 *)&param_2->field_0xc;
      local_298 = &local_1e8;
      if ((ForElementType<UObject_const_*> *)local_1e8.SecondaryData.Data !=
          (ForElementType<UObject_const_*> *)0x0) {
        local_298 = (ForElementType<UObject_const_*> *)local_1e8.SecondaryData.Data;
      }
      iStack_2a0 = iVar2;
      if ((local_1c0 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_290 = iVar9;
      UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_1b8);
      local_268._12_4_ = uStack_29c;
      local_268.ArrayNum = iStack_2a0;
      local_268.DataPtr = (IPoseHistory **)local_2a8;
      local_248._12_4_ = uStack_28c;
      local_248.ArrayNum = iStack_290;
      local_248.DataPtr = (UObject **)local_298;
      local_278.DataPtr = ppUVar5;
      local_278._8_8_ = uVar6;
      local_258.DataPtr = pFVar7;
      local_258._8_8_ = uVar8;
      MotionMatch(&local_248,&local_258,&local_268,&local_278,local_368,param_6,&local_388,
                  (FSearchResults *)&local_1b8);
      UE::Core::Private::Function::CheckCallable((void *)local_1b8._padding_);
      plVar20 = &local_1b8._padding_;
      if ((longlong *)local_1b8._padding_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_1b8._padding_;
      }
      (**(code **)(*plVar20 + 8))();
      (*(code *)local_1b8._padding_)(local_2e0);
      UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_1b8);
      if ((local_2e0._0_4_ != -1) &&
         (bVar10 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                             ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                              (local_2e0 + 4),(void *)0x0), !bVar10)) {
        this = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_2e0 + 4));
        if ((this == (UPoseSearchDatabase *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Database",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                                ,0x4ed,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((((param_6->Animation).field0_0x0.DebugPtr != (UObject *)0x0) &&
             (0.0 < param_6->IntervalTime)) &&
            (this_00 = UPoseSearchSchema::
                       FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>
                                 ((this->Schema).field0_0x0.DebugPtr),
            this_00 != (UPoseSearchFeatureChannel_PermutationTime *)0x0)) &&
           (pFVar16 = UPoseSearchDatabase::GetSearchIndex(this), (int)pFVar16->_padding_ != 0)) {
          pFVar16 = UPoseSearchDatabase::GetSearchIndex(this);
          UE::PoseSearch::FSearchIndex::GetPoseValues(pFVar16,&local_238,local_2e0._0_4_);
          local_228.DataPtr = local_238.DataPtr;
          local_228.ArrayNum = local_238.ArrayNum;
          local_228._12_4_ = local_238._12_4_;
          fVar22 = UPoseSearchFeatureChannel_PermutationTime::GetPermutationTime(this_00,&local_228)
          ;
          fVar22 = fVar22 / param_6->IntervalTime;
        }
        FPoseSearchBlueprintResult::InitFrom(local_360,(FSearchResult *)local_2e0,fVar22);
      }
    }
    else if (1 < (byte)LogPoseSearch._0_1_) {
      ::FName::ToString(&local_res20,&local_288);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
    }
    if (local_3b0.bPopped == false) {
      if (((local_3b0.Mem)->TopMark != &local_3b0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mem.TopMark == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                              ,0x215,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_3b0.bPopped = true;
      (local_3b0.Mem)->NumMarks = (local_3b0.Mem)->NumMarks + -1;
      if (local_3b0.SavedChunk != (local_3b0.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_3b0.Mem,local_3b0.SavedChunk);
      }
      (local_3b0.Mem)->Top = local_3b0.Top;
      (local_3b0.Mem)->TopMark = local_3b0.NextTopmostMark;
    }
  }
  return;
}

// MotionMatch @ 14a931eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UPoseSearchLibrary::MotionMatch
          (TArrayView<UObject_const_*,int> *param_1,TArrayView<FName_const_,int> *param_2,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *param_3,
          TArrayView<UObject_const_*,int> *param_4,FPoseSearchContinuingProperties *param_5,
          FPoseSearchFutureProperties *param_6,FPoseSearchEvent *param_7,FSearchResults *param_8)

{
  undefined8 *puVar1;
  int iVar2;
  ForElementType<FStructView> FVar3;
  code *pcVar4;
  UObject **ppUVar5;
  undefined8 uVar6;
  IPoseHistory **ppIVar7;
  undefined8 uVar8;
  FName *pFVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ForElementType<FStructView> FVar14;
  ForElementType<FChooserEvaluationContext> FVar15;
  uint uVar16;
  uchar *puVar17;
  ForElementType<FStructView> FVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStackY_3b8 [32];
  UObject *local_368 [2];
  UScriptStruct *local_358;
  uchar *puStack_350;
  FPoseSearchContinuingProperties *local_348;
  FPoseSearchFutureProperties *local_340;
  FPoseSearchEvent *local_338;
  TArrayView<UObject_const_*,int> *local_330;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *local_328;
  TArrayView<FName_const_,int> *local_320;
  FSearchResults *local_318;
  ForElementType<FChooserEvaluationContext> local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  TArrayView<UObject_const_*,int> local_2f8;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> local_2e8;
  TArrayView<FName_const_,int> local_2d8;
  TArrayView<FChooserEvaluationContext,int> local_2c8;
  undefined1 local_2b8 [544];
  ForElementType<FChooserEvaluationContext> local_98;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  iVar2 = param_1->ArrayNum;
  local_318 = param_8;
  local_98 = (ForElementType<FChooserEvaluationContext>)0x0;
  local_90 = 0;
  local_348 = param_5;
  local_340 = param_6;
  local_338 = param_7;
  local_8c = 4;
  local_330 = param_4;
  local_328 = param_3;
  local_320 = param_2;
  TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
            ((TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)local_2b8,iVar2,Default);
  uVar19 = 0;
  if (0 < iVar2) {
    lVar21 = 0;
    lVar20 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar19 < local_90) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar15 = (ForElementType<FChooserEvaluationContext>)local_2b8;
      if (local_98 != (ForElementType<FChooserEvaluationContext>)0x0) {
        FVar15 = local_98;
      }
      uVar12 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar17 = (uchar *)((longlong)FVar15 + 0x60) + lVar20;
      local_368[0] = param_1->DataPtr[lVar21];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_368[0] != (UObject *)0x0))
      {
        UE::GC::MarkAsReachable(local_368[0]);
      }
      if (((puVar17 <= local_368) && (local_368 < puVar17 + (longlong)*(int *)(puVar17 + 0x24) * 8))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = *(int *)(puVar17 + 0x20);
      if (iVar13 == *(int *)(puVar17 + 0x24)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FChooserEvaluationInputObject>_>
                           (0x808,(ForElementType<FChooserEvaluationInputObject> *)puVar17,
                            (int *)(puVar17 + 0x24));
      }
      *(int *)(puVar17 + 0x20) = iVar13 + 1;
      *(UObject **)(puVar17 + (longlong)iVar13 * 8) = local_368[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_368[0] != (UObject *)0x0))
      {
        UE::GC::MarkAsReachable(local_368[0]);
      }
      uVar16 = *(int *)(puVar17 + 0x20) - 1;
      uVar12 = 0;
      if ((int)uVar16 < *(int *)(puVar17 + 0x20)) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar17 = puVar17 + (longlong)(*(int *)(puVar17 + 0x20) + -1) * 8;
      local_358 = FChooserEvaluationInputObject::StaticStruct();
      FVar18 = (ForElementType<FStructView>)((longlong)((longlong)FVar15 + 0x10) + lVar20);
      FVar3 = *(ForElementType<FStructView> *)((longlong)FVar18 + 0x40);
      FVar14 = FVar18;
      if (FVar3 != (ForElementType<FStructView>)0x0) {
        FVar14 = FVar3;
      }
      puStack_350 = puVar17;
      if ((ulonglong)FVar14 <= &local_358) {
        FVar14 = FVar18;
        if (FVar3 != (ForElementType<FStructView>)0x0) {
          FVar14 = FVar3;
        }
        if ((&local_358 <
             (UScriptStruct **)
             ((longlong)*(int *)((longlong)FVar18 + 0x4c) * 0x10 + (longlong)FVar14)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar13 = *(int *)((longlong)FVar18 + 0x48);
      if (iVar13 == *(int *)((longlong)FVar18 + 0x4c)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStructView>_>
                           (0x810,(ForElementType<FStructView> *)FVar18,
                            (int *)((longlong)FVar18 + 0x4c));
      }
      *(int *)((longlong)FVar18 + 0x48) = iVar13 + 1;
      if (*(ForElementType<FStructView> *)((longlong)FVar18 + 0x40) !=
          (ForElementType<FStructView>)0x0) {
        FVar18 = *(ForElementType<FStructView> *)((longlong)FVar18 + 0x40);
      }
      uVar19 = uVar19 + 1;
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x88;
      puVar1 = (undefined8 *)((longlong)FVar18 + (longlong)iVar13 * 0x10);
      *puVar1 = local_358;
      puVar1[1] = puStack_350;
      param_5 = local_348;
      param_7 = local_338;
      param_6 = local_340;
    } while (lVar21 < iVar2);
  }
  iVar2 = local_90;
  ppUVar5 = local_330->DataPtr;
  uVar6._0_4_ = local_330->ArrayNum;
  uVar6._4_4_ = *(undefined4 *)&local_330->field_0xc;
  ppIVar7 = local_328->DataPtr;
  uVar8._0_4_ = local_328->ArrayNum;
  uVar8._4_4_ = *(undefined4 *)&local_328->field_0xc;
  pFVar9 = local_320->DataPtr;
  uVar10._0_4_ = local_320->ArrayNum;
  uVar10._4_4_ = *(undefined4 *)&local_320->field_0xc;
  local_308 = (ForElementType<FChooserEvaluationContext>)local_2b8;
  if (local_98 != (ForElementType<FChooserEvaluationContext>)0x0) {
    local_308 = local_98;
  }
  if ((local_90 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_300 = iVar2;
  local_2c8._12_4_ = uStack_2fc;
  local_2c8.ArrayNum = iVar2;
  local_2c8.DataPtr = (FChooserEvaluationContext *)local_308;
  local_2f8.DataPtr = ppUVar5;
  local_2f8._8_8_ = uVar6;
  local_2e8.DataPtr = ppIVar7;
  local_2e8._8_8_ = uVar8;
  local_2d8.DataPtr = pFVar9;
  local_2d8._8_8_ = uVar10;
  MotionMatch(&local_2c8,&local_2d8,&local_2e8,&local_2f8,param_5,param_6,param_7,local_318);
  FVar15 = (ForElementType<FChooserEvaluationContext>)local_2b8;
  if (local_98 != (ForElementType<FChooserEvaluationContext>)0x0) {
    FVar15 = local_98;
  }
  DestructItems<FChooserEvaluationContext,int>((FChooserEvaluationContext *)FVar15,local_90);
  if (local_98 != (ForElementType<FChooserEvaluationContext>)0x0) {
    FMemory::Free((void *)local_98);
  }
  return;
}

// MotionMatch @ 14a932350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UPoseSearchLibrary::MotionMatch
          (TArrayView<UObject_const_*,int> *param_1,TArrayView<FName_const_,int> *param_2,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *param_3,
          TArrayView<UObject_const_*,int> *param_4,FPoseSearchContinuingProperties *param_5,
          float param_6,FPoseSearchEvent *param_7,FSearchResults *param_8)

{
  uchar auVar1 [8];
  uchar (*pauVar2) [8];
  int iVar3;
  ForElementType<FStructView> FVar4;
  code *pcVar5;
  UObject **ppUVar6;
  undefined8 uVar7;
  IPoseHistory **ppIVar8;
  undefined8 uVar9;
  FName *pFVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ForElementType<FStructView> FVar15;
  ForElementType<FChooserEvaluationContext> FVar16;
  uint uVar17;
  uchar *puVar18;
  ForElementType<FStructView> FVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStackY_3a8 [32];
  ForElementType<FChooserEvaluationInputObject> local_358;
  FPoseSearchContinuingProperties *local_338;
  FPoseSearchEvent *local_330;
  FSearchResults *local_328;
  TArrayView<UObject_const_*,int> *local_320;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *local_318;
  TArrayView<FName_const_,int> *local_310;
  ForElementType<FChooserEvaluationContext> local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  TArrayView<UObject_const_*,int> local_2f8;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> local_2e8;
  TArrayView<FName_const_,int> local_2d8;
  TArrayView<FChooserEvaluationContext,int> local_2c8;
  TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_2b8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  iVar3 = param_1->ArrayNum;
  local_338 = param_5;
  local_330 = param_7;
  local_328 = param_8;
  local_2b8.AllocatorInstance.SecondaryData = (ForElementType<FChooserEvaluationContext>)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 4;
  local_320 = param_4;
  local_318 = param_3;
  local_310 = param_2;
  TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_2b8,iVar3,Default);
  uVar20 = 0;
  if (0 < iVar3) {
    lVar21 = 0;
    lVar22 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar20 < local_2b8.ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar16 = (ForElementType<FChooserEvaluationContext>)&local_2b8;
      if (local_2b8.AllocatorInstance.SecondaryData !=
          (ForElementType<FChooserEvaluationContext>)0x0) {
        FVar16 = local_2b8.AllocatorInstance.SecondaryData;
      }
      uVar13 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar18 = (((TArray<FChooserEvaluationInputObject,TFixedAllocator<4>_> *)
                 ((longlong)FVar16 + 0x60))->AllocatorInstance).InlineData[0].Pad + lVar22;
      local_358.InlineData[0].Pad = *(uchar (*) [8])(param_1->DataPtr + lVar21);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_358.InlineData[0].Pad != (uchar  [8])0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_358.InlineData[0].Pad);
      }
      if (((puVar18 <= &local_358) &&
          (&local_358 < puVar18 + (longlong)*(int *)((longlong)puVar18 + 0x24) * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = *(int *)(puVar18 + 0x20);
      if (iVar14 == *(int *)(puVar18 + 0x24)) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FChooserEvaluationInputObject>_>
                           (0x808,(ForElementType<FChooserEvaluationInputObject> *)puVar18,
                            (int *)(puVar18 + 0x24));
      }
      *(int *)(puVar18 + 0x20) = iVar14 + 1;
      *(uchar (*) [8])(puVar18 + (longlong)iVar14 * 8) = local_358.InlineData[0].Pad;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_358.InlineData[0].Pad != (uchar  [8])0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_358.InlineData[0].Pad);
      }
      uVar17 = *(int *)(puVar18 + 0x20) - 1;
      uVar13 = 0;
      if ((int)uVar17 < *(int *)(puVar18 + 0x20)) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      auVar1 = (uchar  [8])((longlong)puVar18 + (longlong)(*(int *)(puVar18 + 0x20) + -1) * 8);
      local_358.InlineData[2].Pad = (uchar  [8])FChooserEvaluationInputObject::StaticStruct();
      FVar19 = (ForElementType<FStructView>)
               ((longlong)
                (((TArray<FStructView,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                 ((longlong)FVar16 + 0x10))->AllocatorInstance).InlineData + lVar22);
      FVar4 = *(ForElementType<FStructView> *)((longlong)FVar19 + 0x40);
      FVar15 = FVar19;
      if (FVar4 != (ForElementType<FStructView>)0x0) {
        FVar15 = FVar4;
      }
      local_358.InlineData[3].Pad = auVar1;
      if ((ulonglong)FVar15 <= local_358.InlineData + 2) {
        FVar15 = FVar19;
        if (FVar4 != (ForElementType<FStructView>)0x0) {
          FVar15 = FVar4;
        }
        if ((local_358.InlineData + 2 <
             (undefined1 *)((longlong)*(int *)((longlong)FVar19 + 0x4c) * 0x10 + (longlong)FVar15))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar14 = *(int *)((longlong)FVar19 + 0x48);
      if (iVar14 == *(int *)((longlong)FVar19 + 0x4c)) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStructView>_>
                           (0x810,(ForElementType<FStructView> *)FVar19,
                            (int *)((longlong)FVar19 + 0x4c));
      }
      *(int *)((longlong)FVar19 + 0x48) = iVar14 + 1;
      if (*(ForElementType<FStructView> *)((longlong)FVar19 + 0x40) !=
          (ForElementType<FStructView>)0x0) {
        FVar19 = *(ForElementType<FStructView> *)((longlong)FVar19 + 0x40);
      }
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 1;
      lVar22 = lVar22 + 0x88;
      pauVar2 = (uchar (*) [8])((longlong)FVar19 + (longlong)iVar14 * 0x10);
      *pauVar2 = local_358.InlineData[2].Pad;
      pauVar2[1] = local_358.InlineData[3].Pad;
      param_5 = local_338;
      param_7 = local_330;
      param_8 = local_328;
    } while (lVar21 < iVar3);
  }
  iVar3 = local_2b8.ArrayNum;
  ppUVar6 = local_320->DataPtr;
  uVar7._0_4_ = local_320->ArrayNum;
  uVar7._4_4_ = *(undefined4 *)&local_320->field_0xc;
  ppIVar8 = local_318->DataPtr;
  uVar9._0_4_ = local_318->ArrayNum;
  uVar9._4_4_ = *(undefined4 *)&local_318->field_0xc;
  pFVar10 = local_310->DataPtr;
  uVar11._0_4_ = local_310->ArrayNum;
  uVar11._4_4_ = *(undefined4 *)&local_310->field_0xc;
  local_308 = (ForElementType<FChooserEvaluationContext>)&local_2b8;
  if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
    local_308 = local_2b8.AllocatorInstance.SecondaryData;
  }
  if ((local_2b8.ArrayNum < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_300 = iVar3;
  local_2c8._12_4_ = uStack_2fc;
  local_2c8.ArrayNum = iVar3;
  local_2c8.DataPtr = (FChooserEvaluationContext *)local_308;
  local_2f8.DataPtr = ppUVar6;
  local_2f8._8_8_ = uVar7;
  local_2e8.DataPtr = ppIVar8;
  local_2e8._8_8_ = uVar9;
  local_2d8.DataPtr = pFVar10;
  local_2d8._8_8_ = uVar11;
  MotionMatch(&local_2c8,&local_2d8,&local_2e8,&local_2f8,param_5,param_6,param_7,param_8);
  FVar16 = (ForElementType<FChooserEvaluationContext>)&local_2b8;
  if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
    FVar16 = local_2b8.AllocatorInstance.SecondaryData;
  }
  DestructItems<FChooserEvaluationContext,int>
            ((FChooserEvaluationContext *)FVar16,local_2b8.ArrayNum);
  if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
    FMemory::Free((void *)local_2b8.AllocatorInstance.SecondaryData);
  }
  return;
}

// MotionMatch @ 14a9327e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPoseSearchLibrary::MotionMatch
          (TArrayView<FChooserEvaluationContext,int> *param_1,TArrayView<FName_const_,int> *param_2,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *param_3,
          TArrayView<UObject_const_*,int> *param_4,FPoseSearchContinuingProperties *param_5,
          FPoseSearchFutureProperties *param_6,FPoseSearchEvent *param_7,FSearchResults *param_8)

{
  UObject *pUVar1;
  code *pcVar2;
  UObject **ppUVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForElementType<UE::PoseSearch::IPoseHistory_const_*> FVar10;
  USkeleton *pUVar11;
  UClass *pUVar12;
  FName *pFVar13;
  UAnimationAsset *pUVar14;
  ForElementType<UE::PoseSearch::FMemStackPoseHistory> FVar15;
  uchar *puVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_6e8 [32];
  longlong local_6a8;
  undefined4 uStack_65c;
  TArrayView<UObject_const_*,int> local_658;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> local_648;
  TArrayView<FName_const_,int> local_638;
  TArrayView<FChooserEvaluationContext,int> local_628;
  ForElementType<UE::PoseSearch::IPoseHistory_const_*> local_618;
  uint local_5f0;
  int local_5ec;
  ForElementType<UE::PoseSearch::FMemStackPoseHistory> local_5e8;
  int local_a0 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  iVar8 = param_1->ArrayNum;
  if ((((iVar8 == 0) || (iVar8 != param_2->ArrayNum)) || (iVar8 != param_3->ArrayNum)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Contexts.IsEmpty() && Contexts.Num() == Roles.Num() && Contexts.Num() == PoseHistories.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                         ,0x546,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = param_3->ArrayNum;
  local_618.SecondaryData.Data = (IPoseHistory **)0x0;
  local_5ec = 4;
  local_5f0 = uVar9;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_>
            (8,8,uVar9,4,&local_618,uVar9,&local_5ec);
  FVar10.Data = (IPoseHistory **)&local_618;
  if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_618.SecondaryData.Data !=
      (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
    FVar10.Data = local_618.SecondaryData.Data;
  }
  if (uVar9 != 0) {
    memcpy(FVar10.Data,param_3->DataPtr,(longlong)(int)uVar9 << 3);
  }
  uVar9 = local_5f0;
  fVar19 = param_6->IntervalTime;
  uVar17 = 0;
  local_5e8.SecondaryData.Data = (FMemStackPoseHistory *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 4;
  if ((param_6->Animation).field0_0x0.DebugPtr != (UObject *)0x0) {
    if ((int)local_5f0 < 1) {
      if ((int)local_5f0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_5f0);
      }
    }
    else {
      iVar8 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FMemStackPoseHistory>_>
                        (0x150,8,local_5f0,&local_5e8,local_a0,local_a0 + 1);
      FVar15.Data = (FMemStackPoseHistory *)&local_5e8;
      if ((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)local_5e8.SecondaryData.Data !=
          (ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)0x0) {
        FVar15.Data = local_5e8.SecondaryData.Data;
      }
      DefaultConstructItems<UE::PoseSearch::FMemStackPoseHistory,int>
                (((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)FVar15.Data)->InlineData +
                 (longlong)iVar8 * 0x150,uVar9);
    }
    fVar5 = __real_3c888889;
    fVar20 = param_6->AnimationTime;
    if ((param_6->AnimationTime < __real_3c888889) &&
       (fVar20 = fVar5, 2 < (byte)LogPoseSearch._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    fVar6 = __real_3c895a40;
    if ((fVar19 < __real_3c895a40) && (fVar19 = fVar6, 2 < (byte)LogPoseSearch._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    if (0 < param_2->ArrayNum) {
      lVar18 = 0;
      local_6a8 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar17 < (int)local_5f0) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar10.Data = (IPoseHistory **)&local_618;
        if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_618.SecondaryData.Data !=
            (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
          FVar10.Data = local_618.SecondaryData.Data;
        }
        if (*(longlong *)
             (((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)FVar10.Data)->InlineData +
             lVar18) != 0) {
          uVar9 = 0;
          if ((int)uVar17 < param_1->ArrayNum) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar11 = UE::PoseSearch::GetContextSkeleton(param_1->DataPtr + (int)uVar17,false);
          if ((pUVar11 == (USkeleton *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Skeleton",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                                 ,0x567,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((param_6->Animation).field0_0x0.DebugPtr == (UObject *)0x0) {
LAB_14a932b53:
            pUVar14 = (UAnimationAsset *)0x0;
LAB_14a932b56:
            if ((param_6->Animation).field0_0x0.DebugPtr != (UObject *)0x0) {
              pUVar12 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
              bVar7 = FObjectPtr::IsA((FObjectPtr *)param_6,pUVar12);
              if ((bVar7) &&
                 (pUVar1 = (param_6->Animation).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
                pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x2d8);
                pFVar13 = TArrayView<FName_const_,int>::operator[](param_2,uVar17);
                pUVar14 = (UAnimationAsset *)(*pcVar2)(pUVar1,pFVar13);
                goto LAB_14a932bc1;
              }
            }
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                               ,0x572,L"");
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            pUVar12 = Z_Construct_UClass_UAnimationAsset_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)param_6,pUVar12);
            if (!bVar7) goto LAB_14a932b53;
            pUVar14 = (UAnimationAsset *)(param_6->Animation).field0_0x0.DebugPtr;
            if (pUVar14 == (UAnimationAsset *)0x0) goto LAB_14a932b56;
          }
LAB_14a932bc1:
          uVar9 = 0;
          if ((int)uVar17 < local_a0[0]) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar15.Data = (FMemStackPoseHistory *)&local_5e8;
          if ((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)local_5e8.SecondaryData.Data
              != (ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)0x0) {
            FVar15.Data = local_5e8.SecondaryData.Data;
          }
          uVar9 = 0;
          if ((int)uVar17 < (int)local_5f0) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar10.Data = (IPoseHistory **)&local_618;
          if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_618.SecondaryData.Data
              != (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
            FVar10.Data = local_618.SecondaryData.Data;
          }
          UE::PoseSearch::FMemStackPoseHistory::Init
                    ((FMemStackPoseHistory *)
                     (((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)FVar15.Data)->
                      InlineData + (longlong)(int)uVar17 * 0x150),
                     *(IPoseHistory **)
                      (((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)FVar10.Data)->
                       InlineData + lVar18));
          uVar9 = 0;
          if ((int)uVar17 < local_a0[0]) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar15.Data = (FMemStackPoseHistory *)&local_5e8;
          if ((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)local_5e8.SecondaryData.Data
              != (ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)0x0) {
            FVar15.Data = local_5e8.SecondaryData.Data;
          }
          UE::PoseSearch::FMemStackPoseHistory::ExtractAndAddFuturePoses
                    ((FMemStackPoseHistory *)
                     (((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)FVar15.Data)->
                      InlineData + (longlong)(int)uVar17 * 0x150),pUVar14,fVar20,fVar5,
                     &UE::Math::TVector<double>::ZeroVector,fVar19,pUVar11,false);
          uVar9 = 0;
          if ((int)uVar17 < local_a0[0]) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar15.Data = (FMemStackPoseHistory *)&local_5e8;
          if ((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)local_5e8.SecondaryData.Data
              != (ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)0x0) {
            FVar15.Data = local_5e8.SecondaryData.Data;
          }
          puVar16 = ((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)FVar15.Data)->
                    InlineData + local_6a8;
          if (*(int *)(puVar16 + 0x148) == 0) {
            puVar16 = *(uchar **)(puVar16 + 0x18);
          }
          uVar9 = 0;
          if ((int)uVar17 < (int)local_5f0) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar10.Data = (IPoseHistory **)&local_618;
          if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_618.SecondaryData.Data
              != (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
            FVar10.Data = local_618.SecondaryData.Data;
          }
          *(uchar **)
           (((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)FVar10.Data)->InlineData +
           lVar18) = puVar16;
        }
        local_6a8 = local_6a8 + 0x150;
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 8;
      } while ((int)uVar17 < param_2->ArrayNum);
    }
  }
  uVar9 = local_5f0;
  ppUVar3 = param_4->DataPtr;
  uVar4._0_4_ = param_4->ArrayNum;
  uVar4._4_4_ = *(undefined4 *)&param_4->field_0xc;
  FVar10.Data = (IPoseHistory **)&local_618;
  if ((ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)local_618.SecondaryData.Data !=
      (ForElementType<UE::PoseSearch::IPoseHistory_const_*> *)0x0) {
    FVar10.Data = local_618.SecondaryData.Data;
  }
  if (((int)local_5f0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_638.DataPtr = param_2->DataPtr;
  local_638.ArrayNum = param_2->ArrayNum;
  local_638._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_648._12_4_ = uStack_65c;
  local_648.ArrayNum = uVar9;
  local_628.DataPtr = param_1->DataPtr;
  local_628.ArrayNum = param_1->ArrayNum;
  local_628._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_658.DataPtr = ppUVar3;
  local_658._8_8_ = uVar4;
  local_648.DataPtr = FVar10.Data;
  MotionMatch(&local_628,&local_638,&local_648,&local_658,param_5,fVar19,param_7,param_8);
  FVar15.Data = (FMemStackPoseHistory *)&local_5e8;
  if ((ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)local_5e8.SecondaryData.Data !=
      (ForElementType<UE::PoseSearch::FMemStackPoseHistory> *)0x0) {
    FVar15.Data = local_5e8.SecondaryData.Data;
  }
  DestructItems<UE::PoseSearch::FMemStackPoseHistory,int>(FVar15.Data,local_a0[0]);
  return;
}

// MotionMatch @ 14a932f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchLibrary::MotionMatch
          (TArrayView<FChooserEvaluationContext,int> *param_1,TArrayView<FName_const_,int> *param_2,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *param_3,
          TArrayView<UObject_const_*,int> *param_4,FPoseSearchContinuingProperties *param_5,
          float param_6,FPoseSearchEvent *param_7,FSearchResults *param_8)

{
  IPoseHistory *pIVar1;
  FChooserEvaluationContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_2dd8 [32];
  longlong local_2db8;
  longlong local_2db0;
  FFloatInterval local_2da8;
  TArrayView<FChooserEvaluationContext,int> *local_2da0;
  TArrayView<UObject_const_*,int> *local_2d98;
  FSearchResults *local_2d90;
  FPoseSearchContinuingProperties *local_2d88;
  TArrayView<UObject_const_*,int> local_2d78;
  undefined1 local_2d68 [232];
  void *local_2c80;
  undefined4 local_2c78;
  ForAnyElementType local_2c68;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_2be8;
  undefined4 local_b20;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_978;
  undefined4 local_c0;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b0;
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2dd8;
  local_2d88 = param_5;
  local_2d90 = param_8;
  local_2da8 = (FFloatInterval)0x0;
  local_2da0 = param_1;
  local_2d98 = param_4;
  UE::PoseSearch::FSearchContext::FSearchContext
            ((FSearchContext *)local_2d68,param_6,&local_2da8,param_7);
  uVar8 = 0;
  if (0 < param_2->ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar5 = uVar6;
      }
      if (uVar5 == 0) {
        local_2db8 = (longlong)(int)uVar8;
        local_2db0 = (longlong)param_3->ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pIVar1 = *(IPoseHistory **)(lVar9 + (longlong)param_3->DataPtr);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar6;
      }
      if (uVar5 == 0) {
        local_2db8 = (longlong)(int)uVar8;
        local_2db0 = (longlong)param_1->ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = param_1->DataPtr;
      lVar7 = (longlong)(int)uVar8;
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = uVar6;
      }
      if ((uVar5 == 0) &&
         (local_2db8 = lVar7, local_2db0 = (longlong)param_2->ArrayNum,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::PoseSearch::FSearchContext::AddRole
                ((FSearchContext *)local_2d68,param_2->DataPtr + lVar7,pFVar2 + lVar7,pIVar1);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
      param_1 = local_2da0;
    } while ((int)uVar8 < param_2->ArrayNum);
  }
  local_2d78.DataPtr = local_2d98->DataPtr;
  local_2d78.ArrayNum = local_2d98->ArrayNum;
  local_2d78._12_4_ = *(undefined4 *)&local_2d98->field_0xc;
  MotionMatch((FSearchContext *)local_2d68,&local_2d78,local_2d88,local_2d90);
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b0);
  local_c0 = 0;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            (&local_978);
  local_b20 = 0;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            (&local_2be8);
  if (local_2c68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c68.Data);
  }
  local_2c78 = 0;
  if (local_2c80 != (void *)0x0) {
    FMemory::Free(local_2c80);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)(local_2d68 + 0x60));
  return;
}

// StaticRegisterNativesUPoseSearchLibrary @ 14a93ee10

void __cdecl UPoseSearchLibrary::StaticRegisterNativesUPoseSearchLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TraceMotionMatching @ 14a93f8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchLibrary::TraceMotionMatching
          (FSearchContext *param_1,FSearchResult *param_2,float param_3,float param_4,bool param_5,
          float param_6,EPoseSearchInterruptMode param_7)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_188 [32];
  FSearchResults_Single local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_158);
  if ((param_5) && (*(int *)param_2 != -1)) {
    bVar1 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       &param_2->field_0x4,(void *)0x0);
    if (!bVar1) {
      UE::Core::Private::Function::CheckCallable((void *)local_158._padding_);
      plVar3 = &local_158._padding_;
      if ((longlong *)local_158._padding_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_158._padding_;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*(code *)local_158._padding_)(uVar2,param_2);
    }
  }
  TraceMotionMatching(param_1,(FSearchResults *)&local_158,param_3,param_6,param_7);
  UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_158);
  return;
}

// TraceMotionMatching @ 14a93f9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseSearchLibrary::TraceMotionMatching
          (FSearchContext *param_1,FSearchResults *param_2,float param_3,float param_4,
          EPoseSearchInterruptMode param_5)

{
  uchar *puVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar4;
  longlong *plVar5;
  void *_Src;
  float *_Src_00;
  FSearchContext *pFVar6;
  UAnimInstance *this;
  undefined1 *puVar7;
  code *pcVar8;
  TArray<FChooserEvaluationContext_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *pTVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  FSearchResults *pFVar13;
  TMap<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  *pTVar14;
  bool bVar15;
  int iVar16;
  TArrayView<FChooserEvaluationContext_*,int> *pTVar17;
  FChooserEvaluationContext **ppFVar18;
  UObject *pUVar19;
  UWorld *pUVar20;
  UObject *pUVar21;
  ulong64 uVar22;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar23;
  undefined8 uVar24;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar25;
  TArrayView<float_const_,int> *pTVar26;
  ForElementType<unsigned___int64> FVar27;
  UClass *pUVar28;
  UPoseSearchDatabase *pUVar29;
  FSearchIndex *this_00;
  FSearchIndexAsset *pFVar30;
  FPoseSearchDatabaseAnimationAsset *pFVar31;
  UAnimationAsset *pUVar32;
  FName *pFVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong *plVar36;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar37;
  int iVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar42;
  uint uVar43;
  FSearchContext *pFVar44;
  ForAnyElementType FVar45;
  TMap<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  *pTVar46;
  longlong lVar47;
  ForElementType<unsigned___int64> FVar48;
  FSearchContext *pFVar49;
  undefined1 *puVar50;
  uint uVar51;
  uint uVar53;
  uint *puVar54;
  uint uVar55;
  TBitArray<FDefaultBitArrayAllocator> *pTVar56;
  TBitArray<FDefaultBitArrayAllocator> *pTVar57;
  FArchivedPoseHistory *this_01;
  ulonglong uVar58;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar59;
  FSearchContext *pFVar60;
  float fVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  undefined1 auStackY_bf8 [32];
  undefined1 local_ba8;
  undefined1 local_ba7;
  undefined1 local_ba6;
  undefined1 local_ba5;
  FIdentityFunctor local_ba4 [4];
  uint local_ba0;
  uint local_b9c;
  FSearchContext *local_b98;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *local_b90;
  longlong lStack_b88;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  int local_b68;
  undefined4 uStack_b64;
  LARGE_INTEGER local_b58;
  ulong64 local_b50;
  uint local_b48;
  undefined8 local_b40;
  float local_b38;
  float fStack_b34;
  float fStack_b30;
  float fStack_b2c;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  ForAnyElementType local_b08;
  undefined8 local_b00;
  ForAnyElementType local_af8;
  undefined8 local_af0;
  TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
  local_ae8;
  TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_> local_ad8;
  undefined8 local_ac8;
  EPoseSearchInterruptMode local_ac0;
  TBitArray<FDefaultBitArrayAllocator> *local_ab8;
  float local_ab0;
  ulonglong local_aa8;
  uchar *local_aa0;
  undefined8 local_a98;
  int local_a90;
  FWeakObjectPtr local_a8c;
  undefined4 local_a84;
  float local_a7c;
  FSearchResults *local_a70;
  undefined8 local_a68;
  FCustomVersionContainer local_a60;
  TMap<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  *local_a50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a48;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_a28;
  int local_a08;
  int local_a04;
  UClass *local_a00;
  FSearchContext *local_9f8;
  ForElementType<unsigned___int64> local_9f0;
  LARGE_INTEGER local_9e8;
  undefined1 local_9e0 [12];
  uint uStack_9d4;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_9d0;
  undefined8 uStack_9c8;
  longlong local_9c0;
  undefined8 uStack_9b8;
  TMap<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates,0>_>
  *local_9b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9a8;
  undefined8 uStack_988;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *local_980;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_978;
  undefined8 uStack_958;
  code *local_950;
  FSearchContext **local_948;
  code *local_940;
  ForElementType<unsigned___int64> *local_938;
  FArchiveState local_928;
  undefined8 local_898;
  uchar **local_890;
  undefined8 local_888;
  FName local_878 [2];
  FGuid local_868;
  TRangedForConstIterator local_858;
  double local_828;
  double dStack_820;
  double local_818;
  double local_810;
  double dStack_808;
  double local_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  TArrayView<FChooserEvaluationContext_*,int> local_7e0;
  TArrayView<float_const_,int> local_7d0;
  TArrayView<FChooserEvaluationContext_*,int> local_7c0;
  TArrayView<FChooserEvaluationContext_*,int> local_7b0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_7a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_780;
  undefined4 local_744;
  UObject *local_738;
  undefined1 local_730 [16];
  undefined1 local_720 [32];
  void *local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  ForElementType<FSetElementId> local_6e0;
  int local_6d8;
  TLogScope<1> local_6c8;
  ForElementType<unsigned___int64> local_6b8;
  uint local_4b0;
  uint local_4ac;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  FAnimationAssetSampler local_328;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  ulonglong uVar52;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_bf8;
  if (PoseSearchChannel->Enabled < 0) {
    return;
  }
  fVar69 = 0.0;
  local_b98 = param_1;
  local_ab0 = param_3;
  local_a70 = param_2;
  pTVar17 = UE::PoseSearch::FSearchContext::GetContexts(param_1,&local_7b0);
  if (pTVar17->ArrayNum != 0) {
    pTVar17 = UE::PoseSearch::FSearchContext::GetContexts(param_1,&local_7e0);
    ppFVar18 = TArrayView<FChooserEvaluationContext_*,int>::operator[](pTVar17,0);
    pUVar19 = FChooserEvaluationContext::GetFirstObjectParam(*ppFVar18);
    if (pUVar19 != (UObject *)0x0) {
      pUVar20 = (UWorld *)(**(code **)(*(longlong *)pUVar19 + 0x180))(pUVar19);
      dVar62 = FObjectTrace::GetWorldElapsedTime(pUVar20);
      fVar69 = (float)dVar62;
    }
  }
  uVar34 = 0;
  local_ba0 = 0x313;
  local_b58.QuadPart = 0;
  local_b50 = 0;
  local_b48 = 0xffffffff;
  local_b40 = 0;
  local_b38 = 0.0;
  fStack_b34 = 0.0;
  fStack_b30 = 0.0;
  fStack_b2c = 0.0;
  local_b28 = 0;
  uStack_b20 = 0;
  local_b18 = 0;
  local_b10 = 0;
  local_b08.Data = (FScriptContainerElement *)0x0;
  local_b00 = 0;
  local_af8.Data = (FScriptContainerElement *)0x0;
  local_af0 = 0;
  local_ae8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ae8.ArrayNum = 0;
  local_ae8.ArrayMax = 0;
  local_ad8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ad8.ArrayNum = 0;
  local_ad8.ArrayMax = 0;
  local_ac8 = 0xffffffffffffffff;
  local_ac0 = param_5;
  pTVar17 = UE::PoseSearch::FSearchContext::GetContexts(param_1,&local_7c0);
  uVar43 = pTVar17->ArrayNum;
  pTVar56 = (TBitArray<FDefaultBitArrayAllocator> *)(longlong)(int)uVar43;
  pTVar57 = pTVar56;
  if ((int)local_b00 < (int)uVar43) {
    iVar38 = uVar43 - (int)local_b00;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar38,&local_b08,(int *)&local_b00,(int *)((longlong)&local_b00 + 4));
    memset(local_b08.Data + (longlong)iVar16 * 8,0,(longlong)iVar38 << 3);
  }
  else {
    if ((int)uVar43 < 0) goto LAB_14a941919;
    if ((int)uVar43 < (int)local_b00) {
      uVar51 = (int)local_b00 - uVar43;
      uVar55 = 0;
      if ((int)(uVar51 + uVar43) <= (int)local_b00) {
        uVar55 = ~uVar51 >> 0x1f;
      }
      if (uVar55 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (uVar51 != 0) {
        iVar38 = ((int)local_b00 - uVar51) - uVar43;
        iVar16 = (int)local_b00;
        if (iVar38 != 0) {
          memmove(local_b08.Data + (longlong)pTVar56 * 8,
                  local_b08.Data + (longlong)pTVar56 * 8 + (longlong)(int)uVar51 * 8,
                  (longlong)iVar38 << 3);
          iVar16 = (int)local_b00;
        }
        local_b00 = CONCAT44(local_b00._4_4_,iVar16 - uVar51);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_b08,iVar16 - uVar51,(int *)((longlong)&local_b00 + 4));
      }
    }
  }
  uVar58 = uVar34;
  local_ab8 = pTVar56;
  if (0 < (int)uVar43) {
    do {
      pFVar60 = (FSearchContext *)(local_b98->AnimContexts).AllocatorInstance.SecondaryData.Data;
      iVar16 = (local_b98->AnimContexts).ArrayNum;
      pFVar44 = local_b98;
      if (pFVar60 != (FSearchContext *)0x0) {
        pFVar44 = pFVar60;
      }
      if ((iVar16 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar51 = (uint)uVar34;
      uVar55 = 0;
      if ((int)uVar51 < iVar16) {
        uVar55 = ~uVar51 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar35 = *(longlong *)((pFVar44->AnimContexts).AllocatorInstance.InlineData + uVar58 * 8);
      if (lVar35 != 0) {
        if (*(int *)(lVar35 + 0x80) < 1) {
          pUVar19 = (UObject *)0x0;
LAB_14a93fd78:
          if (pUVar19 == (UObject *)0x0) goto LAB_14a941853;
          pUVar28 = Z_Construct_UClass_UActorComponent_NoRegister();
          iVar16 = (int)pUVar28->_padding_;
          if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar16) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar28->_padding_)) goto LAB_14a941853;
          plVar5 = *(longlong **)&pUVar19[4].field_0x8;
          if ((plVar5 == (longlong *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Actor",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                                  ,0x2c6,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = *(code **)(*plVar5 + 0x738);
          local_a00 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a00 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_a00);
          }
          pUVar19 = (UObject *)(*pcVar8)(plVar5,&local_a00);
        }
        else {
          if ((*(int *)(lVar35 + 0x80) < 1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar19 = *(UObject **)(lVar35 + 0x60);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar19);
          }
          if ((pUVar19 == (UObject *)0x0) ||
             (bVar15 = UObjectBaseUtility::IsA<UAnimInstance>((UObjectBaseUtility *)pUVar19),
             !bVar15)) goto LAB_14a93fd78;
          pUVar19 = *(UObject **)&pUVar19->field_0x20;
        }
        if (pUVar19 == (UObject *)0x0) goto LAB_14a941853;
        bVar15 = FTraceFilter::IsObjectTraceable<1>(pUVar19);
        if (!bVar15) {
          pUVar21 = (UObject *)(**(code **)(*(longlong *)pUVar19 + 0x180))(pUVar19);
          bVar15 = FTraceFilter::IsObjectTraceable<1>(pUVar21);
          if (!bVar15) goto LAB_14a941853;
        }
        FObjectTrace::OutputObject(pUVar19);
        uVar22 = FObjectTrace::GetObjectId(pUVar19);
        uVar55 = 0;
        if ((int)uVar51 < (int)local_b00) {
          uVar55 = ~uVar51 >> 0x1f;
        }
        if ((uVar55 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(ulong64 *)(local_b08.Data + uVar58 * 8) = uVar22;
      }
      uVar34 = (ulonglong)(uVar51 + 1);
      uVar58 = uVar58 + 1;
      param_1 = local_b98;
    } while ((longlong)uVar58 < (longlong)pTVar56);
  }
  uVar34 = 0;
  if (0 < (int)uVar43) {
    uVar55 = 0x313;
    uVar58 = uVar34;
    do {
      pFVar60 = (FSearchContext *)(param_1->AnimContexts).AllocatorInstance.SecondaryData.Data;
      iVar16 = (param_1->AnimContexts).ArrayNum;
      pFVar44 = param_1;
      if (pFVar60 != (FSearchContext *)0x0) {
        pFVar44 = pFVar60;
      }
      if ((iVar16 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar53 = (uint)uVar34;
      uVar51 = 0;
      if ((int)uVar53 < iVar16) {
        uVar51 = ~uVar53 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar35 = *(longlong *)((pFVar44->AnimContexts).AllocatorInstance.InlineData + uVar58 * 8);
      if (0 < *(int *)(lVar35 + 0x80)) {
        if ((*(int *)(lVar35 + 0x80) < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar19 = *(UObject **)(lVar35 + 0x60);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar19 == (UObject *)0x0) goto LAB_14a940004;
          UE::GC::MarkAsReachable(pUVar19);
        }
        if (pUVar19 != (UObject *)0x0) {
          FObjectTrace::OutputObject(pUVar19);
          uVar22 = FObjectTrace::GetObjectId(pUVar19);
          uVar55 = uVar55 ^ (uVar55 >> 2) + 0x9e3779b9 +
                            uVar55 * 0x40 + (int)uVar22 + (int)(uVar22 >> 0x20) * 0x17;
        }
      }
LAB_14a940004:
      uVar34 = (ulonglong)(uVar53 + 1);
      uVar58 = uVar58 + 1;
    } while ((longlong)uVar58 < (longlong)pTVar56);
    pTVar57 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)uVar43;
    local_ba0 = uVar55;
  }
  iVar16 = (int)pTVar57;
  if ((int)local_af0 < iVar16) {
    iVar39 = iVar16 - (int)local_af0;
    iVar38 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar39,&local_af8,(int *)&local_af0,(int *)((longlong)&local_af0 + 4));
    memset(local_af8.Data + (longlong)iVar38 * 8,0,(longlong)iVar39 << 3);
  }
  else {
    if (iVar16 < 0) goto LAB_14a941919;
    if (iVar16 < (int)local_af0) {
      uVar55 = (int)local_af0 - iVar16;
      uVar43 = 0;
      if ((int)(uVar55 + iVar16) <= (int)local_af0) {
        uVar43 = ~uVar55 >> 0x1f;
      }
      if (uVar43 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (uVar55 != 0) {
        iVar39 = ((int)local_af0 - uVar55) - iVar16;
        iVar38 = (int)local_af0;
        if (iVar39 != 0) {
          memmove(local_af8.Data + (longlong)iVar16 * 8,
                  local_af8.Data + (longlong)iVar16 * 8 + (longlong)(int)uVar55 * 8,
                  (longlong)iVar39 << 3);
          iVar38 = (int)local_af0;
        }
        local_af0 = CONCAT44(local_af0._4_4_,iVar38 - uVar55);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&local_af8,iVar38 - uVar55,(int *)((longlong)&local_af0 + 4));
      }
    }
  }
  puVar2 = &(param_1->RoleToIndex).field_0x60;
  local_a28._padding_._0_4_ = 0;
  pTVar37 = &param_1->RoleToIndex;
  local_aa8 = 1;
  local_a28._padding_._4_4_ = 1;
  local_a28.UnvisitedBitMask = 0xffffffff;
  local_a28.CurrentBitIndex = 0;
  local_a28.BaseBitIndex = 0;
  local_a28.Array = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar2;
  if (*(int *)&(param_1->RoleToIndex).field_0x70 != 0) {
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&local_a28);
  }
  lStack_b88 = CONCAT44(local_a28._padding_._4_4_,(undefined4)local_a28._padding_);
  uStack_b78 = CONCAT44(local_a28.CurrentBitIndex,local_a28.UnvisitedBitMask);
  uStack_b70 = CONCAT44(local_a28._28_4_,local_a28.BaseBitIndex);
  local_b68 = *(int *)&(param_1->RoleToIndex).field_0x58 -
              *(int *)&(param_1->RoleToIndex).field_0x7c;
  pTStack_b80 = (TBitArray<FDefaultBitArrayAllocator> *)local_a28.Array;
  uStack_9b8._4_4_ = uStack_b64;
  uStack_9b8._0_4_ = local_b68;
  local_9d0 = local_a28.Array;
  local_b90 = pTVar37;
  local_9e0._0_8_ = pTVar37;
  unique0x100034e1 = lStack_b88;
  uStack_9c8 = uStack_b78;
  local_9c0 = uStack_b70;
  pTVar23 = TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
            TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      (&local_7a0,
                       (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar2
                       ,*(int *)&(param_1->RoleToIndex).field_0x70);
  lStack_b88 = pTVar23->_padding_;
  pTStack_b80 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar23->Array;
  uStack_b78._0_4_ = pTVar23->UnvisitedBitMask;
  uStack_b78._4_4_ = pTVar23->CurrentBitIndex;
  uStack_b70 = *(longlong *)&pTVar23->BaseBitIndex;
  local_b68 = *(int *)&(param_1->RoleToIndex).field_0x58 -
              *(int *)&(param_1->RoleToIndex).field_0x7c;
  local_858._44_4_ = uStack_b64;
  local_858.InitialNum = local_b68;
  local_b90 = pTVar37;
  local_858._padding_ = (longlong)pTVar37;
  local_858._padding_ = lStack_b88;
  local_858._padding_ = (longlong)pTStack_b80;
  local_858._padding_ = uStack_b78;
  local_858._padding_ = uStack_b70;
  bVar15 = TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_9e0,&local_858);
  if (bVar15) {
    do {
      pTVar37 = (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 *)local_9e0._0_8_;
      if (*(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
            **)(local_9e0._0_8_ + 0x50) !=
          (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
           *)0x0) {
        pTVar37 = *(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    **)(local_9e0._0_8_ + 0x50);
      }
      uVar43 = *(uint *)(&pTVar37->field_0x8 + (longlong)uStack_9c8._4_4_ * 0x14);
      uVar24 = *(undefined8 *)(&pTVar37->field_0x0 + (longlong)uStack_9c8._4_4_ * 0x14);
      uVar55 = 0;
      if ((int)uVar43 < (int)local_af0) {
        uVar55 = ~uVar43 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)(local_af8.Data + (longlong)(int)uVar43 * 8) = uVar24;
      uStack_9c8 = CONCAT44(uStack_9c8._4_4_,(uint)uStack_9c8 & ~uStack_9d4);
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit((TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                       *)(local_9e0 + 8));
      bVar15 = TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_9e0,&local_858);
    } while (bVar15);
  }
  iVar38 = (int)local_af0;
  uVar34 = (ulonglong)(int)local_af0;
  uVar43 = 0;
  pFVar3 = local_af8.Data + uVar34 * 8;
  FVar45.Data = local_af8.Data;
  while( true ) {
    if ((int)uVar34 != iVar38) {
      local_ba8 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_ba8);
    }
    if (FVar45.Data == pFVar3) break;
    uVar24 = *(undefined8 *)FVar45.Data;
    uVar55 = ::GetTypeHash((FNameEntryId)(uint)uVar24);
    uVar34 = local_af0 & 0xffffffff;
    uVar43 = uVar43 ^ uVar55 + 0x9e3779b9 +
                      (int)((ulonglong)uVar24 >> 0x20) + uVar43 * 0x40 + (uVar43 >> 2);
    FVar45.Data = FVar45.Data + 8;
  }
  uVar34 = (ulonglong)local_ad8.ArrayNum;
  local_ba0 = local_ba0 ^ (local_ba0 >> 2) + 0x9e3779b9 + local_ba0 * 0x40 + uVar43;
  if (local_ad8.ArrayNum < iVar16) {
    iVar16 = iVar16 - local_ad8.ArrayNum;
    iVar38 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x98,8,iVar16,&local_ad8.AllocatorInstance,&local_ad8.ArrayNum,
                        &local_ad8.ArrayMax);
    DefaultConstructItems<UE::PoseSearch::FArchivedPoseHistory,int>
              (local_ad8.AllocatorInstance.Data + (longlong)iVar38 * 0x98,iVar16);
    uVar34 = local_ad8._8_8_ & 0xffffffff;
  }
  else {
    if (iVar16 < 0) {
LAB_14a941919:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)pTVar57 & 0xffffffff);
    }
    if (iVar16 < local_ad8.ArrayNum) {
      uVar55 = local_ad8.ArrayNum - iVar16;
      uVar43 = 0;
      if ((int)(uVar55 + iVar16) <= local_ad8.ArrayNum) {
        uVar43 = ~uVar55 >> 0x1f;
      }
      if (uVar43 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar34 = local_ad8._8_8_ & 0xffffffff;
      }
      if (uVar55 != 0) {
        TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&local_ad8,iVar16,uVar55);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x98,8,&local_ad8.AllocatorInstance,local_ad8.ArrayNum,&local_ad8.ArrayMax);
        uVar34 = local_ad8._8_8_ & 0xffffffff;
      }
    }
  }
  pFVar60 = local_b98;
  uVar40 = 0;
  uVar58 = uVar40;
  if (0 < (longlong)pTVar56) {
    while( true ) {
      uVar55 = (uint)uVar40;
      uVar43 = 0;
      if ((int)uVar55 < (int)uVar34) {
        uVar43 = ~uVar55 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar4 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                *)(pFVar60->PoseHistories).AllocatorInstance.SecondaryData.Data;
      iVar16 = (pFVar60->PoseHistories).ArrayNum;
      this_01 = (FArchivedPoseHistory *)
                (local_ad8.AllocatorInstance.Data + (longlong)(int)uVar55 * 0x98);
      pTVar59 = &pFVar60->PoseHistories;
      if (pTVar4 != (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                     *)0x0) {
        pTVar59 = pTVar4;
      }
      if ((iVar16 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar43 = 0;
      if ((int)uVar55 < iVar16) {
        uVar43 = ~uVar55 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      UE::PoseSearch::FArchivedPoseHistory::InitFrom
                (this_01,*(IPoseHistory **)((pTVar59->AllocatorInstance).InlineData + uVar58 * 8));
      uVar40 = (ulonglong)(uVar55 + 1);
      if ((longlong)local_ab8 <= (longlong)(uVar58 + 1)) break;
      uVar34 = local_ad8._8_8_ & 0xffffffff;
      uVar58 = uVar58 + 1;
    }
  }
  pFVar13 = local_a70;
  pFVar60 = local_b98;
  uVar34 = 0;
  local_948 = &local_9f8;
  local_9f8 = local_b98;
  local_950 = UE::Core::Private::Function::
              TFunctionRefCaller<`UPoseSearchLibrary::TraceMotionMatching'::__l2::<lambda_1>,bool,UE::PoseSearch::FSearchResult_const_&>
              ::Call;
  UE::Core::Private::Function::CheckCallable(*(void **)&local_a70->IterateOverSearchResults);
  pcVar8 = *(code **)&pFVar13->IterateOverSearchResults;
  plVar5 = *(longlong **)&(pFVar13->IterateOverSearchResults).field_0x28;
  plVar36 = (longlong *)&(pFVar13->IterateOverSearchResults).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar36 = plVar5;
  }
  uVar24 = (**(code **)(*plVar36 + 8))();
  (*pcVar8)(uVar24,&local_950);
  uVar43 = *(int *)&(pFVar60->BestPoseCandidatesMap).field_0x8 -
           *(int *)&(pFVar60->BestPoseCandidatesMap).field_0x34;
  local_6b8.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_4b0 = 0;
  local_4ac = 0x40;
  if (local_ae8.ArrayNum < (int)uVar43) {
    iVar38 = uVar43 - local_ae8.ArrayNum;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,iVar38,&local_ae8.AllocatorInstance,&local_ae8.ArrayNum,
                        &local_ae8.ArrayMax);
    DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
              (local_ae8.AllocatorInstance.Data + (longlong)iVar16 * 0x28,iVar38);
  }
  else {
    if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar43);
    }
    if ((int)uVar43 < local_ae8.ArrayNum) {
      uVar51 = local_ae8.ArrayNum - uVar43;
      uVar55 = 0;
      if ((int)(uVar51 + uVar43) <= local_ae8.ArrayNum) {
        uVar55 = ~uVar51 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar51 != 0) {
        TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&local_ae8,uVar43,uVar51);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&local_ae8.AllocatorInstance,local_ae8.ArrayNum,&local_ae8.ArrayMax);
      }
    }
  }
  pTVar46 = &pFVar60->BestPoseCandidatesMap;
  puVar2 = &(pFVar60->BestPoseCandidatesMap).field_0x10;
  local_a48._padding_._0_4_ = 0;
  local_a48._padding_._4_4_ = (undefined4)local_aa8;
  local_a48.UnvisitedBitMask = 0xffffffff;
  local_a48.CurrentBitIndex = 0;
  local_a48.BaseBitIndex = 0;
  local_a50 = pTVar46;
  local_a48.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(pFVar60->BestPoseCandidatesMap).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a48);
  }
  lStack_b88 = CONCAT44(local_a48._padding_._4_4_,(undefined4)local_a48._padding_);
  uStack_b78._4_4_ = local_a48.CurrentBitIndex;
  uStack_b78._0_4_ = local_a48.UnvisitedBitMask;
  uStack_b70._4_4_ = local_a48._28_4_;
  uStack_b70._0_4_ = local_a48.BaseBitIndex;
  local_b68 = *(int *)&(pFVar60->BestPoseCandidatesMap).field_0x8 -
              *(int *)&(pFVar60->BestPoseCandidatesMap).field_0x34;
  pTStack_b80 = local_a48.Array;
  uStack_988 = CONCAT44(uStack_b64,local_b68);
  TStack_9a8.Array = local_a48.Array;
  local_b90 = (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
               *)pTVar46;
  local_9b0 = pTVar46;
  TStack_9a8._padding_ = lStack_b88;
  TStack_9a8._16_8_ = uStack_b78;
  TStack_9a8._24_8_ = uStack_b70;
  pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_780,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(pFVar60->BestPoseCandidatesMap).field_0x28);
  uVar10 = _UNK_150631d98;
  uVar24 = ___xmm_00000000ffffffff0000008000000000;
  lStack_b88 = pTVar25->_padding_;
  pTStack_b80 = pTVar25->Array;
  uStack_b78._0_4_ = pTVar25->UnvisitedBitMask;
  uStack_b78._4_4_ = pTVar25->CurrentBitIndex;
  uStack_b70 = *(longlong *)&pTVar25->BaseBitIndex;
  local_b9c = uStack_b78._4_4_;
  uVar58 = uVar34;
  local_ab8 = pTStack_b80;
  while( true ) {
    pTVar14 = local_9b0;
    uVar43 = local_b9c;
    if (*(int *)&local_9b0->field_0x8 - *(int *)&local_9b0->field_0x34 != (int)uStack_988) {
      local_ba7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_ba7);
    }
    if (((TStack_9a8.CurrentBitIndex == uVar43) && (TStack_9a8.Array == local_ab8)) &&
       (pTVar14 == pTVar46)) break;
    lVar35 = *(longlong *)pTVar14;
    lVar47 = (longlong)TStack_9a8.CurrentBitIndex * 0x70;
    local_738 = *(UObject **)(lVar47 + lVar35);
    local_730._0_8_ = (FScriptContainerElement *)0x0;
    local_730._8_4_ = *(int *)(lVar47 + 0x10 + lVar35);
    lVar41 = (longlong)(int)local_730._8_4_;
    _Src = *(void **)(lVar47 + 8 + lVar35);
    if (local_730._8_4_ == 0) {
      local_730._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_730._8_4_,0,(ForAnyElementType *)local_730,local_730._8_4_,
                 (int *)(local_730 + 0xc));
      memcpy((void *)local_730._0_8_,_Src,lVar41 * 0xc);
    }
    local_720._0_8_ = (FScriptContainerElement *)0x0;
    local_720._8_8_ = 0;
    local_700 = (void *)0x0;
    local_6f8 = uVar24;
    uStack_6f0 = uVar10;
    local_6e0 = (ForElementType<FSetElementId>)0x0;
    local_6d8 = 0;
    TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
    ::operator=((TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
                 *)local_720,
                (TSet<UE::PoseSearch::FSearchContext::FPoseCandidate,UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidatePoseIdxKeyFunc,FDefaultSetAllocator>
                 *)(lVar35 + 0x18 + lVar47));
    pUVar19 = local_738;
    if ((local_738 == (UObject *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Database",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                            ,0x300,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar55 = (uint)uVar34;
    uVar43 = 0;
    if ((int)uVar55 < local_ae8.ArrayNum) {
      uVar43 = ~uVar55 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar48 = (ForElementType<unsigned___int64>)((longlong)local_ae8.AllocatorInstance.Data + uVar58)
    ;
    pTVar26 = UE::PoseSearch::FSearchContext::GetOrBuildQuery
                        (pFVar60,&local_7d0,*(UPoseSearchSchema **)&pUVar19[1].field_0x8);
    puVar1 = (uchar *)((longlong)FVar48 + 0x14);
    iVar16 = pTVar26->ArrayNum;
    _Src_00 = pTVar26->DataPtr;
    *(int *)((longlong)FVar48 + 0x10) = iVar16;
    if ((iVar16 == 0) && (*(int *)((longlong)FVar48 + 0x14) == 0)) {
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar16,*(int *)((longlong)FVar48 + 0x14),
                 (ForAnyElementType *)((longlong)FVar48 + 8),iVar16,(int *)puVar1);
      if (iVar16 != 0) {
        memcpy(*(FScriptContainerElement **)((longlong)FVar48 + 8),_Src_00,(longlong)iVar16 << 2);
      }
    }
    FObjectTrace::OutputObject(pUVar19);
    uVar22 = FObjectTrace::GetObjectId(pUVar19);
    *(ulong64 *)FVar48 = uVar22;
    FVar27 = (ForElementType<unsigned___int64>)&local_6b8;
    if (local_6b8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
      FVar27 = local_6b8.SecondaryData;
    }
    if ((ulonglong)FVar27 <= (ulonglong)FVar48) {
      FVar27 = (ForElementType<unsigned___int64>)&local_6b8;
      if (local_6b8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar27 = local_6b8.SecondaryData;
      }
      if (((ulonglong)FVar48 < (ulonglong)((longlong)FVar27 + (longlong)(int)local_4ac * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (local_4b0 == local_4ac) {
      local_4b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                            (0x808,&local_6b8,(int *)&local_4ac);
    }
    lVar35 = (longlong)(int)local_4b0;
    FVar27 = (ForElementType<unsigned___int64>)&local_6b8;
    if (local_6b8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
      FVar27 = local_6b8.SecondaryData;
    }
    local_4b0 = local_4b0 + 1;
    *(ulong64 *)((longlong)FVar27 + lVar35 * 8) = *(ulong64 *)FVar48;
    local_938 = &local_9f0;
    local_940 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPoseSearchLibrary::TraceMotionMatching'::__l48::<lambda_2>,bool,UE::PoseSearch::FSearchContext::FPoseCandidate_const_&>
                ::Call;
    local_9f0 = FVar48;
    UE::PoseSearch::FSearchContext::FBestPoseCandidates::IterateOverBestPoseCandidates
              ((FBestPoseCandidates *)local_730,
               (TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchContext::FPoseCandidate_const_&)> *
               )&local_940);
    uVar34 = (ulonglong)(uVar55 + 1);
    local_6d8 = 0;
    uVar58 = uVar58 + 0x28;
    if (local_6e0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_6e0);
    }
    iVar16 = SUB84(local_720._8_8_,4);
    local_720._8_8_ = local_720._8_8_ & 0xffffffff00000000;
    if (iVar16 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)local_720,0,(int *)(local_720 + 0xc));
    }
    uVar43 = local_6f8._4_4_;
    uStack_6f0 = 0xffffffff;
    local_6f8 = (ulonglong)local_6f8._4_4_ << 0x20;
    if (0x80 < uVar43) {
      local_6f8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_720 + 0x10),0);
    }
    if (local_700 != (void *)0x0) {
      FMemory::Free(local_700);
    }
    if ((FScriptContainerElement *)local_720._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_720._0_8_);
    }
    if ((FScriptContainerElement *)local_730._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_730._0_8_);
    }
    TStack_9a8.UnvisitedBitMask = TStack_9a8.UnvisitedBitMask & ~TStack_9a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9a8);
    pTVar46 = local_a50;
    pFVar60 = local_b98;
  }
  FVar48 = (ForElementType<unsigned___int64>)&local_6b8;
  if (local_6b8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
    FVar48 = local_6b8.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,TLess<void>_>_>
            ((ulong64 *)FVar48,local_4b0,local_ba4[0],(TLess<void> *)local_ba4);
  uVar55 = local_4b0;
  uVar58 = (ulonglong)(int)local_4b0;
  uVar34 = 0;
  uVar43 = 0;
  FVar48 = (ForElementType<unsigned___int64>)&local_6b8;
  if (local_6b8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
    FVar48 = local_6b8.SecondaryData;
  }
  FVar27 = (ForElementType<unsigned___int64>)((longlong)FVar48 + uVar58 * 8);
  uVar40 = uVar34;
  while( true ) {
    if ((uint)uVar58 != uVar55) {
      local_ba6 = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_ba6);
      uVar58 = (ulonglong)local_4b0;
    }
    pFVar13 = local_a70;
    uVar51 = (uint)uVar40;
    if (FVar48 == FVar27) break;
    uVar40 = (ulonglong)
             (uVar51 ^ (int)(uVar40 >> 2) + -0x61c88647 +
                       uVar51 * 0x40 + (int)*(ulong64 *)FVar48 +
                       (int)(*(ulong64 *)FVar48 >> 0x20) * 0x17);
    FVar48 = (ForElementType<unsigned___int64>)((longlong)FVar48 + 8);
  }
  uVar55 = local_ba0 ^ (local_ba0 >> 2) + 0x9e3779b9 + local_ba0 * 0x40 + uVar51;
  local_ba0 = uVar55;
  UE::Core::Private::Function::CheckCallable(*(void **)&local_a70->GetBestResult);
  pcVar8 = *(code **)&pFVar13->GetBestResult;
  plVar5 = *(longlong **)&(pFVar13->GetBestResult).field_0x28;
  plVar36 = (longlong *)&(pFVar13->GetBestResult).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar36 = plVar5;
  }
  (**(code **)(*plVar36 + 8))();
  (*pcVar8)(&local_a90);
  if ((local_a90 == -1) ||
     (bVar15 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)&local_a8c,
                          (void *)0x0), bVar15)) {
    fVar68 = 0.0;
  }
  else {
    fVar68 = local_a7c;
    if ((local_a7c == __real_7f7fffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsAssetTimeValid(AssetTime)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                            ,0x4a,L""), fVar68 = local_a7c, bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar61 = __real_3c888889;
  iVar16 = (pFVar60->AnimContexts).ArrayNum;
  pFVar44 = pFVar60;
  if (iVar16 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_14a940dbb:
    pFVar6 = (FSearchContext *)(pFVar60->AnimContexts).AllocatorInstance.SecondaryData.Data;
    iVar16 = (pFVar60->AnimContexts).ArrayNum;
    pFVar49 = pFVar60;
    if (pFVar6 != (FSearchContext *)0x0) {
      pFVar49 = pFVar6;
    }
    if (iVar16 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_14a940dfb:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (iVar16 < 1) goto LAB_14a940dfb;
    lVar35 = *(longlong *)(pFVar49->AnimContexts).AllocatorInstance.InlineData;
    if (0 < *(int *)(lVar35 + 0x80)) {
      if ((*(int *)(lVar35 + 0x80) < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this = *(UAnimInstance **)(lVar35 + 0x60);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (this == (UAnimInstance *)0x0) goto LAB_14a940ed1;
        UE::GC::MarkAsReachable((UObject *)this);
      }
      if (this != (UAnimInstance *)0x0) {
        pUVar28 = Z_Construct_UClass_UAnimInstance_NoRegister();
        iVar16 = (int)pUVar28->_padding_;
        if (((iVar16 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
             &pUVar28->_padding_)) &&
           (fVar61 = UAnimInstance::GetDeltaSeconds(this), fVar61 <= __real_322bcc77))
        goto LAB_14a941515;
      }
    }
  }
  else if (iVar16 != 0) goto LAB_14a940dbb;
LAB_14a940ed1:
  dVar12 = __real_405ca5dc1a63c1f8;
  dVar11 = __real_bff0000000000000;
  dVar62 = __real_3ff0000000000000;
  uVar65 = SUB84(__real_bff0000000000000,0);
  uVar58 = (ulonglong)__real_bff0000000000000 >> 0x20;
  uVar67 = SUB84(__real_3ff0000000000000,0);
  uVar40 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  if ((pFVar60->CachedQueries).ArrayNum != 0) {
    iVar16 = *(int *)&(pFVar60->RoleToIndex).field_0x58;
    iVar38 = *(int *)&(pFVar60->RoleToIndex).field_0x7c;
    uVar51 = 0;
    pTVar37 = &pFVar60->RoleToIndex;
    fStack_b34 = 0.0;
    fStack_b30 = 0.0;
    uVar55 = *(uint *)&(pFVar60->RoleToIndex).field_0x70;
    pTStack_b80 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar60->RoleToIndex).field_0x60;
    TStack_978.CurrentBitIndex = uVar51;
    if (uVar55 != 0) {
      puVar54 = *(uint **)&(pFVar60->RoleToIndex).field_0x68;
      if (puVar54 == (uint *)0x0) {
        puVar54 = (uint *)pTStack_b80;
      }
      uVar53 = *puVar54;
      uVar52 = uVar34;
      uVar43 = 0;
      uVar51 = 0;
      while (uVar53 == 0) {
        uVar43 = (int)uVar34 + 1;
        uVar34 = (ulonglong)uVar43;
        uVar51 = (int)uVar52 + 0x20;
        uVar52 = (ulonglong)uVar51;
        TStack_978.CurrentBitIndex = uVar55;
        if ((int)((uVar55 - 1) + ((int)(uVar55 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar43)
        goto LAB_14a940fa4;
        uVar53 = puVar54[(int)uVar43];
      }
      local_aa8 = (ulonglong)(~(uVar53 - 1) & uVar53);
      uVar34 = local_aa8 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      local_a08 = (int)lVar35;
      TStack_978.CurrentBitIndex = (uVar51 - 1) + local_a08;
      if ((int)uVar55 < TStack_978.CurrentBitIndex) {
        TStack_978.CurrentBitIndex = uVar55;
      }
    }
LAB_14a940fa4:
    uVar53 = *(uint *)&(pFVar60->RoleToIndex).field_0x70;
    puVar2 = &(pFVar60->RoleToIndex).field_0x60;
    uVar55 = uVar53 & 0xffffffe0;
    local_b68 = *(int *)&(pFVar60->RoleToIndex).field_0x58 -
                *(int *)&(pFVar60->RoleToIndex).field_0x7c;
    local_b9c = -1 << ((byte)uVar53 & 0x1f);
    lStack_b88 = CONCAT44((int)local_aa8,uVar43);
    uStack_b78 = CONCAT44(TStack_978.CurrentBitIndex,0xffffffff);
    uStack_b70 = CONCAT44(local_744,uVar51);
    iVar39 = (int)uVar53 >> 5;
    uStack_958 = CONCAT44(uStack_b64,local_b68);
    TStack_978.UnvisitedBitMask = 0xffffffff;
    TStack_978._24_8_ = uStack_b70;
    local_b90 = pTVar37;
    local_980 = pTVar37;
    TStack_978._padding_ = lStack_b88;
    TStack_978.Array =
         (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)pTStack_b80;
    if ((((int)uVar53 < 0) || (*(int *)&(pFVar60->RoleToIndex).field_0x70 < (int)uVar53)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar44 = local_b98;
    uVar51 = __xmm_80000000800000008000000080000000;
    uVar43 = *(uint *)&(pFVar60->RoleToIndex).field_0x70;
    if (uVar53 != uVar43) {
      puVar7 = *(undefined1 **)&(pFVar60->RoleToIndex).field_0x68;
      puVar50 = puVar2;
      if (puVar7 != (undefined1 *)0x0) {
        puVar50 = puVar7;
      }
      uVar53 = local_b9c & *(uint *)(puVar50 + (longlong)iVar39 * 4);
      while (uVar53 == 0) {
        iVar39 = iVar39 + 1;
        uVar55 = uVar55 + 0x20;
        uVar53 = uVar43;
        if ((int)(((int)(uVar43 - 1) >> 0x1f & 0x1fU) + (uVar43 - 1)) >> 5 < iVar39)
        goto LAB_14a9410d0;
        uVar53 = *(uint *)(puVar50 + (longlong)iVar39 * 4);
      }
      uVar34 = (ulonglong)(~(uVar53 - 1) & uVar53) * 2 + 1;
      lVar35 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      local_a04 = (int)lVar35;
      uVar53 = (uVar55 - 1) + local_a04;
      if ((int)uVar43 < (int)uVar53) {
        uVar53 = uVar43;
      }
    }
LAB_14a9410d0:
    while( true ) {
      pTVar42 = local_980;
      if (*(int *)&local_980->field_0x58 - *(int *)&local_980->field_0x7c != (int)uStack_958) {
        local_ba5 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_ba5);
      }
      lVar35 = (longlong)TStack_978.CurrentBitIndex;
      if (((TStack_978.CurrentBitIndex == uVar53) &&
          (TStack_978.Array ==
           (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar2)) &&
         (param_3 = local_ab0, uVar55 = local_ba0, pTVar42 == pTVar37)) break;
      if (*(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
            **)&pTVar42->field_0x50 !=
          (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
           *)0x0) {
        pTVar42 = *(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    **)&pTVar42->field_0x50;
      }
      UE::PoseSearch::FSearchContext::GetWorldBoneTransformAtTime
                (pFVar44,&local_278,(float)((uint)fVar61 ^ uVar51),
                 (FName *)(&pTVar42->field_0x0 + lVar35 * 0x14),'\0');
      UE::PoseSearch::FSearchContext::GetWorldBoneTransformAtTime
                (pFVar44,&local_158,0.0,(FName *)(&pTVar42->field_0x0 + lVar35 * 0x14),'\0');
      UE::Math::TTransform<double>::GetRelativeTransform(&local_158,&local_3e8,&local_278);
      local_828 = local_3e8.Translation.XY.m128d_f64[0];
      dStack_820 = local_3e8.Translation.XY.m128d_f64[1];
      local_818 = local_3e8.Translation.ZW.m128d_f64[0];
      dVar64 = dVar62 / (double)((float)(iVar16 - iVar38) * fVar61);
      fStack_b34 = (float)(SQRT(local_3e8.Translation.XY.m128d_f64[0] *
                                local_3e8.Translation.XY.m128d_f64[0] +
                                local_3e8.Translation.XY.m128d_f64[1] *
                                local_3e8.Translation.XY.m128d_f64[1] +
                                local_3e8.Translation.ZW.m128d_f64[0] *
                                local_3e8.Translation.ZW.m128d_f64[0]) * dVar64 + (double)fStack_b34
                          );
      dVar63 = dVar11;
      if ((dVar11 <= local_3e8.Rotation.ZW.m128d_f64[1]) &&
         (dVar63 = local_3e8.Rotation.ZW.m128d_f64[1], dVar62 <= local_3e8.Rotation.ZW.m128d_f64[1])
         ) {
        dVar63 = dVar62;
      }
      dVar63 = acos(dVar63);
      TStack_978.UnvisitedBitMask = TStack_978.UnvisitedBitMask & ~TStack_978._padding_._4_4_;
      fStack_b30 = (float)(dVar63 * dVar12 * dVar64 + (double)fStack_b30);
      TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit(&TStack_978);
    }
  }
  if ((local_a90 == -1) ||
     (bVar15 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)&local_a8c,
                          (void *)0x0), bVar15)) {
    FWeakObjectPtr::Get(&local_a8c);
  }
  else {
    pUVar29 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&local_a8c);
    this_00 = UPoseSearchDatabase::GetSearchIndex(pUVar29);
    pFVar30 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose
                        ((FSearchIndexBase *)this_00,local_a90);
    pUVar29 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&local_a8c);
    if ((pFVar30 != (FSearchIndexAsset *)0x0) && (pUVar29 != (UPoseSearchDatabase *)0x0)) {
      pFVar31 = UPoseSearchDatabase::GetDatabaseAnimationAsset(pUVar29,pFVar30);
      if ((pFVar31 == (FPoseSearchDatabaseAnimationAsset *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("DatabaseAsset",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                              ,0x34e,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar32 = (UAnimationAsset *)(**(code **)(pFVar31->_padding_ + 8))(pFVar31);
      if (pUVar32 == (UAnimationAsset *)0x0) {
LAB_14a941317:
        pUVar32 = (UAnimationAsset *)0x0;
      }
      else {
        pUVar28 = Z_Construct_UClass_UAnimationAsset_NoRegister();
        iVar16 = (int)pUVar28->_padding_;
        if ((*(int *)(pUVar32->_padding_ + 0x38) < iVar16) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar32->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
            &pUVar28->_padding_)) goto LAB_14a941317;
      }
      if (pUVar32 != (UAnimationAsset *)0x0) {
        UE::PoseSearch::FAnimationAssetSampler::FAnimationAssetSampler
                  (&local_328,pUVar32,&UE::Math::TTransform<double>::Identity,
                   &UE::Math::TVector<double>::ZeroVector,0x1e,true,false);
        UE::PoseSearch::FAnimationAssetSampler::ExtractRootTransform(&local_328,&local_388,fVar68);
        UE::PoseSearch::FAnimationAssetSampler::ExtractRootTransform
                  (&local_328,&local_218,param_4 * fVar61 + fVar68);
        UE::Math::TTransform<double>::GetRelativeTransform(&local_388,&local_4a8,&local_218);
        local_810 = local_4a8.Translation.XY.m128d_f64[0];
        dStack_808 = local_4a8.Translation.XY.m128d_f64[1];
        dVar64 = dVar62 / (double)fVar61;
        local_800 = local_4a8.Translation.ZW.m128d_f64[0];
        fStack_b2c = (float)(SQRT(local_4a8.Translation.XY.m128d_f64[0] *
                                  local_4a8.Translation.XY.m128d_f64[0] +
                                  local_4a8.Translation.XY.m128d_f64[1] *
                                  local_4a8.Translation.XY.m128d_f64[1] +
                                  local_4a8.Translation.ZW.m128d_f64[0] *
                                  local_4a8.Translation.ZW.m128d_f64[0]) * dVar64);
        dVar63 = dVar11;
        if ((dVar11 <= local_4a8.Rotation.ZW.m128d_f64[1]) &&
           (dVar63 = local_4a8.Rotation.ZW.m128d_f64[1],
           dVar62 <= local_4a8.Rotation.ZW.m128d_f64[1])) {
          dVar63 = dVar62;
        }
        dVar63 = acos(dVar63);
        local_b28 = CONCAT44(local_b28._4_4_,(float)(dVar63 * dVar12 * dVar64));
        UE::PoseSearch::FAnimationAssetSampler::ExtractRootTransform
                  (&local_328,&local_1b8,fVar61 + fVar68);
        UE::Math::TTransform<double>::GetRelativeTransform(&local_388,&local_448,&local_1b8);
        local_7f8 = local_448.Translation.XY.m128d_f64[0];
        dStack_7f0 = local_448.Translation.XY.m128d_f64[1];
        local_7e8 = local_448.Translation.ZW.m128d_f64[0];
        uStack_b20 = CONCAT44(uStack_b20._4_4_,
                              (float)(SQRT(local_448.Translation.XY.m128d_f64[0] *
                                           local_448.Translation.XY.m128d_f64[0] +
                                           local_448.Translation.XY.m128d_f64[1] *
                                           local_448.Translation.XY.m128d_f64[1] +
                                           local_448.Translation.ZW.m128d_f64[0] *
                                           local_448.Translation.ZW.m128d_f64[0]) * dVar64));
        uVar66 = (int)uVar58;
        if ((dVar11 <= local_448.Rotation.ZW.m128d_f64[1]) &&
           (uVar65 = SUB84(local_448.Rotation.ZW.m128d_f64[1],0),
           uVar66 = (int)((ulonglong)local_448.Rotation.ZW.m128d_f64[1] >> 0x20),
           dVar62 <= local_448.Rotation.ZW.m128d_f64[1])) {
          uVar65 = uVar67;
          uVar66 = (int)uVar40;
        }
        dVar62 = acos((double)CONCAT44(uVar66,uVar65));
        uStack_b20 = CONCAT44((float)(dVar62 * dVar12 * dVar64),(undefined4)uStack_b20);
        UE::PoseSearch::FAnimationAssetSampler::~FAnimationAssetSampler(&local_328);
      }
    }
  }
  local_b28 = CONCAT44(param_4,(undefined4)local_b28);
LAB_14a941515:
  local_b40 = CONCAT44(fVar68,param_3);
  local_b18 = CONCAT44(local_a84,fVar69);
  local_b10 = 0;
  local_b38 = fVar61;
  QueryPerformanceCounter(&local_9e8);
  iVar16 = (pFVar44->AnimContexts).ArrayNum;
  local_b58 = local_9e8;
  pFVar60 = (FSearchContext *)(pFVar44->AnimContexts).AllocatorInstance.SecondaryData.Data;
  if (pFVar60 != (FSearchContext *)0x0) {
    pFVar44 = pFVar60;
  }
  if ((iVar16 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = &pFVar44->AnimContexts;
  for (; pFVar44 !=
         (FSearchContext *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar16 * 8);
      pFVar44 = (FSearchContext *)((pFVar44->AnimContexts).AllocatorInstance.InlineData + 8)) {
    lVar35 = *(longlong *)(pFVar44->AnimContexts).AllocatorInstance.InlineData;
    if (*(int *)(lVar35 + 0x80) < 1) {
      pUVar19 = (UObject *)0x0;
    }
    else {
      if ((*(int *)(lVar35 + 0x80) < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar19 = *(UObject **)(lVar35 + 0x60);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar19);
      }
    }
    FObjectTrace::OutputObject(pUVar19);
    local_b50 = FObjectTrace::GetObjectId(pUVar19);
    local_928._padding_ = 0;
    local_928.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_aa0 = (uchar *)0x0;
    local_928.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_928.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_a98 = 0;
    local_928.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_928._40_8_ = 0;
    local_a68 = 0;
    local_928.ArSerializingDefaults = 0;
    local_928.ArPortFlags = 0;
    local_928.ArMaxSerializeSize = 0;
    local_928.ArUEVer.FileVersionUE4 = 0;
    local_928.ArUEVer.FileVersionUE5 = 0;
    local_928.ArLicenseeUEVer = 0;
    local_928.ArEngineVer.Major = 0;
    local_928.ArEngineVer.Minor = 0;
    local_928.ArEngineVer.Patch = 0;
    local_928.ArEngineVer._6_2_ = 0;
    local_928.ArEngineVer.Changelist = 0;
    local_928.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_928.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_928.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_928.SerializedProperty = (FProperty *)0x0;
    local_928.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_928.bCustomVersionsAreReset = false;
    local_928._129_7_ = 0;
    local_928.NextProxy = (FArchiveState *)0x0;
    local_b48 = uVar55;
    FArchiveState::FArchiveState(&local_928);
    local_898 = 0;
    local_928._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_890 = &local_aa0;
    local_888 = local_a68;
    FArchiveState::SetIsSaving(&local_928,true);
    (**(code **)(local_928._padding_ + 0x108))(&local_928,0);
    local_a60.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_928._padding_ = (longlong)&___7FMemoryWriter__6B_;
    local_a60.Versions.ArrayNum = 0;
    local_a60.Versions.ArrayMax = 0;
    pFVar33 = ::FName::FName(local_878,L"Dev-PoseSearch-Version");
    local_868 = FPoseSearchCustomVersion::GUID;
    FCustomVersionContainer::SetVersion(&local_a60,&local_868,2,*pFVar33);
    (**(code **)(local_928._padding_ + 0x68))(&local_928,&local_a60);
    UE::PoseSearch::operator<<
              ((FArchive *)&local_928,(FTraceMotionMatchingStateMessage *)&local_b58.s);
    if (-1 < PoseSearchChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FPoseSearchMotionMatchingState3Fields>(&local_6c8);
      UE::Trace::Private::Field_WriteAuxData(0,local_aa0,(uint)local_a98 & 0x7ffff);
      lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar35 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar35 = *(longlong *)(lVar35 + 0x20);
      **(undefined1 **)(lVar35 + 0x20) = 6;
      *(longlong *)(lVar35 + 0x20) = *(longlong *)(lVar35 + 0x20) + 1;
      if (lVar35 != local_6c8._8_8_) {
        *(undefined8 *)(lVar35 + 0x28) = *(undefined8 *)(lVar35 + 0x20);
      }
      *(undefined8 *)(local_6c8._8_8_ + 0x28) = *(undefined8 *)(local_6c8._8_8_ + 0x20);
    }
    if (local_a60.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a60.Versions.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_928);
    if (local_aa0 != (uchar *)0x0) {
      FMemory::Free(local_aa0);
    }
  }
  if (local_6b8.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_6b8.SecondaryData);
  }
LAB_14a941853:
  DestructItems<UE::PoseSearch::FArchivedPoseHistory,int>
            ((FArchivedPoseHistory *)local_ad8.AllocatorInstance.Data,local_ad8.ArrayNum);
  if ((FArchivedPoseHistory *)local_ad8.AllocatorInstance.Data != (FArchivedPoseHistory *)0x0) {
    FMemory::Free(local_ad8.AllocatorInstance.Data);
  }
  DestructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
            ((FTraceMotionMatchingStateDatabaseEntry *)local_ae8.AllocatorInstance.Data,
             local_ae8.ArrayNum);
  if ((FTraceMotionMatchingStateDatabaseEntry *)local_ae8.AllocatorInstance.Data !=
      (FTraceMotionMatchingStateDatabaseEntry *)0x0) {
    FMemory::Free(local_ae8.AllocatorInstance.Data);
  }
  if (local_af8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Data);
  }
  if (local_b08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b08.Data);
  }
  return;
}

// UpdateMotionMatchingState @ 14a944100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchLibrary::UpdateMotionMatchingState
          (FAnimationUpdateContext *param_1,
          TArray<TObjectPtr<UPoseSearchDatabase_const_>,TSizedDefaultAllocator<32>_> *param_2,
          float param_3,int param_4,FFloatInterval *param_5,float param_6,float param_7,
          FFloatInterval *param_8,FMotionMatchingState *param_9,EPoseSearchInterruptMode param_10,
          bool param_11,bool param_12,bool param_13,bool param_14)

{
  float fVar1;
  int iVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  FName *pFVar8;
  FPoseHistoryProvider *this;
  IPoseHistory *pIVar9;
  float fVar10;
  undefined1 auStackY_1b8 [32];
  FPoseSearchEvent local_148;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FName local_118;
  TSharedRef<FTokenizedMessage,1> local_110;
  TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> local_f8;
  FText local_e8;
  FChooserEvaluationContext local_d8;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_2->ArrayNum == 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_e8,L"PoseSearchLibrary",L"NoDatabases",
                        L"No database assets provided for motion matching.");
    pTVar7 = FTokenizedMessage::Create(&local_110,Error,pFVar6);
    pFVar8 = ::FName::FName(&local_118,"Update");
    FAnimationBaseContext::LogMessageInternal((FAnimationBaseContext *)param_1,*pFVar8,pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.SharedReferenceCount.ReferenceController);
    pIVar3 = (pFVar6->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
  }
  else {
    pIVar9 = (IPoseHistory *)0x0;
    this = FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>
                     ((FAnimationBaseContext *)param_1);
    if (this != (FPoseHistoryProvider *)0x0) {
      pIVar9 = UE::PoseSearch::FPoseHistoryProvider::GetPoseHistory(this);
    }
    if ((param_1->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Context.AnimInstanceProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                           ,0x3a1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_d8.DebuggingInfo.CurrentChooser = (UObject *)0x0;
    local_d8.DebuggingInfo.bCurrentDebugTarget = false;
    local_d8.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
    local_d8.Params.ArrayNum = 0;
    local_d8.Params.ArrayMax = 4;
    local_d8.ObjectParams.ArrayNum = 0;
    local_d8.ObjectParams.ArrayMax = 4;
    FChooserEvaluationContext::AddObjectParam(&local_d8,*(UObject **)(param_1->_padding_ + 0x140));
    local_148.EventTag.TagName.ComparisonIndex.Value = 0;
    local_148.EventTag.TagName.Number = 0;
    local_148.TimeToEvent = 0.0;
    local_148.bEnablePoseFilters = false;
    local_148.bUsePlayRateRangeOverride = true;
    local_148._padding_ = 0;
    local_148.PlayRateRangeOverride._0_4_ = 0x3f800000;
    local_148.PlayRateRangeOverride._4_4_ = 0x3f800000;
    fVar10 = __real_7f7fc99e;
    if (param_11) {
      fVar10 = param_7;
    }
    local_128 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    fVar1 = param_1->DeltaTime;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_f8._12_4_ = uStack_11c;
    local_f8.ArrayNum = iVar2;
    local_f8.DataPtr = (TObjectPtr<UPoseSearchDatabase_const_> *)local_128;
    iStack_120 = iVar2;
    UpdateMotionMatchingState
              (&local_d8,pIVar9,&local_f8,fVar1,param_5,param_6,fVar10,param_8,param_9,param_10,
               param_12,param_13,param_14,&local_148);
    if (local_d8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
      FMemory::Free((void *)local_d8.Params.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// UpdateMotionMatchingState @ 14a9443a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPoseSearchLibrary::UpdateMotionMatchingState
          (FChooserEvaluationContext *param_1,IPoseHistory *param_2,
          TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *param_3,float param_4,
          FFloatInterval *param_5,float param_6,float param_7,FFloatInterval *param_8,
          FMotionMatchingState *param_9,EPoseSearchInterruptMode param_10,bool param_11,
          bool param_12,bool param_13,FPoseSearchEvent *param_14)

{
  TObjectPtr<UPoseSearchDatabase_const_> *pTVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 this;
  UPoseSearchDatabase *pUVar5;
  UPoseSearchSchema *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ForAnyElementType FVar10;
  IPoseHistory *pIVar11;
  TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *pTVar12;
  FName FVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_static_void___cdecl_UPoseSearchLibrary::UpdateMotionMatchingState(FChooserEvaluationContext_*,UE::PoseSearch::IPoseHistory_const_*,TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int>,float,FFloatInterval_const_&,float,float,FFloatInterval_const_&,FMotionMatchingState_&,EPoseSearchInterruptMode,bool,bool,bool,FPoseSearchEvent_const_&)_::_2_::FStat_STAT_PoseSearch_Update>
  FVar20;
  uint *puVar21;
  FTlsAutoCleanup *pFVar22;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 TVar23;
  wchar_t *pwVar24;
  size_t sVar25;
  void *pvVar26;
  FPoseIndicesHistory *this_00;
  undefined8 uVar27;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 *pTVar28;
  longlong *plVar29;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 *pTVar30;
  ulong64 uVar31;
  uint uVar32;
  FName FVar33;
  UPoseSearchSchema *pUVar34;
  wchar_t *pwVar35;
  bool bVar36;
  float fVar37;
  undefined1 auStackY_3a38 [32];
  undefined1 local_39d6 [6];
  undefined1 local_39d0 [8];
  undefined4 uStack_39c8;
  FPoseSearchCost FStack_39c4;
  undefined8 local_39c0;
  uint local_39b8;
  FName local_39b0;
  longlong local_39a8;
  FColor_u_0 local_39a0;
  FPoseSearchCost local_399c;
  FPoseSearchCost local_3998 [2];
  FPoseSearchEvent *local_3990;
  FFloatInterval *local_3988;
  FMemMark local_3980;
  FString local_3958;
  FName local_3948;
  FName local_3940;
  FName local_3938;
  IPoseHistory *local_3930;
  FName local_3928;
  undefined1 local_3918 [12];
  FPoseSearchCost local_390c;
  int local_3908;
  float local_3904;
  bool local_3900;
  TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *local_38f8;
  FString local_38f0;
  FName local_38e0;
  FMotionMatchingState *local_38d8;
  UPoseSearchDatabase *local_38d0;
  TObjectPtr<UObject>_u_0 local_38c8;
  undefined4 local_38c0;
  undefined1 local_38bc;
  undefined2 local_38bb;
  undefined1 local_38b9;
  undefined8 local_38b8;
  double local_38b0;
  double dStack_38a8;
  double local_38a0;
  undefined8 local_3898;
  undefined4 local_3890;
  undefined1 local_388c;
  undefined2 local_388b;
  undefined1 local_3889;
  FName local_3888;
  void *local_3880;
  undefined8 local_3878;
  void *local_3870;
  undefined8 local_3868;
  void *local_3860;
  undefined8 local_3858;
  code *local_3850;
  undefined1 *local_3848;
  int local_3840 [3];
  float fStack_3834;
  int local_3830;
  float fStack_382c;
  undefined4 local_3828;
  FName local_3824;
  FName local_381c;
  FPoseSearchEvent local_3810;
  TObjectPtr<UPoseSearchDatabase_const_> *local_37f8;
  undefined8 uStack_37f0;
  FSearchResults_Single local_37e8;
  TStringBuilderBase<wchar_t> local_36c8;
  wchar_t local_36a8 [1024];
  FSearchResults_Single local_2ea8;
  undefined1 local_2d88 [232];
  void *local_2ca0;
  undefined4 local_2c98;
  ForAnyElementType local_2c88;
  int local_2c5c;
  undefined4 uStack_2c58;
  undefined8 uStack_2c54;
  undefined8 local_2c4c;
  undefined4 local_2c44;
  bool local_2c2c;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_2c08;
  undefined4 local_b40;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_998;
  undefined4 local_e0;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  ulonglong local_78;
  undefined8 uStack_48;
  
  uStack_48 = 0x14a9443bf;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_3a38;
  local_3988 = param_8;
  local_3990 = param_14;
  local_38d8 = param_9;
  local_3930 = param_2;
  local_38f8 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_Update ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_UPoseSearchLibrary::UpdateMotionMatchingState(FChooserEvaluationContext_*,UE::PoseSearch::IPoseHistory_const_*,TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int>,float,FFloatInterval_const_&,float,float,FFloatInterval_const_&,FMotionMatchingState_&,EPoseSearchInterruptMode,bool,bool,bool,FPoseSearchEvent_const_&)_::_2_::FStat_STAT_PoseSearch_Update>
         )0x0) {
      pFVar19 = ::FName::FName(&local_381c,"STAT_PoseSearch_Update");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_Update,*pFVar19,
                 L"STAT_PoseSearch_Update","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_PoseSearch_Update;
  if (StatPtr_STAT_PoseSearch_Update ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_UPoseSearchLibrary::UpdateMotionMatchingState(FChooserEvaluationContext_*,UE::PoseSearch::IPoseHistory_const_*,TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int>,float,FFloatInterval_const_&,float,float,FFloatInterval_const_&,FMotionMatchingState_&,EPoseSearchInterruptMode,bool,bool,bool,FPoseSearchEvent_const_&)_::_2_::FStat_STAT_PoseSearch_Update>
       )0x0) {
    pFVar19 = ::FName::FName(&local_3824,"STAT_PoseSearch_Update");
    FVar20 = (FThreadSafeStaticStat<_public:_static_void___cdecl_UPoseSearchLibrary::UpdateMotionMatchingState(FChooserEvaluationContext_*,UE::PoseSearch::IPoseHistory_const_*,TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int>,float,FFloatInterval_const_&,float,float,FFloatInterval_const_&,FMotionMatchingState_&,EPoseSearchInterruptMode,bool,bool,bool,FPoseSearchEvent_const_&)_::_2_::FStat_STAT_PoseSearch_Update>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_Update,*pFVar19,
                          L"STAT_PoseSearch_Update","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar8 = false;
  bVar9 = false;
  local_3928.ComparisonIndex.Value = 0;
  local_3928.Number = 0;
  FVar33 = *(FName *)FVar20;
  bVar14 = false;
  bVar15 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_14a94457c:
    bVar9 = bVar15;
    bVar8 = bVar14;
    bVar14 = false;
    local_3938 = local_3928;
    FVar33 = local_3928;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_39a0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_39a0._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3948.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_3948.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3948,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                   ,0x3db);
        bVar8 = true;
        bVar9 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a94457c;
    local_39b0 = FVar33;
    local_3938 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar14 = true;
  }
  puVar21 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_3848 = local_39d6;
  local_3850 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar22 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_3850,puVar21);
  local_3980.Mem = (FMemStackBase *)(pFVar22 + 2);
  local_3980.Top = (local_3980.Mem)->Top;
  local_3980.SavedChunk = *(FTaggedMemory **)(pFVar22 + 4);
  local_3980.bPopped = false;
  local_3980.NextTopmostMark = *(FMemMark **)(pFVar22 + 5);
  pFVar22[5] = (FTlsAutoCleanup)&local_3980;
  *(int *)(pFVar22 + 6) = *(int *)(pFVar22 + 6) + 1;
  FPoseSearchEvent::GetPlayRateOverriddenEvent(local_3990,&local_3810,local_3988);
  UE::PoseSearch::FSearchContext::FSearchContext
            ((FSearchContext *)local_2d88,0.0,param_5,&local_3810);
  local_3940 = UE::PoseSearch::DefaultRole;
  pTVar30 = &param_3->DataPtr->field0_0x0;
  FVar13 = local_3940;
  if (param_3->ArrayNum != 0) {
    if ((param_3->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar13 = local_3940;
    if (((pTVar30->DebugPtr != (UPoseSearchDatabase *)0x0) &&
        (lVar4 = *(longlong *)((longlong)pTVar30->DebugPtr + 0x30), lVar4 != 0)) &&
       (FVar13 = UE::PoseSearch::DefaultRole, *(int *)(lVar4 + 0x40) != 0)) {
      if ((*(int *)(lVar4 + 0x40) < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar13 = *(FName *)(*(longlong *)(lVar4 + 0x38) + 0x10);
    }
  }
  local_3940 = FVar13;
  UE::PoseSearch::FSearchContext::AddRole
            ((FSearchContext *)local_2d88,&local_3940,param_1,local_3930);
  fVar37 = __real_3f800000;
  this = (TObjectPtr<UPoseSearchDatabase_const_>_u_0)
         (param_9->SearchResult).SelectedDatabase.field0_0x0.DebugPtr;
  if ((param_10 == DoNotInterrupt) || (param_10 == InterruptOnDatabaseChange)) {
LAB_14a944739:
    pUVar5 = (param_9->SearchResult).SelectedDatabase.field0_0x0.DebugPtr;
    local_390c.TotalCost = (param_9->SearchResult).SearchCost;
    if (pUVar5 == (UPoseSearchDatabase *)0x0) {
      local_3918._0_4_ = -1;
    }
    else {
      local_3918._0_4_ =
           UPoseSearchDatabase::GetPoseIndex
                     (pUVar5,(param_9->SearchResult).SelectedAnim.field0_0x0.DebugPtr,
                      (param_9->SearchResult).SelectedTime,(param_9->SearchResult).bIsMirrored,
                      &(param_9->SearchResult).BlendParameters);
    }
    pUVar5 = (param_9->SearchResult).SelectedDatabase.field0_0x0.DebugPtr;
    local_3908 = -1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UPoseSearchDatabase *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UPoseSearchDatabase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    local_39b0.ComparisonIndex.Value = 0;
    local_39b0.Number = 0;
    local_38d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UPoseSearchDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_39b0,(FObjectPtr)&local_38d0);
    local_3904 = (param_9->SearchResult).SelectedTime;
    local_3918._4_4_ = local_39b0.ComparisonIndex.Value;
    local_3918._8_4_ = local_39b0.Number;
    local_3900 = (param_9->SearchResult).bIsContinuingPoseSearch;
    UE::PoseSearch::FSearchContext::UpdateContinuingPoseSearchResult
              ((FSearchContext *)local_2d88,(FSearchResult *)local_3918,
               (FDatabasePoseIdx *)local_3918);
  }
  else {
    if (param_10 != InterruptOnDatabaseChangeAndInvalidateContinuingPose) {
      if (param_10 != ForceInterrupt) {
        if (param_10 == ForceInterruptAndInvalidateContinuingPose) goto LAB_14a9447be;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                            ,0x19e,L"");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      goto LAB_14a944739;
    }
    pTVar28 = &param_3->DataPtr->field0_0x0;
    pTVar30 = pTVar28 + param_3->ArrayNum;
    for (; pTVar28 != pTVar30; pTVar28 = pTVar28 + 1) {
      if (pTVar28->DebugPtr == (UPoseSearchDatabase *)0x0) {
        bVar15 = this.DebugPtr == (UPoseSearchDatabase *)0x0;
      }
      else {
        bVar15 = pTVar28->DebugPtr == this.DebugPtr;
      }
      if (bVar15) {
        bVar15 = false;
        goto LAB_14a9447b6;
      }
    }
    bVar15 = true;
LAB_14a9447b6:
    if (!bVar15) goto LAB_14a944739;
LAB_14a9447be:
    local_38b8 = 0x3f800000;
    local_38bb = 0;
    local_38b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_38a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_38b9 = 0;
    local_388b = 0;
    local_3889 = 0;
    local_38c0 = 0;
    local_38bc = 0;
    local_388c = 0;
    local_38a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_38c8.DebugPtr = (UObject *)0x0;
    local_3898 = 0;
    local_3890 = 0x7f7fffff;
    local_3888 = UE::PoseSearch::DefaultRole;
    local_3880 = (void *)0x0;
    local_3878 = 0;
    local_3870 = (void *)0x0;
    local_3868 = 0;
    local_3860 = (void *)0x0;
    local_3858 = 0;
    FPoseSearchBlueprintResult::operator=
              (&param_9->SearchResult,(FPoseSearchBlueprintResult *)&local_38c8.ObjectPtr);
    if (local_3860 != (void *)0x0) {
      FMemory::Free(local_3860);
    }
    if (local_3870 != (void *)0x0) {
      FMemory::Free(local_3870);
    }
    if (local_3880 != (void *)0x0) {
      FMemory::Free(local_3880);
    }
  }
  local_39d0._0_4_ = 0xffffffff;
  local_39d0._4_4_ = 0;
  uStack_39c8 = 0;
  FStack_39c4.TotalCost = 3.4028235e+38;
  local_39c0._0_4_ = -1;
  local_39c0._4_4_ = 3.4028235e+38;
  local_39b8 = local_39b8 & 0xffffff00;
  local_39a8 = CONCAT44(local_39a8._4_4_,local_2c5c);
  if ((local_2c5c == -1) ||
     (param_7 < param_9->ElapsedPoseSearchTime || param_7 == param_9->ElapsedPoseSearchTime)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if (!bVar15) {
    pTVar30 = &param_3->DataPtr->field0_0x0;
    iVar3 = param_3->ArrayNum;
    param_9->ElapsedPoseSearchTime = param_4 + param_9->ElapsedPoseSearchTime;
    local_39b8 = CONCAT31(SUB43(local_2c44,1),true);
    pTVar1 = (TObjectPtr<UPoseSearchDatabase_const_> *)(pTVar30 + iVar3);
    uStack_39c8 = (undefined4)uStack_2c54;
    FStack_39c4.TotalCost = SUB84(uStack_2c54,4);
    local_39c0 = local_2c4c;
    local_39d0._0_4_ = local_2c5c;
    local_39d0._4_4_ = uStack_2c58;
    for (; pTVar30 != (TObjectPtr<UPoseSearchDatabase_const_>_u_0 *)pTVar1; pTVar30 = pTVar30 + 1) {
      local_399c.TotalCost = 3.4028235e+38;
      UE::PoseSearch::FSearchContext::Track
                ((FSearchContext *)local_2d88,pTVar30->DebugPtr,-1,None,&local_399c);
    }
    local_3998[0].TotalCost = 3.4028235e+38;
    UE::PoseSearch::FSearchContext::Track
              ((FSearchContext *)local_2d88,this.DebugPtr,-1,None,local_3998);
    goto LAB_14a945119;
  }
  param_9->ElapsedPoseSearchTime = 0.0;
  if (param_10 == DoNotInterrupt) {
LAB_14a944a02:
    bVar16 = false;
LAB_14a944a05:
    if (local_2c5c == -1) goto LAB_14a944a11;
    bVar17 = true;
  }
  else {
    if ((param_10 == InterruptOnDatabaseChange) ||
       (param_10 == InterruptOnDatabaseChangeAndInvalidateContinuingPose)) {
      pTVar28 = &param_3->DataPtr->field0_0x0;
      pTVar30 = pTVar28 + param_3->ArrayNum;
      for (; pTVar28 != pTVar30; pTVar28 = pTVar28 + 1) {
        if (pTVar28->DebugPtr == (UPoseSearchDatabase *)0x0) {
          bVar16 = this.DebugPtr == (UPoseSearchDatabase *)0x0;
        }
        else {
          bVar16 = pTVar28->DebugPtr == this.DebugPtr;
        }
        if (bVar16) {
          bVar16 = false;
          goto LAB_14a944aaa;
        }
      }
      bVar16 = true;
LAB_14a944aaa:
      if (!bVar16) goto LAB_14a944a05;
    }
    else {
      if ((param_10 != ForceInterrupt) && (param_10 != ForceInterruptAndInvalidateContinuingPose)) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                            ,0x188,L"");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_14a944a02;
      }
      bVar16 = true;
    }
LAB_14a944a11:
    bVar17 = false;
  }
  if (param_11) {
    local_37f8 = param_3->DataPtr;
    uStack_37f0 = *(undefined8 *)&param_3->ArrayNum;
    TVar23.DebugPtr = (UPoseSearchDatabase *)0x0;
    if (bVar17) {
      TVar23 = this;
    }
    pUVar34 = (UPoseSearchSchema *)0x0;
    if (TVar23.DebugPtr != (UPoseSearchDatabase *)0x0) {
      pUVar34 = ((TVar23.DebugPtr)->Schema).field0_0x0.DebugPtr;
    }
    for (pTVar30 = &local_37f8->field0_0x0; pTVar30 != &local_37f8[(int)uStack_37f0].field0_0x0;
        pTVar30 = pTVar30 + 1) {
      if (pTVar30->DebugPtr != (UPoseSearchDatabase *)0x0) {
        pUVar6 = *(UPoseSearchSchema **)((longlong)pTVar30->DebugPtr + 0x30);
        if (pUVar6 == (UPoseSearchSchema *)0x0) {
          bVar36 = pUVar34 == (UPoseSearchSchema *)0x0;
        }
        else {
          bVar36 = pUVar6 == pUVar34;
        }
        if ((!bVar36) && (bVar36 = pUVar34 != (UPoseSearchSchema *)0x0, pUVar34 = pUVar6, bVar36)) {
          local_2c2c = true;
          goto LAB_14a944ade;
        }
      }
    }
  }
  local_2c2c = false;
LAB_14a944ade:
  UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_37e8);
  if (bVar17) {
    UPoseSearchDatabase::SearchContinuingPose
              (this.DebugPtr,(FSearchContext *)local_2d88,(FSearchResults *)&local_37e8);
  }
  pTVar30 = &param_3->DataPtr->field0_0x0;
  iVar3 = param_3->ArrayNum;
  pTVar1 = (TObjectPtr<UPoseSearchDatabase_const_> *)(pTVar30 + iVar3);
  for (; pTVar30 != (TObjectPtr<UPoseSearchDatabase_const_>_u_0 *)pTVar1; pTVar30 = pTVar30 + 1) {
    if (pTVar30->DebugPtr != (UPoseSearchDatabase *)0x0) {
      UPoseSearchDatabase::Search
                (pTVar30->DebugPtr,(FSearchContext *)local_2d88,(FSearchResults *)&local_37e8);
    }
  }
  UE::Core::Private::Function::CheckCallable((void *)local_37e8._padding_);
  plVar29 = &local_37e8._padding_;
  if ((longlong *)local_37e8._padding_ != (longlong *)0x0) {
    plVar29 = (longlong *)local_37e8._padding_;
  }
  (**(code **)(*plVar29 + 8))();
  (*(code *)local_37e8._padding_)(local_3840);
  local_39b8 = local_3828;
  local_39d0._0_4_ = local_3840[0];
  local_39d0._4_4_ = local_3840[1];
  uStack_39c8 = local_3840[2];
  FStack_39c4.TotalCost = fStack_3834;
  local_39c0._0_4_ = local_3830;
  local_39c0._4_4_ = fStack_382c;
  if ((local_3840[0] == -1) ||
     (bVar17 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                          (local_39d0 + 4),(void *)0x0), bVar17)) {
    local_36c8.Base = local_36a8;
    local_36c8.bIsDynamic = false;
    local_36c8.bIsExternal = false;
    local_36c8.CurPos = local_36a8;
    local_36c8.End = (wchar_t *)&local_2ea8;
    pwVar24 = FGenericPlatformString::Convert<char,wchar_t>
                        (local_36a8,0x56,
                         "UPoseSearchLibrary::UpdateMotionMatchingState invalid search result : ForceInterrupt ["
                         ,0x56);
    pwVar35 = L"false";
    if (bVar16) {
      pwVar35 = L"true";
    }
    local_36c8.CurPos = pwVar24;
    sVar25 = wcslen(pwVar35);
    uVar31 = (ulong64)(int)sVar25;
    if (local_36c8.End < (FSearchResults_Single *)(pwVar24 + uVar31)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,uVar31);
      pwVar24 = local_36c8.CurPos;
    }
    if ((int)sVar25 != 0) {
      pvVar26 = FGenericPlatformString::Memcpy(pwVar24,pwVar35,uVar31 * 2);
      pwVar24 = (wchar_t *)(uVar31 * 2 + (longlong)pvVar26);
      local_36c8.CurPos = pwVar24;
    }
    if (local_36c8.End < (FSearchResults_Single *)(pwVar24 + 0xf)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,0xf);
      pwVar24 = local_36c8.CurPos;
    }
    pwVar24 = FGenericPlatformString::Convert<char,wchar_t>(pwVar24,0xf,"], CanAdvance [",0xf);
    pwVar35 = L"false";
    if ((int)local_39a8 != -1) {
      pwVar35 = L"true";
    }
    local_36c8.CurPos = pwVar24;
    sVar25 = wcslen(pwVar35);
    uVar31 = (ulong64)(int)sVar25;
    if (local_36c8.End < (FSearchResults_Single *)(pwVar24 + uVar31)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,uVar31);
      pwVar24 = local_36c8.CurPos;
    }
    if ((int)sVar25 != 0) {
      pvVar26 = FGenericPlatformString::Memcpy(pwVar24,pwVar35,uVar31 * 2);
      pwVar24 = (wchar_t *)(uVar31 * 2 + (longlong)pvVar26);
      local_36c8.CurPos = pwVar24;
    }
    if (local_36c8.End < (FSearchResults_Single *)(pwVar24 + 0xd)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,0xd);
      pwVar24 = local_36c8.CurPos;
    }
    local_36c8.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(pwVar24,0xd,"], Indexing [",0xd);
    if (local_36c8.End < (FSearchResults_Single *)(local_36c8.CurPos + 5)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,5);
    }
    pvVar26 = FGenericPlatformString::Memcpy(local_36c8.CurPos,L"false",10);
    local_36c8.CurPos = (wchar_t *)((longlong)pvVar26 + 10);
    if (local_36c8.End < (FSearchResults_Single *)((longlong)pvVar26 + 0x26U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,0xe);
    }
    local_36c8.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(local_36c8.CurPos,0xe,"], Databases [",0xe);
    pTVar12 = local_38f8;
    uVar32 = 0;
    if (0 < iVar3) {
      local_39a8 = 0;
      do {
        lVar4 = local_39a8;
        iVar3 = pTVar12->ArrayNum;
        uVar18 = 0;
        if ((int)uVar32 < iVar3) {
          uVar18 = ~uVar32 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar4 = *(longlong *)((longlong)&pTVar12->DataPtr->field0_0x0 + lVar4);
        if (lVar4 == 0) {
          ::FString::FString(&local_3958,L"None");
        }
        else {
          local_38e0 = *(FName *)(lVar4 + 0x18);
          ::FName::ToString(&local_38e0,&local_3958);
        }
        FVar10.Data = local_3958.Data.AllocatorInstance.Data;
        uVar18 = local_3958.Data.ArrayNum - 1;
        if (local_3958.Data.ArrayNum == 0) {
          uVar18 = 0;
        }
        uVar31 = (ulong64)(int)uVar18;
        if (local_36c8.End < (FSearchResults_Single *)(local_36c8.CurPos + uVar31)) {
          TStringBuilderBase<wchar_t>::Extend(&local_36c8,uVar31);
        }
        if (uVar18 != 0) {
          pvVar26 = FGenericPlatformString::Memcpy(local_36c8.CurPos,FVar10.Data,uVar31 * 2);
          local_36c8.CurPos = (wchar_t *)(uVar31 * 2 + (longlong)pvVar26);
        }
        if (local_3958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3958.Data.AllocatorInstance.Data);
        }
        if (uVar32 != iVar3 - 1U) {
          if (local_36c8.End < (FSearchResults_Single *)(local_36c8.CurPos + 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_36c8,2);
          }
          local_36c8.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_36c8.CurPos,2,", ",2);
        }
        uVar32 = uVar32 + 1;
        local_39a8 = local_39a8 + 8;
        FVar33 = local_3938;
      } while ((int)uVar32 < iVar3);
    }
    if (local_36c8.End < (FSearchResults_Single *)(local_36c8.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,2);
    }
    local_36c8.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_36c8.CurPos,2,"] ",2);
    if (local_36c8.End < (FSearchResults_Single *)(local_36c8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_36c8,1);
    }
    *local_36c8.CurPos = L'\0';
    ::FString::FString(&local_38f0,local_36c8.Base);
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    if (local_38f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38f0.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_36c8);
  }
  UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_37e8);
  param_9 = local_38d8;
LAB_14a945119:
  pIVar11 = local_3930;
  if (local_3930 == (IPoseHistory *)0x0) {
    fVar37 = UE::PoseSearch::CalculateWantedPlayRate
                       ((FSearchResult *)local_39d0,(FSearchContext *)local_2d88,local_3988,fVar37,
                        local_3990);
  }
  else {
    fVar37 = (float)(**(code **)(*(longlong *)local_3930 + 0x30))(local_3930);
    fVar37 = UE::PoseSearch::CalculateWantedPlayRate
                       ((FSearchResult *)local_39d0,(FSearchContext *)local_2d88,local_3988,fVar37,
                        local_3990);
    this_00 = (FPoseIndicesHistory *)(**(code **)(*(longlong *)pIVar11 + 0x60))(pIVar11);
    if (this_00 != (FPoseIndicesHistory *)0x0) {
      UE::PoseSearch::FPoseIndicesHistory::Update
                (this_00,(FSearchResult *)local_39d0,param_4,param_6);
    }
  }
  FPoseSearchBlueprintResult::InitFrom(&param_9->SearchResult,(FSearchResult *)local_39d0,fVar37);
  fVar2 = param_9->ElapsedPoseSearchTime;
  *(ulonglong *)&param_9->CurrentSearchResult = CONCAT44(local_39d0._4_4_,local_39d0._0_4_);
  *(ulonglong *)&(param_9->CurrentSearchResult).field_0x8 =
       CONCAT44(FStack_39c4.TotalCost,uStack_39c8);
  (param_9->CurrentSearchResult).EventPoseIdx = (int)local_39c0;
  (param_9->CurrentSearchResult).AssetTime = local_39c0._4_4_;
  param_9->WantedPlayRate = fVar37;
  fVar37 = (param_9->SearchResult).WantedPlayRate;
  *(uint *)&(param_9->CurrentSearchResult).bIsContinuingPoseSearch = local_39b8;
  UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_2ea8);
  if (((bVar15) && (local_39d0._0_4_ != -1)) &&
     (bVar15 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                          (local_39d0 + 4),(void *)0x0), !bVar15)) {
    UE::Core::Private::Function::CheckCallable((void *)local_2ea8._padding_);
    plVar29 = &local_2ea8._padding_;
    if ((longlong *)local_2ea8._padding_ != (longlong *)0x0) {
      plVar29 = (longlong *)local_2ea8._padding_;
    }
    uVar27 = (**(code **)(*plVar29 + 8))();
    (*(code *)local_2ea8._padding_)(uVar27,local_39d0);
  }
  TraceMotionMatching((FSearchContext *)local_2d88,(FSearchResults *)&local_2ea8,fVar2,fVar37,
                      param_10);
  UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_2ea8);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d0);
  local_e0 = 0;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            (&local_998);
  local_b40 = 0;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            (&local_2c08);
  if (local_2c88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c88.Data);
  }
  local_2c98 = 0;
  if (local_2ca0 != (void *)0x0) {
    FMemory::Free(local_2ca0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *)(local_2d88 + 0x60));
  if (local_3980.bPopped == false) {
    if (((local_3980.Mem)->TopMark != &local_3980) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_3980.bPopped = true;
    (local_3980.Mem)->NumMarks = (local_3980.Mem)->NumMarks + -1;
    if (local_3980.SavedChunk != (local_3980.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_3980.Mem,local_3980.SavedChunk);
    }
    (local_3980.Mem)->Top = local_3980.Top;
    (local_3980.Mem)->TopMark = local_3980.NextTopmostMark;
    local_3980.Top = (uchar *)0x0;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// UpdateMotionMatchingState @ 14a945460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchLibrary::UpdateMotionMatchingState
          (UObject *param_1,IPoseHistory *param_2,
          TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *param_3,float param_4,
          FFloatInterval *param_5,float param_6,float param_7,FFloatInterval *param_8,
          FMotionMatchingState *param_9,EPoseSearchInterruptMode param_10,bool param_11,
          bool param_12,bool param_13,FPoseSearchEvent *param_14)

{
  undefined1 auStackY_178 [32];
  FPoseSearchEvent local_108;
  TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> local_e8;
  FChooserEvaluationContext local_d8;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_d8.DebuggingInfo.CurrentChooser = (UObject *)0x0;
  local_d8.DebuggingInfo.bCurrentDebugTarget = false;
  local_d8.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
  local_d8.Params.ArrayNum = 0;
  local_d8.Params.ArrayMax = 4;
  local_d8.ObjectParams.ArrayNum = 0;
  local_d8.ObjectParams.ArrayMax = 4;
  FChooserEvaluationContext::AddObjectParam(&local_d8,param_1);
  local_e8.DataPtr = param_3->DataPtr;
  local_e8.ArrayNum = param_3->ArrayNum;
  local_e8._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_108.bEnablePoseFilters = false;
  local_108.bUsePlayRateRangeOverride = true;
  local_108._padding_ = 0;
  local_108.EventTag.TagName.ComparisonIndex.Value = 0;
  local_108.EventTag.TagName.Number = 0;
  local_108.TimeToEvent = 0.0;
  local_108.PlayRateRangeOverride._0_4_ = 0x3f800000;
  local_108.PlayRateRangeOverride._4_4_ = 0x3f800000;
  UpdateMotionMatchingState
            (&local_d8,param_2,&local_e8,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,&local_108);
  if (local_d8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_d8.Params.AllocatorInstance.SecondaryData);
  }
  return;
}

// execGetDatabaseTags @ 14a947b30

void __cdecl UPoseSearchLibrary::execGetDatabaseTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  longlong local_res10 [3];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    this->ArrayNum = 0;
    if (this->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->AllocatorInstance,0,&this->ArrayMax);
    }
  }
  else {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)(local_res10[0] + 0x68));
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execIsAnimationAssetLooping @ 14a949030

void __cdecl
UPoseSearchLibrary::execIsAnimationAssetLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  uchar uVar4;
  UClass *pUVar5;
  uchar *puVar6;
  uchar local_res10 [16];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar3 = local_res20;
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (longlong *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      *puVar6 = *(uchar *)((longlong)plVar3 + 0xac);
      return;
    }
    if (plVar3 != (longlong *)0x0) {
      pUVar5 = Z_Construct_UClass_UBlendSpace_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        *puVar6 = *(uchar *)((longlong)plVar3 + 0xc2);
        return;
      }
      pUVar5 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        uVar4 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
        *puVar6 = uVar4;
        return;
      }
    }
  }
  *puVar6 = '\0';
  return;
}

// execMotionMatch @ 14a9491d0

void __cdecl UPoseSearchLibrary::execMotionMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  TObjectPtr<UObject>_u_0 *pTVar3;
  longlong lVar4;
  FName local_res10 [2];
  UAnimInstance *local_res20;
  UObject *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_148;
  UObject *local_138;
  undefined4 local_130;
  undefined1 local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined2 local_110;
  UObject *local_108;
  TObjectPtr<UObject_const_>_u_0 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  TObjectPtr<UObject>_u_0 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  FName local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  double local_58;
  double dStack_50;
  double local_48;
  undefined1 local_40;
  undefined1 local_3f;
  UObject *local_38;
  
  local_res20 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_158 = (void *)0x0;
  local_150 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_138 = (UObject *)0x0;
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_130 = 0;
  local_12c = 0;
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_110 = 0;
  local_108 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_168 = (UObject *)0x0;
  local_160 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_e8.DebugPtr = (UObject *)0x0;
  local_e0 = 0;
  local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_dc = 0;
  local_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_d8 = 0x3f800000;
  local_d4 = 0;
  local_b8 = 0;
  local_b0 = 0x7f7fffff;
  local_ac = 0;
  local_a8 = UE::PoseSearch::DefaultRole;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pTVar3 = &local_e8;
  if ((TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UObject>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_100.DebugPtr = local_168;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_168);
  }
  local_f8 = (undefined4)local_160;
  local_f4 = local_160._4_4_;
  local_68.DebugPtr = local_138;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_138 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_138);
  }
  local_5c = local_12c;
  local_60 = local_130;
  local_40 = (undefined1)local_110;
  local_3f = local_110._1_1_;
  local_48 = local_118;
  local_38 = local_108;
  local_58 = local_128;
  dStack_50 = dStack_120;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_108);
  }
  _Src = local_158;
  FVar2 = local_res10[0];
  lVar4 = (longlong)(int)local_150;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = (int)local_150;
  if ((int)local_150 == 0) {
    local_148.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_150,0,&local_148.AllocatorInstance,(int)local_150,&local_148.ArrayMax)
    ;
    memcpy(local_148.AllocatorInstance.Data,_Src,lVar4 << 3);
  }
  MotionMatch(local_res20,&local_148,FVar2,(FPoseSearchContinuingProperties *)&local_68.ObjectPtr,
              (FPoseSearchFutureProperties *)&local_100.ObjectPtr,
              (FPoseSearchBlueprintResult *)&pTVar3->ObjectPtr);
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  return;
}

