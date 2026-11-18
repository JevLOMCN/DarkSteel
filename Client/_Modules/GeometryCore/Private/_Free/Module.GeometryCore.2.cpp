// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 265

// `dynamic_initializer_for_'CVarDynamicMeshDebugMeshesEnabled'' @ 140f4f550

void __cdecl _dynamic_initializer_for__CVarDynamicMeshDebugMeshesEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDynamicMeshDebugMeshesEnabled,L"geometry.DynamicMesh.EnableDebugMeshes",local_res8
             ,
             L"Enable/Disable FDynamicMesh3 Global Debug Mesh support. Debug Mesh support is only available in the Editor."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicMeshDebugMeshesEnabled__);
  return;
}

// `dynamic_initializer_for_'DynamicMeshClearDebugMeshesCmd'' @ 140f4f5a0

void __cdecl _dynamic_initializer_for__DynamicMeshClearDebugMeshesCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = UE::Geometry::Debug::ClearAllDebugMeshes;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&DynamicMeshClearDebugMeshesCmd,L"geometry.DynamicMesh.ClearDebugMeshes",
             L"Discard all debug meshes currently stored in the FDynamicMesh3 Global Debug Mesh set. This command only works in the Editor."
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__DynamicMeshClearDebugMeshesCmd__);
  return;
}

// operator<<<double,TSizedDefaultAllocator<32>_> @ 143431f00

FArchive * __cdecl
operator<<<double,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 3,(longlong)param_2->ArrayMax << 3);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 3);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TTransform<double>,TSizedDefaultAllocator<32>_> @ 143431f10

FArchive * __cdecl
operator<<<UE::Math::TTransform<double>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  TTransform<double> *pTVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x60);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2aaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              UE::Math::operator<<
                        (param_1,(TTransform<double> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x60));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1060,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar10 = (TTransform<double> *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x60);
              DefaultConstructItems<UE::Math::TTransform<double>,int>(pTVar10,1);
              UE::Math::operator<<(param_1,pTVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TVector4<float>,TSizedDefaultAllocator<32>_> @ 143431f20

FArchive * __cdecl
operator<<<UE::Math::TVector4<float>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 4,(longlong)param_2->ArrayMax << 4);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],
                     piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 4);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_> @ 143431f30

FArchive * __cdecl
operator<<<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this;
  ulonglong *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TDynamicMeshTriangleAttribute<int,1> *pTVar9;
  FArchive *pFVar10;
  TDynamicMeshTriangleAttribute<int,1> *pTVar11;
  longlong lVar12;
  uint uVar13;
  TDynamicMeshTriangleAttribute<int,1> *pTVar14;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  TDynamicMeshTriangleAttribute<int,1> *local_48 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(param_2->Array).ArrayNum << 3,
             (longlong)(param_2->Array).ArrayMax << 3);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (param_2->Array).ArrayNum;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar13 = 0;
    if (0 < (int)local_res10[0]) {
      lVar12 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar13 < (param_2->Array).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar5)();
          return pFVar10;
        }
        bVar6 = false;
        this = *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
                ((param_2->Array).AllocatorInstance.Data + lVar12);
        UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::Serialize(this,param_1);
        (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
        if (((param_1->field_0x28 & 1) == 0) ||
           (iVar7 = FArchiveState::CustomVer
                              ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
           0x37 < iVar7)) {
          puVar4 = *(ulonglong **)&param_1->field_0x8;
          puVar1 = (uint *)*puVar4 + 1;
          if ((uint *)puVar4[1] < puVar1) {
            local_res18[0] = 0;
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
            if (1 < local_res18[0]) {
              FArchiveState::SetError((FArchiveState *)param_1);
            }
            uVar8 = local_res18[0];
            if ((param_1->field_0x28 & 1) != 0) goto LAB_143432245;
          }
          else {
            uVar8 = *(uint *)*puVar4;
            *puVar4 = (ulonglong)puVar1;
LAB_143432245:
            bVar6 = uVar8 != 0;
          }
          if (bVar6) {
            UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>
                      ((TDynamicVector<int,512> *)&this[1].Name,param_1);
          }
          else {
            UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>
                      ((TDynamicVector<int,512> *)&this[1].Name,param_1);
          }
        }
        else {
          UE::Geometry::TDynamicVector<int,512>::Serialize<0,0>
                    ((TDynamicVector<int,512> *)&this[1].Name,param_1);
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar13 < (int)local_res10[0]);
    }
  }
  else {
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
    ::Empty(param_2,local_res8[0]);
    pTVar14 = (TDynamicMeshTriangleAttribute<int,1> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        pTVar9 = ::operator_new(0x30);
        pTVar11 = (TDynamicMeshTriangleAttribute<int,1> *)0x0;
        if (pTVar9 != (TDynamicMeshTriangleAttribute<int,1> *)0x0) {
          pTVar9->_padding_ = 0;
          pTVar9->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
          (pTVar9->AttribValues).CurBlock = 0;
          (pTVar9->AttribValues).CurBlockUsed = 0;
          (pTVar9->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar9->AttribValues).Blocks.ArrayNum = 0;
          (pTVar9->AttribValues).Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&pTVar9->AttribValues);
          pTVar9->ParentMesh = (FDynamicMesh3 *)0x0;
          pTVar9->_padding_ =
               (longlong)&___7__TDynamicMeshScalarTriangleAttribute_H_Geometry_UE__6B_;
          pTVar11 = pTVar9;
        }
        UE::Geometry::operator<<(param_1,pTVar11);
        pFVar3 = (param_2->Array).AllocatorInstance.Data;
        local_48[0] = pTVar11;
        if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(param_2->Array).ArrayMax * 8)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar5)();
          return pFVar10;
        }
        iVar7 = (param_2->Array).ArrayNum;
        if (iVar7 == (param_2->Array).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)param_2,&(param_2->Array).ArrayMax);
        }
        uVar13 = (int)pTVar14 + 1;
        (param_2->Array).ArrayNum = iVar7 + 1;
        *(TDynamicMeshTriangleAttribute<int,1> **)
         ((param_2->Array).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_48[0];
        pTVar14 = (TDynamicMeshTriangleAttribute<int,1> *)(ulonglong)uVar13;
      } while ((int)uVar13 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// TVector2<float>_>,TSizedDefaultAllocator<32>_> @ 143432290

FArchive * __cdecl
operator<<<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::
TVector2<float>_>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TDynamicVector<int,512> *this;
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TDynamicMeshOverlay<float,2> *pTVar7;
  FArchive *pFVar8;
  TDynamicMeshOverlay<float,2> *this_00;
  uint uVar9;
  longlong lVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  TDynamicMeshOverlay<float,2> *local_38 [2];
  TDynamicMeshOverlay<float,2> *pTVar10;
  
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)(param_2->Array).ArrayNum << 3);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (param_2->Array).ArrayNum;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    uVar9 = 0;
    if (0 < (int)local_res10[0]) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (param_2->Array).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar3)();
          return pFVar8;
        }
        UE::Geometry::TDynamicMeshOverlay<float,2>::Serialize
                  (*(TDynamicMeshOverlay<float,2> **)
                    ((param_2->Array).AllocatorInstance.Data + lVar11),param_1,(FCompactMaps *)0x0,
                   false);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < (int)local_res10[0]);
    }
  }
  else {
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
    ::Empty(param_2,local_res8[0]);
    pTVar10 = (TDynamicMeshOverlay<float,2> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        pTVar7 = ::operator_new(0x88);
        this_00 = (TDynamicMeshOverlay<float,2> *)0x0;
        if (pTVar7 != (TDynamicMeshOverlay<float,2> *)0x0) {
          (pTVar7->ElementsRefCounts).RefCounts.CurBlockUsed = 0;
          (pTVar7->ElementsRefCounts).RefCounts.CurBlock = 0;
          (pTVar7->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pTVar7->ElementsRefCounts).RefCounts.Blocks.ArrayNum = 0;
          (pTVar7->ElementsRefCounts).RefCounts.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                    (&(pTVar7->ElementsRefCounts).RefCounts);
          this = &(pTVar7->ElementsRefCounts).FreeIndices;
          (pTVar7->ElementsRefCounts).FreeIndices.CurBlockUsed = 0;
          this->CurBlock = 0;
          (pTVar7->ElementsRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pTVar7->ElementsRefCounts).FreeIndices.Blocks.ArrayNum = 0;
          (pTVar7->ElementsRefCounts).FreeIndices.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(this);
          (pTVar7->ElementsRefCounts).UsedCount = 0;
          (pTVar7->Elements).CurBlock = 0;
          (pTVar7->Elements).CurBlockUsed = 0;
          (pTVar7->Elements).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar7->Elements).Blocks.ArrayNum = 0;
          (pTVar7->Elements).Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(&pTVar7->Elements);
          (pTVar7->ParentVertices).CurBlockUsed = 0;
          (pTVar7->ParentVertices).CurBlock = 0;
          (pTVar7->ParentVertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar7->ParentVertices).Blocks.ArrayNum = 0;
          (pTVar7->ParentVertices).Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&pTVar7->ParentVertices);
          (pTVar7->ElementTriangles).CurBlockUsed = 0;
          (pTVar7->ElementTriangles).CurBlock = 0;
          (pTVar7->ElementTriangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar7->ElementTriangles).Blocks.ArrayNum = 0;
          (pTVar7->ElementTriangles).Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&pTVar7->ElementTriangles);
          pTVar7->ParentMesh = (FDynamicMesh3 *)0x0;
          this_00 = pTVar7;
        }
        UE::Geometry::TDynamicMeshOverlay<float,2>::Serialize
                  (this_00,param_1,(FCompactMaps *)0x0,false);
        pFVar2 = (param_2->Array).AllocatorInstance.Data;
        local_38[0] = this_00;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(param_2->Array).ArrayMax * 8)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar3)();
          return pFVar8;
        }
        iVar5 = (param_2->Array).ArrayNum;
        if (iVar5 == (param_2->Array).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)param_2,&(param_2->Array).ArrayMax);
        }
        uVar9 = (int)pTVar10 + 1;
        pTVar10 = (TDynamicMeshOverlay<float,2> *)(ulonglong)uVar9;
        (param_2->Array).ArrayNum = iVar5 + 1;
        *(TDynamicMeshOverlay<float,2> **)
         ((param_2->Array).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_38[0];
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// TVector<float>_>,TSizedDefaultAllocator<32>_> @ 143432580

FArchive * __cdecl
operator<<<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::
TVector<float>_>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TDynamicVector<int,512> *this;
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TDynamicMeshOverlay<float,3> *pTVar7;
  FArchive *pFVar8;
  TDynamicMeshOverlay<float,3> *this_00;
  uint uVar9;
  longlong lVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  TDynamicMeshOverlay<float,3> *local_38 [2];
  TDynamicMeshOverlay<float,3> *pTVar10;
  
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)(param_2->Array).ArrayNum << 3);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (param_2->Array).ArrayNum;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    uVar9 = 0;
    if (0 < (int)local_res10[0]) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (param_2->Array).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar3)();
          return pFVar8;
        }
        UE::Geometry::TDynamicMeshOverlay<float,3>::Serialize
                  (*(TDynamicMeshOverlay<float,3> **)
                    ((param_2->Array).AllocatorInstance.Data + lVar11),param_1,(FCompactMaps *)0x0,
                   false);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar9 < (int)local_res10[0]);
    }
  }
  else {
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
    ::Empty(param_2,local_res8[0]);
    pTVar10 = (TDynamicMeshOverlay<float,3> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        pTVar7 = ::operator_new(0x88);
        this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
        if (pTVar7 != (TDynamicMeshOverlay<float,3> *)0x0) {
          (pTVar7->ElementsRefCounts).RefCounts.CurBlockUsed = 0;
          (pTVar7->ElementsRefCounts).RefCounts.CurBlock = 0;
          (pTVar7->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pTVar7->ElementsRefCounts).RefCounts.Blocks.ArrayNum = 0;
          (pTVar7->ElementsRefCounts).RefCounts.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                    (&(pTVar7->ElementsRefCounts).RefCounts);
          this = &(pTVar7->ElementsRefCounts).FreeIndices;
          (pTVar7->ElementsRefCounts).FreeIndices.CurBlockUsed = 0;
          this->CurBlock = 0;
          (pTVar7->ElementsRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pTVar7->ElementsRefCounts).FreeIndices.Blocks.ArrayNum = 0;
          (pTVar7->ElementsRefCounts).FreeIndices.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(this);
          (pTVar7->ElementsRefCounts).UsedCount = 0;
          (pTVar7->Elements).CurBlock = 0;
          (pTVar7->Elements).CurBlockUsed = 0;
          (pTVar7->Elements).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar7->Elements).Blocks.ArrayNum = 0;
          (pTVar7->Elements).Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(&pTVar7->Elements);
          (pTVar7->ParentVertices).CurBlockUsed = 0;
          (pTVar7->ParentVertices).CurBlock = 0;
          (pTVar7->ParentVertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar7->ParentVertices).Blocks.ArrayNum = 0;
          (pTVar7->ParentVertices).Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&pTVar7->ParentVertices);
          (pTVar7->ElementTriangles).CurBlockUsed = 0;
          (pTVar7->ElementTriangles).CurBlock = 0;
          (pTVar7->ElementTriangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar7->ElementTriangles).Blocks.ArrayNum = 0;
          (pTVar7->ElementTriangles).Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&pTVar7->ElementTriangles);
          pTVar7->ParentMesh = (FDynamicMesh3 *)0x0;
          this_00 = pTVar7;
        }
        UE::Geometry::TDynamicMeshOverlay<float,3>::Serialize
                  (this_00,param_1,(FCompactMaps *)0x0,false);
        pFVar2 = (param_2->Array).AllocatorInstance.Data;
        local_38[0] = this_00;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(param_2->Array).ArrayMax * 8)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar3)();
          return pFVar8;
        }
        iVar5 = (param_2->Array).ArrayNum;
        if (iVar5 == (param_2->Array).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)param_2,&(param_2->Array).ArrayMax);
        }
        uVar9 = (int)pTVar10 + 1;
        pTVar10 = (TDynamicMeshOverlay<float,3> *)(ulonglong)uVar9;
        (param_2->Array).ArrayNum = iVar5 + 1;
        *(TDynamicMeshOverlay<float,3> **)
         ((param_2->Array).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_38[0];
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// TDynamicVector<int,512>_> @ 143432870

FArchive * __cdecl
operator<<<UE::Geometry::TDynamicVector<int,512>_>
          (FArchive *param_1,TOptional<UE::Geometry::TDynamicVector<int,512>_> *param_2)

{
  TOptional<UE::Geometry::TDynamicVector<int,512>_>::Serialize(param_2,param_1);
  return param_1;
}

// TVector2<float>,512>_> @ 1434328a0

FArchive * __cdecl
operator<<<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>_512>_>
          (FArchive *param_1,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *param_2)

{
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::Serialize
            (param_2,param_1);
  return param_1;
}

// TVector<float>,512>_> @ 1434328d0

FArchive * __cdecl
operator<<<UE::Geometry::TDynamicVector<UE::Math::TVector<float>_512>_>
          (FArchive *param_1,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_2)

{
  TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::Serialize(param_2,param_1)
  ;
  return param_1;
}

// FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> @ 143432900

FArchive * __cdecl
operator<<<UE::AnimationCore::FBoneWeight_TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                (4,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar6 = param_2->ArrayNum;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                                (0x204,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar6 + 1;
            FVar3 = (param_2->AllocatorInstance).SecondaryData;
            FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)param_2;
            if (FVar3 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar9 = FVar3;
            }
            ::operator<<(param_1,(FBoneWeight *)((longlong)FVar9 + (longlong)iVar6 * 4));
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar12 = 0;
        uVar10 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar7 = 0;
          if ((int)uVar12 < (int)uVar10) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FArchive *)(*pcVar4)();
            return pFVar8;
          }
          FVar3 = (param_2->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)param_2;
          if (FVar3 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar9 = FVar3;
          }
          ::operator<<(param_1,(FBoneWeight *)((longlong)FVar9 + (longlong)(int)uVar12 * 4));
          uVar10 = param_2->ArrayNum;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar10);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator()<`UE::Geometry::FRefCountVector::Rebuild<`FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts'::__l2::<lambda_1>_const_&,`FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts'::__l2::<lambda_2>_const_&,`FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts'::__l2::<lambda_3>_const_&>'::__l2::<lambda_1>_const_&> @ 143432f40

void __thiscall
`FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts'::__l2::<lambda_1>::
operator()<_UE::Geometry::FRefCountVector::Rebuild<_FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts_::__l2::<lambda_1>_const_&,_FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts_::__l2::<lambda_2>_const_&,_FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts_::__l2::<lambda_3>_const_&>_::__l2::<lambda_1>_const_&>
          (void *this,<lambda_1> *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  ulonglong uVar9;
  uint uVar10;
  
  piVar2 = *(int **)((longlong)this + 8);
  uVar10 = piVar2[1] + *piVar2 * 0x200;
  uVar6 = 0;
  if ((uVar10 != 0) && (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(piVar2 + 2) - 1U)))
  {
    uVar5 = 1;
    uVar6 = 1;
    if (1 < (int)uVar10) {
      do {
        sVar7 = *(short *)((*(undefined8 **)(piVar2 + 2))[uVar5 >> 9] +
                          (ulonglong)(uVar5 & 0x1ff) * 2);
        if ((sVar7 != 0) && (uVar6 = uVar5, sVar7 != -1)) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar5;
      } while ((int)uVar5 < (int)uVar10);
    }
  }
joined_r0x000143432fbd:
  do {
    if (uVar6 == uVar10) {
      return;
    }
    while( true ) {
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 8) + (ulonglong)(uVar6 >> 9) * 8);
      uVar5 = *(uint *)(lVar3 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
      lVar3 = lVar3 + (ulonglong)(uVar6 & 0x1ff) * 0xc;
      uVar9 = (ulonglong)(uVar5 & 0x1ff);
      lVar4 = *(longlong *)
               ((param_1->__this->RefCounts).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar5 >> 9) * 8);
      sVar7 = *(short *)(lVar4 + uVar9 * 2);
      sVar8 = 2;
      if (sVar7 == -1) {
        piVar1 = &param_1->__this->UsedCount;
        *piVar1 = *piVar1 + 1;
        sVar7 = sVar8;
      }
      else {
        sVar7 = sVar7 + 1;
      }
      *(short *)(lVar4 + uVar9 * 2) = sVar7;
      uVar5 = *(uint *)(lVar3 + 4);
      uVar9 = (ulonglong)(uVar5 & 0x1ff);
      lVar4 = *(longlong *)
               ((param_1->__this->RefCounts).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar5 >> 9) * 8);
      sVar7 = *(short *)(lVar4 + uVar9 * 2);
      if (sVar7 == -1) {
        piVar1 = &param_1->__this->UsedCount;
        *piVar1 = *piVar1 + 1;
        sVar7 = 2;
      }
      else {
        sVar7 = sVar7 + 1;
      }
      *(short *)(lVar4 + uVar9 * 2) = sVar7;
      uVar5 = *(uint *)(lVar3 + 8);
      uVar9 = (ulonglong)(uVar5 & 0x1ff);
      lVar3 = *(longlong *)
               ((param_1->__this->RefCounts).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar5 >> 9) * 8);
      sVar7 = *(short *)(lVar3 + uVar9 * 2);
      if (sVar7 == -1) {
        piVar1 = &param_1->__this->UsedCount;
        *piVar1 = *piVar1 + 1;
      }
      else {
        sVar8 = sVar7 + 1;
      }
      uVar6 = uVar6 + 1;
      *(short *)(lVar3 + uVar9 * 2) = sVar8;
      if ((int)uVar10 <= (int)uVar6) break;
      while( true ) {
        lVar3 = (ulonglong)(uVar6 >> 9) * 8;
        lVar4 = (ulonglong)(uVar6 & 0x1ff) * 2;
        if ((*(short *)(lVar4 + *(longlong *)(*(longlong *)(piVar2 + 2) + lVar3)) != 0) &&
           (*(short *)(lVar4 + *(longlong *)(lVar3 + *(longlong *)(piVar2 + 2))) != -1)) break;
        uVar6 = uVar6 + 1;
        if ((int)uVar10 <= (int)uVar6) goto joined_r0x000143432fbd;
      }
    }
  } while( true );
}

// CompareItems<UE::Math::TVector4<float>,int> @ 1434340a0

