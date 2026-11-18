// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a1fb6f0

UScriptStruct * __cdecl FControlRigAnimInstanceProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigAnimInstanceProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigAnimInstanceProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigAnimInstanceProxy,(UObject *)pUVar1,
                         L"ControlRigAnimInstanceProxy");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigAnimInstanceProxy.OuterSingleton;
}

// Initialize @ 14a1fb740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FControlRigAnimInstanceProxy::Initialize(FControlRigAnimInstanceProxy *this,UAnimInstance *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  code *pcVar4;
  double dVar5;
  int *piVar6;
  TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  IAnimClassInterface *pIVar12;
  longlong lVar13;
  longlong *plVar14;
  void *pvVar15;
  undefined8 uVar16;
  USkeletalMeshComponent *pUVar17;
  TTransform<double> *pTVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint uVar24;
  int *piVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_208 [32];
  uint uStack_1b8;
  undefined1 uStack_1b4;
  undefined1 auStack_1b3 [3];
  uint uStack_1b0;
  uint uStack_1ac;
  void *pvStack_1a8;
  FString FStack_1a0;
  TKeyInitializer<FName_const_&> TStack_190;
  UAnimInstance *pUStack_188;
  int iStack_180;
  int iStack_17c;
  TPairInitializer<int_const_&,int_const_&> TStack_178;
  longlong lStack_168;
  TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_160;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  longlong *plStack_150;
  FControlRigAnimInstanceProxy *pFStack_148;
  FName FStack_140;
  longlong *plStack_138;
  int iStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *plStack_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined4 uStack_ac;
  TTransform<double> TStack_a8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUStack_188 = param_1;
  pFStack_148 = this;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::Initialize");
  *(UAnimInstance **)&this->field_0x140 = param_1;
  pIVar12 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  *(IAnimClassInterface **)&this->field_0x148 = pIVar12;
  (**(code **)(*(longlong *)this + 0x80))(this,param_1);
  if (*(longlong **)&this->field_0x148 == (longlong *)0x0) {
    uVar16 = (**(code **)(*(longlong *)this + 0x40))(this);
    *(undefined8 *)&this->field_0x180 = uVar16;
  }
  else {
    TStack_178.Value = (int *)(**(code **)(**(longlong **)&this->field_0x148 + 0x20))();
    *(undefined8 *)&this->field_0x180 = 0;
    lVar13 = (**(code **)(**(longlong **)&this->field_0x148 + 0x80))();
    iVar21 = 0;
    if (0 < *(int *)(lVar13 + 8)) {
      plVar14 = (longlong *)(**(code **)(**(longlong **)&this->field_0x148 + 0x80))();
      if (((int)plVar14[1] < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(FProperty **)(*plVar14 + 0x38) != (FProperty *)0x0) {
        pvVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (*(FProperty **)(*plVar14 + 0x38),(UObject *)param_1,0);
        *(void **)&this->field_0x180 = pvVar15;
      }
    }
    plVar14 = (longlong *)(**(code **)(**(longlong **)&this->field_0x148 + 0x78))();
    pTStack_160 = (TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->field_0x190;
    plStack_150 = plVar14;
    TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(pTStack_160);
    iVar10 = (int)plVar14[5];
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
    uStack_12c = 1;
    iStack_118 = 0;
    iStack_11c = iStack_118;
    if (iVar10 != 0) {
      pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = pTVar23;
      }
      uVar20 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
      iStack_118 = 0;
      iVar21 = 0;
      while (uVar20 == 0) {
        lVar13 = (longlong)iVar21;
        iStack_118 = iStack_118 + 0x20;
        iVar21 = iVar21 + 1;
        iStack_11c = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_1474656ed;
        uVar20 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uStack_12c = -uVar20 & uVar20;
      uVar3 = (ulonglong)uStack_12c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iStack_180 = (int)lVar13;
      iStack_11c = iStack_118 + -1 + iStack_180;
      if (iVar10 < iStack_11c) {
        iStack_11c = iVar10;
      }
    }
LAB_1474656ed:
    uVar20 = *(uint *)(plVar14 + 5);
    uStack_114 = uStack_ac;
    uVar24 = uVar20 & 0xffffffe0;
    iStack_110 = (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34);
    uStack_120 = 0xffffffff;
    TStack_100._padding_ = CONCAT44(uStack_12c,iVar21);
    TStack_100.CurrentBitIndex = iStack_11c;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar20 >> 5;
    TStack_100._28_4_ = uStack_ac;
    TStack_100.BaseBitIndex = iStack_118;
    uStack_e0 = CONCAT44(uStack_10c,iStack_110);
    uStack_1b0 = uVar20;
    pTStack_158 = pTVar23;
    plStack_138 = plVar14;
    iStack_130 = iVar21;
    pTStack_128 = pTVar23;
    plStack_108 = plVar14;
    TStack_100.Array = pTVar23;
    if ((((int)uVar20 < 0) || (iVar10 < (int)uVar20)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar6 = TStack_178.Value;
    uVar11 = *(uint *)(plVar14 + 5);
    if (uVar20 != uVar11) {
      pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = pTVar23;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) &
               *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
      while (uVar20 == 0) {
        lVar13 = (longlong)iVar19;
        uVar24 = uVar24 + 0x20;
        iVar19 = iVar19 + 1;
        uVar20 = uVar11;
        uStack_1b0 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_147465810;
        uVar20 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iStack_17c = (int)lVar13;
      uVar20 = iStack_17c + -1 + uVar24;
      uStack_1b0 = uVar20;
      if ((int)uVar11 < (int)uVar20) {
        uVar20 = uVar11;
        uStack_1b0 = uVar11;
      }
    }
LAB_147465810:
    while( true ) {
      plVar8 = plStack_108;
      if ((int)plStack_108[1] - *(int *)((longlong)plStack_108 + 0x34) != (int)uStack_e0) {
        uStack_1b4 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FCachedPoseIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_1b4);
      }
      this = pFStack_148;
      pTVar7 = pTStack_160;
      if (((TStack_100.CurrentBitIndex == uVar20) && (TStack_100.Array == pTVar23)) &&
         (plVar8 == plVar14)) break;
      lVar26 = (longlong)TStack_100.CurrentBitIndex * 0x20 + *plVar8;
      lStack_168 = lVar26;
      TSet<TTuple<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>(pTStack_160,&TStack_190,(bool *)&lStack_168);
      piVar25 = *(int **)(lVar26 + 8);
      iVar21 = *(int *)(lVar26 + 0x10);
      lVar13 = *(longlong *)&pTVar7->Elements + (longlong)(int)TStack_190.Key * 0x20;
      piVar2 = piVar25 + iVar21;
      while( true ) {
        if (*(int *)(lVar26 + 0x10) != iVar21) {
          auStack_1b3[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStack_1b3);
        }
        if (piVar25 == piVar2) break;
        iVar10 = (int)*(longlong *)((longlong)piVar6 + 8);
        uVar24 = (iVar10 - *piVar25) - 1;
        uVar20 = 0;
        if ((int)uVar24 < iVar10) {
          uVar20 = ~uVar24 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvStack_1a8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                (*(FProperty **)(*(longlong *)piVar6 + (longlong)(int)uVar24 * 8),
                                 (UObject *)pUStack_188,0);
        if (((*(void ***)(lVar13 + 8) <= &pvStack_1a8) &&
            (&pvStack_1a8 < *(void ***)(lVar13 + 8) + *(int *)(lVar13 + 0x14))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar13 + 0x10);
        if (iVar10 == *(int *)(lVar13 + 0x14)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar13 + 8),(int *)(lVar13 + 0x14));
        }
        piVar25 = piVar25 + 1;
        *(int *)(lVar13 + 0x10) = iVar10 + 1;
        *(void **)(*(longlong *)(lVar13 + 8) + (longlong)iVar10 * 8) = pvStack_1a8;
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      plVar14 = plStack_150;
      pTVar23 = pTStack_158;
      uVar20 = uStack_1b0;
    }
    if (*(longlong *)&pFStack_148->field_0x150 == 0) {
      uVar16 = (**(code **)(**(longlong **)&pFStack_148->field_0x148 + 0x98))();
      *(undefined8 *)&this->field_0x150 = uVar16;
    }
    uStack_1b8 = 0;
    plVar14 = (longlong *)(**(code **)(**(longlong **)&this->field_0x148 + 0x10))();
    uStack_1ac = 0;
    uVar20 = *(uint *)(plVar14 + 1);
    if (0 < (int)uVar20) {
      do {
        uVar24 = uStack_1ac;
        uVar11 = 0;
        if ((int)uStack_1ac < (int)plVar14[1]) {
          uVar11 = ~uStack_1ac >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puStack_d8 = &uStack_1ac;
        lVar13 = *plVar14;
        puStack_d0 = &uStack_1b8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->field_0x2f0,&TStack_178,(bool *)&puStack_d8);
        uStack_1b8 = uStack_1b8 + *(int *)((longlong)(int)uVar24 * 0x38 + lVar13 + 0x18);
        uStack_1ac = uStack_1ac + 1;
      } while ((int)uStack_1ac < (int)uVar20);
    }
    if ((int)uStack_1b8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uStack_1b8);
    }
    puVar1 = &this->field_0x2dc;
    *(undefined4 *)&this->field_0x2d8 = 0;
    if (*(int *)puVar1 < (int)uStack_1b8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uStack_1b8,(ForAnyElementType *)&this->field_0x2d0,0,(int *)puVar1);
    }
    uVar24 = uStack_1b8;
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uStack_1b8,(ForAnyElementType *)&this->field_0x2d0,
                        (int *)&this->field_0x2d8,(int *)puVar1);
    memset((void *)(*(longlong *)&this->field_0x2d0 + (longlong)iVar21 * 4),0,
           (longlong)(int)uVar24 << 2);
    if ((int)uStack_1b8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uStack_1b8);
    }
    puVar1 = &this->field_0x2ec;
    *(undefined4 *)&this->field_0x2e8 = 0;
    if (*(int *)puVar1 < (int)uStack_1b8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uStack_1b8,(ForAnyElementType *)&this->field_0x2e0,0,(int *)puVar1);
    }
    uVar24 = uStack_1b8;
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uStack_1b8,(ForAnyElementType *)&this->field_0x2e0,
                        (int *)&this->field_0x2e8,(int *)puVar1);
    memset((void *)(*(longlong *)&this->field_0x2e0 + (longlong)iVar21 * 4),0,
           (longlong)(int)uVar24 << 2);
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    puVar1 = &this->field_0x2bc;
    *(undefined4 *)&this->field_0x2b8 = 0;
    if (*(int *)puVar1 < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar20,(ForAnyElementType *)&this->field_0x2b0,0,(int *)puVar1);
    }
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar20,(ForAnyElementType *)&this->field_0x2b0,(int *)&this->field_0x2b8
                        ,(int *)puVar1);
    memset((void *)(*(longlong *)&this->field_0x2b0 + (longlong)iVar21 * 4),0,
           (longlong)(int)uVar20 << 2);
    puVar1 = &this->field_0x2cc;
    *(undefined4 *)&this->field_0x2c8 = 0;
    if (*(int *)puVar1 < (int)uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar20,(ForAnyElementType *)&this->field_0x2c0,0,(int *)puVar1);
    }
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar20,(ForAnyElementType *)&this->field_0x2c0,(int *)&this->field_0x2c8
                        ,(int *)puVar1);
    memset((void *)(*(longlong *)&this->field_0x2c0 + (longlong)iVar21 * 4),0,
           (longlong)(int)uVar20 << 2);
    param_1 = pUStack_188;
  }
  pUVar17 = UAnimInstance::GetSkelMeshComponent(param_1);
  if (pUVar17->_padding_ == 0) {
    ::FString::FString(&FStack_1a0,L"None");
  }
  else {
    FStack_140 = *(FName *)(pUVar17->_padding_ + 0x18);
    ::FName::ToString(&FStack_140,&FStack_1a0);
  }
  puVar1 = &this->field_0x170;
  if ((FString *)puVar1 != &FStack_1a0) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = FStack_1a0.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x178 = FStack_1a0.Data.ArrayNum;
    *(int *)&this->field_0x17c = FStack_1a0.Data.ArrayMax;
    FStack_1a0.Data.ArrayNum = 0;
    FStack_1a0.Data.ArrayMax = 0;
    FStack_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a0.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)&this->field_0x5b0 = 0xffff;
  *(undefined8 *)&this->field_0x5a8 = 0xffffffffffffffff;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->field_0x3c8);
  *(undefined4 *)&this->field_0x420 = 0;
  if (*(int *)&this->field_0x424 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->field_0x418,0,(int *)&this->field_0x424);
  }
  *(undefined4 *)&this->field_0x430 = 0;
  if (*(int *)&this->field_0x434 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->field_0x428,0,(int *)&this->field_0x434);
  }
  *(short *)&this->field_0x5d0 = *(short *)&this->field_0x5d0 + 1;
  *(ulong64 *)&this->field_0x5c8 = GFrameCounter;
  if (*(short *)&this->field_0x5d0 == -1) {
    *(undefined2 *)&this->field_0x5d0 = 0;
  }
  pUVar17 = UAnimInstance::GetSkelMeshComponent(param_1);
  if (pUVar17 == (USkeletalMeshComponent *)0x0) {
    dVar5 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    *(double *)&this->field_0x20 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    *(double *)&this->field_0x28 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    *(double *)&this->field_0x30 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    *(double *)&this->field_0x38 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    *(double *)&this->field_0x40 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    *(double *)&this->field_0x48 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    *(double *)&this->field_0x50 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    *(double *)&this->field_0x58 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    *(double *)&this->field_0x60 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    *(double *)&this->field_0x68 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    *(double *)&this->field_0x70 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    *(double *)&this->field_0x78 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    *(double *)&this->field_0x80 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    *(double *)&this->field_0x88 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    *(double *)&this->field_0x90 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    *(double *)&this->field_0x98 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    *(double *)&this->field_0xa0 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    *(double *)&this->field_0xa8 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    *(double *)&this->field_0xb0 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    *(double *)&this->field_0xb8 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    *(double *)&this->field_0xc0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    *(double *)&this->field_0xc8 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    *(double *)&this->field_0xd0 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    *(double *)&this->field_0xd8 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    *(double *)&this->field_0xe0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    *(double *)&this->field_0xe8 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    *(double *)&this->field_0xf0 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    *(double *)&this->field_0xf8 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    *(double *)&this->field_0x100 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    *(double *)&this->field_0x108 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    *(double *)&this->field_0x110 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    *(double *)&this->field_0x118 = dVar5;
    dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    *(double *)&this->field_0x120 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    *(double *)&this->field_0x128 = dVar5;
    uVar27 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar29 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    lVar13 = pUVar17->_padding_;
    *(longlong *)&this->field_0x20 = pUVar17->_padding_;
    *(longlong *)&this->field_0x28 = lVar13;
    lVar13 = pUVar17->_padding_;
    *(longlong *)&this->field_0x30 = pUVar17->_padding_;
    *(longlong *)&this->field_0x38 = lVar13;
    lVar13 = pUVar17->_padding_;
    *(longlong *)&this->field_0x40 = pUVar17->_padding_;
    *(longlong *)&this->field_0x48 = lVar13;
    lVar13 = pUVar17->_padding_;
    *(longlong *)&this->field_0x50 = pUVar17->_padding_;
    *(longlong *)&this->field_0x58 = lVar13;
    lVar13 = pUVar17->_padding_;
    *(longlong *)&this->field_0x60 = pUVar17->_padding_;
    *(longlong *)&this->field_0x68 = lVar13;
    lVar13 = pUVar17->_padding_;
    *(longlong *)&this->field_0x70 = pUVar17->_padding_;
    *(longlong *)&this->field_0x78 = lVar13;
    pTVar18 = USceneComponent::GetRelativeTransform
                        (*(USceneComponent **)&this->field_0x158,&TStack_a8);
    dVar5 = (pTVar18->Rotation).XY.m128d_f64[1];
    *(double *)&this->field_0x80 = (pTVar18->Rotation).XY.m128d_f64[0];
    *(double *)&this->field_0x88 = dVar5;
    dVar5 = (pTVar18->Rotation).ZW.m128d_f64[1];
    *(double *)&this->field_0x90 = (pTVar18->Rotation).ZW.m128d_f64[0];
    *(double *)&this->field_0x98 = dVar5;
    dVar5 = (pTVar18->Translation).XY.m128d_f64[1];
    *(double *)&this->field_0xa0 = (pTVar18->Translation).XY.m128d_f64[0];
    *(double *)&this->field_0xa8 = dVar5;
    dVar5 = (pTVar18->Translation).ZW.m128d_f64[1];
    *(double *)&this->field_0xb0 = (pTVar18->Translation).ZW.m128d_f64[0];
    *(double *)&this->field_0xb8 = dVar5;
    dVar5 = (pTVar18->Scale3D).XY.m128d_f64[1];
    *(double *)&this->field_0xc0 = (pTVar18->Scale3D).XY.m128d_f64[0];
    *(double *)&this->field_0xc8 = dVar5;
    dVar5 = (pTVar18->Scale3D).ZW.m128d_f64[1];
    *(double *)&this->field_0xd0 = (pTVar18->Scale3D).ZW.m128d_f64[0];
    *(double *)&this->field_0xd8 = dVar5;
    lVar13 = *(longlong *)(*(longlong *)&this->field_0x158 + 0xa8);
    if ((lVar13 == 0) || (lVar13 = *(longlong *)(lVar13 + 0x1b8), lVar13 == 0)) {
      pTVar18 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar18 = (TTransform<double> *)(lVar13 + 0x1f0);
    }
    dVar5 = (pTVar18->Rotation).XY.m128d_f64[1];
    *(double *)&this->field_0xe0 = (pTVar18->Rotation).XY.m128d_f64[0];
    *(double *)&this->field_0xe8 = dVar5;
    dVar5 = (pTVar18->Rotation).ZW.m128d_f64[1];
    *(double *)&this->field_0xf0 = (pTVar18->Rotation).ZW.m128d_f64[0];
    *(double *)&this->field_0xf8 = dVar5;
    dVar5 = (pTVar18->Translation).XY.m128d_f64[1];
    *(double *)&this->field_0x100 = (pTVar18->Translation).XY.m128d_f64[0];
    *(double *)&this->field_0x108 = dVar5;
    dVar5 = (pTVar18->Translation).ZW.m128d_f64[1];
    *(double *)&this->field_0x110 = (pTVar18->Translation).ZW.m128d_f64[0];
    *(double *)&this->field_0x118 = dVar5;
    dVar5 = (pTVar18->Scale3D).XY.m128d_f64[1];
    *(double *)&this->field_0x120 = (pTVar18->Scale3D).XY.m128d_f64[0];
    *(double *)&this->field_0x128 = dVar5;
    uVar27 = *(undefined4 *)(pTVar18->Scale3D).ZW.m128d_f64;
    uVar28 = *(undefined4 *)((longlong)(pTVar18->Scale3D).ZW.m128d_f64 + 4);
    uVar29 = *(undefined4 *)((pTVar18->Scale3D).ZW.m128d_f64 + 1);
    uVar30 = *(undefined4 *)((longlong)(pTVar18->Scale3D).ZW.m128d_f64 + 0xc);
  }
  *(undefined4 *)&this->field_0x130 = uVar27;
  *(undefined4 *)&this->field_0x134 = uVar28;
  *(undefined4 *)&this->field_0x138 = uVar29;
  *(undefined4 *)&this->field_0x13c = uVar30;
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate @ 14a1fb760

