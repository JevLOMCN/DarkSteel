// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 26

// StaticClass @ 14cc92440

UClass * __cdecl UHoleFillTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillTool",
               &Z_Registration_Info_UClass_UHoleFillTool.InnerSingleton,
               StaticRegisterNativesUHoleFillTool,0x250,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UHoleFillTool>,
               InternalVTableHelperCtorCaller<UHoleFillTool>,local_res8,
               USingleSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillTool.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cc96970

bool __cdecl `UHoleFillTool::Setup'::__l2::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14cc96990

bool __cdecl `UHoleFillTool::Setup'::__l2::<lambda_4>::<lambda_invoker_cdecl>(void)

{
  return true;
}

// UHoleFillTool @ 14ccbaec0

UHoleFillTool * __thiscall UHoleFillTool::UHoleFillTool(UHoleFillTool *this,FVTableHelper *param_1)

{
  USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SmoothHoleFillProperties).field0_0x0.DebugPtr = (USmoothHoleFillProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UHoleFillTool__6B_;
  (this->Properties).field0_0x0.DebugPtr = (UHoleFillToolProperties *)0x0;
  (this->Actions).field0_0x0.DebugPtr = (UHoleFillToolActions *)0x0;
  (this->Statistics).field0_0x0.DebugPtr = (UHoleFillStatisticsProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->SelectionMechanic).field0_0x0.DebugPtr = (UBoundarySelectionMechanic *)0x0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->MeshUVScaleFactor = 0.0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshSpatial);
  *(undefined8 *)&(this->NewTriangleIDs).Elements = 0;
  *(undefined8 *)&(this->NewTriangleIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NewTriangleIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x34 = 0;
  (this->NewTriangleIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NewTriangleIDs).HashSize = 0;
  this->bHavePendingAction = false;
  (this->BoundaryLoops).Ptr = (FMeshBoundaryLoops *)0x0;
  (this->ActiveBoundaryLoopSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoundaryLoopSelection).ArrayNum = 0;
  (this->ActiveBoundaryLoopSelection).ArrayMax = 0;
  return this;
}

// UHoleFillTool @ 14ccbafc0

UHoleFillTool * __thiscall UHoleFillTool::UHoleFillTool(UHoleFillTool *this)

{
  USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SmoothHoleFillProperties).field0_0x0.DebugPtr = (USmoothHoleFillProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UHoleFillTool__6B_;
  (this->Properties).field0_0x0.DebugPtr = (UHoleFillToolProperties *)0x0;
  (this->Actions).field0_0x0.DebugPtr = (UHoleFillToolActions *)0x0;
  (this->Statistics).field0_0x0.DebugPtr = (UHoleFillStatisticsProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->SelectionMechanic).field0_0x0.DebugPtr = (UBoundarySelectionMechanic *)0x0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->MeshUVScaleFactor = 0.0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshSpatial);
  *(undefined8 *)&(this->NewTriangleIDs).Elements = 0;
  *(undefined8 *)&(this->NewTriangleIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NewTriangleIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewTriangleIDs).Elements.field_0x34 = 0;
  (this->NewTriangleIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NewTriangleIDs).HashSize = 0;
  this->bHavePendingAction = false;
  (this->BoundaryLoops).Ptr = (FMeshBoundaryLoops *)0x0;
  (this->ActiveBoundaryLoopSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoundaryLoopSelection).ArrayNum = 0;
  (this->ActiveBoundaryLoopSelection).ArrayMax = 0;
  return this;
}

// ~UHoleFillTool @ 14ccc3490

void __thiscall UHoleFillTool::~UHoleFillTool(UHoleFillTool *this)

{
  FScriptContainerElement *pFVar1;
  FMeshBoundaryLoops *pFVar2;
  longlong *plVar3;
  ForElementType<FSetElementId> FVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UHoleFillTool__6B_;
  DestructItems<UHoleFillTool::FSelectedBoundaryLoop,int>
            ((FSelectedBoundaryLoop *)(this->ActiveBoundaryLoopSelection).AllocatorInstance.Data,
             (this->ActiveBoundaryLoopSelection).ArrayNum);
  pFVar1 = (this->ActiveBoundaryLoopSelection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->BoundaryLoops).Ptr;
  if (pFVar2 != (FMeshBoundaryLoops *)0x0) {
    pFVar1 = (pFVar2->VerticesTemp).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar2->FailureBowties).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (*(longlong *)&pFVar2->EdgeFilterFunc != 0) {
      plVar3 = *(longlong **)&(pFVar2->EdgeFilterFunc).field_0x28;
      plVar5 = (longlong *)&(pFVar2->EdgeFilterFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar5 = plVar3;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    DestructItems<UE::Geometry::FEdgeSpan,int>
              ((FEdgeSpan *)(pFVar2->Spans).AllocatorInstance.Data,(pFVar2->Spans).ArrayNum);
    pFVar1 = (pFVar2->Spans).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::Geometry::FEdgeLoop,int>
              ((FEdgeLoop *)(pFVar2->Loops).AllocatorInstance.Data,(pFVar2->Loops).ArrayNum);
    pFVar1 = (pFVar2->Loops).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar2,0xa0);
  }
  (this->NewTriangleIDs).HashSize = 0;
  FVar4 = (this->NewTriangleIDs).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NewTriangleIDs).Elements);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshSpatial);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  USingleSelectionMeshEditingTool::~USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this);
  return;
}

// operator() @ 14ccce850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UHoleFillTool::SetupPreview'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMeshOperator *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  byte bVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_1f8 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1b8;
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  uint local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined4 local_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  longlong *local_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FSparseArrayAllocationInfo local_108;
  FTextFormat local_f8;
  FText local_e8;
  FFormatArgumentValue local_d8;
  FText local_b8;
  FTextFormat local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar21 = param_1[1].ResultInfo.Errors.ArrayNum;
  pFVar23 = param_1[1].ResultInfo.Errors.AllocatorInstance.Data;
  local_160 = this;
  if (((int)uVar21 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar21 == 0) goto LAB_14ccceb45;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar21);
  uVar18 = 1;
  if (3 < uVar21) {
    uVar16 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar18 <= (int)local_50)) goto LAB_14ccceb45;
  local_50 = uVar18;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar18 != 0) {
    uVar20 = uVar18;
    if (uVar18 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar20 = 0;
        goto LAB_14ccce98c;
      }
    }
    else {
LAB_14ccce98c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar20,4);
    }
    if (0 < (int)uVar18) {
      uVar22 = (ulonglong)uVar18;
      uVar16 = uVar14;
      do {
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        uVar9 = uVar16 & (longlong)(int)uVar18 - 1U;
        uVar16 = uVar16 + 1;
        *(undefined4 *)(FVar15.Data + uVar9 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_1a8 = 0;
    uStack_1a4 = 1;
    uStack_194 = 0;
    uStack_190 = 0;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar18 = *(uint *)FVar17;
      uVar16 = uVar14;
      while (uVar18 == 0) {
        uStack_190 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_190;
        iVar7 = (int)uVar14;
        local_1a8 = iVar7 + 1;
        uVar14 = (ulonglong)local_1a8;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1a8)
        goto LAB_14cccea9f;
        uVar18 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_1a4 = -uVar18 & uVar18;
      uVar14 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_194 = (uStack_190 - 1) + (int)lVar3;
      uVar14 = (ulonglong)uStack_194;
      if ((int)local_70 < (int)uStack_194) {
LAB_14cccea9f:
        uVar14 = (ulonglong)local_70;
        uStack_194 = local_70;
      }
    }
    local_198 = 0xffffffff;
    local_158 = (longlong *)local_98;
    local_150._padding_ = CONCAT44(uStack_1a4,local_1a8);
    local_150.CurrentBitIndex = uStack_194;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_18c;
    local_150.BaseBitIndex = uStack_190;
    local_150.Array = pTStack_1a0;
    if ((int)uVar14 < (int)local_70) {
      do {
        iVar7 = (int)uVar14;
        uVar18 = local_50 - 1 & *(uint *)(*local_158 + (longlong)iVar7 * 0xc);
        lVar3 = *local_158 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar3 + 8) = uVar18;
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar15.Data + uVar14 * 4);
        *(int *)(FVar15.Data + uVar14 * 4) = iVar7;
        local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        uVar14 = (ulonglong)(uint)local_150.CurrentBitIndex;
      } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
    }
  }