bool __cdecl
CompareItems<UE::Math::TVector4<float>,int>
          (TVector4<float> *param_1,TVector4<float> *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    pfVar2 = &(param_2->field0_0x0)._s_0.Z;
    pfVar1 = &(param_1->field0_0x0)._s_0.Z;
    do {
      if ((((*(float *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)pfVar1) !=
             ((TVector4<float>_u_0_s_0 *)(pfVar1 + -2))->X) || (pfVar2[-1] != pfVar1[-1])) ||
          (*pfVar2 != *pfVar1)) || (pfVar2[1] != pfVar1[1])) {
        return false;
      }
      pfVar2 = pfVar2 + 4;
      pfVar1 = pfVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CopyBoneAttribute<UE::Geometry::FDynamicMesh3,int> @ 143434100

void __cdecl
BoneAttributeHelpers::CopyBoneAttribute<UE::Geometry::FDynamicMesh3,int>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *param_3)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar2;
  undefined8 *puVar3;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
  local_18 [2];
  
  if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    pTVar2 = param_2->Ptr;
    if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
    return;
  }
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    pTVar2->Parent = param_1;
    pTVar2->_padding_ = 0;
    pTVar2->_padding_ =
         (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
    (pTVar2->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->AttribValues).ArrayNum = 0;
    (pTVar2->AttribValues).ArrayMax = 0;
  }
  if (param_2 == local_18) {
    if (pTVar2 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
    goto LAB_143434180;
    puVar3 = (undefined8 *)pTVar2->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar2;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
    goto LAB_143434180;
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar2 = pTVar1;
  }
  (*(code *)*puVar3)(pTVar2,1);
LAB_143434180:
  pTVar2 = param_2->Ptr;
  pTVar2->_padding_ = param_3->_padding_;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&pTVar2->AttribValues,&param_3->AttribValues);
  return;
}

// CopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> @ 1434341e0

void __cdecl
BoneAttributeHelpers::CopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *param_3)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar2;
  undefined8 *puVar3;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
  local_18 [2];
  
  if (param_3 ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0) {
    pTVar2 = param_2->Ptr;
    if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0) {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                      *)0x0;
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
    return;
  }
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0) {
    pTVar2->Parent = param_1;
    pTVar2->_padding_ = 0;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
    ;
    (pTVar2->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->AttribValues).ArrayNum = 0;
    (pTVar2->AttribValues).ArrayMax = 0;
    UE::Geometry::
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Resize
              (pTVar2,0);
  }
  if (param_2 == local_18) {
    if (pTVar2 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0) goto LAB_14343426f;
    puVar3 = (undefined8 *)pTVar2->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar2;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0) goto LAB_14343426f;
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar2 = pTVar1;
  }
  (*(code *)*puVar3)(pTVar2,1);
LAB_14343426f:
  pTVar2 = param_2->Ptr;
  pTVar2->_padding_ = param_3->_padding_;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&pTVar2->AttribValues,&param_3->AttribValues);
  return;
}

// CopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> @ 1434342d0

void __cdecl
BoneAttributeHelpers::CopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *param_3)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar2;
  undefined8 *puVar3;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
  local_18 [2];
  
  if (param_3 ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
    pTVar2 = param_2->Ptr;
    if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                      *)0x0;
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
    return;
  }
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    pTVar2->Parent = param_1;
    pTVar2->_padding_ = 0;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (pTVar2->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->AttribValues).ArrayNum = 0;
    (pTVar2->AttribValues).ArrayMax = 0;
    UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
    ::Resize(pTVar2,0);
  }
  if (param_2 == local_18) {
    if (pTVar2 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) goto LAB_14343435f;
    puVar3 = (undefined8 *)pTVar2->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar2;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) goto LAB_14343435f;
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar2 = pTVar1;
  }
  (*(code *)*puVar3)(pTVar2,1);
LAB_14343435f:
  UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
  Copy(param_2->Ptr,param_3);
  return;
}

// CopyBoneAttribute<UE::Geometry::FDynamicMesh3,FName> @ 1434343b0

void __cdecl
BoneAttributeHelpers::CopyBoneAttribute<UE::Geometry::FDynamicMesh3,FName>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *param_3)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar2;
  undefined8 *puVar3;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
  local_18 [2];
  
  if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    pTVar2 = param_2->Ptr;
    if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
    return;
  }
  pTVar2 = ::operator_new(0x28);
  if (pTVar2 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    pTVar2->Parent = param_1;
    pTVar2->_padding_ = 0;
    pTVar2->_padding_ =
         (longlong)
         &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
    (pTVar2->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar2->AttribValues).ArrayNum = 0;
    (pTVar2->AttribValues).ArrayMax = 0;
    UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Resize(pTVar2,0);
  }
  if (param_2 == local_18) {
    if (pTVar2 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_14343443f;
    puVar3 = (undefined8 *)pTVar2->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar2;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_14343443f;
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar2 = pTVar1;
  }
  (*(code *)*puVar3)(pTVar2,1);
LAB_14343443f:
  pTVar2 = param_2->Ptr;
  pTVar2->_padding_ = param_3->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&pTVar2->AttribValues,&param_3->AttribValues)
  ;
  return;
}

// DefaultConstructItems<UE::Geometry::TIndexMap<int>,int> @ 143434710

void __cdecl DefaultConstructItems<UE::Geometry::TIndexMap<int>,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined4 *)(lVar1 + 0x6c) = 0;
      *(undefined4 *)(lVar1 + 0x70) = 0x80;
      *(undefined4 *)(lVar1 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined4 *)(lVar1 + 0x8c) = 0;
      *(undefined2 *)(lVar1 + 0x94) = 0x101;
      lVar1 = lVar1 + 0xa8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FDynamicMesh3::FEdge,int> @ 143434790

void __cdecl
DefaultConstructItems<UE::Geometry::FDynamicMesh3::FEdge,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,int> @ 1434347c0

void __cdecl
DefaultConstructItems<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x20);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x80;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0x80;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,int> @ 143434800

void __cdecl
DefaultConstructItems<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TDynamicMeshAttributeChange<float,2>,int> @ 143434840

void __cdecl
DefaultConstructItems<UE::Geometry::TDynamicMeshAttributeChange<float,2>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TDynamicMeshAttributeChange<float,3>,int> @ 143434890

void __cdecl
DefaultConstructItems<UE::Geometry::TDynamicMeshAttributeChange<float,3>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::AnimationCore::FBoneWeight,int> @ 1434348e0

void __cdecl DefaultConstructItems<UE::AnimationCore::FBoneWeight,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::AnimationCore::FBoneWeights,int> @ 1434348f0

void __cdecl DefaultConstructItems<UE::AnimationCore::FBoneWeights,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x38);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0xc;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,int> @ 143434920

void __cdecl
DestructItems<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,int>
          (FElementState *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->StartElements).AllocatorInstance.SecondaryData;
    do {
      if (pFVar1[4] != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)pFVar1[4]);
      }
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,int> @ 143434970

void __cdecl
DestructItems<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,int>
          (FDynamicMeshTriangleAttributeChange<int,1> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
    pFVar1 = (param_1->NewTriangleAttributes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->OldTriangleAttributes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1->_padding_ =
         (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,2>,int> @ 1434349f0

void __cdecl
DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,2>,int>
          (TDynamicMeshAttributeChange<float,2> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->NewElementData;
    do {
      pFVar1 = (((TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeElement,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-3].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TDynamicMeshAttributeChange<float,2> *)(pTVar2 + -4))->OldElements).
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,3>,int> @ 143434a80

void __cdecl
DestructItems<UE::Geometry::TDynamicMeshAttributeChange<float,3>,int>
          (TDynamicMeshAttributeChange<float,3> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->NewElementData;
    do {
      pFVar1 = (((TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeElement,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -2))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-3].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TDynamicMeshAttributeChange<float,3> *)(pTVar2 + -4))->OldElements).
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>,int> @ 143434b10

void __cdecl
DestructItems<TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>,int>
          (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
           *param_1,int param_2)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *pTVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar1 = param_1->Ptr;
    if (pTVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
      (**(code **)*pTVar1)(pTVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::AnimationCore::FBoneWeights,int> @ 143434b50

void __cdecl DestructItems<UE::AnimationCore::FBoneWeights,int>(FBoneWeights *param_1,int param_2)

{
  ForElementType<UE::AnimationCore::FBoneWeight> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->BoneWeights).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EnableIfMatching<UE::Geometry::FDynamicMesh3,int> @ 1434355d0

void __cdecl
BoneAttributeHelpers::EnableIfMatching<UE::Geometry::FDynamicMesh3,int>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *param_3,int *param_4,
          bool param_5,bool param_6)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar1;
  undefined8 *puVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar3;
  int iVar4;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
  local_28 [2];
  
  pTVar3 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
  if ((param_5) || (param_6)) {
    if ((param_5) || (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0))
    {
      pTVar1 = param_2->Ptr;
      if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
        param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
        (**(code **)pTVar1->_padding_)(pTVar1,1);
      }
      if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
        return;
      }
      if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
      goto LAB_143435615;
    }
LAB_14343567e:
    iVar4 = (param_3->AttribValues).ArrayNum;
  }
  else {
    if (param_3 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
    goto LAB_14343567e;
    if (param_2->Ptr == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
      return;
    }
LAB_143435615:
    iVar4 = 0;
  }
  if (param_2->Ptr != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    return;
  }
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ =
         (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
    pTVar1->Parent = param_1;
    (pTVar1->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->AttribValues).ArrayNum = 0;
    (pTVar1->AttribValues).ArrayMax = 0;
    pTVar3 = pTVar1;
  }
  if (param_2 == local_28) {
    if (pTVar3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
    goto LAB_1434356b2;
    puVar2 = (undefined8 *)pTVar3->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar3;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
    goto LAB_1434356b2;
    puVar2 = (undefined8 *)pTVar1->_padding_;
    pTVar3 = pTVar1;
  }
  (*(code *)*puVar2)(pTVar3,1);
LAB_1434356b2:
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&param_2->Ptr->AttribValues,param_4,iVar4);
  return;
}

// EnableIfMatching<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> @ 1434356f0

void __cdecl
BoneAttributeHelpers::EnableIfMatching<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *param_3,TTransform<double> *param_4,bool param_5,bool param_6)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar1;
  undefined8 *puVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar3;
  int iVar4;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
  local_28 [2];
  
  pTVar3 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)
           0x0;
  iVar4 = 0;
  if ((param_5) || (param_6)) {
    if ((param_5) ||
       (param_3 ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
       ) {
      pTVar1 = param_2->Ptr;
      if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                     *)0x0) {
        param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                        *)0x0;
        (**(code **)pTVar1->_padding_)();
      }
      if (param_3 ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)
          0x0) {
        return;
      }
      if (param_3 ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)
          0x0) goto LAB_143435738;
    }
LAB_1434357a8:
    iVar4 = (param_3->AttribValues).ArrayNum;
  }
  else {
    if (param_3 !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    goto LAB_1434357a8;
    if (param_2->Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    {
      return;
    }
  }
LAB_143435738:
  if (param_2->Ptr !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0) {
    return;
  }
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Parent = param_1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
    ;
    (pTVar1->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->AttribValues).ArrayNum = 0;
    (pTVar1->AttribValues).ArrayMax = 0;
    UE::Geometry::
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Resize
              (pTVar1,0);
    pTVar3 = pTVar1;
  }
  if (param_2 == local_28) {
    if (pTVar3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0) goto LAB_1434357dc;
    puVar2 = (undefined8 *)pTVar3->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar3;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *)0x0) goto LAB_1434357dc;
    puVar2 = (undefined8 *)pTVar1->_padding_;
    pTVar3 = pTVar1;
  }
  (*(code *)*puVar2)(pTVar3,1);
LAB_1434357dc:
  UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
  ::Initialize(param_2->Ptr,iVar4,param_4);
  return;
}

// EnableIfMatching<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> @ 143435810

void __cdecl
BoneAttributeHelpers::EnableIfMatching<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *param_3,TVector4<float> *param_4,bool param_5,bool param_6)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar1;
  undefined8 *puVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar3;
  int iVar4;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
  local_28 [2];
  
  pTVar3 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0;
  iVar4 = 0;
  if ((param_5) || (param_6)) {
    if ((param_5) ||
       (param_3 ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)) {
      pTVar1 = param_2->Ptr;
      if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                     *)0x0) {
        param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                        *)0x0;
        (**(code **)pTVar1->_padding_)();
      }
      if (param_3 ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
      {
        return;
      }
      if (param_3 ==
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
      goto LAB_143435858;
    }
LAB_1434358c8:
    iVar4 = (param_3->AttribValues).ArrayNum;
  }
  else {
    if (param_3 !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
    goto LAB_1434358c8;
    if (param_2->Ptr ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
      return;
    }
  }
LAB_143435858:
  if (param_2->Ptr !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
    return;
  }
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Parent = param_1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (pTVar1->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->AttribValues).ArrayNum = 0;
    (pTVar1->AttribValues).ArrayMax = 0;
    UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
    ::Resize(pTVar1,0);
    pTVar3 = pTVar1;
  }
  if (param_2 == local_28) {
    if (pTVar3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) goto LAB_1434358fc;
    puVar2 = (undefined8 *)pTVar3->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar3;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) goto LAB_1434358fc;
    puVar2 = (undefined8 *)pTVar1->_padding_;
    pTVar3 = pTVar1;
  }
  (*(code *)*puVar2)(pTVar3,1);
LAB_1434358fc:
  UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
  Initialize(param_2->Ptr,iVar4,param_4);
  return;
}

// EnableIfMatching<UE::Geometry::FDynamicMesh3,FName> @ 143435930

void __cdecl
BoneAttributeHelpers::EnableIfMatching<UE::Geometry::FDynamicMesh3,FName>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *param_3,
          FName *param_4,bool param_5,bool param_6)