bool __thiscall
FControlRigAnimInstanceProxy::Evaluate(FControlRigAnimInstanceProxy *this,FPoseContext *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  double *pdVar3;
  void *_Src;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  TMap<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
  *pTVar30;
  FBaseCompactPose<TMemStackAllocator<0>_> *this_00;
  TMap<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
  *pTVar31;
  bool bVar32;
  undefined1 uVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  uint *puVar42;
  ForAnyElementType FVar43;
  undefined1 *puVar44;
  <lambda_1> local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_248 [2];
  ForAnyElementType local_240;
  undefined8 local_238;
  undefined1 local_230 [24];
  TMap<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
  *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int local_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  TMap<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
  *local_1d8;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_1d0;
  TMap<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
  *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_198;
  FAnimationBaseContext local_178;
  FCSPose<FCompactPose> local_158;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> aTStack_f0 [2];
  
  if (((*(int *)&(this->StoredTransforms).field_0x8 == *(int *)&(this->StoredTransforms).field_0x34)
      && (*(int *)&(this->StoredCurves).field_0x8 == *(int *)&(this->StoredCurves).field_0x34)) &&
     (*(int *)&(this->StoredAttributes).field_0x28 == 0)) {
    return false;
  }
  FAnimationBaseContext::FAnimationBaseContext
            (&local_178,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
  local_1d0 = (FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose;
  local_158.Pose._0_8_ = 0;
  local_158.Pose._16_8_ = 0;
  local_158.ComponentSpaceFlags._0_8_ = 0;
  local_f8 = 0;
  aTStack_f0[0].UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Pose._8_8_ = 0;
  local_158.ComponentSpaceFlags._8_8_ = 0;
  local_158.BoneMask._0_8_ = 0;
  local_158.BoneMask._8_8_ = 0;
  local_158.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
  local_158.BonesToConvert.ArrayNum = 0;
  local_158.BonesToConvert.ArrayMax = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  aTStack_f0[0].UniqueTypedBoneIndices.ArrayNum = 0;
  aTStack_f0[0].UniqueTypedBoneIndices.ArrayMax = 0;
  aTStack_f0[0].AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aTStack_f0[0].AttributeIdentifiers.ArrayNum = 0;
  aTStack_f0[0].AttributeIdentifiers.ArrayMax = 0;
  aTStack_f0[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aTStack_f0[0].Values.ArrayNum = 0;
  aTStack_f0[0].Values.ArrayMax = 0;
  aTStack_f0[0].UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  aTStack_f0[0].UniqueTypes.ArrayNum = 0;
  aTStack_f0[0].UniqueTypes.ArrayMax = 0;
  FCSPose<FCompactPose>::InitPose(&local_158,(FCompactPose *)local_1d0);
  lVar39 = *(longlong *)&(param_1->Pose).field_0x10;
  local_208 = &(this->StoredTransforms).field_0x10;
  local_240.Data = (FScriptContainerElement *)0x0;
  local_218 = &this->StoredTransforms;
  local_238 = 0;
  iVar35 = *(int *)&(this->StoredTransforms).field_0x28;
  local_1f8 = 0;
  iStack_210 = 0;
  uStack_20c = 1;
  iStack_1fc = 0;
  if (iVar35 != 0) {
    puVar42 = *(uint **)&(this->StoredTransforms).field_0x20;
    if (puVar42 == (uint *)0x0) {
      puVar42 = (uint *)local_208;
    }
    uVar41 = *puVar42;
    iStack_210 = 0;
    while (uVar41 == 0) {
      lVar36 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar35;
      if ((int)(iVar35 + -1 + (iVar35 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_14a1fb91d;
      uVar41 = puVar42[lVar36 + 1];
    }
    uStack_20c = -uVar41 & uVar41;
    uVar37 = (ulonglong)uStack_20c * 2 + 1;
    lVar36 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar36 == 0; lVar36 = lVar36 + -1) {
      }
    }
    local_1e8 = (int)lVar36;
    iStack_1fc = local_1f8 + -1 + local_1e8;
    if (iVar35 < iStack_1fc) {
      iStack_1fc = iVar35;
    }
  }
LAB_14a1fb91d:
  iStack_1f0 = *(int *)&(this->StoredTransforms).field_0x8 -
               *(int *)&(this->StoredTransforms).field_0x34;
  uVar41 = *(uint *)&(this->StoredTransforms).field_0x28;
  uStack_200 = 0xffffffff;
  TStack_1c0.CurrentBitIndex = iStack_1fc;
  TStack_1c0.UnvisitedBitMask = 0xffffffff;
  TStack_1c0._padding_ = CONCAT44(uStack_20c,iStack_210);
  uVar40 = uVar41 & 0xffffffe0;
  iVar38 = (int)uVar41 >> 5;
  TStack_1c0._28_4_ = iStack_1fc;
  TStack_1c0.BaseBitIndex = local_1f8;
  uStack_1a0 = CONCAT44(uStack_1ec,iStack_1f0);
  iStack_1f4 = iStack_1fc;
  local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)local_208;
  local_1d8 = local_218;
  local_1c8 = local_218;
  TStack_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_208;
  if ((((int)uVar41 < 0) || (iVar35 < (int)uVar41)) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar32)) {
    pcVar4 = (code *)swi(3);
    uVar33 = (*pcVar4)();
    return (bool)uVar33;
  }
  pTVar30 = local_1d8;
  pTVar29 = local_1e0;
  uVar34 = *(uint *)&(this->StoredTransforms).field_0x28;
  if (uVar41 != uVar34) {
    puVar44 = *(undefined1 **)&(this->StoredTransforms).field_0x20;
    if (puVar44 == (undefined1 *)0x0) {
      puVar44 = &(this->StoredTransforms).field_0x10;
    }
    uVar41 = -1 << ((byte)uVar41 & 0x1f) & *(uint *)(puVar44 + (longlong)iVar38 * 4);
    while (uVar41 == 0) {
      lVar36 = (longlong)iVar38;
      uVar40 = uVar40 + 0x20;
      iVar38 = iVar38 + 1;
      uVar41 = uVar34;
      if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar38)
      goto LAB_14a1fba69;
      uVar41 = *(uint *)(puVar44 + lVar36 * 4 + 4);
    }
    uVar37 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
    lVar36 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar36 == 0; lVar36 = lVar36 + -1) {
      }
    }
    local_1e4 = (int)lVar36;
    uVar41 = local_1e4 + -1 + uVar40;
    if ((int)uVar34 < (int)uVar41) {
      uVar41 = uVar34;
    }
  }
