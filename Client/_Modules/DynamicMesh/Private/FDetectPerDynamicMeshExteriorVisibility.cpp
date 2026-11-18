// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c6e7a80

void __thiscall
`UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  FDynamicMeshEditor *this_00;
  FDynamicMeshInstance *pFVar2;
  FMeshIndexMappings *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_a8 [2];
  ForAnyElementType local_a0;
  undefined8 local_98;
  uint local_90;
  code *local_88 [5];
  undefined8 *local_60;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_58;
  
  iVar8 = param_1->ArrayNum;
  uVar10 = 0;
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      this_00 = *(FDynamicMeshEditor **)((longlong)this + 0x10);
      local_58._0_8_ = 0;
      local_58._40_8_ = 0;
      local_a0.Data = (FScriptContainerElement *)0x0;
      pFVar2 = (FDynamicMeshInstance *)(param_1->AllocatorInstance).Data;
      local_98 = CONCAT44(local_98._4_4_,iVar8);
      if (iVar8 == 0) {
        local_98 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,iVar8,0,&local_a0,iVar8,(int *)((longlong)&local_98 + 4));
        ConstructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
                  (local_a0.Data,pFVar2,iVar8);
      }
      uVar9 = (uint)uVar10;
      local_88[0] = (code *)0x0;
      local_60 = (undefined8 *)0x0;
      local_90 = uVar9;
      local_60 = FMemory::Malloc(0x20,8);
      local_60[1] = 0;
      *local_60 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                   ::_vftable_;
      local_60[1] = local_a0.Data;
      local_a0.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_60 + 2) = (int)local_98;
      *(undefined4 *)((longlong)local_60 + 0x14) = local_98._4_4_;
      local_98 = 0;
      *(uint *)(local_60 + 3) = local_90;
      if (local_60 + 1 != (undefined8 *)0x0) {
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                      ::Call;
      }
      pFVar3 = *(FMeshIndexMappings **)((longlong)this + 0x18);
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Geometry::FDynamicMeshEditor::AppendMesh
                (this_00,*(FDynamicMesh3 **)((param_1->AllocatorInstance).Data + uVar11),pFVar3,
                 (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                  *)local_88,&local_58,false);
      DestructItems<UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::FDynamicMeshInstance,int>
                ((FDynamicMeshInstance *)local_a0.Data,(int)local_98);
      if ((FDynamicMeshInstance *)local_a0.Data != (FDynamicMeshInstance *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      pFVar4 = *(ForAnyElementType **)((longlong)this + 0x20);
      local_a8[0] = *(int *)(*(longlong *)((longlong)this + 8) + 0x140) * 0x200 +
                    *(int *)(*(longlong *)((longlong)this + 8) + 0x144);
      if (((pFVar4->Data <= (FScriptContainerElement *)local_a8) &&
          ((FScriptContainerElement *)local_a8 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar8 + 1;
      uVar10 = (ulonglong)(uVar9 + 1);
      *(int *)(pFVar4->Data + (longlong)iVar8 * 4) = local_a8[0];
      iVar8 = param_1->ArrayNum;
      uVar11 = uVar11 + 0xb8;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return;
}

// ComputeHidden @ 14c7218d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden
          (FDetectPerDynamicMeshExteriorVisibility *this,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  short sVar1;
  code *pcVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStackY_7b8 [32];
  bool local_768;
  bool local_767;
  undefined1 local_766 [2];
  uint local_764;
  uint local_760;
  uint *local_758;
  ulonglong local_750;
  uint local_748;
  TArray<bool,TSizedDefaultAllocator<32>_> local_740;
  TArray<bool,TSizedDefaultAllocator<32>_> local_730;
  uint local_720;
  uint local_71c;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_718;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_710;
  FDynamicMesh3 *local_700;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_6f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_6f0;
  FDetectPerDynamicMeshExteriorVisibility *local_6e0;
  FDynamicMesh3 *local_6d8;
  FDynamicMesh3 **local_6d0;
  FMeshIndexMappings *local_6c8;
  uint **local_6c0;
  FScriptContainerElement *local_6b8;
  int iStack_6b0;
  undefined4 uStack_6ac;
  code *local_6a8;
  uint *local_6a0;
  FScriptContainerElement *local_698;
  int iStack_690;
  FScriptContainerElement *local_688;
  int iStack_680;
  undefined4 uStack_67c;
  FScriptContainerElement *local_678;
  int iStack_670;
  FScriptContainerElement *local_668;
  int iStack_660;
  undefined4 uStack_65c;
  code *local_658;
  undefined1 *local_650;
  TArrayView<bool_const_,int> local_648;
  TArrayView<UE::Math::TVector<double>_const_,int> local_638;
  TArrayView<UE::Math::TVector<double>_const_,int> local_628;
  TArrayView<UE::Math::TVector<double>_const_,int> local_618;
  TArrayView<bool_const_,int> local_608;
  FDynamicMesh3 local_5f8;
  undefined1 local_3c8 [48];
  undefined **local_398;
  code *local_390;
  undefined ***local_380;
  double local_378;
  TDynamicVector<int,512> local_370;
  TDynamicVector<UE::Math::TVector<double>,512> local_358;
  TDynamicVector<UE::Math::TVector<double>,512> local_340;
  TDynamicVector<int,512> local_328;
  undefined8 local_310;
  FMeshIndexMappings local_308;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  local_718 = param_1;
  local_6f8 = param_2;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(param_1,(this->Instances).ArrayNum,Default)
  ;
  if ((param_2 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) ||
     ((this->TransparentInstances).ArrayNum == 0)) {
    bVar4 = false;
    bVar5 = false;
    if (param_2 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14c721940;
  }
  else {
    bVar5 = true;
  }
  bVar4 = bVar5;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (param_2,(this->TransparentInstances).ArrayNum,Default);
LAB_14c721940:
  if (((this->Instances).ArrayNum != 0) || ((bVar4 && ((this->TransparentInstances).ArrayNum != 0)))
     ) {
    FDynamicMesh3::FDynamicMesh3(&local_5f8,None);
    local_700 = &local_5f8;
    FMeshIndexMappings::FMeshIndexMappings(&local_308);
    local_758 = (uint *)0x0;
    local_750 = 0;
    local_6d8 = &local_5f8;
    local_6d0 = &local_700;
    local_6c8 = &local_308;
    local_6c0 = &local_758;
    local_6e0 = this;
    `UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::
    operator()(&local_6e0,&this->Instances);
    uVar13 = local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
             local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed;
    local_760 = uVar13;
    if (bVar4) {
      `UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::
      operator()(&local_6e0,&this->TransparentInstances);
    }
    uVar14 = local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
             local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed;
    `UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l2::<lambda_1>::
    operator()(&local_6e0,&this->OccludeInstances);
    if (local_5f8.TriangleRefCounts.FreeIndices.CurBlock * 0x200 +
        local_5f8.TriangleRefCounts.FreeIndices.CurBlockUsed == 0) {
      local_767 = true;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_1,&local_767,(this->Instances).ArrayNum);
      uVar10 = param_1->ArrayNum;
      local_764 = uVar10;
      local_748 = uVar10;
      if (bVar4) {
        local_768 = true;
        TArray<bool,TSizedDefaultAllocator<32>_>::Init
                  (param_2,&local_768,(this->TransparentInstances).ArrayNum);
        local_764 = uVar10 + (this->TransparentInstances).ArrayNum;
      }
      FDynamicMesh3::EnableTriangleGroups(&local_5f8,0);
      uVar8 = (ulonglong)(int)local_750;
      if ((int)local_750 < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = local_750 & 0xffffffff;
      }
      uVar6 = local_764;
      uVar9 = 1;
      uVar10 = *local_758;
      if ((int)uVar10 <
          (int)(local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed)) {
        lVar12 = 1;
        do {
          if ((int)uVar9 < (int)uVar8) {
            do {
              uVar13 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar13 = ~uVar9 >> 0x1f;
              }
              if (uVar13 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                uVar8 = local_750 & 0xffffffff;
              }
              if (uVar10 != local_758[lVar12]) break;
              uVar9 = uVar9 + 1;
              lVar12 = lVar12 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
          uVar13 = uVar6;
          if ((int)uVar9 < (int)uVar6) {
            uVar13 = uVar9;
          }
          iVar15 = local_5f8.GroupIDCounter;
          if (local_5f8.TriangleGroups.bIsSet != false) {
            *(uint *)(*(longlong *)
                       (local_5f8.TriangleGroups.TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4) = uVar13;
            uVar8 = local_750 & 0xffffffff;
            iVar15 = uVar13 + 1;
            if ((int)(uVar13 + 1) < local_5f8.GroupIDCounter) {
              iVar15 = local_5f8.GroupIDCounter;
            }
          }
          local_5f8.GroupIDCounter = iVar15;
          uVar10 = uVar10 + 1;
          uVar13 = local_760;
        } while ((int)uVar10 <
                 (int)(local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                      local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed));
      }
      uVar8 = 0;
      local_740.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_740.ArrayNum = 0;
      local_740.ArrayMax = 0;
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&local_740,
                 local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                 local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed,Default);
      if ((int)uVar14 <
          (int)(local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed)) {
        lVar12 = (longlong)(int)uVar14;
        uVar10 = uVar14;
        do {
          uVar6 = 0;
          if ((int)uVar10 < local_740.ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar10 = uVar10 + 1;
          local_740.AllocatorInstance.Data[lVar12] = (FScriptContainerElement)0x1;
          lVar12 = lVar12 + 1;
        } while ((int)uVar10 <
                 (int)(local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                      local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed));
      }
      iVar15 = local_740.ArrayNum;
      local_730.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_730.ArrayNum = 0;
      local_730.ArrayMax = 0;
      if (bVar4) {
        local_6b8 = local_740.AllocatorInstance.Data;
        if ((local_740.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_6a0 = &local_720;
        iStack_6b0 = iVar15;
        local_648._12_4_ = uStack_6ac;
        local_648.ArrayNum = iVar15;
        local_6a8 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDetectPerDynamicMeshExteriorVisibility::ComputeHidden'::__l26::<lambda_2>,bool,int>
                    ::Call;
        local_648.DataPtr = (bool *)local_6b8;
        local_720 = uVar13;
        local_71c = uVar14;
        FExteriorVisibilitySampling::ComputePerTriangleOcclusion
                  (&local_5f8,(TFunctionRef<bool___cdecl(int)> *)&local_6a8,&local_730,true,
                   &this->SamplingParameters,&local_648);
      }
      else {
        local_668 = local_740.AllocatorInstance.Data;
        if ((local_740.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_3c8._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        local_378 = __real_3e45798ee2308c3a;
        local_398 = &
                    ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        iStack_660 = iVar15;
        local_390 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                    MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
        local_3c8._32_8_ =
             Core::Private::Function::
             TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
             ::Call;
        local_3c8._16_8_ = 0;
        local_3c8._24_4_ = 3;
        local_380 = (undefined ***)0x0;
        local_370.CurBlock = 0;
        local_370.CurBlockUsed = 0;
        local_370.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_370.Blocks.ArrayNum = 0;
        local_370.Blocks.ArrayMax = 0;
        TDynamicVector<int,512>::AddAllocatedBlock(&local_370);
        local_358.CurBlock = 0;
        local_358.CurBlockUsed = 0;
        local_358.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_358.Blocks.ArrayNum = 0;
        local_358.Blocks.ArrayMax = 0;
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_358);
        local_340.CurBlock = 0;
        local_340.CurBlockUsed = 0;
        local_340.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_340.Blocks.ArrayNum = 0;
        local_340.Blocks.ArrayMax = 0;
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_340);
        local_328.CurBlock = 0;
        local_328.CurBlockUsed = 0;
        local_328.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_328.Blocks.ArrayNum = 0;
        local_328.Blocks.ArrayMax = 0;
        TDynamicVector<int,512>::AddAllocatedBlock(&local_328);
        local_3c8._8_8_ = &local_5f8;
        local_310._0_4_ = -1;
        local_310._4_4_ = -1;
        local_3c8._16_8_ = 0;
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_3c8,false);
        local_3c8._16_8_ = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_3c8._8_8_);
        UE::Private::DetectExteriorVisibilityInternal::GenerateCardinalDirectionsHelper(&local_710);
        iStack_690 = local_710.ArrayNum;
        local_698 = local_710.AllocatorInstance.Data;
        if ((local_710.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_638.DataPtr = (TVector<double> *)local_698;
        UE::Private::DetectExteriorVisibilityInternal::GenerateTestDirectionsHelper
                  (&local_6f0,(this->SamplingParameters).NumSearchDirections,&local_638);
        local_688 = local_6f0.AllocatorInstance.Data;
        if ((local_6f0.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iStack_680 = local_6f0.ArrayNum;
        local_678 = local_710.AllocatorInstance.Data;
        if ((local_710.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_628._12_4_ = uStack_67c;
        local_628.ArrayNum = iStack_680;
        local_658 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FExteriorVisibilitySampling::ComputePerTriangleOcclusion'::__l2::<lambda_1>,bool,int>
                    ::Call;
        local_650 = local_766;
        local_628.DataPtr = (TVector<double> *)local_688;
        local_608._12_4_ = uStack_65c;
        local_608.ArrayNum = iStack_660;
        iStack_670 = local_710.ArrayNum;
        local_618.DataPtr = (TVector<double> *)local_678;
        local_608.DataPtr = (bool *)local_668;
        UE::Private::DetectExteriorVisibilityInternal::
        ComputePerTriangleOcclusionHelper<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,0>
                  (&local_5f8,(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_3c8,&local_730,
                   true,&this->SamplingParameters,&local_608,
                   (TFunctionRef<bool___cdecl(int)> *)&local_658,&local_618,&local_628,true);
        if (local_6f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f0.AllocatorInstance.Data);
        }
        if (local_710.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_710.AllocatorInstance.Data);
        }
        TDynamicVector<int,512>::Empty(&local_328,0);
        if (local_328.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Blocks.AllocatorInstance.Data);
        }
        TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_340,0);
        if (local_340.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Blocks.AllocatorInstance.Data);
        }
        TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_358,0);
        if (local_358.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_358.Blocks.AllocatorInstance.Data);
        }
        TDynamicVector<int,512>::Empty(&local_370,0);
        if (local_370.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Blocks.AllocatorInstance.Data);
        }
        if ((code *)local_3c8._32_8_ != (code *)0x0) {
          pppuVar7 = &local_398;
          if (local_380 != (undefined ***)0x0) {
            pppuVar7 = local_380;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      iVar15 = local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed;
      if (((iVar15 != 0) &&
          (0xfffd < (ushort)(**(short **)
                               local_5f8.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data -
                            1U))) && (uVar8 = 1, 1 < iVar15)) {
        do {
          sVar1 = *(short *)(*(longlong *)
                              (local_5f8.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                              (uVar8 >> 9) * 8) + (ulonglong)((uint)uVar8 & 0x1ff) * 2);
          if ((sVar1 != 0) && (sVar1 != -1)) break;
          uVar13 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar13;
        } while ((int)uVar13 < iVar15);
      }
      uVar13 = local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed;
      local_760 = uVar13;
      if ((uint)uVar8 != uVar13) {
        do {
          if (local_5f8.TriangleGroups.bIsSet == false) break;
          uVar14 = (uint)uVar8;
          if (((int)uVar14 < 0) ||
             ((int)(local_5f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                   local_5f8.TriangleRefCounts.RefCounts.CurBlockUsed) <= (int)uVar14)) {
LAB_14c7221b2:
            uVar10 = 0;
          }
          else {
            if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                              (local_5f8.TriangleRefCounts.RefCounts.Blocks.
                                               AllocatorInstance.Data + (uVar8 >> 9) * 8) +
                                            (ulonglong)(uVar14 & 0x1ff) * 2) - 1U))
            goto LAB_14c7221b2;
            uVar10 = *(uint *)(*(longlong *)
                                (local_5f8.TriangleGroups.TypedValue.Blocks.AllocatorInstance.Data +
                                (uVar8 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
            if ((int)uVar10 < 0) break;
          }
          if ((int)local_764 <= (int)uVar10) break;
          pTVar3 = local_718;
          if (local_6f8 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
            pTVar3 = local_6f8;
          }
          pTVar11 = local_718;
          if ((int)local_748 <= (int)uVar10) {
            uVar10 = uVar10 - local_748;
            pTVar11 = pTVar3;
          }
          uVar6 = 0;
          if ((int)uVar10 < pTVar11->ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((pTVar11->AllocatorInstance).Data[(int)uVar10] != (FScriptContainerElement)0x0) {
            uVar6 = 0;
            if ((int)uVar14 < local_730.ArrayNum) {
              uVar6 = ~uVar14 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_730.AllocatorInstance.Data[(int)uVar14] == (FScriptContainerElement)0x0) {
              uVar6 = 0;
              if ((int)uVar10 < pTVar11->ArrayNum) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (pTVar11->AllocatorInstance).Data[(int)uVar10] = (FScriptContainerElement)0x0;
            }
          }
          do {
            uVar14 = uVar14 + 1;
            uVar8 = (ulonglong)uVar14;
            if (iVar15 <= (int)uVar14) break;
            sVar1 = *(short *)(*(longlong *)
                                (local_5f8.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                                + (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 2);
            uVar13 = local_760;
          } while ((sVar1 == 0) || (sVar1 == -1));
        } while (uVar14 != uVar13);
      }
      if (local_730.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_730.AllocatorInstance.Data);
      }
      if (local_740.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_740.AllocatorInstance.Data);
      }
    }
    else {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6310612683716559485>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\DetectExteriorVisibility.cpp"
                         ,0x27d,"AllMesh.IsCompactT()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_758 != (uint *)0x0) {
      FMemory::Free(local_758);
    }
    FMeshIndexMappings::~FMeshIndexMappings(&local_308);
    FDynamicMesh3::~FDynamicMesh3(&local_5f8);
  }
  return;
}