{
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar1;
  undefined8 *puVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar3;
  int iVar4;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
  local_28 [2];
  
  pTVar3 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
  iVar4 = 0;
  if ((param_5) || (param_6)) {
    if ((param_5) ||
       (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
      pTVar1 = param_2->Ptr;
      if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
        (**(code **)pTVar1->_padding_)();
      }
      if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        return;
      }
      if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
      goto LAB_143435978;
    }
LAB_1434359e8:
    iVar4 = (param_3->AttribValues).ArrayNum;
  }
  else {
    if (param_3 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_1434359e8;
    if (param_2->Ptr == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      return;
    }
  }
LAB_143435978:
  if (param_2->Ptr != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    return;
  }
  pTVar1 = ::operator_new(0x28);
  if (pTVar1 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->Parent = param_1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
    (pTVar1->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->AttribValues).ArrayNum = 0;
    (pTVar1->AttribValues).ArrayMax = 0;
    UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Resize(pTVar1,0);
    pTVar3 = pTVar1;
  }
  if (param_2 == local_28) {
    if (pTVar3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_143435a1c;
    puVar2 = (undefined8 *)pTVar3->_padding_;
  }
  else {
    pTVar1 = param_2->Ptr;
    param_2->Ptr = pTVar3;
    if (pTVar1 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_143435a1c;
    puVar2 = (undefined8 *)pTVar1->_padding_;
    pTVar3 = pTVar1;
  }
  (*(code *)*puVar2)(pTVar3,1);
LAB_143435a1c:
  UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Initialize
            (param_2->Ptr,iVar4,param_4);
  return;
}

// Enumerate<`UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles'::__l2::<lambda_1>_> @ 143435a50

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles_::__l2::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint local_res10 [2];
  
  uVar3 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar3 != 0xffffffff) {
    uVar12 = uVar3 + 1;
    uVar11 = (ulonglong)uVar12;
    iVar4 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
    if (iVar4 < 8) {
      uVar10 = uVar12;
      while ((int)uVar10 <= (int)(uVar3 + iVar4)) {
        uVar10 = *(uint *)(*(longlong *)
                            ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar11 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4);
        auVar2 = *(undefined1 (*) [16])
                  (*(longlong *)
                    ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 0x10);
        iVar5 = *param_2->VertexID;
        local_res10[0] = auVar2._8_4_;
        uVar8 = auVar2._0_8_;
        if (auVar2._0_4_ == iVar5) {
          uVar8 = auVar2._0_8_ >> 0x20;
        }
        iVar9 = (int)uVar8;
        lVar7 = *(longlong *)
                 ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                 ((auVar2._8_8_ & 0xffffffff) >> 9) * 8);
        lVar1 = lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc;
        iVar6 = *(int *)(lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
        if ((((iVar6 == iVar5) && (*(int *)(lVar1 + 4) == iVar9)) ||
            ((*(int *)(lVar1 + 4) == iVar5 && (*(int *)(lVar1 + 8) == iVar9)))) ||
           ((*(int *)(lVar1 + 8) == iVar5 && (iVar6 == iVar9)))) {
          (**(code **)param_2->ApplyFunc)(*(undefined8 *)&param_2->ApplyFunc->field_0x8,local_res10)
          ;
        }
        local_res10[0] = auVar2._12_4_;
        if (local_res10[0] != 0xffffffff) {
          iVar5 = *param_2->VertexID;
          lVar7 = *(longlong *)
                   ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                   (ulonglong)(local_res10[0] >> 9) * 8);
          lVar1 = lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc;
          iVar6 = *(int *)(lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
          if ((((iVar6 == iVar5) && (*(int *)(lVar1 + 4) == iVar9)) ||
              ((*(int *)(lVar1 + 4) == iVar5 && (*(int *)(lVar1 + 8) == iVar9)))) ||
             ((*(int *)(lVar1 + 8) == iVar5 && (iVar6 == iVar9)))) {
            (**(code **)param_2->ApplyFunc)
                      (*(undefined8 *)&param_2->ApplyFunc->field_0x8,local_res10);
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar12 = uVar12 + 1;
      }
    }
    else {
      uVar10 = uVar12;
      while ((int)uVar10 <= (int)(uVar3 + 8)) {
        uVar10 = *(uint *)(*(longlong *)
                            ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar11 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4);
        auVar2 = *(undefined1 (*) [16])
                  (*(longlong *)
                    ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 0x10);
        iVar4 = *param_2->VertexID;
        local_res10[0] = auVar2._8_4_;
        uVar8 = auVar2._0_8_;
        if (auVar2._0_4_ == iVar4) {
          uVar8 = auVar2._0_8_ >> 0x20;
        }
        iVar6 = (int)uVar8;
        lVar7 = *(longlong *)
                 ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                 ((auVar2._8_8_ & 0xffffffff) >> 9) * 8);
        lVar1 = lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc;
        iVar5 = *(int *)(lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
        if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
            ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
           ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
          (**(code **)param_2->ApplyFunc)(*(undefined8 *)&param_2->ApplyFunc->field_0x8,local_res10)
          ;
        }
        local_res10[0] = auVar2._12_4_;
        if (local_res10[0] != 0xffffffff) {
          iVar4 = *param_2->VertexID;
          lVar7 = *(longlong *)
                   ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                   (ulonglong)(local_res10[0] >> 9) * 8);
          lVar1 = lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc;
          iVar5 = *(int *)(lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
          if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
              ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
             ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
            (**(code **)param_2->ApplyFunc)
                      (*(undefined8 *)&param_2->ApplyFunc->field_0x8,local_res10);
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar12 = uVar12 + 1;
      }
      for (uVar3 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar3 + 9 >> 9) * 8) + (ulonglong)(uVar3 + 9 & 0x1ff) * 4)
          ; uVar3 != 0xffffffff;
          uVar3 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar3 + 1 >> 9) * 8) + (ulonglong)(uVar3 + 1 & 0x1ff) * 4))
      {
        uVar12 = *(uint *)(*(longlong *)
                            ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
        auVar2 = *(undefined1 (*) [16])
                  (*(longlong *)
                    ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x10);
        iVar4 = *param_2->VertexID;
        local_res10[0] = auVar2._8_4_;
        uVar11 = auVar2._0_8_;
        if (auVar2._0_4_ == iVar4) {
          uVar11 = auVar2._0_8_ >> 0x20;
        }
        iVar6 = (int)uVar11;
        lVar7 = *(longlong *)
                 ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                 ((auVar2._8_8_ & 0xffffffff) >> 9) * 8);
        lVar1 = lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc;
        iVar5 = *(int *)(lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
        if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
            ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
           ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
          (**(code **)param_2->ApplyFunc)(*(undefined8 *)&param_2->ApplyFunc->field_0x8,local_res10)
          ;
        }
        local_res10[0] = auVar2._12_4_;
        if (local_res10[0] != 0xffffffff) {
          iVar4 = *param_2->VertexID;
          lVar7 = *(longlong *)
                   ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                   (ulonglong)(local_res10[0] >> 9) * 8);
          lVar1 = lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc;
          iVar5 = *(int *)(lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0xc);
          if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
              ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
             ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
            (**(code **)param_2->ApplyFunc)
                      (*(undefined8 *)&param_2->ApplyFunc->field_0x8,local_res10);
          }
        }
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FDynamicMesh3::EnumerateVertexVertices'::__l2::<lambda_1>_> @ 143435f60

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_res10 [2];
  
  uVar5 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar5 != 0xffffffff) {
    uVar7 = uVar5 + 1;
    uVar6 = (ulonglong)uVar7;
    iVar2 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
    if (iVar2 < 8) {
      uVar4 = uVar7;
      while ((int)uVar4 <= (int)(uVar5 + iVar2)) {
        uVar4 = *(uint *)(*(longlong *)
                           ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar6 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        uVar1 = *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)param_2 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8) +
                 (ulonglong)(uVar4 & 0x1ff) * 0x10);
        iVar8 = (int)((ulonglong)uVar1 >> 0x20);
        iVar9 = (int)uVar1;
        local_res10[0] = iVar8;
        if ((iVar9 != *(int *)(param_2 + 0x10)) &&
           (local_res10[0] = -1, iVar8 == *(int *)(param_2 + 0x10))) {
          local_res10[0] = iVar9;
        }
        (*(code *)**(undefined8 **)(param_2 + 8))((*(undefined8 **)(param_2 + 8))[1],local_res10);
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar7 = uVar7 + 1;
      }
    }
    else {
      uVar4 = uVar7;
      while ((int)uVar4 <= (int)(uVar5 + 8)) {
        uVar4 = *(uint *)(*(longlong *)
                           ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar6 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        uVar1 = *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)param_2 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8) +
                 (ulonglong)(uVar4 & 0x1ff) * 0x10);
        iVar2 = (int)((ulonglong)uVar1 >> 0x20);
        iVar8 = (int)uVar1;
        local_res10[0] = iVar2;
        if ((iVar8 != *(int *)(param_2 + 0x10)) &&
           (local_res10[0] = -1, iVar2 == *(int *)(param_2 + 0x10))) {
          local_res10[0] = iVar8;
        }
        (*(code *)**(undefined8 **)(param_2 + 8))((*(undefined8 **)(param_2 + 8))[1],local_res10);
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar7 = uVar7 + 1;
      }
      uVar5 = *(uint *)(*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar5 + 9 >> 9) * 8) + (ulonglong)(uVar5 + 9 & 0x1ff) * 4);
      if (uVar5 != 0xffffffff) {
        pFVar3 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
        do {
          uVar7 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar5 >> 9) * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 4);
          uVar1 = *(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)param_2 + 0x1c0) + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 0x10);
          iVar2 = (int)((ulonglong)uVar1 >> 0x20);
          iVar8 = (int)uVar1;
          local_res10[0] = iVar2;
          if ((iVar8 != *(int *)(param_2 + 0x10)) &&
             (local_res10[0] = -1, iVar2 == *(int *)(param_2 + 0x10))) {
            local_res10[0] = iVar8;
          }
          (*(code *)**(undefined8 **)(param_2 + 8))((*(undefined8 **)(param_2 + 8))[1],local_res10);
          pFVar3 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
          uVar5 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                           (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
        } while (uVar5 != 0xffffffff);
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FDynamicMesh3::GetVtxTriangleCount'::__l2::<lambda_1>_> @ 1434361d0

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangleCount_::__l2::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FDynamicMesh3 *pFVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  
  uVar3 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar3 != 0xffffffff) {
    uVar12 = uVar3 + 1;
    uVar10 = (ulonglong)uVar12;
    iVar4 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
    if (iVar4 < 8) {
      uVar14 = uVar12;
      while ((int)uVar14 <= (int)(uVar3 + iVar4)) {
        pFVar11 = param_2->__this;
        piVar13 = param_2->vID;
        iVar5 = *piVar13;
        uVar14 = *(uint *)(*(longlong *)
                            ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4);
        auVar2 = *(undefined1 (*) [16])
                  (*(longlong *)
                    ((pFVar11->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8)
                  + (ulonglong)(uVar14 & 0x1ff) * 0x10);
        uVar9 = auVar2._0_8_;
        if (auVar2._0_4_ == iVar5) {
          uVar9 = auVar2._0_8_ >> 0x20;
        }
        iVar8 = (int)uVar9;
        uVar9 = (ulonglong)(auVar2._8_4_ & 0x1ff);
        lVar7 = *(longlong *)
                 ((pFVar11->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)(auVar2._8_4_ >> 9) * 8);
        lVar1 = lVar7 + uVar9 * 0xc;
        iVar6 = *(int *)(lVar7 + uVar9 * 0xc);
        if ((((iVar6 == iVar5) && (*(int *)(lVar1 + 4) == iVar8)) ||
            ((*(int *)(lVar1 + 4) == iVar5 && (*(int *)(lVar1 + 8) == iVar8)))) ||
           ((*(int *)(lVar1 + 8) == iVar5 && (iVar6 == iVar8)))) {
          *param_2->N = *param_2->N + 1;
          piVar13 = param_2->vID;
          pFVar11 = param_2->__this;
        }
        if (auVar2._12_4_ != 0xffffffff) {
          uVar9 = (ulonglong)(auVar2._12_4_ & 0x1ff);
          iVar5 = *piVar13;
          lVar7 = *(longlong *)
                   ((pFVar11->Triangles).Blocks.AllocatorInstance.Data + (auVar2._8_8_ >> 0x29) * 8)
          ;
          lVar1 = lVar7 + uVar9 * 0xc;
          iVar6 = *(int *)(lVar7 + uVar9 * 0xc);
          if ((((iVar6 == iVar5) && (*(int *)(lVar1 + 4) == iVar8)) ||
              ((*(int *)(lVar1 + 4) == iVar5 && (*(int *)(lVar1 + 8) == iVar8)))) ||
             ((*(int *)(lVar1 + 8) == iVar5 && (iVar6 == iVar8)))) {
            *param_2->N = *param_2->N + 1;
          }
        }
        uVar14 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar14;
        uVar12 = uVar12 + 1;
      }
    }
    else {
      uVar14 = uVar12;
      while ((int)uVar14 <= (int)(uVar3 + 8)) {
        piVar13 = param_2->vID;
        iVar4 = *piVar13;
        uVar14 = *(uint *)(*(longlong *)
                            ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4);
        auVar2 = *(undefined1 (*) [16])
                  (*(longlong *)
                    ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 0x10);
        uVar9 = auVar2._0_8_;
        if (auVar2._0_4_ == iVar4) {
          uVar9 = auVar2._0_8_ >> 0x20;
        }
        iVar6 = (int)uVar9;
        uVar9 = (ulonglong)(auVar2._8_4_ & 0x1ff);
        lVar1 = *(longlong *)
                 ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)(auVar2._8_4_ >> 9) * 8);
        iVar5 = *(int *)(lVar1 + uVar9 * 0xc);
        lVar1 = lVar1 + uVar9 * 0xc;
        if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
            ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
           ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
          *param_2->N = *param_2->N + 1;
          piVar13 = param_2->vID;
        }
        if (auVar2._12_4_ != 0xffffffff) {
          uVar9 = (ulonglong)(auVar2._12_4_ & 0x1ff);
          iVar4 = *piVar13;
          lVar7 = *(longlong *)
                   ((param_2->__this->Triangles).Blocks.AllocatorInstance.Data +
                   (auVar2._8_8_ >> 0x29) * 8);
          lVar1 = lVar7 + uVar9 * 0xc;
          iVar5 = *(int *)(lVar7 + uVar9 * 0xc);
          if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
              ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
             ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
            *param_2->N = *param_2->N + 1;
          }
        }
        uVar14 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar14;
        uVar12 = uVar12 + 1;
      }
      for (uVar3 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar3 + 9 >> 9) * 8) + (ulonglong)(uVar3 + 9 & 0x1ff) * 4)
          ; uVar3 != 0xffffffff;
          uVar3 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar3 + 1 >> 9) * 8) + (ulonglong)(uVar3 + 1 & 0x1ff) * 4))
      {
        pFVar11 = param_2->__this;
        piVar13 = param_2->vID;
        iVar4 = *piVar13;
        uVar12 = *(uint *)(*(longlong *)
                            ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
        auVar2 = *(undefined1 (*) [16])
                  (*(longlong *)
                    ((pFVar11->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
                  + (ulonglong)(uVar12 & 0x1ff) * 0x10);
        uVar10 = auVar2._0_8_;
        if (auVar2._0_4_ == iVar4) {
          uVar10 = auVar2._0_8_ >> 0x20;
        }
        iVar6 = (int)uVar10;
        uVar10 = (ulonglong)(auVar2._8_4_ & 0x1ff);
        lVar1 = *(longlong *)
                 ((pFVar11->Triangles).Blocks.AllocatorInstance.Data +
                 ((auVar2._8_8_ & 0xffffffff) >> 9) * 8);
        iVar5 = *(int *)(lVar1 + uVar10 * 0xc);
        lVar1 = lVar1 + uVar10 * 0xc;
        if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
            ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
           ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
          *param_2->N = *param_2->N + 1;
          pFVar11 = param_2->__this;
          piVar13 = param_2->vID;
        }
        if (auVar2._12_4_ != 0xffffffff) {
          uVar10 = (ulonglong)(auVar2._12_4_ & 0x1ff);
          iVar4 = *piVar13;
          lVar7 = *(longlong *)
                   ((pFVar11->Triangles).Blocks.AllocatorInstance.Data + (auVar2._8_8_ >> 0x29) * 8)
          ;
          lVar1 = lVar7 + uVar10 * 0xc;
          iVar5 = *(int *)(lVar7 + uVar10 * 0xc);
          if ((((iVar5 == iVar4) && (*(int *)(lVar1 + 4) == iVar6)) ||
              ((*(int *)(lVar1 + 4) == iVar4 && (*(int *)(lVar1 + 8) == iVar6)))) ||
             ((*(int *)(lVar1 + 8) == iVar4 && (iVar5 == iVar6)))) {
            *param_2->N = *param_2->N + 1;
          }
        }
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l8::<lambda_1>_> @ 143436650

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>_::__l8::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  uVar3 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar3 != 0xffffffff) {
    uVar5 = uVar3 + 1;
    uVar4 = (ulonglong)uVar5;
    iVar1 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
    if (iVar1 < 8) {
      uVar2 = uVar5;
      while ((int)uVar2 <= (int)(uVar3 + iVar1)) {
        `UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>'::
        __l8::<lambda_1>::operator()
                  (param_2,*(int *)(*(longlong *)
                                     ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                                     (uVar4 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4));
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        uVar5 = uVar5 + 1;
      }
    }
    else {
      uVar2 = uVar5;
      while ((int)uVar2 <= (int)(uVar3 + 8)) {
        `UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>'::
        __l8::<lambda_1>::operator()
                  (param_2,*(int *)(*(longlong *)
                                     ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                                     (uVar4 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4));
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        uVar5 = uVar5 + 1;
      }
      uVar3 = *(uint *)(*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar3 + 9 >> 9) * 8) + (ulonglong)(uVar3 + 9 & 0x1ff) * 4);
      if (uVar3 != 0xffffffff) {
        pFVar6 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
        do {
          `UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>'::
          __l8::<lambda_1>::operator()
                    (param_2,*(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) +
                                     (ulonglong)(uVar3 & 0x1ff) * 4));
          pFVar6 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
          uVar3 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                           (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
        } while (uVar3 != 0xffffffff);
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::__l8::<lambda_1>_> @ 1434367c0

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_::__l8::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  uVar3 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar3 != 0xffffffff) {
    uVar5 = uVar3 + 1;
    uVar4 = (ulonglong)uVar5;
    iVar1 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
    if (iVar1 < 8) {
      uVar2 = uVar5;
      while ((int)uVar2 <= (int)(uVar3 + iVar1)) {
        `UE::Geometry::FDynamicMesh3::
        GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::
        __l8::<lambda_1>::operator()
                  (param_2,*(int *)(*(longlong *)
                                     ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                                     (uVar4 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4));
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        uVar5 = uVar5 + 1;
      }
    }
    else {
      uVar2 = uVar5;
      while ((int)uVar2 <= (int)(uVar3 + 8)) {
        `UE::Geometry::FDynamicMesh3::
        GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::
        __l8::<lambda_1>::operator()
                  (param_2,*(int *)(*(longlong *)
                                     ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                                     (uVar4 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4));
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        uVar5 = uVar5 + 1;
      }
      uVar3 = *(uint *)(*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar3 + 9 >> 9) * 8) + (ulonglong)(uVar3 + 9 & 0x1ff) * 4);
      if (uVar3 != 0xffffffff) {
        pFVar6 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
        do {
          `UE::Geometry::FDynamicMesh3::
          GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::
          __l8::<lambda_1>::operator()
                    (param_2,*(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 >> 9) * 8) +
                                     (ulonglong)(uVar3 & 0x1ff) * 4));
          pFVar6 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
          uVar3 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                           (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
        } while (uVar3 != 0xffffffff);
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l10::<lambda_2>_> @ 143436930

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>_::__l10::<lambda_2>_>
          (FSmallListSet *this,int param_1,<lambda_2> *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uStack_20;
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar1 != 0xffffffff) {
    uVar5 = uVar1 + 1;
    uVar4 = (ulonglong)uVar5;
    iVar2 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (iVar2 < 8) {
      uVar3 = uVar5;
      while ((int)uVar3 <= (int)(uVar1 + iVar2)) {
        uVar3 = *(uint *)(*(longlong *)
                           ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar4 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        uStack_20 = *(undefined8 *)
                     (*(longlong *)
                       ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 0x10 + 8);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (param_2->TrianglesOut,(int *)&uStack_20);
        if (uStack_20._4_4_ != -1) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (param_2->TrianglesOut,(int *)((longlong)&uStack_20 + 4));
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 1;
      }
    }
    else {
      uVar3 = uVar5;
      while ((int)uVar3 <= (int)(uVar1 + 8)) {
        uVar3 = *(uint *)(*(longlong *)
                           ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar4 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        uStack_20 = *(undefined8 *)
                     (*(longlong *)
                       ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 0x10 + 8);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (param_2->TrianglesOut,(int *)&uStack_20);
        if (uStack_20._4_4_ != -1) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (param_2->TrianglesOut,(int *)((longlong)&uStack_20 + 4));
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 1;
      }
      for (uVar1 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar1 + 9 >> 9) * 8) + (ulonglong)(uVar1 + 9 & 0x1ff) * 4)
          ; uVar1 != 0xffffffff;
          uVar1 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4))
      {
        uVar5 = *(uint *)(*(longlong *)
                           ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        uStack_20 = *(undefined8 *)
                     (*(longlong *)
                       ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0x10 + 8);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (param_2->TrianglesOut,(int *)&uStack_20);
        if (uStack_20._4_4_ != -1) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (param_2->TrianglesOut,(int *)((longlong)&uStack_20 + 4));
        }
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::__l10::<lambda_2>_> @ 143436b80

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FDynamicMesh3::GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_::__l10::<lambda_2>_>
          (FSmallListSet *this,int param_1,<lambda_2> *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uStack_20;
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar1 != 0xffffffff) {
    uVar5 = uVar1 + 1;
    uVar4 = (ulonglong)uVar5;
    iVar2 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (iVar2 < 8) {
      uVar3 = uVar5;
      while ((int)uVar3 <= (int)(uVar1 + iVar2)) {
        uVar3 = *(uint *)(*(longlong *)
                           ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar4 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        uStack_20 = *(undefined8 *)
                     (*(longlong *)
                       ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 0x10 + 8);
        TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<int_const_&>(param_2->TrianglesOut,(int *)&uStack_20);
        if (uStack_20._4_4_ != -1) {
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
          AddUniqueImpl<int_const_&>(param_2->TrianglesOut,(int *)((longlong)&uStack_20 + 4));
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 1;
      }
    }
    else {
      uVar3 = uVar5;
      while ((int)uVar3 <= (int)(uVar1 + 8)) {
        uVar3 = *(uint *)(*(longlong *)
                           ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar4 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        uStack_20 = *(undefined8 *)
                     (*(longlong *)
                       ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 0x10 + 8);
        TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<int_const_&>(param_2->TrianglesOut,(int *)&uStack_20);
        if (uStack_20._4_4_ != -1) {
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
          AddUniqueImpl<int_const_&>(param_2->TrianglesOut,(int *)((longlong)&uStack_20 + 4));
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 1;
      }
      for (uVar1 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar1 + 9 >> 9) * 8) + (ulonglong)(uVar1 + 9 & 0x1ff) * 4)
          ; uVar1 != 0xffffffff;
          uVar1 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4))
      {
        uVar5 = *(uint *)(*(longlong *)
                           ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        uStack_20 = *(undefined8 *)
                     (*(longlong *)
                       ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0x10 + 8);
        TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<int_const_&>(param_2->TrianglesOut,(int *)&uStack_20);
        if (uStack_20._4_4_ != -1) {
          TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
          AddUniqueImpl<int_const_&>(param_2->TrianglesOut,(int *)((longlong)&uStack_20 + 4));
        }
      }
    }
  }
  return;
}

// Find<`UE::Geometry::FDynamicMesh3::FindEdgeInternal'::__l2::<lambda_1>_> @ 143436dd0

int __thiscall
UE::Geometry::FSmallListSet::
Find<_UE::Geometry::FDynamicMesh3::FindEdgeInternal_::__l2::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar4 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar4 != 0xffffffff) {
    pFVar3 = (this->ListBlocks).Blocks.AllocatorInstance.Data;
    iVar2 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 4);
    uVar5 = uVar4 + 1;
    uVar6 = (ulonglong)uVar5;
    if (iVar2 < 8) {
      iVar2 = iVar2 + uVar4;
      if ((int)uVar5 <= iVar2) {
        do {
          uVar5 = *(uint *)(*(longlong *)(pFVar3 + (uVar6 >> 9) * 8) +
                           (ulonglong)((uint)uVar6 & 0x1ff) * 4);
          lVar1 = *(longlong *)
                   ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0x10;
          iVar7 = *(int *)(lVar1 + 0xc);
          if (*(int *)(lVar1 + 4) == *param_2->vMax) {
LAB_143436eaa:
            *param_2->bIsBoundary = iVar7 == -1;
            return uVar5;
          }
          uVar4 = (uint)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
        } while ((int)uVar4 <= iVar2);
      }
    }
    else {
      if ((int)uVar5 <= (int)(uVar4 + 8)) {
        do {
          uVar5 = *(uint *)(*(longlong *)(pFVar3 + (uVar6 >> 9) * 8) +
                           (ulonglong)((uint)uVar6 & 0x1ff) * 4);
          lVar1 = *(longlong *)
                   ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0x10;
          if (*(int *)(lVar1 + 4) == *param_2->vMax) {
            *param_2->bIsBoundary = *(int *)(lVar1 + 0xc) == -1;
            return uVar5;
          }
          uVar5 = (uint)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 <= (int)(uVar4 + 8));
      }
      uVar4 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar4 + 9 >> 9) * 8) +
                       (ulonglong)(uVar4 + 9 & 0x1ff) * 4);
      if (uVar4 != 0xffffffff) {
        pFVar3 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
        do {
          uVar5 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar4 >> 9) * 8) +
                           (ulonglong)(uVar4 & 0x1ff) * 4);
          lVar1 = *(longlong *)
                   ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0x10;
          iVar7 = *(int *)(lVar1 + 0xc);
          if (*(int *)(lVar1 + 4) == *param_2->vMax) goto LAB_143436eaa;
          uVar4 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                           (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  return param_3;
}

// Find<`UE::Geometry::FDynamicMesh3::FindEdge'::__l13::<lambda_1>_> @ 143437010

int __thiscall
UE::Geometry::FSmallListSet::Find<_UE::Geometry::FDynamicMesh3::FindEdge_::__l13::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar3 != 0xffffffff) {
    pFVar2 = (this->ListBlocks).Blocks.AllocatorInstance.Data;
    iVar1 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 4);
    uVar4 = uVar3 + 1;
    uVar5 = (ulonglong)uVar4;
    if (iVar1 < 8) {
      iVar1 = iVar1 + uVar3;
      if ((int)uVar4 <= iVar1) {
        do {
          uVar3 = *(uint *)(*(longlong *)(pFVar2 + (uVar5 >> 9) * 8) +
                           (ulonglong)((uint)uVar5 & 0x1ff) * 4);
          if (*(int *)(*(longlong *)
                        ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar3 >> 9) * 8) + 4 + (ulonglong)(uVar3 & 0x1ff) * 0x10) ==
              *param_2->vMax) {
            return uVar3;
          }
          uVar3 = (uint)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while ((int)uVar3 <= iVar1);
      }
    }
    else {
      if ((int)uVar4 <= (int)(uVar3 + 8)) {
        do {
          uVar4 = *(uint *)(*(longlong *)(pFVar2 + (uVar5 >> 9) * 8) +
                           (ulonglong)((uint)uVar5 & 0x1ff) * 4);
          if (*(int *)(*(longlong *)
                        ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar4 >> 9) * 8) + 4 + (ulonglong)(uVar4 & 0x1ff) * 0x10) ==
              *param_2->vMax) {
            return uVar4;
          }
          uVar4 = (uint)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 <= (int)(uVar3 + 8));
      }
      uVar3 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar3 + 9 >> 9) * 8) +
                       (ulonglong)(uVar3 + 9 & 0x1ff) * 4);
      if (uVar3 != 0xffffffff) {
        pFVar2 = (this->LinkedListElements).Blocks.AllocatorInstance.Data;
        do {
          uVar4 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 4);
          if (*(int *)(*(longlong *)
                        ((param_2->__this->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar4 >> 9) * 8) + 4 + (ulonglong)(uVar4 & 0x1ff) * 0x10) ==
              *param_2->vMax) {
            return uVar4;
          }
          uVar3 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                           (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
        } while (uVar3 != 0xffffffff);
      }
    }
  }
  return param_3;
}

// FindEdgeIndexInTri<int,UE::Geometry::FIndex3i> @ 1434371f0