LAB_14a1fba69:
  do {
    pTVar31 = local_1c8;
    if (*(int *)&local_1c8->field_0x8 - *(int *)&local_1c8->field_0x34 != (int)uStack_1a0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    this_00 = local_1d0;
    if (((TStack_1c0.CurrentBitIndex == uVar41) && (TStack_1c0.Array == pTVar29)) &&
       (pTVar31 == pTVar30)) {
      local_230._0_8_ = (TTransform<double> *)0x0;
      local_230._8_4_ = (undefined4)local_1d0->_padding_;
      lVar39 = (longlong)(int)local_230._8_4_;
      _Src = (void *)local_1d0->_padding_;
      if (local_230._8_4_ == 0) {
        local_230._12_4_ = 0;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,local_230._8_4_,0,
                   (ForElementType<UE::Math::TTransform<double>_> *)local_230,local_230._8_4_,
                   (int *)(local_230 + 0xc));
        memcpy((void *)local_230._0_8_,_Src,lVar39 * 0x60);
      }
      local_230._16_8_ = this_00->BoneContainer;
      FCSPose<FCompactPose>::ConvertComponentPosesToLocalPosesSafe
                (&local_158,(FCompactPose *)local_230);
      if (param_1->bExpectsAdditivePose == false) {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(this_00,this_00->BoneContainer);
      }
      else {
        FCompactPose::ResetToAdditiveIdentity((FCompactPose *)this_00);
      }
      iVar35 = (int)local_238;
      uVar37 = (ulonglong)(int)local_238;
      pFVar1 = local_240.Data + uVar37 * 4;
      FVar43.Data = local_240.Data;
      while( true ) {
        if ((int)uVar37 != iVar35) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FCompactPoseBoneIndex,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (FVar43.Data == pFVar1) {
          local_198._padding_ = 0;
          local_198._padding_ = 0;
          local_198._padding_._0_1_ = 0;
          local_198.Filter = (FCurveFilter *)0x0;
          UE::Anim::FCurveUtils::BuildUnsorted<TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    (&local_198,&this->StoredCurves);
          local_res8 = SUB81(this,0);
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                     &param_1->Curve,
                     (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&local_198,
                     local_res8);
          UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
          CopyFrom<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
                    ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                     &param_1->CustomAttributes,
                     (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &this->StoredAttributes,*(FBoneContainer **)&(param_1->Pose).field_0x10);
          if (local_240.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data);
          }
          UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
          ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(aTStack_f0);
          return true;
        }
        uVar41 = *(uint *)FVar43.Data;
        uVar40 = 0;
        if ((int)uVar41 < (int)local_230._8_4_) {
          uVar40 = ~uVar41 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar4 = (code *)swi(3);
          uVar33 = (*pcVar4)();
          return (bool)uVar33;
        }
        uVar40 = *(uint *)FVar43.Data;
        dVar17 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Rotation
                 ).XY.m128d_f64[0];
        dVar18 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Rotation
                 ).XY.m128d_f64[1];
        dVar19 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Rotation
                 ).ZW.m128d_f64[0];
        dVar20 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Rotation
                 ).ZW.m128d_f64[1];
        dVar21 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->
                 Translation).XY.m128d_f64[0];
        dVar22 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->
                 Translation).XY.m128d_f64[1];
        dVar23 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->
                 Translation).ZW.m128d_f64[0];
        dVar24 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->
                 Translation).ZW.m128d_f64[1];
        dVar25 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Scale3D)
                 .XY.m128d_f64[0];
        dVar26 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Scale3D)
                 .XY.m128d_f64[1];
        dVar27 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Scale3D)
                 .ZW.m128d_f64[0];
        dVar28 = (((TTransform<double> *)(local_230._0_8_ + (longlong)(int)uVar41 * 0x60))->Scale3D)
                 .ZW.m128d_f64[1];
        uVar41 = 0;
        if ((int)uVar40 < (int)this_00->_padding_) {
          uVar41 = ~uVar40 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) break;
        lVar39 = this_00->_padding_;
        lVar36 = (longlong)(int)uVar40 * 0x60;
        FVar43.Data = FVar43.Data + 4;
        *(double *)(lVar36 + lVar39) = dVar17;
        ((double *)(lVar36 + lVar39))[1] = dVar18;
        pdVar3 = (double *)(lVar36 + 0x10 + lVar39);
        *pdVar3 = dVar19;
        pdVar3[1] = dVar20;
        pdVar3 = (double *)(lVar36 + 0x20 + lVar39);
        *pdVar3 = dVar21;
        pdVar3[1] = dVar22;
        pdVar3 = (double *)(lVar36 + 0x30 + lVar39);
        *pdVar3 = dVar23;
        pdVar3[1] = dVar24;
        pdVar3 = (double *)(lVar36 + 0x40 + lVar39);
        *pdVar3 = dVar25;
        pdVar3[1] = dVar26;
        pdVar3 = (double *)(lVar36 + 0x50 + lVar39);
        *pdVar3 = dVar27;
        pdVar3[1] = dVar28;
        uVar37 = local_238 & 0xffffffff;
      }
      pcVar4 = (code *)swi(3);
      uVar33 = (*pcVar4)();
      return (bool)uVar33;
    }
    puVar42 = (uint *)((longlong)TStack_1c0.CurrentBitIndex * 0x80 + *(longlong *)pTVar31);
    uVar40 = *puVar42;
    if (((int)uVar40 < 0) || (*(int *)(lVar39 + 0x68) <= (int)uVar40)) {
      bVar32 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8192494858347217480>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                          ,0x248,"PoseToSkeletonBoneIndexArray.IsValidIndex(MeshIndex.GetInt())");
      if (bVar32) {
        pcVar4 = (code *)swi(3);
        uVar33 = (*pcVar4)();
        return (bool)uVar33;
      }