LAB_14ccceb45:
  pFVar1 = pFVar23 + (longlong)(int)uVar21 * 4;
  plVar5 = local_160;
  iVar7 = local_68;
  do {
    local_160 = plVar5;
    local_68 = iVar7;
    if (pFVar23 == pFVar1) {
      if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*plVar5 + 0x1e0) !=
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*plVar5 + 0x1e0),
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
      }
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      bVar6 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = -1;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if (0 < *(int *)&param_1[1].ResultInfo.Warnings.AllocatorInstance.Data) {
        plVar10 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x2d8))();
        iVar7 = *(int *)&param_1[1].ResultInfo.Warnings.AllocatorInstance.Data;
        pcVar4 = *(code **)(*plVar10 + 0x360);
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_b8,L"UHoleFillTool",L"FillFailNotification",
                             L"Failed to fill {0} holes.");
        pFVar12 = FTextFormat::FTextFormat(&local_a8,pFVar11,Default);
        local_1b8.ArrayNum = 1;
        local_d8.Type = Int;
        local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_d8.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar7;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_1b8.AllocatorInstance.Data,&local_d8,1);
        local_f8.TextFormatData.Object = (pFVar12->TextFormatData).Object;
        local_f8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar12->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_f8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_e8,&local_f8,&local_1b8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
        if ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
        if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar12->TextFormatData).SharedReferenceCount.ReferenceController);
        (*pcVar4)(plVar10,&local_e8,3);
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
      }
      UHoleFillStatisticsProperties::Update
                ((((UHoleFillTool *)*plVar5)->Statistics).field0_0x0.DebugPtr,
                 (UHoleFillTool *)*plVar5,(FHoleFillOp *)param_1);
      return;
    }
    puVar19 = (uint *)0x0;
    if (local_64 == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      bVar13 = (byte)iVar8 & 0x1f;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
        bVar13 = bVar13 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar17 + (longlong)(iVar8 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar13 & 0x1f));
    }
    else {
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_108,iVar7);
    if (local_108.Pointer != (uint *)0x0) {
      *(uint *)local_108.Pointer = *(uint *)pFVar23;
      *(uint *)((longlong)local_108.Pointer + 4) = 0xffffffff;
      puVar19 = local_108.Pointer;
    }
    uVar21 = *puVar19;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar15.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_58.Data;
      }
      for (iVar7 = *(int *)(FVar15.Data + (ulonglong)(local_50 - 1 & uVar21) * 4); iVar7 != -1;
          iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar21) {
          if (iVar7 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = uVar21;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_108.Index,1);
            goto LAB_14cccef65;
          }
          break;
        }
      }
    }
    uVar14 = 0;
    uVar20 = local_98._8_4_ - local_64;
    uVar18 = 1;
    if (3 < uVar20) {
      uVar16 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar20 < 1) || ((int)uVar18 <= (int)local_50)) {
      uVar21 = local_50 - 1 & uVar21;
      puVar19[2] = uVar21;
      FVar15.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_58.Data;
      }
      uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
      puVar19[1] = *(uint *)(FVar15.Data + uVar14 * 4);
      *(int *)(FVar15.Data + uVar14 * 4) = local_108.Index;
    }
    else {
      local_50 = uVar18;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar18 != 0) {
        uVar21 = uVar18;
        if (uVar18 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar21 = 0;
            goto LAB_14ccced66;
          }
        }
        else {
LAB_14ccced66:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar21,4)
          ;
        }
        if (0 < (int)uVar18) {
          uVar22 = (ulonglong)uVar18;
          uVar16 = uVar14;
          do {
            FVar15.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_58.Data;
            }
            uVar9 = uVar16 & (longlong)(int)uVar18 - 1U;
            uVar16 = uVar16 + 1;
            *(undefined4 *)(FVar15.Data + uVar9 * 4) = 0xffffffff;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
      }
      if (local_50 != 0) {
        pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_188 = 0;
        uStack_184 = 1;
        uStack_174 = 0;
        uStack_170 = 0;
        if (local_70 != 0) {
          FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_78;
          }
          uVar21 = *(uint *)FVar17;
          uVar16 = uVar14;
          while (uVar21 == 0) {
            uStack_170 = (int)uVar16 + 0x20;
            uVar16 = (ulonglong)uStack_170;
            iVar7 = (int)uVar14;
            local_188 = iVar7 + 1;
            uVar14 = (ulonglong)local_188;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_188)
            goto LAB_14cccee7c;
            uVar21 = ((uint *)((longlong)FVar17 + 4))[iVar7];
          }
          uStack_184 = -uVar21 & uVar21;
          uVar14 = (ulonglong)uStack_184 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_174 = (int)uVar16 + -1 + (int)lVar3;
          uVar14 = (ulonglong)uStack_174;
          if ((int)local_70 < (int)uStack_174) {
LAB_14cccee7c:
            uVar14 = (ulonglong)local_70;
            uStack_174 = local_70;
          }
        }
        local_178 = 0xffffffff;
        local_130 = (longlong *)local_98;
        local_128._padding_ = CONCAT44(uStack_184,local_188);
        local_128.CurrentBitIndex = uStack_174;
        local_128.UnvisitedBitMask = 0xffffffff;
        local_128._28_4_ = uStack_16c;
        local_128.BaseBitIndex = uStack_170;
        local_128.Array = pTStack_180;
        if ((int)uVar14 < (int)local_70) {
          do {
            iVar7 = (int)uVar14;
            uVar21 = local_50 - 1 & *(uint *)(*local_130 + (longlong)iVar7 * 0xc);
            lVar3 = *local_130 + (longlong)iVar7 * 0xc;
            *(uint *)(lVar3 + 8) = uVar21;
            FVar15.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_58.Data;
            }
            uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
            *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar15.Data + uVar14 * 4);
            *(int *)(FVar15.Data + uVar14 * 4) = iVar7;
            local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
            uVar14 = (ulonglong)(uint)local_128.CurrentBitIndex;
          } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
        }
      }
    }
LAB_14cccef65:
    pFVar23 = pFVar23 + 4;
    plVar5 = local_160;
    iVar7 = local_68;
  } while( true );
}

// ApplyAction @ 14ccde800

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

void __thiscall UHoleFillTool::ApplyAction(UHoleFillTool *this,EHoleFillToolActions param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  int local_128;
  int local_124;
  FText local_120;
  FGroupTopologySelection local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (param_1 == SelectAll) {
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_108);
    local_128 = 0;
    if (0 < (((this->BoundaryLoops).Ptr)->Loops).ArrayNum) {
      do {
        iVar2 = local_128;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_108.SelectedEdgeIDs,&local_124,(bool *)&local_128);
        local_128 = iVar2 + 1;
      } while (local_128 < (((this->BoundaryLoops).Ptr)->Loops).ArrayNum);
    }
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,
               &local_108,true);
    UpdateActiveBoundaryLoopSelection(this);
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*plVar3 + 0x360);
    FText::FText(&local_120);
    (*pcVar1)(plVar3,&local_120,3);
    if (local_120.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
    }
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
    local_108.SelectedEdgeIDs.HashSize = 0;
    if (local_108.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.SelectedEdgeIDs.Elements);
    local_108.SelectedCornerIDs.HashSize = 0;
    if (local_108.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.SelectedCornerIDs.Elements);
    local_108.SelectedGroupIDs.HashSize = 0;
    if (local_108.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_108);
  }
  else if (param_1 == ClearSelection) {
    UMeshTopologySelectionMechanic::ClearSelection
              ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr);
    UpdateActiveBoundaryLoopSelection(this);
    InvalidatePreviewResult(this);
  }
  return;
}

// CanAccept @ 14cceb990

bool __thiscall UHoleFillTool::CanAccept(UHoleFillTool *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3a8))();
  if ((cVar1 != '\0') && (((this->Preview).field0_0x0.DebugPtr)->bResultValid != false)) {
    return true;
  }
  return false;
}

// ClearSelection @ 14ccee310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHoleFillTool::ClearSelection(UHoleFillTool *this)

