// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FUpdatableInstanceDataSceneProxy @ 147cc8f40

void __thiscall
FUpdatableInstanceDataSceneProxy::~FUpdatableInstanceDataSceneProxy
          (FUpdatableInstanceDataSceneProxy *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  FTaskBase *pFVar4;
  
  pFVar3 = (this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->InstanceDataUpdateTaskInfo).UpdateTaskHandle.Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7FInstanceDataSceneProxy__6B_;
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  FInstanceSceneDataBuffers::~FInstanceSceneDataBuffers
            ((FInstanceSceneDataBuffers *)&this->_padding_);
  return;
}

// Build @ 147cdc150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUpdatableInstanceDataSceneProxy::Build
          (FUpdatableInstanceDataSceneProxy *this,FInstanceUpdateChangeSet *param_1)

{
  int *piVar1;
  FPrecomputedInstanceSpatialHashData *pFVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  FAccessTag FVar4;
  FAccessTag FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FIdentityIndexRemap local_res8 [8];
  FIdentityIndexRemap local_res10 [8];
  FIdentityIndexRemap local_res18 [8];
  uint local_res20;
  EKind EStackX_24;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TReferenceControllerBase<1> *local_d8;
  FSharedReferencer<1> FStack_d0;
  FSrcIndexRemap local_c8 [2];
  FWriteView local_b8;
  
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  if (param_1->bNeedFullUpdate == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChangeSet.IsFullUpdate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                       ,0x96,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EStackX_24 = Writer;
  uVar7 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  local_res20 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_res20 = local_res20 >> 0x10 ^ local_res20;
  FVar4.Kind = Writer;
  FVar4.WriterTag = local_res20;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_b8,FVar4);
  *local_b8.Flags = param_1->Flags;
  if ((param_1->PrecomputedOptimizationData).Object == (FPrecomputedInstanceSpatialHashData *)0x0) {
    UpdateIdMapping<FIdentityIndexRemap>(param_1,local_res10,&this->InstanceIdIndexMap);
    iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
    piVar1 = &(this->InstanceIdIndexMap).NumInstances;
    if (iVar8 == 0) {
      iVar8 = *piVar1;
    }
    if (param_1->NumSourceInstances != iVar8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.NumSourceInstances == InstanceIdIndexMap.GetMaxInstanceIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                         ,0xc0,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
    if (iVar8 == 0) {
      iVar8 = *piVar1;
    }
    ApplyDataChanges<FIdentityIndexRemap>(param_1,local_res18,iVar8,&local_b8);
  }
  else {
    FInstanceIdIndexMap::Reset(&this->InstanceIdIndexMap,param_1->NumSourceInstances);
    if ((param_1->PrecomputedOptimizationData).Object == (FPrecomputedInstanceSpatialHashData *)0x0)
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->PrecomputedOptimizationData).Object;
    if ((pFVar2->ProxyIndexToComponentIndexRemap).ArrayNum == 0) {
      iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->InstanceIdIndexMap).NumInstances;
      }
      ApplyDataChanges<FIdentityIndexRemap>(param_1,local_res8,iVar8,&local_b8);
    }
    else {
      if (pFVar2 == (FPrecomputedInstanceSpatialHashData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
      local_c8[0].IndexRemap =
           &((param_1->PrecomputedOptimizationData).Object)->ProxyIndexToComponentIndexRemap;
      if (iVar8 == 0) {
        iVar8 = (this->InstanceIdIndexMap).NumInstances;
      }
      ApplyDataChanges<FSrcIndexRemap>(param_1,local_c8,iVar8,&local_b8);
    }
    if ((param_1->PrecomputedOptimizationData).Object == (FPrecomputedInstanceSpatialHashData *)0x0)
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->PrecomputedOptimizationData).Object;
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    iVar8 = (pFVar2->Hashes).ArrayNum;
    _Src = (pFVar2->Hashes).AllocatorInstance.Data;
    local_e0 = CONCAT44(local_e0._4_4_,iVar8);
    if (iVar8 == 0) {
      local_e0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar8,0,&local_e8,iVar8,(int *)((longlong)&local_e0 + 4));
      memcpy(local_e8.Data,_Src,(longlong)iVar8 * 0x28);
    }
    if (((local_b8.AccessTag.Kind != Reader) || (*(int *)((longlong)&this->_padding_ + 4) != 0)) &&
       ((local_b8.AccessTag.Kind != Writer ||
        (*(uint *)((longlong)&this->_padding_ + 4) != local_b8.AccessTag.WriterTag)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(ushort *)&this->_padding_ = (ushort)this->_padding_ & 0xfbff;
    *(ushort *)&this->_padding_ =
         (ushort)this->_padding_ | -(ushort)(local_e0._0_4_ != (atomic<int>)0x0) & 0x400;
    FStack_d0.ReferenceController = ::operator_new(0x20);
    if (FStack_d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_d8 = ___xmm_00000000000000000000000000000010;
      pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_d0.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_d0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10 = FStack_d0.ReferenceController + 1;
      (FStack_d0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_d0.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFInstanceSceneDataImmutable___00_SharedPointerInternals__6B_
      ;
      FStack_d0.ReferenceController[1]._padding_ = (longlong)local_e8.Data;
      local_e8.Data = (FScriptContainerElement *)0x0;
      FStack_d0.ReferenceController[1].SharedReferenceCount = local_e0._0_4_;
      FStack_d0.ReferenceController[1].WeakReferenceCount = local_e0._4_4_;
      local_e0 = 0;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      (FStack_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar9 = FStack_d0.ReferenceController;
      local_d8 = pTVar10;
    }
    if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_d8) {
      this->_padding_ = (longlong)pTVar10;
      local_d8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
  }
  FVar5.Kind = EStackX_24;
  FVar5.WriterTag = local_res20;
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar5);
  FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
  FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
  return;
}

// GetUpdateTaskInfo @ 147d10060

FInstanceDataUpdateTaskInfo * __thiscall
FUpdatableInstanceDataSceneProxy::GetUpdateTaskInfo(FUpdatableInstanceDataSceneProxy *this)

{
  return &this->InstanceDataUpdateTaskInfo;
}

// Update @ 147d34c20

void __thiscall
FUpdatableInstanceDataSceneProxy::Update
          (FUpdatableInstanceDataSceneProxy *this,FInstanceUpdateChangeSet *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  FAccessTag FVar4;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  bool bVar17;
  FIdentityIndexRemap local_res8 [8];
  FInstanceUpdateChangeSet *local_res10;
  FIdentityIndexRemap local_res18 [8];
  FAccessTag local_res20;
  uint local_12c;
  int iStack_128;
  FAnyValidIterator<9> local_120;
  FInstanceUpdateChangeSet *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined4 uStack_f4;
  int local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  FWriteView local_c8;
  
  local_res10 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FISMCInstanceDataSceneProxy_Update");
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FUpdatableInstanceDataSceneProxy::Update(FInstanceUpdateChangeSet&&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId85,"FISMCInstanceDataSceneProxy_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
               ,0x55);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FUpdatableInstanceDataSceneProxy::Update(FInstanceUpdateChangeSet&&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId85);
  }
  if ((param_1->bNeedFullUpdate != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ChangeSet.IsFullUpdate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                         ,0x56,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  local_res20.Kind = Writer;
  local_res20.WriterTag = uVar11 >> 0x10 ^ uVar11;
  FVar4 = local_res20;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_c8,local_res20);
  *local_c8.Flags = param_1->Flags;
  local_f0 = param_1->NumSourceInstances;
  if ((param_1->bNeedFullUpdate == false) &&
     ((param_1->InstanceAttributeTracker).NumChanged[0] +
      (param_1->InstanceAttributeTracker).NumChanged[3] != local_f0)) {
    iVar8 = (param_1->InstanceAttributeTracker).FirstChangedIndex;
    if ((param_1->InstanceAttributeTracker).MaxIndex < iVar8) {
      iVar8 = (param_1->InstanceAttributeTracker).MaxIndex;
    }
    uVar14 = iVar8 >> 0x1f & 7;
    uVar11 = iVar8 + uVar14;
    iVar8 = (uVar11 & 7) - uVar14;
    uVar11 = (int)uVar11 >> 3;
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar11);
    local_res20 = (FAccessTag)&(param_1->InstanceAttributeTracker).Data.ArrayNum;
    local_108 = param_1;
    local_f8 = iVar8;
    if (((int)uVar11 < 0) || (*(int *)local_res20 <= (int)uVar11)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if ((int)uVar11 < *(int *)local_res20) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = *(uint *)((param_1->InstanceAttributeTracker).Data.AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 4) & 0x99999999;
    }
    uVar14 = uVar14 >> ((char)iVar8 * '\x04' & 0x1fU);
    iVar12 = (param_1->InstanceAttributeTracker).Data.ArrayNum;
    uStack_100 = CONCAT44(uVar14,(int)uStack_100);
    if ((int)uVar11 < iVar12) {
LAB_147d34e40:
      if (uVar14 == 0) {
        uVar11 = uVar11 + 1;
        iVar8 = 0;
        local_f8 = 0;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar11);
        if ((int)uVar11 < iVar12) goto code_r0x000147d34e57;
        uStack_100 = (ulonglong)uVar11;
      }
      else {
        local_ec = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> local_ec & 1) == 0; local_ec = local_ec + 1) {
          }
        }
        uVar11 = 0x20;
        if (uVar14 != 0) {
          uVar11 = local_ec;
        }
        local_f8 = iVar8 + (uVar11 >> 2);
        uStack_100 = CONCAT44(uVar14 >> ((char)(uVar11 >> 2) * '\x04' & 0x1fU),(int)uStack_100);
      }
    }