int __cdecl
IndexUtil::FindEdgeIndexInTri<int,UE::Geometry::FIndex3i>(int param_1,int param_2,FIndex3i *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3->field0_0x0)._s_0.A;
  iVar3 = (param_3->field0_0x0)._s_0.B;
  iVar2 = iVar3;
  if (((param_1 == iVar1) || (iVar2 = iVar1, param_1 == iVar3)) && (param_2 == iVar2)) {
    return 0;
  }
  iVar2 = (param_3->field0_0x0)._s_0.C;
  if (param_1 == iVar3) {
    if (param_2 != iVar2) {
      if (param_1 == iVar2) goto LAB_143437220;
      goto LAB_14343723f;
    }
  }
  else {
    if (param_1 != iVar2) {
LAB_14343723f:
      if ((param_1 == iVar1) && (param_2 == iVar2)) {
        return 2;
      }
      return -1;
    }
    if (param_2 != iVar3) {
LAB_143437220:
      iVar3 = -1;
      if (param_2 == iVar1) {
        iVar3 = 2;
      }
      return iVar3;
    }
  }
  return 1;
}

// FindNextAdjacentTriangleAroundVtx<`UE::Geometry::SplitBoundaryVertexTrianglesIntoSubsets'::__l12::<lambda_1>_> @ 143437ca0

FIndex3i * __cdecl
UE::Geometry::
FindNextAdjacentTriangleAroundVtx<_UE::Geometry::SplitBoundaryVertexTrianglesIntoSubsets_::__l12::<lambda_1>_>
          (FIndex3i *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,int param_3,
          int param_4,<lambda_1> param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FIndex3i *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  uint local_38;
  uint local_34 [3];
  undefined8 local_28;
  ulonglong local_18;
  uint local_10;
  
  if ((param_1 == (FDynamicMesh3 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\MeshIndexUtil.h"
                         ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIndex3i *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (param_1->Edges).Blocks.AllocatorInstance.Data;
  lVar3 = *(longlong *)
           ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_3 >> 9) * 8);
  local_10 = *(uint *)(lVar3 + 8 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  local_18 = *(ulonglong *)(lVar3 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  uVar8 = *(ulonglong *)
           (*(longlong *)(pFVar2 + (ulonglong)((uint)local_18 >> 9) * 8) + 8 +
           (ulonglong)((uint)local_18 & 0x1ff) * 0x10);
  if ((int)uVar8 == param_3) {
    uVar8 = uVar8 >> 0x20;
  }
  uVar8 = uVar8 & 0xffffffff;
  uVar9 = *(ulonglong *)
           (*(longlong *)(pFVar2 + (local_18 >> 0x29) * 8) + 8 +
           (ulonglong)((uint)(local_18 >> 0x20) & 0x1ff) * 0x10);
  if ((int)uVar9 == param_3) {
    uVar9 = uVar9 >> 0x20;
  }
  local_34[0] = (int)uVar9;
  puVar11 = &local_38;
  uVar9 = *(ulonglong *)
           (*(longlong *)(pFVar2 + (ulonglong)(local_10 >> 9) * 8) + 8 +
           (ulonglong)(local_10 & 0x1ff) * 0x10);
  if ((int)uVar9 == param_3) {
    uVar9 = uVar9 >> 0x20;
  }
  iVar10 = 0;
  local_34[1] = (int)uVar9;
  do {
    uVar6 = (uint)uVar8;
    if (((uVar6 != param_4) && (-1 < (int)uVar6)) &&
       ((int)uVar6 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar9 = (ulonglong)(uVar6 & 0x1ff);
      lVar3 = (uVar8 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + lVar3) + uVar9 * 2) - 1U) < 0xfffe) {
        lVar3 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar3);
        local_28 = *(undefined8 *)(lVar3 + uVar9 * 0xc);
        if ((((int)local_28 == param_2) || ((int)((ulonglong)local_28 >> 0x20) == param_2)) ||
           (*(int *)(lVar3 + 8 + uVar9 * 0xc) == param_2)) {
          iVar1 = *(int *)((longlong)&local_18 + (longlong)iVar10 * 4);
          if (iVar1 != *param_5.SplitEdgeID) {
            (__return_storage_ptr__->field0_0x0)._s_0.A = uVar6;
            (__return_storage_ptr__->field0_0x0)._s_0.B = iVar1;
            (__return_storage_ptr__->field0_0x0)._s_0.C = iVar10;
            return __return_storage_ptr__;
          }
LAB_143437e87:
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0xffffffffffffffff;
          (__return_storage_ptr__->field0_0x0)._s_0.C = -1;
          return __return_storage_ptr__;
        }
      }
    }
    iVar10 = iVar10 + 1;
    puVar11 = puVar11 + 1;
    if (2 < iVar10) goto LAB_143437e87;
    uVar8 = (ulonglong)*puVar11;
  } while( true );
}

// FindNextAdjacentTriangleAroundVtx<`UE::Geometry::SplitInteriorVertexTrianglesIntoSubsets'::__l12::<lambda_1>_> @ 143437ec0

FIndex3i * __cdecl
UE::Geometry::
FindNextAdjacentTriangleAroundVtx<_UE::Geometry::SplitInteriorVertexTrianglesIntoSubsets_::__l12::<lambda_1>_>
          (FIndex3i *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2,int param_3,
          int param_4,<lambda_1> *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FIndex3i *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  uint local_38;
  uint local_34 [3];
  undefined8 local_28;
  ulonglong local_18;
  uint local_10;
  
  if ((param_1 == (FDynamicMesh3 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\MeshIndexUtil.h"
                         ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FIndex3i *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (param_1->Edges).Blocks.AllocatorInstance.Data;
  lVar3 = *(longlong *)
           ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_3 >> 9) * 8);
  local_10 = *(uint *)(lVar3 + 8 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  local_18 = *(ulonglong *)(lVar3 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  uVar8 = *(ulonglong *)
           (*(longlong *)(pFVar2 + (ulonglong)((uint)local_18 >> 9) * 8) + 8 +
           (ulonglong)((uint)local_18 & 0x1ff) * 0x10);
  if ((int)uVar8 == param_3) {
    uVar8 = uVar8 >> 0x20;
  }
  uVar8 = uVar8 & 0xffffffff;
  uVar9 = *(ulonglong *)
           (*(longlong *)(pFVar2 + (local_18 >> 0x29) * 8) + 8 +
           (ulonglong)((uint)(local_18 >> 0x20) & 0x1ff) * 0x10);
  if ((int)uVar9 == param_3) {
    uVar9 = uVar9 >> 0x20;
  }
  local_34[0] = (int)uVar9;
  puVar11 = &local_38;
  uVar9 = *(ulonglong *)
           (*(longlong *)(pFVar2 + (ulonglong)(local_10 >> 9) * 8) + 8 +
           (ulonglong)(local_10 & 0x1ff) * 0x10);
  if ((int)uVar9 == param_3) {
    uVar9 = uVar9 >> 0x20;
  }
  iVar10 = 0;
  local_34[1] = (int)uVar9;
  do {
    uVar6 = (uint)uVar8;
    if (((uVar6 != param_4) && (-1 < (int)uVar6)) &&
       ((int)uVar6 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar9 = (ulonglong)(uVar6 & 0x1ff);
      lVar3 = (uVar8 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + lVar3) + uVar9 * 2) - 1U) < 0xfffe) {
        lVar3 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + lVar3);
        local_28 = *(undefined8 *)(lVar3 + uVar9 * 0xc);
        if ((((int)local_28 == param_2) || ((int)((ulonglong)local_28 >> 0x20) == param_2)) ||
           (*(int *)(lVar3 + 8 + uVar9 * 0xc) == param_2)) {
          iVar1 = *(int *)((longlong)&local_18 + (longlong)iVar10 * 4);
          if ((iVar1 != *param_5->SplitEdgeID0) && (iVar1 != *param_5->SplitEdgeID1)) {
            (__return_storage_ptr__->field0_0x0)._s_0.A = uVar6;
            (__return_storage_ptr__->field0_0x0)._s_0.B = iVar1;
            (__return_storage_ptr__->field0_0x0)._s_0.C = iVar10;
            return __return_storage_ptr__;
          }
LAB_1434380b2:
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0xffffffffffffffff;
          (__return_storage_ptr__->field0_0x0)._s_0.C = -1;
          return __return_storage_ptr__;
        }
      }
    }
    iVar10 = iVar10 + 1;
    puVar11 = puVar11 + 1;
    if (2 < iVar10) goto LAB_1434380b2;
    uVar8 = (ulonglong)*puVar11;
  } while( true );
}

// FindTriIndex<int,UE::Geometry::FIndex3i> @ 1434380f0

int __cdecl IndexUtil::FindTriIndex<int,UE::Geometry::FIndex3i>(int param_1,FIndex3i *param_2)

{
  int iVar1;
  
  if ((param_2->field0_0x0)._s_0.A == param_1) {
    return 0;
  }
  if ((param_2->field0_0x0)._s_0.B == param_1) {
    return 1;
  }
  iVar1 = -1;
  if ((param_2->field0_0x0)._s_0.C == param_1) {
    iVar1 = 2;
  }
  return iVar1;
}

// FindTriOtherVtx<int,UE::Geometry::FIndex3i> @ 143438120

int __cdecl
IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>(int param_1,int param_2,FIndex3i *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar2 = 0;
  iVar3 = 1;
  uVar4 = uVar2;
  while( true ) {
    iVar1 = (param_3->field0_0x0).ABC
            [iVar3 + (iVar3 / 3 + (iVar3 >> 0x1f) +
                     (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f))
                     * -3];
    if (((param_1 == (param_3->field0_0x0).ABC[uVar2]) ||
        (bVar5 = param_1 == iVar1, iVar1 = (param_3->field0_0x0).ABC[uVar2], bVar5)) &&
       (param_2 == iVar1)) break;
    uVar4 = (ulonglong)((int)uVar4 + 1);
    iVar3 = iVar3 + 1;
    uVar2 = uVar2 + 1;
    if (2 < (longlong)uVar2) {
      return -1;
    }
  }
  iVar3 = (int)uVar4 + 2;
  return (param_3->field0_0x0).ABC
         [iVar3 + (iVar3 / 3 + (iVar3 >> 0x1f) +
                  (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3];
}

// HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>'::__l2::<lambda_1>_>_> @ 14343a840

void __cdecl
AlgoImpl::
HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
          (FHitIntersectionResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_private:_bool___cdecl_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>(UE::Math::TRay<double>_const_&,TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>_&,UE::Geometry::IMeshSpatial::FQueryOptions_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FHitIntersectionResult *pFVar1;
  FHitIntersectionResult *pFVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FHitIntersectionResult *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14343a96c:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar15 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar16 = param_1 + lVar15;
          do {
            uVar9 = *(undefined4 *)&pFVar16->field_0x4;
            dVar5 = pFVar16->Distance;
            dVar3 = (param_1->BaryCoords).field0_0x0._s_0.Z;
            iVar18 = param_1->TriangleId;
            uVar11 = *(undefined4 *)&param_1->field_0x4;
            dVar6 = param_1->Distance;
            dVar7 = (param_1->BaryCoords).field0_0x0._s_0.X;
            dVar8 = (param_1->BaryCoords).field0_0x0._s_0.Y;
            param_1->TriangleId = pFVar16->TriangleId;
            *(undefined4 *)&param_1->field_0x4 = uVar9;
            param_1->Distance = dVar5;
            dVar5 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
            (param_1->BaryCoords).field0_0x0._s_0.X = (pFVar16->BaryCoords).field0_0x0._s_0.X;
            (param_1->BaryCoords).field0_0x0._s_0.Y = dVar5;
            (param_1->BaryCoords).field0_0x0._s_0.Z = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
            pFVar16->TriangleId = iVar18;
            *(undefined4 *)&pFVar16->field_0x4 = uVar11;
            pFVar16->Distance = dVar6;
            (pFVar16->BaryCoords).field0_0x0._s_0.X = dVar7;
            (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar8;
            (pFVar16->BaryCoords).field0_0x0._s_0.Z = dVar3;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].Distance <= param_1[iVar13].Distance &&
                      param_1[iVar13].Distance != param_1[(longlong)iVar19 + 2].Distance) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].Distance < param_1[iVar18].Distance ||
                    param_1[iVar13].Distance == param_1[iVar18].Distance) break;
                pFVar1 = param_1 + iVar13;
                uVar9 = *(undefined4 *)&pFVar1->field_0x4;
                dVar5 = pFVar1->Distance;
                dVar3 = param_1[iVar18].BaryCoords.field0_0x0._s_0.Z;
                pFVar2 = param_1 + iVar18;
                iVar19 = pFVar2->TriangleId;
                uVar11 = *(undefined4 *)&pFVar2->field_0x4;
                dVar6 = pFVar2->Distance;
                dVar7 = param_1[iVar18].BaryCoords.field0_0x0._s_0.X;
                dVar8 = param_1[iVar18].BaryCoords.field0_0x0._s_0.Y;
                pFVar2 = param_1 + iVar18;
                pFVar2->TriangleId = pFVar1->TriangleId;
                *(undefined4 *)&pFVar2->field_0x4 = uVar9;
                pFVar2->Distance = dVar5;
                dVar5 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Y;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.X =
                     param_1[iVar13].BaryCoords.field0_0x0._s_0.X;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.Y = dVar5;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.Z =
                     param_1[iVar13].BaryCoords.field0_0x0._s_0.Z;
                pFVar1 = param_1 + iVar13;
                pFVar1->TriangleId = iVar19;
                *(undefined4 *)&pFVar1->field_0x4 = uVar11;
                pFVar1->Distance = dVar6;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.X = dVar7;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.Y = dVar8;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.Z = dVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar15 = lVar15 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Distance <= param_1[iVar17].Distance &&
          param_1[iVar17].Distance != param_1[(longlong)iVar14 + 2].Distance) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].Distance < param_1[iVar13].Distance ||
        param_1[iVar17].Distance == param_1[iVar13].Distance) goto LAB_14343a96c;
    pFVar16 = param_1 + iVar17;
    uVar9 = *(undefined4 *)&pFVar16->field_0x4;
    dVar5 = pFVar16->Distance;
    iVar14 = iVar17 * 2 + 1;
    dVar3 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Z;
    pFVar1 = param_1 + iVar13;
    iVar10 = pFVar1->TriangleId;
    uVar11 = *(undefined4 *)&pFVar1->field_0x4;
    dVar6 = pFVar1->Distance;
    dVar7 = param_1[iVar13].BaryCoords.field0_0x0._s_0.X;
    dVar8 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Y;
    pFVar1 = param_1 + iVar13;
    pFVar1->TriangleId = pFVar16->TriangleId;
    *(undefined4 *)&pFVar1->field_0x4 = uVar9;
    pFVar1->Distance = dVar5;
    dVar5 = param_1[iVar17].BaryCoords.field0_0x0._s_0.Y;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.X = param_1[iVar17].BaryCoords.field0_0x0._s_0.X;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.Y = dVar5;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.Z = param_1[iVar17].BaryCoords.field0_0x0._s_0.Z;
    pFVar16 = param_1 + iVar17;
    pFVar16->TriangleId = iVar10;
    *(undefined4 *)&pFVar16->field_0x4 = uVar11;
    pFVar16->Distance = dVar6;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.X = dVar7;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.Y = dVar8;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.Z = dVar3;
    iVar13 = iVar17;
  } while( true );
}

// IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>'::__l2::<lambda_1>_>_> @ 14343aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
          (FHitIntersectionResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_private:_bool___cdecl_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>(UE::Math::TRay<double>_const_&,TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>_&,UE::Geometry::IMeshSpatial::FQueryOptions_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FHitIntersectionResult *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  FHitIntersectionResult *pFVar10;
  int iVar11;
  FHitIntersectionResult *pFVar12;
  FHitIntersectionResult *pFVar13;
  FHitIntersectionResult *pFVar14;
  FHitIntersectionResult *pFVar15;
  FHitIntersectionResult *pFVar16;
  FHitIntersectionResult **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FHitIntersectionResult *local_348;
  FHitIntersectionResult *local_338;
  FHitIntersectionResult *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar13 = ppFVar17[1];
      pFVar12 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0x28) + 1;
      pFVar16 = pFVar12;
      if ((int)local_348 != 0) {
LAB_14343ab80:
        if (8 < iVar11) {
          uVar7 = *(undefined4 *)&pFVar16->field_0x4;
          dVar3 = pFVar16->Distance;
          pFVar10 = pFVar13 + 1;
          iVar11 = iVar11 / 2;
          pFVar12 = pFVar16 + iVar11;
          iVar8 = pFVar12->TriangleId;
          uVar9 = *(undefined4 *)&pFVar12->field_0x4;
          dVar4 = pFVar12->Distance;
          dVar5 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.X;
          dVar6 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Y;
          dVar2 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Z;
          pFVar12 = pFVar16 + iVar11;
          pFVar12->TriangleId = pFVar16->TriangleId;
          *(undefined4 *)&pFVar12->field_0x4 = uVar7;
          pFVar12->Distance = dVar3;
          dVar3 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.X = (pFVar16->BaryCoords).field0_0x0._s_0.X;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Y = dVar3;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Z = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
          pFVar16->TriangleId = iVar8;
          *(undefined4 *)&pFVar16->field_0x4 = uVar9;
          pFVar16->Distance = dVar4;
          (pFVar16->BaryCoords).field0_0x0._s_0.X = dVar5;
          (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar6;
          (pFVar16->BaryCoords).field0_0x0._s_0.Z = dVar2;
          pFVar12 = pFVar16;
LAB_14343abe0:
          pFVar14 = pFVar12;
          pFVar12 = pFVar14 + 1;
          if (pFVar12 <= pFVar13) goto code_r0x00014343abe9;
          goto LAB_14343abf7;
        }
        if (pFVar16 < pFVar13) {
          pFVar1 = pFVar16 + 1;
          do {
            pFVar12 = pFVar16;
            if (pFVar1 <= pFVar13) {
              pFVar10 = pFVar1;
              if (0x9f < (ulonglong)((longlong)pFVar13 + (0x28 - (longlong)pFVar1))) {
                do {
                  if (pFVar12->Distance < pFVar10->Distance) {
                    pFVar12 = pFVar10;
                  }
                  if (pFVar12->Distance <= pFVar10[1].Distance &&
                      pFVar10[1].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 1;
                  }
                  if (pFVar12->Distance <= pFVar10[2].Distance &&
                      pFVar10[2].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 2;
                  }
                  if (pFVar12->Distance <= pFVar10[3].Distance &&
                      pFVar10[3].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 3;
                  }
                  pFVar10 = pFVar10 + 4;
                } while (pFVar10 <= pFVar13 + -3);
              }
              for (; pFVar10 <= pFVar13; pFVar10 = pFVar10 + 1) {
                if (pFVar12->Distance < pFVar10->Distance) {
                  pFVar12 = pFVar10;
                }
              }
            }
            iVar11 = pFVar12->TriangleId;
            uVar9 = *(undefined4 *)&pFVar12->field_0x4;
            dVar3 = pFVar12->Distance;
            pFVar10 = pFVar13 + -1;
            dVar2 = (pFVar12->BaryCoords).field0_0x0._s_0.Z;
            dVar4 = (pFVar12->BaryCoords).field0_0x0._s_0.X;
            dVar5 = (pFVar12->BaryCoords).field0_0x0._s_0.Y;
            uVar7 = *(undefined4 *)&pFVar13->field_0x4;
            dVar6 = pFVar13->Distance;
            pFVar12->TriangleId = pFVar13->TriangleId;
            *(undefined4 *)&pFVar12->field_0x4 = uVar7;
            pFVar12->Distance = dVar6;
            dVar6 = (pFVar13->BaryCoords).field0_0x0._s_0.Y;
            (pFVar12->BaryCoords).field0_0x0._s_0.X = (pFVar13->BaryCoords).field0_0x0._s_0.X;
            (pFVar12->BaryCoords).field0_0x0._s_0.Y = dVar6;
            (pFVar12->BaryCoords).field0_0x0._s_0.Z = (pFVar13->BaryCoords).field0_0x0._s_0.Z;
            pFVar13->TriangleId = iVar11;
            *(undefined4 *)&pFVar13->field_0x4 = uVar9;
            pFVar13->Distance = dVar3;
            (pFVar13->BaryCoords).field0_0x0._s_0.X = dVar4;
            (pFVar13->BaryCoords).field0_0x0._s_0.Y = dVar5;
            (pFVar13->BaryCoords).field0_0x0._s_0.Z = dVar2;
            pFVar13 = pFVar10;
          } while (pFVar16 < pFVar10);
        }
        goto LAB_14343ad45;
      }
LAB_14343ad36:
      local_348 = pFVar1;
      HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
                (pFVar12,iVar11,param_3,param_4);
LAB_14343ad45:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014343abe9:
  if (pFVar14[1].Distance < pFVar16->Distance || pFVar14[1].Distance == pFVar16->Distance)
  goto LAB_14343abe0;
LAB_14343abf7:
  do {
    pFVar15 = pFVar10;
    pFVar10 = pFVar15 + -1;
    if (pFVar10 <= pFVar16) break;
  } while (pFVar16->Distance < pFVar15[-1].Distance || pFVar16->Distance == pFVar15[-1].Distance);
  dVar2 = pFVar15[-1].Distance;
  if (pFVar12 <= pFVar10) {
    iVar11 = pFVar12->TriangleId;
    uVar7 = *(undefined4 *)&pFVar12->field_0x4;
    dVar4 = pFVar14[1].Distance;
    dVar5 = pFVar14[1].BaryCoords.field0_0x0._s_0.X;
    dVar6 = pFVar14[1].BaryCoords.field0_0x0._s_0.Y;
    dVar3 = pFVar14[1].BaryCoords.field0_0x0._s_0.Z;
    *(undefined8 *)pFVar12 = *(undefined8 *)pFVar10;
    pFVar14[1].Distance = dVar2;
    dVar2 = pFVar15[-1].BaryCoords.field0_0x0._s_0.Y;
    pFVar14[1].BaryCoords.field0_0x0._s_0.X = pFVar15[-1].BaryCoords.field0_0x0._s_0.X;
    pFVar14[1].BaryCoords.field0_0x0._s_0.Y = dVar2;
    pFVar14[1].BaryCoords.field0_0x0._s_0.Z = pFVar15[-1].BaryCoords.field0_0x0._s_0.Z;
    pFVar10->TriangleId = iVar11;
    *(undefined4 *)&pFVar10->field_0x4 = uVar7;
    pFVar15[-1].Distance = dVar4;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.X = dVar5;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.Y = dVar6;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.Z = dVar3;
    goto LAB_14343abe0;
  }
  iVar11 = pFVar16->TriangleId;
  uVar7 = *(undefined4 *)&pFVar16->field_0x4;
  dVar4 = pFVar16->Distance;
  dVar5 = (pFVar16->BaryCoords).field0_0x0._s_0.X;
  dVar6 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
  local_348._0_4_ = (int)local_348 + -1;
  dVar3 = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar10;
  pFVar16->Distance = dVar2;
  dVar2 = pFVar15[-1].BaryCoords.field0_0x0._s_0.Y;
  (pFVar16->BaryCoords).field0_0x0._s_0.X = pFVar15[-1].BaryCoords.field0_0x0._s_0.X;
  (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar2;
  (pFVar16->BaryCoords).field0_0x0._s_0.Z = pFVar15[-1].BaryCoords.field0_0x0._s_0.Z;
  pFVar10->TriangleId = iVar11;
  *(undefined4 *)&pFVar10->field_0x4 = uVar7;
  pFVar15[-1].Distance = dVar4;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.X = dVar5;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.Y = dVar6;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.Z = dVar3;
  if (((longlong)pFVar10 + (-0x28 - (longlong)pFVar16)) / 0x28 <
      ((longlong)pFVar13 - (longlong)pFVar12) / 0x28) {
    if (pFVar12 < pFVar13) {
      *ppFVar17 = pFVar12;
      ppFVar17[1] = pFVar13;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar10 <= pFVar16 + 1) goto LAB_14343ad45;
    pFVar13 = pFVar15 + -2;
    pFVar12 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar10) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar12) goto LAB_14343ad45;
  }
  iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0x28) + 1;
  pFVar16 = pFVar12;
  if ((int)local_348 == 0) goto LAB_14343ad36;
  goto LAB_14343ab80;
}