{
  UMeshTopologySelectionMechanic::ClearSelection
            ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr);
  UpdateActiveBoundaryLoopSelection(this);
  InvalidatePreviewResult(this);
  return;
}

// GetLoopsToFill @ 14ccfe750

void __thiscall
UHoleFillTool::GetLoopsToFill
          (UHoleFillTool *this,TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FEdgeLoop *pFVar3;
  FDynamicMesh3 *pFVar4;
  FMeshBoundaryLoops *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FEdgeLoop *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (FEdgeLoop *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<UE::Geometry::FEdgeLoop,int>(pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FEdgeLoop,int>(pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  if ((this->BoundaryLoops).Ptr == (FMeshBoundaryLoops *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoundaryLoops.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\HoleFillTool.cpp"
                       ,0x1c9,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar2 = (this->ActiveBoundaryLoopSelection).ArrayNum;
  pFVar13 = (this->ActiveBoundaryLoopSelection).AllocatorInstance.Data;
  local_res10 = pFVar13 + (longlong)iVar2 * 0x18;
  while( true ) {
    pFVar7 = local_res10;
    if ((this->ActiveBoundaryLoopSelection).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UHoleFillTool::FSelectedBoundaryLoop_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar7) break;
    if ((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (this->OriginalMesh).Object;
    if (*(int *)(pFVar13 + 0x10) < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(int *)(*(longlong *)
                  ((pFVar4->Edges).Blocks.AllocatorInstance.Data +
                  (ulonglong)(**(uint **)(pFVar13 + 8) >> 9) * 8) + 0xc +
                (ulonglong)(**(uint **)(pFVar13 + 8) & 0x1ff) * 0x10) == -1) {
      pFVar5 = (this->BoundaryLoops).Ptr;
      if (*(int *)(pFVar13 + 0x10) < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar9 = UE::Geometry::FMeshBoundaryLoops::FindLoopContainingEdge
                        (pFVar5,**(int **)(pFVar13 + 8));
      if (-1 < (int)uVar9) {
        pFVar5 = (this->BoundaryLoops).Ptr;
        uVar10 = 0;
        if ((int)uVar9 < (pFVar5->Loops).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar3 = (FEdgeLoop *)(param_1->AllocatorInstance).Data;
        pFVar12 = (FEdgeLoop *)
                  ((pFVar5->Loops).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x40);
        if ((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + *piVar1)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar11 = param_1->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar11 + 1;
        UE::Geometry::FEdgeLoop::FEdgeLoop
                  ((FEdgeLoop *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x40),
                   pFVar12);
      }
    }
    pFVar13 = pFVar13 + 0x18;
  }
  return;
}

// GetPrivateStaticClass @ 14ccff0d0

UClass * __cdecl UHoleFillTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoleFillTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"HoleFillTool",
               &Z_Registration_Info_UClass_UHoleFillTool.InnerSingleton,
               StaticRegisterNativesUHoleFillTool,0x250,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UHoleFillTool>,
               InternalVTableHelperCtorCaller<UHoleFillTool>,local_res8,
               USingleSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoleFillTool.InnerSingleton;
}

// HasAccept @ 14cd03410

bool __thiscall UHoleFillTool::HasAccept(UHoleFillTool *this)

{
  return true;
}

// HasCancel @ 14cd034b0

bool __thiscall UHoleFillTool::HasCancel(UHoleFillTool *this)

{
  return true;
}

// InvalidatePreviewResult @ 14cd07f00

void __thiscall UHoleFillTool::InvalidatePreviewResult(UHoleFillTool *this)

{
  code *pcVar1;
  longlong *plVar2;
  FText local_18;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  pcVar1 = *(code **)(*plVar2 + 0x360);
  FText::FText(&local_18);
  (*pcVar1)(plVar2,&local_18,3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  return;
}

// OnPropertyModified @ 14cd11c00

void __thiscall
UHoleFillTool::OnPropertyModified(UHoleFillTool *this,UObject *param_1,FProperty *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  FText FStack_18;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  pcVar1 = *(code **)(*plVar2 + 0x360);
  FText::FText(&FStack_18);
  (*pcVar1)(plVar2,&FStack_18,3);
  if (FStack_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  return;
}

// OnSelectionModified @ 14cd123a0

void __thiscall UHoleFillTool::OnSelectionModified(UHoleFillTool *this)

{
  UpdateActiveBoundaryLoopSelection(this);
  InvalidatePreviewResult(this);
  return;
}

// OnShutdown @ 14cd123d0

void __thiscall UHoleFillTool::OnShutdown(UHoleFillTool *this,EToolShutdownType param_1)

{
  UHoleFillToolProperties *pUVar1;
  code *pcVar2;
  USmoothHoleFillProperties *pUVar3;
  UBoundarySelectionMechanic *pUVar4;
  UObjectBaseUtility *this_00;
  bool bVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FText *pFVar9;
  FConversionToMeshDescriptionOptions local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FDynamicMeshOpResult local_68;
  
  pUVar1 = (this->Properties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_98,L"");
  (*pcVar2)(pUVar1,this,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->SmoothHoleFillProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_88,L"");
  (*pcVar2)(pUVar3,this,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  if (pUVar4 != (UBoundarySelectionMechanic *)0x0) {
    (**(code **)(*(longlong *)pUVar4 + 0x2b8))();
  }
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
  }
  (**(code **)(*plVar7 + 0x20))(plVar7,1);
  UMeshOpPreviewWithBackgroundCompute::Shutdown((this->Preview).field0_0x0.DebugPtr,&local_68);
  if (param_1 == Accept) {
    lVar8 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar2 = *(code **)(*(longlong *)(lVar8 + 0x28) + 0x10);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UHoleFillTool",L"HoleFillToolTransactionName",L"Hole Fill Tool")
    ;
    (*pcVar2)(lVar8 + 0x28,pFVar9);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Mesh.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\HoleFillTool.cpp"
                         ,0x130,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_a8.bSetPolyGroups = true;
    local_a8.bUpdatePositions = true;
    local_a8.bUpdateNormals = true;
    local_a8.bUpdateTangents = false;
    local_a8.bUpdateUVs = false;
    local_a8.bUpdateVtxColors = false;
    local_a8.bTransformVtxColorsSRGBToLinear = true;
    local_a8.bConvertBackToNonManifold = false;
    local_a8.bSetHardEdgesFromNormalSeams = true;
    UE::ToolTarget::CommitDynamicMeshUpdate
              ((UToolTarget *)this->_padding_,local_68.Mesh.Ptr,true,&local_a8,
               (FComponentMaterialSet *)0x0);
    lVar8 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x18))(lVar8 + 0x28);
  }
  if (local_68.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_68.Mesh.Ptr)->_padding_)(local_68.Mesh.Ptr,1);
  }
  return;
}

// OnTick @ 14cd13580

void __thiscall UHoleFillTool::OnTick(UHoleFillTool *this,float param_1)

{
  UMeshOpPreviewWithBackgroundCompute *this_00;
  
  this_00 = (this->Preview).field0_0x0.DebugPtr;
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::Tick(this_00,param_1);
  }
  if (this->bHavePendingAction != false) {
    (**(code **)(this->_padding_ + 0x3d0))(this,this->PendingAction);
    this->bHavePendingAction = false;
    this->PendingAction = NoAction;
  }
  return;
}

// Render @ 14cd1b670

void __thiscall UHoleFillTool::Render(UHoleFillTool *this,IToolsContextRenderAPI *param_1)

{
  UBoundarySelectionMechanic *pUVar1;
  
  pUVar1 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (UBoundarySelectionMechanic *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd1b67f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    return;
  }
  return;
}

// RequestAction @ 14cd1c250

void __thiscall UHoleFillTool::RequestAction(UHoleFillTool *this,EHoleFillToolActions param_1)

{
  if (this->bHavePendingAction == false) {
    this->PendingAction = param_1;
    this->bHavePendingAction = true;
  }
  return;
}

// SelectAll @ 14cd1d730

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

void __thiscall UHoleFillTool::SelectAll(UHoleFillTool *this)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  int local_128;
  int local_124;
  FText local_120;
  FGroupTopologySelection local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_108);
  local_128 = 0;
  if (0 < (((this->BoundaryLoops).Ptr)->Loops).ArrayNum) {
    do {
      iVar2 = local_128;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_108.SelectedEdgeIDs,&local_124,(bool *)&local_128);
      local_128 = iVar2 + 1;
    } while (local_128 < (((this->BoundaryLoops).Ptr)->Loops).ArrayNum);
  }
  UMeshTopologySelectionMechanic::SetSelection
            ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,
             &local_108,true);
  UpdateActiveBoundaryLoopSelection(this);
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar1 = *(code **)(*plVar3 + 0x360);
  FText::FText(&local_120);
  (*pcVar1)(plVar3,&local_120,3);
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  local_108.SelectedEdgeIDs.HashSize = 0;
  if (local_108.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.SelectedEdgeIDs.Elements);
  local_108.SelectedCornerIDs.HashSize = 0;
  if (local_108.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.SelectedCornerIDs.Elements);
  local_108.SelectedGroupIDs.HashSize = 0;
  if (local_108.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_108);
  return;
}

// Setup @ 14cd20630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UHoleFillTool::Setup(UHoleFillTool *this)

{
  int *piVar1;
  TUniquePtr<UE::Geometry::FMeshBoundaryLoops,TDefaultDelete<UE::Geometry::FMeshBoundaryLoops>_>
  *this_00;
  FName FVar2;
  FEdgeLoop *pFVar3;
  UObjectBaseUtility *this_01;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar12;
  FDynamicMesh3 *pFVar13;
  FName *pFVar14;
  UClass *pUVar15;
  UHoleFillToolProperties *pUVar16;
  USmoothHoleFillProperties *pUVar17;
  void *this_02;
  TPropertyWatcher<EHoleFillOpFillType> *pTVar18;
  UHoleFillToolActions *pUVar19;
  UObject *pUVar20;
  UHoleFillStatisticsProperties *pUVar21;
  ulong64 uVar22;
  FMeshBoundaryLoops *pFVar23;
  longlong *plVar24;
  UBoundarySelectionMechanic *pUVar25;
  UWorld *pUVar26;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 *pTVar27;
  TAxisAlignedBox3<double> *pTVar28;
  FText *pFVar29;
  longlong *plVar30;
  ulonglong uVar31;
  undefined ***pppuVar32;
  uint uVar33;
  FMeshBoundaryLoops *pFVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  longlong lVar37;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar38;
  FScriptContainerElement *pFVar39;
  FScriptContainerElement *pFVar40;
  double dVar41;
  undefined1 auStackY_878 [32];
  undefined1 local_827 [7];
  UHoleFillTool *local_820;
  uint local_818;
  FScriptContainerElement *local_810;
  FGetMeshParameters local_808;
  FEdgeLoop local_7f8;
  FDynamicMesh3 *local_7b8;
  FSharedReferencer<1> local_7b0;
  FMeshBoundaryLoops *local_7a8;
  undefined4 uStack_7a0;
  uint uStack_79c;
  UHoleFillTool *local_798 [2];
  code *local_788;
  undefined **local_778;
  UHoleFillTool *local_770;
  undefined ***local_760;
  FString local_758;
  FString local_748;
  code *local_738 [2];
  undefined **local_728;
  code *local_720;
  undefined ***local_710;
  code *local_708 [2];
  undefined **local_6f8;
  code *local_6f0;
  undefined ***local_6e0;
  undefined1 local_6d8 [16];
  TReferenceControllerBase<1> *local_6c8;
  code *local_6b8;
  longlong lStack_6b0;
  FText local_6a8;
  FText local_698;
  FText local_688;
  FText local_678;
  FText local_668;
  FName local_658;
  FName local_650;
  FName local_648;
  TDefaultDelete<UE::Geometry::FMeshBoundaryLoops> local_640 [8];
  code *local_638 [2];
  undefined **local_628;
  UHoleFillTool *local_620;
  longlong local_610;
  code *local_608 [2];
  code *local_5f8 [3];
  TObjectPtr<UMeshOpPreviewWithBackgroundCompute>_u_0 local_5e0;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 local_5d8;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 TStack_5d0;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 local_5c8;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 TStack_5c0;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 local_5b8;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 TStack_5b0;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 local_5a8;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 TStack_5a0;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 local_598;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 TStack_590;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 local_588;
  TObjectPtr<UBoundarySelectionMechanic>_u_0 TStack_580;
  TAxisAlignedBox3<double> local_578;
  FDynamicMesh3 local_548;
  undefined1 local_318 [128];
  undefined1 local_298 [128];
  undefined1 local_218 [128];
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  if (this->_padding_ == 0) {
    return;
  }
  pTVar12 = MakeShared<UE::Geometry::FDynamicMesh3,1>
                      ((TSharedRef<UE::Geometry::FDynamicMesh3,1> *)(local_6d8 + 8));
  local_7b0.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
  local_7b8 = pTVar12->Object;
  if (local_7b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_7b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar38 = &this->OriginalMesh;
  if (pTVar38 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_7b8) {
    pTVar38->Object = local_7b8;
    local_7b8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OriginalMesh).SharedReferenceCount,&local_7b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6c8);
  local_808.bHaveRequestLOD = false;
  local_808._1_3_ = 0;
  local_808.RequestLOD = Default;
  local_808.bWantMeshTangents = false;
  local_808._9_3_ = 0;
  pFVar13 = UE::ToolTarget::GetDynamicMeshCopy(&local_548,(UToolTarget *)this->_padding_,&local_808)
  ;
  if ((pTVar38->Object == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(pTVar38->Object,pFVar13);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_548);
  pFVar14 = ::FName::FName(&local_658,L"Hole Fill Settings");
  FVar2 = *pFVar14;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar15 = UHoleFillToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_318,pUVar15);
  local_318._48_8_ = (FObjectInstancingGraph *)0x0;
  local_318._56_8_ = (UPackage *)0x0;
  local_318._24_4_ = RF_NoFlags;
  local_318._40_8_ = (UObject *)0x0;
  local_318[0x20] = false;
  local_318._8_8_ = this;
  local_318._16_8_ = FVar2;
  pUVar16 = (UHoleFillToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_318);
  if (local_318._64_8_ != 0) {
    plVar24 = (longlong *)(local_318 + 0x50);
    if ((longlong *)local_318._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_318._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UHoleFillToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->Properties).field0_0x0.DebugPtr = pUVar16;
  pcVar4 = *(code **)(pUVar16->_padding_ + 0x2b8);
  ::FString::FString(&local_748,L"");
  (*pcVar4)(pUVar16,this,&local_748);
  if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_748.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->Properties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))(this,(this->Properties).field0_0x0.DebugPtr,1);
  pFVar14 = ::FName::FName(&local_650,L"Smooth Fill Settings");
  FVar2 = *pFVar14;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar15 = USmoothHoleFillProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_298,pUVar15);
  local_298._48_8_ = (FObjectInstancingGraph *)0x0;
  local_298._56_8_ = (UPackage *)0x0;
  local_298._24_4_ = RF_NoFlags;
  local_298._40_8_ = (UObject *)0x0;
  local_298[0x20] = false;
  local_298._8_8_ = this;
  local_298._16_8_ = FVar2;
  pUVar17 = (USmoothHoleFillProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_298);
  if (local_298._64_8_ != 0) {
    plVar24 = (longlong *)(local_298 + 0x50);
    if ((longlong *)local_298._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_298._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (USmoothHoleFillProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->SmoothHoleFillProperties).field0_0x0.DebugPtr = pUVar17;
  pcVar4 = *(code **)(pUVar17->_padding_ + 0x2b8);
  ::FString::FString(&local_758,L"");
  (*pcVar4)(pUVar17,this,&local_758);
  if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_758.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->SmoothHoleFillProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->SmoothHoleFillProperties).field0_0x0.DebugPtr,
             ((this->Properties).field0_0x0.DebugPtr)->FillType == Smooth);
  pUVar16 = (this->Properties).field0_0x0.DebugPtr;
  local_778 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UHoleFillTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_760 = (undefined ***)0x0;
  local_788 = UE::Core::Private::Function::
              TFunctionRefCaller<`UHoleFillTool::Setup'::__l2::<lambda_1>,void,enum_EHoleFillOpFillType_const_&>
              ::Call;
  local_770 = this;
  this_02 = ::operator_new(0xa0);
  if (this_02 == (void *)0x0) {
    pTVar18 = (TPropertyWatcher<EHoleFillOpFillType> *)0x0;
  }
  else {
    local_608[0] = local_788;
    local_5e0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
    if (local_788 != (code *)0x0) {
      pppuVar32 = &local_778;
      if (local_760 != (undefined ***)0x0) {
        pppuVar32 = local_760;
      }
      (*(code *)**pppuVar32)(pppuVar32,local_608 + 2);
    }
    pTVar18 = FWatchablePropertySet::TPropertyWatcher<enum_EHoleFillOpFillType>::
              TPropertyWatcher<enum_EHoleFillOpFillType><enum_EHoleFillOpFillType,void>
                        (this_02,&pUVar16->FillType,
                         (TFunction<void___cdecl(EHoleFillOpFillType_const_&)> *)local_608);
  }
  pFVar34 = (FMeshBoundaryLoops *)0x0;
  iVar10 = (int)pUVar16->_padding_;
  piVar1 = (int *)((longlong)&pUVar16->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar16->_padding_,piVar1);
  }
  *(int *)&pUVar16->_padding_ = iVar10 + 1;
  *(TPropertyWatcher<EHoleFillOpFillType> **)(pUVar16->_padding_ + (longlong)iVar10 * 8) = pTVar18;
  if (local_788 != (code *)0x0) {
    pppuVar32 = &local_778;
    if (local_760 != (undefined ***)0x0) {
      pppuVar32 = local_760;
    }
    (*(code *)(*pppuVar32)[2])();
  }
  pFVar14 = ::FName::FName(&local_648,L"Hole Fill Actions");
  FVar2 = *pFVar14;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar15 = UHoleFillToolActions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_218,pUVar15);
  local_218._48_8_ = (FObjectInstancingGraph *)0x0;
  local_218._56_8_ = (UPackage *)0x0;
  local_218._24_4_ = RF_NoFlags;
  local_218._40_8_ = (UObject *)0x0;
  local_218[0x20] = false;
  local_218._8_8_ = this;
  local_218._16_8_ = FVar2;
  pUVar19 = (UHoleFillToolActions *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_218);
  if (local_218._64_8_ != 0) {
    plVar24 = (longlong *)(local_218 + 0x50);
    if ((longlong *)local_218._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_218._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UHoleFillToolActions *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->Actions).field0_0x0.DebugPtr = pUVar19;
  local_798[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar19->ParentTool).WeakPtr,(FObjectPtr)local_798);
  (**(code **)(this->_padding_ + 0x318))(this,(this->Actions).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))(this,(this->Actions).field0_0x0.DebugPtr,1);
  pUVar20 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar20,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar15 = UHoleFillStatisticsProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_198,pUVar15);
  local_198._8_8_ = pUVar20;
  pUVar21 = (UHoleFillStatisticsProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
  if (local_198._64_8_ != 0) {
    plVar24 = (longlong *)(local_198 + 0x50);
    if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_198._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar21 != (UHoleFillStatisticsProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  (this->Statistics).field0_0x0.DebugPtr = pUVar21;
  (**(code **)(this->_padding_ + 0x318))(this,pUVar21);
  (**(code **)(this->_padding_ + 0x338))(this,(this->Statistics).field0_0x0.DebugPtr,1);
  local_820 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  if ((((UHoleFillTool **)this->_padding_ <= &local_820) &&
      (&local_820 < (UHoleFillTool **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar10 + 1;
  *(UHoleFillTool **)(this->_padding_ + (longlong)iVar10 * 8) = local_820;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_820 != (UHoleFillTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_820);
  }
  (this->MeshSpatial).Mesh = pTVar38->Object;
  (this->MeshSpatial).MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&this->MeshSpatial,false);
  uVar22 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshSpatial).Mesh);
  (this->MeshSpatial).MeshChangeStamp = uVar22;
  pFVar13 = pTVar38->Object;
  pFVar23 = ::operator_new(0xa0);
  if (pFVar23 != (FMeshBoundaryLoops *)0x0) {
    (pFVar23->Loops).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar23->Loops).ArrayNum = 0;
    (pFVar23->Loops).ArrayMax = 0;
    (pFVar23->Spans).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar23->Spans).ArrayNum = 0;
    (pFVar23->Spans).ArrayMax = 0;
    pFVar23->bAborted = false;
    pFVar23->bSawOpenSpans = false;
    pFVar23->bFellBackToSpansOnFailure = false;
    pFVar23->SpanBehavior = Compute;
    pFVar23->FailureBehavior = ConvertToOpenSpan;
    *(undefined8 *)&pFVar23->EdgeFilterFunc = 0;
    *(undefined8 *)&(pFVar23->EdgeFilterFunc).field_0x28 = 0;
    (pFVar23->FailureBowties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar23->FailureBowties).ArrayNum = 0;
    (pFVar23->FailureBowties).ArrayMax = 0;
    pFVar23->bOnlyComputeSpans = false;
    (pFVar23->VerticesTemp).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar23->VerticesTemp).ArrayNum = 0;
    (pFVar23->VerticesTemp).ArrayMax = 0;
    pFVar23->Mesh = pFVar13;
    UE::Geometry::FMeshBoundaryLoops::Compute(pFVar23);
    pFVar34 = pFVar23;
  }
  this_00 = &this->BoundaryLoops;
  if ((TDefaultDelete<UE::Geometry::FMeshBoundaryLoops> *)this_00 == local_640) {
    if (pFVar34 != (FMeshBoundaryLoops *)0x0) {
      pFVar39 = (pFVar34->VerticesTemp).AllocatorInstance.Data;
      if (pFVar39 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar39);
      }
      pFVar39 = (pFVar34->FailureBowties).AllocatorInstance.Data;
      if (pFVar39 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar39);
      }
      if (*(longlong *)&pFVar34->EdgeFilterFunc != 0) {
        plVar24 = *(longlong **)&(pFVar34->EdgeFilterFunc).field_0x28;
        plVar30 = (longlong *)&(pFVar34->EdgeFilterFunc).field_0x10;
        if (plVar24 != (longlong *)0x0) {
          plVar30 = plVar24;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
      DestructItems<UE::Geometry::FEdgeSpan,int>
                ((FEdgeSpan *)(pFVar34->Spans).AllocatorInstance.Data,(pFVar34->Spans).ArrayNum);
      pFVar39 = (pFVar34->Spans).AllocatorInstance.Data;
      if (pFVar39 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar39);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>
                ((FEdgeLoop *)(pFVar34->Loops).AllocatorInstance.Data,(pFVar34->Loops).ArrayNum);
      pFVar39 = (pFVar34->Loops).AllocatorInstance.Data;
      if (pFVar39 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar39);
      }
      ::operator_delete(pFVar34,0xa0);
    }
  }
  else {
    pFVar23 = this_00->Ptr;
    this_00->Ptr = pFVar34;
    TDefaultDelete<UE::Geometry::FMeshBoundaryLoops>::operator()
              ((TDefaultDelete<UE::Geometry::FMeshBoundaryLoops> *)this_00,pFVar23);
  }
  local_7a8 = this_00->Ptr;
  bVar8 = local_7a8->bAborted;
  if (bVar8 == false) {
    local_818 = (local_7a8->Spans).ArrayNum;
    uVar31 = (ulonglong)(int)local_818;
    if (0 < (int)local_818) {
      pFVar39 = (local_7a8->Spans).AllocatorInstance.Data;
      pFVar35 = pFVar39 + uVar31 * 0x40;
      local_810 = pFVar35;
      while( true ) {
        pTVar38 = &this->OriginalMesh;
        if ((local_7a8->Spans).ArrayNum != (int)uVar31) {
          local_827[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FEdgeSpan,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_827);
        }
        if (pFVar39 == pFVar35) break;
        if (1 < *(int *)(pFVar39 + 0x10)) {
          if ((pTVar38->Object == (FDynamicMesh3 *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = pTVar38->Object;
          uVar33 = *(int *)(pFVar39 + 0x10) - 1;
          uVar11 = 0;
          if ((int)uVar33 < *(int *)(pFVar39 + 0x10)) {
            uVar11 = ~uVar33 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = *(int *)(*(longlong *)(pFVar39 + 8) + -4 + (longlong)*(int *)(pFVar39 + 0x10) * 4
                           );
          if ((*(int *)(pFVar39 + 0x10) < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = UE::Geometry::FDynamicMesh3::FindEdge(pFVar13,**(int **)(pFVar39 + 8),iVar10);
          pFVar35 = local_810;
          if (iVar10 != -1) {
            local_7f8.Mesh = pTVar38->Object;
            local_7f8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7f8.Vertices.ArrayNum = 0;
            local_7f8.Vertices.ArrayMax = 0;
            local_7f8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7f8.Edges.ArrayNum = 0;
            local_7f8.Edges.ArrayMax = 0;
            local_7f8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_7f8.BowtieVertices.ArrayNum = 0;
            local_7f8.BowtieVertices.ArrayMax = 0;
            local_7f8.bBowtiesCalculated = false;
            bVar9 = UE::Geometry::FEdgeLoop::InitializeFromVertices
                              (&local_7f8,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar39 + 8),
                               true);
            if (bVar9) {
              pFVar34 = (this->BoundaryLoops).Ptr;
              pFVar3 = (FEdgeLoop *)(pFVar34->Loops).AllocatorInstance.Data;
              if (((pFVar3 <= &local_7f8) && (&local_7f8 < pFVar3 + (pFVar34->Loops).ArrayMax)) &&
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
              iVar10 = (pFVar34->Loops).ArrayNum;
              piVar1 = &(pFVar34->Loops).ArrayMax;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x840,&(pFVar34->Loops).AllocatorInstance,piVar1);
              }
              FVar7.Data = local_7f8.Vertices.AllocatorInstance.Data;
              (pFVar34->Loops).ArrayNum = iVar10 + 1;
              pFVar35 = (pFVar34->Loops).AllocatorInstance.Data;
              lVar37 = (longlong)iVar10 * 0x40;
              pFVar40 = pFVar35 + lVar37 + 8;
              *(FDynamicMesh3 **)(pFVar35 + lVar37) = local_7f8.Mesh;
              *(undefined8 *)&pFVar40->field_0x0 = 0;
              lVar36 = (longlong)local_7f8.Vertices.ArrayNum;
              *(int *)&pFVar40[8].field_0x0 = local_7f8.Vertices.ArrayNum;
              if (local_7f8.Vertices.ArrayNum == 0) {
                *(int *)(pFVar35 + lVar37 + 0x14) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_7f8.Vertices.ArrayNum,0,(ForAnyElementType *)pFVar40,
                           local_7f8.Vertices.ArrayNum,(int *)(pFVar35 + lVar37 + 0x14));
                memcpy(*(void **)&pFVar40->field_0x0,FVar7.Data,lVar36 << 2);
              }
              FVar7.Data = local_7f8.Edges.AllocatorInstance.Data;
              pFVar40 = pFVar35 + lVar37 + 0x18;
              *(undefined8 *)&pFVar40->field_0x0 = 0;
              lVar36 = (longlong)local_7f8.Edges.ArrayNum;
              *(int *)&pFVar40[8].field_0x0 = local_7f8.Edges.ArrayNum;
              if (local_7f8.Edges.ArrayNum == 0) {
                *(int *)(pFVar35 + lVar37 + 0x24) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_7f8.Edges.ArrayNum,0,(ForAnyElementType *)pFVar40,
                           local_7f8.Edges.ArrayNum,(int *)(pFVar35 + lVar37 + 0x24));
                memcpy(*(void **)&pFVar40->field_0x0,FVar7.Data,lVar36 << 2);
              }
              FVar7.Data = local_7f8.BowtieVertices.AllocatorInstance.Data;
              pFVar40 = pFVar35 + lVar37 + 0x28;
              *(undefined8 *)&pFVar40->field_0x0 = 0;
              lVar36 = (longlong)local_7f8.BowtieVertices.ArrayNum;
              *(int *)&pFVar40[8].field_0x0 = local_7f8.BowtieVertices.ArrayNum;
              if (local_7f8.BowtieVertices.ArrayNum == 0) {
                *(int *)(pFVar35 + lVar37 + 0x34) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_7f8.BowtieVertices.ArrayNum,0,(ForAnyElementType *)pFVar40,
                           local_7f8.BowtieVertices.ArrayNum,(int *)(pFVar35 + lVar37 + 0x34));
                memcpy(*(void **)&pFVar40->field_0x0,FVar7.Data,lVar36 << 2);
              }
              pFVar35[lVar37 + 0x38] = (FScriptContainerElement)local_7f8.bBowtiesCalculated;
            }
            if (local_7f8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7f8.BowtieVertices.AllocatorInstance.Data);
            }
            if (local_7f8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7f8.Edges.AllocatorInstance.Data);
            }
            pFVar35 = local_810;
            if (local_7f8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7f8.Vertices.AllocatorInstance.Data);
              pFVar35 = local_810;
            }
          }
        }
        pFVar39 = pFVar39 + 0x40;
        uVar31 = (ulonglong)local_818;
      }
      pFVar34 = (this->BoundaryLoops).Ptr;
      DestructItems<UE::Geometry::FEdgeSpan,int>
                ((FEdgeSpan *)(pFVar34->Spans).AllocatorInstance.Data,(pFVar34->Spans).ArrayNum);
      (pFVar34->Spans).ArrayNum = 0;
      if ((pFVar34->Spans).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&(pFVar34->Spans).AllocatorInstance,0,&(pFVar34->Spans).ArrayMax);
      }
    }
  }
  plVar24 = (longlong *)0x0;
  pTVar38 = &this->OriginalMesh;
  this_01 = (UObjectBaseUtility *)this->_padding_;
  if (this_01 != (UObjectBaseUtility *)0x0) {
    pUVar15 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    plVar24 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar15);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar15 = Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar15);
  local_118._8_8_ = this;
  pUVar25 = (UBoundarySelectionMechanic *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar30 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar30 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar30 + 0x10))(plVar30);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar25 != (UBoundarySelectionMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar25);
  }
  (this->SelectionMechanic).field0_0x0.DebugPtr = pUVar25;
  pUVar25->field_0x40 = 0;
  pUVar25 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar25 + 0x2b0))(pUVar25,this);
  local_610 = 0;
  *(undefined1 *)(*(longlong *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->field_0x88 + 0xb1)
       = 1;
  *(undefined1 *)(*(longlong *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->field_0x88 + 0xb2)
       = 0;
  local_628 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UHoleFillTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_638[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UHoleFillTool::Setup'::__l2::<lambda_2>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*>
                 ::Call;
  *(undefined1 *)(*(longlong *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->field_0x88 + 0xb0)
       = 0;
  pUVar25 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  pFVar34 = (this->BoundaryLoops).Ptr;
  local_620 = this;
  pUVar26 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  pTVar27 = (TObjectPtr<UBoundarySelectionMechanic>_u_0 *)
            (**(code **)(*plVar24 + 0x28))(plVar24,local_98);
  local_5d8 = *pTVar27;
  TStack_5d0 = pTVar27[1];
  local_5c8 = pTVar27[2];
  TStack_5c0 = pTVar27[3];
  local_5b8 = pTVar27[4];
  TStack_5b0 = pTVar27[5];
  local_5a8 = pTVar27[6];
  TStack_5a0 = pTVar27[7];
  local_598 = pTVar27[8];
  TStack_590 = pTVar27[9];
  local_588 = pTVar27[10];
  TStack_580 = pTVar27[0xb];
  UBoundarySelectionMechanic::Initialize
            (pUVar25,pTVar38->Object,(TTransform<double> *)&local_5d8.ObjectPtr,pUVar26,pFVar34,
             (TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)> *
             )local_638,Loops);
  local_720 = `UHoleFillTool::Setup'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_710 = (undefined ***)0x0;
  local_728 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_738[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  TFunction<bool___cdecl(void)>::operator=
            ((TFunction<bool___cdecl(void)> *)
             &((this->SelectionMechanic).field0_0x0.DebugPtr)->field_0x160,
             (TFunction<bool___cdecl(void)> *)local_738);
  if (local_738[0] != (code *)0x0) {
    pppuVar32 = &local_728;
    if (local_710 != (undefined ***)0x0) {
      pppuVar32 = local_710;
    }
    (*(code *)(*pppuVar32)[2])();
  }
  local_6e0 = (undefined ***)0x0;
  local_6f8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_6f0 = `UHoleFillTool::Setup'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_708[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  TFunction<bool___cdecl(void)>::operator=
            ((TFunction<bool___cdecl(void)> *)
             &((this->SelectionMechanic).field0_0x0.DebugPtr)->field_0x190,
             (TFunction<bool___cdecl(void)> *)local_708);
  if (local_708[0] != (code *)0x0) {
    pppuVar32 = &local_6f8;
    if (local_6e0 != (undefined ***)0x0) {
      pppuVar32 = local_6e0;
    }
    (*(code *)(*pppuVar32)[2])();
  }
  local_7a8 = (FMeshBoundaryLoops *)OnSelectionModified;
  uStack_7a0 = 0;
  lStack_6b0 = (ulonglong)uStack_79c << 0x20;
  local_6b8 = OnSelectionModified;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UHoleFillTool>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->SelectionMechanic).field0_0x0.DebugPtr)->field_0x48,(UHoleFillTool *)local_6d8
             ,(pmf_4fbca81c *)this);
  if ((pTVar38->Object == (FDynamicMesh3 *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar28 = UE::Geometry::FDynamicMesh3::GetBounds(pTVar38->Object,&local_578,false);
  pUVar21 = (this->Statistics).field0_0x0.DebugPtr;
  dVar5 = (pTVar28->Max).field0_0x0._s_0.Y - (pTVar28->Min).field0_0x0._s_0.Y;
  dVar41 = (pTVar28->Max).field0_0x0._s_0.Z - (pTVar28->Min).field0_0x0._s_0.Z;
  dVar6 = (pTVar28->Max).field0_0x0._s_0.X - (pTVar28->Min).field0_0x0._s_0.X;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar41 <= 0.0) {
    dVar41 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar41 <= dVar5) {
    dVar41 = dVar5;
  }
  if (dVar41 <= dVar6) {
    dVar41 = dVar6;
  }
  this->MeshUVScaleFactor = (float)(__real_3ff0000000000000 / dVar41);
  UHoleFillStatisticsProperties::Initialize(pUVar21,this);
  SetupPreview(this);
  InvalidatePreviewResult(this);
  pcVar4 = *(code **)(this->_padding_ + 0x2d8);
  if (bVar8 == false) {
    if ((((this->BoundaryLoops).Ptr)->Loops).ArrayNum != 0) {
      plVar30 = (longlong *)(*pcVar4)(this);
      pcVar4 = *(code **)(*plVar30 + 0x360);
      pFVar29 = FText::AsLocalizable_Advanced_LocText
                          (&local_688,L"UHoleFillTool",L"HoleFillToolHighlighted",
                           L"Holes in the mesh are highlighted. Select individual holes to fill or use the Select All or Clear buttons."
                          );
      (*pcVar4)(plVar30,pFVar29,2);
      if (local_688.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_688.TextData.Reference + 0x10))();
      }
      (**(code **)(*plVar24 + 0x20))(plVar24,0);
      goto LAB_14cd2170d;
    }
    plVar24 = (longlong *)(*pcVar4)();
    pcVar4 = *(code **)(*plVar24 + 0x360);
    pFVar29 = FText::AsLocalizable_Advanced_LocText
                        (&local_698,L"UHoleFillTool",L"NoHoleNotification",
                         L"This mesh has no holes to fill.");
    (*pcVar4)(plVar24,pFVar29,3);
    local_6a8.TextData.Reference = local_698.TextData.Reference;
  }
  else {
    plVar24 = (longlong *)(*pcVar4)();
    pcVar4 = *(code **)(*plVar24 + 0x360);
    pFVar29 = FText::AsLocalizable_Advanced_LocText
                        (&local_6a8,L"UHoleFillTool",L"LoopFindError",
                         L"Error finding hole boundary loops.");
    (*pcVar4)(plVar24,pFVar29,3);
  }
  if (local_6a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6a8.TextData.Reference + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x338))(this,(this->Properties).field0_0x0.DebugPtr,0);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->SmoothHoleFillProperties).field0_0x0.DebugPtr,0);
  (**(code **)(this->_padding_ + 0x338))(this,(this->Actions).field0_0x0.DebugPtr,0);
LAB_14cd2170d:
  pcVar4 = *(code **)(this->_padding_ + 0x380);
  pFVar29 = FText::AsLocalizable_Advanced_LocText
                      (&local_678,L"UHoleFillTool",L"ToolName",L"Fill Holes");
  (*pcVar4)(this,pFVar29);
  if (local_678.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_678.TextData.Reference + 0x10))();
  }
  plVar24 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar4 = *(code **)(*plVar24 + 0x360);
  pFVar29 = FText::AsLocalizable_Advanced_LocText
                      (&local_668,L"UHoleFillTool",L"HoleFillToolDescription",
                       L"Fill Holes in the selected Mesh by adding triangles. Click on individual holes to fill them, or use the Select All button to fill all holes."
                      );
  (*pcVar4)(plVar24,pFVar29,2);
  if (local_668.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_668.TextData.Reference + 0x10))();
  }
  return;
}

// SetupPreview @ 14cd2b510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UHoleFillTool::SetupPreview(UHoleFillTool *this)

{
  UObjectBaseUtility *pUVar1;
  UPreviewMesh *this_00;
  void *_Src;
  UObject *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  UMeshOpPreviewWithBackgroundCompute *pUVar5;
  UWorld *pUVar6;
  UInteractiveToolManager *pUVar7;
  UMaterialInterface *pUVar8;
  UObject *pUVar9;
  TTransform<double> *pTVar10;
  longlong *plVar11;
  longlong lVar12;
  UObject *pUVar13;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [16];
  void *local_d8;
  ulonglong local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [40];
  UObject *local_90;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UHoleFillOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar3);
  local_b8._8_8_ = pUVar2;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_78 != 0) {
    plVar11 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar11 = local_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UHoleFillTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(UHoleFillTool **)&pUVar2[1].field_0x8 = this;
  pFVar4 = ::FName::FName(local_c8,"Preview");
  pUVar9 = (UObject *)0x0;
  pUVar5 = NewObject<UMeshOpPreviewWithBackgroundCompute>
                     (pUVar2,*pFVar4,RF_NoFlags,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                      (UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar5;
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  pUVar13 = pUVar2 + 1;
  if (pUVar2 == (UObject *)0x0) {
    pUVar13 = pUVar9;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar5,pUVar6,(IDynamicMeshOperatorFactory *)pUVar13);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  pUVar1 = (UObjectBaseUtility *)this->_padding_;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  pUVar2 = pUVar9;
  if (pUVar1 != (UObjectBaseUtility *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    pUVar2 = UObjectBaseUtility::GetInterfaceAddress(pUVar1,pUVar3);
  }
  (**(code **)(*(longlong *)pUVar2 + 0x20))(pUVar2,&local_d8,0);
  pUVar5 = (this->Preview).field0_0x0.DebugPtr;
  pUVar7 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar8 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar7);
  _Src = local_d8;
  lVar12 = (longlong)(int)local_d0;
  local_e8._0_8_ = (void *)0x0;
  local_e8._8_4_ = (int)local_d0;
  if ((int)local_d0 == 0) {
    local_e8._8_8_ = local_d0 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_d0,0,(ForAnyElementType *)&((FLinearColor_u_0 *)local_e8)->_s_0,
               (int)local_d0,(int *)&(((FLinearColor_u_0 *)local_e8)->_s_0).A);
    memcpy((void *)local_e8._0_8_,_Src,lVar12 << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar5,(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                    &((FLinearColor_u_0 *)local_e8)->_s_0,pUVar8,(UMaterialInterface *)0x0);
  pUVar7 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  local_e8._0_8_ = ___xmm_3f800000000000003f4000003f4ccccd;
  local_e8._8_8_ = _UNK_15297a578;
  pUVar8 = ToolSetupUtil::GetSelectionMaterial
                     ((FLinearColor *)&((FLinearColor_u_0 *)local_e8)->_s_0,pUVar7,0.0);
  if (pUVar8 != (UMaterialInterface *)0x0) {
    UPreviewMesh::SetSecondaryRenderMaterial
              ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,pUVar8);
  }
  local_c8[0] = (FName)this;
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UHoleFillTool::SetupPreview_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((this->Preview).field0_0x0.DebugPtr)->OnOpCompleted,
             (<lambda_1> *)&((FLinearColor_u_0 *)local_e8)->_s_0);
  local_b8._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UHoleFillTool::SetupPreview'::`2'::<lambda_2>,1,0>::_vftable_;
  local_b8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UHoleFillTool::SetupPreview'::__l2::<lambda_2>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
       ::Call;
  local_90 = (UObject *)0x0;
  local_b8._24_8_ = this;
  UPreviewMesh::EnableSecondaryTriangleBuffers
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)local_b8);
  pUVar1 = (UObjectBaseUtility *)this->_padding_;
  this_00 = (((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UObjectBaseUtility *)0x0) {
    pUVar3 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
    pUVar9 = UObjectBaseUtility::GetInterfaceAddress(pUVar1,pUVar3);
  }
  pTVar10 = (TTransform<double> *)(**(code **)(*(longlong *)pUVar9 + 0x28))(pUVar9,local_b8);
  UPreviewMesh::SetTransform(this_00,pTVar10);
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (this->OriginalMesh).Object,FullUpdate,AllVertexAttribs);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility((this->Preview).field0_0x0.DebugPtr,true);
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