LAB_14a1fbd6d:
      local_248[0] = 0xffffffff;
    }
    else {
      uVar34 = 0;
      if ((int)uVar40 < *(int *)(lVar39 + 0x68)) {
        uVar34 = ~uVar40 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar4 = (code *)swi(3);
        uVar33 = (*pcVar4)();
        return (bool)uVar33;
      }
      uVar40 = *(uint *)(*(longlong *)(lVar39 + 0x60) + (longlong)(int)uVar40 * 4);
      if (((int)uVar40 < 0) || (*(int *)(lVar39 + 0x88) <= (int)uVar40)) goto LAB_14a1fbd6d;
      uVar34 = 0;
      if ((int)uVar40 < *(int *)(lVar39 + 0x88)) {
        uVar34 = ~uVar40 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar4 = (code *)swi(3);
        uVar33 = (*pcVar4)();
        return (bool)uVar33;
      }
      uVar40 = *(uint *)(*(longlong *)(lVar39 + 0x80) + (longlong)(int)uVar40 * 4);
      local_248[0] = uVar40;
      if (uVar40 != 0xffffffff) {
        if (((int)uVar40 < 0) || ((int)local_158.Pose._8_4_ <= (int)uVar40)) {
          bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pose.IsValidIndex(BoneIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                              ,599,L"");
          if (bVar32) {
            pcVar4 = (code *)swi(3);
            uVar33 = (*pcVar4)();
            return (bool)uVar33;
          }
        }
        uVar5 = *(undefined8 *)(puVar42 + 4);
        uVar6 = *(undefined8 *)(puVar42 + 6);
        uVar7 = *(undefined8 *)(puVar42 + 8);
        uVar8 = *(undefined8 *)(puVar42 + 10);
        uVar9 = *(undefined8 *)(puVar42 + 0xc);
        uVar10 = *(undefined8 *)(puVar42 + 0xe);
        uVar11 = *(undefined8 *)(puVar42 + 0x10);
        uVar12 = *(undefined8 *)(puVar42 + 0x12);
        uVar13 = *(undefined8 *)(puVar42 + 0x14);
        uVar14 = *(undefined8 *)(puVar42 + 0x16);
        uVar15 = *(undefined8 *)(puVar42 + 0x18);
        uVar16 = *(undefined8 *)(puVar42 + 0x1a);
        uVar34 = 0;
        if ((int)uVar40 < (int)local_158.Pose._8_4_) {
          uVar34 = ~uVar40 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar4 = (code *)swi(3);
          uVar33 = (*pcVar4)();
          return (bool)uVar33;
        }
        lVar36 = (longlong)(int)uVar40 * 0x60;
        *(undefined8 *)(lVar36 + local_158.Pose._0_8_) = uVar5;
        ((undefined8 *)(lVar36 + local_158.Pose._0_8_))[1] = uVar6;
        puVar2 = (undefined8 *)(lVar36 + 0x10 + local_158.Pose._0_8_);
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        puVar2 = (undefined8 *)(lVar36 + 0x20 + local_158.Pose._0_8_);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2 = (undefined8 *)(lVar36 + 0x30 + local_158.Pose._0_8_);
        *puVar2 = uVar11;
        puVar2[1] = uVar12;
        puVar2 = (undefined8 *)(lVar36 + 0x40 + local_158.Pose._0_8_);
        *puVar2 = uVar13;
        puVar2[1] = uVar14;
        puVar2 = (undefined8 *)(lVar36 + 0x50 + local_158.Pose._0_8_);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        uVar34 = 0;
        if ((int)uVar40 < (int)local_158.ComponentSpaceFlags._8_4_) {
          uVar34 = ~uVar40 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar4 = (code *)swi(3);
          uVar33 = (*pcVar4)();
          return (bool)uVar33;
        }
        *(undefined1 *)((longlong)(int)uVar40 + local_158.ComponentSpaceFlags._0_8_) = 1;
        if (((local_240.Data <= (FScriptContainerElement *)local_248) &&
            ((FScriptContainerElement *)local_248 < local_240.Data + (longlong)local_238._4_4_ * 4))
           && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar32)) {
          pcVar4 = (code *)swi(3);
          uVar33 = (*pcVar4)();
          return (bool)uVar33;
        }
        iVar35 = (int)local_238;
        if ((int)local_238 == local_238._4_4_) {
          iVar35 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_240,(int *)((longlong)&local_238 + 4));
        }
        local_238 = CONCAT44(local_238._4_4_,iVar35 + 1);
        *(uint *)(local_240.Data + (longlong)iVar35 * 4) = local_248[0];
      }
    }
    TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
  } while( true );
}