// OrientTriEdgeAndFindOtherVtx<int,UE::Geometry::FIndex3i> @ 14343ae80

int __cdecl
IndexUtil::OrientTriEdgeAndFindOtherVtx<int,UE::Geometry::FIndex3i>
          (int *param_1,int *param_2,FIndex3i *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar4 = 0;
  iVar5 = 1;
  uVar6 = uVar4;
  while( true ) {
    iVar3 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                    (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    iVar1 = (param_3->field0_0x0).ABC[uVar4];
    iVar2 = (param_3->field0_0x0).ABC[iVar3];
    if (((*param_1 == iVar1) || (bVar7 = *param_1 == iVar2, iVar2 = iVar1, bVar7)) &&
       (*param_2 == iVar2)) break;
    uVar6 = (ulonglong)((int)uVar6 + 1);
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 + 1;
    if (2 < (longlong)uVar4) {
      return -1;
    }
  }
  *param_1 = iVar1;
  *param_2 = (param_3->field0_0x0).ABC[iVar3];
  iVar5 = (int)uVar6 + 2;
  return (param_3->field0_0x0).ABC
         [iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                  (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3];
}

// RecomputeEdgeData<`UE::Geometry::FDynamicMesh3::SerializeInternal<2>'::__l21::<lambda_1>,`UE::Geometry::FDynamicMesh3::SerializeInternal<2>'::__l21::<lambda_2>_> @ 14343b2b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::
RecomputeEdgeData<_UE::Geometry::FDynamicMesh3::SerializeInternal<2>_::__l21::<lambda_1>,_UE::Geometry::FDynamicMesh3::SerializeInternal<2>_::__l21::<lambda_2>_>
          (TDynamicVector<UE::Math::TVector<double>,512> *param_1,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_2,FRefCountVector *param_3,
          TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *param_4,FRefCountVector *param_5,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_6,FSmallListSet *param_7,
          <lambda_1> *param_8,<lambda_2> *param_9)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  FIndex3i_u_0 local_58 [2];
  
  UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TruncateBlocks(param_4,1,No)
  ;
  uVar11 = 0;
  param_4->CurBlock = 0;
  param_4->CurBlockUsed = 0;
  if ((param_4->Blocks).ArrayNum == 0) {
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(param_4)
    ;
  }
  UE::Geometry::FRefCountVector::Clear(param_5);
  UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Resize
            (param_6,param_2->CurBlock * 0x200 + param_2->CurBlockUsed);
  local_58[0]._0_8_ = 0xffffffffffffffff;
  local_58[0]._s_0.C = -1;
  UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Fill
            (param_6,(FIndex3i *)&local_58[0]._s_0);
  UE::Geometry::FSmallListSet::Reset(param_7);
  UE::Geometry::FSmallListSet::Resize(param_7,param_1->CurBlock * 0x200 + param_1->CurBlockUsed);
  uVar12 = (param_3->RefCounts).CurBlock * 0x200 + (param_3->RefCounts).CurBlockUsed;
  if ((uVar12 != 0) &&
     (pFVar6 = (param_3->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014343b3bb;
    do {
      sVar3 = *(short *)(*(longlong *)(pFVar6 + (uVar11 >> 9) * 8) +
                        (ulonglong)((uint)uVar11 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar12);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014343b3bb:
  do {
    if (uVar10 == uVar12) {
      return;
    }
    while( true ) {
      uVar10 = (uint)uVar11;
      lVar1 = (uVar11 >> 9) * 8;
      lVar2 = (ulonglong)(uVar10 & 0x1ff) * 0xc;
      piVar13 = (int *)(*(longlong *)((param_2->Blocks).AllocatorInstance.Data + lVar1) + lVar2);
      iVar4 = piVar13[1];
      iVar5 = *piVar13;
      uVar7 = UE::Geometry::FDynamicMesh3::FindEdge(param_8->__this,iVar5,iVar4);
      if (uVar7 == 0xffffffff) {
        uVar7 = UE::Geometry::FDynamicMesh3::AddEdgeInternal(param_9->__this,iVar5,iVar4,uVar10,-1);
      }
      else {
        *(uint *)(*(longlong *)
                   ((param_4->Blocks).AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar7 & 0x1ff) * 0x10) = uVar10;
      }
      iVar4 = piVar13[2];
      iVar5 = piVar13[1];
      uVar8 = UE::Geometry::FDynamicMesh3::FindEdge(param_8->__this,iVar5,iVar4);
      if (uVar8 == 0xffffffff) {
        uVar8 = UE::Geometry::FDynamicMesh3::AddEdgeInternal(param_9->__this,iVar5,iVar4,uVar10,-1);
      }
      else {
        *(uint *)(*(longlong *)
                   ((param_4->Blocks).AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar8 & 0x1ff) * 0x10) = uVar10;
      }
      iVar4 = *piVar13;
      iVar5 = piVar13[2];
      uVar9 = UE::Geometry::FDynamicMesh3::FindEdge(param_8->__this,iVar5,iVar4);
      if (uVar9 == 0xffffffff) {
        uVar9 = UE::Geometry::FDynamicMesh3::AddEdgeInternal(param_9->__this,iVar5,iVar4,uVar10,-1);
      }
      else {
        *(uint *)(*(longlong *)
                   ((param_4->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar9 & 0x1ff) * 0x10) = uVar10;
      }
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      lVar1 = *(longlong *)((param_6->Blocks).AllocatorInstance.Data + lVar1);
      *(uint *)(lVar1 + lVar2) = uVar7;
      *(uint *)(lVar1 + 4 + lVar2) = uVar8;
      *(uint *)(lVar1 + 8 + lVar2) = uVar9;
      if ((int)uVar12 <= (int)uVar10) break;
      pFVar6 = (param_3->RefCounts).Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (uVar11 >> 9) * 8;
        lVar2 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar2 + *(longlong *)(pFVar6 + lVar1)) != 0) &&
           (*(short *)(lVar2 + *(longlong *)(pFVar6 + lVar1)) != -1)) break;
        uVar10 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014343b3bb;
      }
    }
  } while( true );
}

// RecomputeEdgeData<`UE::Geometry::FDynamicMesh3::SerializeInternal<65538>'::__l41::<lambda_1>,`UE::Geometry::FDynamicMesh3::SerializeInternal<65538>'::__l41::<lambda_2>_> @ 14343b600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::
RecomputeEdgeData<_UE::Geometry::FDynamicMesh3::SerializeInternal<65538>_::__l41::<lambda_1>,_UE::Geometry::FDynamicMesh3::SerializeInternal<65538>_::__l41::<lambda_2>_>
          (TDynamicVector<UE::Math::TVector<double>,512> *param_1,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_2,FRefCountVector *param_3,
          TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *param_4,FRefCountVector *param_5,
          TDynamicVector<UE::Geometry::FIndex3i,512> *param_6,FSmallListSet *param_7,
          <lambda_1> *param_8,<lambda_2> *param_9)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  FIndex3i_u_0 local_58 [2];
  
  UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TruncateBlocks(param_4,1,No)
  ;
  uVar11 = 0;
  param_4->CurBlock = 0;
  param_4->CurBlockUsed = 0;
  if ((param_4->Blocks).ArrayNum == 0) {
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(param_4)
    ;
  }
  UE::Geometry::FRefCountVector::Clear(param_5);
  UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Resize
            (param_6,param_2->CurBlock * 0x200 + param_2->CurBlockUsed);
  local_58[0]._0_8_ = 0xffffffffffffffff;
  local_58[0]._s_0.C = -1;
  UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Fill
            (param_6,(FIndex3i *)&local_58[0]._s_0);
  UE::Geometry::FSmallListSet::Reset(param_7);
  UE::Geometry::FSmallListSet::Resize(param_7,param_1->CurBlock * 0x200 + param_1->CurBlockUsed);
  uVar12 = (param_3->RefCounts).CurBlock * 0x200 + (param_3->RefCounts).CurBlockUsed;
  if ((uVar12 != 0) &&
     (pFVar6 = (param_3->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014343b70b;
    do {
      sVar3 = *(short *)(*(longlong *)(pFVar6 + (uVar11 >> 9) * 8) +
                        (ulonglong)((uint)uVar11 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar12);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014343b70b:
  do {
    if (uVar10 == uVar12) {
      return;
    }
    while( true ) {
      uVar10 = (uint)uVar11;
      lVar1 = (uVar11 >> 9) * 8;
      lVar2 = (ulonglong)(uVar10 & 0x1ff) * 0xc;
      piVar13 = (int *)(*(longlong *)((param_2->Blocks).AllocatorInstance.Data + lVar1) + lVar2);
      iVar4 = piVar13[1];
      iVar5 = *piVar13;
      uVar7 = UE::Geometry::FDynamicMesh3::FindEdge(param_8->__this,iVar5,iVar4);
      if (uVar7 == 0xffffffff) {
        uVar7 = UE::Geometry::FDynamicMesh3::AddEdgeInternal(param_9->__this,iVar5,iVar4,uVar10,-1);
      }
      else {
        *(uint *)(*(longlong *)
                   ((param_4->Blocks).AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar7 & 0x1ff) * 0x10) = uVar10;
      }
      iVar4 = piVar13[2];
      iVar5 = piVar13[1];
      uVar8 = UE::Geometry::FDynamicMesh3::FindEdge(param_8->__this,iVar5,iVar4);
      if (uVar8 == 0xffffffff) {
        uVar8 = UE::Geometry::FDynamicMesh3::AddEdgeInternal(param_9->__this,iVar5,iVar4,uVar10,-1);
      }
      else {
        *(uint *)(*(longlong *)
                   ((param_4->Blocks).AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar8 & 0x1ff) * 0x10) = uVar10;
      }
      iVar4 = *piVar13;
      iVar5 = piVar13[2];
      uVar9 = UE::Geometry::FDynamicMesh3::FindEdge(param_8->__this,iVar5,iVar4);
      if (uVar9 == 0xffffffff) {
        uVar9 = UE::Geometry::FDynamicMesh3::AddEdgeInternal(param_9->__this,iVar5,iVar4,uVar10,-1);
      }
      else {
        *(uint *)(*(longlong *)
                   ((param_4->Blocks).AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) + 0xc +
                 (ulonglong)(uVar9 & 0x1ff) * 0x10) = uVar10;
      }
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      lVar1 = *(longlong *)((param_6->Blocks).AllocatorInstance.Data + lVar1);
      *(uint *)(lVar1 + lVar2) = uVar7;
      *(uint *)(lVar1 + 4 + lVar2) = uVar8;
      *(uint *)(lVar1 + 8 + lVar2) = uVar9;
      if ((int)uVar12 <= (int)uVar10) break;
      pFVar6 = (param_3->RefCounts).Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (uVar11 >> 9) * 8;
        lVar2 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar2 + *(longlong *)(pFVar6 + lVar1)) != 0) &&
           (*(short *)(lVar2 + *(longlong *)(pFVar6 + lVar1)) != -1)) break;
        uVar10 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014343b70b;
      }
    }
  } while( true );
}

// SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,int> @ 14344cff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
BoneAttributeHelpers::SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,int>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *param_3,
          TArrayView<int_const_,int> *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar8;
  undefined8 *puVar9;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar10;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar11;
  uint *puVar12;
  uint uVar13;
  longlong local_48;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>_>_>
  local_38 [2];
  
  if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
LAB_14344d1ce:
    pTVar10 = param_2->Ptr;
    if (pTVar10 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
      (**(code **)pTVar10->_padding_)(pTVar10,1);
    }
    return;
  }
  iVar2 = param_4->ArrayNum;
  if (iVar2 == 0) goto LAB_14344d1ce;
  pTVar8 = ::operator_new(0x28);
  pTVar11 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
  pTVar10 = pTVar11;
  if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0) {
    pTVar8->_padding_ = 0;
    pTVar8->_padding_ =
         (longlong)&___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__H_Geometry_UE__6B_;
    pTVar8->Parent = param_1;
    (pTVar8->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar8->AttribValues).ArrayNum = 0;
    (pTVar8->AttribValues).ArrayMax = 0;
    pTVar10 = pTVar8;
  }
  if (param_2 == local_38) {
    if (pTVar10 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
    goto LAB_14344d08d;
    puVar9 = (undefined8 *)pTVar10->_padding_;
  }
  else {
    pTVar8 = param_2->Ptr;
    param_2->Ptr = pTVar10;
    if (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0)
    goto LAB_14344d08d;
    puVar9 = (undefined8 *)pTVar8->_padding_;
    pTVar10 = pTVar8;
  }
  (*(code *)*puVar9)(pTVar10,1);
LAB_14344d08d:
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_2->Ptr->AttribValues,iVar2,Default);
  puVar12 = (uint *)param_4->DataPtr;
  puVar1 = puVar12 + iVar2;
  if (puVar12 == puVar1) {
    return;
  }
  local_48 = 0;
  while( true ) {
    uVar7 = *puVar12;
    pTVar10 = param_2->Ptr;
    uVar13 = (uint)pTVar11;
    uVar6 = 0;
    if ((int)uVar7 < (param_3->AttribValues).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar11 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)(ulonglong)(uVar13 + 1);
    uVar3 = *(undefined4 *)
             ((param_3->AttribValues).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
    uVar7 = 0;
    if ((int)uVar13 < (pTVar10->AttribValues).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    puVar12 = puVar12 + 1;
    *(undefined4 *)((pTVar10->AttribValues).AllocatorInstance.Data + local_48 * 4) = uVar3;
    local_48 = local_48 + 1;
    if (puVar12 == puVar1) {
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> @ 14344d1f0

void __cdecl
BoneAttributeHelpers::
SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                   *param_3,TArrayView<int_const_,int> *param_4)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar13;
  undefined8 *puVar14;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar15;
  longlong lVar16;
  uint *puVar17;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar18;
  uint uVar19;
  longlong local_a8;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>_>_>
  local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0) {
LAB_14344d464:
    pTVar15 = param_2->Ptr;
    if (pTVar15 !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                      *)0x0;
      (**(code **)pTVar15->_padding_)(pTVar15,1);
    }
    return;
  }
  iVar3 = param_4->ArrayNum;
  if (iVar3 == 0) goto LAB_14344d464;
  pTVar13 = ::operator_new(0x28);
  pTVar18 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)
            0x0;
  pTVar15 = pTVar18;
  if (pTVar13 !=
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0) {
    pTVar13->_padding_ = 0;
    pTVar13->Parent = param_1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TTransform_N_Math_3__Geometry_UE__6B_
    ;
    (pTVar13->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar13->AttribValues).ArrayNum = 0;
    (pTVar13->AttribValues).ArrayMax = 0;
    UE::Geometry::
    TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::Resize
              (pTVar13,0);
    pTVar15 = pTVar13;
  }
  if (param_2 == &local_88) {
    if (pTVar15 ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    goto LAB_14344d29c;
    puVar14 = (undefined8 *)pTVar15->_padding_;
  }
  else {
    pTVar13 = param_2->Ptr;
    param_2->Ptr = pTVar15;
    if (pTVar13 ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *)0x0)
    goto LAB_14344d29c;
    puVar14 = (undefined8 *)pTVar13->_padding_;
    pTVar15 = pTVar13;
  }
  (*(code *)*puVar14)(pTVar15,1);
LAB_14344d29c:
  UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
  ::Resize(param_2->Ptr,iVar3);
  puVar17 = (uint *)param_4->DataPtr;
  puVar1 = puVar17 + iVar3;
  if (puVar17 == puVar1) {
    return;
  }
  local_a8 = 0;
  while( true ) {
    uVar12 = *puVar17;
    pTVar15 = param_2->Ptr;
    uVar19 = (uint)pTVar18;
    uVar11 = 0;
    if ((int)uVar12 < (param_3->AttribValues).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar16 = (longlong)(int)uVar12 * 0x60;
    pTVar18 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
               *)(ulonglong)(uVar19 + 1);
    pFVar4 = (param_3->AttribValues).AllocatorInstance.Data;
    local_80 = *(undefined8 *)(pFVar4 + lVar16 + 0x10);
    uStack_78 = *(undefined8 *)(pFVar4 + lVar16 + 0x10 + 8);
    local_70 = *(undefined8 *)(pFVar4 + lVar16 + 0x20);
    uStack_68 = *(undefined8 *)(pFVar4 + lVar16 + 0x20 + 8);
    pFVar2 = pFVar4 + lVar16;
    uVar6 = *(undefined4 *)pFVar2;
    uVar7 = *(undefined4 *)(pFVar2 + 4);
    uVar8 = *(undefined4 *)(pFVar2 + 8);
    uVar9 = *(undefined4 *)(pFVar2 + 0xc);
    local_60 = *(undefined8 *)(pFVar4 + lVar16 + 0x30);
    uStack_58 = *(undefined8 *)(pFVar4 + lVar16 + 0x30 + 8);
    local_40 = *(undefined8 *)(pFVar4 + lVar16 + 0x50);
    uStack_38 = *(undefined8 *)(pFVar4 + lVar16 + 0x50 + 8);
    local_50 = *(undefined8 *)(pFVar4 + lVar16 + 0x40);
    uStack_48 = *(undefined8 *)(pFVar4 + lVar16 + 0x40 + 8);
    uVar12 = 0;
    if ((int)uVar19 < (pTVar15->AttribValues).ArrayNum) {
      uVar12 = ~uVar19 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    pFVar4 = (pTVar15->AttribValues).AllocatorInstance.Data;
    puVar17 = puVar17 + 1;
    lVar16 = local_a8 * 0x60;
    pFVar2 = pFVar4 + lVar16;
    *(undefined4 *)pFVar2 = uVar6;
    *(undefined4 *)(pFVar2 + 4) = uVar7;
    *(undefined4 *)(pFVar2 + 8) = uVar8;
    *(undefined4 *)(pFVar2 + 0xc) = uVar9;
    *(undefined8 *)(pFVar4 + lVar16 + 0x10) = local_80;
    *(undefined8 *)(pFVar4 + lVar16 + 0x10 + 8) = uStack_78;
    *(undefined8 *)(pFVar4 + lVar16 + 0x20) = local_70;
    *(undefined8 *)(pFVar4 + lVar16 + 0x20 + 8) = uStack_68;
    *(undefined8 *)(pFVar4 + lVar16 + 0x30) = local_60;
    *(undefined8 *)(pFVar4 + lVar16 + 0x30 + 8) = uStack_58;
    *(undefined8 *)(pFVar4 + lVar16 + 0x40) = local_50;
    *(undefined8 *)(pFVar4 + lVar16 + 0x40 + 8) = uStack_48;
    *(undefined8 *)(pFVar4 + lVar16 + 0x50) = local_40;
    *(undefined8 *)(pFVar4 + lVar16 + 0x50 + 8) = uStack_38;
    local_a8 = local_a8 + 1;
    if (puVar17 == puVar1) {
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> @ 14344d490

void __cdecl
BoneAttributeHelpers::
SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *param_3,TArrayView<int_const_,int> *param_4)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar8;
  undefined8 *puVar9;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar10;
  uint *puVar11;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar12;
  uint uVar13;
  longlong local_58;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>_>_>
  local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_3 ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
LAB_14344d686:
    pTVar10 = param_2->Ptr;
    if (pTVar10 !=
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0) {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                      *)0x0;
      (**(code **)pTVar10->_padding_)(pTVar10,1);
    }
    return;
  }
  iVar3 = param_4->ArrayNum;
  if (iVar3 == 0) goto LAB_14344d686;
  pTVar8 = ::operator_new(0x28);
  pTVar12 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0
  ;
  pTVar10 = pTVar12;
  if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0) {
    pTVar8->_padding_ = 0;
    pTVar8->Parent = param_1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__U__TVector4_M_Math_3__Geometry_UE__6B_
    ;
    (pTVar8->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar8->AttribValues).ArrayNum = 0;
    (pTVar8->AttribValues).ArrayMax = 0;
    UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
    ::Resize(pTVar8,0);
    pTVar10 = pTVar8;
  }
  if (param_2 == &local_48) {
    if (pTVar10 ==
        (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)0x0)
    goto LAB_14344d538;
    puVar9 = (undefined8 *)pTVar10->_padding_;
  }
  else {
    pTVar8 = param_2->Ptr;
    param_2->Ptr = pTVar10;
    if (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>
                   *)0x0) goto LAB_14344d538;
    puVar9 = (undefined8 *)pTVar8->_padding_;
    pTVar10 = pTVar8;
  }
  (*(code *)*puVar9)(pTVar10,1);