// StaticRegisterNativesUHoleFillTool @ 14cd2ee10

void __cdecl UHoleFillTool::StaticRegisterNativesUHoleFillTool(void)

{
  return;
}

// UpdateActiveBoundaryLoopSelection @ 14cd31bc0

void __thiscall UHoleFillTool::UpdateActiveBoundaryLoopSelection(UHoleFillTool *this)

{
  int *piVar1;
  TArray<UHoleFillTool::FSelectedBoundaryLoop,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  FSelectedBoundaryLoop *pFVar5;
  UBoundarySelectionMechanic *pUVar6;
  FScriptContainerElement *pFVar7;
  FMeshBoundaryLoops *pFVar8;
  ForAnyElementType _Src;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pTVar2 = &this->ActiveBoundaryLoopSelection;
  piVar1 = &(this->ActiveBoundaryLoopSelection).ArrayMax;
  pFVar5 = (FSelectedBoundaryLoop *)(pTVar2->AllocatorInstance).Data;
  iVar16 = (this->ActiveBoundaryLoopSelection).ArrayNum;
  if ((this->ActiveBoundaryLoopSelection).ArrayMax < 0) {
    DestructItems<UHoleFillTool::FSelectedBoundaryLoop,int>(pFVar5,iVar16);
    (this->ActiveBoundaryLoopSelection).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UHoleFillTool::FSelectedBoundaryLoop,int>(pFVar5,iVar16);
    (this->ActiveBoundaryLoopSelection).ArrayNum = 0;
  }
  pUVar6 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  uVar17 = *(int *)&pUVar6->field_0x3e8 - *(int *)&pUVar6->field_0x414;
  if (uVar17 != 0) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (*piVar1 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar17,&pTVar2->AllocatorInstance,
                 (this->ActiveBoundaryLoopSelection).ArrayNum,piVar1);
    }
    uVar22 = 0;
    uVar17 = *(uint *)&pUVar6->field_0x408;
    uVar11 = 1;
    uVar12 = uVar22;
    uVar18 = uVar22;
    uVar20 = uVar22;
    if (uVar17 != 0) {
      puVar21 = *(uint **)&pUVar6->field_0x400;
      if (*(uint **)&pUVar6->field_0x400 == (uint *)0x0) {
        puVar21 = (uint *)&pUVar6->field_0x3f0;
      }
      uVar12 = *puVar21;
      uVar20 = 0;
      uVar18 = 0;
      while (uVar12 == 0) {
        lVar14 = (longlong)(int)uVar18;
        uVar20 = uVar20 + 0x20;
        uVar18 = uVar18 + 1;
        uVar12 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_14cd31d35;
        uVar12 = puVar21[lVar14 + 1];
      }
      uVar11 = -uVar12 & uVar12;
      uVar4 = (ulonglong)uVar11 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      uVar12 = local_res20 + -1 + uVar20;
      if ((int)uVar17 < (int)uVar12) {
        uVar12 = uVar17;
      }
    }