LAB_147d34eec:
    bVar7 = true;
    local_120._16_8_ = CONCAT44(uStack_f4,local_f8);
    local_120.CurrentElement = uStack_100._4_4_;
    local_12c = 0;
    iStack_128 = 0;
    local_120.ElementIndex = (int)uStack_100;
    local_120.Tracker = &local_108->InstanceAttributeTracker;
  }
  else {
    bVar7 = false;
    local_120.Tracker = (FInstanceAttributeTracker *)0x0;
    local_120.ElementIndex = 0;
    local_120._16_8_ = (ulonglong)(uint)local_120._20_4_ << 0x20;
    local_12c = 0;
    iStack_128 = local_f0;
  }
LAB_147d34f47:
  if (!bVar7) goto LAB_147d34f6e;
  iVar8 = ((FInstanceAttributeTracker *)&(local_120.Tracker)->Data)->LastChangedIndex + 1;
  if (((FInstanceAttributeTracker *)&(local_120.Tracker)->Data)->MaxIndex < iVar8) {
    iVar8 = ((FInstanceAttributeTracker *)&(local_120.Tracker)->Data)->MaxIndex;
  }
  iVar12 = local_120.ElementOffset + local_120.ElementIndex * 8;
  bVar17 = SBORROW4(iVar12,iVar8);
  iVar12 = iVar12 - iVar8;
  do {
    if (bVar17 == iVar12 < 0) {
      UpdateIdMapping<FIdentityIndexRemap>(param_1,local_res8,&this->InstanceIdIndexMap);
      iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->InstanceIdIndexMap).NumInstances;
      }
      if ((param_1->NumSourceInstances != iVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChangeSet.NumSourceInstances == InstanceIdIndexMap.GetMaxInstanceIndex()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataManager.cpp"
                             ,0x87,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ApplyDataChanges<FIdentityIndexRemap>(param_1,local_res18,local_f0,&local_c8);
      FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar4)
      ;
      FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
      FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
    uVar11 = local_12c;
    if (bVar7) {
      uVar11 = local_120.ElementOffset + local_120.ElementIndex * 8;
    }
    uVar14 = FInstanceAttributeTracker::GetFlags(&param_1->InstanceAttributeTracker,uVar11);
    if ((uVar14 & 1) == 0) {
      uVar14 = uVar11;
      if (param_1->bIdentityIdMap == false) {
        uVar14 = 0;
        if ((int)local_12c < (param_1->IndexToIdMapDeltaData).ArrayNum) {
          uVar14 = ~local_12c >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar14 = *(uint *)((param_1->IndexToIdMapDeltaData).AllocatorInstance.Data +
                          (longlong)(int)local_12c * 4);
      }
      if (-1 < (int)uVar14) {
        iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
        piVar13 = &(this->InstanceIdIndexMap).NumInstances;
        if (iVar8 != 0) {
          piVar13 = &(this->InstanceIdIndexMap).IdToIndexMap.ArrayNum;
        }
        if ((int)uVar14 < *piVar13) {
          if (iVar8 == 0) {
            local_res20 = (FAccessTag)&(this->InstanceIdIndexMap).IdToIndexMap;
          }
          else {
            local_res20 = (FAccessTag)&(this->InstanceIdIndexMap).IdToIndexMap;
            uVar9 = 0;
            if ((int)uVar14 < (this->InstanceIdIndexMap).IdToIndexMap.ArrayNum) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if (uVar9 == 0) {
              local_res20 = (FAccessTag)&(this->InstanceIdIndexMap).IdToIndexMap;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (*(int *)((this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data +
                        (longlong)(int)uVar14 * 4) == -1) goto LAB_147d35384;
          }
          if ((this->InstanceIdIndexMap).IndexToIdMap.ArrayNum != 0) {
            uVar9 = 0;
            if ((int)uVar14 < (this->InstanceIdIndexMap).IdToIndexMap.ArrayNum) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar14 = *(uint *)(*(longlong *)local_res20 + (longlong)(int)uVar14 * 4);
          }
          local_res20 = (FAccessTag)local_c8.InstanceToPrimitiveRelative;
          uVar9 = 0;
          if ((int)uVar14 < (local_c8.InstanceToPrimitiveRelative)->ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar6 = local_c8.InstanceToPrimitiveRelative;
          lVar10 = (longlong)(int)uVar14;
          pFVar1 = ((ForAnyElementType *)local_res20)->Data;
          pFVar15 = pFVar1 + lVar10 * 0x30;
          local_e8 = *(undefined4 *)pFVar15;
          uStack_e4 = *(undefined4 *)(pFVar15 + 4);
          uStack_e0 = *(undefined4 *)(pFVar15 + 8);
          uStack_dc = *(undefined4 *)(pFVar15 + 0xc);
          pFVar15 = pFVar1 + lVar10 * 0x30 + 0x10;
          local_d8 = *(undefined4 *)pFVar15;
          uStack_d4 = *(undefined4 *)(pFVar15 + 4);
          uStack_d0 = *(undefined4 *)(pFVar15 + 8);
          uStack_cc = *(undefined4 *)(pFVar15 + 0xc);
          local_108 = *(FInstanceUpdateChangeSet **)(pFVar1 + lVar10 * 0x30 + 0x20);
          uStack_100 = *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x20 + 8);
          local_res20.WriterTag = ~uVar11 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar11 < (local_c8.InstanceToPrimitiveRelative)->ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar10 = (longlong)(int)uVar11;
          pFVar1 = (pTVar6->AllocatorInstance).Data;
          pFVar15 = pFVar1 + lVar10 * 0x30;
          *(undefined4 *)pFVar15 = local_e8;
          *(undefined4 *)(pFVar15 + 4) = uStack_e4;
          *(undefined4 *)(pFVar15 + 8) = uStack_e0;
          *(undefined4 *)(pFVar15 + 0xc) = uStack_dc;
          *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x10) = CONCAT44(uStack_d4,local_d8);
          *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x10 + 8) = CONCAT44(uStack_cc,uStack_d0);
          *(FInstanceUpdateChangeSet **)(pFVar1 + lVar10 * 0x30 + 0x20) = local_108;
          *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x20 + 8) = uStack_100;
          CondMove<float>((bool)(*(byte *)&local_res10->Flags >> 1 & 1),local_c8.InstanceCustomData,
                          uVar14,uVar11,local_res10->NumCustomDataFloats);
          CondMove<float>((bool)(*(byte *)&local_res10->Flags & 1),local_c8.InstanceRandomIDs,uVar14
                          ,uVar11,1);
          pTVar5 = local_c8.InstanceLightShadowUVBias;
          param_1 = local_res10;
          if ((*(byte *)&local_res10->Flags >> 4 & 1) != 0) {
            uVar9 = 0;
            if ((int)uVar14 < (local_c8.InstanceLightShadowUVBias)->ArrayNum) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar15 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
            uVar14 = 0;
            if ((int)uVar11 < pTVar5->ArrayNum) {
              uVar14 = local_res20.WriterTag;
            }
            if ((uVar14 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar3 = *(undefined8 *)(pFVar15 + 8);
            pFVar1 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
            *(undefined8 *)pFVar1 = *(undefined8 *)pFVar15;
            *(undefined8 *)(pFVar1 + 8) = uVar3;
            param_1 = local_res10;
          }
        }
      }
    }
LAB_147d35384:
    local_12c = local_12c + 1;
    if (bVar7) goto code_r0x000147d35393;
LAB_147d34f6e:
    bVar17 = SBORROW4(local_12c,iStack_128);
    iVar12 = local_12c - iStack_128;
  } while( true );
code_r0x000147d34e57:
  if (((int)uVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = *(uint *)((param_1->InstanceAttributeTracker).Data.AllocatorInstance.Data +
                   (longlong)(int)uVar11 * 4);
  uVar14 = uVar9 & 0x99999999;
  uStack_100 = CONCAT44(uVar9,(int)uStack_100) & 0x99999999ffffffff;
  iVar12 = *(int *)local_res20;
  if (iVar12 <= (int)uVar11) goto LAB_147d34eec;
  goto LAB_147d34e40;
code_r0x000147d35393:
  local_120.CurrentElement = local_120.CurrentElement & 0xfffffff6;
  FInstanceAttributeTracker::FAnyValidIterator<9>::AdvanceUntilAny(&local_120);
  goto LAB_147d34f47;
}