LAB_14344d538:
  UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
  Resize(param_2->Ptr,iVar3);
  puVar11 = (uint *)param_4->DataPtr;
  puVar1 = puVar11 + iVar3;
  if (puVar11 == puVar1) {
    return;
  }
  local_58 = 0;
  while( true ) {
    uVar7 = *puVar11;
    pTVar10 = param_2->Ptr;
    uVar13 = (uint)pTVar12;
    uVar6 = 0;
    if ((int)uVar7 < (param_3->AttribValues).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar12 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *)
              (ulonglong)(uVar13 + 1);
    pFVar2 = (param_3->AttribValues).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    local_40 = *(undefined4 *)pFVar2;
    uStack_3c = *(undefined4 *)(pFVar2 + 4);
    uStack_38 = *(undefined4 *)(pFVar2 + 8);
    uStack_34 = *(undefined4 *)(pFVar2 + 0xc);
    uVar7 = 0;
    if ((int)uVar13 < (pTVar10->AttribValues).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    puVar11 = puVar11 + 1;
    pFVar2 = (pTVar10->AttribValues).AllocatorInstance.Data + local_58 * 0x10;
    *(undefined4 *)pFVar2 = local_40;
    *(undefined4 *)(pFVar2 + 4) = uStack_3c;
    *(undefined4 *)(pFVar2 + 8) = uStack_38;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_34;
    local_58 = local_58 + 1;
    if (puVar11 == puVar1) {
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,FName> @ 14344d6b0

void __cdecl
BoneAttributeHelpers::SparseCopyBoneAttribute<UE::Geometry::FDynamicMesh3,FName>
          (FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
          *param_2,TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *param_3,
          TArrayView<int_const_,int> *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar8;
  undefined8 *puVar9;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar10;
  uint *puVar11;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar12;
  uint uVar13;
  longlong local_48;
  TUniquePtr<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>,TDefaultDelete<UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>_>_>
  local_38 [2];
  
  if (param_3 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
LAB_14344d883:
    pTVar10 = param_2->Ptr;
    if (pTVar10 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
      param_2->Ptr = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
      (**(code **)pTVar10->_padding_)(pTVar10,1);
    }
    return;
  }
  iVar2 = param_4->ArrayNum;
  if (iVar2 == 0) goto LAB_14344d883;
  pTVar8 = ::operator_new(0x28);
  pTVar12 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
  pTVar10 = pTVar12;
  if (pTVar8 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
    pTVar8->_padding_ = 0;
    pTVar8->Parent = param_1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TDynamicBoneAttributeBase_VFDynamicMesh3_Geometry_UE__VFName___Geometry_UE__6B_;
    (pTVar8->AttribValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar8->AttribValues).ArrayNum = 0;
    (pTVar8->AttribValues).ArrayMax = 0;
    UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Resize(pTVar8,0);
    pTVar10 = pTVar8;
  }
  if (param_2 == local_38) {
    if (pTVar10 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_14344d759;
    puVar9 = (undefined8 *)pTVar10->_padding_;
  }
  else {
    pTVar8 = param_2->Ptr;
    param_2->Ptr = pTVar10;
    if (pTVar8 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)
    goto LAB_14344d759;
    puVar9 = (undefined8 *)pTVar8->_padding_;
    pTVar10 = pTVar8;
  }
  (*(code *)*puVar9)(pTVar10,1);
LAB_14344d759:
  UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::Resize
            (param_2->Ptr,iVar2);
  puVar11 = (uint *)param_4->DataPtr;
  puVar1 = puVar11 + iVar2;
  if (puVar11 == puVar1) {
    return;
  }
  local_48 = 0;
  while( true ) {
    uVar7 = *puVar11;
    pTVar10 = param_2->Ptr;
    uVar13 = (uint)pTVar12;
    uVar6 = 0;
    if ((int)uVar7 < (param_3->AttribValues).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar12 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)
              (ulonglong)(uVar13 + 1);
    uVar3 = *(undefined8 *)
             ((param_3->AttribValues).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    uVar7 = 0;
    if ((int)uVar13 < (pTVar10->AttribValues).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    puVar11 = puVar11 + 1;
    *(undefined8 *)((pTVar10->AttribValues).AllocatorInstance.Data + local_48 * 8) = uVar3;
    local_48 = local_48 + 1;
    if (puVar11 == puVar1) {
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l2::<lambda_1>,0,0> @ 1434536b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l2::<lambda_1>,0,0> @ 1434536d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l2::<lambda_1>,0,0> @ 1434536f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,0,0> @ 143453790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMesh3::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,0,0> @ 1434537b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMeshChange::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0> @ 1434537d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeBoundaryEdgeMidpointsAdapter_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_1>,0,0> @ 1434537f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0> @ 143453810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeEdgeMidpointsAdapter_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_1>,0,0> @ 143453830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakePointsAdapter_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::__l2::<lambda_1>,0,1> @ 143453850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::Geometry::MakeTransformedDynamicMeshAdapter_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_1>,0,0> @ 143453870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeTriCentroidsAdapter_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_1>,0,0> @ 143453890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeVerticesAdapter_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0> @ 1434538b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMesh3::TrianglesItr_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__TrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_UFIndex3i_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0> @ 1434538d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMesh3::VtxVerticesItr_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,0,0> @ 1434538f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,0,0> @ 143453910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__UEBA_NPEBVFColliderMesh_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0> @ 143453930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeBoundaryEdgeMidpointsAdapter_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_2>,0,0> @ 143453950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0> @ 143453970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeEdgeMidpointsAdapter_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_2>,0,0> @ 143453990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakePointsAdapter_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_2>,0,0> @ 1434539b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeTriCentroidsAdapter_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_2>,0,0> @ 1434539d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeVerticesAdapter_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l5::<lambda_2>,0,0> @ 1434539f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMesh3::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`5'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,0,0> @ 143453b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMeshChange::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0> @ 143453b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeBoundaryEdgeMidpointsAdapter_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_3>,0,0> @ 143453bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0> @ 143453bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeEdgeMidpointsAdapter_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_3>,0,0> @ 143453bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakePointsAdapter_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_3>,0,0> @ 143453c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeTriCentroidsAdapter_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_3>,0,0> @ 143453c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeVerticesAdapter_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_3>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMesh3::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`9'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,0,0> @ 143453dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FDynamicMeshChange::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`9'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0> @ 143453df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeBoundaryEdgeMidpointsAdapter_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_4>,0,0> @ 143453e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0> @ 143453e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeEdgeMidpointsAdapter_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>,0,0> @ 143453e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakePointsAdapter_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>,0,0> @ 143453e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeTriCentroidsAdapter_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_4>,0,0> @ 143453e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeVerticesAdapter_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_5>,0,0> @ 143453eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_5>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_5>,0,0> @ 143453ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakePointsAdapter_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_5>,0,0> @ 143453ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeVerticesAdapter_::__l2::<lambda_5>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_5>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_6>,0,0> @ 143453f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_6>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_6>,0,0> @ 143453f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakePointsAdapter_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_6>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_6>,0,0> @ 143453f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeTriCentroidsAdapter_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_6>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_6>,0,0> @ 143453f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_6>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeVerticesAdapter_::__l2::<lambda_6>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_6>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_7>,0,0> @ 143453f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_7>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_7>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_7>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_8>,0,0> @ 143453fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_8>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_8>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_8>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_9>,0,0> @ 143453fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_9>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::MakeDynamicMeshAdapter_::__l2::<lambda_9>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_9>,0,0>::
        _vftable_;
  return;
}

// operator<< @ 1434560d0

FArchive * __cdecl operator<<(FArchive *param_1,FBoneWeight *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->BoneIndex);
    }
  }
  else {
    param_2->BoneIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->RawWeight;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator() @ 1434565b0

void __thiscall
``UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  longlong *plVar4;
  ForElementType<UE::Math::TVector<double>_> FVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector<double>_u_0 *pTVar15;
  longlong lVar16;
  int iVar17;
  ForElementType<UE::Geometry::FIndex3i> FVar18;
  ForElementType<UE::Math::TVector<double>_> FVar19;
  ForElementType<UE::Geometry::FIndex3i> FVar20;
  ulonglong uVar21;
  ForElementType<UE::Geometry::FIndex3i> FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  int local_218;
  int local_210;
  int iStack_20c;
  int local_208;
  int local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  FDynamicMesh3 *local_1c8;
  int local_1c0;
  int iStack_1bc;
  uint local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  int local_198;
  undefined8 local_190;
  int local_188;
  int aiStack_184 [4];
  int aiStack_174 [5];
  longlong local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  undefined1 local_128 [16];
  double dStack_118;
  TVector<double> local_110;
  TVector<double> local_f8;
  TVector<double> local_d8 [6];
  
  plVar4 = *(longlong **)this;
  uVar26 = (uint)~param_1 >> 0x1f;
  uVar14 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar14 = uVar26;
  }
  local_200 = param_1;
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar17 = local_200;
  lVar16 = *plVar4;
  lVar28 = (longlong)param_1;
  pdVar2 = (double *)(lVar16 + lVar28 * 0x18);
  dVar32 = *pdVar2;
  dVar35 = pdVar2[1];
  dVar41 = *(double *)(lVar16 + 0x10 + lVar28 * 0x18);
  local_158._s_0.Z = dVar41;
  if (0.0 <= dVar35 * dVar35 + dVar32 * dVar32 + dVar41 * dVar41) {
    local_1c8 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8);
    lVar16 = *(longlong *)
              ((local_1c8->Triangles).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8);
    local_190 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_188 = *(int *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    iVar3 = **(int **)((longlong)this + 0x10);
    if ((int)local_190 == iVar3) {
      local_218 = 0;
    }
    else if ((int)((ulonglong)local_190 >> 0x20) == iVar3) {
      local_218 = 1;
    }
    else {
      local_218 = -1;
      if (local_188 == iVar3) {
        local_218 = 2;
      }
    }
    uVar14 = param_1 * 3;
    uVar21 = (ulonglong)(uVar14 + 1 & 0x1ff);
    uVar25 = (ulonglong)(uVar14 + 1 >> 9);
    uVar23 = (ulonglong)(uVar14 + 2 & 0x1ff);
    uVar24 = (ulonglong)(uVar14 + 2 >> 9);
    lVar16 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x78);
    aiStack_184[1] =
         *(undefined4 *)
          (*(longlong *)(lVar16 + (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
    aiStack_184[2] = *(undefined4 *)(*(longlong *)(lVar16 + uVar25 * 8) + uVar21 * 4);
    aiStack_184[3] = *(undefined4 *)(*(longlong *)(lVar16 + uVar24 * 8) + uVar23 * 4);
    local_198 = aiStack_184[(longlong)local_218 + 1];
    local_160 = **(longlong **)((longlong)this + 0x20);
    lVar16 = *(longlong *)(local_160 + 0x78);
    aiStack_174[1] =
         *(int *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
    aiStack_174[2] = *(undefined4 *)(*(longlong *)(lVar16 + uVar25 * 8) + uVar21 * 4);
    aiStack_174[3] = *(undefined4 *)(*(longlong *)(lVar16 + uVar24 * 8) + uVar23 * 4);
    iVar3 = aiStack_184[(longlong)local_218 + 5];
    if (aiStack_174[1] < 0) {
      pTVar15 = &UE::Geometry::FDynamicMesh3::GetTriNormal(local_1c8,local_d8,local_200)->field0_0x0
      ;
    }
    else {
      uVar14 = iVar3 * 3;
      lVar16 = *(longlong *)(local_160 + 0x48);
      local_158._s_0.X =
           (double)*(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 >> 9) * 8) +
                             (ulonglong)(uVar14 & 0x1ff) * 4);
      pTVar15 = &local_158;
      local_158._s_0.Y =
           (double)*(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                             (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      local_158._s_0.Z =
           (double)*(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                             (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
    }
    local_140._s_0.X = (((TVector<double>_u_0 *)&(pTVar15->_s_0).X)->_s_0).X;
    local_140._s_0.Y = (pTVar15->_s_0).Y;
    local_140._s_0.Z = (pTVar15->_s_0).Z;
    local_1c8 = *(FDynamicMesh3 **)((longlong)this + 0x28);
    uVar14 = 0;
    if (iVar17 < (int)*(longlong *)((longlong)local_1c8 + 8)) {
      uVar14 = uVar26;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    PlaneProjectionNormalized
              ((TVector<double> *)&local_1f8._s_0,
               (TVector<double> *)(local_1c8->_padding_ + lVar28 * 0x18),
               (TVector<double> *)&local_140._s_0);
    local_1c8 = *(FDynamicMesh3 **)((longlong)this + 0x30);
    uVar14 = 0;
    if (iVar17 < (int)*(longlong *)((longlong)local_1c8 + 8)) {
      uVar14 = uVar26;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    PlaneProjectionNormalized
              ((TVector<double> *)&local_1e0._s_0,
               (TVector<double> *)(local_1c8->_padding_ + lVar28 * 0x18),
               (TVector<double> *)&local_140._s_0);
    dVar12 = __real_3ff0000000000000;
    local_1a0 = __real_3ff0000000000000;
    if (*(char *)(*(longlong *)((longlong)this + 0x38) + 1) != '\0') {
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),iVar17,
                 (TVector<double> *)local_128,&local_110,&local_f8);
      lVar28 = (longlong)local_218;
      iVar17 = local_218 + 1;
      lVar16 = (longlong)
               (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                         (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3);
      iVar17 = local_218 + 2;
      dVar43 = *(double *)(local_128 + lVar16 * 0x18) - *(double *)(local_128 + lVar28 * 0x18);
      dVar39 = *(double *)(local_128 + lVar16 * 0x18 + 8) -
               *(double *)(local_128 + lVar28 * 0x18 + 8);
      dVar42 = (&dStack_118)[lVar16 * 3] - (&dStack_118)[lVar28 * 3];
      lVar16 = (longlong)
               (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                         (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3);
      dVar44 = *(double *)(local_128 + lVar16 * 0x18) - *(double *)(local_128 + lVar28 * 0x18);
      dVar31 = *(double *)(local_128 + lVar16 * 0x18 + 8) -
               *(double *)(local_128 + lVar28 * 0x18 + 8);
      dVar40 = (&dStack_118)[lVar16 * 3] - (&dStack_118)[lVar28 * 3];
      auVar36._0_8_ = dVar40 * dVar40;
      auVar36._8_8_ = 0;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = dVar31 * dVar31 + dVar44 * dVar44 + auVar36._0_8_;
      auVar37 = sqrtpd(auVar36,auVar37);
      if (auVar37._0_8_ <= 0.0) {
        dVar31 = 0.0;
        dVar40 = 0.0;
        dVar44 = 0.0;
      }
      else {
        dVar30 = dVar12 / auVar37._0_8_;
        dVar31 = dVar31 * dVar30;
        dVar40 = dVar40 * dVar30;
        dVar44 = dVar44 * dVar30;
      }
      auVar38._0_8_ = dVar42 * dVar42;
      auVar38._8_8_ = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar43 * dVar43 + dVar39 * dVar39 + auVar38._0_8_;
      auVar37 = sqrtpd(auVar38,auVar9);
      if (auVar37._0_8_ <= 0.0) {
        dVar39 = 0.0;
        dVar42 = 0.0;
        dVar43 = 0.0;
      }
      else {
        dVar30 = dVar12 / auVar37._0_8_;
        dVar39 = dVar39 * dVar30;
        dVar42 = dVar42 * dVar30;
        dVar43 = dVar43 * dVar30;
      }
      dVar40 = dVar39 * dVar31 + dVar43 * dVar44 + dVar42 * dVar40;
      dVar31 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar40) && (dVar31 = dVar40, dVar12 <= dVar40)) {
        dVar31 = dVar12;
      }
      local_1a0 = acos(dVar31);
      local_1e0._s_0.X = local_1e0._s_0.X * local_1a0;
      local_1e0._s_0.Y = local_1e0._s_0.Y * local_1a0;
      local_1f8._s_0.X = local_1f8._s_0.X * local_1a0;
      local_1f8._s_0.Y = local_1f8._s_0.Y * local_1a0;
      local_1e0._s_0.Z = local_1e0._s_0.Z * local_1a0;
      local_1f8._s_0.Z = local_1f8._s_0.Z * local_1a0;
      dVar32 = dVar32 * local_1a0;
      dVar35 = dVar35 * local_1a0;
    }
    FVar22 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)this + 0x40);
    local_210 = local_198;
    local_208 = 1;
    if (dVar41 < 0.0) {
      local_208 = -1;
    }
    uVar14 = *(uint *)((longlong)FVar22 + 0x68);
    FVar20 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60);
    if (*(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60) ==
        (ForElementType<UE::Geometry::FIndex3i>)0x0) {
      FVar20 = FVar22;
    }
    for (FVar18 = FVar20; iStack_20c = iVar3, local_1b0 = dVar32, dStack_1a8 = dVar35,
        FVar18 != (ForElementType<UE::Geometry::FIndex3i>)
                  ((longlong)FVar20 + (longlong)(int)uVar14 * 0xc);
        FVar18 = (ForElementType<UE::Geometry::FIndex3i>)((longlong)FVar18 + 0xc)) {
      if (((*(int *)FVar18 == local_198) && (*(int *)((longlong)FVar18 + 4) == iVar3)) &&
         (*(int *)((longlong)FVar18 + 8) == local_208)) {
        lVar16 = ((longlong)FVar18 - (longlong)FVar20) / 6 +
                 ((longlong)FVar18 - (longlong)FVar20 >> 0x3f);
        uVar26 = (int)(lVar16 >> 1) - (int)(lVar16 >> 0x3f);
        if (uVar26 != 0xffffffff) {
          lVar16 = *(longlong *)((longlong)this + 0x48);
          uVar27 = ~uVar26 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar29 = (longlong)(int)uVar26;
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          dVar41 = *(double *)(lVar28 + lVar29 * 0x18);
          dVar32 = *(double *)(lVar28 + 8 + lVar29 * 0x18);
          dVar35 = *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          auVar33._0_8_ = dVar41 * dVar41;
          auVar33._8_8_ = 0;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = dVar32 * dVar32 + auVar33._0_8_ + dVar35 * dVar35;
          auVar37 = sqrtpd(auVar33,auVar10);
          if (auVar37._0_8_ <= 0.0) {
            dVar32 = 0.0;
            dVar35 = 0.0;
            dVar31 = 0.0;
          }
          else {
            dVar31 = dVar12 / auVar37._0_8_;
            dVar32 = dVar31 * dVar32;
            dVar35 = dVar31 * dVar35;
            dVar31 = dVar31 * dVar41;
          }
          dVar31 = dVar31 * local_1f8._s_0.X;
          lVar16 = *(longlong *)((longlong)this + 0x50);
          dVar32 = dVar32 * local_1f8._s_0.Y;
          dVar35 = dVar35 * local_1f8._s_0.Z;
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          dVar41 = *(double *)(lVar28 + lVar29 * 0x18);
          dVar40 = *(double *)(lVar28 + 8 + lVar29 * 0x18);
          dVar44 = *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          auVar34._0_8_ = dVar41 * dVar41;
          auVar34._8_8_ = 0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = dVar40 * dVar40 + auVar34._0_8_ + dVar44 * dVar44;
          auVar37 = sqrtpd(auVar34,auVar11);
          if (auVar37._0_8_ <= 0.0) {
            dVar40 = 0.0;
            dVar44 = 0.0;
            dVar41 = 0.0;
          }
          else {
            dVar12 = dVar12 / auVar37._0_8_;
            dVar40 = dVar40 * dVar12;
            dVar44 = dVar44 * dVar12;
            dVar41 = dVar41 * dVar12;
          }
          if ((dVar31 + dVar32 + dVar35 <= **(double **)((longlong)this + 0x60)) ||
             (dVar41 * local_1e0._s_0.X + dVar40 * local_1e0._s_0.Y + dVar44 * local_1e0._s_0.Z <=
              **(double **)((longlong)this + 0x60))) {
            FVar22 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)this + 0x40);
            uVar14 = *(uint *)((longlong)FVar22 + 0x68);
            FVar20 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60);
            if (*(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60) ==
                (ForElementType<UE::Geometry::FIndex3i>)0x0) {
              FVar20 = FVar22;
            }
            uVar26 = uVar14;
            if ((&local_210 < (ulonglong)FVar20) ||
               ((int *)((longlong)FVar20 + (longlong)*(int *)((longlong)FVar22 + 0x6c) * 0xc) <=
                &local_210)) goto LAB_143456c2b;
            goto LAB_143456bfb;
          }
          lVar16 = *(longlong *)((longlong)this + 0x40);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 0x68)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0x60);
          if (*(longlong *)(lVar16 + 0x60) == 0) {
            lVar28 = lVar16;
          }
          if ((((*(int *)(lVar28 + lVar29 * 0xc) != local_210) ||
               (*(int *)(lVar28 + 4 + lVar29 * 0xc) != iStack_20c)) ||
              (*(int *)(lVar28 + 8 + lVar29 * 0xc) != local_208)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Uniques[FoundIndex] == Key",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshTangents.cpp"
                                  ,0x21b,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar16 = *(longlong *)((longlong)this + 0x48);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          *(double *)(lVar28 + lVar29 * 0x18) =
               local_1f8._s_0.X + *(double *)(lVar28 + lVar29 * 0x18);
          *(double *)(lVar28 + 8 + lVar29 * 0x18) =
               local_1f8._s_0.Y + *(double *)(lVar28 + 8 + lVar29 * 0x18);
          *(double *)(lVar28 + 0x10 + lVar29 * 0x18) =
               local_1f8._s_0.Z + *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          lVar16 = *(longlong *)((longlong)this + 0x50);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          *(double *)(lVar28 + lVar29 * 0x18) =
               local_1e0._s_0.X + *(double *)(lVar28 + lVar29 * 0x18);
          *(double *)(lVar28 + 8 + lVar29 * 0x18) =
               local_1e0._s_0.Y + *(double *)(lVar28 + 8 + lVar29 * 0x18);
          *(double *)(lVar28 + 0x10 + lVar29 * 0x18) =
               local_1e0._s_0.Z + *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          lVar16 = *(longlong *)((longlong)this + 0x58);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          *(double *)(lVar28 + lVar29 * 0x18) = local_1b0 + *(double *)(lVar28 + lVar29 * 0x18);
          *(double *)(lVar28 + 8 + lVar29 * 0x18) =
               dStack_1a8 + *(double *)(lVar28 + 8 + lVar29 * 0x18);
          *(double *)(lVar28 + 0x10 + lVar29 * 0x18) =
               local_1a0 + *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          goto LAB_143456ee2;
        }
        break;
      }
    }
    uVar26 = uVar14;
    if (((ulonglong)FVar20 <= &local_210) &&
       (&local_210 < (int *)((longlong)FVar20 + (longlong)*(int *)((longlong)FVar22 + 0x6c) * 0xc)))
    {
LAB_143456bfb:
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      uVar26 = uVar14;
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
LAB_143456c2b:
    iVar17 = *(int *)((ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x68))->
                     InlineData;
    if (iVar17 == *(int *)((longlong)FVar22 + 0x6c)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FIndex3i>_>
                         (0x40c,(ForElementType<UE::Geometry::FIndex3i> *)FVar22,
                          (int *)((longlong)FVar22 + 0x6c));
    }
    *(int *)((ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x68))->InlineData =
         iVar17 + 1;
    FVar20 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60);
    if (*(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60) ==
        (ForElementType<UE::Geometry::FIndex3i>)0x0) {
      FVar20 = FVar22;
    }
    *(ulonglong *)((longlong)FVar20 + (longlong)iVar17 * 0xc) = CONCAT44(iStack_20c,local_210);
    *(int *)((longlong)FVar20 + 8 + (longlong)iVar17 * 0xc) = local_208;
    FVar5 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)this + 0x48);
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    if ((((ulonglong)FVar19 <= &local_1f8) &&
        (&local_1f8 <
         (TVector<double>_u_0 *)
         ((longlong)FVar19 + (longlong)*(int *)((longlong)FVar5 + 0xcc) * 0x18))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)((longlong)FVar5 + 200);
    if (iVar17 == *(int *)((longlong)FVar5 + 0xcc)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,(ForElementType<UE::Math::TVector<double>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0xcc));
    }
    *(int *)((longlong)FVar5 + 200) = iVar17 + 1;
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    pdVar2 = (double *)((longlong)FVar19 + (longlong)iVar17 * 0x18);
    *pdVar2 = local_1f8._s_0.X;
    pdVar2[1] = local_1f8._s_0.Y;
    *(double *)((longlong)FVar19 + 0x10 + (longlong)iVar17 * 0x18) = local_1f8._s_0.Z;
    FVar5 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)this + 0x50);
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    if ((((ulonglong)FVar19 <= &local_1e0) &&
        (&local_1e0 <
         (TVector<double>_u_0 *)
         ((longlong)FVar19 + (longlong)*(int *)((longlong)FVar5 + 0xcc) * 0x18))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)((longlong)FVar5 + 200);
    if (iVar17 == *(int *)((longlong)FVar5 + 0xcc)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,(ForElementType<UE::Math::TVector<double>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0xcc));
    }
    *(int *)((longlong)FVar5 + 200) = iVar17 + 1;
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    pdVar2 = (double *)((longlong)FVar19 + (longlong)iVar17 * 0x18);
    *pdVar2 = local_1e0._s_0.X;
    pdVar2[1] = local_1e0._s_0.Y;
    *(double *)((longlong)FVar19 + 0x10 + (longlong)iVar17 * 0x18) = local_1e0._s_0.Z;
    FVar5 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)this + 0x58);
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    if ((((ulonglong)FVar19 <= &local_1b0) &&
        (&local_1b0 <
         (double *)((longlong)FVar19 + (longlong)*(int *)((longlong)FVar5 + 0xcc) * 0x18))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)((longlong)FVar5 + 200);
    if (iVar17 == *(int *)((longlong)FVar5 + 0xcc)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,(ForElementType<UE::Math::TVector<double>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0xcc));
    }
    *(int *)((longlong)FVar5 + 200) = iVar17 + 1;
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    pdVar2 = (double *)((longlong)FVar19 + (longlong)iVar17 * 0x18);
    *pdVar2 = local_1b0;
    pdVar2[1] = dStack_1a8;
    *(double *)((longlong)FVar19 + 0x10 + (longlong)iVar17 * 0x18) = local_1a0;