// UpdateAnimationNode @ 14a1fc040

void __thiscall
FControlRigAnimInstanceProxy::UpdateAnimationNode
          (FControlRigAnimInstanceProxy *this,FAnimationUpdateContext *param_1)

{
  *(short *)&this->field_0x5b0 = *(short *)&this->field_0x5b0 + 1;
  *(ulong64 *)&this->field_0x5a8 = GFrameCounter;
  if (*(short *)&this->field_0x5b0 == -1) {
    *(undefined2 *)&this->field_0x5b0 = 0;
  }
  return;
}

// FControlRigAnimInstanceProxy @ 14a21e110

FControlRigAnimInstanceProxy * __thiscall
FControlRigAnimInstanceProxy::FControlRigAnimInstanceProxy(FControlRigAnimInstanceProxy *this)

{
  FAnimInstanceProxy::FAnimInstanceProxy((FAnimInstanceProxy *)this);
  *(undefined ***)this = &___7FControlRigAnimInstanceProxy__6B_;
  *(undefined8 *)&this->StoredTransforms = 0;
  *(undefined8 *)&(this->StoredTransforms).field_0x8 = 0;
  *(undefined8 *)&(this->StoredTransforms).field_0x20 = 0;
  *(undefined4 *)&(this->StoredTransforms).field_0x28 = 0;
  *(undefined4 *)&(this->StoredTransforms).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoredTransforms).field_0x34 = 0;
  *(undefined4 *)&(this->StoredTransforms).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StoredTransforms).field_0x40 = 0;
  *(undefined4 *)&(this->StoredTransforms).field_0x48 = 0;
  *(undefined8 *)&this->StoredCurves = 0;
  *(undefined8 *)&(this->StoredCurves).field_0x8 = 0;
  *(undefined8 *)&(this->StoredCurves).field_0x20 = 0;
  *(undefined4 *)&(this->StoredCurves).field_0x28 = 0;
  *(undefined4 *)&(this->StoredCurves).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoredCurves).field_0x34 = 0;
  *(undefined4 *)&(this->StoredCurves).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StoredCurves).field_0x40 = 0;
  *(undefined4 *)&(this->StoredCurves).field_0x48 = 0;
  *(undefined8 *)&this->StoredAttributes = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x38 = 0;
  return this;
}

// ~FControlRigAnimInstanceProxy @ 14a225500

void __thiscall
FControlRigAnimInstanceProxy::~FControlRigAnimInstanceProxy(FControlRigAnimInstanceProxy *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7FControlRigAnimInstanceProxy__6B_;
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->StoredAttributes);
  *(undefined4 *)&(this->StoredCurves).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StoredCurves).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredCurves);
  *(undefined4 *)&(this->StoredTransforms).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StoredTransforms).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredTransforms);
  FAnimInstanceProxy::~FAnimInstanceProxy((FAnimInstanceProxy *)this);
  return;
}