LAB_14cd31d35:
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pUVar6->field_0x3f0;
    uVar13 = *(uint *)&pUVar6->field_0x408;
    TStack_78._padding_ = CONCAT44(uVar11,uVar18);
    uVar18 = uVar13 & 0xffffffe0;
    TStack_78.CurrentBitIndex = uVar12;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar13 >> 5;
    TStack_78._28_4_ = uVar12;
    TStack_78.BaseBitIndex = uVar20;
    uStack_58 = CONCAT44(uStack_94,*(int *)&pUVar6->field_0x3e8 - *(int *)&pUVar6->field_0x414);
    local_res18 = uVar13;
    if ((((int)uVar13 < 0) || ((int)uVar17 < (int)uVar13)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar17 = *(uint *)&pUVar6->field_0x408;
    if (uVar13 != uVar17) {
      puVar19 = *(undefined1 **)&pUVar6->field_0x400;
      if (*(undefined1 **)&pUVar6->field_0x400 == (undefined1 *)0x0) {
        puVar19 = &pUVar6->field_0x3f0;
      }
      uVar20 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar14 = (longlong)iVar16;
        uVar18 = uVar18 + 0x20;
        iVar16 = iVar16 + 1;
        uVar13 = uVar17;
        local_res18 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14cd31e41;
        uVar20 = *(uint *)(puVar19 + lVar14 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar13 = (int)lVar14 + -1 + uVar18;
      local_res18 = uVar13;
      if ((int)uVar17 < (int)uVar13) {
        uVar13 = uVar17;
        local_res18 = uVar17;
      }
    }
LAB_14cd31e41:
    while( true ) {
      if (*(int *)&pUVar6->field_0x3e8 - *(int *)&pUVar6->field_0x414 != (int)uStack_58) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_78.CurrentBitIndex == uVar13) &&
         (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pUVar6->field_0x3f0)) break;
      uVar17 = *(uint *)(*(longlong *)&pUVar6->field_0x3e0 +
                        (longlong)TStack_78.CurrentBitIndex * 0xc);
      iVar16 = (this->ActiveBoundaryLoopSelection).ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar14 = (longlong)iVar16;
      (this->ActiveBoundaryLoopSelection).ArrayNum = iVar16 + 1;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      *(undefined4 *)(pFVar7 + lVar14 * 0x18 + 4) = 0;
      *(undefined4 *)(pFVar7 + lVar14 * 0x18 + 0x10) = 0;
      *(uint *)(pFVar7 + lVar14 * 0x18) = uVar17;
      pFVar3 = pFVar7 + lVar14 * 0x18 + 8;
      *(FScriptContainerElement **)pFVar3 = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + lVar14 * 0x18 + 0x14) = 0;
      pFVar8 = (this->BoundaryLoops).Ptr;
      uVar20 = uVar22;
      if ((int)uVar17 < (pFVar8->Loops).ArrayNum) {
        uVar20 = ~uVar17 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar15 = (pFVar8->Loops).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x40 + 0x18;
      if (pFVar3 != pFVar15) {
        iVar16 = *(int *)(pFVar15 + 8);
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar15;
        *(int *)(pFVar3 + 8) = iVar16;
        if ((iVar16 == 0) && (*(int *)(pFVar3 + 0xc) == 0)) {
          *(undefined4 *)(pFVar3 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar16,*(int *)(pFVar3 + 0xc),(ForAnyElementType *)pFVar3,iVar16,
                     (int *)(pFVar7 + lVar14 * 0x18 + 0x14));
          if (iVar16 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar3,_Src.Data,(longlong)iVar16 << 2);
          }
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      uVar13 = local_res18;
    }
  }
  return;
}