LAB_143456ee2:
    pFVar6 = *(ForAnyElementType **)((longlong)this + 0x68);
    local_1c0 = local_200;
    iStack_1bc = local_218;
    local_1b8 = uVar26;
    if (((pFVar6->Data <= (FScriptContainerElement *)&local_1c0) &&
        ((FScriptContainerElement *)&local_1c0 <
         pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0xc)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)&pFVar6[1].Data;
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,pFVar6,piVar1);
    }
    *(int *)&pFVar6[1].Data = iVar17 + 1;
    pFVar7 = pFVar6->Data;
    *(ulonglong *)(pFVar7 + (longlong)iVar17 * 0xc) = CONCAT44(iStack_1bc,local_1c0);
    *(uint *)(pFVar7 + (longlong)iVar17 * 0xc + 8) = local_1b8;
  }
  return;
}

// operator() @ 143457460

void __thiscall
``UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  longlong *plVar4;
  ForElementType<UE::Math::TVector<double>_> FVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector<double>_u_0 *pTVar15;
  longlong lVar16;
  int iVar17;
  ForElementType<UE::Geometry::FIndex3i> FVar18;
  ForElementType<UE::Math::TVector<double>_> FVar19;
  ForElementType<UE::Geometry::FIndex3i> FVar20;
  ulonglong uVar21;
  ForElementType<UE::Geometry::FIndex3i> FVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  int local_218;
  int local_210;
  int iStack_20c;
  int local_208;
  int local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  FDynamicMesh3 *local_1c8;
  int local_1c0;
  int iStack_1bc;
  uint local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  int local_198;
  undefined8 local_190;
  int local_188;
  int aiStack_184 [4];
  int aiStack_174 [5];
  longlong local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  undefined1 local_128 [16];
  double dStack_118;
  TVector<double> local_110;
  TVector<double> local_f8;
  TVector<double> local_d8 [6];
  
  plVar4 = *(longlong **)this;
  uVar26 = (uint)~param_1 >> 0x1f;
  uVar14 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar14 = uVar26;
  }
  local_200 = param_1;
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar17 = local_200;
  lVar16 = *plVar4;
  lVar28 = (longlong)param_1;
  pdVar2 = (double *)(lVar16 + lVar28 * 0x18);
  dVar32 = *pdVar2;
  dVar35 = pdVar2[1];
  dVar41 = *(double *)(lVar16 + 0x10 + lVar28 * 0x18);
  local_158._s_0.Z = dVar41;
  if (0.0 <= dVar35 * dVar35 + dVar32 * dVar32 + dVar41 * dVar41) {
    local_1c8 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8);
    lVar16 = *(longlong *)
              ((local_1c8->Triangles).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8);
    local_190 = *(undefined8 *)(lVar16 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_188 = *(int *)(lVar16 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    iVar3 = **(int **)((longlong)this + 0x10);
    if ((int)local_190 == iVar3) {
      local_218 = 0;
    }
    else if ((int)((ulonglong)local_190 >> 0x20) == iVar3) {
      local_218 = 1;
    }
    else {
      local_218 = -1;
      if (local_188 == iVar3) {
        local_218 = 2;
      }
    }
    uVar14 = param_1 * 3;
    uVar21 = (ulonglong)(uVar14 + 1 & 0x1ff);
    uVar25 = (ulonglong)(uVar14 + 1 >> 9);
    uVar23 = (ulonglong)(uVar14 + 2 & 0x1ff);
    uVar24 = (ulonglong)(uVar14 + 2 >> 9);
    lVar16 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x78);
    aiStack_184[1] =
         *(undefined4 *)
          (*(longlong *)(lVar16 + (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
    aiStack_184[2] = *(undefined4 *)(*(longlong *)(lVar16 + uVar25 * 8) + uVar21 * 4);
    aiStack_184[3] = *(undefined4 *)(*(longlong *)(lVar16 + uVar24 * 8) + uVar23 * 4);
    local_198 = aiStack_184[(longlong)local_218 + 1];
    local_160 = **(longlong **)((longlong)this + 0x20);
    lVar16 = *(longlong *)(local_160 + 0x78);
    aiStack_174[1] =
         *(int *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
    aiStack_174[2] = *(undefined4 *)(*(longlong *)(lVar16 + uVar25 * 8) + uVar21 * 4);
    aiStack_174[3] = *(undefined4 *)(*(longlong *)(lVar16 + uVar24 * 8) + uVar23 * 4);
    iVar3 = aiStack_184[(longlong)local_218 + 5];
    if (aiStack_174[1] < 0) {
      pTVar15 = &UE::Geometry::FDynamicMesh3::GetTriNormal(local_1c8,local_d8,local_200)->field0_0x0
      ;
    }
    else {
      uVar14 = iVar3 * 3;
      lVar16 = *(longlong *)(local_160 + 0x48);
      local_158._s_0.X =
           (double)*(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 >> 9) * 8) +
                             (ulonglong)(uVar14 & 0x1ff) * 4);
      pTVar15 = &local_158;
      local_158._s_0.Y =
           (double)*(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                             (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      local_158._s_0.Z =
           (double)*(float *)(*(longlong *)(lVar16 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                             (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
    }
    local_140._s_0.X = (((TVector<double>_u_0 *)&(pTVar15->_s_0).X)->_s_0).X;
    local_140._s_0.Y = (pTVar15->_s_0).Y;
    local_140._s_0.Z = (pTVar15->_s_0).Z;
    local_1c8 = *(FDynamicMesh3 **)((longlong)this + 0x28);
    uVar14 = 0;
    if (iVar17 < (int)*(longlong *)((longlong)local_1c8 + 8)) {
      uVar14 = uVar26;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    PlaneProjectionNormalized
              ((TVector<double> *)&local_1f8._s_0,
               (TVector<double> *)(local_1c8->_padding_ + lVar28 * 0x18),
               (TVector<double> *)&local_140._s_0);
    local_1c8 = *(FDynamicMesh3 **)((longlong)this + 0x30);
    uVar14 = 0;
    if (iVar17 < (int)*(longlong *)((longlong)local_1c8 + 8)) {
      uVar14 = uVar26;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    PlaneProjectionNormalized
              ((TVector<double> *)&local_1e0._s_0,
               (TVector<double> *)(local_1c8->_padding_ + lVar28 * 0x18),
               (TVector<double> *)&local_140._s_0);
    dVar12 = __real_3ff0000000000000;
    local_1a0 = __real_3ff0000000000000;
    if (*(char *)(*(longlong *)((longlong)this + 0x38) + 1) != '\0') {
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),iVar17,
                 (TVector<double> *)local_128,&local_110,&local_f8);
      lVar28 = (longlong)local_218;
      iVar17 = local_218 + 1;
      lVar16 = (longlong)
               (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                         (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3);
      iVar17 = local_218 + 2;
      dVar43 = *(double *)(local_128 + lVar16 * 0x18) - *(double *)(local_128 + lVar28 * 0x18);
      dVar39 = *(double *)(local_128 + lVar16 * 0x18 + 8) -
               *(double *)(local_128 + lVar28 * 0x18 + 8);
      dVar42 = (&dStack_118)[lVar16 * 3] - (&dStack_118)[lVar28 * 3];
      lVar16 = (longlong)
               (iVar17 + (iVar17 / 3 + (iVar17 >> 0x1f) +
                         (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3);
      dVar44 = *(double *)(local_128 + lVar16 * 0x18) - *(double *)(local_128 + lVar28 * 0x18);
      dVar31 = *(double *)(local_128 + lVar16 * 0x18 + 8) -
               *(double *)(local_128 + lVar28 * 0x18 + 8);
      dVar40 = (&dStack_118)[lVar16 * 3] - (&dStack_118)[lVar28 * 3];
      auVar36._0_8_ = dVar40 * dVar40;
      auVar36._8_8_ = 0;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = dVar31 * dVar31 + dVar44 * dVar44 + auVar36._0_8_;
      auVar37 = sqrtpd(auVar36,auVar37);
      if (auVar37._0_8_ <= 0.0) {
        dVar31 = 0.0;
        dVar40 = 0.0;
        dVar44 = 0.0;
      }
      else {
        dVar30 = dVar12 / auVar37._0_8_;
        dVar31 = dVar31 * dVar30;
        dVar40 = dVar40 * dVar30;
        dVar44 = dVar44 * dVar30;
      }
      auVar38._0_8_ = dVar42 * dVar42;
      auVar38._8_8_ = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar43 * dVar43 + dVar39 * dVar39 + auVar38._0_8_;
      auVar37 = sqrtpd(auVar38,auVar9);
      if (auVar37._0_8_ <= 0.0) {
        dVar39 = 0.0;
        dVar42 = 0.0;
        dVar43 = 0.0;
      }
      else {
        dVar30 = dVar12 / auVar37._0_8_;
        dVar39 = dVar39 * dVar30;
        dVar42 = dVar42 * dVar30;
        dVar43 = dVar43 * dVar30;
      }
      dVar40 = dVar39 * dVar31 + dVar43 * dVar44 + dVar42 * dVar40;
      dVar31 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar40) && (dVar31 = dVar40, dVar12 <= dVar40)) {
        dVar31 = dVar12;
      }
      local_1a0 = acos(dVar31);
      local_1e0._s_0.X = local_1e0._s_0.X * local_1a0;
      local_1e0._s_0.Y = local_1e0._s_0.Y * local_1a0;
      local_1f8._s_0.X = local_1f8._s_0.X * local_1a0;
      local_1f8._s_0.Y = local_1f8._s_0.Y * local_1a0;
      local_1e0._s_0.Z = local_1e0._s_0.Z * local_1a0;
      local_1f8._s_0.Z = local_1f8._s_0.Z * local_1a0;
      dVar32 = dVar32 * local_1a0;
      dVar35 = dVar35 * local_1a0;
    }
    FVar22 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)this + 0x40);
    local_210 = local_198;
    local_208 = 1;
    if (dVar41 < 0.0) {
      local_208 = -1;
    }
    uVar14 = *(uint *)((longlong)FVar22 + 0x68);
    FVar20 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60);
    if (*(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60) ==
        (ForElementType<UE::Geometry::FIndex3i>)0x0) {
      FVar20 = FVar22;
    }
    for (FVar18 = FVar20; iStack_20c = iVar3, local_1b0 = dVar32, dStack_1a8 = dVar35,
        FVar18 != (ForElementType<UE::Geometry::FIndex3i>)
                  ((longlong)FVar20 + (longlong)(int)uVar14 * 0xc);
        FVar18 = (ForElementType<UE::Geometry::FIndex3i>)((longlong)FVar18 + 0xc)) {
      if (((*(int *)FVar18 == local_198) && (*(int *)((longlong)FVar18 + 4) == iVar3)) &&
         (*(int *)((longlong)FVar18 + 8) == local_208)) {
        lVar16 = ((longlong)FVar18 - (longlong)FVar20) / 6 +
                 ((longlong)FVar18 - (longlong)FVar20 >> 0x3f);
        uVar26 = (int)(lVar16 >> 1) - (int)(lVar16 >> 0x3f);
        if (uVar26 != 0xffffffff) {
          lVar16 = *(longlong *)((longlong)this + 0x48);
          uVar27 = ~uVar26 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar29 = (longlong)(int)uVar26;
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          dVar41 = *(double *)(lVar28 + lVar29 * 0x18);
          dVar32 = *(double *)(lVar28 + 8 + lVar29 * 0x18);
          dVar35 = *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          auVar33._0_8_ = dVar41 * dVar41;
          auVar33._8_8_ = 0;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = dVar32 * dVar32 + auVar33._0_8_ + dVar35 * dVar35;
          auVar37 = sqrtpd(auVar33,auVar10);
          if (auVar37._0_8_ <= 0.0) {
            dVar32 = 0.0;
            dVar35 = 0.0;
            dVar31 = 0.0;
          }
          else {
            dVar31 = dVar12 / auVar37._0_8_;
            dVar32 = dVar31 * dVar32;
            dVar35 = dVar31 * dVar35;
            dVar31 = dVar31 * dVar41;
          }
          dVar31 = dVar31 * local_1f8._s_0.X;
          lVar16 = *(longlong *)((longlong)this + 0x50);
          dVar32 = dVar32 * local_1f8._s_0.Y;
          dVar35 = dVar35 * local_1f8._s_0.Z;
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          dVar41 = *(double *)(lVar28 + lVar29 * 0x18);
          dVar40 = *(double *)(lVar28 + 8 + lVar29 * 0x18);
          dVar44 = *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          auVar34._0_8_ = dVar41 * dVar41;
          auVar34._8_8_ = 0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = dVar40 * dVar40 + auVar34._0_8_ + dVar44 * dVar44;
          auVar37 = sqrtpd(auVar34,auVar11);
          if (auVar37._0_8_ <= 0.0) {
            dVar40 = 0.0;
            dVar44 = 0.0;
            dVar41 = 0.0;
          }
          else {
            dVar12 = dVar12 / auVar37._0_8_;
            dVar40 = dVar40 * dVar12;
            dVar44 = dVar44 * dVar12;
            dVar41 = dVar41 * dVar12;
          }
          if ((dVar31 + dVar32 + dVar35 <= **(double **)((longlong)this + 0x60)) ||
             (dVar41 * local_1e0._s_0.X + dVar40 * local_1e0._s_0.Y + dVar44 * local_1e0._s_0.Z <=
              **(double **)((longlong)this + 0x60))) {
            FVar22 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)this + 0x40);
            uVar14 = *(uint *)((longlong)FVar22 + 0x68);
            FVar20 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60);
            if (*(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60) ==
                (ForElementType<UE::Geometry::FIndex3i>)0x0) {
              FVar20 = FVar22;
            }
            uVar26 = uVar14;
            if ((&local_210 < (ulonglong)FVar20) ||
               ((int *)((longlong)FVar20 + (longlong)*(int *)((longlong)FVar22 + 0x6c) * 0xc) <=
                &local_210)) goto LAB_143457adb;
            goto LAB_143457aab;
          }
          lVar16 = *(longlong *)((longlong)this + 0x40);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 0x68)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0x60);
          if (*(longlong *)(lVar16 + 0x60) == 0) {
            lVar28 = lVar16;
          }
          if ((((*(int *)(lVar28 + lVar29 * 0xc) != local_210) ||
               (*(int *)(lVar28 + 4 + lVar29 * 0xc) != iStack_20c)) ||
              (*(int *)(lVar28 + 8 + lVar29 * 0xc) != local_208)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Uniques[FoundIndex] == Key",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshTangents.cpp"
                                  ,0x21b,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar16 = *(longlong *)((longlong)this + 0x48);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          *(double *)(lVar28 + lVar29 * 0x18) =
               local_1f8._s_0.X + *(double *)(lVar28 + lVar29 * 0x18);
          *(double *)(lVar28 + 8 + lVar29 * 0x18) =
               local_1f8._s_0.Y + *(double *)(lVar28 + 8 + lVar29 * 0x18);
          *(double *)(lVar28 + 0x10 + lVar29 * 0x18) =
               local_1f8._s_0.Z + *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          lVar16 = *(longlong *)((longlong)this + 0x50);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          *(double *)(lVar28 + lVar29 * 0x18) =
               local_1e0._s_0.X + *(double *)(lVar28 + lVar29 * 0x18);
          *(double *)(lVar28 + 8 + lVar29 * 0x18) =
               local_1e0._s_0.Y + *(double *)(lVar28 + 8 + lVar29 * 0x18);
          *(double *)(lVar28 + 0x10 + lVar29 * 0x18) =
               local_1e0._s_0.Z + *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          lVar16 = *(longlong *)((longlong)this + 0x58);
          uVar14 = 0;
          if ((int)uVar26 < *(int *)(lVar16 + 200)) {
            uVar14 = uVar27;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar28 = *(longlong *)(lVar16 + 0xc0);
          if (*(longlong *)(lVar16 + 0xc0) == 0) {
            lVar28 = lVar16;
          }
          *(double *)(lVar28 + lVar29 * 0x18) = local_1b0 + *(double *)(lVar28 + lVar29 * 0x18);
          *(double *)(lVar28 + 8 + lVar29 * 0x18) =
               dStack_1a8 + *(double *)(lVar28 + 8 + lVar29 * 0x18);
          *(double *)(lVar28 + 0x10 + lVar29 * 0x18) =
               local_1a0 + *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
          goto LAB_143457d92;
        }
        break;
      }
    }
    uVar26 = uVar14;
    if (((ulonglong)FVar20 <= &local_210) &&
       (&local_210 < (int *)((longlong)FVar20 + (longlong)*(int *)((longlong)FVar22 + 0x6c) * 0xc)))
    {
LAB_143457aab:
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      uVar26 = uVar14;
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
LAB_143457adb:
    iVar17 = *(int *)((ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x68))->
                     InlineData;
    if (iVar17 == *(int *)((longlong)FVar22 + 0x6c)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FIndex3i>_>
                         (0x40c,(ForElementType<UE::Geometry::FIndex3i> *)FVar22,
                          (int *)((longlong)FVar22 + 0x6c));
    }
    *(int *)((ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x68))->InlineData =
         iVar17 + 1;
    FVar20 = *(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60);
    if (*(ForElementType<UE::Geometry::FIndex3i> *)((longlong)FVar22 + 0x60) ==
        (ForElementType<UE::Geometry::FIndex3i>)0x0) {
      FVar20 = FVar22;
    }
    *(ulonglong *)((longlong)FVar20 + (longlong)iVar17 * 0xc) = CONCAT44(iStack_20c,local_210);
    *(int *)((longlong)FVar20 + 8 + (longlong)iVar17 * 0xc) = local_208;
    FVar5 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)this + 0x48);
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    if ((((ulonglong)FVar19 <= &local_1f8) &&
        (&local_1f8 <
         (TVector<double>_u_0 *)
         ((longlong)FVar19 + (longlong)*(int *)((longlong)FVar5 + 0xcc) * 0x18))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)((longlong)FVar5 + 200);
    if (iVar17 == *(int *)((longlong)FVar5 + 0xcc)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,(ForElementType<UE::Math::TVector<double>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0xcc));
    }
    *(int *)((longlong)FVar5 + 200) = iVar17 + 1;
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    pdVar2 = (double *)((longlong)FVar19 + (longlong)iVar17 * 0x18);
    *pdVar2 = local_1f8._s_0.X;
    pdVar2[1] = local_1f8._s_0.Y;
    *(double *)((longlong)FVar19 + 0x10 + (longlong)iVar17 * 0x18) = local_1f8._s_0.Z;
    FVar5 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)this + 0x50);
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    if ((((ulonglong)FVar19 <= &local_1e0) &&
        (&local_1e0 <
         (TVector<double>_u_0 *)
         ((longlong)FVar19 + (longlong)*(int *)((longlong)FVar5 + 0xcc) * 0x18))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)((longlong)FVar5 + 200);
    if (iVar17 == *(int *)((longlong)FVar5 + 0xcc)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,(ForElementType<UE::Math::TVector<double>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0xcc));
    }
    *(int *)((longlong)FVar5 + 200) = iVar17 + 1;
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    pdVar2 = (double *)((longlong)FVar19 + (longlong)iVar17 * 0x18);
    *pdVar2 = local_1e0._s_0.X;
    pdVar2[1] = local_1e0._s_0.Y;
    *(double *)((longlong)FVar19 + 0x10 + (longlong)iVar17 * 0x18) = local_1e0._s_0.Z;
    FVar5 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)this + 0x58);
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    if ((((ulonglong)FVar19 <= &local_1b0) &&
        (&local_1b0 <
         (double *)((longlong)FVar19 + (longlong)*(int *)((longlong)FVar5 + 0xcc) * 0x18))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)((longlong)FVar5 + 200);
    if (iVar17 == *(int *)((longlong)FVar5 + 0xcc)) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                         (0x818,(ForElementType<UE::Math::TVector<double>_> *)FVar5,
                          (int *)((longlong)FVar5 + 0xcc));
    }
    *(int *)((longlong)FVar5 + 200) = iVar17 + 1;
    FVar19 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0);
    if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)FVar5 + 0xc0) ==
        (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar19 = FVar5;
    }
    pdVar2 = (double *)((longlong)FVar19 + (longlong)iVar17 * 0x18);
    *pdVar2 = local_1b0;
    pdVar2[1] = dStack_1a8;
    *(double *)((longlong)FVar19 + 0x10 + (longlong)iVar17 * 0x18) = local_1a0;
LAB_143457d92:
    pFVar6 = *(ForAnyElementType **)((longlong)this + 0x68);
    local_1c0 = local_200;
    iStack_1bc = local_218;
    local_1b8 = uVar26;
    if (((pFVar6->Data <= (FScriptContainerElement *)&local_1c0) &&
        ((FScriptContainerElement *)&local_1c0 <
         pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0xc)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)&pFVar6[1].Data;
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,pFVar6,piVar1);
    }
    *(int *)&pFVar6[1].Data = iVar17 + 1;
    pFVar7 = pFVar6->Data;
    *(ulonglong *)(pFVar7 + (longlong)iVar17 * 0xc) = CONCAT44(iStack_1bc,local_1c0);
    *(uint *)(pFVar7 + (longlong)iVar17 * 0xc + 8) = local_1b8;
  }
  return;
}

// operator() @ 14345f190

void __thiscall
``UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>::operator()'::__l5::<lambda_1>
::operator()(void *this,int param_1)

{
  float *pfVar1;
  longlong lVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fStack_14;
  
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x70) == '\0') {
    fStack_14 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
  }
  else {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    pfVar1 = (float *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    uVar5 = *pfVar1;
    fStack_14 = pfVar1[1];
    uVar4 = *(float *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  }
  pdVar3 = *(double **)this;
  pdVar3[1] = (double)fStack_14 + pdVar3[1];
  *pdVar3 = (double)(float)uVar5 + *pdVar3;
  pdVar3[2] = (double)(float)uVar4 + pdVar3[2];
  return;
}

// `scalar_deleting_destructor' @ 143463830

void * __thiscall
UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>::_scalar_deleting_destructor_
          (FDynamicMeshTriangleAttributeChange<int,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
  pFVar1 = (this->NewTriangleAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldTriangleAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434638a0

void * __thiscall
UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::_scalar_deleting_destructor_
          (TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeSetBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->RegisteredAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434638f0

void * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int>::
_scalar_deleting_destructor_
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463940

void * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>::
_scalar_deleting_destructor_
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463990

void * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_>::
_scalar_deleting_destructor_
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434639e0

void * __thiscall
UE::Geometry::TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName>::
_scalar_deleting_destructor_
          (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463a30

void * __thiscall
UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>::_scalar_deleting_destructor_
          (TDynamicMeshScalarTriangleAttribute<int> *this,uint param_1)

{
  TDynamicVector<int,512>::Empty((TDynamicVector<int,512> *)&this->field_0x18,0);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  *(undefined ***)this = &___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463aa0

void * __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::_scalar_deleting_destructor_
          (TDynamicMeshTriangleAttribute<int,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  TDynamicVector<int,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463b10

void * __thiscall
UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::
_scalar_deleting_destructor_
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *this,uint param_1)

{
  TDynamicMeshOverlay<float,2>::~TDynamicMeshOverlay<float,2>((TDynamicMeshOverlay<float,2> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463b50

void * __thiscall
UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
_scalar_deleting_destructor_
          (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this,uint param_1)

{
  TDynamicMeshOverlay<float,3>::~TDynamicMeshOverlay<float,3>((TDynamicMeshOverlay<float,3> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463b90

void * __thiscall
UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>::
_scalar_deleting_destructor_
          (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *this,uint param_1)

{
  TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>((TDynamicMeshOverlay<float,4> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463bd0

void * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::
_scalar_deleting_destructor_
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<float,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463c40

void * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::
_scalar_deleting_destructor_
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<float,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463cb0

void * __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::
_scalar_deleting_destructor_
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<double,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463d20

void * __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3>::
_scalar_deleting_destructor_
          (TDynamicVertexAttributeChange<float,1,UE::Geometry::FDynamicMesh3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->NewVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463d90

void * __thiscall
UE::Geometry::TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3>::
_scalar_deleting_destructor_
          (TDynamicVertexAttributeChange<float,3,UE::Geometry::FDynamicMesh3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->NewVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463e00

void * __thiscall
UE::Geometry::TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3>::
_scalar_deleting_destructor_
          (TDynamicVertexAttributeChange<double,3,UE::Geometry::FDynamicMesh3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexAttributeChange_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  pFVar1 = (this->NewVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldVertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeChangeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463e70

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*>'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463ee0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_*>'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463f50

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*>'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143463fc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*>'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464000

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_*>'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464040

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::Geometry::FDynamicMeshAttributeSet::SplitAllBowties'::__l2::<lambda_1>::operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>_*>'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464080

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(int),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434640c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434641c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434642c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434643c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434644c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434645c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__TrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_UFIndex3i_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__UEBA_NPEBVFColliderMesh_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434646c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434647c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434648c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434649c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__4__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`5'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_3>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_H_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_M_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_00_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_01_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_02_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__8__CheckValidity___TDynamicMeshOverlay_N_03_Geometry_UE__QEBA_N_NW4EValidityCheckFailMode_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143464fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::CheckValidity'::`9'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FDynamicMeshChange::CheckValidity'::`9'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434650c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeEdgeMidpointsAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434651c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_5>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_5>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_6>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434652c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakePointsAdapter'::`2'::<lambda_6>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeTriCentroidsAdapter'::`2'::<lambda_6>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_6>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeVerticesAdapter'::`2'::<lambda_6>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_7>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_7>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434653c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_8>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_8>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_9>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::MakeDynamicMeshAdapter'::`2'::<lambda_9>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465440

void * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::_scalar_deleting_destructor_
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,uint param_1)

{
  ~TMeshAABBTree3<UE::Geometry::FColliderMesh>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143465480

void * __thiscall
UE::Geometry::FDynamicMesh3::_scalar_deleting_destructor_(FDynamicMesh3 *this,uint param_1)

{
  ~FDynamicMesh3(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1434654c0

void * __thiscall
UE::Geometry::FDynamicMeshAttributeSet::_scalar_deleting_destructor_
          (FDynamicMeshAttributeSet *this,uint param_1)

{
  ~FDynamicMeshAttributeSet(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// ComputeFaceTangent @ 1434932b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ComputeFaceTangent(TVector<double> *param_1,TVector2<float> *param_2,TVector<double> *param_3,
                  TVector<double> *param_4,TVector2<double> *param_5,double *param_6,bool *param_7)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  double local_c8;
  double dStack_c0;
  double local_b8;
  
  uVar10 = __xmm_80000000000000008000000000000000._4_4_;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  dVar5 = __real_3ff0000000000000;
  dVar19 = param_1[1].field0_0x0._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar4 = param_1[2].field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar16 = param_1[1].field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar2 = (double)(param_2->field0_0x0)._s_0.X;
  dVar17 = param_1[1].field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar7 = param_1[2].field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar8 = param_1[2].field0_0x0._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar14 = (double)(param_2->field0_0x0)._s_0.Y;
  dVar20 = (double)param_2[2].field0_0x0._s_0.Y - dVar14;
  dVar6 = (double)param_2[2].field0_0x0._s_0.X - dVar2;
  dVar14 = (double)param_2[1].field0_0x0._s_0.Y - dVar14;
  dVar2 = (double)param_2[1].field0_0x0._s_0.X - dVar2;
  local_c8 = dVar17 * dVar20 - dVar4 * dVar14;
  dStack_c0 = dVar16 * dVar20 - dVar7 * dVar14;
  dVar15 = dVar19 * dVar20 - dVar8 * dVar14;
  uVar11 = SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  auVar21._0_8_ = dVar19 * (double)CONCAT44(uVar12,uVar11);
  auVar21._8_8_ = 0;
  dVar6 = dVar20 * dVar2 - dVar6 * dVar14;
  auVar18._0_8_ = dVar16 * (double)CONCAT44(uVar12,uVar11);
  auVar18._8_8_ = 0;
  uVar23 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar24 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar14 = dVar8 * dVar2 + auVar21._0_8_;
  dVar4 = dVar17 * (double)CONCAT44(uVar12,uVar11) + dVar4 * dVar2;
  dVar2 = dVar7 * dVar2 + auVar18._0_8_;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = dStack_c0 * dStack_c0 + local_c8 * local_c8 + dVar15 * dVar15;
  auVar22 = sqrtpd(auVar21,auVar22);
  dVar20 = auVar22._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2 * dVar2 + dVar4 * dVar4 + dVar14 * dVar14;
  auVar22 = sqrtpd(auVar18,auVar3);
  if (dVar20 <= 0.0) {
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_b8 = __real_3ff0000000000000 / dVar20;
    local_c8 = local_b8 * local_c8;
    dStack_c0 = local_b8 * dStack_c0;
    local_b8 = local_b8 * dVar15;
  }
  dVar17 = auVar22._0_8_;
  (param_3->field0_0x0)._s_0.X = local_c8;
  (param_3->field0_0x0)._s_0.Y = dStack_c0;
  (param_3->field0_0x0)._s_0.Z = local_b8;
  if (dVar17 <= 0.0) {
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_b8 = dVar5 / dVar17;
    local_c8 = local_b8 * dVar4;
    dStack_c0 = local_b8 * dVar2;
    local_b8 = local_b8 * dVar14;
  }
  dVar5 = dVar5 / (double)CONCAT44(uVar24,uVar23);
  (param_4->field0_0x0)._s_0.X = local_c8;
  (param_4->field0_0x0)._s_0.Y = dStack_c0;
  (param_4->field0_0x0)._s_0.Z = local_b8;
  (param_5->field0_0x0)._s_0.X = dVar5 * dVar20;
  (param_5->field0_0x0)._s_0.Y = dVar5 * dVar17;
  if (dVar6 < 0.0) {
    *param_6 = -1.0;
    uVar11 = *(uint *)((longlong)&param_3->field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar12 = *(uint *)((longlong)&param_3->field0_0x0 + 8) ^ _UNK_15066df78;
    uVar13 = *(uint *)((longlong)&param_3->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&param_3->field0_0x0 =
         *(uint *)&param_3->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_3->field0_0x0 + 4) = uVar11;
    *(uint *)((longlong)&param_3->field0_0x0 + 8) = uVar12;
    *(uint *)((longlong)&param_3->field0_0x0 + 0xc) = uVar13;
    uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar10,(uint)uVar1 ^ uVar9);
    uVar11 = *(uint *)((longlong)&param_4->field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar12 = *(uint *)((longlong)&param_4->field0_0x0 + 8) ^ _UNK_15066df78;
    uVar13 = *(uint *)((longlong)&param_4->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&param_4->field0_0x0 =
         *(uint *)&param_4->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_4->field0_0x0 + 4) = uVar11;
    *(uint *)((longlong)&param_4->field0_0x0 + 8) = uVar12;
    *(uint *)((longlong)&param_4->field0_0x0 + 0xc) = uVar13;
    uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 0x10);
    (param_4->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar10,(uint)uVar1 ^ uVar9);
  }
  else {
    *param_6 = 1.0;
  }
  *param_7 = (double)CONCAT44(uVar24,uVar23) < __real_3e45798ee2308c3a;
  return;
}

// FindTriOtherVtx @ 1434b9710

int __cdecl
IndexUtil::FindTriOtherVtx
          (int param_1,int param_2,TDynamicVector<UE::Geometry::FIndex3i,512> *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar4 = 0;
  lVar1 = *(longlong *)
           ((param_3->Blocks).AllocatorInstance.Data + (ulonglong)((uint)param_4 >> 9) * 8) +
          (ulonglong)(param_4 & 0x1ff) * 0xc;
  iVar5 = 1;
  uVar6 = uVar4;
  while( true ) {
    iVar2 = *(int *)(lVar1 + (longlong)
                             (iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                                      (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4);
    iVar3 = *(int *)(lVar1 + uVar4 * 4);
    if (((param_1 == iVar3) || (bVar7 = param_1 == iVar2, iVar2 = iVar3, bVar7)) &&
       (param_2 == iVar2)) break;
    uVar6 = (ulonglong)((int)uVar6 + 1);
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 + 1;
    if (2 < (longlong)uVar4) {
      return -1;
    }
  }
  iVar5 = (int)uVar6 + 2;
  return *(int *)(lVar1 + (longlong)
                          (iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                                   (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) &
                                         0xffffffffU) >> 0x1f)) * -3) * 4);
}

// ParallelFor @ 143513ea0

void __cdecl
ParallelFor(int param_1,TFunctionRef<void___cdecl(int)> *param_2,bool param_3,bool param_4)

{
  <lambda_1> local_res18;
  TArrayView<std::nullptr_t,int> local_28;
  TFunctionRef<void___cdecl(int)> local_18;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1,1,&local_18,local_res18,(uint)param_4 << 2 | (uint)param_3,
             &local_28);
  return;
}

// PlaneProjectionNormalized @ 143513f10

TVector<double> * __cdecl
PlaneProjectionNormalized
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = dVar2 * (param_2->field0_0x0)._s_0.Y + dVar1 * (param_2->field0_0x0)._s_0.X +
          dVar3 * (param_2->field0_0x0)._s_0.Z;
  dVar1 = dVar1 - dVar6 * (param_2->field0_0x0)._s_0.X;
  dVar2 = dVar2 - dVar6 * (param_2->field0_0x0)._s_0.Y;
  dVar3 = dVar3 - dVar6 * (param_2->field0_0x0)._s_0.Z;
  dVar6 = 0.0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  auVar5 = sqrtpd(in_XMM3,auVar5);
  if (auVar5._0_8_ <= 0.0) {
    dVar2 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = __real_3ff0000000000000 / auVar5._0_8_;
    dVar6 = dVar4 * dVar3;
    dVar2 = dVar4 * dVar2;
    dVar4 = dVar4 * dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
  return __return_storage_ptr__;
}

// `dynamic_atexit_destructor_for_'CVarDynamicMeshDebugMeshesEnabled'' @ 150361840

void __cdecl _dynamic_atexit_destructor_for__CVarDynamicMeshDebugMeshesEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicMeshDebugMeshesEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'DynamicMeshClearDebugMeshesCmd'' @ 150361860

void __cdecl _dynamic_atexit_destructor_for__DynamicMeshClearDebugMeshesCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DynamicMeshClearDebugMeshesCmd);
  return;
}

// operator() @ 15049f020

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f060

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f0a0

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f0e0

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f120

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f160

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f1a0

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f1e0

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f220

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f260

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f2a0

bool __thiscall
``UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<515913515999954680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<515913515999954680>,
                       &`public:___cdecl_`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity(bool,UE::Geometry::EValidityCheckFailMode)const___ptr64'::`9'::<lambda_3>::operator()(bool)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f2e0

bool __thiscall
``UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3119874908218194718>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3119874908218194718>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049f320

bool __thiscall
``UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1327787060794229656>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1327787060794229656>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

